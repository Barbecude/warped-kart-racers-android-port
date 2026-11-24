// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.UITimer

// ============================================================
// RVA: 0x151cccc | Atlas.UI.UITimer.SetTimeLeft
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UITimer__SetTimeLeft(float param_1,float param_2,float param_3,long param_4)

{
  char cVar1;
  undefined1 **ppuVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined1 **ppuVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined *puStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [4];
  uint uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  ppuVar2 = (undefined1 **)auStack_50;
  if ((bRam0000000003eb4e03 & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d230e0);
    func_0x00f78a20(0x3d7cca8);
    func_0x00f78a20(0x3d6d120);
    func_0x00f78a20(0x3d78fa8);
    bRam0000000003eb4e03 = 1;
  }
  iVar3 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(param_1,0);
  if ((0 < *(int *)(param_4 + 0x24) && iVar3 <= *(int *)(param_4 + 0x24)) &&
     (iVar3 != *(int *)(param_4 + 0x28))) {
    Atlas_Audio_UIAudio__Play(/*STR('event:/UI/Front_End/ClockTick')*/ uRam0000000003d78fa8);
  }
  *(int *)(param_4 + 0x28) = iVar3;
  if (*(char *)(param_4 + 0x20) == '\0') {
    dVar15 = -(double)param_1;
    param_3 = INFINITY;
    dVar14 = dVar15;
    if (param_1 != INFINITY) {
      dVar14 = (double)param_1;
    }
    iStack_48 = (int)dVar14 / 0x3c;
    uVar4 = (int)dVar14 % 0x3c;
    if ((int)uVar4 < 1) {
      uVar4 = 0;
    }
    uVar7 = (ulong)uVar4;
    plVar11 = *(long **)(param_4 + 0x18);
    uVar6 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_48);
    param_2 = SUB84(dVar15,0);
    uStack_4c = uVar4;
    uVar8 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_4c);
    uVar8 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0:D2}:{1:D2}')*/ uRam0000000003d7cca8,uVar6,uVar8,0);
joined_r0x0151cec8:
    param_4 = 0;
    if (plVar11 != (long *)0x0) {
      lVar9 = (**(code **)(*plVar11 + 0x558))(plVar11,uVar8,*(undefined8 *)(*plVar11 + 0x560));
      return lVar9;
    }
  }
  else {
    uVar7 = 0x3d230e0;
    uVar6 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(param_1,0);
    if (((*(ushort *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8) != 0) {
      uVar7 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8),/*STR('GENERIC_TIME_SECS')*/ uRam0000000003d6d120,0);
      plVar11 = *(long **)(param_4 + 0x18);
      uStack_44 = (undefined4)uVar6;
      uVar8 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_44);
      uVar8 = /*System.String$$Format*/ func_0x029bc688(uVar7,uVar8,0);
      goto joined_r0x0151cec8;
    }
  }
  uVar8 = func_0x00f78af4();
  ppuVar12 = &puStack_60;
  puStack_58 = &Atlas_UI_UITimer__Show;
  puStack_60 = &stack0xfffffffffffffff0;
  lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar8,0);
  if (lVar9 == 0) {
    uVar8 = func_0x00f78af4();
    puStack_68 = &Atlas_UI_UITimer__Hide;
    lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar8,0);
    if (lVar9 == 0) {
      lVar9 = func_0x00f78af4();
      if ((bRam0000000003eb4dfd & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4dfd = 1;
      }
      if (((*(long *)(lVar9 + 0x68) == 0) ||
          (lVar10 = *(long *)(*(long *)(lVar9 + 0x68) + 0x28), lVar10 == 0)) ||
         (plVar11 = *(long **)(lVar10 + 0x30), plVar11 == (long *)0x0)) {
LAB_0151d010:
        lVar9 = func_0x00f78af4();
        if ((bRam0000000003eb4dfe & 1) == 0) {
          func_0x00f78a20(0x3d79000);
          bRam0000000003eb4dfe = 1;
        }
        *(undefined8 *)(lVar9 + 0x60) = /*STR('event:/UI/Front_End/GameCentre')*/ uRam0000000003d79000;
        *(undefined4 *)(lVar9 + 0x70) = 0xffffffff;
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
      iVar3 = (**(code **)(*plVar11 + 0x848))(plVar11,*(undefined8 *)(*plVar11 + 0x850));
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        if (((*(long *)(lVar9 + 0x68) == 0) ||
            (lVar10 = *(long *)(*(long *)(lVar9 + 0x68) + 0x28), lVar10 == 0)) ||
           (plVar11 = *(long **)(lVar10 + 0x30), plVar11 == (long *)0x0)) goto LAB_0151d010;
        uVar4 = (**(code **)(*plVar11 + 0x858))(plVar11,*(undefined8 *)(*plVar11 + 0x860));
      }
      uVar6 = *(undefined8 *)(lVar9 + 0x58);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar6,0);
      if ((uVar4 & (uint)lVar10) == 0) {
        return lVar10;
      }
      lVar10 = *(long *)(lVar9 + 0x60);
      lVar9 = lVar10;
      if ((bRam0000000003eb4db6 & 1) == 0) {
        func_0x00f78a20(0x3d2faf8);
        func_0x00f78a20(0x3d2fb00);
        lVar9 = func_0x00f78a20(0x3d25580);
        bRam0000000003eb4db6 = 1;
      }
      if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
        return lVar9;
      }
      lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
      if (lVar9 != 0) {
        lVar9 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar9,lVar10,uRam0000000003d2faf8);
        if ((int)lVar9 == 0) {
          return lVar9;
        }
        if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
            (lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar9 != 0)) &&
           (lVar9 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar9,lVar10,uRam0000000003d2fb00), lVar9 != 0)) {
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar9,0,0);
          return lVar9;
        }
      }
      plVar11 = (long *)func_0x00f78af4();
      if ((bRam0000000003eb4d8b & 1) == 0) {
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb4d8b = 1;
      }
      plVar5 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar11,0);
      if ((plVar5 != (long *)0x0) && (*plVar5 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
        uVar6 = func_0x00f78e5c(plVar5);
        lVar9 = Atlas_UI_UIArcadeRewardBehaviour__AnimateStars();
        if (lVar9 == 0) {
          func_0x00f78a24(0x3d23938,0,0);
          uVar8 = func_0x00f78aec();
          uVar6 = func_0x00f78a24(0x3d7b500);
          /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar8,uVar6,0);
        }
        else {
          if (pcRam0000000003ec01d0 == (code *)0x0) {
            pcRam0000000003ec01d0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                        );
          }
          uVar7 = (*pcRam0000000003ec01d0)(uVar6);
          if ((uVar7 & 1) != 0) {
            if (pcRam0000000003ec01e0 == (code *)0x0) {
              pcRam0000000003ec01e0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar9 = (*pcRam0000000003ec01e0)(uVar6,lVar9);
            return lVar9;
          }
          func_0x00f78a24(0x3d1fce8);
          uVar8 = func_0x00f78aec();
          uVar6 = func_0x00f78a24(0x3d6af80);
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar6,0);
        }
        uVar6 = func_0x00f78a24(0x3d5a8a8);
        auVar16 = func_0x00f78ac0(uVar8,uVar6);
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar9 = (*pcRam0000000003ec01e0)(auVar16._0_8_,auVar16._8_8_);
        return lVar9;
      }
      fVar13 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar6 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar13 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                              plVar5,4,0);
      lVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar6,uRam0000000003d5e780);
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,plVar11,uRam0000000003d5e868);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((lVar9 != 0) && (*(char *)(lVar9 + 0xe8) != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar3 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar3 != 0) {
          lVar10 = func_0x00f78adc(plVar11,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
          if ((uVar7 & 1) == 0) {
            if (plVar11 == (long *)0x0) goto code_r0x018eef34;
            uVar6 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
          }
          else {
            if (lVar10 == 0) {
code_r0x018eef34:
              auVar16 = func_0x00f78af4();
              lVar9 = auVar16._0_8_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((lVar9 != 0) && (*(char *)(lVar9 + 0xe8) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar9,auVar16._8_8_,cVar1 != '\0',0);
              }
              return lVar9;
            }
            uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar10,0);
          }
          *(undefined8 *)(lVar9 + 200) = uVar6;
        }
        *(long **)(lVar9 + 0x48) = plVar11;
      }
      return lVar9;
    }
    uVar8 = 0;
    ppuVar2 = &puStack_60;
  }
  else {
    uVar8 = 1;
    ppuVar12 = (undefined1 **)puStack_60;
    puStack_68 = puStack_58;
  }
  *(undefined8 *)((long)ppuVar2 + -0x30) = 0x3d22910;
  *(ulong *)((long)ppuVar2 + -0x28) = uVar7;
  *(undefined8 *)((long)ppuVar2 + -0x20) = uVar6;
  *(long *)((long)ppuVar2 + -0x18) = param_4;
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar12;
  *(undefined **)((long)ppuVar2 + -8) = puStack_68;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar9 = (*pcRam0000000003ebf4c0)(lVar9,uVar8);
  return lVar9;
}



// ============================================================
// RVA: 0x151ced0 | Atlas.UI.UITimer.Show
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UITimer__Show(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar11;
  undefined *unaff_x30;
  float fVar12;
  undefined1 auVar13 [16];
  undefined *puStack_18;
  
  puVar11 = &stack0xfffffffffffffff0;
  lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_4,0);
  if (lVar5 == 0) {
    uVar9 = func_0x00f78af4();
    puStack_18 = &Atlas_UI_UITimer__Hide;
    lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar9,0);
    if (lVar5 == 0) {
      lVar5 = func_0x00f78af4();
      if ((bRam0000000003eb4dfd & 1) == 0) {
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb4dfd = 1;
      }
      if (((*(long *)(lVar5 + 0x68) == 0) ||
          (lVar10 = *(long *)(*(long *)(lVar5 + 0x68) + 0x28), lVar10 == 0)) ||
         (plVar6 = *(long **)(lVar10 + 0x30), plVar6 == (long *)0x0)) {
LAB_0151d010:
        lVar5 = func_0x00f78af4();
        if ((bRam0000000003eb4dfe & 1) == 0) {
          func_0x00f78a20(0x3d79000);
          bRam0000000003eb4dfe = 1;
        }
        *(undefined8 *)(lVar5 + 0x60) = /*STR('event:/UI/Front_End/GameCentre')*/ uRam0000000003d79000;
        *(undefined4 *)(lVar5 + 0x70) = 0xffffffff;
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
      iVar2 = (**(code **)(*plVar6 + 0x848))(plVar6,*(undefined8 *)(*plVar6 + 0x850));
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        if (((*(long *)(lVar5 + 0x68) == 0) ||
            (lVar10 = *(long *)(*(long *)(lVar5 + 0x68) + 0x28), lVar10 == 0)) ||
           (plVar6 = *(long **)(lVar10 + 0x30), plVar6 == (long *)0x0)) goto LAB_0151d010;
        uVar3 = (**(code **)(*plVar6 + 0x858))(plVar6,*(undefined8 *)(*plVar6 + 0x860));
      }
      uVar9 = *(undefined8 *)(lVar5 + 0x58);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar10 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar9,0);
      if ((uVar3 & (uint)lVar10) == 0) {
        return lVar10;
      }
      lVar10 = *(long *)(lVar5 + 0x60);
      lVar5 = lVar10;
      if ((bRam0000000003eb4db6 & 1) == 0) {
        func_0x00f78a20(0x3d2faf8);
        func_0x00f78a20(0x3d2fb00);
        lVar5 = func_0x00f78a20(0x3d25580);
        bRam0000000003eb4db6 = 1;
      }
      if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
        return lVar5;
      }
      lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
      if (lVar5 != 0) {
        lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar5,lVar10,uRam0000000003d2faf8);
        if ((int)lVar5 == 0) {
          return lVar5;
        }
        if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
            (lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar5 != 0)) &&
           (lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,lVar10,uRam0000000003d2fb00), lVar5 != 0)) {
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar5,0,0);
          return lVar5;
        }
      }
      plVar6 = (long *)func_0x00f78af4();
      if ((bRam0000000003eb4d8b & 1) == 0) {
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb4d8b = 1;
      }
      plVar4 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar6,0);
      if ((plVar4 != (long *)0x0) && (*plVar4 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
        uVar9 = func_0x00f78e5c(plVar4);
        lVar5 = Atlas_UI_UIArcadeRewardBehaviour__AnimateStars();
        if (lVar5 == 0) {
          func_0x00f78a24(0x3d23938,0,0);
          uVar8 = func_0x00f78aec();
          uVar9 = func_0x00f78a24(0x3d7b500);
          /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar8,uVar9,0);
        }
        else {
          if (pcRam0000000003ec01d0 == (code *)0x0) {
            pcRam0000000003ec01d0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                        );
          }
          uVar7 = (*pcRam0000000003ec01d0)(uVar9);
          if ((uVar7 & 1) != 0) {
            if (pcRam0000000003ec01e0 == (code *)0x0) {
              pcRam0000000003ec01e0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar5 = (*pcRam0000000003ec01e0)(uVar9,lVar5);
            return lVar5;
          }
          func_0x00f78a24(0x3d1fce8);
          uVar8 = func_0x00f78aec();
          uVar9 = func_0x00f78a24(0x3d6af80);
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar9,0);
        }
        uVar9 = func_0x00f78a24(0x3d5a8a8);
        auVar13 = func_0x00f78ac0(uVar8,uVar9);
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar5 = (*pcRam0000000003ec01e0)(auVar13._0_8_,auVar13._8_8_);
        return lVar5;
      }
      fVar12 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar9 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar12 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                              plVar4,4,0);
      lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar9,uRam0000000003d5e780);
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,plVar6,uRam0000000003d5e868);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar2 != 0) {
          lVar10 = func_0x00f78adc(plVar6,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
          if ((uVar7 & 1) == 0) {
            if (plVar6 == (long *)0x0) goto code_r0x018eef34;
            uVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          }
          else {
            if (lVar10 == 0) {
code_r0x018eef34:
              auVar13 = func_0x00f78af4();
              lVar5 = auVar13._0_8_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar5,auVar13._8_8_,cVar1 != '\0',0);
              }
              return lVar5;
            }
            uVar9 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar10,0);
          }
          *(undefined8 *)(lVar5 + 200) = uVar9;
        }
        *(long **)(lVar5 + 0x48) = plVar6;
      }
      return lVar5;
    }
    uVar9 = 0;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x30 = puStack_18;
  }
  else {
    uVar9 = 1;
    puVar11 = unaff_x29;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar11;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if (pcRam0000000003ebf4c0 == (code *)0x0) {
    pcRam0000000003ebf4c0 =
         (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
  }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar5 = (*pcRam0000000003ebf4c0)(lVar5,uVar9);
  return lVar5;
}



// ============================================================
// RVA: 0x151cef8 | Atlas.UI.UITimer.Hide
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_UITimer__Hide(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_4,0);
  if (lVar5 != 0) {
    if (pcRam0000000003ebf4c0 == (code *)0x0) {
      pcRam0000000003ebf4c0 =
           (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
    }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar5 = (*pcRam0000000003ebf4c0)(lVar5,0);
    return lVar5;
  }
  lVar5 = func_0x00f78af4();
  if ((bRam0000000003eb4dfd & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4dfd = 1;
  }
  if (((*(long *)(lVar5 + 0x68) == 0) ||
      (lVar9 = *(long *)(*(long *)(lVar5 + 0x68) + 0x28), lVar9 == 0)) ||
     (plVar6 = *(long **)(lVar9 + 0x30), plVar6 == (long *)0x0)) {
LAB_0151d010:
    lVar5 = func_0x00f78af4();
    if ((bRam0000000003eb4dfe & 1) == 0) {
      func_0x00f78a20(0x3d79000);
      bRam0000000003eb4dfe = 1;
    }
    *(undefined8 *)(lVar5 + 0x60) = /*STR('event:/UI/Front_End/GameCentre')*/ uRam0000000003d79000;
    *(undefined4 *)(lVar5 + 0x70) = 0xffffffff;
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
  iVar2 = (**(code **)(*plVar6 + 0x848))(plVar6,*(undefined8 *)(*plVar6 + 0x850));
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (((*(long *)(lVar5 + 0x68) == 0) ||
        (lVar9 = *(long *)(*(long *)(lVar5 + 0x68) + 0x28), lVar9 == 0)) ||
       (plVar6 = *(long **)(lVar9 + 0x30), plVar6 == (long *)0x0)) goto LAB_0151d010;
    uVar3 = (**(code **)(*plVar6 + 0x858))(plVar6,*(undefined8 *)(*plVar6 + 0x860));
  }
  uVar10 = *(undefined8 *)(lVar5 + 0x58);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar9 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar10,0);
  if ((uVar3 & (uint)lVar9) == 0) {
    return lVar9;
  }
  lVar9 = *(long *)(lVar5 + 0x60);
  lVar5 = lVar9;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8);
    func_0x00f78a20(0x3d2fb00);
    lVar5 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return lVar5;
  }
  lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar5 != 0) {
    lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar5,lVar9,uRam0000000003d2faf8);
    if ((int)lVar5 == 0) {
      return lVar5;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar5 != 0)) &&
       (lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,lVar9,uRam0000000003d2fb00), lVar5 != 0)) {
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar5,0,0);
      return lVar5;
    }
  }
  plVar6 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar4 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar6,0);
  if ((plVar4 != (long *)0x0) && (*plVar4 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar10 = func_0x00f78e5c(plVar4);
    lVar5 = Atlas_UI_UIArcadeRewardBehaviour__AnimateStars();
    if (lVar5 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar8 = func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar8,uVar10,0);
    }
    else {
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar7 = (*pcRam0000000003ec01d0)(uVar10);
      if ((uVar7 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar5 = (*pcRam0000000003ec01e0)(uVar10,lVar5);
        return lVar5;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar8 = func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar8,uVar10,0);
    }
    uVar10 = func_0x00f78a24(0x3d5a8a8);
    auVar12 = func_0x00f78ac0(uVar8,uVar10);
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar5 = (*pcRam0000000003ec01e0)(auVar12._0_8_,auVar12._8_8_);
    return lVar5;
  }
  fVar11 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar10 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar11 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                           plVar4,4,0);
  lVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar10,uRam0000000003d5e780);
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar6,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar2 != 0) {
      lVar9 = func_0x00f78adc(plVar6,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
      if ((uVar7 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto code_r0x018eef34;
        uVar10 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      }
      else {
        if (lVar9 == 0) {
code_r0x018eef34:
          auVar12 = func_0x00f78af4();
          lVar5 = auVar12._0_8_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar5,auVar12._8_8_,cVar1 != '\0',0);
          }
          return lVar5;
        }
        uVar10 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar9,0);
      }
      *(undefined8 *)(lVar5 + 200) = uVar10;
    }
    *(long **)(lVar5 + 0x48) = plVar6;
  }
  return lVar5;
}



// ============================================================
// RVA: 0x151da20 | Atlas.UI.UITimer..ctor
// ============================================================

undefined1  [16] Atlas_UI_UITimer___ctor(ulong param_1)

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



