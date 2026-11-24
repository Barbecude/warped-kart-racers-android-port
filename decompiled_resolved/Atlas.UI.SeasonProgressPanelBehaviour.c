// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.SeasonProgressPanelBehaviour

// ============================================================
// RVA: 0x14f02a0 | Atlas.UI.SeasonProgressPanelBehaviour.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x014f0318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016bc65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016bc728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016bc660) */
/* WARNING: Removing unreachable block (ram,0x016bc66c) */
/* WARNING: Removing unreachable block (ram,0x016bc674) */
/* WARNING: Removing unreachable block (ram,0x014f031c) */
/* WARNING: Removing unreachable block (ram,0x014f0324) */
/* WARNING: Removing unreachable block (ram,0x014f0374) */
/* WARNING: Removing unreachable block (ram,0x014f038c) */
/* WARNING: Removing unreachable block (ram,0x016bc72c) */
/* WARNING: Removing unreachable block (ram,0x016bc738) */
/* WARNING: Removing unreachable block (ram,0x016bc420) */
/* WARNING: Removing unreachable block (ram,0x016bc434) */
/* WARNING: Removing unreachable block (ram,0x016bc43c) */
/* WARNING: Removing unreachable block (ram,0x016bc440) */
/* WARNING: Removing unreachable block (ram,0x016bc458) */

long Atlas_UI_SeasonProgressPanelBehaviour__Init(long param_1,long param_2)

{
  ulong *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int *piVar10;
  long *plVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong unaff_x22;
  undefined8 uVar14;
  ulong unaff_x23;
  long lVar15;
  undefined8 unaff_x24;
  long lVar16;
  undefined8 uVar17;
  undefined1 ***pppuVar18;
  undefined *puVar19;
  undefined4 uVar20;
  undefined8 uStack_118;
  undefined *puStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_98;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  uVar13 = 0x3eb4000;
  if ((bRam0000000003eb4c6c & 1) == 0) {
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d247f8);
    func_0x00f78a20(0x3d790b0);
    func_0x00f78a20(0x3d79118);
    bRam0000000003eb4c6c = 1;
  }
  if (param_2 == 0) {
LAB_014f0410:
    puVar19 = &Atlas_Stats_SeasonsManager__GetCurrentSeason;
    lVar4 = func_0x00f78af4();
  }
  else {
    lVar4 = *(long *)(param_2 + 0xd0);
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    *(long *)(param_1 + 0x48) = lVar4;
    *(undefined8 *)(param_1 + 0x50) = uVar8;
    if (lVar4 == 0) goto LAB_014f0410;
    puVar19 = (undefined *)0x14f031c;
  }
  lVar15 = 0x3eb4000;
  puStack_60 = &stack0xfffffffffffffff0;
  puStack_58 = puVar19;
  if ((bRam0000000003eb4c7b & 1) == 0) {
    func_0x00f78a20(0x3d2dca0);
    func_0x00f78a20(0x3d2dca8);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4c7b = 1;
  }
  if (*(long *)(lVar4 + 0x28) != 0) {
    puVar9 = (undefined8 *)/*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar4 + 0x28),0);
    uStack_98 = *puVar9;
    iVar2 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(&uStack_98,0);
    lVar15 = 0;
    if (iVar2 == 0) {
code_r0x014f0548:
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar15,0,0);
      if ((iVar2 != 0) && (*(char *)(lVar4 + 0x20) != '\0')) {
        lVar15 = /*Atlas.Stats.SeasonsManager$$GetSeasonByDateRange*/ func_0x014f22f4(lVar4);
      }
      return lVar15;
    }
    if (*(long *)(lVar4 + 0x28) != 0) {
      lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar4 + 0x28),0);
      if (*(long *)(lVar16 + 8) != 0) {
        lVar15 = /*Atlas.Definitions.SeasonRotationHelper$$GetSeasonDefinitions*/ func_0x014f1e2c(*(undefined8 *)(*(long *)(lVar16 + 8) + 0x30));
        if (*(long *)(lVar4 + 0x28) != 0) {
          lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar4 + 0x28),0);
          if ((*(long *)(lVar16 + 8) != 0) && (*(long *)(lVar4 + 0x28) != 0)) {
            uVar13 = *(undefined8 *)(*(long *)(lVar16 + 8) + 0x28);
            lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar4 + 0x28),0);
            if ((*(long *)(lVar16 + 8) != 0) && (*(long *)(lVar4 + 0x28) != 0)) {
              unaff_x22 = (ulong)*(uint *)(*(long *)(lVar16 + 8) + 0x20);
              lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar4 + 0x28),0);
              if ((*(long *)(lVar16 + 8) != 0) && (*(long *)(lVar4 + 0x28) != 0)) {
                unaff_x23 = (ulong)*(uint *)(*(long *)(lVar16 + 8) + 0x24);
                lVar16 = /*Atlas.Definitions.MetagameDefinition$$get_SeasonsRotationRef*/ func_0x014948d8(*(long *)(lVar4 + 0x28),0);
                if (*(long *)(lVar16 + 8) != 0) {
                  uVar8 = /*Atlas.Definitions.SeasonsRotationDefinition$$get_StartDate*/ func_0x014f22b4();
                  lVar15 = /*Atlas.Definitions.SeasonRotationHelper$$GetCurrentEpisode*/ func_0x014f14b8(lVar15,unaff_x22,*(undefined8 *)(lVar4 + 0x38),uVar8,
                                           uVar13,unaff_x23);
                  goto code_r0x014f0548;
                }
              }
            }
          }
        }
      }
    }
  }
  plVar6 = (long *)func_0x00f78af4();
  puStack_a8 = &Atlas_UI_SeasonProgressPanelBehaviour__SetData;
  pppuVar18 = &ppuStack_b0;
  uVar8 = 0x3d247f0;
  uStack_d0 = unaff_x22;
  uStack_c8 = uVar13;
  lStack_c0 = lVar15;
  lStack_b8 = lVar4;
  ppuStack_b0 = &puStack_60;
  if ((bRam0000000003eb4c6d & 1) == 0) {
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb4c6d = 1;
  }
  lVar4 = plVar6[9];
  if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)0x0;
  if (lVar4 != 0) {
    unaff_x22 = 0x3d25000;
    plVar5 = (long *)/*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar4,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
    uVar8 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(plVar5,(int)plVar6[0xd],0);
    plVar11 = (long *)plVar6[6];
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar13 = /*Core.UI2.UIUtils$$GetSizeFormattedProgressString*/ func_0x02f90ca0(0x42dc0000,uVar8,plVar5,0);
    plVar6 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014f06a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar4 = (**(code **)(*plVar11 + 0x558))(plVar11,uVar13,*(undefined8 *)(*plVar11 + 0x560));
      return lVar4;
    }
  }
  lVar4 = func_0x00f78af4();
  puStack_d8 = &Atlas_UI_SeasonProgressPanelBehaviour__DeInit;
  if (*(long *)(lVar4 + 0x78) == 0) {
    lVar4 = func_0x00f78af4();
    uStack_118 = uVar8;
    if ((bRam0000000003eb4c6e & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d2da20);
      func_0x00f78a20(0x3d1c098);
      func_0x00f78a20(0x3d2dae8);
      func_0x00f78a20(0x3d1c0e8);
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d247f0);
      func_0x00f78a20(0x3d25428);
      func_0x00f78a20(0x3d5e6f0);
      func_0x00f78a20(0x3d5e740);
      func_0x00f78a20(0x3d5e7b0);
      func_0x00f78a20(0x3d63d00);
      func_0x00f78a20(0x3d63d08);
      func_0x00f78a20(0x3d63d10);
      func_0x00f78a20(0x3d63d18);
      func_0x00f78a20(0x3d63d20);
      func_0x00f78a20(0x3d63d28);
      func_0x00f78a20(0x3d28ba0);
      func_0x00f78a20(0x3d28b98);
      func_0x00f78a20(0x3d78fc0);
      bRam0000000003eb4c6e = 1;
    }
    lVar15 = func_0x00f78aec(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0_TypeInfo*/ uRam0000000003d28ba0);
    /*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0$$.ctor*/ func_0x01569620(lVar15,0);
    if (lVar15 != 0) {
      *(long *)(lVar15 + 0x10) = lVar4;
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar13 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
      *(undefined8 *)(lVar4 + 0x60) = uVar13;
      lVar16 = *(long *)(lVar4 + 0x48);
      if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar16 != 0) {
        uVar13 = /*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar16,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
        *(int *)(lVar15 + 0x18) = (int)uVar13;
        if (*(long *)(lVar4 + 0x58) != 0) {
          uVar8 = Atlas_UI_SeasonMetagameData__StarsForSeason();
          uVar3 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(uVar13,uVar8,0);
          *(undefined4 *)(lVar15 + 0x1c) = uVar3;
          Atlas_Audio_UIAudio__Play(/*STR('event:/UI/Front_End/Dotween_ScaleDown')*/ uRam0000000003d78fc0,0);
          uVar14 = *(undefined8 *)(lVar4 + 0x60);
          uVar13 = *(undefined8 *)(lVar4 + 0x20);
          uVar8 = *(undefined8 *)(lVar4 + 0x28);
          if (((*(ushort *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar9 = *(undefined8 **)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8);
          lVar16 = puVar9[1];
          if (lVar16 == 0) {
            if (((*(ushort *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xe0) == 0)) {
              func_0x00f78ad0();
              puVar9 = *(undefined8 **)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8);
            }
            uVar17 = *puVar9;
            lVar16 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
            /*System.Action$$.ctor*/ func_0x02924c80(lVar16,uVar17,uRam0000000003d63d00,0);
            *(long *)(*(long *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8) + 8) = lVar16;
          }
          uVar13 = Atlas_UI_AtlasTweenAnimations__Wiggle(uVar8,uVar13,lVar16,0);
          uVar13 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar14,uVar13,0);
          uVar8 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar8,lVar15,uRam0000000003d63d08,0);
          uVar13 = /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar13,uVar8,0);
          uVar8 = func_0x00f78aec(/*DG.Tweening.Core.DOGetter<int>_TypeInfo*/ uRam0000000003d1c098);
          /*DG.Tweening.Core.DOGetter<int>$$.ctor*/ func_0x01e18b14(uVar8,lVar15,uRam0000000003d63d10,uRam0000000003d2da20);
          uVar14 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<int>_TypeInfo*/ uRam0000000003d1c0e8);
          /*DG.Tweening.Core.DOSetter<int>$$.ctor*/ func_0x01e1b1b8(uVar14,lVar15,uRam0000000003d63d18,uRam0000000003d2dae8);
          uVar20 = *(undefined4 *)(lVar4 + 0x38);
          if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar8 = /*DG.Tweening.DOTween$$To*/ func_0x0169409c(uVar20,uVar8,uVar14,uVar3,0);
          uVar13 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar13,uVar8,0);
          uVar13 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar13,*(undefined4 *)(lVar4 + 0x3c),uRam0000000003d5e7b0);
          uVar8 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar8,lVar15,uRam0000000003d63d20,0);
          lVar4 = /*DG.Tweening.TweenSettingsExtensions$$OnUpdate<Tween>*/ func_0x018ee348(uVar13,uVar8,uRam0000000003d5e740);
          uVar13 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar13,lVar15,uRam0000000003d63d28,0);
          if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
            *(undefined8 *)(lVar4 + 0x80) = uVar13;
          }
          return lVar4;
        }
      }
    }
    lVar4 = func_0x00f78af4();
    *(undefined8 *)(lVar4 + 0x38) = 0x83f000000;
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
  /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar4 + 0x78),0,0);
  plVar11 = *(long **)(lVar4 + 0x60);
  if ((bRam0000000003eb5c52 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5c52 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x80) == '\0') {
    return /*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0;
  }
  if (plVar11 == (long *)0x0) {
    lVar4 = /*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      lVar4 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return lVar4;
    }
    if ((bRam0000000003eb5b2e & 1) == 0) {
      func_0x00f78a20(0x3d70738,0);
      bRam0000000003eb5b2e = 1;
    }
    plVar11 = (long *)0x0;
    plVar6 = /*STR('Null Tween')*/ plRam0000000003d70738;
  }
  else if ((char)plVar11[0x1d] == '\0') {
    lVar4 = /*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      lVar4 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return lVar4;
    }
    if ((bRam0000000003eb5b2c & 1) == 0) {
      func_0x00f78a20(0x3d74b30,0);
      bRam0000000003eb5b2c = 1;
    }
    plVar11 = (long *)0x0;
    plVar6 = /*STR('This Tween has been killed and is now invalid')*/ plRam0000000003d74b30;
  }
  else {
    if (*(char *)((long)plVar11 + 0xe9) == '\0') {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar4 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      if (*(char *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x44) != '\0') {
        *(undefined1 *)(plVar11 + 0x1d) = 0;
        return lVar4;
      }
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      bVar7 = true;
      puVar1 = &uStack_d0;
      while( true ) {
        while( true ) {
          *(undefined8 *)((long)puVar1 + -0x40) = unaff_x24;
          *(ulong *)((long)puVar1 + -0x38) = unaff_x23;
          *(ulong *)((long)puVar1 + -0x30) = unaff_x22;
          *(undefined8 *)((long)puVar1 + -0x28) = uVar8;
          *(long **)((long)puVar1 + -0x20) = plVar5;
          *(long **)((long)puVar1 + -0x18) = plVar6;
          *(undefined1 ****)((long)puVar1 + -0x10) = pppuVar18;
          *(undefined **)((long)puVar1 + -8) = puStack_d8;
          pppuVar18 = (undefined1 ***)((long)puVar1 + -0x10);
          if ((bRam0000000003eb5c68 & 1) == 0) {
            func_0x00f78a20(0x3d3c4d0);
            func_0x00f78a20(0x3d3c4d8);
            func_0x00f78a20(0x3d24878);
            func_0x00f78a20(0x3d404c0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb5c68 = 1;
          }
          if (plVar11 == (long *)0x0) goto code_r0x016bc740;
          if (plVar11[0x11] != 0) {
            /*DG.Tweening.Tween$$OnTweenCallback*/ func_0x016bb65c(plVar11[0x11],plVar11);
          }
          if (bVar7) {
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$RemoveActiveTween*/ func_0x016bfd9c(plVar11);
          }
          iVar2 = (int)plVar11[2];
          plVar6 = plVar11;
          if (*(char *)((long)plVar11 + 0x9a) != '\0') break;
          if (iVar2 == 0) {
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            piVar10 = (int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x3c);
            iVar2 = -1;
            goto code_r0x016bca08;
          }
          if (iVar2 != 1) goto code_r0x016bca14;
          uVar8 = 0x3d25440;
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x40) =
               *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x40) + -1;
          if (*plVar11 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
          lVar4 = plVar11[0x24];
          if (lVar4 == 0) goto code_r0x016bc740;
          unaff_x22 = (ulong)*(uint *)(lVar4 + 0x18);
          if ((int)*(uint *)(lVar4 + 0x18) < 1) goto code_r0x016bca14;
          unaff_x23 = 0;
          if (*(int *)(lVar4 + 0x18) == 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar5 = *(long **)(*(long *)(lVar4 + 0x10) + 0x20);
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          bVar7 = false;
          puStack_d8 = &UNK_016bc72c;
          puVar1 = (ulong *)((long)puVar1 + -0x40);
          plVar11 = plVar5;
        }
        if (iVar2 == 0) goto code_r0x016bc744;
        if (iVar2 != 1) break;
        uVar8 = 0x3d25440;
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar4 = *(long *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x58);
        if (lVar4 == 0) goto code_r0x016bc740;
        /*System.Collections.Generic.Stack<DtdParser.ParseElementOnlyContent_LocalFrame>$$Push*/ func_0x02865908(lVar4,plVar11,uRam0000000003d404c0);
        *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x38) =
             *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x38) + 1;
        if (*plVar11 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
        lVar4 = plVar11[0x24];
        if (lVar4 == 0) goto code_r0x016bc740;
        unaff_x22 = (ulong)*(uint *)(lVar4 + 0x18);
        if ((int)*(uint *)(lVar4 + 0x18) < 1) break;
        unaff_x23 = 0;
        if (*(int *)(lVar4 + 0x18) == 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar5 = *(long **)(*(long *)(lVar4 + 0x10) + 0x20);
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        bVar7 = false;
        puStack_d8 = &UNK_016bc660;
        puVar1 = (ulong *)((long)puVar1 + -0x40);
        plVar11 = plVar5;
      }
code_r0x016bca14:
      *(undefined1 *)(plVar11 + 0x1d) = 0;
                    /* WARNING: Could not recover jumptable at 0x016bca34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar4 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
      return lVar4;
    }
    lVar4 = /*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      lVar4 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return lVar4;
    }
    plVar6 = /*STR("This Tween was added to a Sequence and can't be controlled directly")*/ plRam0000000003d74b40;
    if ((bRam0000000003eb5b2d & 1) == 0) {
      func_0x00f78a20(0x3d74b40,0);
      bRam0000000003eb5b2d = 1;
      plVar6 = /*STR("This Tween was added to a Sequence and can't be controlled directly")*/ plRam0000000003d74b40;
    }
  }
  if ((bRam0000000003eb5b28 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d35ae8);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d65de0);
    func_0x00f78a20(0x3d68098);
    func_0x00f78a20(0x3d67238);
    func_0x00f78a20(0x3d67230);
    func_0x00f78a20(0x3d67240);
    bRam0000000003eb5b28 = 1;
  }
  uVar13 = /*STR('<color=#0099bc><b>DOTWEEN ► </b></color>')*/ uRam0000000003d68098;
  if (plVar6 == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  }
  plVar6 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar13,uVar8,0);
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((plVar11 != (long *)0x0) && (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x31) != '\0')
     ) {
    lVar16 = plVar11[0x19];
    lVar15 = plVar11[7];
    lVar4 = plVar11[8];
    if ((lVar16 != 0) || ((lVar15 != 0 || ((int)lVar4 != -999)))) {
      if (plVar6 == (long *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      }
      plVar6 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar13,/*STR('\n')*/ uRam0000000003d65de0,0);
      if (lVar16 != 0) {
        uVar13 = 0;
        if (plVar6 != (long *)0x0) {
          uVar13 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        }
        uVar8 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[debug target ID: {0}]-')*/ uRam0000000003d67230,plVar11[0x19],0);
        plVar6 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar13,uVar8,0);
      }
      if (lVar15 != 0) {
        uVar13 = 0;
        if (plVar6 != (long *)0x0) {
          uVar13 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        }
        uVar8 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[stringId: {0}]-')*/ uRam0000000003d67240,plVar11[7],0);
        plVar6 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar13,uVar8,0);
      }
      if ((int)lVar4 != -999) {
        uVar13 = 0;
        if (plVar6 != (long *)0x0) {
          uVar13 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        }
        uStack_118 = CONCAT44((int)plVar11[8],(undefined4)uStack_118);
        uVar8 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_118 + 4);
        uVar8 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[intId: {0}]-')*/ uRam0000000003d67238,uVar8,0);
        plVar6 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar13,uVar8,0);
      }
    }
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar4 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x28);
  if (lVar4 != 0) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar4 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x28);
      if (lVar4 == 0) {
        lVar4 = func_0x00f78af4();
        if ((bRam0000000003eb5b0e & 1) == 0) {
          func_0x00f78a20(0x3d20bc0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb5b0e = 1;
        }
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar13 = *(undefined8 *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x58);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar15 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,lVar4,0);
        if ((int)lVar15 == 0) {
          return lVar15;
        }
        *(undefined1 *)(lVar4 + 0x2d) = 1;
        uVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar4,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((bRam0000000003ec0230 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ec0230 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (pcRam0000000003ec0228 == (code *)0x0) {
          pcRam0000000003ec0228 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar4 = (*pcRam0000000003ec0228)(0,uVar13);
        return lVar4;
      }
    }
    lVar4 = /*System.Func<LogType, object, bool>$$Invoke*/ func_0x0218241c(lVar4,2,plVar6,uRam0000000003d35ae8);
    if ((int)lVar4 == 0) {
      return lVar4;
    }
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar4 = /*UnityEngine.Debug$$LogWarning*/ func_0x03221840(plVar6,0);
  return lVar4;
  while( true ) {
    if (((*(ushort *)(lVar4 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar4 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      uVar12 = *(uint *)(lVar15 + 0x84);
    }
    plVar6 = *(long **)(lVar15 + 0x50);
    if (plVar6 != (long *)0x0) break;
code_r0x016bc740:
    func_0x00f78af4();
code_r0x016bc744:
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
    lVar4 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
    if (*(int *)(lVar15 + 0x84) == -1) {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      }
      lVar4 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      iVar2 = *(int *)(lVar15 + 8) + -1;
      *(int *)(lVar15 + 0x80) = iVar2;
      *(int *)(lVar15 + 0x84) = iVar2;
    }
    if (((*(ushort *)(lVar4 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar4 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar4 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
    }
    lVar15 = *(long *)(lVar4 + 0xb8);
    uVar12 = *(uint *)(lVar15 + 0x84);
    if (*(int *)(lVar15 + 8) + -1 <= (int)uVar12) {
      if (((*(ushort *)(lVar4 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar4 + 0xe0) == 0)) {
        func_0x00f78ad0();
        uVar12 = *(uint *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x84);
        lVar4 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      }
      if ((int)uVar12 < 0) goto code_r0x016bc9e4;
      lVar15 = (ulong)uVar12 * 8 + 0x20;
      while( true ) {
        if (((*(ushort *)(lVar4 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar4 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar4 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
        }
        plVar6 = *(long **)(*(long *)(lVar4 + 0xb8) + 0x50);
        if (plVar6 == (long *)0x0) goto code_r0x016bc740;
        if (*(uint *)(plVar6 + 3) <= uVar12) goto code_r0x016bca38;
        if (plVar6[(ulong)uVar12 + 4] == 0) break;
        lVar15 = lVar15 + -8;
        bVar7 = (int)uVar12 < 1;
        uVar12 = uVar12 - 1;
        if (bVar7) goto code_r0x016bc9e4;
      }
      if (((*(ushort *)(lVar4 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar4 + 0xe0) == 0)) {
        func_0x00f78ad0();
        plVar6 = *(long **)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x50);
        if (plVar6 == (long *)0x0) goto code_r0x016bc740;
      }
      lVar4 = func_0x00f78adc(plVar11,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar4 == 0) goto code_r0x016bca4c;
      if (*(uint *)(plVar6 + 3) <= uVar12) goto code_r0x016bca38;
      *(long **)((long)plVar6 + lVar15) = plVar11;
      lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      lVar4 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      if ((int)uVar12 < *(int *)(lVar15 + 0x80)) {
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
        }
        lVar4 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
        *(uint *)(lVar15 + 0x80) = uVar12;
      }
      if (((*(ushort *)(lVar4 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar4 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar4 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      }
      lVar15 = *(long *)(lVar4 + 0xb8);
      iVar2 = *(int *)(lVar15 + 0x80);
      if (*(int *)(lVar15 + 0x84) < iVar2) {
        if (((*(ushort *)(lVar4 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar4 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
          iVar2 = *(int *)(lVar15 + 0x80);
          lVar4 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
        }
        *(int *)(lVar15 + 0x84) = iVar2;
      }
      goto code_r0x016bc9e4;
    }
  }
  lVar4 = func_0x00f78adc(plVar11,*(undefined8 *)(*plVar6 + 0x40));
  if (lVar4 == 0) goto code_r0x016bca4c;
  if (*(uint *)(plVar6 + 3) <= uVar12 + 1) {
code_r0x016bca38:
    uVar13 = func_0x00f78b24();
    do {
      func_0x00f78ac0(uVar13,0);
code_r0x016bca44:
      func_0x00f78e5c(plVar11);
code_r0x016bca4c:
      uVar13 = func_0x00f78b14();
    } while( true );
  }
  plVar6[(long)(int)(uVar12 + 1) + 4] = (long)plVar11;
  lVar4 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
  lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
  iVar2 = *(int *)(lVar15 + 0x84) + 1;
  *(int *)(lVar15 + 0x84) = iVar2;
  if (iVar2 < *(int *)(lVar15 + 0x80)) {
    if (((*(ushort *)(lVar4 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar4 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar15 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      iVar2 = *(int *)(lVar15 + 0x84);
      lVar4 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
    }
    *(int *)(lVar15 + 0x80) = iVar2;
  }
code_r0x016bc9e4:
  if (((*(ushort *)(lVar4 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar4 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar4 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
  }
  piVar10 = (int *)(*(long *)(lVar4 + 0xb8) + 0x34);
  iVar2 = 1;
code_r0x016bca08:
  *piVar10 = *piVar10 + iVar2;
  goto code_r0x016bca14;
}



// ============================================================
// RVA: 0x14f05b0 | Atlas.UI.SeasonProgressPanelBehaviour.SetData
// ============================================================

/* WARNING: Possible PIC construction at 0x016bc65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016bc728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016bc660) */
/* WARNING: Removing unreachable block (ram,0x016bc66c) */
/* WARNING: Removing unreachable block (ram,0x016bc674) */
/* WARNING: Removing unreachable block (ram,0x016bc72c) */
/* WARNING: Removing unreachable block (ram,0x016bc738) */
/* WARNING: Removing unreachable block (ram,0x016bc420) */
/* WARNING: Removing unreachable block (ram,0x016bc434) */
/* WARNING: Removing unreachable block (ram,0x016bc43c) */
/* WARNING: Removing unreachable block (ram,0x016bc440) */
/* WARNING: Removing unreachable block (ram,0x016bc458) */

long Atlas_UI_SeasonProgressPanelBehaviour__SetData(long *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  ulong unaff_x22;
  undefined8 uVar13;
  undefined8 unaff_x23;
  long lVar14;
  undefined8 unaff_x24;
  long lVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined4 uVar18;
  undefined8 uStack_78;
  undefined *puStack_38;
  
  puVar17 = &stack0xfffffffffffffff0;
  uVar4 = 0x3d247f0;
  if ((bRam0000000003eb4c6d & 1) == 0) {
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d25608);
    bRam0000000003eb4c6d = 1;
  }
  lVar11 = param_1[9];
  if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar3 = (long *)0x0;
  if (lVar11 != 0) {
    unaff_x22 = 0x3d25000;
    plVar3 = (long *)/*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar11,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
    uVar4 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(plVar3,(int)param_1[0xd],0);
    plVar10 = (long *)param_1[6];
    if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar5 = /*Core.UI2.UIUtils$$GetSizeFormattedProgressString*/ func_0x02f90ca0(0x42dc0000,uVar4,plVar3,0);
    param_1 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014f06a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar11 = (**(code **)(*plVar10 + 0x558))(plVar10,uVar5,*(undefined8 *)(*plVar10 + 0x560));
      return lVar11;
    }
  }
  lVar11 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_SeasonProgressPanelBehaviour__DeInit;
  if (*(long *)(lVar11 + 0x78) == 0) {
    lVar11 = func_0x00f78af4();
    uStack_78 = uVar4;
    if ((bRam0000000003eb4c6e & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d2da20);
      func_0x00f78a20(0x3d1c098);
      func_0x00f78a20(0x3d2dae8);
      func_0x00f78a20(0x3d1c0e8);
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d247f0);
      func_0x00f78a20(0x3d25428);
      func_0x00f78a20(0x3d5e6f0);
      func_0x00f78a20(0x3d5e740);
      func_0x00f78a20(0x3d5e7b0);
      func_0x00f78a20(0x3d63d00);
      func_0x00f78a20(0x3d63d08);
      func_0x00f78a20(0x3d63d10);
      func_0x00f78a20(0x3d63d18);
      func_0x00f78a20(0x3d63d20);
      func_0x00f78a20(0x3d63d28);
      func_0x00f78a20(0x3d28ba0);
      func_0x00f78a20(0x3d28b98);
      func_0x00f78a20(0x3d78fc0);
      bRam0000000003eb4c6e = 1;
    }
    lVar14 = func_0x00f78aec(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0_TypeInfo*/ uRam0000000003d28ba0);
    /*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0$$.ctor*/ func_0x01569620(lVar14,0);
    if (lVar14 != 0) {
      *(long *)(lVar14 + 0x10) = lVar11;
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar4 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
      *(undefined8 *)(lVar11 + 0x60) = uVar4;
      lVar15 = *(long *)(lVar11 + 0x48);
      if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar15 != 0) {
        uVar4 = /*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar15,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
        *(int *)(lVar14 + 0x18) = (int)uVar4;
        if (*(long *)(lVar11 + 0x58) != 0) {
          uVar5 = Atlas_UI_SeasonMetagameData__StarsForSeason();
          uVar2 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(uVar4,uVar5,0);
          *(undefined4 *)(lVar14 + 0x1c) = uVar2;
          Atlas_Audio_UIAudio__Play(/*STR('event:/UI/Front_End/Dotween_ScaleDown')*/ uRam0000000003d78fc0,0);
          uVar13 = *(undefined8 *)(lVar11 + 0x60);
          uVar4 = *(undefined8 *)(lVar11 + 0x20);
          uVar5 = *(undefined8 *)(lVar11 + 0x28);
          if (((*(ushort *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar7 = *(undefined8 **)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8);
          lVar15 = puVar7[1];
          if (lVar15 == 0) {
            if (((*(ushort *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xe0) == 0)) {
              func_0x00f78ad0();
              puVar7 = *(undefined8 **)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8);
            }
            uVar16 = *puVar7;
            lVar15 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
            /*System.Action$$.ctor*/ func_0x02924c80(lVar15,uVar16,uRam0000000003d63d00,0);
            *(long *)(*(long *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8) + 8) = lVar15;
          }
          uVar4 = Atlas_UI_AtlasTweenAnimations__Wiggle(uVar5,uVar4,lVar15,0);
          uVar4 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar13,uVar4,0);
          uVar5 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar5,lVar14,uRam0000000003d63d08,0);
          uVar4 = /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar4,uVar5,0);
          uVar5 = func_0x00f78aec(/*DG.Tweening.Core.DOGetter<int>_TypeInfo*/ uRam0000000003d1c098);
          /*DG.Tweening.Core.DOGetter<int>$$.ctor*/ func_0x01e18b14(uVar5,lVar14,uRam0000000003d63d10,uRam0000000003d2da20);
          uVar13 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<int>_TypeInfo*/ uRam0000000003d1c0e8);
          /*DG.Tweening.Core.DOSetter<int>$$.ctor*/ func_0x01e1b1b8(uVar13,lVar14,uRam0000000003d63d18,uRam0000000003d2dae8);
          uVar18 = *(undefined4 *)(lVar11 + 0x38);
          if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar5 = /*DG.Tweening.DOTween$$To*/ func_0x0169409c(uVar18,uVar5,uVar13,uVar2,0);
          uVar4 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar4,uVar5,0);
          uVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar4,*(undefined4 *)(lVar11 + 0x3c),uRam0000000003d5e7b0);
          uVar5 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar5,lVar14,uRam0000000003d63d20,0);
          lVar11 = /*DG.Tweening.TweenSettingsExtensions$$OnUpdate<Tween>*/ func_0x018ee348(uVar4,uVar5,uRam0000000003d5e740);
          uVar4 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar4,lVar14,uRam0000000003d63d28,0);
          if ((lVar11 != 0) && (*(char *)(lVar11 + 0xe8) != '\0')) {
            *(undefined8 *)(lVar11 + 0x80) = uVar4;
          }
          return lVar11;
        }
      }
    }
    lVar11 = func_0x00f78af4();
    *(undefined8 *)(lVar11 + 0x38) = 0x83f000000;
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
  /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(lVar11 + 0x78),0,0);
  plVar10 = *(long **)(lVar11 + 0x60);
  if ((bRam0000000003eb5c52 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5c52 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x80) == '\0') {
    return /*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0;
  }
  if (plVar10 == (long *)0x0) {
    lVar11 = /*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      lVar11 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return lVar11;
    }
    if ((bRam0000000003eb5b2e & 1) == 0) {
      func_0x00f78a20(0x3d70738,0);
      bRam0000000003eb5b2e = 1;
    }
    plVar10 = (long *)0x0;
    plVar3 = /*STR('Null Tween')*/ plRam0000000003d70738;
  }
  else if ((char)plVar10[0x1d] == '\0') {
    lVar11 = /*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      lVar11 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return lVar11;
    }
    if ((bRam0000000003eb5b2c & 1) == 0) {
      func_0x00f78a20(0x3d74b30,0);
      bRam0000000003eb5b2c = 1;
    }
    plVar10 = (long *)0x0;
    plVar3 = /*STR('This Tween has been killed and is now invalid')*/ plRam0000000003d74b30;
  }
  else {
    if (*(char *)((long)plVar10 + 0xe9) == '\0') {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar11 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      if (*(char *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x44) != '\0') {
        *(undefined1 *)(plVar10 + 0x1d) = 0;
        return lVar11;
      }
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      bVar6 = true;
      puVar1 = &stack0xffffffffffffffd0;
      while( true ) {
        while( true ) {
          *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
          *(ulong *)(puVar1 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar1 + -0x28) = uVar4;
          *(long **)(puVar1 + -0x20) = plVar3;
          *(long **)(puVar1 + -0x18) = param_1;
          *(undefined1 **)(puVar1 + -0x10) = puVar17;
          *(undefined **)(puVar1 + -8) = puStack_38;
          puVar17 = puVar1 + -0x10;
          if ((bRam0000000003eb5c68 & 1) == 0) {
            func_0x00f78a20(0x3d3c4d0);
            func_0x00f78a20(0x3d3c4d8);
            func_0x00f78a20(0x3d24878);
            func_0x00f78a20(0x3d404c0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb5c68 = 1;
          }
          if (plVar10 == (long *)0x0) goto code_r0x016bc740;
          if (plVar10[0x11] != 0) {
            /*DG.Tweening.Tween$$OnTweenCallback*/ func_0x016bb65c(plVar10[0x11],plVar10);
          }
          if (bVar6) {
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$RemoveActiveTween*/ func_0x016bfd9c(plVar10);
          }
          iVar9 = (int)plVar10[2];
          param_1 = plVar10;
          if (*(char *)((long)plVar10 + 0x9a) != '\0') break;
          if (iVar9 == 0) {
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            piVar8 = (int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x3c);
            iVar9 = -1;
            goto code_r0x016bca08;
          }
          if (iVar9 != 1) goto code_r0x016bca14;
          uVar4 = 0x3d25440;
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x40) =
               *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x40) + -1;
          if (*plVar10 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
          lVar11 = plVar10[0x24];
          if (lVar11 == 0) goto code_r0x016bc740;
          unaff_x22 = (ulong)*(uint *)(lVar11 + 0x18);
          if ((int)*(uint *)(lVar11 + 0x18) < 1) goto code_r0x016bca14;
          unaff_x23 = 0;
          if (*(int *)(lVar11 + 0x18) == 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar3 = *(long **)(*(long *)(lVar11 + 0x10) + 0x20);
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          bVar6 = false;
          puStack_38 = &UNK_016bc72c;
          puVar1 = puVar1 + -0x40;
          plVar10 = plVar3;
        }
        if (iVar9 == 0) goto code_r0x016bc744;
        if (iVar9 != 1) break;
        uVar4 = 0x3d25440;
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar11 = *(long *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x58);
        if (lVar11 == 0) goto code_r0x016bc740;
        /*System.Collections.Generic.Stack<DtdParser.ParseElementOnlyContent_LocalFrame>$$Push*/ func_0x02865908(lVar11,plVar10,uRam0000000003d404c0);
        *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x38) =
             *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x38) + 1;
        if (*plVar10 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
        lVar11 = plVar10[0x24];
        if (lVar11 == 0) goto code_r0x016bc740;
        unaff_x22 = (ulong)*(uint *)(lVar11 + 0x18);
        if ((int)*(uint *)(lVar11 + 0x18) < 1) break;
        unaff_x23 = 0;
        if (*(int *)(lVar11 + 0x18) == 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar3 = *(long **)(*(long *)(lVar11 + 0x10) + 0x20);
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        bVar6 = false;
        puStack_38 = &UNK_016bc660;
        puVar1 = puVar1 + -0x40;
        plVar10 = plVar3;
      }
      goto code_r0x016bca14;
    }
    lVar11 = /*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      lVar11 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return lVar11;
    }
    plVar3 = /*STR("This Tween was added to a Sequence and can't be controlled directly")*/ plRam0000000003d74b40;
    if ((bRam0000000003eb5b2d & 1) == 0) {
      func_0x00f78a20(0x3d74b40,0);
      bRam0000000003eb5b2d = 1;
      plVar3 = /*STR("This Tween was added to a Sequence and can't be controlled directly")*/ plRam0000000003d74b40;
    }
  }
  if ((bRam0000000003eb5b28 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d35ae8);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d65de0);
    func_0x00f78a20(0x3d68098);
    func_0x00f78a20(0x3d67238);
    func_0x00f78a20(0x3d67230);
    func_0x00f78a20(0x3d67240);
    bRam0000000003eb5b28 = 1;
  }
  uVar4 = /*STR('<color=#0099bc><b>DOTWEEN ► </b></color>')*/ uRam0000000003d68098;
  if (plVar3 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
  }
  plVar3 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar4,uVar5,0);
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((plVar10 != (long *)0x0) && (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x31) != '\0')
     ) {
    lVar15 = plVar10[0x19];
    lVar14 = plVar10[7];
    lVar11 = plVar10[8];
    if ((lVar15 != 0) || ((lVar14 != 0 || ((int)lVar11 != -999)))) {
      if (plVar3 == (long *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
      }
      plVar3 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar4,/*STR('\n')*/ uRam0000000003d65de0,0);
      if (lVar15 != 0) {
        uVar4 = 0;
        if (plVar3 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        }
        uVar5 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[debug target ID: {0}]-')*/ uRam0000000003d67230,plVar10[0x19],0);
        plVar3 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar4,uVar5,0);
      }
      if (lVar14 != 0) {
        uVar4 = 0;
        if (plVar3 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        }
        uVar5 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[stringId: {0}]-')*/ uRam0000000003d67240,plVar10[7],0);
        plVar3 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar4,uVar5,0);
      }
      if ((int)lVar11 != -999) {
        uVar4 = 0;
        if (plVar3 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        }
        uStack_78 = CONCAT44((int)plVar10[8],(undefined4)uStack_78);
        uVar5 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_78 + 4);
        uVar5 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[intId: {0}]-')*/ uRam0000000003d67238,uVar5,0);
        plVar3 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar4,uVar5,0);
      }
    }
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar11 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x28);
  if (lVar11 != 0) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar11 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x28);
      if (lVar11 == 0) {
        lVar11 = func_0x00f78af4();
        if ((bRam0000000003eb5b0e & 1) == 0) {
          func_0x00f78a20(0x3d20bc0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb5b0e = 1;
        }
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar4 = *(undefined8 *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x58);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,lVar11,0);
        if ((int)lVar14 == 0) {
          return lVar14;
        }
        *(undefined1 *)(lVar11 + 0x2d) = 1;
        uVar4 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar11,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((bRam0000000003ec0230 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ec0230 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (pcRam0000000003ec0228 == (code *)0x0) {
          pcRam0000000003ec0228 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar11 = (*pcRam0000000003ec0228)(0,uVar4);
        return lVar11;
      }
    }
    lVar11 = /*System.Func<LogType, object, bool>$$Invoke*/ func_0x0218241c(lVar11,2,plVar3,uRam0000000003d35ae8);
    if ((int)lVar11 == 0) {
      return lVar11;
    }
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar11 = /*UnityEngine.Debug$$LogWarning*/ func_0x03221840(plVar3,0);
  return lVar11;
  while( true ) {
    if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar14 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      uVar12 = *(uint *)(lVar14 + 0x84);
    }
    plVar3 = *(long **)(lVar14 + 0x50);
    if (plVar3 != (long *)0x0) break;
code_r0x016bc740:
    func_0x00f78af4();
code_r0x016bc744:
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar14 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
    lVar11 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
    if (*(int *)(lVar14 + 0x84) == -1) {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar14 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      }
      lVar11 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      iVar9 = *(int *)(lVar14 + 8) + -1;
      *(int *)(lVar14 + 0x80) = iVar9;
      *(int *)(lVar14 + 0x84) = iVar9;
    }
    if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar11 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
    }
    lVar14 = *(long *)(lVar11 + 0xb8);
    uVar12 = *(uint *)(lVar14 + 0x84);
    if (*(int *)(lVar14 + 8) + -1 <= (int)uVar12) {
      if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
        func_0x00f78ad0();
        uVar12 = *(uint *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x84);
        lVar11 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      }
      if ((int)uVar12 < 0) goto code_r0x016bc9e4;
      lVar14 = (ulong)uVar12 * 8 + 0x20;
      while( true ) {
        if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar11 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
        }
        plVar3 = *(long **)(*(long *)(lVar11 + 0xb8) + 0x50);
        if (plVar3 == (long *)0x0) goto code_r0x016bc740;
        if (*(uint *)(plVar3 + 3) <= uVar12) goto code_r0x016bca38;
        if (plVar3[(ulong)uVar12 + 4] == 0) break;
        lVar14 = lVar14 + -8;
        bVar6 = (int)uVar12 < 1;
        uVar12 = uVar12 - 1;
        if (bVar6) goto code_r0x016bc9e4;
      }
      if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
        func_0x00f78ad0();
        plVar3 = *(long **)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x50);
        if (plVar3 == (long *)0x0) goto code_r0x016bc740;
      }
      lVar11 = func_0x00f78adc(plVar10,*(undefined8 *)(*plVar3 + 0x40));
      if (lVar11 == 0) goto code_r0x016bca4c;
      if (*(uint *)(plVar3 + 3) <= uVar12) goto code_r0x016bca38;
      *(long **)((long)plVar3 + lVar14) = plVar10;
      lVar14 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      lVar11 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      if ((int)uVar12 < *(int *)(lVar14 + 0x80)) {
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar14 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
        }
        lVar11 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
        *(uint *)(lVar14 + 0x80) = uVar12;
      }
      if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar11 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      }
      lVar14 = *(long *)(lVar11 + 0xb8);
      iVar9 = *(int *)(lVar14 + 0x80);
      if (*(int *)(lVar14 + 0x84) < iVar9) {
        if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar14 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
          iVar9 = *(int *)(lVar14 + 0x80);
          lVar11 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
        }
        *(int *)(lVar14 + 0x84) = iVar9;
      }
      goto code_r0x016bc9e4;
    }
  }
  lVar11 = func_0x00f78adc(plVar10,*(undefined8 *)(*plVar3 + 0x40));
  if (lVar11 == 0) goto code_r0x016bca4c;
  if (*(uint *)(plVar3 + 3) <= uVar12 + 1) {
code_r0x016bca38:
    uVar4 = func_0x00f78b24();
    do {
      func_0x00f78ac0(uVar4,0);
code_r0x016bca44:
      func_0x00f78e5c(plVar10);
code_r0x016bca4c:
      uVar4 = func_0x00f78b14();
    } while( true );
  }
  plVar3[(long)(int)(uVar12 + 1) + 4] = (long)plVar10;
  lVar11 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
  lVar14 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
  iVar9 = *(int *)(lVar14 + 0x84) + 1;
  *(int *)(lVar14 + 0x84) = iVar9;
  if (iVar9 < *(int *)(lVar14 + 0x80)) {
    if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar14 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      iVar9 = *(int *)(lVar14 + 0x84);
      lVar11 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
    }
    *(int *)(lVar14 + 0x80) = iVar9;
  }
code_r0x016bc9e4:
  if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar11 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
  }
  piVar8 = (int *)(*(long *)(lVar11 + 0xb8) + 0x34);
  iVar9 = 1;
code_r0x016bca08:
  *piVar8 = *piVar8 + iVar9;
code_r0x016bca14:
  *(undefined1 *)(plVar10 + 0x1d) = 0;
                    /* WARNING: Could not recover jumptable at 0x016bca34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar11 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
  return lVar11;
}



// ============================================================
// RVA: 0x14f06ac | Atlas.UI.SeasonProgressPanelBehaviour.DeInit
// ============================================================

/* WARNING: Possible PIC construction at 0x016bc65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x016bc728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x016bc660) */
/* WARNING: Removing unreachable block (ram,0x016bc66c) */
/* WARNING: Removing unreachable block (ram,0x016bc674) */
/* WARNING: Removing unreachable block (ram,0x016bc72c) */
/* WARNING: Removing unreachable block (ram,0x016bc738) */
/* WARNING: Removing unreachable block (ram,0x016bc420) */
/* WARNING: Removing unreachable block (ram,0x016bc434) */
/* WARNING: Removing unreachable block (ram,0x016bc43c) */
/* WARNING: Removing unreachable block (ram,0x016bc440) */
/* WARNING: Removing unreachable block (ram,0x016bc458) */

long Atlas_UI_SeasonProgressPanelBehaviour__DeInit(long param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  undefined8 *puVar9;
  int *piVar10;
  int iVar11;
  long *unaff_x19;
  long *unaff_x20;
  uint uVar12;
  undefined8 unaff_x21;
  ulong unaff_x22;
  undefined8 uVar13;
  undefined8 unaff_x23;
  long lVar14;
  undefined8 unaff_x24;
  long lVar15;
  undefined8 uVar16;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined4 uVar17;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    lVar7 = func_0x00f78af4();
    if ((bRam0000000003eb4c6e & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d2da20);
      func_0x00f78a20(0x3d1c098);
      func_0x00f78a20(0x3d2dae8);
      func_0x00f78a20(0x3d1c0e8);
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d247f0);
      func_0x00f78a20(0x3d25428);
      func_0x00f78a20(0x3d5e6f0);
      func_0x00f78a20(0x3d5e740);
      func_0x00f78a20(0x3d5e7b0);
      func_0x00f78a20(0x3d63d00);
      func_0x00f78a20(0x3d63d08);
      func_0x00f78a20(0x3d63d10);
      func_0x00f78a20(0x3d63d18);
      func_0x00f78a20(0x3d63d20);
      func_0x00f78a20(0x3d63d28);
      func_0x00f78a20(0x3d28ba0);
      func_0x00f78a20(0x3d28b98);
      func_0x00f78a20(0x3d78fc0);
      bRam0000000003eb4c6e = 1;
    }
    lVar14 = func_0x00f78aec(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0_TypeInfo*/ uRam0000000003d28ba0);
    /*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0$$.ctor*/ func_0x01569620(lVar14,0);
    if (lVar14 != 0) {
      *(long *)(lVar14 + 0x10) = lVar7;
      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar6 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
      *(undefined8 *)(lVar7 + 0x60) = uVar6;
      lVar15 = *(long *)(lVar7 + 0x48);
      if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar15 != 0) {
        uVar6 = /*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar15,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
        *(int *)(lVar14 + 0x18) = (int)uVar6;
        if (*(long *)(lVar7 + 0x58) != 0) {
          uVar4 = Atlas_UI_SeasonMetagameData__StarsForSeason();
          uVar2 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(uVar6,uVar4,0);
          *(undefined4 *)(lVar14 + 0x1c) = uVar2;
          Atlas_Audio_UIAudio__Play(/*STR('event:/UI/Front_End/Dotween_ScaleDown')*/ uRam0000000003d78fc0,0);
          uVar13 = *(undefined8 *)(lVar7 + 0x60);
          uVar6 = *(undefined8 *)(lVar7 + 0x20);
          uVar4 = *(undefined8 *)(lVar7 + 0x28);
          if (((*(ushort *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar9 = *(undefined8 **)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8);
          lVar15 = puVar9[1];
          if (lVar15 == 0) {
            if (((*(ushort *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xe0) == 0)) {
              func_0x00f78ad0();
              puVar9 = *(undefined8 **)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8);
            }
            uVar16 = *puVar9;
            lVar15 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
            /*System.Action$$.ctor*/ func_0x02924c80(lVar15,uVar16,uRam0000000003d63d00,0);
            *(long *)(*(long *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8) + 8) = lVar15;
          }
          uVar6 = Atlas_UI_AtlasTweenAnimations__Wiggle(uVar4,uVar6,lVar15,0);
          uVar6 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar13,uVar6,0);
          uVar4 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar4,lVar14,uRam0000000003d63d08,0);
          uVar6 = /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar6,uVar4,0);
          uVar4 = func_0x00f78aec(/*DG.Tweening.Core.DOGetter<int>_TypeInfo*/ uRam0000000003d1c098);
          /*DG.Tweening.Core.DOGetter<int>$$.ctor*/ func_0x01e18b14(uVar4,lVar14,uRam0000000003d63d10,uRam0000000003d2da20);
          uVar13 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<int>_TypeInfo*/ uRam0000000003d1c0e8);
          /*DG.Tweening.Core.DOSetter<int>$$.ctor*/ func_0x01e1b1b8(uVar13,lVar14,uRam0000000003d63d18,uRam0000000003d2dae8);
          uVar17 = *(undefined4 *)(lVar7 + 0x38);
          if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar4 = /*DG.Tweening.DOTween$$To*/ func_0x0169409c(uVar17,uVar4,uVar13,uVar2,0);
          uVar6 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar6,uVar4,0);
          uVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar6,*(undefined4 *)(lVar7 + 0x3c),uRam0000000003d5e7b0);
          uVar4 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar4,lVar14,uRam0000000003d63d20,0);
          lVar7 = /*DG.Tweening.TweenSettingsExtensions$$OnUpdate<Tween>*/ func_0x018ee348(uVar6,uVar4,uRam0000000003d5e740);
          uVar6 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar6,lVar14,uRam0000000003d63d28,0);
          if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
            *(undefined8 *)(lVar7 + 0x80) = uVar6;
          }
          return lVar7;
        }
      }
    }
    lVar7 = func_0x00f78af4();
    *(undefined8 *)(lVar7 + 0x38) = 0x83f000000;
    if ((bRam0000000003ebf1b8 & 1) == 0) {
      func_0x00f78a20(0x3d23990,0);
      bRam0000000003ebf1b8 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    return lVar7;
  }
  /*Core.Audio.AudioEvent$$Stop*/ func_0x01638a28(*(long *)(param_1 + 0x78),0,0);
  plVar3 = *(long **)(param_1 + 0x60);
  if ((bRam0000000003eb5c52 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5c52 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x80) == '\0') {
    return /*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0;
  }
  if (plVar3 == (long *)0x0) {
    lVar7 = /*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      lVar7 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return lVar7;
    }
    if ((bRam0000000003eb5b2e & 1) == 0) {
      func_0x00f78a20(0x3d70738,0);
      bRam0000000003eb5b2e = 1;
    }
    plVar3 = (long *)0x0;
    plVar5 = /*STR('Null Tween')*/ plRam0000000003d70738;
  }
  else if ((char)plVar3[0x1d] == '\0') {
    lVar7 = /*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      lVar7 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return lVar7;
    }
    if ((bRam0000000003eb5b2c & 1) == 0) {
      func_0x00f78a20(0x3d74b30,0);
      bRam0000000003eb5b2c = 1;
    }
    plVar3 = (long *)0x0;
    plVar5 = /*STR('This Tween has been killed and is now invalid')*/ plRam0000000003d74b30;
  }
  else {
    if (*(char *)((long)plVar3 + 0xe9) == '\0') {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      if (*(char *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x44) != '\0') {
        *(undefined1 *)(plVar3 + 0x1d) = 0;
        return lVar7;
      }
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      bVar8 = true;
      puVar1 = (undefined1 *)register0x00000008;
      while( true ) {
        while( true ) {
          *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar1 + -0x38) = unaff_x23;
          *(ulong *)(puVar1 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
          *(long **)(puVar1 + -0x20) = unaff_x20;
          *(long **)(puVar1 + -0x18) = unaff_x19;
          *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
          *(undefined **)(puVar1 + -8) = unaff_x30;
          unaff_x29 = puVar1 + -0x10;
          if ((bRam0000000003eb5c68 & 1) == 0) {
            func_0x00f78a20(0x3d3c4d0);
            func_0x00f78a20(0x3d3c4d8);
            func_0x00f78a20(0x3d24878);
            func_0x00f78a20(0x3d404c0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb5c68 = 1;
          }
          if (plVar3 == (long *)0x0) goto code_r0x016bc740;
          if (plVar3[0x11] != 0) {
            /*DG.Tweening.Tween$$OnTweenCallback*/ func_0x016bb65c(plVar3[0x11],plVar3);
          }
          if (bVar8) {
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$RemoveActiveTween*/ func_0x016bfd9c(plVar3);
          }
          iVar11 = (int)plVar3[2];
          unaff_x19 = plVar3;
          if (*(char *)((long)plVar3 + 0x9a) != '\0') break;
          if (iVar11 == 0) {
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            piVar10 = (int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x3c);
            iVar11 = -1;
            goto code_r0x016bca08;
          }
          if (iVar11 != 1) goto code_r0x016bca14;
          unaff_x21 = 0x3d25440;
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x40) =
               *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x40) + -1;
          if (*plVar3 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
          lVar7 = plVar3[0x24];
          if (lVar7 == 0) goto code_r0x016bc740;
          unaff_x22 = (ulong)*(uint *)(lVar7 + 0x18);
          if ((int)*(uint *)(lVar7 + 0x18) < 1) goto code_r0x016bca14;
          unaff_x23 = 0;
          if (*(int *)(lVar7 + 0x18) == 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          unaff_x20 = *(long **)(*(long *)(lVar7 + 0x10) + 0x20);
          if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          bVar8 = false;
          unaff_x30 = &UNK_016bc72c;
          puVar1 = puVar1 + -0x40;
          plVar3 = unaff_x20;
        }
        if (iVar11 == 0) goto code_r0x016bc744;
        if (iVar11 != 1) break;
        unaff_x21 = 0x3d25440;
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar7 = *(long *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x58);
        if (lVar7 == 0) goto code_r0x016bc740;
        /*System.Collections.Generic.Stack<DtdParser.ParseElementOnlyContent_LocalFrame>$$Push*/ func_0x02865908(lVar7,plVar3,uRam0000000003d404c0);
        *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x38) =
             *(int *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x38) + 1;
        if (*plVar3 != /*DG.Tweening.Sequence_TypeInfo*/ lRam0000000003d24878) goto code_r0x016bca44;
        lVar7 = plVar3[0x24];
        if (lVar7 == 0) goto code_r0x016bc740;
        unaff_x22 = (ulong)*(uint *)(lVar7 + 0x18);
        if ((int)*(uint *)(lVar7 + 0x18) < 1) break;
        unaff_x23 = 0;
        if (*(int *)(lVar7 + 0x18) == 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        unaff_x20 = *(long **)(*(long *)(lVar7 + 0x10) + 0x20);
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        bVar8 = false;
        unaff_x30 = &UNK_016bc660;
        puVar1 = puVar1 + -0x40;
        plVar3 = unaff_x20;
      }
      goto code_r0x016bca14;
    }
    lVar7 = /*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0;
    if (cRam0000000003cc2ae1 == '\0') {
      lVar7 = func_0x00f78a20(0x3d21160);
      cRam0000000003cc2ae1 = '\x01';
    }
    if (**(int **)(/*DG.Tweening.Core.Debugger_TypeInfo*/ lRam0000000003d21160 + 0xb8) < 2) {
      return lVar7;
    }
    plVar5 = /*STR("This Tween was added to a Sequence and can't be controlled directly")*/ plRam0000000003d74b40;
    if ((bRam0000000003eb5b2d & 1) == 0) {
      func_0x00f78a20(0x3d74b40,0);
      bRam0000000003eb5b2d = 1;
      plVar5 = /*STR("This Tween was added to a Sequence and can't be controlled directly")*/ plRam0000000003d74b40;
    }
  }
  if ((bRam0000000003eb5b28 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d210d8);
    func_0x00f78a20(0x3d35ae8);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d65de0);
    func_0x00f78a20(0x3d68098);
    func_0x00f78a20(0x3d67238);
    func_0x00f78a20(0x3d67230);
    func_0x00f78a20(0x3d67240);
    bRam0000000003eb5b28 = 1;
  }
  uVar6 = /*STR('<color=#0099bc><b>DOTWEEN ► </b></color>')*/ uRam0000000003d68098;
  if (plVar5 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
  }
  plVar5 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar6,uVar4,0);
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((plVar3 != (long *)0x0) && (*(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x31) != '\0'))
  {
    lVar15 = plVar3[0x19];
    lVar14 = plVar3[7];
    lVar7 = plVar3[8];
    if ((lVar15 != 0) || ((lVar14 != 0 || ((int)lVar7 != -999)))) {
      if (plVar5 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      }
      plVar5 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar6,/*STR('\n')*/ uRam0000000003d65de0,0);
      if (lVar15 != 0) {
        uVar6 = 0;
        if (plVar5 != (long *)0x0) {
          uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        }
        uVar4 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[debug target ID: {0}]-')*/ uRam0000000003d67230,plVar3[0x19],0);
        plVar5 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar6,uVar4,0);
      }
      if (lVar14 != 0) {
        uVar6 = 0;
        if (plVar5 != (long *)0x0) {
          uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        }
        uVar4 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[stringId: {0}]-')*/ uRam0000000003d67240,plVar3[7],0);
        plVar5 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar6,uVar4,0);
      }
      if ((int)lVar7 != -999) {
        uVar6 = 0;
        if (plVar5 != (long *)0x0) {
          uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        }
        uVar4 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&stack0xffffffffffffffbc);
        uVar4 = /*System.String$$Format*/ func_0x029bc688(/*STR('-[intId: {0}]-')*/ uRam0000000003d67238,uVar4,0);
        plVar5 = (long *)/*System.String$$Concat*/ func_0x029bdb88(uVar6,uVar4,0);
      }
    }
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x28);
  if (lVar7 != 0) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar7 = *(long *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x28);
      if (lVar7 == 0) {
        lVar7 = func_0x00f78af4();
        if ((bRam0000000003eb5b0e & 1) == 0) {
          func_0x00f78a20(0x3d20bc0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb5b0e = 1;
        }
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar6 = *(undefined8 *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x58);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,lVar7,0);
        if ((int)lVar14 == 0) {
          return lVar14;
        }
        *(undefined1 *)(lVar7 + 0x2d) = 1;
        uVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((bRam0000000003ec0230 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ec0230 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (pcRam0000000003ec0228 == (code *)0x0) {
          pcRam0000000003ec0228 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03249418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar7 = (*pcRam0000000003ec0228)(0,uVar6);
        return lVar7;
      }
    }
    lVar7 = /*System.Func<LogType, object, bool>$$Invoke*/ func_0x0218241c(lVar7,2,plVar5,uRam0000000003d35ae8);
    if ((int)lVar7 == 0) {
      return lVar7;
    }
  }
  if (((*(ushort *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Debug_TypeInfo*/ lRam0000000003d210d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = /*UnityEngine.Debug$$LogWarning*/ func_0x03221840(plVar5,0);
  return lVar7;
  while( true ) {
    if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar14 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      uVar12 = *(uint *)(lVar14 + 0x84);
    }
    plVar5 = *(long **)(lVar14 + 0x50);
    if (plVar5 != (long *)0x0) break;
code_r0x016bc740:
    func_0x00f78af4();
code_r0x016bc744:
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar14 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
    lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
    if (*(int *)(lVar14 + 0x84) == -1) {
      if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar14 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      }
      lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      iVar11 = *(int *)(lVar14 + 8) + -1;
      *(int *)(lVar14 + 0x80) = iVar11;
      *(int *)(lVar14 + 0x84) = iVar11;
    }
    if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
    }
    lVar14 = *(long *)(lVar7 + 0xb8);
    uVar12 = *(uint *)(lVar14 + 0x84);
    if (*(int *)(lVar14 + 8) + -1 <= (int)uVar12) {
      if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
        func_0x00f78ad0();
        uVar12 = *(uint *)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x84);
        lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      }
      if ((int)uVar12 < 0) goto code_r0x016bc9e4;
      lVar14 = (ulong)uVar12 * 8 + 0x20;
      while( true ) {
        if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
        }
        plVar5 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x50);
        if (plVar5 == (long *)0x0) goto code_r0x016bc740;
        if (*(uint *)(plVar5 + 3) <= uVar12) goto code_r0x016bca38;
        if (plVar5[(ulong)uVar12 + 4] == 0) break;
        lVar14 = lVar14 + -8;
        bVar8 = (int)uVar12 < 1;
        uVar12 = uVar12 - 1;
        if (bVar8) goto code_r0x016bc9e4;
      }
      if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
        func_0x00f78ad0();
        plVar5 = *(long **)(*(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8) + 0x50);
        if (plVar5 == (long *)0x0) goto code_r0x016bc740;
      }
      lVar7 = func_0x00f78adc(plVar3,*(undefined8 *)(*plVar5 + 0x40));
      if (lVar7 == 0) goto code_r0x016bca4c;
      if (*(uint *)(plVar5 + 3) <= uVar12) goto code_r0x016bca38;
      *(long **)((long)plVar5 + lVar14) = plVar3;
      lVar14 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      if ((int)uVar12 < *(int *)(lVar14 + 0x80)) {
        if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar14 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
        }
        lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
        *(uint *)(lVar14 + 0x80) = uVar12;
      }
      if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
      }
      lVar14 = *(long *)(lVar7 + 0xb8);
      iVar11 = *(int *)(lVar14 + 0x80);
      if (*(int *)(lVar14 + 0x84) < iVar11) {
        if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar14 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
          iVar11 = *(int *)(lVar14 + 0x80);
          lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
        }
        *(int *)(lVar14 + 0x84) = iVar11;
      }
      goto code_r0x016bc9e4;
    }
  }
  lVar7 = func_0x00f78adc(plVar3,*(undefined8 *)(*plVar5 + 0x40));
  if (lVar7 == 0) goto code_r0x016bca4c;
  if (*(uint *)(plVar5 + 3) <= uVar12 + 1) {
code_r0x016bca38:
    uVar6 = func_0x00f78b24();
    do {
      func_0x00f78ac0(uVar6,0);
code_r0x016bca44:
      func_0x00f78e5c(plVar3);
code_r0x016bca4c:
      uVar6 = func_0x00f78b14();
    } while( true );
  }
  plVar5[(long)(int)(uVar12 + 1) + 4] = (long)plVar3;
  lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
  lVar14 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
  iVar11 = *(int *)(lVar14 + 0x84) + 1;
  *(int *)(lVar14 + 0x84) = iVar11;
  if (iVar11 < *(int *)(lVar14 + 0x80)) {
    if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar14 = *(long *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xb8);
      iVar11 = *(int *)(lVar14 + 0x84);
      lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
    }
    *(int *)(lVar14 + 0x80) = iVar11;
  }
code_r0x016bc9e4:
  if (((*(ushort *)(lVar7 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar7 = /*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440;
  }
  piVar10 = (int *)(*(long *)(lVar7 + 0xb8) + 0x34);
  iVar11 = 1;
code_r0x016bca08:
  *piVar10 = *piVar10 + iVar11;
code_r0x016bca14:
  *(undefined1 *)(plVar3 + 0x1d) = 0;
                    /* WARNING: Could not recover jumptable at 0x016bca34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar7 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
  return lVar7;
}



// ============================================================
// RVA: 0x14f06ec | Atlas.UI.SeasonProgressPanelBehaviour.AnimateStars
// ============================================================

undefined1  [16] Atlas_UI_SeasonProgressPanelBehaviour__AnimateStars(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if ((bRam0000000003eb4c6e & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d2da20);
    func_0x00f78a20(0x3d1c098);
    func_0x00f78a20(0x3d2dae8);
    func_0x00f78a20(0x3d1c0e8);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d247f0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6f0);
    func_0x00f78a20(0x3d5e740);
    func_0x00f78a20(0x3d5e7b0);
    func_0x00f78a20(0x3d63d00);
    func_0x00f78a20(0x3d63d08);
    func_0x00f78a20(0x3d63d10);
    func_0x00f78a20(0x3d63d18);
    func_0x00f78a20(0x3d63d20);
    func_0x00f78a20(0x3d63d28);
    func_0x00f78a20(0x3d28ba0);
    func_0x00f78a20(0x3d28b98);
    func_0x00f78a20(0x3d78fc0);
    bRam0000000003eb4c6e = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0_TypeInfo*/ uRam0000000003d28ba0);
  /*Atlas.UI.SeasonProgressPanelBehaviour.<>c__DisplayClass18_0$$.ctor*/ func_0x01569620(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    lVar6 = *(long *)(param_1 + 0x48);
    if (((*(ushort *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (lVar6 != 0) {
      uVar3 = /*Atlas.Stats.SeasonsManager$$GetRewardThreshold*/ func_0x014ef730(lVar6,**(int **)(/*Atlas.Definitions.SeasonDefinition_TypeInfo*/ lRam0000000003d247f0 + 0xb8) + -1);
      *(int *)(lVar2 + 0x18) = (int)uVar3;
      if (*(long *)(param_1 + 0x58) != 0) {
        uVar4 = Atlas_UI_SeasonMetagameData__StarsForSeason();
        uVar1 = /*UnityEngine.Mathf$$Min*/ func_0x0323ccec(uVar3,uVar4,0);
        *(undefined4 *)(lVar2 + 0x1c) = uVar1;
        Atlas_Audio_UIAudio__Play(/*STR('event:/UI/Front_End/Dotween_ScaleDown')*/ uRam0000000003d78fc0,0);
        uVar7 = *(undefined8 *)(param_1 + 0x60);
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        if (((*(ushort *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar5 = *(undefined8 **)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8);
        lVar6 = puVar5[1];
        if (lVar6 == 0) {
          if (((*(ushort *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xe0) == 0)) {
            func_0x00f78ad0();
            puVar5 = *(undefined8 **)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8);
          }
          uVar8 = *puVar5;
          lVar6 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(lVar6,uVar8,uRam0000000003d63d00,0);
          *(long *)(*(long *)(/*Atlas.UI.SeasonProgressPanelBehaviour.<>c_TypeInfo*/ lRam0000000003d28b98 + 0xb8) + 8) = lVar6;
        }
        uVar3 = Atlas_UI_AtlasTweenAnimations__Wiggle(uVar4,uVar3,lVar6,0);
        uVar3 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar7,uVar3,0);
        uVar4 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
        /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar4,lVar2,uRam0000000003d63d08,0);
        uVar3 = /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar3,uVar4,0);
        uVar4 = func_0x00f78aec(/*DG.Tweening.Core.DOGetter<int>_TypeInfo*/ uRam0000000003d1c098);
        /*DG.Tweening.Core.DOGetter<int>$$.ctor*/ func_0x01e18b14(uVar4,lVar2,uRam0000000003d63d10,uRam0000000003d2da20);
        uVar7 = func_0x00f78aec(/*DG.Tweening.Core.DOSetter<int>_TypeInfo*/ uRam0000000003d1c0e8);
        /*DG.Tweening.Core.DOSetter<int>$$.ctor*/ func_0x01e1b1b8(uVar7,lVar2,uRam0000000003d63d18,uRam0000000003d2dae8);
        uVar9 = *(undefined4 *)(param_1 + 0x38);
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar4 = /*DG.Tweening.DOTween$$To*/ func_0x0169409c(uVar9,uVar4,uVar7,uVar1,0);
        uVar3 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar3,uVar4,0);
        uVar3 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar3,*(undefined4 *)(param_1 + 0x3c),uRam0000000003d5e7b0);
        uVar4 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
        /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar4,lVar2,uRam0000000003d63d20,0);
        auVar10._0_8_ = /*DG.Tweening.TweenSettingsExtensions$$OnUpdate<Tween>*/ func_0x018ee348(uVar3,uVar4,uRam0000000003d5e740);
        uVar3 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
        /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar3,lVar2,uRam0000000003d63d28,0);
        if ((auVar10._0_8_ != 0) && (*(char *)(auVar10._0_8_ + 0xe8) != '\0')) {
          *(undefined8 *)(auVar10._0_8_ + 0x80) = uVar3;
        }
        auVar10._8_8_ = uVar3;
        return auVar10;
      }
    }
  }
  auVar11._0_8_ = func_0x00f78af4();
  *(undefined8 *)(auVar11._0_8_ + 0x38) = 0x83f000000;
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar11._8_8_ = 0;
  return auVar11;
}



// ============================================================
// RVA: 0x14f0b98 | Atlas.UI.SeasonProgressPanelBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_SeasonProgressPanelBehaviour___ctor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined8 *)(param_1 + 0x38) = 0x83f000000;
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



