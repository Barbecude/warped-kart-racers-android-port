// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.FTUE.BaseLayerSequenceManager

// ============================================================
// RVA: 0x15364fc | Atlas.Gameplay.FTUE.BaseLayerSequenceManager.add_OnStartPlaySequence
// ============================================================

ulong Atlas_Gameplay_FTUE_BaseLayerSequenceManager__add_OnStartPlaySequence
                (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4ec9 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ec9 = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x40);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x40),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4eca & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4eca = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x40);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4ecb & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ecb = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x48);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4ecc & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ecc = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x48);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(byte *)(lVar4 + 0x38);
}



// ============================================================
// RVA: 0x153659c | Atlas.Gameplay.FTUE.BaseLayerSequenceManager.remove_OnStartPlaySequence
// ============================================================

ulong Atlas_Gameplay_FTUE_BaseLayerSequenceManager__remove_OnStartPlaySequence
                (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4eca & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4eca = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x40);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x40),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4ecb & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ecb = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x48);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4ecc & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ecc = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x48);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(byte *)(lVar4 + 0x38);
}



// ============================================================
// RVA: 0x153663c | Atlas.Gameplay.FTUE.BaseLayerSequenceManager.add_OnResetSequenceStopped
// ============================================================

ulong Atlas_Gameplay_FTUE_BaseLayerSequenceManager__add_OnResetSequenceStopped
                (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4ecb & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ecb = 1;
  }
  uVar6 = *(ulong *)(param_1 + 0x48);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x48),plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb4ecc & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ecc = 1;
  }
  puVar5 = (ulong *)(auVar7._0_8_ + 0x48);
  uVar6 = *puVar5;
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,auVar7._8_8_,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44(puVar5,plVar2,uVar6);
    bVar1 = uVar6 == uVar3;
    uVar6 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(byte *)(lVar4 + 0x38);
}



// ============================================================
// RVA: 0x15366dc | Atlas.Gameplay.FTUE.BaseLayerSequenceManager.remove_OnResetSequenceStopped
// ============================================================

ulong Atlas_Gameplay_FTUE_BaseLayerSequenceManager__remove_OnResetSequenceStopped
                (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000003eb4ecc & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb4ecc = 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x48);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    uVar3 = func_0x00ff0f44((ulong *)(param_1 + 0x48),plVar2,uVar5);
    bVar1 = uVar5 == uVar3;
    uVar5 = uVar3;
    if (bVar1) {
      return uVar3;
    }
  }
  lVar4 = func_0x00f78e5c(plVar2);
  return (ulong)*(byte *)(lVar4 + 0x38);
}



// ============================================================
// RVA: 0x153677c | Atlas.Gameplay.FTUE.BaseLayerSequenceManager.get_IsRequestingToDisableInputs
// ============================================================

undefined1
Atlas_Gameplay_FTUE_BaseLayerSequenceManager__get_IsRequestingToDisableInputs(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x1536784 | Atlas.Gameplay.FTUE.BaseLayerSequenceManager.Init
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerSequenceManager__Init(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x39) = param_2;
  return;
}



// ============================================================
// RVA: 0x153678c | Atlas.Gameplay.FTUE.BaseLayerSequenceManager.DeInit
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerSequenceManager__DeInit(void)

{
  return;
}



// ============================================================
// RVA: 0x1536790 | Atlas.Gameplay.FTUE.BaseLayerSequenceManager.Update
// ============================================================

/* WARNING: Possible PIC construction at 0x014c0828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c082c) */
/* WARNING: Removing unreachable block (ram,0x014c0858) */
/* WARNING: Removing unreachable block (ram,0x014c0888) */
/* WARNING: Removing unreachable block (ram,0x014c089c) */
/* WARNING: Removing unreachable block (ram,0x014c08a4) */
/* WARNING: Removing unreachable block (ram,0x014c08a8) */
/* WARNING: Removing unreachable block (ram,0x014c08b4) */
/* WARNING: Removing unreachable block (ram,0x014c08c0) */
/* WARNING: Removing unreachable block (ram,0x014c08c8) */
/* WARNING: Removing unreachable block (ram,0x014c08d0) */
/* WARNING: Removing unreachable block (ram,0x014c0914) */
/* WARNING: Removing unreachable block (ram,0x014c091c) */
/* WARNING: Removing unreachable block (ram,0x014c0920) */
/* WARNING: Removing unreachable block (ram,0x014c0954) */
/* WARNING: Removing unreachable block (ram,0x014c0990) */
/* WARNING: Removing unreachable block (ram,0x014c0998) */
/* WARNING: Removing unreachable block (ram,0x014c099c) */
/* WARNING: Removing unreachable block (ram,0x014c09d0) */
/* WARNING: Removing unreachable block (ram,0x014c09d8) */
/* WARNING: Removing unreachable block (ram,0x014c09e0) */
/* WARNING: Removing unreachable block (ram,0x014c09e8) */
/* WARNING: Removing unreachable block (ram,0x014c0a18) */
/* WARNING: Removing unreachable block (ram,0x014c09f0) */
/* WARNING: Removing unreachable block (ram,0x014c08b8) */
/* WARNING: Removing unreachable block (ram,0x014c08ac) */
/* WARNING: Removing unreachable block (ram,0x014c0a00) */
/* WARNING: Removing unreachable block (ram,0x014c0830) */

void Atlas_Gameplay_FTUE_BaseLayerSequenceManager__Update(float param_1,long *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  int extraout_w1;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *unaff_x19;
  undefined8 unaff_x20;
  long lVar17;
  undefined8 uVar18;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar19;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *puVar20;
  undefined *unaff_x30;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  
  if ((bRam0000000003eb4ecd & 1) == 0) {
    func_0x00f78a20(0x3d3cd48);
    bRam0000000003eb4ecd = 1;
  }
  if ((*(float *)((long)param_2 + 0x24) <= 0.0) ||
     (param_1 = *(float *)((long)param_2 + 0x24) - param_1,
     *(float *)((long)param_2 + 0x24) = param_1, 0.0 < param_1)) {
    return;
  }
  if (param_2[2] == 0) {
    unaff_x30 = &Atlas_Gameplay_FTUE_BaseLayerSequenceManager__PlayNextSequence;
    plVar11 = (long *)func_0x00f78af4();
    puVar6 = &stack0xffffffffffffffd0;
    unaff_x19 = param_2;
    unaff_x20 = 0x3eb4000;
    unaff_x29 = &stack0xfffffffffffffff0;
code_r0x01536834:
    register0x00000008 = (BADSPACEBASE *)(puVar6 + -0x30);
    *(undefined8 *)(puVar6 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar6 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar6 + -0x20) = unaff_x20;
    *(long **)(puVar6 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar6 + -0x10) = unaff_x29;
    *(undefined **)(puVar6 + -8) = unaff_x30;
    unaff_x29 = puVar6 + -0x10;
    if ((bRam0000000003eb4ed0 & 1) == 0) {
      func_0x00f78a20(0x3d3cd48);
      func_0x00f78a20(0x3d3cd50);
      bRam0000000003eb4ed0 = 1;
    }
    lVar17 = plVar11[2];
    if (lVar17 != 0) {
      uVar1 = *(uint *)(plVar11 + 5);
      if ((int)uVar1 < (int)*(uint *)(lVar17 + 0x18)) {
        if (*(uint *)(lVar17 + 0x18) <= uVar1) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar17 = *(long *)(lVar17 + 0x10) + (long)(int)uVar1 * 0xc;
        /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$PlaySequence*/ func_0x01536cd0(plVar11,*(undefined8 *)(lVar17 + 0x20),*(undefined4 *)(lVar17 + 0x28));
        *(int *)(plVar11 + 5) = (int)plVar11[5] + 1;
      }
      return;
    }
    unaff_x30 = &Atlas_Gameplay_FTUE_BaseLayerSequenceManager__PlayResetSequence;
    param_2 = (long *)func_0x00f78af4();
    unaff_x20 = 0;
    unaff_x19 = plVar11;
  }
  else {
    puVar6 = (undefined1 *)register0x00000008;
    plVar11 = param_2;
    if ((int)param_2[5] < *(int *)(param_2[2] + 0x18)) goto code_r0x01536834;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4ed1 & 1) == 0) {
    func_0x00f78a20(0x3d2a280);
    func_0x00f78a20(0x3d1b540);
    func_0x00f78a20(0x3d52808);
    func_0x00f78a20(0x3d21b50);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ed1 = 1;
  }
  switch((int)param_2[3]) {
  case 1:
    if ((param_2[6] != 0) &&
       (lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_2[6],0),
       lVar17 != 0)) {
      puVar9 = (undefined8 *)(lVar17 + 0x28);
code_r0x01536ab8:
      if (param_2[6] != 0) {
        uVar18 = *puVar9;
        lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_2[6],0);
        if ((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) {
          /*UnityEngine.Playables.PlayableDirector$$set_extrapolationMode*/ func_0x0328223c(*(long *)(lVar17 + 0x18),2,0);
          if ((param_2[6] != 0) &&
             (lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_2[6],0),
             lVar17 != 0)) {
            lVar17 = *(long *)(lVar17 + 0x18);
            uVar12 = func_0x00f78aec(/*System.Action<PlayableDirector>_TypeInfo*/ uRam0000000003d1b540);
            /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar12,param_2,uRam0000000003d52808,uRam0000000003d2a280);
            if (lVar17 != 0) {
              /*UnityEngine.Playables.PlayableDirector$$add_stopped*/ func_0x0328339c(lVar17,uVar12,0);
              if ((param_2[6] != 0) &&
                 (lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                                     (param_2[6],0), lVar17 != 0)) {
                auVar22._8_8_ = uVar18;
                auVar22._0_8_ = *(undefined8 *)(lVar17 + 0x18);
                lVar13 = 1;
                puVar6 = *(undefined1 **)((long)register0x00000008 + -0x10);
                puVar20 = *(undefined **)((long)register0x00000008 + -8);
                plVar8 = *(long **)((long)register0x00000008 + -0x20);
                lVar17 = *(long *)((long)register0x00000008 + -0x18);
                uVar18 = *(undefined8 *)((long)register0x00000008 + -0x30);
                plVar11 = *(long **)((long)register0x00000008 + -0x28);
                uVar19 = *(undefined8 *)((long)register0x00000008 + -0x40);
                uVar12 = *(undefined8 *)((long)register0x00000008 + -0x38);
code_r0x014c07d0:
                lVar14 = auVar22._0_8_;
                puVar4 = (undefined1 *)((long)register0x00000008 + -0x20);
                *(long **)((long)register0x00000008 + -0x20) = plVar8;
                *(long *)((long)register0x00000008 + -0x18) = lVar17;
                *(undefined1 **)((long)register0x00000008 + -0x10) = puVar6;
                *(undefined **)((long)register0x00000008 + -8) = puVar20;
                if (lVar14 == 0) {
                  auVar23 = func_0x00f78af4(0,auVar22._8_8_);
                  auVar21._8_8_ = lVar13;
                  auVar21._0_8_ = auVar23._0_8_;
                  puVar4 = (undefined1 *)((long)register0x00000008 + -0x50);
                  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar18;
                  *(long **)((long)register0x00000008 + -0x48) = plVar11;
                  *(long **)((long)register0x00000008 + -0x40) = plVar8;
                  *(long *)((long)register0x00000008 + -0x38) = lVar17;
                  *(undefined1 **)((long)register0x00000008 + -0x30) =
                       (undefined1 *)((long)register0x00000008 + -0x10);
                  *(undefined **)((long)register0x00000008 + -0x28) =
                       &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
                  puVar6 = (undefined1 *)((long)register0x00000008 + -0x30);
                  puVar20 = &UNK_014c082c;
                }
                else {
                  /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(lVar14,auVar22._8_8_,0);
                  auVar23._8_8_ = plVar11;
                  auVar23._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x20);
                  *(undefined8 *)((long)register0x00000008 + -0x20) =
                       *(undefined8 *)((long)register0x00000008 + -0x20);
                  *(undefined8 *)((long)register0x00000008 + -0x18) =
                       *(undefined8 *)((long)register0x00000008 + -0x18);
                  *(undefined8 *)((long)register0x00000008 + -0x10) =
                       *(undefined8 *)((long)register0x00000008 + -0x10);
                  *(undefined8 *)((long)register0x00000008 + -8) =
                       *(undefined8 *)((long)register0x00000008 + -8);
                  puVar6 = (undefined1 *)((long)register0x00000008 + -0x10);
                  if ((int)lVar13 == 0) {
                    if (lVar14 != 0) goto code_r0x014c034c;
                  }
                  else if ((lVar14 != 0) && (lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar14,0), lVar17 != 0)) {
                    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar17,1,0);
code_r0x014c034c:
                    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar14,0);
                    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar14,0);
                    *(undefined8 *)((long)register0x00000008 + -0x20) =
                         *(undefined8 *)((long)register0x00000008 + -0x20);
                    *(undefined8 *)((long)register0x00000008 + -0x18) =
                         *(undefined8 *)((long)register0x00000008 + -0x18);
                    *(undefined8 *)((long)register0x00000008 + -0x10) =
                         *(undefined8 *)((long)register0x00000008 + -0x10);
                    *(undefined8 *)((long)register0x00000008 + -8) =
                         *(undefined8 *)((long)register0x00000008 + -8);
                    if (pcRam0000000003ec1b90 == (code *)0x0) {
                      pcRam0000000003ec1b90 =
                           (code *)func_0x00f789d4("UnityEngine.Playables.PlayableDirector::Play()")
                      ;
                    }
                    /* WARNING: Could not recover jumptable at 0x0328295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000003ec1b90)(lVar14);
                    return;
                  }
                  puVar20 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
                  auVar21 = func_0x00f78af4();
                  lVar13 = lVar14;
                }
                plVar11 = auVar23._8_8_;
                auVar2._8_8_ = auVar23._0_8_;
                auVar2._0_8_ = lVar13;
                lVar17 = auVar21._0_8_;
                puVar5 = puVar4 + -0x20;
                *(long *)(puVar4 + -0x20) = auVar23._0_8_;
                *(long *)(puVar4 + -0x18) = lVar13;
                *(undefined1 **)(puVar4 + -0x10) = puVar6;
                *(undefined **)(puVar4 + -8) = puVar20;
                puVar6 = puVar4 + -0x10;
                if (lVar17 == 0) {
code_r0x014c03e4:
                  puVar20 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
                  lVar17 = func_0x00f78af4();
                }
                else {
                  /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar17,0);
                  /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar17,0);
                  /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar17,0);
                  if (auVar21._8_4_ != 0) {
                    lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar17,0);
                    auVar2 = auVar21;
                    if (lVar13 == 0) goto code_r0x014c03e4;
                    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,0,0);
                  }
                  puVar6 = *(undefined1 **)(puVar4 + -0x10);
                  puVar20 = *(undefined **)(puVar4 + -8);
                  auVar2._8_8_ = *(undefined8 *)(puVar4 + -0x20);
                  auVar2._0_8_ = *(undefined8 *)(puVar4 + -0x18);
                  puVar5 = puVar4;
                }
                register0x00000008 = (BADSPACEBASE *)(puVar5 + -0x50);
                *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
                *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
                *(undefined8 *)(puVar5 + -0x40) = uVar19;
                *(undefined8 *)(puVar5 + -0x38) = uVar12;
                *(undefined8 *)(puVar5 + -0x30) = uVar18;
                *(long **)(puVar5 + -0x28) = plVar11;
                *(long *)(puVar5 + -0x20) = auVar2._8_8_;
                *(long *)(puVar5 + -0x18) = auVar2._0_8_;
                *(undefined1 **)(puVar5 + -0x10) = puVar6;
                *(undefined **)(puVar5 + -8) = puVar20;
                puVar6 = puVar5 + -0x10;
                if ((bRam0000000003eb4b15 & 1) == 0) {
                  func_0x00f78a20(0x3d1faa8);
                  func_0x00f78a20(0x3d21b60);
                  func_0x00f78a20(0x3d220f0);
                  func_0x00f78a20(0x3d1d180);
                  func_0x00f78a20(0x3d1d390);
                  func_0x00f78a20(0x3d22180);
                  func_0x00f78a20(0x3d23990);
                  func_0x00f78a20(0x3d25280);
                  bRam0000000003eb4b15 = 1;
                }
                if (lVar17 != 0) {
                  uVar18 = 0x3d23990;
                  plVar8 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar17,0);
                  if (plVar8 == (long *)0x0) {
code_r0x014c04b4:
                    plVar8 = (long *)0x0;
                  }
                  else {
                    if (*(byte *)(*plVar8 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300))
                    goto code_r0x014c04b4;
                    if (*(long *)(*(long *)(*plVar8 + 200) +
                                  (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8 + -8) !=
                        /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
                      plVar8 = (long *)0x0;
                    }
                  }
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar13 = 0;
                  iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar8,0);
                  if (iVar7 == 0) {
                    return;
                  }
                  if ((plVar8 != (long *)0x0) &&
                     (plVar8 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar8,0), plVar8 != (long *)0x0)) {
                    lVar14 = *plVar8;
                    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                    if (uVar15 != 0) {
                      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
                          puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                          goto code_r0x014c0568;
                        }
                        piVar16 = piVar16 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    lVar13 = 0;
                    puVar9 = (undefined8 *)func_0x00fac1f0(plVar8);
code_r0x014c0568:
                    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
                    if (plVar8 != (long *)0x0) {
                      uVar12 = 0x3d22180;
                      uVar19 = 0x3d1d390;
                      unaff_x25 = 0x3d1faa8;
                      unaff_x26 = 0x3d21b60;
code_r0x014c059c:
                      lVar14 = *plVar8;
                      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                      if (uVar15 != 0) {
                        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                            puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                            goto code_r0x014c05e8;
                          }
                          piVar16 = piVar16 + 4;
                          uVar15 = uVar15 - 1;
                        } while (uVar15 != 0);
                      }
                      lVar13 = 0;
                      puVar9 = (undefined8 *)func_0x00fac1f0(plVar8);
code_r0x014c05e8:
                      uVar15 = (*(code *)*puVar9)(plVar8,puVar9[1]);
                      if ((uVar15 & 1) != 0) {
                        lVar14 = *plVar8;
                        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                        if (uVar15 != 0) {
                          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                              puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                              goto code_r0x014c0644;
                            }
                            piVar16 = piVar16 + 4;
                            uVar15 = uVar15 - 1;
                          } while (uVar15 != 0);
                        }
                        lVar13 = 0;
                        puVar9 = (undefined8 *)func_0x00fac1f0(plVar8);
code_r0x014c0644:
                        plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
                        if (plVar10 != (long *)0x0) {
                          if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar10 + 300))
                             && (*(long *)(*(long *)(*plVar10 + 200) +
                                           (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                                 /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
                            plVar11 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar17,plVar10,0);
                            if (plVar11 == (long *)0x0) {
                              plVar11 = (long *)0x0;
                            }
                            else if (*plVar11 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60) {
                              plVar11 = (long *)0x0;
                            }
                            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            lVar13 = 0;
                            uVar15 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar11,0);
                            if ((uVar15 & 1) != 0) {
                              if (plVar11 == (long *)0x0) goto code_r0x014c0778;
                              lVar13 = 0;
                              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(plVar11,0);
                            }
                          }
                        }
                        goto code_r0x014c059c;
                      }
                      lVar17 = 0;
                      do {
                        if (plVar8 != (long *)0x0) {
                          lVar14 = *plVar8;
                          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                          if (uVar15 != 0) {
                            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                                puVar9 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                                goto code_r0x014c074c;
                              }
                              piVar16 = piVar16 + 4;
                              uVar15 = uVar15 - 1;
                            } while (uVar15 != 0);
                          }
                          lVar13 = 0;
                          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8);
code_r0x014c074c:
                          (*(code *)*puVar9)(plVar8,puVar9[1]);
                        }
                        if (lVar17 == 0) {
                          return;
                        }
                        func_0x00f78ac0(lVar17,0);
                        if (extraout_w1 != 1) goto code_r0x014c07cc;
                        plVar10 = (long *)___cxa_begin_catch();
                        lVar17 = *plVar10;
                        ___cxa_end_catch();
                      } while( true );
                    }
                    func_0x00f78af4();
                    goto code_r0x014c0784;
                  }
                }
                func_0x00f78af4();
code_r0x014c0778:
                func_0x00f78af4();
code_r0x014c0784:
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x14c0788);
                (*pcVar3)();
              }
            }
          }
        }
      }
    }
    break;
  case 2:
    if ((param_2[6] != 0) &&
       (lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_2[6],0),
       lVar17 != 0)) {
      puVar9 = (undefined8 *)(lVar17 + 0x38);
      goto code_r0x01536ab8;
    }
    break;
  case 3:
    if ((param_2[6] != 0) &&
       (lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_2[6],0),
       lVar17 != 0)) {
      puVar9 = (undefined8 *)(lVar17 + 0x48);
      goto code_r0x01536ab8;
    }
    break;
  case 4:
    if ((param_2[6] != 0) &&
       (lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_2[6],0),
       lVar17 != 0)) {
      puVar9 = (undefined8 *)(lVar17 + 0x58);
      goto code_r0x01536ab8;
    }
    break;
  case 5:
    if ((param_2[6] != 0) &&
       (lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_2[6],0),
       lVar17 != 0)) {
      puVar9 = (undefined8 *)(lVar17 + 0x78);
      goto code_r0x01536ab8;
    }
    break;
  case 6:
    if (param_2[6] != 0) {
      param_2 = *(long **)(param_2[6] + 0x28);
      if (param_2 != (long *)0x0) {
        if ((*(byte *)(*param_2 + 300) < *(byte *)(/*Atlas.UI.Screens.GameInProgressScreenBehaviour_TypeInfo*/ lRam0000000003d21b50 + 300)) ||
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(/*Atlas.UI.Screens.GameInProgressScreenBehaviour_TypeInfo*/ lRam0000000003d21b50 + 300) * 8 +
                     -8) != /*Atlas.UI.Screens.GameInProgressScreenBehaviour_TypeInfo*/ lRam0000000003d21b50)) goto code_r0x01536b80;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_2,0,0);
      if (iVar7 == 0) {
        return;
      }
      if (param_2 != (long *)0x0) {
        *(undefined8 *)((long)register0x00000008 + -0x30) =
             *(undefined8 *)((long)register0x00000008 + -0x30);
        *(undefined8 *)((long)register0x00000008 + -0x28) =
             *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        if ((bRam0000000003eb5237 & 1) == 0) {
          func_0x00f78a20(0x3d577e8,0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb5237 = 1;
        }
        lVar17 = param_2[0x12];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar15 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar17,0,0);
        if ((uVar15 & 1) != 0) {
          return;
        }
        if (param_2[0x12] != 0) {
          lVar17 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(param_2[0x12],uRam0000000003d577e8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar17,0,0);
          if (iVar7 == 0) {
            return;
          }
          if (lVar17 != 0) {
            *(undefined8 *)((long)register0x00000008 + -0x30) =
                 *(undefined8 *)((long)register0x00000008 + -0x30);
            *(undefined8 *)((long)register0x00000008 + -0x28) =
                 *(undefined8 *)((long)register0x00000008 + -0x28);
            *(undefined8 *)((long)register0x00000008 + -0x20) =
                 *(undefined8 *)((long)register0x00000008 + -0x20);
            *(undefined8 *)((long)register0x00000008 + -0x18) =
                 *(undefined8 *)((long)register0x00000008 + -0x18);
            *(undefined8 *)((long)register0x00000008 + -0x10) =
                 *(undefined8 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -8) =
                 *(undefined8 *)((long)register0x00000008 + -8);
            if (pcRam0000000003ec2ef8 == (code *)0x0) {
              pcRam0000000003ec2ef8 =
                   (code *)func_0x00f789d4("UnityEngine.Canvas::set_sortingOrder(System.Int32)");
            }
                    /* WARNING: Could not recover jumptable at 0x032f3bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003ec2ef8)(lVar17,0);
            return;
          }
        }
        auVar24 = func_0x00f78af4();
        *(int *)(auVar24._0_8_ + 0x290) = auVar24._8_4_;
        return;
      }
    }
    break;
  case 7:
    if ((param_2[6] != 0) &&
       (lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_2[6],0),
       lVar17 != 0)) {
      puVar9 = (undefined8 *)(lVar17 + 0x88);
      goto code_r0x01536ab8;
    }
    break;
  default:
    return;
  }
  func_0x00f78af4();
code_r0x01536b80:
  auVar22 = func_0x00f78e5c(param_2);
  *(long *)(auVar22._0_8_ + 0x30) = auVar22._8_8_;
  return;
code_r0x014c07cc:
  puVar20 = &Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  auVar22 = __Unwind_Resume();
  goto code_r0x014c07d0;
}



// ============================================================
// RVA: 0x1536834 | Atlas.Gameplay.FTUE.BaseLayerSequenceManager.PlayNextSequence
// ============================================================

/* WARNING: Possible PIC construction at 0x014c0828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c082c) */
/* WARNING: Removing unreachable block (ram,0x014c0858) */
/* WARNING: Removing unreachable block (ram,0x014c0888) */
/* WARNING: Removing unreachable block (ram,0x014c089c) */
/* WARNING: Removing unreachable block (ram,0x014c08a4) */
/* WARNING: Removing unreachable block (ram,0x014c08a8) */
/* WARNING: Removing unreachable block (ram,0x014c08b4) */
/* WARNING: Removing unreachable block (ram,0x014c08c0) */
/* WARNING: Removing unreachable block (ram,0x014c08c8) */
/* WARNING: Removing unreachable block (ram,0x014c08d0) */
/* WARNING: Removing unreachable block (ram,0x014c0914) */
/* WARNING: Removing unreachable block (ram,0x014c091c) */
/* WARNING: Removing unreachable block (ram,0x014c0920) */
/* WARNING: Removing unreachable block (ram,0x014c0954) */
/* WARNING: Removing unreachable block (ram,0x014c0990) */
/* WARNING: Removing unreachable block (ram,0x014c0998) */
/* WARNING: Removing unreachable block (ram,0x014c099c) */
/* WARNING: Removing unreachable block (ram,0x014c09d0) */
/* WARNING: Removing unreachable block (ram,0x014c09d8) */
/* WARNING: Removing unreachable block (ram,0x014c09e0) */
/* WARNING: Removing unreachable block (ram,0x014c09e8) */
/* WARNING: Removing unreachable block (ram,0x014c0a18) */
/* WARNING: Removing unreachable block (ram,0x014c09f0) */
/* WARNING: Removing unreachable block (ram,0x014c08b8) */
/* WARNING: Removing unreachable block (ram,0x014c08ac) */
/* WARNING: Removing unreachable block (ram,0x014c0a00) */
/* WARNING: Removing unreachable block (ram,0x014c0830) */

void Atlas_Gameplay_FTUE_BaseLayerSequenceManager__PlayNextSequence(long param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  int extraout_w1;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined *puStack_38;
  
  if ((bRam0000000003eb4ed0 & 1) == 0) {
    func_0x00f78a20(0x3d3cd48);
    func_0x00f78a20(0x3d3cd50);
    bRam0000000003eb4ed0 = 1;
  }
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 != 0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    if ((int)uVar1 < (int)*(uint *)(lVar15 + 0x18)) {
      if (*(uint *)(lVar15 + 0x18) <= uVar1) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(lVar15 + 0x10) + (long)(int)uVar1 * 0xc;
      /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$PlaySequence*/ func_0x01536cd0(param_1,*(undefined8 *)(lVar15 + 0x20),*(undefined4 *)(lVar15 + 0x28));
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    return;
  }
  plVar9 = (long *)func_0x00f78af4();
  puStack_38 = &Atlas_Gameplay_FTUE_BaseLayerSequenceManager__PlayResetSequence;
  if ((bRam0000000003eb4ed1 & 1) == 0) {
    func_0x00f78a20(0x3d2a280);
    func_0x00f78a20(0x3d1b540);
    func_0x00f78a20(0x3d52808);
    func_0x00f78a20(0x3d21b50);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ed1 = 1;
  }
  switch((int)plVar9[3]) {
  case 1:
    if ((plVar9[6] != 0) &&
       (lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar9[6],0),
       lVar15 != 0)) {
      puVar7 = (undefined8 *)(lVar15 + 0x28);
code_r0x01536ab8:
      if (plVar9[6] != 0) {
        uVar16 = *puVar7;
        lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar9[6],0);
        if ((lVar15 != 0) && (*(long *)(lVar15 + 0x18) != 0)) {
          /*UnityEngine.Playables.PlayableDirector$$set_extrapolationMode*/ func_0x0328223c(*(long *)(lVar15 + 0x18),2,0);
          if ((plVar9[6] != 0) &&
             (lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar9[6],0),
             lVar15 != 0)) {
            lVar15 = *(long *)(lVar15 + 0x18);
            uVar10 = func_0x00f78aec(/*System.Action<PlayableDirector>_TypeInfo*/ uRam0000000003d1b540);
            /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar10,plVar9,uRam0000000003d52808,uRam0000000003d2a280);
            if (lVar15 != 0) {
              /*UnityEngine.Playables.PlayableDirector$$add_stopped*/ func_0x0328339c(lVar15,uVar10,0);
              if ((plVar9[6] != 0) &&
                 (lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                                     (plVar9[6],0), lVar15 != 0)) {
                auVar20._8_8_ = uVar16;
                auVar20._0_8_ = *(undefined8 *)(lVar15 + 0x18);
                lVar15 = 1;
                puVar5 = &stack0xffffffffffffffd0;
                plVar9 = (long *)0x0;
code_r0x014c07d0:
                lVar12 = auVar20._0_8_;
                puVar4 = puVar5 + -0x20;
                *(long **)(puVar5 + -0x20) = plVar9;
                *(long *)(puVar5 + -0x18) = param_1;
                *(undefined1 **)(puVar5 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
                *(undefined **)(puVar5 + -8) = puStack_38;
                if (lVar12 == 0) {
                  auVar21 = func_0x00f78af4(0,auVar20._8_8_);
                  auVar19._8_8_ = lVar15;
                  auVar19._0_8_ = auVar21._0_8_;
                  puVar4 = puVar5 + -0x50;
                  *(undefined8 *)(puVar5 + -0x50) = unaff_x22;
                  *(long **)(puVar5 + -0x48) = unaff_x21;
                  *(long **)(puVar5 + -0x40) = plVar9;
                  *(long *)(puVar5 + -0x38) = param_1;
                  *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
                  *(undefined **)(puVar5 + -0x28) =
                       &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
                  puVar17 = puVar5 + -0x30;
                  puVar18 = &UNK_014c082c;
                }
                else {
                  /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(lVar12,auVar20._8_8_,0);
                  auVar21._8_8_ = unaff_x21;
                  auVar21._0_8_ = *(undefined8 *)(puVar5 + -0x20);
                  *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
                  *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
                  *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
                  *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
                  puVar17 = puVar5 + -0x10;
                  if ((int)lVar15 == 0) {
                    if (lVar12 != 0) goto code_r0x014c034c;
                  }
                  else if ((lVar12 != 0) && (lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0), lVar15 != 0)) {
                    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar15,1,0);
code_r0x014c034c:
                    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar12,0);
                    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar12,0);
                    *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
                    *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
                    *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
                    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
                    if (pcRam0000000003ec1b90 == (code *)0x0) {
                      pcRam0000000003ec1b90 =
                           (code *)func_0x00f789d4("UnityEngine.Playables.PlayableDirector::Play()")
                      ;
                    }
                    /* WARNING: Could not recover jumptable at 0x0328295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000003ec1b90)(lVar12);
                    return;
                  }
                  puVar18 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
                  auVar19 = func_0x00f78af4();
                  lVar15 = lVar12;
                }
                unaff_x21 = auVar21._8_8_;
                auVar2._8_8_ = auVar21._0_8_;
                auVar2._0_8_ = lVar15;
                lVar12 = auVar19._0_8_;
                register0x00000008 = (BADSPACEBASE *)(puVar4 + -0x20);
                *(long *)(puVar4 + -0x20) = auVar21._0_8_;
                *(long *)(puVar4 + -0x18) = lVar15;
                *(undefined1 **)(puVar4 + -0x10) = puVar17;
                *(undefined **)(puVar4 + -8) = puVar18;
                puVar17 = puVar4 + -0x10;
                if (lVar12 == 0) {
code_r0x014c03e4:
                  puVar18 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
                  lVar12 = func_0x00f78af4();
                }
                else {
                  /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar12,0);
                  /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar12,0);
                  /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar12,0);
                  if (auVar19._8_4_ != 0) {
                    lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0);
                    auVar2 = auVar19;
                    if (lVar15 == 0) goto code_r0x014c03e4;
                    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar15,0,0);
                  }
                  puVar17 = *(undefined1 **)(puVar4 + -0x10);
                  puVar18 = *(undefined **)(puVar4 + -8);
                  auVar2._8_8_ = *(undefined8 *)(puVar4 + -0x20);
                  auVar2._0_8_ = *(undefined8 *)(puVar4 + -0x18);
                  register0x00000008 = (BADSPACEBASE *)puVar4;
                }
                puVar5 = (undefined1 *)((long)register0x00000008 + -0x50);
                *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
                *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
                *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
                *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
                *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
                *(long *)((long)register0x00000008 + -0x20) = auVar2._8_8_;
                *(long *)((long)register0x00000008 + -0x18) = auVar2._0_8_;
                *(undefined1 **)((long)register0x00000008 + -0x10) = puVar17;
                *(undefined **)((long)register0x00000008 + -8) = puVar18;
                if ((bRam0000000003eb4b15 & 1) == 0) {
                  func_0x00f78a20(0x3d1faa8);
                  func_0x00f78a20(0x3d21b60);
                  func_0x00f78a20(0x3d220f0);
                  func_0x00f78a20(0x3d1d180);
                  func_0x00f78a20(0x3d1d390);
                  func_0x00f78a20(0x3d22180);
                  func_0x00f78a20(0x3d23990);
                  func_0x00f78a20(0x3d25280);
                  bRam0000000003eb4b15 = 1;
                }
                if (lVar12 != 0) {
                  unaff_x22 = 0x3d23990;
                  plVar9 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar12,0);
                  if (plVar9 == (long *)0x0) {
code_r0x014c04b4:
                    plVar9 = (long *)0x0;
                  }
                  else {
                    if (*(byte *)(*plVar9 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300))
                    goto code_r0x014c04b4;
                    if (*(long *)(*(long *)(*plVar9 + 200) +
                                  (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8 + -8) !=
                        /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
                      plVar9 = (long *)0x0;
                    }
                  }
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar15 = 0;
                  iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar9,0);
                  if (iVar6 == 0) {
                    return;
                  }
                  if ((plVar9 != (long *)0x0) &&
                     (plVar9 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar9,0), plVar9 != (long *)0x0)) {
                    lVar11 = *plVar9;
                    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
                    if (uVar13 != 0) {
                      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
                          puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                          goto code_r0x014c0568;
                        }
                        piVar14 = piVar14 + 4;
                        uVar13 = uVar13 - 1;
                      } while (uVar13 != 0);
                    }
                    lVar15 = 0;
                    puVar7 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x014c0568:
                    plVar9 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
                    if (plVar9 != (long *)0x0) {
                      unaff_x23 = 0x3d22180;
                      unaff_x24 = 0x3d1d390;
                      unaff_x25 = 0x3d1faa8;
                      unaff_x26 = 0x3d21b60;
code_r0x014c059c:
                      lVar11 = *plVar9;
                      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
                      if (uVar13 != 0) {
                        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                            puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                            goto code_r0x014c05e8;
                          }
                          piVar14 = piVar14 + 4;
                          uVar13 = uVar13 - 1;
                        } while (uVar13 != 0);
                      }
                      lVar15 = 0;
                      puVar7 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x014c05e8:
                      uVar13 = (*(code *)*puVar7)(plVar9,puVar7[1]);
                      if ((uVar13 & 1) != 0) {
                        lVar11 = *plVar9;
                        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
                        if (uVar13 != 0) {
                          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                              puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                              goto code_r0x014c0644;
                            }
                            piVar14 = piVar14 + 4;
                            uVar13 = uVar13 - 1;
                          } while (uVar13 != 0);
                        }
                        lVar15 = 0;
                        puVar7 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x014c0644:
                        plVar8 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
                        if (plVar8 != (long *)0x0) {
                          if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar8 + 300)) &&
                             (*(long *)(*(long *)(*plVar8 + 200) +
                                        (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                              /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
                            unaff_x21 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar12,plVar8,0);
                            if (unaff_x21 == (long *)0x0) {
                              unaff_x21 = (long *)0x0;
                            }
                            else if (*unaff_x21 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60) {
                              unaff_x21 = (long *)0x0;
                            }
                            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            lVar15 = 0;
                            uVar13 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
                            if ((uVar13 & 1) != 0) {
                              if (unaff_x21 == (long *)0x0) goto code_r0x014c0778;
                              lVar15 = 0;
                              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(unaff_x21,0);
                            }
                          }
                        }
                        goto code_r0x014c059c;
                      }
                      param_1 = 0;
                      do {
                        if (plVar9 != (long *)0x0) {
                          lVar12 = *plVar9;
                          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                          if (uVar13 != 0) {
                            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar14 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                                puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                                goto code_r0x014c074c;
                              }
                              piVar14 = piVar14 + 4;
                              uVar13 = uVar13 - 1;
                            } while (uVar13 != 0);
                          }
                          lVar15 = 0;
                          puVar7 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x014c074c:
                          (*(code *)*puVar7)(plVar9,puVar7[1]);
                        }
                        if (param_1 == 0) {
                          return;
                        }
                        func_0x00f78ac0(param_1,0);
                        if (extraout_w1 != 1) goto code_r0x014c07cc;
                        plVar8 = (long *)___cxa_begin_catch();
                        param_1 = *plVar8;
                        ___cxa_end_catch();
                      } while( true );
                    }
                    func_0x00f78af4();
                    goto code_r0x014c0784;
                  }
                }
                func_0x00f78af4();
code_r0x014c0778:
                func_0x00f78af4();
code_r0x014c0784:
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x14c0788);
                (*pcVar3)();
              }
            }
          }
        }
      }
    }
    break;
  case 2:
    if ((plVar9[6] != 0) &&
       (lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar9[6],0),
       lVar15 != 0)) {
      puVar7 = (undefined8 *)(lVar15 + 0x38);
      goto code_r0x01536ab8;
    }
    break;
  case 3:
    if ((plVar9[6] != 0) &&
       (lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar9[6],0),
       lVar15 != 0)) {
      puVar7 = (undefined8 *)(lVar15 + 0x48);
      goto code_r0x01536ab8;
    }
    break;
  case 4:
    if ((plVar9[6] != 0) &&
       (lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar9[6],0),
       lVar15 != 0)) {
      puVar7 = (undefined8 *)(lVar15 + 0x58);
      goto code_r0x01536ab8;
    }
    break;
  case 5:
    if ((plVar9[6] != 0) &&
       (lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar9[6],0),
       lVar15 != 0)) {
      puVar7 = (undefined8 *)(lVar15 + 0x78);
      goto code_r0x01536ab8;
    }
    break;
  case 6:
    if (plVar9[6] != 0) {
      plVar9 = *(long **)(plVar9[6] + 0x28);
      if (plVar9 != (long *)0x0) {
        if ((*(byte *)(*plVar9 + 300) < *(byte *)(/*Atlas.UI.Screens.GameInProgressScreenBehaviour_TypeInfo*/ lRam0000000003d21b50 + 300)) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(/*Atlas.UI.Screens.GameInProgressScreenBehaviour_TypeInfo*/ lRam0000000003d21b50 + 300) * 8 +
                     -8) != /*Atlas.UI.Screens.GameInProgressScreenBehaviour_TypeInfo*/ lRam0000000003d21b50)) goto code_r0x01536b80;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar9,0,0);
      if (iVar6 == 0) {
        return;
      }
      if (plVar9 != (long *)0x0) {
        if ((bRam0000000003eb5237 & 1) == 0) {
          func_0x00f78a20(0x3d577e8,0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb5237 = 1;
        }
        lVar15 = plVar9[0x12];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar13 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar15,0,0);
        if ((uVar13 & 1) != 0) {
          return;
        }
        if (plVar9[0x12] != 0) {
          lVar15 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar9[0x12],uRam0000000003d577e8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar15,0,0);
          if (iVar6 == 0) {
            return;
          }
          if (lVar15 != 0) {
            if (pcRam0000000003ec2ef8 == (code *)0x0) {
              pcRam0000000003ec2ef8 =
                   (code *)func_0x00f789d4("UnityEngine.Canvas::set_sortingOrder(System.Int32)");
            }
                    /* WARNING: Could not recover jumptable at 0x032f3bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003ec2ef8)(lVar15,0);
            return;
          }
        }
        auVar22 = func_0x00f78af4();
        *(int *)(auVar22._0_8_ + 0x290) = auVar22._8_4_;
        return;
      }
    }
    break;
  case 7:
    if ((plVar9[6] != 0) &&
       (lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar9[6],0),
       lVar15 != 0)) {
      puVar7 = (undefined8 *)(lVar15 + 0x88);
      goto code_r0x01536ab8;
    }
    break;
  default:
    return;
  }
  func_0x00f78af4();
code_r0x01536b80:
  auVar20 = func_0x00f78e5c(plVar9);
  *(long *)(auVar20._0_8_ + 0x30) = auVar20._8_8_;
  return;
code_r0x014c07cc:
  puStack_38 = &Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  auVar20 = __Unwind_Resume();
  goto code_r0x014c07d0;
}



// ============================================================
// RVA: 0x15368d8 | Atlas.Gameplay.FTUE.BaseLayerSequenceManager.PlayResetSequence
// ============================================================

/* WARNING: Possible PIC construction at 0x014c0828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c082c) */
/* WARNING: Removing unreachable block (ram,0x014c0858) */
/* WARNING: Removing unreachable block (ram,0x014c0888) */
/* WARNING: Removing unreachable block (ram,0x014c089c) */
/* WARNING: Removing unreachable block (ram,0x014c08a4) */
/* WARNING: Removing unreachable block (ram,0x014c08a8) */
/* WARNING: Removing unreachable block (ram,0x014c08b4) */
/* WARNING: Removing unreachable block (ram,0x014c08c0) */
/* WARNING: Removing unreachable block (ram,0x014c08c8) */
/* WARNING: Removing unreachable block (ram,0x014c08d0) */
/* WARNING: Removing unreachable block (ram,0x014c0914) */
/* WARNING: Removing unreachable block (ram,0x014c091c) */
/* WARNING: Removing unreachable block (ram,0x014c0920) */
/* WARNING: Removing unreachable block (ram,0x014c0954) */
/* WARNING: Removing unreachable block (ram,0x014c0990) */
/* WARNING: Removing unreachable block (ram,0x014c0998) */
/* WARNING: Removing unreachable block (ram,0x014c099c) */
/* WARNING: Removing unreachable block (ram,0x014c09d0) */
/* WARNING: Removing unreachable block (ram,0x014c09d8) */
/* WARNING: Removing unreachable block (ram,0x014c09e0) */
/* WARNING: Removing unreachable block (ram,0x014c09e8) */
/* WARNING: Removing unreachable block (ram,0x014c0a18) */
/* WARNING: Removing unreachable block (ram,0x014c09f0) */
/* WARNING: Removing unreachable block (ram,0x014c08b8) */
/* WARNING: Removing unreachable block (ram,0x014c08ac) */
/* WARNING: Removing unreachable block (ram,0x014c0a00) */
/* WARNING: Removing unreachable block (ram,0x014c0830) */

void Atlas_Gameplay_FTUE_BaseLayerSequenceManager__PlayResetSequence(long *param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  int extraout_w1;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar14;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar15;
  undefined1 *unaff_x29;
  undefined *puVar16;
  undefined *unaff_x30;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [12];
  
  if ((bRam0000000003eb4ed1 & 1) == 0) {
    func_0x00f78a20(0x3d2a280);
    func_0x00f78a20(0x3d1b540);
    func_0x00f78a20(0x3d52808);
    func_0x00f78a20(0x3d21b50);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ed1 = 1;
  }
  switch((int)param_1[3]) {
  case 1:
    if ((param_1[6] != 0) &&
       (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_1[6],0),
       lVar8 != 0)) {
      puVar7 = (undefined8 *)(lVar8 + 0x28);
code_r0x01536ab8:
      if (param_1[6] != 0) {
        uVar14 = *puVar7;
        lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_1[6],0);
        if ((lVar8 != 0) && (*(long *)(lVar8 + 0x18) != 0)) {
          /*UnityEngine.Playables.PlayableDirector$$set_extrapolationMode*/ func_0x0328223c(*(long *)(lVar8 + 0x18),2,0);
          if ((param_1[6] != 0) &&
             (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_1[6],0),
             lVar8 != 0)) {
            lVar8 = *(long *)(lVar8 + 0x18);
            uVar9 = func_0x00f78aec(/*System.Action<PlayableDirector>_TypeInfo*/ uRam0000000003d1b540);
            /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar9,param_1,uRam0000000003d52808,uRam0000000003d2a280);
            if (lVar8 != 0) {
              /*UnityEngine.Playables.PlayableDirector$$add_stopped*/ func_0x0328339c(lVar8,uVar9,0);
              if ((param_1[6] != 0) &&
                 (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                                    (param_1[6],0), lVar8 != 0)) {
                auVar18._8_8_ = uVar14;
                auVar18._0_8_ = *(undefined8 *)(lVar8 + 0x18);
                lVar8 = 1;
code_r0x014c07d0:
                lVar11 = auVar18._0_8_;
                puVar3 = (undefined1 *)((long)register0x00000008 + -0x20);
                *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
                *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
                *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
                *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
                if (lVar11 == 0) {
                  auVar19 = func_0x00f78af4(0,auVar18._8_8_);
                  auVar17._8_8_ = lVar8;
                  auVar17._0_8_ = auVar19._0_8_;
                  puVar3 = (undefined1 *)((long)register0x00000008 + -0x50);
                  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
                  *(long **)((long)register0x00000008 + -0x48) = unaff_x21;
                  *(long **)((long)register0x00000008 + -0x40) = unaff_x20;
                  *(long *)((long)register0x00000008 + -0x38) = unaff_x19;
                  *(undefined1 **)((long)register0x00000008 + -0x30) =
                       (undefined1 *)((long)register0x00000008 + -0x10);
                  *(undefined **)((long)register0x00000008 + -0x28) =
                       &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
                  puVar15 = (undefined1 *)((long)register0x00000008 + -0x30);
                  puVar16 = &UNK_014c082c;
                }
                else {
                  /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(lVar11,auVar18._8_8_,0);
                  auVar19._8_8_ = unaff_x21;
                  auVar19._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x20);
                  *(undefined8 *)((long)register0x00000008 + -0x20) =
                       *(undefined8 *)((long)register0x00000008 + -0x20);
                  *(undefined8 *)((long)register0x00000008 + -0x18) =
                       *(undefined8 *)((long)register0x00000008 + -0x18);
                  *(undefined8 *)((long)register0x00000008 + -0x10) =
                       *(undefined8 *)((long)register0x00000008 + -0x10);
                  *(undefined8 *)((long)register0x00000008 + -8) =
                       *(undefined8 *)((long)register0x00000008 + -8);
                  puVar15 = (undefined1 *)((long)register0x00000008 + -0x10);
                  if ((int)lVar8 == 0) {
                    if (lVar11 != 0) goto code_r0x014c034c;
                  }
                  else if ((lVar11 != 0) && (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar11,0), lVar8 != 0)) {
                    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,1,0);
code_r0x014c034c:
                    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar11,0);
                    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar11,0);
                    *(undefined8 *)((long)register0x00000008 + -0x20) =
                         *(undefined8 *)((long)register0x00000008 + -0x20);
                    *(undefined8 *)((long)register0x00000008 + -0x18) =
                         *(undefined8 *)((long)register0x00000008 + -0x18);
                    *(undefined8 *)((long)register0x00000008 + -0x10) =
                         *(undefined8 *)((long)register0x00000008 + -0x10);
                    *(undefined8 *)((long)register0x00000008 + -8) =
                         *(undefined8 *)((long)register0x00000008 + -8);
                    if (pcRam0000000003ec1b90 == (code *)0x0) {
                      pcRam0000000003ec1b90 =
                           (code *)func_0x00f789d4("UnityEngine.Playables.PlayableDirector::Play()")
                      ;
                    }
                    /* WARNING: Could not recover jumptable at 0x0328295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000003ec1b90)(lVar11);
                    return;
                  }
                  puVar16 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
                  auVar17 = func_0x00f78af4();
                  lVar8 = lVar11;
                }
                unaff_x21 = auVar19._8_8_;
                auVar1._8_8_ = auVar19._0_8_;
                auVar1._0_8_ = lVar8;
                lVar11 = auVar17._0_8_;
                puVar4 = puVar3 + -0x20;
                *(long *)(puVar3 + -0x20) = auVar19._0_8_;
                *(long *)(puVar3 + -0x18) = lVar8;
                *(undefined1 **)(puVar3 + -0x10) = puVar15;
                *(undefined **)(puVar3 + -8) = puVar16;
                puVar15 = puVar3 + -0x10;
                if (lVar11 == 0) {
code_r0x014c03e4:
                  puVar16 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
                  lVar11 = func_0x00f78af4();
                }
                else {
                  /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar11,0);
                  /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar11,0);
                  /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar11,0);
                  if (auVar17._8_4_ != 0) {
                    lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar11,0);
                    auVar1 = auVar17;
                    if (lVar8 == 0) goto code_r0x014c03e4;
                    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,0,0);
                  }
                  puVar15 = *(undefined1 **)(puVar3 + -0x10);
                  puVar16 = *(undefined **)(puVar3 + -8);
                  auVar1._8_8_ = *(undefined8 *)(puVar3 + -0x20);
                  auVar1._0_8_ = *(undefined8 *)(puVar3 + -0x18);
                  puVar4 = puVar3;
                }
                register0x00000008 = (BADSPACEBASE *)(puVar4 + -0x50);
                *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
                *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
                *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
                *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
                *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
                *(long **)(puVar4 + -0x28) = unaff_x21;
                *(long *)(puVar4 + -0x20) = auVar1._8_8_;
                *(long *)(puVar4 + -0x18) = auVar1._0_8_;
                *(undefined1 **)(puVar4 + -0x10) = puVar15;
                *(undefined **)(puVar4 + -8) = puVar16;
                unaff_x29 = puVar4 + -0x10;
                if ((bRam0000000003eb4b15 & 1) == 0) {
                  func_0x00f78a20(0x3d1faa8);
                  func_0x00f78a20(0x3d21b60);
                  func_0x00f78a20(0x3d220f0);
                  func_0x00f78a20(0x3d1d180);
                  func_0x00f78a20(0x3d1d390);
                  func_0x00f78a20(0x3d22180);
                  func_0x00f78a20(0x3d23990);
                  func_0x00f78a20(0x3d25280);
                  bRam0000000003eb4b15 = 1;
                }
                if (lVar11 != 0) {
                  unaff_x22 = 0x3d23990;
                  plVar6 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar11,0);
                  if (plVar6 == (long *)0x0) {
code_r0x014c04b4:
                    plVar6 = (long *)0x0;
                  }
                  else {
                    if (*(byte *)(*plVar6 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300))
                    goto code_r0x014c04b4;
                    if (*(long *)(*(long *)(*plVar6 + 200) +
                                  (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8 + -8) !=
                        /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
                      plVar6 = (long *)0x0;
                    }
                  }
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar8 = 0;
                  iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar6,0);
                  if (iVar5 == 0) {
                    return;
                  }
                  if ((plVar6 != (long *)0x0) &&
                     (plVar6 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar6,0), plVar6 != (long *)0x0)) {
                    lVar10 = *plVar6;
                    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
                    if (uVar12 != 0) {
                      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
                          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                          goto code_r0x014c0568;
                        }
                        piVar13 = piVar13 + 4;
                        uVar12 = uVar12 - 1;
                      } while (uVar12 != 0);
                    }
                    lVar8 = 0;
                    puVar7 = (undefined8 *)func_0x00fac1f0(plVar6);
code_r0x014c0568:
                    unaff_x20 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
                    if (unaff_x20 != (long *)0x0) {
                      unaff_x23 = 0x3d22180;
                      unaff_x24 = 0x3d1d390;
                      unaff_x25 = 0x3d1faa8;
                      unaff_x26 = 0x3d21b60;
code_r0x014c059c:
                      lVar10 = *unaff_x20;
                      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
                      if (uVar12 != 0) {
                        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                            goto code_r0x014c05e8;
                          }
                          piVar13 = piVar13 + 4;
                          uVar12 = uVar12 - 1;
                        } while (uVar12 != 0);
                      }
                      lVar8 = 0;
                      puVar7 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c05e8:
                      uVar12 = (*(code *)*puVar7)(unaff_x20,puVar7[1]);
                      if ((uVar12 & 1) != 0) {
                        lVar10 = *unaff_x20;
                        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
                        if (uVar12 != 0) {
                          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                              goto code_r0x014c0644;
                            }
                            piVar13 = piVar13 + 4;
                            uVar12 = uVar12 - 1;
                          } while (uVar12 != 0);
                        }
                        lVar8 = 0;
                        puVar7 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c0644:
                        plVar6 = (long *)(*(code *)*puVar7)(unaff_x20,puVar7[1]);
                        if (plVar6 != (long *)0x0) {
                          if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar6 + 300)) &&
                             (*(long *)(*(long *)(*plVar6 + 200) +
                                        (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                              /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
                            unaff_x21 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar11,plVar6,0);
                            if (unaff_x21 == (long *)0x0) {
                              unaff_x21 = (long *)0x0;
                            }
                            else if (*unaff_x21 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60) {
                              unaff_x21 = (long *)0x0;
                            }
                            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            lVar8 = 0;
                            uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
                            if ((uVar12 & 1) != 0) {
                              if (unaff_x21 == (long *)0x0) goto code_r0x014c0778;
                              lVar8 = 0;
                              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(unaff_x21,0);
                            }
                          }
                        }
                        goto code_r0x014c059c;
                      }
                      unaff_x19 = 0;
                      do {
                        if (unaff_x20 != (long *)0x0) {
                          lVar11 = *unaff_x20;
                          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                          if (uVar12 != 0) {
                            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                                puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                                goto code_r0x014c074c;
                              }
                              piVar13 = piVar13 + 4;
                              uVar12 = uVar12 - 1;
                            } while (uVar12 != 0);
                          }
                          lVar8 = 0;
                          puVar7 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c074c:
                          (*(code *)*puVar7)(unaff_x20,puVar7[1]);
                        }
                        if (unaff_x19 == 0) {
                          return;
                        }
                        func_0x00f78ac0(unaff_x19,0);
                        if (extraout_w1 != 1) goto code_r0x014c07cc;
                        plVar6 = (long *)___cxa_begin_catch();
                        unaff_x19 = *plVar6;
                        ___cxa_end_catch();
                      } while( true );
                    }
                    func_0x00f78af4();
                    goto code_r0x014c0784;
                  }
                }
                func_0x00f78af4();
code_r0x014c0778:
                func_0x00f78af4();
code_r0x014c0784:
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x14c0788);
                (*pcVar2)();
              }
            }
          }
        }
      }
    }
    break;
  case 2:
    if ((param_1[6] != 0) &&
       (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_1[6],0),
       lVar8 != 0)) {
      puVar7 = (undefined8 *)(lVar8 + 0x38);
      goto code_r0x01536ab8;
    }
    break;
  case 3:
    if ((param_1[6] != 0) &&
       (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_1[6],0),
       lVar8 != 0)) {
      puVar7 = (undefined8 *)(lVar8 + 0x48);
      goto code_r0x01536ab8;
    }
    break;
  case 4:
    if ((param_1[6] != 0) &&
       (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_1[6],0),
       lVar8 != 0)) {
      puVar7 = (undefined8 *)(lVar8 + 0x58);
      goto code_r0x01536ab8;
    }
    break;
  case 5:
    if ((param_1[6] != 0) &&
       (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_1[6],0),
       lVar8 != 0)) {
      puVar7 = (undefined8 *)(lVar8 + 0x78);
      goto code_r0x01536ab8;
    }
    break;
  case 6:
    if (param_1[6] != 0) {
      param_1 = *(long **)(param_1[6] + 0x28);
      if (param_1 != (long *)0x0) {
        if ((*(byte *)(*param_1 + 300) < *(byte *)(/*Atlas.UI.Screens.GameInProgressScreenBehaviour_TypeInfo*/ lRam0000000003d21b50 + 300)) ||
           (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(/*Atlas.UI.Screens.GameInProgressScreenBehaviour_TypeInfo*/ lRam0000000003d21b50 + 300) * 8 +
                     -8) != /*Atlas.UI.Screens.GameInProgressScreenBehaviour_TypeInfo*/ lRam0000000003d21b50)) goto code_r0x01536b80;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_1,0,0);
      if (iVar5 == 0) {
        return;
      }
      if (param_1 != (long *)0x0) {
        if ((bRam0000000003eb5237 & 1) == 0) {
          func_0x00f78a20(0x3d577e8,0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb5237 = 1;
        }
        lVar8 = param_1[0x12];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar12 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar8,0,0);
        if ((uVar12 & 1) != 0) {
          return;
        }
        if (param_1[0x12] != 0) {
          lVar8 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(param_1[0x12],uRam0000000003d577e8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar8,0,0);
          if (iVar5 == 0) {
            return;
          }
          if (lVar8 != 0) {
            if (pcRam0000000003ec2ef8 == (code *)0x0) {
              pcRam0000000003ec2ef8 =
                   (code *)func_0x00f789d4("UnityEngine.Canvas::set_sortingOrder(System.Int32)");
            }
                    /* WARNING: Could not recover jumptable at 0x032f3bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003ec2ef8)(lVar8,0);
            return;
          }
        }
        auVar20 = func_0x00f78af4();
        *(int *)(auVar20._0_8_ + 0x290) = auVar20._8_4_;
        return;
      }
    }
    break;
  case 7:
    if ((param_1[6] != 0) &&
       (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(param_1[6],0),
       lVar8 != 0)) {
      puVar7 = (undefined8 *)(lVar8 + 0x88);
      goto code_r0x01536ab8;
    }
    break;
  default:
    return;
  }
  func_0x00f78af4();
code_r0x01536b80:
  auVar18 = func_0x00f78e5c(param_1);
  *(long *)(auVar18._0_8_ + 0x30) = auVar18._8_8_;
  return;
code_r0x014c07cc:
  unaff_x30 = &Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  auVar18 = __Unwind_Resume();
  goto code_r0x014c07d0;
}



// ============================================================
// RVA: 0x1536b88 | Atlas.Gameplay.FTUE.BaseLayerSequenceManager.OnInProgressScreenEntered
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerSequenceManager__OnInProgressScreenEntered
               (long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}



// ============================================================
// RVA: 0x1536b90 | Atlas.Gameplay.FTUE.BaseLayerSequenceManager.OnAfterExitGameContextScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x014c0828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c082c) */
/* WARNING: Removing unreachable block (ram,0x014c0858) */
/* WARNING: Removing unreachable block (ram,0x014c0888) */
/* WARNING: Removing unreachable block (ram,0x014c089c) */
/* WARNING: Removing unreachable block (ram,0x014c08a4) */
/* WARNING: Removing unreachable block (ram,0x014c08a8) */
/* WARNING: Removing unreachable block (ram,0x014c08b4) */
/* WARNING: Removing unreachable block (ram,0x014c08c0) */
/* WARNING: Removing unreachable block (ram,0x014c08c8) */
/* WARNING: Removing unreachable block (ram,0x014c08d0) */
/* WARNING: Removing unreachable block (ram,0x014c0914) */
/* WARNING: Removing unreachable block (ram,0x014c091c) */
/* WARNING: Removing unreachable block (ram,0x014c0920) */
/* WARNING: Removing unreachable block (ram,0x014c0954) */
/* WARNING: Removing unreachable block (ram,0x014c0990) */
/* WARNING: Removing unreachable block (ram,0x014c0998) */
/* WARNING: Removing unreachable block (ram,0x014c099c) */
/* WARNING: Removing unreachable block (ram,0x014c09d0) */
/* WARNING: Removing unreachable block (ram,0x014c09d8) */
/* WARNING: Removing unreachable block (ram,0x014c09e0) */
/* WARNING: Removing unreachable block (ram,0x014c09e8) */
/* WARNING: Removing unreachable block (ram,0x014c0a18) */
/* WARNING: Removing unreachable block (ram,0x014c09f0) */
/* WARNING: Removing unreachable block (ram,0x014c08b8) */
/* WARNING: Removing unreachable block (ram,0x014c08ac) */
/* WARNING: Removing unreachable block (ram,0x014c0a00) */
/* WARNING: Removing unreachable block (ram,0x014c0830) */

void Atlas_Gameplay_FTUE_BaseLayerSequenceManager__OnAfterExitGameContextScreen(long param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  int extraout_w1;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar20;
  undefined1 **ppuVar21;
  undefined *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  code *pcStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar19 = 0x3eb4000;
  if ((bRam0000000003eb4ece & 1) == 0) {
    func_0x00f78a20(0x3d2a280);
    func_0x00f78a20(0x3d1b540);
    func_0x00f78a20(0x3d52808);
    bRam0000000003eb4ece = 1;
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar13 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                         (*(long *)(param_1 + 0x30),0), lVar13 != 0)) {
    unaff_x22 = 0x3d52000;
    unaff_x23 = 0x3d2a000;
    lVar13 = *(long *)(lVar13 + 0x18);
    unaff_x21 = (long *)func_0x00f78aec(/*System.Action<PlayableDirector>_TypeInfo*/ uRam0000000003d1b540);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,param_1,uRam0000000003d52808,uRam0000000003d2a280);
    uVar19 = 0;
    if (lVar13 != 0) {
      /*UnityEngine.Playables.PlayableDirector$$remove_stopped*/ func_0x0328343c(lVar13,unaff_x21,0);
      *(undefined8 *)(param_1 + 0x30) = 0;
      return;
    }
  }
  auVar25 = func_0x00f78af4();
  lVar17 = auVar25._8_8_;
  lVar13 = auVar25._0_8_;
  puVar6 = &uStack_70;
  puStack_48 = &Atlas_Gameplay_FTUE_BaseLayerSequenceManager__SetCurrentFTUESequence;
  uStack_70 = unaff_x22;
  plStack_68 = unaff_x21;
  uStack_60 = uVar19;
  lStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ecf & 1) == 0) {
    func_0x00f78a20(0x3d3cd48);
    bRam0000000003eb4ecf = 1;
  }
  plVar10 = plStack_68;
  uVar19 = uStack_70;
  if ((lVar17 == 0) || (*(int *)(lVar17 + 0x18) == 0)) {
    return;
  }
  *(long *)(lVar13 + 0x10) = lVar17;
  *(undefined4 *)(lVar13 + 0x28) = 0;
  ppuVar21 = &puStack_50;
  if ((bRam0000000003eb4ed0 & 1) == 0) {
    func_0x00f78a20(0x3d3cd48);
    func_0x00f78a20(0x3d3cd50);
    bRam0000000003eb4ed0 = 1;
  }
  lVar17 = *(long *)(lVar13 + 0x10);
  if (lVar17 != 0) {
    uVar1 = *(uint *)(lVar13 + 0x28);
    if ((int)uVar1 < (int)*(uint *)(lVar17 + 0x18)) {
      if (*(uint *)(lVar17 + 0x18) <= uVar1) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar17 = *(long *)(lVar17 + 0x10) + (long)(int)uVar1 * 0xc;
      /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$PlaySequence*/ func_0x01536cd0(lVar13,*(undefined8 *)(lVar17 + 0x20),*(undefined4 *)(lVar17 + 0x28));
      *(int *)(lVar13 + 0x28) = *(int *)(lVar13 + 0x28) + 1;
    }
    return;
  }
  plVar11 = (long *)func_0x00f78af4();
  pcStack_78 = Atlas_Gameplay_FTUE_BaseLayerSequenceManager__PlayResetSequence;
  if ((bRam0000000003eb4ed1 & 1) == 0) {
    func_0x00f78a20(0x3d2a280);
    func_0x00f78a20(0x3d1b540);
    func_0x00f78a20(0x3d52808);
    func_0x00f78a20(0x3d21b50);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ed1 = 1;
  }
  switch((int)plVar11[3]) {
  case 1:
    if ((plVar11[6] != 0) &&
       (lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar11[6],0),
       lVar17 != 0)) {
      puVar8 = (undefined8 *)(lVar17 + 0x28);
code_r0x01536ab8:
      if (plVar11[6] != 0) {
        uVar18 = *puVar8;
        lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar11[6],0);
        if ((lVar17 != 0) && (*(long *)(lVar17 + 0x18) != 0)) {
          /*UnityEngine.Playables.PlayableDirector$$set_extrapolationMode*/ func_0x0328223c(*(long *)(lVar17 + 0x18),2,0);
          if ((plVar11[6] != 0) &&
             (lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar11[6],0),
             lVar17 != 0)) {
            lVar17 = *(long *)(lVar17 + 0x18);
            uVar12 = func_0x00f78aec(/*System.Action<PlayableDirector>_TypeInfo*/ uRam0000000003d1b540);
            /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar12,plVar11,uRam0000000003d52808,uRam0000000003d2a280);
            if (lVar17 != 0) {
              /*UnityEngine.Playables.PlayableDirector$$add_stopped*/ func_0x0328339c(lVar17,uVar12,0);
              if ((plVar11[6] != 0) &&
                 (lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                                     (plVar11[6],0), lVar17 != 0)) {
                auVar25._8_8_ = uVar18;
                auVar25._0_8_ = *(undefined8 *)(lVar17 + 0x18);
                lVar17 = 1;
                plVar11 = (long *)0x0;
code_r0x014c07d0:
                lVar14 = auVar25._0_8_;
                puVar4 = (undefined1 *)((long)puVar6 + -0x20);
                *(long **)((long)puVar6 + -0x20) = plVar11;
                *(long *)((long)puVar6 + -0x18) = lVar13;
                *(undefined1 ***)((long)puVar6 + -0x10) = ppuVar21;
                *(code **)((long)puVar6 + -8) = pcStack_78;
                if (lVar14 == 0) {
                  auVar24 = func_0x00f78af4(0,auVar25._8_8_);
                  auVar23._8_8_ = lVar17;
                  auVar23._0_8_ = auVar24._0_8_;
                  puVar4 = (undefined1 *)((long)puVar6 + -0x50);
                  *(undefined8 *)((long)puVar6 + -0x50) = uVar19;
                  *(long **)((long)puVar6 + -0x48) = plVar10;
                  *(long **)((long)puVar6 + -0x40) = plVar11;
                  *(long *)((long)puVar6 + -0x38) = lVar13;
                  *(undefined1 **)((long)puVar6 + -0x30) = (undefined1 *)((long)puVar6 + -0x10);
                  *(undefined **)((long)puVar6 + -0x28) =
                       &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
                  puVar20 = (undefined1 *)((long)puVar6 + -0x30);
                  puVar22 = &UNK_014c082c;
                }
                else {
                  /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(lVar14,auVar25._8_8_,0);
                  auVar24._8_8_ = plVar10;
                  auVar24._0_8_ = *(undefined8 *)((long)puVar6 + -0x20);
                  *(undefined8 *)((long)puVar6 + -0x20) = *(undefined8 *)((long)puVar6 + -0x20);
                  *(undefined8 *)((long)puVar6 + -0x18) = *(undefined8 *)((long)puVar6 + -0x18);
                  *(undefined8 *)((long)puVar6 + -0x10) = *(undefined8 *)((long)puVar6 + -0x10);
                  *(undefined8 *)((long)puVar6 + -8) = *(undefined8 *)((long)puVar6 + -8);
                  puVar20 = (undefined1 *)((long)puVar6 + -0x10);
                  if ((int)lVar17 == 0) {
                    if (lVar14 != 0) goto code_r0x014c034c;
                  }
                  else if ((lVar14 != 0) && (lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar14,0), lVar13 != 0)) {
                    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,1,0);
code_r0x014c034c:
                    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar14,0);
                    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar14,0);
                    *(undefined8 *)((long)puVar6 + -0x20) = *(undefined8 *)((long)puVar6 + -0x20);
                    *(undefined8 *)((long)puVar6 + -0x18) = *(undefined8 *)((long)puVar6 + -0x18);
                    *(undefined8 *)((long)puVar6 + -0x10) = *(undefined8 *)((long)puVar6 + -0x10);
                    *(undefined8 *)((long)puVar6 + -8) = *(undefined8 *)((long)puVar6 + -8);
                    if (pcRam0000000003ec1b90 == (code *)0x0) {
                      pcRam0000000003ec1b90 =
                           (code *)func_0x00f789d4("UnityEngine.Playables.PlayableDirector::Play()")
                      ;
                    }
                    /* WARNING: Could not recover jumptable at 0x0328295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000003ec1b90)(lVar14);
                    return;
                  }
                  puVar22 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
                  auVar23 = func_0x00f78af4();
                  lVar17 = lVar14;
                }
                plVar10 = auVar24._8_8_;
                auVar2._8_8_ = auVar24._0_8_;
                auVar2._0_8_ = lVar17;
                lVar13 = auVar23._0_8_;
                puVar5 = puVar4 + -0x20;
                *(long *)(puVar4 + -0x20) = auVar24._0_8_;
                *(long *)(puVar4 + -0x18) = lVar17;
                *(undefined1 **)(puVar4 + -0x10) = puVar20;
                *(undefined **)(puVar4 + -8) = puVar22;
                puVar20 = puVar4 + -0x10;
                if (lVar13 == 0) {
code_r0x014c03e4:
                  puVar22 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
                  lVar13 = func_0x00f78af4();
                }
                else {
                  /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar13,0);
                  /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar13,0);
                  /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar13,0);
                  if (auVar23._8_4_ != 0) {
                    lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar13,0);
                    auVar2 = auVar23;
                    if (lVar17 == 0) goto code_r0x014c03e4;
                    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar17,0,0);
                  }
                  puVar20 = *(undefined1 **)(puVar4 + -0x10);
                  puVar22 = *(undefined **)(puVar4 + -8);
                  auVar2._8_8_ = *(undefined8 *)(puVar4 + -0x20);
                  auVar2._0_8_ = *(undefined8 *)(puVar4 + -0x18);
                  puVar5 = puVar4;
                }
                puVar6 = (undefined8 *)(puVar5 + -0x50);
                *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
                *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
                *(undefined8 *)(puVar5 + -0x40) = unaff_x24;
                *(undefined8 *)(puVar5 + -0x38) = unaff_x23;
                *(undefined8 *)(puVar5 + -0x30) = uVar19;
                *(long **)(puVar5 + -0x28) = plVar10;
                *(long *)(puVar5 + -0x20) = auVar2._8_8_;
                *(long *)(puVar5 + -0x18) = auVar2._0_8_;
                *(undefined1 **)(puVar5 + -0x10) = puVar20;
                *(undefined **)(puVar5 + -8) = puVar22;
                ppuVar21 = (undefined1 **)(puVar5 + -0x10);
                if ((bRam0000000003eb4b15 & 1) == 0) {
                  func_0x00f78a20(0x3d1faa8);
                  func_0x00f78a20(0x3d21b60);
                  func_0x00f78a20(0x3d220f0);
                  func_0x00f78a20(0x3d1d180);
                  func_0x00f78a20(0x3d1d390);
                  func_0x00f78a20(0x3d22180);
                  func_0x00f78a20(0x3d23990);
                  func_0x00f78a20(0x3d25280);
                  bRam0000000003eb4b15 = 1;
                }
                if (lVar13 != 0) {
                  uVar19 = 0x3d23990;
                  plVar11 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar13,0);
                  if (plVar11 == (long *)0x0) {
code_r0x014c04b4:
                    plVar11 = (long *)0x0;
                  }
                  else {
                    if (*(byte *)(*plVar11 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300))
                    goto code_r0x014c04b4;
                    if (*(long *)(*(long *)(*plVar11 + 200) +
                                  (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8 + -8) !=
                        /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
                      plVar11 = (long *)0x0;
                    }
                  }
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar17 = 0;
                  iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar11,0);
                  if (iVar7 == 0) {
                    return;
                  }
                  if ((plVar11 != (long *)0x0) &&
                     (plVar11 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar11,0), plVar11 != (long *)0x0)) {
                    lVar14 = *plVar11;
                    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                    if (uVar15 != 0) {
                      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
                          puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                          goto code_r0x014c0568;
                        }
                        piVar16 = piVar16 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    lVar17 = 0;
                    puVar8 = (undefined8 *)func_0x00fac1f0(plVar11);
code_r0x014c0568:
                    plVar11 = (long *)(*(code *)*puVar8)(plVar11,puVar8[1]);
                    if (plVar11 != (long *)0x0) {
                      unaff_x23 = 0x3d22180;
                      unaff_x24 = 0x3d1d390;
                      unaff_x25 = 0x3d1faa8;
                      unaff_x26 = 0x3d21b60;
code_r0x014c059c:
                      lVar14 = *plVar11;
                      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                      if (uVar15 != 0) {
                        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                            puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                            goto code_r0x014c05e8;
                          }
                          piVar16 = piVar16 + 4;
                          uVar15 = uVar15 - 1;
                        } while (uVar15 != 0);
                      }
                      lVar17 = 0;
                      puVar8 = (undefined8 *)func_0x00fac1f0(plVar11);
code_r0x014c05e8:
                      uVar15 = (*(code *)*puVar8)(plVar11,puVar8[1]);
                      if ((uVar15 & 1) != 0) {
                        lVar14 = *plVar11;
                        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                        if (uVar15 != 0) {
                          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar16 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                              puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                              goto code_r0x014c0644;
                            }
                            piVar16 = piVar16 + 4;
                            uVar15 = uVar15 - 1;
                          } while (uVar15 != 0);
                        }
                        lVar17 = 0;
                        puVar8 = (undefined8 *)func_0x00fac1f0(plVar11);
code_r0x014c0644:
                        plVar9 = (long *)(*(code *)*puVar8)(plVar11,puVar8[1]);
                        if (plVar9 != (long *)0x0) {
                          if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar9 + 300)) &&
                             (*(long *)(*(long *)(*plVar9 + 200) +
                                        (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                              /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
                            plVar10 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar13,plVar9,0);
                            if (plVar10 == (long *)0x0) {
                              plVar10 = (long *)0x0;
                            }
                            else if (*plVar10 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60) {
                              plVar10 = (long *)0x0;
                            }
                            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            lVar17 = 0;
                            uVar15 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar10,0);
                            if ((uVar15 & 1) != 0) {
                              if (plVar10 == (long *)0x0) goto code_r0x014c0778;
                              lVar17 = 0;
                              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(plVar10,0);
                            }
                          }
                        }
                        goto code_r0x014c059c;
                      }
                      lVar13 = 0;
                      do {
                        if (plVar11 != (long *)0x0) {
                          lVar14 = *plVar11;
                          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                          if (uVar15 != 0) {
                            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                                puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                                goto code_r0x014c074c;
                              }
                              piVar16 = piVar16 + 4;
                              uVar15 = uVar15 - 1;
                            } while (uVar15 != 0);
                          }
                          lVar17 = 0;
                          puVar8 = (undefined8 *)func_0x00fac1f0(plVar11);
code_r0x014c074c:
                          (*(code *)*puVar8)(plVar11,puVar8[1]);
                        }
                        if (lVar13 == 0) {
                          return;
                        }
                        func_0x00f78ac0(lVar13,0);
                        if (extraout_w1 != 1) goto code_r0x014c07cc;
                        plVar9 = (long *)___cxa_begin_catch();
                        lVar13 = *plVar9;
                        ___cxa_end_catch();
                      } while( true );
                    }
                    func_0x00f78af4();
                    goto code_r0x014c0784;
                  }
                }
                func_0x00f78af4();
code_r0x014c0778:
                func_0x00f78af4();
code_r0x014c0784:
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x14c0788);
                (*pcVar3)();
              }
            }
          }
        }
      }
    }
    break;
  case 2:
    if ((plVar11[6] != 0) &&
       (lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar11[6],0),
       lVar17 != 0)) {
      puVar8 = (undefined8 *)(lVar17 + 0x38);
      goto code_r0x01536ab8;
    }
    break;
  case 3:
    if ((plVar11[6] != 0) &&
       (lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar11[6],0),
       lVar17 != 0)) {
      puVar8 = (undefined8 *)(lVar17 + 0x48);
      goto code_r0x01536ab8;
    }
    break;
  case 4:
    if ((plVar11[6] != 0) &&
       (lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar11[6],0),
       lVar17 != 0)) {
      puVar8 = (undefined8 *)(lVar17 + 0x58);
      goto code_r0x01536ab8;
    }
    break;
  case 5:
    if ((plVar11[6] != 0) &&
       (lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar11[6],0),
       lVar17 != 0)) {
      puVar8 = (undefined8 *)(lVar17 + 0x78);
      goto code_r0x01536ab8;
    }
    break;
  case 6:
    if (plVar11[6] != 0) {
      plVar11 = *(long **)(plVar11[6] + 0x28);
      if (plVar11 != (long *)0x0) {
        if ((*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.UI.Screens.GameInProgressScreenBehaviour_TypeInfo*/ lRam0000000003d21b50 + 300)) ||
           (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(/*Atlas.UI.Screens.GameInProgressScreenBehaviour_TypeInfo*/ lRam0000000003d21b50 + 300) * 8 +
                     -8) != /*Atlas.UI.Screens.GameInProgressScreenBehaviour_TypeInfo*/ lRam0000000003d21b50)) goto code_r0x01536b80;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar11,0,0);
      if (iVar7 == 0) {
        return;
      }
      if (plVar11 != (long *)0x0) {
        if ((bRam0000000003eb5237 & 1) == 0) {
          func_0x00f78a20(0x3d577e8,0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb5237 = 1;
        }
        lVar13 = plVar11[0x12];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar15 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar13,0,0);
        if ((uVar15 & 1) != 0) {
          return;
        }
        if (plVar11[0x12] != 0) {
          lVar13 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar11[0x12],uRam0000000003d577e8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar13,0,0);
          if (iVar7 == 0) {
            return;
          }
          if (lVar13 != 0) {
            if (pcRam0000000003ec2ef8 == (code *)0x0) {
              pcRam0000000003ec2ef8 =
                   (code *)func_0x00f789d4("UnityEngine.Canvas::set_sortingOrder(System.Int32)");
            }
                    /* WARNING: Could not recover jumptable at 0x032f3bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003ec2ef8)(lVar13,0);
            return;
          }
        }
        auVar26 = func_0x00f78af4();
        *(int *)(auVar26._0_8_ + 0x290) = auVar26._8_4_;
        return;
      }
    }
    break;
  case 7:
    if ((plVar11[6] != 0) &&
       (lVar17 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar11[6],0),
       lVar17 != 0)) {
      puVar8 = (undefined8 *)(lVar17 + 0x88);
      goto code_r0x01536ab8;
    }
    break;
  default:
    return;
  }
  func_0x00f78af4();
code_r0x01536b80:
  auVar25 = func_0x00f78e5c(plVar11);
  *(long *)(auVar25._0_8_ + 0x30) = auVar25._8_8_;
  return;
code_r0x014c07cc:
  pcStack_78 = (code *)&Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  auVar25 = __Unwind_Resume();
  goto code_r0x014c07d0;
}



// ============================================================
// RVA: 0x1536c60 | Atlas.Gameplay.FTUE.BaseLayerSequenceManager.SetCurrentFTUESequence
// ============================================================

/* WARNING: Possible PIC construction at 0x014c0828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c082c) */
/* WARNING: Removing unreachable block (ram,0x014c0858) */
/* WARNING: Removing unreachable block (ram,0x014c0888) */
/* WARNING: Removing unreachable block (ram,0x014c089c) */
/* WARNING: Removing unreachable block (ram,0x014c08a4) */
/* WARNING: Removing unreachable block (ram,0x014c08a8) */
/* WARNING: Removing unreachable block (ram,0x014c08b4) */
/* WARNING: Removing unreachable block (ram,0x014c08c0) */
/* WARNING: Removing unreachable block (ram,0x014c08c8) */
/* WARNING: Removing unreachable block (ram,0x014c08d0) */
/* WARNING: Removing unreachable block (ram,0x014c0914) */
/* WARNING: Removing unreachable block (ram,0x014c091c) */
/* WARNING: Removing unreachable block (ram,0x014c0920) */
/* WARNING: Removing unreachable block (ram,0x014c0954) */
/* WARNING: Removing unreachable block (ram,0x014c0990) */
/* WARNING: Removing unreachable block (ram,0x014c0998) */
/* WARNING: Removing unreachable block (ram,0x014c099c) */
/* WARNING: Removing unreachable block (ram,0x014c09d0) */
/* WARNING: Removing unreachable block (ram,0x014c09d8) */
/* WARNING: Removing unreachable block (ram,0x014c09e0) */
/* WARNING: Removing unreachable block (ram,0x014c09e8) */
/* WARNING: Removing unreachable block (ram,0x014c0a18) */
/* WARNING: Removing unreachable block (ram,0x014c09f0) */
/* WARNING: Removing unreachable block (ram,0x014c08b8) */
/* WARNING: Removing unreachable block (ram,0x014c08ac) */
/* WARNING: Removing unreachable block (ram,0x014c0a00) */
/* WARNING: Removing unreachable block (ram,0x014c0830) */

void Atlas_Gameplay_FTUE_BaseLayerSequenceManager__SetCurrentFTUESequence(long param_1,long param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  int extraout_w1;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  code *pcStack_38;
  
  puVar5 = &stack0xffffffffffffffd0;
  if ((bRam0000000003eb4ecf & 1) == 0) {
    func_0x00f78a20(0x3d3cd48);
    bRam0000000003eb4ecf = 1;
  }
  if ((param_2 == 0) || (*(int *)(param_2 + 0x18) == 0)) {
    return;
  }
  *(long *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((bRam0000000003eb4ed0 & 1) == 0) {
    func_0x00f78a20(0x3d3cd48);
    func_0x00f78a20(0x3d3cd50);
    bRam0000000003eb4ed0 = 1;
  }
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 != 0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    if ((int)uVar1 < (int)*(uint *)(lVar15 + 0x18)) {
      if (*(uint *)(lVar15 + 0x18) <= uVar1) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(lVar15 + 0x10) + (long)(int)uVar1 * 0xc;
      /*Atlas.Gameplay.FTUE.BaseLayerSequenceManager$$PlaySequence*/ func_0x01536cd0(param_1,*(undefined8 *)(lVar15 + 0x20),*(undefined4 *)(lVar15 + 0x28));
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    return;
  }
  plVar9 = (long *)func_0x00f78af4();
  pcStack_38 = Atlas_Gameplay_FTUE_BaseLayerSequenceManager__PlayResetSequence;
  if ((bRam0000000003eb4ed1 & 1) == 0) {
    func_0x00f78a20(0x3d2a280);
    func_0x00f78a20(0x3d1b540);
    func_0x00f78a20(0x3d52808);
    func_0x00f78a20(0x3d21b50);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4ed1 = 1;
  }
  switch((int)plVar9[3]) {
  case 1:
    if ((plVar9[6] != 0) &&
       (lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar9[6],0),
       lVar15 != 0)) {
      puVar7 = (undefined8 *)(lVar15 + 0x28);
code_r0x01536ab8:
      if (plVar9[6] != 0) {
        uVar16 = *puVar7;
        lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar9[6],0);
        if ((lVar15 != 0) && (*(long *)(lVar15 + 0x18) != 0)) {
          /*UnityEngine.Playables.PlayableDirector$$set_extrapolationMode*/ func_0x0328223c(*(long *)(lVar15 + 0x18),2,0);
          if ((plVar9[6] != 0) &&
             (lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar9[6],0),
             lVar15 != 0)) {
            lVar15 = *(long *)(lVar15 + 0x18);
            uVar10 = func_0x00f78aec(/*System.Action<PlayableDirector>_TypeInfo*/ uRam0000000003d1b540);
            /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar10,plVar9,uRam0000000003d52808,uRam0000000003d2a280);
            if (lVar15 != 0) {
              /*UnityEngine.Playables.PlayableDirector$$add_stopped*/ func_0x0328339c(lVar15,uVar10,0);
              if ((plVar9[6] != 0) &&
                 (lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                                     (plVar9[6],0), lVar15 != 0)) {
                auVar20._8_8_ = uVar16;
                auVar20._0_8_ = *(undefined8 *)(lVar15 + 0x18);
                lVar15 = 1;
                plVar9 = (long *)0x0;
code_r0x014c07d0:
                lVar12 = auVar20._0_8_;
                puVar4 = puVar5 + -0x20;
                *(long **)(puVar5 + -0x20) = plVar9;
                *(long *)(puVar5 + -0x18) = param_1;
                *(undefined1 **)(puVar5 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
                *(code **)(puVar5 + -8) = pcStack_38;
                if (lVar12 == 0) {
                  auVar21 = func_0x00f78af4(0,auVar20._8_8_);
                  auVar19._8_8_ = lVar15;
                  auVar19._0_8_ = auVar21._0_8_;
                  puVar4 = puVar5 + -0x50;
                  *(undefined8 *)(puVar5 + -0x50) = unaff_x22;
                  *(long **)(puVar5 + -0x48) = unaff_x21;
                  *(long **)(puVar5 + -0x40) = plVar9;
                  *(long *)(puVar5 + -0x38) = param_1;
                  *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
                  *(undefined **)(puVar5 + -0x28) =
                       &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
                  puVar17 = puVar5 + -0x30;
                  puVar18 = &UNK_014c082c;
                }
                else {
                  /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(lVar12,auVar20._8_8_,0);
                  auVar21._8_8_ = unaff_x21;
                  auVar21._0_8_ = *(undefined8 *)(puVar5 + -0x20);
                  *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
                  *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
                  *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
                  *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
                  puVar17 = puVar5 + -0x10;
                  if ((int)lVar15 == 0) {
                    if (lVar12 != 0) goto code_r0x014c034c;
                  }
                  else if ((lVar12 != 0) && (lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0), lVar15 != 0)) {
                    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar15,1,0);
code_r0x014c034c:
                    /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar12,0);
                    /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar12,0);
                    *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
                    *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
                    *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
                    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
                    if (pcRam0000000003ec1b90 == (code *)0x0) {
                      pcRam0000000003ec1b90 =
                           (code *)func_0x00f789d4("UnityEngine.Playables.PlayableDirector::Play()")
                      ;
                    }
                    /* WARNING: Could not recover jumptable at 0x0328295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000003ec1b90)(lVar12);
                    return;
                  }
                  puVar18 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
                  auVar19 = func_0x00f78af4();
                  lVar15 = lVar12;
                }
                unaff_x21 = auVar21._8_8_;
                auVar2._8_8_ = auVar21._0_8_;
                auVar2._0_8_ = lVar15;
                lVar12 = auVar19._0_8_;
                register0x00000008 = (BADSPACEBASE *)(puVar4 + -0x20);
                *(long *)(puVar4 + -0x20) = auVar21._0_8_;
                *(long *)(puVar4 + -0x18) = lVar15;
                *(undefined1 **)(puVar4 + -0x10) = puVar17;
                *(undefined **)(puVar4 + -8) = puVar18;
                puVar17 = puVar4 + -0x10;
                if (lVar12 == 0) {
code_r0x014c03e4:
                  puVar18 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
                  lVar12 = func_0x00f78af4();
                }
                else {
                  /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar12,0);
                  /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar12,0);
                  /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar12,0);
                  if (auVar19._8_4_ != 0) {
                    lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0);
                    auVar2 = auVar19;
                    if (lVar15 == 0) goto code_r0x014c03e4;
                    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar15,0,0);
                  }
                  puVar17 = *(undefined1 **)(puVar4 + -0x10);
                  puVar18 = *(undefined **)(puVar4 + -8);
                  auVar2._8_8_ = *(undefined8 *)(puVar4 + -0x20);
                  auVar2._0_8_ = *(undefined8 *)(puVar4 + -0x18);
                  register0x00000008 = (BADSPACEBASE *)puVar4;
                }
                puVar5 = (undefined1 *)((long)register0x00000008 + -0x50);
                *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
                *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
                *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
                *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
                *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
                *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
                *(long *)((long)register0x00000008 + -0x20) = auVar2._8_8_;
                *(long *)((long)register0x00000008 + -0x18) = auVar2._0_8_;
                *(undefined1 **)((long)register0x00000008 + -0x10) = puVar17;
                *(undefined **)((long)register0x00000008 + -8) = puVar18;
                if ((bRam0000000003eb4b15 & 1) == 0) {
                  func_0x00f78a20(0x3d1faa8);
                  func_0x00f78a20(0x3d21b60);
                  func_0x00f78a20(0x3d220f0);
                  func_0x00f78a20(0x3d1d180);
                  func_0x00f78a20(0x3d1d390);
                  func_0x00f78a20(0x3d22180);
                  func_0x00f78a20(0x3d23990);
                  func_0x00f78a20(0x3d25280);
                  bRam0000000003eb4b15 = 1;
                }
                if (lVar12 != 0) {
                  unaff_x22 = 0x3d23990;
                  plVar9 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar12,0);
                  if (plVar9 == (long *)0x0) {
code_r0x014c04b4:
                    plVar9 = (long *)0x0;
                  }
                  else {
                    if (*(byte *)(*plVar9 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300))
                    goto code_r0x014c04b4;
                    if (*(long *)(*(long *)(*plVar9 + 200) +
                                  (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8 + -8) !=
                        /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
                      plVar9 = (long *)0x0;
                    }
                  }
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  lVar15 = 0;
                  iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar9,0);
                  if (iVar6 == 0) {
                    return;
                  }
                  if ((plVar9 != (long *)0x0) &&
                     (plVar9 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar9,0), plVar9 != (long *)0x0)) {
                    lVar11 = *plVar9;
                    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
                    if (uVar13 != 0) {
                      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
                          puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                          goto code_r0x014c0568;
                        }
                        piVar14 = piVar14 + 4;
                        uVar13 = uVar13 - 1;
                      } while (uVar13 != 0);
                    }
                    lVar15 = 0;
                    puVar7 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x014c0568:
                    plVar9 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
                    if (plVar9 != (long *)0x0) {
                      unaff_x23 = 0x3d22180;
                      unaff_x24 = 0x3d1d390;
                      unaff_x25 = 0x3d1faa8;
                      unaff_x26 = 0x3d21b60;
code_r0x014c059c:
                      lVar11 = *plVar9;
                      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
                      if (uVar13 != 0) {
                        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar14 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                            puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                            goto code_r0x014c05e8;
                          }
                          piVar14 = piVar14 + 4;
                          uVar13 = uVar13 - 1;
                        } while (uVar13 != 0);
                      }
                      lVar15 = 0;
                      puVar7 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x014c05e8:
                      uVar13 = (*(code *)*puVar7)(plVar9,puVar7[1]);
                      if ((uVar13 & 1) != 0) {
                        lVar11 = *plVar9;
                        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
                        if (uVar13 != 0) {
                          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar14 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                              puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                              goto code_r0x014c0644;
                            }
                            piVar14 = piVar14 + 4;
                            uVar13 = uVar13 - 1;
                          } while (uVar13 != 0);
                        }
                        lVar15 = 0;
                        puVar7 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x014c0644:
                        plVar8 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
                        if (plVar8 != (long *)0x0) {
                          if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar8 + 300)) &&
                             (*(long *)(*(long *)(*plVar8 + 200) +
                                        (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                              /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
                            unaff_x21 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar12,plVar8,0);
                            if (unaff_x21 == (long *)0x0) {
                              unaff_x21 = (long *)0x0;
                            }
                            else if (*unaff_x21 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60) {
                              unaff_x21 = (long *)0x0;
                            }
                            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            lVar15 = 0;
                            uVar13 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
                            if ((uVar13 & 1) != 0) {
                              if (unaff_x21 == (long *)0x0) goto code_r0x014c0778;
                              lVar15 = 0;
                              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(unaff_x21,0);
                            }
                          }
                        }
                        goto code_r0x014c059c;
                      }
                      param_1 = 0;
                      do {
                        if (plVar9 != (long *)0x0) {
                          lVar12 = *plVar9;
                          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                          if (uVar13 != 0) {
                            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar14 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                                puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                                goto code_r0x014c074c;
                              }
                              piVar14 = piVar14 + 4;
                              uVar13 = uVar13 - 1;
                            } while (uVar13 != 0);
                          }
                          lVar15 = 0;
                          puVar7 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x014c074c:
                          (*(code *)*puVar7)(plVar9,puVar7[1]);
                        }
                        if (param_1 == 0) {
                          return;
                        }
                        func_0x00f78ac0(param_1,0);
                        if (extraout_w1 != 1) goto code_r0x014c07cc;
                        plVar8 = (long *)___cxa_begin_catch();
                        param_1 = *plVar8;
                        ___cxa_end_catch();
                      } while( true );
                    }
                    func_0x00f78af4();
                    goto code_r0x014c0784;
                  }
                }
                func_0x00f78af4();
code_r0x014c0778:
                func_0x00f78af4();
code_r0x014c0784:
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x14c0788);
                (*pcVar3)();
              }
            }
          }
        }
      }
    }
    break;
  case 2:
    if ((plVar9[6] != 0) &&
       (lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar9[6],0),
       lVar15 != 0)) {
      puVar7 = (undefined8 *)(lVar15 + 0x38);
      goto code_r0x01536ab8;
    }
    break;
  case 3:
    if ((plVar9[6] != 0) &&
       (lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar9[6],0),
       lVar15 != 0)) {
      puVar7 = (undefined8 *)(lVar15 + 0x48);
      goto code_r0x01536ab8;
    }
    break;
  case 4:
    if ((plVar9[6] != 0) &&
       (lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar9[6],0),
       lVar15 != 0)) {
      puVar7 = (undefined8 *)(lVar15 + 0x58);
      goto code_r0x01536ab8;
    }
    break;
  case 5:
    if ((plVar9[6] != 0) &&
       (lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar9[6],0),
       lVar15 != 0)) {
      puVar7 = (undefined8 *)(lVar15 + 0x78);
      goto code_r0x01536ab8;
    }
    break;
  case 6:
    if (plVar9[6] != 0) {
      plVar9 = *(long **)(plVar9[6] + 0x28);
      if (plVar9 != (long *)0x0) {
        if ((*(byte *)(*plVar9 + 300) < *(byte *)(/*Atlas.UI.Screens.GameInProgressScreenBehaviour_TypeInfo*/ lRam0000000003d21b50 + 300)) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(/*Atlas.UI.Screens.GameInProgressScreenBehaviour_TypeInfo*/ lRam0000000003d21b50 + 300) * 8 +
                     -8) != /*Atlas.UI.Screens.GameInProgressScreenBehaviour_TypeInfo*/ lRam0000000003d21b50)) goto code_r0x01536b80;
      }
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar9,0,0);
      if (iVar6 == 0) {
        return;
      }
      if (plVar9 != (long *)0x0) {
        if ((bRam0000000003eb5237 & 1) == 0) {
          func_0x00f78a20(0x3d577e8,0);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb5237 = 1;
        }
        lVar15 = plVar9[0x12];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar13 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar15,0,0);
        if ((uVar13 & 1) != 0) {
          return;
        }
        if (plVar9[0x12] != 0) {
          lVar15 = /*UnityEngine.GameObject$$GetComponent<VirtualCamera>*/ func_0x0185d17c(plVar9[0x12],uRam0000000003d577e8);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar15,0,0);
          if (iVar6 == 0) {
            return;
          }
          if (lVar15 != 0) {
            if (pcRam0000000003ec2ef8 == (code *)0x0) {
              pcRam0000000003ec2ef8 =
                   (code *)func_0x00f789d4("UnityEngine.Canvas::set_sortingOrder(System.Int32)");
            }
                    /* WARNING: Could not recover jumptable at 0x032f3bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000003ec2ef8)(lVar15,0);
            return;
          }
        }
        auVar22 = func_0x00f78af4();
        *(int *)(auVar22._0_8_ + 0x290) = auVar22._8_4_;
        return;
      }
    }
    break;
  case 7:
    if ((plVar9[6] != 0) &&
       (lVar15 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour(plVar9[6],0),
       lVar15 != 0)) {
      puVar7 = (undefined8 *)(lVar15 + 0x88);
      goto code_r0x01536ab8;
    }
    break;
  default:
    return;
  }
  func_0x00f78af4();
code_r0x01536b80:
  auVar20 = func_0x00f78e5c(plVar9);
  *(long *)(auVar20._0_8_ + 0x30) = auVar20._8_8_;
  return;
code_r0x014c07cc:
  pcStack_38 = (code *)&Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
  auVar20 = __Unwind_Resume();
  goto code_r0x014c07d0;
}



// ============================================================
// RVA: 0x1536cd0 | Atlas.Gameplay.FTUE.BaseLayerSequenceManager.PlaySequence
// ============================================================

/* WARNING: Possible PIC construction at 0x014c0828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01536fb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c082c) */
/* WARNING: Removing unreachable block (ram,0x014c0858) */
/* WARNING: Removing unreachable block (ram,0x014c0888) */
/* WARNING: Removing unreachable block (ram,0x014c089c) */
/* WARNING: Removing unreachable block (ram,0x014c08a4) */
/* WARNING: Removing unreachable block (ram,0x014c08a8) */
/* WARNING: Removing unreachable block (ram,0x014c08b4) */
/* WARNING: Removing unreachable block (ram,0x014c08c0) */
/* WARNING: Removing unreachable block (ram,0x014c08c8) */
/* WARNING: Removing unreachable block (ram,0x014c08d0) */
/* WARNING: Removing unreachable block (ram,0x014c0914) */
/* WARNING: Removing unreachable block (ram,0x014c091c) */
/* WARNING: Removing unreachable block (ram,0x014c0920) */
/* WARNING: Removing unreachable block (ram,0x014c0954) */
/* WARNING: Removing unreachable block (ram,0x014c0990) */
/* WARNING: Removing unreachable block (ram,0x014c0998) */
/* WARNING: Removing unreachable block (ram,0x014c099c) */
/* WARNING: Removing unreachable block (ram,0x014c09d0) */
/* WARNING: Removing unreachable block (ram,0x014c09d8) */
/* WARNING: Removing unreachable block (ram,0x014c09e0) */
/* WARNING: Removing unreachable block (ram,0x014c09e8) */
/* WARNING: Removing unreachable block (ram,0x014c0a18) */
/* WARNING: Removing unreachable block (ram,0x014c09f0) */
/* WARNING: Removing unreachable block (ram,0x014c08b8) */
/* WARNING: Removing unreachable block (ram,0x014c08ac) */
/* WARNING: Removing unreachable block (ram,0x014c0a00) */
/* WARNING: Removing unreachable block (ram,0x014c0830) */
/* WARNING: Removing unreachable block (ram,0x01536fb8) */

void Atlas_Gameplay_FTUE_BaseLayerSequenceManager__PlaySequence
               (long param_1,ulong param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar13;
  long *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *puVar14;
  undefined1 **ppuVar15;
  undefined1 *unaff_x29;
  undefined *puVar16;
  undefined *unaff_x30;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  *(ulong *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(bool *)(param_1 + 0x38) = (param_2 & 0xff00000000) != 0;
  if (*(char *)(param_1 + 0x39) == '\0' || (param_2 & 0xff00000000) == 0) {
LAB_01536d18:
    if (*(long *)(param_1 + 0x40) != 0) {
      /*System.Action$$Invoke*/ func_0x02924c90(*(long *)(param_1 + 0x40),0);
    }
    if (*(char *)(param_1 + 0x1c) != '\0') {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_01536eb4;
      Atlas_UI_Screens_GameInProgressScreen__SetInputEnabled(*(long *)(param_1 + 0x30),0,0);
    }
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 0:
      return;
    case 1:
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                            (*(long *)(param_1 + 0x30),0), lVar8 != 0)) {
        puVar7 = (undefined8 *)(lVar8 + 0x20);
code_r0x01536e58:
        uVar13 = *puVar7;
        goto code_r0x01536e5c;
      }
      break;
    case 2:
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                            (*(long *)(param_1 + 0x30),0), lVar8 != 0)) {
        puVar7 = (undefined8 *)(lVar8 + 0x30);
        goto code_r0x01536e58;
      }
      break;
    case 3:
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                            (*(long *)(param_1 + 0x30),0), lVar8 != 0)) {
        puVar7 = (undefined8 *)(lVar8 + 0x40);
        goto code_r0x01536e58;
      }
      break;
    case 4:
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                            (*(long *)(param_1 + 0x30),0), lVar8 != 0)) {
        puVar7 = (undefined8 *)(lVar8 + 0x50);
        goto code_r0x01536e58;
      }
      break;
    case 5:
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                            (*(long *)(param_1 + 0x30),0), lVar8 != 0)) {
        puVar7 = (undefined8 *)(lVar8 + 0x70);
        goto code_r0x01536e58;
      }
      break;
    case 6:
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                            (*(long *)(param_1 + 0x30),0), lVar8 != 0)) {
        puVar7 = (undefined8 *)(lVar8 + 0x60);
        goto code_r0x01536e58;
      }
      break;
    case 7:
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                            (*(long *)(param_1 + 0x30),0), lVar8 != 0)) {
        puVar7 = (undefined8 *)(lVar8 + 0x80);
        goto code_r0x01536e58;
      }
      break;
    case 8:
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                            (*(long *)(param_1 + 0x30),0), lVar8 != 0)) {
        puVar7 = (undefined8 *)(lVar8 + 0x68);
        goto code_r0x01536e58;
      }
      break;
    default:
      uVar13 = 0;
code_r0x01536e5c:
      if (((*(long *)(param_1 + 0x30) != 0) &&
          (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                             (*(long *)(param_1 + 0x30),0), lVar8 != 0)) &&
         (*(long *)(lVar8 + 0x18) != 0)) {
        /*UnityEngine.Playables.PlayableDirector$$set_extrapolationMode*/ func_0x0328223c(*(long *)(lVar8 + 0x18),1,0);
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                              (*(long *)(param_1 + 0x30),0), lVar8 != 0)) {
          auVar19._8_8_ = uVar13;
          auVar19._0_8_ = *(undefined8 *)(lVar8 + 0x18);
          lVar8 = 1;
          goto code_r0x014c07d0;
        }
      }
    }
  }
  else if (*(long *)(param_1 + 0x30) != 0) {
    Atlas_UI_Screens_GameInProgressScreen__SetInputEnabled(*(long *)(param_1 + 0x30),0,0);
    goto LAB_01536d18;
  }
LAB_01536eb4:
  lVar8 = func_0x00f78af4();
  puVar4 = &stack0xffffffffffffffa0;
  puStack_28 = &Atlas_Gameplay_FTUE_BaseLayerSequenceManager__ResetSequenceStopped;
  ppuVar15 = &puStack_30;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ed2 & 1) == 0) {
    func_0x00f78a20(0x3d2a280);
    func_0x00f78a20(0x3d1b540);
    func_0x00f78a20(0x3d52808);
    bRam0000000003eb4ed2 = 1;
  }
  if ((*(long *)(lVar8 + 0x30) != 0) &&
     (lVar10 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                         (*(long *)(lVar8 + 0x30),0), lVar10 != 0)) {
    unaff_x22 = 0x3d52000;
    unaff_x23 = 0x3d2a000;
    lVar10 = *(long *)(lVar10 + 0x18);
    auVar1._8_8_ = lVar10;
    auVar1._0_8_ = lVar8;
    unaff_x21 = (long *)func_0x00f78aec(/*System.Action<PlayableDirector>_TypeInfo*/ uRam0000000003d1b540);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,lVar8,uRam0000000003d52808,uRam0000000003d2a280);
    if (lVar10 != 0) {
      /*UnityEngine.Playables.PlayableDirector$$remove_stopped*/ func_0x0328343c(lVar10,unaff_x21,0);
      *(undefined1 *)(lVar8 + 0x38) = 0;
      if (*(char *)(lVar8 + 0x39) != '\0') {
        if (*(long *)(lVar8 + 0x30) == 0) goto code_r0x01536fd4;
        Atlas_UI_Screens_GameInProgressScreen__SetInputEnabled(*(long *)(lVar8 + 0x30),1,0);
      }
      if (*(long *)(lVar8 + 0x48) != 0) {
        /*System.Action$$Invoke*/ func_0x02924c90(*(long *)(lVar8 + 0x48),0);
      }
      if ((*(long *)(lVar8 + 0x30) != 0) &&
         (lVar8 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                            (*(long *)(lVar8 + 0x30),0), lVar8 != 0)) {
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *(ulong *)(lVar8 + 0x18);
        puVar16 = &UNK_01536fb8;
        while( true ) {
          lVar10 = auVar18._0_8_;
          register0x00000008 = (BADSPACEBASE *)(puVar4 + -0x50);
          *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
          *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
          *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
          *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
          *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
          *(long **)(puVar4 + -0x28) = unaff_x21;
          *(long *)(puVar4 + -0x20) = auVar1._8_8_;
          *(long *)(puVar4 + -0x18) = auVar1._0_8_;
          *(undefined1 ***)(puVar4 + -0x10) = ppuVar15;
          *(undefined **)(puVar4 + -8) = puVar16;
          unaff_x29 = puVar4 + -0x10;
          if ((bRam0000000003eb4b15 & 1) == 0) {
            func_0x00f78a20(0x3d1faa8,auVar18._8_8_);
            func_0x00f78a20(0x3d21b60);
            func_0x00f78a20(0x3d220f0);
            func_0x00f78a20(0x3d1d180);
            func_0x00f78a20(0x3d1d390);
            func_0x00f78a20(0x3d22180);
            func_0x00f78a20(0x3d23990);
            func_0x00f78a20(0x3d25280);
            bRam0000000003eb4b15 = 1;
          }
          if (lVar10 == 0) break;
          unaff_x22 = 0x3d23990;
          plVar6 = (long *)/*UnityEngine.Playables.PlayableDirector$$get_playableAsset*/ func_0x0328235c(lVar10,0);
          if (plVar6 == (long *)0x0) {
code_r0x014c04b4:
            plVar6 = (long *)0x0;
          }
          else {
            if (*(byte *)(*plVar6 + 300) < *(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300))
            goto code_r0x014c04b4;
            if (*(long *)(*(long *)(*plVar6 + 200) +
                          (ulong)*(byte *)(/*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280 + 300) * 8 + -8) !=
                /*UnityEngine.Timeline.TimelineAsset_TypeInfo*/ lRam0000000003d25280) {
              plVar6 = (long *)0x0;
            }
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          lVar8 = 0;
          iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar6,0);
          if (iVar5 == 0) {
            return;
          }
          if ((plVar6 == (long *)0x0) ||
             (plVar6 = (long *)/*UnityEngine.Timeline.TimelineAsset$$GetOutputTracks*/ func_0x031fab88(plVar6,0), plVar6 == (long *)0x0)) break;
          lVar9 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IEnumerable<TrackAsset>_TypeInfo*/ lRam0000000003d1d180) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto code_r0x014c0568;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar8 = 0;
          puVar7 = (undefined8 *)func_0x00fac1f0(plVar6);
code_r0x014c0568:
          unaff_x20 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (unaff_x20 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014c0784;
          }
          unaff_x23 = 0x3d22180;
          unaff_x24 = 0x3d1d390;
          unaff_x25 = 0x3d1faa8;
          unaff_x26 = 0x3d21b60;
code_r0x014c059c:
          lVar9 = *unaff_x20;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto code_r0x014c05e8;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar8 = 0;
          puVar7 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c05e8:
          uVar11 = (*(code *)*puVar7)(unaff_x20,puVar7[1]);
          if ((uVar11 & 1) != 0) {
            lVar9 = *unaff_x20;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == /*System.Collections.Generic.IEnumerator<TrackAsset>_TypeInfo*/ lRam0000000003d1d390) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto code_r0x014c0644;
                }
                piVar12 = piVar12 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            lVar8 = 0;
            puVar7 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c0644:
            plVar6 = (long *)(*(code *)*puVar7)(unaff_x20,puVar7[1]);
            if (plVar6 != (long *)0x0) {
              if ((*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) <= *(byte *)(*plVar6 + 300)) &&
                 (*(long *)(*(long *)(*plVar6 + 200) +
                            (ulong)*(byte *)(/*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8 + 300) * 8 + -8) ==
                  /*UnityEngine.Timeline.ActivationTrack_TypeInfo*/ lRam0000000003d1faa8)) {
                unaff_x21 = (long *)/*UnityEngine.Playables.PlayableDirector$$GetGenericBinding*/ func_0x03282f5c(lVar10,plVar6,0);
                if (unaff_x21 == (long *)0x0) {
                  unaff_x21 = (long *)0x0;
                }
                else if (*unaff_x21 != /*UnityEngine.GameObject_TypeInfo*/ lRam0000000003d21b60) {
                  unaff_x21 = (long *)0x0;
                }
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                lVar8 = 0;
                uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x21,0);
                if ((uVar11 & 1) != 0) {
                  if (unaff_x21 == (long *)0x0) goto code_r0x014c0778;
                  lVar8 = 0;
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(unaff_x21,0);
                }
              }
            }
            goto code_r0x014c059c;
          }
          unaff_x19 = 0;
          if (unaff_x20 == (long *)0x0) goto code_r0x014c0758;
code_r0x014c06f8:
          lVar10 = *unaff_x20;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                goto code_r0x014c074c;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar8 = 0;
          puVar7 = (undefined8 *)func_0x00fac1f0(unaff_x20);
code_r0x014c074c:
          (*(code *)*puVar7)(unaff_x20,puVar7[1]);
code_r0x014c0758:
          while( true ) {
            if (unaff_x19 == 0) {
              return;
            }
            func_0x00f78ac0(unaff_x19,0);
            if (extraout_w1 != 1) break;
            plVar6 = (long *)___cxa_begin_catch();
            unaff_x19 = *plVar6;
            ___cxa_end_catch();
            if (unaff_x20 != (long *)0x0) goto code_r0x014c06f8;
          }
          unaff_x30 = &Atlas_PlayableDirectorHelpers__ChangeTimelineAndPlay;
          auVar19 = __Unwind_Resume();
code_r0x014c07d0:
          lVar10 = auVar19._0_8_;
          puVar3 = (undefined1 *)((long)register0x00000008 + -0x20);
          *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
          *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
          if (lVar10 == 0) {
            auVar20 = func_0x00f78af4(0,auVar19._8_8_);
            auVar17._8_8_ = lVar8;
            auVar17._0_8_ = auVar20._0_8_;
            puVar3 = (undefined1 *)((long)register0x00000008 + -0x50);
            *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x22;
            *(long **)((long)register0x00000008 + -0x48) = unaff_x21;
            *(long **)((long)register0x00000008 + -0x40) = unaff_x20;
            *(long *)((long)register0x00000008 + -0x38) = unaff_x19;
            *(undefined1 **)((long)register0x00000008 + -0x30) =
                 (undefined1 *)((long)register0x00000008 + -0x10);
            *(undefined **)((long)register0x00000008 + -0x28) =
                 &Atlas_PlayableDirectorHelpers__ResetThenChangeTimelineAndPlay;
            puVar14 = (undefined1 *)((long)register0x00000008 + -0x30);
            puVar16 = &UNK_014c082c;
          }
          else {
            /*UnityEngine.Playables.PlayableDirector$$set_playableAsset*/ func_0x03282440(lVar10,auVar19._8_8_,0);
            auVar20._8_8_ = unaff_x21;
            auVar20._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x20);
            *(undefined8 *)((long)register0x00000008 + -0x20) =
                 *(undefined8 *)((long)register0x00000008 + -0x20);
            *(undefined8 *)((long)register0x00000008 + -0x18) =
                 *(undefined8 *)((long)register0x00000008 + -0x18);
            *(undefined8 *)((long)register0x00000008 + -0x10) =
                 *(undefined8 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -8) =
                 *(undefined8 *)((long)register0x00000008 + -8);
            puVar14 = (undefined1 *)((long)register0x00000008 + -0x10);
            if ((int)lVar8 == 0) {
              if (lVar10 != 0) goto code_r0x014c034c;
            }
            else if ((lVar10 != 0) && (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar10,0), lVar8 != 0)) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,1,0);
code_r0x014c034c:
              /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar10,0);
              /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar10,0);
              *(undefined8 *)((long)register0x00000008 + -0x20) =
                   *(undefined8 *)((long)register0x00000008 + -0x20);
              *(undefined8 *)((long)register0x00000008 + -0x18) =
                   *(undefined8 *)((long)register0x00000008 + -0x18);
              *(undefined8 *)((long)register0x00000008 + -0x10) =
                   *(undefined8 *)((long)register0x00000008 + -0x10);
              *(undefined8 *)((long)register0x00000008 + -8) =
                   *(undefined8 *)((long)register0x00000008 + -8);
              if (pcRam0000000003ec1b90 == (code *)0x0) {
                pcRam0000000003ec1b90 =
                     (code *)func_0x00f789d4("UnityEngine.Playables.PlayableDirector::Play()");
              }
                    /* WARNING: Could not recover jumptable at 0x0328295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000003ec1b90)(lVar10);
              return;
            }
            puVar16 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirector;
            auVar17 = func_0x00f78af4();
            lVar8 = lVar10;
          }
          unaff_x21 = auVar20._8_8_;
          auVar1._8_8_ = auVar20._0_8_;
          auVar1._0_8_ = lVar8;
          lVar10 = auVar17._0_8_;
          puVar4 = puVar3 + -0x20;
          *(long *)(puVar3 + -0x20) = auVar20._0_8_;
          *(long *)(puVar3 + -0x18) = lVar8;
          *(undefined1 **)(puVar3 + -0x10) = puVar14;
          *(undefined **)(puVar3 + -8) = puVar16;
          ppuVar15 = (undefined1 **)(puVar3 + -0x10);
          if (lVar10 == 0) {
code_r0x014c03e4:
            puVar16 = &Atlas_PlayableDirectorHelpers__ResetPlayableDirectorActivations;
            auVar18 = func_0x00f78af4();
          }
          else {
            /*UnityEngine.Playables.PlayableDirector$$Stop*/ func_0x03282c40(lVar10,0);
            /*UnityEngine.Playables.PlayableDirector$$get_initialTime*/ func_0x03282b80(lVar10,0);
            /*UnityEngine.Playables.PlayableDirector$$set_time*/ func_0x03282aa0(lVar10,0);
            uVar13 = extraout_x1;
            if (auVar17._8_4_ != 0) {
              lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar10,0);
              auVar1 = auVar17;
              if (lVar8 == 0) goto code_r0x014c03e4;
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,0,0);
              uVar13 = extraout_x1_00;
            }
            auVar18._8_8_ = uVar13;
            auVar18._0_8_ = lVar10;
            ppuVar15 = *(undefined1 ***)(puVar3 + -0x10);
            puVar16 = *(undefined **)(puVar3 + -8);
            auVar1._8_8_ = *(undefined8 *)(puVar3 + -0x20);
            auVar1._0_8_ = *(undefined8 *)(puVar3 + -0x18);
            puVar4 = puVar3;
          }
        }
        func_0x00f78af4();
code_r0x014c0778:
        func_0x00f78af4();
code_r0x014c0784:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x14c0788);
        (*pcVar2)();
      }
    }
  }
code_r0x01536fd4:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1536eb8 | Atlas.Gameplay.FTUE.BaseLayerSequenceManager.ResetSequenceStopped
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerSequenceManager__ResetSequenceStopped(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb4ed2 & 1) == 0) {
    func_0x00f78a20(0x3d2a280);
    func_0x00f78a20(0x3d1b540);
    func_0x00f78a20(0x3d52808);
    bRam0000000003eb4ed2 = 1;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar1 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                        (*(long *)(param_1 + 0x30),0), lVar1 != 0)) {
    lVar1 = *(long *)(lVar1 + 0x18);
    uVar2 = func_0x00f78aec(/*System.Action<PlayableDirector>_TypeInfo*/ uRam0000000003d1b540);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,param_1,uRam0000000003d52808,uRam0000000003d2a280);
    if (lVar1 != 0) {
      /*UnityEngine.Playables.PlayableDirector$$remove_stopped*/ func_0x0328343c(lVar1,uVar2,0);
      *(undefined1 *)(param_1 + 0x38) = 0;
      if (*(char *)(param_1 + 0x39) != '\0') {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_01536fd4;
        Atlas_UI_Screens_GameInProgressScreen__SetInputEnabled(*(long *)(param_1 + 0x30),1,0);
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        /*System.Action$$Invoke*/ func_0x02924c90(*(long *)(param_1 + 0x48),0);
      }
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar1 = Atlas_UI_Screens_GameInProgressScreen__get_FTUEScreenBehaviour
                            (*(long *)(param_1 + 0x30),0), lVar1 != 0)) {
        /*Atlas.PlayableDirectorHelpers$$ResetPlayableDirectorActivations*/ func_0x014c03e8(*(undefined8 *)(lVar1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        return;
      }
    }
  }
LAB_01536fd4:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x1536fd8 | Atlas.Gameplay.FTUE.BaseLayerSequenceManager..ctor
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerSequenceManager___ctor(void)

{
  return;
}



