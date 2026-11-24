// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.DailyChallengesWidgetBehaviour

// ============================================================
// RVA: 0x1577a80 | Atlas.UI.DailyChallengesWidgetBehaviour.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x01577bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01577bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01577bec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01577bd0) */
/* WARNING: Removing unreachable block (ram,0x01577bd8) */
/* WARNING: Removing unreachable block (ram,0x01577be4) */
/* WARNING: Removing unreachable block (ram,0x01577bb0) */
/* WARNING: Removing unreachable block (ram,0x01577bb8) */
/* WARNING: Removing unreachable block (ram,0x01577bc4) */
/* WARNING: Removing unreachable block (ram,0x01577bf0) */
/* WARNING: Removing unreachable block (ram,0x01577bfc) */

void Atlas_UI_DailyChallengesWidgetBehaviour__Init
               (long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
               ulong param_6)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong unaff_x22;
  long lVar11;
  undefined8 unaff_x23;
  long lVar12;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5078 & 1) == 0) {
    func_0x00f78a20(0x3d3d8a0);
    bRam0000000003eb5078 = 1;
  }
  *(undefined8 *)(param_1 + 0x50) = param_4;
  *(undefined8 *)(param_1 + 0x58) = param_5;
  *(long *)(param_1 + 0x40) = param_2;
  *(ulong *)(param_1 + 0x48) = param_3;
  lVar7 = 0;
  if (param_2 == 0) {
LAB_01577c68:
    func_0x00f78af4();
  }
  else {
    uVar4 = /*Atlas.Stats.DailyChallengeManager$$GetTimeLeftUntilRefresh*/ func_0x01576034(param_2);
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    lVar7 = *(long *)(param_1 + 0x18);
    if (lVar7 == 0) goto LAB_01577c68;
    uVar10 = *(uint *)(lVar7 + 0x18);
    if (0 < (int)uVar10) {
      param_3 = 0;
      do {
        uVar9 = (uint)param_3;
        if (uVar10 <= uVar9) goto LAB_01577c6c;
        if (*(long *)(lVar7 + (long)(int)uVar9 * 8 + 0x20) == 0) goto LAB_01577c68;
        Atlas_UI_DailyChallengeElementBehaviour__Init();
        param_3 = (ulong)(uVar9 + 1);
        uVar10 = *(uint *)(lVar7 + 0x18);
      } while ((int)(uVar9 + 1) < (int)uVar10);
    }
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_01577c68;
    iVar3 = /*Atlas.Stats.DailyChallengeManager$$AreChallengesValid*/ func_0x01574ecc();
    if (iVar3 == 0) {
      lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(param_1,0);
      if (lVar5 != 0) {
code_r0x0322ef1c:
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000003ebf4c0)(lVar5,0);
        return;
      }
      goto LAB_01577c68;
    }
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_01577c68;
    iVar3 = /*Atlas.Stats.DailyChallengeManager$$AreAllChallengesComplete*/ func_0x01574d48();
    lVar5 = param_1;
    if ((iVar3 == 0) || ((param_6 & 1) != 0)) goto code_r0x01577c78;
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_01577c68;
    param_6 = 0;
    lVar5 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x48),0);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0xf0) == 0)) goto LAB_01577c68;
    if (*(int *)(*(long *)(lVar5 + 0xf0) + 0x18) < 1) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 == 0) goto LAB_01577c68;
    if (*(int *)(lVar5 + 0x18) != 0) {
      if ((*(long *)(lVar5 + 0x20) != 0) &&
         (lVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar5 + 0x20),0), lVar5 != 0)) {
        unaff_x30 = (undefined *)0x1577bb0;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
        unaff_x19 = param_1;
        unaff_x20 = param_6;
        unaff_x21 = lVar7;
        unaff_x22 = param_3;
        unaff_x29 = puVar1;
        goto code_r0x0322ef1c;
      }
      goto LAB_01577c68;
    }
  }
LAB_01577c6c:
  unaff_x22 = param_3;
  unaff_x21 = lVar7;
  uVar4 = func_0x00f78b24();
  unaff_x30 = &Atlas_UI_DailyChallengesWidgetBehaviour__SetData;
  lVar5 = func_0x00f78ac0(uVar4,0);
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
  unaff_x19 = param_1;
  unaff_x20 = param_6;
  unaff_x23 = param_5;
  unaff_x24 = param_4;
  unaff_x29 = puVar1;
code_r0x01577c78:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb507b & 1) == 0) {
    func_0x00f78a20(0x3d3d8a0);
    func_0x00f78a20(0x3d3d8a8);
    bRam0000000003eb507b = 1;
  }
  /*Atlas.UI.DailyChallengesWidgetBehaviour$$SetRefreshTime*/ func_0x0157804c(lVar5);
  lVar7 = *(long *)(lVar5 + 0x48);
  if (lVar7 != 0) {
    lVar11 = 0;
    lVar12 = 0x20;
    while ((lVar7 = Atlas_Save_SaveManager__get_SaveData(lVar7,0), lVar7 != 0 &&
           (*(long *)(lVar7 + 0xf0) != 0))) {
      uVar10 = (uint)lVar11;
      if (*(int *)(*(long *)(lVar7 + 0xf0) + 0x18) <= (int)uVar10) {
        return;
      }
      lVar7 = *(long *)(lVar5 + 0x18);
      if (lVar7 == 0) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) {
        uVar4 = func_0x00f78b24();
        lVar7 = func_0x00f78ac0(uVar4,0);
        *(undefined8 *)(lVar7 + 0x40) = 0;
        return;
      }
      if (*(long *)(lVar5 + 0x48) == 0) break;
      lVar8 = *(long *)(lVar7 + lVar11 * 8 + 0x20);
      lVar7 = Atlas_Save_SaveManager__get_SaveData(*(long *)(lVar5 + 0x48),0);
      if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0xf0), lVar7 == 0)) break;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (lVar8 == 0) break;
      puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x10) + lVar12);
      uVar6 = *(undefined8 *)(lVar5 + 0x50);
      uVar4 = *(undefined8 *)(lVar5 + 0x40);
      uVar13 = *puVar2;
      uVar15 = puVar2[3];
      uVar14 = puVar2[2];
      *(undefined8 *)((long)register0x00000008 + -0x68) = puVar2[1];
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0x58) = uVar15;
      *(undefined8 *)((long)register0x00000008 + -0x60) = uVar14;
      uVar13 = puVar2[4];
      *(undefined8 *)((long)register0x00000008 + -0x48) = puVar2[5];
      *(undefined8 *)((long)register0x00000008 + -0x50) = uVar13;
      Atlas_UI_DailyChallengeElementBehaviour__Set
                (lVar8,(undefined1 *)((long)register0x00000008 + -0x70),uVar4,uVar6);
      lVar7 = *(long *)(lVar5 + 0x48);
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + 0x30;
      if (lVar7 == 0) break;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1577c78 | Atlas.UI.DailyChallengesWidgetBehaviour.SetData
// ============================================================

void Atlas_UI_DailyChallengesWidgetBehaviour__SetData
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb507b & 1) == 0) {
    func_0x00f78a20(0x3d3d8a0);
    func_0x00f78a20(0x3d3d8a8);
    bRam0000000003eb507b = 1;
  }
  /*Atlas.UI.DailyChallengesWidgetBehaviour$$SetRefreshTime*/ func_0x0157804c(param_1);
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    lVar6 = 0;
    lVar7 = 0x20;
    while ((lVar2 = Atlas_Save_SaveManager__get_SaveData(lVar2,0), lVar2 != 0 &&
           (*(long *)(lVar2 + 0xf0) != 0))) {
      uVar5 = (uint)lVar6;
      if (*(int *)(*(long *)(lVar2 + 0xf0) + 0x18) <= (int)uVar5) {
        return;
      }
      lVar2 = *(long *)(param_1 + 0x18);
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar5) {
        uVar3 = func_0x00f78b24();
        lVar2 = func_0x00f78ac0(uVar3,0);
        *(undefined8 *)(lVar2 + 0x40) = 0;
        return;
      }
      if (*(long *)(param_1 + 0x48) == 0) break;
      lVar4 = *(long *)(lVar2 + lVar6 * 8 + 0x20);
      lVar2 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x48),0);
      if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0xf0), lVar2 == 0)) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar5) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (lVar4 == 0) break;
      puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x10) + lVar7);
      uStack_68 = puVar1[1];
      uStack_70 = *puVar1;
      uStack_58 = puVar1[3];
      uStack_60 = puVar1[2];
      uStack_48 = puVar1[5];
      uStack_50 = puVar1[4];
      Atlas_UI_DailyChallengeElementBehaviour__Set
                (lVar4,&uStack_70,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50),
                 param_5,param_2);
      lVar2 = *(long *)(param_1 + 0x48);
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x30;
      if (lVar2 == 0) break;
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1577db4 | Atlas.UI.DailyChallengesWidgetBehaviour.DeInit
// ============================================================

void Atlas_UI_DailyChallengesWidgetBehaviour__DeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// ============================================================
// RVA: 0x1577dbc | Atlas.UI.DailyChallengesWidgetBehaviour.StartAnimations
// ============================================================

/* WARNING: Possible PIC construction at 0x01578384: Changing call to branch */

void Atlas_UI_DailyChallengesWidgetBehaviour__StartAnimations(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long *plVar9;
  uint uVar10;
  ulong unaff_x21;
  ulong uVar11;
  ulong unaff_x22;
  ulong uVar12;
  long lVar13;
  undefined1 *unaff_x29;
  undefined1 *puVar14;
  undefined *unaff_x30;
  undefined *puVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  ulong unaff_d8;
  ulong uVar20;
  undefined8 unaff_d9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5079 & 1) == 0) {
    func_0x00f78a20(0x3d54058);
    func_0x00f78a20(0x3d3d8a0);
    func_0x00f78a20(0x3d3d8a8);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6f0);
    bRam0000000003eb5079 = 1;
  }
  lVar4 = param_1;
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar2 = /*Atlas.Stats.DailyChallengeManager$$AnyChallengesCompletedThisSession*/ func_0x01575d48();
    if (iVar2 == 0) goto code_r0x01577fa4;
    lVar3 = *(long *)(param_1 + 0x48);
    if (lVar3 != 0) {
      uVar12 = 0;
      lVar8 = 0;
      lVar13 = 0x20;
      uVar20 = 0x3f000000;
      while ((lVar3 = Atlas_Save_SaveManager__get_SaveData(lVar3,0), lVar3 != 0 &&
             (*(long *)(lVar3 + 0xf0) != 0))) {
        if ((long)*(int *)(*(long *)(lVar3 + 0xf0) + 0x18) <= (long)uVar12) {
          uVar5 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar5,param_1,uRam0000000003d54058,0);
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0xe8) != '\0')) {
            *(undefined8 *)(lVar8 + 0x80) = uVar5;
          }
          return;
        }
        if (*(long *)(param_1 + 0x48) == 0) break;
        uVar11 = *(ulong *)(param_1 + 0x40);
        lVar3 = Atlas_Save_SaveManager__get_SaveData(*(long *)(param_1 + 0x48),0);
        if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0xf0), lVar3 == 0)) break;
        if (*(uint *)(lVar3 + 0x18) <= uVar12) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (uVar11 == 0) break;
        puVar6 = (undefined8 *)(*(long *)(lVar3 + 0x10) + lVar13);
        uStack_78 = puVar6[1];
        uStack_80 = *puVar6;
        uStack_68 = puVar6[3];
        uStack_70 = puVar6[2];
        uStack_58 = puVar6[5];
        uStack_60 = puVar6[4];
        iVar2 = /*Atlas.Stats.DailyChallengeManager$$WasCompeltedThisSession*/ func_0x01573e3c(uVar11,&uStack_80);
        if (iVar2 != 0) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 == 0) break;
          if (*(uint *)(lVar3 + 0x18) <= uVar12) {
            uVar5 = func_0x00f78b24();
            unaff_x30 = &Atlas_UI_DailyChallengesWidgetBehaviour__AnimateProgressBars;
            lVar4 = func_0x00f78ac0(uVar5,0);
            register0x00000008 = (BADSPACEBASE *)&uStack_80;
            unaff_x19 = param_1;
            unaff_x20 = lVar8;
            unaff_x21 = uVar11;
            unaff_x22 = uVar12;
            unaff_x29 = puVar1;
            unaff_d8 = uVar20;
            unaff_d9 = 0x3f000000;
            goto code_r0x01577fa4;
          }
          if (*(long *)(lVar3 + uVar12 * 8 + 0x20) == 0) break;
          lVar8 = Atlas_UI_DailyChallengeElementBehaviour__AnimateComplete(uVar20);
          uVar20 = (ulong)(uint)((float)uVar20 + 0.5);
        }
        uVar12 = uVar12 + 1;
        lVar3 = *(long *)(param_1 + 0x48);
        lVar13 = lVar13 + 0x30;
        if (lVar3 == 0) break;
      }
    }
  }
  func_0x00f78af4();
code_r0x01577fa4:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb507a & 1) == 0) {
    func_0x00f78a20(0x3d3d8a0);
    bRam0000000003eb507a = 1;
  }
  lVar3 = *(long *)(lVar4 + 0x48);
  if (lVar3 != 0) {
    lVar13 = 0;
    do {
      lVar3 = Atlas_Save_SaveManager__get_SaveData(lVar3,0);
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0xf0) == 0)) break;
      if (*(int *)(*(long *)(lVar3 + 0xf0) + 0x18) <= (int)(uint)lVar13) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x18);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= (uint)lVar13) {
        uVar5 = func_0x00f78b24();
        puVar15 = &Atlas_UI_DailyChallengesWidgetBehaviour__SetRefreshTime;
        lVar3 = func_0x00f78ac0(uVar5,0);
        puVar1 = (undefined1 *)((long)register0x00000008 + -0x20);
        goto code_r0x0157804c;
      }
      if (*(long *)(lVar3 + lVar13 * 8 + 0x20) == 0) break;
      Atlas_UI_DailyChallengeElementBehaviour__AnimateProgress();
      lVar3 = *(long *)(lVar4 + 0x48);
      lVar13 = lVar13 + 1;
    } while (lVar3 != 0);
  }
  func_0x00f78af4();
  return;
code_r0x0157804c:
  puVar14 = (undefined1 *)((long)register0x00000008 + -0x10);
  register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x40);
  *(ulong *)(puVar1 + -0x30) = unaff_x22;
  *(ulong *)(puVar1 + -0x28) = unaff_x21;
  *(long *)(puVar1 + -0x20) = lVar13;
  *(long *)(puVar1 + -0x18) = lVar4;
  *(undefined1 **)(puVar1 + -0x10) = puVar14;
  *(undefined **)(puVar1 + -8) = puVar15;
  plVar9 = (long *)0x3eb5000;
  if ((bRam0000000003eb507c & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d6b3d0);
    func_0x00f78a20(0x3d6b3b8);
    func_0x00f78a20(0x3d6b3c0);
    func_0x00f78a20(0x3d6b3c8);
    bRam0000000003eb507c = 1;
  }
  *(undefined8 *)(puVar1 + -0x38) = 0;
  lVar4 = lVar3;
  if (*(long *)(lVar3 + 0x40) != 0) {
    iVar2 = /*Atlas.Stats.DailyChallengeManager$$AreCurrentChallengesFTUE*/ func_0x01574ca0();
    if (iVar2 == 0) {
      plVar9 = (long *)(lVar3 + 0x60);
      dVar17 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(plVar9,0);
      if (dVar17 <= 0.0) {
        if (*(long *)(lVar3 + 0x50) != 0) {
          plVar9 = *(long **)(lVar3 + 0x20);
          uVar5 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar3 + 0x50),/*STR('DAILY_UI_NEXT')*/ uRam0000000003d6b3c0,0);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x558))(plVar9,uVar5,*(undefined8 *)(*plVar9 + 0x560));
            if ((*(long *)(lVar3 + 0x28) != 0) &&
               (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar3 + 0x28),0), lVar3 != 0)) {
              *(undefined8 *)(puVar1 + -0x30) = *(undefined8 *)(puVar1 + -0x30);
              *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + -0x28);
              *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
              *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
              *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
              *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
              if (pcRam0000000003ebf4c0 == (code *)0x0) {
                pcRam0000000003ebf4c0 =
                     (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
              }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000003ebf4c0)(lVar3,0);
              return;
            }
          }
        }
      }
      else {
        dVar18 = (double)/*System.TimeSpan$$get_TotalHours*/ func_0x029f03a8(plVar9,0);
        dVar17 = -dVar18;
        if (dVar18 != INFINITY) {
          dVar17 = dVar18;
        }
        uVar10 = (uint)dVar17;
        unaff_x21 = (ulong)uVar10;
        if ((int)uVar10 < 1) {
          lVar13 = *(long *)(lVar3 + 0x50);
          if (lVar13 != 0) {
            plVar7 = *(long **)(lVar3 + 0x20);
            puVar6 = (undefined8 *)0x3d6b3c8;
            goto code_r0x015780dc;
          }
        }
        else if (*(long *)(lVar3 + 0x50) != 0) {
          /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(lVar3 + 0x50),/*STR('DAILY_UI_REFRESH_TEXT')*/ uRam0000000003d6b3d0,puVar1 + -0x38,0);
          plVar7 = *(long **)(lVar3 + 0x20);
          plVar9 = *(long **)(puVar1 + -0x38);
          *(uint *)(puVar1 + -0x3c) = uVar10 + 1;
          uVar5 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,puVar1 + -0x3c);
          uVar5 = /*System.String$$Format*/ func_0x029bc688(plVar9,uVar5,0);
          lVar4 = 0;
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x558))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x560));
            return;
          }
        }
      }
    }
    else {
      lVar13 = *(long *)(lVar3 + 0x50);
      if (lVar13 != 0) {
        plVar7 = *(long **)(lVar3 + 0x20);
        puVar6 = (undefined8 *)0x3d6b3b8;
code_r0x015780dc:
        uVar5 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar13,*puVar6,0);
        lVar4 = 0;
        if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01578110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x558))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x560));
          return;
        }
      }
    }
  }
  lVar3 = func_0x00f78af4();
  *(undefined8 *)(puVar1 + -0x80) = unaff_d9;
  *(ulong *)(puVar1 + -0x78) = unaff_d8;
  *(ulong *)(puVar1 + -0x70) = unaff_x22;
  *(ulong *)(puVar1 + -0x68) = unaff_x21;
  *(long **)(puVar1 + -0x60) = plVar9;
  *(long *)(puVar1 + -0x58) = lVar4;
  *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -0x48) = &Atlas_UI_DailyChallengesWidgetBehaviour__Update;
  if ((bRam0000000003eb507d & 1) == 0) {
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb507d = 1;
  }
  *(undefined8 *)(puVar1 + -0x88) = 0;
  fVar19 = *(float *)(lVar3 + 0x68);
  unaff_d8 = (ulong)(uint)fVar19;
  fVar16 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  fVar19 = fVar19 + fVar16;
  *(float *)(lVar3 + 0x68) = fVar19;
  fVar16 = -fVar19;
  if (fVar19 != INFINITY) {
    fVar16 = fVar19;
  }
  /*System.TimeSpan$$.ctor*/ func_0x029f02c8(puVar1 + -0x88,0,0,0,(int)fVar16,0);
  dVar18 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(puVar1 + -0x88,0);
  dVar17 = -dVar18;
  if (dVar18 != INFINITY) {
    dVar17 = dVar18;
  }
  if (*(int *)(lVar3 + 0x6c) == (int)dVar17) {
    return;
  }
  dVar18 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(puVar1 + -0x88,0);
  dVar17 = -dVar18;
  if (dVar18 != INFINITY) {
    dVar17 = dVar18;
  }
  *(int *)(lVar3 + 0x6c) = (int)dVar17;
  lVar13 = *(long *)(lVar3 + 0x60);
  unaff_x21 = *(ulong *)(lVar3 + 0x70);
  if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*System.TimeSpan$$op_Subtraction*/ func_0x029f11bc(lVar13,unaff_x21,0);
  *(undefined8 *)(lVar3 + 0x60) = uVar5;
  puVar15 = &UNK_01578388;
  puVar1 = puVar1 + -0x90;
  lVar4 = lVar3;
  goto code_r0x0157804c;
}



// ============================================================
// RVA: 0x1577fa4 | Atlas.UI.DailyChallengesWidgetBehaviour.AnimateProgressBars
// ============================================================

/* WARNING: Possible PIC construction at 0x01578384: Changing call to branch */

void Atlas_UI_DailyChallengesWidgetBehaviour__AnimateProgressBars(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  ulong unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar11;
  undefined *puVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  ulong unaff_d8;
  undefined8 unaff_d9;
  
  if ((bRam0000000003eb507a & 1) == 0) {
    func_0x00f78a20(0x3d3d8a0);
    bRam0000000003eb507a = 1;
  }
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    lVar8 = 0;
    do {
      lVar3 = Atlas_Save_SaveManager__get_SaveData(lVar3,0);
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0xf0) == 0)) break;
      if (*(int *)(*(long *)(lVar3 + 0xf0) + 0x18) <= (int)(uint)lVar8) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= (uint)lVar8) {
        uVar4 = func_0x00f78b24();
        puVar12 = &Atlas_UI_DailyChallengesWidgetBehaviour__SetRefreshTime;
        lVar3 = func_0x00f78ac0(uVar4,0);
        puVar1 = &stack0xffffffffffffffe0;
        goto code_r0x0157804c;
      }
      if (*(long *)(lVar3 + lVar8 * 8 + 0x20) == 0) break;
      Atlas_UI_DailyChallengeElementBehaviour__AnimateProgress();
      lVar3 = *(long *)(param_1 + 0x48);
      lVar8 = lVar8 + 1;
    } while (lVar3 != 0);
  }
  func_0x00f78af4();
  return;
code_r0x0157804c:
  puVar11 = (undefined1 *)((long)register0x00000008 + -0x10);
  register0x00000008 = (BADSPACEBASE *)(puVar1 + -0x40);
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(ulong *)(puVar1 + -0x28) = unaff_x21;
  *(long *)(puVar1 + -0x20) = lVar8;
  *(long *)(puVar1 + -0x18) = param_1;
  *(undefined1 **)(puVar1 + -0x10) = puVar11;
  *(undefined **)(puVar1 + -8) = puVar12;
  plVar9 = (long *)0x3eb5000;
  if ((bRam0000000003eb507c & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d6b3d0);
    func_0x00f78a20(0x3d6b3b8);
    func_0x00f78a20(0x3d6b3c0);
    func_0x00f78a20(0x3d6b3c8);
    bRam0000000003eb507c = 1;
  }
  *(undefined8 *)(puVar1 + -0x38) = 0;
  lVar8 = lVar3;
  if (*(long *)(lVar3 + 0x40) != 0) {
    iVar2 = /*Atlas.Stats.DailyChallengeManager$$AreCurrentChallengesFTUE*/ func_0x01574ca0();
    if (iVar2 == 0) {
      plVar9 = (long *)(lVar3 + 0x60);
      dVar14 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(plVar9,0);
      if (dVar14 <= 0.0) {
        if (*(long *)(lVar3 + 0x50) != 0) {
          plVar9 = *(long **)(lVar3 + 0x20);
          uVar4 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar3 + 0x50),/*STR('DAILY_UI_NEXT')*/ uRam0000000003d6b3c0,0);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x558))(plVar9,uVar4,*(undefined8 *)(*plVar9 + 0x560));
            if ((*(long *)(lVar3 + 0x28) != 0) &&
               (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar3 + 0x28),0), lVar3 != 0)) {
              *(undefined8 *)(puVar1 + -0x30) = *(undefined8 *)(puVar1 + -0x30);
              *(undefined8 *)(puVar1 + -0x28) = *(undefined8 *)(puVar1 + -0x28);
              *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
              *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
              *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
              *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
              if (pcRam0000000003ebf4c0 == (code *)0x0) {
                pcRam0000000003ebf4c0 =
                     (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
              }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000003ebf4c0)(lVar3,0);
              return;
            }
          }
        }
      }
      else {
        dVar15 = (double)/*System.TimeSpan$$get_TotalHours*/ func_0x029f03a8(plVar9,0);
        dVar14 = -dVar15;
        if (dVar15 != INFINITY) {
          dVar14 = dVar15;
        }
        uVar10 = (uint)dVar14;
        unaff_x21 = (ulong)uVar10;
        if ((int)uVar10 < 1) {
          lVar5 = *(long *)(lVar3 + 0x50);
          if (lVar5 != 0) {
            plVar7 = *(long **)(lVar3 + 0x20);
            puVar6 = (undefined8 *)0x3d6b3c8;
            goto code_r0x015780dc;
          }
        }
        else if (*(long *)(lVar3 + 0x50) != 0) {
          /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(lVar3 + 0x50),/*STR('DAILY_UI_REFRESH_TEXT')*/ uRam0000000003d6b3d0,puVar1 + -0x38,0);
          plVar7 = *(long **)(lVar3 + 0x20);
          plVar9 = *(long **)(puVar1 + -0x38);
          *(uint *)(puVar1 + -0x3c) = uVar10 + 1;
          uVar4 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,puVar1 + -0x3c);
          uVar4 = /*System.String$$Format*/ func_0x029bc688(plVar9,uVar4,0);
          lVar8 = 0;
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x558))(plVar7,uVar4,*(undefined8 *)(*plVar7 + 0x560));
            return;
          }
        }
      }
    }
    else {
      lVar5 = *(long *)(lVar3 + 0x50);
      if (lVar5 != 0) {
        plVar7 = *(long **)(lVar3 + 0x20);
        puVar6 = (undefined8 *)0x3d6b3b8;
code_r0x015780dc:
        uVar4 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar5,*puVar6,0);
        lVar8 = 0;
        if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01578110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x558))(plVar7,uVar4,*(undefined8 *)(*plVar7 + 0x560));
          return;
        }
      }
    }
  }
  lVar3 = func_0x00f78af4();
  *(undefined8 *)(puVar1 + -0x80) = unaff_d9;
  *(ulong *)(puVar1 + -0x78) = unaff_d8;
  *(undefined8 *)(puVar1 + -0x70) = unaff_x22;
  *(ulong *)(puVar1 + -0x68) = unaff_x21;
  *(long **)(puVar1 + -0x60) = plVar9;
  *(long *)(puVar1 + -0x58) = lVar8;
  *(undefined1 **)(puVar1 + -0x50) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -0x48) = &Atlas_UI_DailyChallengesWidgetBehaviour__Update;
  if ((bRam0000000003eb507d & 1) == 0) {
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb507d = 1;
  }
  *(undefined8 *)(puVar1 + -0x88) = 0;
  fVar16 = *(float *)(lVar3 + 0x68);
  unaff_d8 = (ulong)(uint)fVar16;
  fVar13 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  fVar16 = fVar16 + fVar13;
  *(float *)(lVar3 + 0x68) = fVar16;
  fVar13 = -fVar16;
  if (fVar16 != INFINITY) {
    fVar13 = fVar16;
  }
  /*System.TimeSpan$$.ctor*/ func_0x029f02c8(puVar1 + -0x88,0,0,0,(int)fVar13,0);
  dVar15 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(puVar1 + -0x88,0);
  dVar14 = -dVar15;
  if (dVar15 != INFINITY) {
    dVar14 = dVar15;
  }
  if (*(int *)(lVar3 + 0x6c) == (int)dVar14) {
    return;
  }
  dVar15 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(puVar1 + -0x88,0);
  dVar14 = -dVar15;
  if (dVar15 != INFINITY) {
    dVar14 = dVar15;
  }
  *(int *)(lVar3 + 0x6c) = (int)dVar14;
  lVar8 = *(long *)(lVar3 + 0x60);
  unaff_x21 = *(ulong *)(lVar3 + 0x70);
  if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*System.TimeSpan$$op_Subtraction*/ func_0x029f11bc(lVar8,unaff_x21,0);
  *(undefined8 *)(lVar3 + 0x60) = uVar4;
  puVar12 = &UNK_01578388;
  puVar1 = puVar1 + -0x90;
  param_1 = lVar3;
  goto code_r0x0157804c;
}



// ============================================================
// RVA: 0x157804c | Atlas.UI.DailyChallengesWidgetBehaviour.SetRefreshTime
// ============================================================

void Atlas_UI_DailyChallengesWidgetBehaviour__SetRefreshTime(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined8 uStack_88;
  int iStack_3c;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb507c & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d6b3d0);
    func_0x00f78a20(0x3d6b3b8);
    func_0x00f78a20(0x3d6b3c0);
    func_0x00f78a20(0x3d6b3c8);
    bRam0000000003eb507c = 1;
  }
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_01578260;
  iVar1 = /*Atlas.Stats.DailyChallengeManager$$AreCurrentChallengesFTUE*/ func_0x01574ca0();
  if (iVar1 == 0) {
    dVar8 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(param_1 + 0x60,0);
    if (dVar8 <= 0.0) {
      if (*(long *)(param_1 + 0x50) != 0) {
        plVar5 = *(long **)(param_1 + 0x20);
        uVar3 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(param_1 + 0x50),/*STR('DAILY_UI_NEXT')*/ uRam0000000003d6b3c0,0);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x558))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x560));
          if ((*(long *)(param_1 + 0x28) != 0) &&
             (lVar2 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x28),0), lVar2 != 0)) {
            if (pcRam0000000003ebf4c0 == (code *)0x0) {
              pcRam0000000003ebf4c0 =
                   (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
            }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003ebf4c0)(lVar2,0);
            return;
          }
        }
      }
      goto LAB_01578260;
    }
    dVar9 = (double)/*System.TimeSpan$$get_TotalHours*/ func_0x029f03a8(param_1 + 0x60,0);
    dVar8 = -dVar9;
    if (dVar9 != INFINITY) {
      dVar8 = dVar9;
    }
    if (0 < (int)dVar8) {
      if (*(long *)(param_1 + 0x50) != 0) {
        /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(param_1 + 0x50),/*STR('DAILY_UI_REFRESH_TEXT')*/ uRam0000000003d6b3d0,&uStack_38,0);
        uVar3 = uStack_38;
        plVar5 = *(long **)(param_1 + 0x20);
        iStack_3c = (int)dVar8 + 1;
        uVar6 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_3c);
        uVar3 = /*System.String$$Format*/ func_0x029bc688(uVar3,uVar6,0);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x558))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x560));
          return;
        }
      }
      goto LAB_01578260;
    }
    lVar2 = *(long *)(param_1 + 0x50);
    if (lVar2 == 0) goto LAB_01578260;
    plVar5 = *(long **)(param_1 + 0x20);
    puVar4 = (undefined8 *)0x3d6b3c8;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x50);
    if (lVar2 == 0) goto LAB_01578260;
    plVar5 = *(long **)(param_1 + 0x20);
    puVar4 = (undefined8 *)0x3d6b3b8;
  }
  uVar3 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar2,*puVar4,0);
  if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01578110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x558))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x560));
    return;
  }
LAB_01578260:
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb507d & 1) == 0) {
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb507d = 1;
  }
  uStack_88 = 0;
  fVar10 = *(float *)(lVar2 + 0x68);
  fVar7 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  fVar10 = fVar10 + fVar7;
  *(float *)(lVar2 + 0x68) = fVar10;
  fVar7 = -fVar10;
  if (fVar10 != INFINITY) {
    fVar7 = fVar10;
  }
  /*System.TimeSpan$$.ctor*/ func_0x029f02c8(&uStack_88,0,0,0,(int)fVar7,0);
  dVar9 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&uStack_88,0);
  dVar8 = -dVar9;
  if (dVar9 != INFINITY) {
    dVar8 = dVar9;
  }
  if (*(int *)(lVar2 + 0x6c) != (int)dVar8) {
    dVar9 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&uStack_88,0);
    dVar8 = -dVar9;
    if (dVar9 != INFINITY) {
      dVar8 = dVar9;
    }
    *(int *)(lVar2 + 0x6c) = (int)dVar8;
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    uVar6 = *(undefined8 *)(lVar2 + 0x70);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = /*System.TimeSpan$$op_Subtraction*/ func_0x029f11bc(uVar3,uVar6,0);
    *(undefined8 *)(lVar2 + 0x60) = uVar3;
    Atlas_UI_DailyChallengesWidgetBehaviour__SetRefreshTime(lVar2);
  }
  return;
}



// ============================================================
// RVA: 0x1578264 | Atlas.UI.DailyChallengesWidgetBehaviour.Update
// ============================================================

void Atlas_UI_DailyChallengesWidgetBehaviour__Update(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb507d & 1) == 0) {
    func_0x00f78a20(0x3d25238);
    bRam0000000003eb507d = 1;
  }
  uStack_48 = 0;
  fVar6 = *(float *)(param_1 + 0x68);
  fVar3 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
  fVar6 = fVar6 + fVar3;
  *(float *)(param_1 + 0x68) = fVar6;
  fVar3 = -fVar6;
  if (fVar6 != INFINITY) {
    fVar3 = fVar6;
  }
  /*System.TimeSpan$$.ctor*/ func_0x029f02c8(&uStack_48,0,0,0,(int)fVar3,0);
  dVar4 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&uStack_48,0);
  dVar5 = -dVar4;
  if (dVar4 != INFINITY) {
    dVar5 = dVar4;
  }
  if (*(int *)(param_1 + 0x6c) != (int)dVar5) {
    dVar4 = (double)/*System.TimeSpan$$get_TotalSeconds*/ func_0x029f03d8(&uStack_48,0);
    dVar5 = -dVar4;
    if (dVar4 != INFINITY) {
      dVar5 = dVar4;
    }
    *(int *)(param_1 + 0x6c) = (int)dVar5;
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    if (((*(ushort *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.TimeSpan_TypeInfo*/ lRam0000000003d25238 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*System.TimeSpan$$op_Subtraction*/ func_0x029f11bc(uVar1,uVar2,0);
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    Atlas_UI_DailyChallengesWidgetBehaviour__SetRefreshTime(param_1);
  }
  return;
}



// ============================================================
// RVA: 0x15783a0 | Atlas.UI.DailyChallengesWidgetBehaviour..ctor
// ============================================================

void Atlas_UI_DailyChallengesWidgetBehaviour___ctor(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  if ((bRam0000000003eb507e & 1) == 0) {
    func_0x00f78a20(0x3d1ee88);
    bRam0000000003eb507e = 1;
  }
  uVar1 = func_0x00f78a34(/*Atlas.UI.DailyChallengeElementBehaviour[]_TypeInfo*/ uRam0000000003d1ee88,3);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uStack_38 = 0;
  /*System.TimeSpan$$.ctor*/ func_0x029f02c8(&uStack_38,0,0,0,1,0);
  *(undefined8 *)(param_1 + 0x70) = uStack_38;
  /*UnityEngine.MonoBehaviour$$.ctor*/ func_0x03248424(param_1,0);
  return;
}



