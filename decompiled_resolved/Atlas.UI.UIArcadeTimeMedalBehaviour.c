// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UIArcadeTimeMedalBehaviour

// ============================================================
// RVA: 0x1513e68 | Atlas.UI.UIArcadeTimeMedalBehaviour.get_TimeText
// ============================================================

undefined8 Atlas_UI_UIArcadeTimeMedalBehaviour__get_TimeText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// ============================================================
// RVA: 0x1513e70 | Atlas.UI.UIArcadeTimeMedalBehaviour.SetVisible
// ============================================================

/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UIArcadeTimeMedalBehaviour__SetVisible
               (undefined1 param_1 [16],float param_2,float param_3,undefined4 param_4,long param_5,
               undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long extraout_x1;
  long lVar11;
  undefined8 *puVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 ******unaff_x29;
  undefined8 *******pppppppuVar14;
  undefined *unaff_x30;
  undefined *puVar15;
  uint extraout_s0;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined8 unaff_d9;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 ******ppppppuStack_60;
  undefined *puStack_58;
  undefined8 *****pppppuStack_20;
  undefined *puStack_18;
  
  lVar4 = *(long *)(param_5 + 0x18);
  if (lVar4 != 0) goto UnityEngine_GameObject__SetActive;
  lVar5 = func_0x00f78af4();
  puStack_18 = &Atlas_UI_UIArcadeTimeMedalBehaviour__ShowPersonalBest;
  uVar13 = 0x3eb4000;
  lVar11 = param_7;
  pppppuStack_20 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d90 & 1) == 0) {
    pppppuStack_20 = (undefined8 *****)&stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d578e0);
    func_0x00f78a20(0x3d5e770);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e860);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d68908);
    func_0x00f78a20(0x3d68900);
    bRam0000000003eb4d90 = 1;
  }
  lVar6 = extraout_x1;
  if ((int)extraout_x1 == 0) {
code_r0x01514084:
    lVar4 = *(long *)(lVar5 + 0x38);
    if ((int)param_7 == 0) {
      if (lVar4 != 0) {
        puVar12 = (undefined8 *)0x3d68900;
        goto code_r0x015140a8;
      }
    }
    else if (lVar4 != 0) {
      puVar12 = (undefined8 *)0x3d68908;
code_r0x015140a8:
      lVar11 = 0;
      /*Core.Localisation.LocaliseTextBehaviour$$SetLocalisationKey*/ func_0x016516cc(lVar4,*puVar12);
      lVar4 = *(long *)(lVar5 + 0x20);
      if (lVar4 != 0) {
        param_6 = 1;
        register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
        unaff_x29 = (undefined8 ******)pppppuStack_20;
        unaff_x30 = puStack_18;
UnityEngine_GameObject__SetActive:
        *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *******)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar4 = (*pcRam0000000003ebf4c0)(lVar4,param_6);
        return lVar4;
      }
    }
  }
  else if (*(long *)(lVar5 + 0x20) != 0) {
    lVar6 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(lVar5 + 0x20),uRam0000000003d578e0);
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    if (lVar6 != 0) {
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar6,0);
      /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(lVar6,0);
      uVar13 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,_UNK_033f82c4,lVar6,0);
      uVar13 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar13,9,uRam0000000003d5e7a8);
      /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(extraout_s0,uVar13,uRam0000000003d5e770);
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar13 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
      /*DG.Tweening.TweenSettingsExtensions$$AppendInterval*/ func_0x016c3110(extraout_s0,uVar13,0);
      param_2 = _UNK_033f8140;
      uVar7 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,lVar6,0);
      uVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar7,lVar6,uRam0000000003d5e850);
      /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar13,uVar7,0);
      fVar16 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      param_2 = param_2 * _UNK_033f83ec;
      param_3 = param_3 * _UNK_033f83ec;
      param_4 = _UNK_033f86cc;
      uVar7 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar16 * _UNK_033f83ec,lVar6,2,0);
      uVar7 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar13,uVar7,0);
      lVar11 = lRam0000000003d5e860;
      /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar7,lVar6);
      goto code_r0x01514084;
    }
  }
  auVar20 = func_0x00f78af4();
  puVar1 = &uStack_80;
  puStack_58 = &Atlas_UI_UIArcadeTimeMedalBehaviour__Set;
  pppppppuVar14 = &ppppppuStack_60;
  uStack_80 = uVar13;
  lStack_78 = lVar6;
  lStack_70 = param_7;
  lStack_68 = lVar5;
  ppppppuStack_60 = &pppppuStack_20;
  if (lVar11 == 0) {
    puVar15 = &Atlas_UI_UIArcadeTimeMedalBehaviour__Set;
    auVar21 = func_0x00f78af4();
  }
  else {
    uVar13 = Atlas_UI_ArcadeEventMetagameData__GetTimeFormattedString(lVar11,auVar20._8_8_,0);
    auVar21._8_8_ = uVar13;
    auVar21._0_8_ = auVar20._0_8_;
    lVar11 = Atlas_UI_ArcadeEventMetagameData__GetMedal(lVar11,auVar20._8_8_,0);
    puVar1 = (undefined8 *)&stack0xffffffffffffffb0;
    lVar5 = lStack_68;
    param_7 = lStack_70;
    lVar6 = lStack_78;
    uVar13 = uStack_80;
    pppppppuVar14 = (undefined8 *******)ppppppuStack_60;
    puVar15 = puStack_58;
  }
  lVar4 = auVar21._0_8_;
  *(long *)((long)puVar1 + -0x20) = param_7;
  *(long *)((long)puVar1 + -0x18) = lVar5;
  *(undefined8 ********)((long)puVar1 + -0x10) = pppppppuVar14;
  *(undefined **)((long)puVar1 + -8) = puVar15;
  plVar8 = *(long **)(lVar4 + 0x28);
  if (plVar8 == (long *)0x0) {
code_r0x01514194:
    lVar11 = func_0x00f78af4();
    *(undefined8 *)((long)puVar1 + -0x50) = uVar13;
    *(long *)((long)puVar1 + -0x48) = lVar6;
    *(long *)((long)puVar1 + -0x40) = param_7;
    *(long *)((long)puVar1 + -0x38) = lVar4;
    *(undefined1 **)((long)puVar1 + -0x30) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined **)((long)puVar1 + -0x28) = &Atlas_UI_UIArcadeTimeMedalBehaviour___ctor;
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
  (**(code **)(*plVar8 + 0x558))(plVar8,auVar21._8_8_,*(undefined8 *)(*plVar8 + 0x560));
  lVar5 = Atlas_UI_ArcadeMedalSprites__GetMedalSprite(lVar4 + 0x40,lVar11,0);
  plVar8 = *(long **)(lVar4 + 0x30);
  param_7 = lVar11;
  if (plVar8 == (long *)0x0) goto code_r0x01514194;
  *(undefined8 *)((long)puVar1 + -0x50) = unaff_d9;
  *(ulong *)((long)puVar1 + -0x48) = (ulong)extraout_s0;
  *(undefined8 *)((long)puVar1 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar1 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar1 + -0x30) = uVar13;
  *(long *)((long)puVar1 + -0x28) = lVar6;
  *(undefined8 *)((long)puVar1 + -0x20) = *(undefined8 *)((long)puVar1 + -0x20);
  *(undefined8 *)((long)puVar1 + -0x18) = *(undefined8 *)((long)puVar1 + -0x18);
  *(undefined8 *)((long)puVar1 + -0x10) = *(undefined8 *)((long)puVar1 + -0x10);
  *(undefined8 *)((long)puVar1 + -8) = *(undefined8 *)((long)puVar1 + -8);
  if ((bRam0000000003ec2cc2 & 1) == 0) {
    func_0x00f78a20(0x3d23990,lVar5,0);
    bRam0000000003ec2cc2 = 1;
  }
  *(undefined8 *)((long)puVar1 + -0x60) = 0;
  *(undefined8 *)((long)puVar1 + -0x58) = 0;
  lVar4 = plVar8[0x1a];
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
  if (iVar3 == 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
    if ((int)lVar11 == 0) {
      return lVar11;
    }
    if (lVar5 != 0) {
      uVar17 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar5,0);
      *(undefined4 *)((long)puVar1 + -0x60) = uVar17;
      *(float *)((long)puVar1 + -0x5c) = param_2;
      *(float *)((long)puVar1 + -0x58) = param_3;
      *(undefined4 *)((long)puVar1 + -0x54) = param_4;
      fVar18 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)puVar1 + -0x60),0);
      fVar16 = param_2;
      fVar19 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(bool *)(plVar8 + 6) =
           (fVar18 - fVar19) * (fVar18 - fVar19) + (param_2 - fVar16) * (param_2 - fVar16) <
           _UNK_033f8490;
      lVar4 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar5,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = 0;
code_r0x032c2400:
      uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar4,uVar7,0);
      *(undefined1 *)((long)plVar8 + 0x31) = uVar2;
      plVar8[0x1a] = lVar5;
      (**(code **)(*plVar8 + 0x2d8))(plVar8,*(undefined8 *)(*plVar8 + 0x2e0));
      puVar15 = &UNK_032c242c;
      plVar10 = plVar8;
      goto code_r0x032c244c;
    }
  }
  else {
    lVar4 = plVar8[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,lVar5,0);
    if ((int)lVar11 == 0) {
      return lVar11;
    }
    if (plVar8[0x1a] != 0) {
      uVar17 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar8[0x1a],0);
      *(undefined4 *)((long)puVar1 + -0x60) = uVar17;
      *(float *)((long)puVar1 + -0x5c) = param_2;
      *(float *)((long)puVar1 + -0x58) = param_3;
      *(undefined4 *)((long)puVar1 + -0x54) = param_4;
      fVar18 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)puVar1 + -0x60),0);
      fVar16 = param_2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar9 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
      if ((uVar9 & 1) == 0) {
        fVar19 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      }
      else {
        if (lVar5 == 0) goto code_r0x032c2448;
        uVar17 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar5,0);
        *(undefined4 *)((long)puVar1 + -0x60) = uVar17;
        *(float *)((long)puVar1 + -0x5c) = fVar16;
        *(float *)((long)puVar1 + -0x58) = param_3;
        *(undefined4 *)((long)puVar1 + -0x54) = param_4;
        fVar19 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)puVar1 + -0x60),0);
      }
      *(bool *)(plVar8 + 6) = fVar18 == fVar19 && param_2 == fVar16;
      if (plVar8[0x1a] != 0) {
        lVar4 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar8[0x1a],0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar5,0);
        uVar7 = 0;
        if (iVar3 != 0) {
          uVar13 = uVar7;
          if (lVar5 == 0) goto code_r0x032c2448;
          uVar7 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar5,0);
        }
        uVar13 = uVar7;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        goto code_r0x032c2400;
      }
    }
  }
code_r0x032c2448:
  puVar15 = &UnityEngine_UI_Image__TrackSprite;
  plVar10 = (long *)func_0x00f78af4();
code_r0x032c244c:
  *(undefined8 *)((long)puVar1 + -0x90) = uVar13;
  *(long *)((long)puVar1 + -0x88) = lVar4;
  *(long *)((long)puVar1 + -0x80) = lVar5;
  *(long **)((long)puVar1 + -0x78) = plVar8;
  *(undefined1 **)((long)puVar1 + -0x70) = (undefined1 *)((long)puVar1 + -0x10);
  *(undefined **)((long)puVar1 + -0x68) = puVar15;
  if ((bRam0000000003ec2cd5 & 1) == 0) {
    func_0x00f78a20(0x3d226e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec2cd5 = 1;
  }
  uVar13 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar10);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,0,0);
  if ((int)lVar4 != 0) {
    lVar4 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar10);
    if (lVar4 == 0) {
      lVar4 = func_0x00f78af4();
      *(undefined2 *)(lVar4 + 0x30) = 0;
      return lVar4;
    }
    uVar13 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar4,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar13,0,0);
    if ((int)lVar4 != 0) {
      if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar4 = /*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar10);
      *(undefined1 *)((long)plVar10 + 0xfc) = 1;
    }
  }
  return lVar4;
}



// ============================================================
// RVA: 0x1513e90 | Atlas.UI.UIArcadeTimeMedalBehaviour.ShowPersonalBest
// ============================================================

/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UIArcadeTimeMedalBehaviour__ShowPersonalBest
               (uint param_1,float param_2,float param_3,undefined4 param_4,long param_5,
               long param_6,long param_7)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 *******pppppppuVar13;
  undefined *puVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined8 unaff_d9;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 ******ppppppuStack_50;
  undefined *puStack_48;
  
  uVar12 = 0x3eb4000;
  lVar10 = param_7;
  if ((bRam0000000003eb4d90 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d578e0);
    func_0x00f78a20(0x3d5e770);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d5e860);
    func_0x00f78a20(0x3d5e850);
    func_0x00f78a20(0x3d68908);
    func_0x00f78a20(0x3d68900);
    bRam0000000003eb4d90 = 1;
  }
  if ((int)param_6 == 0) {
LAB_01514084:
    lVar5 = *(long *)(param_5 + 0x38);
    if ((int)param_7 == 0) {
      if (lVar5 != 0) {
        puVar11 = (undefined8 *)0x3d68900;
        goto LAB_015140a8;
      }
    }
    else if (lVar5 != 0) {
      puVar11 = (undefined8 *)0x3d68908;
LAB_015140a8:
      lVar10 = 0;
      /*Core.Localisation.LocaliseTextBehaviour$$SetLocalisationKey*/ func_0x016516cc(lVar5,*puVar11);
      lVar5 = *(long *)(param_5 + 0x20);
      if (lVar5 != 0) {
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar10 = (*pcRam0000000003ebf4c0)(lVar5,1);
        return lVar10;
      }
    }
  }
  else if (*(long *)(param_5 + 0x20) != 0) {
    param_6 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(*(long *)(param_5 + 0x20),uRam0000000003d578e0);
    /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
    if (param_6 != 0) {
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(param_6,0);
      /*UnityEngine.Quaternion$$get_identity*/ func_0x03251e08(0);
      /*UnityEngine.Transform$$set_localRotation*/ func_0x032755c0(param_6,0);
      uVar12 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,_UNK_033f82c4,param_6,0);
      uVar12 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar12,9,uRam0000000003d5e7a8);
      /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(param_1,uVar12,uRam0000000003d5e770);
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar12 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
      /*DG.Tweening.TweenSettingsExtensions$$AppendInterval*/ func_0x016c3110(param_1,uVar12,0);
      param_2 = _UNK_033f8140;
      uVar4 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,param_6,0);
      uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar4,param_6,uRam0000000003d5e850);
      /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar12,uVar4,0);
      fVar15 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      param_2 = param_2 * _UNK_033f83ec;
      param_3 = param_3 * _UNK_033f83ec;
      param_4 = _UNK_033f86cc;
      uVar4 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar15 * _UNK_033f83ec,param_6,2,0);
      uVar4 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar12,uVar4,0);
      lVar10 = lRam0000000003d5e860;
      /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar4,param_6);
      goto LAB_01514084;
    }
  }
  auVar19 = func_0x00f78af4();
  puVar1 = &uStack_70;
  puStack_48 = &Atlas_UI_UIArcadeTimeMedalBehaviour__Set;
  pppppppuVar13 = &ppppppuStack_50;
  uStack_70 = uVar12;
  lStack_68 = param_6;
  lStack_60 = param_7;
  lStack_58 = param_5;
  ppppppuStack_50 = (undefined8 ******)&stack0xfffffffffffffff0;
  if (lVar10 == 0) {
    puVar14 = &Atlas_UI_UIArcadeTimeMedalBehaviour__Set;
    auVar20 = func_0x00f78af4();
  }
  else {
    uVar12 = Atlas_UI_ArcadeEventMetagameData__GetTimeFormattedString(lVar10,auVar19._8_8_,0);
    auVar20._8_8_ = uVar12;
    auVar20._0_8_ = auVar19._0_8_;
    lVar10 = Atlas_UI_ArcadeEventMetagameData__GetMedal(lVar10,auVar19._8_8_,0);
    puVar1 = (undefined8 *)&stack0xffffffffffffffc0;
    param_5 = lStack_58;
    param_7 = lStack_60;
    param_6 = lStack_68;
    uVar12 = uStack_70;
    pppppppuVar13 = (undefined8 *******)ppppppuStack_50;
    puVar14 = puStack_48;
  }
  lVar5 = auVar20._0_8_;
  *(long *)((long)puVar1 + -0x20) = param_7;
  *(long *)((long)puVar1 + -0x18) = param_5;
  *(undefined8 ********)((long)puVar1 + -0x10) = pppppppuVar13;
  *(undefined **)((long)puVar1 + -8) = puVar14;
  plVar6 = *(long **)(lVar5 + 0x28);
  if (plVar6 == (long *)0x0) {
code_r0x01514194:
    lVar10 = func_0x00f78af4();
    *(undefined8 *)((long)puVar1 + -0x50) = uVar12;
    *(long *)((long)puVar1 + -0x48) = param_6;
    *(long *)((long)puVar1 + -0x40) = param_7;
    *(long *)((long)puVar1 + -0x38) = lVar5;
    *(undefined1 **)((long)puVar1 + -0x30) = (undefined1 *)((long)puVar1 + -0x10);
    *(undefined **)((long)puVar1 + -0x28) = &Atlas_UI_UIArcadeTimeMedalBehaviour___ctor;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar10;
  }
  (**(code **)(*plVar6 + 0x558))(plVar6,auVar20._8_8_,*(undefined8 *)(*plVar6 + 0x560));
  lVar7 = Atlas_UI_ArcadeMedalSprites__GetMedalSprite(lVar5 + 0x40,lVar10,0);
  plVar6 = *(long **)(lVar5 + 0x30);
  param_7 = lVar10;
  if (plVar6 == (long *)0x0) goto code_r0x01514194;
  *(undefined8 *)((long)puVar1 + -0x50) = unaff_d9;
  *(ulong *)((long)puVar1 + -0x48) = (ulong)param_1;
  *(undefined8 *)((long)puVar1 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar1 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar1 + -0x30) = uVar12;
  *(long *)((long)puVar1 + -0x28) = param_6;
  *(undefined8 *)((long)puVar1 + -0x20) = *(undefined8 *)((long)puVar1 + -0x20);
  *(undefined8 *)((long)puVar1 + -0x18) = *(undefined8 *)((long)puVar1 + -0x18);
  *(undefined8 *)((long)puVar1 + -0x10) = *(undefined8 *)((long)puVar1 + -0x10);
  *(undefined8 *)((long)puVar1 + -8) = *(undefined8 *)((long)puVar1 + -8);
  if ((bRam0000000003ec2cc2 & 1) == 0) {
    func_0x00f78a20(0x3d23990,lVar7,0);
    bRam0000000003ec2cc2 = 1;
  }
  *(undefined8 *)((long)puVar1 + -0x60) = 0;
  *(undefined8 *)((long)puVar1 + -0x58) = 0;
  lVar10 = plVar6[0x1a];
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
  if (iVar3 == 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
    if ((int)lVar5 == 0) {
      return lVar5;
    }
    if (lVar7 != 0) {
      uVar16 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar7,0);
      *(undefined4 *)((long)puVar1 + -0x60) = uVar16;
      *(float *)((long)puVar1 + -0x5c) = param_2;
      *(float *)((long)puVar1 + -0x58) = param_3;
      *(undefined4 *)((long)puVar1 + -0x54) = param_4;
      fVar17 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)puVar1 + -0x60),0);
      fVar15 = param_2;
      fVar18 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(bool *)(plVar6 + 6) =
           (fVar17 - fVar18) * (fVar17 - fVar18) + (param_2 - fVar15) * (param_2 - fVar15) <
           _UNK_033f8490;
      lVar10 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar7,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = 0;
code_r0x032c2400:
      uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar10,uVar4,0);
      *(undefined1 *)((long)plVar6 + 0x31) = uVar2;
      plVar6[0x1a] = lVar7;
      (**(code **)(*plVar6 + 0x2d8))(plVar6,*(undefined8 *)(*plVar6 + 0x2e0));
      puVar14 = &UNK_032c242c;
      plVar9 = plVar6;
      goto code_r0x032c244c;
    }
  }
  else {
    lVar10 = plVar6[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,lVar7,0);
    if ((int)lVar5 == 0) {
      return lVar5;
    }
    if (plVar6[0x1a] != 0) {
      uVar16 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar6[0x1a],0);
      *(undefined4 *)((long)puVar1 + -0x60) = uVar16;
      *(float *)((long)puVar1 + -0x5c) = param_2;
      *(float *)((long)puVar1 + -0x58) = param_3;
      *(undefined4 *)((long)puVar1 + -0x54) = param_4;
      fVar17 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)puVar1 + -0x60),0);
      fVar15 = param_2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar7,0);
      if ((uVar8 & 1) == 0) {
        fVar18 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      }
      else {
        if (lVar7 == 0) goto code_r0x032c2448;
        uVar16 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar7,0);
        *(undefined4 *)((long)puVar1 + -0x60) = uVar16;
        *(float *)((long)puVar1 + -0x5c) = fVar15;
        *(float *)((long)puVar1 + -0x58) = param_3;
        *(undefined4 *)((long)puVar1 + -0x54) = param_4;
        fVar18 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584((undefined1 *)((long)puVar1 + -0x60),0);
      }
      *(bool *)(plVar6 + 6) = fVar17 == fVar18 && param_2 == fVar15;
      if (plVar6[0x1a] != 0) {
        lVar10 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar6[0x1a],0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar7,0);
        uVar4 = 0;
        if (iVar3 != 0) {
          uVar12 = uVar4;
          if (lVar7 == 0) goto code_r0x032c2448;
          uVar4 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar7,0);
        }
        uVar12 = uVar4;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        goto code_r0x032c2400;
      }
    }
  }
code_r0x032c2448:
  puVar14 = &UnityEngine_UI_Image__TrackSprite;
  plVar9 = (long *)func_0x00f78af4();
code_r0x032c244c:
  *(undefined8 *)((long)puVar1 + -0x90) = uVar12;
  *(long *)((long)puVar1 + -0x88) = lVar10;
  *(long *)((long)puVar1 + -0x80) = lVar7;
  *(long **)((long)puVar1 + -0x78) = plVar6;
  *(undefined1 **)((long)puVar1 + -0x70) = (undefined1 *)((long)puVar1 + -0x10);
  *(undefined **)((long)puVar1 + -0x68) = puVar14;
  if ((bRam0000000003ec2cd5 & 1) == 0) {
    func_0x00f78a20(0x3d226e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec2cd5 = 1;
  }
  uVar12 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar9);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar12,0,0);
  if ((int)lVar10 != 0) {
    lVar10 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar9);
    if (lVar10 == 0) {
      lVar10 = func_0x00f78af4();
      *(undefined2 *)(lVar10 + 0x30) = 0;
      return lVar10;
    }
    uVar12 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar10,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
    if ((int)lVar10 != 0) {
      if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar10 = /*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar9);
      *(undefined1 *)((long)plVar9 + 0xfc) = 1;
    }
  }
  return lVar10;
}



// ============================================================
// RVA: 0x15140dc | Atlas.UI.UIArcadeTimeMedalBehaviour.Set
// ============================================================

/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UIArcadeTimeMedalBehaviour__Set
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,long param_7)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar10;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar11;
  undefined *unaff_x30;
  undefined *puVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar17 [16];
  
  puVar1 = &stack0xffffffffffffffd0;
  puVar11 = &stack0xfffffffffffffff0;
  if (param_7 == 0) {
    unaff_x30 = &Atlas_UI_UIArcadeTimeMedalBehaviour__Set;
    auVar17 = func_0x00f78af4();
    uVar4 = auVar17._8_8_;
    param_5 = auVar17._0_8_;
  }
  else {
    uVar4 = Atlas_UI_ArcadeEventMetagameData__GetTimeFormattedString(param_7,param_6,0);
    param_7 = Atlas_UI_ArcadeEventMetagameData__GetMedal(param_7,param_6,0);
    puVar1 = (undefined1 *)register0x00000008;
    puVar11 = unaff_x29;
  }
  *(long *)(puVar1 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x10) = puVar11;
  *(undefined **)(puVar1 + -8) = unaff_x30;
  plVar5 = *(long **)(param_5 + 0x28);
  if (plVar5 == (long *)0x0) {
code_r0x01514194:
    lVar6 = func_0x00f78af4();
    *(undefined8 *)(puVar1 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x48) = unaff_x21;
    *(long *)(puVar1 + -0x40) = unaff_x20;
    *(long *)(puVar1 + -0x38) = param_5;
    *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
    *(undefined **)(puVar1 + -0x28) = &Atlas_UI_UIArcadeTimeMedalBehaviour___ctor;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar6;
  }
  (**(code **)(*plVar5 + 0x558))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x560));
  lVar6 = Atlas_UI_ArcadeMedalSprites__GetMedalSprite(param_5 + 0x40,param_7,0);
  plVar5 = *(long **)(param_5 + 0x30);
  unaff_x20 = param_7;
  if (plVar5 == (long *)0x0) goto code_r0x01514194;
  *(undefined8 *)(puVar1 + -0x50) = unaff_d9;
  *(undefined8 *)(puVar1 + -0x48) = unaff_d8;
  *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
  *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
  *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
  *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
  if ((bRam0000000003ec2cc2 & 1) == 0) {
    func_0x00f78a20(0x3d23990,lVar6,0);
    bRam0000000003ec2cc2 = 1;
  }
  *(undefined8 *)(puVar1 + -0x60) = 0;
  *(undefined8 *)(puVar1 + -0x58) = 0;
  lVar10 = plVar5[0x1a];
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
  if (iVar3 == 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
    if ((int)lVar7 == 0) {
      return lVar7;
    }
    if (lVar6 != 0) {
      uVar13 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar6,0);
      *(undefined4 *)(puVar1 + -0x60) = uVar13;
      *(float *)(puVar1 + -0x5c) = param_2;
      *(undefined4 *)(puVar1 + -0x58) = param_3;
      *(undefined4 *)(puVar1 + -0x54) = param_4;
      fVar14 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(puVar1 + -0x60,0);
      fVar16 = param_2;
      fVar15 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(bool *)(plVar5 + 6) =
           (fVar14 - fVar15) * (fVar14 - fVar15) + (param_2 - fVar16) * (param_2 - fVar16) <
           _UNK_033f8490;
      lVar10 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar6,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = 0;
code_r0x032c2400:
      uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar10,uVar4,0);
      *(undefined1 *)((long)plVar5 + 0x31) = uVar2;
      plVar5[0x1a] = lVar6;
      (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
      puVar12 = &UNK_032c242c;
      plVar9 = plVar5;
      goto code_r0x032c244c;
    }
  }
  else {
    lVar10 = plVar5[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,lVar6,0);
    if ((int)lVar7 == 0) {
      return lVar7;
    }
    if (plVar5[0x1a] != 0) {
      uVar13 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar5[0x1a],0);
      *(undefined4 *)(puVar1 + -0x60) = uVar13;
      *(float *)(puVar1 + -0x5c) = param_2;
      *(undefined4 *)(puVar1 + -0x58) = param_3;
      *(undefined4 *)(puVar1 + -0x54) = param_4;
      fVar14 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(puVar1 + -0x60,0);
      fVar16 = param_2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar6,0);
      if ((uVar8 & 1) == 0) {
        fVar15 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      }
      else {
        if (lVar6 == 0) goto code_r0x032c2448;
        uVar13 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar6,0);
        *(undefined4 *)(puVar1 + -0x60) = uVar13;
        *(float *)(puVar1 + -0x5c) = fVar16;
        *(undefined4 *)(puVar1 + -0x58) = param_3;
        *(undefined4 *)(puVar1 + -0x54) = param_4;
        fVar15 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(puVar1 + -0x60,0);
      }
      *(bool *)(plVar5 + 6) = fVar14 == fVar15 && param_2 == fVar16;
      if (plVar5[0x1a] != 0) {
        lVar10 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar5[0x1a],0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar3 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar6,0);
        uVar4 = 0;
        if (iVar3 != 0) {
          unaff_x22 = uVar4;
          if (lVar6 == 0) goto code_r0x032c2448;
          uVar4 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar6,0);
        }
        unaff_x22 = uVar4;
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        goto code_r0x032c2400;
      }
    }
  }
code_r0x032c2448:
  puVar12 = &UnityEngine_UI_Image__TrackSprite;
  plVar9 = (long *)func_0x00f78af4();
code_r0x032c244c:
  *(undefined8 *)(puVar1 + -0x90) = unaff_x22;
  *(long *)(puVar1 + -0x88) = lVar10;
  *(long *)(puVar1 + -0x80) = lVar6;
  *(long **)(puVar1 + -0x78) = plVar5;
  *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -0x68) = puVar12;
  if ((bRam0000000003ec2cd5 & 1) == 0) {
    func_0x00f78a20(0x3d226e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec2cd5 = 1;
  }
  uVar4 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar9);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  if ((int)lVar6 != 0) {
    lVar6 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar9);
    if (lVar6 == 0) {
      lVar6 = func_0x00f78af4();
      *(undefined2 *)(lVar6 + 0x30) = 0;
      return lVar6;
    }
    uVar4 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar6,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar6 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar4,0,0);
    if ((int)lVar6 != 0) {
      if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = /*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar9);
      *(undefined1 *)((long)plVar9 + 0xfc) = 1;
    }
  }
  return lVar6;
}



// ============================================================
// RVA: 0x151413c | Atlas.UI.UIArcadeTimeMedalBehaviour.Set
// ============================================================

/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UIArcadeTimeMedalBehaviour__Set
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar3 = *(long **)(param_5 + 0x28);
  if (plVar3 == (long *)0x0) {
LAB_01514194:
    lVar4 = func_0x00f78af4();
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar4;
  }
  (**(code **)(*plVar3 + 0x558))(plVar3,param_6,*(undefined8 *)(*plVar3 + 0x560));
  lVar4 = Atlas_UI_ArcadeMedalSprites__GetMedalSprite(param_5 + 0x40,param_7,0);
  plVar3 = *(long **)(param_5 + 0x30);
  if (plVar3 == (long *)0x0) goto LAB_01514194;
  if ((bRam0000000003ec2cc2 & 1) == 0) {
    func_0x00f78a20(0x3d23990,lVar4,0);
    bRam0000000003ec2cc2 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  lVar7 = plVar3[0x1a];
  if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
  if (iVar2 == 0) {
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar4,0,0);
    if ((int)lVar7 == 0) {
      return lVar7;
    }
    if (lVar4 != 0) {
      uVar9 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar4,0);
      uStack_60 = CONCAT44(param_2,uVar9);
      uStack_58 = CONCAT44(param_4,param_3);
      fVar10 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
      fVar12 = param_2;
      fVar11 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      *(bool *)(plVar3 + 6) =
           (fVar10 - fVar11) * (fVar10 - fVar11) + (param_2 - fVar12) * (param_2 - fVar12) <
           _UNK_033f8490;
      uVar6 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar4,0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = 0;
code_r0x032c2400:
      uVar1 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,uVar8,0);
      *(undefined1 *)((long)plVar3 + 0x31) = uVar1;
      plVar3[0x1a] = lVar4;
      (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined8 *)(*plVar3 + 0x2e0));
      goto code_r0x032c244c;
    }
  }
  else {
    lVar7 = plVar3[0x1a];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,lVar4,0);
    if ((int)lVar7 == 0) {
      return lVar7;
    }
    if (plVar3[0x1a] != 0) {
      uVar9 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar3[0x1a],0);
      uStack_60 = CONCAT44(param_2,uVar9);
      uStack_58 = CONCAT44(param_4,param_3);
      fVar10 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
      fVar12 = param_2;
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar5 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar4,0);
      if ((uVar5 & 1) == 0) {
        fVar11 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
      }
      else {
        if (lVar4 == 0) goto code_r0x032c2448;
        uVar9 = /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(lVar4,0);
        uStack_60 = CONCAT44(fVar12,uVar9);
        uStack_58 = CONCAT44(param_4,param_3);
        fVar11 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&uStack_60,0);
      }
      *(bool *)(plVar3 + 6) = fVar10 == fVar11 && param_2 == fVar12;
      if (plVar3[0x1a] != 0) {
        uVar6 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar3[0x1a],0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar4,0);
        uVar8 = 0;
        if (iVar2 != 0) {
          if (lVar4 == 0) goto code_r0x032c2448;
          uVar8 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar4,0);
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        goto code_r0x032c2400;
      }
    }
  }
code_r0x032c2448:
  plVar3 = (long *)func_0x00f78af4();
code_r0x032c244c:
  if ((bRam0000000003ec2cd5 & 1) == 0) {
    func_0x00f78a20(0x3d226e8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003ec2cd5 = 1;
  }
  uVar6 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar3);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
  if ((int)lVar4 != 0) {
    lVar4 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar3);
    if (lVar4 == 0) {
      lVar4 = func_0x00f78af4();
      *(undefined2 *)(lVar4 + 0x30) = 0;
      return lVar4;
    }
    uVar6 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar4,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar4 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar6,0,0);
    if ((int)lVar4 != 0) {
      if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar4 = /*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar3);
      *(undefined1 *)((long)plVar3 + 0xfc) = 1;
    }
  }
  return lVar4;
}



// ============================================================
// RVA: 0x1514198 | Atlas.UI.UIArcadeTimeMedalBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_UIArcadeTimeMedalBehaviour___ctor(ulong param_1)

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



