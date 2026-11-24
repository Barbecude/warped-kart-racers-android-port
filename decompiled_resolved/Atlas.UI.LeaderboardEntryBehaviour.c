// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.LeaderboardEntryBehaviour

// ============================================================
// RVA: 0x15ebbe0 | Atlas.UI.LeaderboardEntryBehaviour.get_RootCanvasGroup
// ============================================================

undefined8 Atlas_UI_LeaderboardEntryBehaviour__get_RootCanvasGroup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x15ebbe8 | Atlas.UI.LeaderboardEntryBehaviour.get_CharacterRepresentation
// ============================================================

undefined8 Atlas_UI_LeaderboardEntryBehaviour__get_CharacterRepresentation(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x15ebbf0 | Atlas.UI.LeaderboardEntryBehaviour.get_PositionText
// ============================================================

undefined8 Atlas_UI_LeaderboardEntryBehaviour__get_PositionText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x15ebbf8 | Atlas.UI.LeaderboardEntryBehaviour.get_AutoDriveHighlight
// ============================================================

undefined8 Atlas_UI_LeaderboardEntryBehaviour__get_AutoDriveHighlight(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// ============================================================
// RVA: 0x15ebc00 | Atlas.UI.LeaderboardEntryBehaviour.get_Background
// ============================================================

undefined8 Atlas_UI_LeaderboardEntryBehaviour__get_Background(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// ============================================================
// RVA: 0x15ebc08 | Atlas.UI.LeaderboardEntryBehaviour.get_StandardSprite
// ============================================================

undefined8 Atlas_UI_LeaderboardEntryBehaviour__get_StandardSprite(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



// ============================================================
// RVA: 0x15ebc10 | Atlas.UI.LeaderboardEntryBehaviour.get_HighlightedSprite
// ============================================================

undefined8 Atlas_UI_LeaderboardEntryBehaviour__get_HighlightedSprite(long param_1)

{
  return *(undefined8 *)(param_1 + 0x158);
}



// ============================================================
// RVA: 0x15ebc18 | Atlas.UI.LeaderboardEntryBehaviour.get_TweenLeaf
// ============================================================

undefined8 Atlas_UI_LeaderboardEntryBehaviour__get_TweenLeaf(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



// ============================================================
// RVA: 0x15ebc20 | Atlas.UI.LeaderboardEntryBehaviour.SetUp
// ============================================================

/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ec6b8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_LeaderboardEntryBehaviour__SetUp
                 (undefined1 param_1 [16],uint param_2,float param_3,long param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *****pppppuVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar17;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 extraout_b0_05;
  undefined1 extraout_b0_06;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar18;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 uVar19;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 uVar20;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  ulong unaff_d8;
  ulong uVar25;
  float fVar26;
  ulong unaff_d9;
  ulong uVar27;
  ulong unaff_d10;
  ulong uVar28;
  undefined8 unaff_d11;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  undefined8 ****ppppuStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [12];
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  puStack_48 = (undefined *)0x0;
  ppuStack_50 = (undefined8 **)0x0;
  /*Atlas.UI.LeaderboardEntryBehaviour$$SetStatActive*/ func_0x015ebc70(param_4,&ppuStack_50,0);
  /*Atlas.UI.LeaderboardEntryBehaviour$$SetPlacingIconActive*/ func_0x015ebccc(param_4,0,0);
  if ((*(long *)(param_4 + 0x50) != 0) && (lVar10 = *(long *)(param_4 + 0x18), lVar10 != 0)) {
    fVar24 = *(float *)(param_4 + 0x68);
    unaff_d8 = (ulong)(uint)fVar24;
    fVar26 = *(float *)(param_4 + 0x58);
    unaff_d9 = (ulong)(uint)fVar26;
    param_3 = *(float *)(*(long *)(param_4 + 0x50) + 0xdc);
    unaff_d10 = (ulong)(uint)param_3;
    /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar10,0);
    param_3 = param_3 * 0.5;
    /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(SUB41(fVar24 + fVar26 + param_3,0),lVar10,0);
    plVar5 = *(long **)(param_4 + 0x48);
    if (plVar5 != (long *)0x0) {
      fVar24 = 1.0 - *(float *)(param_4 + 0x68) /
                     (*(float *)(param_4 + 0x68) + *(float *)(param_4 + 0x58));
      if (_UNK_033f8758 < ABS(*(float *)((long)plVar5 + 0x144) - fVar24)) {
        *(float *)((long)plVar5 + 0x144) = fVar24;
                    /* WARNING: Could not recover jumptable at 0x02f8b04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar5 = (long *)(**(code **)(*plVar5 + 0x2f8))(plVar5,*(undefined8 *)(*plVar5 + 0x300));
        return plVar5;
      }
      return plVar5;
    }
  }
  auVar29 = func_0x00f78af4();
  puStack_48 = &Atlas_UI_LeaderboardEntryBehaviour__SetDeltaStarsActive;
  uVar13 = 0x3d23990;
  ppuStack_50 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5404 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5404 = 1;
  }
  uVar12 = *(undefined8 *)(auVar29._0_8_ + 0x138);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar12,0);
  if ((int)plVar5 == 0) {
    return plVar5;
  }
  lVar10 = *(long *)(auVar29._0_8_ + 0x138);
  if ((lVar10 != 0) && (lVar10 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(lVar10,0), lVar10 != 0)) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar5 = (long *)(*pcRam0000000003ebf4c0)(lVar10,auVar29._8_8_);
    return plVar5;
  }
  auVar32 = func_0x00f78af4();
  uStack_a4 = auVar32._8_4_;
  uStack_a0 = 0x3d23990;
  puStack_78 = &Atlas_UI_LeaderboardEntryBehaviour__SetDeltaStarsText;
  uStack_98 = uVar12;
  pppuStack_80 = &ppuStack_50;
  auStack_90 = auVar29;
  if ((bRam0000000003eb5405 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d66fb0);
    bRam0000000003eb5405 = 1;
  }
  uVar11 = *(ulong *)(auVar32._0_8_ + 0x138);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar11,0);
  if ((int)plVar5 != 0) {
    plVar5 = *(long **)(auVar32._0_8_ + 0x140);
    uVar12 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_a4,0);
    uVar9 = 0;
    uVar12 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('+')*/ uRam0000000003d66fb0,uVar12);
    if (plVar5 == (long *)0x0) {
      auVar29 = func_0x00f78af4();
      puVar2 = &stack0xffffffffffffff00;
      puStack_b8 = &Atlas_UI_LeaderboardEntryBehaviour__PlayCrownSpawnTween;
      pppppuVar14 = &ppppuStack_c0;
      uVar25 = (ulong)(uint)param_3;
      uVar27 = (ulong)param_2;
      uVar28 = (ulong)CONCAT13(extraout_var_13,
                               CONCAT12(extraout_var_06,CONCAT11(extraout_var,extraout_b0)));
      uVar12 = 0x3eb5000;
      uVar21 = param_2;
      fVar24 = param_3;
      ppppuStack_c0 = &pppuStack_80;
      if ((bRam0000000003eb5406 & 1) == 0) {
        func_0x00f78a20(0x3d53528);
        bRam0000000003eb5406 = 1;
      }
      lVar10 = *(long *)(auVar29._0_8_ + 0x38);
      if (lVar10 == 0) {
        puVar16 = &Atlas_UI_LeaderboardEntryBehaviour__StartLargeThenGoNormal;
        auVar30 = func_0x00f78af4();
        lVar10 = auVar30._8_8_;
        auVar31._8_8_ = uVar9;
        auVar31._0_8_ = auVar30._0_8_;
        uVar17 = extraout_b0_00;
        uVar18 = extraout_var_00;
        uVar19 = extraout_var_07;
        uVar20 = extraout_var_14;
      }
      else {
        lVar10 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar10,uRam0000000003d53528);
        uVar13 = 0x3d23990;
        uVar12 = 0x3d23990;
        auVar30._8_8_ = 0;
        auVar30._0_8_ = uVar11;
        puVar2 = auStack_b0;
        pppppuVar14 = (undefined8 *****)ppppuStack_c0;
        puVar16 = puStack_b8;
        uVar17 = extraout_b0;
        uVar18 = extraout_var;
        uVar19 = extraout_var_06;
        uVar20 = extraout_var_13;
        uVar21 = param_2;
        fVar24 = param_3;
        uVar25 = unaff_d8;
        uVar27 = unaff_d9;
        uVar28 = unaff_d10;
        auVar31 = auVar29;
        auVar29 = auVar30;
      }
      while( true ) {
        while( true ) {
          puVar3 = puVar2 + -0x80;
          *(undefined8 *)(puVar2 + -0x80) = unaff_d11;
          *(ulong *)(puVar2 + -0x78) = uVar28;
          *(ulong *)(puVar2 + -0x70) = uVar27;
          *(ulong *)(puVar2 + -0x68) = uVar25;
          *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
          *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
          *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
          *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
          *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
          *(undefined8 *)(puVar2 + -0x30) = uVar13;
          *(undefined8 *)(puVar2 + -0x28) = uVar12;
          *(undefined1 (*) [16])(puVar2 + -0x20) = auVar29;
          *(undefined8 ******)(puVar2 + -0x10) = pppppuVar14;
          *(undefined **)(puVar2 + -8) = puVar16;
          puVar15 = puVar2 + -0x10;
          uVar11 = (ulong)(uint)fVar24;
          unaff_x23 = 0x3d27df8;
          uVar22 = uVar21;
          if ((bRam0000000003eb540e & 1) == 0) {
            func_0x00f78a20(0x3d2db28);
            func_0x00f78a20(0x3d1c100);
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d5e780);
            func_0x00f78a20(0x3d5e7b8);
            func_0x00f78a20(0x3d5e868);
            func_0x00f78a20(0x3d63540);
            func_0x00f78a20(0x3d27df8);
            bRam0000000003eb540e = 1;
          }
          lVar6 = func_0x00f78aec(/*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0_TypeInfo*/ uRam0000000003d27df8);
          /*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0$$.ctor*/ func_0x0155abe8(lVar6,0);
          if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) = lVar10, lVar10 != 0)) {
            /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar10,0);
            uVar13 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
            /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar13,lVar6,uRam0000000003d63540,uRam0000000003d2db28);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar7 = (long *)/*DG.Tweening.DOTween$$To*/ func_0x01694ae4(uVar17,CONCAT13(extraout_var_15,
                                                             CONCAT12(extraout_var_08,
                                                                      CONCAT11(extraout_var_01,
                                                                               extraout_b0_01))),
                                             uVar21,uVar13,0);
            puVar16 = &UNK_015ec164;
            plVar5 = *(long **)(lVar6 + 0x10);
            uVar12 = uRam0000000003d5e868;
            goto code_r0x018eee1c;
          }
          auVar29 = func_0x00f78af4();
          plVar5 = auVar29._0_8_;
          *(undefined8 *)(puVar2 + -0xe0) = unaff_d11;
          *(ulong *)(puVar2 + -0xd8) =
               (ulong)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17)));
          *(ulong *)(puVar2 + -0xd0) = (ulong)uVar21;
          *(ulong *)(puVar2 + -200) = uVar11;
          *(undefined8 *)(puVar2 + -0xc0) = unaff_x24;
          *(undefined8 *)(puVar2 + -0xb8) = 0x3d27df8;
          *(long *)(puVar2 + -0xb0) = lVar6;
          *(long *)(puVar2 + -0xa8) = lVar10;
          *(long *)(puVar2 + -0xa0) = auVar31._8_8_;
          *(long *)(puVar2 + -0x98) = auVar31._0_8_;
          *(undefined1 **)(puVar2 + -0x90) = puVar15;
          *(undefined **)(puVar2 + -0x88) =
               &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerEmphasisTween;
          uVar21 = CONCAT13(extraout_var_16,
                            CONCAT12(extraout_var_09,CONCAT11(extraout_var_02,extraout_b0_02)));
          uVar23 = uVar22;
          fVar26 = fVar24;
          if ((bRam0000000003eb5407 & 1) == 0) {
            func_0x00f78a20(0x3d578e0);
            func_0x00f78a20(0x3d5e780);
            func_0x00f78a20(0x3d5e7b8);
            func_0x00f78a20(0x3d5e868);
            bRam0000000003eb5407 = 1;
          }
          if (plVar5[0x22] != 0) {
            uVar13 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar5[0x22],uRam0000000003d578e0);
            uVar13 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(extraout_b0_02,uVar21,uVar21,uVar22,0,uVar13,0,0);
            uVar13 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(SUB41(fVar24,0),uVar13,uRam0000000003d5e780);
            plVar7 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar13,auVar29._8_8_,uRam0000000003d5e7b8);
            puVar15 = *(undefined1 **)(puVar2 + -0x90);
            puVar16 = *(undefined **)(puVar2 + -0x88);
            auVar31._8_8_ = *(undefined8 *)(puVar2 + -0xa0);
            auVar31._0_8_ = *(undefined8 *)(puVar2 + -0x98);
            lVar6 = *(long *)(puVar2 + -0xb0);
            uVar13 = *(undefined8 *)(puVar2 + -0xa8);
            puVar3 = puVar2 + -0x80;
            uVar12 = uRam0000000003d5e868;
            goto code_r0x018eee1c;
          }
          auVar30 = func_0x00f78af4();
          *(undefined8 *)(puVar2 + -0x130) = unaff_d11;
          *(ulong *)(puVar2 + -0x128) = (ulong)uVar21;
          *(ulong *)(puVar2 + -0x120) = (ulong)uVar22;
          *(ulong *)(puVar2 + -0x118) = (ulong)(uint)fVar24;
          *(long *)(puVar2 + -0x110) = lVar6;
          *(undefined8 *)(puVar2 + -0x108) = 0x3eb5000;
          *(long *)(puVar2 + -0x100) = auVar29._8_8_;
          *(long **)(puVar2 + -0xf8) = plVar5;
          *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0x90;
          *(undefined **)(puVar2 + -0xe8) =
               &Atlas_UI_LeaderboardEntryBehaviour__PlayStarDeltaSpawnTween;
          uVar21 = uVar23;
          fVar24 = fVar26;
          if ((bRam0000000003eb5408 & 1) == 0) {
            func_0x00f78a20(0x3d578e0);
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb5408 = 1;
          }
          uVar13 = *(undefined8 *)(auVar30._0_8_ + 0x138);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar13,0);
          if (iVar4 == 0) {
            return (long *)0x0;
          }
          lVar10 = *(long *)(auVar30._0_8_ + 0x138);
          if (lVar10 == 0) break;
          lVar10 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar10,uRam0000000003d578e0);
          pppppuVar14 = *(undefined8 ******)(puVar2 + -0xf0);
          puVar16 = *(undefined **)(puVar2 + -0xe8);
          auVar29 = *(undefined1 (*) [16])(puVar2 + -0x100);
          uVar13 = *(undefined8 *)(puVar2 + -0x110);
          uVar12 = *(undefined8 *)(puVar2 + -0x108);
          uVar27 = *(ulong *)(puVar2 + -0x120);
          uVar25 = *(ulong *)(puVar2 + -0x118);
          unaff_d11 = *(undefined8 *)(puVar2 + -0x130);
          uVar28 = *(ulong *)(puVar2 + -0x128);
          puVar2 = puVar2 + -0xe0;
          uVar17 = extraout_b0_03;
          uVar18 = extraout_var_03;
          uVar19 = extraout_var_10;
          uVar20 = extraout_var_17;
          uVar21 = uVar23;
          fVar24 = fVar26;
          auVar31 = auVar30;
        }
        auVar31 = func_0x00f78af4();
        *(undefined8 *)(puVar2 + -0x180) = unaff_d11;
        *(ulong *)(puVar2 + -0x178) =
             (ulong)CONCAT13(extraout_var_17,
                             CONCAT12(extraout_var_10,CONCAT11(extraout_var_03,extraout_b0_03)));
        *(ulong *)(puVar2 + -0x170) = (ulong)uVar23;
        *(ulong *)(puVar2 + -0x168) = (ulong)(uint)fVar26;
        *(undefined8 *)(puVar2 + -0x160) = 0x3d23990;
        *(undefined8 *)(puVar2 + -0x158) = uVar13;
        *(undefined1 (*) [16])(puVar2 + -0x150) = auVar30;
        *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0xf0;
        *(undefined **)(puVar2 + -0x138) =
             &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerSpawnTween;
        uVar22 = uVar21;
        fVar26 = fVar24;
        if ((bRam0000000003eb5409 & 1) == 0) {
          func_0x00f78a20(0x3d578e0);
          bRam0000000003eb5409 = 1;
        }
        uVar17 = SUB41(fVar26,0);
        lVar10 = *(long *)(auVar31._0_8_ + 0x110);
        if (lVar10 == 0) break;
        lVar10 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(lVar10,uRam0000000003d578e0);
        pppppuVar14 = *(undefined8 ******)(puVar2 + -0x140);
        puVar16 = *(undefined **)(puVar2 + -0x138);
        auVar29 = *(undefined1 (*) [16])(puVar2 + -0x150);
        uVar13 = *(undefined8 *)(puVar2 + -0x160);
        uVar12 = *(undefined8 *)(puVar2 + -0x158);
        uVar27 = *(ulong *)(puVar2 + -0x170);
        uVar25 = *(ulong *)(puVar2 + -0x168);
        unaff_d11 = *(undefined8 *)(puVar2 + -0x180);
        uVar28 = *(ulong *)(puVar2 + -0x178);
        puVar2 = puVar2 + -0x130;
        uVar17 = extraout_b0_04;
        uVar18 = extraout_var_04;
        uVar19 = extraout_var_11;
        uVar20 = extraout_var_18;
      }
      auVar29 = func_0x00f78af4();
      plVar8 = auVar29._0_8_;
      *(ulong *)(puVar2 + -0x1c0) = (ulong)uVar21;
      *(ulong *)(puVar2 + -0x1b8) = (ulong)(uint)fVar24;
      *(undefined8 *)(puVar2 + -0x1b0) = 0x3d23990;
      *(undefined8 *)(puVar2 + -0x1a8) = 0x3eb5000;
      *(undefined1 (*) [16])(puVar2 + -0x1a0) = auVar31;
      *(undefined1 **)(puVar2 + -400) = puVar2 + -0x140;
      *(undefined **)(puVar2 + -0x188) =
           &Atlas_UI_LeaderboardEntryBehaviour__PlayEnterStatsStarDeltaTween;
      uVar21 = CONCAT13(extraout_var_19,
                        CONCAT12(extraout_var_12,CONCAT11(extraout_var_05,extraout_b0_05)));
      uVar23 = uVar22;
      if ((bRam0000000003eb540a & 1) == 0) {
        func_0x00f78a20(0x3d578e0);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d5e768);
        func_0x00f78a20(0x3d5e7a0);
        func_0x00f78a20(0x3d5e838);
        bRam0000000003eb540a = 1;
      }
      lVar10 = plVar8[0x27];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar10,0);
      if (iVar4 == 0) {
        return (long *)0x0;
      }
      if (plVar8[0x27] == 0) {
        auVar31 = func_0x00f78af4();
        plVar5 = auVar31._0_8_;
        puVar3 = puVar2 + -0x230;
        *(undefined8 *)(puVar2 + -0x230) = unaff_d11;
        *(ulong *)(puVar2 + -0x228) =
             (ulong)CONCAT13(extraout_var_18,
                             CONCAT12(extraout_var_11,CONCAT11(extraout_var_04,extraout_b0_04)));
        *(ulong *)(puVar2 + -0x220) = (ulong)uVar21;
        *(ulong *)(puVar2 + -0x218) = (ulong)uVar22;
        *(undefined8 *)(puVar2 + -0x210) = unaff_x26;
        *(undefined8 *)(puVar2 + -0x208) = unaff_x25;
        *(undefined8 *)(puVar2 + -0x200) = unaff_x24;
        *(undefined8 *)(puVar2 + -0x1f8) = 0x3d27df8;
        *(undefined8 *)(puVar2 + -0x1f0) = 0x3d23990;
        *(long *)(puVar2 + -0x1e8) = lVar10;
        *(long *)(puVar2 + -0x1e0) = auVar29._8_8_;
        *(long **)(puVar2 + -0x1d8) = plVar8;
        *(undefined1 **)(puVar2 + -0x1d0) = puVar2 + -400;
        *(undefined **)(puVar2 + -0x1c8) = &Atlas_UI_LeaderboardEntryBehaviour__PlayHideStarsTween;
        puVar15 = puVar2 + -0x1d0;
        if ((bRam0000000003eb540b & 1) == 0) {
          func_0x00f78a20(0x3d59de8);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d25428);
          func_0x00f78a20(0x3d5e6c0);
          func_0x00f78a20(0x3d5e758);
          func_0x00f78a20(0x3d5e788);
          func_0x00f78a20(0x3d5e800);
          bRam0000000003eb540b = 1;
        }
        lVar10 = plVar5[0x29];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar10,0);
        if (iVar4 == 0) {
          return (long *)0x0;
        }
        uVar13 = 0x3d5e000;
        lVar6 = 0x3d5e000;
        uVar12 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(extraout_b0_06,uVar23,plVar5[0x29],0);
        uVar12 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar17,uVar12,uRam0000000003d5e758);
        plVar7 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar12,auVar31._8_8_,uRam0000000003d5e788);
        puVar16 = &UNK_015ec6b8;
        uVar12 = uRam0000000003d5e800;
      }
      else {
        uVar13 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar8[0x27],uRam0000000003d578e0);
        uVar13 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPosX*/ func_0x016a707c(0,uVar21,uVar13,0,0);
        uVar13 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc((char)uVar22,uVar13,uRam0000000003d5e768);
        plVar7 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar13,auVar29._8_8_,uRam0000000003d5e7a0);
        puVar15 = *(undefined1 **)(puVar2 + -400);
        puVar16 = *(undefined **)(puVar2 + -0x188);
        auVar31._8_8_ = *(undefined8 *)(puVar2 + -0x1a0);
        auVar31._0_8_ = *(undefined8 *)(puVar2 + -0x198);
        lVar6 = *(long *)(puVar2 + -0x1b0);
        uVar13 = *(undefined8 *)(puVar2 + -0x1a8);
        puVar3 = puVar2 + -0x180;
        plVar5 = plVar8;
        uVar12 = uRam0000000003d5e838;
      }
code_r0x018eee1c:
      *(long *)(puVar3 + -0x30) = lVar6;
      *(undefined8 *)(puVar3 + -0x28) = uVar13;
      *(long *)(puVar3 + -0x20) = auVar31._8_8_;
      *(long *)(puVar3 + -0x18) = auVar31._0_8_;
      *(undefined1 **)(puVar3 + -0x10) = puVar15;
      *(undefined **)(puVar3 + -8) = puVar16;
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,plVar5,uVar12);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((plVar7 != (long *)0x0) && ((char)plVar7[0x1d] != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar4 != 0) {
          lVar10 = func_0x00f78adc(plVar5,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
          if ((uVar11 & 1) == 0) {
            if (plVar5 == (long *)0x0) goto code_r0x018eef34;
            lVar10 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          }
          else {
            if (lVar10 == 0) {
code_r0x018eef34:
              auVar29 = func_0x00f78af4();
              plVar8 = auVar29._0_8_;
              *(long *)(puVar3 + -0x60) = lVar6;
              *(long *)(puVar3 + -0x58) = lVar10;
              *(long **)(puVar3 + -0x50) = plVar5;
              *(long **)(puVar3 + -0x48) = plVar7;
              *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
              *(undefined **)(puVar3 + -0x38) =
                   &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((plVar8 != (long *)0x0) && ((char)plVar8[0x1d] != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(plVar8,auVar29._8_8_,cVar1 != '\0',0);
              }
              return plVar8;
            }
            lVar10 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar10,0);
          }
          plVar7[0x19] = lVar10;
        }
        plVar7[9] = (long)plVar5;
      }
      return plVar7;
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x558))(plVar5,uVar12,*(undefined8 *)(*plVar5 + 0x560));
  }
  return plVar5;
}



// ============================================================
// RVA: 0x15ebc70 | Atlas.UI.LeaderboardEntryBehaviour.SetStatActive
// ============================================================

/* WARNING: Possible PIC construction at 0x015ebc98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ebd04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ebd08) */
/* WARNING: Removing unreachable block (ram,0x015ebd2c) */
/* WARNING: Removing unreachable block (ram,0x015ebd0c) */
/* WARNING: Removing unreachable block (ram,0x015ebd14) */
/* WARNING: Removing unreachable block (ram,0x032c2184) */
/* WARNING: Removing unreachable block (ram,0x032c21bc) */
/* WARNING: Removing unreachable block (ram,0x032c21d0) */
/* WARNING: Removing unreachable block (ram,0x032c21e4) */
/* WARNING: Removing unreachable block (ram,0x032c21ec) */
/* WARNING: Removing unreachable block (ram,0x032c21f0) */
/* WARNING: Removing unreachable block (ram,0x032c22b0) */
/* WARNING: Removing unreachable block (ram,0x032c22bc) */
/* WARNING: Removing unreachable block (ram,0x032c22c4) */
/* WARNING: Removing unreachable block (ram,0x032c22c8) */
/* WARNING: Removing unreachable block (ram,0x032c22dc) */
/* WARNING: Removing unreachable block (ram,0x032c22e0) */
/* WARNING: Removing unreachable block (ram,0x032c232c) */
/* WARNING: Removing unreachable block (ram,0x032c2330) */
/* WARNING: Removing unreachable block (ram,0x032c2354) */
/* WARNING: Removing unreachable block (ram,0x032c235c) */
/* WARNING: Removing unreachable block (ram,0x032c2360) */
/* WARNING: Removing unreachable block (ram,0x032c2204) */
/* WARNING: Removing unreachable block (ram,0x032c2214) */
/* WARNING: Removing unreachable block (ram,0x032c221c) */
/* WARNING: Removing unreachable block (ram,0x032c2220) */
/* WARNING: Removing unreachable block (ram,0x032c242c) */
/* WARNING: Removing unreachable block (ram,0x032c2234) */
/* WARNING: Removing unreachable block (ram,0x032c223c) */
/* WARNING: Removing unreachable block (ram,0x032c226c) */
/* WARNING: Removing unreachable block (ram,0x032c2274) */
/* WARNING: Removing unreachable block (ram,0x032c2278) */
/* WARNING: Removing unreachable block (ram,0x032c236c) */
/* WARNING: Removing unreachable block (ram,0x032c2288) */
/* WARNING: Removing unreachable block (ram,0x032c228c) */
/* WARNING: Removing unreachable block (ram,0x032c2374) */
/* WARNING: Removing unreachable block (ram,0x032c2378) */
/* WARNING: Removing unreachable block (ram,0x032c237c) */
/* WARNING: Removing unreachable block (ram,0x032c2380) */
/* WARNING: Removing unreachable block (ram,0x032c2394) */
/* WARNING: Removing unreachable block (ram,0x032c23ac) */
/* WARNING: Removing unreachable block (ram,0x032c23b4) */
/* WARNING: Removing unreachable block (ram,0x032c23b8) */
/* WARNING: Removing unreachable block (ram,0x032c23cc) */
/* WARNING: Removing unreachable block (ram,0x032c2448) */
/* WARNING: Removing unreachable block (ram,0x032c23d0) */
/* WARNING: Removing unreachable block (ram,0x032c23e0) */
/* WARNING: Removing unreachable block (ram,0x032c23ec) */
/* WARNING: Removing unreachable block (ram,0x032c23f4) */
/* WARNING: Removing unreachable block (ram,0x032c23f8) */
/* WARNING: Removing unreachable block (ram,0x032c2400) */
/* WARNING: Removing unreachable block (ram,0x032c244c) */
/* WARNING: Removing unreachable block (ram,0x032c2474) */
/* WARNING: Removing unreachable block (ram,0x032c2494) */
/* WARNING: Removing unreachable block (ram,0x032c24ac) */
/* WARNING: Removing unreachable block (ram,0x032c24b4) */
/* WARNING: Removing unreachable block (ram,0x032c24b8) */
/* WARNING: Removing unreachable block (ram,0x032c24cc) */
/* WARNING: Removing unreachable block (ram,0x032c2550) */
/* WARNING: Removing unreachable block (ram,0x032c24d8) */
/* WARNING: Removing unreachable block (ram,0x032c24f0) */
/* WARNING: Removing unreachable block (ram,0x032c24f8) */
/* WARNING: Removing unreachable block (ram,0x032c24fc) */
/* WARNING: Removing unreachable block (ram,0x032c2510) */
/* WARNING: Removing unreachable block (ram,0x032c2524) */
/* WARNING: Removing unreachable block (ram,0x032c252c) */
/* WARNING: Removing unreachable block (ram,0x032c2530) */
/* WARNING: Removing unreachable block (ram,0x032c2540) */
/* WARNING: Removing unreachable block (ram,0x015ebc9c) */
/* WARNING: Removing unreachable block (ram,0x015ec6b8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_LeaderboardEntryBehaviour__SetStatActive
                 (undefined1 param_1 [16],uint param_2,float param_3,long param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar13;
  long lVar14;
  undefined8 unaff_x21;
  undefined8 uVar15;
  undefined8 unaff_x22;
  undefined8 uVar16;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *****pppppuVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  uint extraout_s0;
  uint extraout_s0_00;
  uint uVar20;
  undefined4 uVar21;
  uint extraout_s0_01;
  uint extraout_s0_02;
  uint extraout_s0_03;
  uint extraout_s0_04;
  undefined4 extraout_s0_05;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  ulong unaff_d8;
  float fVar26;
  ulong unaff_d9;
  ulong uVar27;
  ulong unaff_d10;
  ulong uVar28;
  undefined8 unaff_d11;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  undefined8 ****ppppuStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [12];
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  undefined8 ****ppppuStack_100;
  undefined *puStack_f8;
  undefined8 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 ****ppppuStack_90;
  undefined *puStack_88;
  undefined8 ****ppppuStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [48];
  
  auVar29._8_8_ = param_4;
  auVar29._0_8_ = param_5;
  puVar4 = auStack_50;
  lVar6 = *(long *)(param_4 + 0x108);
  if (lVar6 == 0) {
    auVar29 = func_0x00f78af4();
    lVar14 = auVar29._0_8_;
    puVar4 = &stack0xffffffffffffff80;
    puStack_58 = &Atlas_UI_LeaderboardEntryBehaviour__SetPlacingIconActive;
    ppppuStack_60 = (undefined8 ****)&stack0xfffffffffffffff0;
    if ((*(long *)(lVar14 + 0x38) == 0) ||
       (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar14 + 0x38),0), param_4 = auVar29._8_8_,
       unaff_x21 = param_6, lVar6 == 0)) {
      lVar6 = func_0x00f78af4();
      puStack_88 = &Atlas_UI_LeaderboardEntryBehaviour__UpdatePanelSizes;
      ppppuStack_90 = &ppppuStack_60;
      if ((*(long *)(lVar6 + 0x50) != 0) &&
         (lVar14 = *(long *)(lVar6 + 0x18), param_4 = lVar6, lVar14 != 0)) {
        fVar25 = *(float *)(lVar6 + 0x68);
        unaff_d8 = (ulong)(uint)fVar25;
        fVar26 = *(float *)(lVar6 + 0x58);
        unaff_d9 = (ulong)(uint)fVar26;
        param_3 = *(float *)(*(long *)(lVar6 + 0x50) + 0xdc);
        unaff_d10 = (ulong)(uint)param_3;
        /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar14,0);
        param_3 = param_3 * 0.5;
        /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(fVar25 + fVar26 + param_3,lVar14,0);
        plVar7 = *(long **)(lVar6 + 0x48);
        if (plVar7 != (long *)0x0) {
          fVar25 = 1.0 - *(float *)(lVar6 + 0x68) /
                         (*(float *)(lVar6 + 0x68) + *(float *)(lVar6 + 0x58));
          if (_UNK_033f8758 < ABS(*(float *)((long)plVar7 + 0x144) - fVar25)) {
            *(float *)((long)plVar7 + 0x144) = fVar25;
                    /* WARNING: Could not recover jumptable at 0x02f8b04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            plVar7 = (long *)(**(code **)(*plVar7 + 0x2f8))(plVar7,*(undefined8 *)(*plVar7 + 0x300))
            ;
            return plVar7;
          }
          return plVar7;
        }
      }
      auVar29._8_8_ = param_4;
      auVar29._0_8_ = lVar14;
      auVar30 = func_0x00f78af4();
      param_6 = auVar30._8_8_;
      puStack_c8 = &Atlas_UI_LeaderboardEntryBehaviour__SetDeltaStarsActive;
      uVar16 = 0x3d23990;
      ppppuStack_d0 = &ppppuStack_90;
      if ((bRam0000000003eb5404 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb5404 = 1;
      }
      uVar15 = *(undefined8 *)(auVar30._0_8_ + 0x138);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar7 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar15,0);
      if ((int)plVar7 == 0) {
        return plVar7;
      }
      lVar6 = *(long *)(auVar30._0_8_ + 0x138);
      if ((lVar6 == 0) || (lVar6 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(lVar6,0), lVar6 == 0)) {
        auVar31 = func_0x00f78af4();
        uStack_124 = auVar31._8_4_;
        uStack_120 = 0x3d23990;
        puStack_f8 = &Atlas_UI_LeaderboardEntryBehaviour__SetDeltaStarsText;
        uStack_118 = uVar15;
        ppppuStack_100 = &ppppuStack_d0;
        auStack_110 = auVar30;
        if ((bRam0000000003eb5405 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d66fb0);
          bRam0000000003eb5405 = 1;
        }
        plVar7 = *(long **)(auVar31._0_8_ + 0x138);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar8 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar7,0);
        if ((int)plVar8 != 0) {
          plVar8 = *(long **)(auVar31._0_8_ + 0x140);
          uVar9 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_124,0);
          uVar15 = 0;
          uVar9 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('+')*/ uRam0000000003d66fb0,uVar9);
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)func_0x00f78af4();
            puVar2 = &stack0xfffffffffffffe80;
            puStack_138 = &Atlas_UI_LeaderboardEntryBehaviour__PlayCrownSpawnTween;
            pppppuVar17 = &ppppuStack_140;
            uVar12 = (ulong)(uint)param_3;
            uVar27 = (ulong)param_2;
            uVar28 = (ulong)extraout_s0;
            uVar9 = 0x3eb5000;
            uVar22 = param_2;
            fVar25 = param_3;
            ppppuStack_140 = &ppppuStack_100;
            if ((bRam0000000003eb5406 & 1) == 0) {
              func_0x00f78a20(0x3d53528);
              bRam0000000003eb5406 = 1;
            }
            if (plVar8[7] == 0) {
              puVar19 = &Atlas_UI_LeaderboardEntryBehaviour__StartLargeThenGoNormal;
              plVar11 = (long *)func_0x00f78af4();
              lVar6 = extraout_x1_00;
              uVar13 = extraout_x1;
              uVar20 = extraout_s0_00;
            }
            else {
              lVar6 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(plVar8[7],uRam0000000003d53528);
              uVar16 = 0x3d23990;
              uVar9 = 0x3d23990;
              uVar13 = 0;
              puVar2 = auStack_130;
              plVar11 = plVar8;
              uVar15 = extraout_x1;
              plVar8 = plVar7;
              pppppuVar17 = (undefined8 *****)ppppuStack_140;
              puVar19 = puStack_138;
              uVar20 = extraout_s0;
              uVar22 = param_2;
              fVar25 = param_3;
              uVar12 = unaff_d8;
              uVar27 = unaff_d9;
              uVar28 = unaff_d10;
            }
            while( true ) {
              while( true ) {
                puVar3 = puVar2 + -0x80;
                *(undefined8 *)(puVar2 + -0x80) = unaff_d11;
                *(ulong *)(puVar2 + -0x78) = uVar28;
                *(ulong *)(puVar2 + -0x70) = uVar27;
                *(ulong *)(puVar2 + -0x68) = uVar12;
                *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
                *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
                *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
                *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
                *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
                *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
                *(undefined8 *)(puVar2 + -0x30) = uVar16;
                *(undefined8 *)(puVar2 + -0x28) = uVar9;
                *(long **)(puVar2 + -0x20) = plVar8;
                *(undefined8 *)(puVar2 + -0x18) = uVar13;
                *(undefined8 ******)(puVar2 + -0x10) = pppppuVar17;
                *(undefined **)(puVar2 + -8) = puVar19;
                puVar18 = puVar2 + -0x10;
                uVar12 = (ulong)(uint)fVar25;
                unaff_x23 = 0x3d27df8;
                uVar23 = uVar22;
                if ((bRam0000000003eb540e & 1) == 0) {
                  func_0x00f78a20(0x3d2db28);
                  func_0x00f78a20(0x3d1c100);
                  func_0x00f78a20(0x3d20bc0);
                  func_0x00f78a20(0x3d5e780);
                  func_0x00f78a20(0x3d5e7b8);
                  func_0x00f78a20(0x3d5e868);
                  func_0x00f78a20(0x3d63540);
                  func_0x00f78a20(0x3d27df8);
                  bRam0000000003eb540e = 1;
                }
                lVar14 = func_0x00f78aec(/*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0_TypeInfo*/ uRam0000000003d27df8);
                /*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0$$.ctor*/ func_0x0155abe8(lVar14,0);
                if ((lVar14 != 0) && (*(long *)(lVar14 + 0x10) = lVar6, lVar6 != 0)) {
                  uVar21 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar6,0);
                  uVar16 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
                  /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar16,lVar14,uRam0000000003d63540,uRam0000000003d2db28);
                  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  plVar8 = (long *)/*DG.Tweening.DOTween$$To*/ func_0x01694ae4(uVar20,uVar21,uVar22,uVar16,0);
                  puVar19 = &UNK_015ec164;
                  plVar7 = *(long **)(lVar14 + 0x10);
                  uVar9 = uRam0000000003d5e868;
                  goto code_r0x018eee1c;
                }
                plVar7 = (long *)func_0x00f78af4();
                *(undefined8 *)(puVar2 + -0xe0) = unaff_d11;
                *(ulong *)(puVar2 + -0xd8) = (ulong)uVar20;
                *(ulong *)(puVar2 + -0xd0) = (ulong)uVar22;
                *(ulong *)(puVar2 + -200) = uVar12;
                *(undefined8 *)(puVar2 + -0xc0) = unaff_x24;
                *(undefined8 *)(puVar2 + -0xb8) = 0x3d27df8;
                *(long *)(puVar2 + -0xb0) = lVar14;
                *(long *)(puVar2 + -0xa8) = lVar6;
                *(undefined8 *)(puVar2 + -0xa0) = uVar15;
                *(long **)(puVar2 + -0x98) = plVar11;
                *(undefined1 **)(puVar2 + -0x90) = puVar18;
                *(undefined **)(puVar2 + -0x88) =
                     &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerEmphasisTween;
                uVar24 = uVar23;
                fVar26 = fVar25;
                if ((bRam0000000003eb5407 & 1) == 0) {
                  func_0x00f78a20(0x3d578e0);
                  func_0x00f78a20(0x3d5e780);
                  func_0x00f78a20(0x3d5e7b8);
                  func_0x00f78a20(0x3d5e868);
                  bRam0000000003eb5407 = 1;
                }
                if (plVar7[0x22] != 0) {
                  uVar16 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar7[0x22],uRam0000000003d578e0);
                  uVar16 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(extraout_s0_01,extraout_s0_01,extraout_s0_01,uVar23,0,
                                           uVar16,0,0);
                  uVar16 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(fVar25,uVar16,uRam0000000003d5e780);
                  plVar8 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar16,extraout_x1_01,uRam0000000003d5e7b8);
                  puVar18 = *(undefined1 **)(puVar2 + -0x90);
                  puVar19 = *(undefined **)(puVar2 + -0x88);
                  uVar15 = *(undefined8 *)(puVar2 + -0xa0);
                  lVar14 = *(long *)(puVar2 + -0xb0);
                  uVar16 = *(undefined8 *)(puVar2 + -0xa8);
                  puVar3 = puVar2 + -0x80;
                  uVar9 = uRam0000000003d5e868;
                  plVar11 = *(long **)(puVar2 + -0x98);
                  goto code_r0x018eee1c;
                }
                plVar10 = (long *)func_0x00f78af4();
                *(undefined8 *)(puVar2 + -0x130) = unaff_d11;
                *(ulong *)(puVar2 + -0x128) = (ulong)extraout_s0_01;
                *(ulong *)(puVar2 + -0x120) = (ulong)uVar23;
                *(ulong *)(puVar2 + -0x118) = (ulong)(uint)fVar25;
                *(long *)(puVar2 + -0x110) = lVar14;
                *(undefined8 *)(puVar2 + -0x108) = 0x3eb5000;
                *(undefined8 *)(puVar2 + -0x100) = extraout_x1_01;
                *(long **)(puVar2 + -0xf8) = plVar7;
                *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0x90;
                *(undefined **)(puVar2 + -0xe8) =
                     &Atlas_UI_LeaderboardEntryBehaviour__PlayStarDeltaSpawnTween;
                uVar22 = uVar24;
                fVar25 = fVar26;
                if ((bRam0000000003eb5408 & 1) == 0) {
                  func_0x00f78a20(0x3d578e0);
                  func_0x00f78a20(0x3d23990);
                  bRam0000000003eb5408 = 1;
                }
                lVar6 = plVar10[0x27];
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar6,0);
                if (iVar5 == 0) {
                  return (long *)0x0;
                }
                if (plVar10[0x27] == 0) break;
                lVar6 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar10[0x27],uRam0000000003d578e0);
                pppppuVar17 = *(undefined8 ******)(puVar2 + -0xf0);
                puVar19 = *(undefined **)(puVar2 + -0xe8);
                plVar8 = *(long **)(puVar2 + -0x100);
                uVar13 = *(undefined8 *)(puVar2 + -0xf8);
                uVar16 = *(undefined8 *)(puVar2 + -0x110);
                uVar9 = *(undefined8 *)(puVar2 + -0x108);
                uVar27 = *(ulong *)(puVar2 + -0x120);
                uVar12 = *(ulong *)(puVar2 + -0x118);
                unaff_d11 = *(undefined8 *)(puVar2 + -0x130);
                uVar28 = *(ulong *)(puVar2 + -0x128);
                puVar2 = puVar2 + -0xe0;
                plVar11 = plVar10;
                uVar15 = extraout_x1_02;
                uVar20 = extraout_s0_02;
                uVar22 = uVar24;
                fVar25 = fVar26;
              }
              plVar11 = (long *)func_0x00f78af4();
              *(undefined8 *)(puVar2 + -0x180) = unaff_d11;
              *(ulong *)(puVar2 + -0x178) = (ulong)extraout_s0_02;
              *(ulong *)(puVar2 + -0x170) = (ulong)uVar24;
              *(ulong *)(puVar2 + -0x168) = (ulong)(uint)fVar26;
              *(undefined8 *)(puVar2 + -0x160) = 0x3d23990;
              *(long *)(puVar2 + -0x158) = lVar6;
              *(long **)(puVar2 + -0x150) = plVar10;
              *(undefined8 *)(puVar2 + -0x148) = extraout_x1_02;
              *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0xf0;
              *(undefined **)(puVar2 + -0x138) =
                   &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerSpawnTween;
              uVar20 = uVar22;
              fVar26 = fVar25;
              if ((bRam0000000003eb5409 & 1) == 0) {
                func_0x00f78a20(0x3d578e0);
                bRam0000000003eb5409 = 1;
              }
              if (plVar11[0x22] == 0) break;
              lVar6 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar11[0x22],uRam0000000003d578e0);
              pppppuVar17 = *(undefined8 ******)(puVar2 + -0x140);
              puVar19 = *(undefined **)(puVar2 + -0x138);
              plVar8 = *(long **)(puVar2 + -0x150);
              uVar13 = *(undefined8 *)(puVar2 + -0x148);
              uVar16 = *(undefined8 *)(puVar2 + -0x160);
              uVar9 = *(undefined8 *)(puVar2 + -0x158);
              uVar27 = *(ulong *)(puVar2 + -0x170);
              uVar12 = *(ulong *)(puVar2 + -0x168);
              unaff_d11 = *(undefined8 *)(puVar2 + -0x180);
              uVar28 = *(ulong *)(puVar2 + -0x178);
              puVar2 = puVar2 + -0x130;
              uVar15 = extraout_x1_03;
              uVar20 = extraout_s0_03;
            }
            plVar10 = (long *)func_0x00f78af4();
            *(ulong *)(puVar2 + -0x1c0) = (ulong)uVar22;
            *(ulong *)(puVar2 + -0x1b8) = (ulong)(uint)fVar25;
            *(undefined8 *)(puVar2 + -0x1b0) = 0x3d23990;
            *(undefined8 *)(puVar2 + -0x1a8) = 0x3eb5000;
            *(long **)(puVar2 + -0x1a0) = plVar11;
            *(undefined8 *)(puVar2 + -0x198) = extraout_x1_03;
            *(undefined1 **)(puVar2 + -400) = puVar2 + -0x140;
            *(undefined **)(puVar2 + -0x188) =
                 &Atlas_UI_LeaderboardEntryBehaviour__PlayEnterStatsStarDeltaTween;
            uVar22 = uVar20;
            if ((bRam0000000003eb540a & 1) == 0) {
              func_0x00f78a20(0x3d578e0);
              func_0x00f78a20(0x3d23990);
              func_0x00f78a20(0x3d5e768);
              func_0x00f78a20(0x3d5e7a0);
              func_0x00f78a20(0x3d5e838);
              bRam0000000003eb540a = 1;
            }
            lVar6 = plVar10[0x27];
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar6,0);
            if (iVar5 == 0) {
              return (long *)0x0;
            }
            if (plVar10[0x27] == 0) {
              plVar7 = (long *)func_0x00f78af4();
              puVar3 = puVar2 + -0x230;
              *(undefined8 *)(puVar2 + -0x230) = unaff_d11;
              *(ulong *)(puVar2 + -0x228) = (ulong)extraout_s0_03;
              *(ulong *)(puVar2 + -0x220) = (ulong)extraout_s0_04;
              *(ulong *)(puVar2 + -0x218) = (ulong)uVar20;
              *(undefined8 *)(puVar2 + -0x210) = unaff_x26;
              *(undefined8 *)(puVar2 + -0x208) = unaff_x25;
              *(undefined8 *)(puVar2 + -0x200) = unaff_x24;
              *(undefined8 *)(puVar2 + -0x1f8) = 0x3d27df8;
              *(undefined8 *)(puVar2 + -0x1f0) = 0x3d23990;
              *(long *)(puVar2 + -0x1e8) = lVar6;
              *(undefined8 *)(puVar2 + -0x1e0) = extraout_x1_04;
              *(long **)(puVar2 + -0x1d8) = plVar10;
              *(undefined1 **)(puVar2 + -0x1d0) = puVar2 + -400;
              *(undefined **)(puVar2 + -0x1c8) =
                   &Atlas_UI_LeaderboardEntryBehaviour__PlayHideStarsTween;
              puVar18 = puVar2 + -0x1d0;
              if ((bRam0000000003eb540b & 1) == 0) {
                func_0x00f78a20(0x3d59de8);
                func_0x00f78a20(0x3d23990);
                func_0x00f78a20(0x3d25428);
                func_0x00f78a20(0x3d5e6c0);
                func_0x00f78a20(0x3d5e758);
                func_0x00f78a20(0x3d5e788);
                func_0x00f78a20(0x3d5e800);
                bRam0000000003eb540b = 1;
              }
              lVar6 = plVar7[0x29];
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar6,0);
              if (iVar5 == 0) {
                return (long *)0x0;
              }
              uVar16 = 0x3d5e000;
              lVar14 = 0x3d5e000;
              uVar15 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(extraout_s0_05,uVar22,plVar7[0x29],0);
              uVar15 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(fVar26,uVar15,uRam0000000003d5e758);
              plVar8 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar15,extraout_x1_05,uRam0000000003d5e788);
              puVar19 = &UNK_015ec6b8;
              uVar9 = uRam0000000003d5e800;
              plVar11 = plVar7;
              uVar15 = extraout_x1_05;
            }
            else {
              uVar16 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar10[0x27],uRam0000000003d578e0);
              uVar16 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPosX*/ func_0x016a707c(0,extraout_s0_04,uVar16,0,0);
              uVar16 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar20,uVar16,uRam0000000003d5e768);
              plVar8 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar16,extraout_x1_04,uRam0000000003d5e7a0);
              puVar18 = *(undefined1 **)(puVar2 + -400);
              puVar19 = *(undefined **)(puVar2 + -0x188);
              uVar15 = *(undefined8 *)(puVar2 + -0x1a0);
              lVar14 = *(long *)(puVar2 + -0x1b0);
              uVar16 = *(undefined8 *)(puVar2 + -0x1a8);
              puVar3 = puVar2 + -0x180;
              plVar7 = plVar10;
              uVar9 = uRam0000000003d5e838;
              plVar11 = *(long **)(puVar2 + -0x198);
            }
code_r0x018eee1c:
            *(long *)(puVar3 + -0x30) = lVar14;
            *(undefined8 *)(puVar3 + -0x28) = uVar16;
            *(undefined8 *)(puVar3 + -0x20) = uVar15;
            *(long **)(puVar3 + -0x18) = plVar11;
            *(undefined1 **)(puVar3 + -0x10) = puVar18;
            *(undefined **)(puVar3 + -8) = puVar19;
            if ((bRam0000000003eb66c1 & 1) == 0) {
              func_0x00f78a20(0x3d208f0,plVar7,uVar9);
              func_0x00f78a20(0x3d20bc0);
              func_0x00f78a20(0x3d23990);
              bRam0000000003eb66c1 = 1;
            }
            if ((plVar8 != (long *)0x0) && ((char)plVar8[0x1d] != '\0')) {
              if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar5 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
              if (iVar5 != 0) {
                lVar6 = func_0x00f78adc(plVar7,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
                if ((uVar12 & 1) == 0) {
                  if (plVar7 == (long *)0x0) goto code_r0x018eef34;
                  lVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
                }
                else {
                  if (lVar6 == 0) {
code_r0x018eef34:
                    auVar29 = func_0x00f78af4();
                    plVar11 = auVar29._0_8_;
                    *(long *)(puVar3 + -0x60) = lVar14;
                    *(long *)(puVar3 + -0x58) = lVar6;
                    *(long **)(puVar3 + -0x50) = plVar7;
                    *(long **)(puVar3 + -0x48) = plVar8;
                    *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
                    *(undefined **)(puVar3 + -0x38) =
                         &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
                    if ((bRam0000000003eb66c2 & 1) == 0) {
                      func_0x00f78a20(0x3d20bc0);
                      func_0x00f78a20(0x3d25440);
                      bRam0000000003eb66c2 = 1;
                    }
                    if ((plVar11 != (long *)0x0) && ((char)plVar11[0x1d] != '\0')) {
                      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(plVar11,auVar29._8_8_,cVar1 != '\0',0);
                    }
                    return plVar11;
                  }
                  lVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar6,0);
                }
                plVar8[0x19] = lVar6;
              }
              plVar8[9] = (long)plVar7;
            }
            return plVar8;
          }
          plVar8 = (long *)(**(code **)(*plVar8 + 0x558))
                                     (plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x560));
        }
        return plVar8;
      }
      puVar4 = &stack0xffffffffffffff40;
      pppppuVar17 = (undefined8 *****)ppppuStack_d0;
      puVar19 = puStack_c8;
    }
    else {
      pppppuVar17 = &ppppuStack_60;
      puVar19 = &UNK_015ebd08;
    }
  }
  else {
    pppppuVar17 = (undefined8 *****)&stack0xfffffffffffffff0;
    puVar19 = (undefined *)0x15ebc9c;
  }
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
  *(undefined1 (*) [16])(puVar4 + -0x20) = auVar29;
  *(undefined8 ******)(puVar4 + -0x10) = pppppuVar17;
  *(undefined **)(puVar4 + -8) = puVar19;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar7 = (long *)(*pcRam0000000003ebf4c0)(lVar6,param_6);
  return plVar7;
}



// ============================================================
// RVA: 0x15ebccc | Atlas.UI.LeaderboardEntryBehaviour.SetPlacingIconActive
// ============================================================

/* WARNING: Possible PIC construction at 0x015ebd04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ebd08) */
/* WARNING: Removing unreachable block (ram,0x015ebd2c) */
/* WARNING: Removing unreachable block (ram,0x015ebd0c) */
/* WARNING: Removing unreachable block (ram,0x015ebd14) */
/* WARNING: Removing unreachable block (ram,0x032c2184) */
/* WARNING: Removing unreachable block (ram,0x032c21bc) */
/* WARNING: Removing unreachable block (ram,0x032c21d0) */
/* WARNING: Removing unreachable block (ram,0x032c21e4) */
/* WARNING: Removing unreachable block (ram,0x032c21ec) */
/* WARNING: Removing unreachable block (ram,0x032c21f0) */
/* WARNING: Removing unreachable block (ram,0x032c22b0) */
/* WARNING: Removing unreachable block (ram,0x032c22bc) */
/* WARNING: Removing unreachable block (ram,0x032c22c4) */
/* WARNING: Removing unreachable block (ram,0x032c22c8) */
/* WARNING: Removing unreachable block (ram,0x032c22dc) */
/* WARNING: Removing unreachable block (ram,0x032c22e0) */
/* WARNING: Removing unreachable block (ram,0x032c232c) */
/* WARNING: Removing unreachable block (ram,0x032c2330) */
/* WARNING: Removing unreachable block (ram,0x032c2354) */
/* WARNING: Removing unreachable block (ram,0x032c235c) */
/* WARNING: Removing unreachable block (ram,0x032c2360) */
/* WARNING: Removing unreachable block (ram,0x032c2204) */
/* WARNING: Removing unreachable block (ram,0x032c2214) */
/* WARNING: Removing unreachable block (ram,0x032c221c) */
/* WARNING: Removing unreachable block (ram,0x032c2220) */
/* WARNING: Removing unreachable block (ram,0x032c242c) */
/* WARNING: Removing unreachable block (ram,0x032c2234) */
/* WARNING: Removing unreachable block (ram,0x032c223c) */
/* WARNING: Removing unreachable block (ram,0x032c226c) */
/* WARNING: Removing unreachable block (ram,0x032c2274) */
/* WARNING: Removing unreachable block (ram,0x032c2278) */
/* WARNING: Removing unreachable block (ram,0x032c236c) */
/* WARNING: Removing unreachable block (ram,0x032c2288) */
/* WARNING: Removing unreachable block (ram,0x032c228c) */
/* WARNING: Removing unreachable block (ram,0x032c2374) */
/* WARNING: Removing unreachable block (ram,0x032c2378) */
/* WARNING: Removing unreachable block (ram,0x032c237c) */
/* WARNING: Removing unreachable block (ram,0x032c2380) */
/* WARNING: Removing unreachable block (ram,0x032c2394) */
/* WARNING: Removing unreachable block (ram,0x032c23ac) */
/* WARNING: Removing unreachable block (ram,0x032c23b4) */
/* WARNING: Removing unreachable block (ram,0x032c23b8) */
/* WARNING: Removing unreachable block (ram,0x032c23cc) */
/* WARNING: Removing unreachable block (ram,0x032c2448) */
/* WARNING: Removing unreachable block (ram,0x032c23d0) */
/* WARNING: Removing unreachable block (ram,0x032c23e0) */
/* WARNING: Removing unreachable block (ram,0x032c23ec) */
/* WARNING: Removing unreachable block (ram,0x032c23f4) */
/* WARNING: Removing unreachable block (ram,0x032c23f8) */
/* WARNING: Removing unreachable block (ram,0x032c2400) */
/* WARNING: Removing unreachable block (ram,0x032c244c) */
/* WARNING: Removing unreachable block (ram,0x032c2474) */
/* WARNING: Removing unreachable block (ram,0x032c2494) */
/* WARNING: Removing unreachable block (ram,0x032c24ac) */
/* WARNING: Removing unreachable block (ram,0x032c24b4) */
/* WARNING: Removing unreachable block (ram,0x032c24b8) */
/* WARNING: Removing unreachable block (ram,0x032c24cc) */
/* WARNING: Removing unreachable block (ram,0x032c2550) */
/* WARNING: Removing unreachable block (ram,0x032c24d8) */
/* WARNING: Removing unreachable block (ram,0x032c24f0) */
/* WARNING: Removing unreachable block (ram,0x032c24f8) */
/* WARNING: Removing unreachable block (ram,0x032c24fc) */
/* WARNING: Removing unreachable block (ram,0x032c2510) */
/* WARNING: Removing unreachable block (ram,0x032c2524) */
/* WARNING: Removing unreachable block (ram,0x032c252c) */
/* WARNING: Removing unreachable block (ram,0x032c2530) */
/* WARNING: Removing unreachable block (ram,0x032c2540) */
/* WARNING: Removing unreachable block (ram,0x015ec6b8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_LeaderboardEntryBehaviour__SetPlacingIconActive
                 (undefined1 param_1 [16],uint param_2,float param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long unaff_x19;
  undefined8 uVar14;
  undefined8 unaff_x21;
  undefined8 uVar15;
  undefined8 unaff_x22;
  undefined8 uVar16;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *****pppppuVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  uint extraout_s0;
  uint extraout_s0_00;
  uint uVar20;
  undefined4 uVar21;
  uint extraout_s0_01;
  uint extraout_s0_02;
  uint extraout_s0_03;
  uint extraout_s0_04;
  undefined4 extraout_s0_05;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  ulong unaff_d8;
  float fVar26;
  ulong unaff_d9;
  ulong uVar27;
  ulong unaff_d10;
  ulong uVar28;
  undefined8 unaff_d11;
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined8 ****ppppuStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [12];
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 ****ppppuStack_b0;
  undefined *puStack_a8;
  undefined8 ****ppppuStack_80;
  undefined *puStack_78;
  undefined8 ****ppppuStack_40;
  undefined *puStack_38;
  
  puVar4 = &stack0xffffffffffffffd0;
  if ((*(long *)(param_4 + 0x38) == 0) ||
     (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_4 + 0x38),0), unaff_x19 = param_5, unaff_x21 = param_6
     , lVar6 == 0)) {
    lVar6 = func_0x00f78af4();
    puStack_38 = &Atlas_UI_LeaderboardEntryBehaviour__UpdatePanelSizes;
    param_5 = unaff_x19;
    ppppuStack_40 = (undefined8 ****)&stack0xfffffffffffffff0;
    if ((*(long *)(lVar6 + 0x50) != 0) &&
       (param_4 = *(long *)(lVar6 + 0x18), param_5 = lVar6, param_4 != 0)) {
      fVar25 = *(float *)(lVar6 + 0x68);
      unaff_d8 = (ulong)(uint)fVar25;
      fVar26 = *(float *)(lVar6 + 0x58);
      unaff_d9 = (ulong)(uint)fVar26;
      param_3 = *(float *)(*(long *)(lVar6 + 0x50) + 0xdc);
      unaff_d10 = (ulong)(uint)param_3;
      /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(param_4,0);
      param_3 = param_3 * 0.5;
      /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(fVar25 + fVar26 + param_3,param_4,0);
      plVar7 = *(long **)(lVar6 + 0x48);
      if (plVar7 != (long *)0x0) {
        fVar25 = 1.0 - *(float *)(lVar6 + 0x68) /
                       (*(float *)(lVar6 + 0x68) + *(float *)(lVar6 + 0x58));
        if (_UNK_033f8758 < ABS(*(float *)((long)plVar7 + 0x144) - fVar25)) {
          *(float *)((long)plVar7 + 0x144) = fVar25;
                    /* WARNING: Could not recover jumptable at 0x02f8b04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          plVar7 = (long *)(**(code **)(*plVar7 + 0x2f8))(plVar7,*(undefined8 *)(*plVar7 + 0x300));
          return plVar7;
        }
        return plVar7;
      }
    }
    auVar29 = func_0x00f78af4();
    param_6 = auVar29._8_8_;
    puStack_78 = &Atlas_UI_LeaderboardEntryBehaviour__SetDeltaStarsActive;
    uVar16 = 0x3d23990;
    ppppuStack_80 = &ppppuStack_40;
    if ((bRam0000000003eb5404 & 1) == 0) {
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5404 = 1;
    }
    uVar15 = *(undefined8 *)(auVar29._0_8_ + 0x138);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar7 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar15,0);
    if ((int)plVar7 == 0) {
      return plVar7;
    }
    lVar6 = *(long *)(auVar29._0_8_ + 0x138);
    if ((lVar6 == 0) || (lVar6 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(lVar6,0), lVar6 == 0)) {
      auVar30 = func_0x00f78af4();
      uStack_d4 = auVar30._8_4_;
      uStack_d0 = 0x3d23990;
      puStack_a8 = &Atlas_UI_LeaderboardEntryBehaviour__SetDeltaStarsText;
      uStack_c8 = uVar15;
      ppppuStack_b0 = &ppppuStack_80;
      auStack_c0 = auVar29;
      if ((bRam0000000003eb5405 & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d66fb0);
        bRam0000000003eb5405 = 1;
      }
      plVar7 = *(long **)(auVar30._0_8_ + 0x138);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar8 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar7,0);
      if ((int)plVar8 != 0) {
        plVar8 = *(long **)(auVar30._0_8_ + 0x140);
        uVar9 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_d4,0);
        uVar15 = 0;
        uVar9 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('+')*/ uRam0000000003d66fb0,uVar9);
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)func_0x00f78af4();
          puVar2 = &stack0xfffffffffffffed0;
          puStack_e8 = &Atlas_UI_LeaderboardEntryBehaviour__PlayCrownSpawnTween;
          pppppuVar17 = &ppppuStack_f0;
          uVar13 = (ulong)(uint)param_3;
          uVar27 = (ulong)param_2;
          uVar28 = (ulong)extraout_s0;
          uVar9 = 0x3eb5000;
          uVar22 = param_2;
          fVar25 = param_3;
          ppppuStack_f0 = &ppppuStack_b0;
          if ((bRam0000000003eb5406 & 1) == 0) {
            func_0x00f78a20(0x3d53528);
            bRam0000000003eb5406 = 1;
          }
          if (plVar8[7] == 0) {
            puVar19 = &Atlas_UI_LeaderboardEntryBehaviour__StartLargeThenGoNormal;
            plVar12 = (long *)func_0x00f78af4();
            lVar6 = extraout_x1_00;
            uVar14 = extraout_x1;
            uVar20 = extraout_s0_00;
          }
          else {
            lVar6 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(plVar8[7],uRam0000000003d53528);
            uVar16 = 0x3d23990;
            uVar9 = 0x3d23990;
            uVar14 = 0;
            puVar2 = auStack_e0;
            plVar12 = plVar8;
            uVar15 = extraout_x1;
            plVar8 = plVar7;
            pppppuVar17 = (undefined8 *****)ppppuStack_f0;
            puVar19 = puStack_e8;
            uVar20 = extraout_s0;
            uVar22 = param_2;
            fVar25 = param_3;
            uVar13 = unaff_d8;
            uVar27 = unaff_d9;
            uVar28 = unaff_d10;
          }
          while( true ) {
            while( true ) {
              puVar3 = puVar2 + -0x80;
              *(undefined8 *)(puVar2 + -0x80) = unaff_d11;
              *(ulong *)(puVar2 + -0x78) = uVar28;
              *(ulong *)(puVar2 + -0x70) = uVar27;
              *(ulong *)(puVar2 + -0x68) = uVar13;
              *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
              *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
              *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
              *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
              *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
              *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
              *(undefined8 *)(puVar2 + -0x30) = uVar16;
              *(undefined8 *)(puVar2 + -0x28) = uVar9;
              *(long **)(puVar2 + -0x20) = plVar8;
              *(undefined8 *)(puVar2 + -0x18) = uVar14;
              *(undefined8 ******)(puVar2 + -0x10) = pppppuVar17;
              *(undefined **)(puVar2 + -8) = puVar19;
              puVar18 = puVar2 + -0x10;
              uVar13 = (ulong)(uint)fVar25;
              unaff_x23 = 0x3d27df8;
              uVar23 = uVar22;
              if ((bRam0000000003eb540e & 1) == 0) {
                func_0x00f78a20(0x3d2db28);
                func_0x00f78a20(0x3d1c100);
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d5e780);
                func_0x00f78a20(0x3d5e7b8);
                func_0x00f78a20(0x3d5e868);
                func_0x00f78a20(0x3d63540);
                func_0x00f78a20(0x3d27df8);
                bRam0000000003eb540e = 1;
              }
              lVar10 = func_0x00f78aec(/*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0_TypeInfo*/ uRam0000000003d27df8);
              /*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0$$.ctor*/ func_0x0155abe8(lVar10,0);
              if ((lVar10 != 0) && (*(long *)(lVar10 + 0x10) = lVar6, lVar6 != 0)) {
                uVar21 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar6,0);
                uVar16 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
                /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar16,lVar10,uRam0000000003d63540,uRam0000000003d2db28);
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                plVar8 = (long *)/*DG.Tweening.DOTween$$To*/ func_0x01694ae4(uVar20,uVar21,uVar22,uVar16,0);
                puVar19 = &UNK_015ec164;
                plVar7 = *(long **)(lVar10 + 0x10);
                uVar9 = uRam0000000003d5e868;
                goto code_r0x018eee1c;
              }
              plVar7 = (long *)func_0x00f78af4();
              *(undefined8 *)(puVar2 + -0xe0) = unaff_d11;
              *(ulong *)(puVar2 + -0xd8) = (ulong)uVar20;
              *(ulong *)(puVar2 + -0xd0) = (ulong)uVar22;
              *(ulong *)(puVar2 + -200) = uVar13;
              *(undefined8 *)(puVar2 + -0xc0) = unaff_x24;
              *(undefined8 *)(puVar2 + -0xb8) = 0x3d27df8;
              *(long *)(puVar2 + -0xb0) = lVar10;
              *(long *)(puVar2 + -0xa8) = lVar6;
              *(undefined8 *)(puVar2 + -0xa0) = uVar15;
              *(long **)(puVar2 + -0x98) = plVar12;
              *(undefined1 **)(puVar2 + -0x90) = puVar18;
              *(undefined **)(puVar2 + -0x88) =
                   &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerEmphasisTween;
              uVar24 = uVar23;
              fVar26 = fVar25;
              if ((bRam0000000003eb5407 & 1) == 0) {
                func_0x00f78a20(0x3d578e0);
                func_0x00f78a20(0x3d5e780);
                func_0x00f78a20(0x3d5e7b8);
                func_0x00f78a20(0x3d5e868);
                bRam0000000003eb5407 = 1;
              }
              if (plVar7[0x22] != 0) {
                uVar16 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar7[0x22],uRam0000000003d578e0);
                uVar16 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(extraout_s0_01,extraout_s0_01,extraout_s0_01,uVar23,0,
                                         uVar16,0,0);
                uVar16 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(fVar25,uVar16,uRam0000000003d5e780);
                plVar8 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar16,extraout_x1_01,uRam0000000003d5e7b8);
                puVar18 = *(undefined1 **)(puVar2 + -0x90);
                puVar19 = *(undefined **)(puVar2 + -0x88);
                uVar15 = *(undefined8 *)(puVar2 + -0xa0);
                lVar10 = *(long *)(puVar2 + -0xb0);
                uVar16 = *(undefined8 *)(puVar2 + -0xa8);
                puVar3 = puVar2 + -0x80;
                uVar9 = uRam0000000003d5e868;
                plVar12 = *(long **)(puVar2 + -0x98);
                goto code_r0x018eee1c;
              }
              plVar11 = (long *)func_0x00f78af4();
              *(undefined8 *)(puVar2 + -0x130) = unaff_d11;
              *(ulong *)(puVar2 + -0x128) = (ulong)extraout_s0_01;
              *(ulong *)(puVar2 + -0x120) = (ulong)uVar23;
              *(ulong *)(puVar2 + -0x118) = (ulong)(uint)fVar25;
              *(long *)(puVar2 + -0x110) = lVar10;
              *(undefined8 *)(puVar2 + -0x108) = 0x3eb5000;
              *(undefined8 *)(puVar2 + -0x100) = extraout_x1_01;
              *(long **)(puVar2 + -0xf8) = plVar7;
              *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0x90;
              *(undefined **)(puVar2 + -0xe8) =
                   &Atlas_UI_LeaderboardEntryBehaviour__PlayStarDeltaSpawnTween;
              uVar22 = uVar24;
              fVar25 = fVar26;
              if ((bRam0000000003eb5408 & 1) == 0) {
                func_0x00f78a20(0x3d578e0);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb5408 = 1;
              }
              lVar6 = plVar11[0x27];
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar6,0);
              if (iVar5 == 0) {
                return (long *)0x0;
              }
              if (plVar11[0x27] == 0) break;
              lVar6 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar11[0x27],uRam0000000003d578e0);
              pppppuVar17 = *(undefined8 ******)(puVar2 + -0xf0);
              puVar19 = *(undefined **)(puVar2 + -0xe8);
              plVar8 = *(long **)(puVar2 + -0x100);
              uVar14 = *(undefined8 *)(puVar2 + -0xf8);
              uVar16 = *(undefined8 *)(puVar2 + -0x110);
              uVar9 = *(undefined8 *)(puVar2 + -0x108);
              uVar27 = *(ulong *)(puVar2 + -0x120);
              uVar13 = *(ulong *)(puVar2 + -0x118);
              unaff_d11 = *(undefined8 *)(puVar2 + -0x130);
              uVar28 = *(ulong *)(puVar2 + -0x128);
              puVar2 = puVar2 + -0xe0;
              plVar12 = plVar11;
              uVar15 = extraout_x1_02;
              uVar20 = extraout_s0_02;
              uVar22 = uVar24;
              fVar25 = fVar26;
            }
            plVar12 = (long *)func_0x00f78af4();
            *(undefined8 *)(puVar2 + -0x180) = unaff_d11;
            *(ulong *)(puVar2 + -0x178) = (ulong)extraout_s0_02;
            *(ulong *)(puVar2 + -0x170) = (ulong)uVar24;
            *(ulong *)(puVar2 + -0x168) = (ulong)(uint)fVar26;
            *(undefined8 *)(puVar2 + -0x160) = 0x3d23990;
            *(long *)(puVar2 + -0x158) = lVar6;
            *(long **)(puVar2 + -0x150) = plVar11;
            *(undefined8 *)(puVar2 + -0x148) = extraout_x1_02;
            *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0xf0;
            *(undefined **)(puVar2 + -0x138) =
                 &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerSpawnTween;
            uVar20 = uVar22;
            fVar26 = fVar25;
            if ((bRam0000000003eb5409 & 1) == 0) {
              func_0x00f78a20(0x3d578e0);
              bRam0000000003eb5409 = 1;
            }
            if (plVar12[0x22] == 0) break;
            lVar6 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar12[0x22],uRam0000000003d578e0);
            pppppuVar17 = *(undefined8 ******)(puVar2 + -0x140);
            puVar19 = *(undefined **)(puVar2 + -0x138);
            plVar8 = *(long **)(puVar2 + -0x150);
            uVar14 = *(undefined8 *)(puVar2 + -0x148);
            uVar16 = *(undefined8 *)(puVar2 + -0x160);
            uVar9 = *(undefined8 *)(puVar2 + -0x158);
            uVar27 = *(ulong *)(puVar2 + -0x170);
            uVar13 = *(ulong *)(puVar2 + -0x168);
            unaff_d11 = *(undefined8 *)(puVar2 + -0x180);
            uVar28 = *(ulong *)(puVar2 + -0x178);
            puVar2 = puVar2 + -0x130;
            uVar15 = extraout_x1_03;
            uVar20 = extraout_s0_03;
          }
          plVar11 = (long *)func_0x00f78af4();
          *(ulong *)(puVar2 + -0x1c0) = (ulong)uVar22;
          *(ulong *)(puVar2 + -0x1b8) = (ulong)(uint)fVar25;
          *(undefined8 *)(puVar2 + -0x1b0) = 0x3d23990;
          *(undefined8 *)(puVar2 + -0x1a8) = 0x3eb5000;
          *(long **)(puVar2 + -0x1a0) = plVar12;
          *(undefined8 *)(puVar2 + -0x198) = extraout_x1_03;
          *(undefined1 **)(puVar2 + -400) = puVar2 + -0x140;
          *(undefined **)(puVar2 + -0x188) =
               &Atlas_UI_LeaderboardEntryBehaviour__PlayEnterStatsStarDeltaTween;
          uVar22 = uVar20;
          if ((bRam0000000003eb540a & 1) == 0) {
            func_0x00f78a20(0x3d578e0);
            func_0x00f78a20(0x3d23990);
            func_0x00f78a20(0x3d5e768);
            func_0x00f78a20(0x3d5e7a0);
            func_0x00f78a20(0x3d5e838);
            bRam0000000003eb540a = 1;
          }
          lVar6 = plVar11[0x27];
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar6,0);
          if (iVar5 == 0) {
            return (long *)0x0;
          }
          if (plVar11[0x27] == 0) {
            plVar7 = (long *)func_0x00f78af4();
            puVar3 = puVar2 + -0x230;
            *(undefined8 *)(puVar2 + -0x230) = unaff_d11;
            *(ulong *)(puVar2 + -0x228) = (ulong)extraout_s0_03;
            *(ulong *)(puVar2 + -0x220) = (ulong)extraout_s0_04;
            *(ulong *)(puVar2 + -0x218) = (ulong)uVar20;
            *(undefined8 *)(puVar2 + -0x210) = unaff_x26;
            *(undefined8 *)(puVar2 + -0x208) = unaff_x25;
            *(undefined8 *)(puVar2 + -0x200) = unaff_x24;
            *(undefined8 *)(puVar2 + -0x1f8) = 0x3d27df8;
            *(undefined8 *)(puVar2 + -0x1f0) = 0x3d23990;
            *(long *)(puVar2 + -0x1e8) = lVar6;
            *(undefined8 *)(puVar2 + -0x1e0) = extraout_x1_04;
            *(long **)(puVar2 + -0x1d8) = plVar11;
            *(undefined1 **)(puVar2 + -0x1d0) = puVar2 + -400;
            *(undefined **)(puVar2 + -0x1c8) =
                 &Atlas_UI_LeaderboardEntryBehaviour__PlayHideStarsTween;
            puVar18 = puVar2 + -0x1d0;
            if ((bRam0000000003eb540b & 1) == 0) {
              func_0x00f78a20(0x3d59de8);
              func_0x00f78a20(0x3d23990);
              func_0x00f78a20(0x3d25428);
              func_0x00f78a20(0x3d5e6c0);
              func_0x00f78a20(0x3d5e758);
              func_0x00f78a20(0x3d5e788);
              func_0x00f78a20(0x3d5e800);
              bRam0000000003eb540b = 1;
            }
            lVar6 = plVar7[0x29];
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar6,0);
            if (iVar5 == 0) {
              return (long *)0x0;
            }
            uVar16 = 0x3d5e000;
            lVar10 = 0x3d5e000;
            uVar15 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(extraout_s0_05,uVar22,plVar7[0x29],0);
            uVar15 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(fVar26,uVar15,uRam0000000003d5e758);
            plVar8 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar15,extraout_x1_05,uRam0000000003d5e788);
            puVar19 = &UNK_015ec6b8;
            uVar9 = uRam0000000003d5e800;
            plVar12 = plVar7;
            uVar15 = extraout_x1_05;
          }
          else {
            uVar16 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar11[0x27],uRam0000000003d578e0);
            uVar16 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPosX*/ func_0x016a707c(0,extraout_s0_04,uVar16,0,0);
            uVar16 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar20,uVar16,uRam0000000003d5e768);
            plVar8 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar16,extraout_x1_04,uRam0000000003d5e7a0);
            puVar18 = *(undefined1 **)(puVar2 + -400);
            puVar19 = *(undefined **)(puVar2 + -0x188);
            uVar15 = *(undefined8 *)(puVar2 + -0x1a0);
            lVar10 = *(long *)(puVar2 + -0x1b0);
            uVar16 = *(undefined8 *)(puVar2 + -0x1a8);
            puVar3 = puVar2 + -0x180;
            plVar7 = plVar11;
            uVar9 = uRam0000000003d5e838;
            plVar12 = *(long **)(puVar2 + -0x198);
          }
code_r0x018eee1c:
          *(long *)(puVar3 + -0x30) = lVar10;
          *(undefined8 *)(puVar3 + -0x28) = uVar16;
          *(undefined8 *)(puVar3 + -0x20) = uVar15;
          *(long **)(puVar3 + -0x18) = plVar12;
          *(undefined1 **)(puVar3 + -0x10) = puVar18;
          *(undefined **)(puVar3 + -8) = puVar19;
          if ((bRam0000000003eb66c1 & 1) == 0) {
            func_0x00f78a20(0x3d208f0,plVar7,uVar9);
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb66c1 = 1;
          }
          if ((plVar8 != (long *)0x0) && ((char)plVar8[0x1d] != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar5 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
            if (iVar5 != 0) {
              lVar6 = func_0x00f78adc(plVar7,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar13 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
              if ((uVar13 & 1) == 0) {
                if (plVar7 == (long *)0x0) goto code_r0x018eef34;
                lVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
              }
              else {
                if (lVar6 == 0) {
code_r0x018eef34:
                  auVar29 = func_0x00f78af4();
                  plVar12 = auVar29._0_8_;
                  *(long *)(puVar3 + -0x60) = lVar10;
                  *(long *)(puVar3 + -0x58) = lVar6;
                  *(long **)(puVar3 + -0x50) = plVar7;
                  *(long **)(puVar3 + -0x48) = plVar8;
                  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
                  *(undefined **)(puVar3 + -0x38) =
                       &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
                  if ((bRam0000000003eb66c2 & 1) == 0) {
                    func_0x00f78a20(0x3d20bc0);
                    func_0x00f78a20(0x3d25440);
                    bRam0000000003eb66c2 = 1;
                  }
                  if ((plVar12 != (long *)0x0) && ((char)plVar12[0x1d] != '\0')) {
                    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(plVar12,auVar29._8_8_,cVar1 != '\0',0);
                  }
                  return plVar12;
                }
                lVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar6,0);
              }
              plVar8[0x19] = lVar6;
            }
            plVar8[9] = (long)plVar7;
          }
          return plVar8;
        }
        plVar8 = (long *)(**(code **)(*plVar8 + 0x558))
                                   (plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x560));
      }
      return plVar8;
    }
    puVar4 = &stack0xffffffffffffff90;
    pppppuVar17 = (undefined8 *****)ppppuStack_80;
    puVar19 = puStack_78;
  }
  else {
    pppppuVar17 = (undefined8 *****)&stack0xfffffffffffffff0;
    puVar19 = (undefined *)0x15ebd08;
  }
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
  *(long *)(puVar4 + -0x20) = param_4;
  *(long *)(puVar4 + -0x18) = param_5;
  *(undefined8 ******)(puVar4 + -0x10) = pppppuVar17;
  *(undefined **)(puVar4 + -8) = puVar19;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar7 = (long *)(*pcRam0000000003ebf4c0)(lVar6,param_6);
  return plVar7;
}



// ============================================================
// RVA: 0x15ebd40 | Atlas.UI.LeaderboardEntryBehaviour.UpdatePanelSizes
// ============================================================

/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ec6b8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_LeaderboardEntryBehaviour__UpdatePanelSizes
                 (undefined1 param_1 [16],uint param_2,float param_3,long param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *****pppppuVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  uint extraout_s0;
  uint extraout_s0_00;
  uint uVar19;
  undefined4 uVar20;
  uint extraout_s0_01;
  uint extraout_s0_02;
  uint extraout_s0_03;
  uint extraout_s0_04;
  undefined4 extraout_s0_05;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  ulong unaff_d8;
  float fVar25;
  ulong unaff_d9;
  ulong uVar26;
  ulong unaff_d10;
  ulong uVar27;
  undefined8 unaff_d11;
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined8 ****ppppuStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [12];
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  if ((*(long *)(param_4 + 0x50) != 0) && (lVar13 = *(long *)(param_4 + 0x18), lVar13 != 0)) {
    fVar24 = *(float *)(param_4 + 0x68);
    unaff_d8 = (ulong)(uint)fVar24;
    fVar25 = *(float *)(param_4 + 0x58);
    unaff_d9 = (ulong)(uint)fVar25;
    param_3 = *(float *)(*(long *)(param_4 + 0x50) + 0xdc);
    unaff_d10 = (ulong)(uint)param_3;
    /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar13,0);
    param_3 = param_3 * 0.5;
    /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(fVar24 + fVar25 + param_3,lVar13,0);
    plVar5 = *(long **)(param_4 + 0x48);
    if (plVar5 != (long *)0x0) {
      fVar24 = 1.0 - *(float *)(param_4 + 0x68) /
                     (*(float *)(param_4 + 0x68) + *(float *)(param_4 + 0x58));
      if (_UNK_033f8758 < ABS(*(float *)((long)plVar5 + 0x144) - fVar24)) {
        *(float *)((long)plVar5 + 0x144) = fVar24;
                    /* WARNING: Could not recover jumptable at 0x02f8b04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        plVar5 = (long *)(**(code **)(*plVar5 + 0x2f8))(plVar5,*(undefined8 *)(*plVar5 + 0x300));
        return plVar5;
      }
      return plVar5;
    }
  }
  auVar28 = func_0x00f78af4();
  puStack_48 = &Atlas_UI_LeaderboardEntryBehaviour__SetDeltaStarsActive;
  uVar15 = 0x3d23990;
  ppuStack_50 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5404 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5404 = 1;
  }
  uVar14 = *(undefined8 *)(auVar28._0_8_ + 0x138);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar14,0);
  if ((int)plVar5 == 0) {
    return plVar5;
  }
  lVar13 = *(long *)(auVar28._0_8_ + 0x138);
  if ((lVar13 != 0) && (lVar13 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(lVar13,0), lVar13 != 0)) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar5 = (long *)(*pcRam0000000003ebf4c0)(lVar13,auVar28._8_8_);
    return plVar5;
  }
  auVar29 = func_0x00f78af4();
  uStack_a4 = auVar29._8_4_;
  uStack_a0 = 0x3d23990;
  puStack_78 = &Atlas_UI_LeaderboardEntryBehaviour__SetDeltaStarsText;
  uStack_98 = uVar14;
  pppuStack_80 = &ppuStack_50;
  auStack_90 = auVar28;
  if ((bRam0000000003eb5405 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d66fb0);
    bRam0000000003eb5405 = 1;
  }
  plVar5 = *(long **)(auVar29._0_8_ + 0x138);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar5,0);
  if ((int)plVar6 != 0) {
    plVar6 = *(long **)(auVar29._0_8_ + 0x140);
    uVar7 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_a4,0);
    uVar14 = 0;
    uVar7 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('+')*/ uRam0000000003d66fb0,uVar7);
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)func_0x00f78af4();
      puVar2 = &stack0xffffffffffffff00;
      puStack_b8 = &Atlas_UI_LeaderboardEntryBehaviour__PlayCrownSpawnTween;
      pppppuVar16 = &ppppuStack_c0;
      uVar11 = (ulong)(uint)param_3;
      uVar26 = (ulong)param_2;
      uVar27 = (ulong)extraout_s0;
      uVar7 = 0x3eb5000;
      uVar21 = param_2;
      fVar24 = param_3;
      ppppuStack_c0 = &pppuStack_80;
      if ((bRam0000000003eb5406 & 1) == 0) {
        func_0x00f78a20(0x3d53528);
        bRam0000000003eb5406 = 1;
      }
      if (plVar6[7] == 0) {
        puVar18 = &Atlas_UI_LeaderboardEntryBehaviour__StartLargeThenGoNormal;
        plVar10 = (long *)func_0x00f78af4();
        lVar13 = extraout_x1_00;
        uVar12 = extraout_x1;
        uVar19 = extraout_s0_00;
      }
      else {
        lVar13 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(plVar6[7],uRam0000000003d53528);
        uVar15 = 0x3d23990;
        uVar7 = 0x3d23990;
        uVar12 = 0;
        puVar2 = auStack_b0;
        plVar10 = plVar6;
        uVar14 = extraout_x1;
        plVar6 = plVar5;
        pppppuVar16 = (undefined8 *****)ppppuStack_c0;
        puVar18 = puStack_b8;
        uVar19 = extraout_s0;
        uVar21 = param_2;
        fVar24 = param_3;
        uVar11 = unaff_d8;
        uVar26 = unaff_d9;
        uVar27 = unaff_d10;
      }
      while( true ) {
        while( true ) {
          puVar3 = puVar2 + -0x80;
          *(undefined8 *)(puVar2 + -0x80) = unaff_d11;
          *(ulong *)(puVar2 + -0x78) = uVar27;
          *(ulong *)(puVar2 + -0x70) = uVar26;
          *(ulong *)(puVar2 + -0x68) = uVar11;
          *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
          *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
          *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
          *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
          *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
          *(undefined8 *)(puVar2 + -0x30) = uVar15;
          *(undefined8 *)(puVar2 + -0x28) = uVar7;
          *(long **)(puVar2 + -0x20) = plVar6;
          *(undefined8 *)(puVar2 + -0x18) = uVar12;
          *(undefined8 ******)(puVar2 + -0x10) = pppppuVar16;
          *(undefined **)(puVar2 + -8) = puVar18;
          puVar17 = puVar2 + -0x10;
          uVar11 = (ulong)(uint)fVar24;
          unaff_x23 = 0x3d27df8;
          uVar22 = uVar21;
          if ((bRam0000000003eb540e & 1) == 0) {
            func_0x00f78a20(0x3d2db28);
            func_0x00f78a20(0x3d1c100);
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d5e780);
            func_0x00f78a20(0x3d5e7b8);
            func_0x00f78a20(0x3d5e868);
            func_0x00f78a20(0x3d63540);
            func_0x00f78a20(0x3d27df8);
            bRam0000000003eb540e = 1;
          }
          lVar8 = func_0x00f78aec(/*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0_TypeInfo*/ uRam0000000003d27df8);
          /*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0$$.ctor*/ func_0x0155abe8(lVar8,0);
          if ((lVar8 != 0) && (*(long *)(lVar8 + 0x10) = lVar13, lVar13 != 0)) {
            uVar20 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar13,0);
            uVar15 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
            /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar15,lVar8,uRam0000000003d63540,uRam0000000003d2db28);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar6 = (long *)/*DG.Tweening.DOTween$$To*/ func_0x01694ae4(uVar19,uVar20,uVar21,uVar15,0);
            puVar18 = &UNK_015ec164;
            plVar5 = *(long **)(lVar8 + 0x10);
            uVar7 = uRam0000000003d5e868;
            goto code_r0x018eee1c;
          }
          plVar5 = (long *)func_0x00f78af4();
          *(undefined8 *)(puVar2 + -0xe0) = unaff_d11;
          *(ulong *)(puVar2 + -0xd8) = (ulong)uVar19;
          *(ulong *)(puVar2 + -0xd0) = (ulong)uVar21;
          *(ulong *)(puVar2 + -200) = uVar11;
          *(undefined8 *)(puVar2 + -0xc0) = unaff_x24;
          *(undefined8 *)(puVar2 + -0xb8) = 0x3d27df8;
          *(long *)(puVar2 + -0xb0) = lVar8;
          *(long *)(puVar2 + -0xa8) = lVar13;
          *(undefined8 *)(puVar2 + -0xa0) = uVar14;
          *(long **)(puVar2 + -0x98) = plVar10;
          *(undefined1 **)(puVar2 + -0x90) = puVar17;
          *(undefined **)(puVar2 + -0x88) =
               &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerEmphasisTween;
          uVar23 = uVar22;
          fVar25 = fVar24;
          if ((bRam0000000003eb5407 & 1) == 0) {
            func_0x00f78a20(0x3d578e0);
            func_0x00f78a20(0x3d5e780);
            func_0x00f78a20(0x3d5e7b8);
            func_0x00f78a20(0x3d5e868);
            bRam0000000003eb5407 = 1;
          }
          if (plVar5[0x22] != 0) {
            uVar15 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar5[0x22],uRam0000000003d578e0);
            uVar15 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(extraout_s0_01,extraout_s0_01,extraout_s0_01,uVar22,0,uVar15,0,
                                     0);
            uVar15 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(fVar24,uVar15,uRam0000000003d5e780);
            plVar6 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar15,extraout_x1_01,uRam0000000003d5e7b8);
            puVar17 = *(undefined1 **)(puVar2 + -0x90);
            puVar18 = *(undefined **)(puVar2 + -0x88);
            uVar14 = *(undefined8 *)(puVar2 + -0xa0);
            lVar8 = *(long *)(puVar2 + -0xb0);
            uVar15 = *(undefined8 *)(puVar2 + -0xa8);
            puVar3 = puVar2 + -0x80;
            uVar7 = uRam0000000003d5e868;
            plVar10 = *(long **)(puVar2 + -0x98);
            goto code_r0x018eee1c;
          }
          plVar9 = (long *)func_0x00f78af4();
          *(undefined8 *)(puVar2 + -0x130) = unaff_d11;
          *(ulong *)(puVar2 + -0x128) = (ulong)extraout_s0_01;
          *(ulong *)(puVar2 + -0x120) = (ulong)uVar22;
          *(ulong *)(puVar2 + -0x118) = (ulong)(uint)fVar24;
          *(long *)(puVar2 + -0x110) = lVar8;
          *(undefined8 *)(puVar2 + -0x108) = 0x3eb5000;
          *(undefined8 *)(puVar2 + -0x100) = extraout_x1_01;
          *(long **)(puVar2 + -0xf8) = plVar5;
          *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0x90;
          *(undefined **)(puVar2 + -0xe8) =
               &Atlas_UI_LeaderboardEntryBehaviour__PlayStarDeltaSpawnTween;
          uVar21 = uVar23;
          fVar24 = fVar25;
          if ((bRam0000000003eb5408 & 1) == 0) {
            func_0x00f78a20(0x3d578e0);
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb5408 = 1;
          }
          lVar13 = plVar9[0x27];
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar13,0);
          if (iVar4 == 0) {
            return (long *)0x0;
          }
          if (plVar9[0x27] == 0) break;
          lVar13 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar9[0x27],uRam0000000003d578e0);
          pppppuVar16 = *(undefined8 ******)(puVar2 + -0xf0);
          puVar18 = *(undefined **)(puVar2 + -0xe8);
          plVar6 = *(long **)(puVar2 + -0x100);
          uVar12 = *(undefined8 *)(puVar2 + -0xf8);
          uVar15 = *(undefined8 *)(puVar2 + -0x110);
          uVar7 = *(undefined8 *)(puVar2 + -0x108);
          uVar26 = *(ulong *)(puVar2 + -0x120);
          uVar11 = *(ulong *)(puVar2 + -0x118);
          unaff_d11 = *(undefined8 *)(puVar2 + -0x130);
          uVar27 = *(ulong *)(puVar2 + -0x128);
          puVar2 = puVar2 + -0xe0;
          plVar10 = plVar9;
          uVar14 = extraout_x1_02;
          uVar19 = extraout_s0_02;
          uVar21 = uVar23;
          fVar24 = fVar25;
        }
        plVar10 = (long *)func_0x00f78af4();
        *(undefined8 *)(puVar2 + -0x180) = unaff_d11;
        *(ulong *)(puVar2 + -0x178) = (ulong)extraout_s0_02;
        *(ulong *)(puVar2 + -0x170) = (ulong)uVar23;
        *(ulong *)(puVar2 + -0x168) = (ulong)(uint)fVar25;
        *(undefined8 *)(puVar2 + -0x160) = 0x3d23990;
        *(long *)(puVar2 + -0x158) = lVar13;
        *(long **)(puVar2 + -0x150) = plVar9;
        *(undefined8 *)(puVar2 + -0x148) = extraout_x1_02;
        *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0xf0;
        *(undefined **)(puVar2 + -0x138) =
             &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerSpawnTween;
        uVar19 = uVar21;
        fVar25 = fVar24;
        if ((bRam0000000003eb5409 & 1) == 0) {
          func_0x00f78a20(0x3d578e0);
          bRam0000000003eb5409 = 1;
        }
        if (plVar10[0x22] == 0) break;
        lVar13 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar10[0x22],uRam0000000003d578e0);
        pppppuVar16 = *(undefined8 ******)(puVar2 + -0x140);
        puVar18 = *(undefined **)(puVar2 + -0x138);
        plVar6 = *(long **)(puVar2 + -0x150);
        uVar12 = *(undefined8 *)(puVar2 + -0x148);
        uVar15 = *(undefined8 *)(puVar2 + -0x160);
        uVar7 = *(undefined8 *)(puVar2 + -0x158);
        uVar26 = *(ulong *)(puVar2 + -0x170);
        uVar11 = *(ulong *)(puVar2 + -0x168);
        unaff_d11 = *(undefined8 *)(puVar2 + -0x180);
        uVar27 = *(ulong *)(puVar2 + -0x178);
        puVar2 = puVar2 + -0x130;
        uVar14 = extraout_x1_03;
        uVar19 = extraout_s0_03;
      }
      plVar9 = (long *)func_0x00f78af4();
      *(ulong *)(puVar2 + -0x1c0) = (ulong)uVar21;
      *(ulong *)(puVar2 + -0x1b8) = (ulong)(uint)fVar24;
      *(undefined8 *)(puVar2 + -0x1b0) = 0x3d23990;
      *(undefined8 *)(puVar2 + -0x1a8) = 0x3eb5000;
      *(long **)(puVar2 + -0x1a0) = plVar10;
      *(undefined8 *)(puVar2 + -0x198) = extraout_x1_03;
      *(undefined1 **)(puVar2 + -400) = puVar2 + -0x140;
      *(undefined **)(puVar2 + -0x188) =
           &Atlas_UI_LeaderboardEntryBehaviour__PlayEnterStatsStarDeltaTween;
      uVar21 = uVar19;
      if ((bRam0000000003eb540a & 1) == 0) {
        func_0x00f78a20(0x3d578e0);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d5e768);
        func_0x00f78a20(0x3d5e7a0);
        func_0x00f78a20(0x3d5e838);
        bRam0000000003eb540a = 1;
      }
      lVar13 = plVar9[0x27];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar13,0);
      if (iVar4 == 0) {
        return (long *)0x0;
      }
      if (plVar9[0x27] == 0) {
        plVar5 = (long *)func_0x00f78af4();
        puVar3 = puVar2 + -0x230;
        *(undefined8 *)(puVar2 + -0x230) = unaff_d11;
        *(ulong *)(puVar2 + -0x228) = (ulong)extraout_s0_03;
        *(ulong *)(puVar2 + -0x220) = (ulong)extraout_s0_04;
        *(ulong *)(puVar2 + -0x218) = (ulong)uVar19;
        *(undefined8 *)(puVar2 + -0x210) = unaff_x26;
        *(undefined8 *)(puVar2 + -0x208) = unaff_x25;
        *(undefined8 *)(puVar2 + -0x200) = unaff_x24;
        *(undefined8 *)(puVar2 + -0x1f8) = 0x3d27df8;
        *(undefined8 *)(puVar2 + -0x1f0) = 0x3d23990;
        *(long *)(puVar2 + -0x1e8) = lVar13;
        *(undefined8 *)(puVar2 + -0x1e0) = extraout_x1_04;
        *(long **)(puVar2 + -0x1d8) = plVar9;
        *(undefined1 **)(puVar2 + -0x1d0) = puVar2 + -400;
        *(undefined **)(puVar2 + -0x1c8) = &Atlas_UI_LeaderboardEntryBehaviour__PlayHideStarsTween;
        puVar17 = puVar2 + -0x1d0;
        if ((bRam0000000003eb540b & 1) == 0) {
          func_0x00f78a20(0x3d59de8);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d25428);
          func_0x00f78a20(0x3d5e6c0);
          func_0x00f78a20(0x3d5e758);
          func_0x00f78a20(0x3d5e788);
          func_0x00f78a20(0x3d5e800);
          bRam0000000003eb540b = 1;
        }
        lVar13 = plVar5[0x29];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar13,0);
        if (iVar4 == 0) {
          return (long *)0x0;
        }
        uVar15 = 0x3d5e000;
        lVar8 = 0x3d5e000;
        uVar14 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(extraout_s0_05,uVar21,plVar5[0x29],0);
        uVar14 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(fVar25,uVar14,uRam0000000003d5e758);
        plVar6 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar14,extraout_x1_05,uRam0000000003d5e788);
        puVar18 = &UNK_015ec6b8;
        uVar7 = uRam0000000003d5e800;
        plVar10 = plVar5;
        uVar14 = extraout_x1_05;
      }
      else {
        uVar15 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar9[0x27],uRam0000000003d578e0);
        uVar15 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPosX*/ func_0x016a707c(0,extraout_s0_04,uVar15,0,0);
        uVar15 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar19,uVar15,uRam0000000003d5e768);
        plVar6 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar15,extraout_x1_04,uRam0000000003d5e7a0);
        puVar17 = *(undefined1 **)(puVar2 + -400);
        puVar18 = *(undefined **)(puVar2 + -0x188);
        uVar14 = *(undefined8 *)(puVar2 + -0x1a0);
        lVar8 = *(long *)(puVar2 + -0x1b0);
        uVar15 = *(undefined8 *)(puVar2 + -0x1a8);
        puVar3 = puVar2 + -0x180;
        plVar5 = plVar9;
        uVar7 = uRam0000000003d5e838;
        plVar10 = *(long **)(puVar2 + -0x198);
      }
code_r0x018eee1c:
      *(long *)(puVar3 + -0x30) = lVar8;
      *(undefined8 *)(puVar3 + -0x28) = uVar15;
      *(undefined8 *)(puVar3 + -0x20) = uVar14;
      *(long **)(puVar3 + -0x18) = plVar10;
      *(undefined1 **)(puVar3 + -0x10) = puVar17;
      *(undefined **)(puVar3 + -8) = puVar18;
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,plVar5,uVar7);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((plVar6 != (long *)0x0) && ((char)plVar6[0x1d] != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar4 != 0) {
          lVar13 = func_0x00f78adc(plVar5,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar13,0,0);
          if ((uVar11 & 1) == 0) {
            if (plVar5 == (long *)0x0) goto code_r0x018eef34;
            lVar13 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          }
          else {
            if (lVar13 == 0) {
code_r0x018eef34:
              auVar28 = func_0x00f78af4();
              plVar10 = auVar28._0_8_;
              *(long *)(puVar3 + -0x60) = lVar8;
              *(long *)(puVar3 + -0x58) = lVar13;
              *(long **)(puVar3 + -0x50) = plVar5;
              *(long **)(puVar3 + -0x48) = plVar6;
              *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
              *(undefined **)(puVar3 + -0x38) =
                   &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((plVar10 != (long *)0x0) && ((char)plVar10[0x1d] != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(plVar10,auVar28._8_8_,cVar1 != '\0',0);
              }
              return plVar10;
            }
            lVar13 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar13,0);
          }
          plVar6[0x19] = lVar13;
        }
        plVar6[9] = (long)plVar5;
      }
      return plVar6;
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x558))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x560));
  }
  return plVar6;
}



// ============================================================
// RVA: 0x15ebdd8 | Atlas.UI.LeaderboardEntryBehaviour.SetDeltaStarsActive
// ============================================================

/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ec6b8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */

long Atlas_UI_LeaderboardEntryBehaviour__SetDeltaStarsActive
               (undefined1 param_1 [16],uint param_2,uint param_3,long param_4,undefined8 param_5)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ***pppuVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  uint extraout_s0;
  uint extraout_s0_00;
  uint uVar21;
  undefined4 uVar22;
  uint extraout_s0_01;
  uint extraout_s0_02;
  uint extraout_s0_03;
  uint extraout_s0_04;
  undefined4 extraout_s0_05;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong uVar28;
  ulong unaff_d10;
  ulong uVar29;
  undefined8 unaff_d11;
  undefined1 auVar30 [16];
  undefined1 auVar31 [12];
  undefined8 **ppuStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [12];
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  uVar17 = 0x3d23990;
  if ((bRam0000000003eb5404 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb5404 = 1;
  }
  uVar16 = *(undefined8 *)(param_4 + 0x138);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar16,0);
  if ((int)lVar5 == 0) {
    return lVar5;
  }
  if ((*(long *)(param_4 + 0x138) != 0) &&
     (lVar5 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(*(long *)(param_4 + 0x138),0), lVar5 != 0)) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar5 = (*pcRam0000000003ebf4c0)(lVar5,param_5);
    return lVar5;
  }
  auVar31 = func_0x00f78af4();
  uStack_64 = auVar31._8_4_;
  uStack_60 = 0x3d23990;
  puStack_38 = &Atlas_UI_LeaderboardEntryBehaviour__SetDeltaStarsText;
  uStack_58 = uVar16;
  lStack_50 = param_4;
  uStack_48 = param_5;
  puStack_40 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb5405 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d66fb0);
    bRam0000000003eb5405 = 1;
  }
  plVar15 = *(long **)(auVar31._0_8_ + 0x138);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar15,0);
  if ((int)lVar5 != 0) {
    plVar13 = *(long **)(auVar31._0_8_ + 0x140);
    uVar6 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_64,0);
    uVar16 = 0;
    uVar6 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('+')*/ uRam0000000003d66fb0,uVar6);
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)func_0x00f78af4();
      puVar2 = &stack0xffffffffffffff40;
      puStack_78 = &Atlas_UI_LeaderboardEntryBehaviour__PlayCrownSpawnTween;
      pppuVar18 = &ppuStack_80;
      uVar11 = (ulong)param_3;
      uVar28 = (ulong)param_2;
      uVar29 = (ulong)extraout_s0;
      uVar6 = 0x3eb5000;
      uVar23 = param_2;
      uVar26 = param_3;
      ppuStack_80 = &puStack_40;
      if ((bRam0000000003eb5406 & 1) == 0) {
        func_0x00f78a20(0x3d53528);
        bRam0000000003eb5406 = 1;
      }
      if (plVar13[7] == 0) {
        puVar20 = &Atlas_UI_LeaderboardEntryBehaviour__StartLargeThenGoNormal;
        plVar9 = (long *)func_0x00f78af4();
        lVar5 = extraout_x1_00;
        uVar14 = extraout_x1;
        uVar21 = extraout_s0_00;
      }
      else {
        lVar5 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(plVar13[7],uRam0000000003d53528);
        uVar17 = 0x3d23990;
        uVar6 = 0x3d23990;
        uVar14 = 0;
        puVar2 = auStack_70;
        plVar9 = plVar13;
        uVar16 = extraout_x1;
        plVar13 = plVar15;
        pppuVar18 = (undefined8 ***)ppuStack_80;
        puVar20 = puStack_78;
        uVar21 = extraout_s0;
        uVar23 = param_2;
        uVar26 = param_3;
        uVar11 = unaff_d8;
        uVar28 = unaff_d9;
        uVar29 = unaff_d10;
      }
      while( true ) {
        while( true ) {
          puVar3 = puVar2 + -0x80;
          *(undefined8 *)(puVar2 + -0x80) = unaff_d11;
          *(ulong *)(puVar2 + -0x78) = uVar29;
          *(ulong *)(puVar2 + -0x70) = uVar28;
          *(ulong *)(puVar2 + -0x68) = uVar11;
          *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
          *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
          *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
          *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
          *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
          *(undefined8 *)(puVar2 + -0x30) = uVar17;
          *(undefined8 *)(puVar2 + -0x28) = uVar6;
          *(long **)(puVar2 + -0x20) = plVar13;
          *(undefined8 *)(puVar2 + -0x18) = uVar14;
          *(undefined8 ****)(puVar2 + -0x10) = pppuVar18;
          *(undefined **)(puVar2 + -8) = puVar20;
          puVar19 = puVar2 + -0x10;
          uVar11 = (ulong)uVar26;
          unaff_x23 = 0x3d27df8;
          uVar24 = uVar23;
          if ((bRam0000000003eb540e & 1) == 0) {
            func_0x00f78a20(0x3d2db28);
            func_0x00f78a20(0x3d1c100);
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d5e780);
            func_0x00f78a20(0x3d5e7b8);
            func_0x00f78a20(0x3d5e868);
            func_0x00f78a20(0x3d63540);
            func_0x00f78a20(0x3d27df8);
            bRam0000000003eb540e = 1;
          }
          lVar7 = func_0x00f78aec(/*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0_TypeInfo*/ uRam0000000003d27df8);
          /*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0$$.ctor*/ func_0x0155abe8(lVar7,0);
          if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) = lVar5, lVar5 != 0)) {
            uVar22 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar5,0);
            uVar17 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
            /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar17,lVar7,uRam0000000003d63540,uRam0000000003d2db28);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar5 = /*DG.Tweening.DOTween$$To*/ func_0x01694ae4(uVar21,uVar22,uVar23,uVar17,0);
            puVar20 = &UNK_015ec164;
            plVar15 = *(long **)(lVar7 + 0x10);
            uVar6 = uRam0000000003d5e868;
            goto code_r0x018eee1c;
          }
          plVar15 = (long *)func_0x00f78af4();
          *(undefined8 *)(puVar2 + -0xe0) = unaff_d11;
          *(ulong *)(puVar2 + -0xd8) = (ulong)uVar21;
          *(ulong *)(puVar2 + -0xd0) = (ulong)uVar23;
          *(ulong *)(puVar2 + -200) = uVar11;
          *(undefined8 *)(puVar2 + -0xc0) = unaff_x24;
          *(undefined8 *)(puVar2 + -0xb8) = 0x3d27df8;
          *(long *)(puVar2 + -0xb0) = lVar7;
          *(long *)(puVar2 + -0xa8) = lVar5;
          *(undefined8 *)(puVar2 + -0xa0) = uVar16;
          *(long **)(puVar2 + -0x98) = plVar9;
          *(undefined1 **)(puVar2 + -0x90) = puVar19;
          *(undefined **)(puVar2 + -0x88) =
               &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerEmphasisTween;
          uVar25 = uVar24;
          uVar27 = uVar26;
          if ((bRam0000000003eb5407 & 1) == 0) {
            func_0x00f78a20(0x3d578e0);
            func_0x00f78a20(0x3d5e780);
            func_0x00f78a20(0x3d5e7b8);
            func_0x00f78a20(0x3d5e868);
            bRam0000000003eb5407 = 1;
          }
          if (plVar15[0x22] != 0) {
            uVar17 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar15[0x22],uRam0000000003d578e0);
            uVar17 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(extraout_s0_01,extraout_s0_01,extraout_s0_01,uVar24,0,uVar17,0,
                                     0);
            uVar17 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar26,uVar17,uRam0000000003d5e780);
            lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar17,extraout_x1_01,uRam0000000003d5e7b8);
            puVar19 = *(undefined1 **)(puVar2 + -0x90);
            puVar20 = *(undefined **)(puVar2 + -0x88);
            uVar16 = *(undefined8 *)(puVar2 + -0xa0);
            lVar7 = *(long *)(puVar2 + -0xb0);
            uVar17 = *(undefined8 *)(puVar2 + -0xa8);
            puVar3 = puVar2 + -0x80;
            uVar6 = uRam0000000003d5e868;
            plVar9 = *(long **)(puVar2 + -0x98);
            goto code_r0x018eee1c;
          }
          plVar8 = (long *)func_0x00f78af4();
          *(undefined8 *)(puVar2 + -0x130) = unaff_d11;
          *(ulong *)(puVar2 + -0x128) = (ulong)extraout_s0_01;
          *(ulong *)(puVar2 + -0x120) = (ulong)uVar24;
          *(ulong *)(puVar2 + -0x118) = (ulong)uVar26;
          *(long *)(puVar2 + -0x110) = lVar7;
          *(undefined8 *)(puVar2 + -0x108) = 0x3eb5000;
          *(undefined8 *)(puVar2 + -0x100) = extraout_x1_01;
          *(long **)(puVar2 + -0xf8) = plVar15;
          *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0x90;
          *(undefined **)(puVar2 + -0xe8) =
               &Atlas_UI_LeaderboardEntryBehaviour__PlayStarDeltaSpawnTween;
          uVar23 = uVar25;
          uVar26 = uVar27;
          if ((bRam0000000003eb5408 & 1) == 0) {
            func_0x00f78a20(0x3d578e0);
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb5408 = 1;
          }
          lVar5 = plVar8[0x27];
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
          if (iVar4 == 0) {
            return 0;
          }
          if (plVar8[0x27] == 0) break;
          lVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar8[0x27],uRam0000000003d578e0);
          pppuVar18 = *(undefined8 ****)(puVar2 + -0xf0);
          puVar20 = *(undefined **)(puVar2 + -0xe8);
          plVar13 = *(long **)(puVar2 + -0x100);
          uVar14 = *(undefined8 *)(puVar2 + -0xf8);
          uVar17 = *(undefined8 *)(puVar2 + -0x110);
          uVar6 = *(undefined8 *)(puVar2 + -0x108);
          uVar28 = *(ulong *)(puVar2 + -0x120);
          uVar11 = *(ulong *)(puVar2 + -0x118);
          unaff_d11 = *(undefined8 *)(puVar2 + -0x130);
          uVar29 = *(ulong *)(puVar2 + -0x128);
          puVar2 = puVar2 + -0xe0;
          plVar9 = plVar8;
          uVar16 = extraout_x1_02;
          uVar21 = extraout_s0_02;
          uVar23 = uVar25;
          uVar26 = uVar27;
        }
        plVar9 = (long *)func_0x00f78af4();
        *(undefined8 *)(puVar2 + -0x180) = unaff_d11;
        *(ulong *)(puVar2 + -0x178) = (ulong)extraout_s0_02;
        *(ulong *)(puVar2 + -0x170) = (ulong)uVar25;
        *(ulong *)(puVar2 + -0x168) = (ulong)uVar27;
        *(undefined8 *)(puVar2 + -0x160) = 0x3d23990;
        *(long *)(puVar2 + -0x158) = lVar5;
        *(long **)(puVar2 + -0x150) = plVar8;
        *(undefined8 *)(puVar2 + -0x148) = extraout_x1_02;
        *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0xf0;
        *(undefined **)(puVar2 + -0x138) =
             &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerSpawnTween;
        uVar21 = uVar23;
        uVar24 = uVar26;
        if ((bRam0000000003eb5409 & 1) == 0) {
          func_0x00f78a20(0x3d578e0);
          bRam0000000003eb5409 = 1;
        }
        if (plVar9[0x22] == 0) break;
        lVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar9[0x22],uRam0000000003d578e0);
        pppuVar18 = *(undefined8 ****)(puVar2 + -0x140);
        puVar20 = *(undefined **)(puVar2 + -0x138);
        plVar13 = *(long **)(puVar2 + -0x150);
        uVar14 = *(undefined8 *)(puVar2 + -0x148);
        uVar17 = *(undefined8 *)(puVar2 + -0x160);
        uVar6 = *(undefined8 *)(puVar2 + -0x158);
        uVar28 = *(ulong *)(puVar2 + -0x170);
        uVar11 = *(ulong *)(puVar2 + -0x168);
        unaff_d11 = *(undefined8 *)(puVar2 + -0x180);
        uVar29 = *(ulong *)(puVar2 + -0x178);
        puVar2 = puVar2 + -0x130;
        uVar16 = extraout_x1_03;
        uVar21 = extraout_s0_03;
      }
      plVar13 = (long *)func_0x00f78af4();
      *(ulong *)(puVar2 + -0x1c0) = (ulong)uVar23;
      *(ulong *)(puVar2 + -0x1b8) = (ulong)uVar26;
      *(undefined8 *)(puVar2 + -0x1b0) = 0x3d23990;
      *(undefined8 *)(puVar2 + -0x1a8) = 0x3eb5000;
      *(long **)(puVar2 + -0x1a0) = plVar9;
      *(undefined8 *)(puVar2 + -0x198) = extraout_x1_03;
      *(undefined1 **)(puVar2 + -400) = puVar2 + -0x140;
      *(undefined **)(puVar2 + -0x188) =
           &Atlas_UI_LeaderboardEntryBehaviour__PlayEnterStatsStarDeltaTween;
      uVar23 = uVar21;
      if ((bRam0000000003eb540a & 1) == 0) {
        func_0x00f78a20(0x3d578e0);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d5e768);
        func_0x00f78a20(0x3d5e7a0);
        func_0x00f78a20(0x3d5e838);
        bRam0000000003eb540a = 1;
      }
      lVar5 = plVar13[0x27];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
      if (iVar4 == 0) {
        return 0;
      }
      if (plVar13[0x27] == 0) {
        plVar15 = (long *)func_0x00f78af4();
        puVar3 = puVar2 + -0x230;
        *(undefined8 *)(puVar2 + -0x230) = unaff_d11;
        *(ulong *)(puVar2 + -0x228) = (ulong)extraout_s0_03;
        *(ulong *)(puVar2 + -0x220) = (ulong)extraout_s0_04;
        *(ulong *)(puVar2 + -0x218) = (ulong)uVar21;
        *(undefined8 *)(puVar2 + -0x210) = unaff_x26;
        *(undefined8 *)(puVar2 + -0x208) = unaff_x25;
        *(undefined8 *)(puVar2 + -0x200) = unaff_x24;
        *(undefined8 *)(puVar2 + -0x1f8) = 0x3d27df8;
        *(undefined8 *)(puVar2 + -0x1f0) = 0x3d23990;
        *(long *)(puVar2 + -0x1e8) = lVar5;
        *(undefined8 *)(puVar2 + -0x1e0) = extraout_x1_04;
        *(long **)(puVar2 + -0x1d8) = plVar13;
        *(undefined1 **)(puVar2 + -0x1d0) = puVar2 + -400;
        *(undefined **)(puVar2 + -0x1c8) = &Atlas_UI_LeaderboardEntryBehaviour__PlayHideStarsTween;
        puVar19 = puVar2 + -0x1d0;
        if ((bRam0000000003eb540b & 1) == 0) {
          func_0x00f78a20(0x3d59de8);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d25428);
          func_0x00f78a20(0x3d5e6c0);
          func_0x00f78a20(0x3d5e758);
          func_0x00f78a20(0x3d5e788);
          func_0x00f78a20(0x3d5e800);
          bRam0000000003eb540b = 1;
        }
        lVar5 = plVar15[0x29];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
        if (iVar4 == 0) {
          return 0;
        }
        uVar17 = 0x3d5e000;
        lVar7 = 0x3d5e000;
        uVar16 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(extraout_s0_05,uVar23,plVar15[0x29],0);
        uVar16 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar24,uVar16,uRam0000000003d5e758);
        lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar16,extraout_x1_05,uRam0000000003d5e788);
        puVar20 = &UNK_015ec6b8;
        uVar6 = uRam0000000003d5e800;
        plVar9 = plVar15;
        uVar16 = extraout_x1_05;
      }
      else {
        uVar17 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar13[0x27],uRam0000000003d578e0);
        uVar17 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPosX*/ func_0x016a707c(0,extraout_s0_04,uVar17,0,0);
        uVar17 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar21,uVar17,uRam0000000003d5e768);
        lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar17,extraout_x1_04,uRam0000000003d5e7a0);
        puVar19 = *(undefined1 **)(puVar2 + -400);
        puVar20 = *(undefined **)(puVar2 + -0x188);
        uVar16 = *(undefined8 *)(puVar2 + -0x1a0);
        lVar7 = *(long *)(puVar2 + -0x1b0);
        uVar17 = *(undefined8 *)(puVar2 + -0x1a8);
        puVar3 = puVar2 + -0x180;
        plVar15 = plVar13;
        uVar6 = uRam0000000003d5e838;
        plVar9 = *(long **)(puVar2 + -0x198);
      }
code_r0x018eee1c:
      *(long *)(puVar3 + -0x30) = lVar7;
      *(undefined8 *)(puVar3 + -0x28) = uVar17;
      *(undefined8 *)(puVar3 + -0x20) = uVar16;
      *(long **)(puVar3 + -0x18) = plVar9;
      *(undefined1 **)(puVar3 + -0x10) = puVar19;
      *(undefined **)(puVar3 + -8) = puVar20;
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,plVar15,uVar6);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar4 != 0) {
          lVar10 = func_0x00f78adc(plVar15,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
          if ((uVar11 & 1) == 0) {
            if (plVar15 == (long *)0x0) goto code_r0x018eef34;
            uVar17 = (**(code **)(*plVar15 + 0x168))(plVar15,*(undefined8 *)(*plVar15 + 0x170));
          }
          else {
            if (lVar10 == 0) {
code_r0x018eef34:
              auVar30 = func_0x00f78af4();
              lVar12 = auVar30._0_8_;
              *(long *)(puVar3 + -0x60) = lVar7;
              *(long *)(puVar3 + -0x58) = lVar10;
              *(long **)(puVar3 + -0x50) = plVar15;
              *(long *)(puVar3 + -0x48) = lVar5;
              *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
              *(undefined **)(puVar3 + -0x38) =
                   &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((lVar12 != 0) && (*(char *)(lVar12 + 0xe8) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar12,auVar30._8_8_,cVar1 != '\0',0);
              }
              return lVar12;
            }
            uVar17 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar10,0);
          }
          *(undefined8 *)(lVar5 + 200) = uVar17;
        }
        *(long **)(lVar5 + 0x48) = plVar15;
      }
      return lVar5;
    }
    lVar5 = (**(code **)(*plVar13 + 0x558))(plVar13,uVar6,*(undefined8 *)(*plVar13 + 0x560));
  }
  return lVar5;
}



// ============================================================
// RVA: 0x15ebe84 | Atlas.UI.LeaderboardEntryBehaviour.SetDeltaStarsText
// ============================================================

/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ec6b8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */

long Atlas_UI_LeaderboardEntryBehaviour__SetDeltaStarsText
               (undefined1 param_1 [16],uint param_2,uint param_3,long param_4,undefined4 param_5)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 ***pppuVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  uint extraout_s0;
  uint extraout_s0_00;
  uint uVar20;
  undefined4 uVar21;
  uint extraout_s0_01;
  uint extraout_s0_02;
  uint extraout_s0_03;
  uint extraout_s0_04;
  undefined4 extraout_s0_05;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong uVar27;
  ulong unaff_d10;
  ulong uVar28;
  undefined8 unaff_d11;
  undefined1 auVar29 [16];
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  
  uStack_34 = param_5;
  if ((bRam0000000003eb5405 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d66fb0);
    bRam0000000003eb5405 = 1;
  }
  plVar16 = *(long **)(param_4 + 0x138);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar16,0);
  if ((int)lVar5 != 0) {
    plVar15 = *(long **)(param_4 + 0x140);
    uVar6 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_34,0);
    uVar13 = 0;
    uVar6 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('+')*/ uRam0000000003d66fb0,uVar6);
    if (plVar15 == (long *)0x0) {
      plVar15 = (long *)func_0x00f78af4();
      puVar2 = &stack0xffffffffffffff70;
      puStack_48 = &Atlas_UI_LeaderboardEntryBehaviour__PlayCrownSpawnTween;
      pppuVar17 = &ppuStack_50;
      uVar11 = (ulong)param_3;
      uVar27 = (ulong)param_2;
      uVar28 = (ulong)extraout_s0;
      uVar6 = 0x3eb5000;
      uVar22 = param_2;
      uVar25 = param_3;
      ppuStack_50 = (undefined8 **)&stack0xfffffffffffffff0;
      if ((bRam0000000003eb5406 & 1) == 0) {
        func_0x00f78a20(0x3d53528);
        bRam0000000003eb5406 = 1;
      }
      if (plVar15[7] == 0) {
        puVar19 = &Atlas_UI_LeaderboardEntryBehaviour__StartLargeThenGoNormal;
        plVar9 = (long *)func_0x00f78af4();
        lVar5 = extraout_x1_00;
        uVar14 = extraout_x1;
        uVar20 = extraout_s0_00;
      }
      else {
        lVar5 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(plVar15[7],uRam0000000003d53528);
        uVar6 = 0x3d23990;
        uVar14 = 0;
        puVar2 = auStack_40;
        plVar9 = plVar15;
        uVar13 = extraout_x1;
        plVar15 = plVar16;
        pppuVar17 = (undefined8 ***)ppuStack_50;
        puVar19 = puStack_48;
        uVar20 = extraout_s0;
        uVar22 = param_2;
        uVar25 = param_3;
        uVar11 = unaff_d8;
        uVar27 = unaff_d9;
        uVar28 = unaff_d10;
      }
      while( true ) {
        while( true ) {
          puVar3 = puVar2 + -0x80;
          *(undefined8 *)(puVar2 + -0x80) = unaff_d11;
          *(ulong *)(puVar2 + -0x78) = uVar28;
          *(ulong *)(puVar2 + -0x70) = uVar27;
          *(ulong *)(puVar2 + -0x68) = uVar11;
          *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
          *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
          *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
          *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
          *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
          *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar2 + -0x28) = uVar6;
          *(long **)(puVar2 + -0x20) = plVar15;
          *(undefined8 *)(puVar2 + -0x18) = uVar14;
          *(undefined8 ****)(puVar2 + -0x10) = pppuVar17;
          *(undefined **)(puVar2 + -8) = puVar19;
          puVar18 = puVar2 + -0x10;
          uVar11 = (ulong)uVar25;
          unaff_x23 = 0x3d27df8;
          uVar23 = uVar22;
          if ((bRam0000000003eb540e & 1) == 0) {
            func_0x00f78a20(0x3d2db28);
            func_0x00f78a20(0x3d1c100);
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d5e780);
            func_0x00f78a20(0x3d5e7b8);
            func_0x00f78a20(0x3d5e868);
            func_0x00f78a20(0x3d63540);
            func_0x00f78a20(0x3d27df8);
            bRam0000000003eb540e = 1;
          }
          lVar7 = func_0x00f78aec(/*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0_TypeInfo*/ uRam0000000003d27df8);
          /*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0$$.ctor*/ func_0x0155abe8(lVar7,0);
          if ((lVar7 != 0) && (*(long *)(lVar7 + 0x10) = lVar5, lVar5 != 0)) {
            uVar21 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar5,0);
            uVar6 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
            /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar6,lVar7,uRam0000000003d63540,uRam0000000003d2db28);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            lVar5 = /*DG.Tweening.DOTween$$To*/ func_0x01694ae4(uVar20,uVar21,uVar22,uVar6,0);
            puVar19 = &UNK_015ec164;
            plVar16 = *(long **)(lVar7 + 0x10);
            uVar14 = uRam0000000003d5e868;
            goto code_r0x018eee1c;
          }
          plVar16 = (long *)func_0x00f78af4();
          *(undefined8 *)(puVar2 + -0xe0) = unaff_d11;
          *(ulong *)(puVar2 + -0xd8) = (ulong)uVar20;
          *(ulong *)(puVar2 + -0xd0) = (ulong)uVar22;
          *(ulong *)(puVar2 + -200) = uVar11;
          *(undefined8 *)(puVar2 + -0xc0) = unaff_x24;
          *(undefined8 *)(puVar2 + -0xb8) = 0x3d27df8;
          *(long *)(puVar2 + -0xb0) = lVar7;
          *(long *)(puVar2 + -0xa8) = lVar5;
          *(undefined8 *)(puVar2 + -0xa0) = uVar13;
          *(long **)(puVar2 + -0x98) = plVar9;
          *(undefined1 **)(puVar2 + -0x90) = puVar18;
          *(undefined **)(puVar2 + -0x88) =
               &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerEmphasisTween;
          uVar24 = uVar23;
          uVar26 = uVar25;
          if ((bRam0000000003eb5407 & 1) == 0) {
            func_0x00f78a20(0x3d578e0);
            func_0x00f78a20(0x3d5e780);
            func_0x00f78a20(0x3d5e7b8);
            func_0x00f78a20(0x3d5e868);
            bRam0000000003eb5407 = 1;
          }
          if (plVar16[0x22] != 0) {
            uVar13 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar16[0x22],uRam0000000003d578e0);
            uVar13 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(extraout_s0_01,extraout_s0_01,extraout_s0_01,uVar23,0,uVar13,0,
                                     0);
            uVar13 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar25,uVar13,uRam0000000003d5e780);
            lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar13,extraout_x1_01,uRam0000000003d5e7b8);
            puVar18 = *(undefined1 **)(puVar2 + -0x90);
            puVar19 = *(undefined **)(puVar2 + -0x88);
            uVar13 = *(undefined8 *)(puVar2 + -0xa0);
            lVar7 = *(long *)(puVar2 + -0xb0);
            uVar6 = *(undefined8 *)(puVar2 + -0xa8);
            puVar3 = puVar2 + -0x80;
            uVar14 = uRam0000000003d5e868;
            plVar9 = *(long **)(puVar2 + -0x98);
            goto code_r0x018eee1c;
          }
          plVar8 = (long *)func_0x00f78af4();
          *(undefined8 *)(puVar2 + -0x130) = unaff_d11;
          *(ulong *)(puVar2 + -0x128) = (ulong)extraout_s0_01;
          *(ulong *)(puVar2 + -0x120) = (ulong)uVar23;
          *(ulong *)(puVar2 + -0x118) = (ulong)uVar25;
          *(long *)(puVar2 + -0x110) = lVar7;
          *(undefined8 *)(puVar2 + -0x108) = 0x3eb5000;
          *(undefined8 *)(puVar2 + -0x100) = extraout_x1_01;
          *(long **)(puVar2 + -0xf8) = plVar16;
          *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0x90;
          *(undefined **)(puVar2 + -0xe8) =
               &Atlas_UI_LeaderboardEntryBehaviour__PlayStarDeltaSpawnTween;
          uVar22 = uVar24;
          uVar25 = uVar26;
          if ((bRam0000000003eb5408 & 1) == 0) {
            func_0x00f78a20(0x3d578e0);
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb5408 = 1;
          }
          lVar5 = plVar8[0x27];
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
          if (iVar4 == 0) {
            return 0;
          }
          if (plVar8[0x27] == 0) break;
          lVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar8[0x27],uRam0000000003d578e0);
          pppuVar17 = *(undefined8 ****)(puVar2 + -0xf0);
          puVar19 = *(undefined **)(puVar2 + -0xe8);
          plVar15 = *(long **)(puVar2 + -0x100);
          uVar14 = *(undefined8 *)(puVar2 + -0xf8);
          unaff_x22 = *(undefined8 *)(puVar2 + -0x110);
          uVar6 = *(undefined8 *)(puVar2 + -0x108);
          uVar27 = *(ulong *)(puVar2 + -0x120);
          uVar11 = *(ulong *)(puVar2 + -0x118);
          unaff_d11 = *(undefined8 *)(puVar2 + -0x130);
          uVar28 = *(ulong *)(puVar2 + -0x128);
          puVar2 = puVar2 + -0xe0;
          plVar9 = plVar8;
          uVar13 = extraout_x1_02;
          uVar20 = extraout_s0_02;
          uVar22 = uVar24;
          uVar25 = uVar26;
        }
        plVar9 = (long *)func_0x00f78af4();
        *(undefined8 *)(puVar2 + -0x180) = unaff_d11;
        *(ulong *)(puVar2 + -0x178) = (ulong)extraout_s0_02;
        *(ulong *)(puVar2 + -0x170) = (ulong)uVar24;
        *(ulong *)(puVar2 + -0x168) = (ulong)uVar26;
        *(undefined8 *)(puVar2 + -0x160) = 0x3d23990;
        *(long *)(puVar2 + -0x158) = lVar5;
        *(long **)(puVar2 + -0x150) = plVar8;
        *(undefined8 *)(puVar2 + -0x148) = extraout_x1_02;
        *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0xf0;
        *(undefined **)(puVar2 + -0x138) =
             &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerSpawnTween;
        uVar20 = uVar22;
        uVar23 = uVar25;
        if ((bRam0000000003eb5409 & 1) == 0) {
          func_0x00f78a20(0x3d578e0);
          bRam0000000003eb5409 = 1;
        }
        if (plVar9[0x22] == 0) break;
        lVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar9[0x22],uRam0000000003d578e0);
        pppuVar17 = *(undefined8 ****)(puVar2 + -0x140);
        puVar19 = *(undefined **)(puVar2 + -0x138);
        plVar15 = *(long **)(puVar2 + -0x150);
        uVar14 = *(undefined8 *)(puVar2 + -0x148);
        unaff_x22 = *(undefined8 *)(puVar2 + -0x160);
        uVar6 = *(undefined8 *)(puVar2 + -0x158);
        uVar27 = *(ulong *)(puVar2 + -0x170);
        uVar11 = *(ulong *)(puVar2 + -0x168);
        unaff_d11 = *(undefined8 *)(puVar2 + -0x180);
        uVar28 = *(ulong *)(puVar2 + -0x178);
        puVar2 = puVar2 + -0x130;
        uVar13 = extraout_x1_03;
        uVar20 = extraout_s0_03;
      }
      plVar15 = (long *)func_0x00f78af4();
      *(ulong *)(puVar2 + -0x1c0) = (ulong)uVar22;
      *(ulong *)(puVar2 + -0x1b8) = (ulong)uVar25;
      *(undefined8 *)(puVar2 + -0x1b0) = 0x3d23990;
      *(undefined8 *)(puVar2 + -0x1a8) = 0x3eb5000;
      *(long **)(puVar2 + -0x1a0) = plVar9;
      *(undefined8 *)(puVar2 + -0x198) = extraout_x1_03;
      *(undefined1 **)(puVar2 + -400) = puVar2 + -0x140;
      *(undefined **)(puVar2 + -0x188) =
           &Atlas_UI_LeaderboardEntryBehaviour__PlayEnterStatsStarDeltaTween;
      uVar22 = uVar20;
      if ((bRam0000000003eb540a & 1) == 0) {
        func_0x00f78a20(0x3d578e0);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d5e768);
        func_0x00f78a20(0x3d5e7a0);
        func_0x00f78a20(0x3d5e838);
        bRam0000000003eb540a = 1;
      }
      lVar5 = plVar15[0x27];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
      if (iVar4 == 0) {
        return 0;
      }
      if (plVar15[0x27] == 0) {
        plVar16 = (long *)func_0x00f78af4();
        puVar3 = puVar2 + -0x230;
        *(undefined8 *)(puVar2 + -0x230) = unaff_d11;
        *(ulong *)(puVar2 + -0x228) = (ulong)extraout_s0_03;
        *(ulong *)(puVar2 + -0x220) = (ulong)extraout_s0_04;
        *(ulong *)(puVar2 + -0x218) = (ulong)uVar20;
        *(undefined8 *)(puVar2 + -0x210) = unaff_x26;
        *(undefined8 *)(puVar2 + -0x208) = unaff_x25;
        *(undefined8 *)(puVar2 + -0x200) = unaff_x24;
        *(undefined8 *)(puVar2 + -0x1f8) = 0x3d27df8;
        *(undefined8 *)(puVar2 + -0x1f0) = 0x3d23990;
        *(long *)(puVar2 + -0x1e8) = lVar5;
        *(undefined8 *)(puVar2 + -0x1e0) = extraout_x1_04;
        *(long **)(puVar2 + -0x1d8) = plVar15;
        *(undefined1 **)(puVar2 + -0x1d0) = puVar2 + -400;
        *(undefined **)(puVar2 + -0x1c8) = &Atlas_UI_LeaderboardEntryBehaviour__PlayHideStarsTween;
        puVar18 = puVar2 + -0x1d0;
        if ((bRam0000000003eb540b & 1) == 0) {
          func_0x00f78a20(0x3d59de8);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d25428);
          func_0x00f78a20(0x3d5e6c0);
          func_0x00f78a20(0x3d5e758);
          func_0x00f78a20(0x3d5e788);
          func_0x00f78a20(0x3d5e800);
          bRam0000000003eb540b = 1;
        }
        lVar5 = plVar16[0x29];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
        if (iVar4 == 0) {
          return 0;
        }
        uVar6 = 0x3d5e000;
        lVar7 = 0x3d5e000;
        uVar13 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(extraout_s0_05,uVar22,plVar16[0x29],0);
        uVar13 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar23,uVar13,uRam0000000003d5e758);
        lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar13,extraout_x1_05,uRam0000000003d5e788);
        puVar19 = &UNK_015ec6b8;
        uVar14 = uRam0000000003d5e800;
        plVar9 = plVar16;
        uVar13 = extraout_x1_05;
      }
      else {
        uVar13 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar15[0x27],uRam0000000003d578e0);
        uVar13 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPosX*/ func_0x016a707c(0,extraout_s0_04,uVar13,0,0);
        uVar13 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar20,uVar13,uRam0000000003d5e768);
        lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar13,extraout_x1_04,uRam0000000003d5e7a0);
        puVar18 = *(undefined1 **)(puVar2 + -400);
        puVar19 = *(undefined **)(puVar2 + -0x188);
        uVar13 = *(undefined8 *)(puVar2 + -0x1a0);
        lVar7 = *(long *)(puVar2 + -0x1b0);
        uVar6 = *(undefined8 *)(puVar2 + -0x1a8);
        puVar3 = puVar2 + -0x180;
        plVar16 = plVar15;
        uVar14 = uRam0000000003d5e838;
        plVar9 = *(long **)(puVar2 + -0x198);
      }
code_r0x018eee1c:
      *(long *)(puVar3 + -0x30) = lVar7;
      *(undefined8 *)(puVar3 + -0x28) = uVar6;
      *(undefined8 *)(puVar3 + -0x20) = uVar13;
      *(long **)(puVar3 + -0x18) = plVar9;
      *(undefined1 **)(puVar3 + -0x10) = puVar18;
      *(undefined **)(puVar3 + -8) = puVar19;
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,plVar16,uVar14);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar4 != 0) {
          lVar10 = func_0x00f78adc(plVar16,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
          if ((uVar11 & 1) == 0) {
            if (plVar16 == (long *)0x0) goto code_r0x018eef34;
            uVar13 = (**(code **)(*plVar16 + 0x168))(plVar16,*(undefined8 *)(*plVar16 + 0x170));
          }
          else {
            if (lVar10 == 0) {
code_r0x018eef34:
              auVar29 = func_0x00f78af4();
              lVar12 = auVar29._0_8_;
              *(long *)(puVar3 + -0x60) = lVar7;
              *(long *)(puVar3 + -0x58) = lVar10;
              *(long **)(puVar3 + -0x50) = plVar16;
              *(long *)(puVar3 + -0x48) = lVar5;
              *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
              *(undefined **)(puVar3 + -0x38) =
                   &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((lVar12 != 0) && (*(char *)(lVar12 + 0xe8) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar12,auVar29._8_8_,cVar1 != '\0',0);
              }
              return lVar12;
            }
            uVar13 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar10,0);
          }
          *(undefined8 *)(lVar5 + 200) = uVar13;
        }
        *(long **)(lVar5 + 0x48) = plVar16;
      }
      return lVar5;
    }
    lVar5 = (**(code **)(*plVar15 + 0x558))(plVar15,uVar6,*(undefined8 *)(*plVar15 + 0x560));
  }
  return lVar5;
}



// ============================================================
// RVA: 0x15ebf5c | Atlas.UI.LeaderboardEntryBehaviour.PlayCrownSpawnTween
// ============================================================

/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ec6b8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */

long Atlas_UI_LeaderboardEntryBehaviour__PlayCrownSpawnTween
               (uint param_1,uint param_2,uint param_3,long *param_4,undefined8 param_5,
               undefined8 param_6)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar14;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar15;
  undefined *unaff_x30;
  undefined *puVar16;
  uint extraout_s0;
  undefined4 uVar17;
  uint extraout_s0_00;
  uint extraout_s0_01;
  uint extraout_s0_02;
  uint extraout_s0_03;
  undefined4 extraout_s0_04;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong uVar23;
  ulong unaff_d10;
  ulong uVar24;
  undefined8 unaff_d11;
  undefined1 auVar25 [16];
  
  puVar2 = &stack0xffffffffffffffb0;
  puVar15 = &stack0xfffffffffffffff0;
  uVar12 = (ulong)param_3;
  uVar23 = (ulong)param_2;
  uVar24 = (ulong)param_1;
  uVar14 = 0x3eb5000;
  uVar18 = param_2;
  uVar21 = param_3;
  if ((bRam0000000003eb5406 & 1) == 0) {
    func_0x00f78a20(0x3d53528);
    bRam0000000003eb5406 = 1;
  }
  if (param_4[7] == 0) {
    unaff_x30 = &Atlas_UI_LeaderboardEntryBehaviour__StartLargeThenGoNormal;
    plVar9 = (long *)func_0x00f78af4();
    lVar5 = extraout_x1;
    param_1 = extraout_s0;
  }
  else {
    lVar5 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_4[7],uRam0000000003d53528);
    puVar2 = (undefined1 *)register0x00000008;
    plVar9 = param_4;
    param_6 = param_5;
    param_5 = unaff_x19;
    param_4 = unaff_x20;
    uVar14 = unaff_x21;
    puVar15 = unaff_x29;
    uVar18 = param_2;
    uVar21 = param_3;
    uVar12 = unaff_d8;
    uVar23 = unaff_d9;
    uVar24 = unaff_d10;
  }
  while( true ) {
    while( true ) {
      puVar3 = puVar2 + -0x80;
      *(undefined8 *)(puVar2 + -0x80) = unaff_d11;
      *(ulong *)(puVar2 + -0x78) = uVar24;
      *(ulong *)(puVar2 + -0x70) = uVar23;
      *(ulong *)(puVar2 + -0x68) = uVar12;
      *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
      *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
      *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar2 + -0x28) = uVar14;
      *(long **)(puVar2 + -0x20) = param_4;
      *(undefined8 *)(puVar2 + -0x18) = param_5;
      *(undefined1 **)(puVar2 + -0x10) = puVar15;
      *(undefined **)(puVar2 + -8) = unaff_x30;
      puVar15 = puVar2 + -0x10;
      uVar12 = (ulong)uVar21;
      unaff_x23 = 0x3d27df8;
      uVar19 = uVar18;
      if ((bRam0000000003eb540e & 1) == 0) {
        func_0x00f78a20(0x3d2db28);
        func_0x00f78a20(0x3d1c100);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e7b8);
        func_0x00f78a20(0x3d5e868);
        func_0x00f78a20(0x3d63540);
        func_0x00f78a20(0x3d27df8);
        bRam0000000003eb540e = 1;
      }
      lVar6 = func_0x00f78aec(/*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0_TypeInfo*/ uRam0000000003d27df8);
      /*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0$$.ctor*/ func_0x0155abe8(lVar6,0);
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) = lVar5, lVar5 != 0)) {
        uVar17 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar5,0);
        uVar14 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
        /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar14,lVar6,uRam0000000003d63540,uRam0000000003d2db28);
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar5 = /*DG.Tweening.DOTween$$To*/ func_0x01694ae4(param_1,uVar17,uVar18,uVar14,0);
        puVar16 = &UNK_015ec164;
        plVar7 = *(long **)(lVar6 + 0x10);
        uVar10 = uRam0000000003d5e868;
        goto code_r0x018eee1c;
      }
      plVar7 = (long *)func_0x00f78af4();
      *(undefined8 *)(puVar2 + -0xe0) = unaff_d11;
      *(ulong *)(puVar2 + -0xd8) = (ulong)param_1;
      *(ulong *)(puVar2 + -0xd0) = (ulong)uVar18;
      *(ulong *)(puVar2 + -200) = uVar12;
      *(undefined8 *)(puVar2 + -0xc0) = unaff_x24;
      *(undefined8 *)(puVar2 + -0xb8) = 0x3d27df8;
      *(long *)(puVar2 + -0xb0) = lVar6;
      *(long *)(puVar2 + -0xa8) = lVar5;
      *(undefined8 *)(puVar2 + -0xa0) = param_6;
      *(long **)(puVar2 + -0x98) = plVar9;
      *(undefined1 **)(puVar2 + -0x90) = puVar15;
      *(undefined **)(puVar2 + -0x88) =
           &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerEmphasisTween;
      uVar20 = uVar19;
      uVar22 = uVar21;
      if ((bRam0000000003eb5407 & 1) == 0) {
        func_0x00f78a20(0x3d578e0);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e7b8);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb5407 = 1;
      }
      if (plVar7[0x22] != 0) {
        uVar14 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar7[0x22],uRam0000000003d578e0);
        uVar14 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(extraout_s0_00,extraout_s0_00,extraout_s0_00,uVar19,0,uVar14,0,0);
        uVar14 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar21,uVar14,uRam0000000003d5e780);
        lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar14,extraout_x1_00,uRam0000000003d5e7b8);
        puVar15 = *(undefined1 **)(puVar2 + -0x90);
        puVar16 = *(undefined **)(puVar2 + -0x88);
        param_6 = *(undefined8 *)(puVar2 + -0xa0);
        lVar6 = *(long *)(puVar2 + -0xb0);
        uVar14 = *(undefined8 *)(puVar2 + -0xa8);
        puVar3 = puVar2 + -0x80;
        uVar10 = uRam0000000003d5e868;
        plVar9 = *(long **)(puVar2 + -0x98);
        goto code_r0x018eee1c;
      }
      plVar8 = (long *)func_0x00f78af4();
      *(undefined8 *)(puVar2 + -0x130) = unaff_d11;
      *(ulong *)(puVar2 + -0x128) = (ulong)extraout_s0_00;
      *(ulong *)(puVar2 + -0x120) = (ulong)uVar19;
      *(ulong *)(puVar2 + -0x118) = (ulong)uVar21;
      *(long *)(puVar2 + -0x110) = lVar6;
      *(undefined8 *)(puVar2 + -0x108) = 0x3eb5000;
      *(undefined8 *)(puVar2 + -0x100) = extraout_x1_00;
      *(long **)(puVar2 + -0xf8) = plVar7;
      *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0x90;
      *(undefined **)(puVar2 + -0xe8) = &Atlas_UI_LeaderboardEntryBehaviour__PlayStarDeltaSpawnTween
      ;
      uVar18 = uVar20;
      uVar21 = uVar22;
      if ((bRam0000000003eb5408 & 1) == 0) {
        func_0x00f78a20(0x3d578e0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb5408 = 1;
      }
      lVar5 = plVar8[0x27];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
      if (iVar4 == 0) {
        return 0;
      }
      if (plVar8[0x27] == 0) break;
      lVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar8[0x27],uRam0000000003d578e0);
      puVar15 = *(undefined1 **)(puVar2 + -0xf0);
      unaff_x30 = *(undefined **)(puVar2 + -0xe8);
      param_4 = *(long **)(puVar2 + -0x100);
      param_5 = *(undefined8 *)(puVar2 + -0xf8);
      unaff_x22 = *(undefined8 *)(puVar2 + -0x110);
      uVar14 = *(undefined8 *)(puVar2 + -0x108);
      uVar23 = *(ulong *)(puVar2 + -0x120);
      uVar12 = *(ulong *)(puVar2 + -0x118);
      unaff_d11 = *(undefined8 *)(puVar2 + -0x130);
      uVar24 = *(ulong *)(puVar2 + -0x128);
      puVar2 = puVar2 + -0xe0;
      plVar9 = plVar8;
      param_6 = extraout_x1_01;
      param_1 = extraout_s0_01;
      uVar18 = uVar20;
      uVar21 = uVar22;
    }
    plVar9 = (long *)func_0x00f78af4();
    *(undefined8 *)(puVar2 + -0x180) = unaff_d11;
    *(ulong *)(puVar2 + -0x178) = (ulong)extraout_s0_01;
    *(ulong *)(puVar2 + -0x170) = (ulong)uVar20;
    *(ulong *)(puVar2 + -0x168) = (ulong)uVar22;
    *(undefined8 *)(puVar2 + -0x160) = 0x3d23990;
    *(long *)(puVar2 + -0x158) = lVar5;
    *(long **)(puVar2 + -0x150) = plVar8;
    *(undefined8 *)(puVar2 + -0x148) = extraout_x1_01;
    *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0xf0;
    *(undefined **)(puVar2 + -0x138) =
         &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerSpawnTween;
    uVar19 = uVar18;
    uVar20 = uVar21;
    if ((bRam0000000003eb5409 & 1) == 0) {
      func_0x00f78a20(0x3d578e0);
      bRam0000000003eb5409 = 1;
    }
    if (plVar9[0x22] == 0) break;
    lVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar9[0x22],uRam0000000003d578e0);
    puVar15 = *(undefined1 **)(puVar2 + -0x140);
    unaff_x30 = *(undefined **)(puVar2 + -0x138);
    param_4 = *(long **)(puVar2 + -0x150);
    param_5 = *(undefined8 *)(puVar2 + -0x148);
    unaff_x22 = *(undefined8 *)(puVar2 + -0x160);
    uVar14 = *(undefined8 *)(puVar2 + -0x158);
    uVar23 = *(ulong *)(puVar2 + -0x170);
    uVar12 = *(ulong *)(puVar2 + -0x168);
    unaff_d11 = *(undefined8 *)(puVar2 + -0x180);
    uVar24 = *(ulong *)(puVar2 + -0x178);
    puVar2 = puVar2 + -0x130;
    param_6 = extraout_x1_02;
    param_1 = extraout_s0_02;
  }
  plVar8 = (long *)func_0x00f78af4();
  *(ulong *)(puVar2 + -0x1c0) = (ulong)uVar18;
  *(ulong *)(puVar2 + -0x1b8) = (ulong)uVar21;
  *(undefined8 *)(puVar2 + -0x1b0) = 0x3d23990;
  *(undefined8 *)(puVar2 + -0x1a8) = 0x3eb5000;
  *(long **)(puVar2 + -0x1a0) = plVar9;
  *(undefined8 *)(puVar2 + -0x198) = extraout_x1_02;
  *(undefined1 **)(puVar2 + -400) = puVar2 + -0x140;
  *(undefined **)(puVar2 + -0x188) =
       &Atlas_UI_LeaderboardEntryBehaviour__PlayEnterStatsStarDeltaTween;
  uVar18 = uVar19;
  if ((bRam0000000003eb540a & 1) == 0) {
    func_0x00f78a20(0x3d578e0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5e768);
    func_0x00f78a20(0x3d5e7a0);
    func_0x00f78a20(0x3d5e838);
    bRam0000000003eb540a = 1;
  }
  lVar5 = plVar8[0x27];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
  if (iVar4 == 0) {
    return 0;
  }
  if (plVar8[0x27] == 0) {
    plVar7 = (long *)func_0x00f78af4();
    puVar3 = puVar2 + -0x230;
    *(undefined8 *)(puVar2 + -0x230) = unaff_d11;
    *(ulong *)(puVar2 + -0x228) = (ulong)extraout_s0_02;
    *(ulong *)(puVar2 + -0x220) = (ulong)extraout_s0_03;
    *(ulong *)(puVar2 + -0x218) = (ulong)uVar19;
    *(undefined8 *)(puVar2 + -0x210) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x208) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x200) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x1f8) = 0x3d27df8;
    *(undefined8 *)(puVar2 + -0x1f0) = 0x3d23990;
    *(long *)(puVar2 + -0x1e8) = lVar5;
    *(undefined8 *)(puVar2 + -0x1e0) = extraout_x1_03;
    *(long **)(puVar2 + -0x1d8) = plVar8;
    *(undefined1 **)(puVar2 + -0x1d0) = puVar2 + -400;
    *(undefined **)(puVar2 + -0x1c8) = &Atlas_UI_LeaderboardEntryBehaviour__PlayHideStarsTween;
    puVar15 = puVar2 + -0x1d0;
    if ((bRam0000000003eb540b & 1) == 0) {
      func_0x00f78a20(0x3d59de8);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d25428);
      func_0x00f78a20(0x3d5e6c0);
      func_0x00f78a20(0x3d5e758);
      func_0x00f78a20(0x3d5e788);
      func_0x00f78a20(0x3d5e800);
      bRam0000000003eb540b = 1;
    }
    lVar5 = plVar7[0x29];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
    if (iVar4 == 0) {
      return 0;
    }
    uVar14 = 0x3d5e000;
    lVar6 = 0x3d5e000;
    uVar10 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(extraout_s0_04,uVar18,plVar7[0x29],0);
    uVar10 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar20,uVar10,uRam0000000003d5e758);
    lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar10,extraout_x1_04,uRam0000000003d5e788);
    puVar16 = &UNK_015ec6b8;
    uVar10 = uRam0000000003d5e800;
    plVar9 = plVar7;
    param_6 = extraout_x1_04;
  }
  else {
    uVar14 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar8[0x27],uRam0000000003d578e0);
    uVar14 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPosX*/ func_0x016a707c(0,extraout_s0_03,uVar14,0,0);
    uVar14 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar19,uVar14,uRam0000000003d5e768);
    lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar14,extraout_x1_03,uRam0000000003d5e7a0);
    puVar15 = *(undefined1 **)(puVar2 + -400);
    puVar16 = *(undefined **)(puVar2 + -0x188);
    param_6 = *(undefined8 *)(puVar2 + -0x1a0);
    lVar6 = *(long *)(puVar2 + -0x1b0);
    uVar14 = *(undefined8 *)(puVar2 + -0x1a8);
    puVar3 = puVar2 + -0x180;
    plVar7 = plVar8;
    uVar10 = uRam0000000003d5e838;
    plVar9 = *(long **)(puVar2 + -0x198);
  }
code_r0x018eee1c:
  *(long *)(puVar3 + -0x30) = lVar6;
  *(undefined8 *)(puVar3 + -0x28) = uVar14;
  *(undefined8 *)(puVar3 + -0x20) = param_6;
  *(long **)(puVar3 + -0x18) = plVar9;
  *(undefined1 **)(puVar3 + -0x10) = puVar15;
  *(undefined **)(puVar3 + -8) = puVar16;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar7,uVar10);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar4 != 0) {
      lVar11 = func_0x00f78adc(plVar7,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0,0);
      if ((uVar12 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto code_r0x018eef34;
        uVar14 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      }
      else {
        if (lVar11 == 0) {
code_r0x018eef34:
          auVar25 = func_0x00f78af4();
          lVar13 = auVar25._0_8_;
          *(long *)(puVar3 + -0x60) = lVar6;
          *(long *)(puVar3 + -0x58) = lVar11;
          *(long **)(puVar3 + -0x50) = plVar7;
          *(long *)(puVar3 + -0x48) = lVar5;
          *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x38) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar13 != 0) && (*(char *)(lVar13 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar13,auVar25._8_8_,cVar1 != '\0',0);
          }
          return lVar13;
        }
        uVar14 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar11,0);
      }
      *(undefined8 *)(lVar5 + 200) = uVar14;
    }
    *(long **)(lVar5 + 0x48) = plVar7;
  }
  return lVar5;
}



// ============================================================
// RVA: 0x15ebff4 | Atlas.UI.LeaderboardEntryBehaviour.StartLargeThenGoNormal
// ============================================================

/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ec6b8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */

long Atlas_UI_LeaderboardEntryBehaviour__StartLargeThenGoNormal
               (uint param_1,uint param_2,uint param_3,long *param_4,long param_5,undefined8 param_6
               )

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined1 *puVar13;
  undefined8 unaff_x30;
  undefined *puVar14;
  undefined4 uVar15;
  uint extraout_s0;
  uint extraout_s0_00;
  uint extraout_s0_01;
  uint extraout_s0_02;
  undefined4 extraout_s0_03;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar19 [16];
  
  while( true ) {
    while( true ) {
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_d11;
      *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_d10;
      *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
      *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      puVar13 = (undefined1 *)((long)register0x00000008 + -0x10);
      uVar11 = (ulong)param_3;
      unaff_x23 = 0x3d27df8;
      uVar16 = param_2;
      if ((bRam0000000003eb540e & 1) == 0) {
        func_0x00f78a20(0x3d2db28);
        func_0x00f78a20(0x3d1c100);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e7b8);
        func_0x00f78a20(0x3d5e868);
        func_0x00f78a20(0x3d63540);
        func_0x00f78a20(0x3d27df8);
        bRam0000000003eb540e = 1;
      }
      lVar4 = func_0x00f78aec(/*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0_TypeInfo*/ uRam0000000003d27df8);
      /*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0$$.ctor*/ func_0x0155abe8(lVar4,0);
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) = param_5, param_5 != 0)) {
        uVar15 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(param_5,0);
        uVar5 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
        /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar5,lVar4,uRam0000000003d63540,uRam0000000003d2db28);
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar6 = /*DG.Tweening.DOTween$$To*/ func_0x01694ae4(param_1,uVar15,param_2,uVar5,0);
        puVar14 = (undefined *)0x15ec164;
        plVar7 = *(long **)(lVar4 + 0x10);
        uVar9 = uRam0000000003d5e868;
        goto code_r0x018eee1c;
      }
      plVar7 = (long *)func_0x00f78af4();
      *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_d11;
      *(ulong *)((long)register0x00000008 + -0xd8) = (ulong)param_1;
      *(ulong *)((long)register0x00000008 + -0xd0) = (ulong)param_2;
      *(ulong *)((long)register0x00000008 + -200) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0x3d27df8;
      *(long *)((long)register0x00000008 + -0xb0) = lVar4;
      *(long *)((long)register0x00000008 + -0xa8) = param_5;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = param_6;
      *(long **)((long)register0x00000008 + -0x98) = param_4;
      *(undefined1 **)((long)register0x00000008 + -0x90) = puVar13;
      *(undefined **)((long)register0x00000008 + -0x88) =
           &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerEmphasisTween;
      uVar17 = uVar16;
      uVar18 = param_3;
      if ((bRam0000000003eb5407 & 1) == 0) {
        func_0x00f78a20(0x3d578e0);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e7b8);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb5407 = 1;
      }
      if (plVar7[0x22] != 0) {
        uVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar7[0x22],uRam0000000003d578e0);
        uVar5 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(extraout_s0,extraout_s0,extraout_s0,uVar16,0,uVar5,0,0);
        uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(param_3,uVar5,uRam0000000003d5e780);
        lVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,extraout_x1,uRam0000000003d5e7b8);
        puVar13 = *(undefined1 **)((long)register0x00000008 + -0x90);
        puVar14 = *(undefined **)((long)register0x00000008 + -0x88);
        param_6 = *(undefined8 *)((long)register0x00000008 + -0xa0);
        lVar4 = *(long *)((long)register0x00000008 + -0xb0);
        uVar5 = *(undefined8 *)((long)register0x00000008 + -0xa8);
        puVar2 = (undefined1 *)((long)register0x00000008 + -0x80);
        uVar9 = uRam0000000003d5e868;
        param_4 = *(long **)((long)register0x00000008 + -0x98);
        goto code_r0x018eee1c;
      }
      plVar8 = (long *)func_0x00f78af4();
      *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_d11;
      *(ulong *)((long)register0x00000008 + -0x128) = (ulong)extraout_s0;
      *(ulong *)((long)register0x00000008 + -0x120) = (ulong)uVar16;
      *(ulong *)((long)register0x00000008 + -0x118) = (ulong)param_3;
      *(long *)((long)register0x00000008 + -0x110) = lVar4;
      *(undefined8 *)((long)register0x00000008 + -0x108) = 0x3eb5000;
      *(undefined8 *)((long)register0x00000008 + -0x100) = extraout_x1;
      *(long **)((long)register0x00000008 + -0xf8) = plVar7;
      *(undefined1 **)((long)register0x00000008 + -0xf0) =
           (undefined1 *)((long)register0x00000008 + -0x90);
      *(undefined **)((long)register0x00000008 + -0xe8) =
           &Atlas_UI_LeaderboardEntryBehaviour__PlayStarDeltaSpawnTween;
      param_2 = uVar17;
      param_3 = uVar18;
      if ((bRam0000000003eb5408 & 1) == 0) {
        func_0x00f78a20(0x3d578e0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb5408 = 1;
      }
      lVar4 = plVar8[0x27];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar4,0);
      if (iVar3 == 0) {
        return 0;
      }
      if (plVar8[0x27] == 0) break;
      param_5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar8[0x27],uRam0000000003d578e0);
      unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0xf0);
      unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xe8);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x100);
      unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0xf8);
      unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x110);
      unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x108);
      unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x120);
      unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x118);
      unaff_d11 = *(undefined8 *)((long)register0x00000008 + -0x130);
      unaff_d10 = *(undefined8 *)((long)register0x00000008 + -0x128);
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xe0);
      param_4 = plVar8;
      param_6 = extraout_x1_00;
      param_1 = extraout_s0_00;
      param_2 = uVar17;
      param_3 = uVar18;
    }
    param_4 = (long *)func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x180) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x178) = (ulong)extraout_s0_00;
    *(ulong *)((long)register0x00000008 + -0x170) = (ulong)uVar17;
    *(ulong *)((long)register0x00000008 + -0x168) = (ulong)uVar18;
    *(undefined8 *)((long)register0x00000008 + -0x160) = 0x3d23990;
    *(long *)((long)register0x00000008 + -0x158) = lVar4;
    *(long **)((long)register0x00000008 + -0x150) = plVar8;
    *(undefined8 *)((long)register0x00000008 + -0x148) = extraout_x1_00;
    *(undefined1 **)((long)register0x00000008 + -0x140) =
         (undefined1 *)((long)register0x00000008 + -0xf0);
    *(undefined **)((long)register0x00000008 + -0x138) =
         &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerSpawnTween;
    uVar16 = param_2;
    uVar17 = param_3;
    if ((bRam0000000003eb5409 & 1) == 0) {
      func_0x00f78a20(0x3d578e0);
      bRam0000000003eb5409 = 1;
    }
    if (param_4[0x22] == 0) break;
    param_5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(param_4[0x22],uRam0000000003d578e0);
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x140);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x138);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x150);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x148);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x160);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x158);
    unaff_d9 = *(undefined8 *)((long)register0x00000008 + -0x170);
    unaff_d8 = *(undefined8 *)((long)register0x00000008 + -0x168);
    unaff_d11 = *(undefined8 *)((long)register0x00000008 + -0x180);
    unaff_d10 = *(undefined8 *)((long)register0x00000008 + -0x178);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x130);
    param_6 = extraout_x1_01;
    param_1 = extraout_s0_01;
  }
  plVar8 = (long *)func_0x00f78af4();
  *(ulong *)((long)register0x00000008 + -0x1c0) = (ulong)param_2;
  *(ulong *)((long)register0x00000008 + -0x1b8) = (ulong)param_3;
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0x3d23990;
  *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0x3eb5000;
  *(long **)((long)register0x00000008 + -0x1a0) = param_4;
  *(undefined8 *)((long)register0x00000008 + -0x198) = extraout_x1_01;
  *(undefined1 **)((long)register0x00000008 + -400) =
       (undefined1 *)((long)register0x00000008 + -0x140);
  *(undefined **)((long)register0x00000008 + -0x188) =
       &Atlas_UI_LeaderboardEntryBehaviour__PlayEnterStatsStarDeltaTween;
  uVar18 = uVar16;
  if ((bRam0000000003eb540a & 1) == 0) {
    func_0x00f78a20(0x3d578e0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5e768);
    func_0x00f78a20(0x3d5e7a0);
    func_0x00f78a20(0x3d5e838);
    bRam0000000003eb540a = 1;
  }
  lVar4 = plVar8[0x27];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar4,0);
  if (iVar3 == 0) {
    return 0;
  }
  if (plVar8[0x27] == 0) {
    plVar7 = (long *)func_0x00f78af4();
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x230);
    *(undefined8 *)((long)register0x00000008 + -0x230) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x228) = (ulong)extraout_s0_01;
    *(ulong *)((long)register0x00000008 + -0x220) = (ulong)extraout_s0_02;
    *(ulong *)((long)register0x00000008 + -0x218) = (ulong)uVar16;
    *(undefined8 *)((long)register0x00000008 + -0x210) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x208) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x200) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0x3d27df8;
    *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0x3d23990;
    *(long *)((long)register0x00000008 + -0x1e8) = lVar4;
    *(undefined8 *)((long)register0x00000008 + -0x1e0) = extraout_x1_02;
    *(long **)((long)register0x00000008 + -0x1d8) = plVar8;
    *(undefined1 **)((long)register0x00000008 + -0x1d0) =
         (undefined1 *)((long)register0x00000008 + -400);
    *(undefined **)((long)register0x00000008 + -0x1c8) =
         &Atlas_UI_LeaderboardEntryBehaviour__PlayHideStarsTween;
    puVar13 = (undefined1 *)((long)register0x00000008 + -0x1d0);
    if ((bRam0000000003eb540b & 1) == 0) {
      func_0x00f78a20(0x3d59de8);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d25428);
      func_0x00f78a20(0x3d5e6c0);
      func_0x00f78a20(0x3d5e758);
      func_0x00f78a20(0x3d5e788);
      func_0x00f78a20(0x3d5e800);
      bRam0000000003eb540b = 1;
    }
    lVar4 = plVar7[0x29];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar4,0);
    if (iVar3 == 0) {
      return 0;
    }
    uVar5 = 0x3d5e000;
    lVar4 = 0x3d5e000;
    uVar9 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(extraout_s0_03,uVar18,plVar7[0x29],0);
    uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar17,uVar9,uRam0000000003d5e758);
    lVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar9,extraout_x1_03,uRam0000000003d5e788);
    puVar14 = &UNK_015ec6b8;
    uVar9 = uRam0000000003d5e800;
    param_4 = plVar7;
    param_6 = extraout_x1_03;
  }
  else {
    uVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar8[0x27],uRam0000000003d578e0);
    uVar5 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPosX*/ func_0x016a707c(0,extraout_s0_02,uVar5,0,0);
    uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar16,uVar5,uRam0000000003d5e768);
    lVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,extraout_x1_02,uRam0000000003d5e7a0);
    puVar13 = *(undefined1 **)((long)register0x00000008 + -400);
    puVar14 = *(undefined **)((long)register0x00000008 + -0x188);
    param_6 = *(undefined8 *)((long)register0x00000008 + -0x1a0);
    lVar4 = *(long *)((long)register0x00000008 + -0x1b0);
    uVar5 = *(undefined8 *)((long)register0x00000008 + -0x1a8);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x180);
    plVar7 = plVar8;
    uVar9 = uRam0000000003d5e838;
    param_4 = *(long **)((long)register0x00000008 + -0x198);
  }
code_r0x018eee1c:
  *(long *)(puVar2 + -0x30) = lVar4;
  *(undefined8 *)(puVar2 + -0x28) = uVar5;
  *(undefined8 *)(puVar2 + -0x20) = param_6;
  *(long **)(puVar2 + -0x18) = param_4;
  *(undefined1 **)(puVar2 + -0x10) = puVar13;
  *(undefined **)(puVar2 + -8) = puVar14;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar7,uVar9);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar3 != 0) {
      lVar10 = func_0x00f78adc(plVar7,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
      if ((uVar11 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto code_r0x018eef34;
        uVar5 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      }
      else {
        if (lVar10 == 0) {
code_r0x018eef34:
          auVar19 = func_0x00f78af4();
          lVar12 = auVar19._0_8_;
          *(long *)(puVar2 + -0x60) = lVar4;
          *(long *)(puVar2 + -0x58) = lVar10;
          *(long **)(puVar2 + -0x50) = plVar7;
          *(long *)(puVar2 + -0x48) = lVar6;
          *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x38) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar12 != 0) && (*(char *)(lVar12 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar12,auVar19._8_8_,cVar1 != '\0',0);
          }
          return lVar12;
        }
        uVar5 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar10,0);
      }
      *(undefined8 *)(lVar6 + 200) = uVar5;
    }
    *(long **)(lVar6 + 0x48) = plVar7;
  }
  return lVar6;
}



// ============================================================
// RVA: 0x15ec1b4 | Atlas.UI.LeaderboardEntryBehaviour.PlayStatIconContainerEmphasisTween
// ============================================================

/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ec6b8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */

long Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerEmphasisTween
               (uint param_1,uint param_2,uint param_3,long *param_4,undefined8 param_5)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar12;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar13;
  long unaff_x21;
  undefined8 uVar14;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 uVar15;
  undefined *puVar16;
  code *unaff_x30;
  uint uVar17;
  undefined4 uVar18;
  uint extraout_s0;
  uint extraout_s0_00;
  uint extraout_s0_01;
  uint extraout_s0_02;
  undefined4 extraout_s0_03;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong unaff_d8;
  undefined8 uVar22;
  ulong unaff_d9;
  undefined8 uVar23;
  ulong unaff_d10;
  undefined8 uVar24;
  undefined8 unaff_d11;
  undefined1 auVar25 [16];
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar19 = param_2;
    uVar21 = param_3;
    if ((bRam0000000003eb5407 & 1) == 0) {
      func_0x00f78a20(0x3d578e0);
      func_0x00f78a20(0x3d5e780);
      func_0x00f78a20(0x3d5e7b8);
      func_0x00f78a20(0x3d5e868);
      bRam0000000003eb5407 = 1;
    }
    if (param_4[0x22] != 0) {
      uVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(param_4[0x22],uRam0000000003d578e0);
      uVar5 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(param_1,param_1,param_1,param_2,0,uVar5,0,0);
      uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(param_3,uVar5,uRam0000000003d5e780);
      lVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,param_5,uRam0000000003d5e7b8);
      unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
      puVar16 = *(undefined **)((long)register0x00000008 + -8);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
      unaff_x22 = *(long *)((long)register0x00000008 + -0x30);
      uVar5 = *(undefined8 *)((long)register0x00000008 + -0x28);
      puVar3 = (undefined1 *)register0x00000008;
      uVar8 = uRam0000000003d5e868;
      unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
      goto code_r0x018eee1c;
    }
    plVar7 = (long *)func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0xa8) = (ulong)param_1;
    *(ulong *)((long)register0x00000008 + -0xa0) = (ulong)param_2;
    *(ulong *)((long)register0x00000008 + -0x98) = (ulong)param_3;
    *(long *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb5000;
    *(undefined8 *)((long)register0x00000008 + -0x80) = param_5;
    *(long **)((long)register0x00000008 + -0x78) = param_4;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x68) =
         &Atlas_UI_LeaderboardEntryBehaviour__PlayStarDeltaSpawnTween;
    uVar20 = uVar19;
    param_3 = uVar21;
    if ((bRam0000000003eb5408 & 1) == 0) {
      func_0x00f78a20(0x3d578e0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5408 = 1;
    }
    lVar6 = plVar7[0x27];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar6,0);
    if (iVar4 == 0) {
      return 0;
    }
    if (plVar7[0x27] == 0) {
      unaff_x19 = (long *)func_0x00f78af4();
      *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_d11;
      *(ulong *)((long)register0x00000008 + -0xf8) = (ulong)extraout_s0_00;
      *(ulong *)((long)register0x00000008 + -0xf0) = (ulong)uVar19;
      *(ulong *)((long)register0x00000008 + -0xe8) = (ulong)uVar21;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3d23990;
      *(long *)((long)register0x00000008 + -0xd8) = lVar6;
      *(long **)((long)register0x00000008 + -0xd0) = plVar7;
      *(undefined8 *)((long)register0x00000008 + -200) = extraout_x1_00;
      *(undefined1 **)((long)register0x00000008 + -0xc0) =
           (undefined1 *)((long)register0x00000008 + -0x70);
      *(undefined **)((long)register0x00000008 + -0xb8) =
           &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerSpawnTween;
      uVar19 = uVar20;
      uVar21 = param_3;
      if ((bRam0000000003eb5409 & 1) == 0) {
        func_0x00f78a20(0x3d578e0);
        bRam0000000003eb5409 = 1;
      }
      if (unaff_x19[0x22] == 0) {
        plVar7 = (long *)func_0x00f78af4();
        *(ulong *)((long)register0x00000008 + -0x140) = (ulong)uVar20;
        *(ulong *)((long)register0x00000008 + -0x138) = (ulong)param_3;
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0x3d23990;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0x3eb5000;
        *(long **)((long)register0x00000008 + -0x120) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x118) = extraout_x1_01;
        *(undefined1 **)((long)register0x00000008 + -0x110) =
             (undefined1 *)((long)register0x00000008 + -0xc0);
        *(undefined **)((long)register0x00000008 + -0x108) =
             &Atlas_UI_LeaderboardEntryBehaviour__PlayEnterStatsStarDeltaTween;
        uVar20 = uVar19;
        if ((bRam0000000003eb540a & 1) == 0) {
          func_0x00f78a20(0x3d578e0);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d5e768);
          func_0x00f78a20(0x3d5e7a0);
          func_0x00f78a20(0x3d5e838);
          bRam0000000003eb540a = 1;
        }
        lVar6 = plVar7[0x27];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar6,0);
        if (iVar4 == 0) {
          return 0;
        }
        if (plVar7[0x27] == 0) {
          param_4 = (long *)func_0x00f78af4();
          puVar3 = (undefined1 *)((long)register0x00000008 + -0x1b0);
          *(undefined8 *)((long)register0x00000008 + -0x1b0) = unaff_d11;
          *(ulong *)((long)register0x00000008 + -0x1a8) = (ulong)extraout_s0_01;
          *(ulong *)((long)register0x00000008 + -0x1a0) = (ulong)extraout_s0_02;
          *(ulong *)((long)register0x00000008 + -0x198) = (ulong)uVar19;
          *(undefined8 *)((long)register0x00000008 + -400) = unaff_x26;
          *(undefined8 *)((long)register0x00000008 + -0x188) = unaff_x25;
          *(undefined8 *)((long)register0x00000008 + -0x180) = unaff_x24;
          *(undefined8 *)((long)register0x00000008 + -0x178) = unaff_x23;
          *(undefined8 *)((long)register0x00000008 + -0x170) = 0x3d23990;
          *(long *)((long)register0x00000008 + -0x168) = lVar6;
          *(undefined8 *)((long)register0x00000008 + -0x160) = extraout_x1_02;
          *(long **)((long)register0x00000008 + -0x158) = plVar7;
          *(undefined1 **)((long)register0x00000008 + -0x150) =
               (undefined1 *)((long)register0x00000008 + -0x110);
          *(undefined **)((long)register0x00000008 + -0x148) =
               &Atlas_UI_LeaderboardEntryBehaviour__PlayHideStarsTween;
          unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x150);
          if ((bRam0000000003eb540b & 1) == 0) {
            func_0x00f78a20(0x3d59de8);
            func_0x00f78a20(0x3d23990);
            func_0x00f78a20(0x3d25428);
            func_0x00f78a20(0x3d5e6c0);
            func_0x00f78a20(0x3d5e758);
            func_0x00f78a20(0x3d5e788);
            func_0x00f78a20(0x3d5e800);
            bRam0000000003eb540b = 1;
          }
          lVar6 = param_4[0x29];
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar6,0);
          if (iVar4 == 0) {
            return 0;
          }
          uVar5 = 0x3d5e000;
          unaff_x22 = 0x3d5e000;
          uVar8 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(extraout_s0_03,uVar20,param_4[0x29],0);
          uVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar21,uVar8,uRam0000000003d5e758);
          lVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar8,extraout_x1_03,uRam0000000003d5e788);
          puVar16 = &UNK_015ec6b8;
          uVar8 = uRam0000000003d5e800;
          unaff_x19 = param_4;
          unaff_x20 = extraout_x1_03;
        }
        else {
          uVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar7[0x27],uRam0000000003d578e0);
          uVar5 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPosX*/ func_0x016a707c(0,extraout_s0_02,uVar5,0,0);
          uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar19,uVar5,uRam0000000003d5e768);
          lVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,extraout_x1_02,uRam0000000003d5e7a0);
          unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x110);
          puVar16 = *(undefined **)((long)register0x00000008 + -0x108);
          unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x120);
          unaff_x22 = *(long *)((long)register0x00000008 + -0x130);
          uVar5 = *(undefined8 *)((long)register0x00000008 + -0x128);
          puVar3 = (undefined1 *)((long)register0x00000008 + -0x100);
          param_4 = plVar7;
          uVar8 = uRam0000000003d5e838;
          unaff_x19 = *(long **)((long)register0x00000008 + -0x118);
        }
        goto code_r0x018eee1c;
      }
      unaff_x21 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(unaff_x19[0x22],uRam0000000003d578e0);
      uVar5 = *(undefined8 *)((long)register0x00000008 + -0xc0);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0xb8);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0xd0);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -200);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -0xe0);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0xd8);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0xf0);
      uVar22 = *(undefined8 *)((long)register0x00000008 + -0xe8);
      puVar2 = (undefined1 *)((long)register0x00000008 + -0xb0);
      unaff_d11 = *(undefined8 *)((long)register0x00000008 + -0x100);
      uVar24 = *(undefined8 *)((long)register0x00000008 + -0xf8);
      unaff_x20 = extraout_x1_01;
      uVar17 = extraout_s0_01;
    }
    else {
      unaff_x21 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar7[0x27],uRam0000000003d578e0);
      uVar5 = *(undefined8 *)((long)register0x00000008 + -0x70);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0x68);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x80);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x78);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -0x90);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x88);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0xa0);
      uVar22 = *(undefined8 *)((long)register0x00000008 + -0x98);
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x60);
      unaff_d11 = *(undefined8 *)((long)register0x00000008 + -0xb0);
      uVar24 = *(undefined8 *)((long)register0x00000008 + -0xa8);
      unaff_x19 = plVar7;
      unaff_x20 = extraout_x1_00;
      uVar17 = extraout_s0_00;
      uVar20 = uVar19;
      param_3 = uVar21;
    }
    puVar3 = puVar2 + -0x80;
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x80);
    *(undefined8 *)(puVar2 + -0x80) = unaff_d11;
    *(undefined8 *)(puVar2 + -0x78) = uVar24;
    *(undefined8 *)(puVar2 + -0x70) = uVar23;
    *(undefined8 *)(puVar2 + -0x68) = uVar22;
    *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = uVar14;
    *(undefined8 *)(puVar2 + -0x28) = uVar13;
    *(undefined8 *)(puVar2 + -0x20) = uVar8;
    *(undefined8 *)(puVar2 + -0x18) = uVar12;
    *(undefined8 *)(puVar2 + -0x10) = uVar5;
    *(undefined8 *)(puVar2 + -8) = uVar15;
    unaff_x29 = puVar2 + -0x10;
    unaff_d8 = (ulong)param_3;
    unaff_d9 = (ulong)uVar20;
    unaff_d10 = (ulong)uVar17;
    unaff_x23 = 0x3d27df8;
    param_2 = uVar20;
    if ((bRam0000000003eb540e & 1) == 0) {
      func_0x00f78a20(0x3d2db28);
      func_0x00f78a20(0x3d1c100);
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d5e780);
      func_0x00f78a20(0x3d5e7b8);
      func_0x00f78a20(0x3d5e868);
      func_0x00f78a20(0x3d63540);
      func_0x00f78a20(0x3d27df8);
      bRam0000000003eb540e = 1;
    }
    unaff_x22 = func_0x00f78aec(/*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0_TypeInfo*/ uRam0000000003d27df8);
    /*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0$$.ctor*/ func_0x0155abe8(unaff_x22,0);
    if ((unaff_x22 != 0) && (*(long *)(unaff_x22 + 0x10) = unaff_x21, unaff_x21 != 0)) break;
    unaff_x30 = Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerEmphasisTween;
    param_4 = (long *)func_0x00f78af4();
    param_5 = extraout_x1;
    param_1 = extraout_s0;
  }
  uVar18 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(unaff_x21,0);
  uVar5 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
  /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar5,unaff_x22,uRam0000000003d63540,uRam0000000003d2db28);
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*DG.Tweening.DOTween$$To*/ func_0x01694ae4(uVar17,uVar18,uVar20,uVar5,0);
  puVar16 = (undefined *)0x15ec164;
  param_4 = *(long **)(unaff_x22 + 0x10);
  uVar8 = uRam0000000003d5e868;
code_r0x018eee1c:
  *(long *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = uVar5;
  *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
  *(long **)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
  *(undefined **)(puVar3 + -8) = puVar16;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,param_4,uVar8);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar4 != 0) {
      lVar9 = func_0x00f78adc(param_4,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
      if ((uVar10 & 1) == 0) {
        if (param_4 == (long *)0x0) goto code_r0x018eef34;
        uVar5 = (**(code **)(*param_4 + 0x168))(param_4,*(undefined8 *)(*param_4 + 0x170));
      }
      else {
        if (lVar9 == 0) {
code_r0x018eef34:
          auVar25 = func_0x00f78af4();
          lVar11 = auVar25._0_8_;
          *(long *)(puVar3 + -0x60) = unaff_x22;
          *(long *)(puVar3 + -0x58) = lVar9;
          *(long **)(puVar3 + -0x50) = param_4;
          *(long *)(puVar3 + -0x48) = lVar6;
          *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x38) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar11 != 0) && (*(char *)(lVar11 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar11,auVar25._8_8_,cVar1 != '\0',0);
          }
          return lVar11;
        }
        uVar5 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar9,0);
      }
      *(undefined8 *)(lVar6 + 200) = uVar5;
    }
    *(long **)(lVar6 + 0x48) = param_4;
  }
  return lVar6;
}



// ============================================================
// RVA: 0x15ec2b8 | Atlas.UI.LeaderboardEntryBehaviour.PlayStarDeltaSpawnTween
// ============================================================

/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ec6b8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */

long Atlas_UI_LeaderboardEntryBehaviour__PlayStarDeltaSpawnTween
               (uint param_1,uint param_2,uint param_3,long *param_4,undefined8 param_5)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar12;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar13;
  undefined8 unaff_x21;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  code *unaff_x30;
  undefined4 uVar19;
  uint extraout_s0;
  uint extraout_s0_00;
  uint extraout_s0_01;
  uint extraout_s0_02;
  undefined4 extraout_s0_03;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulong unaff_d8;
  undefined8 uVar24;
  ulong unaff_d9;
  undefined8 uVar25;
  ulong unaff_d10;
  undefined8 uVar26;
  undefined8 unaff_d11;
  undefined1 auVar27 [16];
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar20 = param_2;
    uVar22 = param_3;
    if ((bRam0000000003eb5408 & 1) == 0) {
      func_0x00f78a20(0x3d578e0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb5408 = 1;
    }
    lVar14 = param_4[0x27];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar14,0);
    if (iVar4 == 0) {
      return 0;
    }
    if (param_4[0x27] == 0) {
      plVar6 = (long *)func_0x00f78af4();
      *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_d11;
      *(ulong *)((long)register0x00000008 + -0x98) = (ulong)param_1;
      *(ulong *)((long)register0x00000008 + -0x90) = (ulong)param_2;
      *(ulong *)((long)register0x00000008 + -0x88) = (ulong)param_3;
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3d23990;
      *(long *)((long)register0x00000008 + -0x78) = lVar14;
      *(long **)((long)register0x00000008 + -0x70) = param_4;
      *(undefined8 *)((long)register0x00000008 + -0x68) = param_5;
      *(undefined1 **)((long)register0x00000008 + -0x60) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x58) =
           &Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerSpawnTween;
      uVar21 = uVar20;
      uVar23 = uVar22;
      if ((bRam0000000003eb5409 & 1) == 0) {
        func_0x00f78a20(0x3d578e0);
        bRam0000000003eb5409 = 1;
      }
      if (plVar6[0x22] == 0) {
        plVar7 = (long *)func_0x00f78af4();
        *(ulong *)((long)register0x00000008 + -0xe0) = (ulong)uVar20;
        *(ulong *)((long)register0x00000008 + -0xd8) = (ulong)uVar22;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x3d23990;
        *(undefined8 *)((long)register0x00000008 + -200) = 0x3eb5000;
        *(long **)((long)register0x00000008 + -0xc0) = plVar6;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = extraout_x1_01;
        *(undefined1 **)((long)register0x00000008 + -0xb0) =
             (undefined1 *)((long)register0x00000008 + -0x60);
        *(undefined **)((long)register0x00000008 + -0xa8) =
             &Atlas_UI_LeaderboardEntryBehaviour__PlayEnterStatsStarDeltaTween;
        uVar20 = uVar21;
        if ((bRam0000000003eb540a & 1) == 0) {
          func_0x00f78a20(0x3d578e0);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d5e768);
          func_0x00f78a20(0x3d5e7a0);
          func_0x00f78a20(0x3d5e838);
          bRam0000000003eb540a = 1;
        }
        lVar14 = plVar7[0x27];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar14,0);
        if (iVar4 == 0) {
          return 0;
        }
        if (plVar7[0x27] == 0) {
          unaff_x19 = (long *)func_0x00f78af4();
          puVar2 = (undefined1 *)((long)register0x00000008 + -0x150);
          *(undefined8 *)((long)register0x00000008 + -0x150) = unaff_d11;
          *(ulong *)((long)register0x00000008 + -0x148) = (ulong)extraout_s0_01;
          *(ulong *)((long)register0x00000008 + -0x140) = (ulong)extraout_s0_02;
          *(ulong *)((long)register0x00000008 + -0x138) = (ulong)uVar21;
          *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
          *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
          *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x24;
          *(undefined8 *)((long)register0x00000008 + -0x118) = unaff_x23;
          *(undefined8 *)((long)register0x00000008 + -0x110) = 0x3d23990;
          *(long *)((long)register0x00000008 + -0x108) = lVar14;
          *(undefined8 *)((long)register0x00000008 + -0x100) = extraout_x1_02;
          *(long **)((long)register0x00000008 + -0xf8) = plVar7;
          *(undefined1 **)((long)register0x00000008 + -0xf0) =
               (undefined1 *)((long)register0x00000008 + -0xb0);
          *(undefined **)((long)register0x00000008 + -0xe8) =
               &Atlas_UI_LeaderboardEntryBehaviour__PlayHideStarsTween;
          puVar16 = (undefined1 *)((long)register0x00000008 + -0xf0);
          if ((bRam0000000003eb540b & 1) == 0) {
            func_0x00f78a20(0x3d59de8);
            func_0x00f78a20(0x3d23990);
            func_0x00f78a20(0x3d25428);
            func_0x00f78a20(0x3d5e6c0);
            func_0x00f78a20(0x3d5e758);
            func_0x00f78a20(0x3d5e788);
            func_0x00f78a20(0x3d5e800);
            bRam0000000003eb540b = 1;
          }
          lVar14 = unaff_x19[0x29];
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar14,0);
          if (iVar4 == 0) {
            return 0;
          }
          uVar5 = 0x3d5e000;
          unaff_x22 = 0x3d5e000;
          uVar8 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(extraout_s0_03,uVar20,unaff_x19[0x29],0);
          uVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar23,uVar8,uRam0000000003d5e758);
          lVar14 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar8,extraout_x1_03,uRam0000000003d5e788);
          puVar18 = &UNK_015ec6b8;
          uVar8 = uRam0000000003d5e800;
          plVar6 = unaff_x19;
          param_5 = extraout_x1_03;
        }
        else {
          uVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar7[0x27],uRam0000000003d578e0);
          uVar5 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPosX*/ func_0x016a707c(0,extraout_s0_02,uVar5,0,0);
          uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar21,uVar5,uRam0000000003d5e768);
          lVar14 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,extraout_x1_02,uRam0000000003d5e7a0);
          puVar16 = *(undefined1 **)((long)register0x00000008 + -0xb0);
          puVar18 = *(undefined **)((long)register0x00000008 + -0xa8);
          param_5 = *(undefined8 *)((long)register0x00000008 + -0xc0);
          unaff_x22 = *(long *)((long)register0x00000008 + -0xd0);
          uVar5 = *(undefined8 *)((long)register0x00000008 + -200);
          puVar2 = (undefined1 *)((long)register0x00000008 + -0xa0);
          unaff_x19 = plVar7;
          uVar8 = uRam0000000003d5e838;
          plVar6 = *(long **)((long)register0x00000008 + -0xb8);
        }
        goto code_r0x018eee1c;
      }
      lVar14 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar6[0x22],uRam0000000003d578e0);
      uVar5 = *(undefined8 *)((long)register0x00000008 + -0x60);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x58);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x70);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x68);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0x80);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x78);
      uVar25 = *(undefined8 *)((long)register0x00000008 + -0x90);
      uVar24 = *(undefined8 *)((long)register0x00000008 + -0x88);
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x50);
      unaff_d11 = *(undefined8 *)((long)register0x00000008 + -0xa0);
      uVar26 = *(undefined8 *)((long)register0x00000008 + -0x98);
      param_5 = extraout_x1_01;
      param_1 = extraout_s0_01;
    }
    else {
      lVar14 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(param_4[0x27],uRam0000000003d578e0);
      uVar5 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar8 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x18);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0x30);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x28);
      uVar25 = *(undefined8 *)((long)register0x00000008 + -0x40);
      uVar24 = *(undefined8 *)((long)register0x00000008 + -0x38);
      unaff_d11 = *(undefined8 *)((long)register0x00000008 + -0x50);
      uVar26 = *(undefined8 *)((long)register0x00000008 + -0x48);
      puVar3 = (undefined1 *)register0x00000008;
      plVar6 = param_4;
      uVar20 = param_2;
      uVar22 = param_3;
    }
    puVar2 = puVar3 + -0x80;
    *(undefined8 *)(puVar3 + -0x80) = unaff_d11;
    *(undefined8 *)(puVar3 + -0x78) = uVar26;
    *(undefined8 *)(puVar3 + -0x70) = uVar25;
    *(undefined8 *)(puVar3 + -0x68) = uVar24;
    *(undefined8 *)(puVar3 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x30) = uVar15;
    *(undefined8 *)(puVar3 + -0x28) = uVar13;
    *(undefined8 *)(puVar3 + -0x20) = uVar8;
    *(undefined8 *)(puVar3 + -0x18) = uVar12;
    *(undefined8 *)(puVar3 + -0x10) = uVar5;
    *(undefined8 *)(puVar3 + -8) = uVar17;
    puVar16 = puVar3 + -0x10;
    uVar10 = (ulong)uVar22;
    unaff_x23 = 0x3d27df8;
    uVar21 = uVar20;
    if ((bRam0000000003eb540e & 1) == 0) {
      func_0x00f78a20(0x3d2db28);
      func_0x00f78a20(0x3d1c100);
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d5e780);
      func_0x00f78a20(0x3d5e7b8);
      func_0x00f78a20(0x3d5e868);
      func_0x00f78a20(0x3d63540);
      func_0x00f78a20(0x3d27df8);
      bRam0000000003eb540e = 1;
    }
    unaff_x22 = func_0x00f78aec(/*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0_TypeInfo*/ uRam0000000003d27df8);
    /*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0$$.ctor*/ func_0x0155abe8(unaff_x22,0);
    if ((unaff_x22 != 0) && (*(long *)(unaff_x22 + 0x10) = lVar14, lVar14 != 0)) {
      uVar19 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar14,0);
      uVar5 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
      /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar5,unaff_x22,uRam0000000003d63540,uRam0000000003d2db28);
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar14 = /*DG.Tweening.DOTween$$To*/ func_0x01694ae4(param_1,uVar19,uVar20,uVar5,0);
      puVar18 = (undefined *)0x15ec164;
      unaff_x19 = *(long **)(unaff_x22 + 0x10);
      uVar8 = uRam0000000003d5e868;
      goto code_r0x018eee1c;
    }
    unaff_x19 = (long *)func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0xe0);
    *(undefined8 *)(puVar3 + -0xe0) = unaff_d11;
    *(ulong *)(puVar3 + -0xd8) = (ulong)param_1;
    *(ulong *)(puVar3 + -0xd0) = (ulong)uVar20;
    *(ulong *)(puVar3 + -200) = uVar10;
    *(undefined8 *)(puVar3 + -0xc0) = unaff_x24;
    *(undefined8 *)(puVar3 + -0xb8) = 0x3d27df8;
    *(long *)(puVar3 + -0xb0) = unaff_x22;
    *(long *)(puVar3 + -0xa8) = lVar14;
    *(undefined8 *)(puVar3 + -0xa0) = param_5;
    *(long **)(puVar3 + -0x98) = plVar6;
    *(undefined1 **)(puVar3 + -0x90) = puVar16;
    *(code **)(puVar3 + -0x88) =
         Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerEmphasisTween;
    unaff_x29 = puVar3 + -0x90;
    unaff_d8 = (ulong)uVar22;
    unaff_d9 = (ulong)uVar21;
    unaff_d10 = (ulong)extraout_s0;
    unaff_x21 = 0x3eb5000;
    param_2 = uVar21;
    param_3 = uVar22;
    if ((bRam0000000003eb5407 & 1) == 0) {
      func_0x00f78a20(0x3d578e0);
      func_0x00f78a20(0x3d5e780);
      func_0x00f78a20(0x3d5e7b8);
      func_0x00f78a20(0x3d5e868);
      bRam0000000003eb5407 = 1;
    }
    if (unaff_x19[0x22] != 0) break;
    unaff_x30 = Atlas_UI_LeaderboardEntryBehaviour__PlayStarDeltaSpawnTween;
    param_4 = (long *)func_0x00f78af4();
    param_5 = extraout_x1_00;
    unaff_x20 = extraout_x1;
    param_1 = extraout_s0_00;
  }
  uVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(unaff_x19[0x22],uRam0000000003d578e0);
  uVar5 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(extraout_s0,extraout_s0,extraout_s0,uVar21,0,uVar5,0,0);
  uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar22,uVar5,uRam0000000003d5e780);
  lVar14 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar5,extraout_x1,uRam0000000003d5e7b8);
  puVar16 = *(undefined1 **)(puVar3 + -0x90);
  puVar18 = *(undefined **)(puVar3 + -0x88);
  param_5 = *(undefined8 *)(puVar3 + -0xa0);
  unaff_x22 = *(long *)(puVar3 + -0xb0);
  uVar5 = *(undefined8 *)(puVar3 + -0xa8);
  puVar2 = puVar3 + -0x80;
  uVar8 = uRam0000000003d5e868;
  plVar6 = *(long **)(puVar3 + -0x98);
code_r0x018eee1c:
  *(long *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = uVar5;
  *(undefined8 *)(puVar2 + -0x20) = param_5;
  *(long **)(puVar2 + -0x18) = plVar6;
  *(undefined1 **)(puVar2 + -0x10) = puVar16;
  *(undefined **)(puVar2 + -8) = puVar18;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,unaff_x19,uVar8);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar14 != 0) && (*(char *)(lVar14 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar4 != 0) {
      lVar9 = func_0x00f78adc(unaff_x19,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
      if ((uVar10 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) goto code_r0x018eef34;
        uVar5 = (**(code **)(*unaff_x19 + 0x168))(unaff_x19,*(undefined8 *)(*unaff_x19 + 0x170));
      }
      else {
        if (lVar9 == 0) {
code_r0x018eef34:
          auVar27 = func_0x00f78af4();
          lVar11 = auVar27._0_8_;
          *(long *)(puVar2 + -0x60) = unaff_x22;
          *(long *)(puVar2 + -0x58) = lVar9;
          *(long **)(puVar2 + -0x50) = unaff_x19;
          *(long *)(puVar2 + -0x48) = lVar14;
          *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x38) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar11 != 0) && (*(char *)(lVar11 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar11,auVar27._8_8_,cVar1 != '\0',0);
          }
          return lVar11;
        }
        uVar5 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar9,0);
      }
      *(undefined8 *)(lVar14 + 200) = uVar5;
    }
    *(long **)(lVar14 + 0x48) = unaff_x19;
  }
  return lVar14;
}



// ============================================================
// RVA: 0x15ec3ac | Atlas.UI.LeaderboardEntryBehaviour.PlayStatIconContainerSpawnTween
// ============================================================

/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ec6b8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */

long Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerSpawnTween
               (uint param_1,uint param_2,uint param_3,long *param_4,undefined8 param_5)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar14;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 uVar15;
  long unaff_x21;
  undefined8 uVar16;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  code *unaff_x30;
  undefined4 uVar20;
  uint extraout_s0;
  uint extraout_s0_00;
  uint extraout_s0_01;
  uint extraout_s0_02;
  undefined4 extraout_s0_03;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  ulong unaff_d8;
  undefined8 uVar25;
  ulong unaff_d9;
  undefined8 uVar26;
  ulong unaff_d10;
  undefined8 uVar27;
  undefined8 unaff_d11;
  undefined1 auVar28 [16];
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_d10;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_d9;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_d8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar21 = param_2;
    uVar24 = param_3;
    if ((bRam0000000003eb5409 & 1) == 0) {
      func_0x00f78a20(0x3d578e0);
      bRam0000000003eb5409 = 1;
    }
    if (param_4[0x22] == 0) break;
    lVar8 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(param_4[0x22],uRam0000000003d578e0);
    uVar6 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x18);
    uVar16 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar15 = *(undefined8 *)((long)register0x00000008 + -0x28);
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x40);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x38);
    unaff_d11 = *(undefined8 *)((long)register0x00000008 + -0x50);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x48);
    puVar2 = (undefined1 *)register0x00000008;
    unaff_x20 = param_4;
    uVar21 = param_2;
    uVar24 = param_3;
    while( true ) {
      puVar3 = puVar2 + -0x80;
      *(undefined8 *)(puVar2 + -0x80) = unaff_d11;
      *(undefined8 *)(puVar2 + -0x78) = uVar27;
      *(undefined8 *)(puVar2 + -0x70) = uVar26;
      *(undefined8 *)(puVar2 + -0x68) = uVar25;
      *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
      *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
      *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar2 + -0x30) = uVar16;
      *(undefined8 *)(puVar2 + -0x28) = uVar15;
      *(undefined8 *)(puVar2 + -0x20) = uVar10;
      *(undefined8 *)(puVar2 + -0x18) = uVar14;
      *(undefined8 *)(puVar2 + -0x10) = uVar6;
      *(undefined8 *)(puVar2 + -8) = uVar18;
      puVar17 = puVar2 + -0x10;
      uVar12 = (ulong)uVar24;
      unaff_x23 = 0x3d27df8;
      uVar22 = uVar21;
      uVar23 = uVar24;
      if ((bRam0000000003eb540e & 1) == 0) {
        func_0x00f78a20(0x3d2db28);
        func_0x00f78a20(0x3d1c100);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e7b8);
        func_0x00f78a20(0x3d5e868);
        func_0x00f78a20(0x3d63540);
        func_0x00f78a20(0x3d27df8);
        bRam0000000003eb540e = 1;
        uVar23 = uVar24;
      }
      lVar5 = func_0x00f78aec(/*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0_TypeInfo*/ uRam0000000003d27df8);
      /*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0$$.ctor*/ func_0x0155abe8(lVar5,0);
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) = lVar8, lVar8 != 0)) {
        uVar20 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar8,0);
        uVar6 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
        /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar6,lVar5,uRam0000000003d63540,uRam0000000003d2db28);
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar8 = /*DG.Tweening.DOTween$$To*/ func_0x01694ae4(param_1,uVar20,uVar21,uVar6,0);
        puVar19 = (undefined *)0x15ec164;
        plVar7 = *(long **)(lVar5 + 0x10);
        uVar10 = uRam0000000003d5e868;
        goto code_r0x018eee1c;
      }
      plVar7 = (long *)func_0x00f78af4();
      *(undefined8 *)(puVar2 + -0xe0) = unaff_d11;
      *(ulong *)(puVar2 + -0xd8) = (ulong)param_1;
      *(ulong *)(puVar2 + -0xd0) = (ulong)uVar21;
      *(ulong *)(puVar2 + -200) = uVar12;
      *(undefined8 *)(puVar2 + -0xc0) = unaff_x24;
      *(undefined8 *)(puVar2 + -0xb8) = 0x3d27df8;
      *(long *)(puVar2 + -0xb0) = lVar5;
      *(long *)(puVar2 + -0xa8) = lVar8;
      *(undefined8 *)(puVar2 + -0xa0) = param_5;
      *(long **)(puVar2 + -0x98) = unaff_x20;
      *(undefined1 **)(puVar2 + -0x90) = puVar17;
      *(code **)(puVar2 + -0x88) =
           Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerEmphasisTween;
      uVar21 = uVar22;
      uVar24 = uVar23;
      if ((bRam0000000003eb5407 & 1) == 0) {
        func_0x00f78a20(0x3d578e0);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e7b8);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb5407 = 1;
      }
      if (plVar7[0x22] != 0) {
        uVar6 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar7[0x22],uRam0000000003d578e0);
        uVar6 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(extraout_s0,extraout_s0,extraout_s0,uVar22,0,uVar6,0,0);
        uVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar23,uVar6,uRam0000000003d5e780);
        lVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar6,extraout_x1,uRam0000000003d5e7b8);
        puVar17 = *(undefined1 **)(puVar2 + -0x90);
        puVar19 = *(undefined **)(puVar2 + -0x88);
        param_5 = *(undefined8 *)(puVar2 + -0xa0);
        lVar5 = *(long *)(puVar2 + -0xb0);
        uVar6 = *(undefined8 *)(puVar2 + -0xa8);
        puVar3 = puVar2 + -0x80;
        uVar10 = uRam0000000003d5e868;
        unaff_x20 = *(long **)(puVar2 + -0x98);
        goto code_r0x018eee1c;
      }
      unaff_x20 = (long *)func_0x00f78af4();
      register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x130);
      *(undefined8 *)(puVar2 + -0x130) = unaff_d11;
      *(ulong *)(puVar2 + -0x128) = (ulong)extraout_s0;
      *(ulong *)(puVar2 + -0x120) = (ulong)uVar22;
      *(ulong *)(puVar2 + -0x118) = (ulong)uVar23;
      *(long *)(puVar2 + -0x110) = lVar5;
      *(undefined8 *)(puVar2 + -0x108) = 0x3eb5000;
      *(undefined8 *)(puVar2 + -0x100) = extraout_x1;
      *(long **)(puVar2 + -0xf8) = plVar7;
      *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0x90;
      *(code **)(puVar2 + -0xe8) = Atlas_UI_LeaderboardEntryBehaviour__PlayStarDeltaSpawnTween;
      unaff_x29 = puVar2 + -0xf0;
      unaff_d8 = (ulong)uVar24;
      unaff_d9 = (ulong)uVar21;
      unaff_d10 = (ulong)extraout_s0_00;
      unaff_x22 = 0x3d23990;
      param_2 = uVar21;
      param_3 = uVar24;
      if ((bRam0000000003eb5408 & 1) == 0) {
        func_0x00f78a20(0x3d578e0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb5408 = 1;
      }
      unaff_x21 = unaff_x20[0x27];
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(unaff_x21,0);
      if (iVar4 == 0) {
        return 0;
      }
      if (unaff_x20[0x27] == 0) break;
      lVar8 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(unaff_x20[0x27],uRam0000000003d578e0);
      uVar6 = *(undefined8 *)(puVar2 + -0xf0);
      uVar18 = *(undefined8 *)(puVar2 + -0xe8);
      uVar10 = *(undefined8 *)(puVar2 + -0x100);
      uVar14 = *(undefined8 *)(puVar2 + -0xf8);
      uVar16 = *(undefined8 *)(puVar2 + -0x110);
      uVar15 = *(undefined8 *)(puVar2 + -0x108);
      uVar26 = *(undefined8 *)(puVar2 + -0x120);
      uVar25 = *(undefined8 *)(puVar2 + -0x118);
      unaff_d11 = *(undefined8 *)(puVar2 + -0x130);
      uVar27 = *(undefined8 *)(puVar2 + -0x128);
      puVar2 = puVar2 + -0xe0;
      param_5 = extraout_x1_00;
      param_1 = extraout_s0_00;
    }
    unaff_x30 = Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerSpawnTween;
    param_4 = (long *)func_0x00f78af4();
    param_5 = extraout_x1_01;
    unaff_x19 = extraout_x1_00;
    param_1 = extraout_s0_01;
  }
  plVar9 = (long *)func_0x00f78af4();
  *(ulong *)((long)register0x00000008 + -0x90) = (ulong)param_2;
  *(ulong *)((long)register0x00000008 + -0x88) = (ulong)param_3;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3eb5000;
  *(long **)((long)register0x00000008 + -0x70) = param_4;
  *(undefined8 *)((long)register0x00000008 + -0x68) = param_5;
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x58) =
       &Atlas_UI_LeaderboardEntryBehaviour__PlayEnterStatsStarDeltaTween;
  uVar22 = uVar21;
  if ((bRam0000000003eb540a & 1) == 0) {
    func_0x00f78a20(0x3d578e0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5e768);
    func_0x00f78a20(0x3d5e7a0);
    func_0x00f78a20(0x3d5e838);
    bRam0000000003eb540a = 1;
  }
  lVar5 = plVar9[0x27];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
  if (iVar4 == 0) {
    return 0;
  }
  if (plVar9[0x27] == 0) {
    plVar7 = (long *)func_0x00f78af4();
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x100);
    *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_d11;
    *(ulong *)((long)register0x00000008 + -0xf8) = (ulong)param_1;
    *(ulong *)((long)register0x00000008 + -0xf0) = (ulong)extraout_s0_02;
    *(ulong *)((long)register0x00000008 + -0xe8) = (ulong)uVar21;
    *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -200) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x3d23990;
    *(long *)((long)register0x00000008 + -0xb8) = lVar5;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = extraout_x1_02;
    *(long **)((long)register0x00000008 + -0xa8) = plVar9;
    *(undefined1 **)((long)register0x00000008 + -0xa0) =
         (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined **)((long)register0x00000008 + -0x98) =
         &Atlas_UI_LeaderboardEntryBehaviour__PlayHideStarsTween;
    puVar17 = (undefined1 *)((long)register0x00000008 + -0xa0);
    if ((bRam0000000003eb540b & 1) == 0) {
      func_0x00f78a20(0x3d59de8);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d25428);
      func_0x00f78a20(0x3d5e6c0);
      func_0x00f78a20(0x3d5e758);
      func_0x00f78a20(0x3d5e788);
      func_0x00f78a20(0x3d5e800);
      bRam0000000003eb540b = 1;
    }
    lVar5 = plVar7[0x29];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
    if (iVar4 == 0) {
      return 0;
    }
    uVar6 = 0x3d5e000;
    lVar5 = 0x3d5e000;
    uVar10 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(extraout_s0_03,uVar22,plVar7[0x29],0);
    uVar10 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar24,uVar10,uRam0000000003d5e758);
    lVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar10,extraout_x1_03,uRam0000000003d5e788);
    puVar19 = &UNK_015ec6b8;
    uVar10 = uRam0000000003d5e800;
    unaff_x20 = plVar7;
    param_5 = extraout_x1_03;
  }
  else {
    uVar6 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar9[0x27],uRam0000000003d578e0);
    uVar6 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPosX*/ func_0x016a707c(0,extraout_s0_02,uVar6,0,0);
    uVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar21,uVar6,uRam0000000003d5e768);
    lVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar6,extraout_x1_02,uRam0000000003d5e7a0);
    puVar17 = *(undefined1 **)((long)register0x00000008 + -0x60);
    puVar19 = *(undefined **)((long)register0x00000008 + -0x58);
    param_5 = *(undefined8 *)((long)register0x00000008 + -0x70);
    lVar5 = *(long *)((long)register0x00000008 + -0x80);
    uVar6 = *(undefined8 *)((long)register0x00000008 + -0x78);
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x50);
    plVar7 = plVar9;
    uVar10 = uRam0000000003d5e838;
    unaff_x20 = *(long **)((long)register0x00000008 + -0x68);
  }
code_r0x018eee1c:
  *(long *)(puVar3 + -0x30) = lVar5;
  *(undefined8 *)(puVar3 + -0x28) = uVar6;
  *(undefined8 *)(puVar3 + -0x20) = param_5;
  *(long **)(puVar3 + -0x18) = unaff_x20;
  *(undefined1 **)(puVar3 + -0x10) = puVar17;
  *(undefined **)(puVar3 + -8) = puVar19;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar7,uVar10);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar4 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar4 != 0) {
      lVar11 = func_0x00f78adc(plVar7,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0,0);
      if ((uVar12 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto code_r0x018eef34;
        uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      }
      else {
        if (lVar11 == 0) {
code_r0x018eef34:
          auVar28 = func_0x00f78af4();
          lVar13 = auVar28._0_8_;
          *(long *)(puVar3 + -0x60) = lVar5;
          *(long *)(puVar3 + -0x58) = lVar11;
          *(long **)(puVar3 + -0x50) = plVar7;
          *(long *)(puVar3 + -0x48) = lVar8;
          *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x38) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar13 != 0) && (*(char *)(lVar13 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar13,auVar28._8_8_,cVar1 != '\0',0);
          }
          return lVar13;
        }
        uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar11,0);
      }
      *(undefined8 *)(lVar8 + 200) = uVar6;
    }
    *(long **)(lVar8 + 0x48) = plVar7;
  }
  return lVar8;
}



// ============================================================
// RVA: 0x15ec444 | Atlas.UI.LeaderboardEntryBehaviour.PlayEnterStatsStarDeltaTween
// ============================================================

/* WARNING: Possible PIC construction at 0x015ec6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec6b8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */

long Atlas_UI_LeaderboardEntryBehaviour__PlayEnterStatsStarDeltaTween
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
               undefined8 param_5)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 extraout_x1;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar8;
  undefined8 unaff_x22;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar9 = param_2;
  if ((bRam0000000003eb540a & 1) == 0) {
    func_0x00f78a20(0x3d578e0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5e768);
    func_0x00f78a20(0x3d5e7a0);
    func_0x00f78a20(0x3d5e838);
    bRam0000000003eb540a = 1;
  }
  lVar8 = param_4[0x27];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar8,0);
  if (iVar3 == 0) {
    return 0;
  }
  if (param_4[0x27] == 0) {
    param_4 = (long *)func_0x00f78af4();
    puVar2 = &stack0xffffffffffffff50;
    puStack_48 = &Atlas_UI_LeaderboardEntryBehaviour__PlayHideStarsTween;
    unaff_x29 = &puStack_50;
    puStack_50 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb540b & 1) == 0) {
      func_0x00f78a20(0x3d59de8);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d25428);
      func_0x00f78a20(0x3d5e6c0);
      func_0x00f78a20(0x3d5e758);
      func_0x00f78a20(0x3d5e788);
      func_0x00f78a20(0x3d5e800);
      bRam0000000003eb540b = 1;
    }
    lVar8 = param_4[0x29];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar8,0);
    if (iVar3 == 0) {
      return 0;
    }
    unaff_x21 = 0x3d5e000;
    unaff_x22 = 0x3d5e000;
    uVar4 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(extraout_s0,uVar9,param_4[0x29],0);
    uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(param_3,uVar4,uRam0000000003d5e758);
    lVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,extraout_x1,uRam0000000003d5e788);
    unaff_x30 = &UNK_015ec6b8;
    uVar4 = uRam0000000003d5e800;
    unaff_x19 = param_4;
    unaff_x20 = extraout_x1;
  }
  else {
    uVar4 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(param_4[0x27],uRam0000000003d578e0);
    uVar4 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPosX*/ func_0x016a707c(0,param_1,uVar4,0,0);
    uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(param_2,uVar4,uRam0000000003d5e768);
    lVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,param_5,uRam0000000003d5e7a0);
    puVar2 = (undefined1 *)register0x00000008;
    uVar4 = uRam0000000003d5e838;
  }
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(long **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 ***)(puVar2 + -0x10) = unaff_x29;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,param_4,uVar4);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar3 != 0) {
      lVar5 = func_0x00f78adc(param_4,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
      if ((uVar6 & 1) == 0) {
        if (param_4 == (long *)0x0) goto code_r0x018eef34;
        uVar4 = (**(code **)(*param_4 + 0x168))(param_4,*(undefined8 *)(*param_4 + 0x170));
      }
      else {
        if (lVar5 == 0) {
code_r0x018eef34:
          auVar10 = func_0x00f78af4();
          lVar7 = auVar10._0_8_;
          *(undefined8 *)(puVar2 + -0x60) = unaff_x22;
          *(long *)(puVar2 + -0x58) = lVar5;
          *(long **)(puVar2 + -0x50) = param_4;
          *(long *)(puVar2 + -0x48) = lVar8;
          *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x38) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar7,auVar10._8_8_,cVar1 != '\0',0);
          }
          return lVar7;
        }
        uVar4 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar5,0);
      }
      *(undefined8 *)(lVar8 + 200) = uVar4;
    }
    *(long **)(lVar8 + 0x48) = param_4;
  }
  return lVar8;
}



// ============================================================
// RVA: 0x15ec580 | Atlas.UI.LeaderboardEntryBehaviour.PlayHideStarsTween
// ============================================================

long Atlas_UI_LeaderboardEntryBehaviour__PlayHideStarsTween
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb540b & 1) == 0) {
    func_0x00f78a20(0x3d59de8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6c0);
    func_0x00f78a20(0x3d5e758);
    func_0x00f78a20(0x3d5e788);
    func_0x00f78a20(0x3d5e800);
    bRam0000000003eb540b = 1;
  }
  uVar3 = *(undefined8 *)(param_4 + 0x148);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar1 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar3,0);
  if (iVar1 != 0) {
    uVar3 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(param_1,param_2,*(undefined8 *)(param_4 + 0x148),0);
    uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(param_3,uVar3,uRam0000000003d5e758);
    uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar3,param_5,uRam0000000003d5e788);
    lVar2 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar3,param_4,uRam0000000003d5e800);
    uVar3 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar3,param_4,uRam0000000003d59de8,0);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) {
      *(undefined8 *)(lVar2 + 0x80) = uVar3;
    }
    return lVar2;
  }
  return 0;
}



// ============================================================
// RVA: 0x15ec728 | Atlas.UI.LeaderboardEntryBehaviour.SetPlacingIconActive
// ============================================================

void Atlas_UI_LeaderboardEntryBehaviour__SetPlacingIconActive
               (long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  int iStack_d4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar1 = unaff_x19;
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x38),0), uVar1 = param_2, lVar2 == 0)) {
    unaff_x19 = uVar1;
    auVar6 = func_0x00f78af4();
    puStack_28 = &Atlas_UI_LeaderboardEntryBehaviour__SetPositionHidden;
    lVar2 = *(long *)(auVar6._0_8_ + 0x30);
    puStack_30 = &stack0xfffffffffffffff0;
    if ((lVar2 == 0) || (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar2,0), lVar2 == 0)) {
      auVar6 = func_0x00f78af4();
      iStack_d4 = auVar6._8_4_;
      lVar2 = auVar6._0_8_;
      puStack_48 = &Atlas_UI_LeaderboardEntryBehaviour__SetHitCounterActive;
      ppuStack_50 = &puStack_30;
      if (iStack_d4 == 0) {
        uStack_60 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        if (lVar2 == 0) {
          auVar5 = func_0x00f78af4();
          puVar4 = auVar5._8_8_;
          uStack_f8 = puVar4[1];
          uStack_100 = *puVar4;
          uStack_e8 = puVar4[3];
          uStack_f0 = puVar4[2];
          uStack_e0 = puVar4[4];
          uVar3 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_d4,0);
          /*Atlas.UI.LeaderboardEntryBehaviour$$SetStatActive*/ func_0x015ec85c(auVar5._0_8_,&uStack_100,uVar3,param_4);
          return;
        }
      }
      else {
        uStack_78 = *(undefined8 *)(lVar2 + 0x98);
        uStack_80 = *(undefined8 *)(lVar2 + 0x90);
        uStack_68 = *(undefined8 *)(lVar2 + 0xa8);
        uStack_70 = *(undefined8 *)(lVar2 + 0xa0);
        uStack_60 = *(undefined8 *)(lVar2 + 0xb0);
      }
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      uStack_90 = uStack_60;
      Atlas_UI_LeaderboardEntryBehaviour__SetStatActive(lVar2,&uStack_b0);
      return;
    }
    param_2 = (ulong)(auVar6._8_4_ ^ 1);
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = puStack_30;
    unaff_x30 = puStack_28;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000003ebf4c0)(lVar2,param_2);
  return;
}



// ============================================================
// RVA: 0x15ec764 | Atlas.UI.LeaderboardEntryBehaviour.SetPositionHidden
// ============================================================

void Atlas_UI_LeaderboardEntryBehaviour__SetPositionHidden
               (long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  int iStack_b4;
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
  
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar1 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x30),0), lVar1 != 0)) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ebf4c0)(lVar1,param_2 ^ 1);
    return;
  }
  auVar5 = func_0x00f78af4();
  iStack_b4 = auVar5._8_4_;
  lVar1 = auVar5._0_8_;
  if (iStack_b4 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    if (lVar1 == 0) {
      auVar4 = func_0x00f78af4();
      puVar3 = auVar4._8_8_;
      uStack_d8 = puVar3[1];
      uStack_e0 = *puVar3;
      uStack_c8 = puVar3[3];
      uStack_d0 = puVar3[2];
      uStack_c0 = puVar3[4];
      uVar2 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_b4,0);
      /*Atlas.UI.LeaderboardEntryBehaviour$$SetStatActive*/ func_0x015ec85c(auVar4._0_8_,&uStack_e0,uVar2,param_4);
      return;
    }
  }
  else {
    uStack_58 = *(undefined8 *)(lVar1 + 0x98);
    uStack_60 = *(undefined8 *)(lVar1 + 0x90);
    uStack_48 = *(undefined8 *)(lVar1 + 0xa8);
    uStack_50 = *(undefined8 *)(lVar1 + 0xa0);
    uStack_40 = *(undefined8 *)(lVar1 + 0xb0);
  }
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_70 = uStack_40;
  Atlas_UI_LeaderboardEntryBehaviour__SetStatActive(lVar1,&uStack_90);
  return;
}



// ============================================================
// RVA: 0x15ec7a0 | Atlas.UI.LeaderboardEntryBehaviour.SetHitCounterActive
// ============================================================

void Atlas_UI_LeaderboardEntryBehaviour__SetHitCounterActive
               (long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int iStack_94;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (param_2 == 0) {
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    if (param_1 == 0) {
      iStack_94 = param_2;
      auVar3 = func_0x00f78af4();
      puVar2 = auVar3._8_8_;
      uStack_b8 = puVar2[1];
      uStack_c0 = *puVar2;
      uStack_a8 = puVar2[3];
      uStack_b0 = puVar2[2];
      uStack_a0 = puVar2[4];
      uVar1 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_94,0);
      /*Atlas.UI.LeaderboardEntryBehaviour$$SetStatActive*/ func_0x015ec85c(auVar3._0_8_,&uStack_c0,uVar1,param_4);
      return;
    }
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0x98);
    uStack_40 = *(undefined8 *)(param_1 + 0x90);
    uStack_28 = *(undefined8 *)(param_1 + 0xa8);
    uStack_30 = *(undefined8 *)(param_1 + 0xa0);
    uStack_20 = *(undefined8 *)(param_1 + 0xb0);
  }
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  uStack_50 = uStack_20;
  Atlas_UI_LeaderboardEntryBehaviour__SetStatActive(param_1,&uStack_70);
  return;
}



// ============================================================
// RVA: 0x15ec800 | Atlas.UI.LeaderboardEntryBehaviour.SetStatActive
// ============================================================

void Atlas_UI_LeaderboardEntryBehaviour__SetStatActive
               (undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = param_2[4];
  uStack_24 = param_3;
  uVar1 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_24,0);
  /*Atlas.UI.LeaderboardEntryBehaviour$$SetStatActive*/ func_0x015ec85c(param_1,&uStack_50,uVar1,param_4);
  return;
}



// ============================================================
// RVA: 0x15ec85c | Atlas.UI.LeaderboardEntryBehaviour.SetStatActive
// ============================================================

/* WARNING: Possible PIC construction at 0x0146f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecb5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecc4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015eccf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecd18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec540) */
/* WARNING: Removing unreachable block (ram,0x015ec290) */
/* WARNING: Removing unreachable block (ram,0x015ec184) */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ecec8) */
/* WARNING: Removing unreachable block (ram,0x015eced0) */
/* WARNING: Removing unreachable block (ram,0x015ecea8) */
/* WARNING: Removing unreachable block (ram,0x015eceb0) */
/* WARNING: Removing unreachable block (ram,0x015ecebc) */
/* WARNING: Removing unreachable block (ram,0x015ece68) */
/* WARNING: Removing unreachable block (ram,0x015ece70) */
/* WARNING: Removing unreachable block (ram,0x015ece48) */
/* WARNING: Removing unreachable block (ram,0x015ece50) */
/* WARNING: Removing unreachable block (ram,0x015ece5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd1c) */
/* WARNING: Removing unreachable block (ram,0x015eccf4) */
/* WARNING: Removing unreachable block (ram,0x015ecd20) */
/* WARNING: Removing unreachable block (ram,0x015ecd50) */
/* WARNING: Removing unreachable block (ram,0x015ecd28) */
/* WARNING: Removing unreachable block (ram,0x015ecd30) */
/* WARNING: Removing unreachable block (ram,0x015ecd3c) */
/* WARNING: Removing unreachable block (ram,0x015eccfc) */
/* WARNING: Removing unreachable block (ram,0x015ecd04) */
/* WARNING: Removing unreachable block (ram,0x015ecd10) */
/* WARNING: Removing unreachable block (ram,0x015ecb24) */
/* WARNING: Removing unreachable block (ram,0x015ecb34) */
/* WARNING: Removing unreachable block (ram,0x015ecb3c) */
/* WARNING: Removing unreachable block (ram,0x015ecb40) */
/* WARNING: Removing unreachable block (ram,0x015ecb60) */
/* WARNING: Removing unreachable block (ram,0x015ecb70) */
/* WARNING: Removing unreachable block (ram,0x015ecb78) */
/* WARNING: Removing unreachable block (ram,0x015ecb7c) */
/* WARNING: Removing unreachable block (ram,0x015ecbb0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc8) */
/* WARNING: Removing unreachable block (ram,0x015ecbcc) */
/* WARNING: Removing unreachable block (ram,0x015ecc00) */
/* WARNING: Removing unreachable block (ram,0x015ecc10) */
/* WARNING: Removing unreachable block (ram,0x015ecc18) */
/* WARNING: Removing unreachable block (ram,0x015ecc1c) */
/* WARNING: Removing unreachable block (ram,0x015ecc50) */
/* WARNING: Removing unreachable block (ram,0x015ecc60) */
/* WARNING: Removing unreachable block (ram,0x015ecc68) */
/* WARNING: Removing unreachable block (ram,0x015ecc6c) */
/* WARNING: Removing unreachable block (ram,0x015eccac) */
/* WARNING: Removing unreachable block (ram,0x015ecc7c) */
/* WARNING: Removing unreachable block (ram,0x015ecc84) */
/* WARNING: Removing unreachable block (ram,0x015ecc2c) */
/* WARNING: Removing unreachable block (ram,0x015ecc34) */
/* WARNING: Removing unreachable block (ram,0x015ecbdc) */
/* WARNING: Removing unreachable block (ram,0x015ecbe4) */
/* WARNING: Removing unreachable block (ram,0x015ecb8c) */
/* WARNING: Removing unreachable block (ram,0x015eccbc) */
/* WARNING: Removing unreachable block (ram,0x015eccd8) */
/* WARNING: Removing unreachable block (ram,0x015ecd5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd74) */
/* WARNING: Removing unreachable block (ram,0x015ecd98) */
/* WARNING: Removing unreachable block (ram,0x015ecdc8) */
/* WARNING: Removing unreachable block (ram,0x015ecddc) */
/* WARNING: Removing unreachable block (ram,0x015ece00) */
/* WARNING: Removing unreachable block (ram,0x015ece08) */
/* WARNING: Removing unreachable block (ram,0x015ece0c) */
/* WARNING: Removing unreachable block (ram,0x015ece20) */
/* WARNING: Removing unreachable block (ram,0x015ece7c) */
/* WARNING: Removing unreachable block (ram,0x015ecedc) */
/* WARNING: Removing unreachable block (ram,0x015ecee4) */
/* WARNING: Removing unreachable block (ram,0x015ebd40) */
/* WARNING: Removing unreachable block (ram,0x015ebd5c) */
/* WARNING: Removing unreachable block (ram,0x015ebd68) */
/* WARNING: Removing unreachable block (ram,0x015ebdd4) */
/* WARNING: Removing unreachable block (ram,0x015ebe04) */
/* WARNING: Removing unreachable block (ram,0x015ebe18) */
/* WARNING: Removing unreachable block (ram,0x015ebe28) */
/* WARNING: Removing unreachable block (ram,0x015ebe30) */
/* WARNING: Removing unreachable block (ram,0x015ebe34) */
/* WARNING: Removing unreachable block (ram,0x015ebe70) */
/* WARNING: Removing unreachable block (ram,0x015ebe44) */
/* WARNING: Removing unreachable block (ram,0x015ebe4c) */
/* WARNING: Removing unreachable block (ram,0x015ebe80) */
/* WARNING: Removing unreachable block (ram,0x015ebeb4) */
/* WARNING: Removing unreachable block (ram,0x015ebed4) */
/* WARNING: Removing unreachable block (ram,0x015ebee4) */
/* WARNING: Removing unreachable block (ram,0x015ebeec) */
/* WARNING: Removing unreachable block (ram,0x015ebef0) */
/* WARNING: Removing unreachable block (ram,0x015ebf00) */
/* WARNING: Removing unreachable block (ram,0x015ebf58) */
/* WARNING: Removing unreachable block (ram,0x015ebf94) */
/* WARNING: Removing unreachable block (ram,0x015ebfa8) */
/* WARNING: Removing unreachable block (ram,0x015ebff0) */
/* WARNING: Removing unreachable block (ram,0x015ebfb0) */
/* WARNING: Removing unreachable block (ram,0x015ebff4) */
/* WARNING: Removing unreachable block (ram,0x015ec044) */
/* WARNING: Removing unreachable block (ram,0x015ec0ac) */
/* WARNING: Removing unreachable block (ram,0x015ec0c4) */
/* WARNING: Removing unreachable block (ram,0x015ec1b0) */
/* WARNING: Removing unreachable block (ram,0x015ec1f0) */
/* WARNING: Removing unreachable block (ram,0x015ec228) */
/* WARNING: Removing unreachable block (ram,0x015ec2b4) */
/* WARNING: Removing unreachable block (ram,0x015ec2f8) */
/* WARNING: Removing unreachable block (ram,0x015ec318) */
/* WARNING: Removing unreachable block (ram,0x015ec328) */
/* WARNING: Removing unreachable block (ram,0x015ec330) */
/* WARNING: Removing unreachable block (ram,0x015ec334) */
/* WARNING: Removing unreachable block (ram,0x015ec38c) */
/* WARNING: Removing unreachable block (ram,0x015ec344) */
/* WARNING: Removing unreachable block (ram,0x015ec3a8) */
/* WARNING: Removing unreachable block (ram,0x015ec3e4) */
/* WARNING: Removing unreachable block (ram,0x015ec3f8) */
/* WARNING: Removing unreachable block (ram,0x015ec440) */
/* WARNING: Removing unreachable block (ram,0x015ec47c) */
/* WARNING: Removing unreachable block (ram,0x015ec4c0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d8) */
/* WARNING: Removing unreachable block (ram,0x015ec4dc) */
/* WARNING: Removing unreachable block (ram,0x015ec564) */
/* WARNING: Removing unreachable block (ram,0x015ec4ec) */
/* WARNING: Removing unreachable block (ram,0x015ec57c) */
/* WARNING: Removing unreachable block (ram,0x015ec5c8) */
/* WARNING: Removing unreachable block (ram,0x015ec624) */
/* WARNING: Removing unreachable block (ram,0x015ec634) */
/* WARNING: Removing unreachable block (ram,0x015ec63c) */
/* WARNING: Removing unreachable block (ram,0x015ec640) */
/* WARNING: Removing unreachable block (ram,0x015ec704) */
/* WARNING: Removing unreachable block (ram,0x015ec650) */
/* WARNING: Removing unreachable block (ram,0x015ec4f4) */
/* WARNING: Removing unreachable block (ram,0x015ec400) */
/* WARNING: Removing unreachable block (ram,0x015ec34c) */
/* WARNING: Removing unreachable block (ram,0x015ec230) */
/* WARNING: Removing unreachable block (ram,0x015ec0cc) */
/* WARNING: Removing unreachable block (ram,0x015ec134) */
/* WARNING: Removing unreachable block (ram,0x015ec13c) */
/* WARNING: Removing unreachable block (ram,0x015ec140) */
/* WARNING: Removing unreachable block (ram,0x018eee1c) */
/* WARNING: Removing unreachable block (ram,0x018eee40) */
/* WARNING: Removing unreachable block (ram,0x018eee6c) */
/* WARNING: Removing unreachable block (ram,0x018eee70) */
/* WARNING: Removing unreachable block (ram,0x018eee78) */
/* WARNING: Removing unreachable block (ram,0x018eee8c) */
/* WARNING: Removing unreachable block (ram,0x018eee94) */
/* WARNING: Removing unreachable block (ram,0x018eee98) */
/* WARNING: Removing unreachable block (ram,0x018eeea4) */
/* WARNING: Removing unreachable block (ram,0x018eeed0) */
/* WARNING: Removing unreachable block (ram,0x018eeed8) */
/* WARNING: Removing unreachable block (ram,0x018eeedc) */
/* WARNING: Removing unreachable block (ram,0x018eef04) */
/* WARNING: Removing unreachable block (ram,0x018eef08) */
/* WARNING: Removing unreachable block (ram,0x018eeef0) */
/* WARNING: Removing unreachable block (ram,0x018eef34) */
/* WARNING: Removing unreachable block (ram,0x018eef5c) */
/* WARNING: Removing unreachable block (ram,0x018eef7c) */
/* WARNING: Removing unreachable block (ram,0x018eef80) */
/* WARNING: Removing unreachable block (ram,0x018eef88) */
/* WARNING: Removing unreachable block (ram,0x018eef9c) */
/* WARNING: Removing unreachable block (ram,0x018eefa4) */
/* WARNING: Removing unreachable block (ram,0x018eefac) */
/* WARNING: Removing unreachable block (ram,0x018eefc8) */
/* WARNING: Removing unreachable block (ram,0x018eefd0) */
/* WARNING: Removing unreachable block (ram,0x018eefd4) */
/* WARNING: Removing unreachable block (ram,0x018eefec) */
/* WARNING: Removing unreachable block (ram,0x018eeef4) */
/* WARNING: Removing unreachable block (ram,0x018eef18) */
/* WARNING: Removing unreachable block (ram,0x018eef1c) */
/* WARNING: Removing unreachable block (ram,0x018eef20) */
/* WARNING: Removing unreachable block (ram,0x015ebf2c) */
/* WARNING: Removing unreachable block (ram,0x015ebf44) */
/* WARNING: Removing unreachable block (ram,0x015ebe58) */
/* WARNING: Removing unreachable block (ram,0x015ebda4) */
/* WARNING: Removing unreachable block (ram,0x02f8b024) */
/* WARNING: Removing unreachable block (ram,0x02f8b034) */
/* WARNING: Removing unreachable block (ram,0x02f8b038) */
/* WARNING: Removing unreachable block (ram,0x02f8b050) */
/* WARNING: Removing unreachable block (ram,0x02f8b03c) */
/* WARNING: Removing unreachable block (ram,0x015ece88) */
/* WARNING: Removing unreachable block (ram,0x015ece90) */
/* WARNING: Removing unreachable block (ram,0x015ece9c) */
/* WARNING: Removing unreachable block (ram,0x015ece28) */
/* WARNING: Removing unreachable block (ram,0x015ece30) */
/* WARNING: Removing unreachable block (ram,0x015ecf10) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x015ece3c) */
/* WARNING: Removing unreachable block (ram,0x015ecd84) */
/* WARNING: Removing unreachable block (ram,0x015ecce8) */
/* WARNING: Removing unreachable block (ram,0x0322ef1c) */
/* WARNING: Removing unreachable block (ram,0x0322ef40) */
/* WARNING: Removing unreachable block (ram,0x0322ef54) */
/* WARNING: Removing unreachable block (ram,0x015ecb94) */
/* WARNING: Removing unreachable block (ram,0x015ecb50) */
/* WARNING: Removing unreachable block (ram,0x0146f744) */
/* WARNING: Removing unreachable block (ram,0x0146f790) */
/* WARNING: Removing unreachable block (ram,0x0146f748) */
/* WARNING: Removing unreachable block (ram,0x0146f6bc) */
/* WARNING: Removing unreachable block (ram,0x0146f708) */
/* WARNING: Removing unreachable block (ram,0x0146f6c0) */
/* WARNING: Removing unreachable block (ram,0x0146f654) */
/* WARNING: Removing unreachable block (ram,0x0146f7b0) */
/* WARNING: Removing unreachable block (ram,0x0146f7cc) */
/* WARNING: Removing unreachable block (ram,0x0146f60c) */
/* WARNING: Removing unreachable block (ram,0x015ec6ac) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_LeaderboardEntryBehaviour__SetStatActive
                (long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 ***pppuVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_x7;
  long lVar14;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 **ppuVar15;
  undefined *puVar16;
  code *pcVar17;
  undefined4 uVar18;
  float fVar19;
  ulong extraout_d0;
  float fVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 uVar23;
  ulong uVar24;
  float fVar25;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  float unaff_s9;
  undefined4 unaff_00005124;
  undefined4 unaff_s10;
  undefined4 unaff_00005144;
  float unaff_s11;
  undefined4 unaff_00005164;
  float unaff_s12;
  undefined4 unaff_00005184;
  float unaff_s13;
  undefined4 unaff_000051a4;
  undefined4 unaff_s14;
  undefined4 unaff_000051c4;
  undefined4 unaff_s15;
  undefined4 unaff_000051e4;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined8 uVar29;
  undefined1 *puStack_1b0;
  undefined *puStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined1 auStack_180 [12];
  undefined4 uStack_174;
  undefined1 auStack_170 [16];
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined1 ***pppuStack_150;
  undefined *puStack_148;
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
  int iStack_e4;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined1 **ppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_30 = param_2[4];
  Atlas_UI_LeaderboardEntryBehaviour__SetStatActive(param_1,&uStack_50,param_4);
  plVar6 = *(long **)(param_1 + 0x120);
  if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015ec8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*plVar6 + 0x558))(plVar6,param_3,*(undefined8 *)(*plVar6 + 0x560));
    return uVar7;
  }
  auVar28 = func_0x00f78af4();
  iStack_e4 = auVar28._8_4_;
  lVar4 = auVar28._0_8_;
  puStack_58 = &Atlas_UI_LeaderboardEntryBehaviour__SetTimerActive;
  ppuStack_d0 = &puStack_60;
  puStack_60 = &stack0xfffffffffffffff0;
  if (iStack_e4 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    if (lVar4 == 0) {
      auVar26 = func_0x00f78af4();
      lVar4 = auVar26._0_8_;
      puStack_c8 = &Atlas_UI_LeaderboardEntryBehaviour__SetStarsActive;
      pppuStack_150 = &ppuStack_d0;
      lStack_e0 = param_1;
      uStack_d8 = param_3;
      if (auVar26._8_4_ == 0) {
        uStack_120 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        if (lVar4 == 0) {
          auVar27 = func_0x00f78af4();
          puStack_148 = &Atlas_UI_LeaderboardEntryBehaviour__SetStatText;
          plVar6 = *(long **)(auVar27._0_8_ + 0x120);
          if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015ec9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar7 = (**(code **)(*plVar6 + 0x558))
                              (plVar6,auVar27._8_8_,*(undefined8 *)(*plVar6 + 0x560));
            return uVar7;
          }
          auVar28 = func_0x00f78af4();
          uStack_174 = auVar28._8_4_;
          puStack_158 = &Atlas_UI_LeaderboardEntryBehaviour__SetStatText;
          plVar6 = *(long **)(auVar28._0_8_ + 0x120);
          puStack_160 = (undefined1 *)&pppuStack_150;
          auStack_170 = auVar26;
          uVar8 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_174,0);
          if (plVar6 == (long *)0x0) {
            lVar9 = func_0x00f78af4();
            pcStack_188 = (code *)&Atlas_UI_LeaderboardEntryBehaviour__PlayChangeHitCountTween;
            lVar4 = 0;
            lVar14 = 0;
            ppuStack_190 = &puStack_160;
            if (*(long *)(lVar9 + 0x120) == 0) {
              lVar9 = func_0x00f78af4();
              puStack_1b0 = (undefined1 *)&ppuStack_1a0;
              pcStack_198 = (code *)&Atlas_UI_LeaderboardEntryBehaviour__PlayChangePositionTween;
              if (*(long *)(lVar9 + 0x30) == 0) {
                ppuStack_1a0 = (undefined1 **)&ppuStack_190;
                lVar4 = func_0x00f78af4();
                puStack_1a8 = &Atlas_UI_LeaderboardEntryBehaviour__OnDestroy;
                ppuVar15 = &puStack_1b0;
                pppuVar1 = &ppuStack_1a0;
                if ((bRam0000000003eb540c & 1) == 0) {
                  func_0x00f78a20(0x3d53528);
                  func_0x00f78a20(0x3d578e0);
                  func_0x00f78a20(0x3d23990);
                  bRam0000000003eb540c = 1;
                  pppuVar1 = (undefined1 ***)puStack_1b0;
                }
                puStack_1b0 = (undefined1 *)pppuVar1;
                uVar8 = 0x3d23990;
                uVar29 = 0x3eb5000;
                puVar16 = &UNK_015ecb24;
                lVar14 = lVar4;
                if ((bRam0000000003eb5c29 & 1) == 0) {
                  func_0x00f78a20(0x3d20bc0,0,0);
                  bRam0000000003eb5c29 = 1;
                }
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                if ((bRam0000000003eb5af0 & 1) == 0) {
                  func_0x00f78a20(0x3d20bc0,0,0);
                  func_0x00f78a20(0x3d25440);
                  bRam0000000003eb5af0 = 1;
                }
                if (lVar4 == 0) {
                  uVar7 = 0;
                }
                else {
                  if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar2 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar4,0,0,0,0,in_x7,unaff_x22,uVar8,uVar29,lVar14,
                                          ppuVar15,puVar16);
                  uVar7 = (ulong)uVar2;
                }
                return uVar7;
              }
              ppuStack_1a0 = (undefined1 **)&ppuStack_190;
              lVar9 = /*TMPro.TMP_Text$$get_rectTransform*/ func_0x031adac0(*(long *)(lVar9 + 0x30),0);
              uVar22 = (ulong)_UNK_033f8500;
              uVar7 = (ulong)(uint)_UNK_033f875c;
              uVar24 = 0x41200000;
              pppuVar1 = &ppuStack_190;
              uVar8 = 0;
              uVar29 = 0;
              uVar13 = 0;
              ppuVar15 = ppuStack_1a0;
              pcVar17 = pcStack_198;
              fVar25 = _UNK_033f875c;
            }
            else {
              lVar9 = /*TMPro.TMP_Text$$get_rectTransform*/ func_0x031adac0(*(long *)(lVar9 + 0x120),0);
              uVar7 = 0x3f800000;
              uVar24 = 0;
              pppuVar1 = (undefined1 ***)auStack_180;
              uVar8 = 0;
              uVar29 = 0;
              uVar13 = 0;
              ppuVar15 = ppuStack_190;
              pcVar17 = pcStack_188;
              uVar22 = (ulong)_UNK_033f8500;
              fVar25 = _UNK_033f875c;
            }
            do {
              uVar10 = uVar8;
              lVar5 = lVar9;
              uVar23 = (undefined4)uVar24;
              fVar20 = (float)uVar22;
              uVar18 = (undefined4)uVar7;
              uVar21 = uVar7 & 0xffffffff;
              uVar24 = uVar7 & 0xffffffff;
              *(ulong *)((long)pppuVar1 + -0x80) = CONCAT44(unaff_000051e4,unaff_s15);
              *(ulong *)((long)pppuVar1 + -0x78) = CONCAT44(unaff_000051c4,unaff_s14);
              *(ulong *)((long)pppuVar1 + -0x70) = CONCAT44(unaff_000051a4,unaff_s13);
              *(ulong *)((long)pppuVar1 + -0x68) = CONCAT44(unaff_00005184,unaff_s12);
              *(ulong *)((long)pppuVar1 + -0x60) = CONCAT44(unaff_00005164,unaff_s11);
              *(ulong *)((long)pppuVar1 + -0x58) = CONCAT44(unaff_00005144,unaff_s10);
              *(ulong *)((long)pppuVar1 + -0x50) = CONCAT44(unaff_00005124,unaff_s9);
              *(ulong *)((long)pppuVar1 + -0x48) = CONCAT44(unaff_00005104,unaff_s8);
              *(undefined8 *)((long)pppuVar1 + -0x40) = unaff_x24;
              *(undefined8 *)((long)pppuVar1 + -0x38) = unaff_x23;
              *(undefined8 *)((long)pppuVar1 + -0x30) = unaff_x22;
              *(undefined8 *)((long)pppuVar1 + -0x28) = unaff_x21;
              *(long *)((long)pppuVar1 + -0x20) = lVar4;
              *(long *)((long)pppuVar1 + -0x18) = lVar14;
              *(undefined1 ***)((long)pppuVar1 + -0x10) = ppuVar15;
              *(code **)((long)pppuVar1 + -8) = pcVar17;
              ppuVar15 = (undefined1 **)((long)pppuVar1 + -0x10);
              unaff_00005124 = 0;
              unaff_00005104 = 0;
              unaff_00005164 = 0;
              unaff_00005184 = 0;
              unaff_000051a4 = 0;
              unaff_00005144 = 0;
              unaff_000051c4 = 0;
              unaff_000051e4 = 0;
              unaff_x24 = 0x3d26a48;
              uVar11 = uVar29;
              uVar12 = uVar13;
              fVar19 = fVar20;
              if ((bRam0000000003eb4867 & 1) == 0) {
                func_0x00f78a20(0x3d25428);
                func_0x00f78a20(0x3d5e6e0);
                func_0x00f78a20(0x3d5e770);
                func_0x00f78a20(0x3d5e790);
                func_0x00f78a20(0x3d5e7a8);
                func_0x00f78a20(0x3d40f78);
                func_0x00f78a20(0x3d62230);
                func_0x00f78a20(0x3d62238);
                func_0x00f78a20(0x3d62240);
                func_0x00f78a20(0x3d26a48);
                bRam0000000003eb4867 = 1;
              }
              lVar4 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0_TypeInfo*/ uRam0000000003d26a48);
              Atlas_UI_AtlasTweenAnimations___c__DisplayClass3_0___ctor(lVar4,0);
              if (lVar4 != 0) {
                *(undefined8 *)(lVar4 + 0x10) = uVar10;
                *(undefined8 *)(lVar4 + 0x18) = uVar13;
                if (lVar5 != 0) {
                  /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uVar7 & 0xffffffff,uVar7 & 0xffffffff,uVar7 & 0xffffffff,lVar5,0);
                  if ((int)uVar29 == 0) {
                    uVar7 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar22 & 0xffffffff,uVar22 & 0xffffffff,
                                            uVar22 & 0xffffffff,fVar25 * _UNK_033f82b8,lVar5,0);
                    puVar16 = &UNK_0146f6bc;
                  }
                  else {
                    uVar7 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar22 & 0xffffffff,uVar22 & 0xffffffff,
                                            uVar22 & 0xffffffff,fVar25,lVar5,0);
                    puVar16 = (undefined *)0x146f60c;
                  }
                  uVar8 = uRam0000000003d5e7a8;
                  *(long *)((long)pppuVar1 + -0xa0) = lVar4;
                  *(long *)((long)pppuVar1 + -0x98) = lVar5;
                  *(undefined1 ***)((long)pppuVar1 + -0x90) = ppuVar15;
                  *(undefined **)((long)pppuVar1 + -0x88) = puVar16;
                  if ((uVar7 != 0) && (*(char *)(uVar7 + 0xe8) != '\0')) {
                    *(undefined4 *)(uVar7 + 0xb4) = 9;
                    iVar3 = /*DG.Tweening.Core.Easing.EaseManager$$IsFlashEase*/ func_0x0169bba8(9,0,uVar8);
                    if (iVar3 != 0) {
                      fVar19 = *(float *)(uVar7 + 0xc0);
                      fVar25 = -fVar19;
                      if (fVar19 != INFINITY) {
                        fVar25 = fVar19;
                      }
                      *(float *)(uVar7 + 0xc0) = (float)(int)fVar25;
                    }
                    *(undefined8 *)(uVar7 + 0xb8) = 0;
                  }
                  return uVar7;
                }
              }
              pcVar17 = Atlas_UI_AtlasTweenAnimations__SpinZoom;
              lVar9 = func_0x00f78af4();
              pppuVar1 = (undefined1 ***)((long)pppuVar1 + -0x80);
              uVar8 = extraout_x1;
              uVar29 = uVar11;
              uVar13 = uVar12;
              lVar14 = lVar5;
              unaff_x21 = uVar29;
              unaff_x22 = uVar13;
              unaff_x23 = uVar10;
              uVar7 = extraout_d0;
              uVar22 = uVar21;
              fVar25 = fVar19;
              unaff_s8 = uVar23;
              unaff_s9 = fVar25;
              unaff_s10 = uVar18;
              unaff_s11 = fVar20;
              unaff_s12 = fVar20;
              unaff_s13 = fVar20;
              unaff_s14 = uVar18;
              unaff_s15 = uVar18;
            } while( true );
          }
          uVar7 = (**(code **)(*plVar6 + 0x558))(plVar6,uVar8,*(undefined8 *)(*plVar6 + 0x560));
          return uVar7;
        }
      }
      else {
        uStack_138 = *(undefined8 *)(lVar4 + 0xe8);
        uStack_140 = *(undefined8 *)(lVar4 + 0xe0);
        uStack_128 = *(undefined8 *)(lVar4 + 0xf8);
        uStack_130 = *(undefined8 *)(lVar4 + 0xf0);
        uStack_120 = *(undefined8 *)(lVar4 + 0x100);
      }
      uStack_108 = uStack_138;
      uStack_110 = uStack_140;
      uStack_f8 = uStack_128;
      uStack_100 = uStack_130;
      uStack_f0 = uStack_120;
      uVar8 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_e4,0);
      uVar7 = Atlas_UI_LeaderboardEntryBehaviour__SetStatActive
                        (lVar4,&uStack_110,uVar8,auVar26._8_8_);
      return uVar7;
    }
  }
  else {
    uStack_88 = *(undefined8 *)(lVar4 + 0xc0);
    uStack_90 = *(undefined8 *)(lVar4 + 0xb8);
    uStack_78 = *(undefined8 *)(lVar4 + 0xd0);
    uStack_80 = *(undefined8 *)(lVar4 + 200);
    uStack_70 = *(undefined8 *)(lVar4 + 0xd8);
  }
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_a0 = uStack_70;
  uVar7 = Atlas_UI_LeaderboardEntryBehaviour__SetStatActive(lVar4,&uStack_c0);
  return uVar7;
}



// ============================================================
// RVA: 0x15ec8bc | Atlas.UI.LeaderboardEntryBehaviour.SetTimerActive
// ============================================================

/* WARNING: Possible PIC construction at 0x0146f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecb5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecc4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015eccf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecd18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec540) */
/* WARNING: Removing unreachable block (ram,0x015ec290) */
/* WARNING: Removing unreachable block (ram,0x015ec184) */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ecec8) */
/* WARNING: Removing unreachable block (ram,0x015eced0) */
/* WARNING: Removing unreachable block (ram,0x015ecea8) */
/* WARNING: Removing unreachable block (ram,0x015eceb0) */
/* WARNING: Removing unreachable block (ram,0x015ecebc) */
/* WARNING: Removing unreachable block (ram,0x015ece68) */
/* WARNING: Removing unreachable block (ram,0x015ece70) */
/* WARNING: Removing unreachable block (ram,0x015ece48) */
/* WARNING: Removing unreachable block (ram,0x015ece50) */
/* WARNING: Removing unreachable block (ram,0x015ece5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd1c) */
/* WARNING: Removing unreachable block (ram,0x015eccf4) */
/* WARNING: Removing unreachable block (ram,0x015ecd20) */
/* WARNING: Removing unreachable block (ram,0x015ecd50) */
/* WARNING: Removing unreachable block (ram,0x015ecd28) */
/* WARNING: Removing unreachable block (ram,0x015ecd30) */
/* WARNING: Removing unreachable block (ram,0x015ecd3c) */
/* WARNING: Removing unreachable block (ram,0x015eccfc) */
/* WARNING: Removing unreachable block (ram,0x015ecd04) */
/* WARNING: Removing unreachable block (ram,0x015ecd10) */
/* WARNING: Removing unreachable block (ram,0x015ecb24) */
/* WARNING: Removing unreachable block (ram,0x015ecb34) */
/* WARNING: Removing unreachable block (ram,0x015ecb3c) */
/* WARNING: Removing unreachable block (ram,0x015ecb40) */
/* WARNING: Removing unreachable block (ram,0x015ecb60) */
/* WARNING: Removing unreachable block (ram,0x015ecb70) */
/* WARNING: Removing unreachable block (ram,0x015ecb78) */
/* WARNING: Removing unreachable block (ram,0x015ecb7c) */
/* WARNING: Removing unreachable block (ram,0x015ecbb0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc8) */
/* WARNING: Removing unreachable block (ram,0x015ecbcc) */
/* WARNING: Removing unreachable block (ram,0x015ecc00) */
/* WARNING: Removing unreachable block (ram,0x015ecc10) */
/* WARNING: Removing unreachable block (ram,0x015ecc18) */
/* WARNING: Removing unreachable block (ram,0x015ecc1c) */
/* WARNING: Removing unreachable block (ram,0x015ecc50) */
/* WARNING: Removing unreachable block (ram,0x015ecc60) */
/* WARNING: Removing unreachable block (ram,0x015ecc68) */
/* WARNING: Removing unreachable block (ram,0x015ecc6c) */
/* WARNING: Removing unreachable block (ram,0x015eccac) */
/* WARNING: Removing unreachable block (ram,0x015ecc7c) */
/* WARNING: Removing unreachable block (ram,0x015ecc84) */
/* WARNING: Removing unreachable block (ram,0x015ecc2c) */
/* WARNING: Removing unreachable block (ram,0x015ecc34) */
/* WARNING: Removing unreachable block (ram,0x015ecbdc) */
/* WARNING: Removing unreachable block (ram,0x015ecbe4) */
/* WARNING: Removing unreachable block (ram,0x015ecb8c) */
/* WARNING: Removing unreachable block (ram,0x015eccbc) */
/* WARNING: Removing unreachable block (ram,0x015eccd8) */
/* WARNING: Removing unreachable block (ram,0x015ecd5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd74) */
/* WARNING: Removing unreachable block (ram,0x015ecd98) */
/* WARNING: Removing unreachable block (ram,0x015ecdc8) */
/* WARNING: Removing unreachable block (ram,0x015ecddc) */
/* WARNING: Removing unreachable block (ram,0x015ece00) */
/* WARNING: Removing unreachable block (ram,0x015ece08) */
/* WARNING: Removing unreachable block (ram,0x015ece0c) */
/* WARNING: Removing unreachable block (ram,0x015ece20) */
/* WARNING: Removing unreachable block (ram,0x015ece7c) */
/* WARNING: Removing unreachable block (ram,0x015ecedc) */
/* WARNING: Removing unreachable block (ram,0x015ecee4) */
/* WARNING: Removing unreachable block (ram,0x015ebd40) */
/* WARNING: Removing unreachable block (ram,0x015ebd5c) */
/* WARNING: Removing unreachable block (ram,0x015ebd68) */
/* WARNING: Removing unreachable block (ram,0x015ebdd4) */
/* WARNING: Removing unreachable block (ram,0x015ebe04) */
/* WARNING: Removing unreachable block (ram,0x015ebe18) */
/* WARNING: Removing unreachable block (ram,0x015ebe28) */
/* WARNING: Removing unreachable block (ram,0x015ebe30) */
/* WARNING: Removing unreachable block (ram,0x015ebe34) */
/* WARNING: Removing unreachable block (ram,0x015ebe70) */
/* WARNING: Removing unreachable block (ram,0x015ebe44) */
/* WARNING: Removing unreachable block (ram,0x015ebe4c) */
/* WARNING: Removing unreachable block (ram,0x015ebe80) */
/* WARNING: Removing unreachable block (ram,0x015ebeb4) */
/* WARNING: Removing unreachable block (ram,0x015ebed4) */
/* WARNING: Removing unreachable block (ram,0x015ebee4) */
/* WARNING: Removing unreachable block (ram,0x015ebeec) */
/* WARNING: Removing unreachable block (ram,0x015ebef0) */
/* WARNING: Removing unreachable block (ram,0x015ebf00) */
/* WARNING: Removing unreachable block (ram,0x015ebf58) */
/* WARNING: Removing unreachable block (ram,0x015ebf94) */
/* WARNING: Removing unreachable block (ram,0x015ebfa8) */
/* WARNING: Removing unreachable block (ram,0x015ebff0) */
/* WARNING: Removing unreachable block (ram,0x015ebfb0) */
/* WARNING: Removing unreachable block (ram,0x015ebff4) */
/* WARNING: Removing unreachable block (ram,0x015ec044) */
/* WARNING: Removing unreachable block (ram,0x015ec0ac) */
/* WARNING: Removing unreachable block (ram,0x015ec0c4) */
/* WARNING: Removing unreachable block (ram,0x015ec1b0) */
/* WARNING: Removing unreachable block (ram,0x015ec1f0) */
/* WARNING: Removing unreachable block (ram,0x015ec228) */
/* WARNING: Removing unreachable block (ram,0x015ec2b4) */
/* WARNING: Removing unreachable block (ram,0x015ec2f8) */
/* WARNING: Removing unreachable block (ram,0x015ec318) */
/* WARNING: Removing unreachable block (ram,0x015ec328) */
/* WARNING: Removing unreachable block (ram,0x015ec330) */
/* WARNING: Removing unreachable block (ram,0x015ec334) */
/* WARNING: Removing unreachable block (ram,0x015ec38c) */
/* WARNING: Removing unreachable block (ram,0x015ec344) */
/* WARNING: Removing unreachable block (ram,0x015ec3a8) */
/* WARNING: Removing unreachable block (ram,0x015ec3e4) */
/* WARNING: Removing unreachable block (ram,0x015ec3f8) */
/* WARNING: Removing unreachable block (ram,0x015ec440) */
/* WARNING: Removing unreachable block (ram,0x015ec47c) */
/* WARNING: Removing unreachable block (ram,0x015ec4c0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d8) */
/* WARNING: Removing unreachable block (ram,0x015ec4dc) */
/* WARNING: Removing unreachable block (ram,0x015ec564) */
/* WARNING: Removing unreachable block (ram,0x015ec4ec) */
/* WARNING: Removing unreachable block (ram,0x015ec57c) */
/* WARNING: Removing unreachable block (ram,0x015ec5c8) */
/* WARNING: Removing unreachable block (ram,0x015ec624) */
/* WARNING: Removing unreachable block (ram,0x015ec634) */
/* WARNING: Removing unreachable block (ram,0x015ec63c) */
/* WARNING: Removing unreachable block (ram,0x015ec640) */
/* WARNING: Removing unreachable block (ram,0x015ec704) */
/* WARNING: Removing unreachable block (ram,0x015ec650) */
/* WARNING: Removing unreachable block (ram,0x015ec4f4) */
/* WARNING: Removing unreachable block (ram,0x015ec400) */
/* WARNING: Removing unreachable block (ram,0x015ec34c) */
/* WARNING: Removing unreachable block (ram,0x015ec230) */
/* WARNING: Removing unreachable block (ram,0x015ec0cc) */
/* WARNING: Removing unreachable block (ram,0x015ec134) */
/* WARNING: Removing unreachable block (ram,0x015ec13c) */
/* WARNING: Removing unreachable block (ram,0x015ec140) */
/* WARNING: Removing unreachable block (ram,0x018eee1c) */
/* WARNING: Removing unreachable block (ram,0x018eee40) */
/* WARNING: Removing unreachable block (ram,0x018eee6c) */
/* WARNING: Removing unreachable block (ram,0x018eee70) */
/* WARNING: Removing unreachable block (ram,0x018eee78) */
/* WARNING: Removing unreachable block (ram,0x018eee8c) */
/* WARNING: Removing unreachable block (ram,0x018eee94) */
/* WARNING: Removing unreachable block (ram,0x018eee98) */
/* WARNING: Removing unreachable block (ram,0x018eeea4) */
/* WARNING: Removing unreachable block (ram,0x018eeed0) */
/* WARNING: Removing unreachable block (ram,0x018eeed8) */
/* WARNING: Removing unreachable block (ram,0x018eeedc) */
/* WARNING: Removing unreachable block (ram,0x018eef04) */
/* WARNING: Removing unreachable block (ram,0x018eef08) */
/* WARNING: Removing unreachable block (ram,0x018eeef0) */
/* WARNING: Removing unreachable block (ram,0x018eef34) */
/* WARNING: Removing unreachable block (ram,0x018eef5c) */
/* WARNING: Removing unreachable block (ram,0x018eef7c) */
/* WARNING: Removing unreachable block (ram,0x018eef80) */
/* WARNING: Removing unreachable block (ram,0x018eef88) */
/* WARNING: Removing unreachable block (ram,0x018eef9c) */
/* WARNING: Removing unreachable block (ram,0x018eefa4) */
/* WARNING: Removing unreachable block (ram,0x018eefac) */
/* WARNING: Removing unreachable block (ram,0x018eefc8) */
/* WARNING: Removing unreachable block (ram,0x018eefd0) */
/* WARNING: Removing unreachable block (ram,0x018eefd4) */
/* WARNING: Removing unreachable block (ram,0x018eefec) */
/* WARNING: Removing unreachable block (ram,0x018eeef4) */
/* WARNING: Removing unreachable block (ram,0x018eef18) */
/* WARNING: Removing unreachable block (ram,0x018eef1c) */
/* WARNING: Removing unreachable block (ram,0x018eef20) */
/* WARNING: Removing unreachable block (ram,0x015ebf2c) */
/* WARNING: Removing unreachable block (ram,0x015ebf44) */
/* WARNING: Removing unreachable block (ram,0x015ebe58) */
/* WARNING: Removing unreachable block (ram,0x015ebda4) */
/* WARNING: Removing unreachable block (ram,0x02f8b024) */
/* WARNING: Removing unreachable block (ram,0x02f8b034) */
/* WARNING: Removing unreachable block (ram,0x02f8b038) */
/* WARNING: Removing unreachable block (ram,0x02f8b050) */
/* WARNING: Removing unreachable block (ram,0x02f8b03c) */
/* WARNING: Removing unreachable block (ram,0x015ece88) */
/* WARNING: Removing unreachable block (ram,0x015ece90) */
/* WARNING: Removing unreachable block (ram,0x015ece9c) */
/* WARNING: Removing unreachable block (ram,0x015ece28) */
/* WARNING: Removing unreachable block (ram,0x015ece30) */
/* WARNING: Removing unreachable block (ram,0x015ecf10) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x015ece3c) */
/* WARNING: Removing unreachable block (ram,0x015ecd84) */
/* WARNING: Removing unreachable block (ram,0x015ecce8) */
/* WARNING: Removing unreachable block (ram,0x0322ef1c) */
/* WARNING: Removing unreachable block (ram,0x0322ef40) */
/* WARNING: Removing unreachable block (ram,0x0322ef54) */
/* WARNING: Removing unreachable block (ram,0x015ecb94) */
/* WARNING: Removing unreachable block (ram,0x015ecb50) */
/* WARNING: Removing unreachable block (ram,0x0146f744) */
/* WARNING: Removing unreachable block (ram,0x0146f790) */
/* WARNING: Removing unreachable block (ram,0x0146f748) */
/* WARNING: Removing unreachable block (ram,0x0146f6bc) */
/* WARNING: Removing unreachable block (ram,0x0146f708) */
/* WARNING: Removing unreachable block (ram,0x0146f6c0) */
/* WARNING: Removing unreachable block (ram,0x0146f654) */
/* WARNING: Removing unreachable block (ram,0x0146f7b0) */
/* WARNING: Removing unreachable block (ram,0x0146f7cc) */
/* WARNING: Removing unreachable block (ram,0x0146f60c) */
/* WARNING: Removing unreachable block (ram,0x015ec6ac) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_LeaderboardEntryBehaviour__SetTimerActive(long param_1,int param_2)

{
  undefined1 ***pppuVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_x7;
  long lVar14;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 **ppuVar15;
  undefined *puVar16;
  code *pcVar17;
  undefined4 uVar18;
  float fVar19;
  ulong extraout_d0;
  float fVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 uVar23;
  ulong uVar24;
  float fVar25;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  float unaff_s9;
  undefined4 unaff_00005124;
  undefined4 unaff_s10;
  undefined4 unaff_00005144;
  float unaff_s11;
  undefined4 unaff_00005164;
  float unaff_s12;
  undefined4 unaff_00005184;
  float unaff_s13;
  undefined4 unaff_000051a4;
  undefined4 unaff_s14;
  undefined4 unaff_000051c4;
  undefined4 unaff_s15;
  undefined4 unaff_000051e4;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined8 uVar29;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  undefined1 auStack_130 [12];
  undefined4 uStack_124;
  undefined1 auStack_120 [16];
  undefined1 *puStack_110;
  undefined *puStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int iStack_94;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (param_2 == 0) {
    uStack_20 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    if (param_1 == 0) {
      iStack_94 = param_2;
      auVar26 = func_0x00f78af4();
      lVar4 = auVar26._0_8_;
      puStack_78 = &Atlas_UI_LeaderboardEntryBehaviour__SetStarsActive;
      ppuStack_100 = &puStack_80;
      puStack_80 = &stack0xfffffffffffffff0;
      if (auVar26._8_4_ == 0) {
        uStack_d0 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        if (lVar4 == 0) {
          auVar27 = func_0x00f78af4();
          puStack_f8 = &Atlas_UI_LeaderboardEntryBehaviour__SetStatText;
          plVar8 = *(long **)(auVar27._0_8_ + 0x120);
          if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015ec9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar6 = (**(code **)(*plVar8 + 0x558))
                              (plVar8,auVar27._8_8_,*(undefined8 *)(*plVar8 + 0x560));
            return uVar6;
          }
          auVar28 = func_0x00f78af4();
          uStack_124 = auVar28._8_4_;
          puStack_108 = &Atlas_UI_LeaderboardEntryBehaviour__SetStatText;
          plVar8 = *(long **)(auVar28._0_8_ + 0x120);
          puStack_110 = (undefined1 *)&ppuStack_100;
          auStack_120 = auVar26;
          uVar7 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_124,0);
          if (plVar8 == (long *)0x0) {
            lVar9 = func_0x00f78af4();
            pcStack_138 = (code *)&Atlas_UI_LeaderboardEntryBehaviour__PlayChangeHitCountTween;
            lVar4 = 0;
            lVar14 = 0;
            ppuStack_140 = &puStack_110;
            if (*(long *)(lVar9 + 0x120) == 0) {
              lVar9 = func_0x00f78af4();
              puStack_160 = (undefined1 *)&ppuStack_150;
              pcStack_148 = (code *)&Atlas_UI_LeaderboardEntryBehaviour__PlayChangePositionTween;
              if (*(long *)(lVar9 + 0x30) == 0) {
                ppuStack_150 = (undefined1 **)&ppuStack_140;
                lVar4 = func_0x00f78af4();
                puStack_158 = &Atlas_UI_LeaderboardEntryBehaviour__OnDestroy;
                ppuVar15 = &puStack_160;
                pppuVar1 = &ppuStack_150;
                if ((bRam0000000003eb540c & 1) == 0) {
                  func_0x00f78a20(0x3d53528);
                  func_0x00f78a20(0x3d578e0);
                  func_0x00f78a20(0x3d23990);
                  bRam0000000003eb540c = 1;
                  pppuVar1 = (undefined1 ***)puStack_160;
                }
                puStack_160 = (undefined1 *)pppuVar1;
                uVar7 = 0x3d23990;
                uVar29 = 0x3eb5000;
                puVar16 = &UNK_015ecb24;
                lVar14 = lVar4;
                if ((bRam0000000003eb5c29 & 1) == 0) {
                  func_0x00f78a20(0x3d20bc0,0,0);
                  bRam0000000003eb5c29 = 1;
                }
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                if ((bRam0000000003eb5af0 & 1) == 0) {
                  func_0x00f78a20(0x3d20bc0,0,0);
                  func_0x00f78a20(0x3d25440);
                  bRam0000000003eb5af0 = 1;
                }
                if (lVar4 == 0) {
                  uVar6 = 0;
                }
                else {
                  if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar2 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar4,0,0,0,0,in_x7,unaff_x22,uVar7,uVar29,lVar14,
                                          ppuVar15,puVar16);
                  uVar6 = (ulong)uVar2;
                }
                return uVar6;
              }
              ppuStack_150 = (undefined1 **)&ppuStack_140;
              lVar9 = /*TMPro.TMP_Text$$get_rectTransform*/ func_0x031adac0(*(long *)(lVar9 + 0x30),0);
              uVar22 = (ulong)_UNK_033f8500;
              uVar6 = (ulong)(uint)_UNK_033f875c;
              uVar24 = 0x41200000;
              pppuVar1 = &ppuStack_140;
              uVar7 = 0;
              uVar29 = 0;
              uVar13 = 0;
              ppuVar15 = ppuStack_150;
              pcVar17 = pcStack_148;
              fVar25 = _UNK_033f875c;
            }
            else {
              lVar9 = /*TMPro.TMP_Text$$get_rectTransform*/ func_0x031adac0(*(long *)(lVar9 + 0x120),0);
              uVar6 = 0x3f800000;
              uVar24 = 0;
              pppuVar1 = (undefined1 ***)auStack_130;
              uVar7 = 0;
              uVar29 = 0;
              uVar13 = 0;
              ppuVar15 = ppuStack_140;
              pcVar17 = pcStack_138;
              uVar22 = (ulong)_UNK_033f8500;
              fVar25 = _UNK_033f875c;
            }
            do {
              uVar10 = uVar7;
              lVar5 = lVar9;
              uVar23 = (undefined4)uVar24;
              fVar20 = (float)uVar22;
              uVar18 = (undefined4)uVar6;
              uVar21 = uVar6 & 0xffffffff;
              uVar24 = uVar6 & 0xffffffff;
              *(ulong *)((long)pppuVar1 + -0x80) = CONCAT44(unaff_000051e4,unaff_s15);
              *(ulong *)((long)pppuVar1 + -0x78) = CONCAT44(unaff_000051c4,unaff_s14);
              *(ulong *)((long)pppuVar1 + -0x70) = CONCAT44(unaff_000051a4,unaff_s13);
              *(ulong *)((long)pppuVar1 + -0x68) = CONCAT44(unaff_00005184,unaff_s12);
              *(ulong *)((long)pppuVar1 + -0x60) = CONCAT44(unaff_00005164,unaff_s11);
              *(ulong *)((long)pppuVar1 + -0x58) = CONCAT44(unaff_00005144,unaff_s10);
              *(ulong *)((long)pppuVar1 + -0x50) = CONCAT44(unaff_00005124,unaff_s9);
              *(ulong *)((long)pppuVar1 + -0x48) = CONCAT44(unaff_00005104,unaff_s8);
              *(undefined8 *)((long)pppuVar1 + -0x40) = unaff_x24;
              *(undefined8 *)((long)pppuVar1 + -0x38) = unaff_x23;
              *(undefined8 *)((long)pppuVar1 + -0x30) = unaff_x22;
              *(undefined8 *)((long)pppuVar1 + -0x28) = unaff_x21;
              *(long *)((long)pppuVar1 + -0x20) = lVar4;
              *(long *)((long)pppuVar1 + -0x18) = lVar14;
              *(undefined1 ***)((long)pppuVar1 + -0x10) = ppuVar15;
              *(code **)((long)pppuVar1 + -8) = pcVar17;
              ppuVar15 = (undefined1 **)((long)pppuVar1 + -0x10);
              unaff_00005124 = 0;
              unaff_00005104 = 0;
              unaff_00005164 = 0;
              unaff_00005184 = 0;
              unaff_000051a4 = 0;
              unaff_00005144 = 0;
              unaff_000051c4 = 0;
              unaff_000051e4 = 0;
              unaff_x24 = 0x3d26a48;
              uVar11 = uVar29;
              uVar12 = uVar13;
              fVar19 = fVar20;
              if ((bRam0000000003eb4867 & 1) == 0) {
                func_0x00f78a20(0x3d25428);
                func_0x00f78a20(0x3d5e6e0);
                func_0x00f78a20(0x3d5e770);
                func_0x00f78a20(0x3d5e790);
                func_0x00f78a20(0x3d5e7a8);
                func_0x00f78a20(0x3d40f78);
                func_0x00f78a20(0x3d62230);
                func_0x00f78a20(0x3d62238);
                func_0x00f78a20(0x3d62240);
                func_0x00f78a20(0x3d26a48);
                bRam0000000003eb4867 = 1;
              }
              lVar4 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0_TypeInfo*/ uRam0000000003d26a48);
              Atlas_UI_AtlasTweenAnimations___c__DisplayClass3_0___ctor(lVar4,0);
              if (lVar4 != 0) {
                *(undefined8 *)(lVar4 + 0x10) = uVar10;
                *(undefined8 *)(lVar4 + 0x18) = uVar13;
                if (lVar5 != 0) {
                  /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uVar6 & 0xffffffff,uVar6 & 0xffffffff,uVar6 & 0xffffffff,lVar5,0);
                  if ((int)uVar29 == 0) {
                    uVar6 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar22 & 0xffffffff,uVar22 & 0xffffffff,
                                            uVar22 & 0xffffffff,fVar25 * _UNK_033f82b8,lVar5,0);
                    puVar16 = &UNK_0146f6bc;
                  }
                  else {
                    uVar6 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar22 & 0xffffffff,uVar22 & 0xffffffff,
                                            uVar22 & 0xffffffff,fVar25,lVar5,0);
                    puVar16 = (undefined *)0x146f60c;
                  }
                  uVar7 = uRam0000000003d5e7a8;
                  *(long *)((long)pppuVar1 + -0xa0) = lVar4;
                  *(long *)((long)pppuVar1 + -0x98) = lVar5;
                  *(undefined1 ***)((long)pppuVar1 + -0x90) = ppuVar15;
                  *(undefined **)((long)pppuVar1 + -0x88) = puVar16;
                  if ((uVar6 != 0) && (*(char *)(uVar6 + 0xe8) != '\0')) {
                    *(undefined4 *)(uVar6 + 0xb4) = 9;
                    iVar3 = /*DG.Tweening.Core.Easing.EaseManager$$IsFlashEase*/ func_0x0169bba8(9,0,uVar7);
                    if (iVar3 != 0) {
                      fVar19 = *(float *)(uVar6 + 0xc0);
                      fVar25 = -fVar19;
                      if (fVar19 != INFINITY) {
                        fVar25 = fVar19;
                      }
                      *(float *)(uVar6 + 0xc0) = (float)(int)fVar25;
                    }
                    *(undefined8 *)(uVar6 + 0xb8) = 0;
                  }
                  return uVar6;
                }
              }
              pcVar17 = Atlas_UI_AtlasTweenAnimations__SpinZoom;
              lVar9 = func_0x00f78af4();
              pppuVar1 = (undefined1 ***)((long)pppuVar1 + -0x80);
              uVar7 = extraout_x1;
              uVar29 = uVar11;
              uVar13 = uVar12;
              lVar14 = lVar5;
              unaff_x21 = uVar29;
              unaff_x22 = uVar13;
              unaff_x23 = uVar10;
              uVar6 = extraout_d0;
              uVar22 = uVar21;
              fVar25 = fVar19;
              unaff_s8 = uVar23;
              unaff_s9 = fVar25;
              unaff_s10 = uVar18;
              unaff_s11 = fVar20;
              unaff_s12 = fVar20;
              unaff_s13 = fVar20;
              unaff_s14 = uVar18;
              unaff_s15 = uVar18;
            } while( true );
          }
          uVar6 = (**(code **)(*plVar8 + 0x558))(plVar8,uVar7,*(undefined8 *)(*plVar8 + 0x560));
          return uVar6;
        }
      }
      else {
        uStack_e8 = *(undefined8 *)(lVar4 + 0xe8);
        uStack_f0 = *(undefined8 *)(lVar4 + 0xe0);
        uStack_d8 = *(undefined8 *)(lVar4 + 0xf8);
        uStack_e0 = *(undefined8 *)(lVar4 + 0xf0);
        uStack_d0 = *(undefined8 *)(lVar4 + 0x100);
      }
      uStack_b8 = uStack_e8;
      uStack_c0 = uStack_f0;
      uStack_a8 = uStack_d8;
      uStack_b0 = uStack_e0;
      uStack_a0 = uStack_d0;
      uVar7 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_94,0);
      uVar6 = Atlas_UI_LeaderboardEntryBehaviour__SetStatActive
                        (lVar4,&uStack_c0,uVar7,auVar26._8_8_);
      return uVar6;
    }
  }
  else {
    uStack_38 = *(undefined8 *)(param_1 + 0xc0);
    uStack_40 = *(undefined8 *)(param_1 + 0xb8);
    uStack_28 = *(undefined8 *)(param_1 + 0xd0);
    uStack_30 = *(undefined8 *)(param_1 + 200);
    uStack_20 = *(undefined8 *)(param_1 + 0xd8);
  }
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  uStack_50 = uStack_20;
  uVar6 = Atlas_UI_LeaderboardEntryBehaviour__SetStatActive(param_1,&uStack_70);
  return uVar6;
}



// ============================================================
// RVA: 0x15ec920 | Atlas.UI.LeaderboardEntryBehaviour.SetStarsActive
// ============================================================

/* WARNING: Possible PIC construction at 0x0146f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecb5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecc4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015eccf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecd18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec540) */
/* WARNING: Removing unreachable block (ram,0x015ec290) */
/* WARNING: Removing unreachable block (ram,0x015ec184) */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ecec8) */
/* WARNING: Removing unreachable block (ram,0x015eced0) */
/* WARNING: Removing unreachable block (ram,0x015ecea8) */
/* WARNING: Removing unreachable block (ram,0x015eceb0) */
/* WARNING: Removing unreachable block (ram,0x015ecebc) */
/* WARNING: Removing unreachable block (ram,0x015ece68) */
/* WARNING: Removing unreachable block (ram,0x015ece70) */
/* WARNING: Removing unreachable block (ram,0x015ece48) */
/* WARNING: Removing unreachable block (ram,0x015ece50) */
/* WARNING: Removing unreachable block (ram,0x015ece5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd1c) */
/* WARNING: Removing unreachable block (ram,0x015eccf4) */
/* WARNING: Removing unreachable block (ram,0x015ecd20) */
/* WARNING: Removing unreachable block (ram,0x015ecd50) */
/* WARNING: Removing unreachable block (ram,0x015ecd28) */
/* WARNING: Removing unreachable block (ram,0x015ecd30) */
/* WARNING: Removing unreachable block (ram,0x015ecd3c) */
/* WARNING: Removing unreachable block (ram,0x015eccfc) */
/* WARNING: Removing unreachable block (ram,0x015ecd04) */
/* WARNING: Removing unreachable block (ram,0x015ecd10) */
/* WARNING: Removing unreachable block (ram,0x015ecb24) */
/* WARNING: Removing unreachable block (ram,0x015ecb34) */
/* WARNING: Removing unreachable block (ram,0x015ecb3c) */
/* WARNING: Removing unreachable block (ram,0x015ecb40) */
/* WARNING: Removing unreachable block (ram,0x015ecb60) */
/* WARNING: Removing unreachable block (ram,0x015ecb70) */
/* WARNING: Removing unreachable block (ram,0x015ecb78) */
/* WARNING: Removing unreachable block (ram,0x015ecb7c) */
/* WARNING: Removing unreachable block (ram,0x015ecbb0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc8) */
/* WARNING: Removing unreachable block (ram,0x015ecbcc) */
/* WARNING: Removing unreachable block (ram,0x015ecc00) */
/* WARNING: Removing unreachable block (ram,0x015ecc10) */
/* WARNING: Removing unreachable block (ram,0x015ecc18) */
/* WARNING: Removing unreachable block (ram,0x015ecc1c) */
/* WARNING: Removing unreachable block (ram,0x015ecc50) */
/* WARNING: Removing unreachable block (ram,0x015ecc60) */
/* WARNING: Removing unreachable block (ram,0x015ecc68) */
/* WARNING: Removing unreachable block (ram,0x015ecc6c) */
/* WARNING: Removing unreachable block (ram,0x015eccac) */
/* WARNING: Removing unreachable block (ram,0x015ecc7c) */
/* WARNING: Removing unreachable block (ram,0x015ecc84) */
/* WARNING: Removing unreachable block (ram,0x015ecc2c) */
/* WARNING: Removing unreachable block (ram,0x015ecc34) */
/* WARNING: Removing unreachable block (ram,0x015ecbdc) */
/* WARNING: Removing unreachable block (ram,0x015ecbe4) */
/* WARNING: Removing unreachable block (ram,0x015ecb8c) */
/* WARNING: Removing unreachable block (ram,0x015eccbc) */
/* WARNING: Removing unreachable block (ram,0x015eccd8) */
/* WARNING: Removing unreachable block (ram,0x015ecd5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd74) */
/* WARNING: Removing unreachable block (ram,0x015ecd98) */
/* WARNING: Removing unreachable block (ram,0x015ecdc8) */
/* WARNING: Removing unreachable block (ram,0x015ecddc) */
/* WARNING: Removing unreachable block (ram,0x015ece00) */
/* WARNING: Removing unreachable block (ram,0x015ece08) */
/* WARNING: Removing unreachable block (ram,0x015ece0c) */
/* WARNING: Removing unreachable block (ram,0x015ece20) */
/* WARNING: Removing unreachable block (ram,0x015ece7c) */
/* WARNING: Removing unreachable block (ram,0x015ecedc) */
/* WARNING: Removing unreachable block (ram,0x015ecee4) */
/* WARNING: Removing unreachable block (ram,0x015ebd40) */
/* WARNING: Removing unreachable block (ram,0x015ebd5c) */
/* WARNING: Removing unreachable block (ram,0x015ebd68) */
/* WARNING: Removing unreachable block (ram,0x015ebdd4) */
/* WARNING: Removing unreachable block (ram,0x015ebe04) */
/* WARNING: Removing unreachable block (ram,0x015ebe18) */
/* WARNING: Removing unreachable block (ram,0x015ebe28) */
/* WARNING: Removing unreachable block (ram,0x015ebe30) */
/* WARNING: Removing unreachable block (ram,0x015ebe34) */
/* WARNING: Removing unreachable block (ram,0x015ebe70) */
/* WARNING: Removing unreachable block (ram,0x015ebe44) */
/* WARNING: Removing unreachable block (ram,0x015ebe4c) */
/* WARNING: Removing unreachable block (ram,0x015ebe80) */
/* WARNING: Removing unreachable block (ram,0x015ebeb4) */
/* WARNING: Removing unreachable block (ram,0x015ebed4) */
/* WARNING: Removing unreachable block (ram,0x015ebee4) */
/* WARNING: Removing unreachable block (ram,0x015ebeec) */
/* WARNING: Removing unreachable block (ram,0x015ebef0) */
/* WARNING: Removing unreachable block (ram,0x015ebf00) */
/* WARNING: Removing unreachable block (ram,0x015ebf58) */
/* WARNING: Removing unreachable block (ram,0x015ebf94) */
/* WARNING: Removing unreachable block (ram,0x015ebfa8) */
/* WARNING: Removing unreachable block (ram,0x015ebff0) */
/* WARNING: Removing unreachable block (ram,0x015ebfb0) */
/* WARNING: Removing unreachable block (ram,0x015ebff4) */
/* WARNING: Removing unreachable block (ram,0x015ec044) */
/* WARNING: Removing unreachable block (ram,0x015ec0ac) */
/* WARNING: Removing unreachable block (ram,0x015ec0c4) */
/* WARNING: Removing unreachable block (ram,0x015ec1b0) */
/* WARNING: Removing unreachable block (ram,0x015ec1f0) */
/* WARNING: Removing unreachable block (ram,0x015ec228) */
/* WARNING: Removing unreachable block (ram,0x015ec2b4) */
/* WARNING: Removing unreachable block (ram,0x015ec2f8) */
/* WARNING: Removing unreachable block (ram,0x015ec318) */
/* WARNING: Removing unreachable block (ram,0x015ec328) */
/* WARNING: Removing unreachable block (ram,0x015ec330) */
/* WARNING: Removing unreachable block (ram,0x015ec334) */
/* WARNING: Removing unreachable block (ram,0x015ec38c) */
/* WARNING: Removing unreachable block (ram,0x015ec344) */
/* WARNING: Removing unreachable block (ram,0x015ec3a8) */
/* WARNING: Removing unreachable block (ram,0x015ec3e4) */
/* WARNING: Removing unreachable block (ram,0x015ec3f8) */
/* WARNING: Removing unreachable block (ram,0x015ec440) */
/* WARNING: Removing unreachable block (ram,0x015ec47c) */
/* WARNING: Removing unreachable block (ram,0x015ec4c0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d8) */
/* WARNING: Removing unreachable block (ram,0x015ec4dc) */
/* WARNING: Removing unreachable block (ram,0x015ec564) */
/* WARNING: Removing unreachable block (ram,0x015ec4ec) */
/* WARNING: Removing unreachable block (ram,0x015ec57c) */
/* WARNING: Removing unreachable block (ram,0x015ec5c8) */
/* WARNING: Removing unreachable block (ram,0x015ec624) */
/* WARNING: Removing unreachable block (ram,0x015ec634) */
/* WARNING: Removing unreachable block (ram,0x015ec63c) */
/* WARNING: Removing unreachable block (ram,0x015ec640) */
/* WARNING: Removing unreachable block (ram,0x015ec704) */
/* WARNING: Removing unreachable block (ram,0x015ec650) */
/* WARNING: Removing unreachable block (ram,0x015ec4f4) */
/* WARNING: Removing unreachable block (ram,0x015ec400) */
/* WARNING: Removing unreachable block (ram,0x015ec34c) */
/* WARNING: Removing unreachable block (ram,0x015ec230) */
/* WARNING: Removing unreachable block (ram,0x015ec0cc) */
/* WARNING: Removing unreachable block (ram,0x015ec134) */
/* WARNING: Removing unreachable block (ram,0x015ec13c) */
/* WARNING: Removing unreachable block (ram,0x015ec140) */
/* WARNING: Removing unreachable block (ram,0x018eee1c) */
/* WARNING: Removing unreachable block (ram,0x018eee40) */
/* WARNING: Removing unreachable block (ram,0x018eee6c) */
/* WARNING: Removing unreachable block (ram,0x018eee70) */
/* WARNING: Removing unreachable block (ram,0x018eee78) */
/* WARNING: Removing unreachable block (ram,0x018eee8c) */
/* WARNING: Removing unreachable block (ram,0x018eee94) */
/* WARNING: Removing unreachable block (ram,0x018eee98) */
/* WARNING: Removing unreachable block (ram,0x018eeea4) */
/* WARNING: Removing unreachable block (ram,0x018eeed0) */
/* WARNING: Removing unreachable block (ram,0x018eeed8) */
/* WARNING: Removing unreachable block (ram,0x018eeedc) */
/* WARNING: Removing unreachable block (ram,0x018eef04) */
/* WARNING: Removing unreachable block (ram,0x018eef08) */
/* WARNING: Removing unreachable block (ram,0x018eeef0) */
/* WARNING: Removing unreachable block (ram,0x018eef34) */
/* WARNING: Removing unreachable block (ram,0x018eef5c) */
/* WARNING: Removing unreachable block (ram,0x018eef7c) */
/* WARNING: Removing unreachable block (ram,0x018eef80) */
/* WARNING: Removing unreachable block (ram,0x018eef88) */
/* WARNING: Removing unreachable block (ram,0x018eef9c) */
/* WARNING: Removing unreachable block (ram,0x018eefa4) */
/* WARNING: Removing unreachable block (ram,0x018eefac) */
/* WARNING: Removing unreachable block (ram,0x018eefc8) */
/* WARNING: Removing unreachable block (ram,0x018eefd0) */
/* WARNING: Removing unreachable block (ram,0x018eefd4) */
/* WARNING: Removing unreachable block (ram,0x018eefec) */
/* WARNING: Removing unreachable block (ram,0x018eeef4) */
/* WARNING: Removing unreachable block (ram,0x018eef18) */
/* WARNING: Removing unreachable block (ram,0x018eef1c) */
/* WARNING: Removing unreachable block (ram,0x018eef20) */
/* WARNING: Removing unreachable block (ram,0x015ebf2c) */
/* WARNING: Removing unreachable block (ram,0x015ebf44) */
/* WARNING: Removing unreachable block (ram,0x015ebe58) */
/* WARNING: Removing unreachable block (ram,0x015ebda4) */
/* WARNING: Removing unreachable block (ram,0x02f8b024) */
/* WARNING: Removing unreachable block (ram,0x02f8b034) */
/* WARNING: Removing unreachable block (ram,0x02f8b038) */
/* WARNING: Removing unreachable block (ram,0x02f8b050) */
/* WARNING: Removing unreachable block (ram,0x02f8b03c) */
/* WARNING: Removing unreachable block (ram,0x015ece88) */
/* WARNING: Removing unreachable block (ram,0x015ece90) */
/* WARNING: Removing unreachable block (ram,0x015ece9c) */
/* WARNING: Removing unreachable block (ram,0x015ece28) */
/* WARNING: Removing unreachable block (ram,0x015ece30) */
/* WARNING: Removing unreachable block (ram,0x015ecf10) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x015ece3c) */
/* WARNING: Removing unreachable block (ram,0x015ecd84) */
/* WARNING: Removing unreachable block (ram,0x015ecce8) */
/* WARNING: Removing unreachable block (ram,0x0322ef1c) */
/* WARNING: Removing unreachable block (ram,0x0322ef40) */
/* WARNING: Removing unreachable block (ram,0x0322ef54) */
/* WARNING: Removing unreachable block (ram,0x015ecb94) */
/* WARNING: Removing unreachable block (ram,0x015ecb50) */
/* WARNING: Removing unreachable block (ram,0x0146f744) */
/* WARNING: Removing unreachable block (ram,0x0146f790) */
/* WARNING: Removing unreachable block (ram,0x0146f748) */
/* WARNING: Removing unreachable block (ram,0x0146f6bc) */
/* WARNING: Removing unreachable block (ram,0x0146f708) */
/* WARNING: Removing unreachable block (ram,0x0146f6c0) */
/* WARNING: Removing unreachable block (ram,0x0146f654) */
/* WARNING: Removing unreachable block (ram,0x0146f7b0) */
/* WARNING: Removing unreachable block (ram,0x0146f7cc) */
/* WARNING: Removing unreachable block (ram,0x0146f60c) */
/* WARNING: Removing unreachable block (ram,0x015ec6ac) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_LeaderboardEntryBehaviour__SetStarsActive
                (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 ***pppuVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_x7;
  long lVar14;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 **ppuVar15;
  undefined *puVar16;
  code *pcVar17;
  undefined4 uVar18;
  float fVar19;
  ulong extraout_d0;
  float fVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 uVar23;
  ulong uVar24;
  float fVar25;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  float unaff_s9;
  undefined4 unaff_00005124;
  undefined4 unaff_s10;
  undefined4 unaff_00005144;
  float unaff_s11;
  undefined4 unaff_00005164;
  float unaff_s12;
  undefined4 unaff_00005184;
  float unaff_s13;
  undefined4 unaff_000051a4;
  undefined4 unaff_s14;
  undefined4 unaff_000051c4;
  undefined4 unaff_s15;
  undefined4 unaff_000051e4;
  undefined1 auVar26 [16];
  undefined1 auVar27 [12];
  undefined8 uVar28;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined1 auStack_c0 [12];
  undefined4 uStack_b4;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  if ((int)param_2 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    if (param_1 == 0) {
      auVar26 = func_0x00f78af4();
      puStack_88 = &Atlas_UI_LeaderboardEntryBehaviour__SetStatText;
      plVar8 = *(long **)(auVar26._0_8_ + 0x120);
      puStack_90 = &stack0xfffffffffffffff0;
      if (plVar8 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015ec9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(*plVar8 + 0x558))
                          (plVar8,auVar26._8_8_,*(undefined8 *)(*plVar8 + 0x560));
        return uVar7;
      }
      auVar27 = func_0x00f78af4();
      uStack_b4 = auVar27._8_4_;
      puStack_98 = &Atlas_UI_LeaderboardEntryBehaviour__SetStatText;
      plVar8 = *(long **)(auVar27._0_8_ + 0x120);
      lStack_b0 = param_1;
      uStack_a8 = param_2;
      puStack_a0 = (undefined1 *)&puStack_90;
      uVar6 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_b4,0);
      if (plVar8 == (long *)0x0) {
        lVar9 = func_0x00f78af4();
        pcStack_c8 = (code *)&Atlas_UI_LeaderboardEntryBehaviour__PlayChangeHitCountTween;
        lVar4 = 0;
        lVar14 = 0;
        ppuStack_d0 = &puStack_a0;
        if (*(long *)(lVar9 + 0x120) == 0) {
          lVar9 = func_0x00f78af4();
          puStack_f0 = (undefined1 *)&ppuStack_e0;
          pcStack_d8 = (code *)&Atlas_UI_LeaderboardEntryBehaviour__PlayChangePositionTween;
          if (*(long *)(lVar9 + 0x30) == 0) {
            ppuStack_e0 = (undefined1 **)&ppuStack_d0;
            lVar4 = func_0x00f78af4();
            puStack_e8 = &Atlas_UI_LeaderboardEntryBehaviour__OnDestroy;
            ppuVar15 = &puStack_f0;
            pppuVar1 = &ppuStack_e0;
            if ((bRam0000000003eb540c & 1) == 0) {
              func_0x00f78a20(0x3d53528);
              func_0x00f78a20(0x3d578e0);
              func_0x00f78a20(0x3d23990);
              bRam0000000003eb540c = 1;
              pppuVar1 = (undefined1 ***)puStack_f0;
            }
            puStack_f0 = (undefined1 *)pppuVar1;
            uVar6 = 0x3d23990;
            uVar28 = 0x3eb5000;
            puVar16 = &UNK_015ecb24;
            lVar14 = lVar4;
            if ((bRam0000000003eb5c29 & 1) == 0) {
              func_0x00f78a20(0x3d20bc0,0,0);
              bRam0000000003eb5c29 = 1;
            }
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if ((bRam0000000003eb5af0 & 1) == 0) {
              func_0x00f78a20(0x3d20bc0,0,0);
              func_0x00f78a20(0x3d25440);
              bRam0000000003eb5af0 = 1;
            }
            if (lVar4 == 0) {
              uVar7 = 0;
            }
            else {
              if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar2 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar4,0,0,0,0,in_x7,unaff_x22,uVar6,uVar28,lVar14,
                                      ppuVar15,puVar16);
              uVar7 = (ulong)uVar2;
            }
            return uVar7;
          }
          ppuStack_e0 = (undefined1 **)&ppuStack_d0;
          lVar9 = /*TMPro.TMP_Text$$get_rectTransform*/ func_0x031adac0(*(long *)(lVar9 + 0x30),0);
          uVar22 = (ulong)_UNK_033f8500;
          uVar7 = (ulong)(uint)_UNK_033f875c;
          uVar24 = 0x41200000;
          pppuVar1 = &ppuStack_d0;
          uVar6 = 0;
          uVar28 = 0;
          uVar13 = 0;
          ppuVar15 = ppuStack_e0;
          pcVar17 = pcStack_d8;
          fVar25 = _UNK_033f875c;
        }
        else {
          lVar9 = /*TMPro.TMP_Text$$get_rectTransform*/ func_0x031adac0(*(long *)(lVar9 + 0x120),0);
          uVar7 = 0x3f800000;
          uVar24 = 0;
          pppuVar1 = (undefined1 ***)auStack_c0;
          uVar6 = 0;
          uVar28 = 0;
          uVar13 = 0;
          ppuVar15 = ppuStack_d0;
          pcVar17 = pcStack_c8;
          uVar22 = (ulong)_UNK_033f8500;
          fVar25 = _UNK_033f875c;
        }
        do {
          uVar11 = uVar28;
          uVar10 = uVar6;
          lVar5 = lVar9;
          uVar23 = (undefined4)uVar24;
          fVar20 = (float)uVar22;
          uVar18 = (undefined4)uVar7;
          uVar21 = uVar7 & 0xffffffff;
          uVar24 = uVar7 & 0xffffffff;
          *(ulong *)((long)pppuVar1 + -0x80) = CONCAT44(unaff_000051e4,unaff_s15);
          *(ulong *)((long)pppuVar1 + -0x78) = CONCAT44(unaff_000051c4,unaff_s14);
          *(ulong *)((long)pppuVar1 + -0x70) = CONCAT44(unaff_000051a4,unaff_s13);
          *(ulong *)((long)pppuVar1 + -0x68) = CONCAT44(unaff_00005184,unaff_s12);
          *(ulong *)((long)pppuVar1 + -0x60) = CONCAT44(unaff_00005164,unaff_s11);
          *(ulong *)((long)pppuVar1 + -0x58) = CONCAT44(unaff_00005144,unaff_s10);
          *(ulong *)((long)pppuVar1 + -0x50) = CONCAT44(unaff_00005124,unaff_s9);
          *(ulong *)((long)pppuVar1 + -0x48) = CONCAT44(unaff_00005104,unaff_s8);
          *(undefined8 *)((long)pppuVar1 + -0x40) = unaff_x24;
          *(undefined8 *)((long)pppuVar1 + -0x38) = unaff_x23;
          *(undefined8 *)((long)pppuVar1 + -0x30) = unaff_x22;
          *(undefined8 *)((long)pppuVar1 + -0x28) = unaff_x21;
          *(long *)((long)pppuVar1 + -0x20) = lVar4;
          *(long *)((long)pppuVar1 + -0x18) = lVar14;
          *(undefined1 ***)((long)pppuVar1 + -0x10) = ppuVar15;
          *(code **)((long)pppuVar1 + -8) = pcVar17;
          ppuVar15 = (undefined1 **)((long)pppuVar1 + -0x10);
          unaff_00005124 = 0;
          unaff_00005104 = 0;
          unaff_00005164 = 0;
          unaff_00005184 = 0;
          unaff_000051a4 = 0;
          unaff_00005144 = 0;
          unaff_000051c4 = 0;
          unaff_000051e4 = 0;
          unaff_x24 = 0x3d26a48;
          uVar28 = uVar11;
          uVar12 = uVar13;
          fVar19 = fVar20;
          if ((bRam0000000003eb4867 & 1) == 0) {
            func_0x00f78a20(0x3d25428);
            func_0x00f78a20(0x3d5e6e0);
            func_0x00f78a20(0x3d5e770);
            func_0x00f78a20(0x3d5e790);
            func_0x00f78a20(0x3d5e7a8);
            func_0x00f78a20(0x3d40f78);
            func_0x00f78a20(0x3d62230);
            func_0x00f78a20(0x3d62238);
            func_0x00f78a20(0x3d62240);
            func_0x00f78a20(0x3d26a48);
            bRam0000000003eb4867 = 1;
          }
          lVar4 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0_TypeInfo*/ uRam0000000003d26a48);
          Atlas_UI_AtlasTweenAnimations___c__DisplayClass3_0___ctor(lVar4,0);
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x10) = uVar10;
            *(undefined8 *)(lVar4 + 0x18) = uVar13;
            if (lVar5 != 0) {
              /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uVar7 & 0xffffffff,uVar7 & 0xffffffff,uVar7 & 0xffffffff,lVar5,0);
              if ((int)uVar11 == 0) {
                uVar7 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar22 & 0xffffffff,uVar22 & 0xffffffff,uVar22 & 0xffffffff,
                                        fVar25 * _UNK_033f82b8,lVar5,0);
                puVar16 = &UNK_0146f6bc;
              }
              else {
                uVar7 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar22 & 0xffffffff,uVar22 & 0xffffffff,uVar22 & 0xffffffff,
                                        fVar25,lVar5,0);
                puVar16 = (undefined *)0x146f60c;
              }
              uVar6 = uRam0000000003d5e7a8;
              *(long *)((long)pppuVar1 + -0xa0) = lVar4;
              *(long *)((long)pppuVar1 + -0x98) = lVar5;
              *(undefined1 ***)((long)pppuVar1 + -0x90) = ppuVar15;
              *(undefined **)((long)pppuVar1 + -0x88) = puVar16;
              if ((uVar7 != 0) && (*(char *)(uVar7 + 0xe8) != '\0')) {
                *(undefined4 *)(uVar7 + 0xb4) = 9;
                iVar3 = /*DG.Tweening.Core.Easing.EaseManager$$IsFlashEase*/ func_0x0169bba8(9,0,uVar6);
                if (iVar3 != 0) {
                  fVar19 = *(float *)(uVar7 + 0xc0);
                  fVar25 = -fVar19;
                  if (fVar19 != INFINITY) {
                    fVar25 = fVar19;
                  }
                  *(float *)(uVar7 + 0xc0) = (float)(int)fVar25;
                }
                *(undefined8 *)(uVar7 + 0xb8) = 0;
              }
              return uVar7;
            }
          }
          pcVar17 = Atlas_UI_AtlasTweenAnimations__SpinZoom;
          lVar9 = func_0x00f78af4();
          pppuVar1 = (undefined1 ***)((long)pppuVar1 + -0x80);
          uVar6 = extraout_x1;
          uVar13 = uVar12;
          lVar14 = lVar5;
          unaff_x21 = uVar11;
          unaff_x22 = uVar13;
          unaff_x23 = uVar10;
          uVar7 = extraout_d0;
          uVar22 = uVar21;
          fVar25 = fVar19;
          unaff_s8 = uVar23;
          unaff_s9 = fVar25;
          unaff_s10 = uVar18;
          unaff_s11 = fVar20;
          unaff_s12 = fVar20;
          unaff_s13 = fVar20;
          unaff_s14 = uVar18;
          unaff_s15 = uVar18;
        } while( true );
      }
      uVar7 = (**(code **)(*plVar8 + 0x558))(plVar8,uVar6,*(undefined8 *)(*plVar8 + 0x560));
      return uVar7;
    }
  }
  else {
    uStack_78 = *(undefined8 *)(param_1 + 0xe8);
    uStack_80 = *(undefined8 *)(param_1 + 0xe0);
    uStack_68 = *(undefined8 *)(param_1 + 0xf8);
    uStack_70 = *(undefined8 *)(param_1 + 0xf0);
    uStack_60 = *(undefined8 *)(param_1 + 0x100);
  }
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  uStack_38 = uStack_68;
  uStack_40 = uStack_70;
  uStack_30 = uStack_60;
  uStack_24 = param_3;
  uVar6 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_24,0);
  uVar7 = Atlas_UI_LeaderboardEntryBehaviour__SetStatActive(param_1,&uStack_50,uVar6,param_2);
  return uVar7;
}



// ============================================================
// RVA: 0x15ec9a8 | Atlas.UI.LeaderboardEntryBehaviour.SetStatText
// ============================================================

/* WARNING: Possible PIC construction at 0x0146f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecb5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecc4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015eccf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecd18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec540) */
/* WARNING: Removing unreachable block (ram,0x015ec290) */
/* WARNING: Removing unreachable block (ram,0x015ec184) */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ecec8) */
/* WARNING: Removing unreachable block (ram,0x015eced0) */
/* WARNING: Removing unreachable block (ram,0x015ecea8) */
/* WARNING: Removing unreachable block (ram,0x015eceb0) */
/* WARNING: Removing unreachable block (ram,0x015ecebc) */
/* WARNING: Removing unreachable block (ram,0x015ece68) */
/* WARNING: Removing unreachable block (ram,0x015ece70) */
/* WARNING: Removing unreachable block (ram,0x015ece48) */
/* WARNING: Removing unreachable block (ram,0x015ece50) */
/* WARNING: Removing unreachable block (ram,0x015ece5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd1c) */
/* WARNING: Removing unreachable block (ram,0x015eccf4) */
/* WARNING: Removing unreachable block (ram,0x015ecd20) */
/* WARNING: Removing unreachable block (ram,0x015ecd50) */
/* WARNING: Removing unreachable block (ram,0x015ecd28) */
/* WARNING: Removing unreachable block (ram,0x015ecd30) */
/* WARNING: Removing unreachable block (ram,0x015ecd3c) */
/* WARNING: Removing unreachable block (ram,0x015eccfc) */
/* WARNING: Removing unreachable block (ram,0x015ecd04) */
/* WARNING: Removing unreachable block (ram,0x015ecd10) */
/* WARNING: Removing unreachable block (ram,0x015ecb24) */
/* WARNING: Removing unreachable block (ram,0x015ecb34) */
/* WARNING: Removing unreachable block (ram,0x015ecb3c) */
/* WARNING: Removing unreachable block (ram,0x015ecb40) */
/* WARNING: Removing unreachable block (ram,0x015ecb60) */
/* WARNING: Removing unreachable block (ram,0x015ecb70) */
/* WARNING: Removing unreachable block (ram,0x015ecb78) */
/* WARNING: Removing unreachable block (ram,0x015ecb7c) */
/* WARNING: Removing unreachable block (ram,0x015ecbb0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc8) */
/* WARNING: Removing unreachable block (ram,0x015ecbcc) */
/* WARNING: Removing unreachable block (ram,0x015ecc00) */
/* WARNING: Removing unreachable block (ram,0x015ecc10) */
/* WARNING: Removing unreachable block (ram,0x015ecc18) */
/* WARNING: Removing unreachable block (ram,0x015ecc1c) */
/* WARNING: Removing unreachable block (ram,0x015ecc50) */
/* WARNING: Removing unreachable block (ram,0x015ecc60) */
/* WARNING: Removing unreachable block (ram,0x015ecc68) */
/* WARNING: Removing unreachable block (ram,0x015ecc6c) */
/* WARNING: Removing unreachable block (ram,0x015eccac) */
/* WARNING: Removing unreachable block (ram,0x015ecc7c) */
/* WARNING: Removing unreachable block (ram,0x015ecc84) */
/* WARNING: Removing unreachable block (ram,0x015ecc2c) */
/* WARNING: Removing unreachable block (ram,0x015ecc34) */
/* WARNING: Removing unreachable block (ram,0x015ecbdc) */
/* WARNING: Removing unreachable block (ram,0x015ecbe4) */
/* WARNING: Removing unreachable block (ram,0x015ecb8c) */
/* WARNING: Removing unreachable block (ram,0x015eccbc) */
/* WARNING: Removing unreachable block (ram,0x015eccd8) */
/* WARNING: Removing unreachable block (ram,0x015ecd5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd74) */
/* WARNING: Removing unreachable block (ram,0x015ecd98) */
/* WARNING: Removing unreachable block (ram,0x015ecdc8) */
/* WARNING: Removing unreachable block (ram,0x015ecddc) */
/* WARNING: Removing unreachable block (ram,0x015ece00) */
/* WARNING: Removing unreachable block (ram,0x015ece08) */
/* WARNING: Removing unreachable block (ram,0x015ece0c) */
/* WARNING: Removing unreachable block (ram,0x015ece20) */
/* WARNING: Removing unreachable block (ram,0x015ece7c) */
/* WARNING: Removing unreachable block (ram,0x015ecedc) */
/* WARNING: Removing unreachable block (ram,0x015ecee4) */
/* WARNING: Removing unreachable block (ram,0x015ebd40) */
/* WARNING: Removing unreachable block (ram,0x015ebd5c) */
/* WARNING: Removing unreachable block (ram,0x015ebd68) */
/* WARNING: Removing unreachable block (ram,0x015ebdd4) */
/* WARNING: Removing unreachable block (ram,0x015ebe04) */
/* WARNING: Removing unreachable block (ram,0x015ebe18) */
/* WARNING: Removing unreachable block (ram,0x015ebe28) */
/* WARNING: Removing unreachable block (ram,0x015ebe30) */
/* WARNING: Removing unreachable block (ram,0x015ebe34) */
/* WARNING: Removing unreachable block (ram,0x015ebe70) */
/* WARNING: Removing unreachable block (ram,0x015ebe44) */
/* WARNING: Removing unreachable block (ram,0x015ebe4c) */
/* WARNING: Removing unreachable block (ram,0x015ebe80) */
/* WARNING: Removing unreachable block (ram,0x015ebeb4) */
/* WARNING: Removing unreachable block (ram,0x015ebed4) */
/* WARNING: Removing unreachable block (ram,0x015ebee4) */
/* WARNING: Removing unreachable block (ram,0x015ebeec) */
/* WARNING: Removing unreachable block (ram,0x015ebef0) */
/* WARNING: Removing unreachable block (ram,0x015ebf00) */
/* WARNING: Removing unreachable block (ram,0x015ebf58) */
/* WARNING: Removing unreachable block (ram,0x015ebf94) */
/* WARNING: Removing unreachable block (ram,0x015ebfa8) */
/* WARNING: Removing unreachable block (ram,0x015ebff0) */
/* WARNING: Removing unreachable block (ram,0x015ebfb0) */
/* WARNING: Removing unreachable block (ram,0x015ebff4) */
/* WARNING: Removing unreachable block (ram,0x015ec044) */
/* WARNING: Removing unreachable block (ram,0x015ec0ac) */
/* WARNING: Removing unreachable block (ram,0x015ec0c4) */
/* WARNING: Removing unreachable block (ram,0x015ec1b0) */
/* WARNING: Removing unreachable block (ram,0x015ec1f0) */
/* WARNING: Removing unreachable block (ram,0x015ec228) */
/* WARNING: Removing unreachable block (ram,0x015ec2b4) */
/* WARNING: Removing unreachable block (ram,0x015ec2f8) */
/* WARNING: Removing unreachable block (ram,0x015ec318) */
/* WARNING: Removing unreachable block (ram,0x015ec328) */
/* WARNING: Removing unreachable block (ram,0x015ec330) */
/* WARNING: Removing unreachable block (ram,0x015ec334) */
/* WARNING: Removing unreachable block (ram,0x015ec38c) */
/* WARNING: Removing unreachable block (ram,0x015ec344) */
/* WARNING: Removing unreachable block (ram,0x015ec3a8) */
/* WARNING: Removing unreachable block (ram,0x015ec3e4) */
/* WARNING: Removing unreachable block (ram,0x015ec3f8) */
/* WARNING: Removing unreachable block (ram,0x015ec440) */
/* WARNING: Removing unreachable block (ram,0x015ec47c) */
/* WARNING: Removing unreachable block (ram,0x015ec4c0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d8) */
/* WARNING: Removing unreachable block (ram,0x015ec4dc) */
/* WARNING: Removing unreachable block (ram,0x015ec564) */
/* WARNING: Removing unreachable block (ram,0x015ec4ec) */
/* WARNING: Removing unreachable block (ram,0x015ec57c) */
/* WARNING: Removing unreachable block (ram,0x015ec5c8) */
/* WARNING: Removing unreachable block (ram,0x015ec624) */
/* WARNING: Removing unreachable block (ram,0x015ec634) */
/* WARNING: Removing unreachable block (ram,0x015ec63c) */
/* WARNING: Removing unreachable block (ram,0x015ec640) */
/* WARNING: Removing unreachable block (ram,0x015ec704) */
/* WARNING: Removing unreachable block (ram,0x015ec650) */
/* WARNING: Removing unreachable block (ram,0x015ec4f4) */
/* WARNING: Removing unreachable block (ram,0x015ec400) */
/* WARNING: Removing unreachable block (ram,0x015ec34c) */
/* WARNING: Removing unreachable block (ram,0x015ec230) */
/* WARNING: Removing unreachable block (ram,0x015ec0cc) */
/* WARNING: Removing unreachable block (ram,0x015ec134) */
/* WARNING: Removing unreachable block (ram,0x015ec13c) */
/* WARNING: Removing unreachable block (ram,0x015ec140) */
/* WARNING: Removing unreachable block (ram,0x018eee1c) */
/* WARNING: Removing unreachable block (ram,0x018eee40) */
/* WARNING: Removing unreachable block (ram,0x018eee6c) */
/* WARNING: Removing unreachable block (ram,0x018eee70) */
/* WARNING: Removing unreachable block (ram,0x018eee78) */
/* WARNING: Removing unreachable block (ram,0x018eee8c) */
/* WARNING: Removing unreachable block (ram,0x018eee94) */
/* WARNING: Removing unreachable block (ram,0x018eee98) */
/* WARNING: Removing unreachable block (ram,0x018eeea4) */
/* WARNING: Removing unreachable block (ram,0x018eeed0) */
/* WARNING: Removing unreachable block (ram,0x018eeed8) */
/* WARNING: Removing unreachable block (ram,0x018eeedc) */
/* WARNING: Removing unreachable block (ram,0x018eef04) */
/* WARNING: Removing unreachable block (ram,0x018eef08) */
/* WARNING: Removing unreachable block (ram,0x018eeef0) */
/* WARNING: Removing unreachable block (ram,0x018eef34) */
/* WARNING: Removing unreachable block (ram,0x018eef5c) */
/* WARNING: Removing unreachable block (ram,0x018eef7c) */
/* WARNING: Removing unreachable block (ram,0x018eef80) */
/* WARNING: Removing unreachable block (ram,0x018eef88) */
/* WARNING: Removing unreachable block (ram,0x018eef9c) */
/* WARNING: Removing unreachable block (ram,0x018eefa4) */
/* WARNING: Removing unreachable block (ram,0x018eefac) */
/* WARNING: Removing unreachable block (ram,0x018eefc8) */
/* WARNING: Removing unreachable block (ram,0x018eefd0) */
/* WARNING: Removing unreachable block (ram,0x018eefd4) */
/* WARNING: Removing unreachable block (ram,0x018eefec) */
/* WARNING: Removing unreachable block (ram,0x018eeef4) */
/* WARNING: Removing unreachable block (ram,0x018eef18) */
/* WARNING: Removing unreachable block (ram,0x018eef1c) */
/* WARNING: Removing unreachable block (ram,0x018eef20) */
/* WARNING: Removing unreachable block (ram,0x015ebf2c) */
/* WARNING: Removing unreachable block (ram,0x015ebf44) */
/* WARNING: Removing unreachable block (ram,0x015ebe58) */
/* WARNING: Removing unreachable block (ram,0x015ebda4) */
/* WARNING: Removing unreachable block (ram,0x02f8b024) */
/* WARNING: Removing unreachable block (ram,0x02f8b034) */
/* WARNING: Removing unreachable block (ram,0x02f8b038) */
/* WARNING: Removing unreachable block (ram,0x02f8b050) */
/* WARNING: Removing unreachable block (ram,0x02f8b03c) */
/* WARNING: Removing unreachable block (ram,0x015ece88) */
/* WARNING: Removing unreachable block (ram,0x015ece90) */
/* WARNING: Removing unreachable block (ram,0x015ece9c) */
/* WARNING: Removing unreachable block (ram,0x015ece28) */
/* WARNING: Removing unreachable block (ram,0x015ece30) */
/* WARNING: Removing unreachable block (ram,0x015ecf10) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x015ece3c) */
/* WARNING: Removing unreachable block (ram,0x015ecd84) */
/* WARNING: Removing unreachable block (ram,0x015ecce8) */
/* WARNING: Removing unreachable block (ram,0x0322ef1c) */
/* WARNING: Removing unreachable block (ram,0x0322ef40) */
/* WARNING: Removing unreachable block (ram,0x0322ef54) */
/* WARNING: Removing unreachable block (ram,0x015ecb94) */
/* WARNING: Removing unreachable block (ram,0x015ecb50) */
/* WARNING: Removing unreachable block (ram,0x0146f744) */
/* WARNING: Removing unreachable block (ram,0x0146f790) */
/* WARNING: Removing unreachable block (ram,0x0146f748) */
/* WARNING: Removing unreachable block (ram,0x0146f6bc) */
/* WARNING: Removing unreachable block (ram,0x0146f708) */
/* WARNING: Removing unreachable block (ram,0x0146f6c0) */
/* WARNING: Removing unreachable block (ram,0x0146f654) */
/* WARNING: Removing unreachable block (ram,0x0146f7b0) */
/* WARNING: Removing unreachable block (ram,0x0146f7cc) */
/* WARNING: Removing unreachable block (ram,0x0146f60c) */
/* WARNING: Removing unreachable block (ram,0x015ec6ac) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_LeaderboardEntryBehaviour__SetStatText(long param_1,undefined8 param_2)

{
  undefined1 ***pppuVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_x7;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 **ppuVar14;
  undefined *puVar15;
  code *pcVar16;
  undefined4 uVar17;
  float fVar18;
  ulong extraout_d0;
  float fVar19;
  ulong uVar20;
  ulong uVar21;
  undefined4 uVar22;
  ulong uVar23;
  float fVar24;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  float unaff_s9;
  undefined4 unaff_00005124;
  undefined4 unaff_s10;
  undefined4 unaff_00005144;
  float unaff_s11;
  undefined4 unaff_00005164;
  float unaff_s12;
  undefined4 unaff_00005184;
  float unaff_s13;
  undefined4 unaff_000051a4;
  undefined4 unaff_s14;
  undefined4 unaff_000051c4;
  undefined4 unaff_s15;
  undefined4 unaff_000051e4;
  undefined1 auVar25 [12];
  undefined8 uVar26;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [12];
  undefined4 uStack_34;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  plVar5 = *(long **)(param_1 + 0x120);
  if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x015ec9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(*plVar5 + 0x558))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x560));
    return uVar6;
  }
  auVar25 = func_0x00f78af4();
  uStack_34 = auVar25._8_4_;
  puStack_18 = &Atlas_UI_LeaderboardEntryBehaviour__SetStatText;
  plVar5 = *(long **)(auVar25._0_8_ + 0x120);
  puStack_20 = &stack0xfffffffffffffff0;
  uVar7 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_34,0);
  if (plVar5 == (long *)0x0) {
    lVar8 = func_0x00f78af4();
    pcStack_48 = (code *)&Atlas_UI_LeaderboardEntryBehaviour__PlayChangeHitCountTween;
    lVar9 = 0;
    ppuStack_50 = &puStack_20;
    if (*(long *)(lVar8 + 0x120) == 0) {
      lVar8 = func_0x00f78af4();
      puStack_70 = (undefined1 *)&ppuStack_60;
      pcStack_58 = (code *)&Atlas_UI_LeaderboardEntryBehaviour__PlayChangePositionTween;
      if (*(long *)(lVar8 + 0x30) == 0) {
        ppuStack_60 = (undefined1 **)&ppuStack_50;
        lVar9 = func_0x00f78af4();
        puStack_68 = &Atlas_UI_LeaderboardEntryBehaviour__OnDestroy;
        ppuVar14 = &puStack_70;
        pppuVar1 = &ppuStack_60;
        if ((bRam0000000003eb540c & 1) == 0) {
          func_0x00f78a20(0x3d53528);
          func_0x00f78a20(0x3d578e0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb540c = 1;
          pppuVar1 = (undefined1 ***)puStack_70;
        }
        puStack_70 = (undefined1 *)pppuVar1;
        uVar7 = 0x3d23990;
        uVar26 = 0x3eb5000;
        puVar15 = &UNK_015ecb24;
        lVar8 = lVar9;
        if ((bRam0000000003eb5c29 & 1) == 0) {
          func_0x00f78a20(0x3d20bc0,0,0);
          bRam0000000003eb5c29 = 1;
        }
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((bRam0000000003eb5af0 & 1) == 0) {
          func_0x00f78a20(0x3d20bc0,0,0);
          func_0x00f78a20(0x3d25440);
          bRam0000000003eb5af0 = 1;
        }
        if (lVar9 == 0) {
          uVar6 = 0;
        }
        else {
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar2 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar9,0,0,0,0,in_x7,unaff_x22,uVar7,uVar26,lVar8,ppuVar14,
                                  puVar15);
          uVar6 = (ulong)uVar2;
        }
        return uVar6;
      }
      ppuStack_60 = (undefined1 **)&ppuStack_50;
      lVar8 = /*TMPro.TMP_Text$$get_rectTransform*/ func_0x031adac0(*(long *)(lVar8 + 0x30),0);
      uVar21 = (ulong)_UNK_033f8500;
      uVar6 = (ulong)(uint)_UNK_033f875c;
      uVar23 = 0x41200000;
      pppuVar1 = &ppuStack_50;
      uVar7 = 0;
      uVar26 = 0;
      uVar13 = 0;
      ppuVar14 = ppuStack_60;
      pcVar16 = pcStack_58;
      fVar24 = _UNK_033f875c;
    }
    else {
      lVar8 = /*TMPro.TMP_Text$$get_rectTransform*/ func_0x031adac0(*(long *)(lVar8 + 0x120),0);
      uVar6 = 0x3f800000;
      uVar23 = 0;
      pppuVar1 = (undefined1 ***)auStack_40;
      uVar7 = 0;
      uVar26 = 0;
      uVar13 = 0;
      ppuVar14 = ppuStack_50;
      pcVar16 = pcStack_48;
      uVar21 = (ulong)_UNK_033f8500;
      fVar24 = _UNK_033f875c;
    }
    do {
      uVar11 = uVar26;
      uVar10 = uVar7;
      lVar4 = lVar8;
      uVar22 = (undefined4)uVar23;
      fVar19 = (float)uVar21;
      uVar17 = (undefined4)uVar6;
      uVar20 = uVar6 & 0xffffffff;
      uVar23 = uVar6 & 0xffffffff;
      *(ulong *)((long)pppuVar1 + -0x80) = CONCAT44(unaff_000051e4,unaff_s15);
      *(ulong *)((long)pppuVar1 + -0x78) = CONCAT44(unaff_000051c4,unaff_s14);
      *(ulong *)((long)pppuVar1 + -0x70) = CONCAT44(unaff_000051a4,unaff_s13);
      *(ulong *)((long)pppuVar1 + -0x68) = CONCAT44(unaff_00005184,unaff_s12);
      *(ulong *)((long)pppuVar1 + -0x60) = CONCAT44(unaff_00005164,unaff_s11);
      *(ulong *)((long)pppuVar1 + -0x58) = CONCAT44(unaff_00005144,unaff_s10);
      *(ulong *)((long)pppuVar1 + -0x50) = CONCAT44(unaff_00005124,unaff_s9);
      *(ulong *)((long)pppuVar1 + -0x48) = CONCAT44(unaff_00005104,unaff_s8);
      *(undefined8 *)((long)pppuVar1 + -0x40) = unaff_x24;
      *(undefined8 *)((long)pppuVar1 + -0x38) = unaff_x23;
      *(undefined8 *)((long)pppuVar1 + -0x30) = unaff_x22;
      *(undefined8 *)((long)pppuVar1 + -0x28) = unaff_x21;
      *(long *)((long)pppuVar1 + -0x20) = unaff_x20;
      *(long *)((long)pppuVar1 + -0x18) = lVar9;
      *(undefined1 ***)((long)pppuVar1 + -0x10) = ppuVar14;
      *(code **)((long)pppuVar1 + -8) = pcVar16;
      ppuVar14 = (undefined1 **)((long)pppuVar1 + -0x10);
      unaff_00005124 = 0;
      unaff_00005104 = 0;
      unaff_00005164 = 0;
      unaff_00005184 = 0;
      unaff_000051a4 = 0;
      unaff_00005144 = 0;
      unaff_000051c4 = 0;
      unaff_000051e4 = 0;
      unaff_x24 = 0x3d26a48;
      uVar26 = uVar11;
      uVar12 = uVar13;
      fVar18 = fVar19;
      if ((bRam0000000003eb4867 & 1) == 0) {
        func_0x00f78a20(0x3d25428);
        func_0x00f78a20(0x3d5e6e0);
        func_0x00f78a20(0x3d5e770);
        func_0x00f78a20(0x3d5e790);
        func_0x00f78a20(0x3d5e7a8);
        func_0x00f78a20(0x3d40f78);
        func_0x00f78a20(0x3d62230);
        func_0x00f78a20(0x3d62238);
        func_0x00f78a20(0x3d62240);
        func_0x00f78a20(0x3d26a48);
        bRam0000000003eb4867 = 1;
      }
      unaff_x20 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0_TypeInfo*/ uRam0000000003d26a48);
      Atlas_UI_AtlasTweenAnimations___c__DisplayClass3_0___ctor(unaff_x20,0);
      if (unaff_x20 != 0) {
        *(undefined8 *)(unaff_x20 + 0x10) = uVar10;
        *(undefined8 *)(unaff_x20 + 0x18) = uVar13;
        if (lVar4 != 0) {
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uVar6 & 0xffffffff,uVar6 & 0xffffffff,uVar6 & 0xffffffff,lVar4,0);
          if ((int)uVar11 == 0) {
            uVar6 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar21 & 0xffffffff,uVar21 & 0xffffffff,uVar21 & 0xffffffff,
                                    fVar24 * _UNK_033f82b8,lVar4,0);
            puVar15 = &UNK_0146f6bc;
          }
          else {
            uVar6 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar21 & 0xffffffff,uVar21 & 0xffffffff,uVar21 & 0xffffffff,
                                    fVar24,lVar4,0);
            puVar15 = (undefined *)0x146f60c;
          }
          uVar7 = uRam0000000003d5e7a8;
          *(long *)((long)pppuVar1 + -0xa0) = unaff_x20;
          *(long *)((long)pppuVar1 + -0x98) = lVar4;
          *(undefined1 ***)((long)pppuVar1 + -0x90) = ppuVar14;
          *(undefined **)((long)pppuVar1 + -0x88) = puVar15;
          if ((uVar6 != 0) && (*(char *)(uVar6 + 0xe8) != '\0')) {
            *(undefined4 *)(uVar6 + 0xb4) = 9;
            iVar3 = /*DG.Tweening.Core.Easing.EaseManager$$IsFlashEase*/ func_0x0169bba8(9,0,uVar7);
            if (iVar3 != 0) {
              fVar18 = *(float *)(uVar6 + 0xc0);
              fVar24 = -fVar18;
              if (fVar18 != INFINITY) {
                fVar24 = fVar18;
              }
              *(float *)(uVar6 + 0xc0) = (float)(int)fVar24;
            }
            *(undefined8 *)(uVar6 + 0xb8) = 0;
          }
          return uVar6;
        }
      }
      pcVar16 = Atlas_UI_AtlasTweenAnimations__SpinZoom;
      lVar8 = func_0x00f78af4();
      pppuVar1 = (undefined1 ***)((long)pppuVar1 + -0x80);
      uVar7 = extraout_x1;
      uVar13 = uVar12;
      lVar9 = lVar4;
      unaff_x21 = uVar11;
      unaff_x22 = uVar13;
      unaff_x23 = uVar10;
      uVar6 = extraout_d0;
      uVar21 = uVar20;
      fVar24 = fVar18;
      unaff_s8 = uVar22;
      unaff_s9 = fVar24;
      unaff_s10 = uVar17;
      unaff_s11 = fVar19;
      unaff_s12 = fVar19;
      unaff_s13 = fVar19;
      unaff_s14 = uVar17;
      unaff_s15 = uVar17;
    } while( true );
  }
  uVar6 = (**(code **)(*plVar5 + 0x558))(plVar5,uVar7,*(undefined8 *)(*plVar5 + 0x560));
  return uVar6;
}



// ============================================================
// RVA: 0x15ec9d0 | Atlas.UI.LeaderboardEntryBehaviour.SetStatText
// ============================================================

/* WARNING: Possible PIC construction at 0x0146f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecb5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecc4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015eccf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecd18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec540) */
/* WARNING: Removing unreachable block (ram,0x015ec290) */
/* WARNING: Removing unreachable block (ram,0x015ec184) */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ecec8) */
/* WARNING: Removing unreachable block (ram,0x015eced0) */
/* WARNING: Removing unreachable block (ram,0x015ecea8) */
/* WARNING: Removing unreachable block (ram,0x015eceb0) */
/* WARNING: Removing unreachable block (ram,0x015ecebc) */
/* WARNING: Removing unreachable block (ram,0x015ece68) */
/* WARNING: Removing unreachable block (ram,0x015ece70) */
/* WARNING: Removing unreachable block (ram,0x015ece48) */
/* WARNING: Removing unreachable block (ram,0x015ece50) */
/* WARNING: Removing unreachable block (ram,0x015ece5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd1c) */
/* WARNING: Removing unreachable block (ram,0x015eccf4) */
/* WARNING: Removing unreachable block (ram,0x015ecd20) */
/* WARNING: Removing unreachable block (ram,0x015ecd50) */
/* WARNING: Removing unreachable block (ram,0x015ecd28) */
/* WARNING: Removing unreachable block (ram,0x015ecd30) */
/* WARNING: Removing unreachable block (ram,0x015ecd3c) */
/* WARNING: Removing unreachable block (ram,0x015eccfc) */
/* WARNING: Removing unreachable block (ram,0x015ecd04) */
/* WARNING: Removing unreachable block (ram,0x015ecd10) */
/* WARNING: Removing unreachable block (ram,0x015ecb24) */
/* WARNING: Removing unreachable block (ram,0x015ecb34) */
/* WARNING: Removing unreachable block (ram,0x015ecb3c) */
/* WARNING: Removing unreachable block (ram,0x015ecb40) */
/* WARNING: Removing unreachable block (ram,0x015ecb60) */
/* WARNING: Removing unreachable block (ram,0x015ecb70) */
/* WARNING: Removing unreachable block (ram,0x015ecb78) */
/* WARNING: Removing unreachable block (ram,0x015ecb7c) */
/* WARNING: Removing unreachable block (ram,0x015ecbb0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc8) */
/* WARNING: Removing unreachable block (ram,0x015ecbcc) */
/* WARNING: Removing unreachable block (ram,0x015ecc00) */
/* WARNING: Removing unreachable block (ram,0x015ecc10) */
/* WARNING: Removing unreachable block (ram,0x015ecc18) */
/* WARNING: Removing unreachable block (ram,0x015ecc1c) */
/* WARNING: Removing unreachable block (ram,0x015ecc50) */
/* WARNING: Removing unreachable block (ram,0x015ecc60) */
/* WARNING: Removing unreachable block (ram,0x015ecc68) */
/* WARNING: Removing unreachable block (ram,0x015ecc6c) */
/* WARNING: Removing unreachable block (ram,0x015eccac) */
/* WARNING: Removing unreachable block (ram,0x015ecc7c) */
/* WARNING: Removing unreachable block (ram,0x015ecc84) */
/* WARNING: Removing unreachable block (ram,0x015ecc2c) */
/* WARNING: Removing unreachable block (ram,0x015ecc34) */
/* WARNING: Removing unreachable block (ram,0x015ecbdc) */
/* WARNING: Removing unreachable block (ram,0x015ecbe4) */
/* WARNING: Removing unreachable block (ram,0x015ecb8c) */
/* WARNING: Removing unreachable block (ram,0x015eccbc) */
/* WARNING: Removing unreachable block (ram,0x015eccd8) */
/* WARNING: Removing unreachable block (ram,0x015ecd5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd74) */
/* WARNING: Removing unreachable block (ram,0x015ecd98) */
/* WARNING: Removing unreachable block (ram,0x015ecdc8) */
/* WARNING: Removing unreachable block (ram,0x015ecddc) */
/* WARNING: Removing unreachable block (ram,0x015ece00) */
/* WARNING: Removing unreachable block (ram,0x015ece08) */
/* WARNING: Removing unreachable block (ram,0x015ece0c) */
/* WARNING: Removing unreachable block (ram,0x015ece20) */
/* WARNING: Removing unreachable block (ram,0x015ece7c) */
/* WARNING: Removing unreachable block (ram,0x015ecedc) */
/* WARNING: Removing unreachable block (ram,0x015ecee4) */
/* WARNING: Removing unreachable block (ram,0x015ebd40) */
/* WARNING: Removing unreachable block (ram,0x015ebd5c) */
/* WARNING: Removing unreachable block (ram,0x015ebd68) */
/* WARNING: Removing unreachable block (ram,0x015ebdd4) */
/* WARNING: Removing unreachable block (ram,0x015ebe04) */
/* WARNING: Removing unreachable block (ram,0x015ebe18) */
/* WARNING: Removing unreachable block (ram,0x015ebe28) */
/* WARNING: Removing unreachable block (ram,0x015ebe30) */
/* WARNING: Removing unreachable block (ram,0x015ebe34) */
/* WARNING: Removing unreachable block (ram,0x015ebe70) */
/* WARNING: Removing unreachable block (ram,0x015ebe44) */
/* WARNING: Removing unreachable block (ram,0x015ebe4c) */
/* WARNING: Removing unreachable block (ram,0x015ebe80) */
/* WARNING: Removing unreachable block (ram,0x015ebeb4) */
/* WARNING: Removing unreachable block (ram,0x015ebed4) */
/* WARNING: Removing unreachable block (ram,0x015ebee4) */
/* WARNING: Removing unreachable block (ram,0x015ebeec) */
/* WARNING: Removing unreachable block (ram,0x015ebef0) */
/* WARNING: Removing unreachable block (ram,0x015ebf00) */
/* WARNING: Removing unreachable block (ram,0x015ebf58) */
/* WARNING: Removing unreachable block (ram,0x015ebf94) */
/* WARNING: Removing unreachable block (ram,0x015ebfa8) */
/* WARNING: Removing unreachable block (ram,0x015ebff0) */
/* WARNING: Removing unreachable block (ram,0x015ebfb0) */
/* WARNING: Removing unreachable block (ram,0x015ebff4) */
/* WARNING: Removing unreachable block (ram,0x015ec044) */
/* WARNING: Removing unreachable block (ram,0x015ec0ac) */
/* WARNING: Removing unreachable block (ram,0x015ec0c4) */
/* WARNING: Removing unreachable block (ram,0x015ec1b0) */
/* WARNING: Removing unreachable block (ram,0x015ec1f0) */
/* WARNING: Removing unreachable block (ram,0x015ec228) */
/* WARNING: Removing unreachable block (ram,0x015ec2b4) */
/* WARNING: Removing unreachable block (ram,0x015ec2f8) */
/* WARNING: Removing unreachable block (ram,0x015ec318) */
/* WARNING: Removing unreachable block (ram,0x015ec328) */
/* WARNING: Removing unreachable block (ram,0x015ec330) */
/* WARNING: Removing unreachable block (ram,0x015ec334) */
/* WARNING: Removing unreachable block (ram,0x015ec38c) */
/* WARNING: Removing unreachable block (ram,0x015ec344) */
/* WARNING: Removing unreachable block (ram,0x015ec3a8) */
/* WARNING: Removing unreachable block (ram,0x015ec3e4) */
/* WARNING: Removing unreachable block (ram,0x015ec3f8) */
/* WARNING: Removing unreachable block (ram,0x015ec440) */
/* WARNING: Removing unreachable block (ram,0x015ec47c) */
/* WARNING: Removing unreachable block (ram,0x015ec4c0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d8) */
/* WARNING: Removing unreachable block (ram,0x015ec4dc) */
/* WARNING: Removing unreachable block (ram,0x015ec564) */
/* WARNING: Removing unreachable block (ram,0x015ec4ec) */
/* WARNING: Removing unreachable block (ram,0x015ec57c) */
/* WARNING: Removing unreachable block (ram,0x015ec5c8) */
/* WARNING: Removing unreachable block (ram,0x015ec624) */
/* WARNING: Removing unreachable block (ram,0x015ec634) */
/* WARNING: Removing unreachable block (ram,0x015ec63c) */
/* WARNING: Removing unreachable block (ram,0x015ec640) */
/* WARNING: Removing unreachable block (ram,0x015ec704) */
/* WARNING: Removing unreachable block (ram,0x015ec650) */
/* WARNING: Removing unreachable block (ram,0x015ec4f4) */
/* WARNING: Removing unreachable block (ram,0x015ec400) */
/* WARNING: Removing unreachable block (ram,0x015ec34c) */
/* WARNING: Removing unreachable block (ram,0x015ec230) */
/* WARNING: Removing unreachable block (ram,0x015ec0cc) */
/* WARNING: Removing unreachable block (ram,0x015ec134) */
/* WARNING: Removing unreachable block (ram,0x015ec13c) */
/* WARNING: Removing unreachable block (ram,0x015ec140) */
/* WARNING: Removing unreachable block (ram,0x018eee1c) */
/* WARNING: Removing unreachable block (ram,0x018eee40) */
/* WARNING: Removing unreachable block (ram,0x018eee6c) */
/* WARNING: Removing unreachable block (ram,0x018eee70) */
/* WARNING: Removing unreachable block (ram,0x018eee78) */
/* WARNING: Removing unreachable block (ram,0x018eee8c) */
/* WARNING: Removing unreachable block (ram,0x018eee94) */
/* WARNING: Removing unreachable block (ram,0x018eee98) */
/* WARNING: Removing unreachable block (ram,0x018eeea4) */
/* WARNING: Removing unreachable block (ram,0x018eeed0) */
/* WARNING: Removing unreachable block (ram,0x018eeed8) */
/* WARNING: Removing unreachable block (ram,0x018eeedc) */
/* WARNING: Removing unreachable block (ram,0x018eef04) */
/* WARNING: Removing unreachable block (ram,0x018eef08) */
/* WARNING: Removing unreachable block (ram,0x018eeef0) */
/* WARNING: Removing unreachable block (ram,0x018eef34) */
/* WARNING: Removing unreachable block (ram,0x018eef5c) */
/* WARNING: Removing unreachable block (ram,0x018eef7c) */
/* WARNING: Removing unreachable block (ram,0x018eef80) */
/* WARNING: Removing unreachable block (ram,0x018eef88) */
/* WARNING: Removing unreachable block (ram,0x018eef9c) */
/* WARNING: Removing unreachable block (ram,0x018eefa4) */
/* WARNING: Removing unreachable block (ram,0x018eefac) */
/* WARNING: Removing unreachable block (ram,0x018eefc8) */
/* WARNING: Removing unreachable block (ram,0x018eefd0) */
/* WARNING: Removing unreachable block (ram,0x018eefd4) */
/* WARNING: Removing unreachable block (ram,0x018eefec) */
/* WARNING: Removing unreachable block (ram,0x018eeef4) */
/* WARNING: Removing unreachable block (ram,0x018eef18) */
/* WARNING: Removing unreachable block (ram,0x018eef1c) */
/* WARNING: Removing unreachable block (ram,0x018eef20) */
/* WARNING: Removing unreachable block (ram,0x015ebf2c) */
/* WARNING: Removing unreachable block (ram,0x015ebf44) */
/* WARNING: Removing unreachable block (ram,0x015ebe58) */
/* WARNING: Removing unreachable block (ram,0x015ebda4) */
/* WARNING: Removing unreachable block (ram,0x02f8b024) */
/* WARNING: Removing unreachable block (ram,0x02f8b034) */
/* WARNING: Removing unreachable block (ram,0x02f8b038) */
/* WARNING: Removing unreachable block (ram,0x02f8b050) */
/* WARNING: Removing unreachable block (ram,0x02f8b03c) */
/* WARNING: Removing unreachable block (ram,0x015ece88) */
/* WARNING: Removing unreachable block (ram,0x015ece90) */
/* WARNING: Removing unreachable block (ram,0x015ece9c) */
/* WARNING: Removing unreachable block (ram,0x015ece28) */
/* WARNING: Removing unreachable block (ram,0x015ece30) */
/* WARNING: Removing unreachable block (ram,0x015ecf10) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x015ece3c) */
/* WARNING: Removing unreachable block (ram,0x015ecd84) */
/* WARNING: Removing unreachable block (ram,0x015ecce8) */
/* WARNING: Removing unreachable block (ram,0x0322ef1c) */
/* WARNING: Removing unreachable block (ram,0x0322ef40) */
/* WARNING: Removing unreachable block (ram,0x0322ef54) */
/* WARNING: Removing unreachable block (ram,0x015ecb94) */
/* WARNING: Removing unreachable block (ram,0x015ecb50) */
/* WARNING: Removing unreachable block (ram,0x0146f744) */
/* WARNING: Removing unreachable block (ram,0x0146f790) */
/* WARNING: Removing unreachable block (ram,0x0146f748) */
/* WARNING: Removing unreachable block (ram,0x0146f6bc) */
/* WARNING: Removing unreachable block (ram,0x0146f708) */
/* WARNING: Removing unreachable block (ram,0x0146f6c0) */
/* WARNING: Removing unreachable block (ram,0x0146f654) */
/* WARNING: Removing unreachable block (ram,0x0146f7b0) */
/* WARNING: Removing unreachable block (ram,0x0146f7cc) */
/* WARNING: Removing unreachable block (ram,0x0146f60c) */
/* WARNING: Removing unreachable block (ram,0x015ec6ac) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_LeaderboardEntryBehaviour__SetStatText(long param_1,undefined4 param_2)

{
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_x7;
  long *plVar14;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar15;
  undefined *puVar16;
  code *pcVar17;
  undefined4 uVar18;
  float fVar19;
  ulong extraout_d0;
  float fVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 uVar23;
  ulong uVar24;
  float fVar25;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  float unaff_s9;
  undefined4 unaff_00005124;
  undefined4 unaff_s10;
  undefined4 unaff_00005144;
  float unaff_s11;
  undefined4 unaff_00005164;
  float unaff_s12;
  undefined4 unaff_00005184;
  float unaff_s13;
  undefined4 unaff_000051a4;
  undefined4 unaff_s14;
  undefined4 unaff_000051c4;
  undefined4 unaff_s15;
  undefined4 unaff_000051e4;
  undefined8 uVar26;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  
  plVar14 = *(long **)(param_1 + 0x120);
  uStack_24 = param_2;
  uVar6 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_24,0);
  if (plVar14 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar14 + 0x558))(plVar14,uVar6,*(undefined8 *)(*plVar14 + 0x560));
    return uVar7;
  }
  lVar8 = func_0x00f78af4();
  pcStack_38 = (code *)&Atlas_UI_LeaderboardEntryBehaviour__PlayChangeHitCountTween;
  lVar9 = 0;
  puStack_40 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar8 + 0x120) == 0) {
    lVar8 = func_0x00f78af4();
    puStack_60 = (undefined1 *)&puStack_50;
    pcStack_48 = (code *)&Atlas_UI_LeaderboardEntryBehaviour__PlayChangePositionTween;
    if (*(long *)(lVar8 + 0x30) == 0) {
      puStack_50 = (undefined1 *)&puStack_40;
      lVar9 = func_0x00f78af4();
      puStack_58 = &Atlas_UI_LeaderboardEntryBehaviour__OnDestroy;
      ppuVar2 = &puStack_60;
      ppuVar1 = &puStack_50;
      if ((bRam0000000003eb540c & 1) == 0) {
        func_0x00f78a20(0x3d53528);
        func_0x00f78a20(0x3d578e0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb540c = 1;
        ppuVar1 = (undefined1 **)puStack_60;
      }
      puStack_60 = (undefined1 *)ppuVar1;
      uVar6 = 0x3d23990;
      uVar26 = 0x3eb5000;
      puVar16 = &UNK_015ecb24;
      lVar8 = lVar9;
      if ((bRam0000000003eb5c29 & 1) == 0) {
        func_0x00f78a20(0x3d20bc0,0,0);
        bRam0000000003eb5c29 = 1;
      }
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003eb5af0 & 1) == 0) {
        func_0x00f78a20(0x3d20bc0,0,0);
        func_0x00f78a20(0x3d25440);
        bRam0000000003eb5af0 = 1;
      }
      if (lVar9 == 0) {
        uVar7 = 0;
      }
      else {
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar3 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar9,0,0,0,0,in_x7,unaff_x22,uVar6,uVar26,lVar8,ppuVar2,
                                puVar16);
        uVar7 = (ulong)uVar3;
      }
      return uVar7;
    }
    puStack_50 = (undefined1 *)&puStack_40;
    lVar8 = /*TMPro.TMP_Text$$get_rectTransform*/ func_0x031adac0(*(long *)(lVar8 + 0x30),0);
    uVar22 = (ulong)_UNK_033f8500;
    uVar7 = (ulong)(uint)_UNK_033f875c;
    uVar24 = 0x41200000;
    ppuVar2 = &puStack_40;
    uVar6 = 0;
    uVar26 = 0;
    uVar13 = 0;
    puVar15 = puStack_50;
    pcVar17 = pcStack_48;
    fVar25 = _UNK_033f875c;
  }
  else {
    lVar8 = /*TMPro.TMP_Text$$get_rectTransform*/ func_0x031adac0(*(long *)(lVar8 + 0x120),0);
    uVar7 = 0x3f800000;
    uVar24 = 0;
    ppuVar2 = (undefined1 **)auStack_30;
    uVar6 = 0;
    uVar26 = 0;
    uVar13 = 0;
    puVar15 = puStack_40;
    pcVar17 = pcStack_38;
    uVar22 = (ulong)_UNK_033f8500;
    fVar25 = _UNK_033f875c;
  }
  do {
    uVar11 = uVar26;
    uVar10 = uVar6;
    lVar5 = lVar8;
    uVar23 = (undefined4)uVar24;
    fVar20 = (float)uVar22;
    uVar18 = (undefined4)uVar7;
    uVar21 = uVar7 & 0xffffffff;
    uVar24 = uVar7 & 0xffffffff;
    *(ulong *)((long)ppuVar2 + -0x80) = CONCAT44(unaff_000051e4,unaff_s15);
    *(ulong *)((long)ppuVar2 + -0x78) = CONCAT44(unaff_000051c4,unaff_s14);
    *(ulong *)((long)ppuVar2 + -0x70) = CONCAT44(unaff_000051a4,unaff_s13);
    *(ulong *)((long)ppuVar2 + -0x68) = CONCAT44(unaff_00005184,unaff_s12);
    *(ulong *)((long)ppuVar2 + -0x60) = CONCAT44(unaff_00005164,unaff_s11);
    *(ulong *)((long)ppuVar2 + -0x58) = CONCAT44(unaff_00005144,unaff_s10);
    *(ulong *)((long)ppuVar2 + -0x50) = CONCAT44(unaff_00005124,unaff_s9);
    *(ulong *)((long)ppuVar2 + -0x48) = CONCAT44(unaff_00005104,unaff_s8);
    *(undefined8 *)((long)ppuVar2 + -0x40) = unaff_x24;
    *(undefined8 *)((long)ppuVar2 + -0x38) = unaff_x23;
    *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_x22;
    *(undefined8 *)((long)ppuVar2 + -0x28) = unaff_x21;
    *(long *)((long)ppuVar2 + -0x20) = unaff_x20;
    *(long *)((long)ppuVar2 + -0x18) = lVar9;
    *(undefined1 **)((long)ppuVar2 + -0x10) = puVar15;
    *(code **)((long)ppuVar2 + -8) = pcVar17;
    puVar15 = (undefined1 *)((long)ppuVar2 + -0x10);
    unaff_00005124 = 0;
    unaff_00005104 = 0;
    unaff_00005164 = 0;
    unaff_00005184 = 0;
    unaff_000051a4 = 0;
    unaff_00005144 = 0;
    unaff_000051c4 = 0;
    unaff_000051e4 = 0;
    unaff_x24 = 0x3d26a48;
    uVar26 = uVar11;
    uVar12 = uVar13;
    fVar19 = fVar20;
    if ((bRam0000000003eb4867 & 1) == 0) {
      func_0x00f78a20(0x3d25428);
      func_0x00f78a20(0x3d5e6e0);
      func_0x00f78a20(0x3d5e770);
      func_0x00f78a20(0x3d5e790);
      func_0x00f78a20(0x3d5e7a8);
      func_0x00f78a20(0x3d40f78);
      func_0x00f78a20(0x3d62230);
      func_0x00f78a20(0x3d62238);
      func_0x00f78a20(0x3d62240);
      func_0x00f78a20(0x3d26a48);
      bRam0000000003eb4867 = 1;
    }
    unaff_x20 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0_TypeInfo*/ uRam0000000003d26a48);
    Atlas_UI_AtlasTweenAnimations___c__DisplayClass3_0___ctor(unaff_x20,0);
    if (unaff_x20 != 0) {
      *(undefined8 *)(unaff_x20 + 0x10) = uVar10;
      *(undefined8 *)(unaff_x20 + 0x18) = uVar13;
      if (lVar5 != 0) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uVar7 & 0xffffffff,uVar7 & 0xffffffff,uVar7 & 0xffffffff,lVar5,0);
        if ((int)uVar11 == 0) {
          uVar7 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar22 & 0xffffffff,uVar22 & 0xffffffff,uVar22 & 0xffffffff,
                                  fVar25 * _UNK_033f82b8,lVar5,0);
          puVar16 = &UNK_0146f6bc;
        }
        else {
          uVar7 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar22 & 0xffffffff,uVar22 & 0xffffffff,uVar22 & 0xffffffff,fVar25
                                  ,lVar5,0);
          puVar16 = (undefined *)0x146f60c;
        }
        uVar6 = uRam0000000003d5e7a8;
        *(long *)((long)ppuVar2 + -0xa0) = unaff_x20;
        *(long *)((long)ppuVar2 + -0x98) = lVar5;
        *(undefined1 **)((long)ppuVar2 + -0x90) = puVar15;
        *(undefined **)((long)ppuVar2 + -0x88) = puVar16;
        if ((uVar7 != 0) && (*(char *)(uVar7 + 0xe8) != '\0')) {
          *(undefined4 *)(uVar7 + 0xb4) = 9;
          iVar4 = /*DG.Tweening.Core.Easing.EaseManager$$IsFlashEase*/ func_0x0169bba8(9,0,uVar6);
          if (iVar4 != 0) {
            fVar19 = *(float *)(uVar7 + 0xc0);
            fVar25 = -fVar19;
            if (fVar19 != INFINITY) {
              fVar25 = fVar19;
            }
            *(float *)(uVar7 + 0xc0) = (float)(int)fVar25;
          }
          *(undefined8 *)(uVar7 + 0xb8) = 0;
        }
        return uVar7;
      }
    }
    pcVar17 = Atlas_UI_AtlasTweenAnimations__SpinZoom;
    lVar8 = func_0x00f78af4();
    ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x80);
    uVar6 = extraout_x1;
    uVar13 = uVar12;
    lVar9 = lVar5;
    unaff_x21 = uVar11;
    unaff_x22 = uVar13;
    unaff_x23 = uVar10;
    uVar7 = extraout_d0;
    uVar22 = uVar21;
    fVar25 = fVar19;
    unaff_s8 = uVar23;
    unaff_s9 = fVar25;
    unaff_s10 = uVar18;
    unaff_s11 = fVar20;
    unaff_s12 = fVar20;
    unaff_s13 = fVar20;
    unaff_s14 = uVar18;
    unaff_s15 = uVar18;
  } while( true );
}



// ============================================================
// RVA: 0x15eca24 | Atlas.UI.LeaderboardEntryBehaviour.PlayChangeHitCountTween
// ============================================================

/* WARNING: Possible PIC construction at 0x0146f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecb5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecc4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015eccf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecd18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec540) */
/* WARNING: Removing unreachable block (ram,0x015ec290) */
/* WARNING: Removing unreachable block (ram,0x015ec184) */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ecec8) */
/* WARNING: Removing unreachable block (ram,0x015eced0) */
/* WARNING: Removing unreachable block (ram,0x015ecea8) */
/* WARNING: Removing unreachable block (ram,0x015eceb0) */
/* WARNING: Removing unreachable block (ram,0x015ecebc) */
/* WARNING: Removing unreachable block (ram,0x015ece68) */
/* WARNING: Removing unreachable block (ram,0x015ece70) */
/* WARNING: Removing unreachable block (ram,0x015ece48) */
/* WARNING: Removing unreachable block (ram,0x015ece50) */
/* WARNING: Removing unreachable block (ram,0x015ece5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd1c) */
/* WARNING: Removing unreachable block (ram,0x015eccf4) */
/* WARNING: Removing unreachable block (ram,0x015ecd20) */
/* WARNING: Removing unreachable block (ram,0x015ecd50) */
/* WARNING: Removing unreachable block (ram,0x015ecd28) */
/* WARNING: Removing unreachable block (ram,0x015ecd30) */
/* WARNING: Removing unreachable block (ram,0x015ecd3c) */
/* WARNING: Removing unreachable block (ram,0x015eccfc) */
/* WARNING: Removing unreachable block (ram,0x015ecd04) */
/* WARNING: Removing unreachable block (ram,0x015ecd10) */
/* WARNING: Removing unreachable block (ram,0x015ecb24) */
/* WARNING: Removing unreachable block (ram,0x015ecb34) */
/* WARNING: Removing unreachable block (ram,0x015ecb3c) */
/* WARNING: Removing unreachable block (ram,0x015ecb40) */
/* WARNING: Removing unreachable block (ram,0x015ecb60) */
/* WARNING: Removing unreachable block (ram,0x015ecb70) */
/* WARNING: Removing unreachable block (ram,0x015ecb78) */
/* WARNING: Removing unreachable block (ram,0x015ecb7c) */
/* WARNING: Removing unreachable block (ram,0x015ecbb0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc8) */
/* WARNING: Removing unreachable block (ram,0x015ecbcc) */
/* WARNING: Removing unreachable block (ram,0x015ecc00) */
/* WARNING: Removing unreachable block (ram,0x015ecc10) */
/* WARNING: Removing unreachable block (ram,0x015ecc18) */
/* WARNING: Removing unreachable block (ram,0x015ecc1c) */
/* WARNING: Removing unreachable block (ram,0x015ecc50) */
/* WARNING: Removing unreachable block (ram,0x015ecc60) */
/* WARNING: Removing unreachable block (ram,0x015ecc68) */
/* WARNING: Removing unreachable block (ram,0x015ecc6c) */
/* WARNING: Removing unreachable block (ram,0x015eccac) */
/* WARNING: Removing unreachable block (ram,0x015ecc7c) */
/* WARNING: Removing unreachable block (ram,0x015ecc84) */
/* WARNING: Removing unreachable block (ram,0x015ecc2c) */
/* WARNING: Removing unreachable block (ram,0x015ecc34) */
/* WARNING: Removing unreachable block (ram,0x015ecbdc) */
/* WARNING: Removing unreachable block (ram,0x015ecbe4) */
/* WARNING: Removing unreachable block (ram,0x015ecb8c) */
/* WARNING: Removing unreachable block (ram,0x015eccbc) */
/* WARNING: Removing unreachable block (ram,0x015eccd8) */
/* WARNING: Removing unreachable block (ram,0x015ecd5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd74) */
/* WARNING: Removing unreachable block (ram,0x015ecd98) */
/* WARNING: Removing unreachable block (ram,0x015ecdc8) */
/* WARNING: Removing unreachable block (ram,0x015ecddc) */
/* WARNING: Removing unreachable block (ram,0x015ece00) */
/* WARNING: Removing unreachable block (ram,0x015ece08) */
/* WARNING: Removing unreachable block (ram,0x015ece0c) */
/* WARNING: Removing unreachable block (ram,0x015ece20) */
/* WARNING: Removing unreachable block (ram,0x015ece7c) */
/* WARNING: Removing unreachable block (ram,0x015ecedc) */
/* WARNING: Removing unreachable block (ram,0x015ecee4) */
/* WARNING: Removing unreachable block (ram,0x015ebd40) */
/* WARNING: Removing unreachable block (ram,0x015ebd5c) */
/* WARNING: Removing unreachable block (ram,0x015ebd68) */
/* WARNING: Removing unreachable block (ram,0x015ebdd4) */
/* WARNING: Removing unreachable block (ram,0x015ebe04) */
/* WARNING: Removing unreachable block (ram,0x015ebe18) */
/* WARNING: Removing unreachable block (ram,0x015ebe28) */
/* WARNING: Removing unreachable block (ram,0x015ebe30) */
/* WARNING: Removing unreachable block (ram,0x015ebe34) */
/* WARNING: Removing unreachable block (ram,0x015ebe70) */
/* WARNING: Removing unreachable block (ram,0x015ebe44) */
/* WARNING: Removing unreachable block (ram,0x015ebe4c) */
/* WARNING: Removing unreachable block (ram,0x015ebe80) */
/* WARNING: Removing unreachable block (ram,0x015ebeb4) */
/* WARNING: Removing unreachable block (ram,0x015ebed4) */
/* WARNING: Removing unreachable block (ram,0x015ebee4) */
/* WARNING: Removing unreachable block (ram,0x015ebeec) */
/* WARNING: Removing unreachable block (ram,0x015ebef0) */
/* WARNING: Removing unreachable block (ram,0x015ebf00) */
/* WARNING: Removing unreachable block (ram,0x015ebf58) */
/* WARNING: Removing unreachable block (ram,0x015ebf94) */
/* WARNING: Removing unreachable block (ram,0x015ebfa8) */
/* WARNING: Removing unreachable block (ram,0x015ebff0) */
/* WARNING: Removing unreachable block (ram,0x015ebfb0) */
/* WARNING: Removing unreachable block (ram,0x015ebff4) */
/* WARNING: Removing unreachable block (ram,0x015ec044) */
/* WARNING: Removing unreachable block (ram,0x015ec0ac) */
/* WARNING: Removing unreachable block (ram,0x015ec0c4) */
/* WARNING: Removing unreachable block (ram,0x015ec1b0) */
/* WARNING: Removing unreachable block (ram,0x015ec1f0) */
/* WARNING: Removing unreachable block (ram,0x015ec228) */
/* WARNING: Removing unreachable block (ram,0x015ec2b4) */
/* WARNING: Removing unreachable block (ram,0x015ec2f8) */
/* WARNING: Removing unreachable block (ram,0x015ec318) */
/* WARNING: Removing unreachable block (ram,0x015ec328) */
/* WARNING: Removing unreachable block (ram,0x015ec330) */
/* WARNING: Removing unreachable block (ram,0x015ec334) */
/* WARNING: Removing unreachable block (ram,0x015ec38c) */
/* WARNING: Removing unreachable block (ram,0x015ec344) */
/* WARNING: Removing unreachable block (ram,0x015ec3a8) */
/* WARNING: Removing unreachable block (ram,0x015ec3e4) */
/* WARNING: Removing unreachable block (ram,0x015ec3f8) */
/* WARNING: Removing unreachable block (ram,0x015ec440) */
/* WARNING: Removing unreachable block (ram,0x015ec47c) */
/* WARNING: Removing unreachable block (ram,0x015ec4c0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d8) */
/* WARNING: Removing unreachable block (ram,0x015ec4dc) */
/* WARNING: Removing unreachable block (ram,0x015ec564) */
/* WARNING: Removing unreachable block (ram,0x015ec4ec) */
/* WARNING: Removing unreachable block (ram,0x015ec57c) */
/* WARNING: Removing unreachable block (ram,0x015ec5c8) */
/* WARNING: Removing unreachable block (ram,0x015ec624) */
/* WARNING: Removing unreachable block (ram,0x015ec634) */
/* WARNING: Removing unreachable block (ram,0x015ec63c) */
/* WARNING: Removing unreachable block (ram,0x015ec640) */
/* WARNING: Removing unreachable block (ram,0x015ec704) */
/* WARNING: Removing unreachable block (ram,0x015ec650) */
/* WARNING: Removing unreachable block (ram,0x015ec4f4) */
/* WARNING: Removing unreachable block (ram,0x015ec400) */
/* WARNING: Removing unreachable block (ram,0x015ec34c) */
/* WARNING: Removing unreachable block (ram,0x015ec230) */
/* WARNING: Removing unreachable block (ram,0x015ec0cc) */
/* WARNING: Removing unreachable block (ram,0x015ec134) */
/* WARNING: Removing unreachable block (ram,0x015ec13c) */
/* WARNING: Removing unreachable block (ram,0x015ec140) */
/* WARNING: Removing unreachable block (ram,0x018eee1c) */
/* WARNING: Removing unreachable block (ram,0x018eee40) */
/* WARNING: Removing unreachable block (ram,0x018eee6c) */
/* WARNING: Removing unreachable block (ram,0x018eee70) */
/* WARNING: Removing unreachable block (ram,0x018eee78) */
/* WARNING: Removing unreachable block (ram,0x018eee8c) */
/* WARNING: Removing unreachable block (ram,0x018eee94) */
/* WARNING: Removing unreachable block (ram,0x018eee98) */
/* WARNING: Removing unreachable block (ram,0x018eeea4) */
/* WARNING: Removing unreachable block (ram,0x018eeed0) */
/* WARNING: Removing unreachable block (ram,0x018eeed8) */
/* WARNING: Removing unreachable block (ram,0x018eeedc) */
/* WARNING: Removing unreachable block (ram,0x018eef04) */
/* WARNING: Removing unreachable block (ram,0x018eef08) */
/* WARNING: Removing unreachable block (ram,0x018eeef0) */
/* WARNING: Removing unreachable block (ram,0x018eef34) */
/* WARNING: Removing unreachable block (ram,0x018eef5c) */
/* WARNING: Removing unreachable block (ram,0x018eef7c) */
/* WARNING: Removing unreachable block (ram,0x018eef80) */
/* WARNING: Removing unreachable block (ram,0x018eef88) */
/* WARNING: Removing unreachable block (ram,0x018eef9c) */
/* WARNING: Removing unreachable block (ram,0x018eefa4) */
/* WARNING: Removing unreachable block (ram,0x018eefac) */
/* WARNING: Removing unreachable block (ram,0x018eefc8) */
/* WARNING: Removing unreachable block (ram,0x018eefd0) */
/* WARNING: Removing unreachable block (ram,0x018eefd4) */
/* WARNING: Removing unreachable block (ram,0x018eefec) */
/* WARNING: Removing unreachable block (ram,0x018eeef4) */
/* WARNING: Removing unreachable block (ram,0x018eef18) */
/* WARNING: Removing unreachable block (ram,0x018eef1c) */
/* WARNING: Removing unreachable block (ram,0x018eef20) */
/* WARNING: Removing unreachable block (ram,0x015ebf2c) */
/* WARNING: Removing unreachable block (ram,0x015ebf44) */
/* WARNING: Removing unreachable block (ram,0x015ebe58) */
/* WARNING: Removing unreachable block (ram,0x015ebda4) */
/* WARNING: Removing unreachable block (ram,0x02f8b024) */
/* WARNING: Removing unreachable block (ram,0x02f8b034) */
/* WARNING: Removing unreachable block (ram,0x02f8b038) */
/* WARNING: Removing unreachable block (ram,0x02f8b050) */
/* WARNING: Removing unreachable block (ram,0x02f8b03c) */
/* WARNING: Removing unreachable block (ram,0x015ece88) */
/* WARNING: Removing unreachable block (ram,0x015ece90) */
/* WARNING: Removing unreachable block (ram,0x015ece9c) */
/* WARNING: Removing unreachable block (ram,0x015ece28) */
/* WARNING: Removing unreachable block (ram,0x015ece30) */
/* WARNING: Removing unreachable block (ram,0x015ecf10) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x015ece3c) */
/* WARNING: Removing unreachable block (ram,0x015ecd84) */
/* WARNING: Removing unreachable block (ram,0x015ecce8) */
/* WARNING: Removing unreachable block (ram,0x0322ef1c) */
/* WARNING: Removing unreachable block (ram,0x0322ef40) */
/* WARNING: Removing unreachable block (ram,0x0322ef54) */
/* WARNING: Removing unreachable block (ram,0x015ecb94) */
/* WARNING: Removing unreachable block (ram,0x015ecb50) */
/* WARNING: Removing unreachable block (ram,0x0146f744) */
/* WARNING: Removing unreachable block (ram,0x0146f790) */
/* WARNING: Removing unreachable block (ram,0x0146f748) */
/* WARNING: Removing unreachable block (ram,0x0146f6bc) */
/* WARNING: Removing unreachable block (ram,0x0146f708) */
/* WARNING: Removing unreachable block (ram,0x0146f6c0) */
/* WARNING: Removing unreachable block (ram,0x0146f654) */
/* WARNING: Removing unreachable block (ram,0x0146f7b0) */
/* WARNING: Removing unreachable block (ram,0x0146f7cc) */
/* WARNING: Removing unreachable block (ram,0x0146f60c) */
/* WARNING: Removing unreachable block (ram,0x015ec6ac) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_LeaderboardEntryBehaviour__PlayChangeHitCountTween(long param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_x7;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *puVar11;
  code *unaff_x30;
  undefined4 uVar12;
  float fVar13;
  ulong extraout_d0;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 uVar17;
  ulong uVar18;
  float fVar19;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  float unaff_s9;
  undefined4 unaff_00005124;
  undefined4 unaff_s10;
  undefined4 unaff_00005144;
  float unaff_s11;
  undefined4 unaff_00005164;
  float unaff_s12;
  undefined4 unaff_00005184;
  float unaff_s13;
  undefined4 unaff_000051a4;
  undefined4 unaff_s14;
  undefined4 unaff_000051c4;
  undefined4 unaff_s15;
  undefined4 unaff_000051e4;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined1 **ppuVar23;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (*(long *)(param_1 + 0x120) == 0) {
    lVar6 = func_0x00f78af4();
    puStack_30 = (undefined1 *)&puStack_20;
    pcStack_18 = (code *)&Atlas_UI_LeaderboardEntryBehaviour__PlayChangePositionTween;
    if (*(long *)(lVar6 + 0x30) == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      lVar6 = func_0x00f78af4();
      puStack_28 = &Atlas_UI_LeaderboardEntryBehaviour__OnDestroy;
      ppuVar23 = &puStack_30;
      ppuVar1 = &puStack_20;
      if ((bRam0000000003eb540c & 1) == 0) {
        func_0x00f78a20(0x3d53528);
        func_0x00f78a20(0x3d578e0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb540c = 1;
        ppuVar1 = (undefined1 **)puStack_30;
      }
      puStack_30 = (undefined1 *)ppuVar1;
      uVar20 = 0x3d23990;
      uVar21 = 0x3eb5000;
      puVar11 = &UNK_015ecb24;
      lVar22 = lVar6;
      if ((bRam0000000003eb5c29 & 1) == 0) {
        func_0x00f78a20(0x3d20bc0,0,0);
        bRam0000000003eb5c29 = 1;
      }
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((bRam0000000003eb5af0 & 1) == 0) {
        func_0x00f78a20(0x3d20bc0,0,0);
        func_0x00f78a20(0x3d25440);
        bRam0000000003eb5af0 = 1;
      }
      if (lVar6 == 0) {
        uVar5 = 0;
      }
      else {
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar3 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar6,0,0,0,0,in_x7,unaff_x22,uVar20,uVar21,lVar22,ppuVar23,
                                puVar11);
        uVar5 = (ulong)uVar3;
      }
      return uVar5;
    }
    puStack_20 = &stack0xfffffffffffffff0;
    lVar6 = /*TMPro.TMP_Text$$get_rectTransform*/ func_0x031adac0(*(long *)(lVar6 + 0x30),0);
    uVar16 = (ulong)_UNK_033f8500;
    uVar5 = (ulong)(uint)_UNK_033f875c;
    uVar18 = 0x41200000;
    puVar2 = &stack0xfffffffffffffff0;
    uVar20 = 0;
    uVar21 = 0;
    uVar10 = 0;
    unaff_x29 = puStack_20;
    unaff_x30 = pcStack_18;
    fVar19 = _UNK_033f875c;
  }
  else {
    lVar6 = /*TMPro.TMP_Text$$get_rectTransform*/ func_0x031adac0(*(long *)(param_1 + 0x120),0);
    uVar5 = 0x3f800000;
    uVar18 = 0;
    puVar2 = (undefined1 *)register0x00000008;
    uVar20 = 0;
    uVar21 = 0;
    uVar10 = 0;
    uVar16 = (ulong)_UNK_033f8500;
    fVar19 = _UNK_033f875c;
  }
  do {
    uVar8 = uVar21;
    uVar7 = uVar20;
    lVar22 = lVar6;
    uVar17 = (undefined4)uVar18;
    fVar14 = (float)uVar16;
    uVar12 = (undefined4)uVar5;
    uVar15 = uVar5 & 0xffffffff;
    uVar18 = uVar5 & 0xffffffff;
    *(ulong *)(puVar2 + -0x80) = CONCAT44(unaff_000051e4,unaff_s15);
    *(ulong *)(puVar2 + -0x78) = CONCAT44(unaff_000051c4,unaff_s14);
    *(ulong *)(puVar2 + -0x70) = CONCAT44(unaff_000051a4,unaff_s13);
    *(ulong *)(puVar2 + -0x68) = CONCAT44(unaff_00005184,unaff_s12);
    *(ulong *)(puVar2 + -0x60) = CONCAT44(unaff_00005164,unaff_s11);
    *(ulong *)(puVar2 + -0x58) = CONCAT44(unaff_00005144,unaff_s10);
    *(ulong *)(puVar2 + -0x50) = CONCAT44(unaff_00005124,unaff_s9);
    *(ulong *)(puVar2 + -0x48) = CONCAT44(unaff_00005104,unaff_s8);
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(code **)(puVar2 + -8) = unaff_x30;
    unaff_x29 = puVar2 + -0x10;
    unaff_00005124 = 0;
    unaff_00005104 = 0;
    unaff_00005164 = 0;
    unaff_00005184 = 0;
    unaff_000051a4 = 0;
    unaff_00005144 = 0;
    unaff_000051c4 = 0;
    unaff_000051e4 = 0;
    unaff_x24 = 0x3d26a48;
    uVar21 = uVar8;
    uVar9 = uVar10;
    fVar13 = fVar14;
    if ((bRam0000000003eb4867 & 1) == 0) {
      func_0x00f78a20(0x3d25428);
      func_0x00f78a20(0x3d5e6e0);
      func_0x00f78a20(0x3d5e770);
      func_0x00f78a20(0x3d5e790);
      func_0x00f78a20(0x3d5e7a8);
      func_0x00f78a20(0x3d40f78);
      func_0x00f78a20(0x3d62230);
      func_0x00f78a20(0x3d62238);
      func_0x00f78a20(0x3d62240);
      func_0x00f78a20(0x3d26a48);
      bRam0000000003eb4867 = 1;
    }
    unaff_x20 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0_TypeInfo*/ uRam0000000003d26a48);
    Atlas_UI_AtlasTweenAnimations___c__DisplayClass3_0___ctor(unaff_x20,0);
    if (unaff_x20 != 0) {
      *(undefined8 *)(unaff_x20 + 0x10) = uVar7;
      *(undefined8 *)(unaff_x20 + 0x18) = uVar10;
      if (lVar22 != 0) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uVar5 & 0xffffffff,uVar5 & 0xffffffff,uVar5 & 0xffffffff,lVar22,0);
        if ((int)uVar8 == 0) {
          uVar5 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar16 & 0xffffffff,uVar16 & 0xffffffff,uVar16 & 0xffffffff,
                                  fVar19 * _UNK_033f82b8,lVar22,0);
          puVar11 = &UNK_0146f6bc;
        }
        else {
          uVar5 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar16 & 0xffffffff,uVar16 & 0xffffffff,uVar16 & 0xffffffff,fVar19
                                  ,lVar22,0);
          puVar11 = (undefined *)0x146f60c;
        }
        uVar20 = uRam0000000003d5e7a8;
        *(long *)(puVar2 + -0xa0) = unaff_x20;
        *(long *)(puVar2 + -0x98) = lVar22;
        *(undefined1 **)(puVar2 + -0x90) = unaff_x29;
        *(undefined **)(puVar2 + -0x88) = puVar11;
        if ((uVar5 != 0) && (*(char *)(uVar5 + 0xe8) != '\0')) {
          *(undefined4 *)(uVar5 + 0xb4) = 9;
          iVar4 = /*DG.Tweening.Core.Easing.EaseManager$$IsFlashEase*/ func_0x0169bba8(9,0,uVar20);
          if (iVar4 != 0) {
            fVar13 = *(float *)(uVar5 + 0xc0);
            fVar19 = -fVar13;
            if (fVar13 != INFINITY) {
              fVar19 = fVar13;
            }
            *(float *)(uVar5 + 0xc0) = (float)(int)fVar19;
          }
          *(undefined8 *)(uVar5 + 0xb8) = 0;
        }
        return uVar5;
      }
    }
    unaff_x30 = Atlas_UI_AtlasTweenAnimations__SpinZoom;
    lVar6 = func_0x00f78af4();
    puVar2 = puVar2 + -0x80;
    uVar20 = extraout_x1;
    uVar10 = uVar9;
    unaff_x19 = lVar22;
    unaff_x21 = uVar8;
    unaff_x22 = uVar10;
    unaff_x23 = uVar7;
    uVar5 = extraout_d0;
    uVar16 = uVar15;
    fVar19 = fVar13;
    unaff_s8 = uVar17;
    unaff_s9 = fVar19;
    unaff_s10 = uVar12;
    unaff_s11 = fVar14;
    unaff_s12 = fVar14;
    unaff_s13 = fVar14;
    unaff_s14 = uVar12;
    unaff_s15 = uVar12;
  } while( true );
}



// ============================================================
// RVA: 0x15eca70 | Atlas.UI.LeaderboardEntryBehaviour.PlayChangePositionTween
// ============================================================

/* WARNING: Possible PIC construction at 0x0146f608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f6b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0146f78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecb5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecc4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015eccf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecd18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec540) */
/* WARNING: Removing unreachable block (ram,0x015ec290) */
/* WARNING: Removing unreachable block (ram,0x015ec184) */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ecec8) */
/* WARNING: Removing unreachable block (ram,0x015eced0) */
/* WARNING: Removing unreachable block (ram,0x015ecea8) */
/* WARNING: Removing unreachable block (ram,0x015eceb0) */
/* WARNING: Removing unreachable block (ram,0x015ecebc) */
/* WARNING: Removing unreachable block (ram,0x015ece68) */
/* WARNING: Removing unreachable block (ram,0x015ece70) */
/* WARNING: Removing unreachable block (ram,0x015ece48) */
/* WARNING: Removing unreachable block (ram,0x015ece50) */
/* WARNING: Removing unreachable block (ram,0x015ece5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd1c) */
/* WARNING: Removing unreachable block (ram,0x015eccf4) */
/* WARNING: Removing unreachable block (ram,0x015ecd20) */
/* WARNING: Removing unreachable block (ram,0x015ecd50) */
/* WARNING: Removing unreachable block (ram,0x015ecd28) */
/* WARNING: Removing unreachable block (ram,0x015ecd30) */
/* WARNING: Removing unreachable block (ram,0x015ecd3c) */
/* WARNING: Removing unreachable block (ram,0x015eccfc) */
/* WARNING: Removing unreachable block (ram,0x015ecd04) */
/* WARNING: Removing unreachable block (ram,0x015ecd10) */
/* WARNING: Removing unreachable block (ram,0x015ecb24) */
/* WARNING: Removing unreachable block (ram,0x015ecb34) */
/* WARNING: Removing unreachable block (ram,0x015ecb3c) */
/* WARNING: Removing unreachable block (ram,0x015ecb40) */
/* WARNING: Removing unreachable block (ram,0x015ecb60) */
/* WARNING: Removing unreachable block (ram,0x015ecb70) */
/* WARNING: Removing unreachable block (ram,0x015ecb78) */
/* WARNING: Removing unreachable block (ram,0x015ecb7c) */
/* WARNING: Removing unreachable block (ram,0x015ecbb0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc8) */
/* WARNING: Removing unreachable block (ram,0x015ecbcc) */
/* WARNING: Removing unreachable block (ram,0x015ecc00) */
/* WARNING: Removing unreachable block (ram,0x015ecc10) */
/* WARNING: Removing unreachable block (ram,0x015ecc18) */
/* WARNING: Removing unreachable block (ram,0x015ecc1c) */
/* WARNING: Removing unreachable block (ram,0x015ecc50) */
/* WARNING: Removing unreachable block (ram,0x015ecc60) */
/* WARNING: Removing unreachable block (ram,0x015ecc68) */
/* WARNING: Removing unreachable block (ram,0x015ecc6c) */
/* WARNING: Removing unreachable block (ram,0x015eccac) */
/* WARNING: Removing unreachable block (ram,0x015ecc7c) */
/* WARNING: Removing unreachable block (ram,0x015ecc84) */
/* WARNING: Removing unreachable block (ram,0x015ecc2c) */
/* WARNING: Removing unreachable block (ram,0x015ecc34) */
/* WARNING: Removing unreachable block (ram,0x015ecbdc) */
/* WARNING: Removing unreachable block (ram,0x015ecbe4) */
/* WARNING: Removing unreachable block (ram,0x015ecb8c) */
/* WARNING: Removing unreachable block (ram,0x015eccbc) */
/* WARNING: Removing unreachable block (ram,0x015eccd8) */
/* WARNING: Removing unreachable block (ram,0x015ecd5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd74) */
/* WARNING: Removing unreachable block (ram,0x015ecd98) */
/* WARNING: Removing unreachable block (ram,0x015ecdc8) */
/* WARNING: Removing unreachable block (ram,0x015ecddc) */
/* WARNING: Removing unreachable block (ram,0x015ece00) */
/* WARNING: Removing unreachable block (ram,0x015ece08) */
/* WARNING: Removing unreachable block (ram,0x015ece0c) */
/* WARNING: Removing unreachable block (ram,0x015ece20) */
/* WARNING: Removing unreachable block (ram,0x015ece7c) */
/* WARNING: Removing unreachable block (ram,0x015ecedc) */
/* WARNING: Removing unreachable block (ram,0x015ecee4) */
/* WARNING: Removing unreachable block (ram,0x015ebd40) */
/* WARNING: Removing unreachable block (ram,0x015ebd5c) */
/* WARNING: Removing unreachable block (ram,0x015ebd68) */
/* WARNING: Removing unreachable block (ram,0x015ebdd4) */
/* WARNING: Removing unreachable block (ram,0x015ebe04) */
/* WARNING: Removing unreachable block (ram,0x015ebe18) */
/* WARNING: Removing unreachable block (ram,0x015ebe28) */
/* WARNING: Removing unreachable block (ram,0x015ebe30) */
/* WARNING: Removing unreachable block (ram,0x015ebe34) */
/* WARNING: Removing unreachable block (ram,0x015ebe70) */
/* WARNING: Removing unreachable block (ram,0x015ebe44) */
/* WARNING: Removing unreachable block (ram,0x015ebe4c) */
/* WARNING: Removing unreachable block (ram,0x015ebe80) */
/* WARNING: Removing unreachable block (ram,0x015ebeb4) */
/* WARNING: Removing unreachable block (ram,0x015ebed4) */
/* WARNING: Removing unreachable block (ram,0x015ebee4) */
/* WARNING: Removing unreachable block (ram,0x015ebeec) */
/* WARNING: Removing unreachable block (ram,0x015ebef0) */
/* WARNING: Removing unreachable block (ram,0x015ebf00) */
/* WARNING: Removing unreachable block (ram,0x015ebf58) */
/* WARNING: Removing unreachable block (ram,0x015ebf94) */
/* WARNING: Removing unreachable block (ram,0x015ebfa8) */
/* WARNING: Removing unreachable block (ram,0x015ebff0) */
/* WARNING: Removing unreachable block (ram,0x015ebfb0) */
/* WARNING: Removing unreachable block (ram,0x015ebff4) */
/* WARNING: Removing unreachable block (ram,0x015ec044) */
/* WARNING: Removing unreachable block (ram,0x015ec0ac) */
/* WARNING: Removing unreachable block (ram,0x015ec0c4) */
/* WARNING: Removing unreachable block (ram,0x015ec1b0) */
/* WARNING: Removing unreachable block (ram,0x015ec1f0) */
/* WARNING: Removing unreachable block (ram,0x015ec228) */
/* WARNING: Removing unreachable block (ram,0x015ec2b4) */
/* WARNING: Removing unreachable block (ram,0x015ec2f8) */
/* WARNING: Removing unreachable block (ram,0x015ec318) */
/* WARNING: Removing unreachable block (ram,0x015ec328) */
/* WARNING: Removing unreachable block (ram,0x015ec330) */
/* WARNING: Removing unreachable block (ram,0x015ec334) */
/* WARNING: Removing unreachable block (ram,0x015ec38c) */
/* WARNING: Removing unreachable block (ram,0x015ec344) */
/* WARNING: Removing unreachable block (ram,0x015ec3a8) */
/* WARNING: Removing unreachable block (ram,0x015ec3e4) */
/* WARNING: Removing unreachable block (ram,0x015ec3f8) */
/* WARNING: Removing unreachable block (ram,0x015ec440) */
/* WARNING: Removing unreachable block (ram,0x015ec47c) */
/* WARNING: Removing unreachable block (ram,0x015ec4c0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d8) */
/* WARNING: Removing unreachable block (ram,0x015ec4dc) */
/* WARNING: Removing unreachable block (ram,0x015ec564) */
/* WARNING: Removing unreachable block (ram,0x015ec4ec) */
/* WARNING: Removing unreachable block (ram,0x015ec57c) */
/* WARNING: Removing unreachable block (ram,0x015ec5c8) */
/* WARNING: Removing unreachable block (ram,0x015ec624) */
/* WARNING: Removing unreachable block (ram,0x015ec634) */
/* WARNING: Removing unreachable block (ram,0x015ec63c) */
/* WARNING: Removing unreachable block (ram,0x015ec640) */
/* WARNING: Removing unreachable block (ram,0x015ec704) */
/* WARNING: Removing unreachable block (ram,0x015ec650) */
/* WARNING: Removing unreachable block (ram,0x015ec4f4) */
/* WARNING: Removing unreachable block (ram,0x015ec400) */
/* WARNING: Removing unreachable block (ram,0x015ec34c) */
/* WARNING: Removing unreachable block (ram,0x015ec230) */
/* WARNING: Removing unreachable block (ram,0x015ec0cc) */
/* WARNING: Removing unreachable block (ram,0x015ec134) */
/* WARNING: Removing unreachable block (ram,0x015ec13c) */
/* WARNING: Removing unreachable block (ram,0x015ec140) */
/* WARNING: Removing unreachable block (ram,0x018eee1c) */
/* WARNING: Removing unreachable block (ram,0x018eee40) */
/* WARNING: Removing unreachable block (ram,0x018eee6c) */
/* WARNING: Removing unreachable block (ram,0x018eee70) */
/* WARNING: Removing unreachable block (ram,0x018eee78) */
/* WARNING: Removing unreachable block (ram,0x018eee8c) */
/* WARNING: Removing unreachable block (ram,0x018eee94) */
/* WARNING: Removing unreachable block (ram,0x018eee98) */
/* WARNING: Removing unreachable block (ram,0x018eeea4) */
/* WARNING: Removing unreachable block (ram,0x018eeed0) */
/* WARNING: Removing unreachable block (ram,0x018eeed8) */
/* WARNING: Removing unreachable block (ram,0x018eeedc) */
/* WARNING: Removing unreachable block (ram,0x018eef04) */
/* WARNING: Removing unreachable block (ram,0x018eef08) */
/* WARNING: Removing unreachable block (ram,0x018eeef0) */
/* WARNING: Removing unreachable block (ram,0x018eef34) */
/* WARNING: Removing unreachable block (ram,0x018eef5c) */
/* WARNING: Removing unreachable block (ram,0x018eef7c) */
/* WARNING: Removing unreachable block (ram,0x018eef80) */
/* WARNING: Removing unreachable block (ram,0x018eef88) */
/* WARNING: Removing unreachable block (ram,0x018eef9c) */
/* WARNING: Removing unreachable block (ram,0x018eefa4) */
/* WARNING: Removing unreachable block (ram,0x018eefac) */
/* WARNING: Removing unreachable block (ram,0x018eefc8) */
/* WARNING: Removing unreachable block (ram,0x018eefd0) */
/* WARNING: Removing unreachable block (ram,0x018eefd4) */
/* WARNING: Removing unreachable block (ram,0x018eefec) */
/* WARNING: Removing unreachable block (ram,0x018eeef4) */
/* WARNING: Removing unreachable block (ram,0x018eef18) */
/* WARNING: Removing unreachable block (ram,0x018eef1c) */
/* WARNING: Removing unreachable block (ram,0x018eef20) */
/* WARNING: Removing unreachable block (ram,0x015ebf2c) */
/* WARNING: Removing unreachable block (ram,0x015ebf44) */
/* WARNING: Removing unreachable block (ram,0x015ebe58) */
/* WARNING: Removing unreachable block (ram,0x015ebda4) */
/* WARNING: Removing unreachable block (ram,0x02f8b024) */
/* WARNING: Removing unreachable block (ram,0x02f8b034) */
/* WARNING: Removing unreachable block (ram,0x02f8b038) */
/* WARNING: Removing unreachable block (ram,0x02f8b050) */
/* WARNING: Removing unreachable block (ram,0x02f8b03c) */
/* WARNING: Removing unreachable block (ram,0x015ece88) */
/* WARNING: Removing unreachable block (ram,0x015ece90) */
/* WARNING: Removing unreachable block (ram,0x015ece9c) */
/* WARNING: Removing unreachable block (ram,0x015ece28) */
/* WARNING: Removing unreachable block (ram,0x015ece30) */
/* WARNING: Removing unreachable block (ram,0x015ecf10) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x015ece3c) */
/* WARNING: Removing unreachable block (ram,0x015ecd84) */
/* WARNING: Removing unreachable block (ram,0x015ecce8) */
/* WARNING: Removing unreachable block (ram,0x0322ef1c) */
/* WARNING: Removing unreachable block (ram,0x0322ef40) */
/* WARNING: Removing unreachable block (ram,0x0322ef54) */
/* WARNING: Removing unreachable block (ram,0x015ecb94) */
/* WARNING: Removing unreachable block (ram,0x015ecb50) */
/* WARNING: Removing unreachable block (ram,0x0146f744) */
/* WARNING: Removing unreachable block (ram,0x0146f790) */
/* WARNING: Removing unreachable block (ram,0x0146f748) */
/* WARNING: Removing unreachable block (ram,0x0146f6bc) */
/* WARNING: Removing unreachable block (ram,0x0146f708) */
/* WARNING: Removing unreachable block (ram,0x0146f6c0) */
/* WARNING: Removing unreachable block (ram,0x0146f654) */
/* WARNING: Removing unreachable block (ram,0x0146f7b0) */
/* WARNING: Removing unreachable block (ram,0x0146f7cc) */
/* WARNING: Removing unreachable block (ram,0x0146f60c) */
/* WARNING: Removing unreachable block (ram,0x015ec6ac) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_LeaderboardEntryBehaviour__PlayChangePositionTween(long param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_x7;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *puVar10;
  code *unaff_x30;
  undefined4 uVar11;
  float fVar12;
  ulong extraout_d0;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar16;
  ulong uVar17;
  float fVar18;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  float unaff_s9;
  undefined4 unaff_00005124;
  undefined4 unaff_s10;
  undefined4 unaff_00005144;
  float unaff_s11;
  undefined4 unaff_00005164;
  float unaff_s12;
  undefined4 unaff_00005184;
  float unaff_s13;
  undefined4 unaff_000051a4;
  undefined4 unaff_s14;
  undefined4 unaff_000051c4;
  undefined4 unaff_s15;
  undefined4 unaff_000051e4;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined1 **ppuVar22;
  undefined1 *puStack_20;
  undefined *puStack_18;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    lVar5 = func_0x00f78af4();
    puStack_18 = &Atlas_UI_LeaderboardEntryBehaviour__OnDestroy;
    ppuVar22 = &puStack_20;
    puStack_20 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb540c & 1) == 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      func_0x00f78a20(0x3d53528);
      func_0x00f78a20(0x3d578e0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb540c = 1;
    }
    uVar19 = 0x3d23990;
    uVar20 = 0x3eb5000;
    puVar10 = &UNK_015ecb24;
    lVar21 = lVar5;
    if ((bRam0000000003eb5c29 & 1) == 0) {
      func_0x00f78a20(0x3d20bc0,0,0);
      bRam0000000003eb5c29 = 1;
    }
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if ((bRam0000000003eb5af0 & 1) == 0) {
      func_0x00f78a20(0x3d20bc0,0,0);
      func_0x00f78a20(0x3d25440);
      bRam0000000003eb5af0 = 1;
    }
    if (lVar5 == 0) {
      uVar4 = 0;
    }
    else {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar2 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,lVar5,0,0,0,0,in_x7,unaff_x22,uVar19,uVar20,lVar21,ppuVar22,
                              puVar10);
      uVar4 = (ulong)uVar2;
    }
    return uVar4;
  }
  lVar5 = /*TMPro.TMP_Text$$get_rectTransform*/ func_0x031adac0(*(long *)(param_1 + 0x30),0);
  uVar4 = (ulong)(uint)_UNK_033f875c;
  uVar17 = 0x41200000;
  puVar1 = (undefined1 *)register0x00000008;
  uVar19 = 0;
  uVar20 = 0;
  uVar9 = 0;
  uVar14 = (ulong)_UNK_033f8500;
  fVar18 = _UNK_033f875c;
  do {
    uVar7 = uVar20;
    uVar6 = uVar19;
    lVar21 = lVar5;
    uVar16 = (undefined4)uVar17;
    fVar13 = (float)uVar14;
    uVar11 = (undefined4)uVar4;
    uVar15 = uVar4 & 0xffffffff;
    uVar17 = uVar4 & 0xffffffff;
    *(ulong *)(puVar1 + -0x80) = CONCAT44(unaff_000051e4,unaff_s15);
    *(ulong *)(puVar1 + -0x78) = CONCAT44(unaff_000051c4,unaff_s14);
    *(ulong *)(puVar1 + -0x70) = CONCAT44(unaff_000051a4,unaff_s13);
    *(ulong *)(puVar1 + -0x68) = CONCAT44(unaff_00005184,unaff_s12);
    *(ulong *)(puVar1 + -0x60) = CONCAT44(unaff_00005164,unaff_s11);
    *(ulong *)(puVar1 + -0x58) = CONCAT44(unaff_00005144,unaff_s10);
    *(ulong *)(puVar1 + -0x50) = CONCAT44(unaff_00005124,unaff_s9);
    *(ulong *)(puVar1 + -0x48) = CONCAT44(unaff_00005104,unaff_s8);
    *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(long *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(code **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    unaff_00005124 = 0;
    unaff_00005104 = 0;
    unaff_00005164 = 0;
    unaff_00005184 = 0;
    unaff_000051a4 = 0;
    unaff_00005144 = 0;
    unaff_000051c4 = 0;
    unaff_000051e4 = 0;
    unaff_x24 = 0x3d26a48;
    uVar20 = uVar7;
    uVar8 = uVar9;
    fVar12 = fVar13;
    if ((bRam0000000003eb4867 & 1) == 0) {
      func_0x00f78a20(0x3d25428);
      func_0x00f78a20(0x3d5e6e0);
      func_0x00f78a20(0x3d5e770);
      func_0x00f78a20(0x3d5e790);
      func_0x00f78a20(0x3d5e7a8);
      func_0x00f78a20(0x3d40f78);
      func_0x00f78a20(0x3d62230);
      func_0x00f78a20(0x3d62238);
      func_0x00f78a20(0x3d62240);
      func_0x00f78a20(0x3d26a48);
      bRam0000000003eb4867 = 1;
    }
    unaff_x20 = func_0x00f78aec(/*Atlas.UI.AtlasTweenAnimations.<>c__DisplayClass3_0_TypeInfo*/ uRam0000000003d26a48);
    Atlas_UI_AtlasTweenAnimations___c__DisplayClass3_0___ctor(unaff_x20,0);
    if (unaff_x20 != 0) {
      *(undefined8 *)(unaff_x20 + 0x10) = uVar6;
      *(undefined8 *)(unaff_x20 + 0x18) = uVar9;
      if (lVar21 != 0) {
        /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(uVar4 & 0xffffffff,uVar4 & 0xffffffff,uVar4 & 0xffffffff,lVar21,0);
        if ((int)uVar7 == 0) {
          uVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar14 & 0xffffffff,uVar14 & 0xffffffff,uVar14 & 0xffffffff,
                                  fVar18 * _UNK_033f82b8,lVar21,0);
          puVar10 = &UNK_0146f6bc;
        }
        else {
          uVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3d90(uVar14 & 0xffffffff,uVar14 & 0xffffffff,uVar14 & 0xffffffff,fVar18
                                  ,lVar21,0);
          puVar10 = (undefined *)0x146f60c;
        }
        uVar19 = uRam0000000003d5e7a8;
        *(long *)(puVar1 + -0xa0) = unaff_x20;
        *(long *)(puVar1 + -0x98) = lVar21;
        *(undefined1 **)(puVar1 + -0x90) = unaff_x29;
        *(undefined **)(puVar1 + -0x88) = puVar10;
        if ((uVar4 != 0) && (*(char *)(uVar4 + 0xe8) != '\0')) {
          *(undefined4 *)(uVar4 + 0xb4) = 9;
          iVar3 = /*DG.Tweening.Core.Easing.EaseManager$$IsFlashEase*/ func_0x0169bba8(9,0,uVar19);
          if (iVar3 != 0) {
            fVar12 = *(float *)(uVar4 + 0xc0);
            fVar18 = -fVar12;
            if (fVar12 != INFINITY) {
              fVar18 = fVar12;
            }
            *(float *)(uVar4 + 0xc0) = (float)(int)fVar18;
          }
          *(undefined8 *)(uVar4 + 0xb8) = 0;
        }
        return uVar4;
      }
    }
    unaff_x30 = Atlas_UI_AtlasTweenAnimations__SpinZoom;
    lVar5 = func_0x00f78af4();
    puVar1 = puVar1 + -0x80;
    uVar19 = extraout_x1;
    uVar9 = uVar8;
    unaff_x19 = lVar21;
    unaff_x21 = uVar7;
    unaff_x22 = uVar9;
    unaff_x23 = uVar6;
    uVar4 = extraout_d0;
    uVar14 = uVar15;
    fVar18 = fVar12;
    unaff_s8 = uVar16;
    unaff_s9 = fVar18;
    unaff_s10 = uVar11;
    unaff_s11 = fVar13;
    unaff_s12 = fVar13;
    unaff_s13 = fVar13;
    unaff_s14 = uVar11;
    unaff_s15 = uVar11;
  } while( true );
}



// ============================================================
// RVA: 0x15ecabc | Atlas.UI.LeaderboardEntryBehaviour.OnDestroy
// ============================================================

/* WARNING: Possible PIC construction at 0x015ecb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecb5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecc4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015eccf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecd18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ecec8) */
/* WARNING: Removing unreachable block (ram,0x015eced0) */
/* WARNING: Removing unreachable block (ram,0x015ecea8) */
/* WARNING: Removing unreachable block (ram,0x015eceb0) */
/* WARNING: Removing unreachable block (ram,0x015ecebc) */
/* WARNING: Removing unreachable block (ram,0x015ece68) */
/* WARNING: Removing unreachable block (ram,0x015ece70) */
/* WARNING: Removing unreachable block (ram,0x015ece48) */
/* WARNING: Removing unreachable block (ram,0x015ece50) */
/* WARNING: Removing unreachable block (ram,0x015ece5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd1c) */
/* WARNING: Removing unreachable block (ram,0x015eccf4) */
/* WARNING: Removing unreachable block (ram,0x015ecd20) */
/* WARNING: Removing unreachable block (ram,0x015ecd50) */
/* WARNING: Removing unreachable block (ram,0x015ecd28) */
/* WARNING: Removing unreachable block (ram,0x015ecd30) */
/* WARNING: Removing unreachable block (ram,0x015ecd3c) */
/* WARNING: Removing unreachable block (ram,0x015eccfc) */
/* WARNING: Removing unreachable block (ram,0x015ecd04) */
/* WARNING: Removing unreachable block (ram,0x015ecd10) */
/* WARNING: Removing unreachable block (ram,0x015ecb24) */
/* WARNING: Removing unreachable block (ram,0x015ecb34) */
/* WARNING: Removing unreachable block (ram,0x015ecb3c) */
/* WARNING: Removing unreachable block (ram,0x015ecb40) */
/* WARNING: Removing unreachable block (ram,0x015ecb60) */
/* WARNING: Removing unreachable block (ram,0x015ecb70) */
/* WARNING: Removing unreachable block (ram,0x015ecb78) */
/* WARNING: Removing unreachable block (ram,0x015ecb7c) */
/* WARNING: Removing unreachable block (ram,0x015ecbb0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc8) */
/* WARNING: Removing unreachable block (ram,0x015ecbcc) */
/* WARNING: Removing unreachable block (ram,0x015ecc00) */
/* WARNING: Removing unreachable block (ram,0x015ecc10) */
/* WARNING: Removing unreachable block (ram,0x015ecc18) */
/* WARNING: Removing unreachable block (ram,0x015ecc1c) */
/* WARNING: Removing unreachable block (ram,0x015ecc50) */
/* WARNING: Removing unreachable block (ram,0x015ecc60) */
/* WARNING: Removing unreachable block (ram,0x015ecc68) */
/* WARNING: Removing unreachable block (ram,0x015ecc6c) */
/* WARNING: Removing unreachable block (ram,0x015eccac) */
/* WARNING: Removing unreachable block (ram,0x015ecc7c) */
/* WARNING: Removing unreachable block (ram,0x015ecc84) */
/* WARNING: Removing unreachable block (ram,0x015ecc2c) */
/* WARNING: Removing unreachable block (ram,0x015ecc34) */
/* WARNING: Removing unreachable block (ram,0x015ecbdc) */
/* WARNING: Removing unreachable block (ram,0x015ecbe4) */
/* WARNING: Removing unreachable block (ram,0x015ecb8c) */
/* WARNING: Removing unreachable block (ram,0x015eccbc) */
/* WARNING: Removing unreachable block (ram,0x015eccd8) */
/* WARNING: Removing unreachable block (ram,0x015ecd5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd74) */
/* WARNING: Removing unreachable block (ram,0x015ecd98) */
/* WARNING: Removing unreachable block (ram,0x015ecdc8) */
/* WARNING: Removing unreachable block (ram,0x015ecddc) */
/* WARNING: Removing unreachable block (ram,0x015ece00) */
/* WARNING: Removing unreachable block (ram,0x015ece08) */
/* WARNING: Removing unreachable block (ram,0x015ece0c) */
/* WARNING: Removing unreachable block (ram,0x015ece20) */
/* WARNING: Removing unreachable block (ram,0x015ece7c) */
/* WARNING: Removing unreachable block (ram,0x015ecedc) */
/* WARNING: Removing unreachable block (ram,0x015ecee4) */
/* WARNING: Removing unreachable block (ram,0x015ebd40) */
/* WARNING: Removing unreachable block (ram,0x015ebd5c) */
/* WARNING: Removing unreachable block (ram,0x015ebd68) */
/* WARNING: Removing unreachable block (ram,0x015ebdd4) */
/* WARNING: Removing unreachable block (ram,0x015ebe04) */
/* WARNING: Removing unreachable block (ram,0x015ebe18) */
/* WARNING: Removing unreachable block (ram,0x015ebe28) */
/* WARNING: Removing unreachable block (ram,0x015ebe30) */
/* WARNING: Removing unreachable block (ram,0x015ebe34) */
/* WARNING: Removing unreachable block (ram,0x015ebe70) */
/* WARNING: Removing unreachable block (ram,0x015ebe44) */
/* WARNING: Removing unreachable block (ram,0x015ebe4c) */
/* WARNING: Removing unreachable block (ram,0x015ebe80) */
/* WARNING: Removing unreachable block (ram,0x015ebeb4) */
/* WARNING: Removing unreachable block (ram,0x015ebed4) */
/* WARNING: Removing unreachable block (ram,0x015ebee4) */
/* WARNING: Removing unreachable block (ram,0x015ebeec) */
/* WARNING: Removing unreachable block (ram,0x015ebef0) */
/* WARNING: Removing unreachable block (ram,0x015ebf00) */
/* WARNING: Removing unreachable block (ram,0x015ebf58) */
/* WARNING: Removing unreachable block (ram,0x015ebf94) */
/* WARNING: Removing unreachable block (ram,0x015ebfa8) */
/* WARNING: Removing unreachable block (ram,0x015ebff0) */
/* WARNING: Removing unreachable block (ram,0x015ebfb0) */
/* WARNING: Removing unreachable block (ram,0x015ebff4) */
/* WARNING: Removing unreachable block (ram,0x015ec044) */
/* WARNING: Removing unreachable block (ram,0x015ec0ac) */
/* WARNING: Removing unreachable block (ram,0x015ec0c4) */
/* WARNING: Removing unreachable block (ram,0x015ec1b0) */
/* WARNING: Removing unreachable block (ram,0x015ec1f0) */
/* WARNING: Removing unreachable block (ram,0x015ec228) */
/* WARNING: Removing unreachable block (ram,0x015ec2b4) */
/* WARNING: Removing unreachable block (ram,0x015ec2f8) */
/* WARNING: Removing unreachable block (ram,0x015ec318) */
/* WARNING: Removing unreachable block (ram,0x015ec328) */
/* WARNING: Removing unreachable block (ram,0x015ec330) */
/* WARNING: Removing unreachable block (ram,0x015ec334) */
/* WARNING: Removing unreachable block (ram,0x015ec38c) */
/* WARNING: Removing unreachable block (ram,0x015ec344) */
/* WARNING: Removing unreachable block (ram,0x015ec3a8) */
/* WARNING: Removing unreachable block (ram,0x015ec3e4) */
/* WARNING: Removing unreachable block (ram,0x015ec3f8) */
/* WARNING: Removing unreachable block (ram,0x015ec440) */
/* WARNING: Removing unreachable block (ram,0x015ec47c) */
/* WARNING: Removing unreachable block (ram,0x015ec4c0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d8) */
/* WARNING: Removing unreachable block (ram,0x015ec4dc) */
/* WARNING: Removing unreachable block (ram,0x015ec564) */
/* WARNING: Removing unreachable block (ram,0x015ec4ec) */
/* WARNING: Removing unreachable block (ram,0x015ec57c) */
/* WARNING: Removing unreachable block (ram,0x015ec5c8) */
/* WARNING: Removing unreachable block (ram,0x015ec624) */
/* WARNING: Removing unreachable block (ram,0x015ec634) */
/* WARNING: Removing unreachable block (ram,0x015ec63c) */
/* WARNING: Removing unreachable block (ram,0x015ec640) */
/* WARNING: Removing unreachable block (ram,0x015ec704) */
/* WARNING: Removing unreachable block (ram,0x015ec650) */
/* WARNING: Removing unreachable block (ram,0x015ec4f4) */
/* WARNING: Removing unreachable block (ram,0x015ec400) */
/* WARNING: Removing unreachable block (ram,0x015ec34c) */
/* WARNING: Removing unreachable block (ram,0x015ec230) */
/* WARNING: Removing unreachable block (ram,0x015ec0cc) */
/* WARNING: Removing unreachable block (ram,0x015ec134) */
/* WARNING: Removing unreachable block (ram,0x015ec13c) */
/* WARNING: Removing unreachable block (ram,0x015ec140) */
/* WARNING: Removing unreachable block (ram,0x018eee1c) */
/* WARNING: Removing unreachable block (ram,0x018eee40) */
/* WARNING: Removing unreachable block (ram,0x018eee6c) */
/* WARNING: Removing unreachable block (ram,0x018eee70) */
/* WARNING: Removing unreachable block (ram,0x018eee78) */
/* WARNING: Removing unreachable block (ram,0x018eee8c) */
/* WARNING: Removing unreachable block (ram,0x018eee94) */
/* WARNING: Removing unreachable block (ram,0x018eee98) */
/* WARNING: Removing unreachable block (ram,0x018eeea4) */
/* WARNING: Removing unreachable block (ram,0x018eeed0) */
/* WARNING: Removing unreachable block (ram,0x018eeed8) */
/* WARNING: Removing unreachable block (ram,0x018eeedc) */
/* WARNING: Removing unreachable block (ram,0x018eef04) */
/* WARNING: Removing unreachable block (ram,0x018eef08) */
/* WARNING: Removing unreachable block (ram,0x018eeef0) */
/* WARNING: Removing unreachable block (ram,0x018eef34) */
/* WARNING: Removing unreachable block (ram,0x018eef5c) */
/* WARNING: Removing unreachable block (ram,0x018eef7c) */
/* WARNING: Removing unreachable block (ram,0x018eef80) */
/* WARNING: Removing unreachable block (ram,0x018eef88) */
/* WARNING: Removing unreachable block (ram,0x018eef9c) */
/* WARNING: Removing unreachable block (ram,0x018eefa4) */
/* WARNING: Removing unreachable block (ram,0x018eefac) */
/* WARNING: Removing unreachable block (ram,0x018eefc8) */
/* WARNING: Removing unreachable block (ram,0x018eefd0) */
/* WARNING: Removing unreachable block (ram,0x018eefd4) */
/* WARNING: Removing unreachable block (ram,0x018eefec) */
/* WARNING: Removing unreachable block (ram,0x018eeef4) */
/* WARNING: Removing unreachable block (ram,0x018eef18) */
/* WARNING: Removing unreachable block (ram,0x018eef1c) */
/* WARNING: Removing unreachable block (ram,0x018eef20) */
/* WARNING: Removing unreachable block (ram,0x015ebf2c) */
/* WARNING: Removing unreachable block (ram,0x015ebf44) */
/* WARNING: Removing unreachable block (ram,0x015ebe58) */
/* WARNING: Removing unreachable block (ram,0x015ebda4) */
/* WARNING: Removing unreachable block (ram,0x02f8b024) */
/* WARNING: Removing unreachable block (ram,0x02f8b034) */
/* WARNING: Removing unreachable block (ram,0x02f8b038) */
/* WARNING: Removing unreachable block (ram,0x02f8b050) */
/* WARNING: Removing unreachable block (ram,0x02f8b03c) */
/* WARNING: Removing unreachable block (ram,0x015ece88) */
/* WARNING: Removing unreachable block (ram,0x015ece90) */
/* WARNING: Removing unreachable block (ram,0x015ece9c) */
/* WARNING: Removing unreachable block (ram,0x015ece28) */
/* WARNING: Removing unreachable block (ram,0x015ece30) */
/* WARNING: Removing unreachable block (ram,0x015ecf10) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x015ece3c) */
/* WARNING: Removing unreachable block (ram,0x015ecd84) */
/* WARNING: Removing unreachable block (ram,0x015ecce8) */
/* WARNING: Removing unreachable block (ram,0x0322ef1c) */
/* WARNING: Removing unreachable block (ram,0x0322ef40) */
/* WARNING: Removing unreachable block (ram,0x0322ef54) */
/* WARNING: Removing unreachable block (ram,0x015ecb94) */
/* WARNING: Removing unreachable block (ram,0x015ecb50) */
/* WARNING: Removing unreachable block (ram,0x015ec6b8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

undefined4 Atlas_UI_LeaderboardEntryBehaviour__OnDestroy(long param_1)

{
  undefined4 uVar1;
  undefined8 in_x7;
  undefined8 unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  
  puVar5 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb540c & 1) == 0) {
    func_0x00f78a20(0x3d53528);
    func_0x00f78a20(0x3d578e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb540c = 1;
  }
  uVar2 = 0x3d23990;
  uVar3 = 0x3eb5000;
  puVar6 = &UNK_015ecb24;
  lVar4 = param_1;
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,param_1,0,0,0,0,in_x7,unaff_x22,uVar2,uVar3,lVar4,puVar5,puVar6);
  }
  return uVar1;
}



// ============================================================
// RVA: 0x15ecac0 | Atlas.UI.LeaderboardEntryBehaviour.KillTweens
// ============================================================

/* WARNING: Possible PIC construction at 0x015ecb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecb5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecbfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecc4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015eccf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecd18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ecec8) */
/* WARNING: Removing unreachable block (ram,0x015eced0) */
/* WARNING: Removing unreachable block (ram,0x015ecea8) */
/* WARNING: Removing unreachable block (ram,0x015eceb0) */
/* WARNING: Removing unreachable block (ram,0x015ecebc) */
/* WARNING: Removing unreachable block (ram,0x015ece68) */
/* WARNING: Removing unreachable block (ram,0x015ece70) */
/* WARNING: Removing unreachable block (ram,0x015ece48) */
/* WARNING: Removing unreachable block (ram,0x015ece50) */
/* WARNING: Removing unreachable block (ram,0x015ece5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd1c) */
/* WARNING: Removing unreachable block (ram,0x015eccf4) */
/* WARNING: Removing unreachable block (ram,0x015ecd20) */
/* WARNING: Removing unreachable block (ram,0x015ecd50) */
/* WARNING: Removing unreachable block (ram,0x015ecd28) */
/* WARNING: Removing unreachable block (ram,0x015ecd30) */
/* WARNING: Removing unreachable block (ram,0x015ecd3c) */
/* WARNING: Removing unreachable block (ram,0x015eccfc) */
/* WARNING: Removing unreachable block (ram,0x015ecd04) */
/* WARNING: Removing unreachable block (ram,0x015ecd10) */
/* WARNING: Removing unreachable block (ram,0x015ecb24) */
/* WARNING: Removing unreachable block (ram,0x015ecb34) */
/* WARNING: Removing unreachable block (ram,0x015ecb3c) */
/* WARNING: Removing unreachable block (ram,0x015ecb40) */
/* WARNING: Removing unreachable block (ram,0x015ecb60) */
/* WARNING: Removing unreachable block (ram,0x015ecb70) */
/* WARNING: Removing unreachable block (ram,0x015ecb78) */
/* WARNING: Removing unreachable block (ram,0x015ecb7c) */
/* WARNING: Removing unreachable block (ram,0x015ecbb0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc0) */
/* WARNING: Removing unreachable block (ram,0x015ecbc8) */
/* WARNING: Removing unreachable block (ram,0x015ecbcc) */
/* WARNING: Removing unreachable block (ram,0x015ecc00) */
/* WARNING: Removing unreachable block (ram,0x015ecc10) */
/* WARNING: Removing unreachable block (ram,0x015ecc18) */
/* WARNING: Removing unreachable block (ram,0x015ecc1c) */
/* WARNING: Removing unreachable block (ram,0x015ecc50) */
/* WARNING: Removing unreachable block (ram,0x015ecc60) */
/* WARNING: Removing unreachable block (ram,0x015ecc68) */
/* WARNING: Removing unreachable block (ram,0x015ecc6c) */
/* WARNING: Removing unreachable block (ram,0x015eccac) */
/* WARNING: Removing unreachable block (ram,0x015ecc7c) */
/* WARNING: Removing unreachable block (ram,0x015ecc84) */
/* WARNING: Removing unreachable block (ram,0x015ecc2c) */
/* WARNING: Removing unreachable block (ram,0x015ecc34) */
/* WARNING: Removing unreachable block (ram,0x015ecbdc) */
/* WARNING: Removing unreachable block (ram,0x015ecbe4) */
/* WARNING: Removing unreachable block (ram,0x015ecb8c) */
/* WARNING: Removing unreachable block (ram,0x015eccbc) */
/* WARNING: Removing unreachable block (ram,0x015eccd8) */
/* WARNING: Removing unreachable block (ram,0x015ecd5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd74) */
/* WARNING: Removing unreachable block (ram,0x015ecd98) */
/* WARNING: Removing unreachable block (ram,0x015ecdc8) */
/* WARNING: Removing unreachable block (ram,0x015ecddc) */
/* WARNING: Removing unreachable block (ram,0x015ece00) */
/* WARNING: Removing unreachable block (ram,0x015ece08) */
/* WARNING: Removing unreachable block (ram,0x015ece0c) */
/* WARNING: Removing unreachable block (ram,0x015ece20) */
/* WARNING: Removing unreachable block (ram,0x015ece7c) */
/* WARNING: Removing unreachable block (ram,0x015ecedc) */
/* WARNING: Removing unreachable block (ram,0x015ecee4) */
/* WARNING: Removing unreachable block (ram,0x015ebd40) */
/* WARNING: Removing unreachable block (ram,0x015ebd5c) */
/* WARNING: Removing unreachable block (ram,0x015ebd68) */
/* WARNING: Removing unreachable block (ram,0x015ebdd4) */
/* WARNING: Removing unreachable block (ram,0x015ebe04) */
/* WARNING: Removing unreachable block (ram,0x015ebe18) */
/* WARNING: Removing unreachable block (ram,0x015ebe28) */
/* WARNING: Removing unreachable block (ram,0x015ebe30) */
/* WARNING: Removing unreachable block (ram,0x015ebe34) */
/* WARNING: Removing unreachable block (ram,0x015ebe70) */
/* WARNING: Removing unreachable block (ram,0x015ebe44) */
/* WARNING: Removing unreachable block (ram,0x015ebe4c) */
/* WARNING: Removing unreachable block (ram,0x015ebe80) */
/* WARNING: Removing unreachable block (ram,0x015ebeb4) */
/* WARNING: Removing unreachable block (ram,0x015ebed4) */
/* WARNING: Removing unreachable block (ram,0x015ebee4) */
/* WARNING: Removing unreachable block (ram,0x015ebeec) */
/* WARNING: Removing unreachable block (ram,0x015ebef0) */
/* WARNING: Removing unreachable block (ram,0x015ebf00) */
/* WARNING: Removing unreachable block (ram,0x015ebf58) */
/* WARNING: Removing unreachable block (ram,0x015ebf94) */
/* WARNING: Removing unreachable block (ram,0x015ebfa8) */
/* WARNING: Removing unreachable block (ram,0x015ebff0) */
/* WARNING: Removing unreachable block (ram,0x015ebfb0) */
/* WARNING: Removing unreachable block (ram,0x015ebff4) */
/* WARNING: Removing unreachable block (ram,0x015ec044) */
/* WARNING: Removing unreachable block (ram,0x015ec0ac) */
/* WARNING: Removing unreachable block (ram,0x015ec0c4) */
/* WARNING: Removing unreachable block (ram,0x015ec1b0) */
/* WARNING: Removing unreachable block (ram,0x015ec1f0) */
/* WARNING: Removing unreachable block (ram,0x015ec228) */
/* WARNING: Removing unreachable block (ram,0x015ec2b4) */
/* WARNING: Removing unreachable block (ram,0x015ec2f8) */
/* WARNING: Removing unreachable block (ram,0x015ec318) */
/* WARNING: Removing unreachable block (ram,0x015ec328) */
/* WARNING: Removing unreachable block (ram,0x015ec330) */
/* WARNING: Removing unreachable block (ram,0x015ec334) */
/* WARNING: Removing unreachable block (ram,0x015ec38c) */
/* WARNING: Removing unreachable block (ram,0x015ec344) */
/* WARNING: Removing unreachable block (ram,0x015ec3a8) */
/* WARNING: Removing unreachable block (ram,0x015ec3e4) */
/* WARNING: Removing unreachable block (ram,0x015ec3f8) */
/* WARNING: Removing unreachable block (ram,0x015ec440) */
/* WARNING: Removing unreachable block (ram,0x015ec47c) */
/* WARNING: Removing unreachable block (ram,0x015ec4c0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d0) */
/* WARNING: Removing unreachable block (ram,0x015ec4d8) */
/* WARNING: Removing unreachable block (ram,0x015ec4dc) */
/* WARNING: Removing unreachable block (ram,0x015ec564) */
/* WARNING: Removing unreachable block (ram,0x015ec4ec) */
/* WARNING: Removing unreachable block (ram,0x015ec57c) */
/* WARNING: Removing unreachable block (ram,0x015ec5c8) */
/* WARNING: Removing unreachable block (ram,0x015ec624) */
/* WARNING: Removing unreachable block (ram,0x015ec634) */
/* WARNING: Removing unreachable block (ram,0x015ec63c) */
/* WARNING: Removing unreachable block (ram,0x015ec640) */
/* WARNING: Removing unreachable block (ram,0x015ec704) */
/* WARNING: Removing unreachable block (ram,0x015ec650) */
/* WARNING: Removing unreachable block (ram,0x015ec4f4) */
/* WARNING: Removing unreachable block (ram,0x015ec400) */
/* WARNING: Removing unreachable block (ram,0x015ec34c) */
/* WARNING: Removing unreachable block (ram,0x015ec230) */
/* WARNING: Removing unreachable block (ram,0x015ec0cc) */
/* WARNING: Removing unreachable block (ram,0x015ec134) */
/* WARNING: Removing unreachable block (ram,0x015ec13c) */
/* WARNING: Removing unreachable block (ram,0x015ec140) */
/* WARNING: Removing unreachable block (ram,0x018eee1c) */
/* WARNING: Removing unreachable block (ram,0x018eee40) */
/* WARNING: Removing unreachable block (ram,0x018eee6c) */
/* WARNING: Removing unreachable block (ram,0x018eee70) */
/* WARNING: Removing unreachable block (ram,0x018eee78) */
/* WARNING: Removing unreachable block (ram,0x018eee8c) */
/* WARNING: Removing unreachable block (ram,0x018eee94) */
/* WARNING: Removing unreachable block (ram,0x018eee98) */
/* WARNING: Removing unreachable block (ram,0x018eeea4) */
/* WARNING: Removing unreachable block (ram,0x018eeed0) */
/* WARNING: Removing unreachable block (ram,0x018eeed8) */
/* WARNING: Removing unreachable block (ram,0x018eeedc) */
/* WARNING: Removing unreachable block (ram,0x018eef04) */
/* WARNING: Removing unreachable block (ram,0x018eef08) */
/* WARNING: Removing unreachable block (ram,0x018eeef0) */
/* WARNING: Removing unreachable block (ram,0x018eef34) */
/* WARNING: Removing unreachable block (ram,0x018eef5c) */
/* WARNING: Removing unreachable block (ram,0x018eef7c) */
/* WARNING: Removing unreachable block (ram,0x018eef80) */
/* WARNING: Removing unreachable block (ram,0x018eef88) */
/* WARNING: Removing unreachable block (ram,0x018eef9c) */
/* WARNING: Removing unreachable block (ram,0x018eefa4) */
/* WARNING: Removing unreachable block (ram,0x018eefac) */
/* WARNING: Removing unreachable block (ram,0x018eefc8) */
/* WARNING: Removing unreachable block (ram,0x018eefd0) */
/* WARNING: Removing unreachable block (ram,0x018eefd4) */
/* WARNING: Removing unreachable block (ram,0x018eefec) */
/* WARNING: Removing unreachable block (ram,0x018eeef4) */
/* WARNING: Removing unreachable block (ram,0x018eef18) */
/* WARNING: Removing unreachable block (ram,0x018eef1c) */
/* WARNING: Removing unreachable block (ram,0x018eef20) */
/* WARNING: Removing unreachable block (ram,0x015ebf2c) */
/* WARNING: Removing unreachable block (ram,0x015ebf44) */
/* WARNING: Removing unreachable block (ram,0x015ebe58) */
/* WARNING: Removing unreachable block (ram,0x015ebda4) */
/* WARNING: Removing unreachable block (ram,0x02f8b024) */
/* WARNING: Removing unreachable block (ram,0x02f8b034) */
/* WARNING: Removing unreachable block (ram,0x02f8b038) */
/* WARNING: Removing unreachable block (ram,0x02f8b050) */
/* WARNING: Removing unreachable block (ram,0x02f8b03c) */
/* WARNING: Removing unreachable block (ram,0x015ece88) */
/* WARNING: Removing unreachable block (ram,0x015ece90) */
/* WARNING: Removing unreachable block (ram,0x015ece9c) */
/* WARNING: Removing unreachable block (ram,0x015ece28) */
/* WARNING: Removing unreachable block (ram,0x015ece30) */
/* WARNING: Removing unreachable block (ram,0x015ecf10) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x015ece3c) */
/* WARNING: Removing unreachable block (ram,0x015ecd84) */
/* WARNING: Removing unreachable block (ram,0x015ecce8) */
/* WARNING: Removing unreachable block (ram,0x0322ef1c) */
/* WARNING: Removing unreachable block (ram,0x0322ef40) */
/* WARNING: Removing unreachable block (ram,0x0322ef54) */
/* WARNING: Removing unreachable block (ram,0x015ecb94) */
/* WARNING: Removing unreachable block (ram,0x015ecb50) */
/* WARNING: Removing unreachable block (ram,0x015ec6b8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

undefined4 Atlas_UI_LeaderboardEntryBehaviour__KillTweens(long param_1)

{
  undefined4 uVar1;
  undefined8 in_x7;
  undefined8 unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  
  puVar5 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb540c & 1) == 0) {
    func_0x00f78a20(0x3d53528);
    func_0x00f78a20(0x3d578e0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb540c = 1;
  }
  uVar2 = 0x3d23990;
  uVar3 = 0x3eb5000;
  uVar6 = 0x15ecb24;
  lVar4 = param_1;
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,param_1,0,0,0,0,in_x7,unaff_x22,uVar2,uVar3,lVar4,puVar5,uVar6);
  }
  return uVar1;
}



// ============================================================
// RVA: 0x15eccc0 | Atlas.UI.LeaderboardEntryBehaviour.SetStatIconAndTextActive
// ============================================================

/* WARNING: Possible PIC construction at 0x015eccf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecd18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ecec8) */
/* WARNING: Removing unreachable block (ram,0x015eced0) */
/* WARNING: Removing unreachable block (ram,0x015ecea8) */
/* WARNING: Removing unreachable block (ram,0x015eceb0) */
/* WARNING: Removing unreachable block (ram,0x015ecebc) */
/* WARNING: Removing unreachable block (ram,0x015ece68) */
/* WARNING: Removing unreachable block (ram,0x015ece70) */
/* WARNING: Removing unreachable block (ram,0x015ece48) */
/* WARNING: Removing unreachable block (ram,0x015ece50) */
/* WARNING: Removing unreachable block (ram,0x015ece5c) */
/* WARNING: Removing unreachable block (ram,0x015ecd1c) */
/* WARNING: Removing unreachable block (ram,0x015eccf4) */
/* WARNING: Removing unreachable block (ram,0x015ecd20) */
/* WARNING: Removing unreachable block (ram,0x015ecd50) */
/* WARNING: Removing unreachable block (ram,0x015ecd28) */
/* WARNING: Removing unreachable block (ram,0x015ecd30) */
/* WARNING: Removing unreachable block (ram,0x015ecd3c) */
/* WARNING: Removing unreachable block (ram,0x015eccfc) */
/* WARNING: Removing unreachable block (ram,0x015ecd04) */
/* WARNING: Removing unreachable block (ram,0x015ecd10) */
/* WARNING: Removing unreachable block (ram,0x015ec6b8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_LeaderboardEntryBehaviour__SetStatIconAndTextActive
                 (undefined8 ****param_1,long param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 *puVar12;
  undefined8 uVar13;
  long unaff_x19;
  undefined8 ****ppppuVar14;
  undefined8 unaff_x21;
  undefined8 uVar15;
  undefined8 unaff_x22;
  undefined8 uVar16;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *****pppppuVar17;
  undefined1 *puVar18;
  code *pcVar19;
  undefined4 uVar20;
  undefined4 extraout_s0;
  ulong extraout_d0;
  ulong uVar21;
  ulong extraout_d0_00;
  ulong extraout_d0_01;
  ulong extraout_d0_02;
  ulong extraout_d0_03;
  ulong extraout_d0_04;
  undefined8 uVar22;
  undefined8 uVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  ulong unaff_d8;
  float fVar31;
  ulong uVar32;
  ulong unaff_d9;
  ulong uVar33;
  ulong unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  undefined8 ****ppppuStack_100;
  code *pcStack_f8;
  undefined1 auStack_f0 [12];
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 ****ppppuStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  long lStack_98;
  undefined8 ****ppppuStack_90;
  code *pcStack_88;
  undefined8 ****ppppuStack_50;
  undefined *puStack_48;
  undefined8 ***pppuStack_40;
  long lStack_38;
  undefined8 ****ppppuStack_30;
  code *pcStack_28;
  
  uVar15 = unaff_x21;
  uVar16 = unaff_x22;
  if ((param_1[0x24] == (undefined8 ***)0x0) ||
     (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1[0x24],0), unaff_x19 = param_2, lVar9 == 0)) {
    auVar34 = func_0x00f78af4();
    param_2 = auVar34._8_8_;
    pcStack_28 = (code *)&Atlas_UI_LeaderboardEntryBehaviour__SetHideStarsActive;
    lVar9 = *(long *)(auVar34._0_8_ + 0x148);
    pppuStack_40 = param_1;
    lStack_38 = unaff_x19;
    ppppuStack_30 = (undefined8 ****)&stack0xfffffffffffffff0;
    if ((lVar9 == 0) || (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar9,0), unaff_x19 = param_2, lVar9 == 0)) {
      auVar34 = func_0x00f78af4();
      puVar12 = auVar34._8_8_;
      lVar6 = auVar34._0_8_;
      puVar2 = &stack0xffffffffffffff90;
      puStack_48 = &Atlas_UI_LeaderboardEntryBehaviour__UpdateStatPanel;
      pppppuVar17 = &ppppuStack_50;
      uVar16 = 0x3eb5000;
      uVar15 = 0x3d23990;
      ppppuStack_50 = &ppppuStack_30;
      if ((bRam0000000003eb540d & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb540d = 1;
      }
      uVar13 = puVar12[4];
      uVar27 = *puVar12;
      uVar23 = puVar12[3];
      uVar22 = puVar12[2];
      *(undefined8 *)(lVar6 + 0x70) = puVar12[1];
      *(undefined8 *)(lVar6 + 0x68) = uVar27;
      *(undefined8 *)(lVar6 + 0x88) = uVar13;
      *(undefined8 *)(lVar6 + 0x80) = uVar23;
      *(undefined8 *)(lVar6 + 0x78) = uVar22;
      ppppuVar14 = *(undefined8 *****)(lVar6 + 0x70);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(ppppuVar14,0,0);
      if ((iVar4 == 0) || (*(int *)(lVar6 + 0x78) != 0)) {
        if (*(int *)(lVar6 + 0x78) == 1) {
          if ((*(long *)(lVar6 + 0x130) != 0) &&
             (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x130),0), lVar9 != 0)) {
            param_2 = 1;
            pcVar19 = (code *)&UNK_015ecea8;
            goto code_r0x0322ef1c;
          }
        }
        else {
          plVar11 = *(long **)(lVar6 + 0x118);
          if (plVar11 != (long *)0x0) {
            fVar28 = *(float *)(lVar6 + 0x84);
            uVar10 = (ulong)*(uint *)(lVar6 + 0x80);
            (**(code **)(*plVar11 + 0x2a8))
                      (*(undefined4 *)(lVar6 + 0x7c),uVar10,fVar28,*(undefined4 *)(lVar6 + 0x88),
                       plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
            if ((*(long *)(lVar6 + 0x50) != 0) &&
               (param_1 = *(undefined8 *****)(lVar6 + 0x18), unaff_x19 = lVar6,
               param_1 != (undefined8 ****)0x0)) {
              fVar29 = *(float *)(lVar6 + 0x68);
              unaff_d8 = (ulong)(uint)fVar29;
              fVar31 = *(float *)(lVar6 + 0x58);
              unaff_d9 = (ulong)(uint)fVar31;
              fVar28 = *(float *)(*(long *)(lVar6 + 0x50) + 0xdc);
              unaff_d10 = (ulong)(uint)fVar28;
              /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(param_1,0);
              fVar28 = fVar28 * 0.5;
              /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(fVar29 + fVar31 + fVar28,param_1,0);
              plVar11 = *(long **)(lVar6 + 0x48);
              if (plVar11 != (long *)0x0) {
                fVar28 = 1.0 - *(float *)(lVar6 + 0x68) /
                               (*(float *)(lVar6 + 0x68) + *(float *)(lVar6 + 0x58));
                if (_UNK_033f8758 < ABS(*(float *)((long)plVar11 + 0x144) - fVar28)) {
                  *(float *)((long)plVar11 + 0x144) = fVar28;
                    /* WARNING: Could not recover jumptable at 0x02f8b04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  plVar11 = (long *)(**(code **)(*plVar11 + 0x2f8))
                                              (plVar11,*(undefined8 *)(*plVar11 + 0x300));
                  return plVar11;
                }
                return plVar11;
              }
            }
            auVar34 = func_0x00f78af4();
            param_2 = auVar34._8_8_;
            pcStack_88 = Atlas_UI_LeaderboardEntryBehaviour__SetDeltaStarsActive;
            uVar15 = 0x3d23990;
            uStack_b0 = unaff_x22;
            uStack_a8 = unaff_x21;
            pppuStack_a0 = param_1;
            lStack_98 = unaff_x19;
            ppppuStack_90 = &ppppuStack_50;
            if ((bRam0000000003eb5404 & 1) == 0) {
              func_0x00f78a20(0x3d23990);
              bRam0000000003eb5404 = 1;
            }
            uVar16 = *(undefined8 *)(auVar34._0_8_ + 0x138);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar11 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar16,0);
            if ((int)plVar11 == 0) {
              return plVar11;
            }
            lVar9 = *(long *)(auVar34._0_8_ + 0x138);
            if ((lVar9 != 0) && (lVar9 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(lVar9,0), lVar9 != 0)) {
              puVar2 = &stack0xffffffffffffff80;
              lVar6 = lStack_98;
              ppppuVar14 = (undefined8 ****)pppuStack_a0;
              uVar15 = uStack_a8;
              uVar16 = uStack_b0;
              pppppuVar17 = (undefined8 *****)ppppuStack_90;
              pcVar19 = pcStack_88;
              goto code_r0x0322ef1c;
            }
            auVar35 = func_0x00f78af4();
            uStack_e4 = auVar35._8_4_;
            uStack_e0 = 0x3d23990;
            pcStack_b8 = Atlas_UI_LeaderboardEntryBehaviour__SetDeltaStarsText;
            uStack_d8 = uVar16;
            ppppuStack_c0 = &ppppuStack_90;
            auStack_d0 = auVar34;
            if ((bRam0000000003eb5405 & 1) == 0) {
              func_0x00f78a20(0x3d23990);
              func_0x00f78a20(0x3d66fb0);
              bRam0000000003eb5405 = 1;
            }
            plVar11 = *(long **)(auVar35._0_8_ + 0x138);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            plVar5 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar11,0);
            if ((int)plVar5 != 0) {
              plVar5 = *(long **)(auVar35._0_8_ + 0x140);
              uVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_e4,0);
              uVar16 = 0;
              uVar13 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('+')*/ uRam0000000003d66fb0,uVar13);
              if (plVar5 == (long *)0x0) {
                plVar5 = (long *)func_0x00f78af4();
                puVar2 = &stack0xfffffffffffffec0;
                pcStack_f8 = Atlas_UI_LeaderboardEntryBehaviour__PlayCrownSpawnTween;
                pppppuVar17 = &ppppuStack_100;
                uVar30 = (ulong)(uint)fVar28;
                uVar32 = uVar10 & 0xffffffff;
                uVar33 = extraout_d0 & 0xffffffff;
                uVar13 = 0x3eb5000;
                uVar26 = uVar10;
                fVar29 = fVar28;
                ppppuStack_100 = &ppppuStack_c0;
                if ((bRam0000000003eb5406 & 1) == 0) {
                  func_0x00f78a20(0x3d53528);
                  bRam0000000003eb5406 = 1;
                }
                if (plVar5[7] == 0) {
                  pcVar19 = Atlas_UI_LeaderboardEntryBehaviour__StartLargeThenGoNormal;
                  plVar8 = (long *)func_0x00f78af4();
                  lVar9 = extraout_x1_00;
                  uVar22 = extraout_x1;
                  uVar21 = extraout_d0_00;
                }
                else {
                  lVar9 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(plVar5[7],uRam0000000003d53528);
                  uVar21 = extraout_d0 & 0xffffffff;
                  uVar26 = uVar10 & 0xffffffff;
                  uVar15 = 0x3d23990;
                  uVar13 = 0x3d23990;
                  uVar22 = 0;
                  puVar2 = auStack_f0;
                  plVar8 = plVar5;
                  uVar16 = extraout_x1;
                  plVar5 = plVar11;
                  pppppuVar17 = (undefined8 *****)ppppuStack_100;
                  pcVar19 = pcStack_f8;
                  fVar29 = fVar28;
                  uVar30 = unaff_d8;
                  uVar32 = unaff_d9;
                  uVar33 = unaff_d10;
                }
                while( true ) {
                  while( true ) {
                    puVar3 = puVar2 + -0x80;
                    *(undefined8 *)(puVar2 + -0x80) = unaff_d11;
                    *(ulong *)(puVar2 + -0x78) = uVar33;
                    *(ulong *)(puVar2 + -0x70) = uVar32;
                    *(ulong *)(puVar2 + -0x68) = uVar30;
                    *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
                    *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
                    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
                    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
                    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
                    *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
                    *(undefined8 *)(puVar2 + -0x30) = uVar15;
                    *(undefined8 *)(puVar2 + -0x28) = uVar13;
                    *(long **)(puVar2 + -0x20) = plVar5;
                    *(undefined8 *)(puVar2 + -0x18) = uVar22;
                    *(undefined8 ******)(puVar2 + -0x10) = pppppuVar17;
                    *(code **)(puVar2 + -8) = pcVar19;
                    puVar18 = puVar2 + -0x10;
                    uVar10 = (ulong)(uint)fVar29;
                    uVar24 = (uint)uVar26;
                    unaff_x23 = 0x3d27df8;
                    uVar25 = uVar24;
                    if ((bRam0000000003eb540e & 1) == 0) {
                      func_0x00f78a20(0x3d2db28);
                      func_0x00f78a20(0x3d1c100);
                      func_0x00f78a20(0x3d20bc0);
                      func_0x00f78a20(0x3d5e780);
                      func_0x00f78a20(0x3d5e7b8);
                      func_0x00f78a20(0x3d5e868);
                      func_0x00f78a20(0x3d63540);
                      func_0x00f78a20(0x3d27df8);
                      bRam0000000003eb540e = 1;
                    }
                    lVar6 = func_0x00f78aec(/*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0_TypeInfo*/ uRam0000000003d27df8);
                    /*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0$$.ctor*/ func_0x0155abe8(lVar6,0);
                    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) = lVar9, lVar9 != 0)) {
                      uVar20 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar9,0);
                      uVar15 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
                      /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar15,lVar6,uRam0000000003d63540,uRam0000000003d2db28);
                      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      plVar5 = (long *)/*DG.Tweening.DOTween$$To*/ func_0x01694ae4(uVar21 & 0xffffffff,uVar20,uVar24,uVar15,0);
                      uVar13 = 0x15ec164;
                      plVar11 = *(long **)(lVar6 + 0x10);
                      uVar22 = uRam0000000003d5e868;
                      goto code_r0x018eee1c;
                    }
                    plVar11 = (long *)func_0x00f78af4();
                    *(undefined8 *)(puVar2 + -0xe0) = unaff_d11;
                    *(ulong *)(puVar2 + -0xd8) = uVar21 & 0xffffffff;
                    *(ulong *)(puVar2 + -0xd0) = uVar26 & 0xffffffff;
                    *(ulong *)(puVar2 + -200) = uVar10;
                    *(undefined8 *)(puVar2 + -0xc0) = unaff_x24;
                    *(undefined8 *)(puVar2 + -0xb8) = 0x3d27df8;
                    *(long *)(puVar2 + -0xb0) = lVar6;
                    *(long *)(puVar2 + -0xa8) = lVar9;
                    *(undefined8 *)(puVar2 + -0xa0) = uVar16;
                    *(long **)(puVar2 + -0x98) = plVar8;
                    *(undefined1 **)(puVar2 + -0x90) = puVar18;
                    *(code **)(puVar2 + -0x88) =
                         Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerEmphasisTween;
                    fVar28 = fVar29;
                    uVar24 = uVar25;
                    if ((bRam0000000003eb5407 & 1) == 0) {
                      func_0x00f78a20(0x3d578e0);
                      func_0x00f78a20(0x3d5e780);
                      func_0x00f78a20(0x3d5e7b8);
                      func_0x00f78a20(0x3d5e868);
                      bRam0000000003eb5407 = 1;
                    }
                    if (plVar11[0x22] != 0) {
                      uVar15 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar11[0x22],uRam0000000003d578e0);
                      uVar15 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(extraout_d0_01 & 0xffffffff,
                                               extraout_d0_01 & 0xffffffff,(int)extraout_d0_01,
                                               uVar25,0,uVar15,0,0);
                      uVar15 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(fVar29,uVar15,uRam0000000003d5e780);
                      plVar5 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar15,extraout_x1_01,uRam0000000003d5e7b8);
                      puVar18 = *(undefined1 **)(puVar2 + -0x90);
                      uVar13 = *(undefined8 *)(puVar2 + -0x88);
                      uVar16 = *(undefined8 *)(puVar2 + -0xa0);
                      lVar6 = *(long *)(puVar2 + -0xb0);
                      uVar15 = *(undefined8 *)(puVar2 + -0xa8);
                      puVar3 = puVar2 + -0x80;
                      uVar22 = uRam0000000003d5e868;
                      plVar8 = *(long **)(puVar2 + -0x98);
                      goto code_r0x018eee1c;
                    }
                    plVar7 = (long *)func_0x00f78af4();
                    *(undefined8 *)(puVar2 + -0x130) = unaff_d11;
                    *(ulong *)(puVar2 + -0x128) = extraout_d0_01 & 0xffffffff;
                    *(ulong *)(puVar2 + -0x120) = (ulong)uVar25;
                    *(ulong *)(puVar2 + -0x118) = (ulong)(uint)fVar29;
                    *(long *)(puVar2 + -0x110) = lVar6;
                    *(undefined8 *)(puVar2 + -0x108) = 0x3eb5000;
                    *(undefined8 *)(puVar2 + -0x100) = extraout_x1_01;
                    *(long **)(puVar2 + -0xf8) = plVar11;
                    *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0x90;
                    *(code **)(puVar2 + -0xe8) =
                         Atlas_UI_LeaderboardEntryBehaviour__PlayStarDeltaSpawnTween;
                    fVar29 = fVar28;
                    uVar25 = uVar24;
                    if ((bRam0000000003eb5408 & 1) == 0) {
                      func_0x00f78a20(0x3d578e0);
                      func_0x00f78a20(0x3d23990);
                      bRam0000000003eb5408 = 1;
                    }
                    lVar9 = plVar7[0x27];
                    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar9,0);
                    if (iVar4 == 0) {
                      return (long *)0x0;
                    }
                    if (plVar7[0x27] == 0) break;
                    lVar9 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar7[0x27],uRam0000000003d578e0);
                    uVar21 = extraout_d0_02 & 0xffffffff;
                    uVar26 = (ulong)uVar24;
                    pppppuVar17 = *(undefined8 ******)(puVar2 + -0xf0);
                    pcVar19 = *(code **)(puVar2 + -0xe8);
                    plVar5 = *(long **)(puVar2 + -0x100);
                    uVar22 = *(undefined8 *)(puVar2 + -0xf8);
                    uVar15 = *(undefined8 *)(puVar2 + -0x110);
                    uVar13 = *(undefined8 *)(puVar2 + -0x108);
                    uVar32 = *(ulong *)(puVar2 + -0x120);
                    uVar30 = *(ulong *)(puVar2 + -0x118);
                    unaff_d11 = *(undefined8 *)(puVar2 + -0x130);
                    uVar33 = *(ulong *)(puVar2 + -0x128);
                    puVar2 = puVar2 + -0xe0;
                    plVar8 = plVar7;
                    uVar16 = extraout_x1_02;
                    fVar29 = fVar28;
                  }
                  plVar8 = (long *)func_0x00f78af4();
                  *(undefined8 *)(puVar2 + -0x180) = unaff_d11;
                  *(ulong *)(puVar2 + -0x178) = extraout_d0_02 & 0xffffffff;
                  *(ulong *)(puVar2 + -0x170) = (ulong)uVar24;
                  *(ulong *)(puVar2 + -0x168) = (ulong)(uint)fVar28;
                  *(undefined8 *)(puVar2 + -0x160) = 0x3d23990;
                  *(long *)(puVar2 + -0x158) = lVar9;
                  *(long **)(puVar2 + -0x150) = plVar7;
                  *(undefined8 *)(puVar2 + -0x148) = extraout_x1_02;
                  *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0xf0;
                  *(code **)(puVar2 + -0x138) =
                       Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerSpawnTween;
                  fVar28 = fVar29;
                  uVar24 = uVar25;
                  if ((bRam0000000003eb5409 & 1) == 0) {
                    func_0x00f78a20(0x3d578e0);
                    bRam0000000003eb5409 = 1;
                  }
                  if (plVar8[0x22] == 0) break;
                  lVar9 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar8[0x22],uRam0000000003d578e0);
                  uVar21 = extraout_d0_03 & 0xffffffff;
                  uVar26 = (ulong)uVar25;
                  pppppuVar17 = *(undefined8 ******)(puVar2 + -0x140);
                  pcVar19 = *(code **)(puVar2 + -0x138);
                  plVar5 = *(long **)(puVar2 + -0x150);
                  uVar22 = *(undefined8 *)(puVar2 + -0x148);
                  uVar15 = *(undefined8 *)(puVar2 + -0x160);
                  uVar13 = *(undefined8 *)(puVar2 + -0x158);
                  uVar32 = *(ulong *)(puVar2 + -0x170);
                  uVar30 = *(ulong *)(puVar2 + -0x168);
                  unaff_d11 = *(undefined8 *)(puVar2 + -0x180);
                  uVar33 = *(ulong *)(puVar2 + -0x178);
                  puVar2 = puVar2 + -0x130;
                  uVar16 = extraout_x1_03;
                }
                plVar7 = (long *)func_0x00f78af4();
                *(ulong *)(puVar2 + -0x1c0) = (ulong)uVar25;
                *(ulong *)(puVar2 + -0x1b8) = (ulong)(uint)fVar29;
                *(undefined8 *)(puVar2 + -0x1b0) = 0x3d23990;
                *(undefined8 *)(puVar2 + -0x1a8) = 0x3eb5000;
                *(long **)(puVar2 + -0x1a0) = plVar8;
                *(undefined8 *)(puVar2 + -0x198) = extraout_x1_03;
                *(undefined1 **)(puVar2 + -400) = puVar2 + -0x140;
                *(code **)(puVar2 + -0x188) =
                     Atlas_UI_LeaderboardEntryBehaviour__PlayEnterStatsStarDeltaTween;
                uVar25 = uVar24;
                if ((bRam0000000003eb540a & 1) == 0) {
                  func_0x00f78a20(0x3d578e0);
                  func_0x00f78a20(0x3d23990);
                  func_0x00f78a20(0x3d5e768);
                  func_0x00f78a20(0x3d5e7a0);
                  func_0x00f78a20(0x3d5e838);
                  bRam0000000003eb540a = 1;
                }
                lVar9 = plVar7[0x27];
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar9,0);
                if (iVar4 == 0) {
                  return (long *)0x0;
                }
                if (plVar7[0x27] == 0) {
                  plVar11 = (long *)func_0x00f78af4();
                  puVar3 = puVar2 + -0x230;
                  *(undefined8 *)(puVar2 + -0x230) = unaff_d11;
                  *(ulong *)(puVar2 + -0x228) = extraout_d0_03 & 0xffffffff;
                  *(ulong *)(puVar2 + -0x220) = extraout_d0_04 & 0xffffffff;
                  *(ulong *)(puVar2 + -0x218) = (ulong)uVar24;
                  *(undefined8 *)(puVar2 + -0x210) = unaff_x26;
                  *(undefined8 *)(puVar2 + -0x208) = unaff_x25;
                  *(undefined8 *)(puVar2 + -0x200) = unaff_x24;
                  *(undefined8 *)(puVar2 + -0x1f8) = 0x3d27df8;
                  *(undefined8 *)(puVar2 + -0x1f0) = 0x3d23990;
                  *(long *)(puVar2 + -0x1e8) = lVar9;
                  *(undefined8 *)(puVar2 + -0x1e0) = extraout_x1_04;
                  *(long **)(puVar2 + -0x1d8) = plVar7;
                  *(undefined1 **)(puVar2 + -0x1d0) = puVar2 + -400;
                  *(code **)(puVar2 + -0x1c8) =
                       Atlas_UI_LeaderboardEntryBehaviour__PlayHideStarsTween;
                  puVar18 = puVar2 + -0x1d0;
                  if ((bRam0000000003eb540b & 1) == 0) {
                    func_0x00f78a20(0x3d59de8);
                    func_0x00f78a20(0x3d23990);
                    func_0x00f78a20(0x3d25428);
                    func_0x00f78a20(0x3d5e6c0);
                    func_0x00f78a20(0x3d5e758);
                    func_0x00f78a20(0x3d5e788);
                    func_0x00f78a20(0x3d5e800);
                    bRam0000000003eb540b = 1;
                  }
                  lVar9 = plVar11[0x29];
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar9,0);
                  if (iVar4 == 0) {
                    return (long *)0x0;
                  }
                  uVar15 = 0x3d5e000;
                  lVar6 = 0x3d5e000;
                  uVar16 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(extraout_s0,uVar25,plVar11[0x29],0);
                  uVar16 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(fVar28,uVar16,uRam0000000003d5e758);
                  plVar5 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar16,extraout_x1_05,uRam0000000003d5e788);
                  uVar13 = 0x15ec6b8;
                  uVar22 = uRam0000000003d5e800;
                  plVar8 = plVar11;
                  uVar16 = extraout_x1_05;
                }
                else {
                  uVar15 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar7[0x27],uRam0000000003d578e0);
                  uVar15 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPosX*/ func_0x016a707c(0,extraout_d0_04 & 0xffffffff,uVar15,0,0);
                  uVar15 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar24,uVar15,uRam0000000003d5e768);
                  plVar5 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar15,extraout_x1_04,uRam0000000003d5e7a0);
                  puVar18 = *(undefined1 **)(puVar2 + -400);
                  uVar13 = *(undefined8 *)(puVar2 + -0x188);
                  uVar16 = *(undefined8 *)(puVar2 + -0x1a0);
                  lVar6 = *(long *)(puVar2 + -0x1b0);
                  uVar15 = *(undefined8 *)(puVar2 + -0x1a8);
                  puVar3 = puVar2 + -0x180;
                  plVar11 = plVar7;
                  uVar22 = uRam0000000003d5e838;
                  plVar8 = *(long **)(puVar2 + -0x198);
                }
code_r0x018eee1c:
                *(long *)(puVar3 + -0x30) = lVar6;
                *(undefined8 *)(puVar3 + -0x28) = uVar15;
                *(undefined8 *)(puVar3 + -0x20) = uVar16;
                *(long **)(puVar3 + -0x18) = plVar8;
                *(undefined1 **)(puVar3 + -0x10) = puVar18;
                *(undefined8 *)(puVar3 + -8) = uVar13;
                if ((bRam0000000003eb66c1 & 1) == 0) {
                  func_0x00f78a20(0x3d208f0,plVar11,uVar22);
                  func_0x00f78a20(0x3d20bc0);
                  func_0x00f78a20(0x3d23990);
                  bRam0000000003eb66c1 = 1;
                }
                if ((plVar5 != (long *)0x0) && ((char)plVar5[0x1d] != '\0')) {
                  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  iVar4 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
                  if (iVar4 != 0) {
                    lVar9 = func_0x00f78adc(plVar11,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
                    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
                    if ((uVar10 & 1) == 0) {
                      if (plVar11 == (long *)0x0) goto code_r0x018eef34;
                      lVar9 = (**(code **)(*plVar11 + 0x168))
                                        (plVar11,*(undefined8 *)(*plVar11 + 0x170));
                    }
                    else {
                      if (lVar9 == 0) {
code_r0x018eef34:
                        auVar34 = func_0x00f78af4();
                        plVar8 = auVar34._0_8_;
                        *(long *)(puVar3 + -0x60) = lVar6;
                        *(long *)(puVar3 + -0x58) = lVar9;
                        *(long **)(puVar3 + -0x50) = plVar11;
                        *(long **)(puVar3 + -0x48) = plVar5;
                        *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
                        *(undefined **)(puVar3 + -0x38) =
                             &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
                        if ((bRam0000000003eb66c2 & 1) == 0) {
                          func_0x00f78a20(0x3d20bc0);
                          func_0x00f78a20(0x3d25440);
                          bRam0000000003eb66c2 = 1;
                        }
                        if ((plVar8 != (long *)0x0) && ((char)plVar8[0x1d] != '\0')) {
                          if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(plVar8,auVar34._8_8_,cVar1 != '\0',0);
                        }
                        return plVar8;
                      }
                      lVar9 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar9,0);
                    }
                    plVar5[0x19] = lVar9;
                  }
                  plVar5[9] = (long)plVar11;
                }
                return plVar5;
              }
              plVar5 = (long *)(**(code **)(*plVar5 + 0x558))
                                         (plVar5,uVar13,*(undefined8 *)(*plVar5 + 0x560));
            }
            return plVar5;
          }
        }
      }
      else if ((*(long *)(lVar6 + 0x130) != 0) &&
              (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x130),0), lVar9 != 0)) {
        param_2 = 0;
        pcVar19 = (code *)&UNK_015ece48;
        puVar2 = &stack0xffffffffffffff90;
        goto code_r0x0322ef1c;
      }
      plVar11 = (long *)func_0x00f78af4();
      pppuStack_a0 = (undefined8 ***)0x3eb5000;
      lStack_98 = 0x3d23990;
      ppppuStack_90 = ppppuVar14;
      pcStack_88 = (code *)lVar6;
      if ((bRam0000000003ebf1b8 & 1) == 0) {
        func_0x00f78a20(0x3d23990,0);
        bRam0000000003ebf1b8 = 1;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      return plVar11;
    }
    puVar2 = &stack0xffffffffffffffe0;
    lVar6 = lStack_38;
    ppppuVar14 = (undefined8 ****)pppuStack_40;
    pppppuVar17 = (undefined8 *****)ppppuStack_30;
    pcVar19 = pcStack_28;
  }
  else {
    puVar2 = &stack0xffffffffffffffe0;
    lVar6 = param_2;
    ppppuVar14 = param_1;
    pppppuVar17 = (undefined8 *****)&stack0xfffffffffffffff0;
    pcVar19 = (code *)0x15eccf4;
  }
code_r0x0322ef1c:
  *(undefined8 *)(puVar2 + -0x30) = uVar16;
  *(undefined8 *)(puVar2 + -0x28) = uVar15;
  *(undefined8 *****)(puVar2 + -0x20) = ppppuVar14;
  *(long *)(puVar2 + -0x18) = lVar6;
  *(undefined8 ******)(puVar2 + -0x10) = pppppuVar17;
  *(code **)(puVar2 + -8) = pcVar19;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar11 = (long *)(*pcRam0000000003ebf4c0)(lVar9,param_2);
  return plVar11;
}



// ============================================================
// RVA: 0x15ecd60 | Atlas.UI.LeaderboardEntryBehaviour.SetHideStarsActive
// ============================================================

/* WARNING: Possible PIC construction at 0x015ece44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ecec8) */
/* WARNING: Removing unreachable block (ram,0x015eced0) */
/* WARNING: Removing unreachable block (ram,0x015ecea8) */
/* WARNING: Removing unreachable block (ram,0x015eceb0) */
/* WARNING: Removing unreachable block (ram,0x015ecebc) */
/* WARNING: Removing unreachable block (ram,0x015ece68) */
/* WARNING: Removing unreachable block (ram,0x015ece70) */
/* WARNING: Removing unreachable block (ram,0x015ece48) */
/* WARNING: Removing unreachable block (ram,0x015ece50) */
/* WARNING: Removing unreachable block (ram,0x015ece5c) */
/* WARNING: Removing unreachable block (ram,0x015ec6b8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_LeaderboardEntryBehaviour__SetHideStarsActive(long param_1,long param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 *puVar13;
  undefined8 uVar14;
  long unaff_x19;
  undefined8 **unaff_x20;
  undefined8 **ppuVar15;
  undefined8 uVar16;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *****pppppuVar17;
  undefined8 **unaff_x29;
  undefined1 *puVar18;
  code *pcVar19;
  code *unaff_x30;
  undefined4 uVar20;
  undefined4 extraout_s0;
  ulong extraout_d0;
  ulong uVar21;
  ulong extraout_d0_00;
  ulong extraout_d0_01;
  ulong extraout_d0_02;
  ulong extraout_d0_03;
  ulong extraout_d0_04;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  ulong uVar28;
  ulong unaff_d8;
  float fVar29;
  ulong uVar30;
  ulong unaff_d9;
  ulong uVar31;
  ulong unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  undefined8 ****ppppuStack_e0;
  code *pcStack_d8;
  undefined1 auStack_d0 [12];
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 ***pppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 **ppuStack_80;
  long lStack_78;
  undefined8 **ppuStack_70;
  code *pcStack_68;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((*(long *)(param_1 + 0x148) != 0) &&
     (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x148),0), lVar5 = unaff_x19, unaff_x19 = param_2
     , uStack_90 = unaff_x22, lVar10 != 0)) {
code_r0x0322ef1c:
    *(undefined8 *)((long)register0x00000008 + -0x30) = uStack_90;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 ***)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = lVar5;
    *(undefined8 ***)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar12 = (long *)(*pcRam0000000003ebf4c0)(lVar10,param_2);
    return plVar12;
  }
  auVar32 = func_0x00f78af4();
  puVar13 = auVar32._8_8_;
  lVar5 = auVar32._0_8_;
  puStack_28 = &Atlas_UI_LeaderboardEntryBehaviour__UpdateStatPanel;
  unaff_x29 = (undefined8 **)&puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb540d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb540d = 1;
  }
  uVar14 = puVar13[4];
  uVar25 = *puVar13;
  uVar7 = puVar13[3];
  uVar16 = puVar13[2];
  *(undefined8 *)(lVar5 + 0x70) = puVar13[1];
  *(undefined8 *)(lVar5 + 0x68) = uVar25;
  *(undefined8 *)(lVar5 + 0x88) = uVar14;
  *(undefined8 *)(lVar5 + 0x80) = uVar7;
  *(undefined8 *)(lVar5 + 0x78) = uVar16;
  ppuVar15 = *(undefined8 ***)(lVar5 + 0x70);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(ppuVar15,0,0);
  uStack_90 = 0x3eb5000;
  if ((iVar4 == 0) || (*(int *)(lVar5 + 0x78) != 0)) {
    if (*(int *)(lVar5 + 0x78) == 1) {
      if ((*(long *)(lVar5 + 0x130) != 0) &&
         (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar5 + 0x130),0), lVar10 != 0)) {
        param_2 = 1;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
        unaff_x20 = ppuVar15;
        unaff_x21 = 0x3d23990;
        unaff_x30 = (code *)&UNK_015ecea8;
        goto code_r0x0322ef1c;
      }
    }
    else {
      plVar12 = *(long **)(lVar5 + 0x118);
      if (plVar12 != (long *)0x0) {
        fVar26 = *(float *)(lVar5 + 0x84);
        uVar11 = (ulong)*(uint *)(lVar5 + 0x80);
        (**(code **)(*plVar12 + 0x2a8))
                  (*(undefined4 *)(lVar5 + 0x7c),uVar11,fVar26,*(undefined4 *)(lVar5 + 0x88),plVar12
                   ,*(undefined8 *)(*plVar12 + 0x2b0));
        if ((*(long *)(lVar5 + 0x50) != 0) &&
           (unaff_x20 = *(undefined8 ***)(lVar5 + 0x18), unaff_x19 = lVar5,
           unaff_x20 != (undefined8 **)0x0)) {
          fVar27 = *(float *)(lVar5 + 0x68);
          unaff_d8 = (ulong)(uint)fVar27;
          fVar29 = *(float *)(lVar5 + 0x58);
          unaff_d9 = (ulong)(uint)fVar29;
          fVar26 = *(float *)(*(long *)(lVar5 + 0x50) + 0xdc);
          unaff_d10 = (ulong)(uint)fVar26;
          /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(unaff_x20,0);
          fVar26 = fVar26 * 0.5;
          /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(fVar27 + fVar29 + fVar26,unaff_x20,0);
          plVar12 = *(long **)(lVar5 + 0x48);
          if (plVar12 != (long *)0x0) {
            fVar26 = 1.0 - *(float *)(lVar5 + 0x68) /
                           (*(float *)(lVar5 + 0x68) + *(float *)(lVar5 + 0x58));
            if (_UNK_033f8758 < ABS(*(float *)((long)plVar12 + 0x144) - fVar26)) {
              *(float *)((long)plVar12 + 0x144) = fVar26;
                    /* WARNING: Could not recover jumptable at 0x02f8b04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar12 = (long *)(**(code **)(*plVar12 + 0x2f8))
                                          (plVar12,*(undefined8 *)(*plVar12 + 0x300));
              return plVar12;
            }
            return plVar12;
          }
        }
        auVar32 = func_0x00f78af4();
        param_2 = auVar32._8_8_;
        pcStack_68 = Atlas_UI_LeaderboardEntryBehaviour__SetDeltaStarsActive;
        uVar14 = 0x3d23990;
        uStack_90 = unaff_x22;
        uStack_88 = unaff_x21;
        ppuStack_80 = (undefined1 **)unaff_x20;
        lStack_78 = unaff_x19;
        ppuStack_70 = (undefined8 **)&puStack_30;
        if ((bRam0000000003eb5404 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb5404 = 1;
        }
        uVar16 = *(undefined8 *)(auVar32._0_8_ + 0x138);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar12 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar16,0);
        if ((int)plVar12 == 0) {
          return plVar12;
        }
        lVar5 = *(long *)(auVar32._0_8_ + 0x138);
        if ((lVar5 != 0) && (lVar10 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(lVar5,0), lVar10 != 0)) {
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
          lVar5 = lStack_78;
          unaff_x20 = (undefined8 **)ppuStack_80;
          unaff_x21 = uStack_88;
          unaff_x29 = ppuStack_70;
          unaff_x30 = pcStack_68;
          goto code_r0x0322ef1c;
        }
        auVar33 = func_0x00f78af4();
        uStack_c4 = auVar33._8_4_;
        uStack_c0 = 0x3d23990;
        pcStack_98 = Atlas_UI_LeaderboardEntryBehaviour__SetDeltaStarsText;
        uStack_b8 = uVar16;
        pppuStack_a0 = &ppuStack_70;
        auStack_b0 = auVar32;
        if ((bRam0000000003eb5405 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d66fb0);
          bRam0000000003eb5405 = 1;
        }
        plVar12 = *(long **)(auVar33._0_8_ + 0x138);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar6 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar12,0);
        if ((int)plVar6 != 0) {
          plVar6 = *(long **)(auVar33._0_8_ + 0x140);
          uVar7 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_c4,0);
          uVar16 = 0;
          uVar7 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('+')*/ uRam0000000003d66fb0,uVar7);
          if (plVar6 == (long *)0x0) {
            plVar6 = (long *)func_0x00f78af4();
            puVar2 = &stack0xfffffffffffffee0;
            pcStack_d8 = Atlas_UI_LeaderboardEntryBehaviour__PlayCrownSpawnTween;
            pppppuVar17 = &ppppuStack_e0;
            uVar28 = (ulong)(uint)fVar26;
            uVar30 = uVar11 & 0xffffffff;
            uVar31 = extraout_d0 & 0xffffffff;
            uVar7 = 0x3eb5000;
            uVar24 = uVar11;
            fVar27 = fVar26;
            ppppuStack_e0 = &pppuStack_a0;
            if ((bRam0000000003eb5406 & 1) == 0) {
              func_0x00f78a20(0x3d53528);
              bRam0000000003eb5406 = 1;
            }
            if (plVar6[7] == 0) {
              pcVar19 = Atlas_UI_LeaderboardEntryBehaviour__StartLargeThenGoNormal;
              plVar9 = (long *)func_0x00f78af4();
              lVar5 = extraout_x1_00;
              uVar25 = extraout_x1;
              uVar21 = extraout_d0_00;
            }
            else {
              lVar5 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(plVar6[7],uRam0000000003d53528);
              uVar21 = extraout_d0 & 0xffffffff;
              uVar24 = uVar11 & 0xffffffff;
              uVar14 = 0x3d23990;
              uVar7 = 0x3d23990;
              uVar25 = 0;
              puVar2 = auStack_d0;
              plVar9 = plVar6;
              uVar16 = extraout_x1;
              plVar6 = plVar12;
              pppppuVar17 = (undefined8 *****)ppppuStack_e0;
              pcVar19 = pcStack_d8;
              fVar27 = fVar26;
              uVar28 = unaff_d8;
              uVar30 = unaff_d9;
              uVar31 = unaff_d10;
            }
            while( true ) {
              while( true ) {
                puVar3 = puVar2 + -0x80;
                *(undefined8 *)(puVar2 + -0x80) = unaff_d11;
                *(ulong *)(puVar2 + -0x78) = uVar31;
                *(ulong *)(puVar2 + -0x70) = uVar30;
                *(ulong *)(puVar2 + -0x68) = uVar28;
                *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
                *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
                *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
                *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
                *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
                *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
                *(undefined8 *)(puVar2 + -0x30) = uVar14;
                *(undefined8 *)(puVar2 + -0x28) = uVar7;
                *(long **)(puVar2 + -0x20) = plVar6;
                *(undefined8 *)(puVar2 + -0x18) = uVar25;
                *(undefined8 ******)(puVar2 + -0x10) = pppppuVar17;
                *(code **)(puVar2 + -8) = pcVar19;
                puVar18 = puVar2 + -0x10;
                uVar11 = (ulong)(uint)fVar27;
                uVar22 = (uint)uVar24;
                unaff_x23 = 0x3d27df8;
                uVar23 = uVar22;
                if ((bRam0000000003eb540e & 1) == 0) {
                  func_0x00f78a20(0x3d2db28);
                  func_0x00f78a20(0x3d1c100);
                  func_0x00f78a20(0x3d20bc0);
                  func_0x00f78a20(0x3d5e780);
                  func_0x00f78a20(0x3d5e7b8);
                  func_0x00f78a20(0x3d5e868);
                  func_0x00f78a20(0x3d63540);
                  func_0x00f78a20(0x3d27df8);
                  bRam0000000003eb540e = 1;
                }
                lVar10 = func_0x00f78aec(/*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0_TypeInfo*/ uRam0000000003d27df8);
                /*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0$$.ctor*/ func_0x0155abe8(lVar10,0);
                if ((lVar10 != 0) && (*(long *)(lVar10 + 0x10) = lVar5, lVar5 != 0)) {
                  uVar20 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar5,0);
                  uVar14 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
                  /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar14,lVar10,uRam0000000003d63540,uRam0000000003d2db28);
                  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  plVar6 = (long *)/*DG.Tweening.DOTween$$To*/ func_0x01694ae4(uVar21 & 0xffffffff,uVar20,uVar22,uVar14,0);
                  uVar7 = 0x15ec164;
                  plVar12 = *(long **)(lVar10 + 0x10);
                  uVar25 = uRam0000000003d5e868;
                  goto code_r0x018eee1c;
                }
                plVar12 = (long *)func_0x00f78af4();
                *(undefined8 *)(puVar2 + -0xe0) = unaff_d11;
                *(ulong *)(puVar2 + -0xd8) = uVar21 & 0xffffffff;
                *(ulong *)(puVar2 + -0xd0) = uVar24 & 0xffffffff;
                *(ulong *)(puVar2 + -200) = uVar11;
                *(undefined8 *)(puVar2 + -0xc0) = unaff_x24;
                *(undefined8 *)(puVar2 + -0xb8) = 0x3d27df8;
                *(long *)(puVar2 + -0xb0) = lVar10;
                *(long *)(puVar2 + -0xa8) = lVar5;
                *(undefined8 *)(puVar2 + -0xa0) = uVar16;
                *(long **)(puVar2 + -0x98) = plVar9;
                *(undefined1 **)(puVar2 + -0x90) = puVar18;
                *(code **)(puVar2 + -0x88) =
                     Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerEmphasisTween;
                fVar26 = fVar27;
                uVar22 = uVar23;
                if ((bRam0000000003eb5407 & 1) == 0) {
                  func_0x00f78a20(0x3d578e0);
                  func_0x00f78a20(0x3d5e780);
                  func_0x00f78a20(0x3d5e7b8);
                  func_0x00f78a20(0x3d5e868);
                  bRam0000000003eb5407 = 1;
                }
                if (plVar12[0x22] != 0) {
                  uVar14 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar12[0x22],uRam0000000003d578e0);
                  uVar14 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(extraout_d0_01 & 0xffffffff,extraout_d0_01 & 0xffffffff,
                                           (int)extraout_d0_01,uVar23,0,uVar14,0,0);
                  uVar14 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(fVar27,uVar14,uRam0000000003d5e780);
                  plVar6 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar14,extraout_x1_01,uRam0000000003d5e7b8);
                  puVar18 = *(undefined1 **)(puVar2 + -0x90);
                  uVar7 = *(undefined8 *)(puVar2 + -0x88);
                  uVar16 = *(undefined8 *)(puVar2 + -0xa0);
                  lVar10 = *(long *)(puVar2 + -0xb0);
                  uVar14 = *(undefined8 *)(puVar2 + -0xa8);
                  puVar3 = puVar2 + -0x80;
                  uVar25 = uRam0000000003d5e868;
                  plVar9 = *(long **)(puVar2 + -0x98);
                  goto code_r0x018eee1c;
                }
                plVar8 = (long *)func_0x00f78af4();
                *(undefined8 *)(puVar2 + -0x130) = unaff_d11;
                *(ulong *)(puVar2 + -0x128) = extraout_d0_01 & 0xffffffff;
                *(ulong *)(puVar2 + -0x120) = (ulong)uVar23;
                *(ulong *)(puVar2 + -0x118) = (ulong)(uint)fVar27;
                *(long *)(puVar2 + -0x110) = lVar10;
                *(undefined8 *)(puVar2 + -0x108) = 0x3eb5000;
                *(undefined8 *)(puVar2 + -0x100) = extraout_x1_01;
                *(long **)(puVar2 + -0xf8) = plVar12;
                *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0x90;
                *(code **)(puVar2 + -0xe8) =
                     Atlas_UI_LeaderboardEntryBehaviour__PlayStarDeltaSpawnTween;
                fVar27 = fVar26;
                uVar23 = uVar22;
                if ((bRam0000000003eb5408 & 1) == 0) {
                  func_0x00f78a20(0x3d578e0);
                  func_0x00f78a20(0x3d23990);
                  bRam0000000003eb5408 = 1;
                }
                lVar5 = plVar8[0x27];
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
                if (iVar4 == 0) {
                  return (long *)0x0;
                }
                if (plVar8[0x27] == 0) break;
                lVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar8[0x27],uRam0000000003d578e0);
                uVar21 = extraout_d0_02 & 0xffffffff;
                uVar24 = (ulong)uVar22;
                pppppuVar17 = *(undefined8 ******)(puVar2 + -0xf0);
                pcVar19 = *(code **)(puVar2 + -0xe8);
                plVar6 = *(long **)(puVar2 + -0x100);
                uVar25 = *(undefined8 *)(puVar2 + -0xf8);
                uVar14 = *(undefined8 *)(puVar2 + -0x110);
                uVar7 = *(undefined8 *)(puVar2 + -0x108);
                uVar30 = *(ulong *)(puVar2 + -0x120);
                uVar28 = *(ulong *)(puVar2 + -0x118);
                unaff_d11 = *(undefined8 *)(puVar2 + -0x130);
                uVar31 = *(ulong *)(puVar2 + -0x128);
                puVar2 = puVar2 + -0xe0;
                plVar9 = plVar8;
                uVar16 = extraout_x1_02;
                fVar27 = fVar26;
              }
              plVar9 = (long *)func_0x00f78af4();
              *(undefined8 *)(puVar2 + -0x180) = unaff_d11;
              *(ulong *)(puVar2 + -0x178) = extraout_d0_02 & 0xffffffff;
              *(ulong *)(puVar2 + -0x170) = (ulong)uVar22;
              *(ulong *)(puVar2 + -0x168) = (ulong)(uint)fVar26;
              *(undefined8 *)(puVar2 + -0x160) = 0x3d23990;
              *(long *)(puVar2 + -0x158) = lVar5;
              *(long **)(puVar2 + -0x150) = plVar8;
              *(undefined8 *)(puVar2 + -0x148) = extraout_x1_02;
              *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0xf0;
              *(code **)(puVar2 + -0x138) =
                   Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerSpawnTween;
              fVar26 = fVar27;
              uVar22 = uVar23;
              if ((bRam0000000003eb5409 & 1) == 0) {
                func_0x00f78a20(0x3d578e0);
                bRam0000000003eb5409 = 1;
              }
              if (plVar9[0x22] == 0) break;
              lVar5 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar9[0x22],uRam0000000003d578e0);
              uVar21 = extraout_d0_03 & 0xffffffff;
              uVar24 = (ulong)uVar23;
              pppppuVar17 = *(undefined8 ******)(puVar2 + -0x140);
              pcVar19 = *(code **)(puVar2 + -0x138);
              plVar6 = *(long **)(puVar2 + -0x150);
              uVar25 = *(undefined8 *)(puVar2 + -0x148);
              uVar14 = *(undefined8 *)(puVar2 + -0x160);
              uVar7 = *(undefined8 *)(puVar2 + -0x158);
              uVar30 = *(ulong *)(puVar2 + -0x170);
              uVar28 = *(ulong *)(puVar2 + -0x168);
              unaff_d11 = *(undefined8 *)(puVar2 + -0x180);
              uVar31 = *(ulong *)(puVar2 + -0x178);
              puVar2 = puVar2 + -0x130;
              uVar16 = extraout_x1_03;
            }
            plVar8 = (long *)func_0x00f78af4();
            *(ulong *)(puVar2 + -0x1c0) = (ulong)uVar23;
            *(ulong *)(puVar2 + -0x1b8) = (ulong)(uint)fVar27;
            *(undefined8 *)(puVar2 + -0x1b0) = 0x3d23990;
            *(undefined8 *)(puVar2 + -0x1a8) = 0x3eb5000;
            *(long **)(puVar2 + -0x1a0) = plVar9;
            *(undefined8 *)(puVar2 + -0x198) = extraout_x1_03;
            *(undefined1 **)(puVar2 + -400) = puVar2 + -0x140;
            *(code **)(puVar2 + -0x188) =
                 Atlas_UI_LeaderboardEntryBehaviour__PlayEnterStatsStarDeltaTween;
            uVar23 = uVar22;
            if ((bRam0000000003eb540a & 1) == 0) {
              func_0x00f78a20(0x3d578e0);
              func_0x00f78a20(0x3d23990);
              func_0x00f78a20(0x3d5e768);
              func_0x00f78a20(0x3d5e7a0);
              func_0x00f78a20(0x3d5e838);
              bRam0000000003eb540a = 1;
            }
            lVar5 = plVar8[0x27];
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
            if (iVar4 == 0) {
              return (long *)0x0;
            }
            if (plVar8[0x27] == 0) {
              plVar12 = (long *)func_0x00f78af4();
              puVar3 = puVar2 + -0x230;
              *(undefined8 *)(puVar2 + -0x230) = unaff_d11;
              *(ulong *)(puVar2 + -0x228) = extraout_d0_03 & 0xffffffff;
              *(ulong *)(puVar2 + -0x220) = extraout_d0_04 & 0xffffffff;
              *(ulong *)(puVar2 + -0x218) = (ulong)uVar22;
              *(undefined8 *)(puVar2 + -0x210) = unaff_x26;
              *(undefined8 *)(puVar2 + -0x208) = unaff_x25;
              *(undefined8 *)(puVar2 + -0x200) = unaff_x24;
              *(undefined8 *)(puVar2 + -0x1f8) = 0x3d27df8;
              *(undefined8 *)(puVar2 + -0x1f0) = 0x3d23990;
              *(long *)(puVar2 + -0x1e8) = lVar5;
              *(undefined8 *)(puVar2 + -0x1e0) = extraout_x1_04;
              *(long **)(puVar2 + -0x1d8) = plVar8;
              *(undefined1 **)(puVar2 + -0x1d0) = puVar2 + -400;
              *(code **)(puVar2 + -0x1c8) = Atlas_UI_LeaderboardEntryBehaviour__PlayHideStarsTween;
              puVar18 = puVar2 + -0x1d0;
              if ((bRam0000000003eb540b & 1) == 0) {
                func_0x00f78a20(0x3d59de8);
                func_0x00f78a20(0x3d23990);
                func_0x00f78a20(0x3d25428);
                func_0x00f78a20(0x3d5e6c0);
                func_0x00f78a20(0x3d5e758);
                func_0x00f78a20(0x3d5e788);
                func_0x00f78a20(0x3d5e800);
                bRam0000000003eb540b = 1;
              }
              lVar5 = plVar12[0x29];
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
              if (iVar4 == 0) {
                return (long *)0x0;
              }
              uVar14 = 0x3d5e000;
              lVar10 = 0x3d5e000;
              uVar16 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(extraout_s0,uVar23,plVar12[0x29],0);
              uVar16 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(fVar26,uVar16,uRam0000000003d5e758);
              plVar6 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar16,extraout_x1_05,uRam0000000003d5e788);
              uVar7 = 0x15ec6b8;
              uVar25 = uRam0000000003d5e800;
              plVar9 = plVar12;
              uVar16 = extraout_x1_05;
            }
            else {
              uVar14 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar8[0x27],uRam0000000003d578e0);
              uVar14 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPosX*/ func_0x016a707c(0,extraout_d0_04 & 0xffffffff,uVar14,0,0);
              uVar14 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar22,uVar14,uRam0000000003d5e768);
              plVar6 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar14,extraout_x1_04,uRam0000000003d5e7a0);
              puVar18 = *(undefined1 **)(puVar2 + -400);
              uVar7 = *(undefined8 *)(puVar2 + -0x188);
              uVar16 = *(undefined8 *)(puVar2 + -0x1a0);
              lVar10 = *(long *)(puVar2 + -0x1b0);
              uVar14 = *(undefined8 *)(puVar2 + -0x1a8);
              puVar3 = puVar2 + -0x180;
              plVar12 = plVar8;
              uVar25 = uRam0000000003d5e838;
              plVar9 = *(long **)(puVar2 + -0x198);
            }
code_r0x018eee1c:
            *(long *)(puVar3 + -0x30) = lVar10;
            *(undefined8 *)(puVar3 + -0x28) = uVar14;
            *(undefined8 *)(puVar3 + -0x20) = uVar16;
            *(long **)(puVar3 + -0x18) = plVar9;
            *(undefined1 **)(puVar3 + -0x10) = puVar18;
            *(undefined8 *)(puVar3 + -8) = uVar7;
            if ((bRam0000000003eb66c1 & 1) == 0) {
              func_0x00f78a20(0x3d208f0,plVar12,uVar25);
              func_0x00f78a20(0x3d20bc0);
              func_0x00f78a20(0x3d23990);
              bRam0000000003eb66c1 = 1;
            }
            if ((plVar6 != (long *)0x0) && ((char)plVar6[0x1d] != '\0')) {
              if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar4 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
              if (iVar4 != 0) {
                lVar5 = func_0x00f78adc(plVar12,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
                if ((uVar11 & 1) == 0) {
                  if (plVar12 == (long *)0x0) goto code_r0x018eef34;
                  lVar5 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170))
                  ;
                }
                else {
                  if (lVar5 == 0) {
code_r0x018eef34:
                    auVar32 = func_0x00f78af4();
                    plVar9 = auVar32._0_8_;
                    *(long *)(puVar3 + -0x60) = lVar10;
                    *(long *)(puVar3 + -0x58) = lVar5;
                    *(long **)(puVar3 + -0x50) = plVar12;
                    *(long **)(puVar3 + -0x48) = plVar6;
                    *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
                    *(undefined **)(puVar3 + -0x38) =
                         &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
                    if ((bRam0000000003eb66c2 & 1) == 0) {
                      func_0x00f78a20(0x3d20bc0);
                      func_0x00f78a20(0x3d25440);
                      bRam0000000003eb66c2 = 1;
                    }
                    if ((plVar9 != (long *)0x0) && ((char)plVar9[0x1d] != '\0')) {
                      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(plVar9,auVar32._8_8_,cVar1 != '\0',0);
                    }
                    return plVar9;
                  }
                  lVar5 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar5,0);
                }
                plVar6[0x19] = lVar5;
              }
              plVar6[9] = (long)plVar12;
            }
            return plVar6;
          }
          plVar6 = (long *)(**(code **)(*plVar6 + 0x558))
                                     (plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x560));
        }
        return plVar6;
      }
    }
  }
  else if ((*(long *)(lVar5 + 0x130) != 0) &&
          (lVar10 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar5 + 0x130),0), lVar10 != 0)) {
    param_2 = 0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    unaff_x20 = ppuVar15;
    unaff_x21 = 0x3d23990;
    unaff_x30 = (code *)&UNK_015ece48;
    goto code_r0x0322ef1c;
  }
  plVar12 = (long *)func_0x00f78af4();
  ppuStack_80 = (undefined1 **)0x3eb5000;
  lStack_78 = 0x3d23990;
  ppuStack_70 = ppuVar15;
  pcStack_68 = (code *)lVar5;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return plVar12;
}



// ============================================================
// RVA: 0x15ecd9c | Atlas.UI.LeaderboardEntryBehaviour.UpdateStatPanel
// ============================================================

/* WARNING: Possible PIC construction at 0x015ece44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ece64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ecec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015ec6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ec164) */
/* WARNING: Removing unreachable block (ram,0x015ecec8) */
/* WARNING: Removing unreachable block (ram,0x015eced0) */
/* WARNING: Removing unreachable block (ram,0x015ecea8) */
/* WARNING: Removing unreachable block (ram,0x015eceb0) */
/* WARNING: Removing unreachable block (ram,0x015ecebc) */
/* WARNING: Removing unreachable block (ram,0x015ece68) */
/* WARNING: Removing unreachable block (ram,0x015ece70) */
/* WARNING: Removing unreachable block (ram,0x015ece48) */
/* WARNING: Removing unreachable block (ram,0x015ece50) */
/* WARNING: Removing unreachable block (ram,0x015ece5c) */
/* WARNING: Removing unreachable block (ram,0x015ec6b8) */
/* WARNING: Removing unreachable block (ram,0x018ee2bc) */
/* WARNING: Removing unreachable block (ram,0x018ee2c0) */
/* WARNING: Removing unreachable block (ram,0x018ee2c8) */
/* WARNING: Removing unreachable block (ram,0x018ee2cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_LeaderboardEntryBehaviour__UpdateStatPanel(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x19;
  undefined8 **unaff_x20;
  undefined8 **ppuVar14;
  undefined8 uVar15;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *****pppppuVar16;
  undefined1 *puVar17;
  undefined8 **ppuVar18;
  code *pcVar19;
  undefined4 uVar20;
  undefined4 extraout_s0;
  ulong extraout_d0;
  ulong uVar21;
  ulong extraout_d0_00;
  ulong extraout_d0_01;
  ulong extraout_d0_02;
  ulong extraout_d0_03;
  ulong extraout_d0_04;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  ulong uVar28;
  ulong unaff_d8;
  float fVar29;
  ulong uVar30;
  ulong unaff_d9;
  ulong uVar31;
  ulong unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  undefined8 ****ppppuStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [12];
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 ***pppuStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 **ppuStack_50;
  code *pcStack_48;
  
  puVar2 = &stack0xffffffffffffffd0;
  if ((bRam0000000003eb540d & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb540d = 1;
  }
  uVar13 = param_2[4];
  uVar25 = *param_2;
  uVar15 = param_2[3];
  uVar12 = param_2[2];
  *(undefined8 *)(param_1 + 0x70) = param_2[1];
  *(undefined8 *)(param_1 + 0x68) = uVar25;
  *(undefined8 *)(param_1 + 0x88) = uVar13;
  *(undefined8 *)(param_1 + 0x80) = uVar15;
  *(undefined8 *)(param_1 + 0x78) = uVar12;
  ppuVar14 = *(undefined8 ***)(param_1 + 0x70);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(ppuVar14,0,0);
  uVar13 = 0x3d23990;
  uStack_70 = 0x3eb5000;
  ppuVar18 = (undefined8 **)&stack0xfffffffffffffff0;
  if ((iVar4 == 0) || (*(int *)(param_1 + 0x78) != 0)) {
    if (*(int *)(param_1 + 0x78) == 1) {
      if ((*(long *)(param_1 + 0x130) != 0) &&
         (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x130),0), lVar9 != 0)) {
        uVar12 = 1;
        pcVar19 = (code *)0x15ecea8;
        goto code_r0x0322ef1c;
      }
    }
    else {
      plVar10 = *(long **)(param_1 + 0x118);
      if (plVar10 != (long *)0x0) {
        fVar26 = *(float *)(param_1 + 0x84);
        uVar11 = (ulong)*(uint *)(param_1 + 0x80);
        (**(code **)(*plVar10 + 0x2a8))
                  (*(undefined4 *)(param_1 + 0x7c),uVar11,fVar26,*(undefined4 *)(param_1 + 0x88),
                   plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
        if ((*(long *)(param_1 + 0x50) != 0) &&
           (unaff_x20 = *(undefined8 ***)(param_1 + 0x18), unaff_x19 = param_1,
           unaff_x20 != (undefined8 **)0x0)) {
          fVar27 = *(float *)(param_1 + 0x68);
          unaff_d8 = (ulong)(uint)fVar27;
          fVar29 = *(float *)(param_1 + 0x58);
          unaff_d9 = (ulong)(uint)fVar29;
          fVar26 = *(float *)(*(long *)(param_1 + 0x50) + 0xdc);
          unaff_d10 = (ulong)(uint)fVar26;
          /*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(unaff_x20,0);
          fVar26 = fVar26 * 0.5;
          /*UnityEngine.RectTransform$$set_sizeDelta*/ func_0x03254e54(fVar27 + fVar29 + fVar26,unaff_x20,0);
          plVar10 = *(long **)(param_1 + 0x48);
          if (plVar10 != (long *)0x0) {
            fVar26 = 1.0 - *(float *)(param_1 + 0x68) /
                           (*(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x58));
            if (_UNK_033f8758 < ABS(*(float *)((long)plVar10 + 0x144) - fVar26)) {
              *(float *)((long)plVar10 + 0x144) = fVar26;
                    /* WARNING: Could not recover jumptable at 0x02f8b04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              plVar10 = (long *)(**(code **)(*plVar10 + 0x2f8))
                                          (plVar10,*(undefined8 *)(*plVar10 + 0x300));
              return plVar10;
            }
            return plVar10;
          }
        }
        auVar32 = func_0x00f78af4();
        uVar12 = auVar32._8_8_;
        pcStack_48 = Atlas_UI_LeaderboardEntryBehaviour__SetDeltaStarsActive;
        uVar13 = 0x3d23990;
        uStack_70 = unaff_x22;
        uStack_68 = unaff_x21;
        puStack_60 = unaff_x20;
        lStack_58 = unaff_x19;
        ppuStack_50 = (undefined8 **)&stack0xfffffffffffffff0;
        if ((bRam0000000003eb5404 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb5404 = 1;
        }
        uVar15 = *(undefined8 *)(auVar32._0_8_ + 0x138);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar15,0);
        if ((int)plVar10 == 0) {
          return plVar10;
        }
        lVar9 = *(long *)(auVar32._0_8_ + 0x138);
        if ((lVar9 != 0) && (lVar9 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(lVar9,0), lVar9 != 0)) {
          puVar2 = &stack0xffffffffffffffc0;
          param_1 = lStack_58;
          ppuVar14 = (undefined8 **)puStack_60;
          uVar13 = uStack_68;
          ppuVar18 = ppuStack_50;
          pcVar19 = pcStack_48;
          goto code_r0x0322ef1c;
        }
        auVar33 = func_0x00f78af4();
        uStack_a4 = auVar33._8_4_;
        uStack_a0 = 0x3d23990;
        pcStack_78 = Atlas_UI_LeaderboardEntryBehaviour__SetDeltaStarsText;
        uStack_98 = uVar15;
        pppuStack_80 = &ppuStack_50;
        auStack_90 = auVar32;
        if ((bRam0000000003eb5405 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d66fb0);
          bRam0000000003eb5405 = 1;
        }
        plVar10 = *(long **)(auVar33._0_8_ + 0x138);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar5 = (long *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar10,0);
        if ((int)plVar5 != 0) {
          plVar5 = *(long **)(auVar33._0_8_ + 0x140);
          uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_a4,0);
          uVar12 = 0;
          uVar15 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('+')*/ uRam0000000003d66fb0,uVar15);
          if (plVar5 == (long *)0x0) {
            plVar5 = (long *)func_0x00f78af4();
            puVar2 = &stack0xffffffffffffff00;
            pcStack_b8 = Atlas_UI_LeaderboardEntryBehaviour__PlayCrownSpawnTween;
            pppppuVar16 = &ppppuStack_c0;
            uVar28 = (ulong)(uint)fVar26;
            uVar30 = uVar11 & 0xffffffff;
            uVar31 = extraout_d0 & 0xffffffff;
            uVar15 = 0x3eb5000;
            uVar24 = uVar11;
            fVar27 = fVar26;
            ppppuStack_c0 = &pppuStack_80;
            if ((bRam0000000003eb5406 & 1) == 0) {
              func_0x00f78a20(0x3d53528);
              bRam0000000003eb5406 = 1;
            }
            if (plVar5[7] == 0) {
              pcVar19 = Atlas_UI_LeaderboardEntryBehaviour__StartLargeThenGoNormal;
              plVar8 = (long *)func_0x00f78af4();
              lVar9 = extraout_x1_00;
              uVar25 = extraout_x1;
              uVar21 = extraout_d0_00;
            }
            else {
              lVar9 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(plVar5[7],uRam0000000003d53528);
              uVar21 = extraout_d0 & 0xffffffff;
              uVar24 = uVar11 & 0xffffffff;
              uVar13 = 0x3d23990;
              uVar15 = 0x3d23990;
              uVar25 = 0;
              puVar2 = auStack_b0;
              plVar8 = plVar5;
              uVar12 = extraout_x1;
              plVar5 = plVar10;
              pppppuVar16 = (undefined8 *****)ppppuStack_c0;
              pcVar19 = pcStack_b8;
              fVar27 = fVar26;
              uVar28 = unaff_d8;
              uVar30 = unaff_d9;
              uVar31 = unaff_d10;
            }
            while( true ) {
              while( true ) {
                puVar3 = puVar2 + -0x80;
                *(undefined8 *)(puVar2 + -0x80) = unaff_d11;
                *(ulong *)(puVar2 + -0x78) = uVar31;
                *(ulong *)(puVar2 + -0x70) = uVar30;
                *(ulong *)(puVar2 + -0x68) = uVar28;
                *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
                *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
                *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
                *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
                *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
                *(undefined8 *)(puVar2 + -0x38) = unaff_x23;
                *(undefined8 *)(puVar2 + -0x30) = uVar13;
                *(undefined8 *)(puVar2 + -0x28) = uVar15;
                *(long **)(puVar2 + -0x20) = plVar5;
                *(undefined8 *)(puVar2 + -0x18) = uVar25;
                *(undefined8 ******)(puVar2 + -0x10) = pppppuVar16;
                *(code **)(puVar2 + -8) = pcVar19;
                puVar17 = puVar2 + -0x10;
                uVar11 = (ulong)(uint)fVar27;
                uVar22 = (uint)uVar24;
                unaff_x23 = 0x3d27df8;
                uVar23 = uVar22;
                if ((bRam0000000003eb540e & 1) == 0) {
                  func_0x00f78a20(0x3d2db28);
                  func_0x00f78a20(0x3d1c100);
                  func_0x00f78a20(0x3d20bc0);
                  func_0x00f78a20(0x3d5e780);
                  func_0x00f78a20(0x3d5e7b8);
                  func_0x00f78a20(0x3d5e868);
                  func_0x00f78a20(0x3d63540);
                  func_0x00f78a20(0x3d27df8);
                  bRam0000000003eb540e = 1;
                }
                lVar6 = func_0x00f78aec(/*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0_TypeInfo*/ uRam0000000003d27df8);
                /*Atlas.UI.LeaderboardEntryBehaviour.<>c__DisplayClass71_0$$.ctor*/ func_0x0155abe8(lVar6,0);
                if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) = lVar9, lVar9 != 0)) {
                  uVar20 = /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar9,0);
                  uVar13 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<float>_TypeInfo*/ uRam0000000003d1c100);
                  /*DG.Tweening.Core.DOSetter<float>$$.ctor*/ func_0x01e1c220(uVar13,lVar6,uRam0000000003d63540,uRam0000000003d2db28);
                  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  plVar5 = (long *)/*DG.Tweening.DOTween$$To*/ func_0x01694ae4(uVar21 & 0xffffffff,uVar20,uVar22,uVar13,0);
                  uVar15 = 0x15ec164;
                  plVar10 = *(long **)(lVar6 + 0x10);
                  uVar25 = uRam0000000003d5e868;
                  goto code_r0x018eee1c;
                }
                plVar10 = (long *)func_0x00f78af4();
                *(undefined8 *)(puVar2 + -0xe0) = unaff_d11;
                *(ulong *)(puVar2 + -0xd8) = uVar21 & 0xffffffff;
                *(ulong *)(puVar2 + -0xd0) = uVar24 & 0xffffffff;
                *(ulong *)(puVar2 + -200) = uVar11;
                *(undefined8 *)(puVar2 + -0xc0) = unaff_x24;
                *(undefined8 *)(puVar2 + -0xb8) = 0x3d27df8;
                *(long *)(puVar2 + -0xb0) = lVar6;
                *(long *)(puVar2 + -0xa8) = lVar9;
                *(undefined8 *)(puVar2 + -0xa0) = uVar12;
                *(long **)(puVar2 + -0x98) = plVar8;
                *(undefined1 **)(puVar2 + -0x90) = puVar17;
                *(code **)(puVar2 + -0x88) =
                     Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerEmphasisTween;
                fVar26 = fVar27;
                uVar22 = uVar23;
                if ((bRam0000000003eb5407 & 1) == 0) {
                  func_0x00f78a20(0x3d578e0);
                  func_0x00f78a20(0x3d5e780);
                  func_0x00f78a20(0x3d5e7b8);
                  func_0x00f78a20(0x3d5e868);
                  bRam0000000003eb5407 = 1;
                }
                if (plVar10[0x22] != 0) {
                  uVar13 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar10[0x22],uRam0000000003d578e0);
                  uVar13 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(extraout_d0_01 & 0xffffffff,extraout_d0_01 & 0xffffffff,
                                           (int)extraout_d0_01,uVar23,0,uVar13,0,0);
                  uVar13 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(fVar27,uVar13,uRam0000000003d5e780);
                  plVar5 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar13,extraout_x1_01,uRam0000000003d5e7b8);
                  puVar17 = *(undefined1 **)(puVar2 + -0x90);
                  uVar15 = *(undefined8 *)(puVar2 + -0x88);
                  uVar12 = *(undefined8 *)(puVar2 + -0xa0);
                  lVar6 = *(long *)(puVar2 + -0xb0);
                  uVar13 = *(undefined8 *)(puVar2 + -0xa8);
                  puVar3 = puVar2 + -0x80;
                  uVar25 = uRam0000000003d5e868;
                  plVar8 = *(long **)(puVar2 + -0x98);
                  goto code_r0x018eee1c;
                }
                plVar7 = (long *)func_0x00f78af4();
                *(undefined8 *)(puVar2 + -0x130) = unaff_d11;
                *(ulong *)(puVar2 + -0x128) = extraout_d0_01 & 0xffffffff;
                *(ulong *)(puVar2 + -0x120) = (ulong)uVar23;
                *(ulong *)(puVar2 + -0x118) = (ulong)(uint)fVar27;
                *(long *)(puVar2 + -0x110) = lVar6;
                *(undefined8 *)(puVar2 + -0x108) = 0x3eb5000;
                *(undefined8 *)(puVar2 + -0x100) = extraout_x1_01;
                *(long **)(puVar2 + -0xf8) = plVar10;
                *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0x90;
                *(code **)(puVar2 + -0xe8) =
                     Atlas_UI_LeaderboardEntryBehaviour__PlayStarDeltaSpawnTween;
                fVar27 = fVar26;
                uVar23 = uVar22;
                if ((bRam0000000003eb5408 & 1) == 0) {
                  func_0x00f78a20(0x3d578e0);
                  func_0x00f78a20(0x3d23990);
                  bRam0000000003eb5408 = 1;
                }
                lVar9 = plVar7[0x27];
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar9,0);
                if (iVar4 == 0) {
                  return (long *)0x0;
                }
                if (plVar7[0x27] == 0) break;
                lVar9 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar7[0x27],uRam0000000003d578e0);
                uVar21 = extraout_d0_02 & 0xffffffff;
                uVar24 = (ulong)uVar22;
                pppppuVar16 = *(undefined8 ******)(puVar2 + -0xf0);
                pcVar19 = *(code **)(puVar2 + -0xe8);
                plVar5 = *(long **)(puVar2 + -0x100);
                uVar25 = *(undefined8 *)(puVar2 + -0xf8);
                uVar13 = *(undefined8 *)(puVar2 + -0x110);
                uVar15 = *(undefined8 *)(puVar2 + -0x108);
                uVar30 = *(ulong *)(puVar2 + -0x120);
                uVar28 = *(ulong *)(puVar2 + -0x118);
                unaff_d11 = *(undefined8 *)(puVar2 + -0x130);
                uVar31 = *(ulong *)(puVar2 + -0x128);
                puVar2 = puVar2 + -0xe0;
                plVar8 = plVar7;
                uVar12 = extraout_x1_02;
                fVar27 = fVar26;
              }
              plVar8 = (long *)func_0x00f78af4();
              *(undefined8 *)(puVar2 + -0x180) = unaff_d11;
              *(ulong *)(puVar2 + -0x178) = extraout_d0_02 & 0xffffffff;
              *(ulong *)(puVar2 + -0x170) = (ulong)uVar22;
              *(ulong *)(puVar2 + -0x168) = (ulong)(uint)fVar26;
              *(undefined8 *)(puVar2 + -0x160) = 0x3d23990;
              *(long *)(puVar2 + -0x158) = lVar9;
              *(long **)(puVar2 + -0x150) = plVar7;
              *(undefined8 *)(puVar2 + -0x148) = extraout_x1_02;
              *(undefined1 **)(puVar2 + -0x140) = puVar2 + -0xf0;
              *(code **)(puVar2 + -0x138) =
                   Atlas_UI_LeaderboardEntryBehaviour__PlayStatIconContainerSpawnTween;
              fVar26 = fVar27;
              uVar22 = uVar23;
              if ((bRam0000000003eb5409 & 1) == 0) {
                func_0x00f78a20(0x3d578e0);
                bRam0000000003eb5409 = 1;
              }
              if (plVar8[0x22] == 0) break;
              lVar9 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar8[0x22],uRam0000000003d578e0);
              uVar21 = extraout_d0_03 & 0xffffffff;
              uVar24 = (ulong)uVar23;
              pppppuVar16 = *(undefined8 ******)(puVar2 + -0x140);
              pcVar19 = *(code **)(puVar2 + -0x138);
              plVar5 = *(long **)(puVar2 + -0x150);
              uVar25 = *(undefined8 *)(puVar2 + -0x148);
              uVar13 = *(undefined8 *)(puVar2 + -0x160);
              uVar15 = *(undefined8 *)(puVar2 + -0x158);
              uVar30 = *(ulong *)(puVar2 + -0x170);
              uVar28 = *(ulong *)(puVar2 + -0x168);
              unaff_d11 = *(undefined8 *)(puVar2 + -0x180);
              uVar31 = *(ulong *)(puVar2 + -0x178);
              puVar2 = puVar2 + -0x130;
              uVar12 = extraout_x1_03;
            }
            plVar7 = (long *)func_0x00f78af4();
            *(ulong *)(puVar2 + -0x1c0) = (ulong)uVar23;
            *(ulong *)(puVar2 + -0x1b8) = (ulong)(uint)fVar27;
            *(undefined8 *)(puVar2 + -0x1b0) = 0x3d23990;
            *(undefined8 *)(puVar2 + -0x1a8) = 0x3eb5000;
            *(long **)(puVar2 + -0x1a0) = plVar8;
            *(undefined8 *)(puVar2 + -0x198) = extraout_x1_03;
            *(undefined1 **)(puVar2 + -400) = puVar2 + -0x140;
            *(code **)(puVar2 + -0x188) =
                 Atlas_UI_LeaderboardEntryBehaviour__PlayEnterStatsStarDeltaTween;
            uVar23 = uVar22;
            if ((bRam0000000003eb540a & 1) == 0) {
              func_0x00f78a20(0x3d578e0);
              func_0x00f78a20(0x3d23990);
              func_0x00f78a20(0x3d5e768);
              func_0x00f78a20(0x3d5e7a0);
              func_0x00f78a20(0x3d5e838);
              bRam0000000003eb540a = 1;
            }
            lVar9 = plVar7[0x27];
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar9,0);
            if (iVar4 == 0) {
              return (long *)0x0;
            }
            if (plVar7[0x27] == 0) {
              plVar10 = (long *)func_0x00f78af4();
              puVar3 = puVar2 + -0x230;
              *(undefined8 *)(puVar2 + -0x230) = unaff_d11;
              *(ulong *)(puVar2 + -0x228) = extraout_d0_03 & 0xffffffff;
              *(ulong *)(puVar2 + -0x220) = extraout_d0_04 & 0xffffffff;
              *(ulong *)(puVar2 + -0x218) = (ulong)uVar22;
              *(undefined8 *)(puVar2 + -0x210) = unaff_x26;
              *(undefined8 *)(puVar2 + -0x208) = unaff_x25;
              *(undefined8 *)(puVar2 + -0x200) = unaff_x24;
              *(undefined8 *)(puVar2 + -0x1f8) = 0x3d27df8;
              *(undefined8 *)(puVar2 + -0x1f0) = 0x3d23990;
              *(long *)(puVar2 + -0x1e8) = lVar9;
              *(undefined8 *)(puVar2 + -0x1e0) = extraout_x1_04;
              *(long **)(puVar2 + -0x1d8) = plVar7;
              *(undefined1 **)(puVar2 + -0x1d0) = puVar2 + -400;
              *(code **)(puVar2 + -0x1c8) = Atlas_UI_LeaderboardEntryBehaviour__PlayHideStarsTween;
              puVar17 = puVar2 + -0x1d0;
              if ((bRam0000000003eb540b & 1) == 0) {
                func_0x00f78a20(0x3d59de8);
                func_0x00f78a20(0x3d23990);
                func_0x00f78a20(0x3d25428);
                func_0x00f78a20(0x3d5e6c0);
                func_0x00f78a20(0x3d5e758);
                func_0x00f78a20(0x3d5e788);
                func_0x00f78a20(0x3d5e800);
                bRam0000000003eb540b = 1;
              }
              lVar9 = plVar10[0x29];
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar4 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar9,0);
              if (iVar4 == 0) {
                return (long *)0x0;
              }
              uVar13 = 0x3d5e000;
              lVar6 = 0x3d5e000;
              uVar12 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5e34(extraout_s0,uVar23,plVar10[0x29],0);
              uVar12 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(fVar26,uVar12,uRam0000000003d5e758);
              plVar5 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar12,extraout_x1_05,uRam0000000003d5e788);
              uVar15 = 0x15ec6b8;
              uVar25 = uRam0000000003d5e800;
              plVar8 = plVar10;
              uVar12 = extraout_x1_05;
            }
            else {
              uVar13 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar7[0x27],uRam0000000003d578e0);
              uVar13 = /*DG.Tweening.DOTweenModuleUI$$DOAnchorPosX*/ func_0x016a707c(0,extraout_d0_04 & 0xffffffff,uVar13,0,0);
              uVar13 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(uVar22,uVar13,uRam0000000003d5e768);
              plVar5 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar13,extraout_x1_04,uRam0000000003d5e7a0);
              puVar17 = *(undefined1 **)(puVar2 + -400);
              uVar15 = *(undefined8 *)(puVar2 + -0x188);
              uVar12 = *(undefined8 *)(puVar2 + -0x1a0);
              lVar6 = *(long *)(puVar2 + -0x1b0);
              uVar13 = *(undefined8 *)(puVar2 + -0x1a8);
              puVar3 = puVar2 + -0x180;
              plVar10 = plVar7;
              uVar25 = uRam0000000003d5e838;
              plVar8 = *(long **)(puVar2 + -0x198);
            }
code_r0x018eee1c:
            *(long *)(puVar3 + -0x30) = lVar6;
            *(undefined8 *)(puVar3 + -0x28) = uVar13;
            *(undefined8 *)(puVar3 + -0x20) = uVar12;
            *(long **)(puVar3 + -0x18) = plVar8;
            *(undefined1 **)(puVar3 + -0x10) = puVar17;
            *(undefined8 *)(puVar3 + -8) = uVar15;
            if ((bRam0000000003eb66c1 & 1) == 0) {
              func_0x00f78a20(0x3d208f0,plVar10,uVar25);
              func_0x00f78a20(0x3d20bc0);
              func_0x00f78a20(0x3d23990);
              bRam0000000003eb66c1 = 1;
            }
            if ((plVar5 != (long *)0x0) && ((char)plVar5[0x1d] != '\0')) {
              if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar4 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
              if (iVar4 != 0) {
                lVar9 = func_0x00f78adc(plVar10,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
                if ((uVar11 & 1) == 0) {
                  if (plVar10 == (long *)0x0) goto code_r0x018eef34;
                  lVar9 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170))
                  ;
                }
                else {
                  if (lVar9 == 0) {
code_r0x018eef34:
                    auVar32 = func_0x00f78af4();
                    plVar8 = auVar32._0_8_;
                    *(long *)(puVar3 + -0x60) = lVar6;
                    *(long *)(puVar3 + -0x58) = lVar9;
                    *(long **)(puVar3 + -0x50) = plVar10;
                    *(long **)(puVar3 + -0x48) = plVar5;
                    *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
                    *(undefined **)(puVar3 + -0x38) =
                         &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
                    if ((bRam0000000003eb66c2 & 1) == 0) {
                      func_0x00f78a20(0x3d20bc0);
                      func_0x00f78a20(0x3d25440);
                      bRam0000000003eb66c2 = 1;
                    }
                    if ((plVar8 != (long *)0x0) && ((char)plVar8[0x1d] != '\0')) {
                      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(plVar8,auVar32._8_8_,cVar1 != '\0',0);
                    }
                    return plVar8;
                  }
                  lVar9 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar9,0);
                }
                plVar5[0x19] = lVar9;
              }
              plVar5[9] = (long)plVar10;
            }
            return plVar5;
          }
          plVar5 = (long *)(**(code **)(*plVar5 + 0x558))
                                     (plVar5,uVar15,*(undefined8 *)(*plVar5 + 0x560));
        }
        return plVar5;
      }
    }
  }
  else if ((*(long *)(param_1 + 0x130) != 0) &&
          (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x130),0), lVar9 != 0)) {
    uVar12 = 0;
    puVar2 = &stack0xffffffffffffffd0;
    pcVar19 = (code *)0x15ece48;
code_r0x0322ef1c:
    *(undefined8 *)(puVar2 + -0x30) = uStack_70;
    *(undefined8 *)(puVar2 + -0x28) = uVar13;
    *(undefined8 ***)(puVar2 + -0x20) = ppuVar14;
    *(long *)(puVar2 + -0x18) = param_1;
    *(undefined8 ***)(puVar2 + -0x10) = ppuVar18;
    *(code **)(puVar2 + -8) = pcVar19;
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar10 = (long *)(*pcRam0000000003ebf4c0)(lVar9,uVar12);
    return plVar10;
  }
  plVar10 = (long *)func_0x00f78af4();
  puStack_60 = (undefined8 *)0x3eb5000;
  lStack_58 = 0x3d23990;
  ppuStack_50 = ppuVar14;
  pcStack_48 = (code *)param_1;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return plVar10;
}



// ============================================================
// RVA: 0x15ecf14 | Atlas.UI.LeaderboardEntryBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_LeaderboardEntryBehaviour___ctor(ulong param_1)

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



// ============================================================
// RVA: 0x15ecf1c | Atlas.UI.LeaderboardEntryBehaviour.<PlayHideStarsTween>b__52_0
// ============================================================

/* WARNING: Possible PIC construction at 0x015ecf98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015ecf9c) */
/* WARNING: Removing unreachable block (ram,0x015ed034) */
/* WARNING: Removing unreachable block (ram,0x015ecfa8) */
/* WARNING: Removing unreachable block (ram,0x015ed018) */
/* WARNING: Removing unreachable block (ram,0x015ed010) */
/* WARNING: Removing unreachable block (ram,0x015ed008) */
/* WARNING: Removing unreachable block (ram,0x015ed000) */
/* WARNING: Removing unreachable block (ram,0x015ecff8) */
/* WARNING: Removing unreachable block (ram,0x015ecff0) */
/* WARNING: Removing unreachable block (ram,0x015ecfe8) */
/* WARNING: Removing unreachable block (ram,0x015ecfe0) */
/* WARNING: Removing unreachable block (ram,0x015ecfd8) */
/* WARNING: Removing unreachable block (ram,0x015ecfd0) */
/* WARNING: Removing unreachable block (ram,0x015ecfc8) */
/* WARNING: Removing unreachable block (ram,0x015ecfc0) */
/* WARNING: Removing unreachable block (ram,0x015ed01c) */
/* WARNING: Recovered jumptable eliminated as dead code */

long Atlas_UI_LeaderboardEntryBehaviour___PlayHideStarsTween_b__52_0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((*(long *)(param_1 + 0x148) != 0) &&
     (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x148),0), lVar3 != 0)) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*pcRam0000000003ebf4c0)(lVar3,0);
    return lVar3;
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb540f & 1) == 0) {
    func_0x00f78a20(0x3d76be8);
    bRam0000000003eb540f = 1;
  }
  lVar2 = /*STR('_')*/ lRam0000000003d76be8;
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((bRam0000000003eb9467 & 1) == 0) {
    func_0x00f78a20(0x3d24dd0,/*STR('_')*/ lRam0000000003d76be8,0);
    bRam0000000003eb9467 = 1;
  }
  if ((lVar3 == 0) || (iVar1 = *(int *)(lVar3 + 0x10), iVar1 == 0)) {
    if ((lVar2 == 0) || (lVar3 = lVar2, *(int *)(lVar2 + 0x10) == 0)) {
      lVar3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
  }
  else if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) != 0)) {
    lVar4 = func_0x00f834ac(*(int *)(lVar2 + 0x10) + iVar1);
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar4,0,lVar3);
    /*System.String$$FillStringChecked*/ func_0x029cc26c(lVar4,iVar1,lVar2);
    lVar3 = lVar4;
  }
  return lVar3;
}



