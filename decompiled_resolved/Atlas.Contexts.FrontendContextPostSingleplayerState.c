// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.FrontendContextPostSingleplayerState

// ============================================================
// RVA: 0x1596594 | Atlas.Contexts.FrontendContextPostSingleplayerState.add_OnExitPostEvent
// ============================================================

void Atlas_Contexts_FrontendContextPostSingleplayerState__add_OnExitPostEvent
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb5186 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5186 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x78);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x78),plVar2,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5187 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5187 = 1;
  }
  plVar2 = (long *)(auVar7._0_8_ + 0x78);
  lVar6 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,auVar7._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5188 & 1) == 0) {
    func_0x00f78a20(0x3d1b420);
    bRam0000000003eb5188 = 1;
  }
  plVar2 = (long *)(auVar7._0_8_ + 0x80);
  lVar6 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar6,auVar7._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5189 & 1) == 0) {
    func_0x00f78a20(0x3d1b420);
    bRam0000000003eb5189 = 1;
  }
  plVar2 = (long *)(auVar7._0_8_ + 0x80);
  lVar6 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,auVar7._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar4);
  lVar3 = auVar7._8_8_;
  lVar6 = auVar7._0_8_;
  if ((bRam0000000003eb518a & 1) == 0) {
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d551b0);
    bRam0000000003eb518a = 1;
  }
  if (lVar3 != 0) {
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d550b8);
    *(undefined8 *)(lVar6 + 0x88) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d551b0);
    *(undefined8 *)(lVar6 + 0x90) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d55090);
    *(undefined8 *)(lVar6 + 0x98) = uVar5;
    return;
  }
  lVar6 = func_0x00f78af4();
  *(undefined8 *)(lVar6 + 0x88) = 0;
  *(undefined8 *)(lVar6 + 0x90) = 0;
  *(undefined8 *)(lVar6 + 0x98) = 0;
  return;
}



// ============================================================
// RVA: 0x1596634 | Atlas.Contexts.FrontendContextPostSingleplayerState.remove_OnExitPostEvent
// ============================================================

void Atlas_Contexts_FrontendContextPostSingleplayerState__remove_OnExitPostEvent
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb5187 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb5187 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x78);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x78),plVar2,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5188 & 1) == 0) {
    func_0x00f78a20(0x3d1b420);
    bRam0000000003eb5188 = 1;
  }
  plVar2 = (long *)(auVar7._0_8_ + 0x80);
  lVar6 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar6,auVar7._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar4);
  if ((bRam0000000003eb5189 & 1) == 0) {
    func_0x00f78a20(0x3d1b420);
    bRam0000000003eb5189 = 1;
  }
  plVar2 = (long *)(auVar7._0_8_ + 0x80);
  lVar6 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,auVar7._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar4);
  lVar3 = auVar7._8_8_;
  lVar6 = auVar7._0_8_;
  if ((bRam0000000003eb518a & 1) == 0) {
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d551b0);
    bRam0000000003eb518a = 1;
  }
  if (lVar3 != 0) {
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d550b8);
    *(undefined8 *)(lVar6 + 0x88) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d551b0);
    *(undefined8 *)(lVar6 + 0x90) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d55090);
    *(undefined8 *)(lVar6 + 0x98) = uVar5;
    return;
  }
  lVar6 = func_0x00f78af4();
  *(undefined8 *)(lVar6 + 0x88) = 0;
  *(undefined8 *)(lVar6 + 0x90) = 0;
  *(undefined8 *)(lVar6 + 0x98) = 0;
  return;
}



// ============================================================
// RVA: 0x15966d4 | Atlas.Contexts.FrontendContextPostSingleplayerState.add_OnPlayAgain
// ============================================================

void Atlas_Contexts_FrontendContextPostSingleplayerState__add_OnPlayAgain
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb5188 & 1) == 0) {
    func_0x00f78a20(0x3d1b420);
    bRam0000000003eb5188 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x80);
  while ((plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar6,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x80),plVar2,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar2);
  if ((bRam0000000003eb5189 & 1) == 0) {
    func_0x00f78a20(0x3d1b420);
    bRam0000000003eb5189 = 1;
  }
  plVar2 = (long *)(auVar7._0_8_ + 0x80);
  lVar6 = *plVar2;
  while ((plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar6,auVar7._8_8_,0), plVar4 == (long *)0x0 ||
         (*plVar4 == /*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420))) {
    lVar3 = func_0x00ff0f44(plVar2,plVar4,lVar6);
    bVar1 = lVar6 == lVar3;
    lVar6 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar7 = func_0x00f78e5c(plVar4);
  lVar3 = auVar7._8_8_;
  lVar6 = auVar7._0_8_;
  if ((bRam0000000003eb518a & 1) == 0) {
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d551b0);
    bRam0000000003eb518a = 1;
  }
  if (lVar3 != 0) {
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d550b8);
    *(undefined8 *)(lVar6 + 0x88) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d551b0);
    *(undefined8 *)(lVar6 + 0x90) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d55090);
    *(undefined8 *)(lVar6 + 0x98) = uVar5;
    return;
  }
  lVar6 = func_0x00f78af4();
  *(undefined8 *)(lVar6 + 0x88) = 0;
  *(undefined8 *)(lVar6 + 0x90) = 0;
  *(undefined8 *)(lVar6 + 0x98) = 0;
  return;
}



// ============================================================
// RVA: 0x1596774 | Atlas.Contexts.FrontendContextPostSingleplayerState.remove_OnPlayAgain
// ============================================================

void Atlas_Contexts_FrontendContextPostSingleplayerState__remove_OnPlayAgain
               (long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb5189 & 1) == 0) {
    func_0x00f78a20(0x3d1b420);
    bRam0000000003eb5189 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x80);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<EventInfo>_TypeInfo*/ lRam0000000003d1b420))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x80),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  lVar3 = auVar6._8_8_;
  lVar5 = auVar6._0_8_;
  if ((bRam0000000003eb518a & 1) == 0) {
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d551b0);
    bRam0000000003eb518a = 1;
  }
  if (lVar3 != 0) {
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d550b8);
    *(undefined8 *)(lVar5 + 0x88) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d551b0);
    *(undefined8 *)(lVar5 + 0x90) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d55090);
    *(undefined8 *)(lVar5 + 0x98) = uVar4;
    return;
  }
  lVar5 = func_0x00f78af4();
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  *(undefined8 *)(lVar5 + 0x98) = 0;
  return;
}



// ============================================================
// RVA: 0x1596814 | Atlas.Contexts.FrontendContextPostSingleplayerState.Init
// ============================================================

void Atlas_Contexts_FrontendContextPostSingleplayerState__Init(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb518a & 1) == 0) {
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d551b0);
    bRam0000000003eb518a = 1;
  }
  if (param_2 != 0) {
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d550b8);
    *(undefined8 *)(param_1 + 0x88) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d551b0);
    *(undefined8 *)(param_1 + 0x90) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55090);
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    return;
  }
  lVar2 = func_0x00f78af4();
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  return;
}



// ============================================================
// RVA: 0x15968c4 | Atlas.Contexts.FrontendContextPostSingleplayerState.OnDeInit
// ============================================================

void Atlas_Contexts_FrontendContextPostSingleplayerState__OnDeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}



// ============================================================
// RVA: 0x15968d0 | Atlas.Contexts.FrontendContextPostSingleplayerState.OnEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontendContextPostSingleplayerState__OnEnter
                  (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  dword *pdVar21;
  long *extraout_x1;
  dword *pdVar22;
  long *plVar23;
  dword *pdVar24;
  dword *pdVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  int *piVar29;
  uint uVar30;
  undefined8 uVar31;
  long unaff_x19;
  dword *unaff_x20;
  dword *pdVar32;
  dword *pdVar33;
  undefined8 uVar34;
  long unaff_x21;
  dword *pdVar35;
  undefined8 unaff_x22;
  undefined8 uVar36;
  undefined8 unaff_x23;
  undefined8 uVar37;
  undefined8 unaff_x24;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 unaff_x25;
  undefined1 *puVar40;
  code *pcVar41;
  undefined8 uVar42;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 uVar43;
  undefined *puVar44;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  undefined8 uVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  puVar40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb518b & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d405b8);
    func_0x00f78a20(0x3d65d08);
    bRam0000000003eb518b = 1;
  }
  lVar15 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405b8);
  pdVar32 = (dword *)0x3eb5000;
  if (lVar15 == 0) {
LAB_015969cc:
    unaff_x20 = pdVar32;
    unaff_x30 = &Atlas_Contexts_FrontendContextPostSingleplayerState__ShowPostArcadeScreen;
    lVar15 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_1;
    unaff_x21 = 0x3d405b8;
    unaff_x29 = puVar40;
code_r0x015969d0:
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(dword **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x22 = 0x3d405b8;
    if ((bRam0000000003eb518d & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d56e20);
      func_0x00f78a20(0x3d56e28);
      func_0x00f78a20(0x3d286f8);
      func_0x00f78a20(0x3d405b8);
      func_0x00f78a20(0x3d28700);
      bRam0000000003eb518d = 1;
    }
    unaff_x20 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.PostArcadeScreen.TransitionData_TypeInfo*/ uRam0000000003d28700);
    /*Atlas.UI.Screens.PostArcadeScreen.TransitionData$$.ctor*/ func_0x01562ba0(unaff_x20,0);
    lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar15,uRam0000000003d405b8);
    unaff_x21 = 0x3d28700;
    if (((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x10), lVar17 == 0)) ||
       (unaff_x21 = 0x3d28700, unaff_x20 == (dword *)0x0)) {
code_r0x01596b64:
      unaff_x30 = &Atlas_Contexts_FrontendContextPostSingleplayerState__ShowPostEventScreen;
      param_1 = func_0x00f78af4();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
      unaff_x19 = lVar15;
      goto code_r0x01596b68;
    }
    unaff_x23 = 0x3d286f8;
    unaff_x24 = 0x3d56000;
    unaff_x25 = 0x3d56000;
    lVar28 = *(long *)(lVar17 + 0x38);
    lVar20 = *(long *)(lVar17 + 0x30);
    lVar46 = *(long *)(lVar17 + 0x48);
    lVar27 = *(long *)(lVar17 + 0x40);
    lVar47 = *(long *)(lVar17 + 0x50);
    lVar49 = *(long *)(lVar17 + 0x68);
    lVar48 = *(long *)(lVar17 + 0x60);
    *(long *)(unaff_x20 + 0xe) = *(long *)(lVar17 + 0x58);
    *(long *)(unaff_x20 + 0xc) = lVar47;
    *(long *)(unaff_x20 + 0x12) = lVar49;
    *(long *)(unaff_x20 + 0x10) = lVar48;
    *(long *)(unaff_x20 + 6) = lVar28;
    *(long *)(unaff_x20 + 4) = lVar20;
    *(long *)(unaff_x20 + 10) = lVar46;
    *(long *)(unaff_x20 + 8) = lVar27;
    lVar17 = func_0x00f78aec(/*Atlas.UI.Screens.PostArcadeScreen.OptionSelected_TypeInfo*/ uRam0000000003d286f8);
    /*Atlas.UI.Screens.PostArcadeScreen.OptionSelected$$.ctor*/ func_0x01562928(lVar17,lVar15,uRam0000000003d56e20,0);
    *(long *)(unaff_x20 + 0x14) = lVar17;
    unaff_x21 = func_0x00f78aec(/*Atlas.UI.Screens.PostArcadeScreen.OptionSelected_TypeInfo*/ uRam0000000003d286f8);
    param_3 = puRam0000000003d56e28;
    /*Atlas.UI.Screens.PostArcadeScreen.OptionSelected$$.ctor*/ func_0x01562928(unaff_x21,lVar15,puRam0000000003d56e28,0);
    *(long *)(unaff_x20 + 0x16) = unaff_x21;
    lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar15,uRam0000000003d405b8);
    if (lVar17 == 0) goto code_r0x01596b64;
    unaff_x21 = 0x3d1feb8;
    *(long *)(unaff_x20 + 0x18) = *(long *)(lVar17 + 0x20);
    pdVar32 = *(dword **)(lVar15 + 0x88);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar15 = 0;
    if (pdVar32 == (dword *)0x0) goto code_r0x01596b64;
    pdVar21 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x80);
    uVar16 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar43 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar38 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x18);
    uVar45 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x28);
    uVar37 = *(undefined8 *)((long)register0x00000008 + -0x40);
    uVar36 = *(undefined8 *)((long)register0x00000008 + -0x38);
    uVar42 = *(undefined8 *)((long)register0x00000008 + -0x50);
    uVar39 = *(undefined8 *)((long)register0x00000008 + -0x48);
  }
  else {
    pdVar32 = *(dword **)(lVar15 + 0x20);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar16 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(0,0);
    param_3 = (undefined8 *)0x0;
    iVar13 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(pdVar32,uVar16);
    if (iVar13 != 0) {
      lVar15 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405b8);
      if (lVar15 == 0) goto LAB_015969cc;
      param_3 = (undefined8 *)0x0;
      iVar13 = /*System.String$$op_Inequality*/ func_0x029bd9d4(*(undefined8 *)(lVar15 + 0x20),/*STR('')*/ uRam0000000003d65d08);
      lVar15 = param_1;
      if (iVar13 == 0) goto code_r0x01596b68;
      goto code_r0x015969d0;
    }
code_r0x01596b68:
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(dword **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    if ((bRam0000000003eb518c & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d56e18);
      func_0x00f78a20(0x3d56e20);
      func_0x00f78a20(0x3d28718);
      func_0x00f78a20(0x3d405b8);
      func_0x00f78a20(0x3d28720);
      bRam0000000003eb518c = 1;
    }
    unaff_x20 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.TransitionData_TypeInfo*/ uRam0000000003d28720);
    /*Atlas.UI.Screens.PostEventScreen.TransitionData$$.ctor*/ func_0x01563140(unaff_x20,0);
    lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405b8);
    lVar15 = 0x3d405b8;
    uVar16 = 0x3d28720;
    if (((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x10), lVar17 == 0)) ||
       (lVar15 = 0x3d405b8, uVar16 = 0x3d28720, unaff_x20 == (dword *)0x0)) {
code_r0x01596ce4:
      lVar17 = func_0x00f78af4();
      *(undefined8 *)((long)register0x00000008 + -0x80) = uVar16;
      *(long *)((long)register0x00000008 + -0x78) = lVar15;
      *(dword **)((long)register0x00000008 + -0x70) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x68) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0x60) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x58) =
           &Atlas_Contexts_FrontendContextPostSingleplayerState__PlayAgainSelected;
      if ((bRam0000000003eb518e & 1) == 0) {
        func_0x00f78a20(0x3d2a040);
        func_0x00f78a20(0x3d405b8);
        bRam0000000003eb518e = 1;
      }
      pdVar32 = *(dword **)(lVar17 + 0x80);
      lVar15 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar17,uRam0000000003d405b8);
      if ((lVar15 == 0) || (pdVar32 == (dword *)0x0)) {
        lVar15 = func_0x00f78af4();
        *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar16;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0x3d405b8;
        *(dword **)((long)register0x00000008 + -0xa0) = pdVar32;
        *(long *)((long)register0x00000008 + -0x98) = lVar17;
        *(undefined1 **)((long)register0x00000008 + -0x90) =
             (undefined1 *)((long)register0x00000008 + -0x60);
        *(undefined **)((long)register0x00000008 + -0x88) =
             &Atlas_Contexts_FrontendContextPostSingleplayerState__ExitSelected;
        uVar16 = 0x3d25458;
        if ((bRam0000000003eb518f & 1) == 0) {
          func_0x00f78a20(0x3d2a5b0);
          func_0x00f78a20(0x3d194e8);
          func_0x00f78a20(0x3d27650);
          func_0x00f78a20(0x3d405b8);
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb518f = 1;
        }
        uVar38 = /*Atlas.Contexts.FrontEndContextSingleplayerState_var*/ uRam0000000003d194e8;
        pdVar32 = *(dword **)(lVar15 + 0x78);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar23 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar38,0);
        lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar15,uRam0000000003d405b8);
        if (lVar17 != 0) {
          uVar16 = *(undefined8 *)(lVar17 + 0x18);
          lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar15,uRam0000000003d405b8);
          if (lVar17 != 0) {
            puVar18 = *(undefined8 **)(lVar17 + 0x28);
            lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar15,uRam0000000003d405b8);
            if (lVar17 != 0) {
              uVar38 = *(undefined8 *)(lVar17 + 0x10);
              lVar15 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
              Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerTransitionData___ctor
                        (lVar15,uVar16,puVar18,0,0,uVar38,0);
              param_3 = puVar18;
              if (pdVar32 != (dword *)0x0) {
                *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x28;
                *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_x27;
                *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x26;
                *(undefined8 *)((long)register0x00000008 + -200) = unaff_x25;
                *(undefined8 *)((long)register0x00000008 + -0xc0) =
                     *(undefined8 *)((long)register0x00000008 + -0xc0);
                *(undefined8 *)((long)register0x00000008 + -0xb8) =
                     *(undefined8 *)((long)register0x00000008 + -0xb8);
                *(undefined8 *)((long)register0x00000008 + -0xb0) =
                     *(undefined8 *)((long)register0x00000008 + -0xb0);
                *(undefined8 *)((long)register0x00000008 + -0xa8) =
                     *(undefined8 *)((long)register0x00000008 + -0xa8);
                *(undefined8 *)((long)register0x00000008 + -0xa0) =
                     *(undefined8 *)((long)register0x00000008 + -0xa0);
                *(undefined8 *)((long)register0x00000008 + -0x98) =
                     *(undefined8 *)((long)register0x00000008 + -0x98);
                *(undefined8 *)((long)register0x00000008 + -0x90) =
                     *(undefined8 *)((long)register0x00000008 + -0x90);
                *(undefined8 *)((long)register0x00000008 + -0x88) =
                     *(undefined8 *)((long)register0x00000008 + -0x88);
                *(dword **)((long)register0x00000008 + -0xe8) = pdVar32;
                lVar17 = *(long *)(pdVar32 + 0x1a);
                if (lVar17 == 0) {
                  puVar40 = (undefined1 *)((long)register0x00000008 + -0xe8);
                  lVar20 = 1;
                }
                else {
                  lVar20 = *(long *)(lVar17 + 0x18);
                  if (lVar20 == 0) {
                    return pdVar32;
                  }
                  puVar40 = (undefined1 *)(lVar17 + 0x20);
                }
                lVar17 = 0;
                do {
                  lVar28 = *(long *)(puVar40 + lVar17 * 8);
                  pcVar41 = *(code **)(lVar28 + 0x10);
                  plVar1 = *(long **)(lVar28 + 0x20);
                  lVar28 = *(long *)(lVar28 + 0x28);
                  if (*(short *)(lVar28 + 0x48) == -1) {
                    func_0x00f78ad8(lVar28);
                  }
                  iVar13 = func_0x00f78a4c(lVar28);
                  bVar12 = *(char *)(lVar28 + 0x4a) == '\x03';
                  if (iVar13 == 0) {
                    if (bVar12) {
                      if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
                        pdVar21 = (dword *)(*pcVar41)(plVar23,0,lVar15,lVar28);
                      }
                      else {
                        if (((*(short *)(lVar28 + 0x48) == -1) ||
                            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
                           (*(long *)(pdVar32 + 6) == 0)) goto code_r0x01e7162c;
                        iVar13 = func_0x00f78a44(lVar28);
                        iVar14 = func_0x00f78ec0(lVar28);
                        if (iVar13 == 0) {
                          uVar4 = *(ushort *)(lVar28 + 0x48);
                          if (iVar14 == 0) {
                            lVar28 = *plVar1 + (ulong)uVar4 * 0x10;
                            pdVar21 = (dword *)(**(code **)(lVar28 + 0x138))
                                                         (plVar1,plVar23,0,lVar15,
                                                          *(undefined8 *)(lVar28 + 0x140));
                            goto code_r0x01e71750;
                          }
                          lVar28 = func_0x00f78a48(lVar28);
                          lVar27 = *plVar1;
                          uVar19 = (ulong)*(ushort *)(lVar27 + 0x12a);
                          if (uVar19 != 0) {
                            piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar29 + -2) == lVar28) {
                                puVar18 = (undefined8 *)
                                          (lVar27 + (long)(int)(*piVar29 + (uint)uVar4) * 0x10 +
                                          0x138);
                                goto code_r0x01e718f4;
                              }
                              piVar29 = piVar29 + 4;
                              uVar19 = uVar19 - 1;
                            } while (uVar19 != 0);
                          }
                          puVar18 = (undefined8 *)func_0x00fac1f0(plVar1,lVar28,(ulong)uVar4);
code_r0x01e718f4:
                          pcVar41 = (code *)*puVar18;
                          puVar18 = (undefined8 *)puVar18[1];
                        }
                        else {
                          if (iVar14 == 0) {
                            uVar16 = *(undefined8 *)
                                      (*plVar1 + (ulong)*(ushort *)(lVar28 + 0x48) * 0x10 + 0x140);
                          }
                          else {
                            lVar27 = *plVar1;
                            uVar19 = (ulong)*(ushort *)(lVar27 + 0x12a);
                            if (uVar19 != 0) {
                              piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar29 + -2) == *(long *)(lVar28 + 0x18)) {
                                  lVar27 = lVar27 + (long)(int)(*piVar29 +
                                                               (uint)*(ushort *)(lVar28 + 0x48)) *
                                                    0x10 + 0x138;
                                  goto code_r0x01e718cc;
                                }
                                piVar29 = piVar29 + 4;
                                uVar19 = uVar19 - 1;
                              } while (uVar19 != 0);
                            }
                            lVar27 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
                            uVar16 = *(undefined8 *)(lVar27 + 8);
                          }
                          puVar18 = (undefined8 *)func_0x00f78acc(uVar16,lVar28);
                          pcVar41 = (code *)*puVar18;
                        }
                        pdVar21 = (dword *)(*pcVar41)(plVar1,plVar23,0,lVar15,puVar18);
                      }
                    }
                    else {
                      if ((*(short *)(lVar28 + 0x48) == -1) || (*(long *)(pdVar32 + 6) == 0))
                      goto code_r0x01e7173c;
                      iVar13 = func_0x00f78a44(lVar28);
                      iVar14 = func_0x00f78ec0(lVar28);
                      if (iVar13 == 0) {
                        uVar4 = *(ushort *)(lVar28 + 0x48);
                        if (iVar14 == 0) {
                          lVar28 = *plVar23 + (ulong)uVar4 * 0x10;
                          pdVar21 = (dword *)(**(code **)(lVar28 + 0x138))
                                                       (plVar23,0,lVar15,
                                                        *(undefined8 *)(lVar28 + 0x140));
                          goto code_r0x01e71750;
                        }
                        lVar28 = func_0x00f78a48(lVar28);
                        lVar27 = *plVar23;
                        uVar19 = (ulong)*(ushort *)(lVar27 + 0x12a);
                        if (uVar19 != 0) {
                          piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar29 + -2) == lVar28) {
                              puVar18 = (undefined8 *)
                                        (lVar27 + (long)(int)(*piVar29 + (uint)uVar4) * 0x10 + 0x138
                                        );
                              goto code_r0x01e71880;
                            }
                            piVar29 = piVar29 + 4;
                            uVar19 = uVar19 - 1;
                          } while (uVar19 != 0);
                        }
                        puVar18 = (undefined8 *)func_0x00fac1f0(plVar23,lVar28,(ulong)uVar4);
code_r0x01e71880:
                        pcVar41 = (code *)*puVar18;
                        puVar18 = (undefined8 *)puVar18[1];
                      }
                      else {
                        if (iVar14 == 0) {
                          uVar16 = *(undefined8 *)
                                    (*plVar23 + (ulong)*(ushort *)(lVar28 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar27 = *plVar23;
                          uVar19 = (ulong)*(ushort *)(lVar27 + 0x12a);
                          if (uVar19 != 0) {
                            piVar29 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar29 + -2) == *(long *)(lVar28 + 0x18)) {
                                lVar27 = lVar27 + (long)(int)(*piVar29 +
                                                             (uint)*(ushort *)(lVar28 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e71858;
                              }
                              piVar29 = piVar29 + 4;
                              uVar19 = uVar19 - 1;
                            } while (uVar19 != 0);
                          }
                          lVar27 = func_0x00fac1f0(plVar23);
code_r0x01e71858:
                          uVar16 = *(undefined8 *)(lVar27 + 8);
                        }
                        puVar18 = (undefined8 *)func_0x00f78acc(uVar16,lVar28);
                        pcVar41 = (code *)*puVar18;
                      }
                      pdVar21 = (dword *)(*pcVar41)(plVar23,0,lVar15,puVar18);
                    }
                  }
                  else {
                    if (bVar12) goto code_r0x01e7173c;
code_r0x01e7162c:
                    pdVar21 = (dword *)(*pcVar41)(plVar1,plVar23,0,lVar15,lVar28);
                  }
code_r0x01e71750:
                  lVar17 = lVar17 + 1;
                  if (lVar17 == lVar20) {
                    return pdVar21;
                  }
                } while( true );
              }
            }
          }
        }
        pdVar21 = (dword *)func_0x00f78af4();
        *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar16;
        *(long **)((long)register0x00000008 + -0xe8) = plVar23;
        *(long *)((long)register0x00000008 + -0xe0) = lVar15;
        *(dword **)((long)register0x00000008 + -0xd8) = pdVar32;
        *(undefined1 **)((long)register0x00000008 + -0xd0) =
             (undefined1 *)((long)register0x00000008 + -0x90);
        *(undefined **)((long)register0x00000008 + -200) =
             &Atlas_Contexts_FrontendContextPostSingleplayerState___ctor;
        if ((bRam0000000003eb5190 & 1) == 0) {
          func_0x00f78a20(0x3d405b0);
          bRam0000000003eb5190 = 1;
        }
        if (pdVar21 == (dword *)0x0) {
          *(undefined8 *)((long)register0x00000008 + -0xd0) =
               *(undefined8 *)((long)register0x00000008 + -0xd0);
          *(undefined8 *)((long)register0x00000008 + -200) =
               *(undefined8 *)((long)register0x00000008 + -200);
          auVar50 = func_0x00f78af4(0,uRam0000000003d405b0);
          pdVar32 = auVar50._0_8_;
          *(undefined8 *)(pdVar32 + 4) = *param_3;
          *(long *)(pdVar32 + 8) = auVar50._8_8_;
          *(undefined8 **)(pdVar32 + 10) = param_3;
          return pdVar32;
        }
        return pdVar21;
      }
      plVar23 = *(long **)(lVar15 + 0x10);
      *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)((long)register0x00000008 + -0x70);
      *(undefined8 *)((long)register0x00000008 + -0x68) =
           *(undefined8 *)((long)register0x00000008 + -0x68);
      *(undefined8 *)((long)register0x00000008 + -0x60) =
           *(undefined8 *)((long)register0x00000008 + -0x60);
      *(undefined8 *)((long)register0x00000008 + -0x58) =
           *(undefined8 *)((long)register0x00000008 + -0x58);
      *(dword **)((long)register0x00000008 + -0xa8) = pdVar32;
      lVar15 = *(long *)(pdVar32 + 0x1a);
      if (lVar15 == 0) {
        puVar40 = (undefined1 *)((long)register0x00000008 + -0xa8);
        lVar17 = 1;
      }
      else {
        lVar17 = *(long *)(lVar15 + 0x18);
        if (lVar17 == 0) {
          return pdVar32;
        }
        puVar40 = (undefined1 *)(lVar15 + 0x20);
      }
      lVar15 = 0;
      do {
        lVar20 = *(long *)(puVar40 + lVar15 * 8);
        pcVar41 = *(code **)(lVar20 + 0x10);
        plVar1 = *(long **)(lVar20 + 0x20);
        lVar20 = *(long *)(lVar20 + 0x28);
        if (*(short *)(lVar20 + 0x48) == -1) {
          func_0x00f78ad8(lVar20);
        }
        iVar13 = func_0x00f78a4c(lVar20);
        bVar12 = *(char *)(lVar20 + 0x4a) == '\x01';
        if (iVar13 == 0) {
          if (bVar12) {
            if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
              pdVar21 = (dword *)(*pcVar41)(plVar23,lVar20);
            }
            else {
              if (((*(short *)(lVar20 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
                 (*(long *)(pdVar32 + 6) == 0)) goto code_r0x01e47fc0;
              iVar13 = func_0x00f78a44(lVar20);
              iVar14 = func_0x00f78ec0(lVar20);
              if (iVar13 == 0) {
                uVar4 = *(ushort *)(lVar20 + 0x48);
                if (iVar14 == 0) {
                  lVar20 = *plVar1 + (ulong)uVar4 * 0x10;
                  pdVar21 = (dword *)(**(code **)(lVar20 + 0x138))
                                               (plVar1,plVar23,*(undefined8 *)(lVar20 + 0x140));
                  goto code_r0x01e480d4;
                }
                lVar20 = func_0x00f78a48(lVar20);
                lVar28 = *plVar1;
                uVar19 = (ulong)*(ushort *)(lVar28 + 0x12a);
                if (uVar19 != 0) {
                  piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar29 + -2) == lVar20) {
                      puVar18 = (undefined8 *)
                                (lVar28 + (long)(int)(*piVar29 + (uint)uVar4) * 0x10 + 0x138);
                      goto code_r0x01e48260;
                    }
                    piVar29 = piVar29 + 4;
                    uVar19 = uVar19 - 1;
                  } while (uVar19 != 0);
                }
                puVar18 = (undefined8 *)func_0x00fac1f0(plVar1,lVar20,(ulong)uVar4);
code_r0x01e48260:
                pcVar41 = (code *)*puVar18;
                puVar18 = (undefined8 *)puVar18[1];
              }
              else {
                if (iVar14 == 0) {
                  uVar16 = *(undefined8 *)
                            (*plVar1 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar28 = *plVar1;
                  uVar19 = (ulong)*(ushort *)(lVar28 + 0x12a);
                  if (uVar19 != 0) {
                    piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == *(long *)(lVar20 + 0x18)) {
                        lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar20 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e48238;
                      }
                      piVar29 = piVar29 + 4;
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
                  lVar28 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
                  uVar16 = *(undefined8 *)(lVar28 + 8);
                }
                puVar18 = (undefined8 *)func_0x00f78acc(uVar16,lVar20);
                pcVar41 = (code *)*puVar18;
              }
              pdVar21 = (dword *)(*pcVar41)(plVar1,plVar23,puVar18);
            }
          }
          else {
            if ((*(short *)(lVar20 + 0x48) == -1) || (*(long *)(pdVar32 + 6) == 0))
            goto code_r0x01e480c8;
            iVar13 = func_0x00f78a44(lVar20);
            iVar14 = func_0x00f78ec0(lVar20);
            if (iVar13 == 0) {
              uVar4 = *(ushort *)(lVar20 + 0x48);
              if (iVar14 == 0) {
                lVar20 = *plVar23 + (ulong)uVar4 * 0x10;
                pdVar21 = (dword *)(**(code **)(lVar20 + 0x138))
                                             (plVar23,*(undefined8 *)(lVar20 + 0x140));
                goto code_r0x01e480d4;
              }
              lVar20 = func_0x00f78a48(lVar20);
              lVar28 = *plVar23;
              uVar19 = (ulong)*(ushort *)(lVar28 + 0x12a);
              if (uVar19 != 0) {
                piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar29 + -2) == lVar20) {
                    puVar18 = (undefined8 *)
                              (lVar28 + (long)(int)(*piVar29 + (uint)uVar4) * 0x10 + 0x138);
                    goto code_r0x01e481fc;
                  }
                  piVar29 = piVar29 + 4;
                  uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
              }
              puVar18 = (undefined8 *)func_0x00fac1f0(plVar23,lVar20,(ulong)uVar4);
code_r0x01e481fc:
              pcVar41 = (code *)*puVar18;
              puVar18 = (undefined8 *)puVar18[1];
            }
            else {
              if (iVar14 == 0) {
                uVar16 = *(undefined8 *)
                          (*plVar23 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar28 = *plVar23;
                uVar19 = (ulong)*(ushort *)(lVar28 + 0x12a);
                if (uVar19 != 0) {
                  piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar29 + -2) == *(long *)(lVar20 + 0x18)) {
                      lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar20 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01e481d4;
                    }
                    piVar29 = piVar29 + 4;
                    uVar19 = uVar19 - 1;
                  } while (uVar19 != 0);
                }
                lVar28 = func_0x00fac1f0(plVar23);
code_r0x01e481d4:
                uVar16 = *(undefined8 *)(lVar28 + 8);
              }
              puVar18 = (undefined8 *)func_0x00f78acc(uVar16,lVar20);
              pcVar41 = (code *)*puVar18;
            }
            pdVar21 = (dword *)(*pcVar41)(plVar23,puVar18);
          }
        }
        else {
          if (bVar12) goto code_r0x01e480c8;
code_r0x01e47fc0:
          pdVar21 = (dword *)(*pcVar41)(plVar1,plVar23,lVar20);
        }
code_r0x01e480d4:
        lVar15 = lVar15 + 1;
        if (lVar15 == lVar17) {
          return pdVar21;
        }
      } while( true );
    }
    unaff_x23 = 0x3d28718;
    unaff_x24 = 0x3d56000;
    unaff_x25 = 0x3d56000;
    uVar16 = 0x3d1feb8;
    lVar20 = *(long *)(lVar17 + 0x38);
    lVar15 = *(long *)(lVar17 + 0x30);
    lVar27 = *(long *)(lVar17 + 0x48);
    lVar28 = *(long *)(lVar17 + 0x40);
    lVar46 = *(long *)(lVar17 + 0x50);
    lVar48 = *(long *)(lVar17 + 0x68);
    lVar47 = *(long *)(lVar17 + 0x60);
    *(long *)(unaff_x20 + 0xe) = *(long *)(lVar17 + 0x58);
    *(long *)(unaff_x20 + 0xc) = lVar46;
    *(long *)(unaff_x20 + 0x12) = lVar48;
    *(long *)(unaff_x20 + 0x10) = lVar47;
    *(long *)(unaff_x20 + 6) = lVar20;
    *(long *)(unaff_x20 + 4) = lVar15;
    *(long *)(unaff_x20 + 10) = lVar27;
    *(long *)(unaff_x20 + 8) = lVar28;
    lVar15 = func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.OptionSelected_TypeInfo*/ uRam0000000003d28718);
    /*Atlas.UI.Screens.PostEventScreen.OptionSelected$$.ctor*/ func_0x01562ec8(lVar15,param_1,uRam0000000003d56e20,0);
    *(long *)(unaff_x20 + 0x14) = lVar15;
    lVar15 = func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.OptionSelected_TypeInfo*/ uRam0000000003d28718);
    param_3 = puRam0000000003d56e18;
    /*Atlas.UI.Screens.PostEventScreen.OptionSelected$$.ctor*/ func_0x01562ec8(lVar15,param_1,puRam0000000003d56e18,0);
    *(long *)(unaff_x20 + 0x16) = lVar15;
    pdVar32 = *(dword **)(param_1 + 0x88);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_1 = 0;
    if (pdVar32 == (dword *)0x0) goto code_r0x01596ce4;
    pdVar21 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x78);
    uVar16 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar43 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar38 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x18);
    uVar45 = *(undefined8 *)((long)register0x00000008 + -0x30);
    uVar34 = *(undefined8 *)((long)register0x00000008 + -0x28);
    uVar37 = *(undefined8 *)((long)register0x00000008 + -0x40);
    uVar36 = *(undefined8 *)((long)register0x00000008 + -0x38);
    uVar42 = *(undefined8 *)((long)register0x00000008 + -0x50);
    uVar39 = *(undefined8 *)((long)register0x00000008 + -0x48);
  }
  uVar26 = 0;
  pdVar24 = (dword *)0x0;
  *(undefined8 *)((long)register0x00000008 + -0x40) = uVar37;
  *(undefined8 *)((long)register0x00000008 + -0x38) = uVar36;
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar45;
  *(undefined8 *)((long)register0x00000008 + -0x28) = uVar34;
  *(undefined8 *)((long)register0x00000008 + -0x20) = uVar38;
  *(undefined8 *)((long)register0x00000008 + -0x18) = uVar31;
  *(undefined8 *)((long)register0x00000008 + -0x10) = uVar16;
  *(undefined8 *)((long)register0x00000008 + -8) = uVar43;
  puVar40 = (undefined1 *)((long)register0x00000008 + -0x10);
  pdVar35 = (dword *)0x0;
  pdVar25 = unaff_x20;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
  lVar15 = *(long *)(pdVar32 + 4);
  if (lVar15 != 0) {
    pdVar24 = (dword *)0x0;
    uVar26 = 0;
    puVar44 = &UNK_01470820;
    pdVar22 = pdVar21;
    pdVar25 = unaff_x20;
code_r0x02f87f38:
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar37;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(dword **)((long)register0x00000008 + -0x78) = unaff_x20;
    *(dword **)((long)register0x00000008 + -0x70) = pdVar32;
    *(dword **)((long)register0x00000008 + -0x68) = pdVar21;
    *(undefined1 **)((long)register0x00000008 + -0x60) = puVar40;
    *(undefined **)((long)register0x00000008 + -0x58) = puVar44;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x130) = uVar42;
    *(undefined8 *)((long)register0x00000008 + -0x128) = uVar39;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3ebc000;
    *(dword **)((long)register0x00000008 + -0x118) = pdVar22;
    *(dword **)((long)register0x00000008 + -0x110) = pdVar25;
    *(undefined8 *)((long)register0x00000008 + -0x108) = uVar26;
    *(long *)((long)register0x00000008 + -0x100) = lVar15;
    *(dword **)((long)register0x00000008 + -0xf8) = pdVar24;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_02f87f9c;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar17 = *(long *)(lVar15 + 0x78);
    if (lVar17 != 0) {
      iVar13 = *(int *)(lVar17 + 0x18);
      if (iVar13 < 1) {
        return (dword *)0x0;
      }
      iVar14 = 1;
      pdVar32 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar17 + 0x18) <= iVar14 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)(iVar14 - 1U) * 0x20 + 0x20);
        if (lVar17 == 0) break;
        uVar19 = /*System.String$$Equals*/ func_0x029caa48(lVar17,pdVar22,5,0);
        if ((uVar19 & 1) != 0) {
          return pdVar32;
        }
        pdVar32 = (dword *)(ulong)(iVar14 < iVar13);
        if (iVar13 == iVar14) {
          return pdVar32;
        }
        lVar17 = *(long *)(lVar15 + 0x78);
        iVar14 = iVar14 + 1;
      } while (lVar17 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar50 = func_0x00f78af4();
  pdVar22 = auVar50._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x60) = puVar40;
  *(undefined **)((long)register0x00000008 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
  lVar15 = *(long *)(auVar50._0_8_ + 0x10);
  if (lVar15 != 0) {
    puVar40 = *(undefined1 **)((long)register0x00000008 + -0x60);
    puVar44 = *(undefined **)((long)register0x00000008 + -0x58);
    goto code_r0x02f87f38;
  }
  auVar50 = func_0x00f78af4();
  uVar16 = auVar50._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined **)((long)register0x00000008 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
  lVar15 = *(long *)(auVar50._0_8_ + 0x10);
  if (lVar15 != 0) {
    pdVar24 = (dword *)0x0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(dword **)((long)register0x00000008 + -0x88) = unaff_x20;
    *(dword **)((long)register0x00000008 + -0x80) = pdVar32;
    *(dword **)((long)register0x00000008 + -0x78) = pdVar21;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x68);
    if ((bRam0000000003ebc64b & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar17 = *(long *)(lVar15 + 0x70);
    if (lVar17 != 0) {
      lVar20 = lVar17;
      if (*(uint *)(lVar17 + 0x18) <= auVar50._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar20 = *(long *)(lVar15 + 0x70);
      }
      if (lVar20 != 0) {
        lVar17 = *(long *)(lVar17 + 0x10) + (long)(int)auVar50._8_4_ * 0x28;
        uVar45 = *(undefined8 *)(lVar17 + 0x28);
        uVar38 = *(undefined8 *)(lVar17 + 0x20);
        uVar2 = *(undefined4 *)(lVar17 + 0x42);
        *(undefined4 *)((long)register0x00000008 + -0xd8) = uVar2;
        uVar5 = *(undefined2 *)(lVar17 + 0x46);
        *(undefined2 *)((long)register0x00000008 + -0xd4) = uVar5;
        *(undefined8 *)((long)register0x00000008 + -200) = uVar45;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar38;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar45;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar38;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined2 *)((long)register0x00000008 + -0xa0) = 1;
        *(undefined4 *)((long)register0x00000008 + -0x9e) = uVar2;
        *(undefined2 *)((long)register0x00000008 + -0x9a) = uVar5;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar20,uVar16,(undefined1 *)((long)register0x00000008 + -0xc0),
                        uRam0000000003d3ddd0);
        pdVar32 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar15,uVar16);
        return pdVar32;
      }
    }
    auVar50 = func_0x00f78af4();
    pdVar22 = auVar50._8_8_;
    puVar11 = (undefined1 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(long *)((long)register0x00000008 + -0x108) = lVar17;
    *(long *)((long)register0x00000008 + -0x100) = lVar15;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar16;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined **)((long)register0x00000008 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
    puVar40 = (undefined1 *)((long)register0x00000008 + -0xf0);
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar15 = *(long *)(auVar50._0_8_ + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= auVar50._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)auVar50._8_4_ * 0x28 + 0x28);
      if (lVar15 == 0) {
        pdVar32 = (dword *)0x0;
      }
      else {
        pdVar32 = *(dword **)(lVar15 + 0x40);
      }
      return pdVar32;
    }
    puVar44 = &Core_UI2_UIScreen__ForceExit;
    pdVar21 = (dword *)func_0x00f78af4();
    pdVar32 = (dword *)0x0;
    unaff_x20 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar50 = func_0x00f78af4();
  pdVar22 = auVar50._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined **)((long)register0x00000008 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
  lVar15 = *(long *)(auVar50._0_8_ + 0x10);
  auVar50._8_8_ = unaff_x20;
  auVar50._0_8_ = lVar15;
  if (lVar15 != 0) {
    pdVar24 = (dword *)0x0;
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x70);
    puVar40 = *(undefined1 **)((long)register0x00000008 + -0x80);
    puVar44 = *(undefined **)((long)register0x00000008 + -0x78);
    pdVar33 = pdVar32;
    goto code_r0x02f877a8;
  }
  auVar50 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0x88) =
       &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar15 = *(long *)(auVar50._0_8_ + 0x10);
  auVar50._8_8_ = auVar50._8_8_;
  auVar50._0_8_ = lVar15;
  if (lVar15 != 0) {
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar40 = *(undefined1 **)((long)register0x00000008 + -0x90);
    puVar44 = *(undefined **)((long)register0x00000008 + -0x88);
    pdVar22 = pdVar24;
    while( true ) {
      puVar6 = puVar7 + -0x30;
      *(dword **)(puVar7 + -0x30) = pdVar35;
      *(dword **)(puVar7 + -0x28) = unaff_x20;
      *(dword **)(puVar7 + -0x20) = pdVar32;
      *(dword **)(puVar7 + -0x18) = pdVar21;
      *(undefined1 **)(puVar7 + -0x10) = puVar40;
      *(undefined **)(puVar7 + -8) = puVar44;
      puVar40 = puVar7 + -0x10;
      puVar44 = &UNK_02f883d8;
      pdVar24 = pdVar22;
      pdVar21 = pdVar25;
      pdVar33 = pdVar22;
      pdVar35 = auVar50._0_8_;
code_r0x02f877a8:
      pdVar32 = auVar50._0_8_;
      puVar11 = puVar6 + -0x60;
      *(dword **)(puVar6 + -0x30) = pdVar35;
      *(long *)(puVar6 + -0x28) = auVar50._8_8_;
      *(dword **)(puVar6 + -0x20) = pdVar33;
      *(dword **)(puVar6 + -0x18) = pdVar21;
      *(undefined1 **)(puVar6 + -0x10) = puVar40;
      *(undefined **)(puVar6 + -8) = puVar44;
      puVar40 = puVar6 + -0x10;
      pdVar21 = pdVar32;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar21 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar30 = (uint)pdVar22;
      if (((int)uVar30 < 0) || ((int)*(long *)(pdVar32 + 0x14) <= (int)uVar30)) {
        return pdVar21;
      }
      lVar15 = *(long *)(pdVar32 + 0x1c);
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(lVar15 + 0x10) + ((ulong)pdVar22 & 0xffffffff) * 0x28;
      pdVar35 = *(dword **)(lVar15 + 0x20);
      pdVar21 = *(dword **)(lVar15 + 0x28);
      *(undefined4 *)(puVar6 + -0x60) = *(undefined4 *)(lVar15 + 0x42);
      *(undefined2 *)(puVar6 + -0x5c) = *(undefined2 *)(lVar15 + 0x46);
      if (pdVar21 == (dword *)0x0) {
        lVar15 = *(long *)(pdVar32 + 0x1c);
        if (lVar15 != 0) {
          *(dword **)(puVar6 + -0x58) = pdVar35;
          *(undefined8 *)(puVar6 + -0x50) = 0;
          *(undefined8 *)(puVar6 + -0x48) = 0;
          *(undefined8 *)(puVar6 + -0x40) = 0;
          *(undefined2 *)(puVar6 + -0x38) = 0;
          *(undefined4 *)(puVar6 + -0x36) = *(undefined4 *)(puVar6 + -0x60);
          *(undefined2 *)(puVar6 + -0x32) = *(undefined2 *)(puVar6 + -0x5c);
          pdVar32 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar15,pdVar22,puVar6 + -0x58,uRam0000000003d3ddd0);
          return pdVar32;
        }
        break;
      }
      puVar44 = &UNK_02f87848;
      unaff_x20 = pdVar21;
code_r0x02f882d8:
      *(dword **)(puVar11 + -0x20) = pdVar32;
      *(dword **)(puVar11 + -0x18) = pdVar22;
      *(undefined1 **)(puVar11 + -0x10) = puVar40;
      *(undefined **)(puVar11 + -8) = puVar44;
      (**(code **)(*(long *)pdVar21 + 0x218))(pdVar21,*(undefined8 *)(*(long *)pdVar21 + 0x220));
      if (*(long *)(pdVar21 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar21 + 10),0);
        pdVar21[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar21,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar32 = (dword *)(**(code **)(*(long *)pdVar21 + 0x228))
                                     (pdVar21,*(undefined8 *)(*(long *)pdVar21 + 0x230));
        return pdVar32;
      }
      func_0x00f78af4();
      puVar7 = puVar11 + -0x40;
      *(dword **)(puVar11 + -0x40) = pdVar32;
      *(dword **)(puVar11 + -0x38) = pdVar21;
      *(undefined1 **)(puVar11 + -0x30) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar40 = puVar11 + -0x30;
      if (extraout_x1 != (long *)0x0) {
        lVar15 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar16 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar16,lVar15);
        pdVar32 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar32;
      }
      puVar44 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar50 = func_0x00f78af4();
      pdVar22 = pdVar24;
    }
    lVar15 = func_0x00f78af4();
    *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar6 + -0x98) = unaff_d8;
    *(dword **)(puVar6 + -0x90) = pdVar35;
    *(undefined8 *)(puVar6 + -0x88) = 0;
    *(dword **)(puVar6 + -0x80) = pdVar32;
    *(dword **)(puVar6 + -0x78) = pdVar22;
    *(undefined1 **)(puVar6 + -0x70) = puVar40;
    *(undefined **)(puVar6 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar16 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar16,0);
    if (0 < *(int *)(lVar15 + 0x50)) {
      iVar13 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar15,iVar13);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar15,iVar13);
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(lVar15 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar15);
    *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x80);
    *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x78);
    *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
    *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar32 = (dword *)(*pcRam0000000003ec05a0)(uVar16);
    return pdVar32;
  }
  auVar50 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0xa0) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined **)((long)register0x00000008 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar15 = *(long *)(auVar50._0_8_ + 0x10);
  if (lVar15 == 0) {
    auVar50 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined **)((long)register0x00000008 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
    lVar15 = *(long *)(auVar50._0_8_ + 0x10);
    auVar51._8_8_ = auVar50._8_8_;
    auVar51._0_8_ = lVar15;
    if (lVar15 != 0) {
      pdVar25 = (dword *)0x0;
      puVar8 = (undefined1 *)((long)register0x00000008 + -0xa0);
      puVar40 = *(undefined1 **)((long)register0x00000008 + -0xb0);
      puVar44 = *(undefined **)((long)register0x00000008 + -0xa8);
      goto code_r0x02f884dc;
    }
    auVar50 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined **)((long)register0x00000008 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
    lVar15 = *(long *)(auVar50._0_8_ + 0x10);
    auVar52._8_8_ = auVar50._8_8_;
    auVar52._0_8_ = lVar15;
    if (lVar15 == 0) {
      auVar50 = func_0x00f78af4();
      *(undefined1 **)((long)register0x00000008 + -0xd0) =
           (undefined1 *)((long)register0x00000008 + -0xc0);
      *(undefined **)((long)register0x00000008 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar15 = *(long *)(auVar50._0_8_ + 0x10);
      auVar53._8_8_ = auVar50._8_8_;
      auVar53._0_8_ = lVar15;
      if (lVar15 == 0) {
        pdVar35 = (dword *)func_0x00f78af4();
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
        *(dword **)((long)register0x00000008 + -0xf8) = unaff_x20;
        *(dword **)((long)register0x00000008 + -0xf0) = pdVar32;
        *(dword **)((long)register0x00000008 + -0xe8) = pdVar21;
        *(undefined1 **)((long)register0x00000008 + -0xe0) =
             (undefined1 *)((long)register0x00000008 + -0xd0);
        *(undefined **)((long)register0x00000008 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar16 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar16,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar35 + 0xc) = uVar16;
        return pdVar35;
      }
      puVar10 = (undefined1 *)((long)register0x00000008 + -0xc0);
      puVar40 = *(undefined1 **)((long)register0x00000008 + -0xd0);
      puVar44 = *(undefined **)((long)register0x00000008 + -200);
      goto code_r0x02f88674;
    }
    puVar9 = (undefined1 *)((long)register0x00000008 + -0xb0);
    puVar40 = *(undefined1 **)((long)register0x00000008 + -0xc0);
    puVar44 = *(undefined **)((long)register0x00000008 + -0xb8);
    pdVar25 = pdVar24;
    pdVar35 = unaff_x20;
  }
  else {
    pdVar25 = (dword *)0x0;
    puVar8 = (undefined1 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(dword **)((long)register0x00000008 + -0xb8) = unaff_x20;
    *(dword **)((long)register0x00000008 + -0xb0) = pdVar32;
    *(dword **)((long)register0x00000008 + -0xa8) = pdVar21;
    *(undefined8 *)((long)register0x00000008 + -0xa0) =
         *(undefined8 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0x98) =
         *(undefined8 *)((long)register0x00000008 + -0x98);
    puVar40 = (undefined1 *)((long)register0x00000008 + -0xa0);
    unaff_x20 = (dword *)0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar30 = auVar50._8_4_;
    if (((int)uVar30 < 0) || (*(int *)(lVar15 + 0x50) <= (int)uVar30)) {
      return (dword *)0x0;
    }
    lVar15 = *(long *)(lVar15 + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar17 = *(long *)(lVar15 + 0x10) + ((ulong)auVar50._8_8_ & 0xffffffff) * 0x28;
      lVar15 = *(long *)(lVar17 + 0x28);
      cVar3 = *(char *)(lVar17 + 0x40);
      iVar13 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar17 + 0x30),0);
      if (iVar13 == 0 || cVar3 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar15 != 0) && (*(int *)(lVar15 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar44 = &Core_UI2_UIManager__GetLayerState;
    auVar51 = func_0x00f78af4();
    pdVar32 = (dword *)0x0;
    pdVar21 = auVar50._8_8_;
code_r0x02f884dc:
    puVar9 = puVar8 + -0x30;
    *(undefined8 *)(puVar8 + -0x30) = 0;
    *(dword **)(puVar8 + -0x28) = unaff_x20;
    *(dword **)(puVar8 + -0x20) = pdVar32;
    *(dword **)(puVar8 + -0x18) = pdVar21;
    *(undefined1 **)(puVar8 + -0x10) = puVar40;
    *(undefined **)(puVar8 + -8) = puVar44;
    puVar40 = puVar8 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar15 = *(long *)(auVar51._0_8_ + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= auVar51._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)auVar51._8_4_ * 0x28 + 0x28);
      if (lVar15 == 0) {
        pdVar32 = &MACH_HEADER.cputype;
      }
      else {
        pdVar32 = (dword *)(ulong)*(uint *)(lVar15 + 0x4c);
      }
      return pdVar32;
    }
    puVar44 = &Core_UI2_UIManager__EnableInput;
    auVar52 = func_0x00f78af4();
    pdVar32 = (dword *)0x0;
    pdVar21 = auVar51._8_8_;
    pdVar35 = (dword *)0x3ebc000;
  }
  pdVar22 = auVar52._8_8_;
  unaff_x20 = auVar52._0_8_;
  puVar10 = puVar9 + -0x40;
  *(undefined8 *)(puVar9 + -0x40) = uVar37;
  *(undefined8 *)(puVar9 + -0x38) = 0x3eb4000;
  *(undefined8 *)(puVar9 + -0x30) = 0;
  *(dword **)(puVar9 + -0x28) = pdVar35;
  *(dword **)(puVar9 + -0x20) = pdVar32;
  *(dword **)(puVar9 + -0x18) = pdVar21;
  *(undefined1 **)(puVar9 + -0x10) = puVar40;
  *(undefined **)(puVar9 + -8) = puVar44;
  puVar40 = puVar9 + -0x10;
  pdVar35 = (dword *)0x3ebc000;
  pdVar24 = pdVar25;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(unaff_x20 + 0x1a) != 0) {
    pdVar24 = (dword *)(ulong)((uint)pdVar25 ^ 1);
    pdVar32 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(unaff_x20 + 0x1a),pdVar22,pdVar24,0);
    lVar15 = *(long *)(unaff_x20 + 0x1c);
    pdVar35 = (dword *)0x0;
    if (lVar15 != 0) {
      uVar30 = auVar52._8_4_;
      if (*(uint *)(lVar15 + 0x18) <= uVar30) {
        pdVar32 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0) ||
         (pdVar35 = *(dword **)(unaff_x20 + 0xc), pdVar35 == (dword *)0x0)) {
        return pdVar32;
      }
      lVar15 = *(long *)(unaff_x20 + 0x1c);
      unaff_x20 = (dword *)0x0;
      if (lVar15 != 0) {
        if (*(uint *)(lVar15 + 0x18) <= uVar30) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar23 = *(long **)(*(long *)(lVar15 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28);
        *(undefined8 *)(puVar9 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar9 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar9 + -0x50) = uVar42;
        *(undefined8 *)(puVar9 + -0x48) = uVar39;
        *(undefined8 *)(puVar9 + -0x40) = *(undefined8 *)(puVar9 + -0x40);
        *(undefined8 *)(puVar9 + -0x38) = *(undefined8 *)(puVar9 + -0x38);
        *(undefined8 *)(puVar9 + -0x30) = *(undefined8 *)(puVar9 + -0x30);
        *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)(puVar9 + -0x28);
        *(undefined8 *)(puVar9 + -0x20) = *(undefined8 *)(puVar9 + -0x20);
        *(undefined8 *)(puVar9 + -0x18) = *(undefined8 *)(puVar9 + -0x18);
        *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
        *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        *(dword **)(puVar9 + -0x68) = pdVar35;
        lVar15 = *(long *)(pdVar35 + 0x1a);
        if (lVar15 == 0) {
          puVar40 = puVar9 + -0x68;
          lVar17 = 1;
        }
        else {
          lVar17 = *(long *)(lVar15 + 0x18);
          if (lVar17 == 0) {
            return pdVar35;
          }
          puVar40 = (undefined1 *)(lVar15 + 0x20);
        }
        lVar15 = 0;
        do {
          lVar20 = *(long *)(puVar40 + lVar15 * 8);
          pcVar41 = *(code **)(lVar20 + 0x10);
          plVar1 = *(long **)(lVar20 + 0x20);
          lVar20 = *(long *)(lVar20 + 0x28);
          if (*(short *)(lVar20 + 0x48) == -1) {
            func_0x00f78ad8(lVar20);
          }
          iVar13 = func_0x00f78a4c(lVar20);
          bVar12 = *(char *)(lVar20 + 0x4a) == '\x03';
          if (iVar13 == 0) {
            if (bVar12) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar32 = (dword *)(*pcVar41)(plVar23,pdVar22,pdVar25,lVar20);
              }
              else {
                if (((*(short *)(lVar20 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar35 + 6) == 0)) goto code_r0x01e71aac;
                iVar13 = func_0x00f78a44(lVar20);
                iVar14 = func_0x00f78ec0(lVar20);
                if (iVar13 == 0) {
                  uVar4 = *(ushort *)(lVar20 + 0x48);
                  if (iVar14 == 0) {
                    lVar20 = *plVar1 + (ulong)uVar4 * 0x10;
                    pdVar32 = (dword *)(**(code **)(lVar20 + 0x138))
                                                 (plVar1,plVar23,pdVar22,pdVar25,
                                                  *(undefined8 *)(lVar20 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar20 = func_0x00f78a48(lVar20);
                  lVar28 = *plVar1;
                  uVar19 = (ulong)*(ushort *)(lVar28 + 0x12a);
                  if (uVar19 != 0) {
                    piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == lVar20) {
                        puVar18 = (undefined8 *)
                                  (lVar28 + (long)(int)(*piVar29 + (uint)uVar4) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar29 = piVar29 + 4;
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
                  puVar18 = (undefined8 *)func_0x00fac1f0(plVar1,lVar20,(ulong)uVar4);
code_r0x01e71d74:
                  pcVar41 = (code *)*puVar18;
                  puVar18 = (undefined8 *)puVar18[1];
                }
                else {
                  if (iVar14 == 0) {
                    uVar16 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar28 = *plVar1;
                    uVar19 = (ulong)*(ushort *)(lVar28 + 0x12a);
                    if (uVar19 != 0) {
                      piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar29 + -2) == *(long *)(lVar20 + 0x18)) {
                          lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar20 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar29 = piVar29 + 4;
                        uVar19 = uVar19 - 1;
                      } while (uVar19 != 0);
                    }
                    lVar28 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar16 = *(undefined8 *)(lVar28 + 8);
                  }
                  puVar18 = (undefined8 *)func_0x00f78acc(uVar16,lVar20);
                  pcVar41 = (code *)*puVar18;
                }
                pdVar32 = (dword *)(*pcVar41)(plVar1,plVar23,pdVar22,pdVar25,puVar18);
              }
            }
            else {
              if ((*(short *)(lVar20 + 0x48) == -1) || (*(long *)(pdVar35 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar13 = func_0x00f78a44(lVar20);
              iVar14 = func_0x00f78ec0(lVar20);
              if (iVar13 == 0) {
                uVar4 = *(ushort *)(lVar20 + 0x48);
                if (iVar14 == 0) {
                  lVar20 = *plVar23 + (ulong)uVar4 * 0x10;
                  pdVar32 = (dword *)(**(code **)(lVar20 + 0x138))
                                               (plVar23,pdVar22,pdVar25,
                                                *(undefined8 *)(lVar20 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar20 = func_0x00f78a48(lVar20);
                lVar28 = *plVar23;
                uVar19 = (ulong)*(ushort *)(lVar28 + 0x12a);
                if (uVar19 != 0) {
                  piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar29 + -2) == lVar20) {
                      puVar18 = (undefined8 *)
                                (lVar28 + (long)(int)(*piVar29 + (uint)uVar4) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar29 = piVar29 + 4;
                    uVar19 = uVar19 - 1;
                  } while (uVar19 != 0);
                }
                puVar18 = (undefined8 *)func_0x00fac1f0(plVar23,lVar20,(ulong)uVar4);
code_r0x01e71d00:
                pcVar41 = (code *)*puVar18;
                puVar18 = (undefined8 *)puVar18[1];
              }
              else {
                if (iVar14 == 0) {
                  uVar16 = *(undefined8 *)
                            (*plVar23 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar28 = *plVar23;
                  uVar19 = (ulong)*(ushort *)(lVar28 + 0x12a);
                  if (uVar19 != 0) {
                    piVar29 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar29 + -2) == *(long *)(lVar20 + 0x18)) {
                        lVar28 = lVar28 + (long)(int)(*piVar29 + (uint)*(ushort *)(lVar20 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar29 = piVar29 + 4;
                      uVar19 = uVar19 - 1;
                    } while (uVar19 != 0);
                  }
                  lVar28 = func_0x00fac1f0(plVar23);
code_r0x01e71cd8:
                  uVar16 = *(undefined8 *)(lVar28 + 8);
                }
                puVar18 = (undefined8 *)func_0x00f78acc(uVar16,lVar20);
                pcVar41 = (code *)*puVar18;
              }
              pdVar32 = (dword *)(*pcVar41)(plVar23,pdVar22,pdVar25,puVar18);
            }
          }
          else {
            if (bVar12) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar32 = (dword *)(*pcVar41)(plVar1,plVar23,pdVar22,pdVar25,lVar20);
          }
code_r0x01e71bd0:
          lVar15 = lVar15 + 1;
          if (lVar15 == lVar17) {
            return pdVar32;
          }
        } while( true );
      }
    }
  }
  puVar44 = &Core_UI2_UIManager__SetScreenVisible;
  auVar53 = func_0x00f78af4();
  pdVar21 = pdVar25;
  pdVar32 = pdVar22;
code_r0x02f88674:
  pdVar25 = auVar53._0_8_;
  *(dword **)(puVar10 + -0x30) = pdVar35;
  *(dword **)(puVar10 + -0x28) = unaff_x20;
  *(dword **)(puVar10 + -0x20) = pdVar32;
  *(dword **)(puVar10 + -0x18) = pdVar21;
  *(undefined1 **)(puVar10 + -0x10) = puVar40;
  *(undefined **)(puVar10 + -8) = puVar44;
  pdVar32 = pdVar25;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar32 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar15 = *(long *)(pdVar25 + 0x1c);
  if (lVar15 != 0) {
    uVar30 = auVar53._8_4_;
    if (*(uint *)(lVar15 + 0x18) <= uVar30) {
      pdVar32 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28) == 0) {
      return pdVar32;
    }
    lVar15 = *(long *)(pdVar25 + 0x1c);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= uVar30) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar30 * 0x28 + 0x28);
      if ((lVar15 != 0) && (plVar23 = *(long **)(lVar15 + 0x28), plVar23 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar32 = (dword *)(**(code **)(*plVar23 + 0x178))
                                     (plVar23,pdVar24,*(undefined8 *)(*plVar23 + 0x180));
        return pdVar32;
      }
    }
  }
  auVar50 = func_0x00f78af4();
  uVar16 = auVar50._0_8_;
  *(long *)(puVar10 + -0x50) = auVar53._8_8_;
  *(dword **)(puVar10 + -0x48) = pdVar24;
  *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
  *(undefined **)(puVar10 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar10 + -0x68) = 0;
  *(undefined8 *)(puVar10 + -0x70) = 0;
  *(undefined8 *)(puVar10 + -0x58) = 0;
  *(undefined8 *)(puVar10 + -0x60) = 0;
  pdVar32 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar16,auVar50._8_8_,puVar10 + -0x70);
  if ((int)pdVar32 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar16,*(undefined8 *)(puVar10 + -0x60),*(undefined8 *)(puVar10 + -0x58));
    *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x68);
    *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x70);
    *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x58);
    *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x60);
    pdVar32 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar16,puVar10 + -0x90,1);
  }
  return pdVar32;
}



// ============================================================
// RVA: 0x15969d0 | Atlas.Contexts.FrontendContextPostSingleplayerState.ShowPostArcadeScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontendContextPostSingleplayerState__ShowPostArcadeScreen
                  (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  dword *pdVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  dword *pdVar20;
  ulong uVar21;
  long lVar22;
  dword *pdVar23;
  long *extraout_x1;
  dword *pdVar24;
  long *plVar25;
  dword *pdVar26;
  dword *pdVar27;
  undefined8 uVar28;
  long lVar29;
  int *piVar30;
  uint uVar31;
  long unaff_x19;
  dword *pdVar32;
  dword *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar33;
  undefined8 unaff_x25;
  dword **ppdVar34;
  code *pcVar35;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar36;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *puVar37;
  undefined *unaff_x30;
  undefined4 extraout_s0;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  dword *pdStack_138;
  dword *pdStack_f8;
  undefined *puStack_58;
  
  puVar36 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb518d & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d56e20);
    func_0x00f78a20(0x3d56e28);
    func_0x00f78a20(0x3d286f8);
    func_0x00f78a20(0x3d405b8);
    func_0x00f78a20(0x3d28700);
    bRam0000000003eb518d = 1;
  }
  pdVar15 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.PostArcadeScreen.TransitionData_TypeInfo*/ uRam0000000003d28700);
  /*Atlas.UI.Screens.PostArcadeScreen.TransitionData$$.ctor*/ func_0x01562ba0(pdVar15,0);
  lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405b8);
  lVar17 = 0x3d28700;
  uVar28 = unaff_x23;
  uVar18 = unaff_x24;
  uVar33 = unaff_x25;
  if (((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x10), lVar16 == 0)) ||
     (lVar17 = 0x3d28700, pdVar15 == (dword *)0x0)) {
LAB_01596b64:
    unaff_x25 = uVar33;
    unaff_x24 = uVar18;
    unaff_x23 = uVar28;
    unaff_x21 = lVar17;
    unaff_x19 = param_1;
    lVar17 = func_0x00f78af4();
    puStack_58 = &Atlas_Contexts_FrontendContextPostSingleplayerState__ShowPostEventScreen;
    if ((bRam0000000003eb518c & 1) == 0) {
      func_0x00f78a20(0x3d1feb8);
      func_0x00f78a20(0x3d56e18);
      func_0x00f78a20(0x3d56e20);
      func_0x00f78a20(0x3d28718);
      func_0x00f78a20(0x3d405b8);
      func_0x00f78a20(0x3d28720);
      bRam0000000003eb518c = 1;
    }
    pdVar20 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.TransitionData_TypeInfo*/ uRam0000000003d28720);
    /*Atlas.UI.Screens.PostEventScreen.TransitionData$$.ctor*/ func_0x01563140(pdVar20,0);
    lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar17,uRam0000000003d405b8);
    if (((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x10), lVar16 == 0)) ||
       (pdVar20 == (dword *)0x0)) {
code_r0x01596ce4:
      lVar17 = func_0x00f78af4();
      if ((bRam0000000003eb518e & 1) == 0) {
        func_0x00f78a20(0x3d2a040);
        func_0x00f78a20(0x3d405b8);
        bRam0000000003eb518e = 1;
      }
      pdVar15 = *(dword **)(lVar17 + 0x80);
      lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar17,uRam0000000003d405b8);
      if ((lVar17 == 0) || (pdVar15 == (dword *)0x0)) {
        lVar17 = func_0x00f78af4();
        pdStack_f8 = (dword *)0x3d405b8;
        if ((bRam0000000003eb518f & 1) == 0) {
          func_0x00f78a20(0x3d2a5b0);
          func_0x00f78a20(0x3d194e8);
          func_0x00f78a20(0x3d27650);
          func_0x00f78a20(0x3d405b8);
          func_0x00f78a20(0x3d25458);
          bRam0000000003eb518f = 1;
        }
        uVar28 = /*Atlas.Contexts.FrontEndContextSingleplayerState_var*/ uRam0000000003d194e8;
        pdVar15 = *(dword **)(lVar17 + 0x78);
        if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pdVar32 = (dword *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar28,0);
        lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar17,uRam0000000003d405b8);
        if (lVar16 != 0) {
          uVar28 = *(undefined8 *)(lVar16 + 0x18);
          lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar17,uRam0000000003d405b8);
          if (lVar16 != 0) {
            puVar19 = *(undefined8 **)(lVar16 + 0x28);
            lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar17,uRam0000000003d405b8);
            if (lVar17 != 0) {
              uVar33 = *(undefined8 *)(lVar17 + 0x10);
              uVar18 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
              Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerTransitionData___ctor
                        (uVar18,uVar28,puVar19,0,0,uVar33,0);
              param_3 = puVar19;
              if (pdVar15 != (dword *)0x0) {
                pdStack_138 = pdVar15;
                lVar17 = *(long *)(pdVar15 + 0x1a);
                if (lVar17 == 0) {
                  ppdVar34 = &pdStack_138;
                  lVar16 = 1;
                }
                else {
                  lVar16 = *(long *)(lVar17 + 0x18);
                  if (lVar16 == 0) {
                    return pdVar15;
                  }
                  ppdVar34 = (dword **)(lVar17 + 0x20);
                }
                lVar17 = 0;
                do {
                  pdVar20 = ppdVar34[lVar17];
                  pcVar35 = *(code **)(pdVar20 + 4);
                  plVar25 = *(long **)(pdVar20 + 8);
                  lVar22 = *(long *)(pdVar20 + 10);
                  if (*(short *)(lVar22 + 0x48) == -1) {
                    func_0x00f78ad8(lVar22);
                  }
                  iVar14 = func_0x00f78a4c(lVar22);
                  bVar12 = *(char *)(lVar22 + 0x4a) == '\x03';
                  if (iVar14 == 0) {
                    if (bVar12) {
                      if (plVar25 == (long *)0x0) {
code_r0x01e7173c:
                        pdVar20 = (dword *)(*pcVar35)(pdVar32,0,uVar18,lVar22);
                      }
                      else {
                        if (((*(short *)(lVar22 + 0x48) == -1) ||
                            ((*(byte *)(*plVar25 + 0x115) & 1) != 0)) ||
                           (*(long *)(pdVar15 + 6) == 0)) goto code_r0x01e7162c;
                        iVar14 = func_0x00f78a44(lVar22);
                        iVar13 = func_0x00f78ec0(lVar22);
                        if (iVar14 == 0) {
                          uVar4 = *(ushort *)(lVar22 + 0x48);
                          if (iVar13 == 0) {
                            lVar22 = *plVar25 + (ulong)uVar4 * 0x10;
                            pdVar20 = (dword *)(**(code **)(lVar22 + 0x138))
                                                         (plVar25,pdVar32,0,uVar18,
                                                          *(undefined8 *)(lVar22 + 0x140));
                            goto code_r0x01e71750;
                          }
                          lVar22 = func_0x00f78a48(lVar22);
                          lVar29 = *plVar25;
                          uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
                          if (uVar21 != 0) {
                            piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar30 + -2) == lVar22) {
                                puVar19 = (undefined8 *)
                                          (lVar29 + (long)(int)(*piVar30 + (uint)uVar4) * 0x10 +
                                          0x138);
                                goto code_r0x01e718f4;
                              }
                              piVar30 = piVar30 + 4;
                              uVar21 = uVar21 - 1;
                            } while (uVar21 != 0);
                          }
                          puVar19 = (undefined8 *)func_0x00fac1f0(plVar25,lVar22,(ulong)uVar4);
code_r0x01e718f4:
                          pcVar35 = (code *)*puVar19;
                          puVar19 = (undefined8 *)puVar19[1];
                        }
                        else {
                          if (iVar13 == 0) {
                            uVar28 = *(undefined8 *)
                                      (*plVar25 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
                          }
                          else {
                            lVar29 = *plVar25;
                            uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
                            if (uVar21 != 0) {
                              piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar30 + -2) == *(long *)(lVar22 + 0x18)) {
                                  lVar29 = lVar29 + (long)(int)(*piVar30 +
                                                               (uint)*(ushort *)(lVar22 + 0x48)) *
                                                    0x10 + 0x138;
                                  goto code_r0x01e718cc;
                                }
                                piVar30 = piVar30 + 4;
                                uVar21 = uVar21 - 1;
                              } while (uVar21 != 0);
                            }
                            lVar29 = func_0x00fac1f0(plVar25);
code_r0x01e718cc:
                            uVar28 = *(undefined8 *)(lVar29 + 8);
                          }
                          puVar19 = (undefined8 *)func_0x00f78acc(uVar28,lVar22);
                          pcVar35 = (code *)*puVar19;
                        }
                        pdVar20 = (dword *)(*pcVar35)(plVar25,pdVar32,0,uVar18,puVar19);
                      }
                    }
                    else {
                      if ((*(short *)(lVar22 + 0x48) == -1) || (*(long *)(pdVar15 + 6) == 0))
                      goto code_r0x01e7173c;
                      iVar14 = func_0x00f78a44(lVar22);
                      iVar13 = func_0x00f78ec0(lVar22);
                      if (iVar14 == 0) {
                        uVar4 = *(ushort *)(lVar22 + 0x48);
                        if (iVar13 == 0) {
                          lVar22 = *(long *)pdVar32 + (ulong)uVar4 * 0x10;
                          pdVar20 = (dword *)(**(code **)(lVar22 + 0x138))
                                                       (pdVar32,0,uVar18,
                                                        *(undefined8 *)(lVar22 + 0x140));
                          goto code_r0x01e71750;
                        }
                        lVar22 = func_0x00f78a48(lVar22);
                        lVar29 = *(long *)pdVar32;
                        uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
                        if (uVar21 != 0) {
                          piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar30 + -2) == lVar22) {
                              puVar19 = (undefined8 *)
                                        (lVar29 + (long)(int)(*piVar30 + (uint)uVar4) * 0x10 + 0x138
                                        );
                              goto code_r0x01e71880;
                            }
                            piVar30 = piVar30 + 4;
                            uVar21 = uVar21 - 1;
                          } while (uVar21 != 0);
                        }
                        puVar19 = (undefined8 *)func_0x00fac1f0(pdVar32,lVar22,(ulong)uVar4);
code_r0x01e71880:
                        pcVar35 = (code *)*puVar19;
                        puVar19 = (undefined8 *)puVar19[1];
                      }
                      else {
                        if (iVar13 == 0) {
                          uVar28 = *(undefined8 *)
                                    (*(long *)pdVar32 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 +
                                    0x140);
                        }
                        else {
                          lVar29 = *(long *)pdVar32;
                          uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
                          if (uVar21 != 0) {
                            piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar30 + -2) == *(long *)(lVar22 + 0x18)) {
                                lVar29 = lVar29 + (long)(int)(*piVar30 +
                                                             (uint)*(ushort *)(lVar22 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e71858;
                              }
                              piVar30 = piVar30 + 4;
                              uVar21 = uVar21 - 1;
                            } while (uVar21 != 0);
                          }
                          lVar29 = func_0x00fac1f0(pdVar32);
code_r0x01e71858:
                          uVar28 = *(undefined8 *)(lVar29 + 8);
                        }
                        puVar19 = (undefined8 *)func_0x00f78acc(uVar28,lVar22);
                        pcVar35 = (code *)*puVar19;
                      }
                      pdVar20 = (dword *)(*pcVar35)(pdVar32,0,uVar18,puVar19);
                    }
                  }
                  else {
                    if (bVar12) goto code_r0x01e7173c;
code_r0x01e7162c:
                    pdVar20 = (dword *)(*pcVar35)(plVar25,pdVar32,0,uVar18,lVar22);
                  }
code_r0x01e71750:
                  lVar17 = lVar17 + 1;
                  if (lVar17 == lVar16) {
                    return pdVar20;
                  }
                } while( true );
              }
            }
          }
        }
        pdVar15 = (dword *)func_0x00f78af4();
        pdStack_138 = pdVar32;
        if ((bRam0000000003eb5190 & 1) == 0) {
          func_0x00f78a20(0x3d405b0);
          bRam0000000003eb5190 = 1;
        }
        if (pdVar15 == (dword *)0x0) {
          auVar43 = func_0x00f78af4(0,uRam0000000003d405b0);
          pdVar15 = auVar43._0_8_;
          *(undefined8 *)(pdVar15 + 4) = *param_3;
          *(long *)(pdVar15 + 8) = auVar43._8_8_;
          *(undefined8 **)(pdVar15 + 10) = param_3;
          return pdVar15;
        }
        return pdVar15;
      }
      plVar25 = *(long **)(lVar17 + 0x10);
      pdStack_f8 = pdVar15;
      lVar17 = *(long *)(pdVar15 + 0x1a);
      if (lVar17 == 0) {
        ppdVar34 = &pdStack_f8;
        lVar16 = 1;
      }
      else {
        lVar16 = *(long *)(lVar17 + 0x18);
        if (lVar16 == 0) {
          return pdVar15;
        }
        ppdVar34 = (dword **)(lVar17 + 0x20);
      }
      lVar17 = 0;
      do {
        pdVar32 = ppdVar34[lVar17];
        pcVar35 = *(code **)(pdVar32 + 4);
        plVar1 = *(long **)(pdVar32 + 8);
        lVar22 = *(long *)(pdVar32 + 10);
        if (*(short *)(lVar22 + 0x48) == -1) {
          func_0x00f78ad8(lVar22);
        }
        iVar14 = func_0x00f78a4c(lVar22);
        bVar12 = *(char *)(lVar22 + 0x4a) == '\x01';
        if (iVar14 == 0) {
          if (bVar12) {
            if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
              pdVar32 = (dword *)(*pcVar35)(plVar25,lVar22);
            }
            else {
              if (((*(short *)(lVar22 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
                 (*(long *)(pdVar15 + 6) == 0)) goto code_r0x01e47fc0;
              iVar14 = func_0x00f78a44(lVar22);
              iVar13 = func_0x00f78ec0(lVar22);
              if (iVar14 == 0) {
                uVar4 = *(ushort *)(lVar22 + 0x48);
                if (iVar13 == 0) {
                  lVar22 = *plVar1 + (ulong)uVar4 * 0x10;
                  pdVar32 = (dword *)(**(code **)(lVar22 + 0x138))
                                               (plVar1,plVar25,*(undefined8 *)(lVar22 + 0x140));
                  goto code_r0x01e480d4;
                }
                lVar22 = func_0x00f78a48(lVar22);
                lVar29 = *plVar1;
                uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
                if (uVar21 != 0) {
                  piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar30 + -2) == lVar22) {
                      puVar19 = (undefined8 *)
                                (lVar29 + (long)(int)(*piVar30 + (uint)uVar4) * 0x10 + 0x138);
                      goto code_r0x01e48260;
                    }
                    piVar30 = piVar30 + 4;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
                puVar19 = (undefined8 *)func_0x00fac1f0(plVar1,lVar22,(ulong)uVar4);
code_r0x01e48260:
                pcVar35 = (code *)*puVar19;
                puVar19 = (undefined8 *)puVar19[1];
              }
              else {
                if (iVar13 == 0) {
                  uVar28 = *(undefined8 *)
                            (*plVar1 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar29 = *plVar1;
                  uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
                  if (uVar21 != 0) {
                    piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar30 + -2) == *(long *)(lVar22 + 0x18)) {
                        lVar29 = lVar29 + (long)(int)(*piVar30 + (uint)*(ushort *)(lVar22 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e48238;
                      }
                      piVar30 = piVar30 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  lVar29 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
                  uVar28 = *(undefined8 *)(lVar29 + 8);
                }
                puVar19 = (undefined8 *)func_0x00f78acc(uVar28,lVar22);
                pcVar35 = (code *)*puVar19;
              }
              pdVar32 = (dword *)(*pcVar35)(plVar1,plVar25,puVar19);
            }
          }
          else {
            if ((*(short *)(lVar22 + 0x48) == -1) || (*(long *)(pdVar15 + 6) == 0))
            goto code_r0x01e480c8;
            iVar14 = func_0x00f78a44(lVar22);
            iVar13 = func_0x00f78ec0(lVar22);
            if (iVar14 == 0) {
              uVar4 = *(ushort *)(lVar22 + 0x48);
              if (iVar13 == 0) {
                lVar22 = *plVar25 + (ulong)uVar4 * 0x10;
                pdVar32 = (dword *)(**(code **)(lVar22 + 0x138))
                                             (plVar25,*(undefined8 *)(lVar22 + 0x140));
                goto code_r0x01e480d4;
              }
              lVar22 = func_0x00f78a48(lVar22);
              lVar29 = *plVar25;
              uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
              if (uVar21 != 0) {
                piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar30 + -2) == lVar22) {
                    puVar19 = (undefined8 *)
                              (lVar29 + (long)(int)(*piVar30 + (uint)uVar4) * 0x10 + 0x138);
                    goto code_r0x01e481fc;
                  }
                  piVar30 = piVar30 + 4;
                  uVar21 = uVar21 - 1;
                } while (uVar21 != 0);
              }
              puVar19 = (undefined8 *)func_0x00fac1f0(plVar25,lVar22,(ulong)uVar4);
code_r0x01e481fc:
              pcVar35 = (code *)*puVar19;
              puVar19 = (undefined8 *)puVar19[1];
            }
            else {
              if (iVar13 == 0) {
                uVar28 = *(undefined8 *)
                          (*plVar25 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar29 = *plVar25;
                uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
                if (uVar21 != 0) {
                  piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar30 + -2) == *(long *)(lVar22 + 0x18)) {
                      lVar29 = lVar29 + (long)(int)(*piVar30 + (uint)*(ushort *)(lVar22 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01e481d4;
                    }
                    piVar30 = piVar30 + 4;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
                lVar29 = func_0x00fac1f0(plVar25);
code_r0x01e481d4:
                uVar28 = *(undefined8 *)(lVar29 + 8);
              }
              puVar19 = (undefined8 *)func_0x00f78acc(uVar28,lVar22);
              pcVar35 = (code *)*puVar19;
            }
            pdVar32 = (dword *)(*pcVar35)(plVar25,puVar19);
          }
        }
        else {
          if (bVar12) goto code_r0x01e480c8;
code_r0x01e47fc0:
          pdVar32 = (dword *)(*pcVar35)(plVar1,plVar25,lVar22);
        }
code_r0x01e480d4:
        lVar17 = lVar17 + 1;
        if (lVar17 == lVar16) {
          return pdVar32;
        }
      } while( true );
    }
    lVar29 = *(long *)(lVar16 + 0x38);
    lVar22 = *(long *)(lVar16 + 0x30);
    lVar39 = *(long *)(lVar16 + 0x48);
    lVar38 = *(long *)(lVar16 + 0x40);
    lVar40 = *(long *)(lVar16 + 0x50);
    lVar42 = *(long *)(lVar16 + 0x68);
    lVar41 = *(long *)(lVar16 + 0x60);
    *(long *)(pdVar20 + 0xe) = *(long *)(lVar16 + 0x58);
    *(long *)(pdVar20 + 0xc) = lVar40;
    *(long *)(pdVar20 + 0x12) = lVar42;
    *(long *)(pdVar20 + 0x10) = lVar41;
    *(long *)(pdVar20 + 6) = lVar29;
    *(long *)(pdVar20 + 4) = lVar22;
    *(long *)(pdVar20 + 10) = lVar39;
    *(long *)(pdVar20 + 8) = lVar38;
    lVar16 = func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.OptionSelected_TypeInfo*/ uRam0000000003d28718);
    /*Atlas.UI.Screens.PostEventScreen.OptionSelected$$.ctor*/ func_0x01562ec8(lVar16,lVar17,uRam0000000003d56e20,0);
    *(long *)(pdVar20 + 0x14) = lVar16;
    lVar16 = func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.OptionSelected_TypeInfo*/ uRam0000000003d28718);
    param_3 = puRam0000000003d56e18;
    /*Atlas.UI.Screens.PostEventScreen.OptionSelected$$.ctor*/ func_0x01562ec8(lVar16,lVar17,puRam0000000003d56e18,0);
    *(long *)(pdVar20 + 0x16) = lVar16;
    pdVar32 = *(dword **)(lVar17 + 0x88);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    if (pdVar32 == (dword *)0x0) goto code_r0x01596ce4;
    pdVar23 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x78);
    unaff_x22 = 0x3d405b8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    unaff_x30 = puStack_58;
  }
  else {
    lVar22 = *(long *)(lVar16 + 0x38);
    lVar17 = *(long *)(lVar16 + 0x30);
    lVar38 = *(long *)(lVar16 + 0x48);
    lVar29 = *(long *)(lVar16 + 0x40);
    lVar39 = *(long *)(lVar16 + 0x50);
    lVar41 = *(long *)(lVar16 + 0x68);
    lVar40 = *(long *)(lVar16 + 0x60);
    *(long *)(pdVar15 + 0xe) = *(long *)(lVar16 + 0x58);
    *(long *)(pdVar15 + 0xc) = lVar39;
    *(long *)(pdVar15 + 0x12) = lVar41;
    *(long *)(pdVar15 + 0x10) = lVar40;
    *(long *)(pdVar15 + 6) = lVar22;
    *(long *)(pdVar15 + 4) = lVar17;
    *(long *)(pdVar15 + 10) = lVar38;
    *(long *)(pdVar15 + 8) = lVar29;
    lVar17 = func_0x00f78aec(/*Atlas.UI.Screens.PostArcadeScreen.OptionSelected_TypeInfo*/ uRam0000000003d286f8);
    /*Atlas.UI.Screens.PostArcadeScreen.OptionSelected$$.ctor*/ func_0x01562928(lVar17,param_1,uRam0000000003d56e20,0);
    *(long *)(pdVar15 + 0x14) = lVar17;
    lVar17 = func_0x00f78aec(/*Atlas.UI.Screens.PostArcadeScreen.OptionSelected_TypeInfo*/ uRam0000000003d286f8);
    param_3 = puRam0000000003d56e28;
    /*Atlas.UI.Screens.PostArcadeScreen.OptionSelected$$.ctor*/ func_0x01562928(lVar17,param_1,puRam0000000003d56e28,0);
    *(long *)(pdVar15 + 0x16) = lVar17;
    lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405b8);
    uVar28 = 0x3d286f8;
    uVar18 = 0x3d56000;
    uVar33 = 0x3d56000;
    if (lVar16 == 0) goto LAB_01596b64;
    *(long *)(pdVar15 + 0x18) = *(long *)(lVar16 + 0x20);
    pdVar32 = *(dword **)(param_1 + 0x88);
    if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    param_1 = 0;
    lVar17 = 0x3d1feb8;
    if (pdVar32 == (dword *)0x0) goto LAB_01596b64;
    pdVar23 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x80);
    pdVar20 = pdVar15;
    pdVar15 = unaff_x20;
    puVar36 = unaff_x29;
  }
  uVar28 = 0;
  pdVar26 = (dword *)0x0;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(dword **)((long)register0x00000008 + -0x20) = pdVar15;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar36;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar36 = (undefined1 *)((long)register0x00000008 + -0x10);
  pdVar15 = (dword *)0x0;
  pdVar27 = pdVar20;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
  lVar17 = *(long *)(pdVar32 + 4);
  if (lVar17 != 0) {
    pdVar26 = (dword *)0x0;
    uVar28 = 0;
    puVar37 = &UNK_01470820;
    pdVar24 = pdVar23;
    pdVar27 = pdVar20;
code_r0x02f87f38:
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(dword **)((long)register0x00000008 + -0x78) = pdVar20;
    *(dword **)((long)register0x00000008 + -0x70) = pdVar32;
    *(dword **)((long)register0x00000008 + -0x68) = pdVar23;
    *(undefined1 **)((long)register0x00000008 + -0x60) = puVar36;
    *(undefined **)((long)register0x00000008 + -0x58) = puVar37;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x128) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x120) = 0x3ebc000;
    *(dword **)((long)register0x00000008 + -0x118) = pdVar24;
    *(dword **)((long)register0x00000008 + -0x110) = pdVar27;
    *(undefined8 *)((long)register0x00000008 + -0x108) = uVar28;
    *(long *)((long)register0x00000008 + -0x100) = lVar17;
    *(dword **)((long)register0x00000008 + -0xf8) = pdVar26;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined **)((long)register0x00000008 + -0xe8) = &UNK_02f87f9c;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar16 = *(long *)(lVar17 + 0x78);
    if (lVar16 != 0) {
      iVar14 = *(int *)(lVar16 + 0x18);
      if (iVar14 < 1) {
        return (dword *)0x0;
      }
      iVar13 = 1;
      pdVar15 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar16 + 0x18) <= iVar13 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar16 = *(long *)(*(long *)(lVar16 + 0x10) + (long)(int)(iVar13 - 1U) * 0x20 + 0x20);
        if (lVar16 == 0) break;
        uVar21 = /*System.String$$Equals*/ func_0x029caa48(lVar16,pdVar24,5,0);
        if ((uVar21 & 1) != 0) {
          return pdVar15;
        }
        pdVar15 = (dword *)(ulong)(iVar13 < iVar14);
        if (iVar14 == iVar13) {
          return pdVar15;
        }
        lVar16 = *(long *)(lVar17 + 0x78);
        iVar13 = iVar13 + 1;
      } while (lVar16 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar43 = func_0x00f78af4();
  pdVar24 = auVar43._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x60) = puVar36;
  *(undefined **)((long)register0x00000008 + -0x58) = &Atlas_UI_AtlasUIManager__ShowScreen;
  lVar17 = *(long *)(auVar43._0_8_ + 0x10);
  if (lVar17 != 0) {
    puVar36 = *(undefined1 **)((long)register0x00000008 + -0x60);
    puVar37 = *(undefined **)((long)register0x00000008 + -0x58);
    goto code_r0x02f87f38;
  }
  auVar43 = func_0x00f78af4();
  uVar28 = auVar43._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined **)((long)register0x00000008 + -0x68) = &Atlas_UI_AtlasUIManager__HideScreen;
  lVar17 = *(long *)(auVar43._0_8_ + 0x10);
  if (lVar17 != 0) {
    pdVar26 = (dword *)0x0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(dword **)((long)register0x00000008 + -0x88) = pdVar20;
    *(dword **)((long)register0x00000008 + -0x80) = pdVar32;
    *(dword **)((long)register0x00000008 + -0x78) = pdVar23;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x68);
    if ((bRam0000000003ebc64b & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar16 = *(long *)(lVar17 + 0x70);
    if (lVar16 != 0) {
      lVar22 = lVar16;
      if (*(uint *)(lVar16 + 0x18) <= auVar43._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar22 = *(long *)(lVar17 + 0x70);
      }
      if (lVar22 != 0) {
        lVar16 = *(long *)(lVar16 + 0x10) + (long)(int)auVar43._8_4_ * 0x28;
        uVar33 = *(undefined8 *)(lVar16 + 0x28);
        uVar18 = *(undefined8 *)(lVar16 + 0x20);
        uVar2 = *(undefined4 *)(lVar16 + 0x42);
        *(undefined4 *)((long)register0x00000008 + -0xd8) = uVar2;
        uVar5 = *(undefined2 *)(lVar16 + 0x46);
        *(undefined2 *)((long)register0x00000008 + -0xd4) = uVar5;
        *(undefined8 *)((long)register0x00000008 + -200) = uVar33;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar18;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar33;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar18;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
        *(undefined2 *)((long)register0x00000008 + -0xa0) = 1;
        *(undefined4 *)((long)register0x00000008 + -0x9e) = uVar2;
        *(undefined2 *)((long)register0x00000008 + -0x9a) = uVar5;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar22,uVar28,(undefined1 *)((long)register0x00000008 + -0xc0),
                        uRam0000000003d3ddd0);
        pdVar15 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar17,uVar28);
        return pdVar15;
      }
    }
    auVar43 = func_0x00f78af4();
    pdVar24 = auVar43._8_8_;
    puVar11 = (undefined1 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
    *(long *)((long)register0x00000008 + -0x108) = lVar16;
    *(long *)((long)register0x00000008 + -0x100) = lVar17;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar28;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined **)((long)register0x00000008 + -0xe8) = &Core_UI2_UIManager__GetCurrentScreenID;
    puVar36 = (undefined1 *)((long)register0x00000008 + -0xf0);
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar17 = *(long *)(auVar43._0_8_ + 0x70);
    if (lVar17 != 0) {
      if (*(uint *)(lVar17 + 0x18) <= auVar43._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)auVar43._8_4_ * 0x28 + 0x28);
      if (lVar17 == 0) {
        pdVar15 = (dword *)0x0;
      }
      else {
        pdVar15 = *(dword **)(lVar17 + 0x40);
      }
      return pdVar15;
    }
    puVar37 = &Core_UI2_UIScreen__ForceExit;
    pdVar23 = (dword *)func_0x00f78af4();
    pdVar32 = (dword *)0x0;
    pdVar20 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar43 = func_0x00f78af4();
  pdVar24 = auVar43._8_8_;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined **)((long)register0x00000008 + -0x78) = &Atlas_UI_AtlasUIManager__ClearLayer;
  lVar17 = *(long *)(auVar43._0_8_ + 0x10);
  auVar43._8_8_ = pdVar20;
  auVar43._0_8_ = lVar17;
  if (lVar17 != 0) {
    pdVar26 = (dword *)0x0;
    puVar6 = (undefined1 *)((long)register0x00000008 + -0x70);
    puVar36 = *(undefined1 **)((long)register0x00000008 + -0x80);
    puVar37 = *(undefined **)((long)register0x00000008 + -0x78);
    pdVar20 = pdVar32;
    goto code_r0x02f877a8;
  }
  auVar43 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x80);
  *(undefined **)((long)register0x00000008 + -0x88) =
       &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
  lVar17 = *(long *)(auVar43._0_8_ + 0x10);
  auVar43._8_8_ = auVar43._8_8_;
  auVar43._0_8_ = lVar17;
  if (lVar17 != 0) {
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x80);
    puVar36 = *(undefined1 **)((long)register0x00000008 + -0x90);
    puVar37 = *(undefined **)((long)register0x00000008 + -0x88);
    pdVar24 = pdVar26;
    while( true ) {
      puVar6 = puVar7 + -0x30;
      *(dword **)(puVar7 + -0x30) = pdVar15;
      *(dword **)(puVar7 + -0x28) = pdVar20;
      *(dword **)(puVar7 + -0x20) = pdVar32;
      *(dword **)(puVar7 + -0x18) = pdVar23;
      *(undefined1 **)(puVar7 + -0x10) = puVar36;
      *(undefined **)(puVar7 + -8) = puVar37;
      puVar36 = puVar7 + -0x10;
      puVar37 = &UNK_02f883d8;
      pdVar26 = pdVar24;
      pdVar23 = pdVar27;
      pdVar20 = pdVar24;
      pdVar15 = auVar43._0_8_;
code_r0x02f877a8:
      pdVar32 = auVar43._0_8_;
      puVar11 = puVar6 + -0x60;
      *(dword **)(puVar6 + -0x30) = pdVar15;
      *(long *)(puVar6 + -0x28) = auVar43._8_8_;
      *(dword **)(puVar6 + -0x20) = pdVar20;
      *(dword **)(puVar6 + -0x18) = pdVar23;
      *(undefined1 **)(puVar6 + -0x10) = puVar36;
      *(undefined **)(puVar6 + -8) = puVar37;
      puVar36 = puVar6 + -0x10;
      pdVar20 = pdVar32;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar20 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar31 = (uint)pdVar24;
      if (((int)uVar31 < 0) || ((int)*(long *)(pdVar32 + 0x14) <= (int)uVar31)) {
        return pdVar20;
      }
      lVar17 = *(long *)(pdVar32 + 0x1c);
      if (lVar17 == 0) break;
      if (*(uint *)(lVar17 + 0x18) <= uVar31) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar17 = *(long *)(lVar17 + 0x10) + ((ulong)pdVar24 & 0xffffffff) * 0x28;
      pdVar15 = *(dword **)(lVar17 + 0x20);
      pdVar23 = *(dword **)(lVar17 + 0x28);
      *(undefined4 *)(puVar6 + -0x60) = *(undefined4 *)(lVar17 + 0x42);
      *(undefined2 *)(puVar6 + -0x5c) = *(undefined2 *)(lVar17 + 0x46);
      if (pdVar23 == (dword *)0x0) {
        lVar17 = *(long *)(pdVar32 + 0x1c);
        if (lVar17 != 0) {
          *(dword **)(puVar6 + -0x58) = pdVar15;
          *(undefined8 *)(puVar6 + -0x50) = 0;
          *(undefined8 *)(puVar6 + -0x48) = 0;
          *(undefined8 *)(puVar6 + -0x40) = 0;
          *(undefined2 *)(puVar6 + -0x38) = 0;
          *(undefined4 *)(puVar6 + -0x36) = *(undefined4 *)(puVar6 + -0x60);
          *(undefined2 *)(puVar6 + -0x32) = *(undefined2 *)(puVar6 + -0x5c);
          pdVar15 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar17,pdVar24,puVar6 + -0x58,uRam0000000003d3ddd0);
          return pdVar15;
        }
        break;
      }
      puVar37 = &UNK_02f87848;
      pdVar20 = pdVar23;
code_r0x02f882d8:
      *(dword **)(puVar11 + -0x20) = pdVar32;
      *(dword **)(puVar11 + -0x18) = pdVar24;
      *(undefined1 **)(puVar11 + -0x10) = puVar36;
      *(undefined **)(puVar11 + -8) = puVar37;
      (**(code **)(*(long *)pdVar23 + 0x218))(pdVar23,*(undefined8 *)(*(long *)pdVar23 + 0x220));
      if (*(long *)(pdVar23 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar23 + 10),0);
        pdVar23[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar23,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar15 = (dword *)(**(code **)(*(long *)pdVar23 + 0x228))
                                     (pdVar23,*(undefined8 *)(*(long *)pdVar23 + 0x230));
        return pdVar15;
      }
      func_0x00f78af4();
      puVar7 = puVar11 + -0x40;
      *(dword **)(puVar11 + -0x40) = pdVar32;
      *(dword **)(puVar11 + -0x38) = pdVar23;
      *(undefined1 **)(puVar11 + -0x30) = puVar11 + -0x10;
      *(undefined **)(puVar11 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      puVar36 = puVar11 + -0x30;
      if (extraout_x1 != (long *)0x0) {
        lVar17 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar28 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar28,lVar17);
        pdVar15 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar15;
      }
      puVar37 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar43 = func_0x00f78af4();
      pdVar24 = pdVar26;
    }
    lVar17 = func_0x00f78af4();
    *(undefined8 *)(puVar6 + -0xa0) = unaff_d9;
    *(undefined8 *)(puVar6 + -0x98) = unaff_d8;
    *(dword **)(puVar6 + -0x90) = pdVar15;
    *(undefined8 *)(puVar6 + -0x88) = 0;
    *(dword **)(puVar6 + -0x80) = pdVar32;
    *(dword **)(puVar6 + -0x78) = pdVar24;
    *(undefined1 **)(puVar6 + -0x70) = puVar36;
    *(undefined **)(puVar6 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar28 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar28,0);
    if (0 < *(int *)(lVar17 + 0x50)) {
      iVar14 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar17,iVar14);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar17,iVar14);
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(lVar17 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar17);
    *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x80);
    *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x78);
    *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x70);
    *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar15 = (dword *)(*pcRam0000000003ec05a0)(uVar28);
    return pdVar15;
  }
  auVar43 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0xa0) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(undefined **)((long)register0x00000008 + -0x98) = &Atlas_UI_AtlasUIManager__IsLayerReady;
  lVar17 = *(long *)(auVar43._0_8_ + 0x10);
  if (lVar17 == 0) {
    auVar43 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined **)((long)register0x00000008 + -0xa8) = &Atlas_UI_AtlasUIManager__GetLayerState;
    lVar17 = *(long *)(auVar43._0_8_ + 0x10);
    auVar44._8_8_ = auVar43._8_8_;
    auVar44._0_8_ = lVar17;
    if (lVar17 != 0) {
      pdVar27 = (dword *)0x0;
      puVar8 = (undefined1 *)((long)register0x00000008 + -0xa0);
      puVar36 = *(undefined1 **)((long)register0x00000008 + -0xb0);
      puVar37 = *(undefined **)((long)register0x00000008 + -0xa8);
      goto code_r0x02f884dc;
    }
    auVar43 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0xb0);
    *(undefined **)((long)register0x00000008 + -0xb8) = &Atlas_UI_AtlasUIManager__EnableInput;
    lVar17 = *(long *)(auVar43._0_8_ + 0x10);
    auVar45._8_8_ = auVar43._8_8_;
    auVar45._0_8_ = lVar17;
    if (lVar17 == 0) {
      auVar43 = func_0x00f78af4();
      *(undefined1 **)((long)register0x00000008 + -0xd0) =
           (undefined1 *)((long)register0x00000008 + -0xc0);
      *(undefined **)((long)register0x00000008 + -200) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      lVar17 = *(long *)(auVar43._0_8_ + 0x10);
      auVar46._8_8_ = auVar43._8_8_;
      auVar46._0_8_ = lVar17;
      if (lVar17 == 0) {
        pdVar15 = (dword *)func_0x00f78af4();
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
        *(dword **)((long)register0x00000008 + -0xf8) = pdVar20;
        *(dword **)((long)register0x00000008 + -0xf0) = pdVar32;
        *(dword **)((long)register0x00000008 + -0xe8) = pdVar23;
        *(undefined1 **)((long)register0x00000008 + -0xe0) =
             (undefined1 *)((long)register0x00000008 + -0xd0);
        *(undefined **)((long)register0x00000008 + -0xd8) = &Atlas_UI_AtlasUIManager___ctor;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar28 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar28,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar15 + 0xc) = uVar28;
        return pdVar15;
      }
      puVar10 = (undefined1 *)((long)register0x00000008 + -0xc0);
      puVar36 = *(undefined1 **)((long)register0x00000008 + -0xd0);
      puVar37 = *(undefined **)((long)register0x00000008 + -200);
      goto code_r0x02f88674;
    }
    puVar9 = (undefined1 *)((long)register0x00000008 + -0xb0);
    puVar36 = *(undefined1 **)((long)register0x00000008 + -0xc0);
    puVar37 = *(undefined **)((long)register0x00000008 + -0xb8);
    pdVar27 = pdVar26;
    pdVar15 = pdVar20;
  }
  else {
    pdVar27 = (dword *)0x0;
    puVar8 = (undefined1 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(dword **)((long)register0x00000008 + -0xb8) = pdVar20;
    *(dword **)((long)register0x00000008 + -0xb0) = pdVar32;
    *(dword **)((long)register0x00000008 + -0xa8) = pdVar23;
    *(undefined8 *)((long)register0x00000008 + -0xa0) =
         *(undefined8 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0x98) =
         *(undefined8 *)((long)register0x00000008 + -0x98);
    puVar36 = (undefined1 *)((long)register0x00000008 + -0xa0);
    pdVar20 = (dword *)0x3ebc000;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar31 = auVar43._8_4_;
    if (((int)uVar31 < 0) || (*(int *)(lVar17 + 0x50) <= (int)uVar31)) {
      return (dword *)0x0;
    }
    lVar17 = *(long *)(lVar17 + 0x70);
    if (lVar17 != 0) {
      if (*(uint *)(lVar17 + 0x18) <= uVar31) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar16 = *(long *)(lVar17 + 0x10) + ((ulong)auVar43._8_8_ & 0xffffffff) * 0x28;
      lVar17 = *(long *)(lVar16 + 0x28);
      cVar3 = *(char *)(lVar16 + 0x40);
      iVar14 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar16 + 0x30),0);
      if (iVar14 == 0 || cVar3 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar17 != 0) && (*(int *)(lVar17 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar37 = &Core_UI2_UIManager__GetLayerState;
    auVar44 = func_0x00f78af4();
    pdVar32 = (dword *)0x0;
    pdVar23 = auVar43._8_8_;
code_r0x02f884dc:
    puVar9 = puVar8 + -0x30;
    *(undefined8 *)(puVar8 + -0x30) = 0;
    *(dword **)(puVar8 + -0x28) = pdVar20;
    *(dword **)(puVar8 + -0x20) = pdVar32;
    *(dword **)(puVar8 + -0x18) = pdVar23;
    *(undefined1 **)(puVar8 + -0x10) = puVar36;
    *(undefined **)(puVar8 + -8) = puVar37;
    puVar36 = puVar8 + -0x10;
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar17 = *(long *)(auVar44._0_8_ + 0x70);
    if (lVar17 != 0) {
      if (*(uint *)(lVar17 + 0x18) <= auVar44._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)auVar44._8_4_ * 0x28 + 0x28);
      if (lVar17 == 0) {
        pdVar15 = &MACH_HEADER.cputype;
      }
      else {
        pdVar15 = (dword *)(ulong)*(uint *)(lVar17 + 0x4c);
      }
      return pdVar15;
    }
    puVar37 = &Core_UI2_UIManager__EnableInput;
    auVar45 = func_0x00f78af4();
    pdVar32 = (dword *)0x0;
    pdVar23 = auVar44._8_8_;
    pdVar15 = (dword *)0x3ebc000;
  }
  pdVar24 = auVar45._8_8_;
  pdVar20 = auVar45._0_8_;
  puVar10 = puVar9 + -0x40;
  *(undefined8 *)(puVar9 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar9 + -0x38) = 0x3eb4000;
  *(undefined8 *)(puVar9 + -0x30) = 0;
  *(dword **)(puVar9 + -0x28) = pdVar15;
  *(dword **)(puVar9 + -0x20) = pdVar32;
  *(dword **)(puVar9 + -0x18) = pdVar23;
  *(undefined1 **)(puVar9 + -0x10) = puVar36;
  *(undefined **)(puVar9 + -8) = puVar37;
  puVar36 = puVar9 + -0x10;
  pdVar15 = (dword *)0x3ebc000;
  pdVar26 = pdVar27;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(pdVar20 + 0x1a) != 0) {
    pdVar26 = (dword *)(ulong)((uint)pdVar27 ^ 1);
    pdVar32 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar20 + 0x1a),pdVar24,pdVar26,0);
    lVar17 = *(long *)(pdVar20 + 0x1c);
    pdVar15 = (dword *)0x0;
    if (lVar17 != 0) {
      uVar31 = auVar45._8_4_;
      if (*(uint *)(lVar17 + 0x18) <= uVar31) {
        pdVar32 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar31 * 0x28 + 0x28) == 0) ||
         (pdVar15 = *(dword **)(pdVar20 + 0xc), pdVar15 == (dword *)0x0)) {
        return pdVar32;
      }
      lVar17 = *(long *)(pdVar20 + 0x1c);
      pdVar20 = (dword *)0x0;
      if (lVar17 != 0) {
        if (*(uint *)(lVar17 + 0x18) <= uVar31) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar25 = *(long **)(*(long *)(lVar17 + 0x10) + (long)(int)uVar31 * 0x28 + 0x28);
        *(undefined8 *)(puVar9 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar9 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar9 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar9 + -0x48) = unaff_x25;
        *(undefined8 *)(puVar9 + -0x40) = *(undefined8 *)(puVar9 + -0x40);
        *(undefined8 *)(puVar9 + -0x38) = *(undefined8 *)(puVar9 + -0x38);
        *(undefined8 *)(puVar9 + -0x30) = *(undefined8 *)(puVar9 + -0x30);
        *(undefined8 *)(puVar9 + -0x28) = *(undefined8 *)(puVar9 + -0x28);
        *(undefined8 *)(puVar9 + -0x20) = *(undefined8 *)(puVar9 + -0x20);
        *(undefined8 *)(puVar9 + -0x18) = *(undefined8 *)(puVar9 + -0x18);
        *(undefined8 *)(puVar9 + -0x10) = *(undefined8 *)(puVar9 + -0x10);
        *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        *(dword **)(puVar9 + -0x68) = pdVar15;
        lVar17 = *(long *)(pdVar15 + 0x1a);
        if (lVar17 == 0) {
          puVar36 = puVar9 + -0x68;
          lVar16 = 1;
        }
        else {
          lVar16 = *(long *)(lVar17 + 0x18);
          if (lVar16 == 0) {
            return pdVar15;
          }
          puVar36 = (undefined1 *)(lVar17 + 0x20);
        }
        lVar17 = 0;
        do {
          lVar22 = *(long *)(puVar36 + lVar17 * 8);
          pcVar35 = *(code **)(lVar22 + 0x10);
          plVar1 = *(long **)(lVar22 + 0x20);
          lVar22 = *(long *)(lVar22 + 0x28);
          if (*(short *)(lVar22 + 0x48) == -1) {
            func_0x00f78ad8(lVar22);
          }
          iVar14 = func_0x00f78a4c(lVar22);
          bVar12 = *(char *)(lVar22 + 0x4a) == '\x03';
          if (iVar14 == 0) {
            if (bVar12) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar32 = (dword *)(*pcVar35)(plVar25,pdVar24,pdVar27,lVar22);
              }
              else {
                if (((*(short *)(lVar22 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar15 + 6) == 0)) goto code_r0x01e71aac;
                iVar14 = func_0x00f78a44(lVar22);
                iVar13 = func_0x00f78ec0(lVar22);
                if (iVar14 == 0) {
                  uVar4 = *(ushort *)(lVar22 + 0x48);
                  if (iVar13 == 0) {
                    lVar22 = *plVar1 + (ulong)uVar4 * 0x10;
                    pdVar32 = (dword *)(**(code **)(lVar22 + 0x138))
                                                 (plVar1,plVar25,pdVar24,pdVar27,
                                                  *(undefined8 *)(lVar22 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar22 = func_0x00f78a48(lVar22);
                  lVar29 = *plVar1;
                  uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
                  if (uVar21 != 0) {
                    piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar30 + -2) == lVar22) {
                        puVar19 = (undefined8 *)
                                  (lVar29 + (long)(int)(*piVar30 + (uint)uVar4) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar30 = piVar30 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  puVar19 = (undefined8 *)func_0x00fac1f0(plVar1,lVar22,(ulong)uVar4);
code_r0x01e71d74:
                  pcVar35 = (code *)*puVar19;
                  puVar19 = (undefined8 *)puVar19[1];
                }
                else {
                  if (iVar13 == 0) {
                    uVar28 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar29 = *plVar1;
                    uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
                    if (uVar21 != 0) {
                      piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar30 + -2) == *(long *)(lVar22 + 0x18)) {
                          lVar29 = lVar29 + (long)(int)(*piVar30 + (uint)*(ushort *)(lVar22 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar30 = piVar30 + 4;
                        uVar21 = uVar21 - 1;
                      } while (uVar21 != 0);
                    }
                    lVar29 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar28 = *(undefined8 *)(lVar29 + 8);
                  }
                  puVar19 = (undefined8 *)func_0x00f78acc(uVar28,lVar22);
                  pcVar35 = (code *)*puVar19;
                }
                pdVar32 = (dword *)(*pcVar35)(plVar1,plVar25,pdVar24,pdVar27,puVar19);
              }
            }
            else {
              if ((*(short *)(lVar22 + 0x48) == -1) || (*(long *)(pdVar15 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar14 = func_0x00f78a44(lVar22);
              iVar13 = func_0x00f78ec0(lVar22);
              if (iVar14 == 0) {
                uVar4 = *(ushort *)(lVar22 + 0x48);
                if (iVar13 == 0) {
                  lVar22 = *plVar25 + (ulong)uVar4 * 0x10;
                  pdVar32 = (dword *)(**(code **)(lVar22 + 0x138))
                                               (plVar25,pdVar24,pdVar27,
                                                *(undefined8 *)(lVar22 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar22 = func_0x00f78a48(lVar22);
                lVar29 = *plVar25;
                uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
                if (uVar21 != 0) {
                  piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar30 + -2) == lVar22) {
                      puVar19 = (undefined8 *)
                                (lVar29 + (long)(int)(*piVar30 + (uint)uVar4) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar30 = piVar30 + 4;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
                }
                puVar19 = (undefined8 *)func_0x00fac1f0(plVar25,lVar22,(ulong)uVar4);
code_r0x01e71d00:
                pcVar35 = (code *)*puVar19;
                puVar19 = (undefined8 *)puVar19[1];
              }
              else {
                if (iVar13 == 0) {
                  uVar28 = *(undefined8 *)
                            (*plVar25 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar29 = *plVar25;
                  uVar21 = (ulong)*(ushort *)(lVar29 + 0x12a);
                  if (uVar21 != 0) {
                    piVar30 = (int *)(*(long *)(lVar29 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar30 + -2) == *(long *)(lVar22 + 0x18)) {
                        lVar29 = lVar29 + (long)(int)(*piVar30 + (uint)*(ushort *)(lVar22 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar30 = piVar30 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  lVar29 = func_0x00fac1f0(plVar25);
code_r0x01e71cd8:
                  uVar28 = *(undefined8 *)(lVar29 + 8);
                }
                puVar19 = (undefined8 *)func_0x00f78acc(uVar28,lVar22);
                pcVar35 = (code *)*puVar19;
              }
              pdVar32 = (dword *)(*pcVar35)(plVar25,pdVar24,pdVar27,puVar19);
            }
          }
          else {
            if (bVar12) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar32 = (dword *)(*pcVar35)(plVar1,plVar25,pdVar24,pdVar27,lVar22);
          }
code_r0x01e71bd0:
          lVar17 = lVar17 + 1;
          if (lVar17 == lVar16) {
            return pdVar32;
          }
        } while( true );
      }
    }
  }
  puVar37 = &Core_UI2_UIManager__SetScreenVisible;
  auVar46 = func_0x00f78af4();
  pdVar23 = pdVar27;
  pdVar32 = pdVar24;
code_r0x02f88674:
  pdVar27 = auVar46._0_8_;
  *(dword **)(puVar10 + -0x30) = pdVar15;
  *(dword **)(puVar10 + -0x28) = pdVar20;
  *(dword **)(puVar10 + -0x20) = pdVar32;
  *(dword **)(puVar10 + -0x18) = pdVar23;
  *(undefined1 **)(puVar10 + -0x10) = puVar36;
  *(undefined **)(puVar10 + -8) = puVar37;
  pdVar15 = pdVar27;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar15 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar17 = *(long *)(pdVar27 + 0x1c);
  if (lVar17 != 0) {
    uVar31 = auVar46._8_4_;
    if (*(uint *)(lVar17 + 0x18) <= uVar31) {
      pdVar15 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar31 * 0x28 + 0x28) == 0) {
      return pdVar15;
    }
    lVar17 = *(long *)(pdVar27 + 0x1c);
    if (lVar17 != 0) {
      if (*(uint *)(lVar17 + 0x18) <= uVar31) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar31 * 0x28 + 0x28);
      if ((lVar17 != 0) && (plVar25 = *(long **)(lVar17 + 0x28), plVar25 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar15 = (dword *)(**(code **)(*plVar25 + 0x178))
                                     (plVar25,pdVar26,*(undefined8 *)(*plVar25 + 0x180));
        return pdVar15;
      }
    }
  }
  auVar43 = func_0x00f78af4();
  uVar28 = auVar43._0_8_;
  *(long *)(puVar10 + -0x50) = auVar46._8_8_;
  *(dword **)(puVar10 + -0x48) = pdVar26;
  *(undefined1 **)(puVar10 + -0x40) = puVar10 + -0x10;
  *(undefined **)(puVar10 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)(puVar10 + -0x68) = 0;
  *(undefined8 *)(puVar10 + -0x70) = 0;
  *(undefined8 *)(puVar10 + -0x58) = 0;
  *(undefined8 *)(puVar10 + -0x60) = 0;
  pdVar15 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar28,auVar43._8_8_,puVar10 + -0x70);
  if ((int)pdVar15 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar28,*(undefined8 *)(puVar10 + -0x60),*(undefined8 *)(puVar10 + -0x58));
    *(undefined8 *)(puVar10 + -0x88) = *(undefined8 *)(puVar10 + -0x68);
    *(undefined8 *)(puVar10 + -0x90) = *(undefined8 *)(puVar10 + -0x70);
    *(undefined8 *)(puVar10 + -0x78) = *(undefined8 *)(puVar10 + -0x58);
    *(undefined8 *)(puVar10 + -0x80) = *(undefined8 *)(puVar10 + -0x60);
    pdVar15 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar28,puVar10 + -0x90,1);
  }
  return pdVar15;
}



// ============================================================
// RVA: 0x1596b68 | Atlas.Contexts.FrontendContextPostSingleplayerState.ShowPostEventScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x0147081c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f883d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02f87844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f883d8) */
/* WARNING: Removing unreachable block (ram,0x02f87f9c) */
/* WARNING: Removing unreachable block (ram,0x02f87fa4) */
/* WARNING: Removing unreachable block (ram,0x02f87fa8) */
/* WARNING: Removing unreachable block (ram,0x02f88044) */
/* WARNING: Removing unreachable block (ram,0x02f87fb4) */
/* WARNING: Removing unreachable block (ram,0x02f87fbc) */
/* WARNING: Removing unreachable block (ram,0x02f87fcc) */
/* WARNING: Removing unreachable block (ram,0x02f87fd8) */
/* WARNING: Removing unreachable block (ram,0x02f88064) */
/* WARNING: Removing unreachable block (ram,0x02f87fdc) */
/* WARNING: Removing unreachable block (ram,0x02f88048) */
/* WARNING: Removing unreachable block (ram,0x01470820) */
/* WARNING: Removing unreachable block (ram,0x01470828) */
/* WARNING: Removing unreachable block (ram,0x01470848) */
/* WARNING: Removing unreachable block (ram,0x01470850) */
/* WARNING: Removing unreachable block (ram,0x01470858) */
/* WARNING: Removing unreachable block (ram,0x01470874) */
/* WARNING: Removing unreachable block (ram,0x01470884) */
/* WARNING: Removing unreachable block (ram,0x02f87848) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

dword * Atlas_Contexts_FrontendContextPostSingleplayerState__ShowPostEventScreen
                  (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  dword **ppdVar4;
  long *plVar5;
  dword **ppdVar6;
  undefined1 **ppuVar7;
  dword **ppdVar8;
  undefined1 **ppuVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  dword *pdVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  dword *pdVar20;
  dword *pdVar21;
  long *extraout_x1;
  dword *pdVar22;
  long *plVar23;
  dword *pdVar24;
  dword *pdVar25;
  undefined8 uVar26;
  long lVar27;
  int *piVar28;
  uint uVar29;
  dword *pdVar30;
  dword *pdVar31;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *puVar32;
  undefined8 uVar33;
  undefined8 unaff_x25;
  dword **ppdVar34;
  code *pcVar35;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  dword **ppdVar36;
  undefined1 **ppuVar37;
  undefined *puVar38;
  undefined4 extraout_s0;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  long alStack_158 [9];
  dword *pdStack_110;
  long alStack_108 [2];
  dword *apdStack_f8 [3];
  dword **ppdStack_c0;
  dword *pdStack_b8;
  dword *pdStack_b0;
  dword *pdStack_a8;
  dword *pdStack_80;
  dword *pdStack_78;
  dword *pdStack_70;
  dword *pdStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  if ((bRam0000000003eb518c & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d56e18);
    func_0x00f78a20(0x3d56e20);
    func_0x00f78a20(0x3d28718);
    func_0x00f78a20(0x3d405b8);
    func_0x00f78a20(0x3d28720);
    bRam0000000003eb518c = 1;
  }
  pdVar13 = (dword *)func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.TransitionData_TypeInfo*/ uRam0000000003d28720);
  /*Atlas.UI.Screens.PostEventScreen.TransitionData$$.ctor*/ func_0x01563140(pdVar13,0);
  lVar14 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405b8);
  lVar15 = 0x3d405b8;
  pdVar31 = (dword *)0x3d28720;
  puVar32 = unaff_x24;
  if (((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x10), lVar14 == 0)) ||
     (lVar15 = 0x3d405b8, pdVar31 = (dword *)0x3d28720, pdVar13 == (dword *)0x0)) {
LAB_01596ce4:
    lVar14 = func_0x00f78af4();
    puStack_58 = &Atlas_Contexts_FrontendContextPostSingleplayerState__PlayAgainSelected;
    pdStack_80 = pdVar31;
    pdStack_78 = (dword *)lVar15;
    pdStack_70 = pdVar13;
    pdStack_68 = (dword *)param_1;
    puStack_60 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb518e & 1) == 0) {
      func_0x00f78a20(0x3d2a040);
      func_0x00f78a20(0x3d405b8);
      bRam0000000003eb518e = 1;
    }
    pdVar13 = *(dword **)(lVar14 + 0x80);
    lVar15 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar14,uRam0000000003d405b8);
    if ((lVar15 == 0) || (pdVar13 == (dword *)0x0)) {
      lVar15 = func_0x00f78af4();
      pdStack_a8 = (dword *)0x3d405b8;
      uVar26 = 0x3d25458;
      ppdStack_c0 = (dword **)puVar32;
      pdStack_b8 = (dword *)unaff_x23;
      pdStack_b0 = pdVar31;
      if ((bRam0000000003eb518f & 1) == 0) {
        func_0x00f78a20(0x3d2a5b0);
        func_0x00f78a20(0x3d194e8);
        func_0x00f78a20(0x3d27650);
        func_0x00f78a20(0x3d405b8);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb518f = 1;
      }
      uVar16 = /*Atlas.Contexts.FrontEndContextSingleplayerState_var*/ uRam0000000003d194e8;
      pdVar13 = *(dword **)(lVar15 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar23 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
      lVar14 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar15,uRam0000000003d405b8);
      if (lVar14 != 0) {
        uVar26 = *(undefined8 *)(lVar14 + 0x18);
        lVar14 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar15,uRam0000000003d405b8);
        if (lVar14 != 0) {
          puVar17 = *(undefined8 **)(lVar14 + 0x28);
          lVar15 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar15,uRam0000000003d405b8);
          if (lVar15 != 0) {
            uVar33 = *(undefined8 *)(lVar15 + 0x10);
            uVar16 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
            Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerTransitionData___ctor
                      (uVar16,uVar26,puVar17,0,0,uVar33,0);
            param_3 = puVar17;
            if (pdVar13 != (dword *)0x0) {
              apdStack_f8[2] = pdVar13;
              lVar15 = *(long *)(pdVar13 + 0x1a);
              if (lVar15 == 0) {
                ppdVar34 = apdStack_f8 + 2;
                lVar14 = 1;
              }
              else {
                lVar14 = *(long *)(lVar15 + 0x18);
                if (lVar14 == 0) {
                  return pdVar13;
                }
                ppdVar34 = (dword **)(lVar15 + 0x20);
              }
              lVar15 = 0;
              do {
                pdVar31 = ppdVar34[lVar15];
                pcVar35 = *(code **)(pdVar31 + 4);
                plVar1 = *(long **)(pdVar31 + 8);
                lVar19 = *(long *)(pdVar31 + 10);
                if (*(short *)(lVar19 + 0x48) == -1) {
                  func_0x00f78ad8(lVar19);
                }
                iVar12 = func_0x00f78a4c(lVar19);
                bVar10 = *(char *)(lVar19 + 0x4a) == '\x03';
                if (iVar12 == 0) {
                  if (bVar10) {
                    if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
                      pdVar31 = (dword *)(*pcVar35)(plVar23,0,uVar16,lVar19);
                    }
                    else {
                      if (((*(short *)(lVar19 + 0x48) == -1) ||
                          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(pdVar13 + 6) == 0))
                      goto code_r0x01e7162c;
                      iVar12 = func_0x00f78a44(lVar19);
                      iVar11 = func_0x00f78ec0(lVar19);
                      if (iVar12 == 0) {
                        uVar3 = *(ushort *)(lVar19 + 0x48);
                        if (iVar11 == 0) {
                          lVar19 = *plVar1 + (ulong)uVar3 * 0x10;
                          pdVar31 = (dword *)(**(code **)(lVar19 + 0x138))
                                                       (plVar1,plVar23,0,uVar16,
                                                        *(undefined8 *)(lVar19 + 0x140));
                          goto code_r0x01e71750;
                        }
                        lVar19 = func_0x00f78a48(lVar19);
                        lVar27 = *plVar1;
                        uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
                        if (uVar18 != 0) {
                          piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar28 + -2) == lVar19) {
                              puVar17 = (undefined8 *)
                                        (lVar27 + (long)(int)(*piVar28 + (uint)uVar3) * 0x10 + 0x138
                                        );
                              goto code_r0x01e718f4;
                            }
                            piVar28 = piVar28 + 4;
                            uVar18 = uVar18 - 1;
                          } while (uVar18 != 0);
                        }
                        puVar17 = (undefined8 *)func_0x00fac1f0(plVar1,lVar19,(ulong)uVar3);
code_r0x01e718f4:
                        pcVar35 = (code *)*puVar17;
                        puVar17 = (undefined8 *)puVar17[1];
                      }
                      else {
                        if (iVar11 == 0) {
                          uVar26 = *(undefined8 *)
                                    (*plVar1 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar27 = *plVar1;
                          uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
                          if (uVar18 != 0) {
                            piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar28 + -2) == *(long *)(lVar19 + 0x18)) {
                                lVar27 = lVar27 + (long)(int)(*piVar28 +
                                                             (uint)*(ushort *)(lVar19 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e718cc;
                              }
                              piVar28 = piVar28 + 4;
                              uVar18 = uVar18 - 1;
                            } while (uVar18 != 0);
                          }
                          lVar27 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
                          uVar26 = *(undefined8 *)(lVar27 + 8);
                        }
                        puVar17 = (undefined8 *)func_0x00f78acc(uVar26,lVar19);
                        pcVar35 = (code *)*puVar17;
                      }
                      pdVar31 = (dword *)(*pcVar35)(plVar1,plVar23,0,uVar16,puVar17);
                    }
                  }
                  else {
                    if ((*(short *)(lVar19 + 0x48) == -1) || (*(long *)(pdVar13 + 6) == 0))
                    goto code_r0x01e7173c;
                    iVar12 = func_0x00f78a44(lVar19);
                    iVar11 = func_0x00f78ec0(lVar19);
                    if (iVar12 == 0) {
                      uVar3 = *(ushort *)(lVar19 + 0x48);
                      if (iVar11 == 0) {
                        lVar19 = *plVar23 + (ulong)uVar3 * 0x10;
                        pdVar31 = (dword *)(**(code **)(lVar19 + 0x138))
                                                     (plVar23,0,uVar16,
                                                      *(undefined8 *)(lVar19 + 0x140));
                        goto code_r0x01e71750;
                      }
                      lVar19 = func_0x00f78a48(lVar19);
                      lVar27 = *plVar23;
                      uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
                      if (uVar18 != 0) {
                        piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar28 + -2) == lVar19) {
                            puVar17 = (undefined8 *)
                                      (lVar27 + (long)(int)(*piVar28 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e71880;
                          }
                          piVar28 = piVar28 + 4;
                          uVar18 = uVar18 - 1;
                        } while (uVar18 != 0);
                      }
                      puVar17 = (undefined8 *)func_0x00fac1f0(plVar23,lVar19,(ulong)uVar3);
code_r0x01e71880:
                      pcVar35 = (code *)*puVar17;
                      puVar17 = (undefined8 *)puVar17[1];
                    }
                    else {
                      if (iVar11 == 0) {
                        uVar26 = *(undefined8 *)
                                  (*plVar23 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar27 = *plVar23;
                        uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
                        if (uVar18 != 0) {
                          piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar28 + -2) == *(long *)(lVar19 + 0x18)) {
                              lVar27 = lVar27 + (long)(int)(*piVar28 +
                                                           (uint)*(ushort *)(lVar19 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71858;
                            }
                            piVar28 = piVar28 + 4;
                            uVar18 = uVar18 - 1;
                          } while (uVar18 != 0);
                        }
                        lVar27 = func_0x00fac1f0(plVar23);
code_r0x01e71858:
                        uVar26 = *(undefined8 *)(lVar27 + 8);
                      }
                      puVar17 = (undefined8 *)func_0x00f78acc(uVar26,lVar19);
                      pcVar35 = (code *)*puVar17;
                    }
                    pdVar31 = (dword *)(*pcVar35)(plVar23,0,uVar16,puVar17);
                  }
                }
                else {
                  if (bVar10) goto code_r0x01e7173c;
code_r0x01e7162c:
                  pdVar31 = (dword *)(*pcVar35)(plVar1,plVar23,0,uVar16,lVar19);
                }
code_r0x01e71750:
                lVar15 = lVar15 + 1;
                if (lVar15 == lVar14) {
                  return pdVar31;
                }
              } while( true );
            }
          }
        }
      }
      pdVar13 = (dword *)func_0x00f78af4();
      apdStack_f8[1] = (dword *)uVar26;
      apdStack_f8[2] = (dword *)plVar23;
      if ((bRam0000000003eb5190 & 1) == 0) {
        func_0x00f78a20(0x3d405b0);
        bRam0000000003eb5190 = 1;
      }
      if (pdVar13 == (dword *)0x0) {
        auVar43 = func_0x00f78af4(0,uRam0000000003d405b0);
        pdVar13 = auVar43._0_8_;
        *(undefined8 *)(pdVar13 + 4) = *param_3;
        *(long *)(pdVar13 + 8) = auVar43._8_8_;
        *(undefined8 **)(pdVar13 + 10) = param_3;
        return pdVar13;
      }
      return pdVar13;
    }
    plVar23 = *(long **)(lVar15 + 0x10);
    pdStack_a8 = pdVar13;
    lVar15 = *(long *)(pdVar13 + 0x1a);
    if (lVar15 == 0) {
      ppdVar34 = &stack0xffffffffffffff58;
      lVar14 = 1;
    }
    else {
      lVar14 = *(long *)(lVar15 + 0x18);
      if (lVar14 == 0) {
        return pdVar13;
      }
      ppdVar34 = (dword **)(lVar15 + 0x20);
    }
    lVar15 = 0;
    do {
      lVar19 = (long)ppdVar34[lVar15];
      pcVar35 = *(code **)(lVar19 + 0x10);
      plVar1 = *(long **)(lVar19 + 0x20);
      lVar19 = *(long *)(lVar19 + 0x28);
      if (*(short *)(lVar19 + 0x48) == -1) {
        func_0x00f78ad8(lVar19);
      }
      iVar12 = func_0x00f78a4c(lVar19);
      bVar10 = *(char *)(lVar19 + 0x4a) == '\x01';
      if (iVar12 == 0) {
        if (bVar10) {
          if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
            pdVar31 = (dword *)(*pcVar35)(plVar23,lVar19);
          }
          else {
            if (((*(short *)(lVar19 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
               (*(long *)(pdVar13 + 6) == 0)) goto code_r0x01e47fc0;
            iVar12 = func_0x00f78a44(lVar19);
            iVar11 = func_0x00f78ec0(lVar19);
            if (iVar12 == 0) {
              uVar3 = *(ushort *)(lVar19 + 0x48);
              if (iVar11 == 0) {
                lVar19 = *plVar1 + (ulong)uVar3 * 0x10;
                pdVar31 = (dword *)(**(code **)(lVar19 + 0x138))
                                             (plVar1,plVar23,*(undefined8 *)(lVar19 + 0x140));
                goto code_r0x01e480d4;
              }
              lVar19 = func_0x00f78a48(lVar19);
              lVar27 = *plVar1;
              uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
              if (uVar18 != 0) {
                piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == lVar19) {
                    puVar17 = (undefined8 *)
                              (lVar27 + (long)(int)(*piVar28 + (uint)uVar3) * 0x10 + 0x138);
                    goto code_r0x01e48260;
                  }
                  piVar28 = piVar28 + 4;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
              puVar17 = (undefined8 *)func_0x00fac1f0(plVar1,lVar19,(ulong)uVar3);
code_r0x01e48260:
              pcVar35 = (code *)*puVar17;
              puVar17 = (undefined8 *)puVar17[1];
            }
            else {
              if (iVar11 == 0) {
                uVar26 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar27 = *plVar1;
                uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
                if (uVar18 != 0) {
                  piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == *(long *)(lVar19 + 0x18)) {
                      lVar27 = lVar27 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar19 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01e48238;
                    }
                    piVar28 = piVar28 + 4;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
                lVar27 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
                uVar26 = *(undefined8 *)(lVar27 + 8);
              }
              puVar17 = (undefined8 *)func_0x00f78acc(uVar26,lVar19);
              pcVar35 = (code *)*puVar17;
            }
            pdVar31 = (dword *)(*pcVar35)(plVar1,plVar23,puVar17);
          }
        }
        else {
          if ((*(short *)(lVar19 + 0x48) == -1) || (*(long *)(pdVar13 + 6) == 0))
          goto code_r0x01e480c8;
          iVar12 = func_0x00f78a44(lVar19);
          iVar11 = func_0x00f78ec0(lVar19);
          if (iVar12 == 0) {
            uVar3 = *(ushort *)(lVar19 + 0x48);
            if (iVar11 == 0) {
              lVar19 = *plVar23 + (ulong)uVar3 * 0x10;
              pdVar31 = (dword *)(**(code **)(lVar19 + 0x138))
                                           (plVar23,*(undefined8 *)(lVar19 + 0x140));
              goto code_r0x01e480d4;
            }
            lVar19 = func_0x00f78a48(lVar19);
            lVar27 = *plVar23;
            uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
            if (uVar18 != 0) {
              piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
              do {
                if (*(long *)(piVar28 + -2) == lVar19) {
                  puVar17 = (undefined8 *)
                            (lVar27 + (long)(int)(*piVar28 + (uint)uVar3) * 0x10 + 0x138);
                  goto code_r0x01e481fc;
                }
                piVar28 = piVar28 + 4;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            puVar17 = (undefined8 *)func_0x00fac1f0(plVar23,lVar19,(ulong)uVar3);
code_r0x01e481fc:
            pcVar35 = (code *)*puVar17;
            puVar17 = (undefined8 *)puVar17[1];
          }
          else {
            if (iVar11 == 0) {
              uVar26 = *(undefined8 *)(*plVar23 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar27 = *plVar23;
              uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
              if (uVar18 != 0) {
                piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar28 + -2) == *(long *)(lVar19 + 0x18)) {
                    lVar27 = lVar27 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar19 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e481d4;
                  }
                  piVar28 = piVar28 + 4;
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
              lVar27 = func_0x00fac1f0(plVar23);
code_r0x01e481d4:
              uVar26 = *(undefined8 *)(lVar27 + 8);
            }
            puVar17 = (undefined8 *)func_0x00f78acc(uVar26,lVar19);
            pcVar35 = (code *)*puVar17;
          }
          pdVar31 = (dword *)(*pcVar35)(plVar23,puVar17);
        }
      }
      else {
        if (bVar10) goto code_r0x01e480c8;
code_r0x01e47fc0:
        pdVar31 = (dword *)(*pcVar35)(plVar1,plVar23,lVar19);
      }
code_r0x01e480d4:
      lVar15 = lVar15 + 1;
      if (lVar15 == lVar14) {
        return pdVar31;
      }
    } while( true );
  }
  unaff_x23 = 0x3d28718;
  puVar32 = (undefined1 *)0x3d56000;
  pdVar31 = (dword *)0x3d1feb8;
  lVar19 = *(long *)(lVar14 + 0x38);
  lVar15 = *(long *)(lVar14 + 0x30);
  lVar39 = *(long *)(lVar14 + 0x48);
  lVar27 = *(long *)(lVar14 + 0x40);
  lVar40 = *(long *)(lVar14 + 0x50);
  lVar42 = *(long *)(lVar14 + 0x68);
  lVar41 = *(long *)(lVar14 + 0x60);
  *(long *)(pdVar13 + 0xe) = *(long *)(lVar14 + 0x58);
  *(long *)(pdVar13 + 0xc) = lVar40;
  *(long *)(pdVar13 + 0x12) = lVar42;
  *(long *)(pdVar13 + 0x10) = lVar41;
  *(long *)(pdVar13 + 6) = lVar19;
  *(long *)(pdVar13 + 4) = lVar15;
  *(long *)(pdVar13 + 10) = lVar39;
  *(long *)(pdVar13 + 8) = lVar27;
  lVar15 = func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.OptionSelected_TypeInfo*/ uRam0000000003d28718);
  /*Atlas.UI.Screens.PostEventScreen.OptionSelected$$.ctor*/ func_0x01562ec8(lVar15,param_1,uRam0000000003d56e20,0);
  *(long *)(pdVar13 + 0x14) = lVar15;
  lVar15 = func_0x00f78aec(/*Atlas.UI.Screens.PostEventScreen.OptionSelected_TypeInfo*/ uRam0000000003d28718);
  param_3 = puRam0000000003d56e18;
  /*Atlas.UI.Screens.PostEventScreen.OptionSelected$$.ctor*/ func_0x01562ec8(lVar15,param_1,puRam0000000003d56e18,0);
  *(long *)(pdVar13 + 0x16) = lVar15;
  pdVar30 = *(dword **)(param_1 + 0x88);
  if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  param_1 = 0;
  if (pdVar30 == (dword *)0x0) goto LAB_01596ce4;
  pdVar20 = *(dword **)(*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x78);
  pdVar25 = (dword *)0x0;
  uVar26 = 0;
  pdVar31 = (dword *)0x0;
  pdVar24 = pdVar13;
  if ((bRam0000000003eb486f & 1) == 0) {
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d2fb90);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb486f = 1;
  }
  lVar15 = *(long *)(pdVar30 + 4);
  puStack_60 = &stack0xfffffffffffffff0;
  if (lVar15 != 0) {
    pdVar25 = (dword *)0x0;
    uVar26 = 0;
    puStack_58 = &UNK_01470820;
    pdVar22 = pdVar20;
    pdVar24 = pdVar13;
code_r0x02f87f38:
    pdStack_80 = (dword *)0x0;
    pdStack_78 = pdVar13;
    pdStack_70 = pdVar30;
    pdStack_68 = pdVar20;
    if ((bRam0000000003ebc64a & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64a = 1;
    }
    apdStack_f8[2] = (dword *)&UNK_02f87f9c;
    pdStack_110 = pdVar24;
    alStack_108[0] = uVar26;
    alStack_108[1] = lVar15;
    apdStack_f8[0] = pdVar25;
    apdStack_f8[1] = (dword *)&puStack_60;
    if ((bRam0000000003ebc64e & 1) == 0) {
      func_0x00f78a20(0x3d3ddf0);
      func_0x00f78a20(0x3d3ddf8);
      bRam0000000003ebc64e = 1;
    }
    lVar14 = *(long *)(lVar15 + 0x78);
    if (lVar14 != 0) {
      iVar12 = *(int *)(lVar14 + 0x18);
      if (iVar12 < 1) {
        return (dword *)0x0;
      }
      iVar11 = 1;
      pdVar13 = (dword *)((long)&MACH_HEADER.magic + 1);
      do {
        if (*(uint *)(lVar14 + 0x18) <= iVar11 - 1U) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + (long)(int)(iVar11 - 1U) * 0x20 + 0x20);
        if (lVar14 == 0) break;
        uVar18 = /*System.String$$Equals*/ func_0x029caa48(lVar14,pdVar22,5,0);
        if ((uVar18 & 1) != 0) {
          return pdVar13;
        }
        pdVar13 = (dword *)(ulong)(iVar11 < iVar12);
        if (iVar12 == iVar11) {
          return pdVar13;
        }
        lVar14 = *(long *)(lVar15 + 0x78);
        iVar11 = iVar11 + 1;
      } while (lVar14 != 0);
    }
    func_0x00f78af4();
    return (dword *)0x0;
  }
  auVar43 = func_0x00f78af4();
  pdVar22 = auVar43._8_8_;
  pdStack_70 = (dword *)&puStack_60;
  puStack_58 = &Atlas_UI_AtlasUIManager__ShowScreen;
  lVar15 = *(long *)(auVar43._0_8_ + 0x10);
  if (lVar15 != 0) {
    puStack_58 = &Atlas_UI_AtlasUIManager__ShowScreen;
    goto code_r0x02f87f38;
  }
  auVar43 = func_0x00f78af4();
  pdVar22 = auVar43._8_8_;
  ppdVar34 = &pdStack_70;
  pdStack_68 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
  lVar15 = *(long *)(auVar43._0_8_ + 0x10);
  if (lVar15 != 0) {
    pdVar25 = (dword *)0x0;
    pdStack_68 = (dword *)&Atlas_UI_AtlasUIManager__HideScreen;
    pdStack_80 = pdVar30;
    pdStack_78 = pdVar20;
    pdStack_70 = (dword *)&puStack_60;
    if ((bRam0000000003ebc64b & 1) == 0) {
      pdStack_70 = (dword *)&puStack_60;
      func_0x00f78a20(0x3d3ddc8);
      func_0x00f78a20(0x3d3ddd0);
      bRam0000000003ebc64b = 1;
    }
    lVar14 = *(long *)(lVar15 + 0x70);
    if (lVar14 != 0) {
      lVar19 = lVar14;
      if (*(uint *)(lVar14 + 0x18) <= auVar43._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        lVar19 = *(long *)(lVar15 + 0x70);
      }
      if (lVar19 != 0) {
        lVar14 = *(long *)(lVar14 + 0x10) + (long)(int)auVar43._8_4_ * 0x28;
        pdStack_b8 = *(dword **)(lVar14 + 0x28);
        ppdStack_c0 = *(dword ***)(lVar14 + 0x20);
        pdStack_b0 = (dword *)0x0;
        pdStack_a8 = (dword *)0x0;
        /*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar19,pdVar22,&stack0xffffffffffffff40,uRam0000000003d3ddd0);
        pdVar13 = (dword *)/*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar15,pdVar22);
        return pdVar13;
      }
    }
    auVar43 = func_0x00f78af4();
    pdVar21 = auVar43._8_8_;
    plVar5 = alStack_158 + 9;
    pdStack_110 = (dword *)0x0;
    apdStack_f8[2] = (dword *)&Core_UI2_UIManager__GetCurrentScreenID;
    ppdVar34 = apdStack_f8 + 1;
    alStack_108[0] = lVar14;
    alStack_108[1] = lVar15;
    apdStack_f8[0] = pdVar22;
    apdStack_f8[1] = (dword *)&pdStack_70;
    if ((bRam0000000003ebc64c & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64c = 1;
    }
    lVar15 = *(long *)(auVar43._0_8_ + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= auVar43._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)auVar43._8_4_ * 0x28 + 0x28);
      if (lVar15 == 0) {
        pdVar13 = (dword *)0x0;
      }
      else {
        pdVar13 = *(dword **)(lVar15 + 0x40);
      }
      return pdVar13;
    }
    puVar38 = &Core_UI2_UIScreen__ForceExit;
    pdVar20 = (dword *)func_0x00f78af4();
    pdVar30 = (dword *)0x0;
    pdVar13 = (dword *)0x3ebc000;
    goto code_r0x02f882d8;
  }
  auVar43 = func_0x00f78af4();
  pdVar21 = auVar43._8_8_;
  ppdVar36 = &pdStack_80;
  pdStack_80 = (dword *)&pdStack_70;
  pdStack_78 = (dword *)&Atlas_UI_AtlasUIManager__ClearLayer;
  lVar15 = *(long *)(auVar43._0_8_ + 0x10);
  auVar43._8_8_ = pdVar13;
  auVar43._0_8_ = lVar15;
  if (lVar15 != 0) {
    pdVar25 = (dword *)0x0;
    ppdVar4 = &pdStack_70;
    puVar38 = &Atlas_UI_AtlasUIManager__ClearLayer;
    pdVar13 = pdVar30;
    goto code_r0x02f877a8;
  }
  auVar43 = func_0x00f78af4();
  lVar15 = *(long *)(auVar43._0_8_ + 0x10);
  auVar43._8_8_ = auVar43._8_8_;
  auVar43._0_8_ = lVar15;
  if (lVar15 != 0) {
    ppdVar6 = &pdStack_80;
    puVar38 = &Atlas_UI_AtlasUIManager__ClearLayerAndShowScreen;
    pdVar21 = pdVar25;
    while( true ) {
      ppdVar4 = (dword **)((long)ppdVar6 + -0x30);
      *(dword **)((long)ppdVar6 + -0x30) = pdVar31;
      *(dword **)((long)ppdVar6 + -0x28) = pdVar13;
      *(dword **)((long)ppdVar6 + -0x20) = pdVar30;
      *(dword **)((long)ppdVar6 + -0x18) = pdVar20;
      *(dword ***)((long)ppdVar6 + -0x10) = ppdVar36;
      *(undefined **)((long)ppdVar6 + -8) = puVar38;
      ppdVar34 = (dword **)((long)ppdVar6 + -0x10);
      puVar38 = &UNK_02f883d8;
      pdVar25 = pdVar21;
      pdVar20 = pdVar24;
      pdVar13 = pdVar21;
      pdVar31 = auVar43._0_8_;
code_r0x02f877a8:
      pdVar30 = auVar43._0_8_;
      plVar5 = (long *)((long)ppdVar4 + -0x60);
      *(dword **)((long)ppdVar4 + -0x30) = pdVar31;
      *(long *)((long)ppdVar4 + -0x28) = auVar43._8_8_;
      *(dword **)((long)ppdVar4 + -0x20) = pdVar13;
      *(dword **)((long)ppdVar4 + -0x18) = pdVar20;
      *(dword ***)((long)ppdVar4 + -0x10) = ppdVar34;
      *(undefined **)((long)ppdVar4 + -8) = puVar38;
      ppdVar34 = (dword **)((long)ppdVar4 + -0x10);
      pdVar13 = pdVar30;
      if ((bRam0000000003ebc64d & 1) == 0) {
        func_0x00f78a20(0x3d3ddc8);
        pdVar13 = (dword *)func_0x00f78a20(0x3d3ddd0);
        bRam0000000003ebc64d = 1;
      }
      uVar29 = (uint)pdVar21;
      if (((int)uVar29 < 0) || ((int)*(long *)(pdVar30 + 0x14) <= (int)uVar29)) {
        return pdVar13;
      }
      lVar15 = *(long *)(pdVar30 + 0x1c);
      if (lVar15 == 0) break;
      if (*(uint *)(lVar15 + 0x18) <= uVar29) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(lVar15 + 0x10) + ((ulong)pdVar21 & 0xffffffff) * 0x28;
      pdVar31 = *(dword **)(lVar15 + 0x20);
      pdVar20 = *(dword **)(lVar15 + 0x28);
      *(undefined4 *)((long)ppdVar4 + -0x60) = *(undefined4 *)(lVar15 + 0x42);
      *(undefined2 *)((long)ppdVar4 + -0x5c) = *(undefined2 *)(lVar15 + 0x46);
      if (pdVar20 == (dword *)0x0) {
        lVar15 = *(long *)(pdVar30 + 0x1c);
        if (lVar15 != 0) {
          *(dword **)((long)ppdVar4 + -0x58) = pdVar31;
          *(undefined8 *)((long)ppdVar4 + -0x50) = 0;
          *(undefined8 *)((long)ppdVar4 + -0x48) = 0;
          *(undefined8 *)((long)ppdVar4 + -0x40) = 0;
          *(undefined2 *)((long)ppdVar4 + -0x38) = 0;
          *(undefined4 *)((long)ppdVar4 + -0x36) = *(undefined4 *)((long)ppdVar4 + -0x60);
          *(undefined2 *)((long)ppdVar4 + -0x32) = *(undefined2 *)((long)ppdVar4 + -0x5c);
          pdVar13 = (dword *)/*System.Collections.Generic.List<UIManager.Layer>$$set_Item*/ func_0x025c0584(lVar15,pdVar21,(undefined1 *)((long)ppdVar4 + -0x58),
                                             uRam0000000003d3ddd0);
          return pdVar13;
        }
        break;
      }
      puVar38 = &UNK_02f87848;
      pdVar13 = pdVar20;
code_r0x02f882d8:
      *(dword **)((long)plVar5 + -0x20) = pdVar30;
      *(dword **)((long)plVar5 + -0x18) = pdVar21;
      *(dword ***)((long)plVar5 + -0x10) = ppdVar34;
      *(undefined **)((long)plVar5 + -8) = puVar38;
      (**(code **)(*(long *)pdVar20 + 0x218))(pdVar20,*(undefined8 *)(*(long *)pdVar20 + 0x220));
      if (*(long *)(pdVar20 + 10) != 0) {
        /*UnityEngine.MonoBehaviour$$StopAllCoroutines*/ func_0x032482a8(*(long *)(pdVar20 + 10),0);
        pdVar20[0x13] = 4;
        /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(pdVar20,0);
                    /* WARNING: Could not recover jumptable at 0x02f88334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar13 = (dword *)(**(code **)(*(long *)pdVar20 + 0x228))
                                     (pdVar20,*(undefined8 *)(*(long *)pdVar20 + 0x230));
        return pdVar13;
      }
      func_0x00f78af4();
      ppdVar6 = (dword **)((long)plVar5 + -0x40);
      *(dword **)((long)plVar5 + -0x40) = pdVar30;
      *(dword **)((long)plVar5 + -0x38) = pdVar20;
      *(undefined1 **)((long)plVar5 + -0x30) = (undefined1 *)((long)plVar5 + -0x10);
      *(undefined **)((long)plVar5 + -0x28) = &Core_UI2_UIManager__ReturnScreenWithBehaviour;
      ppdVar36 = (dword **)((long)plVar5 + -0x30);
      if (extraout_x1 != (long *)0x0) {
        lVar15 = extraout_x1[5];
        /*Core.UI2.UIManager$$RemoveCallbacks*/ func_0x02f893d8();
        uVar26 = (**(code **)(*extraout_x1 + 0x238))
                           (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x240));
        extraout_x1[5] = 0;
        extraout_x1[6] = 0;
        extraout_x1[9] = _UNK_037235c0;
        extraout_x1[7] = 0;
        extraout_x1[8] = 0;
        /*Core.UI2.UIManager$$DestroyScreenBehaviour*/ func_0x02f89550(uVar26,lVar15);
        pdVar13 = (dword *)(**(code **)(*extraout_x1 + 0x248))
                                     (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x250));
        extraout_x1[0xb] = 0;
        return pdVar13;
      }
      puVar38 = &Core_UI2_UIManager__ClearLayerAndShowScreen;
      auVar43 = func_0x00f78af4();
      pdVar21 = pdVar25;
    }
    lVar15 = func_0x00f78af4();
    *(undefined8 *)((long)ppdVar4 + -0xa0) = unaff_d9;
    *(undefined8 *)((long)ppdVar4 + -0x98) = unaff_d8;
    *(dword **)((long)ppdVar4 + -0x90) = pdVar31;
    *(undefined8 *)((long)ppdVar4 + -0x88) = 0;
    *(dword **)((long)ppdVar4 + -0x80) = pdVar30;
    *(dword **)((long)ppdVar4 + -0x78) = pdVar21;
    *(dword ***)((long)ppdVar4 + -0x70) = ppdVar34;
    *(undefined **)((long)ppdVar4 + -0x68) = &Core_UI2_UIManager__Update;
    if ((bRam0000000003ebc647 & 1) == 0) {
      func_0x00f78a20(0x3d255c0);
      bRam0000000003ebc647 = 1;
    }
    if (((*(ushort *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar26 = **(undefined8 **)(/*Core.UI2.UIManager_TypeInfo*/ lRam0000000003d255c0 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar26,0);
    if (0 < *(int *)(lVar15 + 0x50)) {
      iVar12 = 0;
      do {
        /*Core.UI2.UIManager$$UpdateLayer*/ func_0x02f879cc(lVar15,iVar12);
        /*Core.UI2.UIManager$$UpdateLayerCurrentScreen*/ func_0x02f87bd0(extraout_s0,lVar15,iVar12);
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar15 + 0x50));
    }
    /*Core.UI2.UIManager$$UpdateCleanUpAssetRequests*/ func_0x02f87c90(lVar15);
    *(undefined8 *)((long)ppdVar4 + -0x80) = *(undefined8 *)((long)ppdVar4 + -0x80);
    *(undefined8 *)((long)ppdVar4 + -0x78) = *(undefined8 *)((long)ppdVar4 + -0x78);
    *(undefined8 *)((long)ppdVar4 + -0x70) = *(undefined8 *)((long)ppdVar4 + -0x70);
    *(undefined8 *)((long)ppdVar4 + -0x68) = *(undefined8 *)((long)ppdVar4 + -0x68);
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pdVar13 = (dword *)(*pcRam0000000003ec05a0)(uVar26);
    return pdVar13;
  }
  auVar43 = func_0x00f78af4();
  lVar15 = *(long *)(auVar43._0_8_ + 0x10);
  if (lVar15 == 0) {
    auVar43 = func_0x00f78af4();
    ppdVar34 = &stack0xffffffffffffff50;
    pdStack_a8 = (dword *)&Atlas_UI_AtlasUIManager__GetLayerState;
    lVar15 = *(long *)(auVar43._0_8_ + 0x10);
    auVar44._8_8_ = auVar43._8_8_;
    auVar44._0_8_ = lVar15;
    if (lVar15 != 0) {
      pdVar24 = (dword *)0x0;
      ppuVar7 = (undefined1 **)&stack0xffffffffffffff60;
      puVar38 = &Atlas_UI_AtlasUIManager__GetLayerState;
      pdStack_b0 = (dword *)&stack0xffffffffffffff60;
      goto code_r0x02f884dc;
    }
    pdStack_b0 = (dword *)&stack0xffffffffffffff60;
    auVar43 = func_0x00f78af4();
    ppuVar37 = (undefined1 **)&stack0xffffffffffffff40;
    pdStack_b8 = (dword *)&Atlas_UI_AtlasUIManager__EnableInput;
    lVar15 = *(long *)(auVar43._0_8_ + 0x10);
    auVar45._8_8_ = auVar43._8_8_;
    auVar45._0_8_ = lVar15;
    if (lVar15 == 0) {
      ppdStack_c0 = &stack0xffffffffffffff50;
      auVar43 = func_0x00f78af4();
      lVar15 = *(long *)(auVar43._0_8_ + 0x10);
      auVar46._8_8_ = auVar43._8_8_;
      auVar46._0_8_ = lVar15;
      if (lVar15 == 0) {
        pdVar31 = (dword *)func_0x00f78af4();
        alStack_108[1] = 0;
        apdStack_f8[0] = pdVar13;
        apdStack_f8[1] = pdVar30;
        apdStack_f8[2] = pdVar20;
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar26 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar26,uRam0000000003d2fb80);
        *(undefined8 *)(pdVar31 + 0xc) = uVar26;
        return pdVar31;
      }
      ppuVar9 = (undefined1 **)&stack0xffffffffffffff40;
      puVar38 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      goto code_r0x02f88674;
    }
    ppdVar8 = &stack0xffffffffffffff50;
    puVar38 = &Atlas_UI_AtlasUIManager__EnableInput;
    pdVar24 = pdVar25;
    pdVar31 = pdVar13;
    ppdStack_c0 = &stack0xffffffffffffff50;
  }
  else {
    pdVar24 = (dword *)0x0;
    ppuVar7 = (undefined1 **)&stack0xffffffffffffff40;
    ppdStack_c0 = (dword **)0x0;
    pdStack_b8 = pdVar13;
    pdStack_b0 = pdVar30;
    pdStack_a8 = pdVar20;
    if ((bRam0000000003ebc64f & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc64f = 1;
    }
    uVar29 = auVar43._8_4_;
    if (((int)uVar29 < 0) || (*(int *)(lVar15 + 0x50) <= (int)uVar29)) {
      return (dword *)0x0;
    }
    lVar15 = *(long *)(lVar15 + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= uVar29) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar14 = *(long *)(lVar15 + 0x10) + ((ulong)auVar43._8_8_ & 0xffffffff) * 0x28;
      lVar15 = *(long *)(lVar14 + 0x28);
      cVar2 = *(char *)(lVar14 + 0x40);
      iVar12 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(lVar14 + 0x30),0);
      if (iVar12 == 0 || cVar2 != '\0') {
        return (dword *)0x0;
      }
      if ((lVar15 != 0) && (*(int *)(lVar15 + 0x4c) != 2)) {
        return (dword *)0x0;
      }
      return (dword *)((long)&MACH_HEADER.magic + 1);
    }
    puVar38 = &Core_UI2_UIManager__GetLayerState;
    auVar44 = func_0x00f78af4();
    pdVar30 = (dword *)0x0;
    pdVar20 = auVar43._8_8_;
    pdVar13 = (dword *)0x3ebc000;
code_r0x02f884dc:
    ppdVar8 = (dword **)((long)ppuVar7 + -0x30);
    *(undefined8 *)((long)ppuVar7 + -0x30) = 0;
    *(dword **)((long)ppuVar7 + -0x28) = pdVar13;
    *(dword **)((long)ppuVar7 + -0x20) = pdVar30;
    *(dword **)((long)ppuVar7 + -0x18) = pdVar20;
    *(undefined1 **)((long)ppuVar7 + -0x10) = &stack0xffffffffffffff60;
    *(undefined **)((long)ppuVar7 + -8) = puVar38;
    ppdVar34 = (dword **)((long)ppuVar7 + -0x10);
    if ((bRam0000000003ebc650 & 1) == 0) {
      func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc650 = 1;
    }
    lVar15 = *(long *)(auVar44._0_8_ + 0x70);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= auVar44._8_4_) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)auVar44._8_4_ * 0x28 + 0x28);
      if (lVar15 == 0) {
        pdVar13 = &MACH_HEADER.cputype;
      }
      else {
        pdVar13 = (dword *)(ulong)*(uint *)(lVar15 + 0x4c);
      }
      return pdVar13;
    }
    puVar38 = &Core_UI2_UIManager__EnableInput;
    auVar45 = func_0x00f78af4();
    pdVar30 = (dword *)0x0;
    pdVar20 = auVar44._8_8_;
    pdVar31 = (dword *)0x3ebc000;
  }
  pdVar22 = auVar45._8_8_;
  pdVar13 = auVar45._0_8_;
  ppuVar9 = (undefined1 **)((long)ppdVar8 + -0x40);
  *(undefined1 **)((long)ppdVar8 + -0x40) = unaff_x24;
  *(undefined8 *)((long)ppdVar8 + -0x38) = 0x3eb4000;
  *(undefined8 *)((long)ppdVar8 + -0x30) = 0;
  *(dword **)((long)ppdVar8 + -0x28) = pdVar31;
  *(dword **)((long)ppdVar8 + -0x20) = pdVar30;
  *(dword **)((long)ppdVar8 + -0x18) = pdVar20;
  *(dword ***)((long)ppdVar8 + -0x10) = ppdVar34;
  *(undefined **)((long)ppdVar8 + -8) = puVar38;
  ppuVar37 = (undefined1 **)((long)ppdVar8 + -0x10);
  pdVar31 = (dword *)0x3ebc000;
  pdVar25 = pdVar24;
  if ((bRam0000000003ebc651 & 1) == 0) {
    func_0x00f78a20(0x3d2a5c0);
    func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc651 = 1;
  }
  if (*(long *)(pdVar13 + 0x1a) != 0) {
    pdVar25 = (dword *)(ulong)((uint)pdVar24 ^ 1);
    pdVar30 = (dword *)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(pdVar13 + 0x1a),pdVar22,pdVar25,0);
    lVar15 = *(long *)(pdVar13 + 0x1c);
    pdVar31 = (dword *)0x0;
    if (lVar15 != 0) {
      uVar29 = auVar45._8_4_;
      if (*(uint *)(lVar15 + 0x18) <= uVar29) {
        pdVar30 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if ((*(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar29 * 0x28 + 0x28) == 0) ||
         (pdVar31 = *(dword **)(pdVar13 + 0xc), pdVar31 == (dword *)0x0)) {
        return pdVar30;
      }
      lVar15 = *(long *)(pdVar13 + 0x1c);
      pdVar13 = (dword *)0x0;
      if (lVar15 != 0) {
        if (*(uint *)(lVar15 + 0x18) <= uVar29) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar23 = *(long **)(*(long *)(lVar15 + 0x10) + (long)(int)uVar29 * 0x28 + 0x28);
        *(undefined8 *)((long)ppdVar8 + -0x60) = unaff_x28;
        *(undefined8 *)((long)ppdVar8 + -0x58) = unaff_x27;
        *(undefined8 *)((long)ppdVar8 + -0x50) = unaff_x26;
        *(undefined8 *)((long)ppdVar8 + -0x48) = unaff_x25;
        *(undefined8 *)((long)ppdVar8 + -0x40) = *(undefined8 *)((long)ppdVar8 + -0x40);
        *(undefined8 *)((long)ppdVar8 + -0x38) = *(undefined8 *)((long)ppdVar8 + -0x38);
        *(undefined8 *)((long)ppdVar8 + -0x30) = *(undefined8 *)((long)ppdVar8 + -0x30);
        *(undefined8 *)((long)ppdVar8 + -0x28) = *(undefined8 *)((long)ppdVar8 + -0x28);
        *(undefined8 *)((long)ppdVar8 + -0x20) = *(undefined8 *)((long)ppdVar8 + -0x20);
        *(undefined8 *)((long)ppdVar8 + -0x18) = *(undefined8 *)((long)ppdVar8 + -0x18);
        *(undefined8 *)((long)ppdVar8 + -0x10) = *(undefined8 *)((long)ppdVar8 + -0x10);
        *(undefined8 *)((long)ppdVar8 + -8) = *(undefined8 *)((long)ppdVar8 + -8);
        *(dword **)((long)ppdVar8 + -0x68) = pdVar31;
        lVar15 = *(long *)(pdVar31 + 0x1a);
        if (lVar15 == 0) {
          puVar32 = (undefined1 *)((long)ppdVar8 + -0x68);
          lVar14 = 1;
        }
        else {
          lVar14 = *(long *)(lVar15 + 0x18);
          if (lVar14 == 0) {
            return pdVar31;
          }
          puVar32 = (undefined1 *)(lVar15 + 0x20);
        }
        lVar15 = 0;
        do {
          lVar19 = *(long *)(puVar32 + lVar15 * 8);
          pcVar35 = *(code **)(lVar19 + 0x10);
          plVar1 = *(long **)(lVar19 + 0x20);
          lVar19 = *(long *)(lVar19 + 0x28);
          if (*(short *)(lVar19 + 0x48) == -1) {
            func_0x00f78ad8(lVar19);
          }
          iVar12 = func_0x00f78a4c(lVar19);
          bVar10 = *(char *)(lVar19 + 0x4a) == '\x03';
          if (iVar12 == 0) {
            if (bVar10) {
              if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                pdVar13 = (dword *)(*pcVar35)(plVar23,pdVar22,pdVar24,lVar19);
              }
              else {
                if (((*(short *)(lVar19 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                   || (*(long *)(pdVar31 + 6) == 0)) goto code_r0x01e71aac;
                iVar12 = func_0x00f78a44(lVar19);
                iVar11 = func_0x00f78ec0(lVar19);
                if (iVar12 == 0) {
                  uVar3 = *(ushort *)(lVar19 + 0x48);
                  if (iVar11 == 0) {
                    lVar19 = *plVar1 + (ulong)uVar3 * 0x10;
                    pdVar13 = (dword *)(**(code **)(lVar19 + 0x138))
                                                 (plVar1,plVar23,pdVar22,pdVar24,
                                                  *(undefined8 *)(lVar19 + 0x140));
                    goto code_r0x01e71bd0;
                  }
                  lVar19 = func_0x00f78a48(lVar19);
                  lVar27 = *plVar1;
                  uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
                  if (uVar18 != 0) {
                    piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == lVar19) {
                        puVar17 = (undefined8 *)
                                  (lVar27 + (long)(int)(*piVar28 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e71d74;
                      }
                      piVar28 = piVar28 + 4;
                      uVar18 = uVar18 - 1;
                    } while (uVar18 != 0);
                  }
                  puVar17 = (undefined8 *)func_0x00fac1f0(plVar1,lVar19,(ulong)uVar3);
code_r0x01e71d74:
                  pcVar35 = (code *)*puVar17;
                  puVar17 = (undefined8 *)puVar17[1];
                }
                else {
                  if (iVar11 == 0) {
                    uVar26 = *(undefined8 *)
                              (*plVar1 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar27 = *plVar1;
                    uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
                    if (uVar18 != 0) {
                      piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar28 + -2) == *(long *)(lVar19 + 0x18)) {
                          lVar27 = lVar27 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar19 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71d4c;
                        }
                        piVar28 = piVar28 + 4;
                        uVar18 = uVar18 - 1;
                      } while (uVar18 != 0);
                    }
                    lVar27 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                    uVar26 = *(undefined8 *)(lVar27 + 8);
                  }
                  puVar17 = (undefined8 *)func_0x00f78acc(uVar26,lVar19);
                  pcVar35 = (code *)*puVar17;
                }
                pdVar13 = (dword *)(*pcVar35)(plVar1,plVar23,pdVar22,pdVar24,puVar17);
              }
            }
            else {
              if ((*(short *)(lVar19 + 0x48) == -1) || (*(long *)(pdVar31 + 6) == 0))
              goto code_r0x01e71bbc;
              iVar12 = func_0x00f78a44(lVar19);
              iVar11 = func_0x00f78ec0(lVar19);
              if (iVar12 == 0) {
                uVar3 = *(ushort *)(lVar19 + 0x48);
                if (iVar11 == 0) {
                  lVar19 = *plVar23 + (ulong)uVar3 * 0x10;
                  pdVar13 = (dword *)(**(code **)(lVar19 + 0x138))
                                               (plVar23,pdVar22,pdVar24,
                                                *(undefined8 *)(lVar19 + 0x140));
                  goto code_r0x01e71bd0;
                }
                lVar19 = func_0x00f78a48(lVar19);
                lVar27 = *plVar23;
                uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
                if (uVar18 != 0) {
                  piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == lVar19) {
                      puVar17 = (undefined8 *)
                                (lVar27 + (long)(int)(*piVar28 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71d00;
                    }
                    piVar28 = piVar28 + 4;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
                puVar17 = (undefined8 *)func_0x00fac1f0(plVar23,lVar19,(ulong)uVar3);
code_r0x01e71d00:
                pcVar35 = (code *)*puVar17;
                puVar17 = (undefined8 *)puVar17[1];
              }
              else {
                if (iVar11 == 0) {
                  uVar26 = *(undefined8 *)
                            (*plVar23 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar27 = *plVar23;
                  uVar18 = (ulong)*(ushort *)(lVar27 + 0x12a);
                  if (uVar18 != 0) {
                    piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == *(long *)(lVar19 + 0x18)) {
                        lVar27 = lVar27 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar19 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71cd8;
                      }
                      piVar28 = piVar28 + 4;
                      uVar18 = uVar18 - 1;
                    } while (uVar18 != 0);
                  }
                  lVar27 = func_0x00fac1f0(plVar23);
code_r0x01e71cd8:
                  uVar26 = *(undefined8 *)(lVar27 + 8);
                }
                puVar17 = (undefined8 *)func_0x00f78acc(uVar26,lVar19);
                pcVar35 = (code *)*puVar17;
              }
              pdVar13 = (dword *)(*pcVar35)(plVar23,pdVar22,pdVar24,puVar17);
            }
          }
          else {
            if (bVar10) goto code_r0x01e71bbc;
code_r0x01e71aac:
            pdVar13 = (dword *)(*pcVar35)(plVar1,plVar23,pdVar22,pdVar24,lVar19);
          }
code_r0x01e71bd0:
          lVar15 = lVar15 + 1;
          if (lVar15 == lVar14) {
            return pdVar13;
          }
        } while( true );
      }
    }
  }
  puVar38 = &Core_UI2_UIManager__SetScreenVisible;
  auVar46 = func_0x00f78af4();
  pdVar20 = pdVar24;
  pdVar30 = pdVar22;
code_r0x02f88674:
  pdVar24 = auVar46._0_8_;
  *(dword **)((long)ppuVar9 + -0x30) = pdVar31;
  *(dword **)((long)ppuVar9 + -0x28) = pdVar13;
  *(dword **)((long)ppuVar9 + -0x20) = pdVar30;
  *(dword **)((long)ppuVar9 + -0x18) = pdVar20;
  *(undefined1 ***)((long)ppuVar9 + -0x10) = ppuVar37;
  *(undefined **)((long)ppuVar9 + -8) = puVar38;
  pdVar13 = pdVar24;
  if ((bRam0000000003ebc652 & 1) == 0) {
    pdVar13 = (dword *)func_0x00f78a20(0x3d3ddc8);
    bRam0000000003ebc652 = 1;
  }
  lVar15 = *(long *)(pdVar24 + 0x1c);
  if (lVar15 != 0) {
    uVar29 = auVar46._8_4_;
    if (*(uint *)(lVar15 + 0x18) <= uVar29) {
      pdVar13 = (dword *)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
    }
    if (*(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar29 * 0x28 + 0x28) == 0) {
      return pdVar13;
    }
    lVar15 = *(long *)(pdVar24 + 0x1c);
    if (lVar15 != 0) {
      if (*(uint *)(lVar15 + 0x18) <= uVar29) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0x10) + (long)(int)uVar29 * 0x28 + 0x28);
      if ((lVar15 != 0) && (plVar23 = *(long **)(lVar15 + 0x28), plVar23 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pdVar13 = (dword *)(**(code **)(*plVar23 + 0x178))
                                     (plVar23,pdVar25,*(undefined8 *)(*plVar23 + 0x180));
        return pdVar13;
      }
    }
  }
  auVar43 = func_0x00f78af4();
  uVar26 = auVar43._0_8_;
  *(long *)((long)ppuVar9 + -0x50) = auVar46._8_8_;
  *(dword **)((long)ppuVar9 + -0x48) = pdVar25;
  *(undefined1 **)((long)ppuVar9 + -0x40) = (undefined1 *)((long)ppuVar9 + -0x10);
  *(undefined **)((long)ppuVar9 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
  *(undefined8 *)((long)ppuVar9 + -0x68) = 0;
  *(undefined8 *)((long)ppuVar9 + -0x70) = 0;
  *(undefined8 *)((long)ppuVar9 + -0x58) = 0;
  *(undefined8 *)((long)ppuVar9 + -0x60) = 0;
  pdVar13 = (dword *)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar26,auVar43._8_8_,(undefined1 *)((long)ppuVar9 + -0x70));
  if ((int)pdVar13 != 0) {
    /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar26,*(undefined8 *)((long)ppuVar9 + -0x60),
                    *(undefined8 *)((long)ppuVar9 + -0x58));
    *(undefined8 *)((long)ppuVar9 + -0x88) = *(undefined8 *)((long)ppuVar9 + -0x68);
    *(undefined8 *)((long)ppuVar9 + -0x90) = *(undefined8 *)((long)ppuVar9 + -0x70);
    *(undefined8 *)((long)ppuVar9 + -0x78) = *(undefined8 *)((long)ppuVar9 + -0x58);
    *(undefined8 *)((long)ppuVar9 + -0x80) = *(undefined8 *)((long)ppuVar9 + -0x60);
    pdVar13 = (dword *)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar26,(undefined1 *)((long)ppuVar9 + -0x90),1);
  }
  return pdVar13;
}



// ============================================================
// RVA: 0x1596ce8 | Atlas.Contexts.FrontendContextPostSingleplayerState.PlayAgainSelected
// ============================================================

void Atlas_Contexts_FrontendContextPostSingleplayerState__PlayAgainSelected
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  long lVar20;
  long **pplVar21;
  undefined1 auVar22 [16];
  long *plStack_98;
  long lStack_58;
  
  if ((bRam0000000003eb518e & 1) == 0) {
    func_0x00f78a20(0x3d2a040);
    func_0x00f78a20(0x3d405b8);
    bRam0000000003eb518e = 1;
  }
  lVar17 = *(long *)(param_1 + 0x80);
  lVar6 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405b8);
  if ((lVar6 == 0) || (lVar17 == 0)) {
    lVar6 = func_0x00f78af4();
    lStack_58 = 0x3d405b8;
    if ((bRam0000000003eb518f & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194e8);
      func_0x00f78a20(0x3d27650);
      func_0x00f78a20(0x3d405b8);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb518f = 1;
    }
    uVar9 = /*Atlas.Contexts.FrontEndContextSingleplayerState_var*/ uRam0000000003d194e8;
    plVar11 = *(long **)(lVar6 + 0x78);
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    plVar7 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
    lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar6,uRam0000000003d405b8);
    if (lVar17 != 0) {
      uVar9 = *(undefined8 *)(lVar17 + 0x18);
      lVar17 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar6,uRam0000000003d405b8);
      if (lVar17 != 0) {
        puVar10 = *(undefined8 **)(lVar17 + 0x28);
        lVar6 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar6,uRam0000000003d405b8);
        if (lVar6 != 0) {
          uVar19 = *(undefined8 *)(lVar6 + 0x10);
          uVar8 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
          Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerTransitionData___ctor
                    (uVar8,uVar9,puVar10,0,0,uVar19,0);
          param_3 = puVar10;
          if (plVar11 != (long *)0x0) {
            plStack_98 = plVar11;
            lVar6 = plVar11[0xd];
            if (lVar6 == 0) {
              pplVar21 = &plStack_98;
              lVar17 = 1;
            }
            else {
              lVar17 = *(long *)(lVar6 + 0x18);
              if (lVar17 == 0) {
                return;
              }
              pplVar21 = (long **)(lVar6 + 0x20);
            }
            lVar6 = 0;
            do {
              plVar14 = pplVar21[lVar6];
              pcVar18 = (code *)plVar14[2];
              plVar1 = (long *)plVar14[4];
              lVar20 = plVar14[5];
              if (*(short *)(lVar20 + 0x48) == -1) {
                func_0x00f78ad8(lVar20);
              }
              iVar4 = func_0x00f78a4c(lVar20);
              bVar3 = *(char *)(lVar20 + 0x4a) == '\x03';
              if (iVar4 == 0) {
                if (bVar3) {
                  if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
                    (*pcVar18)(plVar7,0,uVar8,lVar20);
                  }
                  else {
                    if (((*(short *)(lVar20 + 0x48) == -1) ||
                        ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (plVar11[3] == 0))
                    goto code_r0x01e7162c;
                    iVar4 = func_0x00f78a44(lVar20);
                    iVar5 = func_0x00f78ec0(lVar20);
                    if (iVar4 == 0) {
                      uVar2 = *(ushort *)(lVar20 + 0x48);
                      if (iVar5 == 0) {
                        lVar20 = *plVar1 + (ulong)uVar2 * 0x10;
                        (**(code **)(lVar20 + 0x138))
                                  (plVar1,plVar7,0,uVar8,*(undefined8 *)(lVar20 + 0x140));
                        goto code_r0x01e71750;
                      }
                      lVar20 = func_0x00f78a48(lVar20);
                      lVar12 = *plVar1;
                      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12a);
                      if (uVar15 != 0) {
                        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == lVar20) {
                            puVar10 = (undefined8 *)
                                      (lVar12 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                            goto code_r0x01e718f4;
                          }
                          piVar16 = piVar16 + 4;
                          uVar15 = uVar15 - 1;
                        } while (uVar15 != 0);
                      }
                      puVar10 = (undefined8 *)func_0x00fac1f0(plVar1,lVar20,(ulong)uVar2);
code_r0x01e718f4:
                      pcVar18 = (code *)*puVar10;
                      puVar10 = (undefined8 *)puVar10[1];
                    }
                    else {
                      if (iVar5 == 0) {
                        uVar9 = *(undefined8 *)
                                 (*plVar1 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar12 = *plVar1;
                        uVar15 = (ulong)*(ushort *)(lVar12 + 0x12a);
                        if (uVar15 != 0) {
                          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar16 + -2) == *(long *)(lVar20 + 0x18)) {
                              lVar12 = lVar12 + (long)(int)(*piVar16 +
                                                           (uint)*(ushort *)(lVar20 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e718cc;
                            }
                            piVar16 = piVar16 + 4;
                            uVar15 = uVar15 - 1;
                          } while (uVar15 != 0);
                        }
                        lVar12 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
                        uVar9 = *(undefined8 *)(lVar12 + 8);
                      }
                      puVar10 = (undefined8 *)func_0x00f78acc(uVar9,lVar20);
                      pcVar18 = (code *)*puVar10;
                    }
                    (*pcVar18)(plVar1,plVar7,0,uVar8,puVar10);
                  }
                }
                else {
                  if ((*(short *)(lVar20 + 0x48) == -1) || (plVar11[3] == 0)) goto code_r0x01e7173c;
                  iVar4 = func_0x00f78a44(lVar20);
                  iVar5 = func_0x00f78ec0(lVar20);
                  if (iVar4 == 0) {
                    uVar2 = *(ushort *)(lVar20 + 0x48);
                    if (iVar5 == 0) {
                      lVar20 = *plVar7 + (ulong)uVar2 * 0x10;
                      (**(code **)(lVar20 + 0x138))(plVar7,0,uVar8,*(undefined8 *)(lVar20 + 0x140));
                      goto code_r0x01e71750;
                    }
                    lVar20 = func_0x00f78a48(lVar20);
                    lVar12 = *plVar7;
                    uVar15 = (ulong)*(ushort *)(lVar12 + 0x12a);
                    if (uVar15 != 0) {
                      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar16 + -2) == lVar20) {
                          puVar10 = (undefined8 *)
                                    (lVar12 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                          goto code_r0x01e71880;
                        }
                        piVar16 = piVar16 + 4;
                        uVar15 = uVar15 - 1;
                      } while (uVar15 != 0);
                    }
                    puVar10 = (undefined8 *)func_0x00fac1f0(plVar7,lVar20,(ulong)uVar2);
code_r0x01e71880:
                    pcVar18 = (code *)*puVar10;
                    puVar10 = (undefined8 *)puVar10[1];
                  }
                  else {
                    if (iVar5 == 0) {
                      uVar9 = *(undefined8 *)
                               (*plVar7 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                    }
                    else {
                      lVar12 = *plVar7;
                      uVar15 = (ulong)*(ushort *)(lVar12 + 0x12a);
                      if (uVar15 != 0) {
                        piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == *(long *)(lVar20 + 0x18)) {
                            lVar12 = lVar12 + (long)(int)(*piVar16 +
                                                         (uint)*(ushort *)(lVar20 + 0x48)) * 0x10 +
                                     0x138;
                            goto code_r0x01e71858;
                          }
                          piVar16 = piVar16 + 4;
                          uVar15 = uVar15 - 1;
                        } while (uVar15 != 0);
                      }
                      lVar12 = func_0x00fac1f0(plVar7);
code_r0x01e71858:
                      uVar9 = *(undefined8 *)(lVar12 + 8);
                    }
                    puVar10 = (undefined8 *)func_0x00f78acc(uVar9,lVar20);
                    pcVar18 = (code *)*puVar10;
                  }
                  (*pcVar18)(plVar7,0,uVar8,puVar10);
                }
              }
              else {
                if (bVar3) goto code_r0x01e7173c;
code_r0x01e7162c:
                (*pcVar18)(plVar1,plVar7,0,uVar8,lVar20);
              }
code_r0x01e71750:
              lVar6 = lVar6 + 1;
              if (lVar6 == lVar17) {
                return;
              }
            } while( true );
          }
        }
      }
    }
    lVar6 = func_0x00f78af4();
    plStack_98 = plVar7;
    if ((bRam0000000003eb5190 & 1) == 0) {
      func_0x00f78a20(0x3d405b0);
      bRam0000000003eb5190 = 1;
    }
    if (lVar6 != 0) {
      return;
    }
    auVar22 = func_0x00f78af4(0,uRam0000000003d405b0);
    lVar6 = auVar22._0_8_;
    *(undefined8 *)(lVar6 + 0x10) = *param_3;
    *(long *)(lVar6 + 0x20) = auVar22._8_8_;
    *(undefined8 **)(lVar6 + 0x28) = param_3;
    return;
  }
  plVar11 = *(long **)(lVar6 + 0x10);
  lStack_58 = lVar17;
  lVar6 = *(long *)(lVar17 + 0x68);
  if (lVar6 == 0) {
    plVar7 = &lStack_58;
    lVar20 = 1;
  }
  else {
    lVar20 = *(long *)(lVar6 + 0x18);
    if (lVar20 == 0) {
      return;
    }
    plVar7 = (long *)(lVar6 + 0x20);
  }
  lVar6 = 0;
  do {
    lVar12 = plVar7[lVar6];
    pcVar18 = *(code **)(lVar12 + 0x10);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12);
    }
    iVar4 = func_0x00f78a4c(lVar12);
    bVar3 = *(char *)(lVar12 + 0x4a) == '\x01';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
          (*pcVar18)(plVar11,lVar12);
        }
        else {
          if (((*(short *)(lVar12 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar17 + 0x18) == 0)) goto code_r0x01e47fc0;
          iVar4 = func_0x00f78a44(lVar12);
          iVar5 = func_0x00f78ec0(lVar12);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar12 + 0x48);
            if (iVar5 == 0) {
              lVar12 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,plVar11,*(undefined8 *)(lVar12 + 0x140));
              goto code_r0x01e480d4;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == lVar12) {
                  puVar10 = (undefined8 *)
                            (lVar13 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e48260;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            puVar10 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar2);
code_r0x01e48260:
            pcVar18 = (code *)*puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
          else {
            if (iVar5 == 0) {
              uVar9 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar15 != 0) {
                piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e48238;
                  }
                  piVar16 = piVar16 + 4;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
              uVar9 = *(undefined8 *)(lVar13 + 8);
            }
            puVar10 = (undefined8 *)func_0x00f78acc(uVar9,lVar12);
            pcVar18 = (code *)*puVar10;
          }
          (*pcVar18)(plVar1,plVar11,puVar10);
        }
      }
      else {
        if ((*(short *)(lVar12 + 0x48) == -1) || (*(long *)(lVar17 + 0x18) == 0))
        goto code_r0x01e480c8;
        iVar4 = func_0x00f78a44(lVar12);
        iVar5 = func_0x00f78ec0(lVar12);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar12 + 0x48);
          if (iVar5 == 0) {
            lVar12 = *plVar11 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar12 + 0x138))(plVar11,*(undefined8 *)(lVar12 + 0x140));
            goto code_r0x01e480d4;
          }
          lVar12 = func_0x00f78a48(lVar12);
          lVar13 = *plVar11;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar12) {
                puVar10 = (undefined8 *)
                          (lVar13 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x01e481fc;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)func_0x00fac1f0(plVar11,lVar12,(ulong)uVar2);
code_r0x01e481fc:
          pcVar18 = (code *)*puVar10;
          puVar10 = (undefined8 *)puVar10[1];
        }
        else {
          if (iVar5 == 0) {
            uVar9 = *(undefined8 *)(*plVar11 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar11;
            uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar12 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e481d4;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar11);
code_r0x01e481d4:
            uVar9 = *(undefined8 *)(lVar13 + 8);
          }
          puVar10 = (undefined8 *)func_0x00f78acc(uVar9,lVar12);
          pcVar18 = (code *)*puVar10;
        }
        (*pcVar18)(plVar11,puVar10);
      }
    }
    else {
      if (bVar3) goto code_r0x01e480c8;
code_r0x01e47fc0:
      (*pcVar18)(plVar1,plVar11,lVar12);
    }
code_r0x01e480d4:
    lVar6 = lVar6 + 1;
    if (lVar6 == lVar20) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1596d70 | Atlas.Contexts.FrontendContextPostSingleplayerState.ExitSelected
// ============================================================

void Atlas_Contexts_FrontendContextPostSingleplayerState__ExitSelected
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  code *pcVar18;
  long lVar19;
  long **pplVar20;
  undefined1 auVar21 [16];
  long *plStack_68;
  
  if ((bRam0000000003eb518f & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194e8);
    func_0x00f78a20(0x3d27650);
    func_0x00f78a20(0x3d405b8);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb518f = 1;
  }
  uVar15 = /*Atlas.Contexts.FrontEndContextSingleplayerState_var*/ uRam0000000003d194e8;
  plVar14 = *(long **)(param_1 + 0x78);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar6 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
  lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405b8);
  if (lVar7 != 0) {
    uVar15 = *(undefined8 *)(lVar7 + 0x18);
    lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405b8);
    if (lVar7 != 0) {
      puVar16 = *(undefined8 **)(lVar7 + 0x28);
      lVar7 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d405b8);
      if (lVar7 != 0) {
        uVar17 = *(undefined8 *)(lVar7 + 0x10);
        uVar8 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextSingleplayerState.SingleplayerTransitionData_TypeInfo*/ uRam0000000003d27650);
        Atlas_Contexts_FrontEndContextSingleplayerState_SingleplayerTransitionData___ctor
                  (uVar8,uVar15,puVar16,0,0,uVar17,0);
        param_3 = puVar16;
        if (plVar14 != (long *)0x0) {
          plStack_68 = plVar14;
          lVar7 = plVar14[0xd];
          if (lVar7 == 0) {
            pplVar20 = &plStack_68;
            lVar19 = 1;
          }
          else {
            lVar19 = *(long *)(lVar7 + 0x18);
            if (lVar19 == 0) {
              return;
            }
            pplVar20 = (long **)(lVar7 + 0x20);
          }
          lVar7 = 0;
          do {
            plVar10 = pplVar20[lVar7];
            pcVar18 = (code *)plVar10[2];
            plVar1 = (long *)plVar10[4];
            lVar9 = plVar10[5];
            if (*(short *)(lVar9 + 0x48) == -1) {
              func_0x00f78ad8(lVar9);
            }
            iVar4 = func_0x00f78a4c(lVar9);
            bVar3 = *(char *)(lVar9 + 0x4a) == '\x03';
            if (iVar4 == 0) {
              if (bVar3) {
                if (plVar1 == (long *)0x0) {
code_r0x01e7173c:
                  (*pcVar18)(plVar6,0,uVar8,lVar9);
                }
                else {
                  if (((*(short *)(lVar9 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0))
                     || (plVar14[3] == 0)) goto code_r0x01e7162c;
                  iVar4 = func_0x00f78a44(lVar9);
                  iVar5 = func_0x00f78ec0(lVar9);
                  if (iVar4 == 0) {
                    uVar2 = *(ushort *)(lVar9 + 0x48);
                    if (iVar5 == 0) {
                      lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
                      (**(code **)(lVar9 + 0x138))
                                (plVar1,plVar6,0,uVar8,*(undefined8 *)(lVar9 + 0x140));
                      goto code_r0x01e71750;
                    }
                    lVar9 = func_0x00f78a48(lVar9);
                    lVar11 = *plVar1;
                    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                    if (uVar12 != 0) {
                      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar13 + -2) == lVar9) {
                          puVar16 = (undefined8 *)
                                    (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                          goto code_r0x01e718f4;
                        }
                        piVar13 = piVar13 + 4;
                        uVar12 = uVar12 - 1;
                      } while (uVar12 != 0);
                    }
                    puVar16 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x01e718f4:
                    pcVar18 = (code *)*puVar16;
                    puVar16 = (undefined8 *)puVar16[1];
                  }
                  else {
                    if (iVar5 == 0) {
                      uVar15 = *(undefined8 *)
                                (*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
                    }
                    else {
                      lVar11 = *plVar1;
                      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                      if (uVar12 != 0) {
                        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar13 + -2) == *(long *)(lVar9 + 0x18)) {
                            lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar9 + 0x48)
                                                         ) * 0x10 + 0x138;
                            goto code_r0x01e718cc;
                          }
                          piVar13 = piVar13 + 4;
                          uVar12 = uVar12 - 1;
                        } while (uVar12 != 0);
                      }
                      lVar11 = func_0x00fac1f0(plVar1);
code_r0x01e718cc:
                      uVar15 = *(undefined8 *)(lVar11 + 8);
                    }
                    puVar16 = (undefined8 *)func_0x00f78acc(uVar15,lVar9);
                    pcVar18 = (code *)*puVar16;
                  }
                  (*pcVar18)(plVar1,plVar6,0,uVar8,puVar16);
                }
              }
              else {
                if ((*(short *)(lVar9 + 0x48) == -1) || (plVar14[3] == 0)) goto code_r0x01e7173c;
                iVar4 = func_0x00f78a44(lVar9);
                iVar5 = func_0x00f78ec0(lVar9);
                if (iVar4 == 0) {
                  uVar2 = *(ushort *)(lVar9 + 0x48);
                  if (iVar5 == 0) {
                    lVar9 = *plVar6 + (ulong)uVar2 * 0x10;
                    (**(code **)(lVar9 + 0x138))(plVar6,0,uVar8,*(undefined8 *)(lVar9 + 0x140));
                    goto code_r0x01e71750;
                  }
                  lVar9 = func_0x00f78a48(lVar9);
                  lVar11 = *plVar6;
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                  if (uVar12 != 0) {
                    piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == lVar9) {
                        puVar16 = (undefined8 *)
                                  (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                        goto code_r0x01e71880;
                      }
                      piVar13 = piVar13 + 4;
                      uVar12 = uVar12 - 1;
                    } while (uVar12 != 0);
                  }
                  puVar16 = (undefined8 *)func_0x00fac1f0(plVar6,lVar9,(ulong)uVar2);
code_r0x01e71880:
                  pcVar18 = (code *)*puVar16;
                  puVar16 = (undefined8 *)puVar16[1];
                }
                else {
                  if (iVar5 == 0) {
                    uVar15 = *(undefined8 *)
                              (*plVar6 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar11 = *plVar6;
                    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
                    if (uVar12 != 0) {
                      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar13 + -2) == *(long *)(lVar9 + 0x18)) {
                          lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar9 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e71858;
                        }
                        piVar13 = piVar13 + 4;
                        uVar12 = uVar12 - 1;
                      } while (uVar12 != 0);
                    }
                    lVar11 = func_0x00fac1f0(plVar6);
code_r0x01e71858:
                    uVar15 = *(undefined8 *)(lVar11 + 8);
                  }
                  puVar16 = (undefined8 *)func_0x00f78acc(uVar15,lVar9);
                  pcVar18 = (code *)*puVar16;
                }
                (*pcVar18)(plVar6,0,uVar8,puVar16);
              }
            }
            else {
              if (bVar3) goto code_r0x01e7173c;
code_r0x01e7162c:
              (*pcVar18)(plVar1,plVar6,0,uVar8,lVar9);
            }
code_r0x01e71750:
            lVar7 = lVar7 + 1;
            if (lVar7 == lVar19) {
              return;
            }
          } while( true );
        }
      }
    }
  }
  lVar7 = func_0x00f78af4();
  plStack_68 = plVar6;
  if ((bRam0000000003eb5190 & 1) == 0) {
    func_0x00f78a20(0x3d405b0);
    bRam0000000003eb5190 = 1;
  }
  if (lVar7 != 0) {
    return;
  }
  auVar21 = func_0x00f78af4(0,uRam0000000003d405b0);
  lVar7 = auVar21._0_8_;
  *(undefined8 *)(lVar7 + 0x10) = *param_3;
  *(long *)(lVar7 + 0x20) = auVar21._8_8_;
  *(undefined8 **)(lVar7 + 0x28) = param_3;
  return;
}



// ============================================================
// RVA: 0x1596ec4 | Atlas.Contexts.FrontendContextPostSingleplayerState..ctor
// ============================================================

void Atlas_Contexts_FrontendContextPostSingleplayerState___ctor
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb5190 & 1) == 0) {
    func_0x00f78a20(0x3d405b0);
    bRam0000000003eb5190 = 1;
  }
  if (param_1 != 0) {
    return;
  }
  auVar2 = func_0x00f78af4(0,uRam0000000003d405b0);
  lVar1 = auVar2._0_8_;
  *(undefined8 *)(lVar1 + 0x10) = *param_3;
  *(long *)(lVar1 + 0x20) = auVar2._8_8_;
  *(undefined8 **)(lVar1 + 0x28) = param_3;
  return;
}



