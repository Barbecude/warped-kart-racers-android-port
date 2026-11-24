// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Audio.UIAudio

// ============================================================
// RVA: 0x15138ac | Atlas.Audio.UIAudio.IsPlaying
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Audio_UIAudio__IsPlaying
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  if ((bRam0000000003eb4db7 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8);
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db7 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return 0;
  }
  lVar3 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar3 != 0) {
    iVar2 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar3,param_4,uRam0000000003d2faf8);
    if (iVar2 == 0) {
      return 0;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar3 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar3 != 0)) &&
       (lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar3,param_4,uRam0000000003d2fb00), lVar3 != 0)) {
      iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar3 + 0x28,0);
      if (iVar2 != 0) {
        /*FMOD.Studio.EventInstance$$getPlaybackState*/ func_0x016dfb5c(lVar3 + 0x28,&stack0xffffffffffffffdc,0);
      }
      return (ulong)(iVar2 != 0);
    }
  }
  uVar4 = func_0x00f78af4();
  uVar5 = uVar4;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8);
    func_0x00f78a20(0x3d2fb00);
    uVar5 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar5;
  }
  lVar3 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar3 != 0) {
    uVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar3,uVar4,uRam0000000003d2faf8);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar3 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar3 != 0)) &&
       (uVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar3,uVar4,uRam0000000003d2fb00), uVar5 != 0)) {
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar5,0,0);
      return uVar5;
    }
  }
  plVar6 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar7 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar6,0);
  if ((plVar7 != (long *)0x0) && (*plVar7 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar8 = func_0x00f78e5c(plVar7);
    lVar3 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    if (lVar3 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar9 = func_0x00f78aec();
      uVar8 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar9,uVar8,0);
    }
    else {
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar5 = (*pcRam0000000003ec01d0)(uVar8);
      if ((uVar5 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (*pcRam0000000003ec01e0)(uVar8,lVar3);
        return uVar5;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar9 = func_0x00f78aec();
      uVar8 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar9,uVar8,0);
    }
    uVar8 = func_0x00f78a24(0x3d5a8a8);
    auVar11 = func_0x00f78ac0(uVar9,uVar8);
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*pcRam0000000003ec01e0)(auVar11._0_8_,auVar11._8_8_);
    return uVar5;
  }
  fVar10 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar8 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar10 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                          plVar7,4,0);
  uVar5 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar8,uRam0000000003d5e780);
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar6,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((uVar5 != 0) && (*(char *)(uVar5 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar2 != 0) {
      lVar3 = func_0x00f78adc(plVar6,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar3,0,0);
      if ((uVar4 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto code_r0x018eef34;
        uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      }
      else {
        if (lVar3 == 0) {
code_r0x018eef34:
          auVar11 = func_0x00f78af4();
          uVar5 = auVar11._0_8_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((uVar5 != 0) && (*(char *)(uVar5 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar5,auVar11._8_8_,cVar1 != '\0',0);
          }
          return uVar5;
        }
        uVar8 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar3,0);
      }
      *(undefined8 *)(uVar5 + 200) = uVar8;
    }
    *(long **)(uVar5 + 0x48) = plVar6;
  }
  return uVar5;
}



// ============================================================
// RVA: 0x151398c | Atlas.Audio.UIAudio.Play
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_Audio_UIAudio__Play(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  lVar3 = param_4;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8);
    func_0x00f78a20(0x3d2fb00);
    lVar3 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return lVar3;
  }
  lVar3 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar3 != 0) {
    lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar3,param_4,uRam0000000003d2faf8);
    if ((int)lVar3 == 0) {
      return lVar3;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar3 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar3 != 0)) &&
       (lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar3,param_4,uRam0000000003d2fb00), lVar3 != 0)) {
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar3,0,0);
      return lVar3;
    }
  }
  plVar4 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar5 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar4,0);
  if ((plVar5 != (long *)0x0) && (*plVar5 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar6 = func_0x00f78e5c(plVar5);
    lVar3 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    if (lVar3 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar9 = func_0x00f78aec();
      uVar6 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar9,uVar6,0);
    }
    else {
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar8 = (*pcRam0000000003ec01d0)(uVar6);
      if ((uVar8 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar3 = (*pcRam0000000003ec01e0)(uVar6,lVar3);
        return lVar3;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar9 = func_0x00f78aec();
      uVar6 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar9,uVar6,0);
    }
    uVar6 = func_0x00f78a24(0x3d5a8a8);
    auVar11 = func_0x00f78ac0(uVar9,uVar6);
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar3 = (*pcRam0000000003ec01e0)(auVar11._0_8_,auVar11._8_8_);
    return lVar3;
  }
  fVar10 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar6 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar10 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                          plVar5,4,0);
  lVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar6,uRam0000000003d5e780);
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar4,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar2 != 0) {
      lVar7 = func_0x00f78adc(plVar4,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
      if ((uVar8 & 1) == 0) {
        if (plVar4 == (long *)0x0) goto code_r0x018eef34;
        uVar6 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
      }
      else {
        if (lVar7 == 0) {
code_r0x018eef34:
          auVar11 = func_0x00f78af4();
          lVar3 = auVar11._0_8_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar3 != 0) && (*(char *)(lVar3 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar3,auVar11._8_8_,cVar1 != '\0',0);
          }
          return lVar3;
        }
        uVar6 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar7,0);
      }
      *(undefined8 *)(lVar3 + 200) = uVar6;
    }
    *(long **)(lVar3 + 0x48) = plVar4;
  }
  return lVar3;
}



// ============================================================
// RVA: 0x15164a4 | Atlas.Audio.UIAudio.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8f8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fc68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fdb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f90068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f901a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f9063c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01516830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f9006c) */
/* WARNING: Removing unreachable block (ram,0x02f901c4) */
/* WARNING: Removing unreachable block (ram,0x02f90070) */
/* WARNING: Removing unreachable block (ram,0x02f90078) */
/* WARNING: Removing unreachable block (ram,0x02f9007c) */
/* WARNING: Removing unreachable block (ram,0x02f90198) */
/* WARNING: Removing unreachable block (ram,0x02f90080) */
/* WARNING: Removing unreachable block (ram,0x02f90094) */
/* WARNING: Removing unreachable block (ram,0x02f9009c) */
/* WARNING: Removing unreachable block (ram,0x02f900a4) */
/* WARNING: Removing unreachable block (ram,0x02f900b0) */
/* WARNING: Removing unreachable block (ram,0x02f900b8) */
/* WARNING: Removing unreachable block (ram,0x02f900c0) */
/* WARNING: Removing unreachable block (ram,0x02f900cc) */
/* WARNING: Removing unreachable block (ram,0x02f90110) */
/* WARNING: Removing unreachable block (ram,0x02f901a4) */
/* WARNING: Removing unreachable block (ram,0x02f8fdb8) */
/* WARNING: Removing unreachable block (ram,0x02f8fdbc) */
/* WARNING: Removing unreachable block (ram,0x02f8fdc8) */
/* WARNING: Removing unreachable block (ram,0x02f8fe48) */
/* WARNING: Removing unreachable block (ram,0x02f8fdd8) */
/* WARNING: Removing unreachable block (ram,0x02f8fde8) */
/* WARNING: Removing unreachable block (ram,0x02f8fc10) */
/* WARNING: Removing unreachable block (ram,0x02f8fc6c) */
/* WARNING: Removing unreachable block (ram,0x02f8fc14) */
/* WARNING: Removing unreachable block (ram,0x02f8fc28) */
/* WARNING: Removing unreachable block (ram,0x02f8fc30) */
/* WARNING: Removing unreachable block (ram,0x02f8fc38) */
/* WARNING: Removing unreachable block (ram,0x02f8fc44) */
/* WARNING: Removing unreachable block (ram,0x02f8fc50) */
/* WARNING: Removing unreachable block (ram,0x02f8f8a4) */
/* WARNING: Removing unreachable block (ram,0x02f8fa0c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa24) */
/* WARNING: Removing unreachable block (ram,0x02f8fa3c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa44) */
/* WARNING: Removing unreachable block (ram,0x02f8fa5c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa64) */
/* WARNING: Removing unreachable block (ram,0x02f8fa74) */
/* WARNING: Removing unreachable block (ram,0x02f8fa80) */
/* WARNING: Removing unreachable block (ram,0x02f8fa8c) */
/* WARNING: Removing unreachable block (ram,0x02f8f8ac) */
/* WARNING: Removing unreachable block (ram,0x02f8f8c4) */
/* WARNING: Removing unreachable block (ram,0x02f8f8cc) */
/* WARNING: Removing unreachable block (ram,0x02f8f8dc) */
/* WARNING: Removing unreachable block (ram,0x02f8f8e8) */
/* WARNING: Removing unreachable block (ram,0x02f8f8f4) */
/* WARNING: Removing unreachable block (ram,0x02f8f934) */
/* WARNING: Removing unreachable block (ram,0x02f8f93c) */
/* WARNING: Removing unreachable block (ram,0x02f8f944) */
/* WARNING: Removing unreachable block (ram,0x02f8f958) */
/* WARNING: Removing unreachable block (ram,0x02f8f95c) */
/* WARNING: Removing unreachable block (ram,0x02f8fb00) */
/* WARNING: Removing unreachable block (ram,0x02f8f974) */
/* WARNING: Removing unreachable block (ram,0x02f8f980) */
/* WARNING: Removing unreachable block (ram,0x02f8f99c) */
/* WARNING: Removing unreachable block (ram,0x02f8f9a4) */
/* WARNING: Removing unreachable block (ram,0x02f8f9b4) */
/* WARNING: Removing unreachable block (ram,0x02f8f9c0) */
/* WARNING: Removing unreachable block (ram,0x02f8f9cc) */
/* WARNING: Removing unreachable block (ram,0x02f8fa00) */
/* WARNING: Removing unreachable block (ram,0x01516834) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * Atlas_Audio_UIAudio__Init
                  (long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong *param_5)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  ulong *puVar9;
  long lVar10;
  long *plVar11;
  ulong *puVar12;
  long lVar13;
  int iVar8;
  ulong *puVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  ulong *puVar18;
  ulong uVar19;
  int extraout_w1;
  long extraout_x1;
  undefined8 extraout_x1_00;
  ulong *puVar20;
  undefined8 uVar21;
  uint extraout_w8;
  ulong uVar22;
  long lVar23;
  ulong extraout_x9;
  int *piVar24;
  uint uVar25;
  undefined8 uVar26;
  ulong *puVar27;
  uint uVar28;
  undefined8 *puVar29;
  code *pcVar30;
  ulong *puVar31;
  ulong unaff_x24;
  ulong uVar32;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *puVar33;
  undefined8 unaff_x28;
  undefined1 **ppuVar34;
  undefined1 *puVar35;
  undefined *puVar36;
  float fVar37;
  ulong extraout_d0;
  undefined8 uVar38;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  float fVar39;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [12];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong *puStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  ulong *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  puVar29 = (undefined8 *)0x3eb4000;
  plVar15 = (long *)0x3d2fae0;
  if ((bRam0000000003eb4db2 & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d2fae8);
    func_0x00f78a20(0x3d2fae0);
    func_0x00f78a20(0x3d1c458);
    func_0x00f78a20(0x3d57360);
    func_0x00f78a20(0x3d25450);
    func_0x00f78a20(0x3d5f6b8);
    func_0x00f78a20(0x3d25580);
    func_0x00f78a20(0x3d25600);
    bRam0000000003eb4db2 = 1;
  }
  **(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) = param_1;
  puVar9 = (ulong *)func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, AudioEvent>_TypeInfo*/ uRam0000000003d1c458);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(puVar9,uRam0000000003d2fae0);
  *(ulong **)(param_1 + 0x20) = puVar9;
  plVar11 = plVar15;
  uVar32 = 0x3d25580;
  uVar26 = unaff_x25;
  uVar21 = unaff_x26;
  puVar33 = unaff_x27;
  if ((((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) ||
      (lVar10 = /*Core.Definitions.GameDefinitions$$GetFirstDefinition<object>*/ func_0x0185c7fc(*(long *)(param_2 + 0x10),uRam0000000003d57360),
      plVar11 = (long *)0x3d2fae0, uVar32 = 0x3d25580, lVar10 == 0)) ||
     (puVar29 = *(undefined8 **)(lVar10 + 0x110), puVar29 == (undefined8 *)0x0)) {
LAB_0151669c:
    func_0x00f78af4();
LAB_015166a0:
    unaff_x27 = puVar33;
    unaff_x26 = uVar21;
    uVar21 = func_0x00f78b24();
    lVar10 = func_0x00f78ac0(uVar21,0);
    puStack_68 = &Atlas_Audio_UIAudio__DeInit;
    ppuVar34 = &puStack_70;
    puVar18 = (ulong *)0x3eb4000;
    uStack_b0 = unaff_x26;
    uStack_a8 = uVar26;
    uStack_a0 = uVar32;
    puStack_98 = puVar29;
    plStack_90 = plVar11;
    puStack_88 = puVar9;
    lStack_80 = param_2;
    lStack_78 = param_1;
    puStack_70 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4db3 & 1) == 0) {
      func_0x00f78a20(0x3d2faf0);
      func_0x00f78a20(0x3d2fb00);
      func_0x00f78a20(0x3d2fb08);
      func_0x00f78a20(0x3d34e08);
      func_0x00f78a20(0x3d34e10);
      func_0x00f78a20(0x3d34e18);
      func_0x00f78a20(0x3d39098);
      func_0x00f78a20(0x3d25580);
      bRam0000000003eb4db3 = 1;
    }
    if (*(long *)(lVar10 + 0x20) == 0) goto code_r0x01516870;
    lVar23 = /*System.Collections.Generic.Dictionary<string, ServicePointScheduler.ConnectionGroup>$$get_Keys*/ func_0x01ed7518(*(long *)(lVar10 + 0x20),uRam0000000003d2fb08);
    if (lVar23 == 0) goto code_r0x01516870;
    uVar32 = 0x3d34e10;
    uVar26 = 0x3d2fb00;
    plVar11 = (long *)0x3d25580;
    puVar9 = (ulong *)0x3d2faf0;
    puVar29 = (undefined8 *)0x3d34e08;
    /*System.Collections.Generic.Dictionary.KeyCollection<string, string>$$GetEnumerator*/ func_0x0230ca40(&uStack_e8,lVar23,uRam0000000003d39098);
    uStack_c8 = uStack_e0;
    uStack_d0 = uStack_e8;
    puStack_c0 = puStack_d8;
    while (uVar22 = /*System.Collections.Generic.Dictionary.KeyCollection.Enumerator<string, string>$$MoveNext*/ func_0x01fd6478(&uStack_d0,uRam0000000003d34e10), puVar20 = puStack_c0,
          (uVar22 & 1) != 0) {
      if (*(long *)(lVar10 + 0x20) == 0) {
        func_0x00f78af4();
code_r0x0151686c:
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x1516870);
        (*pcVar30)();
      }
      lVar23 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar10 + 0x20),puStack_c0,uRam0000000003d2fb00);
      if (lVar23 == 0) {
        func_0x00f78af4();
        goto code_r0x0151686c;
      }
      /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar23,0,0);
      if (*(long *)(lVar10 + 0x20) == 0) {
        func_0x00f78af4();
        goto code_r0x0151686c;
      }
      lVar23 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar10 + 0x20),puVar20,uRam0000000003d2fb00);
      if (lVar23 == 0) {
        func_0x00f78af4();
        goto code_r0x0151686c;
      }
      /*Core.Audio.AudioEvent$$DeInit*/ func_0x01638948(lVar23,0);
      puVar18 = puVar20;
    }
    /*System.Collections.Generic.Dictionary.KeyCollection.Enumerator<string, string>$$Dispose*/ func_0x01fd6474(&uStack_d0,uRam0000000003d34e08);
    do {
      **(undefined8 **)(*plVar11 + 0xb8) = 0;
      if (*(long *)(lVar10 + 0x20) != 0) {
        /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$Clear*/ func_0x01ed79a4(*(long *)(lVar10 + 0x20),*puVar9);
        puVar36 = &UNK_01516834;
        lVar23 = lVar10;
        unaff_x24 = uVar32;
        unaff_x25 = uVar26;
        goto code_r0x015168c4;
      }
code_r0x01516870:
      func_0x00f78af4();
      if (extraout_w1 != 1) goto code_r0x015168c0;
      plVar15 = (long *)___cxa_begin_catch();
      puVar18 = (ulong *)*plVar15;
      ___cxa_end_catch();
      /*System.Collections.Generic.Dictionary.KeyCollection.Enumerator<string, string>$$Dispose*/ func_0x01fd6474(&uStack_d0,*puVar29);
    } while (puVar18 == (ulong *)0x0);
    func_0x00f78ac0(puVar18,0);
code_r0x015168c0:
    puVar36 = &Atlas_Audio_UIAudio__DeInitEditor;
    lVar23 = __Unwind_Resume();
    unaff_x24 = uVar32;
    unaff_x25 = uVar26;
code_r0x015168c4:
    if ((bRam0000000003eb4db4 & 1) == 0) {
      func_0x00f78a20(0x3d25450);
      func_0x00f78a20(0x3d5f6b8);
      func_0x00f78a20(0x3d25600);
      bRam0000000003eb4db4 = 1;
    }
    uVar32 = func_0x00f78aec(/*Core.UI2.TweenPhaseStartedCallback_TypeInfo*/ uRam0000000003d25450);
    uVar21 = 0;
    /*Core.UI2.TweenPhaseStartedCallback$$.ctor*/ func_0x02f833f8(uVar32,lVar23,uRam0000000003d5f6b8);
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    auVar40._8_8_ = 0;
    auVar40._0_8_ = uVar32;
    puVar2 = auStack_f0;
  }
  else {
    if (0 < (int)puVar29[3]) {
      uVar32 = 0;
      uVar26 = 0x3d1ff30;
      uVar21 = 0x3d2fae8;
      uVar22 = puVar29[3] & 0xffffffff;
      puVar33 = puVar29 + 4;
      plVar11 = plVar15;
      do {
        if (uVar22 <= uVar32) goto LAB_015166a0;
        param_2 = puVar33[uVar32];
        puVar9 = *(ulong **)(param_1 + 0x20);
        plVar11 = (long *)func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
        param_5 = (ulong *)0x0;
        /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(plVar11,param_2,0,0);
        if (puVar9 == (ulong *)0x0) goto LAB_0151669c;
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$Add*/ func_0x01ed77c0(puVar9,param_2,plVar11,uRam0000000003d2fae8);
        uVar32 = uVar32 + 1;
        uVar22 = (ulong)*(uint *)(puVar29 + 3);
      } while ((long)uVar32 < (long)(int)*(uint *)(puVar29 + 3));
    }
    lVar10 = func_0x00f78aec(/*Core.UI2.TweenPhaseStartedCallback_TypeInfo*/ uRam0000000003d25450);
    uVar21 = 0;
    /*Core.UI2.TweenPhaseStartedCallback$$.ctor*/ func_0x02f833f8(lVar10,param_1,uRam0000000003d5f6b8);
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    puVar2 = &stack0xffffffffffffffc0;
    ppuVar34 = (undefined1 **)&stack0xfffffffffffffff0;
    plVar11 = (long *)0x3d25600;
    if ((bRam0000000003ebc699 & 1) == 0) {
      func_0x00f78a20(0x3d25450,0);
      func_0x00f78a20(0x3d25600);
      bRam0000000003ebc699 = 1;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    puVar29 = (undefined8 *)0x3d25450;
    puVar18 = *(ulong **)(/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] + 0x30);
    while ((puVar9 = (ulong *)/*System.Delegate$$Combine*/ func_0x02ab18f0(puVar18,lVar10,0), puVar9 == (ulong *)0x0 ||
           (*puVar9 == /*Core.UI2.TweenPhaseStartedCallback_TypeInfo*/ uRam0000000003d25450))) {
      if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
         ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
        func_0x00f78ad0();
      }
      puVar9 = (ulong *)func_0x00ff0f44(/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] + 0x30,puVar9,puVar18);
      bVar6 = puVar18 == puVar9;
      puVar18 = puVar9;
      if (bVar6) {
        return puVar9;
      }
    }
    puVar36 = &Core_UI2_UITweener__remove_OnTweenPhaseStarted;
    auVar40 = func_0x00f78e5c(puVar9);
  }
  *(ulong *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar2 + -0x38) = puVar29;
  *(long **)(puVar2 + -0x30) = plVar11;
  *(ulong **)(puVar2 + -0x28) = puVar9;
  *(ulong **)(puVar2 + -0x20) = puVar18;
  *(long *)(puVar2 + -0x18) = lVar10;
  *(undefined1 ***)(puVar2 + -0x10) = ppuVar34;
  *(undefined **)(puVar2 + -8) = puVar36;
  if ((bRam0000000003ebc69a & 1) == 0) {
    func_0x00f78a20(0x3d25450,auVar40._8_8_);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69a = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  puVar9 = (ulong *)0x3d25450;
  puVar18 = *(ulong **)(/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] + 0x30);
  while( true ) {
    puVar20 = (ulong *)0x0;
    puVar14 = (ulong *)/*System.Delegate$$Remove*/ func_0x02ab1bac(puVar18,auVar40._0_8_);
    if ((puVar14 != (ulong *)0x0) && (*puVar14 != /*Core.UI2.TweenPhaseStartedCallback_TypeInfo*/ uRam0000000003d25450)) break;
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    puVar20 = (ulong *)func_0x00ff0f44(/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] + 0x30,puVar14,puVar18);
    bVar6 = puVar18 == puVar20;
    puVar18 = puVar20;
    if (bVar6) {
      return puVar20;
    }
  }
  plVar15 = (long *)func_0x00f78e5c(puVar14);
  *(undefined8 *)(puVar2 + -0xa0) = unaff_x28;
  *(undefined8 **)(puVar2 + -0x98) = unaff_x27;
  *(undefined8 *)(puVar2 + -0x90) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x88) = unaff_x25;
  *(ulong *)(puVar2 + -0x80) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x78) = 0x3d25450;
  *(undefined8 *)(puVar2 + -0x70) = 0x3d25600;
  *(ulong **)(puVar2 + -0x68) = puVar14;
  *(ulong **)(puVar2 + -0x60) = puVar18;
  *(long *)(puVar2 + -0x58) = auVar40._0_8_;
  *(undefined1 **)(puVar2 + -0x50) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x48) = &Core_UI2_UITweener__PlanTweensForLeaves;
  *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)PTR_03a5d648;
  uVar26 = 0x3ebc000;
  if ((bRam0000000003ebc69c & 1) == 0) {
    func_0x00f78a20(0x3d579d0);
    func_0x00f78a20(0x3d1cff8);
    func_0x00f78a20(0x3d1d4f8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d1f598);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69c = 1;
  }
  lVar10 = 0x3d25600;
  if (plVar15 != (long *)0x0) {
    uVar26 = 0;
    unaff_x27 = (undefined8 *)0x0;
    unaff_x25 = 0x3d1cff8;
    unaff_x26 = 0x3d1d4f8;
    puVar18 = (ulong *)0x3d579d0;
    unaff_x28 = 0x3d23990;
    do {
      lVar23 = *plVar15;
      uVar32 = (ulong)*(ushort *)(lVar23 + 0x12a);
      if (uVar32 != 0) {
        piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == /*System.Collections.Generic.ICollection<UITweenLeaf>_TypeInfo*/ lRam0000000003d1cff8) {
            puVar29 = (undefined8 *)(lVar23 + (long)*piVar24 * 0x10 + 0x138);
            goto code_r0x02f8f7c0;
          }
          piVar24 = piVar24 + 4;
          uVar32 = uVar32 - 1;
        } while (uVar32 != 0);
      }
      puVar20 = (ulong *)0x0;
      puVar29 = (undefined8 *)func_0x00fac1f0(plVar15);
code_r0x02f8f7c0:
      iVar8 = (*(code *)*puVar29)(plVar15,puVar29[1]);
      if (iVar8 <= (int)unaff_x27) {
        puVar14 = puVar9;
        if (*(long *)PTR_03a5d648 == *(long *)(puVar2 + -0xa8)) {
          return (ulong *)0x0;
        }
        goto code_r0x02f8fb0c;
      }
      lVar23 = *plVar15;
      uVar32 = (ulong)*(ushort *)(lVar23 + 0x12a);
      if (uVar32 != 0) {
        piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == /*System.Collections.Generic.IList<UITweenLeaf>_TypeInfo*/ lRam0000000003d1d4f8) {
            puVar29 = (undefined8 *)(lVar23 + (long)*piVar24 * 0x10 + 0x138);
            goto code_r0x02f8f820;
          }
          piVar24 = piVar24 + 4;
          uVar32 = uVar32 - 1;
        } while (uVar32 != 0);
      }
      puVar29 = (undefined8 *)func_0x00fac1f0(plVar15,/*System.Collections.Generic.IList<UITweenLeaf>_TypeInfo*/ lRam0000000003d1d4f8,0);
code_r0x02f8f820:
      puVar20 = (ulong *)puVar29[1];
      lVar23 = (*(code *)*puVar29)(plVar15,unaff_x27);
      puVar14 = puVar18;
      if ((lVar23 == 0) ||
         (lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar23,0), puVar14 = (ulong *)0x3d579d0, lVar10 = lVar23,
         lVar16 == 0)) break;
      puVar20 = puRam0000000003d579d0;
      puVar9 = (ulong *)/*UnityEngine.GameObject$$GetComponentInParent<UITweenGroup>*/ func_0x0185d35c(lVar16,1);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(puVar9,0);
      if (iVar8 != 0) goto code_r0x02f8f87c;
      unaff_x27 = (undefined8 *)(ulong)((int)unaff_x27 + 1);
    } while( true );
  }
  func_0x00f78af4();
  uVar17 = func_0x00f78b24();
  func_0x00f78ac0(uVar17,0);
  puVar18 = puVar14;
  puVar14 = puVar9;
code_r0x02f8fb0c:
  auVar40 = ___stack_chk_fail();
  uVar22 = auVar40._8_8_;
  puVar9 = auVar40._0_8_;
  puVar4 = puVar2 + -0x150;
  puVar3 = puVar2 + -0x150;
  *(ulong *)(puVar2 + -0x120) = unaff_x24;
  *(ulong **)(puVar2 + -0x118) = puVar14;
  *(long *)(puVar2 + -0x110) = lVar10;
  *(ulong **)(puVar2 + -0x108) = puVar18;
  *(undefined8 *)(puVar2 + -0x100) = uVar26;
  *(long **)(puVar2 + -0xf8) = plVar15;
  *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0x50;
  *(undefined **)(puVar2 + -0xe8) = &Core_UI2_UITweener__CalculateTweenDurationsAndDependencies;
  puVar14 = (ulong *)0x3ebc000;
  uVar32 = 0x3d25600;
  puVar31 = puVar20;
  if ((bRam0000000003ebc69d & 1) == 0) {
    func_0x00f78a20(0x3d3c520);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69d = 1;
    puVar31 = puVar20;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  puVar20 = puVar18;
  if (*(long *)(/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] + 0x18) == 0) {
code_r0x02f8fc94:
    func_0x00f78af4();
  }
  else {
    puVar18 = (ulong *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] + 0x18),
                                       uRam0000000003d3c520);
    if (auVar40._8_4_ < 1) {
      return puVar18;
    }
    puVar14 = (ulong *)0x0;
    puVar20 = (ulong *)(puVar2 + -0x148);
    uVar22 = uVar22 & 0xffffffff;
    unaff_x24 = 0x20;
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar10 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] + 8);
    if (lVar10 == 0) goto code_r0x02f8fc94;
    if (*(int *)(lVar10 + 0x18) != 0) {
      uVar21 = *(undefined8 *)(lVar10 + 0x20);
      uVar17 = *(undefined8 *)(lVar10 + 0x38);
      uVar26 = *(undefined8 *)(lVar10 + 0x30);
      *(undefined8 *)(puVar2 + -0x148) = *(undefined8 *)(lVar10 + 0x28);
      *(undefined8 *)(puVar2 + -0x150) = uVar21;
      *(undefined8 *)(puVar2 + -0x138) = uVar17;
      *(undefined8 *)(puVar2 + -0x140) = uVar26;
      *(undefined8 *)(puVar2 + -0x130) = *(undefined8 *)(lVar10 + 0x40);
      auVar41._8_8_ = puVar9;
      auVar41._0_8_ = *(undefined8 *)(puVar2 + -0x150);
      puVar36 = &UNK_02f8fc10;
      puVar18 = puVar20;
      goto code_r0x02f90330;
    }
  }
  uVar26 = func_0x00f78b24();
  puVar18 = (ulong *)func_0x00f78ac0(uVar26,0);
  puVar5 = puVar2 + -0x1e0;
  *(undefined8 *)(puVar2 + -0x1d0) = unaff_d11;
  *(undefined8 *)(puVar2 + -0x1c8) = unaff_d10;
  *(undefined8 *)(puVar2 + -0x1c0) = unaff_d9;
  *(undefined8 *)(puVar2 + -0x1b8) = unaff_d8;
  *(undefined8 *)(puVar2 + -0x1b0) = unaff_x28;
  *(undefined8 **)(puVar2 + -0x1a8) = unaff_x27;
  *(undefined8 *)(puVar2 + -0x1a0) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x198) = unaff_x25;
  *(ulong *)(puVar2 + -400) = unaff_x24;
  *(undefined8 *)(puVar2 + -0x188) = 0x3d25600;
  *(ulong *)(puVar2 + -0x180) = uVar22;
  *(ulong **)(puVar2 + -0x178) = puVar20;
  *(ulong **)(puVar2 + -0x170) = puVar14;
  *(ulong **)(puVar2 + -0x168) = puVar9;
  *(undefined1 **)(puVar2 + -0x160) = puVar2 + -0xf0;
  *(undefined **)(puVar2 + -0x158) = &Core_UI2_UITweener__PlayTweenAnimOnLeaves;
  puVar35 = puVar2 + -0x160;
  uVar32 = extraout_d0 & 0xffffffff;
  puVar20 = (ulong *)0x3ebc000;
  puVar9 = puVar18;
  if ((bRam0000000003ebc69f & 1) == 0) {
    func_0x00f78a20(0x3d51498);
    puVar9 = (ulong *)func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69f = 1;
  }
  iVar8 = (int)puVar31;
  if (iVar8 == 0) {
    if (param_5 == (ulong *)0x0) {
      return puVar9;
    }
    uVar21 = 0;
    *(undefined8 *)(puVar2 + -0x1a0) = *(undefined8 *)(puVar2 + -0x1a0);
    *(undefined8 *)(puVar2 + -0x198) = *(undefined8 *)(puVar2 + -0x198);
    *(undefined8 *)(puVar2 + -400) = *(undefined8 *)(puVar2 + -400);
    *(undefined8 *)(puVar2 + -0x188) = *(undefined8 *)(puVar2 + -0x188);
    *(undefined8 *)(puVar2 + -0x180) = *(undefined8 *)(puVar2 + -0x180);
    *(undefined8 *)(puVar2 + -0x178) = *(undefined8 *)(puVar2 + -0x178);
    *(undefined8 *)(puVar2 + -0x170) = *(undefined8 *)(puVar2 + -0x170);
    *(undefined8 *)(puVar2 + -0x168) = *(undefined8 *)(puVar2 + -0x168);
    *(undefined8 *)(puVar2 + -0x160) = *(undefined8 *)(puVar2 + -0x160);
    *(undefined8 *)(puVar2 + -0x158) = *(undefined8 *)(puVar2 + -0x158);
    *(ulong **)(puVar2 + -0x1a8) = param_5;
    uVar32 = param_5[0xd];
    if (uVar32 == 0) {
      puVar3 = puVar2 + -0x1a8;
      lVar10 = 1;
    }
    else {
      lVar10 = *(long *)(uVar32 + 0x18);
      if (lVar10 == 0) {
        return param_5;
      }
      puVar3 = (undefined1 *)(uVar32 + 0x20);
    }
    lVar23 = 0;
    do {
      lVar16 = *(long *)(puVar3 + lVar23 * 8);
      pcVar30 = *(code **)(lVar16 + 0x10);
      plVar15 = *(long **)(lVar16 + 0x20);
      lVar16 = *(long *)(lVar16 + 0x28);
      if (*(short *)(lVar16 + 0x48) == -1) {
        func_0x00f78ad8(lVar16,uVar21);
      }
      iVar8 = func_0x00f78a4c(lVar16);
      if (iVar8 == 0) {
        if ((((plVar15 == (long *)0x0) || (*(short *)(lVar16 + 0x48) == -1)) ||
            ((*(byte *)(*plVar15 + 0x115) & 1) != 0)) || (param_5[3] == 0)) goto code_r0x016bb980;
        iVar8 = func_0x00f78a44(lVar16);
        iVar7 = func_0x00f78ec0(lVar16);
        if (iVar8 == 0) {
          uVar1 = *(ushort *)(lVar16 + 0x48);
          if (iVar7 == 0) {
            lVar16 = *plVar15 + (ulong)uVar1 * 0x10;
            auVar40 = (**(code **)(lVar16 + 0x138))(plVar15,*(undefined8 *)(lVar16 + 0x140));
            goto code_r0x016bb98c;
          }
          lVar16 = func_0x00f78a48(lVar16);
          lVar13 = *plVar15;
          uVar32 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar32 != 0) {
            piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == lVar16) {
                puVar29 = (undefined8 *)
                          (lVar13 + (long)(int)(*piVar24 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x016bba50;
              }
              piVar24 = piVar24 + 4;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
          puVar29 = (undefined8 *)func_0x00fac1f0(plVar15,lVar16,(ulong)uVar1);
code_r0x016bba50:
          pcVar30 = (code *)*puVar29;
          puVar29 = (undefined8 *)puVar29[1];
        }
        else {
          if (iVar7 == 0) {
            uVar21 = *(undefined8 *)(*plVar15 + (ulong)*(ushort *)(lVar16 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar15;
            uVar32 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar32 != 0) {
              piVar24 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)(lVar16 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar16 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x016bba28;
                }
                piVar24 = piVar24 + 4;
                uVar32 = uVar32 - 1;
              } while (uVar32 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar15);
code_r0x016bba28:
            uVar21 = *(undefined8 *)(lVar13 + 8);
          }
          puVar29 = (undefined8 *)func_0x00f78acc(uVar21,lVar16);
          pcVar30 = (code *)*puVar29;
        }
        auVar40 = (*pcVar30)(plVar15,puVar29);
      }
      else if (*(char *)(lVar16 + 0x4a) == '\0') {
        auVar40 = (*pcVar30)(lVar16);
      }
      else {
code_r0x016bb980:
        auVar40 = (*pcVar30)(plVar15,lVar16);
      }
code_r0x016bb98c:
      uVar21 = auVar40._8_8_;
      lVar23 = lVar23 + 1;
      if (lVar23 == lVar10) {
        return auVar40._0_8_;
      }
    } while( true );
  }
  if (extraout_x1 != 0) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] != 0) {
      uVar22 = *(ulong *)(extraout_x1 + 0x18);
      if (*(int *)(*(long *)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] + 0x18) < (int)uVar22) {
        return /*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600;
      }
      if (iVar8 < 1) {
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        /*System.Array$$Sort<float, UITweenLeaf>*/ func_0x01804f30(*(undefined8 *)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17],extraout_x1,0,puVar31,
                        uRam0000000003d51498);
        if ((float)extraout_d0 < 0.0) {
          if (puVar18 == (ulong *)0x0) goto code_r0x02f8ff9c;
          uVar32 = (ulong)(uint)puVar18[3];
        }
        uVar25 = iVar8 - 1;
        puVar31 = (ulong *)(ulong)uVar25;
        if (iVar8 < 1) {
          if (puVar18 != (ulong *)0x0) goto code_r0x02f8fef8;
        }
        else if (puVar18 != (ulong *)0x0) {
          puVar20 = (ulong *)0x0;
          unaff_x24 = extraout_x1 + 0x20;
          do {
            if (*(uint *)(extraout_x1 + 0x18) <= (uint)puVar20) goto code_r0x02f8ff90;
            lVar10 = *(long *)(unaff_x24 + (long)puVar20 * 8);
            if (lVar10 == 0) goto code_r0x02f8ff9c;
            /*Core.UI2.UITweenLeaf$$PerformTweenAnimation*/ func_0x02f8d7c0((float)uVar32 +
                            *(float *)((long)puVar18 + 0x44) * (float)(int)(uint)puVar20,lVar10,
                            puVar18,uVar21);
            puVar20 = (ulong *)((long)puVar20 + 1);
          } while (iVar8 != (int)puVar20);
code_r0x02f8fef8:
          fVar37 = (float)/*Core.UI2.UITweenAnimation$$GetParam*/ func_0x02f8d5b8(_UNK_033f82c4,puVar18,0);
          if (*(uint *)(extraout_x1 + 0x18) <= uVar25) goto code_r0x02f8ff90;
          lVar10 = *(long *)(extraout_x1 + (long)(int)uVar25 * 8 + 0x20);
          if (lVar10 != 0) {
            fVar39 = *(float *)((long)puVar18 + 0x44);
            uVar26 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0);
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            uVar22 = (ulong)(uint)((float)uVar32 + fVar37 + fVar39 * (float)(int)uVar25);
            puVar35 = *(undefined1 **)(puVar2 + -0x160);
            puVar36 = *(undefined **)(puVar2 + -0x158);
            puVar18 = *(ulong **)(puVar2 + -0x170);
            puVar20 = *(ulong **)(puVar2 + -0x168);
            uVar21 = *(undefined8 *)(puVar2 + -0x180);
            lVar10 = *(long *)(puVar2 + -0x178);
            unaff_x24 = *(ulong *)(puVar2 + -400);
            puVar31 = *(ulong **)(puVar2 + -0x188);
            unaff_d9 = *(undefined8 *)(puVar2 + -0x1c0);
            uVar32 = *(ulong *)(puVar2 + -0x1b8);
            goto code_r0x02f8ffa0;
          }
        }
        goto code_r0x02f8ff9c;
      }
      *(int *)(puVar2 + -0x1dc) = iVar8;
      *(ulong **)(puVar2 + -0x1d8) = param_5;
      if ((uVar22 & 0xffffffff) == 0) {
code_r0x02f8ff90:
        uVar26 = func_0x00f78b24();
        func_0x00f78ac0(uVar26,0);
        goto code_r0x02f8ff9c;
      }
      puVar20 = (ulong *)(extraout_x1 + 0x20);
      unaff_x24 = *puVar20;
      if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
         ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
        func_0x00f78ad0();
      }
      if (puVar18 == (ulong *)0x0) goto code_r0x02f8ff9c;
      auVar42._8_4_ = (int)puVar18[8];
      auVar42._0_8_ = unaff_x24;
      puVar36 = &UNK_02f8fdb8;
      goto code_r0x02f906e0;
    }
  }
code_r0x02f8ff9c:
  puVar36 = &Core_UI2_UITweener__TryCreateOnCompleteVirtualTween;
  uVar22 = func_0x00f78af4();
  puVar3 = puVar2 + -0x1e0;
  uVar26 = extraout_x1_00;
  lVar10 = extraout_x1;
code_r0x02f8ffa0:
  *(undefined8 *)(puVar3 + -0x50) = unaff_d9;
  *(ulong *)(puVar3 + -0x48) = uVar32;
  *(ulong *)(puVar3 + -0x40) = unaff_x24;
  *(ulong **)(puVar3 + -0x38) = puVar31;
  *(undefined8 *)(puVar3 + -0x30) = uVar21;
  *(long *)(puVar3 + -0x28) = lVar10;
  *(ulong **)(puVar3 + -0x20) = puVar18;
  *(ulong **)(puVar3 + -0x18) = puVar20;
  *(undefined1 **)(puVar3 + -0x10) = puVar35;
  *(undefined **)(puVar3 + -8) = puVar36;
  if ((bRam0000000003ebc6a0 & 1) == 0) {
    func_0x00f78a20(uVar22,0x3d40f08,uVar26);
    func_0x00f78a20(0x3d1ea28);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6b0);
    func_0x00f78a20(0x3d5e700);
    func_0x00f78a20(0x3d5e868);
    func_0x00f78a20(0x3d64820);
    func_0x00f78a20(0x3d64828);
    func_0x00f78a20(0x3d294a0);
    func_0x00f78a20(0x3d29498);
    bRam0000000003ebc6a0 = 1;
  }
  puVar9 = (ulong *)func_0x00f78aec(/*Core.UI2.UITweener.<>c__DisplayClass20_0_TypeInfo*/ uRam0000000003d294a0);
  return puVar9;
code_r0x02f905e0:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  puVar9 = *(ulong **)(/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] + 0x18);
  puVar14 = (ulong *)func_0x00f78aec(/*Core.UI2.TweenDependencyIndexPair_TypeInfo*/ uRam0000000003d25430);
  /*Core.UI2.TweenDependencyIndexPair$$.ctor*/ func_0x02f83324(puVar14,puVar20,puVar18);
  if (puVar9 == (ulong *)0x0) goto code_r0x02f906d0;
  puVar36 = &UNK_02f90640;
  puVar3 = puVar4 + -0xd0;
  puVar27 = puVar9;
  puVar31 = puVar14;
code_r0x02427110:
  *(ulong **)(puVar3 + -0x20) = puVar18;
  *(ulong **)(puVar3 + -0x18) = puVar20;
  *(undefined1 **)(puVar3 + -0x10) = puVar35;
  *(undefined **)(puVar3 + -8) = puVar36;
  uVar32 = puVar9[2];
  puVar29 = puRam0000000003d3c518;
  if (uVar32 == 0) {
code_r0x0242716c:
    puVar14 = puVar18;
    puVar9 = puVar20;
    puVar12 = (ulong *)func_0x00f78af4();
    uVar32 = extraout_x9;
    uVar25 = extraout_w8;
code_r0x02427170:
    *(uint *)(puVar9 + 3) = uVar25 + 1;
  }
  else {
    uVar25 = (uint)puVar9[3];
    puVar12 = puVar9;
    if (uVar25 != *(uint *)(uVar32 + 0x18)) goto code_r0x02427170;
    puVar29 = *(undefined8 **)(*(long *)(puRam0000000003d3c518[3] + 0xc0) + 0x60);
    puVar12 = (ulong *)(*(code *)*puVar29)(puVar9,uVar25 + 1);
    uVar32 = puVar9[2];
    uVar25 = (uint)puVar9[3];
    *(uint *)(puVar9 + 3) = uVar25 + 1;
    puVar20 = puVar9;
    puVar18 = puVar14;
    if (uVar32 == 0) goto code_r0x0242716c;
  }
  if (uVar25 < *(uint *)(uVar32 + 0x18)) {
    *(ulong **)(uVar32 + (long)(int)uVar25 * 8 + 0x20) = puVar14;
    *(int *)((long)puVar9 + 0x1c) = *(int *)((long)puVar9 + 0x1c) + 1;
    return puVar12;
  }
  uVar26 = func_0x00f78b24();
  auVar40 = func_0x00f78ac0(uVar26,0);
  lVar16 = auVar40._8_8_;
  lVar10 = auVar40._0_8_;
  *(long *)(puVar3 + -0x60) = lVar23;
  *(undefined8 *)(puVar3 + -0x58) = uVar21;
  *(ulong **)(puVar3 + -0x50) = puVar31;
  *(ulong **)(puVar3 + -0x48) = puVar27;
  *(ulong **)(puVar3 + -0x40) = puVar14;
  *(ulong **)(puVar3 + -0x38) = puVar9;
  *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x28) =
       &System_Collections_Generic_List_object___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar29[3] + 0xc0) + 0x48))(lVar16,0x14);
  if (lVar10 != 0) {
    pcVar30 = (code *)**(undefined8 **)(*(long *)(puVar29[3] + 0xc0) + 0x28);
    lVar23 = *(long *)(*(long *)(puVar29[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar23 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar23);
    }
    if (lVar16 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = func_0x00f78adc(lVar16,lVar23);
      if (lVar13 == 0) {
        func_0x00f78e5c(lVar16,lVar23);
        goto code_r0x0242734c;
      }
    }
    (*pcVar30)(lVar10,lVar13,*(undefined8 *)(*(long *)(puVar29[3] + 0xc0) + 0x28));
    iVar8 = (*(code *)**(undefined8 **)(*(long *)(puVar29[3] + 0xc0) + 0x68))(lVar10);
    return (ulong *)(ulong)(iVar8 - 1);
  }
  func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
  pcVar30 = (code *)SoftwareBreakpoint(1,0x2427350);
  (*pcVar30)();
code_r0x02f8f87c:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  puVar4 = puVar2 + -0x120;
  *(ulong *)(puVar2 + -0x120) = unaff_x24;
  *(ulong **)(puVar2 + -0x118) = puVar9;
  *(long *)(puVar2 + -0x110) = lVar23;
  *(undefined8 *)(puVar2 + -0x108) = 0x3d579d0;
  *(undefined8 *)(puVar2 + -0x100) = 0;
  *(long **)(puVar2 + -0xf8) = plVar15;
  *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0x50;
  *(undefined **)(puVar2 + -0xe8) = &UNK_02f8f8a4;
  if ((bRam0000000003ebc6a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc6a2 = 1;
  }
  puVar14 = (ulong *)0x0;
  uVar22 = 0x3d25600;
  uVar32 = 0x3d23990;
  unaff_x24 = 0x20;
  while( true ) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar10 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] + 8);
    if (lVar10 == 0) break;
    if ((long)*(int *)(lVar10 + 0x18) <= (long)puVar14) {
      return (ulong *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
      lVar10 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] + 8);
      if (lVar10 == 0) break;
    }
    if ((ulong *)(ulong)*(uint *)(lVar10 + 0x18) <= puVar14) goto code_r0x02f90324;
    iVar8 = /*Core.UI2.PlannedTweenData$$get_IsValid*/ func_0x02f82590(lVar10 + unaff_x24);
    if (iVar8 == 0) {
      return (ulong *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar10 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] + 8);
    if (lVar10 == 0) break;
    if ((ulong *)(ulong)*(uint *)(lVar10 + 0x18) <= puVar14) goto code_r0x02f90324;
    puVar18 = *(ulong **)(lVar10 + unaff_x24);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    puVar20 = (ulong *)0x0;
    uVar19 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(puVar18,puVar9);
    if ((uVar19 & 1) != 0) {
      return puVar14;
    }
    puVar14 = (ulong *)((long)puVar14 + 1);
    unaff_x24 = unaff_x24 + 0x28;
  }
  func_0x00f78af4();
code_r0x02f90324:
  uVar21 = func_0x00f78b24();
  puVar36 = &Core_UI2_UITweener__TryResolveTweenAnim;
  auVar41 = func_0x00f78ac0(uVar21,0);
code_r0x02f90330:
  puVar31 = auVar41._8_8_;
  puVar3 = puVar4 + -0x40;
  *(ulong *)(puVar4 + -0x40) = unaff_x24;
  *(ulong *)(puVar4 + -0x38) = uVar32;
  *(ulong *)(puVar4 + -0x30) = uVar22;
  *(ulong **)(puVar4 + -0x28) = puVar18;
  *(ulong **)(puVar4 + -0x20) = puVar14;
  *(ulong **)(puVar4 + -0x18) = puVar9;
  *(undefined1 **)(puVar4 + -0x10) = puVar2 + -0xf0;
  *(undefined **)(puVar4 + -8) = puVar36;
  if ((auVar41._0_8_ != 0) && (uVar22 = *(ulong *)(auVar41._0_8_ + 0x18), uVar22 != 0)) {
    uVar25 = *(uint *)(uVar22 + 0x18);
    puVar18 = (ulong *)(ulong)(0 < (int)uVar25);
    if (0 < (int)uVar25) {
      uVar32 = 0;
      do {
        uVar28 = (uint)uVar32;
        puVar9 = puVar20;
        if (uVar25 <= uVar28) goto code_r0x02f903d8;
        unaff_x24 = *(ulong *)(uVar22 + (long)(int)uVar28 * 8 + 0x20);
        puVar14 = puVar31;
        if ((unaff_x24 == 0) || (*(long *)(unaff_x24 + 0x10) == 0)) goto code_r0x02f903d4;
        iVar8 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(unaff_x24 + 0x10),puVar31,3,0);
        if (iVar8 != 0) goto code_r0x02f903b8;
        uVar28 = uVar28 + 1;
        uVar32 = (ulong)uVar28;
        uVar25 = *(uint *)(uVar22 + 0x18);
        puVar18 = (ulong *)(ulong)((int)uVar28 < (int)uVar25);
      } while ((int)uVar28 < (int)uVar25);
    }
    unaff_x24 = 0;
code_r0x02f903b8:
    *puVar20 = unaff_x24;
    return puVar18;
  }
code_r0x02f903d4:
  puVar31 = puVar14;
  func_0x00f78af4();
code_r0x02f903d8:
  uVar21 = func_0x00f78b24();
  puVar20 = (ulong *)func_0x00f78ac0(uVar21,0);
  puVar5 = puVar4 + -0xd0;
  *(undefined8 *)(puVar4 + -0xa0) = unaff_x28;
  *(undefined8 **)(puVar4 + -0x98) = unaff_x27;
  *(undefined8 *)(puVar4 + -0x90) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x88) = unaff_x25;
  *(ulong *)(puVar4 + -0x80) = unaff_x24;
  *(ulong *)(puVar4 + -0x78) = uVar32;
  *(ulong *)(puVar4 + -0x70) = uVar22;
  *(ulong **)(puVar4 + -0x68) = puVar18;
  *(ulong **)(puVar4 + -0x60) = puVar31;
  *(ulong **)(puVar4 + -0x58) = puVar9;
  *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x48) = &Core_UI2_UITweener__DiscoverDependencies;
  puVar35 = puVar4 + -0x50;
  puVar18 = (ulong *)0x3ebc000;
  uVar21 = 0x3d25600;
  if ((bRam0000000003ebc69e & 1) == 0) {
    func_0x00f78a20(0x3d3c518);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25430);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69e = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] + 8);
  if (lVar10 == 0) {
code_r0x02f906d0:
    func_0x00f78af4();
  }
  else {
    uVar25 = (uint)puVar20;
    if (uVar25 < *(uint *)(lVar10 + 0x18)) {
      lVar23 = (long)(int)uVar25;
      lVar10 = *(long *)(lVar10 + lVar23 * 0x28 + 0x28);
      if (lVar10 != 0) {
        uVar26 = *(undefined8 *)(lVar10 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar26,0);
        if (iVar8 != 0) {
          puVar18 = (ulong *)0x0;
          lVar10 = 0x20;
          do {
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            lVar16 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] + 8);
            if (lVar16 == 0) goto code_r0x02f906d0;
            if ((long)*(int *)(lVar16 + 0x18) <= (long)puVar18) {
              return /*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600;
            }
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
              lVar16 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] + 8);
              if (lVar16 == 0) goto code_r0x02f906d0;
            }
            if ((ulong *)(ulong)*(uint *)(lVar16 + 0x18) <= puVar18) goto code_r0x02f906d4;
            puVar29 = (undefined8 *)(lVar16 + lVar10);
            uVar26 = *puVar29;
            uVar38 = puVar29[3];
            uVar17 = puVar29[2];
            *(undefined8 *)(puVar4 + -200) = puVar29[1];
            *(undefined8 *)(puVar4 + -0xd0) = uVar26;
            *(undefined8 *)(puVar4 + -0xb8) = uVar38;
            *(undefined8 *)(puVar4 + -0xc0) = uVar17;
            *(undefined8 *)(puVar4 + -0xb0) = puVar29[4];
            puVar9 = (ulong *)/*Core.UI2.PlannedTweenData$$get_IsValid*/ func_0x02f82590(puVar4 + -0xd0);
            if ((int)puVar9 == 0) {
              return puVar9;
            }
            if ((ulong *)((ulong)puVar20 & 0xffffffff) != puVar18) {
              uVar26 = *(undefined8 *)(puVar4 + -0xd0);
              if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
                 ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
                func_0x00f78ad0();
              }
              lVar16 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] + 8);
              if (lVar16 == 0) goto code_r0x02f906d0;
              if (*(uint *)(lVar16 + 0x18) <= uVar25) goto code_r0x02f906d4;
              lVar16 = *(long *)(lVar16 + lVar23 * 0x28 + 0x28);
              if (lVar16 == 0) goto code_r0x02f906d0;
              uVar17 = *(undefined8 *)(lVar16 + 0x20);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar32 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar26,uVar17,0);
              if ((uVar32 & 1) == 0) goto code_r0x02f905e0;
            }
            puVar18 = (ulong *)((long)puVar18 + 1);
            lVar10 = lVar10 + 0x28;
          } while( true );
        }
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        puVar9 = *(ulong **)(/*Core.UI2.UITweener_TypeInfo*/ puRam0000000003d25600[0x17] + 0x18);
        puVar14 = (ulong *)/*Core.UI2.TweenDependencyIndexPair$$CreateEmpty*/ func_0x02f83390(puVar20);
        puVar18 = (ulong *)0x0;
        if (puVar9 != (ulong *)0x0) {
          puVar35 = *(undefined1 **)(puVar4 + -0x50);
          puVar36 = *(undefined **)(puVar4 + -0x48);
          puVar18 = *(ulong **)(puVar4 + -0x60);
          puVar20 = *(ulong **)(puVar4 + -0x58);
          puVar31 = *(ulong **)(puVar4 + -0x70);
          puVar27 = *(ulong **)(puVar4 + -0x68);
          lVar23 = *(long *)(puVar4 + -0x80);
          uVar21 = *(undefined8 *)(puVar4 + -0x78);
          goto code_r0x02427110;
        }
      }
      goto code_r0x02f906d0;
    }
  }
code_r0x02f906d4:
  uVar21 = func_0x00f78b24();
  puVar36 = &Core_UI2_UITweener__CalculateOrderRankingForLeaf;
  auVar42 = func_0x00f78ac0(uVar21,0);
code_r0x02f906e0:
  lVar10 = auVar42._0_8_;
  *(ulong **)(puVar5 + -0x20) = puVar18;
  *(ulong **)(puVar5 + -0x18) = puVar20;
  *(undefined1 **)(puVar5 + -0x10) = puVar35;
  *(undefined **)(puVar5 + -8) = puVar36;
  if ((lVar10 != 0) && (lVar23 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0), lVar23 != 0)) {
    puVar9 = (ulong *)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar23,0);
    switch(auVar42._8_4_) {
    case 1:
      lVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0);
      if (lVar10 != 0) {
        puVar9 = (ulong *)/*UnityEngine.Transform$$GetSiblingIndex*/ func_0x03277144(lVar10,0);
        return puVar9;
      }
      goto code_r0x02f9078c;
    case 3:
      break;
    case 4:
      break;
    case 6:
    case 9:
      break;
    case 7:
      break;
    case 8:
    }
    return puVar9;
  }
code_r0x02f9078c:
  puVar9 = (ulong *)func_0x00f78af4();
  return puVar9;
}



// ============================================================
// RVA: 0x15166ac | Atlas.Audio.UIAudio.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x01516830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8f8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fc68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fdb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f90068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f901a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f9063c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8fdb8) */
/* WARNING: Removing unreachable block (ram,0x02f8fdbc) */
/* WARNING: Removing unreachable block (ram,0x02f8fdc8) */
/* WARNING: Removing unreachable block (ram,0x02f8fe48) */
/* WARNING: Removing unreachable block (ram,0x02f8fdd8) */
/* WARNING: Removing unreachable block (ram,0x02f8fde8) */
/* WARNING: Removing unreachable block (ram,0x02f8fc10) */
/* WARNING: Removing unreachable block (ram,0x02f8fc6c) */
/* WARNING: Removing unreachable block (ram,0x02f8fc14) */
/* WARNING: Removing unreachable block (ram,0x02f8fc28) */
/* WARNING: Removing unreachable block (ram,0x02f8fc30) */
/* WARNING: Removing unreachable block (ram,0x02f8fc38) */
/* WARNING: Removing unreachable block (ram,0x02f8fc44) */
/* WARNING: Removing unreachable block (ram,0x02f8fc50) */
/* WARNING: Removing unreachable block (ram,0x02f8f8a4) */
/* WARNING: Removing unreachable block (ram,0x02f8fa0c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa24) */
/* WARNING: Removing unreachable block (ram,0x02f8fa3c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa44) */
/* WARNING: Removing unreachable block (ram,0x02f8fa5c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa64) */
/* WARNING: Removing unreachable block (ram,0x02f8fa74) */
/* WARNING: Removing unreachable block (ram,0x02f8fa80) */
/* WARNING: Removing unreachable block (ram,0x02f8fa8c) */
/* WARNING: Removing unreachable block (ram,0x02f8f8ac) */
/* WARNING: Removing unreachable block (ram,0x02f8f8c4) */
/* WARNING: Removing unreachable block (ram,0x02f8f8cc) */
/* WARNING: Removing unreachable block (ram,0x02f8f8dc) */
/* WARNING: Removing unreachable block (ram,0x02f8f8e8) */
/* WARNING: Removing unreachable block (ram,0x02f8f8f4) */
/* WARNING: Removing unreachable block (ram,0x02f8f934) */
/* WARNING: Removing unreachable block (ram,0x02f8f93c) */
/* WARNING: Removing unreachable block (ram,0x02f8f944) */
/* WARNING: Removing unreachable block (ram,0x02f8f958) */
/* WARNING: Removing unreachable block (ram,0x02f8f95c) */
/* WARNING: Removing unreachable block (ram,0x02f8fb00) */
/* WARNING: Removing unreachable block (ram,0x02f8f974) */
/* WARNING: Removing unreachable block (ram,0x02f8f980) */
/* WARNING: Removing unreachable block (ram,0x02f8f99c) */
/* WARNING: Removing unreachable block (ram,0x02f8f9a4) */
/* WARNING: Removing unreachable block (ram,0x02f8f9b4) */
/* WARNING: Removing unreachable block (ram,0x02f8f9c0) */
/* WARNING: Removing unreachable block (ram,0x02f8f9cc) */
/* WARNING: Removing unreachable block (ram,0x02f8fa00) */
/* WARNING: Removing unreachable block (ram,0x01516834) */
/* WARNING: Removing unreachable block (ram,0x02f9006c) */
/* WARNING: Removing unreachable block (ram,0x02f901c4) */
/* WARNING: Removing unreachable block (ram,0x02f90070) */
/* WARNING: Removing unreachable block (ram,0x02f90078) */
/* WARNING: Removing unreachable block (ram,0x02f9007c) */
/* WARNING: Removing unreachable block (ram,0x02f90198) */
/* WARNING: Removing unreachable block (ram,0x02f90080) */
/* WARNING: Removing unreachable block (ram,0x02f90094) */
/* WARNING: Removing unreachable block (ram,0x02f9009c) */
/* WARNING: Removing unreachable block (ram,0x02f900a4) */
/* WARNING: Removing unreachable block (ram,0x02f900b0) */
/* WARNING: Removing unreachable block (ram,0x02f900b8) */
/* WARNING: Removing unreachable block (ram,0x02f900c0) */
/* WARNING: Removing unreachable block (ram,0x02f900cc) */
/* WARNING: Removing unreachable block (ram,0x02f90110) */
/* WARNING: Removing unreachable block (ram,0x02f901a4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Audio_UIAudio__DeInit(long param_1)

{
  ushort uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  segment_command **ppsVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  int extraout_w1;
  long *extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar22;
  long *in_x4;
  uint extraout_w8;
  long extraout_x9;
  ulong uVar23;
  int *piVar24;
  uint uVar25;
  long *plVar26;
  long lVar27;
  undefined8 *unaff_x21;
  long *unaff_x22;
  ulong uVar28;
  undefined8 uVar29;
  uint uVar30;
  undefined8 *unaff_x23;
  segment_command *unaff_x24;
  long **pplVar31;
  segment_command *psVar32;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar33;
  undefined *puVar34;
  float fVar35;
  ulong extraout_d0;
  undefined8 uVar36;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [12];
  undefined1 auStack_270 [4];
  int iStack_26c;
  long *plStack_268;
  long *plStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  segment_command *psStack_220;
  long *plStack_218;
  ulong uStack_210;
  long *plStack_208;
  long *plStack_200;
  long *plStack_1f8;
  undefined8 *******pppppppuStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  segment_command *psStack_1b0;
  long *plStack_1a8;
  long lStack_1a0;
  long *plStack_198;
  undefined8 uStack_190;
  long *plStack_188;
  undefined8 ******ppppppuStack_180;
  undefined *puStack_178;
  long lStack_138;
  undefined8 *****pppppuStack_e0;
  undefined *puStack_d8;
  segment_command *psStack_d0;
  undefined8 *puStack_c8;
  long *plStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  lVar27 = 0x3eb4000;
  if ((bRam0000000003eb4db3 & 1) == 0) {
    func_0x00f78a20(0x3d2faf0);
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d2fb08);
    func_0x00f78a20(0x3d34e08);
    func_0x00f78a20(0x3d34e10);
    func_0x00f78a20(0x3d34e18);
    func_0x00f78a20(0x3d39098);
    func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db3 = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_01516870;
  lVar9 = /*System.Collections.Generic.Dictionary<string, ServicePointScheduler.ConnectionGroup>$$get_Keys*/ func_0x01ed7518(*(long *)(param_1 + 0x20),uRam0000000003d2fb08);
  if (lVar9 == 0) goto LAB_01516870;
  unaff_x24 = (segment_command *)0x3d34e10;
  unaff_x25 = 0x3d2fb00;
  unaff_x22 = (long *)0x3d25580;
  unaff_x21 = (undefined8 *)0x3d2faf0;
  unaff_x23 = (undefined8 *)0x3d34e08;
  /*System.Collections.Generic.Dictionary.KeyCollection<string, string>$$GetEnumerator*/ func_0x0230ca40(&uStack_88,lVar9,uRam0000000003d39098);
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  lStack_60 = lStack_78;
  while (uVar10 = /*System.Collections.Generic.Dictionary.KeyCollection.Enumerator<string, string>$$MoveNext*/ func_0x01fd6478(&uStack_70,uRam0000000003d34e10), lVar9 = lStack_60,
        (uVar10 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00f78af4();
code_r0x0151686c:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1516870);
      (*pcVar2)();
    }
    lVar27 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(param_1 + 0x20),lStack_60,uRam0000000003d2fb00);
    if (lVar27 == 0) {
      func_0x00f78af4();
      goto code_r0x0151686c;
    }
    /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar27,0,0);
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00f78af4();
      goto code_r0x0151686c;
    }
    lVar27 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(param_1 + 0x20),lVar9,uRam0000000003d2fb00);
    if (lVar27 == 0) {
      func_0x00f78af4();
      goto code_r0x0151686c;
    }
    /*Core.Audio.AudioEvent$$DeInit*/ func_0x01638948(lVar27,0);
    lVar27 = lVar9;
  }
  /*System.Collections.Generic.Dictionary.KeyCollection.Enumerator<string, string>$$Dispose*/ func_0x01fd6474(&uStack_70,uRam0000000003d34e08);
  do {
    **(undefined8 **)(*unaff_x22 + 0xb8) = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      /*System.Collections.Generic.Dictionary<XmlQualifiedName, XmlSchemaObject>$$Clear*/ func_0x01ed79a4(*(long *)(param_1 + 0x20),*unaff_x21);
      puVar34 = &UNK_01516834;
      lVar9 = param_1;
      goto code_r0x015168c4;
    }
LAB_01516870:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x015168c0;
    plVar11 = (long *)___cxa_begin_catch();
    lVar27 = *plVar11;
    ___cxa_end_catch();
    /*System.Collections.Generic.Dictionary.KeyCollection.Enumerator<string, string>$$Dispose*/ func_0x01fd6474(&uStack_70,*unaff_x23);
  } while (lVar27 == 0);
  func_0x00f78ac0(lVar27,0);
code_r0x015168c0:
  puVar34 = &Atlas_Audio_UIAudio__DeInitEditor;
  lVar9 = __Unwind_Resume();
code_r0x015168c4:
  psStack_d0 = unaff_x24;
  puStack_c8 = unaff_x23;
  plStack_c0 = unaff_x22;
  puStack_b8 = unaff_x21;
  lStack_b0 = lVar27;
  lStack_a8 = param_1;
  pppuStack_a0 = (undefined8 ***)&stack0xfffffffffffffff0;
  puStack_98 = puVar34;
  if ((bRam0000000003eb4db4 & 1) == 0) {
    func_0x00f78a20(0x3d25450);
    func_0x00f78a20(0x3d5f6b8);
    func_0x00f78a20(0x3d25600);
    bRam0000000003eb4db4 = 1;
  }
  uVar12 = func_0x00f78aec(/*Core.UI2.TweenPhaseStartedCallback_TypeInfo*/ lRam0000000003d25450);
  uVar10 = 0;
  /*Core.UI2.TweenPhaseStartedCallback$$.ctor*/ func_0x02f833f8(uVar12,lVar9,uRam0000000003d5f6b8);
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  psVar32 = psStack_d0;
  if ((bRam0000000003ebc69a & 1) == 0) {
    func_0x00f78a20(0x3d25450,0);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69a = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar11 = (long *)0x3d25450;
  plVar16 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30);
  while( true ) {
    plVar22 = (long *)0x0;
    plVar15 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(plVar16,uVar12);
    if ((plVar15 != (long *)0x0) && (*plVar15 != /*Core.UI2.TweenPhaseStartedCallback_TypeInfo*/ lRam0000000003d25450)) break;
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    plVar22 = (long *)func_0x00ff0f44(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30,plVar15,plVar16);
    bVar6 = plVar16 == plVar22;
    plVar16 = plVar22;
    if (bVar6) {
      return plVar22;
    }
  }
  plVar16 = (long *)func_0x00f78e5c(plVar15);
  puStack_d8 = &Core_UI2_UITweener__PlanTweensForLeaves;
  lStack_138 = *(long *)PTR_03a5d648;
  uVar12 = 0x3ebc000;
  pppppuStack_e0 = (undefined8 *****)&pppuStack_a0;
  if ((bRam0000000003ebc69c & 1) == 0) {
    func_0x00f78a20(0x3d579d0);
    func_0x00f78a20(0x3d1cff8);
    func_0x00f78a20(0x3d1d4f8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d1f598);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69c = 1;
  }
  lVar27 = 0x3d25600;
  plStack_188 = plVar16;
  ppppppuStack_180 = &pppppuStack_e0;
  if (plVar16 != (long *)0x0) {
    uVar12 = 0;
    unaff_x27 = (long *)0x0;
    unaff_x25 = 0x3d1cff8;
    unaff_x26 = 0x3d1d4f8;
    plVar20 = (long *)0x3d579d0;
    unaff_x28 = 0x3d23990;
    do {
      lVar9 = *plVar16;
      uVar23 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == /*System.Collections.Generic.ICollection<UITweenLeaf>_TypeInfo*/ lRam0000000003d1cff8) {
            puVar17 = (undefined8 *)(lVar9 + (long)*piVar24 * 0x10 + 0x138);
            goto code_r0x02f8f7c0;
          }
          piVar24 = piVar24 + 4;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
      plVar22 = (long *)0x0;
      puVar17 = (undefined8 *)func_0x00fac1f0(plVar16);
code_r0x02f8f7c0:
      iVar8 = (*(code *)*puVar17)(plVar16,puVar17[1]);
      if (iVar8 <= (int)unaff_x27) {
        plStack_1a8 = plVar11;
        if (*(long *)PTR_03a5d648 == lStack_138) {
          return (long *)0x0;
        }
        goto code_r0x02f8fb0c;
      }
      lVar9 = *plVar16;
      uVar23 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == /*System.Collections.Generic.IList<UITweenLeaf>_TypeInfo*/ lRam0000000003d1d4f8) {
            puVar17 = (undefined8 *)(lVar9 + (long)*piVar24 * 0x10 + 0x138);
            goto code_r0x02f8f820;
          }
          piVar24 = piVar24 + 4;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
      puVar17 = (undefined8 *)func_0x00fac1f0(plVar16,/*System.Collections.Generic.IList<UITweenLeaf>_TypeInfo*/ lRam0000000003d1d4f8,0);
code_r0x02f8f820:
      plVar22 = (long *)puVar17[1];
      lVar9 = (*(code *)*puVar17)(plVar16,unaff_x27);
      plVar15 = plVar20;
      if ((lVar9 == 0) ||
         (lVar18 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar9,0), plVar15 = (long *)0x3d579d0, lVar27 = lVar9,
         lVar18 == 0)) break;
      plVar22 = plRam0000000003d579d0;
      plVar11 = (long *)/*UnityEngine.GameObject$$GetComponentInParent<UITweenGroup>*/ func_0x0185d35c(lVar18,1);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar11,0);
      if (iVar8 != 0) goto code_r0x02f8f87c;
      unaff_x27 = (long *)(ulong)((int)unaff_x27 + 1);
    } while( true );
  }
  func_0x00f78af4();
  uVar19 = func_0x00f78b24();
  func_0x00f78ac0(uVar19,0);
  plVar20 = plVar15;
  plStack_1a8 = plVar11;
code_r0x02f8fb0c:
  auVar38 = ___stack_chk_fail();
  uVar28 = auVar38._8_8_;
  plVar11 = auVar38._0_8_;
  ppsVar4 = (segment_command **)&lStack_1e0;
  plVar15 = &lStack_1e0;
  psStack_1b0 = psVar32;
  puStack_178 = &Core_UI2_UITweener__CalculateTweenDurationsAndDependencies;
  plVar16 = (long *)0x3ebc000;
  uVar23 = 0x3d25600;
  plVar13 = plVar22;
  lStack_1a0 = lVar27;
  plStack_198 = plVar20;
  uStack_190 = uVar12;
  if ((bRam0000000003ebc69d & 1) == 0) {
    func_0x00f78a20(0x3d3c520);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69d = 1;
    plVar13 = plVar22;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar22 = plVar20;
  if (*(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18) == 0) {
code_r0x02f8fc94:
    func_0x00f78af4();
  }
  else {
    plVar16 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18),
                                      uRam0000000003d3c520);
    if (auVar38._8_4_ < 1) {
      return plVar16;
    }
    plVar16 = (long *)0x0;
    plVar22 = &lStack_1d8;
    uVar28 = uVar28 & 0xffffffff;
    psVar32 = &segment_command_00000020;
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar27 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar27 == 0) goto code_r0x02f8fc94;
    if (*(int *)(lVar27 + 0x18) != 0) {
      lStack_1d8 = *(long *)(lVar27 + 0x28);
      lStack_1e0 = *(long *)(lVar27 + 0x20);
      auVar38._8_8_ = plVar11;
      auVar38._0_8_ = lStack_1e0;
      uStack_1c8 = *(undefined8 *)(lVar27 + 0x38);
      uStack_1d0 = *(undefined8 *)(lVar27 + 0x30);
      uStack_1c0 = *(undefined8 *)(lVar27 + 0x40);
      puVar34 = &UNK_02f8fc10;
      plVar20 = plVar22;
      goto code_r0x02f90330;
    }
  }
  uVar12 = func_0x00f78b24();
  plVar20 = (long *)func_0x00f78ac0(uVar12,0);
  puVar5 = auStack_270;
  plStack_218 = (long *)0x3d25600;
  puStack_1e8 = &Core_UI2_UITweener__PlayTweenAnimOnLeaves;
  pppppppuVar33 = &pppppppuStack_1f0;
  uVar23 = extraout_d0 & 0xffffffff;
  plVar26 = (long *)0x3ebc000;
  plVar21 = plVar20;
  plStack_238 = unaff_x27;
  uStack_230 = unaff_x26;
  uStack_228 = unaff_x25;
  psStack_220 = psVar32;
  uStack_210 = uVar28;
  plStack_208 = plVar22;
  plStack_200 = plVar16;
  plStack_1f8 = plVar11;
  pppppppuStack_1f0 = &ppppppuStack_180;
  if ((bRam0000000003ebc69f & 1) == 0) {
    func_0x00f78a20(0x3d51498);
    plVar21 = (long *)func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69f = 1;
  }
  iVar8 = (int)plVar13;
  if (iVar8 == 0) {
    if (in_x4 == (long *)0x0) {
      return plVar21;
    }
    uVar12 = 0;
    plStack_238 = in_x4;
    lVar27 = in_x4[0xd];
    if (lVar27 == 0) {
      pplVar31 = &plStack_238;
      lVar9 = 1;
    }
    else {
      lVar9 = *(long *)(lVar27 + 0x18);
      if (lVar9 == 0) {
        return in_x4;
      }
      pplVar31 = (long **)(lVar27 + 0x20);
    }
    lVar27 = 0;
    do {
      plVar16 = pplVar31[lVar27];
      pcVar2 = (code *)plVar16[2];
      plVar11 = (long *)plVar16[4];
      lVar18 = plVar16[5];
      if (*(short *)(lVar18 + 0x48) == -1) {
        func_0x00f78ad8(lVar18,uVar12);
      }
      iVar8 = func_0x00f78a4c(lVar18);
      if (iVar8 == 0) {
        if ((((plVar11 == (long *)0x0) || (*(short *)(lVar18 + 0x48) == -1)) ||
            ((*(byte *)(*plVar11 + 0x115) & 1) != 0)) || (in_x4[3] == 0)) goto code_r0x016bb980;
        iVar8 = func_0x00f78a44(lVar18);
        iVar7 = func_0x00f78ec0(lVar18);
        if (iVar8 == 0) {
          uVar1 = *(ushort *)(lVar18 + 0x48);
          if (iVar7 == 0) {
            lVar18 = *plVar11 + (ulong)uVar1 * 0x10;
            auVar38 = (**(code **)(lVar18 + 0x138))(plVar11,*(undefined8 *)(lVar18 + 0x140));
            goto code_r0x016bb98c;
          }
          lVar18 = func_0x00f78a48(lVar18);
          lVar14 = *plVar11;
          uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar10 != 0) {
            piVar24 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == lVar18) {
                puVar17 = (undefined8 *)
                          (lVar14 + (long)(int)(*piVar24 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x016bba50;
              }
              piVar24 = piVar24 + 4;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          puVar17 = (undefined8 *)func_0x00fac1f0(plVar11,lVar18,(ulong)uVar1);
code_r0x016bba50:
          pcVar2 = (code *)*puVar17;
          puVar17 = (undefined8 *)puVar17[1];
        }
        else {
          if (iVar7 == 0) {
            uVar12 = *(undefined8 *)(*plVar11 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar11;
            uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar10 != 0) {
              piVar24 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)(lVar18 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar18 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x016bba28;
                }
                piVar24 = piVar24 + 4;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar11);
code_r0x016bba28:
            uVar12 = *(undefined8 *)(lVar14 + 8);
          }
          puVar17 = (undefined8 *)func_0x00f78acc(uVar12,lVar18);
          pcVar2 = (code *)*puVar17;
        }
        auVar38 = (*pcVar2)(plVar11,puVar17);
      }
      else if (*(char *)(lVar18 + 0x4a) == '\0') {
        auVar38 = (*pcVar2)(lVar18);
      }
      else {
code_r0x016bb980:
        auVar38 = (*pcVar2)(plVar11,lVar18);
      }
code_r0x016bb98c:
      uVar12 = auVar38._8_8_;
      lVar27 = lVar27 + 1;
      if (lVar27 == lVar9) {
        return auVar38._0_8_;
      }
    } while( true );
  }
  if (extraout_x1 != (long *)0x0) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] != 0) {
      if (*(int *)(*(long *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18) < (int)extraout_x1[3]) {
        return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
      }
      if (iVar8 < 1) {
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        /*System.Array$$Sort<float, UITweenLeaf>*/ func_0x01804f30(*(undefined8 *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17],extraout_x1,0,plVar13,
                        uRam0000000003d51498);
        if ((float)extraout_d0 < 0.0) {
          if (plVar20 == (long *)0x0) goto code_r0x02f8ff9c;
          uVar23 = (ulong)*(uint *)(plVar20 + 3);
        }
        uVar25 = iVar8 - 1;
        plVar13 = (long *)(ulong)uVar25;
        if (iVar8 < 1) {
          if (plVar20 != (long *)0x0) goto code_r0x02f8fef8;
        }
        else if (plVar20 != (long *)0x0) {
          plVar26 = (long *)0x0;
          psVar32 = (segment_command *)(extraout_x1 + 4);
          do {
            if (*(uint *)(extraout_x1 + 3) <= (uint)plVar26) goto code_r0x02f8ff90;
            if (*(long *)(psVar32->segname + (long)plVar26 * 8 + -8) == 0) goto code_r0x02f8ff9c;
            /*Core.UI2.UITweenLeaf$$PerformTweenAnimation*/ func_0x02f8d7c0((float)uVar23 +
                            *(float *)((long)plVar20 + 0x44) * (float)(int)(uint)plVar26,
                            *(long *)(psVar32->segname + (long)plVar26 * 8 + -8),plVar20,uVar10);
            plVar26 = (long *)((long)plVar26 + 1);
          } while (iVar8 != (int)plVar26);
code_r0x02f8fef8:
          fVar35 = (float)/*Core.UI2.UITweenAnimation$$GetParam*/ func_0x02f8d5b8(_UNK_033f82c4,plVar20,0);
          if (*(uint *)(extraout_x1 + 3) <= uVar25) goto code_r0x02f8ff90;
          if (extraout_x1[(long)(int)uVar25 + 4] != 0) {
            fVar37 = *(float *)((long)plVar20 + 0x44);
            uVar12 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(extraout_x1[(long)(int)uVar25 + 4],0);
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            uVar23 = (ulong)(uint)((float)uVar23 + fVar35 + fVar37 * (float)(int)uVar25);
            plVar26 = plStack_1f8;
            plVar20 = plStack_200;
            plVar11 = plStack_208;
            uVar10 = uStack_210;
            plVar13 = plStack_218;
            psVar32 = psStack_220;
            pppppppuVar33 = pppppppuStack_1f0;
            puVar34 = puStack_1e8;
            goto code_r0x02f8ffa0;
          }
        }
        goto code_r0x02f8ff9c;
      }
      iStack_26c = iVar8;
      plStack_268 = in_x4;
      if ((extraout_x1[3] & 0xffffffffU) == 0) {
code_r0x02f8ff90:
        uVar12 = func_0x00f78b24();
        func_0x00f78ac0(uVar12,0);
        goto code_r0x02f8ff9c;
      }
      plVar26 = extraout_x1 + 4;
      psVar32 = (segment_command *)*plVar26;
      if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
         ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
        func_0x00f78ad0();
      }
      if (plVar20 == (long *)0x0) goto code_r0x02f8ff9c;
      auVar39._8_4_ = (int)plVar20[8];
      auVar39._0_8_ = psVar32;
      puVar34 = &UNK_02f8fdb8;
      goto code_r0x02f906e0;
    }
  }
code_r0x02f8ff9c:
  unaff_d8 = uVar23;
  uVar23 = func_0x00f78af4();
  plVar15 = (long *)auStack_270;
  uVar12 = extraout_x1_00;
  plVar11 = extraout_x1;
  puVar34 = &Core_UI2_UITweener__TryCreateOnCompleteVirtualTween;
code_r0x02f8ffa0:
  *(undefined8 *)((long)plVar15 + -0x50) = unaff_d9;
  *(ulong *)((long)plVar15 + -0x48) = unaff_d8;
  *(segment_command **)((long)plVar15 + -0x40) = psVar32;
  *(long **)((long)plVar15 + -0x38) = plVar13;
  *(ulong *)((long)plVar15 + -0x30) = uVar10;
  *(long **)((long)plVar15 + -0x28) = plVar11;
  *(long **)((long)plVar15 + -0x20) = plVar20;
  *(long **)((long)plVar15 + -0x18) = plVar26;
  *(undefined8 ********)((long)plVar15 + -0x10) = pppppppuVar33;
  *(undefined **)((long)plVar15 + -8) = puVar34;
  if ((bRam0000000003ebc6a0 & 1) == 0) {
    func_0x00f78a20(uVar23,0x3d40f08,uVar12);
    func_0x00f78a20(0x3d1ea28);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6b0);
    func_0x00f78a20(0x3d5e700);
    func_0x00f78a20(0x3d5e868);
    func_0x00f78a20(0x3d64820);
    func_0x00f78a20(0x3d64828);
    func_0x00f78a20(0x3d294a0);
    func_0x00f78a20(0x3d29498);
    bRam0000000003ebc6a0 = 1;
  }
  plVar11 = (long *)func_0x00f78aec(/*Core.UI2.UITweener.<>c__DisplayClass20_0_TypeInfo*/ uRam0000000003d294a0);
  return plVar11;
code_r0x02f905e0:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar11 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
  plVar16 = (long *)func_0x00f78aec(/*Core.UI2.TweenDependencyIndexPair_TypeInfo*/ uRam0000000003d25430);
  /*Core.UI2.TweenDependencyIndexPair$$.ctor*/ func_0x02f83324(plVar16,plVar26,plVar20);
  if (plVar11 == (long *)0x0) goto code_r0x02f906d0;
  puVar34 = &UNK_02f90640;
  puVar3 = (undefined1 *)((long)ppsVar4 + -0xd0);
  plVar15 = plVar11;
  plVar22 = plVar16;
code_r0x02427110:
  *(long **)(puVar3 + -0x20) = plVar20;
  *(long **)(puVar3 + -0x18) = plVar26;
  *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar33;
  *(undefined **)(puVar3 + -8) = puVar34;
  lVar27 = plVar11[2];
  puVar17 = puRam0000000003d3c518;
  if (lVar27 == 0) {
code_r0x0242716c:
    plVar16 = plVar20;
    plVar11 = plVar26;
    plVar13 = (long *)func_0x00f78af4();
    lVar27 = extraout_x9;
    uVar25 = extraout_w8;
code_r0x02427170:
    *(uint *)(plVar11 + 3) = uVar25 + 1;
  }
  else {
    uVar25 = *(uint *)(plVar11 + 3);
    plVar13 = plVar11;
    if (uVar25 != *(uint *)(lVar27 + 0x18)) goto code_r0x02427170;
    puVar17 = *(undefined8 **)(*(long *)(puRam0000000003d3c518[3] + 0xc0) + 0x60);
    plVar13 = (long *)(*(code *)*puVar17)(plVar11,uVar25 + 1);
    lVar27 = plVar11[2];
    uVar25 = *(uint *)(plVar11 + 3);
    *(uint *)(plVar11 + 3) = uVar25 + 1;
    plVar26 = plVar11;
    plVar20 = plVar16;
    if (lVar27 == 0) goto code_r0x0242716c;
  }
  if (uVar25 < *(uint *)(lVar27 + 0x18)) {
    *(long **)(lVar27 + (long)(int)uVar25 * 8 + 0x20) = plVar16;
    *(int *)((long)plVar11 + 0x1c) = *(int *)((long)plVar11 + 0x1c) + 1;
    return plVar13;
  }
  uVar19 = func_0x00f78b24();
  auVar38 = func_0x00f78ac0(uVar19,0);
  lVar18 = auVar38._8_8_;
  lVar27 = auVar38._0_8_;
  *(long *)(puVar3 + -0x60) = lVar9;
  *(undefined8 *)(puVar3 + -0x58) = uVar12;
  *(long **)(puVar3 + -0x50) = plVar22;
  *(long **)(puVar3 + -0x48) = plVar15;
  *(long **)(puVar3 + -0x40) = plVar16;
  *(long **)(puVar3 + -0x38) = plVar11;
  *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x28) =
       &System_Collections_Generic_List_object___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x48))(lVar18,0x14);
  if (lVar27 != 0) {
    pcVar2 = (code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x28);
    lVar9 = *(long *)(*(long *)(puVar17[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar9);
    }
    if (lVar18 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = func_0x00f78adc(lVar18,lVar9);
      if (lVar14 == 0) {
        func_0x00f78e5c(lVar18,lVar9);
        goto code_r0x0242734c;
      }
    }
    (*pcVar2)(lVar27,lVar14,*(undefined8 *)(*(long *)(puVar17[3] + 0xc0) + 0x28));
    iVar8 = (*(code *)**(undefined8 **)(*(long *)(puVar17[3] + 0xc0) + 0x68))(lVar27);
    return (long *)(ulong)(iVar8 - 1);
  }
  func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x2427350);
  (*pcVar2)();
code_r0x02f8f87c:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  ppsVar4 = &psStack_1b0;
  psStack_1b0 = psVar32;
  plStack_198 = (long *)0x3d579d0;
  uStack_190 = 0;
  puStack_178 = &UNK_02f8f8a4;
  plStack_1a8 = plVar11;
  lStack_1a0 = lVar9;
  if ((bRam0000000003ebc6a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc6a2 = 1;
  }
  plVar16 = (long *)0x0;
  uVar28 = 0x3d25600;
  uVar23 = 0x3d23990;
  psVar32 = &segment_command_00000020;
  while( true ) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar27 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar27 == 0) break;
    if ((long)*(int *)(lVar27 + 0x18) <= (long)plVar16) {
      return (long *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
      lVar27 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
      if (lVar27 == 0) break;
    }
    if ((long *)(ulong)*(uint *)(lVar27 + 0x18) <= plVar16) goto code_r0x02f90324;
    iVar8 = /*Core.UI2.PlannedTweenData$$get_IsValid*/ func_0x02f82590(psVar32->segname + lVar27 + -8);
    if (iVar8 == 0) {
      return (long *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar27 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar27 == 0) break;
    if ((long *)(ulong)*(uint *)(lVar27 + 0x18) <= plVar16) goto code_r0x02f90324;
    plVar20 = *(long **)(psVar32->segname + lVar27 + -8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar22 = (long *)0x0;
    uVar10 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar20,plVar11);
    if ((uVar10 & 1) != 0) {
      return plVar16;
    }
    plVar16 = (long *)((long)plVar16 + 1);
    psVar32 = (segment_command *)&psVar32->fileoff;
  }
  func_0x00f78af4();
code_r0x02f90324:
  uVar12 = func_0x00f78b24();
  puVar34 = &Core_UI2_UITweener__TryResolveTweenAnim;
  auVar38 = func_0x00f78ac0(uVar12,0);
code_r0x02f90330:
  plVar15 = auVar38._8_8_;
  puVar3 = (undefined1 *)((long)ppsVar4 + -0x40);
  *(segment_command **)((long)ppsVar4 + -0x40) = psVar32;
  *(ulong *)((long)ppsVar4 + -0x38) = uVar23;
  *(ulong *)((long)ppsVar4 + -0x30) = uVar28;
  *(long **)((long)ppsVar4 + -0x28) = plVar20;
  *(long **)((long)ppsVar4 + -0x20) = plVar16;
  *(long **)((long)ppsVar4 + -0x18) = plVar11;
  *(undefined8 ********)((long)ppsVar4 + -0x10) = &ppppppuStack_180;
  *(undefined **)((long)ppsVar4 + -8) = puVar34;
  if ((auVar38._0_8_ != 0) && (uVar28 = *(ulong *)(auVar38._0_8_ + 0x18), uVar28 != 0)) {
    uVar25 = *(uint *)(uVar28 + 0x18);
    plVar20 = (long *)(ulong)(0 < (int)uVar25);
    if (0 < (int)uVar25) {
      uVar23 = 0;
      do {
        uVar30 = (uint)uVar23;
        plVar11 = plVar22;
        if (uVar25 <= uVar30) goto code_r0x02f903d8;
        psVar32 = *(segment_command **)(uVar28 + (long)(int)uVar30 * 8 + 0x20);
        plVar16 = plVar15;
        if ((psVar32 == (segment_command *)0x0) || (*(long *)(psVar32->segname + 8) == 0))
        goto code_r0x02f903d4;
        iVar8 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(psVar32->segname + 8),plVar15,3,0);
        if (iVar8 != 0) goto code_r0x02f903b8;
        uVar30 = uVar30 + 1;
        uVar23 = (ulong)uVar30;
        uVar25 = *(uint *)(uVar28 + 0x18);
        plVar20 = (long *)(ulong)((int)uVar30 < (int)uVar25);
      } while ((int)uVar30 < (int)uVar25);
    }
    psVar32 = (segment_command *)0x0;
code_r0x02f903b8:
    *plVar22 = (long)psVar32;
    return plVar20;
  }
code_r0x02f903d4:
  plVar15 = plVar16;
  func_0x00f78af4();
code_r0x02f903d8:
  uVar12 = func_0x00f78b24();
  plVar26 = (long *)func_0x00f78ac0(uVar12,0);
  puVar5 = (undefined1 *)((long)ppsVar4 + -0xd0);
  *(undefined8 *)((long)ppsVar4 + -0xa0) = unaff_x28;
  *(long **)((long)ppsVar4 + -0x98) = unaff_x27;
  *(undefined8 *)((long)ppsVar4 + -0x90) = unaff_x26;
  *(undefined8 *)((long)ppsVar4 + -0x88) = unaff_x25;
  *(segment_command **)((long)ppsVar4 + -0x80) = psVar32;
  *(ulong *)((long)ppsVar4 + -0x78) = uVar23;
  *(ulong *)((long)ppsVar4 + -0x70) = uVar28;
  *(long **)((long)ppsVar4 + -0x68) = plVar20;
  *(long **)((long)ppsVar4 + -0x60) = plVar15;
  *(long **)((long)ppsVar4 + -0x58) = plVar11;
  *(undefined1 **)((long)ppsVar4 + -0x50) = (undefined1 *)((long)ppsVar4 + -0x10);
  *(undefined **)((long)ppsVar4 + -0x48) = &Core_UI2_UITweener__DiscoverDependencies;
  pppppppuVar33 = (undefined8 *******)((long)ppsVar4 + -0x50);
  plVar20 = (long *)0x3ebc000;
  uVar12 = 0x3d25600;
  if ((bRam0000000003ebc69e & 1) == 0) {
    func_0x00f78a20(0x3d3c518);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25430);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69e = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar27 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
  if (lVar27 == 0) {
code_r0x02f906d0:
    func_0x00f78af4();
  }
  else {
    uVar25 = (uint)plVar26;
    if (uVar25 < *(uint *)(lVar27 + 0x18)) {
      lVar9 = (long)(int)uVar25;
      lVar27 = *(long *)(lVar27 + lVar9 * 0x28 + 0x28);
      if (lVar27 != 0) {
        uVar19 = *(undefined8 *)(lVar27 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar8 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar19,0);
        if (iVar8 != 0) {
          plVar20 = (long *)0x0;
          lVar27 = 0x20;
          do {
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            lVar18 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
            if (lVar18 == 0) goto code_r0x02f906d0;
            if ((long)*(int *)(lVar18 + 0x18) <= (long)plVar20) {
              return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
            }
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
              lVar18 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar18 == 0) goto code_r0x02f906d0;
            }
            if ((long *)(ulong)*(uint *)(lVar18 + 0x18) <= plVar20) goto code_r0x02f906d4;
            puVar17 = (undefined8 *)(lVar18 + lVar27);
            uVar19 = *puVar17;
            uVar36 = puVar17[3];
            uVar29 = puVar17[2];
            *(undefined8 *)((long)ppsVar4 + -200) = puVar17[1];
            *(undefined8 *)((long)ppsVar4 + -0xd0) = uVar19;
            *(undefined8 *)((long)ppsVar4 + -0xb8) = uVar36;
            *(undefined8 *)((long)ppsVar4 + -0xc0) = uVar29;
            *(undefined8 *)((long)ppsVar4 + -0xb0) = puVar17[4];
            plVar11 = (long *)/*Core.UI2.PlannedTweenData$$get_IsValid*/ func_0x02f82590((undefined1 *)((long)ppsVar4 + -0xd0));
            if ((int)plVar11 == 0) {
              return plVar11;
            }
            if ((long *)((ulong)plVar26 & 0xffffffff) != plVar20) {
              uVar19 = *(undefined8 *)((long)ppsVar4 + -0xd0);
              if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
                 ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
                func_0x00f78ad0();
              }
              lVar18 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar18 == 0) goto code_r0x02f906d0;
              if (*(uint *)(lVar18 + 0x18) <= uVar25) goto code_r0x02f906d4;
              lVar18 = *(long *)(lVar18 + lVar9 * 0x28 + 0x28);
              if (lVar18 == 0) goto code_r0x02f906d0;
              uVar29 = *(undefined8 *)(lVar18 + 0x20);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar19,uVar29,0);
              if ((uVar10 & 1) == 0) goto code_r0x02f905e0;
            }
            plVar20 = (long *)((long)plVar20 + 1);
            lVar27 = lVar27 + 0x28;
          } while( true );
        }
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        plVar11 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
        plVar16 = (long *)/*Core.UI2.TweenDependencyIndexPair$$CreateEmpty*/ func_0x02f83390(plVar26);
        plVar20 = (long *)0x0;
        if (plVar11 != (long *)0x0) {
          pppppppuVar33 = *(undefined8 ********)((long)ppsVar4 + -0x50);
          puVar34 = *(undefined **)((long)ppsVar4 + -0x48);
          plVar20 = *(long **)((long)ppsVar4 + -0x60);
          plVar26 = *(long **)((long)ppsVar4 + -0x58);
          plVar22 = *(long **)((long)ppsVar4 + -0x70);
          plVar15 = *(long **)((long)ppsVar4 + -0x68);
          lVar9 = *(long *)((long)ppsVar4 + -0x80);
          uVar12 = *(undefined8 *)((long)ppsVar4 + -0x78);
          goto code_r0x02427110;
        }
      }
      goto code_r0x02f906d0;
    }
  }
code_r0x02f906d4:
  uVar12 = func_0x00f78b24();
  puVar34 = &Core_UI2_UITweener__CalculateOrderRankingForLeaf;
  auVar39 = func_0x00f78ac0(uVar12,0);
code_r0x02f906e0:
  lVar27 = auVar39._0_8_;
  *(long **)(puVar5 + -0x20) = plVar20;
  *(long **)(puVar5 + -0x18) = plVar26;
  *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar33;
  *(undefined **)(puVar5 + -8) = puVar34;
  if ((lVar27 != 0) && (lVar9 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar27,0), lVar9 != 0)) {
    plVar11 = (long *)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar9,0);
    switch(auVar39._8_4_) {
    case 1:
      lVar27 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar27,0);
      if (lVar27 != 0) {
        plVar11 = (long *)/*UnityEngine.Transform$$GetSiblingIndex*/ func_0x03277144(lVar27,0);
        return plVar11;
      }
      goto code_r0x02f9078c;
    case 3:
      break;
    case 4:
      break;
    case 6:
    case 9:
      break;
    case 7:
      break;
    case 8:
    }
    return plVar11;
  }
code_r0x02f9078c:
  plVar11 = (long *)func_0x00f78af4();
  return plVar11;
}



// ============================================================
// RVA: 0x15168c4 | Atlas.Audio.UIAudio.DeInitEditor
// ============================================================

/* WARNING: Possible PIC construction at 0x02f8f8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fc0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fc68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f8fdb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f90068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f901a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f9063c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f8fdb8) */
/* WARNING: Removing unreachable block (ram,0x02f8fdbc) */
/* WARNING: Removing unreachable block (ram,0x02f8fdc8) */
/* WARNING: Removing unreachable block (ram,0x02f8fe48) */
/* WARNING: Removing unreachable block (ram,0x02f8fdd8) */
/* WARNING: Removing unreachable block (ram,0x02f8fde8) */
/* WARNING: Removing unreachable block (ram,0x02f8fc10) */
/* WARNING: Removing unreachable block (ram,0x02f8fc6c) */
/* WARNING: Removing unreachable block (ram,0x02f8fc14) */
/* WARNING: Removing unreachable block (ram,0x02f8fc28) */
/* WARNING: Removing unreachable block (ram,0x02f8fc30) */
/* WARNING: Removing unreachable block (ram,0x02f8fc38) */
/* WARNING: Removing unreachable block (ram,0x02f8fc44) */
/* WARNING: Removing unreachable block (ram,0x02f8fc50) */
/* WARNING: Removing unreachable block (ram,0x02f8f8a4) */
/* WARNING: Removing unreachable block (ram,0x02f8fa0c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa24) */
/* WARNING: Removing unreachable block (ram,0x02f8fa3c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa44) */
/* WARNING: Removing unreachable block (ram,0x02f8fa5c) */
/* WARNING: Removing unreachable block (ram,0x02f8fa64) */
/* WARNING: Removing unreachable block (ram,0x02f8fa74) */
/* WARNING: Removing unreachable block (ram,0x02f8fa80) */
/* WARNING: Removing unreachable block (ram,0x02f8fa8c) */
/* WARNING: Removing unreachable block (ram,0x02f8f8ac) */
/* WARNING: Removing unreachable block (ram,0x02f8f8c4) */
/* WARNING: Removing unreachable block (ram,0x02f8f8cc) */
/* WARNING: Removing unreachable block (ram,0x02f8f8dc) */
/* WARNING: Removing unreachable block (ram,0x02f8f8e8) */
/* WARNING: Removing unreachable block (ram,0x02f8f8f4) */
/* WARNING: Removing unreachable block (ram,0x02f8f934) */
/* WARNING: Removing unreachable block (ram,0x02f8f93c) */
/* WARNING: Removing unreachable block (ram,0x02f8f944) */
/* WARNING: Removing unreachable block (ram,0x02f8f958) */
/* WARNING: Removing unreachable block (ram,0x02f8f95c) */
/* WARNING: Removing unreachable block (ram,0x02f8fb00) */
/* WARNING: Removing unreachable block (ram,0x02f8f974) */
/* WARNING: Removing unreachable block (ram,0x02f8f980) */
/* WARNING: Removing unreachable block (ram,0x02f8f99c) */
/* WARNING: Removing unreachable block (ram,0x02f8f9a4) */
/* WARNING: Removing unreachable block (ram,0x02f8f9b4) */
/* WARNING: Removing unreachable block (ram,0x02f8f9c0) */
/* WARNING: Removing unreachable block (ram,0x02f8f9cc) */
/* WARNING: Removing unreachable block (ram,0x02f8fa00) */
/* WARNING: Removing unreachable block (ram,0x02f9006c) */
/* WARNING: Removing unreachable block (ram,0x02f901c4) */
/* WARNING: Removing unreachable block (ram,0x02f90070) */
/* WARNING: Removing unreachable block (ram,0x02f90078) */
/* WARNING: Removing unreachable block (ram,0x02f9007c) */
/* WARNING: Removing unreachable block (ram,0x02f90198) */
/* WARNING: Removing unreachable block (ram,0x02f90080) */
/* WARNING: Removing unreachable block (ram,0x02f90094) */
/* WARNING: Removing unreachable block (ram,0x02f9009c) */
/* WARNING: Removing unreachable block (ram,0x02f900a4) */
/* WARNING: Removing unreachable block (ram,0x02f900b0) */
/* WARNING: Removing unreachable block (ram,0x02f900b8) */
/* WARNING: Removing unreachable block (ram,0x02f900c0) */
/* WARNING: Removing unreachable block (ram,0x02f900cc) */
/* WARNING: Removing unreachable block (ram,0x02f90110) */
/* WARNING: Removing unreachable block (ram,0x02f901a4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Audio_UIAudio__DeInitEditor(undefined8 param_1)

{
  ushort uVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  long *extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar19;
  ulong uVar20;
  long *in_x4;
  uint extraout_w8;
  long lVar21;
  long lVar22;
  long extraout_x9;
  ulong uVar23;
  int *piVar24;
  uint uVar25;
  long *plVar26;
  ulong uVar27;
  undefined8 uVar28;
  uint uVar29;
  code *pcVar30;
  segment_command *unaff_x24;
  long **pplVar31;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar32;
  undefined *puVar33;
  float fVar34;
  ulong extraout_d0;
  undefined8 uVar35;
  ulong unaff_d8;
  undefined8 unaff_d9;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  undefined1 auStack_1e0 [4];
  int iStack_1dc;
  long *plStack_1d8;
  long *plStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  segment_command *psStack_190;
  long *plStack_188;
  ulong uStack_180;
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_120 [8];
  long *plStack_118;
  long lStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined *puStack_e8;
  long lStack_a8;
  undefined8 *****pppppuStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb4db4 & 1) == 0) {
    func_0x00f78a20(0x3d25450);
    func_0x00f78a20(0x3d5f6b8);
    func_0x00f78a20(0x3d25600);
    bRam0000000003eb4db4 = 1;
  }
  uVar8 = func_0x00f78aec(/*Core.UI2.TweenPhaseStartedCallback_TypeInfo*/ lRam0000000003d25450);
  uVar20 = 0;
  /*Core.UI2.TweenPhaseStartedCallback$$.ctor*/ func_0x02f833f8(uVar8,param_1,uRam0000000003d5f6b8);
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebc69a & 1) == 0) {
    func_0x00f78a20(0x3d25450,0);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69a = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar15 = (long *)0x3d25450;
  plVar12 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30);
  while( true ) {
    plVar19 = (long *)0x0;
    plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(plVar12,uVar8);
    if ((plVar11 != (long *)0x0) && (*plVar11 != /*Core.UI2.TweenPhaseStartedCallback_TypeInfo*/ lRam0000000003d25450)) break;
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    plVar19 = (long *)func_0x00ff0f44(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x30,plVar11,plVar12);
    bVar5 = plVar12 == plVar19;
    plVar12 = plVar19;
    if (bVar5) {
      return plVar19;
    }
  }
  plVar12 = (long *)func_0x00f78e5c(plVar11);
  puStack_48 = &Core_UI2_UITweener__PlanTweensForLeaves;
  lStack_a8 = *(long *)PTR_03a5d648;
  uVar8 = 0x3ebc000;
  pppppuStack_50 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003ebc69c & 1) == 0) {
    func_0x00f78a20(0x3d579d0);
    func_0x00f78a20(0x3d1cff8);
    func_0x00f78a20(0x3d1d4f8);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d1f598);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69c = 1;
  }
  lVar22 = 0x3d25600;
  plStack_f8 = plVar12;
  ppppppuStack_f0 = &pppppuStack_50;
  if (plVar12 != (long *)0x0) {
    uVar8 = 0;
    unaff_x27 = (long *)0x0;
    unaff_x25 = 0x3d1cff8;
    unaff_x26 = 0x3d1d4f8;
    plVar17 = (long *)0x3d579d0;
    unaff_x28 = 0x3d23990;
    do {
      lVar21 = *plVar12;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12a);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == /*System.Collections.Generic.ICollection<UITweenLeaf>_TypeInfo*/ lRam0000000003d1cff8) {
            puVar13 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
            goto code_r0x02f8f7c0;
          }
          piVar24 = piVar24 + 4;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
      plVar19 = (long *)0x0;
      puVar13 = (undefined8 *)func_0x00fac1f0(plVar12);
code_r0x02f8f7c0:
      iVar7 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      if (iVar7 <= (int)unaff_x27) {
        plStack_118 = plVar15;
        if (*(long *)PTR_03a5d648 == lStack_a8) {
          return (long *)0x0;
        }
        goto code_r0x02f8fb0c;
      }
      lVar21 = *plVar12;
      uVar23 = (ulong)*(ushort *)(lVar21 + 0x12a);
      if (uVar23 != 0) {
        piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar24 + -2) == /*System.Collections.Generic.IList<UITweenLeaf>_TypeInfo*/ lRam0000000003d1d4f8) {
            puVar13 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
            goto code_r0x02f8f820;
          }
          piVar24 = piVar24 + 4;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
      puVar13 = (undefined8 *)func_0x00fac1f0(plVar12,/*System.Collections.Generic.IList<UITweenLeaf>_TypeInfo*/ lRam0000000003d1d4f8,0);
code_r0x02f8f820:
      plVar19 = (long *)puVar13[1];
      lVar21 = (*(code *)*puVar13)(plVar12,unaff_x27);
      plVar11 = plVar17;
      if ((lVar21 == 0) ||
         (lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar21,0), plVar11 = (long *)0x3d579d0, lVar22 = lVar21,
         lVar14 == 0)) break;
      plVar19 = plRam0000000003d579d0;
      plVar15 = (long *)/*UnityEngine.GameObject$$GetComponentInParent<UITweenGroup>*/ func_0x0185d35c(lVar14,1);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(plVar15,0);
      if (iVar7 != 0) goto code_r0x02f8f87c;
      unaff_x27 = (long *)(ulong)((int)unaff_x27 + 1);
    } while( true );
  }
  func_0x00f78af4();
  uVar16 = func_0x00f78b24();
  func_0x00f78ac0(uVar16,0);
  plVar17 = plVar11;
  plStack_118 = plVar15;
code_r0x02f8fb0c:
  auVar37 = ___stack_chk_fail();
  uVar27 = auVar37._8_8_;
  plVar15 = auVar37._0_8_;
  plVar3 = &lStack_150;
  plVar11 = &lStack_150;
  puStack_e8 = &Core_UI2_UITweener__CalculateTweenDurationsAndDependencies;
  plVar12 = (long *)0x3ebc000;
  uVar23 = 0x3d25600;
  plVar9 = plVar19;
  lStack_110 = lVar22;
  plStack_108 = plVar17;
  uStack_100 = uVar8;
  if ((bRam0000000003ebc69d & 1) == 0) {
    func_0x00f78a20(0x3d3c520);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69d = 1;
    plVar9 = plVar19;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar19 = plVar17;
  if (*(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18) == 0) {
code_r0x02f8fc94:
    func_0x00f78af4();
  }
  else {
    plVar12 = (long *)/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18),
                                      uRam0000000003d3c520);
    if (auVar37._8_4_ < 1) {
      return plVar12;
    }
    plVar12 = (long *)0x0;
    plVar19 = &lStack_148;
    uVar27 = uVar27 & 0xffffffff;
    unaff_x24 = &segment_command_00000020;
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar22 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar22 == 0) goto code_r0x02f8fc94;
    if (*(int *)(lVar22 + 0x18) != 0) {
      lStack_148 = *(long *)(lVar22 + 0x28);
      lStack_150 = *(long *)(lVar22 + 0x20);
      auVar37._8_8_ = plVar15;
      auVar37._0_8_ = lStack_150;
      uStack_138 = *(undefined8 *)(lVar22 + 0x38);
      uStack_140 = *(undefined8 *)(lVar22 + 0x30);
      uStack_130 = *(undefined8 *)(lVar22 + 0x40);
      puVar33 = &UNK_02f8fc10;
      plVar17 = plVar19;
      goto code_r0x02f90330;
    }
  }
  uVar8 = func_0x00f78b24();
  plVar17 = (long *)func_0x00f78ac0(uVar8,0);
  puVar4 = auStack_1e0;
  plStack_188 = (long *)0x3d25600;
  puStack_158 = &Core_UI2_UITweener__PlayTweenAnimOnLeaves;
  pppppppuVar32 = &pppppppuStack_160;
  uVar23 = extraout_d0 & 0xffffffff;
  plVar26 = (long *)0x3ebc000;
  plVar18 = plVar17;
  plStack_1a8 = unaff_x27;
  uStack_1a0 = unaff_x26;
  uStack_198 = unaff_x25;
  psStack_190 = unaff_x24;
  uStack_180 = uVar27;
  plStack_178 = plVar19;
  plStack_170 = plVar12;
  plStack_168 = plVar15;
  pppppppuStack_160 = &ppppppuStack_f0;
  if ((bRam0000000003ebc69f & 1) == 0) {
    func_0x00f78a20(0x3d51498);
    plVar18 = (long *)func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69f = 1;
  }
  iVar7 = (int)plVar9;
  if (iVar7 == 0) {
    if (in_x4 == (long *)0x0) {
      return plVar18;
    }
    uVar8 = 0;
    plStack_1a8 = in_x4;
    lVar22 = in_x4[0xd];
    if (lVar22 == 0) {
      pplVar31 = &plStack_1a8;
      lVar21 = 1;
    }
    else {
      lVar21 = *(long *)(lVar22 + 0x18);
      if (lVar21 == 0) {
        return in_x4;
      }
      pplVar31 = (long **)(lVar22 + 0x20);
    }
    lVar22 = 0;
    do {
      plVar12 = pplVar31[lVar22];
      pcVar30 = (code *)plVar12[2];
      plVar15 = (long *)plVar12[4];
      lVar14 = plVar12[5];
      if (*(short *)(lVar14 + 0x48) == -1) {
        func_0x00f78ad8(lVar14,uVar8);
      }
      iVar7 = func_0x00f78a4c(lVar14);
      if (iVar7 == 0) {
        if ((((plVar15 == (long *)0x0) || (*(short *)(lVar14 + 0x48) == -1)) ||
            ((*(byte *)(*plVar15 + 0x115) & 1) != 0)) || (in_x4[3] == 0)) goto code_r0x016bb980;
        iVar7 = func_0x00f78a44(lVar14);
        iVar6 = func_0x00f78ec0(lVar14);
        if (iVar7 == 0) {
          uVar1 = *(ushort *)(lVar14 + 0x48);
          if (iVar6 == 0) {
            lVar14 = *plVar15 + (ulong)uVar1 * 0x10;
            auVar37 = (**(code **)(lVar14 + 0x138))(plVar15,*(undefined8 *)(lVar14 + 0x140));
            goto code_r0x016bb98c;
          }
          lVar14 = func_0x00f78a48(lVar14);
          lVar10 = *plVar15;
          uVar20 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar20 != 0) {
            piVar24 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar24 + -2) == lVar14) {
                puVar13 = (undefined8 *)
                          (lVar10 + (long)(int)(*piVar24 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x016bba50;
              }
              piVar24 = piVar24 + 4;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
          puVar13 = (undefined8 *)func_0x00fac1f0(plVar15,lVar14,(ulong)uVar1);
code_r0x016bba50:
          pcVar30 = (code *)*puVar13;
          puVar13 = (undefined8 *)puVar13[1];
        }
        else {
          if (iVar6 == 0) {
            uVar8 = *(undefined8 *)(*plVar15 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar10 = *plVar15;
            uVar20 = (ulong)*(ushort *)(lVar10 + 0x12a);
            if (uVar20 != 0) {
              piVar24 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar24 + -2) == *(long *)(lVar14 + 0x18)) {
                  lVar10 = lVar10 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar14 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x016bba28;
                }
                piVar24 = piVar24 + 4;
                uVar20 = uVar20 - 1;
              } while (uVar20 != 0);
            }
            lVar10 = func_0x00fac1f0(plVar15);
code_r0x016bba28:
            uVar8 = *(undefined8 *)(lVar10 + 8);
          }
          puVar13 = (undefined8 *)func_0x00f78acc(uVar8,lVar14);
          pcVar30 = (code *)*puVar13;
        }
        auVar37 = (*pcVar30)(plVar15,puVar13);
      }
      else if (*(char *)(lVar14 + 0x4a) == '\0') {
        auVar37 = (*pcVar30)(lVar14);
      }
      else {
code_r0x016bb980:
        auVar37 = (*pcVar30)(plVar15,lVar14);
      }
code_r0x016bb98c:
      uVar8 = auVar37._8_8_;
      lVar22 = lVar22 + 1;
      if (lVar22 == lVar21) {
        return auVar37._0_8_;
      }
    } while( true );
  }
  if (extraout_x1 != (long *)0x0) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    if (*(long *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] != 0) {
      if (*(int *)(*(long *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18) < (int)extraout_x1[3]) {
        return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
      }
      if (iVar7 < 1) {
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        /*System.Array$$Sort<float, UITweenLeaf>*/ func_0x01804f30(*(undefined8 *)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17],extraout_x1,0,plVar9,
                        uRam0000000003d51498);
        if ((float)extraout_d0 < 0.0) {
          if (plVar17 == (long *)0x0) goto code_r0x02f8ff9c;
          uVar23 = (ulong)*(uint *)(plVar17 + 3);
        }
        uVar25 = iVar7 - 1;
        plVar9 = (long *)(ulong)uVar25;
        if (iVar7 < 1) {
          if (plVar17 != (long *)0x0) goto code_r0x02f8fef8;
        }
        else if (plVar17 != (long *)0x0) {
          plVar26 = (long *)0x0;
          unaff_x24 = (segment_command *)(extraout_x1 + 4);
          do {
            if (*(uint *)(extraout_x1 + 3) <= (uint)plVar26) goto code_r0x02f8ff90;
            if (*(long *)(unaff_x24->segname + (long)plVar26 * 8 + -8) == 0) goto code_r0x02f8ff9c;
            /*Core.UI2.UITweenLeaf$$PerformTweenAnimation*/ func_0x02f8d7c0((float)uVar23 +
                            *(float *)((long)plVar17 + 0x44) * (float)(int)(uint)plVar26,
                            *(long *)(unaff_x24->segname + (long)plVar26 * 8 + -8),plVar17,uVar20);
            plVar26 = (long *)((long)plVar26 + 1);
          } while (iVar7 != (int)plVar26);
code_r0x02f8fef8:
          fVar34 = (float)/*Core.UI2.UITweenAnimation$$GetParam*/ func_0x02f8d5b8(_UNK_033f82c4,plVar17,0);
          if (*(uint *)(extraout_x1 + 3) <= uVar25) goto code_r0x02f8ff90;
          if (extraout_x1[(long)(int)uVar25 + 4] != 0) {
            fVar36 = *(float *)((long)plVar17 + 0x44);
            uVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(extraout_x1[(long)(int)uVar25 + 4],0);
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            uVar23 = (ulong)(uint)((float)uVar23 + fVar34 + fVar36 * (float)(int)uVar25);
            plVar26 = plStack_168;
            plVar17 = plStack_170;
            plVar15 = plStack_178;
            uVar20 = uStack_180;
            plVar9 = plStack_188;
            unaff_x24 = psStack_190;
            pppppppuVar32 = pppppppuStack_160;
            puVar33 = puStack_158;
            goto code_r0x02f8ffa0;
          }
        }
        goto code_r0x02f8ff9c;
      }
      iStack_1dc = iVar7;
      plStack_1d8 = in_x4;
      if ((extraout_x1[3] & 0xffffffffU) == 0) {
code_r0x02f8ff90:
        uVar8 = func_0x00f78b24();
        func_0x00f78ac0(uVar8,0);
        goto code_r0x02f8ff9c;
      }
      plVar26 = extraout_x1 + 4;
      unaff_x24 = (segment_command *)*plVar26;
      if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
         ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
        func_0x00f78ad0();
      }
      if (plVar17 == (long *)0x0) goto code_r0x02f8ff9c;
      auVar38._8_4_ = (int)plVar17[8];
      auVar38._0_8_ = unaff_x24;
      puVar33 = &UNK_02f8fdb8;
      goto code_r0x02f906e0;
    }
  }
code_r0x02f8ff9c:
  unaff_d8 = uVar23;
  uVar23 = func_0x00f78af4();
  plVar11 = (long *)auStack_1e0;
  uVar8 = extraout_x1_00;
  plVar15 = extraout_x1;
  puVar33 = &Core_UI2_UITweener__TryCreateOnCompleteVirtualTween;
code_r0x02f8ffa0:
  *(undefined8 *)((long)plVar11 + -0x50) = unaff_d9;
  *(ulong *)((long)plVar11 + -0x48) = unaff_d8;
  *(segment_command **)((long)plVar11 + -0x40) = unaff_x24;
  *(long **)((long)plVar11 + -0x38) = plVar9;
  *(ulong *)((long)plVar11 + -0x30) = uVar20;
  *(long **)((long)plVar11 + -0x28) = plVar15;
  *(long **)((long)plVar11 + -0x20) = plVar17;
  *(long **)((long)plVar11 + -0x18) = plVar26;
  *(undefined8 ********)((long)plVar11 + -0x10) = pppppppuVar32;
  *(undefined **)((long)plVar11 + -8) = puVar33;
  if ((bRam0000000003ebc6a0 & 1) == 0) {
    func_0x00f78a20(uVar23,0x3d40f08,uVar8);
    func_0x00f78a20(0x3d1ea28);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6b0);
    func_0x00f78a20(0x3d5e700);
    func_0x00f78a20(0x3d5e868);
    func_0x00f78a20(0x3d64820);
    func_0x00f78a20(0x3d64828);
    func_0x00f78a20(0x3d294a0);
    func_0x00f78a20(0x3d29498);
    bRam0000000003ebc6a0 = 1;
  }
  plVar15 = (long *)func_0x00f78aec(/*Core.UI2.UITweener.<>c__DisplayClass20_0_TypeInfo*/ uRam0000000003d294a0);
  return plVar15;
code_r0x02f905e0:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar15 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
  plVar12 = (long *)func_0x00f78aec(/*Core.UI2.TweenDependencyIndexPair_TypeInfo*/ uRam0000000003d25430);
  /*Core.UI2.TweenDependencyIndexPair$$.ctor*/ func_0x02f83324(plVar12,plVar26,plVar17);
  if (plVar15 == (long *)0x0) goto code_r0x02f906d0;
  puVar33 = &UNK_02f90640;
  puVar2 = (undefined1 *)((long)plVar3 + -0xd0);
  plVar11 = plVar15;
  plVar19 = plVar12;
code_r0x02427110:
  *(long **)(puVar2 + -0x20) = plVar17;
  *(long **)(puVar2 + -0x18) = plVar26;
  *(undefined8 ********)(puVar2 + -0x10) = pppppppuVar32;
  *(undefined **)(puVar2 + -8) = puVar33;
  lVar22 = plVar15[2];
  puVar13 = puRam0000000003d3c518;
  if (lVar22 == 0) {
code_r0x0242716c:
    plVar12 = plVar17;
    plVar15 = plVar26;
    plVar9 = (long *)func_0x00f78af4();
    lVar22 = extraout_x9;
    uVar25 = extraout_w8;
code_r0x02427170:
    *(uint *)(plVar15 + 3) = uVar25 + 1;
  }
  else {
    uVar25 = *(uint *)(plVar15 + 3);
    plVar9 = plVar15;
    if (uVar25 != *(uint *)(lVar22 + 0x18)) goto code_r0x02427170;
    puVar13 = *(undefined8 **)(*(long *)(puRam0000000003d3c518[3] + 0xc0) + 0x60);
    plVar9 = (long *)(*(code *)*puVar13)(plVar15,uVar25 + 1);
    lVar22 = plVar15[2];
    uVar25 = *(uint *)(plVar15 + 3);
    *(uint *)(plVar15 + 3) = uVar25 + 1;
    plVar26 = plVar15;
    plVar17 = plVar12;
    if (lVar22 == 0) goto code_r0x0242716c;
  }
  if (uVar25 < *(uint *)(lVar22 + 0x18)) {
    *(long **)(lVar22 + (long)(int)uVar25 * 8 + 0x20) = plVar12;
    *(int *)((long)plVar15 + 0x1c) = *(int *)((long)plVar15 + 0x1c) + 1;
    return plVar9;
  }
  uVar16 = func_0x00f78b24();
  auVar37 = func_0x00f78ac0(uVar16,0);
  lVar14 = auVar37._8_8_;
  lVar22 = auVar37._0_8_;
  *(long *)(puVar2 + -0x60) = lVar21;
  *(undefined8 *)(puVar2 + -0x58) = uVar8;
  *(long **)(puVar2 + -0x50) = plVar19;
  *(long **)(puVar2 + -0x48) = plVar11;
  *(long **)(puVar2 + -0x40) = plVar12;
  *(long **)(puVar2 + -0x38) = plVar15;
  *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x28) =
       &System_Collections_Generic_List_object___System_Collections_IList_Add;
  (*(code *)**(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 0x48))(lVar14,0x14);
  if (lVar22 != 0) {
    pcVar30 = (code *)**(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 0x28);
    lVar21 = *(long *)(*(long *)(puVar13[3] + 0xc0) + 0x38);
    if ((*(ushort *)(lVar21 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar21);
    }
    if (lVar14 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = func_0x00f78adc(lVar14,lVar21);
      if (lVar10 == 0) {
        func_0x00f78e5c(lVar14,lVar21);
        goto code_r0x0242734c;
      }
    }
    (*pcVar30)(lVar22,lVar10,*(undefined8 *)(*(long *)(puVar13[3] + 0xc0) + 0x28));
    iVar7 = (*(code *)**(undefined8 **)(*(long *)(puVar13[3] + 0xc0) + 0x68))(lVar22);
    return (long *)(ulong)(iVar7 - 1);
  }
  func_0x00f78af4();
code_r0x0242734c:
                    /* WARNING: Does not return */
  pcVar30 = (code *)SoftwareBreakpoint(1,0x2427350);
  (*pcVar30)();
code_r0x02f8f87c:
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)auStack_120;
  plStack_108 = (long *)0x3d579d0;
  uStack_100 = 0;
  puStack_e8 = &UNK_02f8f8a4;
  plStack_118 = plVar15;
  lStack_110 = lVar21;
  if ((bRam0000000003ebc6a2 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc6a2 = 1;
  }
  plVar12 = (long *)0x0;
  uVar27 = 0x3d25600;
  uVar23 = 0x3d23990;
  unaff_x24 = &segment_command_00000020;
  while( true ) {
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar22 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar22 == 0) break;
    if ((long)*(int *)(lVar22 + 0x18) <= (long)plVar12) {
      return (long *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
      lVar22 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
      if (lVar22 == 0) break;
    }
    if ((long *)(ulong)*(uint *)(lVar22 + 0x18) <= plVar12) goto code_r0x02f90324;
    iVar7 = /*Core.UI2.PlannedTweenData$$get_IsValid*/ func_0x02f82590(unaff_x24->segname + lVar22 + -8);
    if (iVar7 == 0) {
      return (long *)0xffffffff;
    }
    if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
       ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
      func_0x00f78ad0();
    }
    lVar22 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
    if (lVar22 == 0) break;
    if ((long *)(ulong)*(uint *)(lVar22 + 0x18) <= plVar12) goto code_r0x02f90324;
    plVar17 = *(long **)(unaff_x24->segname + lVar22 + -8);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar19 = (long *)0x0;
    uVar20 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(plVar17,plVar15);
    if ((uVar20 & 1) != 0) {
      return plVar12;
    }
    plVar12 = (long *)((long)plVar12 + 1);
    unaff_x24 = (segment_command *)&unaff_x24->fileoff;
  }
  func_0x00f78af4();
code_r0x02f90324:
  uVar8 = func_0x00f78b24();
  puVar33 = &Core_UI2_UITweener__TryResolveTweenAnim;
  auVar37 = func_0x00f78ac0(uVar8,0);
code_r0x02f90330:
  plVar11 = auVar37._8_8_;
  puVar2 = (undefined1 *)((long)plVar3 + -0x40);
  *(segment_command **)((long)plVar3 + -0x40) = unaff_x24;
  *(ulong *)((long)plVar3 + -0x38) = uVar23;
  *(ulong *)((long)plVar3 + -0x30) = uVar27;
  *(long **)((long)plVar3 + -0x28) = plVar17;
  *(long **)((long)plVar3 + -0x20) = plVar12;
  *(long **)((long)plVar3 + -0x18) = plVar15;
  *(undefined8 ********)((long)plVar3 + -0x10) = &ppppppuStack_f0;
  *(undefined **)((long)plVar3 + -8) = puVar33;
  if ((auVar37._0_8_ != 0) && (uVar27 = *(ulong *)(auVar37._0_8_ + 0x18), uVar27 != 0)) {
    uVar25 = *(uint *)(uVar27 + 0x18);
    plVar17 = (long *)(ulong)(0 < (int)uVar25);
    if (0 < (int)uVar25) {
      uVar23 = 0;
      do {
        uVar29 = (uint)uVar23;
        plVar15 = plVar19;
        if (uVar25 <= uVar29) goto code_r0x02f903d8;
        unaff_x24 = *(segment_command **)(uVar27 + (long)(int)uVar29 * 8 + 0x20);
        plVar12 = plVar11;
        if ((unaff_x24 == (segment_command *)0x0) || (*(long *)(unaff_x24->segname + 8) == 0))
        goto code_r0x02f903d4;
        iVar7 = /*System.String$$Equals*/ func_0x029caa48(*(long *)(unaff_x24->segname + 8),plVar11,3,0);
        if (iVar7 != 0) goto code_r0x02f903b8;
        uVar29 = uVar29 + 1;
        uVar23 = (ulong)uVar29;
        uVar25 = *(uint *)(uVar27 + 0x18);
        plVar17 = (long *)(ulong)((int)uVar29 < (int)uVar25);
      } while ((int)uVar29 < (int)uVar25);
    }
    unaff_x24 = (segment_command *)0x0;
code_r0x02f903b8:
    *plVar19 = (long)unaff_x24;
    return plVar17;
  }
code_r0x02f903d4:
  plVar11 = plVar12;
  func_0x00f78af4();
code_r0x02f903d8:
  uVar8 = func_0x00f78b24();
  plVar26 = (long *)func_0x00f78ac0(uVar8,0);
  puVar4 = (undefined1 *)((long)plVar3 + -0xd0);
  *(undefined8 *)((long)plVar3 + -0xa0) = unaff_x28;
  *(long **)((long)plVar3 + -0x98) = unaff_x27;
  *(undefined8 *)((long)plVar3 + -0x90) = unaff_x26;
  *(undefined8 *)((long)plVar3 + -0x88) = unaff_x25;
  *(segment_command **)((long)plVar3 + -0x80) = unaff_x24;
  *(ulong *)((long)plVar3 + -0x78) = uVar23;
  *(ulong *)((long)plVar3 + -0x70) = uVar27;
  *(long **)((long)plVar3 + -0x68) = plVar17;
  *(long **)((long)plVar3 + -0x60) = plVar11;
  *(long **)((long)plVar3 + -0x58) = plVar15;
  *(undefined1 **)((long)plVar3 + -0x50) = (undefined1 *)((long)plVar3 + -0x10);
  *(undefined **)((long)plVar3 + -0x48) = &Core_UI2_UITweener__DiscoverDependencies;
  pppppppuVar32 = (undefined8 *******)((long)plVar3 + -0x50);
  plVar17 = (long *)0x3ebc000;
  uVar8 = 0x3d25600;
  if ((bRam0000000003ebc69e & 1) == 0) {
    func_0x00f78a20(0x3d3c518);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d25430);
    func_0x00f78a20(0x3d25600);
    bRam0000000003ebc69e = 1;
  }
  if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
     ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
    func_0x00f78ad0();
  }
  lVar22 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
  if (lVar22 == 0) {
code_r0x02f906d0:
    func_0x00f78af4();
  }
  else {
    uVar25 = (uint)plVar26;
    if (uVar25 < *(uint *)(lVar22 + 0x18)) {
      lVar21 = (long)(int)uVar25;
      lVar22 = *(long *)(lVar22 + lVar21 * 0x28 + 0x28);
      if (lVar22 != 0) {
        uVar16 = *(undefined8 *)(lVar22 + 0x20);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar7 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar16,0);
        if (iVar7 != 0) {
          plVar17 = (long *)0x0;
          lVar22 = 0x20;
          do {
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
            }
            lVar14 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
            if (lVar14 == 0) goto code_r0x02f906d0;
            if ((long)*(int *)(lVar14 + 0x18) <= (long)plVar17) {
              return /*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600;
            }
            if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
               ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
              func_0x00f78ad0();
              lVar14 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar14 == 0) goto code_r0x02f906d0;
            }
            if ((long *)(ulong)*(uint *)(lVar14 + 0x18) <= plVar17) goto code_r0x02f906d4;
            puVar13 = (undefined8 *)(lVar14 + lVar22);
            uVar16 = *puVar13;
            uVar35 = puVar13[3];
            uVar28 = puVar13[2];
            *(undefined8 *)((long)plVar3 + -200) = puVar13[1];
            *(undefined8 *)((long)plVar3 + -0xd0) = uVar16;
            *(undefined8 *)((long)plVar3 + -0xb8) = uVar35;
            *(undefined8 *)((long)plVar3 + -0xc0) = uVar28;
            *(undefined8 *)((long)plVar3 + -0xb0) = puVar13[4];
            plVar15 = (long *)/*Core.UI2.PlannedTweenData$$get_IsValid*/ func_0x02f82590((undefined1 *)((long)plVar3 + -0xd0));
            if ((int)plVar15 == 0) {
              return plVar15;
            }
            if ((long *)((ulong)plVar26 & 0xffffffff) != plVar17) {
              uVar16 = *(undefined8 *)((long)plVar3 + -0xd0);
              if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
                 ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
                func_0x00f78ad0();
              }
              lVar14 = *(long *)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 8);
              if (lVar14 == 0) goto code_r0x02f906d0;
              if (*(uint *)(lVar14 + 0x18) <= uVar25) goto code_r0x02f906d4;
              lVar14 = *(long *)(lVar14 + lVar21 * 0x28 + 0x28);
              if (lVar14 == 0) goto code_r0x02f906d0;
              uVar28 = *(undefined8 *)(lVar14 + 0x20);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar20 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,uVar28,0);
              if ((uVar20 & 1) == 0) goto code_r0x02f905e0;
            }
            plVar17 = (long *)((long)plVar17 + 1);
            lVar22 = lVar22 + 0x28;
          } while( true );
        }
        if (((*(ushort *)((long)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
           ((int)/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x1c] == 0)) {
          func_0x00f78ad0();
        }
        plVar15 = *(long **)(/*Core.UI2.UITweener_TypeInfo*/ plRam0000000003d25600[0x17] + 0x18);
        plVar12 = (long *)/*Core.UI2.TweenDependencyIndexPair$$CreateEmpty*/ func_0x02f83390(plVar26);
        plVar17 = (long *)0x0;
        if (plVar15 != (long *)0x0) {
          pppppppuVar32 = *(undefined8 ********)((long)plVar3 + -0x50);
          puVar33 = *(undefined **)((long)plVar3 + -0x48);
          plVar17 = *(long **)((long)plVar3 + -0x60);
          plVar26 = *(long **)((long)plVar3 + -0x58);
          plVar19 = *(long **)((long)plVar3 + -0x70);
          plVar11 = *(long **)((long)plVar3 + -0x68);
          lVar21 = *(long *)((long)plVar3 + -0x80);
          uVar8 = *(undefined8 *)((long)plVar3 + -0x78);
          goto code_r0x02427110;
        }
      }
      goto code_r0x02f906d0;
    }
  }
code_r0x02f906d4:
  uVar8 = func_0x00f78b24();
  puVar33 = &Core_UI2_UITweener__CalculateOrderRankingForLeaf;
  auVar38 = func_0x00f78ac0(uVar8,0);
code_r0x02f906e0:
  lVar22 = auVar38._0_8_;
  *(long **)(puVar4 + -0x20) = plVar17;
  *(long **)(puVar4 + -0x18) = plVar26;
  *(undefined8 ********)(puVar4 + -0x10) = pppppppuVar32;
  *(undefined **)(puVar4 + -8) = puVar33;
  if ((lVar22 != 0) && (lVar21 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar22,0), lVar21 != 0)) {
    plVar15 = (long *)/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar21,0);
    switch(auVar38._8_4_) {
    case 1:
      lVar22 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar22,0);
      if (lVar22 != 0) {
        plVar15 = (long *)/*UnityEngine.Transform$$GetSiblingIndex*/ func_0x03277144(lVar22,0);
        return plVar15;
      }
      goto code_r0x02f9078c;
    case 3:
      break;
    case 4:
      break;
    case 6:
    case 9:
      break;
    case 7:
      break;
    case 8:
    }
    return plVar15;
  }
code_r0x02f9078c:
  plVar15 = (long *)func_0x00f78af4();
  return plVar15;
}



// ============================================================
// RVA: 0x151697c | Atlas.Audio.UIAudio.OnTweenPhaseStarted
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01516c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01516d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01516e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01516f90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01516e98) */
/* WARNING: Removing unreachable block (ram,0x01516e9c) */
/* WARNING: Removing unreachable block (ram,0x01516eb8) */
/* WARNING: Removing unreachable block (ram,0x01516d8c) */
/* WARNING: Removing unreachable block (ram,0x01516d90) */
/* WARNING: Removing unreachable block (ram,0x01516db8) */
/* WARNING: Removing unreachable block (ram,0x01516dbc) */
/* WARNING: Removing unreachable block (ram,0x01516c58) */
/* WARNING: Removing unreachable block (ram,0x01516c5c) */
/* WARNING: Removing unreachable block (ram,0x01516c84) */
/* WARNING: Removing unreachable block (ram,0x01516c88) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01516f94) */
/* WARNING: Removing unreachable block (ram,0x01516f98) */
/* WARNING: Removing unreachable block (ram,0x01516fb4) */
/* WARNING: Removing unreachable block (ram,0x01638fc8) */
/* WARNING: Removing unreachable block (ram,0x01639000) */
/* WARNING: Removing unreachable block (ram,0x01639018) */
/* WARNING: Removing unreachable block (ram,0x01638aa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_Audio_UIAudio__OnTweenPhaseStarted
                (undefined1 param_1 [16],float param_2,float param_3,ulong param_4,uint param_5,
                ulong param_6)

{
  char cVar1;
  undefined8 **ppuVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined8 ****ppppuVar12;
  undefined *puVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 ***pppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined8 ***pppuStack_b0;
  undefined *puStack_a8;
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined8 ***pppuStack_50;
  undefined *puStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_40;
  if ((bRam0000000003eb4db5 & 1) == 0) {
    func_0x00f78a20(0x3d78fb8);
    func_0x00f78a20(0x3d78fd8);
    func_0x00f78a20(0x3d79100);
    func_0x00f78a20(0x3d78fc0);
    func_0x00f78a20(0x3d78fd0);
    func_0x00f78a20(0x3d78fe8);
    func_0x00f78a20(0x3d78fe0);
    param_4 = func_0x00f78a20(0x3d78fc8);
    bRam0000000003eb4db5 = 1;
  }
  if ((param_6 & 1) != 0) {
    return param_4;
  }
  if (param_5 < 9) {
    uVar8 = **(ulong **)(&UNK_03a5f1f0 + (long)(int)param_5 * 8);
    uVar11 = 0x3eb4000;
    uVar4 = uVar8;
    if ((bRam0000000003eb4db6 & 1) == 0) {
      func_0x00f78a20(0x3d2faf8);
      func_0x00f78a20(0x3d2fb00);
      uVar4 = func_0x00f78a20(0x3d25580);
      bRam0000000003eb4db6 = 1;
    }
    if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
      return uVar4;
    }
    lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
    if (lVar5 != 0) {
      uVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar5,uVar8,uRam0000000003d2faf8);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
          (lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar5 != 0)) &&
         (uVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,uVar8,uRam0000000003d2fb00), uVar4 != 0)) {
        /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar4,0,0);
        return uVar4;
      }
    }
    plVar6 = (long *)func_0x00f78af4();
    pppuStack_50 = (undefined8 ***)0x3d25580;
    uStack_38 = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
    puStack_48 = (undefined *)uVar8;
    puStack_40 = (undefined8 *)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4d8b & 1) == 0) {
      func_0x00f78a20(0x3d24188);
      func_0x00f78a20(0x3d5e780);
      func_0x00f78a20(0x3d5e868);
      bRam0000000003eb4d8b = 1;
    }
    plVar7 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar6,0);
    if ((plVar7 != (long *)0x0) && (*plVar7 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
      plVar6 = (long *)func_0x00f78e5c(plVar7);
      puStack_78 = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
      pppuStack_80 = (undefined8 ***)&puStack_40;
      lVar5 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
      if (lVar5 == 0) {
        func_0x00f78a24(0x3d23938,0,0);
        uVar9 = func_0x00f78aec();
        uVar10 = func_0x00f78a24(0x3d7b500);
        /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar9,uVar10,0);
      }
      else {
        uVar11 = 0x3ec0000;
        if (pcRam0000000003ec01d0 == (code *)0x0) {
          pcRam0000000003ec01d0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                      );
        }
        uVar4 = (*pcRam0000000003ec01d0)(plVar6);
        if ((uVar4 & 1) != 0) {
          if (pcRam0000000003ec01e0 == (code *)0x0) {
            pcRam0000000003ec01e0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                        );
          }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*pcRam0000000003ec01e0)(plVar6,lVar5);
          return uVar4;
        }
        func_0x00f78a24(0x3d1fce8);
        uVar9 = func_0x00f78aec();
        uVar10 = func_0x00f78a24(0x3d6af80);
        /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar9,uVar10,0);
        plVar7 = plVar6;
      }
      uVar10 = func_0x00f78a24(0x3d5a8a8);
      auVar15 = func_0x00f78ac0(uVar9,uVar10);
      puStack_a8 = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
      puStack_c8 = (undefined *)uVar11;
      auStack_c0._0_8_ = plVar7;
      auStack_c0._8_8_ = uVar9;
      pppuStack_b0 = &pppuStack_80;
      if (pcRam0000000003ec01e0 == (code *)0x0) {
        pcRam0000000003ec01e0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                    );
      }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*pcRam0000000003ec01e0)(auVar15._0_8_,auVar15._8_8_);
      return uVar4;
    }
    fVar14 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
    uVar11 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar14 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                             plVar7,4,0);
    uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar11,uRam0000000003d5e780);
    puStack_78 = &UNK_01513b44;
    pppuStack_80 = (undefined8 ***)&puStack_40;
    if ((bRam0000000003eb66c1 & 1) == 0) {
      pppuStack_80 = (undefined8 ***)&puStack_40;
      func_0x00f78a20(0x3d208f0,plVar6,uRam0000000003d5e868);
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb66c1 = 1;
    }
    if ((uVar4 != 0) && (*(char *)(uVar4 + 0xe8) != '\0')) {
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar3 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
      if (iVar3 != 0) {
        lVar5 = func_0x00f78adc(plVar6,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar5,0,0);
        if ((uVar8 & 1) == 0) {
          if (plVar6 == (long *)0x0) goto code_r0x018eef34;
          uVar11 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        }
        else {
          if (lVar5 == 0) {
code_r0x018eef34:
            auVar15 = func_0x00f78af4();
            uVar8 = auVar15._0_8_;
            pppuStack_d0 = (undefined8 ***)0x3d5e780;
            puStack_a8 = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
            puStack_c8 = (undefined *)lVar5;
            auStack_c0._0_8_ = plVar6;
            auStack_c0._8_8_ = uVar4;
            pppuStack_b0 = &pppuStack_80;
            if ((bRam0000000003eb66c2 & 1) == 0) {
              func_0x00f78a20(0x3d20bc0);
              func_0x00f78a20(0x3d25440);
              bRam0000000003eb66c2 = 1;
            }
            if ((uVar8 != 0) && (*(char *)(uVar8 + 0xe8) != '\0')) {
              if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
              if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar8,auVar15._8_8_,cVar1 != '\0',0);
            }
            return uVar8;
          }
          uVar11 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar5,0);
        }
        *(undefined8 *)(uVar4 + 200) = uVar11;
      }
      *(long **)(uVar4 + 0x48) = plVar6;
    }
    return uVar4;
  }
  uStack_38 = (undefined *)CONCAT44(param_5,(undefined4)uStack_38);
  uVar11 = func_0x00f78a24(0x3d255f8);
  uVar11 = func_0x00f78ae0(uVar11,(long)&uStack_38 + 4);
  func_0x00f78a24(0x3d1fcf8);
  uVar10 = func_0x00f78aec();
  auVar15._8_8_ = uVar11;
  auVar15._0_8_ = uVar10;
  uVar9 = func_0x00f78a24(0x3d7af90);
  /*System.ArgumentOutOfRangeException$$.ctor*/ func_0x0292a580(uVar10,uVar9,uVar11,0,0);
  uVar11 = func_0x00f78a24(0x3d5f6b8);
  uVar8 = func_0x00f78ac0(uVar10,uVar11);
  puStack_48 = &Atlas_Audio_UIAudio__Stop;
  uVar4 = uVar8;
  pppuStack_50 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4db8 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8);
    func_0x00f78a20(0x3d2fb00);
    uVar4 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db8 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar4;
  }
  lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar5 != 0) {
    uVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar5,uVar8,uRam0000000003d2faf8);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if ((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
       (lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar5 != 0)) {
      uVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,uVar8,uRam0000000003d2fb00);
      if (uVar4 != 0) {
        uVar11 = 0x3eb4000;
        ppppuVar12 = (undefined8 ****)pppuStack_50;
        puVar13 = puStack_48;
        goto code_r0x01638a28;
      }
    }
  }
  auVar15 = func_0x00f78af4();
  ppuVar2 = (undefined8 **)&stack0xffffffffffffff60;
  puStack_78 = &Atlas_Audio_UIAudio__SetSelectedCharacter;
  unaff_x22 = 0x3eb4000;
  uVar11 = 0x3d25580;
  pppuStack_80 = &pppuStack_50;
  if ((bRam0000000003eb4db9 & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d25580);
    func_0x00f78a20(0x3d68cc8);
    func_0x00f78a20(0x3d6d068);
    func_0x00f78a20(0x3d79160);
    bRam0000000003eb4db9 = 1;
  }
  lVar5 = **(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = auVar15._0_8_;
    *(int *)(lVar5 + 0x18) = auVar15._8_4_;
    if (*(long *)(lVar5 + 0x20) != 0) {
      uVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar5 + 0x20),/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00);
      if (uVar4 != 0) {
        puVar13 = &UNK_01516c58;
        uVar11 = 0x3d25580;
        ppppuVar12 = &pppuStack_80;
        goto code_r0x01638a28;
      }
    }
  }
  uVar4 = func_0x00f78af4();
  ppuVar2 = (undefined8 **)auStack_c0;
  puStack_a8 = &Atlas_Audio_UIAudio__PlayKartSelected;
  pppuStack_b0 = &pppuStack_80;
  auStack_c0 = auVar15;
  if ((bRam0000000003eb4dba & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d25580);
    func_0x00f78a20(0x3d68cc8);
    func_0x00f78a20(0x3d6d068);
    uVar4 = func_0x00f78a20(0x3d79160);
    bRam0000000003eb4dba = 1;
  }
  lVar5 = **(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == -1) {
      return uVar4;
    }
    if (*(long *)(lVar5 + 0x20) != 0) {
      uVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar5 + 0x20),/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00);
      auVar15._8_8_ = uVar4;
      auVar15._0_8_ = 0x3d25580;
      if (uVar4 != 0) {
        uVar8 = /*Core.Audio.AudioEvent$$IsPlaying*/ func_0x01639214(uVar4,0);
        if ((uVar8 & 1) != 0) {
          return uVar8;
        }
        puVar13 = &UNK_01516d8c;
        ppppuVar12 = &pppuStack_b0;
        goto code_r0x01638a28;
      }
    }
  }
  uVar10 = func_0x00f78af4();
  ppuVar2 = (undefined8 **)&uStack_f0;
  uStack_f0 = 0x3eb4000;
  uStack_e8 = 0x3d25580;
  uStack_e0 = 0x3d25580;
  uStack_d8 = 0x3eb4000;
  puStack_c8 = &Atlas_Audio_UIAudio__PlayCharacterUnlocked;
  auVar15._8_8_ = uVar10;
  auVar15._0_8_ = 0x3eb4000;
  uVar11 = 0x3d25580;
  pppuStack_d0 = &pppuStack_b0;
  if ((bRam0000000003eb4dbb & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d25580);
    func_0x00f78a20(0x3d68cc8);
    func_0x00f78a20(0x3d6d068);
    func_0x00f78a20(0x3d79160);
    bRam0000000003eb4dbb = 1;
  }
  if ((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar5 != 0)) {
    uVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00);
    if (uVar4 != 0) {
      puVar13 = &UNK_01516e98;
      ppppuVar12 = &pppuStack_d0;
      goto code_r0x01638a28;
    }
  }
  uVar11 = func_0x00f78af4();
  ppuVar2 = (undefined8 **)&uStack_120;
  uStack_120 = 0x3eb4000;
  uStack_118 = 0x3d25580;
  uStack_110 = 0x3eb4000;
  puStack_f8 = &Atlas_Audio_UIAudio__PlaySkinUnlocked;
  ppppuVar12 = &pppuStack_100;
  auVar15._8_8_ = uVar11;
  auVar15._0_8_ = 0x3eb4000;
  uVar11 = 0x3d25580;
  uStack_108 = uVar10;
  pppuStack_100 = &pppuStack_d0;
  if ((bRam0000000003eb4dbc & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d25580);
    func_0x00f78a20(0x3d68cc8);
    func_0x00f78a20(0x3d6d068);
    func_0x00f78a20(0x3d79160);
    bRam0000000003eb4dbc = 1;
  }
  if ((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar5 != 0)) {
    uVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00);
    if (uVar4 != 0) {
      puVar13 = &UNK_01516f94;
code_r0x01638a28:
      *(undefined8 *)((long)ppuVar2 + -0x30) = unaff_x22;
      *(undefined8 *)((long)ppuVar2 + -0x28) = uVar11;
      *(undefined1 (*) [16])((long)ppuVar2 + -0x20) = auVar15;
      *(undefined8 *****)((long)ppuVar2 + -0x10) = ppppuVar12;
      *(undefined **)((long)ppuVar2 + -8) = puVar13;
      if ((bRam0000000003eb56ac & 1) == 0) {
        func_0x00f78a20(0x3d24568,0,0);
        bRam0000000003eb56ac = 1;
      }
      lVar5 = uVar4 + 0x28;
      iVar3 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar5,0);
      if (iVar3 != 0) {
        uVar11 = *(undefined8 *)(uVar4 + 0x28);
        if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*FMODUnity.RuntimeManager$$DetachInstanceFromGameObject*/ func_0x016e9cb4(uVar11,0);
        /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(lVar5,*(byte *)(uVar4 + 0x31) ^ 1,0);
        /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar5,0);
        /*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(lVar5,0);
      }
      return uVar4;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4dbd & 1) == 0) {
    func_0x00f78a20(0x3d25580);
    bRam0000000003eb4dbd = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) {
    return *(ulong *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x10);
  }
  uVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4dbe & 1) == 0) {
    func_0x00f78a20(0x3d70570);
    bRam0000000003eb4dbe = 1;
  }
  *(undefined8 *)(uVar4 + 0x10) = /*STR('None')*/ uRam0000000003d70570;
  *(undefined4 *)(uVar4 + 0x18) = 0xffffffff;
  return uVar4;
}



// ============================================================
// RVA: 0x1516abc | Atlas.Audio.UIAudio.Stop
// ============================================================

/* WARNING: Possible PIC construction at 0x01516c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01516d88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01516e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01516f90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01516e98) */
/* WARNING: Removing unreachable block (ram,0x01516e9c) */
/* WARNING: Removing unreachable block (ram,0x01516eb8) */
/* WARNING: Removing unreachable block (ram,0x01516d8c) */
/* WARNING: Removing unreachable block (ram,0x01516d90) */
/* WARNING: Removing unreachable block (ram,0x01516db8) */
/* WARNING: Removing unreachable block (ram,0x01516dbc) */
/* WARNING: Removing unreachable block (ram,0x01516c58) */
/* WARNING: Removing unreachable block (ram,0x01516c5c) */
/* WARNING: Removing unreachable block (ram,0x01516c84) */
/* WARNING: Removing unreachable block (ram,0x01516c88) */
/* WARNING: Removing unreachable block (ram,0x01516f94) */
/* WARNING: Removing unreachable block (ram,0x01516f98) */
/* WARNING: Removing unreachable block (ram,0x01516fb4) */
/* WARNING: Removing unreachable block (ram,0x01638fc8) */
/* WARNING: Removing unreachable block (ram,0x01639000) */
/* WARNING: Removing unreachable block (ram,0x01639018) */
/* WARNING: Removing unreachable block (ram,0x01638aa8) */

ulong Atlas_Audio_UIAudio__Stop(ulong param_1)

{
  undefined8 *******pppppppuVar1;
  undefined8 *******pppppppuVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar8;
  undefined8 *******unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar9 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 ******ppppppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 ******ppppppuStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  undefined8 ******ppppppuStack_70;
  undefined *puStack_68;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  auVar9._8_8_ = unaff_x19;
  auVar9._0_8_ = unaff_x20;
  uVar4 = param_1;
  if ((bRam0000000003eb4db8 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8);
    func_0x00f78a20(0x3d2fb00);
    uVar4 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db8 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar4;
  }
  lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar5 != 0) {
    uVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar5,param_1,uRam0000000003d2faf8);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if ((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
       (lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar5 != 0)) {
      uVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,param_1,uRam0000000003d2fb00);
      if (uVar4 != 0) goto code_r0x01638a28;
    }
  }
  auVar9 = func_0x00f78af4();
  puStack_38 = &Atlas_Audio_UIAudio__SetSelectedCharacter;
  unaff_x29 = (undefined8 *******)&pppppuStack_40;
  unaff_x22 = 0x3eb4000;
  unaff_x21 = 0x3d25580;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4db9 & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d25580);
    func_0x00f78a20(0x3d68cc8);
    func_0x00f78a20(0x3d6d068);
    func_0x00f78a20(0x3d79160);
    bRam0000000003eb4db9 = 1;
  }
  lVar5 = **(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8);
  if (lVar5 != 0) {
    *(long *)(lVar5 + 0x10) = auVar9._0_8_;
    *(int *)(lVar5 + 0x18) = auVar9._8_4_;
    if (*(long *)(lVar5 + 0x20) != 0) {
      uVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar5 + 0x20),/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00);
      if (uVar4 != 0) {
        unaff_x30 = &UNK_01516c58;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        unaff_x21 = 0x3d25580;
        goto code_r0x01638a28;
      }
    }
  }
  uVar4 = func_0x00f78af4();
  puStack_68 = &Atlas_Audio_UIAudio__PlayKartSelected;
  pppppppuVar1 = &ppppppuStack_70;
  ppppppuStack_70 = unaff_x29;
  auStack_80 = auVar9;
  if ((bRam0000000003eb4dba & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d25580);
    func_0x00f78a20(0x3d68cc8);
    func_0x00f78a20(0x3d6d068);
    uVar4 = func_0x00f78a20(0x3d79160);
    bRam0000000003eb4dba = 1;
  }
  lVar5 = **(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == -1) {
      return uVar4;
    }
    if (*(long *)(lVar5 + 0x20) != 0) {
      uVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar5 + 0x20),/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00);
      auVar9._8_8_ = uVar4;
      auVar9._0_8_ = 0x3d25580;
      if (uVar4 != 0) {
        uVar6 = /*Core.Audio.AudioEvent$$IsPlaying*/ func_0x01639214(uVar4,0);
        if ((uVar6 & 1) != 0) {
          return uVar6;
        }
        unaff_x30 = &UNK_01516d8c;
        register0x00000008 = (BADSPACEBASE *)auStack_80;
        unaff_x29 = pppppppuVar1;
        goto code_r0x01638a28;
      }
    }
  }
  uVar8 = func_0x00f78af4();
  uStack_b0 = 0x3eb4000;
  uStack_a8 = 0x3d25580;
  uStack_a0 = 0x3d25580;
  uStack_98 = 0x3eb4000;
  puStack_88 = &Atlas_Audio_UIAudio__PlayCharacterUnlocked;
  pppppppuVar2 = &ppppppuStack_90;
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = 0x3eb4000;
  unaff_x21 = 0x3d25580;
  ppppppuStack_90 = pppppppuVar1;
  if ((bRam0000000003eb4dbb & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d25580);
    func_0x00f78a20(0x3d68cc8);
    func_0x00f78a20(0x3d6d068);
    func_0x00f78a20(0x3d79160);
    bRam0000000003eb4dbb = 1;
  }
  if ((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar5 != 0)) {
    uVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00);
    if (uVar4 != 0) {
      unaff_x30 = &UNK_01516e98;
      register0x00000008 = (BADSPACEBASE *)&uStack_b0;
      unaff_x29 = pppppppuVar2;
      goto code_r0x01638a28;
    }
  }
  uVar7 = func_0x00f78af4();
  uStack_e0 = 0x3eb4000;
  uStack_d8 = 0x3d25580;
  uStack_d0 = 0x3eb4000;
  puStack_b8 = &Atlas_Audio_UIAudio__PlaySkinUnlocked;
  unaff_x29 = &ppppppuStack_c0;
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = 0x3eb4000;
  unaff_x21 = 0x3d25580;
  uStack_c8 = uVar8;
  ppppppuStack_c0 = pppppppuVar2;
  if ((bRam0000000003eb4dbc & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d25580);
    func_0x00f78a20(0x3d68cc8);
    func_0x00f78a20(0x3d6d068);
    func_0x00f78a20(0x3d79160);
    bRam0000000003eb4dbc = 1;
  }
  if ((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
     (lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar5 != 0)) {
    uVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00);
    if (uVar4 != 0) {
      unaff_x30 = &UNK_01516f94;
      register0x00000008 = (BADSPACEBASE *)&uStack_e0;
code_r0x01638a28:
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined1 (*) [16])((long)register0x00000008 + -0x20) = auVar9;
      *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      if ((bRam0000000003eb56ac & 1) == 0) {
        func_0x00f78a20(0x3d24568,0,0);
        bRam0000000003eb56ac = 1;
      }
      lVar5 = uVar4 + 0x28;
      iVar3 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar5,0);
      if (iVar3 != 0) {
        uVar8 = *(undefined8 *)(uVar4 + 0x28);
        if (((*(ushort *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*FMODUnity.RuntimeManager_TypeInfo*/ lRam0000000003d24568 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        /*FMODUnity.RuntimeManager$$DetachInstanceFromGameObject*/ func_0x016e9cb4(uVar8,0);
        /*FMOD.Studio.EventInstance$$stop*/ func_0x016dfb38(lVar5,*(byte *)(uVar4 + 0x31) ^ 1,0);
        /*FMOD.Studio.EventInstance$$release*/ func_0x016dfb74(lVar5,0);
        /*FMOD.Studio.EventInstance$$clearHandle*/ func_0x016e00dc(lVar5,0);
      }
      return uVar4;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4dbd & 1) == 0) {
    func_0x00f78a20(0x3d25580);
    bRam0000000003eb4dbd = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    uVar4 = func_0x00f78af4();
    if ((bRam0000000003eb4dbe & 1) == 0) {
      func_0x00f78a20(0x3d70570);
      bRam0000000003eb4dbe = 1;
    }
    *(undefined8 *)(uVar4 + 0x10) = /*STR('None')*/ uRam0000000003d70570;
    *(undefined4 *)(uVar4 + 0x18) = 0xffffffff;
    return uVar4;
  }
  return *(ulong *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x10);
}



// ============================================================
// RVA: 0x1516b9c | Atlas.Audio.UIAudio.SetSelectedCharacter
// ============================================================

ulong Atlas_Audio_UIAudio__SetSelectedCharacter(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ****unaff_x29;
  undefined *unaff_x30;
  float fVar7;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 ***pppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  uStack_b0 = 0x3eb4000;
  uStack_a8 = 0x3d25580;
  if ((bRam0000000003eb4db9 & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d25580);
    func_0x00f78a20(0x3d68cc8);
    func_0x00f78a20(0x3d6d068);
    func_0x00f78a20(0x3d79160);
    bRam0000000003eb4db9 = 1;
  }
  lVar5 = **(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x10) = param_1;
    *(int *)(lVar5 + 0x18) = (int)param_2;
    if (((*(long *)(lVar5 + 0x20) != 0) &&
        (lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar5 + 0x20),/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00),
        lVar5 != 0)) && (lVar5 = /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar5,0,0), lVar5 != 0)) {
      uVar3 = /*Core.Audio.AudioEvent$$Play*/ func_0x01638d54(0x3f800000,lVar5,/*STR('FrontEndSelection')*/ uRam0000000003d6d068,0);
      if ((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) && (uVar3 != 0)) {
        fVar7 = (float)*(int *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x18);
        uStack_a8 = unaff_x21;
        uStack_b0 = unaff_x22;
        goto Core_Audio_AudioEvent__SetParameter;
      }
    }
  }
  uVar3 = func_0x00f78af4();
  puStack_38 = &Atlas_Audio_UIAudio__PlayKartSelected;
  lVar5 = 0x3eb4000;
  uStack_50 = param_1;
  lStack_48 = param_2;
  pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4dba & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d25580);
    func_0x00f78a20(0x3d68cc8);
    func_0x00f78a20(0x3d6d068);
    uVar3 = func_0x00f78a20(0x3d79160);
    bRam0000000003eb4dba = 1;
  }
  lVar6 = **(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == -1) {
      return uVar3;
    }
    if ((*(long *)(lVar6 + 0x20) != 0) &&
       (lVar6 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar6 + 0x20),/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00),
       lVar6 != 0)) {
      uVar3 = /*Core.Audio.AudioEvent$$IsPlaying*/ func_0x01639214(lVar6,0);
      if ((uVar3 & 1) != 0) {
        return uVar3;
      }
      lVar4 = /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar6,0,0);
      lVar5 = lVar6;
      if (lVar4 != 0) {
        uVar3 = /*Core.Audio.AudioEvent$$Play*/ func_0x01638d54(0x40000000,lVar4,/*STR('FrontEndSelection')*/ uRam0000000003d6d068,0);
        if ((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) && (uVar3 != 0)) {
          fVar7 = (float)*(int *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x18);
          register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
          unaff_x19 = lStack_48;
          unaff_x20 = uStack_50;
          unaff_x29 = (undefined8 ****)pppuStack_40;
          unaff_x30 = puStack_38;
          goto Core_Audio_AudioEvent__SetParameter;
        }
      }
    }
  }
  unaff_x19 = func_0x00f78af4();
  uStack_80 = 0x3eb4000;
  uStack_78 = 0x3d25580;
  uStack_70 = 0x3d25580;
  puStack_58 = &Atlas_Audio_UIAudio__PlayCharacterUnlocked;
  unaff_x29 = &pppuStack_60;
  lStack_68 = lVar5;
  pppuStack_60 = &pppuStack_40;
  if ((bRam0000000003eb4dbb & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d25580);
    func_0x00f78a20(0x3d68cc8);
    func_0x00f78a20(0x3d6d068);
    func_0x00f78a20(0x3d79160);
    bRam0000000003eb4dbb = 1;
  }
  if ((((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar5 == 0)) ||
      (lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00), lVar5 == 0)) ||
     ((lVar5 = /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar5,0,0), lVar5 == 0 ||
      (uVar3 = /*Core.Audio.AudioEvent$$Play*/ func_0x01638d54(0x40c00000,lVar5,/*STR('FrontEndSelection')*/ uRam0000000003d6d068,0), uVar3 == 0)))) {
    iVar2 = func_0x00f78af4();
    uStack_b0 = 0x3eb4000;
    uStack_a8 = 0x3d25580;
    uStack_a0 = 0x3eb4000;
    puStack_88 = &Atlas_Audio_UIAudio__PlaySkinUnlocked;
    if ((bRam0000000003eb4dbc & 1) == 0) {
      func_0x00f78a20(0x3d2fb00);
      func_0x00f78a20(0x3d25580);
      func_0x00f78a20(0x3d68cc8);
      func_0x00f78a20(0x3d6d068);
      func_0x00f78a20(0x3d79160);
      bRam0000000003eb4dbc = 1;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) ||
        (lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar5 == 0)) ||
       ((lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00), lVar5 == 0 ||
        ((lVar5 = /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar5,0,0), lVar5 == 0 ||
         (uVar3 = /*Core.Audio.AudioEvent$$Play*/ func_0x01638d54(0x40a00000,lVar5,/*STR('FrontEndSelection')*/ uRam0000000003d6d068,0), uVar3 == 0)))))) {
      func_0x00f78af4();
      if ((bRam0000000003eb4dbd & 1) == 0) {
        func_0x00f78a20(0x3d25580);
        bRam0000000003eb4dbd = 1;
      }
      if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
        uVar3 = func_0x00f78af4();
        if ((bRam0000000003eb4dbe & 1) == 0) {
          func_0x00f78a20(0x3d70570);
          bRam0000000003eb4dbe = 1;
        }
        *(undefined8 *)(uVar3 + 0x10) = /*STR('None')*/ uRam0000000003d70570;
        *(undefined4 *)(uVar3 + 0x18) = 0xffffffff;
        return uVar3;
      }
      return *(ulong *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x10);
    }
    fVar7 = (float)iVar2;
    register0x00000008 = (BADSPACEBASE *)&uStack_80;
    unaff_x20 = uStack_a0;
    unaff_x30 = puStack_88;
  }
  else {
    fVar7 = (float)(int)unaff_x19;
    register0x00000008 = (BADSPACEBASE *)&uStack_50;
    unaff_x19 = lStack_68;
    unaff_x20 = uStack_70;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    unaff_x29 = (undefined8 ****)pppuStack_60;
    unaff_x30 = puStack_58;
  }
Core_Audio_AudioEvent__SetParameter:
  uVar1 = /*STR('AllCharacter')*/ uRam0000000003d68cc8;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x30) = uStack_b0;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uStack_a8;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(uVar3 + 0x28,0,0,0);
  if (iVar2 != 0) {
    /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(fVar7,uVar3 + 0x28,uVar1,0,0);
  }
  return uVar3;
}



// ============================================================
// RVA: 0x1516cb8 | Atlas.Audio.UIAudio.PlayKartSelected
// ============================================================

ulong Atlas_Audio_UIAudio__PlayKartSelected(ulong param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long lVar6;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 ****unaff_x29;
  undefined *unaff_x30;
  float fVar7;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined *puStack_58;
  undefined8 ***pppuStack_30;
  undefined *puStack_28;
  
  lVar6 = 0x3eb4000;
  if ((bRam0000000003eb4dba & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d25580);
    func_0x00f78a20(0x3d68cc8);
    func_0x00f78a20(0x3d6d068);
    param_1 = func_0x00f78a20(0x3d79160);
    bRam0000000003eb4dba = 1;
  }
  lVar5 = **(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == -1) {
      return param_1;
    }
    if ((*(long *)(lVar5 + 0x20) != 0) &&
       (lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar5 + 0x20),/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00),
       lVar5 != 0)) {
      uVar3 = /*Core.Audio.AudioEvent$$IsPlaying*/ func_0x01639214(lVar5,0);
      if ((uVar3 & 1) != 0) {
        return uVar3;
      }
      lVar4 = /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar5,0,0);
      lVar6 = lVar5;
      if (lVar4 != 0) {
        uVar3 = /*Core.Audio.AudioEvent$$Play*/ func_0x01638d54(0x40000000,lVar4,/*STR('FrontEndSelection')*/ uRam0000000003d6d068,0);
        if ((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) && (uVar3 != 0)) {
          fVar7 = (float)*(int *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x18);
          goto Core_Audio_AudioEvent__SetParameter;
        }
      }
    }
  }
  unaff_x19 = func_0x00f78af4();
  puStack_28 = &Atlas_Audio_UIAudio__PlayCharacterUnlocked;
  unaff_x29 = &pppuStack_30;
  pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4dbb & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d25580);
    func_0x00f78a20(0x3d68cc8);
    func_0x00f78a20(0x3d6d068);
    func_0x00f78a20(0x3d79160);
    bRam0000000003eb4dbb = 1;
  }
  if ((((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar5 == 0)) ||
      (lVar5 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar5,/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00), lVar5 == 0)) ||
     ((lVar5 = /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar5,0,0), lVar5 == 0 ||
      (uVar3 = /*Core.Audio.AudioEvent$$Play*/ func_0x01638d54(0x40c00000,lVar5,/*STR('FrontEndSelection')*/ uRam0000000003d6d068,0), uVar3 == 0)))) {
    iVar2 = func_0x00f78af4();
    puStack_58 = &Atlas_Audio_UIAudio__PlaySkinUnlocked;
    if ((bRam0000000003eb4dbc & 1) == 0) {
      func_0x00f78a20(0x3d2fb00);
      func_0x00f78a20(0x3d25580);
      func_0x00f78a20(0x3d68cc8);
      func_0x00f78a20(0x3d6d068);
      func_0x00f78a20(0x3d79160);
      bRam0000000003eb4dbc = 1;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) ||
        (lVar6 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar6 == 0)) ||
       ((lVar6 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar6,/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00), lVar6 == 0 ||
        ((lVar6 = /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar6,0,0), lVar6 == 0 ||
         (uVar3 = /*Core.Audio.AudioEvent$$Play*/ func_0x01638d54(0x40a00000,lVar6,/*STR('FrontEndSelection')*/ uRam0000000003d6d068,0), uVar3 == 0)))))) {
      func_0x00f78af4();
      if ((bRam0000000003eb4dbd & 1) == 0) {
        func_0x00f78a20(0x3d25580);
        bRam0000000003eb4dbd = 1;
      }
      if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
        uVar3 = func_0x00f78af4();
        if ((bRam0000000003eb4dbe & 1) == 0) {
          func_0x00f78a20(0x3d70570);
          bRam0000000003eb4dbe = 1;
        }
        *(undefined8 *)(uVar3 + 0x10) = /*STR('None')*/ uRam0000000003d70570;
        *(undefined4 *)(uVar3 + 0x18) = 0xffffffff;
        return uVar3;
      }
      return *(ulong *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x10);
    }
    fVar7 = (float)iVar2;
    unaff_x20 = 0x3eb4000;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    unaff_x21 = 0x3d25580;
    unaff_x30 = puStack_58;
  }
  else {
    fVar7 = (float)(int)unaff_x19;
    unaff_x20 = 0x3d25580;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = lVar6;
    unaff_x29 = (undefined8 ****)pppuStack_30;
    unaff_x30 = puStack_28;
  }
Core_Audio_AudioEvent__SetParameter:
  uVar1 = /*STR('AllCharacter')*/ uRam0000000003d68cc8;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(uVar3 + 0x28,0,0,0);
  if (iVar2 != 0) {
    /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(fVar7,uVar3 + 0x28,uVar1,0,0);
  }
  return uVar3;
}



// ============================================================
// RVA: 0x1516de8 | Atlas.Audio.UIAudio.PlayCharacterUnlocked
// ============================================================

long Atlas_Audio_UIAudio__PlayCharacterUnlocked(undefined8 param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar5;
  undefined *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined *puStack_38;
  
  puVar5 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4dbb & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d25580);
    func_0x00f78a20(0x3d68cc8);
    func_0x00f78a20(0x3d6d068);
    func_0x00f78a20(0x3d79160);
    bRam0000000003eb4dbb = 1;
  }
  if ((((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) ||
       (lVar4 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar4 == 0)) ||
      (lVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar4,/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00), lVar4 == 0)) ||
     ((lVar4 = /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar4,0,0), lVar4 == 0 ||
      (lVar4 = /*Core.Audio.AudioEvent$$Play*/ func_0x01638d54(0x40c00000,lVar4,/*STR('FrontEndSelection')*/ uRam0000000003d6d068,0), lVar4 == 0)))) {
    iVar2 = func_0x00f78af4();
    puStack_38 = &Atlas_Audio_UIAudio__PlaySkinUnlocked;
    if ((bRam0000000003eb4dbc & 1) == 0) {
      func_0x00f78a20(0x3d2fb00);
      func_0x00f78a20(0x3d25580);
      func_0x00f78a20(0x3d68cc8);
      func_0x00f78a20(0x3d6d068);
      func_0x00f78a20(0x3d79160);
      bRam0000000003eb4dbc = 1;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) ||
        (lVar4 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar4 == 0)) ||
       ((lVar4 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar4,/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00), lVar4 == 0 ||
        ((lVar4 = /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar4,0,0), lVar4 == 0 ||
         (lVar4 = /*Core.Audio.AudioEvent$$Play*/ func_0x01638d54(0x40a00000,lVar4,/*STR('FrontEndSelection')*/ uRam0000000003d6d068,0), lVar4 == 0)))))) {
      func_0x00f78af4();
      if ((bRam0000000003eb4dbd & 1) == 0) {
        func_0x00f78a20(0x3d25580);
        bRam0000000003eb4dbd = 1;
      }
      if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) {
        return *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x10);
      }
      lVar4 = func_0x00f78af4();
      if ((bRam0000000003eb4dbe & 1) == 0) {
        func_0x00f78a20(0x3d70570);
        bRam0000000003eb4dbe = 1;
      }
      *(undefined8 *)(lVar4 + 0x10) = /*STR('None')*/ uRam0000000003d70570;
      *(undefined4 *)(lVar4 + 0x18) = 0xffffffff;
      return lVar4;
    }
    unaff_x20 = 0x3eb4000;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x21 = 0x3d25580;
    unaff_x30 = puStack_38;
  }
  else {
    iVar2 = (int)param_1;
    param_1 = unaff_x19;
    puVar5 = unaff_x29;
  }
  uVar1 = /*STR('AllCharacter')*/ uRam0000000003d68cc8;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar5;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  iVar3 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar4 + 0x28,0,0,0);
  if (iVar3 != 0) {
    /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34((float)iVar2,lVar4 + 0x28,uVar1,0,0);
  }
  return lVar4;
}



// ============================================================
// RVA: 0x1516ee4 | Atlas.Audio.UIAudio.PlaySkinUnlocked
// ============================================================

long Atlas_Audio_UIAudio__PlaySkinUnlocked(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  
  if ((bRam0000000003eb4dbc & 1) == 0) {
    func_0x00f78a20(0x3d2fb00);
    func_0x00f78a20(0x3d25580);
    func_0x00f78a20(0x3d68cc8);
    func_0x00f78a20(0x3d6d068);
    func_0x00f78a20(0x3d79160);
    bRam0000000003eb4dbc = 1;
  }
  if ((((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar3 != 0)) &&
      (lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar3,/*STR('event:/VO/FRONT_END')*/ uRam0000000003d79160,uRam0000000003d2fb00), lVar3 != 0)) &&
     ((lVar3 = /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(lVar3,0,0), lVar3 != 0 &&
      (lVar3 = /*Core.Audio.AudioEvent$$Play*/ func_0x01638d54(0x40a00000,lVar3,/*STR('FrontEndSelection')*/ uRam0000000003d6d068,0),
      uVar1 = /*STR('AllCharacter')*/ uRam0000000003d68cc8, lVar3 != 0)))) {
    iVar2 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar3 + 0x28,0,0,0);
    if (iVar2 != 0) {
      /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34((float)param_1,lVar3 + 0x28,uVar1,0,0);
    }
    return lVar3;
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4dbd & 1) == 0) {
    func_0x00f78a20(0x3d25580);
    bRam0000000003eb4dbd = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) {
    return *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x10);
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4dbe & 1) == 0) {
    func_0x00f78a20(0x3d70570);
    bRam0000000003eb4dbe = 1;
  }
  *(undefined8 *)(lVar3 + 0x10) = /*STR('None')*/ uRam0000000003d70570;
  *(undefined4 *)(lVar3 + 0x18) = 0xffffffff;
  return lVar3;
}



// ============================================================
// RVA: 0x1516fe0 | Atlas.Audio.UIAudio.GetSelectedCharacter
// ============================================================

long Atlas_Audio_UIAudio__GetSelectedCharacter(void)

{
  long lVar1;
  
  if ((bRam0000000003eb4dbd & 1) == 0) {
    func_0x00f78a20(0x3d25580);
    bRam0000000003eb4dbd = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) {
    return *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x10);
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4dbe & 1) == 0) {
    func_0x00f78a20(0x3d70570);
    bRam0000000003eb4dbe = 1;
  }
  *(undefined8 *)(lVar1 + 0x10) = /*STR('None')*/ uRam0000000003d70570;
  *(undefined4 *)(lVar1 + 0x18) = 0xffffffff;
  return lVar1;
}



// ============================================================
// RVA: 0x1517038 | Atlas.Audio.UIAudio..ctor
// ============================================================

undefined1  [16] Atlas_Audio_UIAudio___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000003eb4dbe & 1) == 0) {
    func_0x00f78a20(0x3d70570);
    bRam0000000003eb4dbe = 1;
  }
  *(undefined8 *)(param_1 + 0x10) = /*STR('None')*/ uRam0000000003d70570;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



