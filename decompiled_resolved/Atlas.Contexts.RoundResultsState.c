// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.RoundResultsState

// ============================================================
// RVA: 0x14e53d8 | Atlas.Contexts.RoundResultsState.add_RequestState
// ============================================================

void Atlas_Contexts_RoundResultsState__add_RequestState(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4c02 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb4c02 = 1;
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
  if ((bRam0000000003eb4c03 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb4c03 = 1;
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
  lVar3 = auVar7._8_8_;
  lVar6 = auVar7._0_8_;
  if ((bRam0000000003eb4c04 & 1) == 0) {
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d550c8);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d551b0);
    func_0x00f78a20(0x3d551d0);
    func_0x00f78a20(0x3d28a00);
    func_0x00f78a20(0x3d40650);
    bRam0000000003eb4c04 = 1;
  }
  if (lVar3 != 0) {
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d550b8);
    *(undefined8 *)(lVar6 + 0x88) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d551b0);
    *(undefined8 *)(lVar6 + 0x90) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d55150);
    *(undefined8 *)(lVar6 + 0x80) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d55090);
    *(undefined8 *)(lVar6 + 0x98) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d551d0);
    *(undefined8 *)(lVar6 + 0xa0) = uVar5;
    uVar5 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d550c8);
    *(undefined8 *)(lVar6 + 0xa8) = uVar5;
    uVar5 = func_0x00f78aec(/*Atlas.Contexts.RoundResultsState.RoundResultsStateData_TypeInfo*/ uRam0000000003d28a00);
    /*Atlas.Contexts.RoundResultsState.RoundResultsStateData$$.ctor*/ func_0x01565fdc(uVar5,0);
    *(undefined8 *)(lVar6 + 0x68) = uVar5;
    lVar6 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar6,uRam0000000003d40650);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
      *(undefined4 *)(*(long *)(lVar6 + 0x10) + 0x10) = 2;
      return;
    }
  }
  lVar6 = func_0x00f78af4();
  *(undefined8 *)(lVar6 + 0xa0) = 0;
  *(undefined8 *)(lVar6 + 0x88) = 0;
  *(undefined8 *)(lVar6 + 0x80) = 0;
  *(undefined8 *)(lVar6 + 0x98) = 0;
  *(undefined8 *)(lVar6 + 0x90) = 0;
  return;
}



// ============================================================
// RVA: 0x14e5478 | Atlas.Contexts.RoundResultsState.remove_RequestState
// ============================================================

void Atlas_Contexts_RoundResultsState__remove_RequestState(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4c03 & 1) == 0) {
    func_0x00f78a20(0x3d1b6e0);
    bRam0000000003eb4c03 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x78);
  while ((plVar2 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar5,param_2,0), plVar2 == (long *)0x0 ||
         (*plVar2 == /*System.Action<Type, bool, TransitionData>_TypeInfo*/ lRam0000000003d1b6e0))) {
    lVar3 = func_0x00ff0f44((long *)(param_1 + 0x78),plVar2,lVar5);
    bVar1 = lVar5 == lVar3;
    lVar5 = lVar3;
    if (bVar1) {
      return;
    }
  }
  auVar6 = func_0x00f78e5c(plVar2);
  lVar3 = auVar6._8_8_;
  lVar5 = auVar6._0_8_;
  if ((bRam0000000003eb4c04 & 1) == 0) {
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d550c8);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d551b0);
    func_0x00f78a20(0x3d551d0);
    func_0x00f78a20(0x3d28a00);
    func_0x00f78a20(0x3d40650);
    bRam0000000003eb4c04 = 1;
  }
  if (lVar3 != 0) {
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d550b8);
    *(undefined8 *)(lVar5 + 0x88) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d551b0);
    *(undefined8 *)(lVar5 + 0x90) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d55150);
    *(undefined8 *)(lVar5 + 0x80) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d55090);
    *(undefined8 *)(lVar5 + 0x98) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d551d0);
    *(undefined8 *)(lVar5 + 0xa0) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar3,uRam0000000003d550c8);
    *(undefined8 *)(lVar5 + 0xa8) = uVar4;
    uVar4 = func_0x00f78aec(/*Atlas.Contexts.RoundResultsState.RoundResultsStateData_TypeInfo*/ uRam0000000003d28a00);
    /*Atlas.Contexts.RoundResultsState.RoundResultsStateData$$.ctor*/ func_0x01565fdc(uVar4,0);
    *(undefined8 *)(lVar5 + 0x68) = uVar4;
    lVar5 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar5,uRam0000000003d40650);
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
      *(undefined4 *)(*(long *)(lVar5 + 0x10) + 0x10) = 2;
      return;
    }
  }
  lVar5 = func_0x00f78af4();
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0x88) = 0;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(undefined8 *)(lVar5 + 0x98) = 0;
  *(undefined8 *)(lVar5 + 0x90) = 0;
  return;
}



// ============================================================
// RVA: 0x14e5518 | Atlas.Contexts.RoundResultsState.Init
// ============================================================

void Atlas_Contexts_RoundResultsState__Init(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000003eb4c04 & 1) == 0) {
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d550c8);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d551b0);
    func_0x00f78a20(0x3d551d0);
    func_0x00f78a20(0x3d28a00);
    func_0x00f78a20(0x3d40650);
    bRam0000000003eb4c04 = 1;
  }
  if (param_2 != 0) {
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d550b8);
    *(undefined8 *)(param_1 + 0x88) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d551b0);
    *(undefined8 *)(param_1 + 0x90) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55150);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d55090);
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d551d0);
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_2,uRam0000000003d550c8);
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
    uVar1 = func_0x00f78aec(/*Atlas.Contexts.RoundResultsState.RoundResultsStateData_TypeInfo*/ uRam0000000003d28a00);
    /*Atlas.Contexts.RoundResultsState.RoundResultsStateData$$.ctor*/ func_0x01565fdc(uVar1,0);
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    lVar2 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40650);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
      *(undefined4 *)(*(long *)(lVar2 + 0x10) + 0x10) = 2;
      return;
    }
  }
  lVar2 = func_0x00f78af4();
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  return;
}



// ============================================================
// RVA: 0x14e56ac | Atlas.Contexts.RoundResultsState.OnDeInit
// ============================================================

void Atlas_Contexts_RoundResultsState__OnDeInit(long param_1)

{
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}



// ============================================================
// RVA: 0x14e56bc | Atlas.Contexts.RoundResultsState.OnEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x014e57ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e5824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01529ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01529d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a1bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152ac40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152ad5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e5974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165e67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165e6e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e5bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e5d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e5e30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e6620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e67bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e6854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e67c0) */
/* WARNING: Removing unreachable block (ram,0x014e67d0) */
/* WARNING: Removing unreachable block (ram,0x014e681c) */
/* WARNING: Removing unreachable block (ram,0x014e6824) */
/* WARNING: Removing unreachable block (ram,0x014e6828) */
/* WARNING: Removing unreachable block (ram,0x014e6838) */
/* WARNING: Removing unreachable block (ram,0x014e6624) */
/* WARNING: Removing unreachable block (ram,0x014e66f4) */
/* WARNING: Removing unreachable block (ram,0x014e6708) */
/* WARNING: Removing unreachable block (ram,0x014e670c) */
/* WARNING: Removing unreachable block (ram,0x014e6628) */
/* WARNING: Removing unreachable block (ram,0x014e6654) */
/* WARNING: Removing unreachable block (ram,0x014e6658) */
/* WARNING: Removing unreachable block (ram,0x014e6678) */
/* WARNING: Removing unreachable block (ram,0x014e66ac) */
/* WARNING: Removing unreachable block (ram,0x014e66b4) */
/* WARNING: Removing unreachable block (ram,0x014e66b8) */
/* WARNING: Removing unreachable block (ram,0x014e6728) */
/* WARNING: Removing unreachable block (ram,0x014e6758) */
/* WARNING: Removing unreachable block (ram,0x014e679c) */
/* WARNING: Removing unreachable block (ram,0x014e6870) */
/* WARNING: Removing unreachable block (ram,0x014e689c) */
/* WARNING: Removing unreachable block (ram,0x014e68b0) */
/* WARNING: Removing unreachable block (ram,0x02866c28) */
/* WARNING: Removing unreachable block (ram,0x02866c34) */
/* WARNING: Removing unreachable block (ram,0x02866c2c) */
/* WARNING: Removing unreachable block (ram,0x02b95200) */
/* WARNING: Removing unreachable block (ram,0x014e67a4) */
/* WARNING: Removing unreachable block (ram,0x014e66c8) */
/* WARNING: Removing unreachable block (ram,0x01e7159c) */
/* WARNING: Removing unreachable block (ram,0x01e715e8) */
/* WARNING: Removing unreachable block (ram,0x01e715d8) */
/* WARNING: Removing unreachable block (ram,0x01e715e0) */
/* WARNING: Removing unreachable block (ram,0x01e715f0) */
/* WARNING: Removing unreachable block (ram,0x01e715f4) */
/* WARNING: Removing unreachable block (ram,0x01e7160c) */
/* WARNING: Removing unreachable block (ram,0x01e71614) */
/* WARNING: Removing unreachable block (ram,0x01e71648) */
/* WARNING: Removing unreachable block (ram,0x01e716cc) */
/* WARNING: Removing unreachable block (ram,0x01e716d8) */
/* WARNING: Removing unreachable block (ram,0x01e716e0) */
/* WARNING: Removing unreachable block (ram,0x01e71760) */
/* WARNING: Removing unreachable block (ram,0x01e717c4) */
/* WARNING: Removing unreachable block (ram,0x01e71768) */
/* WARNING: Removing unreachable block (ram,0x01e71780) */
/* WARNING: Removing unreachable block (ram,0x01e71788) */
/* WARNING: Removing unreachable block (ram,0x01e71870) */
/* WARNING: Removing unreachable block (ram,0x01e71794) */
/* WARNING: Removing unreachable block (ram,0x01e717a0) */
/* WARNING: Removing unreachable block (ram,0x01e71880) */
/* WARNING: Removing unreachable block (ram,0x01e716f8) */
/* WARNING: Removing unreachable block (ram,0x01e717b0) */
/* WARNING: Removing unreachable block (ram,0x01e716fc) */
/* WARNING: Removing unreachable block (ram,0x01e71710) */
/* WARNING: Removing unreachable block (ram,0x01e71718) */
/* WARNING: Removing unreachable block (ram,0x01e71848) */
/* WARNING: Removing unreachable block (ram,0x01e71724) */
/* WARNING: Removing unreachable block (ram,0x01e71730) */
/* WARNING: Removing unreachable block (ram,0x01e71858) */
/* WARNING: Removing unreachable block (ram,0x01e7185c) */
/* WARNING: Removing unreachable block (ram,0x01e71884) */
/* WARNING: Removing unreachable block (ram,0x01e7164c) */
/* WARNING: Removing unreachable block (ram,0x01e71650) */
/* WARNING: Removing unreachable block (ram,0x01e7165c) */
/* WARNING: Removing unreachable block (ram,0x01e71668) */
/* WARNING: Removing unreachable block (ram,0x01e71670) */
/* WARNING: Removing unreachable block (ram,0x01e717e4) */
/* WARNING: Removing unreachable block (ram,0x01e71898) */
/* WARNING: Removing unreachable block (ram,0x01e717ec) */
/* WARNING: Removing unreachable block (ram,0x01e71804) */
/* WARNING: Removing unreachable block (ram,0x01e7180c) */
/* WARNING: Removing unreachable block (ram,0x01e718e4) */
/* WARNING: Removing unreachable block (ram,0x01e71818) */
/* WARNING: Removing unreachable block (ram,0x01e71824) */
/* WARNING: Removing unreachable block (ram,0x01e718f4) */
/* WARNING: Removing unreachable block (ram,0x01e71688) */
/* WARNING: Removing unreachable block (ram,0x01e71834) */
/* WARNING: Removing unreachable block (ram,0x01e7168c) */
/* WARNING: Removing unreachable block (ram,0x01e716a0) */
/* WARNING: Removing unreachable block (ram,0x01e716a8) */
/* WARNING: Removing unreachable block (ram,0x01e718bc) */
/* WARNING: Removing unreachable block (ram,0x01e716b4) */
/* WARNING: Removing unreachable block (ram,0x01e716c0) */
/* WARNING: Removing unreachable block (ram,0x01e718cc) */
/* WARNING: Removing unreachable block (ram,0x01e718d0) */
/* WARNING: Removing unreachable block (ram,0x01e718f8) */
/* WARNING: Removing unreachable block (ram,0x01e71628) */
/* WARNING: Removing unreachable block (ram,0x01e7173c) */
/* WARNING: Removing unreachable block (ram,0x01e7162c) */
/* WARNING: Removing unreachable block (ram,0x01e71750) */
/* WARNING: Removing unreachable block (ram,0x01e7175c) */
/* WARNING: Removing unreachable block (ram,0x01e71910) */
/* WARNING: Removing unreachable block (ram,0x014e5e34) */
/* WARNING: Removing unreachable block (ram,0x014e5e3c) */
/* WARNING: Removing unreachable block (ram,0x0163d6f8) */
/* WARNING: Removing unreachable block (ram,0x0163d700) */
/* WARNING: Removing unreachable block (ram,0x0163d70c) */
/* WARNING: Removing unreachable block (ram,0x014e5bd8) */
/* WARNING: Removing unreachable block (ram,0x014e5bdc) */
/* WARNING: Removing unreachable block (ram,0x014e5be4) */
/* WARNING: Removing unreachable block (ram,0x014e5bec) */
/* WARNING: Removing unreachable block (ram,0x014e5bf4) */
/* WARNING: Removing unreachable block (ram,0x014e5c40) */
/* WARNING: Removing unreachable block (ram,0x014e5c50) */
/* WARNING: Removing unreachable block (ram,0x014e5c54) */
/* WARNING: Removing unreachable block (ram,0x0165e6ec) */
/* WARNING: Removing unreachable block (ram,0x0165e6f4) */
/* WARNING: Removing unreachable block (ram,0x0165e704) */
/* WARNING: Removing unreachable block (ram,0x0165e70c) */
/* WARNING: Removing unreachable block (ram,0x0165e710) */
/* WARNING: Removing unreachable block (ram,0x0165e760) */
/* WARNING: Removing unreachable block (ram,0x0165e784) */
/* WARNING: Removing unreachable block (ram,0x0165e78c) */
/* WARNING: Removing unreachable block (ram,0x0165e7a0) */
/* WARNING: Removing unreachable block (ram,0x0165e680) */
/* WARNING: Removing unreachable block (ram,0x0165e688) */
/* WARNING: Removing unreachable block (ram,0x0165e690) */
/* WARNING: Removing unreachable block (ram,0x0165e7d0) */
/* WARNING: Removing unreachable block (ram,0x0165e6a8) */
/* WARNING: Removing unreachable block (ram,0x0165e7ac) */
/* WARNING: Removing unreachable block (ram,0x0165e6b4) */
/* WARNING: Removing unreachable block (ram,0x0165e6d0) */
/* WARNING: Removing unreachable block (ram,0x014e5978) */
/* WARNING: Removing unreachable block (ram,0x0152ad60) */
/* WARNING: Removing unreachable block (ram,0x0152af90) */
/* WARNING: Removing unreachable block (ram,0x0152ad64) */
/* WARNING: Removing unreachable block (ram,0x0152ad70) */
/* WARNING: Removing unreachable block (ram,0x0152ad74) */
/* WARNING: Removing unreachable block (ram,0x0152ad7c) */
/* WARNING: Removing unreachable block (ram,0x0152ad84) */
/* WARNING: Removing unreachable block (ram,0x0152af50) */
/* WARNING: Removing unreachable block (ram,0x0152ad94) */
/* WARNING: Removing unreachable block (ram,0x0152adbc) */
/* WARNING: Removing unreachable block (ram,0x0152ada8) */
/* WARNING: Removing unreachable block (ram,0x0152adb8) */
/* WARNING: Removing unreachable block (ram,0x0152ac44) */
/* WARNING: Removing unreachable block (ram,0x0152af80) */
/* WARNING: Removing unreachable block (ram,0x0152ac48) */
/* WARNING: Removing unreachable block (ram,0x0152ac54) */
/* WARNING: Removing unreachable block (ram,0x0152ac58) */
/* WARNING: Removing unreachable block (ram,0x0152ac60) */
/* WARNING: Removing unreachable block (ram,0x0152ac68) */
/* WARNING: Removing unreachable block (ram,0x0152af48) */
/* WARNING: Removing unreachable block (ram,0x0152ac78) */
/* WARNING: Removing unreachable block (ram,0x0152aca0) */
/* WARNING: Removing unreachable block (ram,0x0152ac8c) */
/* WARNING: Removing unreachable block (ram,0x0152ac9c) */
/* WARNING: Removing unreachable block (ram,0x0152a5e8) */
/* WARNING: Removing unreachable block (ram,0x0152a600) */
/* WARNING: Removing unreachable block (ram,0x0152a614) */
/* WARNING: Removing unreachable block (ram,0x0152a624) */
/* WARNING: Removing unreachable block (ram,0x0152a62c) */
/* WARNING: Removing unreachable block (ram,0x0152a63c) */
/* WARNING: Removing unreachable block (ram,0x0152a650) */
/* WARNING: Removing unreachable block (ram,0x0152a654) */
/* WARNING: Removing unreachable block (ram,0x0152a65c) */
/* WARNING: Removing unreachable block (ram,0x0152a670) */
/* WARNING: Removing unreachable block (ram,0x0152a680) */
/* WARNING: Removing unreachable block (ram,0x0152a684) */
/* WARNING: Removing unreachable block (ram,0x0152a68c) */
/* WARNING: Removing unreachable block (ram,0x0152a69c) */
/* WARNING: Removing unreachable block (ram,0x0152a6b0) */
/* WARNING: Removing unreachable block (ram,0x0152a6b4) */
/* WARNING: Removing unreachable block (ram,0x0152a6bc) */
/* WARNING: Removing unreachable block (ram,0x0152a6d0) */
/* WARNING: Removing unreachable block (ram,0x0152a6e0) */
/* WARNING: Removing unreachable block (ram,0x0152a6e4) */
/* WARNING: Removing unreachable block (ram,0x0152a6ec) */
/* WARNING: Removing unreachable block (ram,0x0152a708) */
/* WARNING: Removing unreachable block (ram,0x0152a71c) */
/* WARNING: Removing unreachable block (ram,0x0152a728) */
/* WARNING: Removing unreachable block (ram,0x0152a73c) */
/* WARNING: Removing unreachable block (ram,0x0152a74c) */
/* WARNING: Removing unreachable block (ram,0x0152a750) */
/* WARNING: Removing unreachable block (ram,0x0152a758) */
/* WARNING: Removing unreachable block (ram,0x0152a774) */
/* WARNING: Removing unreachable block (ram,0x0152a788) */
/* WARNING: Removing unreachable block (ram,0x0152a794) */
/* WARNING: Removing unreachable block (ram,0x0152a7a8) */
/* WARNING: Removing unreachable block (ram,0x0152a7b8) */
/* WARNING: Removing unreachable block (ram,0x0152a7bc) */
/* WARNING: Removing unreachable block (ram,0x0152a7c4) */
/* WARNING: Removing unreachable block (ram,0x0152a7e0) */
/* WARNING: Removing unreachable block (ram,0x0152a7f4) */
/* WARNING: Removing unreachable block (ram,0x0152a800) */
/* WARNING: Removing unreachable block (ram,0x0152a814) */
/* WARNING: Removing unreachable block (ram,0x0152a824) */
/* WARNING: Removing unreachable block (ram,0x0152a828) */
/* WARNING: Removing unreachable block (ram,0x0152a830) */
/* WARNING: Removing unreachable block (ram,0x0152a84c) */
/* WARNING: Removing unreachable block (ram,0x0152a8d0) */
/* WARNING: Removing unreachable block (ram,0x0152a860) */
/* WARNING: Removing unreachable block (ram,0x0152a86c) */
/* WARNING: Removing unreachable block (ram,0x0152a884) */
/* WARNING: Removing unreachable block (ram,0x0152a88c) */
/* WARNING: Removing unreachable block (ram,0x0152a5bc) */
/* WARNING: Removing unreachable block (ram,0x0152a5c4) */
/* WARNING: Removing unreachable block (ram,0x0152a5dc) */
/* WARNING: Removing unreachable block (ram,0x0152a570) */
/* WARNING: Removing unreachable block (ram,0x0152a578) */
/* WARNING: Removing unreachable block (ram,0x0152a580) */
/* WARNING: Removing unreachable block (ram,0x0152a598) */
/* WARNING: Removing unreachable block (ram,0x0152a5b0) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */
/* WARNING: Removing unreachable block (ram,0x0152a334) */
/* WARNING: Removing unreachable block (ram,0x0152a290) */
/* WARNING: Removing unreachable block (ram,0x0152a298) */
/* WARNING: Removing unreachable block (ram,0x0152a2c0) */
/* WARNING: Removing unreachable block (ram,0x0152a2c8) */
/* WARNING: Removing unreachable block (ram,0x0152a2cc) */
/* WARNING: Removing unreachable block (ram,0x0152a1c0) */
/* WARNING: Removing unreachable block (ram,0x0152a1dc) */
/* WARNING: Removing unreachable block (ram,0x0152a1e4) */
/* WARNING: Removing unreachable block (ram,0x0152a1f0) */
/* WARNING: Removing unreachable block (ram,0x0152a22c) */
/* WARNING: Removing unreachable block (ram,0x0152a260) */
/* WARNING: Removing unreachable block (ram,0x0152a274) */
/* WARNING: Removing unreachable block (ram,0x0152a300) */
/* WARNING: Removing unreachable block (ram,0x0152a35c) */
/* WARNING: Removing unreachable block (ram,0x0152a3a0) */
/* WARNING: Removing unreachable block (ram,0x0152a3c0) */
/* WARNING: Removing unreachable block (ram,0x0152a3fc) */
/* WARNING: Removing unreachable block (ram,0x0152a43c) */
/* WARNING: Removing unreachable block (ram,0x0152a440) */
/* WARNING: Removing unreachable block (ram,0x0152a46c) */
/* WARNING: Removing unreachable block (ram,0x0152a4d4) */
/* WARNING: Removing unreachable block (ram,0x0152a4e4) */
/* WARNING: Removing unreachable block (ram,0x0152a8ac) */
/* WARNING: Removing unreachable block (ram,0x0152a4f0) */
/* WARNING: Removing unreachable block (ram,0x0152a4f8) */
/* WARNING: Removing unreachable block (ram,0x0152a508) */
/* WARNING: Removing unreachable block (ram,0x0152a528) */
/* WARNING: Removing unreachable block (ram,0x0152a540) */
/* WARNING: Removing unreachable block (ram,0x0152a558) */
/* WARNING: Removing unreachable block (ram,0x0152a8c4) */
/* WARNING: Removing unreachable block (ram,0x0152a8c8) */
/* WARNING: Removing unreachable block (ram,0x0152a8d4) */
/* WARNING: Removing unreachable block (ram,0x0152a560) */
/* WARNING: Removing unreachable block (ram,0x0152a518) */
/* WARNING: Removing unreachable block (ram,0x0152a8dc) */
/* WARNING: Removing unreachable block (ram,0x0152a914) */
/* WARNING: Removing unreachable block (ram,0x0152aa90) */
/* WARNING: Removing unreachable block (ram,0x0152aab8) */
/* WARNING: Removing unreachable block (ram,0x0152aaf8) */
/* WARNING: Removing unreachable block (ram,0x0152ab00) */
/* WARNING: Removing unreachable block (ram,0x0152ab0c) */
/* WARNING: Removing unreachable block (ram,0x0152ab40) */
/* WARNING: Removing unreachable block (ram,0x0152ab48) */
/* WARNING: Removing unreachable block (ram,0x0152ab54) */
/* WARNING: Removing unreachable block (ram,0x0152aba4) */
/* WARNING: Removing unreachable block (ram,0x0152acd4) */
/* WARNING: Removing unreachable block (ram,0x0152acfc) */
/* WARNING: Removing unreachable block (ram,0x0152ad1c) */
/* WARNING: Removing unreachable block (ram,0x0152adf0) */
/* WARNING: Removing unreachable block (ram,0x0152ae20) */
/* WARNING: Removing unreachable block (ram,0x0152ae30) */
/* WARNING: Removing unreachable block (ram,0x0152ae34) */
/* WARNING: Removing unreachable block (ram,0x0152ae50) */
/* WARNING: Removing unreachable block (ram,0x0152ae58) */
/* WARNING: Removing unreachable block (ram,0x0152ae5c) */
/* WARNING: Removing unreachable block (ram,0x0152aeb0) */
/* WARNING: Removing unreachable block (ram,0x0152aeec) */
/* WARNING: Removing unreachable block (ram,0x0152af24) */
/* WARNING: Removing unreachable block (ram,0x0152aec0) */
/* WARNING: Removing unreachable block (ram,0x0152af60) */
/* WARNING: Removing unreachable block (ram,0x0152aec8) */
/* WARNING: Removing unreachable block (ram,0x0152ad34) */
/* WARNING: Removing unreachable block (ram,0x0152ad44) */
/* WARNING: Removing unreachable block (ram,0x0152af88) */
/* WARNING: Removing unreachable block (ram,0x0152ad4c) */
/* WARNING: Removing unreachable block (ram,0x0152abb4) */
/* WARNING: Removing unreachable block (ram,0x0152abc4) */
/* WARNING: Removing unreachable block (ram,0x0152af70) */
/* WARNING: Removing unreachable block (ram,0x0152abd0) */
/* WARNING: Removing unreachable block (ram,0x0152abe4) */
/* WARNING: Removing unreachable block (ram,0x0152af98) */
/* WARNING: Removing unreachable block (ram,0x0152abec) */
/* WARNING: Removing unreachable block (ram,0x0152abfc) */
/* WARNING: Removing unreachable block (ram,0x0152af78) */
/* WARNING: Removing unreachable block (ram,0x0152ac04) */
/* WARNING: Removing unreachable block (ram,0x0152af68) */
/* WARNING: Removing unreachable block (ram,0x0152af9c) */
/* WARNING: Removing unreachable block (ram,0x0152ac34) */
/* WARNING: Removing unreachable block (ram,0x0152a404) */
/* WARNING: Removing unreachable block (ram,0x0152a324) */
/* WARNING: Removing unreachable block (ram,0x0152a280) */
/* WARNING: Removing unreachable block (ram,0x0152a1f8) */
/* WARNING: Removing unreachable block (ram,0x0152a218) */
/* WARNING: Removing unreachable block (ram,0x0152a21c) */
/* WARNING: Removing unreachable block (ram,0x01529d04) */
/* WARNING: Removing unreachable block (ram,0x01529d0c) */
/* WARNING: Removing unreachable block (ram,0x01529d38) */
/* WARNING: Removing unreachable block (ram,0x01529d4c) */
/* WARNING: Removing unreachable block (ram,0x01529d5c) */
/* WARNING: Removing unreachable block (ram,0x01529d64) */
/* WARNING: Removing unreachable block (ram,0x01529d80) */
/* WARNING: Removing unreachable block (ram,0x01529d94) */
/* WARNING: Removing unreachable block (ram,0x01529da0) */
/* WARNING: Removing unreachable block (ram,0x01529db4) */
/* WARNING: Removing unreachable block (ram,0x01529dc4) */
/* WARNING: Removing unreachable block (ram,0x01529dc8) */
/* WARNING: Removing unreachable block (ram,0x01529dd0) */
/* WARNING: Removing unreachable block (ram,0x01529dec) */
/* WARNING: Removing unreachable block (ram,0x01529e00) */
/* WARNING: Removing unreachable block (ram,0x01529e0c) */
/* WARNING: Removing unreachable block (ram,0x01529e20) */
/* WARNING: Removing unreachable block (ram,0x01529e30) */
/* WARNING: Removing unreachable block (ram,0x01529e34) */
/* WARNING: Removing unreachable block (ram,0x01529e3c) */
/* WARNING: Removing unreachable block (ram,0x01529e58) */
/* WARNING: Removing unreachable block (ram,0x01529e6c) */
/* WARNING: Removing unreachable block (ram,0x01529e78) */
/* WARNING: Removing unreachable block (ram,0x01529e8c) */
/* WARNING: Removing unreachable block (ram,0x01529e9c) */
/* WARNING: Removing unreachable block (ram,0x01529ea0) */
/* WARNING: Removing unreachable block (ram,0x01529ea8) */
/* WARNING: Removing unreachable block (ram,0x01529ec4) */
/* WARNING: Removing unreachable block (ram,0x01529ed8) */
/* WARNING: Removing unreachable block (ram,0x01529ee4) */
/* WARNING: Removing unreachable block (ram,0x01529ef8) */
/* WARNING: Removing unreachable block (ram,0x01529f08) */
/* WARNING: Removing unreachable block (ram,0x01529f0c) */
/* WARNING: Removing unreachable block (ram,0x01529f14) */
/* WARNING: Removing unreachable block (ram,0x01529f24) */
/* WARNING: Removing unreachable block (ram,0x01529f38) */
/* WARNING: Removing unreachable block (ram,0x01529f3c) */
/* WARNING: Removing unreachable block (ram,0x01529f44) */
/* WARNING: Removing unreachable block (ram,0x01529f58) */
/* WARNING: Removing unreachable block (ram,0x01529f68) */
/* WARNING: Removing unreachable block (ram,0x01529f6c) */
/* WARNING: Removing unreachable block (ram,0x01529f74) */
/* WARNING: Removing unreachable block (ram,0x01529f84) */
/* WARNING: Removing unreachable block (ram,0x01529f98) */
/* WARNING: Removing unreachable block (ram,0x01529f9c) */
/* WARNING: Removing unreachable block (ram,0x01529fa4) */
/* WARNING: Removing unreachable block (ram,0x01529fb8) */
/* WARNING: Removing unreachable block (ram,0x01529fc8) */
/* WARNING: Removing unreachable block (ram,0x01529fcc) */
/* WARNING: Removing unreachable block (ram,0x01529fd4) */
/* WARNING: Removing unreachable block (ram,0x01529fe4) */
/* WARNING: Removing unreachable block (ram,0x01529ff8) */
/* WARNING: Removing unreachable block (ram,0x01529ffc) */
/* WARNING: Removing unreachable block (ram,0x0152a004) */
/* WARNING: Removing unreachable block (ram,0x0152a018) */
/* WARNING: Removing unreachable block (ram,0x0152a028) */
/* WARNING: Removing unreachable block (ram,0x0152a02c) */
/* WARNING: Removing unreachable block (ram,0x0152a034) */
/* WARNING: Removing unreachable block (ram,0x0152a044) */
/* WARNING: Removing unreachable block (ram,0x0152a144) */
/* WARNING: Removing unreachable block (ram,0x0152a058) */
/* WARNING: Removing unreachable block (ram,0x0152a05c) */
/* WARNING: Removing unreachable block (ram,0x0152a064) */
/* WARNING: Removing unreachable block (ram,0x0152a07c) */
/* WARNING: Removing unreachable block (ram,0x0152a094) */
/* WARNING: Removing unreachable block (ram,0x0152a09c) */
/* WARNING: Removing unreachable block (ram,0x0152a0a0) */
/* WARNING: Removing unreachable block (ram,0x0152a0b4) */
/* WARNING: Removing unreachable block (ram,0x0152a0c0) */
/* WARNING: Removing unreachable block (ram,0x0152a0d4) */
/* WARNING: Removing unreachable block (ram,0x0152a0e0) */
/* WARNING: Removing unreachable block (ram,0x0152a0f8) */
/* WARNING: Removing unreachable block (ram,0x0152a104) */
/* WARNING: Removing unreachable block (ram,0x0152a13c) */
/* WARNING: Removing unreachable block (ram,0x0152a148) */
/* WARNING: Removing unreachable block (ram,0x0152a11c) */
/* WARNING: Removing unreachable block (ram,0x01529cd0) */
/* WARNING: Removing unreachable block (ram,0x01529cd8) */
/* WARNING: Removing unreachable block (ram,0x01529cf4) */
/* WARNING: Removing unreachable block (ram,0x014e5828) */
/* WARNING: Removing unreachable block (ram,0x014e5840) */
/* WARNING: Removing unreachable block (ram,0x014e5848) */
/* WARNING: Removing unreachable block (ram,0x014e5850) */
/* WARNING: Removing unreachable block (ram,0x014e5858) */
/* WARNING: Removing unreachable block (ram,0x014e58a4) */
/* WARNING: Removing unreachable block (ram,0x014e58b4) */
/* WARNING: Removing unreachable block (ram,0x014e58c0) */
/* WARNING: Removing unreachable block (ram,0x015295fc) */
/* WARNING: Removing unreachable block (ram,0x014e582c) */
/* WARNING: Removing unreachable block (ram,0x014e57b0) */
/* WARNING: Removing unreachable block (ram,0x014e57b8) */
/* WARNING: Removing unreachable block (ram,0x014e57c0) */
/* WARNING: Removing unreachable block (ram,0x014e57c8) */
/* WARNING: Removing unreachable block (ram,0x014e580c) */
/* WARNING: Removing unreachable block (ram,0x014e581c) */
/* WARNING: Removing unreachable block (ram,0x014e6858) */
/* WARNING: Removing unreachable block (ram,0x01529730) */
/* WARNING: Removing unreachable block (ram,0x01529734) */
/* WARNING: Removing unreachable block (ram,0x0152973c) */
/* WARNING: Removing unreachable block (ram,0x01529788) */
/* WARNING: Removing unreachable block (ram,0x01529798) */
/* WARNING: Removing unreachable block (ram,0x015297a4) */
/* WARNING: Removing unreachable block (ram,0x015297ac) */
/* WARNING: Removing unreachable block (ram,0x015297b4) */
/* WARNING: Removing unreachable block (ram,0x01529800) */
/* WARNING: Removing unreachable block (ram,0x01529810) */
/* WARNING: Removing unreachable block (ram,0x0152981c) */
/* WARNING: Removing unreachable block (ram,0x01529824) */
/* WARNING: Removing unreachable block (ram,0x0152982c) */
/* WARNING: Removing unreachable block (ram,0x01529878) */
/* WARNING: Removing unreachable block (ram,0x01529888) */
/* WARNING: Removing unreachable block (ram,0x01529894) */
/* WARNING: Removing unreachable block (ram,0x0152989c) */
/* WARNING: Removing unreachable block (ram,0x015298a4) */
/* WARNING: Removing unreachable block (ram,0x015298f0) */
/* WARNING: Removing unreachable block (ram,0x01529900) */
/* WARNING: Removing unreachable block (ram,0x0152990c) */
/* WARNING: Removing unreachable block (ram,0x01529914) */
/* WARNING: Removing unreachable block (ram,0x0152991c) */
/* WARNING: Removing unreachable block (ram,0x01529968) */
/* WARNING: Removing unreachable block (ram,0x01529978) */

undefined1 * Atlas_Contexts_RoundResultsState__OnEnter(undefined1 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined1 *puVar12;
  long *plVar13;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  ulong uVar14;
  undefined8 extraout_x1_00;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  uint uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar24;
  undefined *puVar25;
  float extraout_s0;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  lVar22 = 0x3eb4000;
  if ((bRam0000000003eb4c05 & 1) == 0) {
    func_0x00f78a20(0x3d2a238);
    func_0x00f78a20(0x3d1b518);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5c830);
    func_0x00f78a20(0x3d5c838);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d40658);
    bRam0000000003eb4c05 = 1;
  }
  lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d40658);
  if (lVar8 == 0) {
LAB_014e579c:
    *(undefined4 *)(param_1 + 0xbc) = 0x41a00000;
    param_1[0xb8] = 0;
    puVar25 = (undefined *)0x14e57b0;
  }
  else {
    lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40650);
    if (lVar8 != 0) {
      lVar22 = *(long *)(lVar8 + 0x10);
      lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d40658);
      if (((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x10), lVar8 != 0)) && (lVar22 != 0)) {
        uVar20 = *(undefined8 *)(lVar8 + 0x38);
        uVar23 = *(undefined8 *)(lVar8 + 0x30);
        uVar27 = *(undefined8 *)(lVar8 + 0x48);
        uVar26 = *(undefined8 *)(lVar8 + 0x40);
        uVar28 = *(undefined8 *)(lVar8 + 0x50);
        uVar30 = *(undefined8 *)(lVar8 + 0x68);
        uVar29 = *(undefined8 *)(lVar8 + 0x60);
        *(undefined8 *)(lVar22 + 0x58) = *(undefined8 *)(lVar8 + 0x58);
        *(undefined8 *)(lVar22 + 0x50) = uVar28;
        *(undefined8 *)(lVar22 + 0x68) = uVar30;
        *(undefined8 *)(lVar22 + 0x60) = uVar29;
        *(undefined8 *)(lVar22 + 0x38) = uVar20;
        *(undefined8 *)(lVar22 + 0x30) = uVar23;
        *(undefined8 *)(lVar22 + 0x48) = uVar27;
        *(undefined8 *)(lVar22 + 0x40) = uVar26;
        goto LAB_014e579c;
      }
    }
    func_0x00f78af4();
    puVar25 = &Atlas_Contexts_RoundResultsState__ShowRoundResultsScreen;
    param_1 = (undefined1 *)func_0x00f78e5c();
  }
  puVar6 = &uStack_c0;
  puVar2 = &uStack_c0;
  ppuVar24 = &puStack_50;
  lVar8 = 0x3eb4000;
  puStack_50 = &stack0xfffffffffffffff0;
  puStack_48 = puVar25;
  if ((bRam0000000003eb4c07 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d40658);
    func_0x00f78a20(0x3d27390);
    bRam0000000003eb4c07 = 1;
  }
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(long *)(param_1 + 0x90) != 0) {
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(param_1 + 0x90),0,0,0);
    if (*(long *)(param_1 + 0x80) == 0) {
      unaff_x22 = 1;
      lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d40658);
      if ((*(long *)(param_1 + 0x80) != 0) &&
         (lVar17 = *(long *)(*(long *)(param_1 + 0x80) + 0x20), lVar17 != 0)) {
        lVar8 = *(long *)(lVar17 + 0x170);
        unaff_x23 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.EndOfRoundScreen.TransitionData_TypeInfo*/ uRam0000000003d27390);
        /*Atlas.UI.Screens.EndOfRoundScreen.TransitionData$$.ctor*/ func_0x0154bedc(unaff_x23,0);
        lVar22 = lVar16;
        if ((*(long *)(param_1 + 0x98) != 0) && (unaff_x23 != (undefined8 *)0x0)) {
          unaff_x23[2] = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10);
          unaff_x23[4] = param_1;
          *(undefined4 *)(unaff_x23 + 3) = 1;
          if ((*(long *)(param_1 + 0x80) != 0) &&
             (lVar17 = *(long *)(*(long *)(param_1 + 0x80) + 0x20), lVar17 != 0)) {
            unaff_x23[5] = *(undefined8 *)(lVar17 + 400);
            unaff_x23[6] = lVar8;
            puVar15 = (undefined8 *)(lVar17 + 0xd0);
            if (lVar16 != 0) {
              puVar15 = (undefined8 *)(lVar16 + 0x20);
            }
            uStack_b8 = puVar15[1];
            uStack_c0 = *puVar15;
            uStack_a8 = puVar15[3];
            uStack_b0 = puVar15[2];
            unaff_x23[8] = uStack_b8;
            unaff_x23[7] = uStack_c0;
            unaff_x23[10] = uStack_a8;
            unaff_x23[9] = uStack_b0;
            *(undefined8 **)(param_1 + 0xb0) = unaff_x23;
            if (lVar8 != 0) {
              lVar22 = 0x3d1feb8;
              /*Core.Networking.NetworkEventResult$$IsValid*/ func_0x01659850(lVar8,0);
              lVar16 = *(long *)(param_1 + 0x88);
              if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar8 = 0;
              if (lVar16 != 0) {
                puVar7 = (undefined1 *)
                         /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar16,*(undefined8 *)
                                                 (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x88),0,
                                         *(undefined8 *)(param_1 + 0xb0),0);
                return puVar7;
              }
            }
          }
        }
      }
    }
    else {
      lVar16 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
      if (lVar16 != 0) {
        uStack_98 = *(undefined8 *)(lVar16 + 0xd8);
        lStack_a0 = *(long *)(lVar16 + 0xd0);
        uStack_88 = *(undefined8 *)(lVar16 + 0xe8);
        uStack_90 = *(undefined8 *)(lVar16 + 0xe0);
        plVar13 = &lStack_a0;
        uVar23 = 0;
        puVar25 = &UNK_014e5978;
        goto code_r0x0165e7d4;
      }
    }
  }
  puVar25 = &Atlas_Contexts_RoundResultsState__IsTournamentOver;
  puVar7 = (undefined1 *)func_0x00f78af4();
  while( true ) {
    *(undefined1 ***)((long)puVar2 + -0x10) = ppuVar24;
    *(undefined **)((long)puVar2 + -8) = puVar25;
    if (*(long *)(puVar7 + 0x80) != 0) break;
    puVar7 = (undefined1 *)func_0x00f78af4();
    puVar3 = (undefined1 *)((long)puVar2 + -0x20);
    puVar10 = (undefined1 *)((long)puVar2 + -0x20);
    *(undefined1 **)((long)puVar2 + -0x20) = (undefined1 *)((long)puVar2 + -0x10);
    *(undefined **)((long)puVar2 + -0x18) = &Atlas_Contexts_RoundResultsState__OnExit;
    if (*(long *)(puVar7 + 0x80) == 0) {
      puVar25 = &Atlas_Contexts_RoundResultsState__RemoveDelegates;
      puVar7 = (undefined1 *)func_0x00f78af4();
    }
    else {
      if (*(long *)(*(long *)(puVar7 + 0x80) + 0x20) == 0) {
        return puVar7;
      }
      puVar3 = (undefined1 *)((long)puVar2 + -0x10);
      puVar10 = *(undefined1 **)((long)puVar2 + -0x20);
      puVar25 = *(undefined **)((long)puVar2 + -0x18);
    }
    puVar2 = (undefined8 *)(puVar3 + -0x40);
    *(long **)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 **)(puVar3 + -0x38) = unaff_x23;
    *(long *)(puVar3 + -0x30) = unaff_x22;
    *(long *)(puVar3 + -0x28) = lVar22;
    *(long *)(puVar3 + -0x20) = lVar8;
    *(undefined1 **)(puVar3 + -0x18) = param_1;
    *(undefined1 **)(puVar3 + -0x10) = puVar10;
    *(undefined **)(puVar3 + -8) = puVar25;
    ppuVar24 = (undefined1 **)(puVar3 + -0x10);
    lVar8 = 0x3eb4000;
    if ((bRam0000000003eb4c0d & 1) == 0) {
      func_0x00f78a20(0x3d2a238);
      func_0x00f78a20(0x3d1b518);
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d5c830);
      func_0x00f78a20(0x3d5c838);
      bRam0000000003eb4c0d = 1;
    }
    if (((*(long *)(puVar7 + 0x80) == 0) ||
        (lVar16 = *(long *)(*(long *)(puVar7 + 0x80) + 0x20), lVar16 == 0)) ||
       (unaff_x22 = *(long *)(lVar16 + 0x10), unaff_x22 == 0)) {
      func_0x00f78af4();
code_r0x014e5c6c:
      auVar34 = func_0x00f78e5c();
      plVar13 = auVar34._8_8_;
      lVar16 = auVar34._0_8_;
      *(undefined8 *)(puVar3 + -0x80) = unaff_d9;
      *(ulong *)(puVar3 + -0x78) = unaff_d8;
      *(long *)(puVar3 + -0x70) = unaff_x22;
      *(long *)(puVar3 + -0x68) = lVar22;
      *(long *)(puVar3 + -0x60) = lVar8;
      *(undefined1 **)(puVar3 + -0x58) = puVar7;
      *(undefined1 ***)(puVar3 + -0x50) = ppuVar24;
      *(undefined **)(puVar3 + -0x48) = &Atlas_Contexts_RoundResultsState__OnUpdate;
      uVar23 = 0x3eb4000;
      if ((bRam0000000003eb4c06 & 1) == 0) {
        func_0x00f78a20(0x3d22618);
        bRam0000000003eb4c06 = 1;
      }
      puVar15 = (undefined8 *)0x0;
      puVar7 = (undefined1 *)/*Core.StateManagement.State$$OnUpdate*/ func_0x02b951d8(lVar16,plVar13);
      fVar31 = *(float *)(lVar16 + 0xbc);
      unaff_d8 = (ulong)(uint)fVar31;
      if (0.0 < fVar31) {
        if (plVar13 == (long *)0x0) goto code_r0x014e5da4;
        lVar22 = *plVar13;
        uVar21 = (ulong)*(ushort *)(lVar22 + 0x12a);
        if (uVar21 != 0) {
          piVar18 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
              puVar9 = (undefined8 *)(lVar22 + (long)*piVar18 * 0x10 + 0x138);
              goto code_r0x014e5d20;
            }
            piVar18 = piVar18 + 4;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
        puVar15 = (undefined8 *)0x0;
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar13);
code_r0x014e5d20:
        puVar7 = (undefined1 *)(*(code *)*puVar9)(plVar13,puVar9[1]);
        *(float *)(lVar16 + 0xbc) = fVar31 - extraout_s0;
        if (0.0 < fVar31 - extraout_s0) goto code_r0x014e5d48;
        auVar34._8_8_ = *(undefined8 *)(lVar16 + 0x80);
        auVar34._0_8_ = lVar16;
        puVar25 = &UNK_014e5d48;
code_r0x014e5da8:
        puVar10 = auVar34._0_8_;
        puVar4 = puVar3 + -0xa0;
        *(long **)(puVar3 + -0xa0) = plVar13;
        *(long *)(puVar3 + -0x98) = lVar16;
        *(undefined1 **)(puVar3 + -0x90) = puVar3 + -0x50;
        *(undefined **)(puVar3 + -0x88) = puVar25;
        puVar7 = puVar3 + -0x90;
        if (puVar10[0xb8] != '\0') {
          return puVar10;
        }
        puVar12 = puVar10;
        if (auVar34._8_8_ == 0) {
code_r0x014e5ddc:
          puVar10[0xb8] = 1;
          return puVar12;
        }
        plVar11 = *(long **)(auVar34._8_8_ + 0x20);
        if (plVar11 != (long *)0x0) {
          puVar12 = (undefined1 *)
                    (**(code **)(*plVar11 + 0x228))(plVar11,*(undefined8 *)(*plVar11 + 0x230));
          goto code_r0x014e5ddc;
        }
        puVar25 = &Atlas_Contexts_RoundResultsState__BackOut;
        lVar16 = func_0x00f78af4();
      }
      else {
code_r0x014e5d48:
        if (*(long *)(lVar16 + 0x80) == 0) {
code_r0x014e5da4:
          puVar25 = &Atlas_Contexts_RoundResultsState__RequestResultsFinish;
          auVar34 = func_0x00f78af4();
          goto code_r0x014e5da8;
        }
        lVar22 = *(long *)(*(long *)(lVar16 + 0x80) + 0x20);
        if ((lVar22 == 0) || (*(char *)(lVar22 + 0x19c) != '\0')) {
          return puVar7;
        }
        /*Atlas.Contexts.RoundResultsState$$RemoveDelegates*/ func_0x014e5af8(lVar16);
        if (*(long *)(lVar16 + 0x80) == 0) goto code_r0x014e5da4;
        /*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(lVar16 + 0x80),0);
        puVar7 = *(undefined1 **)(puVar3 + -0x50);
        puVar25 = *(undefined **)(puVar3 + -0x48);
        plVar13 = *(long **)(puVar3 + -0x60);
        puVar10 = *(undefined1 **)(puVar3 + -0x58);
        unaff_x22 = *(long *)(puVar3 + -0x70);
        uVar23 = *(undefined8 *)(puVar3 + -0x68);
        puVar4 = puVar3 + -0x40;
        unaff_d9 = *(undefined8 *)(puVar3 + -0x80);
        unaff_d8 = *(ulong *)(puVar3 + -0x78);
      }
      auVar33._8_8_ = uVar23;
      auVar33._0_8_ = lVar16;
      puVar12 = puVar4 + -0x20;
      *(long **)(puVar4 + -0x20) = plVar13;
      *(undefined1 **)(puVar4 + -0x18) = puVar10;
      *(undefined1 **)(puVar4 + -0x10) = puVar7;
      *(undefined **)(puVar4 + -8) = puVar25;
      puVar7 = puVar4 + -0x10;
      if ((bRam0000000003eb4c0c & 1) == 0) {
        func_0x00f78a20(0x3d6d050);
        bRam0000000003eb4c0c = 1;
      }
      lVar22 = *(long *)(lVar16 + 0xa0);
      if (lVar22 != 0) {
        puVar25 = &UNK_014e5e34;
        goto code_r0x01529634;
      }
      func_0x00f78af4();
      *(undefined8 *)(puVar4 + -0x70) = unaff_x26;
      *(undefined8 *)(puVar4 + -0x68) = unaff_x25;
      *(long **)(puVar4 + -0x60) = unaff_x24;
      *(undefined8 **)(puVar4 + -0x58) = unaff_x23;
      *(long *)(puVar4 + -0x50) = unaff_x22;
      *(undefined8 *)(puVar4 + -0x48) = uVar23;
      *(undefined8 *)(puVar4 + -0x40) = 0x3eb4000;
      *(long *)(puVar4 + -0x38) = lVar16;
      *(undefined1 **)(puVar4 + -0x30) = puVar7;
      *(undefined **)(puVar4 + -0x28) =
           &Atlas_Contexts_RoundResultsState__UpdateEntryPreviousPositions;
      lVar22 = 0x3eb4000;
      puVar9 = puVar15;
      if ((bRam0000000003eb4c08 & 1) == 0) {
        func_0x00f78a20(0x3d2cf38);
        func_0x00f78a20(0x3d1b978);
        func_0x00f78a20(0x3d32b90);
        func_0x00f78a20(0x3d32b98);
        func_0x00f78a20(0x3d32ba0);
        func_0x00f78a20(0x3d3d168);
        func_0x00f78a20(0x3d3b5c0);
        func_0x00f78a20(0x3d3d178);
        func_0x00f78a20(0x3d3d180);
        func_0x00f78a20(0x3d3b5d0);
        func_0x00f78a20(0x3d3d188);
        func_0x00f78a20(0x3d3d190);
        func_0x00f78a20(0x3d63bc0);
        func_0x00f78a20(0x3d289f8);
        bRam0000000003eb4c08 = 1;
      }
      unaff_x25 = 0x3d32b98;
      unaff_x26 = 0x3d3d168;
      unaff_x22 = 0x3d32b90;
      *(undefined8 *)(puVar4 + -0x88) = 0;
      *(undefined8 *)(puVar4 + -0x90) = 0;
      *(undefined8 *)(puVar4 + -0x78) = 0;
      *(undefined8 *)(puVar4 + -0x80) = 0;
      *(undefined4 *)(puVar4 + -0x98) = 0;
      *(undefined8 *)(puVar4 + -0xa0) = 0;
      lVar8 = *(long *)(extraout_x1 + 0x18);
      if ((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x18))) {
        /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(puVar4 + -0xc0,lVar8,uRam0000000003d3b5c0);
        *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(puVar4 + -0xb8);
        *(undefined8 *)(puVar4 + -0x90) = *(undefined8 *)(puVar4 + -0xc0);
        *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0xa8);
        *(undefined8 *)(puVar4 + -0x80) = *(undefined8 *)(puVar4 + -0xb0);
        uVar19 = 1;
        while( true ) {
          uVar21 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(puVar4 + -0x90,uRam0000000003d32b98);
          if ((uVar21 & 1) == 0) {
            puVar7 = (undefined1 *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar4 + -0x90,uRam0000000003d32b90);
            return puVar7;
          }
          if (puVar15 == (undefined8 *)0x0) break;
          /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(puVar15,(ulong)uVar19 | *(ulong *)(puVar4 + -0x80) << 0x20,
                          *(ulong *)(puVar4 + -0x80) >> 0x20,uRam0000000003d3d168);
          uVar19 = uVar19 + 1;
        }
        func_0x00f78af4();
code_r0x014e6194:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x14e6198);
        (*pcVar1)();
      }
      lVar8 = extraout_x1;
      if (*(long *)(extraout_x1 + 8) == 0) goto code_r0x014e6198;
      unaff_x24 = (long *)0x3d289f8;
      unaff_x23 = (undefined8 *)0x3d3d178;
      /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(puVar4 + -0xc0,*(long *)(extraout_x1 + 8),uRam0000000003d3b5c0);
      *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(puVar4 + -0xb8);
      *(undefined8 *)(puVar4 + -0x90) = *(undefined8 *)(puVar4 + -0xc0);
      *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0xa8);
      *(undefined8 *)(puVar4 + -0x80) = *(undefined8 *)(puVar4 + -0xb0);
      while (uVar21 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(puVar4 + -0x90,uRam0000000003d32b98), (uVar21 & 1) != 0) {
        lVar22 = *(long *)(puVar4 + -0x80);
        puVar9 = (undefined8 *)(puVar4 + -0xa0);
        uVar21 = /*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(extraout_x1,lVar22,puVar9,0);
        if ((uVar21 & 1) != 0) {
          if (puVar15 == (undefined8 *)0x0) {
            func_0x00f78af4();
            goto code_r0x014e6194;
          }
          puVar9 = (undefined8 *)
                   (ulong)(uint)((int)((ulong)lVar22 >> 0x20) - *(int *)(puVar4 + -0x9c));
          /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(puVar15,lVar22 << 0x20,puVar9,uRam0000000003d3d168);
        }
      }
      /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar4 + -0x90,uRam0000000003d32b90);
      do {
        lVar16 = *unaff_x24;
        if (((*(ushort *)(lVar16 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar16 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar16 = *unaff_x24;
        }
        plVar13 = *(long **)(lVar16 + 0xb8);
        lVar8 = plVar13[1];
        if (lVar8 == 0) {
          if (((*(ushort *)(lVar16 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar16 + 0xe0) == 0)) {
            func_0x00f78ad0();
            plVar13 = *(long **)(*unaff_x24 + 0xb8);
          }
          lVar22 = *plVar13;
          lVar8 = func_0x00f78aec(/*System.Comparison<EndOfRoundScreen.LeaderboardEntry>_TypeInfo*/ uRam0000000003d1b978);
          puVar9 = puRam0000000003d63bc0;
          /*System.Comparison<EndOfRoundScreen.LeaderboardEntry>$$.ctor*/ func_0x01dc71e8(lVar8,lVar22,puRam0000000003d63bc0,uRam0000000003d2cf38);
          *(long *)(*(long *)(*unaff_x24 + 0xb8) + 8) = lVar8;
        }
        if (puVar15 != (undefined8 *)0x0) {
          puVar7 = (undefined1 *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Sort*/ func_0x025212a4(puVar15,lVar8,*unaff_x23);
          uVar21 = (ulong)*(uint *)(puVar15 + 3);
          if ((int)*(uint *)(puVar15 + 3) < 1) {
            return puVar7;
          }
          lVar22 = 0;
          uVar14 = 0;
          do {
            if ((uVar21 & 0xffffffff) <= uVar14) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            uVar14 = uVar14 + 1;
            puVar7 = (undefined1 *)
                     /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(puVar15,(int)uVar14 + -1,
                                     uVar14 | (ulong)*(uint *)(puVar15[2] + lVar22 + 0x24) << 0x20,
                                     *(undefined8 *)(puVar15[2] + lVar22 + 0x28),
                                     uRam0000000003d3d190);
            uVar21 = (ulong)*(int *)(puVar15 + 3);
            lVar22 = lVar22 + 0x10;
          } while ((long)uVar14 < (long)uVar21);
          return puVar7;
        }
code_r0x014e6198:
        func_0x00f78af4();
        if (extraout_w1 != 1) goto code_r0x014e620c;
        plVar13 = (long *)___cxa_begin_catch();
        lVar8 = *plVar13;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar4 + -0x90,uRam0000000003d32b90);
      } while (lVar8 == 0);
      func_0x00f78ac0(lVar8,0);
code_r0x014e620c:
      auVar34 = __Unwind_Resume();
      puVar7 = auVar34._0_8_;
      *(long **)(puVar4 + -0x100) = unaff_x24;
      *(undefined8 **)(puVar4 + -0xf8) = unaff_x23;
      *(undefined8 *)(puVar4 + -0xf0) = 0x3d32b90;
      *(long *)(puVar4 + -0xe8) = lVar22;
      *(long *)(puVar4 + -0xe0) = lVar8;
      *(undefined8 **)(puVar4 + -0xd8) = puVar15;
      *(undefined1 **)(puVar4 + -0xd0) = puVar4 + -0x30;
      *(undefined **)(puVar4 + -200) = &Atlas_Contexts_RoundResultsState__UpdateEntryStarDeltas;
      puVar15 = puVar9;
      if ((bRam0000000003eb4c09 & 1) == 0) {
        func_0x00f78a20(0x3d3d180);
        func_0x00f78a20(0x3d3d188);
        puVar7 = (undefined1 *)func_0x00f78a20(0x3d3d190);
        bRam0000000003eb4c09 = 1;
      }
      *(undefined4 *)(puVar4 + -0x108) = 0;
      *(undefined8 *)(puVar4 + -0x110) = 0;
      if (puVar9 != (undefined8 *)0x0) {
        uVar21 = (ulong)*(uint *)(puVar9 + 3);
        if (0 < (int)*(uint *)(puVar9 + 3)) {
          lVar22 = 0;
          uVar14 = 0;
          do {
            if ((uVar21 & 0xffffffff) <= uVar14) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            puVar7 = (undefined1 *)
                     /*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(auVar34._8_8_,*(undefined4 *)(puVar9[2] + lVar22 + 0x24),
                                     puVar4 + -0x110,0);
            if ((int)puVar7 != 0) {
              if (*(uint *)(puVar9 + 3) <= uVar14) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              puVar7 = (undefined1 *)
                       /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(puVar9,uVar14,*(undefined8 *)(puVar9[2] + lVar22 + 0x20),
                                       CONCAT44(*(undefined4 *)(puVar4 + -0x10c),
                                                *(undefined4 *)(puVar9[2] + lVar22 + 0x28)),
                                       uRam0000000003d3d190);
            }
            uVar14 = uVar14 + 1;
            uVar21 = (ulong)*(int *)(puVar9 + 3);
            lVar22 = lVar22 + 0x10;
          } while ((long)uVar14 < (long)uVar21);
        }
        return puVar7;
      }
      auVar33 = func_0x00f78af4();
      puVar7 = auVar33._0_8_;
      *(long **)(puVar4 + -0x150) = unaff_x24;
      *(undefined8 **)(puVar4 + -0x148) = unaff_x23;
      *(undefined8 *)(puVar4 + -0x140) = 0x3d32b90;
      *(undefined8 *)(puVar4 + -0x138) = 0x3eb4000;
      *(long *)(puVar4 + -0x130) = auVar34._8_8_;
      *(undefined8 *)(puVar4 + -0x128) = 0;
      *(undefined1 **)(puVar4 + -0x120) = puVar4 + -0xd0;
      *(undefined **)(puVar4 + -0x118) = &Atlas_Contexts_RoundResultsState__UpdateEntryCurrentStars;
      if ((bRam0000000003eb4c0a & 1) == 0) {
        func_0x00f78a20(0x3d3d180);
        func_0x00f78a20(0x3d3d188);
        puVar7 = (undefined1 *)func_0x00f78a20(0x3d3d190);
        bRam0000000003eb4c0a = 1;
      }
      *(undefined4 *)(puVar4 + -0x158) = 0;
      *(undefined8 *)(puVar4 + -0x160) = 0;
      if (puVar15 != (undefined8 *)0x0) {
        uVar21 = (ulong)*(uint *)(puVar15 + 3);
        if (0 < (int)*(uint *)(puVar15 + 3)) {
          uVar14 = 0;
          lVar22 = 0x20;
          do {
            if ((uVar21 & 0xffffffff) <= uVar14) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            puVar7 = (undefined1 *)
                     /*Core.Networking.NetworkTournament$$GetTotalNetworkScore*/ func_0x01660f34(auVar33._8_8_,*(undefined4 *)(puVar15[2] + lVar22 + 4),
                                     puVar4 + -0x160,0);
            if ((int)puVar7 != 0) {
              if (*(uint *)(puVar15 + 3) <= uVar14) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              puVar7 = (undefined1 *)
                       /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(puVar15,uVar14,*(undefined8 *)(puVar15[2] + lVar22),
                                       *(undefined4 *)(puVar4 + -0x15c),uRam0000000003d3d190);
            }
            uVar14 = uVar14 + 1;
            uVar21 = (ulong)*(int *)(puVar15 + 3);
            lVar22 = lVar22 + 0x10;
          } while ((long)uVar14 < (long)uVar21);
        }
        return puVar7;
      }
      auVar34 = func_0x00f78af4();
      lVar22 = auVar34._8_8_;
      puVar15 = auVar34._0_8_;
      *(long **)(puVar4 + -0x1a0) = unaff_x24;
      *(undefined8 **)(puVar4 + -0x198) = unaff_x23;
      *(undefined8 *)(puVar4 + -400) = 0x3d32b90;
      *(undefined8 *)(puVar4 + -0x188) = 0x3eb4000;
      *(long *)(puVar4 + -0x180) = auVar33._8_8_;
      *(undefined8 *)(puVar4 + -0x178) = 0;
      *(undefined1 **)(puVar4 + -0x170) = puVar4 + -0x120;
      *(undefined **)(puVar4 + -0x168) =
           &Atlas_Contexts_RoundResultsState__SortEntriesByStarCountFromTournamentData;
      if ((bRam0000000003eb4c0b & 1) == 0) {
        func_0x00f78a20(0x3d32b90);
        func_0x00f78a20(0x3d32b98);
        func_0x00f78a20(0x3d32ba0);
        func_0x00f78a20(0x3d3d168);
        func_0x00f78a20(0x3d3d170);
        func_0x00f78a20(0x3d3b5c0);
        bRam0000000003eb4c0b = 1;
      }
      *(undefined8 *)(puVar4 + -0x1b8) = 0;
      *(undefined8 *)(puVar4 + -0x1c0) = 0;
      *(undefined8 *)(puVar4 + -0x1a8) = 0;
      *(undefined8 *)(puVar4 + -0x1b0) = 0;
      if (lVar22 != 0) {
        /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Clear*/ func_0x0251f970(lVar22,uRam0000000003d3d170);
        if (puVar15[1] != 0) {
          /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(puVar4 + -0x1c0,puVar15[1],uRam0000000003d3b5c0);
          uVar19 = 1;
          while (uVar21 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(puVar4 + -0x1c0,uRam0000000003d32b98), (uVar21 & 1) != 0)
          {
            /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(lVar22,(ulong)uVar19 | *(ulong *)(puVar4 + -0x1b0) << 0x20,
                            *(ulong *)(puVar4 + -0x1b0) >> 0x20,uRam0000000003d3d168);
            uVar19 = uVar19 + 1;
          }
          puVar7 = (undefined1 *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar4 + -0x1c0,uRam0000000003d32b90);
          return puVar7;
        }
      }
      func_0x00f78af4();
      if (extraout_w1_00 == 1) {
        plVar13 = (long *)___cxa_begin_catch();
        lVar22 = *plVar13;
        ___cxa_end_catch();
        puVar7 = (undefined1 *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar4 + -0x1c0,*puVar15);
        if (lVar22 == 0) {
          return puVar7;
        }
        func_0x00f78ac0(lVar22,0);
      }
      puVar7 = (undefined1 *)__Unwind_Resume();
      puVar2 = (undefined8 *)(puVar4 + -0x1f0);
      *(undefined8 *)(puVar4 + -0x1f0) = 0x3d32b90;
      *(undefined8 *)(puVar4 + -0x1e8) = 0x3eb4000;
      *(undefined8 **)(puVar4 + -0x1e0) = puVar15;
      *(long *)(puVar4 + -0x1d8) = lVar22;
      *(undefined1 **)(puVar4 + -0x1d0) = puVar4 + -0x170;
      *(undefined **)(puVar4 + -0x1c8) = &Atlas_Contexts_RoundResultsState__OnResultsFinished;
      ppuVar24 = (undefined1 **)(puVar4 + -0x1d0);
      lVar8 = 0x3eb4000;
      if ((bRam0000000003eb4c0e & 1) == 0) {
        func_0x00f78a20(0x3d2a5b0);
        func_0x00f78a20(0x3d194d8);
        func_0x00f78a20(0x3d27638);
        func_0x00f78a20(0x3d40650);
        func_0x00f78a20(0x3d40658);
        func_0x00f78a20(0x3d25458);
        bRam0000000003eb4c0e = 1;
      }
      lVar22 = 0x3d40650;
      puVar25 = &UNK_014e6624;
      param_1 = puVar7;
    }
    else {
      unaff_x23 = (undefined8 *)0x3d1fa78;
      unaff_x24 = (long *)0x3d5c000;
      lVar8 = *(long *)(unaff_x22 + 0x88);
      lVar22 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
      /*System.Action$$.ctor*/ func_0x02924c80(lVar22,puVar7,uRam0000000003d5c830,0);
      plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,lVar22,0);
      if ((plVar13 != (long *)0x0) && (*plVar13 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) goto code_r0x014e5c6c;
      *(long **)(unaff_x22 + 0x88) = plVar13;
      puVar25 = &UNK_014e5bd8;
      param_1 = puVar7;
    }
  }
  lVar16 = *(long *)(*(long *)(puVar7 + 0x80) + 0x20);
  if (lVar16 == 0) {
    return (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  *(long *)((long)puVar2 + -0x20) = lVar8;
  *(undefined1 **)((long)puVar2 + -0x18) = param_1;
  *(undefined8 *)((long)puVar2 + -0x10) = *(undefined8 *)((long)puVar2 + -0x10);
  *(undefined8 *)((long)puVar2 + -8) = *(undefined8 *)((long)puVar2 + -8);
  if ((bRam0000000003eb583f & 1) == 0) {
    func_0x00f78a20(0x3d3b6c0,0);
    bRam0000000003eb583f = 1;
  }
  if (*(long *)(lVar16 + 0xd0) != 0) {
    return (undefined1 *)(ulong)(2 < *(int *)(*(long *)(lVar16 + 0xd0) + 0x18));
  }
  auVar34 = func_0x00f78af4();
  uVar23 = auVar34._8_8_;
  param_1 = auVar34._0_8_;
  puVar6 = (undefined8 *)((long)puVar2 + -0xa0);
  *(undefined8 *)((long)puVar2 + -0x80) = unaff_x28;
  *(undefined8 *)((long)puVar2 + -0x78) = unaff_x27;
  *(undefined8 *)((long)puVar2 + -0x70) = unaff_x26;
  *(undefined8 *)((long)puVar2 + -0x68) = unaff_x25;
  *(long **)((long)puVar2 + -0x60) = unaff_x24;
  *(undefined8 **)((long)puVar2 + -0x58) = unaff_x23;
  *(long *)((long)puVar2 + -0x50) = unaff_x22;
  *(long *)((long)puVar2 + -0x48) = lVar22;
  *(undefined8 *)((long)puVar2 + -0x40) = 0x3eb5000;
  *(long *)((long)puVar2 + -0x38) = lVar16;
  *(undefined1 **)((long)puVar2 + -0x30) = (undefined1 *)((long)puVar2 + -0x10);
  *(undefined **)((long)puVar2 + -0x28) = &Core_Networking_NetworkSession__GetSpawnPositions;
  ppuVar24 = (undefined1 **)((long)puVar2 + -0x30);
  lVar8 = 0x3eb5000;
  if ((bRam0000000003eb5840 & 1) == 0) {
    func_0x00f78a20(0x3d3b5f0);
    func_0x00f78a20(0x3d3b5f8);
    func_0x00f78a20(0x3d3b520);
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3b5d8);
    func_0x00f78a20(0x3d3f438);
    func_0x00f78a20(0x3d1e5a8);
    func_0x00f78a20(0x3d638b0);
    func_0x00f78a20(0x3d282f8);
    bRam0000000003eb5840 = 1;
    uVar23 = extraout_x1_00;
  }
  plVar13 = (long *)(param_1 + 0xd0);
  puVar25 = &UNK_0165e680;
code_r0x0165e7d4:
  *(long *)((long)puVar6 + -0x20) = lVar8;
  *(undefined1 **)((long)puVar6 + -0x18) = param_1;
  *(undefined1 ***)((long)puVar6 + -0x10) = ppuVar24;
  *(undefined **)((long)puVar6 + -8) = puVar25;
  if ((bRam0000000003eb585d & 1) == 0) {
    func_0x00f78a20(0x3d3b6c0,uVar23);
    bRam0000000003eb585d = 1;
  }
  if (*plVar13 == 0) {
    puVar7 = (undefined1 *)func_0x00f78af4();
    return puVar7;
  }
  return (undefined1 *)(ulong)*(uint *)(*plVar13 + 0x18);
code_r0x01529634:
  *(long *)(puVar12 + -0x30) = unaff_x22;
  *(long *)(puVar12 + -0x28) = auVar33._8_8_;
  *(undefined8 *)(puVar12 + -0x20) = 0x3eb4000;
  *(long *)(puVar12 + -0x18) = auVar33._0_8_;
  *(undefined1 **)(puVar12 + -0x10) = puVar7;
  *(undefined **)(puVar12 + -8) = puVar25;
  /*Atlas.UI.VotingManager$$set_VotingManagerStage*/ func_0x015285e8(lVar22,0);
  *(undefined4 *)(lVar22 + 0xa8) = 0;
  *(long **)(puVar12 + -0x70) = unaff_x24;
  *(undefined8 **)(puVar12 + -0x68) = unaff_x23;
  *(long *)(puVar12 + -0x60) = unaff_x22;
  *(long *)(puVar12 + -0x58) = auVar33._8_8_;
  *(undefined8 *)(puVar12 + -0x50) = 0x3eb4000;
  *(long *)(puVar12 + -0x48) = lVar22;
  *(undefined1 **)(puVar12 + -0x40) = puVar12 + -0x10;
  *(undefined **)(puVar12 + -0x38) = &UNK_0152a1c0;
  uVar20 = 0;
  uVar23 = 0x3eb4000;
  if ((bRam0000000003eb4e6f & 1) == 0) {
    func_0x00f78a20(0x3d2a228);
    func_0x00f78a20(0x3d2a248);
    func_0x00f78a20(0x3d2a238);
    func_0x00f78a20(0x3d1b518);
    func_0x00f78a20(0x3d1b520);
    func_0x00f78a20(0x3d1b510);
    func_0x00f78a20(0x3d2a4b8);
    func_0x00f78a20(0x3d2a4a8);
    func_0x00f78a20(0x3d1b670);
    func_0x00f78a20(0x3d1b668);
    func_0x00f78a20(0x3d600f8);
    func_0x00f78a20(0x3d60100);
    func_0x00f78a20(0x3d60108);
    func_0x00f78a20(0x3d60110);
    func_0x00f78a20(0x3d60118);
    bRam0000000003eb4e6f = 1;
  }
  if ((*(long *)(lVar22 + 0x20) == 0) ||
     (lVar8 = *(long *)(*(long *)(lVar22 + 0x20) + 0x20), lVar8 == 0)) {
    return (undefined1 *)0x0;
  }
  if (*(char *)(lVar22 + 0x40) == '\0') {
code_r0x01529be0:
    return (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  unaff_x22 = *(long *)(lVar8 + 0x10);
  if (unaff_x22 == 0) {
code_r0x01529bf8:
    func_0x00f78af4();
  }
  else {
    uVar20 = *(undefined8 *)(unaff_x22 + 0x40);
    unaff_x23 = (undefined8 *)0x3d1b518;
    uVar23 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
    /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(uVar23,lVar22,uRam0000000003d60110,uRam0000000003d2a238);
    puVar15 = (undefined8 *)0x0;
    plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar20,uVar23);
    if ((plVar13 == (long *)0x0) || (*plVar13 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
      *(long **)(unaff_x22 + 0x40) = plVar13;
      if ((*(long *)(lVar22 + 0x20) == 0) ||
         ((lVar8 = *(long *)(*(long *)(lVar22 + 0x20) + 0x20), lVar8 == 0 ||
          (unaff_x22 = *(long *)(lVar8 + 0x10), unaff_x22 == 0)))) goto code_r0x01529bf8;
      uVar20 = *(undefined8 *)(unaff_x22 + 0x48);
      unaff_x23 = (undefined8 *)0x3d1b520;
      uVar23 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar23,lVar22,uRam0000000003d60118,uRam0000000003d2a248);
      puVar15 = (undefined8 *)0x0;
      plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar20,uVar23);
      if ((plVar13 == (long *)0x0) || (*plVar13 == /*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520)) {
        *(long **)(unaff_x22 + 0x48) = plVar13;
        if (((*(long *)(lVar22 + 0x20) == 0) ||
            (lVar8 = *(long *)(*(long *)(lVar22 + 0x20) + 0x20), lVar8 == 0)) ||
           (unaff_x22 = *(long *)(lVar8 + 0x10), unaff_x22 == 0)) goto code_r0x01529bf8;
        uVar20 = *(undefined8 *)(unaff_x22 + 0x50);
        unaff_x23 = (undefined8 *)0x3d1b670;
        uVar23 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670);
        /*System.Action<string, InputControlLayoutChange>$$.ctor*/ func_0x01e6e6c8(uVar23,lVar22,uRam0000000003d600f8,uRam0000000003d2a4b8);
        puVar15 = (undefined8 *)0x0;
        plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar20,uVar23);
        if ((plVar13 == (long *)0x0) || (*plVar13 == /*System.Action<NetworkVoteUpdate, VoteEndReason>_TypeInfo*/ lRam0000000003d1b670)) {
          *(long **)(unaff_x22 + 0x50) = plVar13;
          if ((*(long *)(lVar22 + 0x20) == 0) ||
             ((lVar8 = *(long *)(*(long *)(lVar22 + 0x20) + 0x20), lVar8 == 0 ||
              (unaff_x22 = *(long *)(lVar8 + 0x10), unaff_x22 == 0)))) goto code_r0x01529bf8;
          uVar20 = *(undefined8 *)(unaff_x22 + 0x58);
          unaff_x23 = (undefined8 *)0x3d1b510;
          uVar23 = func_0x00f78aec(/*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510);
          /*System.Action<NetworkVoteResult>$$.ctor*/ func_0x01e4786c(uVar23,lVar22,uRam0000000003d60108,uRam0000000003d2a228);
          puVar15 = (undefined8 *)0x0;
          plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar20,uVar23);
          if ((plVar13 == (long *)0x0) || (*plVar13 == /*System.Action<NetworkVoteResult>_TypeInfo*/ lRam0000000003d1b510)) {
            *(long **)(unaff_x22 + 0x58) = plVar13;
            if (((*(long *)(lVar22 + 0x20) == 0) ||
                (lVar8 = *(long *)(*(long *)(lVar22 + 0x20) + 0x20), lVar8 == 0)) ||
               (unaff_x22 = *(long *)(lVar8 + 0x10), unaff_x22 == 0)) goto code_r0x01529bf8;
            uVar20 = *(undefined8 *)(unaff_x22 + 0xa0);
            unaff_x23 = (undefined8 *)0x3d1b668;
            uVar23 = func_0x00f78aec(/*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668);
            /*System.Action<NetworkSessionTime, uint>$$.ctor*/ func_0x01e6d100(uVar23,lVar22,uRam0000000003d60100,uRam0000000003d2a4a8);
            puVar15 = (undefined8 *)0x0;
            plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar20,uVar23);
            if ((plVar13 == (long *)0x0) || (*plVar13 == /*System.Action<NetworkSessionTime, uint>_TypeInfo*/ lRam0000000003d1b668)) {
              *(long **)(unaff_x22 + 0xa0) = plVar13;
              *(undefined1 *)(lVar22 + 0x40) = 0;
              goto code_r0x01529be0;
            }
          }
        }
      }
    }
  }
  auVar33 = func_0x00f78e5c();
  *(undefined8 *)(puVar12 + -0xc0) = unaff_x26;
  *(undefined8 *)(puVar12 + -0xb8) = unaff_x25;
  *(long **)(puVar12 + -0xb0) = unaff_x24;
  *(undefined8 **)(puVar12 + -0xa8) = unaff_x23;
  *(long *)(puVar12 + -0xa0) = unaff_x22;
  *(undefined8 *)(puVar12 + -0x98) = uVar23;
  *(undefined8 *)(puVar12 + -0x90) = uVar20;
  *(long *)(puVar12 + -0x88) = lVar22;
  *(undefined1 **)(puVar12 + -0x80) = puVar12 + -0x40;
  *(undefined **)(puVar12 + -0x78) = &Atlas_UI_VotingManager__SetVoteData;
  puVar7 = puVar12 + -0x80;
  uVar21 = 0x3eb4000;
  if ((bRam0000000003eb4e70 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d66410);
    func_0x00f78a20(0x3d66418);
    func_0x00f78a20(0x3d66310);
    func_0x00f78a20(0x3d663e0);
    func_0x00f78a20(0x3d76240);
    func_0x00f78a20(0x3d66308);
    func_0x00f78a20(0x3d66420);
    func_0x00f78a20(0x3d663e8);
    bRam0000000003eb4e70 = 1;
  }
  *(undefined8 *)(puVar12 + -0xd0) = 0;
  *(undefined8 *)(puVar12 + -200) = 0;
  *(undefined8 *)(puVar12 + -0xe0) = 0;
  *(undefined8 *)(puVar12 + -0xd8) = 0;
  lVar22 = *(long *)(auVar33._0_8_ + 0x28);
  if (lVar22 != 0) {
    uVar14 = (ulong)*(short *)(auVar33._8_8_ + 2);
    puVar25 = &UNK_01529cd0;
    puVar9 = (undefined8 *)(puVar12 + -200);
code_r0x014a7750:
    puVar5 = puVar12 + -0x110;
    *(long *)(puVar12 + -0x110) = unaff_x22;
    *(long *)(puVar12 + -0x108) = auVar33._8_8_;
    *(undefined8 *)(puVar12 + -0x100) = 0x3eb4000;
    *(long *)(puVar12 + -0xf8) = auVar33._0_8_;
    *(undefined1 **)(puVar12 + -0xf0) = puVar7;
    *(undefined **)(puVar12 + -0xe8) = puVar25;
    puVar7 = puVar12 + -0xf0;
    unaff_x22 = 0x3eb4000;
    puVar15 = puVar9;
    if ((bRam0000000003eb4a5c & 1) == 0) {
      func_0x00f78a20(0x3d3c000);
      func_0x00f78a20(0x3d3c008);
      bRam0000000003eb4a5c = 1;
    }
    uVar19 = (uint)uVar14;
    if (-1 < (int)uVar19) {
      lVar22 = *(long *)(lVar22 + 0x10);
      if (lVar22 == 0) {
        puVar25 = &Atlas_Networking_NetworkIdentifiers__TryGetKeyFromIdentifier;
        auVar32 = func_0x00f78af4();
        auVar33._8_8_ = 0;
        auVar33._0_8_ = puVar9;
        uVar21 = uVar14;
        goto code_r0x014a77f0;
      }
      if ((int)uVar19 < (int)*(uint *)(lVar22 + 0x18)) {
        if (*(uint *)(lVar22 + 0x18) <= uVar19) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar23 = *(undefined8 *)(*(long *)(lVar22 + 0x10) + (uVar14 & 0xffff) * 8 + 0x20);
        puVar7 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
        goto code_r0x014a77d8;
      }
    }
    uVar23 = 0;
    puVar7 = (undefined1 *)0x0;
code_r0x014a77d8:
    *puVar9 = uVar23;
    return puVar7;
  }
  auVar34 = func_0x00f78af4();
  uVar14 = auVar34._8_8_;
  *(undefined1 **)(puVar12 + -0xf0) = puVar7;
  *(undefined **)(puVar12 + -0xe8) = &Atlas_UI_VotingManager__GetIdentifierFromKey;
  lVar22 = *(long *)(auVar34._0_8_ + 0x28);
  if (lVar22 != 0) {
    puVar7 = *(undefined1 **)(puVar12 + -0xf0);
    puVar25 = *(undefined **)(puVar12 + -0xe8);
    puVar9 = puVar15;
    goto code_r0x014a7750;
  }
  auVar34 = func_0x00f78af4();
  puVar7 = puVar12 + -0x100;
  *(undefined1 **)(puVar12 + -0x100) = puVar12 + -0xf0;
  *(undefined **)(puVar12 + -0xf8) = &Atlas_UI_VotingManager__GetKeyFromIdentifier;
  lVar22 = *(long *)(auVar34._0_8_ + 0x28);
  auVar32._8_8_ = auVar34._8_8_;
  auVar32._0_8_ = lVar22;
  if (lVar22 != 0) {
    puVar5 = puVar12 + -0xf0;
    puVar7 = *(undefined1 **)(puVar12 + -0x100);
    puVar25 = *(undefined **)(puVar12 + -0xf8);
code_r0x014a77f0:
    *(long *)(puVar5 + -0x30) = unaff_x22;
    *(long *)(puVar5 + -0x28) = auVar33._8_8_;
    *(ulong *)(puVar5 + -0x20) = uVar21;
    *(long *)(puVar5 + -0x18) = auVar33._0_8_;
    *(undefined1 **)(puVar5 + -0x10) = puVar7;
    *(undefined **)(puVar5 + -8) = puVar25;
    if ((bRam0000000003eb4a5d & 1) == 0) {
      func_0x00f78a20(0x3d2fc10);
      bRam0000000003eb4a5d = 1;
    }
    lVar22 = *(long *)(auVar32._0_8_ + 0x18);
    if (lVar22 == 0) {
      puVar7 = (undefined1 *)func_0x00f78af4();
      return puVar7;
    }
    puVar7 = (undefined1 *)/*System.Collections.Generic.Dictionary<string, short>$$TryGetValue*/ func_0x01ecd290(lVar22,auVar32._8_8_,puVar15,uRam0000000003d2fc10);
    if (((ulong)puVar7 & 1) == 0) {
      *(undefined2 *)puVar15 = 0;
    }
    return puVar7;
  }
  puVar25 = &Atlas_UI_VotingManager__VotingFinished;
  lVar22 = func_0x00f78af4();
  puVar12 = puVar12 + -0x100;
  goto code_r0x01529634;
}



// ============================================================
// RVA: 0x14e58e0 | Atlas.Contexts.RoundResultsState.ShowRoundResultsScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x014e5974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165e67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165e6e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e5bd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e5d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e6620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e6854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e6858) */
/* WARNING: Removing unreachable block (ram,0x014e6624) */
/* WARNING: Removing unreachable block (ram,0x014e66f4) */
/* WARNING: Removing unreachable block (ram,0x014e6708) */
/* WARNING: Removing unreachable block (ram,0x014e670c) */
/* WARNING: Removing unreachable block (ram,0x0152a440) */
/* WARNING: Removing unreachable block (ram,0x0152a46c) */
/* WARNING: Removing unreachable block (ram,0x0152a4d4) */
/* WARNING: Removing unreachable block (ram,0x0152a4e4) */
/* WARNING: Removing unreachable block (ram,0x0152a4f0) */
/* WARNING: Removing unreachable block (ram,0x0152a4f8) */
/* WARNING: Removing unreachable block (ram,0x0152a508) */
/* WARNING: Removing unreachable block (ram,0x0152a518) */
/* WARNING: Removing unreachable block (ram,0x014e6628) */
/* WARNING: Removing unreachable block (ram,0x014e6654) */
/* WARNING: Removing unreachable block (ram,0x014e6658) */
/* WARNING: Removing unreachable block (ram,0x014e6678) */
/* WARNING: Removing unreachable block (ram,0x014e66ac) */
/* WARNING: Removing unreachable block (ram,0x014e66b4) */
/* WARNING: Removing unreachable block (ram,0x014e66b8) */
/* WARNING: Removing unreachable block (ram,0x014e6728) */
/* WARNING: Removing unreachable block (ram,0x014e6758) */
/* WARNING: Removing unreachable block (ram,0x014e679c) */
/* WARNING: Removing unreachable block (ram,0x014e67a4) */
/* WARNING: Removing unreachable block (ram,0x014e67d0) */
/* WARNING: Removing unreachable block (ram,0x014e681c) */
/* WARNING: Removing unreachable block (ram,0x014e6824) */
/* WARNING: Removing unreachable block (ram,0x014e6828) */
/* WARNING: Removing unreachable block (ram,0x014e6870) */
/* WARNING: Removing unreachable block (ram,0x014e689c) */
/* WARNING: Removing unreachable block (ram,0x014e68b0) */
/* WARNING: Removing unreachable block (ram,0x02866c28) */
/* WARNING: Removing unreachable block (ram,0x02866c34) */
/* WARNING: Removing unreachable block (ram,0x02866c2c) */
/* WARNING: Removing unreachable block (ram,0x02b95200) */
/* WARNING: Removing unreachable block (ram,0x014e6838) */
/* WARNING: Removing unreachable block (ram,0x014e66c8) */
/* WARNING: Removing unreachable block (ram,0x01e7159c) */
/* WARNING: Removing unreachable block (ram,0x01e715e8) */
/* WARNING: Removing unreachable block (ram,0x01e715d8) */
/* WARNING: Removing unreachable block (ram,0x01e715e0) */
/* WARNING: Removing unreachable block (ram,0x01e715f0) */
/* WARNING: Removing unreachable block (ram,0x01e715f4) */
/* WARNING: Removing unreachable block (ram,0x01e7160c) */
/* WARNING: Removing unreachable block (ram,0x01e71614) */
/* WARNING: Removing unreachable block (ram,0x01e71648) */
/* WARNING: Removing unreachable block (ram,0x01e716cc) */
/* WARNING: Removing unreachable block (ram,0x01e716d8) */
/* WARNING: Removing unreachable block (ram,0x01e716e0) */
/* WARNING: Removing unreachable block (ram,0x01e71760) */
/* WARNING: Removing unreachable block (ram,0x01e717c4) */
/* WARNING: Removing unreachable block (ram,0x01e71768) */
/* WARNING: Removing unreachable block (ram,0x01e71780) */
/* WARNING: Removing unreachable block (ram,0x01e71788) */
/* WARNING: Removing unreachable block (ram,0x01e71870) */
/* WARNING: Removing unreachable block (ram,0x01e71794) */
/* WARNING: Removing unreachable block (ram,0x01e717a0) */
/* WARNING: Removing unreachable block (ram,0x01e71880) */
/* WARNING: Removing unreachable block (ram,0x01e716f8) */
/* WARNING: Removing unreachable block (ram,0x01e717b0) */
/* WARNING: Removing unreachable block (ram,0x01e716fc) */
/* WARNING: Removing unreachable block (ram,0x01e71710) */
/* WARNING: Removing unreachable block (ram,0x01e71718) */
/* WARNING: Removing unreachable block (ram,0x01e71848) */
/* WARNING: Removing unreachable block (ram,0x01e71724) */
/* WARNING: Removing unreachable block (ram,0x01e71730) */
/* WARNING: Removing unreachable block (ram,0x01e71858) */
/* WARNING: Removing unreachable block (ram,0x01e7185c) */
/* WARNING: Removing unreachable block (ram,0x01e71884) */
/* WARNING: Removing unreachable block (ram,0x01e7164c) */
/* WARNING: Removing unreachable block (ram,0x01e71650) */
/* WARNING: Removing unreachable block (ram,0x01e7165c) */
/* WARNING: Removing unreachable block (ram,0x01e71668) */
/* WARNING: Removing unreachable block (ram,0x01e71670) */
/* WARNING: Removing unreachable block (ram,0x01e717e4) */
/* WARNING: Removing unreachable block (ram,0x01e71898) */
/* WARNING: Removing unreachable block (ram,0x01e717ec) */
/* WARNING: Removing unreachable block (ram,0x01e71804) */
/* WARNING: Removing unreachable block (ram,0x01e7180c) */
/* WARNING: Removing unreachable block (ram,0x01e718e4) */
/* WARNING: Removing unreachable block (ram,0x01e71818) */
/* WARNING: Removing unreachable block (ram,0x01e71824) */
/* WARNING: Removing unreachable block (ram,0x01e718f4) */
/* WARNING: Removing unreachable block (ram,0x01e71688) */
/* WARNING: Removing unreachable block (ram,0x01e71834) */
/* WARNING: Removing unreachable block (ram,0x01e7168c) */
/* WARNING: Removing unreachable block (ram,0x01e716a0) */
/* WARNING: Removing unreachable block (ram,0x01e716a8) */
/* WARNING: Removing unreachable block (ram,0x01e718bc) */
/* WARNING: Removing unreachable block (ram,0x01e716b4) */
/* WARNING: Removing unreachable block (ram,0x01e716c0) */
/* WARNING: Removing unreachable block (ram,0x01e718cc) */
/* WARNING: Removing unreachable block (ram,0x01e718d0) */
/* WARNING: Removing unreachable block (ram,0x01e718f8) */
/* WARNING: Removing unreachable block (ram,0x01e71628) */
/* WARNING: Removing unreachable block (ram,0x01e7173c) */
/* WARNING: Removing unreachable block (ram,0x01e7162c) */
/* WARNING: Removing unreachable block (ram,0x01e71750) */
/* WARNING: Removing unreachable block (ram,0x01e7175c) */
/* WARNING: Removing unreachable block (ram,0x01e71910) */
/* WARNING: Removing unreachable block (ram,0x014e5bd8) */
/* WARNING: Removing unreachable block (ram,0x014e5bdc) */
/* WARNING: Removing unreachable block (ram,0x014e5be4) */
/* WARNING: Removing unreachable block (ram,0x014e5bec) */
/* WARNING: Removing unreachable block (ram,0x014e5bf4) */
/* WARNING: Removing unreachable block (ram,0x014e5c40) */
/* WARNING: Removing unreachable block (ram,0x014e5c50) */
/* WARNING: Removing unreachable block (ram,0x014e5c54) */
/* WARNING: Removing unreachable block (ram,0x0165e6ec) */
/* WARNING: Removing unreachable block (ram,0x0165e6f4) */
/* WARNING: Removing unreachable block (ram,0x0165e704) */
/* WARNING: Removing unreachable block (ram,0x0165e70c) */
/* WARNING: Removing unreachable block (ram,0x0165e710) */
/* WARNING: Removing unreachable block (ram,0x0165e760) */
/* WARNING: Removing unreachable block (ram,0x0165e784) */
/* WARNING: Removing unreachable block (ram,0x0165e78c) */
/* WARNING: Removing unreachable block (ram,0x0165e7a0) */
/* WARNING: Removing unreachable block (ram,0x0165e680) */
/* WARNING: Removing unreachable block (ram,0x0165e688) */
/* WARNING: Removing unreachable block (ram,0x0165e690) */
/* WARNING: Removing unreachable block (ram,0x0165e7d0) */
/* WARNING: Removing unreachable block (ram,0x0165e6a8) */
/* WARNING: Removing unreachable block (ram,0x0165e7ac) */
/* WARNING: Removing unreachable block (ram,0x0165e6b4) */
/* WARNING: Removing unreachable block (ram,0x0165e6d0) */
/* WARNING: Removing unreachable block (ram,0x014e5978) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */
/* WARNING: Removing unreachable block (ram,0x0152a528) */
/* WARNING: Removing unreachable block (ram,0x0152a540) */
/* WARNING: Removing unreachable block (ram,0x0152a558) */
/* WARNING: Removing unreachable block (ram,0x0152a560) */
/* WARNING: Removing unreachable block (ram,0x0152a578) */
/* WARNING: Removing unreachable block (ram,0x0152a580) */
/* WARNING: Removing unreachable block (ram,0x0152a598) */
/* WARNING: Removing unreachable block (ram,0x0152a5b0) */
/* WARNING: Removing unreachable block (ram,0x0152a5c4) */
/* WARNING: Removing unreachable block (ram,0x0152a5dc) */
/* WARNING: Removing unreachable block (ram,0x0152a600) */
/* WARNING: Removing unreachable block (ram,0x0152a614) */
/* WARNING: Removing unreachable block (ram,0x0152a624) */
/* WARNING: Removing unreachable block (ram,0x0152a62c) */
/* WARNING: Removing unreachable block (ram,0x0152a63c) */
/* WARNING: Removing unreachable block (ram,0x0152a650) */
/* WARNING: Removing unreachable block (ram,0x0152a654) */
/* WARNING: Removing unreachable block (ram,0x0152a65c) */
/* WARNING: Removing unreachable block (ram,0x0152a670) */
/* WARNING: Removing unreachable block (ram,0x0152a680) */
/* WARNING: Removing unreachable block (ram,0x0152a684) */
/* WARNING: Removing unreachable block (ram,0x0152a68c) */
/* WARNING: Removing unreachable block (ram,0x0152a69c) */
/* WARNING: Removing unreachable block (ram,0x0152a6b0) */
/* WARNING: Removing unreachable block (ram,0x0152a6b4) */
/* WARNING: Removing unreachable block (ram,0x0152a6bc) */
/* WARNING: Removing unreachable block (ram,0x0152a6d0) */
/* WARNING: Removing unreachable block (ram,0x0152a6e0) */
/* WARNING: Removing unreachable block (ram,0x0152a6e4) */
/* WARNING: Removing unreachable block (ram,0x0152a6ec) */
/* WARNING: Removing unreachable block (ram,0x0152a708) */
/* WARNING: Removing unreachable block (ram,0x0152a71c) */
/* WARNING: Removing unreachable block (ram,0x0152a728) */
/* WARNING: Removing unreachable block (ram,0x0152a73c) */
/* WARNING: Removing unreachable block (ram,0x0152a74c) */
/* WARNING: Removing unreachable block (ram,0x0152a750) */
/* WARNING: Removing unreachable block (ram,0x0152a758) */
/* WARNING: Removing unreachable block (ram,0x0152a774) */
/* WARNING: Removing unreachable block (ram,0x0152a788) */
/* WARNING: Removing unreachable block (ram,0x0152a794) */
/* WARNING: Removing unreachable block (ram,0x0152a7a8) */
/* WARNING: Removing unreachable block (ram,0x0152a7b8) */
/* WARNING: Removing unreachable block (ram,0x0152a7bc) */
/* WARNING: Removing unreachable block (ram,0x0152a7c4) */
/* WARNING: Removing unreachable block (ram,0x0152a7e0) */
/* WARNING: Removing unreachable block (ram,0x0152a7f4) */
/* WARNING: Removing unreachable block (ram,0x0152a800) */
/* WARNING: Removing unreachable block (ram,0x0152a814) */
/* WARNING: Removing unreachable block (ram,0x0152a824) */
/* WARNING: Removing unreachable block (ram,0x0152a828) */
/* WARNING: Removing unreachable block (ram,0x0152a830) */
/* WARNING: Removing unreachable block (ram,0x0152a84c) */
/* WARNING: Removing unreachable block (ram,0x0152a8d0) */
/* WARNING: Removing unreachable block (ram,0x0152a860) */
/* WARNING: Removing unreachable block (ram,0x0152a86c) */
/* WARNING: Removing unreachable block (ram,0x0152a884) */
/* WARNING: Removing unreachable block (ram,0x0152a8c4) */
/* WARNING: Removing unreachable block (ram,0x0152a8c8) */
/* WARNING: Removing unreachable block (ram,0x0152a8d4) */
/* WARNING: Removing unreachable block (ram,0x0152a8dc) */
/* WARNING: Removing unreachable block (ram,0x0152a914) */
/* WARNING: Removing unreachable block (ram,0x0152aa90) */
/* WARNING: Removing unreachable block (ram,0x0152aab8) */
/* WARNING: Removing unreachable block (ram,0x0152aaf8) */
/* WARNING: Removing unreachable block (ram,0x0152ab00) */
/* WARNING: Removing unreachable block (ram,0x0152ab0c) */
/* WARNING: Removing unreachable block (ram,0x0152ab40) */
/* WARNING: Removing unreachable block (ram,0x0152ab48) */
/* WARNING: Removing unreachable block (ram,0x0152ab54) */
/* WARNING: Removing unreachable block (ram,0x0152aba4) */
/* WARNING: Removing unreachable block (ram,0x0152acd4) */
/* WARNING: Removing unreachable block (ram,0x0152acfc) */
/* WARNING: Removing unreachable block (ram,0x0152ad1c) */
/* WARNING: Removing unreachable block (ram,0x0152adf0) */
/* WARNING: Removing unreachable block (ram,0x0152ae20) */
/* WARNING: Removing unreachable block (ram,0x0152ae30) */
/* WARNING: Removing unreachable block (ram,0x0152ae34) */
/* WARNING: Removing unreachable block (ram,0x0152ae50) */
/* WARNING: Removing unreachable block (ram,0x0152ae58) */
/* WARNING: Removing unreachable block (ram,0x0152ae5c) */
/* WARNING: Removing unreachable block (ram,0x0152aeb0) */
/* WARNING: Removing unreachable block (ram,0x0152aeec) */
/* WARNING: Removing unreachable block (ram,0x0152af24) */
/* WARNING: Removing unreachable block (ram,0x0152aec0) */
/* WARNING: Removing unreachable block (ram,0x0152af60) */
/* WARNING: Removing unreachable block (ram,0x0152aec8) */
/* WARNING: Removing unreachable block (ram,0x0152ad34) */
/* WARNING: Removing unreachable block (ram,0x0152ad44) */
/* WARNING: Removing unreachable block (ram,0x0152af88) */
/* WARNING: Removing unreachable block (ram,0x0152ad4c) */
/* WARNING: Removing unreachable block (ram,0x0152af90) */
/* WARNING: Removing unreachable block (ram,0x0152ad64) */
/* WARNING: Removing unreachable block (ram,0x0152ad70) */
/* WARNING: Removing unreachable block (ram,0x0152ad74) */
/* WARNING: Removing unreachable block (ram,0x0152ad7c) */
/* WARNING: Removing unreachable block (ram,0x0152ad84) */
/* WARNING: Removing unreachable block (ram,0x0152af50) */
/* WARNING: Removing unreachable block (ram,0x0152ad94) */
/* WARNING: Removing unreachable block (ram,0x0152adbc) */
/* WARNING: Removing unreachable block (ram,0x0152ada8) */
/* WARNING: Removing unreachable block (ram,0x0152adb8) */
/* WARNING: Removing unreachable block (ram,0x0152abb4) */
/* WARNING: Removing unreachable block (ram,0x0152abc4) */
/* WARNING: Removing unreachable block (ram,0x0152af70) */
/* WARNING: Removing unreachable block (ram,0x0152abd0) */
/* WARNING: Removing unreachable block (ram,0x0152abe4) */
/* WARNING: Removing unreachable block (ram,0x0152af98) */
/* WARNING: Removing unreachable block (ram,0x0152abec) */
/* WARNING: Removing unreachable block (ram,0x0152abfc) */
/* WARNING: Removing unreachable block (ram,0x0152af78) */
/* WARNING: Removing unreachable block (ram,0x0152ac04) */
/* WARNING: Removing unreachable block (ram,0x0152af68) */
/* WARNING: Removing unreachable block (ram,0x0152ac34) */
/* WARNING: Removing unreachable block (ram,0x0152af80) */
/* WARNING: Removing unreachable block (ram,0x0152ac48) */
/* WARNING: Removing unreachable block (ram,0x0152ac54) */
/* WARNING: Removing unreachable block (ram,0x0152ac58) */
/* WARNING: Removing unreachable block (ram,0x0152ac60) */
/* WARNING: Removing unreachable block (ram,0x0152ac68) */
/* WARNING: Removing unreachable block (ram,0x0152af48) */
/* WARNING: Removing unreachable block (ram,0x0152af9c) */
/* WARNING: Removing unreachable block (ram,0x0152ac78) */
/* WARNING: Removing unreachable block (ram,0x0152aca0) */
/* WARNING: Removing unreachable block (ram,0x0152ac8c) */
/* WARNING: Removing unreachable block (ram,0x0152ac9c) */
/* WARNING: Removing unreachable block (ram,0x0152a88c) */
/* WARNING: Removing unreachable block (ram,0x0152a8ac) */

ulong Atlas_Contexts_RoundResultsState__ShowRoundResultsScreen(ulong param_1)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 uVar13;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  uint uVar20;
  long lVar21;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined *puVar22;
  float extraout_s0;
  float fVar23;
  ulong unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar7 = &uStack_80;
  puVar4 = &uStack_80;
  puVar14 = &stack0xfffffffffffffff0;
  lVar21 = 0x3eb4000;
  if ((bRam0000000003eb4c07 & 1) == 0) {
    func_0x00f78a20(0x3d1feb8);
    func_0x00f78a20(0x3d40658);
    func_0x00f78a20(0x3d27390);
    bRam0000000003eb4c07 = 1;
  }
  uStack_58 = 0;
  lStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(long *)(param_1 + 0x90) != 0) {
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(param_1 + 0x90),0,0,0);
    if (*(long *)(param_1 + 0x80) == 0) {
      unaff_x22 = 1;
      lVar16 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d40658);
      if ((*(long *)(param_1 + 0x80) != 0) &&
         (lVar17 = *(long *)(*(long *)(param_1 + 0x80) + 0x20), lVar17 != 0)) {
        lVar21 = *(long *)(lVar17 + 0x170);
        unaff_x23 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.EndOfRoundScreen.TransitionData_TypeInfo*/ uRam0000000003d27390);
        /*Atlas.UI.Screens.EndOfRoundScreen.TransitionData$$.ctor*/ func_0x0154bedc(unaff_x23,0);
        unaff_x21 = lVar16;
        if ((*(long *)(param_1 + 0x98) != 0) && (unaff_x23 != (undefined8 *)0x0)) {
          unaff_x23[2] = *(undefined8 *)(*(long *)(param_1 + 0x98) + 0x10);
          unaff_x23[4] = param_1;
          *(undefined4 *)(unaff_x23 + 3) = 1;
          if ((*(long *)(param_1 + 0x80) != 0) &&
             (lVar17 = *(long *)(*(long *)(param_1 + 0x80) + 0x20), lVar17 != 0)) {
            unaff_x23[5] = *(undefined8 *)(lVar17 + 400);
            unaff_x23[6] = lVar21;
            puVar10 = (undefined8 *)(lVar17 + 0xd0);
            if (lVar16 != 0) {
              puVar10 = (undefined8 *)(lVar16 + 0x20);
            }
            uStack_78 = puVar10[1];
            uStack_80 = *puVar10;
            uStack_68 = puVar10[3];
            uStack_70 = puVar10[2];
            unaff_x23[8] = uStack_78;
            unaff_x23[7] = uStack_80;
            unaff_x23[10] = uStack_68;
            unaff_x23[9] = uStack_70;
            *(undefined8 **)(param_1 + 0xb0) = unaff_x23;
            if (lVar21 != 0) {
              unaff_x21 = 0x3d1feb8;
              /*Core.Networking.NetworkEventResult$$IsValid*/ func_0x01659850(lVar21,0);
              lVar16 = *(long *)(param_1 + 0x88);
              if (((*(ushort *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              lVar21 = 0;
              if (lVar16 != 0) {
                uVar8 = /*Atlas.UI.AtlasUIManager$$TransitionToScreen*/ func_0x0147079c(lVar16,*(undefined8 *)
                                                (*(long *)(/*Atlas.UI.Screens.AtlasScreenIds_TypeInfo*/ lRam0000000003d1feb8 + 0xb8) + 0x88),0,
                                        *(undefined8 *)(param_1 + 0xb0),0);
                return uVar8;
              }
            }
          }
        }
      }
    }
    else {
      lVar16 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
      if (lVar16 != 0) {
        uStack_58 = *(undefined8 *)(lVar16 + 0xd8);
        lStack_60 = *(long *)(lVar16 + 0xd0);
        uStack_48 = *(undefined8 *)(lVar16 + 0xe8);
        uStack_50 = *(undefined8 *)(lVar16 + 0xe0);
        plVar9 = &lStack_60;
        uVar13 = 0;
        puVar22 = (undefined *)0x14e5978;
        goto code_r0x0165e7d4;
      }
    }
  }
  puVar22 = &Atlas_Contexts_RoundResultsState__IsTournamentOver;
  uVar8 = func_0x00f78af4();
code_r0x014e5a98:
  do {
    *(undefined1 **)((long)puVar4 + -0x10) = puVar14;
    *(undefined **)((long)puVar4 + -8) = puVar22;
    if (*(long *)(uVar8 + 0x80) != 0) break;
    uVar8 = func_0x00f78af4();
    puVar5 = (undefined1 *)((long)puVar4 + -0x20);
    puVar14 = (undefined1 *)((long)puVar4 + -0x20);
    *(undefined1 **)((long)puVar4 + -0x20) = (undefined1 *)((long)puVar4 + -0x10);
    *(undefined **)((long)puVar4 + -0x18) = &Atlas_Contexts_RoundResultsState__OnExit;
    if (*(long *)(uVar8 + 0x80) == 0) {
      puVar22 = &Atlas_Contexts_RoundResultsState__RemoveDelegates;
      uVar8 = func_0x00f78af4();
    }
    else {
      if (*(long *)(*(long *)(uVar8 + 0x80) + 0x20) == 0) {
        return uVar8;
      }
      puVar5 = (undefined1 *)((long)puVar4 + -0x10);
      puVar14 = *(undefined1 **)((long)puVar4 + -0x20);
      puVar22 = *(undefined **)((long)puVar4 + -0x18);
    }
    puVar4 = (undefined8 *)(puVar5 + -0x40);
    *(long **)(puVar5 + -0x40) = unaff_x24;
    *(undefined8 **)(puVar5 + -0x38) = unaff_x23;
    *(long *)(puVar5 + -0x30) = unaff_x22;
    *(long *)(puVar5 + -0x28) = unaff_x21;
    *(long *)(puVar5 + -0x20) = lVar21;
    *(ulong *)(puVar5 + -0x18) = param_1;
    *(undefined1 **)(puVar5 + -0x10) = puVar14;
    *(undefined **)(puVar5 + -8) = puVar22;
    puVar14 = puVar5 + -0x10;
    lVar21 = 0x3eb4000;
    if ((bRam0000000003eb4c0d & 1) == 0) {
      func_0x00f78a20(0x3d2a238);
      func_0x00f78a20(0x3d1b518);
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d5c830);
      func_0x00f78a20(0x3d5c838);
      bRam0000000003eb4c0d = 1;
    }
    if (((*(long *)(uVar8 + 0x80) == 0) ||
        (lVar16 = *(long *)(*(long *)(uVar8 + 0x80) + 0x20), lVar16 == 0)) ||
       (unaff_x22 = *(long *)(lVar16 + 0x10), unaff_x22 == 0)) {
      func_0x00f78af4();
    }
    else {
      unaff_x23 = (undefined8 *)0x3d1fa78;
      unaff_x24 = (long *)0x3d5c000;
      lVar21 = *(long *)(unaff_x22 + 0x88);
      unaff_x21 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
      /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,uVar8,uRam0000000003d5c830,0);
      plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar21,unaff_x21,0);
      if ((plVar9 == (long *)0x0) || (*plVar9 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) {
        *(long **)(unaff_x22 + 0x88) = plVar9;
        puVar22 = &UNK_014e5bd8;
        param_1 = uVar8;
        goto code_r0x014e5a98;
      }
    }
    auVar25 = func_0x00f78e5c();
    plVar9 = auVar25._8_8_;
    lVar16 = auVar25._0_8_;
    *(undefined8 *)(puVar5 + -0x80) = unaff_d9;
    *(ulong *)(puVar5 + -0x78) = unaff_d8;
    *(long *)(puVar5 + -0x70) = unaff_x22;
    *(long *)(puVar5 + -0x68) = unaff_x21;
    *(long *)(puVar5 + -0x60) = lVar21;
    *(ulong *)(puVar5 + -0x58) = uVar8;
    *(undefined1 **)(puVar5 + -0x50) = puVar14;
    *(undefined **)(puVar5 + -0x48) = &Atlas_Contexts_RoundResultsState__OnUpdate;
    uVar13 = 0x3eb4000;
    if ((bRam0000000003eb4c06 & 1) == 0) {
      func_0x00f78a20(0x3d22618);
      bRam0000000003eb4c06 = 1;
    }
    puVar14 = (undefined1 *)0x0;
    uVar8 = /*Core.StateManagement.State$$OnUpdate*/ func_0x02b951d8(lVar16,plVar9);
    fVar23 = *(float *)(lVar16 + 0xbc);
    unaff_d8 = (ulong)(uint)fVar23;
    if (0.0 < fVar23) {
      if (plVar9 == (long *)0x0) goto code_r0x014e5da4;
      lVar21 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar21 + 0x12a);
      if (uVar8 != 0) {
        piVar19 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
            puVar10 = (undefined8 *)(lVar21 + (long)*piVar19 * 0x10 + 0x138);
            goto code_r0x014e5d20;
          }
          piVar19 = piVar19 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar14 = (undefined1 *)0x0;
      puVar10 = (undefined8 *)func_0x00fac1f0(plVar9);
code_r0x014e5d20:
      uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      *(float *)(lVar16 + 0xbc) = fVar23 - extraout_s0;
      if (0.0 < fVar23 - extraout_s0) goto code_r0x014e5d48;
      auVar25._8_8_ = *(undefined8 *)(lVar16 + 0x80);
      auVar25._0_8_ = lVar16;
      puVar22 = &UNK_014e5d48;
code_r0x014e5da8:
      uVar8 = auVar25._0_8_;
      puVar6 = puVar5 + -0xa0;
      *(long **)(puVar5 + -0xa0) = plVar9;
      *(long *)(puVar5 + -0x98) = lVar16;
      *(undefined1 **)(puVar5 + -0x90) = puVar5 + -0x50;
      *(undefined **)(puVar5 + -0x88) = puVar22;
      puVar15 = puVar5 + -0x90;
      if (*(char *)(uVar8 + 0xb8) != '\0') {
        return uVar8;
      }
      uVar18 = uVar8;
      if (auVar25._8_8_ == 0) {
code_r0x014e5ddc:
        *(undefined1 *)(uVar8 + 0xb8) = 1;
        return uVar18;
      }
      plVar11 = *(long **)(auVar25._8_8_ + 0x20);
      if (plVar11 != (long *)0x0) {
        uVar18 = (**(code **)(*plVar11 + 0x228))(plVar11,*(undefined8 *)(*plVar11 + 0x230));
        goto code_r0x014e5ddc;
      }
      puVar22 = &Atlas_Contexts_RoundResultsState__BackOut;
      lVar16 = func_0x00f78af4();
    }
    else {
code_r0x014e5d48:
      if (*(long *)(lVar16 + 0x80) == 0) {
code_r0x014e5da4:
        puVar22 = &Atlas_Contexts_RoundResultsState__RequestResultsFinish;
        auVar25 = func_0x00f78af4();
        goto code_r0x014e5da8;
      }
      lVar21 = *(long *)(*(long *)(lVar16 + 0x80) + 0x20);
      if ((lVar21 == 0) || (*(char *)(lVar21 + 0x19c) != '\0')) {
        return uVar8;
      }
      /*Atlas.Contexts.RoundResultsState$$RemoveDelegates*/ func_0x014e5af8(lVar16);
      if (*(long *)(lVar16 + 0x80) == 0) goto code_r0x014e5da4;
      /*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(lVar16 + 0x80),0);
      puVar15 = *(undefined1 **)(puVar5 + -0x50);
      puVar22 = *(undefined **)(puVar5 + -0x48);
      plVar9 = *(long **)(puVar5 + -0x60);
      uVar8 = *(ulong *)(puVar5 + -0x58);
      unaff_x22 = *(long *)(puVar5 + -0x70);
      uVar13 = *(undefined8 *)(puVar5 + -0x68);
      puVar6 = puVar5 + -0x40;
      unaff_d9 = *(undefined8 *)(puVar5 + -0x80);
      unaff_d8 = *(ulong *)(puVar5 + -0x78);
    }
    *(long **)(puVar6 + -0x20) = plVar9;
    *(ulong *)(puVar6 + -0x18) = uVar8;
    *(undefined1 **)(puVar6 + -0x10) = puVar15;
    *(undefined **)(puVar6 + -8) = puVar22;
    if ((bRam0000000003eb4c0c & 1) == 0) {
      func_0x00f78a20(0x3d6d050);
      bRam0000000003eb4c0c = 1;
    }
    if (*(long *)(lVar16 + 0xa0) != 0) {
      /*Atlas.UI.VotingManager$$VotingFinished*/ func_0x0152a194(*(long *)(lVar16 + 0xa0),0);
      uVar2 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
      lVar21 = *(long *)(lVar16 + 0xa8);
      if (lVar21 != 0) {
        cVar1 = *(char *)(lVar21 + 0x50);
        if (cVar1 == '\0') {
          *(undefined1 *)(lVar21 + 0x50) = 1;
          *(undefined8 *)(lVar21 + 0x40) = uVar2;
          *(undefined8 *)(lVar21 + 0x48) = 0;
        }
        return (ulong)(cVar1 == '\0');
      }
    }
    func_0x00f78af4();
    *(undefined8 *)(puVar6 + -0x70) = unaff_x26;
    *(undefined8 *)(puVar6 + -0x68) = unaff_x25;
    *(long **)(puVar6 + -0x60) = unaff_x24;
    *(undefined8 **)(puVar6 + -0x58) = unaff_x23;
    *(long *)(puVar6 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar6 + -0x48) = uVar13;
    *(undefined8 *)(puVar6 + -0x40) = 0x3eb4000;
    *(long *)(puVar6 + -0x38) = lVar16;
    *(undefined1 **)(puVar6 + -0x30) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0x28) =
         &Atlas_Contexts_RoundResultsState__UpdateEntryPreviousPositions;
    lVar21 = 0x3eb4000;
    puVar15 = puVar14;
    if ((bRam0000000003eb4c08 & 1) == 0) {
      func_0x00f78a20(0x3d2cf38);
      func_0x00f78a20(0x3d1b978);
      func_0x00f78a20(0x3d32b90);
      func_0x00f78a20(0x3d32b98);
      func_0x00f78a20(0x3d32ba0);
      func_0x00f78a20(0x3d3d168);
      func_0x00f78a20(0x3d3b5c0);
      func_0x00f78a20(0x3d3d178);
      func_0x00f78a20(0x3d3d180);
      func_0x00f78a20(0x3d3b5d0);
      func_0x00f78a20(0x3d3d188);
      func_0x00f78a20(0x3d3d190);
      func_0x00f78a20(0x3d63bc0);
      func_0x00f78a20(0x3d289f8);
      bRam0000000003eb4c08 = 1;
    }
    unaff_x25 = 0x3d32b98;
    unaff_x26 = 0x3d3d168;
    unaff_x22 = 0x3d32b90;
    *(undefined8 *)(puVar6 + -0x88) = 0;
    *(undefined8 *)(puVar6 + -0x90) = 0;
    *(undefined8 *)(puVar6 + -0x78) = 0;
    *(undefined8 *)(puVar6 + -0x80) = 0;
    *(undefined4 *)(puVar6 + -0x98) = 0;
    *(undefined8 *)(puVar6 + -0xa0) = 0;
    lVar16 = *(long *)(extraout_x1 + 0x18);
    if ((lVar16 != 0) && (0 < *(int *)(lVar16 + 0x18))) {
      /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(puVar6 + -0xc0,lVar16,uRam0000000003d3b5c0);
      *(undefined8 *)(puVar6 + -0x88) = *(undefined8 *)(puVar6 + -0xb8);
      *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0xc0);
      *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0xa8);
      *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0xb0);
      uVar20 = 1;
      while( true ) {
        uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(puVar6 + -0x90,uRam0000000003d32b98);
        if ((uVar8 & 1) == 0) {
          uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar6 + -0x90,uRam0000000003d32b90);
          return uVar8;
        }
        if (puVar14 == (undefined1 *)0x0) break;
        /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(puVar14,(ulong)uVar20 | *(ulong *)(puVar6 + -0x80) << 0x20,
                        *(ulong *)(puVar6 + -0x80) >> 0x20,uRam0000000003d3d168);
        uVar20 = uVar20 + 1;
      }
      func_0x00f78af4();
code_r0x014e6194:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x14e6198);
      (*pcVar3)();
    }
    lVar16 = extraout_x1;
    if (*(long *)(extraout_x1 + 8) == 0) goto code_r0x014e6198;
    unaff_x24 = (long *)0x3d289f8;
    unaff_x23 = (undefined8 *)0x3d3d178;
    /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(puVar6 + -0xc0,*(long *)(extraout_x1 + 8),uRam0000000003d3b5c0);
    *(undefined8 *)(puVar6 + -0x88) = *(undefined8 *)(puVar6 + -0xb8);
    *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0xc0);
    *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0xa8);
    *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0xb0);
    while (uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(puVar6 + -0x90,uRam0000000003d32b98), (uVar8 & 1) != 0) {
      lVar21 = *(long *)(puVar6 + -0x80);
      puVar15 = puVar6 + -0xa0;
      uVar8 = /*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(extraout_x1,lVar21,puVar15,0);
      if ((uVar8 & 1) != 0) {
        if (puVar14 == (undefined1 *)0x0) {
          func_0x00f78af4();
          goto code_r0x014e6194;
        }
        puVar15 = (undefined1 *)
                  (ulong)(uint)((int)((ulong)lVar21 >> 0x20) - *(int *)(puVar6 + -0x9c));
        /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(puVar14,lVar21 << 0x20,puVar15,uRam0000000003d3d168);
      }
    }
    /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar6 + -0x90,uRam0000000003d32b90);
    do {
      lVar17 = *unaff_x24;
      if (((*(ushort *)(lVar17 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar17 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar17 = *unaff_x24;
      }
      plVar9 = *(long **)(lVar17 + 0xb8);
      lVar16 = plVar9[1];
      if (lVar16 == 0) {
        if (((*(ushort *)(lVar17 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar17 + 0xe0) == 0)) {
          func_0x00f78ad0();
          plVar9 = *(long **)(*unaff_x24 + 0xb8);
        }
        lVar21 = *plVar9;
        lVar16 = func_0x00f78aec(/*System.Comparison<EndOfRoundScreen.LeaderboardEntry>_TypeInfo*/ uRam0000000003d1b978);
        puVar15 = puRam0000000003d63bc0;
        /*System.Comparison<EndOfRoundScreen.LeaderboardEntry>$$.ctor*/ func_0x01dc71e8(lVar16,lVar21,puRam0000000003d63bc0,uRam0000000003d2cf38);
        *(long *)(*(long *)(*unaff_x24 + 0xb8) + 8) = lVar16;
      }
      if (puVar14 != (undefined1 *)0x0) {
        uVar8 = /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Sort*/ func_0x025212a4(puVar14,lVar16,*unaff_x23);
        uVar18 = (ulong)*(uint *)(puVar14 + 0x18);
        if ((int)*(uint *)(puVar14 + 0x18) < 1) {
          return uVar8;
        }
        lVar21 = 0;
        uVar8 = 0;
        do {
          if ((uVar18 & 0xffffffff) <= uVar8) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar8 = uVar8 + 1;
          uVar12 = /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(puVar14,(int)uVar8 + -1,
                                   uVar8 | (ulong)*(uint *)(*(long *)(puVar14 + 0x10) + lVar21 +
                                                           0x24) << 0x20,
                                   *(undefined8 *)(*(long *)(puVar14 + 0x10) + lVar21 + 0x28),
                                   uRam0000000003d3d190);
          uVar18 = (ulong)*(int *)(puVar14 + 0x18);
          lVar21 = lVar21 + 0x10;
        } while ((long)uVar8 < (long)uVar18);
        return uVar12;
      }
code_r0x014e6198:
      func_0x00f78af4();
      if (extraout_w1 != 1) goto code_r0x014e620c;
      plVar9 = (long *)___cxa_begin_catch();
      lVar16 = *plVar9;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar6 + -0x90,uRam0000000003d32b90);
    } while (lVar16 == 0);
    func_0x00f78ac0(lVar16,0);
code_r0x014e620c:
    auVar25 = __Unwind_Resume();
    uVar8 = auVar25._0_8_;
    *(long **)(puVar6 + -0x100) = unaff_x24;
    *(undefined8 **)(puVar6 + -0xf8) = unaff_x23;
    *(undefined8 *)(puVar6 + -0xf0) = 0x3d32b90;
    *(long *)(puVar6 + -0xe8) = lVar21;
    *(long *)(puVar6 + -0xe0) = lVar16;
    *(undefined1 **)(puVar6 + -0xd8) = puVar14;
    *(undefined1 **)(puVar6 + -0xd0) = puVar6 + -0x30;
    *(undefined **)(puVar6 + -200) = &Atlas_Contexts_RoundResultsState__UpdateEntryStarDeltas;
    puVar14 = puVar15;
    if ((bRam0000000003eb4c09 & 1) == 0) {
      func_0x00f78a20(0x3d3d180);
      func_0x00f78a20(0x3d3d188);
      uVar8 = func_0x00f78a20(0x3d3d190);
      bRam0000000003eb4c09 = 1;
    }
    *(undefined4 *)(puVar6 + -0x108) = 0;
    *(undefined8 *)(puVar6 + -0x110) = 0;
    if (puVar15 != (undefined1 *)0x0) {
      uVar18 = (ulong)*(uint *)(puVar15 + 0x18);
      if (0 < (int)*(uint *)(puVar15 + 0x18)) {
        lVar21 = 0;
        uVar12 = 0;
        do {
          if ((uVar18 & 0xffffffff) <= uVar12) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar8 = /*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(auVar25._8_8_,
                                  *(undefined4 *)(*(long *)(puVar15 + 0x10) + lVar21 + 0x24),
                                  puVar6 + -0x110,0);
          if ((int)uVar8 != 0) {
            if (*(uint *)(puVar15 + 0x18) <= uVar12) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            uVar8 = /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(puVar15,uVar12,
                                    *(undefined8 *)(*(long *)(puVar15 + 0x10) + lVar21 + 0x20),
                                    CONCAT44(*(undefined4 *)(puVar6 + -0x10c),
                                             *(undefined4 *)
                                              (*(long *)(puVar15 + 0x10) + lVar21 + 0x28)),
                                    uRam0000000003d3d190);
          }
          uVar12 = uVar12 + 1;
          uVar18 = (ulong)*(int *)(puVar15 + 0x18);
          lVar21 = lVar21 + 0x10;
        } while ((long)uVar12 < (long)uVar18);
      }
      return uVar8;
    }
    auVar24 = func_0x00f78af4();
    uVar8 = auVar24._0_8_;
    *(long **)(puVar6 + -0x150) = unaff_x24;
    *(undefined8 **)(puVar6 + -0x148) = unaff_x23;
    *(undefined8 *)(puVar6 + -0x140) = 0x3d32b90;
    *(undefined8 *)(puVar6 + -0x138) = 0x3eb4000;
    *(long *)(puVar6 + -0x130) = auVar25._8_8_;
    *(undefined8 *)(puVar6 + -0x128) = 0;
    *(undefined1 **)(puVar6 + -0x120) = puVar6 + -0xd0;
    *(undefined **)(puVar6 + -0x118) = &Atlas_Contexts_RoundResultsState__UpdateEntryCurrentStars;
    if ((bRam0000000003eb4c0a & 1) == 0) {
      func_0x00f78a20(0x3d3d180);
      func_0x00f78a20(0x3d3d188);
      uVar8 = func_0x00f78a20(0x3d3d190);
      bRam0000000003eb4c0a = 1;
    }
    *(undefined4 *)(puVar6 + -0x158) = 0;
    *(undefined8 *)(puVar6 + -0x160) = 0;
    if (puVar14 != (undefined1 *)0x0) {
      uVar18 = (ulong)*(uint *)(puVar14 + 0x18);
      if (0 < (int)*(uint *)(puVar14 + 0x18)) {
        uVar12 = 0;
        lVar21 = 0x20;
        do {
          if ((uVar18 & 0xffffffff) <= uVar12) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar8 = /*Core.Networking.NetworkTournament$$GetTotalNetworkScore*/ func_0x01660f34(auVar24._8_8_,
                                  *(undefined4 *)(*(long *)(puVar14 + 0x10) + lVar21 + 4),
                                  puVar6 + -0x160,0);
          if ((int)uVar8 != 0) {
            if (*(uint *)(puVar14 + 0x18) <= uVar12) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            uVar8 = /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(puVar14,uVar12,
                                    *(undefined8 *)(*(long *)(puVar14 + 0x10) + lVar21),
                                    *(undefined4 *)(puVar6 + -0x15c),uRam0000000003d3d190);
          }
          uVar12 = uVar12 + 1;
          uVar18 = (ulong)*(int *)(puVar14 + 0x18);
          lVar21 = lVar21 + 0x10;
        } while ((long)uVar12 < (long)uVar18);
      }
      return uVar8;
    }
    auVar25 = func_0x00f78af4();
    lVar21 = auVar25._8_8_;
    puVar10 = auVar25._0_8_;
    *(long **)(puVar6 + -0x1a0) = unaff_x24;
    *(undefined8 **)(puVar6 + -0x198) = unaff_x23;
    *(undefined8 *)(puVar6 + -400) = 0x3d32b90;
    *(undefined8 *)(puVar6 + -0x188) = 0x3eb4000;
    *(long *)(puVar6 + -0x180) = auVar24._8_8_;
    *(undefined8 *)(puVar6 + -0x178) = 0;
    *(undefined1 **)(puVar6 + -0x170) = puVar6 + -0x120;
    *(undefined **)(puVar6 + -0x168) =
         &Atlas_Contexts_RoundResultsState__SortEntriesByStarCountFromTournamentData;
    if ((bRam0000000003eb4c0b & 1) == 0) {
      func_0x00f78a20(0x3d32b90);
      func_0x00f78a20(0x3d32b98);
      func_0x00f78a20(0x3d32ba0);
      func_0x00f78a20(0x3d3d168);
      func_0x00f78a20(0x3d3d170);
      func_0x00f78a20(0x3d3b5c0);
      bRam0000000003eb4c0b = 1;
    }
    *(undefined8 *)(puVar6 + -0x1b8) = 0;
    *(undefined8 *)(puVar6 + -0x1c0) = 0;
    *(undefined8 *)(puVar6 + -0x1a8) = 0;
    *(undefined8 *)(puVar6 + -0x1b0) = 0;
    if (lVar21 != 0) {
      /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Clear*/ func_0x0251f970(lVar21,uRam0000000003d3d170);
      if (puVar10[1] != 0) {
        /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(puVar6 + -0x1c0,puVar10[1],uRam0000000003d3b5c0);
        uVar20 = 1;
        while (uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(puVar6 + -0x1c0,uRam0000000003d32b98), (uVar8 & 1) != 0) {
          /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(lVar21,(ulong)uVar20 | *(ulong *)(puVar6 + -0x1b0) << 0x20,
                          *(ulong *)(puVar6 + -0x1b0) >> 0x20,uRam0000000003d3d168);
          uVar20 = uVar20 + 1;
        }
        uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar6 + -0x1c0,uRam0000000003d32b90);
        return uVar8;
      }
    }
    func_0x00f78af4();
    if (extraout_w1_00 == 1) {
      plVar9 = (long *)___cxa_begin_catch();
      lVar21 = *plVar9;
      ___cxa_end_catch();
      uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar6 + -0x1c0,*puVar10);
      if (lVar21 == 0) {
        return uVar8;
      }
      func_0x00f78ac0(lVar21,0);
    }
    uVar8 = __Unwind_Resume();
    puVar4 = (undefined8 *)(puVar6 + -0x1f0);
    *(undefined8 *)(puVar6 + -0x1f0) = 0x3d32b90;
    *(undefined8 *)(puVar6 + -0x1e8) = 0x3eb4000;
    *(undefined8 **)(puVar6 + -0x1e0) = puVar10;
    *(long *)(puVar6 + -0x1d8) = lVar21;
    *(undefined1 **)(puVar6 + -0x1d0) = puVar6 + -0x170;
    *(undefined **)(puVar6 + -0x1c8) = &Atlas_Contexts_RoundResultsState__OnResultsFinished;
    puVar14 = puVar6 + -0x1d0;
    lVar21 = 0x3eb4000;
    if ((bRam0000000003eb4c0e & 1) == 0) {
      func_0x00f78a20(0x3d2a5b0);
      func_0x00f78a20(0x3d194d8);
      func_0x00f78a20(0x3d27638);
      func_0x00f78a20(0x3d40650);
      func_0x00f78a20(0x3d40658);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb4c0e = 1;
    }
    unaff_x21 = 0x3d40650;
    puVar22 = &UNK_014e6624;
    param_1 = uVar8;
  } while( true );
  lVar16 = *(long *)(*(long *)(uVar8 + 0x80) + 0x20);
  if (lVar16 == 0) {
    return 1;
  }
  *(long *)((long)puVar4 + -0x20) = lVar21;
  *(ulong *)((long)puVar4 + -0x18) = param_1;
  *(undefined8 *)((long)puVar4 + -0x10) = *(undefined8 *)((long)puVar4 + -0x10);
  *(undefined8 *)((long)puVar4 + -8) = *(undefined8 *)((long)puVar4 + -8);
  if ((bRam0000000003eb583f & 1) == 0) {
    func_0x00f78a20(0x3d3b6c0,0);
    bRam0000000003eb583f = 1;
  }
  if (*(long *)(lVar16 + 0xd0) != 0) {
    return (ulong)(2 < *(int *)(*(long *)(lVar16 + 0xd0) + 0x18));
  }
  auVar25 = func_0x00f78af4();
  uVar13 = auVar25._8_8_;
  param_1 = auVar25._0_8_;
  puVar7 = (undefined8 *)((long)puVar4 + -0xa0);
  *(undefined8 *)((long)puVar4 + -0x80) = unaff_x28;
  *(undefined8 *)((long)puVar4 + -0x78) = unaff_x27;
  *(undefined8 *)((long)puVar4 + -0x70) = unaff_x26;
  *(undefined8 *)((long)puVar4 + -0x68) = unaff_x25;
  *(long **)((long)puVar4 + -0x60) = unaff_x24;
  *(undefined8 **)((long)puVar4 + -0x58) = unaff_x23;
  *(long *)((long)puVar4 + -0x50) = unaff_x22;
  *(long *)((long)puVar4 + -0x48) = unaff_x21;
  *(undefined8 *)((long)puVar4 + -0x40) = 0x3eb5000;
  *(long *)((long)puVar4 + -0x38) = lVar16;
  *(undefined1 **)((long)puVar4 + -0x30) = (undefined1 *)((long)puVar4 + -0x10);
  *(undefined **)((long)puVar4 + -0x28) = &Core_Networking_NetworkSession__GetSpawnPositions;
  puVar14 = (undefined1 *)((long)puVar4 + -0x30);
  lVar21 = 0x3eb5000;
  if ((bRam0000000003eb5840 & 1) == 0) {
    func_0x00f78a20(0x3d3b5f0);
    func_0x00f78a20(0x3d3b5f8);
    func_0x00f78a20(0x3d3b520);
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3b5d8);
    func_0x00f78a20(0x3d3f438);
    func_0x00f78a20(0x3d1e5a8);
    func_0x00f78a20(0x3d638b0);
    func_0x00f78a20(0x3d282f8);
    bRam0000000003eb5840 = 1;
    uVar13 = extraout_x1_00;
  }
  plVar9 = (long *)(param_1 + 0xd0);
  puVar22 = &UNK_0165e680;
code_r0x0165e7d4:
  *(long *)((long)puVar7 + -0x20) = lVar21;
  *(ulong *)((long)puVar7 + -0x18) = param_1;
  *(undefined1 **)((long)puVar7 + -0x10) = puVar14;
  *(undefined **)((long)puVar7 + -8) = puVar22;
  if ((bRam0000000003eb585d & 1) == 0) {
    func_0x00f78a20(0x3d3b6c0,uVar13);
    bRam0000000003eb585d = 1;
  }
  if (*plVar9 == 0) {
    uVar8 = func_0x00f78af4();
    return uVar8;
  }
  return (ulong)*(uint *)(*plVar9 + 0x18);
}



// ============================================================
// RVA: 0x14e5a98 | Atlas.Contexts.RoundResultsState.IsTournamentOver
// ============================================================

/* WARNING: Possible PIC construction at 0x0165e67c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0165e6e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e5d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e6854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e6858) */
/* WARNING: Removing unreachable block (ram,0x0165e6ec) */
/* WARNING: Removing unreachable block (ram,0x0165e6f4) */
/* WARNING: Removing unreachable block (ram,0x0165e704) */
/* WARNING: Removing unreachable block (ram,0x0165e70c) */
/* WARNING: Removing unreachable block (ram,0x0165e710) */
/* WARNING: Removing unreachable block (ram,0x0165e760) */
/* WARNING: Removing unreachable block (ram,0x0165e784) */
/* WARNING: Removing unreachable block (ram,0x0165e78c) */
/* WARNING: Removing unreachable block (ram,0x0165e7a0) */
/* WARNING: Removing unreachable block (ram,0x0165e680) */
/* WARNING: Removing unreachable block (ram,0x0165e688) */
/* WARNING: Removing unreachable block (ram,0x0165e690) */
/* WARNING: Removing unreachable block (ram,0x0165e7d0) */
/* WARNING: Removing unreachable block (ram,0x0165e6a8) */
/* WARNING: Removing unreachable block (ram,0x0165e7ac) */
/* WARNING: Removing unreachable block (ram,0x0165e6b4) */
/* WARNING: Removing unreachable block (ram,0x0165e6d0) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */

long * Atlas_Contexts_RoundResultsState__IsTournamentOver(long param_1)

{
  short sVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  int extraout_w1;
  long extraout_x1;
  int extraout_w1_00;
  long *plVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar25;
  undefined8 unaff_x21;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint uVar29;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *puVar30;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar31;
  undefined8 unaff_x28;
  undefined *puVar32;
  float extraout_s0;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar12 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
    if (lVar12 == 0) {
      return (long *)((long)&MACH_HEADER.magic + 1);
    }
    if ((bRam0000000003eb583f & 1) == 0) {
      func_0x00f78a20(0x3d3b6c0,0);
      bRam0000000003eb583f = 1;
    }
    lVar12 = *(long *)(lVar12 + 0xd0);
    if (lVar12 == 0) {
      lVar12 = func_0x00f78af4();
      if ((bRam0000000003eb5840 & 1) == 0) {
        func_0x00f78a20(0x3d3b5f0);
        func_0x00f78a20(0x3d3b5f8);
        func_0x00f78a20(0x3d3b520);
        func_0x00f78a20(0x3d3b5d0);
        func_0x00f78a20(0x3d3b5d8);
        func_0x00f78a20(0x3d3f438);
        func_0x00f78a20(0x3d1e5a8);
        func_0x00f78a20(0x3d638b0);
        func_0x00f78a20(0x3d282f8);
        bRam0000000003eb5840 = 1;
      }
      if ((bRam0000000003eb585d & 1) == 0) {
        func_0x00f78a20(0x3d3b6c0);
        bRam0000000003eb585d = 1;
      }
      if (*(long *)(lVar12 + 0xd0) == 0) {
        plVar18 = (long *)func_0x00f78af4();
        return plVar18;
      }
      return (long *)(ulong)*(uint *)(*(long *)(lVar12 + 0xd0) + 0x18);
    }
    return (long *)(ulong)(2 < *(int *)(lVar12 + 0x18));
  }
  plVar18 = (long *)func_0x00f78af4();
  puVar6 = &stack0xffffffffffffffe0;
  puVar31 = &stack0xffffffffffffffe0;
  if (plVar18[0x10] == 0) {
    puVar32 = &Atlas_Contexts_RoundResultsState__RemoveDelegates;
    plVar18 = (long *)func_0x00f78af4();
  }
  else {
    if (*(long *)(plVar18[0x10] + 0x20) == 0) {
      return plVar18;
    }
    puVar6 = &stack0xfffffffffffffff0;
    puVar32 = &Atlas_Contexts_RoundResultsState__OnExit;
    puVar31 = &stack0xfffffffffffffff0;
  }
  *(long **)(puVar6 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar6 + -0x38) = unaff_x23;
  *(long *)(puVar6 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar6 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar6 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar6 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar6 + -0x10) = puVar31;
  *(undefined **)(puVar6 + -8) = puVar32;
  uVar25 = 0x3eb4000;
  if ((bRam0000000003eb4c0d & 1) == 0) {
    func_0x00f78a20(0x3d2a238);
    func_0x00f78a20(0x3d1b518);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5c830);
    func_0x00f78a20(0x3d5c838);
    bRam0000000003eb4c0d = 1;
  }
  if (((plVar18[0x10] == 0) || (lVar12 = *(long *)(plVar18[0x10] + 0x20), lVar12 == 0)) ||
     (unaff_x22 = *(long *)(lVar12 + 0x10), unaff_x22 == 0)) {
code_r0x014e5c68:
    func_0x00f78af4();
  }
  else {
    unaff_x23 = (undefined8 *)0x3d1fa78;
    unaff_x24 = (long *)0x3d5c000;
    uVar25 = *(undefined8 *)(unaff_x22 + 0x88);
    unaff_x21 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,plVar18,uRam0000000003d5c830,0);
    plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar25,unaff_x21,0);
    if ((plVar13 == (long *)0x0) || (*plVar13 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) {
      *(long **)(unaff_x22 + 0x88) = plVar13;
      plVar13 = (long *)Atlas_Contexts_RoundResultsState__IsTournamentOver(plVar18);
      if (((ulong)plVar13 & 1) != 0) {
        return plVar13;
      }
      if (((plVar18[0x10] == 0) || (lVar12 = *(long *)(plVar18[0x10] + 0x20), lVar12 == 0)) ||
         (unaff_x22 = *(long *)(lVar12 + 0x10), unaff_x23 = (undefined8 *)0x3d1fa78, unaff_x22 == 0)
         ) goto code_r0x014e5c68;
      uVar25 = *(undefined8 *)(unaff_x22 + 0x40);
      unaff_x23 = (undefined8 *)0x3d1b518;
      unaff_x21 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
      /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(unaff_x21,plVar18,uRam0000000003d5c838,uRam0000000003d2a238);
      plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar25,unaff_x21,0);
      if ((plVar13 == (long *)0x0) || (*plVar13 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
        *(long **)(unaff_x22 + 0x40) = plVar13;
        return plVar13;
      }
    }
  }
  auVar36 = func_0x00f78e5c();
  plVar13 = auVar36._8_8_;
  lVar12 = auVar36._0_8_;
  *(undefined8 *)(puVar6 + -0x80) = unaff_d9;
  *(undefined8 *)(puVar6 + -0x78) = unaff_d8;
  *(long *)(puVar6 + -0x70) = unaff_x22;
  *(undefined8 *)(puVar6 + -0x68) = unaff_x21;
  *(undefined8 *)(puVar6 + -0x60) = uVar25;
  *(long **)(puVar6 + -0x58) = plVar18;
  *(undefined1 **)(puVar6 + -0x50) = puVar6 + -0x10;
  *(undefined **)(puVar6 + -0x48) = &Atlas_Contexts_RoundResultsState__OnUpdate;
  uVar25 = 0x3eb4000;
  if ((bRam0000000003eb4c06 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4c06 = 1;
  }
  plVar19 = (long *)0x0;
  plVar18 = (long *)/*Core.StateManagement.State$$OnUpdate*/ func_0x02b951d8(lVar12,plVar13);
  fVar35 = *(float *)(lVar12 + 0xbc);
  if (0.0 < fVar35) {
    if (plVar13 == (long *)0x0) goto code_r0x014e5da4;
    lVar21 = *plVar13;
    uVar23 = (ulong)*(ushort *)(lVar21 + 0x12a);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar14 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
          goto code_r0x014e5d20;
        }
        piVar24 = piVar24 + 4;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    plVar19 = (long *)0x0;
    puVar14 = (undefined8 *)func_0x00fac1f0(plVar13);
code_r0x014e5d20:
    plVar18 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
    fVar35 = fVar35 - extraout_s0;
    *(float *)(lVar12 + 0xbc) = fVar35;
    if (0.0 < fVar35) goto code_r0x014e5d48;
    auVar36._8_8_ = *(undefined8 *)(lVar12 + 0x80);
    auVar36._0_8_ = lVar12;
    puVar32 = &UNK_014e5d48;
code_r0x014e5da8:
    plVar18 = auVar36._0_8_;
    puVar7 = puVar6 + -0xa0;
    *(long **)(puVar6 + -0xa0) = plVar13;
    *(long *)(puVar6 + -0x98) = lVar12;
    *(undefined1 **)(puVar6 + -0x90) = puVar6 + -0x50;
    *(undefined **)(puVar6 + -0x88) = puVar32;
    puVar31 = puVar6 + -0x90;
    if ((char)plVar18[0x17] != '\0') {
      return plVar18;
    }
    plVar16 = plVar18;
    if (auVar36._8_8_ == 0) {
code_r0x014e5ddc:
      *(undefined1 *)(plVar18 + 0x17) = 1;
      return plVar16;
    }
    plVar16 = *(long **)(auVar36._8_8_ + 0x20);
    if (plVar16 != (long *)0x0) {
      plVar16 = (long *)(**(code **)(*plVar16 + 0x228))(plVar16,*(undefined8 *)(*plVar16 + 0x230));
      goto code_r0x014e5ddc;
    }
    puVar32 = &Atlas_Contexts_RoundResultsState__BackOut;
    lVar12 = func_0x00f78af4();
  }
  else {
code_r0x014e5d48:
    if (*(long *)(lVar12 + 0x80) == 0) {
code_r0x014e5da4:
      puVar32 = &Atlas_Contexts_RoundResultsState__RequestResultsFinish;
      auVar36 = func_0x00f78af4();
      goto code_r0x014e5da8;
    }
    lVar21 = *(long *)(*(long *)(lVar12 + 0x80) + 0x20);
    if ((lVar21 == 0) || (*(char *)(lVar21 + 0x19c) != '\0')) {
      return plVar18;
    }
    /*Atlas.Contexts.RoundResultsState$$RemoveDelegates*/ func_0x014e5af8(lVar12);
    if (*(long *)(lVar12 + 0x80) == 0) goto code_r0x014e5da4;
    /*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(lVar12 + 0x80),0);
    puVar31 = *(undefined1 **)(puVar6 + -0x50);
    puVar32 = *(undefined **)(puVar6 + -0x48);
    plVar13 = *(long **)(puVar6 + -0x60);
    plVar18 = *(long **)(puVar6 + -0x58);
    unaff_x22 = *(long *)(puVar6 + -0x70);
    uVar25 = *(undefined8 *)(puVar6 + -0x68);
    puVar7 = puVar6 + -0x40;
  }
  *(long **)(puVar7 + -0x20) = plVar13;
  *(long **)(puVar7 + -0x18) = plVar18;
  *(undefined1 **)(puVar7 + -0x10) = puVar31;
  *(undefined **)(puVar7 + -8) = puVar32;
  if ((bRam0000000003eb4c0c & 1) == 0) {
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb4c0c = 1;
  }
  if (*(long *)(lVar12 + 0xa0) != 0) {
    /*Atlas.UI.VotingManager$$VotingFinished*/ func_0x0152a194(*(long *)(lVar12 + 0xa0),0);
    uVar28 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
    lVar21 = *(long *)(lVar12 + 0xa8);
    if (lVar21 != 0) {
      cVar2 = *(char *)(lVar21 + 0x50);
      if (cVar2 == '\0') {
        *(undefined1 *)(lVar21 + 0x50) = 1;
        *(undefined8 *)(lVar21 + 0x40) = uVar28;
        *(undefined8 *)(lVar21 + 0x48) = 0;
      }
      return (long *)(ulong)(cVar2 == '\0');
    }
  }
  func_0x00f78af4();
  *(undefined8 *)(puVar7 + -0x70) = unaff_x26;
  *(undefined8 *)(puVar7 + -0x68) = unaff_x25;
  *(long **)(puVar7 + -0x60) = unaff_x24;
  *(undefined8 **)(puVar7 + -0x58) = unaff_x23;
  *(long *)(puVar7 + -0x50) = unaff_x22;
  *(undefined8 *)(puVar7 + -0x48) = uVar25;
  *(undefined8 *)(puVar7 + -0x40) = 0x3eb4000;
  *(long *)(puVar7 + -0x38) = lVar12;
  *(undefined1 **)(puVar7 + -0x30) = puVar7 + -0x10;
  *(undefined **)(puVar7 + -0x28) = &Atlas_Contexts_RoundResultsState__UpdateEntryPreviousPositions;
  lVar12 = 0x3eb4000;
  plVar18 = plVar19;
  if ((bRam0000000003eb4c08 & 1) == 0) {
    func_0x00f78a20(0x3d2cf38);
    func_0x00f78a20(0x3d1b978);
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3d168);
    func_0x00f78a20(0x3d3b5c0);
    func_0x00f78a20(0x3d3d178);
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3d188);
    func_0x00f78a20(0x3d3d190);
    func_0x00f78a20(0x3d63bc0);
    func_0x00f78a20(0x3d289f8);
    bRam0000000003eb4c08 = 1;
  }
  uVar25 = 0x3d32b90;
  *(undefined8 *)(puVar7 + -0x88) = 0;
  *(undefined8 *)(puVar7 + -0x90) = 0;
  *(undefined8 *)(puVar7 + -0x78) = 0;
  *(undefined8 *)(puVar7 + -0x80) = 0;
  *(undefined4 *)(puVar7 + -0x98) = 0;
  *(undefined8 *)(puVar7 + -0xa0) = 0;
  lVar21 = *(long *)(extraout_x1 + 0x18);
  if ((lVar21 != 0) && (0 < *(int *)(lVar21 + 0x18))) {
    /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(puVar7 + -0xc0,lVar21,uRam0000000003d3b5c0);
    *(undefined8 *)(puVar7 + -0x88) = *(undefined8 *)(puVar7 + -0xb8);
    *(undefined8 *)(puVar7 + -0x90) = *(undefined8 *)(puVar7 + -0xc0);
    *(undefined8 *)(puVar7 + -0x78) = *(undefined8 *)(puVar7 + -0xa8);
    *(undefined8 *)(puVar7 + -0x80) = *(undefined8 *)(puVar7 + -0xb0);
    uVar20 = 1;
    while( true ) {
      uVar23 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(puVar7 + -0x90,uRam0000000003d32b98);
      if ((uVar23 & 1) == 0) {
        plVar18 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar7 + -0x90,uRam0000000003d32b90);
        return plVar18;
      }
      if (plVar19 == (long *)0x0) break;
      /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(plVar19,(ulong)uVar20 | *(ulong *)(puVar7 + -0x80) << 0x20,
                      *(ulong *)(puVar7 + -0x80) >> 0x20,uRam0000000003d3d168);
      uVar20 = uVar20 + 1;
    }
    func_0x00f78af4();
code_r0x014e6194:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x14e6198);
    (*pcVar5)();
  }
  lVar21 = extraout_x1;
  if (*(long *)(extraout_x1 + 8) == 0) goto code_r0x014e6198;
  unaff_x24 = (long *)0x3d289f8;
  unaff_x23 = (undefined8 *)0x3d3d178;
  /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(puVar7 + -0xc0,*(long *)(extraout_x1 + 8),uRam0000000003d3b5c0);
  *(undefined8 *)(puVar7 + -0x88) = *(undefined8 *)(puVar7 + -0xb8);
  *(undefined8 *)(puVar7 + -0x90) = *(undefined8 *)(puVar7 + -0xc0);
  *(undefined8 *)(puVar7 + -0x78) = *(undefined8 *)(puVar7 + -0xa8);
  *(undefined8 *)(puVar7 + -0x80) = *(undefined8 *)(puVar7 + -0xb0);
  while (uVar23 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(puVar7 + -0x90,uRam0000000003d32b98), (uVar23 & 1) != 0) {
    lVar12 = *(long *)(puVar7 + -0x80);
    plVar18 = (long *)(puVar7 + -0xa0);
    uVar23 = /*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(extraout_x1,lVar12,plVar18,0);
    if ((uVar23 & 1) != 0) {
      if (plVar19 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014e6194;
      }
      plVar18 = (long *)(ulong)(uint)((int)((ulong)lVar12 >> 0x20) - *(int *)(puVar7 + -0x9c));
      /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(plVar19,lVar12 << 0x20,plVar18,uRam0000000003d3d168);
    }
  }
  /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar7 + -0x90,uRam0000000003d32b90);
  do {
    lVar15 = *unaff_x24;
    if (((*(ushort *)(lVar15 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar15 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar15 = *unaff_x24;
    }
    plVar13 = *(long **)(lVar15 + 0xb8);
    lVar21 = plVar13[1];
    if (lVar21 == 0) {
      if (((*(ushort *)(lVar15 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar15 + 0xe0) == 0)) {
        func_0x00f78ad0();
        plVar13 = *(long **)(*unaff_x24 + 0xb8);
      }
      lVar12 = *plVar13;
      lVar21 = func_0x00f78aec(/*System.Comparison<EndOfRoundScreen.LeaderboardEntry>_TypeInfo*/ uRam0000000003d1b978);
      plVar18 = plRam0000000003d63bc0;
      /*System.Comparison<EndOfRoundScreen.LeaderboardEntry>$$.ctor*/ func_0x01dc71e8(lVar21,lVar12,plRam0000000003d63bc0,uRam0000000003d2cf38);
      *(long *)(*(long *)(*unaff_x24 + 0xb8) + 8) = lVar21;
    }
    if (plVar19 != (long *)0x0) {
      plVar18 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Sort*/ func_0x025212a4(plVar19,lVar21,*unaff_x23);
      uVar23 = (ulong)*(uint *)(plVar19 + 3);
      if ((int)*(uint *)(plVar19 + 3) < 1) {
        return plVar18;
      }
      lVar12 = 0;
      uVar26 = 0;
      do {
        if ((uVar23 & 0xffffffff) <= uVar26) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar26 = uVar26 + 1;
        plVar18 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar19,(int)uVar26 + -1,
                                          uVar26 | (ulong)*(uint *)(plVar19[2] + lVar12 + 0x24) <<
                                                   0x20,*(undefined8 *)(plVar19[2] + lVar12 + 0x28),
                                          uRam0000000003d3d190);
        uVar23 = (ulong)(int)plVar19[3];
        lVar12 = lVar12 + 0x10;
      } while ((long)uVar26 < (long)uVar23);
      return plVar18;
    }
code_r0x014e6198:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014e620c;
    plVar13 = (long *)___cxa_begin_catch();
    lVar21 = *plVar13;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar7 + -0x90,uRam0000000003d32b90);
  } while (lVar21 == 0);
  func_0x00f78ac0(lVar21,0);
code_r0x014e620c:
  auVar36 = __Unwind_Resume();
  plVar16 = auVar36._0_8_;
  *(long **)(puVar7 + -0x100) = unaff_x24;
  *(undefined8 **)(puVar7 + -0xf8) = unaff_x23;
  *(undefined8 *)(puVar7 + -0xf0) = 0x3d32b90;
  *(long *)(puVar7 + -0xe8) = lVar12;
  *(long *)(puVar7 + -0xe0) = lVar21;
  *(long **)(puVar7 + -0xd8) = plVar19;
  *(undefined1 **)(puVar7 + -0xd0) = puVar7 + -0x30;
  *(undefined **)(puVar7 + -200) = &Atlas_Contexts_RoundResultsState__UpdateEntryStarDeltas;
  plVar13 = plVar18;
  if ((bRam0000000003eb4c09 & 1) == 0) {
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    plVar16 = (long *)func_0x00f78a20(0x3d3d190);
    bRam0000000003eb4c09 = 1;
  }
  *(undefined4 *)(puVar7 + -0x108) = 0;
  *(undefined8 *)(puVar7 + -0x110) = 0;
  if (plVar18 != (long *)0x0) {
    uVar23 = (ulong)*(uint *)(plVar18 + 3);
    if (0 < (int)*(uint *)(plVar18 + 3)) {
      lVar12 = 0;
      uVar26 = 0;
      do {
        if ((uVar23 & 0xffffffff) <= uVar26) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar16 = (long *)/*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(auVar36._8_8_,*(undefined4 *)(plVar18[2] + lVar12 + 0x24),
                                          puVar7 + -0x110,0);
        if ((int)plVar16 != 0) {
          if (*(uint *)(plVar18 + 3) <= uVar26) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar16 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar18,uVar26,
                                            *(undefined8 *)(plVar18[2] + lVar12 + 0x20),
                                            CONCAT44(*(undefined4 *)(puVar7 + -0x10c),
                                                     *(undefined4 *)(plVar18[2] + lVar12 + 0x28)),
                                            uRam0000000003d3d190);
        }
        uVar26 = uVar26 + 1;
        uVar23 = (ulong)(int)plVar18[3];
        lVar12 = lVar12 + 0x10;
      } while ((long)uVar26 < (long)uVar23);
    }
    return plVar16;
  }
  auVar37 = func_0x00f78af4();
  plVar19 = auVar37._0_8_;
  *(long **)(puVar7 + -0x150) = unaff_x24;
  *(undefined8 **)(puVar7 + -0x148) = unaff_x23;
  *(undefined8 *)(puVar7 + -0x140) = 0x3d32b90;
  *(undefined8 *)(puVar7 + -0x138) = 0x3eb4000;
  *(long *)(puVar7 + -0x130) = auVar36._8_8_;
  *(undefined8 *)(puVar7 + -0x128) = 0;
  *(undefined1 **)(puVar7 + -0x120) = puVar7 + -0xd0;
  *(undefined **)(puVar7 + -0x118) = &Atlas_Contexts_RoundResultsState__UpdateEntryCurrentStars;
  plVar18 = plVar13;
  if ((bRam0000000003eb4c0a & 1) == 0) {
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    plVar19 = (long *)func_0x00f78a20(0x3d3d190);
    bRam0000000003eb4c0a = 1;
  }
  *(undefined4 *)(puVar7 + -0x158) = 0;
  *(undefined8 *)(puVar7 + -0x160) = 0;
  if (plVar13 != (long *)0x0) {
    uVar23 = (ulong)*(uint *)(plVar13 + 3);
    if (0 < (int)*(uint *)(plVar13 + 3)) {
      uVar26 = 0;
      lVar12 = 0x20;
      do {
        if ((uVar23 & 0xffffffff) <= uVar26) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar19 = (long *)/*Core.Networking.NetworkTournament$$GetTotalNetworkScore*/ func_0x01660f34(auVar37._8_8_,*(undefined4 *)(plVar13[2] + lVar12 + 4),
                                          puVar7 + -0x160,0);
        if ((int)plVar19 != 0) {
          if (*(uint *)(plVar13 + 3) <= uVar26) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar19 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar13,uVar26,*(undefined8 *)(plVar13[2] + lVar12),
                                            *(undefined4 *)(puVar7 + -0x15c),uRam0000000003d3d190);
        }
        uVar26 = uVar26 + 1;
        uVar23 = (ulong)(int)plVar13[3];
        lVar12 = lVar12 + 0x10;
      } while ((long)uVar26 < (long)uVar23);
    }
    return plVar19;
  }
  auVar36 = func_0x00f78af4();
  lVar12 = auVar36._8_8_;
  puVar14 = auVar36._0_8_;
  puVar8 = puVar7 + -0x1c0;
  *(long **)(puVar7 + -0x1a0) = unaff_x24;
  *(undefined8 **)(puVar7 + -0x198) = unaff_x23;
  *(undefined8 *)(puVar7 + -400) = 0x3d32b90;
  *(undefined8 *)(puVar7 + -0x188) = 0x3eb4000;
  *(long *)(puVar7 + -0x180) = auVar37._8_8_;
  *(undefined8 *)(puVar7 + -0x178) = 0;
  *(undefined1 **)(puVar7 + -0x170) = puVar7 + -0x120;
  *(undefined **)(puVar7 + -0x168) =
       &Atlas_Contexts_RoundResultsState__SortEntriesByStarCountFromTournamentData;
  if ((bRam0000000003eb4c0b & 1) == 0) {
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3d168);
    func_0x00f78a20(0x3d3d170);
    func_0x00f78a20(0x3d3b5c0);
    bRam0000000003eb4c0b = 1;
  }
  *(undefined8 *)(puVar7 + -0x1b8) = 0;
  *(undefined8 *)(puVar7 + -0x1c0) = 0;
  *(undefined8 *)(puVar7 + -0x1a8) = 0;
  *(undefined8 *)(puVar7 + -0x1b0) = 0;
  if (lVar12 != 0) {
    /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Clear*/ func_0x0251f970(lVar12,uRam0000000003d3d170);
    if (puVar14[1] != 0) {
      /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(puVar7 + -0x1c0,puVar14[1],uRam0000000003d3b5c0);
      uVar20 = 1;
      while (uVar23 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(puVar7 + -0x1c0,uRam0000000003d32b98), (uVar23 & 1) != 0) {
        /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(lVar12,(ulong)uVar20 | *(ulong *)(puVar7 + -0x1b0) << 0x20,
                        *(ulong *)(puVar7 + -0x1b0) >> 0x20,uRam0000000003d3d168);
        uVar20 = uVar20 + 1;
      }
      plVar18 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar7 + -0x1c0,uRam0000000003d32b90);
      return plVar18;
    }
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar13 = (long *)___cxa_begin_catch();
    lVar12 = *plVar13;
    ___cxa_end_catch();
    plVar13 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar7 + -0x1c0,*puVar14);
    if (lVar12 == 0) {
      return plVar13;
    }
    func_0x00f78ac0(lVar12,0);
  }
  lVar21 = __Unwind_Resume();
  *(undefined8 *)(puVar7 + -0x1f0) = 0x3d32b90;
  *(undefined8 *)(puVar7 + -0x1e8) = 0x3eb4000;
  *(undefined8 **)(puVar7 + -0x1e0) = puVar14;
  *(long *)(puVar7 + -0x1d8) = lVar12;
  *(undefined1 **)(puVar7 + -0x1d0) = puVar7 + -0x170;
  *(undefined **)(puVar7 + -0x1c8) = &Atlas_Contexts_RoundResultsState__OnResultsFinished;
  if ((bRam0000000003eb4c0e & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d27638);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d40658);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4c0e = 1;
  }
  uVar27 = 0x3d40650;
  iVar10 = Atlas_Contexts_RoundResultsState__IsTournamentOver(lVar21);
  uVar28 = uVar27;
  if (iVar10 == 0) {
    uVar23 = *(ulong *)(lVar21 + 0xa0);
    lVar12 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar21,uRam0000000003d40650);
    if ((lVar12 != 0) && (uVar23 != 0)) {
      plVar18 = *(long **)(lVar12 + 0x10);
      lVar12 = *(long *)(puVar7 + -0x1f0);
      *(long **)(puVar7 + -0x200) = unaff_x24;
      *(undefined8 **)(puVar7 + -0x1f8) = unaff_x23;
      *(long *)(puVar7 + -0x1f0) = lVar12;
      *(undefined8 *)(puVar7 + -0x1e8) = *(undefined8 *)(puVar7 + -0x1e8);
      *(undefined8 *)(puVar7 + -0x1e0) = *(undefined8 *)(puVar7 + -0x1e0);
      *(undefined8 *)(puVar7 + -0x1d8) = *(undefined8 *)(puVar7 + -0x1d8);
      *(undefined8 *)(puVar7 + -0x1d0) = *(undefined8 *)(puVar7 + -0x1d0);
      *(undefined8 *)(puVar7 + -0x1c8) = *(undefined8 *)(puVar7 + -0x1c8);
      lVar21 = 0x3eb4000;
      if ((bRam0000000003eb4e73 & 1) == 0) {
        func_0x00f78a20(0x3d3b110,plVar18,0);
        func_0x00f78a20(0x3d1f498);
        func_0x00f78a20(0x3d66320);
        func_0x00f78a20(0x3d663f8);
        func_0x00f78a20(0x3d66300);
        func_0x00f78a20(0x3d66318);
        func_0x00f78a20(0x3d663f0);
        func_0x00f78a20(0x3d6b9f8);
        bRam0000000003eb4e73 = 1;
      }
      *(undefined8 *)(puVar7 + -0x210) = 0;
      *(undefined8 *)(puVar7 + -0x208) = 0;
      *(undefined4 *)(puVar7 + -0x218) = 0;
      *(undefined4 *)(puVar7 + -0x214) = 0;
      puVar14 = unaff_x23;
      if (*(long *)(uVar23 + 0x20) == 0) {
code_r0x0152a8c4:
        plVar13 = plVar18;
        func_0x00f78af4();
code_r0x0152a8c8:
        uVar25 = func_0x00f78b24();
        unaff_x23 = puVar14;
code_r0x0152a8d4:
        puVar32 = &Atlas_UI_VotingManager__FilterMapsFromTournament;
        auVar37 = func_0x00f78ac0(uVar25,0);
      }
      else {
        plVar13 = (long *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(uVar23 + 0x20),0);
        if ((int)plVar13 == 0) {
          return plVar13;
        }
        if ((*(long *)(uVar23 + 0xb0) == 0) ||
           (/*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(*(long *)(uVar23 + 0xb0),*(undefined8 *)(uVar23 + 0xe0),0),
           plVar18 == (long *)0x0)) goto code_r0x0152a8c4;
        auVar37._8_8_ = *(undefined8 *)(uVar23 + 0xe0);
        auVar37._0_8_ = uVar23;
        if ((int)plVar18[2] != 2) {
          /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(uVar23,*(undefined8 *)(uVar23 + 0xe0),puVar7 + -0x208,puVar7 + -0x210);
          if (*(long *)(uVar23 + 0xe0) == 0) goto code_r0x0152a8c4;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(uVar23 + 0xe0),uRam0000000003d3b110);
          lVar12 = *(long *)(puVar7 + -0x208);
          if ((lVar12 == 0) || (*(long *)(uVar23 + 0x28) == 0)) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar23 + 0x28),*(undefined8 *)(lVar12 + 0x18),puVar7 + -0x216,0)
          ;
          lVar21 = *(long *)(puVar7 + -0x210);
          if ((lVar21 == 0) || (*(long *)(uVar23 + 0x28) == 0)) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar23 + 0x28),*(undefined8 *)(lVar21 + 0x18),puVar7 + -0x218,0)
          ;
          if (*(long *)(uVar23 + 0xb0) == 0) goto code_r0x0152a8c4;
          uVar25 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(uVar23 + 0xb0),lVar12,0);
          if (*(long *)(uVar23 + 0x28) == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar23 + 0x28),uVar25,puVar7 + -0x212,0);
          if (*(long *)(uVar23 + 0xb0) == 0) goto code_r0x0152a8c4;
          uVar25 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(uVar23 + 0xb0),lVar21,0);
          if (*(long *)(uVar23 + 0x28) == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar23 + 0x28),uVar25,puVar7 + -0x214,0);
          plVar13 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0xc);
          if (plVar13 == (long *)0x0) goto code_r0x0152a8c4;
          unaff_x23 = (undefined8 *)0x3d6b9f8;
          puVar30 = (undefined8 *)0x3d6b9f8;
          if ((/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8 != 0) &&
             (lVar15 = func_0x00f78adc(/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8,*(undefined8 *)(*plVar13 + 0x40)),
             lVar15 == 0)) goto code_r0x0152a8d0;
          uVar26 = plVar13[3];
          puVar14 = unaff_x23;
          if ((int)uVar26 == 0) goto code_r0x0152a8c8;
          plVar13[4] = /*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8;
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 != 0) {
            lVar15 = func_0x00f78adc(lVar12,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar15 == 0) goto code_r0x0152a8d0;
            uVar26 = plVar13[3];
          }
          if ((uVar26 & 0xfffffffe) == 0) goto code_r0x0152a8c8;
          plVar13[5] = lVar12;
          lVar12 = 0x3d66300;
          lVar15 = 0x3d66300;
          if (/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300 != 0) {
            lVar22 = func_0x00f78adc(/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar22 == 0) goto code_r0x0152a8d0;
            uVar26 = plVar13[3];
          }
          puVar14 = puVar30;
          if ((uint)uVar26 < 3) goto code_r0x0152a8c8;
          plVar13[6] = /*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300;
          lVar21 = *(long *)(lVar21 + 0x18);
          if (lVar21 != 0) {
            lVar22 = func_0x00f78adc(lVar21,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar22 == 0) goto code_r0x0152a8d0;
            uVar26 = plVar13[3];
          }
          uVar20 = (uint)uVar26;
          if ((uVar26 & 0xfffffffc) == 0) goto code_r0x0152a8c8;
          plVar13[7] = lVar21;
          lVar21 = 0x3d663f0;
          lVar12 = lVar15;
          if (/*STR(' typeKey1: ')*/ lRam0000000003d663f0 != 0) {
            lVar15 = func_0x00f78adc(/*STR(' typeKey1: ')*/ lRam0000000003d663f0,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar15 == 0) goto code_r0x0152a8d0;
            uVar20 = (uint)plVar13[3];
          }
          if (uVar20 < 5) goto code_r0x0152a8c8;
          plVar13[8] = /*STR(' typeKey1: ')*/ lRam0000000003d663f0;
          lVar21 = /*System.Int16$$ToString*/ func_0x02ae8e6c(puVar7 + -0x212,0);
          if ((lVar21 == 0) ||
             (lVar15 = func_0x00f78adc(lVar21,*(undefined8 *)(*plVar13 + 0x40)), lVar15 != 0)) {
            uVar20 = *(uint *)(plVar13 + 3);
            if (5 < uVar20) {
              plVar13[9] = lVar21;
              lVar21 = 0x3d663f8;
              if (/*STR(' typeKey2: ')*/ lRam0000000003d663f8 != 0) {
                lVar15 = func_0x00f78adc(/*STR(' typeKey2: ')*/ lRam0000000003d663f8,*(undefined8 *)(*plVar13 + 0x40));
                if (lVar15 == 0) goto code_r0x0152a8d0;
                uVar20 = *(uint *)(plVar13 + 3);
              }
              if (6 < uVar20) {
                plVar13[10] = /*STR(' typeKey2: ')*/ lRam0000000003d663f8;
                lVar21 = /*System.Int16$$ToString*/ func_0x02ae8e6c(puVar7 + -0x214,0);
                if ((lVar21 != 0) &&
                   (lVar15 = func_0x00f78adc(lVar21,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                goto code_r0x0152a8d0;
                uVar20 = (uint)plVar13[3];
                if ((plVar13[3] & 0xfffffff8U) != 0) {
                  plVar13[0xb] = lVar21;
                  lVar21 = 0x3d66318;
                  if (/*STR(' mapKey1: ')*/ lRam0000000003d66318 != 0) {
                    lVar15 = func_0x00f78adc(/*STR(' mapKey1: ')*/ lRam0000000003d66318,*(undefined8 *)(*plVar13 + 0x40));
                    if (lVar15 == 0) goto code_r0x0152a8d0;
                    uVar20 = (uint)plVar13[3];
                  }
                  if (8 < uVar20) {
                    plVar13[0xc] = /*STR(' mapKey1: ')*/ lRam0000000003d66318;
                    lVar21 = /*System.Int16$$ToString*/ func_0x02ae8e6c(puVar7 + -0x216,0);
                    if ((lVar21 != 0) &&
                       (lVar15 = func_0x00f78adc(lVar21,*(undefined8 *)(*plVar13 + 0x40)),
                       lVar15 == 0)) goto code_r0x0152a8d0;
                    uVar20 = *(uint *)(plVar13 + 3);
                    if (9 < uVar20) {
                      plVar13[0xd] = lVar21;
                      lVar21 = 0x3d66320;
                      if (/*STR(' mapKey2: ')*/ lRam0000000003d66320 != 0) {
                        lVar15 = func_0x00f78adc(/*STR(' mapKey2: ')*/ lRam0000000003d66320,
                                                 *(undefined8 *)(*plVar13 + 0x40));
                        if (lVar15 == 0) goto code_r0x0152a8d0;
                        uVar20 = *(uint *)(plVar13 + 3);
                      }
                      if (10 < uVar20) {
                        plVar13[0xe] = /*STR(' mapKey2: ')*/ lRam0000000003d66320;
                        lVar21 = /*System.Int16$$ToString*/ func_0x02ae8e6c(puVar7 + -0x218,0);
                        if ((lVar21 != 0) &&
                           (lVar15 = func_0x00f78adc(lVar21,*(undefined8 *)(*plVar13 + 0x40)),
                           lVar15 == 0)) goto code_r0x0152a8d0;
                        if (0xb < *(uint *)(plVar13 + 3)) {
                          plVar13[0xf] = lVar21;
                          /*System.String$$Concat*/ func_0x029cfadc(plVar13,0);
                          plVar18 = plVar13;
                          puVar14 = unaff_x23;
                          if ((*(long *)(uVar23 + 0x20) != 0) &&
                             (plVar13 = *(long **)(*(long *)(uVar23 + 0x20) + 0x20),
                             plVar13 != (long *)0x0)) {
                            plVar18 = (long *)(**(code **)(*plVar13 + 0x1c8))
                                                        (plVar13,(long)*(short *)(puVar7 + -0x216),
                                                         (long)*(short *)(puVar7 + -0x212),
                                                         (long)*(short *)(puVar7 + -0x218),
                                                         (long)*(short *)(puVar7 + -0x214),
                                                         &UNK_00001770,
                                                         *(undefined8 *)(*plVar13 + 0x1d0));
                            return plVar18;
                          }
                          goto code_r0x0152a8c4;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto code_r0x0152a8c8;
          }
code_r0x0152a8d0:
          uVar25 = func_0x00f78b14();
          goto code_r0x0152a8d4;
        }
        puVar32 = &UNK_0152a520;
        plVar13 = plVar18;
      }
      uVar26 = auVar37._0_8_;
      *(undefined8 *)(puVar7 + -0x280) = unaff_x28;
      *(undefined8 *)(puVar7 + -0x278) = unaff_x27;
      *(undefined8 *)(puVar7 + -0x270) = 0x3d3d168;
      *(undefined8 *)(puVar7 + -0x268) = 0x3d32b98;
      *(long **)(puVar7 + -0x260) = unaff_x24;
      *(undefined8 **)(puVar7 + -600) = unaff_x23;
      *(long *)(puVar7 + -0x250) = lVar12;
      *(long *)(puVar7 + -0x248) = lVar21;
      *(long **)(puVar7 + -0x240) = plVar13;
      *(ulong *)(puVar7 + -0x238) = uVar23;
      *(undefined1 **)(puVar7 + -0x230) = puVar7 + -0x1d0;
      *(undefined **)(puVar7 + -0x228) = puVar32;
      *(long *)(puVar7 + -0x350) = auVar37._8_8_;
      uVar23 = 0x3eb4000;
      if ((bRam0000000003eb4e75 & 1) == 0) {
        func_0x00f78a20(0x3d2e6f0);
        func_0x00f78a20(0x3d2e6f8);
        func_0x00f78a20(0x3d2e700);
        func_0x00f78a20(0x3d2e710);
        func_0x00f78a20(0x3d2e748);
        func_0x00f78a20(0x3d2e750);
        func_0x00f78a20(0x3d32bf0);
        func_0x00f78a20(0x3d32980);
        func_0x00f78a20(0x3d33d98);
        func_0x00f78a20(0x3d33da0);
        func_0x00f78a20(0x3d32988);
        func_0x00f78a20(0x3d32bf8);
        func_0x00f78a20(0x3d32c00);
        func_0x00f78a20(0x3d32990);
        func_0x00f78a20(0x3d33dd0);
        func_0x00f78a20(0x3d39240);
        func_0x00f78a20(0x3d39248);
        func_0x00f78a20(0x3d3b120);
        func_0x00f78a20(0x3d3b6b8);
        func_0x00f78a20(0x3d3b130);
        func_0x00f78a20(0x3d3b0f8);
        func_0x00f78a20(0x3d3b140);
        func_0x00f78a20(0x3d3b6c0);
        func_0x00f78a20(0x3d3b148);
        func_0x00f78a20(0x3d1db90);
        func_0x00f78a20(0x3d65ed8);
        func_0x00f78a20(0x3d66270);
        func_0x00f78a20(0x3d6cdb0);
        func_0x00f78a20(0x3d6cdc0);
        func_0x00f78a20(0x3d6cdb8);
        func_0x00f78a20(0x3d6cdc8);
        bRam0000000003eb4e75 = 1;
      }
      *(undefined8 *)(puVar7 + -0x2a0) = 0;
      *(undefined8 *)(puVar7 + -0x2b8) = 0;
      *(undefined8 *)(puVar7 + -0x2c0) = 0;
      *(undefined8 *)(puVar7 + -0x2a8) = 0;
      *(undefined8 *)(puVar7 + -0x2b0) = 0;
      *(undefined8 *)(puVar7 + -0x2c8) = 0;
      *(undefined8 *)(puVar7 + -0x2e8) = 0;
      *(undefined8 *)(puVar7 + -0x2f0) = 0;
      *(undefined8 *)(puVar7 + -0x2d8) = 0;
      *(undefined8 *)(puVar7 + -0x2e0) = 0;
      *(undefined8 *)(puVar7 + -0x300) = 0;
      *(undefined8 *)(puVar7 + -0x2f8) = 0;
      *(undefined8 *)(puVar7 + -0x310) = 0;
      *(undefined8 *)(puVar7 + -0x308) = 0;
      *(undefined4 *)(puVar7 + -0x314) = 0;
      if (*(long *)(uVar26 + 0xb8) != 0) {
        uVar23 = 0x3d1d000;
        /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(uVar26 + 0xb8),uRam0000000003d2e6f8);
        plVar13 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
        /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(plVar13,*(undefined8 *)(puVar7 + -0x350),uRam0000000003d3b0f8);
        if (((*(long *)(uVar26 + 0x20) != 0) &&
            (lVar12 = *(long *)(*(long *)(uVar26 + 0x20) + 0x20), lVar12 != 0)) &&
           (lVar12 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar12,0), lVar12 != 0)) {
          uVar23 = 0x3d6c000;
          *(undefined4 *)(puVar7 + -0x294) = *(undefined4 *)(lVar12 + 0x18);
          uVar25 = /*System.Int32$$ToString*/ func_0x02ae9b8c(puVar7 + -0x294,0);
          /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar25,0);
          if (((*(long *)(uVar26 + 0x20) != 0) &&
              (lVar12 = *(long *)(*(long *)(uVar26 + 0x20) + 0x20), lVar12 != 0)) &&
             (lVar12 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar12,0), lVar12 != 0)) {
            uVar23 = 0x3d32bf8;
            /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(puVar7 + -0x348,lVar12,uRam0000000003d3b6b8);
            *(undefined8 *)(puVar7 + -0x2b8) = *(undefined8 *)(puVar7 + -0x340);
            *(undefined8 *)(puVar7 + -0x2c0) = *(undefined8 *)(puVar7 + -0x348);
            *(undefined8 *)(puVar7 + -0x2a8) = *(undefined8 *)(puVar7 + -0x330);
            *(undefined8 *)(puVar7 + -0x2b0) = *(undefined8 *)(puVar7 + -0x338);
            *(undefined8 *)(puVar7 + -0x2a0) = *(undefined8 *)(puVar7 + -0x328);
code_r0x0152aba4:
            uVar17 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(puVar7 + -0x2c0,uRam0000000003d32bf8);
            if ((uVar17 & 1) != 0) {
              sVar3 = *(short *)(puVar7 + -0x2a4);
              sVar1 = *(short *)(puVar7 + -0x2a8);
              if (sVar3 != *(short *)(puVar7 + -0x2ac)) {
                sVar1 = *(short *)(puVar7 + -0x2ac);
              }
              if (*(long *)(uVar26 + 0xb8) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              iVar10 = (int)sVar1;
              uVar17 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(uVar26 + 0xb8),iVar10,uRam0000000003d2e700);
              if ((uVar17 & 1) == 0) {
                if (*(long *)(uVar26 + 0xb8) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0152af9c;
                }
                /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(uVar26 + 0xb8),iVar10,0,uRam0000000003d2e6f0);
              }
              lVar12 = *(long *)(uVar26 + 0xb8);
              if (lVar12 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              iVar11 = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar12,iVar10,uRam0000000003d2e748);
              *(int *)(puVar7 + -0x294) = iVar11;
              /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar12,iVar10,iVar11 + 1,uRam0000000003d2e750);
              if (*(long *)(uVar26 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar26 + 0x28),(int)sVar3,puVar7 + -0x2c8,0);
              if (plVar13 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar20 = *(uint *)(plVar13 + 3);
              if (0 < (int)uVar20) {
                uVar29 = 0;
                do {
                  if (uVar20 <= uVar29) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar12 = *(long *)(plVar13[2] + (long)(int)uVar29 * 8 + 0x20);
                  if (lVar12 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar17 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar12 + 0x18),
                                           *(undefined8 *)(puVar7 + -0x2c8),0);
                  if ((uVar17 & 1) != 0) {
                    /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,*(undefined8 *)(puVar7 + -0x2c8),0);
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar13,uVar29,uRam0000000003d3b130);
                    break;
                  }
                  uVar29 = uVar29 + 1;
                  uVar20 = *(uint *)(plVar13 + 3);
                } while ((int)uVar29 < (int)uVar20);
              }
              goto code_r0x0152aba4;
            }
            *(undefined4 *)(puVar7 + -800) = 0x136;
            /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(puVar7 + -0x2c0,uRam0000000003d32bf0);
            *(undefined4 *)(puVar7 + -0x314) = 0;
            if (*(long *)(uVar26 + 0xb8) != 0) {
              /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(puVar7 + -0x348,*(long *)(uVar26 + 0xb8),uRam0000000003d2e710);
              *(undefined8 *)(puVar7 + -0x2e8) = *(undefined8 *)(puVar7 + -0x340);
              *(undefined8 *)(puVar7 + -0x2f0) = *(undefined8 *)(puVar7 + -0x348);
              *(undefined8 *)(puVar7 + -0x2d8) = *(undefined8 *)(puVar7 + -0x330);
              *(undefined8 *)(puVar7 + -0x2e0) = *(undefined8 *)(puVar7 + -0x338);
code_r0x0152ad1c:
              uVar23 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(puVar7 + -0x2f0,uRam0000000003d33da0);
              if ((uVar23 & 1) != 0) {
                if (*(int *)(uVar26 + 0x10) <= *(int *)(puVar7 + -0x2dc)) {
                  if (*(long *)(uVar26 + 0x28) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar26 + 0x28),
                                  (int)(short)*(undefined4 *)(puVar7 + -0x2e0),puVar7 + -0x2f8,0);
                  if (plVar13 == (long *)0x0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar20 = *(uint *)(plVar13 + 3);
                  if (0 < (int)uVar20) {
                    uVar29 = 0;
                    do {
                      if (uVar20 <= uVar29) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar12 = *(long *)(plVar13[2] + (long)(int)uVar29 * 8 + 0x20);
                      if (lVar12 == 0) {
                        func_0x00f78af4();
                        goto code_r0x0152af9c;
                      }
                      uVar23 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar12 + 0x18),
                                               *(undefined8 *)(puVar7 + -0x2f8),0);
                      if ((uVar23 & 1) != 0) {
                        /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,*(undefined8 *)(puVar7 + -0x2f8),0);
                        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar13,uVar29,uRam0000000003d3b130);
                        break;
                      }
                      uVar29 = uVar29 + 1;
                      uVar20 = *(uint *)(plVar13 + 3);
                    } while ((int)uVar29 < (int)uVar20);
                  }
                }
                goto code_r0x0152ad1c;
              }
              uVar20 = *(uint *)(puVar7 + -0x314);
              uVar26 = (ulong)uVar20;
              uVar23 = (ulong)(uVar20 + 1);
              *(undefined4 *)(puVar7 + -800) = 0x1d1;
              *(uint *)(puVar7 + -0x314) = uVar20 + 1;
              /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(puVar7 + -0x2f0,uRam0000000003d33d98);
              if (uVar20 != 0xffffffff) goto code_r0x0152ae34;
              uVar23 = 0;
              iVar10 = 0;
              if (plVar13 != (long *)0x0) goto code_r0x0152ae5c;
            }
          }
        }
      }
      do {
        func_0x00f78af4();
code_r0x0152ae34:
        if (*(int *)(puVar7 + (long)(int)uVar26 * 4 + -800) == 0x1d1) {
          *(int *)(puVar7 + -0x314) = (int)uVar26;
          uVar23 = uVar26;
        }
        iVar10 = (int)uVar23;
      } while (plVar13 == (long *)0x0);
code_r0x0152ae5c:
      *(int *)(puVar7 + -0x294) = (int)plVar13[3];
      uVar25 = /*System.Int32$$ToString*/ func_0x02ae9b8c(puVar7 + -0x294,0);
      uVar25 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar25,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar7 + -0x310,plVar13,uRam0000000003d3b120);
      while( true ) {
        uVar23 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar7 + -0x310,uRam0000000003d32988);
        if ((uVar23 & 1) == 0) {
          *(undefined4 *)(puVar7 + (long)iVar10 * 4 + -800) = 0x23d;
          *(int *)(puVar7 + -0x314) = *(int *)(puVar7 + -0x314) + 1;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar7 + -0x310,uRam0000000003d32980);
          if ((int)plVar13[3] < 2) {
            plVar13 = *(long **)(puVar7 + -0x350);
          }
          return plVar13;
        }
        if (*(long *)(puVar7 + -0x300) == 0) break;
        uVar25 = /*System.String$$Concat*/ func_0x029be39c(uVar25,*(undefined8 *)(*(long *)(puVar7 + -0x300) + 0x18),
                                 /*STR(' ')*/ uRam0000000003d65ed8,0);
      }
      func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x152afa0);
      (*pcVar5)();
    }
  }
  else {
    uVar23 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
    Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor(uVar23,0);
    lVar12 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar21,uRam0000000003d40650);
    uVar28 = 0x3d40650;
    if ((lVar12 != 0) && (uVar23 != 0)) {
      *(undefined8 *)(uVar23 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
      lVar12 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar21,uRam0000000003d40658);
      uVar28 = uVar27;
      if (lVar12 != 0) {
        *(undefined8 *)(uVar23 + 0x18) = *(undefined8 *)(lVar12 + 0x18);
        *(undefined1 *)(uVar23 + 0x20) = 1;
        uVar28 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ uRam0000000003d194d8;
        plVar13 = *(long **)(lVar21 + 0x78);
        if (((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar19 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar28,0);
        lVar21 = 0;
        if (plVar13 != (long *)0x0) {
          puVar31 = *(undefined1 **)(puVar7 + -0x1d0);
          puVar32 = *(undefined **)(puVar7 + -0x1c8);
          uVar25 = *(undefined8 *)(puVar7 + -0x1f0);
          uVar28 = *(undefined8 *)(puVar7 + -0x1e8);
          plVar18 = *(long **)(puVar7 + -0x1d8);
          uVar26 = *(ulong *)(puVar7 + -0x1e0);
          goto code_r0x01e7159c;
        }
      }
    }
  }
  auVar38 = func_0x00f78af4();
  puVar14 = auVar38._8_8_;
  lVar12 = auVar38._0_8_;
  puVar8 = puVar7 + -0x250;
  *(long **)(puVar7 + -0x230) = unaff_x24;
  *(undefined8 **)(puVar7 + -0x228) = unaff_x23;
  *(undefined8 *)(puVar7 + -0x220) = 0x3d32b90;
  *(undefined8 *)(puVar7 + -0x218) = uVar28;
  *(ulong *)(puVar7 + -0x210) = uVar23;
  *(long *)(puVar7 + -0x208) = lVar21;
  *(undefined1 **)(puVar7 + -0x200) = puVar7 + -0x1d0;
  *(undefined **)(puVar7 + -0x1f8) = &Atlas_Contexts_RoundResultsState__OnVoteStarted;
  puVar31 = puVar7 + -0x200;
  uVar28 = 0x3eb4000;
  if ((bRam0000000003eb4c0f & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d297a0);
    func_0x00f78a20(0x3d1a1a8);
    bRam0000000003eb4c0f = 1;
  }
  lVar21 = *(long *)(lVar12 + 0xa0);
  if (lVar21 != 0) {
    uVar28 = 0x3d40000;
    uVar27 = *puVar14;
    uVar34 = puVar14[3];
    uVar33 = puVar14[2];
    *(undefined8 *)(puVar7 + -0x248) = puVar14[1];
    *(undefined8 *)(puVar7 + -0x250) = uVar27;
    *(undefined8 *)(puVar7 + -0x238) = uVar34;
    *(undefined8 *)(puVar7 + -0x240) = uVar33;
    plVar18 = (long *)0x0;
    /*Atlas.UI.VotingManager$$SetVoteData*/ func_0x01529c00(lVar21,puVar7 + -0x250);
    lVar21 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar12,uRam0000000003d40650);
    if (lVar21 != 0) {
      uVar25 = 0x3d1a000;
      unaff_x23 = (undefined8 *)0x3d25000;
      uVar28 = *(undefined8 *)(lVar21 + 0x10);
      uVar23 = func_0x00f78aec(/*Atlas.Contexts.VotingState.VotingStateTransitionData_TypeInfo*/ uRam0000000003d297a0);
      plVar18 = (long *)((long)&MACH_HEADER.magic + 1);
      /*Atlas.Contexts.VotingState.VotingStateTransitionData$$.ctor*/ func_0x0156ebc8(uVar23,uVar28,1,0);
      uVar28 = /*Atlas.Contexts.VotingState_var*/ uRam0000000003d1a1a8;
      plVar13 = *(long **)(lVar12 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar19 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar28,0);
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar23;
      auVar38 = auVar38 << 0x40;
      if (plVar13 != (long *)0x0) {
        puVar32 = &UNK_014e6858;
        plVar18 = plVar13;
        uVar26 = uVar23;
code_r0x01e7159c:
        *(undefined8 *)(puVar8 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar8 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar8 + -0x50) = 0x3d3d168;
        *(undefined8 *)(puVar8 + -0x48) = 0x3d32b98;
        *(long **)(puVar8 + -0x40) = unaff_x24;
        *(undefined8 **)(puVar8 + -0x38) = unaff_x23;
        *(undefined8 *)(puVar8 + -0x30) = uVar25;
        *(undefined8 *)(puVar8 + -0x28) = uVar28;
        *(ulong *)(puVar8 + -0x20) = uVar26;
        *(long **)(puVar8 + -0x18) = plVar18;
        *(undefined1 **)(puVar8 + -0x10) = puVar31;
        *(undefined **)(puVar8 + -8) = puVar32;
        *(long **)(puVar8 + -0x68) = plVar13;
        lVar12 = plVar13[0xd];
        if (lVar12 == 0) {
          puVar31 = puVar8 + -0x68;
          lVar21 = 1;
        }
        else {
          lVar21 = *(long *)(lVar12 + 0x18);
          if (lVar21 == 0) {
            return plVar13;
          }
          puVar31 = (undefined1 *)(lVar12 + 0x20);
        }
        lVar12 = 0;
        do {
          lVar15 = *(long *)(puVar31 + lVar12 * 8);
          pcVar5 = *(code **)(lVar15 + 0x10);
          plVar18 = *(long **)(lVar15 + 0x20);
          lVar15 = *(long *)(lVar15 + 0x28);
          if (*(short *)(lVar15 + 0x48) == -1) {
            func_0x00f78ad8(lVar15);
          }
          iVar10 = func_0x00f78a4c(lVar15);
          bVar9 = *(char *)(lVar15 + 0x4a) == '\x03';
          if (iVar10 == 0) {
            if (bVar9) {
              if (plVar18 == (long *)0x0) {
code_r0x01e7173c:
                plVar18 = (long *)(*pcVar5)(plVar19,1,uVar23,lVar15);
              }
              else {
                if (((*(short *)(lVar15 + 0x48) == -1) || ((*(byte *)(*plVar18 + 0x115) & 1) != 0))
                   || (plVar13[3] == 0)) goto code_r0x01e7162c;
                iVar10 = func_0x00f78a44(lVar15);
                iVar11 = func_0x00f78ec0(lVar15);
                if (iVar10 == 0) {
                  uVar4 = *(ushort *)(lVar15 + 0x48);
                  if (iVar11 == 0) {
                    lVar15 = *plVar18 + (ulong)uVar4 * 0x10;
                    plVar18 = (long *)(**(code **)(lVar15 + 0x138))
                                                (plVar18,plVar19,1,uVar23,
                                                 *(undefined8 *)(lVar15 + 0x140));
                    goto code_r0x01e71750;
                  }
                  lVar15 = func_0x00f78a48(lVar15);
                  lVar22 = *plVar18;
                  uVar26 = (ulong)*(ushort *)(lVar22 + 0x12a);
                  if (uVar26 != 0) {
                    piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar24 + -2) == lVar15) {
                        puVar14 = (undefined8 *)
                                  (lVar22 + (long)(int)(*piVar24 + (uint)uVar4) * 0x10 + 0x138);
                        goto code_r0x01e718f4;
                      }
                      piVar24 = piVar24 + 4;
                      uVar26 = uVar26 - 1;
                    } while (uVar26 != 0);
                  }
                  puVar14 = (undefined8 *)func_0x00fac1f0(plVar18,lVar15,(ulong)uVar4);
code_r0x01e718f4:
                  pcVar5 = (code *)*puVar14;
                  puVar14 = (undefined8 *)puVar14[1];
                }
                else {
                  if (iVar11 == 0) {
                    uVar25 = *(undefined8 *)
                              (*plVar18 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar22 = *plVar18;
                    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12a);
                    if (uVar26 != 0) {
                      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar24 + -2) == *(long *)(lVar15 + 0x18)) {
                          lVar22 = lVar22 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar15 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e718cc;
                        }
                        piVar24 = piVar24 + 4;
                        uVar26 = uVar26 - 1;
                      } while (uVar26 != 0);
                    }
                    lVar22 = func_0x00fac1f0(plVar18);
code_r0x01e718cc:
                    uVar25 = *(undefined8 *)(lVar22 + 8);
                  }
                  puVar14 = (undefined8 *)func_0x00f78acc(uVar25,lVar15);
                  pcVar5 = (code *)*puVar14;
                }
                plVar18 = (long *)(*pcVar5)(plVar18,plVar19,1,uVar23,puVar14);
              }
            }
            else {
              if ((*(short *)(lVar15 + 0x48) == -1) || (plVar13[3] == 0)) goto code_r0x01e7173c;
              iVar10 = func_0x00f78a44(lVar15);
              iVar11 = func_0x00f78ec0(lVar15);
              if (iVar10 == 0) {
                uVar4 = *(ushort *)(lVar15 + 0x48);
                if (iVar11 == 0) {
                  lVar15 = *plVar19 + (ulong)uVar4 * 0x10;
                  plVar18 = (long *)(**(code **)(lVar15 + 0x138))
                                              (plVar19,1,uVar23,*(undefined8 *)(lVar15 + 0x140));
                  goto code_r0x01e71750;
                }
                lVar15 = func_0x00f78a48(lVar15);
                lVar22 = *plVar19;
                uVar26 = (ulong)*(ushort *)(lVar22 + 0x12a);
                if (uVar26 != 0) {
                  piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == lVar15) {
                      puVar14 = (undefined8 *)
                                (lVar22 + (long)(int)(*piVar24 + (uint)uVar4) * 0x10 + 0x138);
                      goto code_r0x01e71880;
                    }
                    piVar24 = piVar24 + 4;
                    uVar26 = uVar26 - 1;
                  } while (uVar26 != 0);
                }
                puVar14 = (undefined8 *)func_0x00fac1f0(plVar19,lVar15,(ulong)uVar4);
code_r0x01e71880:
                pcVar5 = (code *)*puVar14;
                puVar14 = (undefined8 *)puVar14[1];
              }
              else {
                if (iVar11 == 0) {
                  uVar25 = *(undefined8 *)
                            (*plVar19 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar22 = *plVar19;
                  uVar26 = (ulong)*(ushort *)(lVar22 + 0x12a);
                  if (uVar26 != 0) {
                    piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar24 + -2) == *(long *)(lVar15 + 0x18)) {
                        lVar22 = lVar22 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar15 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71858;
                      }
                      piVar24 = piVar24 + 4;
                      uVar26 = uVar26 - 1;
                    } while (uVar26 != 0);
                  }
                  lVar22 = func_0x00fac1f0(plVar19);
code_r0x01e71858:
                  uVar25 = *(undefined8 *)(lVar22 + 8);
                }
                puVar14 = (undefined8 *)func_0x00f78acc(uVar25,lVar15);
                pcVar5 = (code *)*puVar14;
              }
              plVar18 = (long *)(*pcVar5)(plVar19,1,uVar23,puVar14);
            }
          }
          else {
            if (bVar9) goto code_r0x01e7173c;
code_r0x01e7162c:
            plVar18 = (long *)(*pcVar5)(plVar18,plVar19,1,uVar23,lVar15);
          }
code_r0x01e71750:
          lVar12 = lVar12 + 1;
          if (lVar12 == lVar21) {
            return plVar18;
          }
        } while( true );
      }
    }
  }
  plVar13 = (long *)func_0x00f78af4();
  *(undefined8 *)(puVar7 + -0x280) = uVar25;
  *(undefined8 *)(puVar7 + -0x278) = uVar28;
  *(long *)(puVar7 + -0x270) = auVar38._8_8_;
  *(long *)(puVar7 + -0x268) = auVar38._0_8_;
  *(undefined1 **)(puVar7 + -0x260) = puVar31;
  *(undefined **)(puVar7 + -600) = &Atlas_Contexts_RoundResultsState___ctor;
  if ((bRam0000000003eb4c10 & 1) == 0) {
    func_0x00f78a20(0x3d40648);
    bRam0000000003eb4c10 = 1;
  }
  if (plVar13 != (long *)0x0) {
    return plVar13;
  }
  *(undefined8 *)(puVar7 + -0x260) = *(undefined8 *)(puVar7 + -0x260);
  *(undefined8 *)(puVar7 + -600) = *(undefined8 *)(puVar7 + -600);
  auVar36 = func_0x00f78af4(0,uRam0000000003d40648);
  plVar13 = auVar36._0_8_;
  plVar13[2] = *plVar18;
  plVar13[4] = auVar36._8_8_;
  plVar13[5] = (long)plVar18;
  return plVar13;
}



// ============================================================
// RVA: 0x14e5acc | Atlas.Contexts.RoundResultsState.OnExit
// ============================================================

/* WARNING: Possible PIC construction at 0x014e5d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e6854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e6858) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */

long * Atlas_Contexts_RoundResultsState__OnExit(long *param_1)

{
  short sVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  int extraout_w1;
  long extraout_x1;
  int extraout_w1_00;
  long *plVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  int *piVar24;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar25;
  undefined8 unaff_x21;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint uVar29;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *puVar30;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar31;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar32;
  float extraout_s0;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  
  puVar6 = &stack0xfffffffffffffff0;
  if (param_1[0x10] == 0) {
    unaff_x30 = &Atlas_Contexts_RoundResultsState__RemoveDelegates;
    param_1 = (long *)func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar6;
  }
  else if (*(long *)(param_1[0x10] + 0x20) == 0) {
    return param_1;
  }
  *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar25 = 0x3eb4000;
  if ((bRam0000000003eb4c0d & 1) == 0) {
    func_0x00f78a20(0x3d2a238);
    func_0x00f78a20(0x3d1b518);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5c830);
    func_0x00f78a20(0x3d5c838);
    bRam0000000003eb4c0d = 1;
  }
  if (((param_1[0x10] == 0) || (lVar20 = *(long *)(param_1[0x10] + 0x20), lVar20 == 0)) ||
     (unaff_x22 = *(long *)(lVar20 + 0x10), unaff_x22 == 0)) {
code_r0x014e5c68:
    func_0x00f78af4();
  }
  else {
    unaff_x23 = (undefined8 *)0x3d1fa78;
    unaff_x24 = (long *)0x3d5c000;
    uVar25 = *(undefined8 *)(unaff_x22 + 0x88);
    unaff_x21 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,param_1,uRam0000000003d5c830,0);
    plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar25,unaff_x21,0);
    if ((plVar12 == (long *)0x0) || (*plVar12 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) {
      *(long **)(unaff_x22 + 0x88) = plVar12;
      plVar12 = (long *)Atlas_Contexts_RoundResultsState__IsTournamentOver(param_1);
      if (((ulong)plVar12 & 1) != 0) {
        return plVar12;
      }
      if (((param_1[0x10] == 0) || (lVar20 = *(long *)(param_1[0x10] + 0x20), lVar20 == 0)) ||
         (unaff_x22 = *(long *)(lVar20 + 0x10), unaff_x23 = (undefined8 *)0x3d1fa78, unaff_x22 == 0)
         ) goto code_r0x014e5c68;
      uVar25 = *(undefined8 *)(unaff_x22 + 0x40);
      unaff_x23 = (undefined8 *)0x3d1b518;
      unaff_x21 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
      /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(unaff_x21,param_1,uRam0000000003d5c838,uRam0000000003d2a238);
      plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar25,unaff_x21,0);
      if ((plVar12 == (long *)0x0) || (*plVar12 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
        *(long **)(unaff_x22 + 0x40) = plVar12;
        return plVar12;
      }
    }
  }
  auVar36 = func_0x00f78e5c();
  plVar12 = auVar36._8_8_;
  lVar20 = auVar36._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_d8;
  *(long *)((long)register0x00000008 + -0x70) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar25;
  *(long **)((long)register0x00000008 + -0x58) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x48) = &Atlas_Contexts_RoundResultsState__OnUpdate;
  uVar25 = 0x3eb4000;
  if ((bRam0000000003eb4c06 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4c06 = 1;
  }
  plVar18 = (long *)0x0;
  plVar13 = (long *)/*Core.StateManagement.State$$OnUpdate*/ func_0x02b951d8(lVar20,plVar12);
  fVar35 = *(float *)(lVar20 + 0xbc);
  if (0.0 < fVar35) {
    if (plVar12 == (long *)0x0) goto code_r0x014e5da4;
    lVar21 = *plVar12;
    uVar23 = (ulong)*(ushort *)(lVar21 + 0x12a);
    if (uVar23 != 0) {
      piVar24 = (int *)(*(long *)(lVar21 + 0xb0) + 8);
      do {
        if (*(long *)(piVar24 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar14 = (undefined8 *)(lVar21 + (long)*piVar24 * 0x10 + 0x138);
          goto code_r0x014e5d20;
        }
        piVar24 = piVar24 + 4;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    plVar18 = (long *)0x0;
    puVar14 = (undefined8 *)func_0x00fac1f0(plVar12);
code_r0x014e5d20:
    plVar13 = (long *)(*(code *)*puVar14)(plVar12,puVar14[1]);
    fVar35 = fVar35 - extraout_s0;
    *(float *)(lVar20 + 0xbc) = fVar35;
    if (0.0 < fVar35) goto code_r0x014e5d48;
    auVar36._8_8_ = *(undefined8 *)(lVar20 + 0x80);
    auVar36._0_8_ = lVar20;
    puVar32 = &UNK_014e5d48;
code_r0x014e5da8:
    plVar13 = auVar36._0_8_;
    puVar7 = (undefined1 *)((long)register0x00000008 + -0xa0);
    *(long **)((long)register0x00000008 + -0xa0) = plVar12;
    *(long *)((long)register0x00000008 + -0x98) = lVar20;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x50);
    *(undefined **)((long)register0x00000008 + -0x88) = puVar32;
    puVar31 = (undefined1 *)((long)register0x00000008 + -0x90);
    if ((char)plVar13[0x17] != '\0') {
      return plVar13;
    }
    plVar16 = plVar13;
    if (auVar36._8_8_ == 0) {
code_r0x014e5ddc:
      *(undefined1 *)(plVar13 + 0x17) = 1;
      return plVar16;
    }
    plVar16 = *(long **)(auVar36._8_8_ + 0x20);
    if (plVar16 != (long *)0x0) {
      plVar16 = (long *)(**(code **)(*plVar16 + 0x228))(plVar16,*(undefined8 *)(*plVar16 + 0x230));
      goto code_r0x014e5ddc;
    }
    puVar32 = &Atlas_Contexts_RoundResultsState__BackOut;
    lVar20 = func_0x00f78af4();
  }
  else {
code_r0x014e5d48:
    if (*(long *)(lVar20 + 0x80) == 0) {
code_r0x014e5da4:
      puVar32 = &Atlas_Contexts_RoundResultsState__RequestResultsFinish;
      auVar36 = func_0x00f78af4();
      goto code_r0x014e5da8;
    }
    lVar21 = *(long *)(*(long *)(lVar20 + 0x80) + 0x20);
    if ((lVar21 == 0) || (*(char *)(lVar21 + 0x19c) != '\0')) {
      return plVar13;
    }
    /*Atlas.Contexts.RoundResultsState$$RemoveDelegates*/ func_0x014e5af8(lVar20);
    if (*(long *)(lVar20 + 0x80) == 0) goto code_r0x014e5da4;
    /*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(lVar20 + 0x80),0);
    puVar31 = *(undefined1 **)((long)register0x00000008 + -0x50);
    puVar32 = *(undefined **)((long)register0x00000008 + -0x48);
    plVar12 = *(long **)((long)register0x00000008 + -0x60);
    plVar13 = *(long **)((long)register0x00000008 + -0x58);
    unaff_x22 = *(long *)((long)register0x00000008 + -0x70);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x68);
    puVar7 = (undefined1 *)((long)register0x00000008 + -0x40);
  }
  *(long **)(puVar7 + -0x20) = plVar12;
  *(long **)(puVar7 + -0x18) = plVar13;
  *(undefined1 **)(puVar7 + -0x10) = puVar31;
  *(undefined **)(puVar7 + -8) = puVar32;
  if ((bRam0000000003eb4c0c & 1) == 0) {
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb4c0c = 1;
  }
  if (*(long *)(lVar20 + 0xa0) != 0) {
    /*Atlas.UI.VotingManager$$VotingFinished*/ func_0x0152a194(*(long *)(lVar20 + 0xa0),0);
    uVar28 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
    lVar21 = *(long *)(lVar20 + 0xa8);
    if (lVar21 != 0) {
      cVar2 = *(char *)(lVar21 + 0x50);
      if (cVar2 == '\0') {
        *(undefined1 *)(lVar21 + 0x50) = 1;
        *(undefined8 *)(lVar21 + 0x40) = uVar28;
        *(undefined8 *)(lVar21 + 0x48) = 0;
      }
      return (long *)(ulong)(cVar2 == '\0');
    }
  }
  func_0x00f78af4();
  *(undefined8 *)(puVar7 + -0x70) = unaff_x26;
  *(undefined8 *)(puVar7 + -0x68) = unaff_x25;
  *(long **)(puVar7 + -0x60) = unaff_x24;
  *(undefined8 **)(puVar7 + -0x58) = unaff_x23;
  *(long *)(puVar7 + -0x50) = unaff_x22;
  *(undefined8 *)(puVar7 + -0x48) = uVar25;
  *(undefined8 *)(puVar7 + -0x40) = 0x3eb4000;
  *(long *)(puVar7 + -0x38) = lVar20;
  *(undefined1 **)(puVar7 + -0x30) = puVar7 + -0x10;
  *(undefined **)(puVar7 + -0x28) = &Atlas_Contexts_RoundResultsState__UpdateEntryPreviousPositions;
  lVar20 = 0x3eb4000;
  plVar12 = plVar18;
  if ((bRam0000000003eb4c08 & 1) == 0) {
    func_0x00f78a20(0x3d2cf38);
    func_0x00f78a20(0x3d1b978);
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3d168);
    func_0x00f78a20(0x3d3b5c0);
    func_0x00f78a20(0x3d3d178);
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3d188);
    func_0x00f78a20(0x3d3d190);
    func_0x00f78a20(0x3d63bc0);
    func_0x00f78a20(0x3d289f8);
    bRam0000000003eb4c08 = 1;
  }
  uVar25 = 0x3d32b90;
  *(undefined8 *)(puVar7 + -0x88) = 0;
  *(undefined8 *)(puVar7 + -0x90) = 0;
  *(undefined8 *)(puVar7 + -0x78) = 0;
  *(undefined8 *)(puVar7 + -0x80) = 0;
  *(undefined4 *)(puVar7 + -0x98) = 0;
  *(undefined8 *)(puVar7 + -0xa0) = 0;
  lVar21 = *(long *)(extraout_x1 + 0x18);
  if ((lVar21 != 0) && (0 < *(int *)(lVar21 + 0x18))) {
    /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(puVar7 + -0xc0,lVar21,uRam0000000003d3b5c0);
    *(undefined8 *)(puVar7 + -0x88) = *(undefined8 *)(puVar7 + -0xb8);
    *(undefined8 *)(puVar7 + -0x90) = *(undefined8 *)(puVar7 + -0xc0);
    *(undefined8 *)(puVar7 + -0x78) = *(undefined8 *)(puVar7 + -0xa8);
    *(undefined8 *)(puVar7 + -0x80) = *(undefined8 *)(puVar7 + -0xb0);
    uVar19 = 1;
    while( true ) {
      uVar23 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(puVar7 + -0x90,uRam0000000003d32b98);
      if ((uVar23 & 1) == 0) {
        plVar12 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar7 + -0x90,uRam0000000003d32b90);
        return plVar12;
      }
      if (plVar18 == (long *)0x0) break;
      /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(plVar18,(ulong)uVar19 | *(ulong *)(puVar7 + -0x80) << 0x20,
                      *(ulong *)(puVar7 + -0x80) >> 0x20,uRam0000000003d3d168);
      uVar19 = uVar19 + 1;
    }
    func_0x00f78af4();
code_r0x014e6194:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x14e6198);
    (*pcVar5)();
  }
  lVar21 = extraout_x1;
  if (*(long *)(extraout_x1 + 8) == 0) goto code_r0x014e6198;
  unaff_x24 = (long *)0x3d289f8;
  unaff_x23 = (undefined8 *)0x3d3d178;
  /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(puVar7 + -0xc0,*(long *)(extraout_x1 + 8),uRam0000000003d3b5c0);
  *(undefined8 *)(puVar7 + -0x88) = *(undefined8 *)(puVar7 + -0xb8);
  *(undefined8 *)(puVar7 + -0x90) = *(undefined8 *)(puVar7 + -0xc0);
  *(undefined8 *)(puVar7 + -0x78) = *(undefined8 *)(puVar7 + -0xa8);
  *(undefined8 *)(puVar7 + -0x80) = *(undefined8 *)(puVar7 + -0xb0);
  while (uVar23 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(puVar7 + -0x90,uRam0000000003d32b98), (uVar23 & 1) != 0) {
    lVar20 = *(long *)(puVar7 + -0x80);
    plVar12 = (long *)(puVar7 + -0xa0);
    uVar23 = /*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(extraout_x1,lVar20,plVar12,0);
    if ((uVar23 & 1) != 0) {
      if (plVar18 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014e6194;
      }
      plVar12 = (long *)(ulong)(uint)((int)((ulong)lVar20 >> 0x20) - *(int *)(puVar7 + -0x9c));
      /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(plVar18,lVar20 << 0x20,plVar12,uRam0000000003d3d168);
    }
  }
  /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar7 + -0x90,uRam0000000003d32b90);
  do {
    lVar15 = *unaff_x24;
    if (((*(ushort *)(lVar15 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar15 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar15 = *unaff_x24;
    }
    plVar13 = *(long **)(lVar15 + 0xb8);
    lVar21 = plVar13[1];
    if (lVar21 == 0) {
      if (((*(ushort *)(lVar15 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar15 + 0xe0) == 0)) {
        func_0x00f78ad0();
        plVar13 = *(long **)(*unaff_x24 + 0xb8);
      }
      lVar20 = *plVar13;
      lVar21 = func_0x00f78aec(/*System.Comparison<EndOfRoundScreen.LeaderboardEntry>_TypeInfo*/ uRam0000000003d1b978);
      plVar12 = plRam0000000003d63bc0;
      /*System.Comparison<EndOfRoundScreen.LeaderboardEntry>$$.ctor*/ func_0x01dc71e8(lVar21,lVar20,plRam0000000003d63bc0,uRam0000000003d2cf38);
      *(long *)(*(long *)(*unaff_x24 + 0xb8) + 8) = lVar21;
    }
    if (plVar18 != (long *)0x0) {
      plVar12 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Sort*/ func_0x025212a4(plVar18,lVar21,*unaff_x23);
      uVar23 = (ulong)*(uint *)(plVar18 + 3);
      if ((int)*(uint *)(plVar18 + 3) < 1) {
        return plVar12;
      }
      lVar20 = 0;
      uVar26 = 0;
      do {
        if ((uVar23 & 0xffffffff) <= uVar26) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar26 = uVar26 + 1;
        plVar12 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar18,(int)uVar26 + -1,
                                          uVar26 | (ulong)*(uint *)(plVar18[2] + lVar20 + 0x24) <<
                                                   0x20,*(undefined8 *)(plVar18[2] + lVar20 + 0x28),
                                          uRam0000000003d3d190);
        uVar23 = (ulong)(int)plVar18[3];
        lVar20 = lVar20 + 0x10;
      } while ((long)uVar26 < (long)uVar23);
      return plVar12;
    }
code_r0x014e6198:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014e620c;
    plVar13 = (long *)___cxa_begin_catch();
    lVar21 = *plVar13;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar7 + -0x90,uRam0000000003d32b90);
  } while (lVar21 == 0);
  func_0x00f78ac0(lVar21,0);
code_r0x014e620c:
  auVar36 = __Unwind_Resume();
  plVar16 = auVar36._0_8_;
  *(long **)(puVar7 + -0x100) = unaff_x24;
  *(undefined8 **)(puVar7 + -0xf8) = unaff_x23;
  *(undefined8 *)(puVar7 + -0xf0) = 0x3d32b90;
  *(long *)(puVar7 + -0xe8) = lVar20;
  *(long *)(puVar7 + -0xe0) = lVar21;
  *(long **)(puVar7 + -0xd8) = plVar18;
  *(undefined1 **)(puVar7 + -0xd0) = puVar7 + -0x30;
  *(undefined **)(puVar7 + -200) = &Atlas_Contexts_RoundResultsState__UpdateEntryStarDeltas;
  plVar13 = plVar12;
  if ((bRam0000000003eb4c09 & 1) == 0) {
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    plVar16 = (long *)func_0x00f78a20(0x3d3d190);
    bRam0000000003eb4c09 = 1;
  }
  *(undefined4 *)(puVar7 + -0x108) = 0;
  *(undefined8 *)(puVar7 + -0x110) = 0;
  if (plVar12 != (long *)0x0) {
    uVar23 = (ulong)*(uint *)(plVar12 + 3);
    if (0 < (int)*(uint *)(plVar12 + 3)) {
      lVar20 = 0;
      uVar26 = 0;
      do {
        if ((uVar23 & 0xffffffff) <= uVar26) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar16 = (long *)/*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(auVar36._8_8_,*(undefined4 *)(plVar12[2] + lVar20 + 0x24),
                                          puVar7 + -0x110,0);
        if ((int)plVar16 != 0) {
          if (*(uint *)(plVar12 + 3) <= uVar26) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar16 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar12,uVar26,
                                            *(undefined8 *)(plVar12[2] + lVar20 + 0x20),
                                            CONCAT44(*(undefined4 *)(puVar7 + -0x10c),
                                                     *(undefined4 *)(plVar12[2] + lVar20 + 0x28)),
                                            uRam0000000003d3d190);
        }
        uVar26 = uVar26 + 1;
        uVar23 = (ulong)(int)plVar12[3];
        lVar20 = lVar20 + 0x10;
      } while ((long)uVar26 < (long)uVar23);
    }
    return plVar16;
  }
  auVar37 = func_0x00f78af4();
  plVar18 = auVar37._0_8_;
  *(long **)(puVar7 + -0x150) = unaff_x24;
  *(undefined8 **)(puVar7 + -0x148) = unaff_x23;
  *(undefined8 *)(puVar7 + -0x140) = 0x3d32b90;
  *(undefined8 *)(puVar7 + -0x138) = 0x3eb4000;
  *(long *)(puVar7 + -0x130) = auVar36._8_8_;
  *(undefined8 *)(puVar7 + -0x128) = 0;
  *(undefined1 **)(puVar7 + -0x120) = puVar7 + -0xd0;
  *(undefined **)(puVar7 + -0x118) = &Atlas_Contexts_RoundResultsState__UpdateEntryCurrentStars;
  plVar12 = plVar13;
  if ((bRam0000000003eb4c0a & 1) == 0) {
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    plVar18 = (long *)func_0x00f78a20(0x3d3d190);
    bRam0000000003eb4c0a = 1;
  }
  *(undefined4 *)(puVar7 + -0x158) = 0;
  *(undefined8 *)(puVar7 + -0x160) = 0;
  if (plVar13 != (long *)0x0) {
    uVar23 = (ulong)*(uint *)(plVar13 + 3);
    if (0 < (int)*(uint *)(plVar13 + 3)) {
      uVar26 = 0;
      lVar20 = 0x20;
      do {
        if ((uVar23 & 0xffffffff) <= uVar26) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar18 = (long *)/*Core.Networking.NetworkTournament$$GetTotalNetworkScore*/ func_0x01660f34(auVar37._8_8_,*(undefined4 *)(plVar13[2] + lVar20 + 4),
                                          puVar7 + -0x160,0);
        if ((int)plVar18 != 0) {
          if (*(uint *)(plVar13 + 3) <= uVar26) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar18 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar13,uVar26,*(undefined8 *)(plVar13[2] + lVar20),
                                            *(undefined4 *)(puVar7 + -0x15c),uRam0000000003d3d190);
        }
        uVar26 = uVar26 + 1;
        uVar23 = (ulong)(int)plVar13[3];
        lVar20 = lVar20 + 0x10;
      } while ((long)uVar26 < (long)uVar23);
    }
    return plVar18;
  }
  auVar36 = func_0x00f78af4();
  lVar20 = auVar36._8_8_;
  puVar14 = auVar36._0_8_;
  puVar8 = puVar7 + -0x1c0;
  *(long **)(puVar7 + -0x1a0) = unaff_x24;
  *(undefined8 **)(puVar7 + -0x198) = unaff_x23;
  *(undefined8 *)(puVar7 + -400) = 0x3d32b90;
  *(undefined8 *)(puVar7 + -0x188) = 0x3eb4000;
  *(long *)(puVar7 + -0x180) = auVar37._8_8_;
  *(undefined8 *)(puVar7 + -0x178) = 0;
  *(undefined1 **)(puVar7 + -0x170) = puVar7 + -0x120;
  *(undefined **)(puVar7 + -0x168) =
       &Atlas_Contexts_RoundResultsState__SortEntriesByStarCountFromTournamentData;
  if ((bRam0000000003eb4c0b & 1) == 0) {
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3d168);
    func_0x00f78a20(0x3d3d170);
    func_0x00f78a20(0x3d3b5c0);
    bRam0000000003eb4c0b = 1;
  }
  *(undefined8 *)(puVar7 + -0x1b8) = 0;
  *(undefined8 *)(puVar7 + -0x1c0) = 0;
  *(undefined8 *)(puVar7 + -0x1a8) = 0;
  *(undefined8 *)(puVar7 + -0x1b0) = 0;
  if (lVar20 != 0) {
    /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Clear*/ func_0x0251f970(lVar20,uRam0000000003d3d170);
    if (puVar14[1] != 0) {
      /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(puVar7 + -0x1c0,puVar14[1],uRam0000000003d3b5c0);
      uVar19 = 1;
      while (uVar23 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(puVar7 + -0x1c0,uRam0000000003d32b98), (uVar23 & 1) != 0) {
        /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(lVar20,(ulong)uVar19 | *(ulong *)(puVar7 + -0x1b0) << 0x20,
                        *(ulong *)(puVar7 + -0x1b0) >> 0x20,uRam0000000003d3d168);
        uVar19 = uVar19 + 1;
      }
      plVar12 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar7 + -0x1c0,uRam0000000003d32b90);
      return plVar12;
    }
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar13 = (long *)___cxa_begin_catch();
    lVar20 = *plVar13;
    ___cxa_end_catch();
    plVar13 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(puVar7 + -0x1c0,*puVar14);
    if (lVar20 == 0) {
      return plVar13;
    }
    func_0x00f78ac0(lVar20,0);
  }
  lVar21 = __Unwind_Resume();
  *(undefined8 *)(puVar7 + -0x1f0) = 0x3d32b90;
  *(undefined8 *)(puVar7 + -0x1e8) = 0x3eb4000;
  *(undefined8 **)(puVar7 + -0x1e0) = puVar14;
  *(long *)(puVar7 + -0x1d8) = lVar20;
  *(undefined1 **)(puVar7 + -0x1d0) = puVar7 + -0x170;
  *(undefined **)(puVar7 + -0x1c8) = &Atlas_Contexts_RoundResultsState__OnResultsFinished;
  if ((bRam0000000003eb4c0e & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d27638);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d40658);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4c0e = 1;
  }
  uVar27 = 0x3d40650;
  iVar10 = Atlas_Contexts_RoundResultsState__IsTournamentOver(lVar21);
  uVar28 = uVar27;
  if (iVar10 == 0) {
    uVar23 = *(ulong *)(lVar21 + 0xa0);
    lVar20 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar21,uRam0000000003d40650);
    if ((lVar20 != 0) && (uVar23 != 0)) {
      plVar12 = *(long **)(lVar20 + 0x10);
      lVar20 = *(long *)(puVar7 + -0x1f0);
      *(long **)(puVar7 + -0x200) = unaff_x24;
      *(undefined8 **)(puVar7 + -0x1f8) = unaff_x23;
      *(long *)(puVar7 + -0x1f0) = lVar20;
      *(undefined8 *)(puVar7 + -0x1e8) = *(undefined8 *)(puVar7 + -0x1e8);
      *(undefined8 *)(puVar7 + -0x1e0) = *(undefined8 *)(puVar7 + -0x1e0);
      *(undefined8 *)(puVar7 + -0x1d8) = *(undefined8 *)(puVar7 + -0x1d8);
      *(undefined8 *)(puVar7 + -0x1d0) = *(undefined8 *)(puVar7 + -0x1d0);
      *(undefined8 *)(puVar7 + -0x1c8) = *(undefined8 *)(puVar7 + -0x1c8);
      lVar21 = 0x3eb4000;
      if ((bRam0000000003eb4e73 & 1) == 0) {
        func_0x00f78a20(0x3d3b110,plVar12,0);
        func_0x00f78a20(0x3d1f498);
        func_0x00f78a20(0x3d66320);
        func_0x00f78a20(0x3d663f8);
        func_0x00f78a20(0x3d66300);
        func_0x00f78a20(0x3d66318);
        func_0x00f78a20(0x3d663f0);
        func_0x00f78a20(0x3d6b9f8);
        bRam0000000003eb4e73 = 1;
      }
      *(undefined8 *)(puVar7 + -0x210) = 0;
      *(undefined8 *)(puVar7 + -0x208) = 0;
      *(undefined4 *)(puVar7 + -0x218) = 0;
      *(undefined4 *)(puVar7 + -0x214) = 0;
      puVar14 = unaff_x23;
      if (*(long *)(uVar23 + 0x20) == 0) {
code_r0x0152a8c4:
        plVar13 = plVar12;
        func_0x00f78af4();
code_r0x0152a8c8:
        uVar25 = func_0x00f78b24();
        unaff_x23 = puVar14;
code_r0x0152a8d4:
        puVar32 = &Atlas_UI_VotingManager__FilterMapsFromTournament;
        auVar37 = func_0x00f78ac0(uVar25,0);
      }
      else {
        plVar13 = (long *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(uVar23 + 0x20),0);
        if ((int)plVar13 == 0) {
          return plVar13;
        }
        if ((*(long *)(uVar23 + 0xb0) == 0) ||
           (/*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(*(long *)(uVar23 + 0xb0),*(undefined8 *)(uVar23 + 0xe0),0),
           plVar12 == (long *)0x0)) goto code_r0x0152a8c4;
        auVar37._8_8_ = *(undefined8 *)(uVar23 + 0xe0);
        auVar37._0_8_ = uVar23;
        if ((int)plVar12[2] != 2) {
          /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(uVar23,*(undefined8 *)(uVar23 + 0xe0),puVar7 + -0x208,puVar7 + -0x210);
          if (*(long *)(uVar23 + 0xe0) == 0) goto code_r0x0152a8c4;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(uVar23 + 0xe0),uRam0000000003d3b110);
          lVar20 = *(long *)(puVar7 + -0x208);
          if ((lVar20 == 0) || (*(long *)(uVar23 + 0x28) == 0)) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar23 + 0x28),*(undefined8 *)(lVar20 + 0x18),puVar7 + -0x216,0)
          ;
          lVar21 = *(long *)(puVar7 + -0x210);
          if ((lVar21 == 0) || (*(long *)(uVar23 + 0x28) == 0)) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar23 + 0x28),*(undefined8 *)(lVar21 + 0x18),puVar7 + -0x218,0)
          ;
          if (*(long *)(uVar23 + 0xb0) == 0) goto code_r0x0152a8c4;
          uVar25 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(uVar23 + 0xb0),lVar20,0);
          if (*(long *)(uVar23 + 0x28) == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar23 + 0x28),uVar25,puVar7 + -0x212,0);
          if (*(long *)(uVar23 + 0xb0) == 0) goto code_r0x0152a8c4;
          uVar25 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(uVar23 + 0xb0),lVar21,0);
          if (*(long *)(uVar23 + 0x28) == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar23 + 0x28),uVar25,puVar7 + -0x214,0);
          plVar13 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0xc);
          if (plVar13 == (long *)0x0) goto code_r0x0152a8c4;
          unaff_x23 = (undefined8 *)0x3d6b9f8;
          puVar30 = (undefined8 *)0x3d6b9f8;
          if ((/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8 != 0) &&
             (lVar15 = func_0x00f78adc(/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8,*(undefined8 *)(*plVar13 + 0x40)),
             lVar15 == 0)) goto code_r0x0152a8d0;
          uVar26 = plVar13[3];
          puVar14 = unaff_x23;
          if ((int)uVar26 == 0) goto code_r0x0152a8c8;
          plVar13[4] = /*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8;
          lVar20 = *(long *)(lVar20 + 0x18);
          if (lVar20 != 0) {
            lVar15 = func_0x00f78adc(lVar20,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar15 == 0) goto code_r0x0152a8d0;
            uVar26 = plVar13[3];
          }
          if ((uVar26 & 0xfffffffe) == 0) goto code_r0x0152a8c8;
          plVar13[5] = lVar20;
          lVar20 = 0x3d66300;
          lVar15 = 0x3d66300;
          if (/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300 != 0) {
            lVar22 = func_0x00f78adc(/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar22 == 0) goto code_r0x0152a8d0;
            uVar26 = plVar13[3];
          }
          puVar14 = puVar30;
          if ((uint)uVar26 < 3) goto code_r0x0152a8c8;
          plVar13[6] = /*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300;
          lVar21 = *(long *)(lVar21 + 0x18);
          if (lVar21 != 0) {
            lVar22 = func_0x00f78adc(lVar21,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar22 == 0) goto code_r0x0152a8d0;
            uVar26 = plVar13[3];
          }
          uVar19 = (uint)uVar26;
          if ((uVar26 & 0xfffffffc) == 0) goto code_r0x0152a8c8;
          plVar13[7] = lVar21;
          lVar21 = 0x3d663f0;
          lVar20 = lVar15;
          if (/*STR(' typeKey1: ')*/ lRam0000000003d663f0 != 0) {
            lVar15 = func_0x00f78adc(/*STR(' typeKey1: ')*/ lRam0000000003d663f0,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar15 == 0) goto code_r0x0152a8d0;
            uVar19 = (uint)plVar13[3];
          }
          if (uVar19 < 5) goto code_r0x0152a8c8;
          plVar13[8] = /*STR(' typeKey1: ')*/ lRam0000000003d663f0;
          lVar21 = /*System.Int16$$ToString*/ func_0x02ae8e6c(puVar7 + -0x212,0);
          if ((lVar21 == 0) ||
             (lVar15 = func_0x00f78adc(lVar21,*(undefined8 *)(*plVar13 + 0x40)), lVar15 != 0)) {
            uVar19 = *(uint *)(plVar13 + 3);
            if (5 < uVar19) {
              plVar13[9] = lVar21;
              lVar21 = 0x3d663f8;
              if (/*STR(' typeKey2: ')*/ lRam0000000003d663f8 != 0) {
                lVar15 = func_0x00f78adc(/*STR(' typeKey2: ')*/ lRam0000000003d663f8,*(undefined8 *)(*plVar13 + 0x40));
                if (lVar15 == 0) goto code_r0x0152a8d0;
                uVar19 = *(uint *)(plVar13 + 3);
              }
              if (6 < uVar19) {
                plVar13[10] = /*STR(' typeKey2: ')*/ lRam0000000003d663f8;
                lVar21 = /*System.Int16$$ToString*/ func_0x02ae8e6c(puVar7 + -0x214,0);
                if ((lVar21 != 0) &&
                   (lVar15 = func_0x00f78adc(lVar21,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                goto code_r0x0152a8d0;
                uVar19 = (uint)plVar13[3];
                if ((plVar13[3] & 0xfffffff8U) != 0) {
                  plVar13[0xb] = lVar21;
                  lVar21 = 0x3d66318;
                  if (/*STR(' mapKey1: ')*/ lRam0000000003d66318 != 0) {
                    lVar15 = func_0x00f78adc(/*STR(' mapKey1: ')*/ lRam0000000003d66318,*(undefined8 *)(*plVar13 + 0x40));
                    if (lVar15 == 0) goto code_r0x0152a8d0;
                    uVar19 = (uint)plVar13[3];
                  }
                  if (8 < uVar19) {
                    plVar13[0xc] = /*STR(' mapKey1: ')*/ lRam0000000003d66318;
                    lVar21 = /*System.Int16$$ToString*/ func_0x02ae8e6c(puVar7 + -0x216,0);
                    if ((lVar21 != 0) &&
                       (lVar15 = func_0x00f78adc(lVar21,*(undefined8 *)(*plVar13 + 0x40)),
                       lVar15 == 0)) goto code_r0x0152a8d0;
                    uVar19 = *(uint *)(plVar13 + 3);
                    if (9 < uVar19) {
                      plVar13[0xd] = lVar21;
                      lVar21 = 0x3d66320;
                      if (/*STR(' mapKey2: ')*/ lRam0000000003d66320 != 0) {
                        lVar15 = func_0x00f78adc(/*STR(' mapKey2: ')*/ lRam0000000003d66320,
                                                 *(undefined8 *)(*plVar13 + 0x40));
                        if (lVar15 == 0) goto code_r0x0152a8d0;
                        uVar19 = *(uint *)(plVar13 + 3);
                      }
                      if (10 < uVar19) {
                        plVar13[0xe] = /*STR(' mapKey2: ')*/ lRam0000000003d66320;
                        lVar21 = /*System.Int16$$ToString*/ func_0x02ae8e6c(puVar7 + -0x218,0);
                        if ((lVar21 != 0) &&
                           (lVar15 = func_0x00f78adc(lVar21,*(undefined8 *)(*plVar13 + 0x40)),
                           lVar15 == 0)) goto code_r0x0152a8d0;
                        if (0xb < *(uint *)(plVar13 + 3)) {
                          plVar13[0xf] = lVar21;
                          /*System.String$$Concat*/ func_0x029cfadc(plVar13,0);
                          plVar12 = plVar13;
                          puVar14 = unaff_x23;
                          if ((*(long *)(uVar23 + 0x20) != 0) &&
                             (plVar13 = *(long **)(*(long *)(uVar23 + 0x20) + 0x20),
                             plVar13 != (long *)0x0)) {
                            plVar12 = (long *)(**(code **)(*plVar13 + 0x1c8))
                                                        (plVar13,(long)*(short *)(puVar7 + -0x216),
                                                         (long)*(short *)(puVar7 + -0x212),
                                                         (long)*(short *)(puVar7 + -0x218),
                                                         (long)*(short *)(puVar7 + -0x214),
                                                         &UNK_00001770,
                                                         *(undefined8 *)(*plVar13 + 0x1d0));
                            return plVar12;
                          }
                          goto code_r0x0152a8c4;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto code_r0x0152a8c8;
          }
code_r0x0152a8d0:
          uVar25 = func_0x00f78b14();
          goto code_r0x0152a8d4;
        }
        puVar32 = &UNK_0152a520;
        plVar13 = plVar12;
      }
      uVar26 = auVar37._0_8_;
      *(undefined8 *)(puVar7 + -0x280) = unaff_x28;
      *(undefined8 *)(puVar7 + -0x278) = unaff_x27;
      *(undefined8 *)(puVar7 + -0x270) = 0x3d3d168;
      *(undefined8 *)(puVar7 + -0x268) = 0x3d32b98;
      *(long **)(puVar7 + -0x260) = unaff_x24;
      *(undefined8 **)(puVar7 + -600) = unaff_x23;
      *(long *)(puVar7 + -0x250) = lVar20;
      *(long *)(puVar7 + -0x248) = lVar21;
      *(long **)(puVar7 + -0x240) = plVar13;
      *(ulong *)(puVar7 + -0x238) = uVar23;
      *(undefined1 **)(puVar7 + -0x230) = puVar7 + -0x1d0;
      *(undefined **)(puVar7 + -0x228) = puVar32;
      *(long *)(puVar7 + -0x350) = auVar37._8_8_;
      uVar23 = 0x3eb4000;
      if ((bRam0000000003eb4e75 & 1) == 0) {
        func_0x00f78a20(0x3d2e6f0);
        func_0x00f78a20(0x3d2e6f8);
        func_0x00f78a20(0x3d2e700);
        func_0x00f78a20(0x3d2e710);
        func_0x00f78a20(0x3d2e748);
        func_0x00f78a20(0x3d2e750);
        func_0x00f78a20(0x3d32bf0);
        func_0x00f78a20(0x3d32980);
        func_0x00f78a20(0x3d33d98);
        func_0x00f78a20(0x3d33da0);
        func_0x00f78a20(0x3d32988);
        func_0x00f78a20(0x3d32bf8);
        func_0x00f78a20(0x3d32c00);
        func_0x00f78a20(0x3d32990);
        func_0x00f78a20(0x3d33dd0);
        func_0x00f78a20(0x3d39240);
        func_0x00f78a20(0x3d39248);
        func_0x00f78a20(0x3d3b120);
        func_0x00f78a20(0x3d3b6b8);
        func_0x00f78a20(0x3d3b130);
        func_0x00f78a20(0x3d3b0f8);
        func_0x00f78a20(0x3d3b140);
        func_0x00f78a20(0x3d3b6c0);
        func_0x00f78a20(0x3d3b148);
        func_0x00f78a20(0x3d1db90);
        func_0x00f78a20(0x3d65ed8);
        func_0x00f78a20(0x3d66270);
        func_0x00f78a20(0x3d6cdb0);
        func_0x00f78a20(0x3d6cdc0);
        func_0x00f78a20(0x3d6cdb8);
        func_0x00f78a20(0x3d6cdc8);
        bRam0000000003eb4e75 = 1;
      }
      *(undefined8 *)(puVar7 + -0x2a0) = 0;
      *(undefined8 *)(puVar7 + -0x2b8) = 0;
      *(undefined8 *)(puVar7 + -0x2c0) = 0;
      *(undefined8 *)(puVar7 + -0x2a8) = 0;
      *(undefined8 *)(puVar7 + -0x2b0) = 0;
      *(undefined8 *)(puVar7 + -0x2c8) = 0;
      *(undefined8 *)(puVar7 + -0x2e8) = 0;
      *(undefined8 *)(puVar7 + -0x2f0) = 0;
      *(undefined8 *)(puVar7 + -0x2d8) = 0;
      *(undefined8 *)(puVar7 + -0x2e0) = 0;
      *(undefined8 *)(puVar7 + -0x300) = 0;
      *(undefined8 *)(puVar7 + -0x2f8) = 0;
      *(undefined8 *)(puVar7 + -0x310) = 0;
      *(undefined8 *)(puVar7 + -0x308) = 0;
      *(undefined4 *)(puVar7 + -0x314) = 0;
      if (*(long *)(uVar26 + 0xb8) != 0) {
        uVar23 = 0x3d1d000;
        /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(uVar26 + 0xb8),uRam0000000003d2e6f8);
        plVar13 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
        /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(plVar13,*(undefined8 *)(puVar7 + -0x350),uRam0000000003d3b0f8);
        if (((*(long *)(uVar26 + 0x20) != 0) &&
            (lVar20 = *(long *)(*(long *)(uVar26 + 0x20) + 0x20), lVar20 != 0)) &&
           (lVar20 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar20,0), lVar20 != 0)) {
          uVar23 = 0x3d6c000;
          *(undefined4 *)(puVar7 + -0x294) = *(undefined4 *)(lVar20 + 0x18);
          uVar25 = /*System.Int32$$ToString*/ func_0x02ae9b8c(puVar7 + -0x294,0);
          /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar25,0);
          if (((*(long *)(uVar26 + 0x20) != 0) &&
              (lVar20 = *(long *)(*(long *)(uVar26 + 0x20) + 0x20), lVar20 != 0)) &&
             (lVar20 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar20,0), lVar20 != 0)) {
            uVar23 = 0x3d32bf8;
            /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(puVar7 + -0x348,lVar20,uRam0000000003d3b6b8);
            *(undefined8 *)(puVar7 + -0x2b8) = *(undefined8 *)(puVar7 + -0x340);
            *(undefined8 *)(puVar7 + -0x2c0) = *(undefined8 *)(puVar7 + -0x348);
            *(undefined8 *)(puVar7 + -0x2a8) = *(undefined8 *)(puVar7 + -0x330);
            *(undefined8 *)(puVar7 + -0x2b0) = *(undefined8 *)(puVar7 + -0x338);
            *(undefined8 *)(puVar7 + -0x2a0) = *(undefined8 *)(puVar7 + -0x328);
code_r0x0152aba4:
            uVar17 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(puVar7 + -0x2c0,uRam0000000003d32bf8);
            if ((uVar17 & 1) != 0) {
              sVar3 = *(short *)(puVar7 + -0x2a4);
              sVar1 = *(short *)(puVar7 + -0x2a8);
              if (sVar3 != *(short *)(puVar7 + -0x2ac)) {
                sVar1 = *(short *)(puVar7 + -0x2ac);
              }
              if (*(long *)(uVar26 + 0xb8) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              iVar10 = (int)sVar1;
              uVar17 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(uVar26 + 0xb8),iVar10,uRam0000000003d2e700);
              if ((uVar17 & 1) == 0) {
                if (*(long *)(uVar26 + 0xb8) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0152af9c;
                }
                /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(uVar26 + 0xb8),iVar10,0,uRam0000000003d2e6f0);
              }
              lVar20 = *(long *)(uVar26 + 0xb8);
              if (lVar20 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              iVar11 = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar20,iVar10,uRam0000000003d2e748);
              *(int *)(puVar7 + -0x294) = iVar11;
              /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar20,iVar10,iVar11 + 1,uRam0000000003d2e750);
              if (*(long *)(uVar26 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar26 + 0x28),(int)sVar3,puVar7 + -0x2c8,0);
              if (plVar13 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar19 = *(uint *)(plVar13 + 3);
              if (0 < (int)uVar19) {
                uVar29 = 0;
                do {
                  if (uVar19 <= uVar29) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar20 = *(long *)(plVar13[2] + (long)(int)uVar29 * 8 + 0x20);
                  if (lVar20 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar17 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar20 + 0x18),
                                           *(undefined8 *)(puVar7 + -0x2c8),0);
                  if ((uVar17 & 1) != 0) {
                    /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,*(undefined8 *)(puVar7 + -0x2c8),0);
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar13,uVar29,uRam0000000003d3b130);
                    break;
                  }
                  uVar29 = uVar29 + 1;
                  uVar19 = *(uint *)(plVar13 + 3);
                } while ((int)uVar29 < (int)uVar19);
              }
              goto code_r0x0152aba4;
            }
            *(undefined4 *)(puVar7 + -800) = 0x136;
            /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(puVar7 + -0x2c0,uRam0000000003d32bf0);
            *(undefined4 *)(puVar7 + -0x314) = 0;
            if (*(long *)(uVar26 + 0xb8) != 0) {
              /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(puVar7 + -0x348,*(long *)(uVar26 + 0xb8),uRam0000000003d2e710);
              *(undefined8 *)(puVar7 + -0x2e8) = *(undefined8 *)(puVar7 + -0x340);
              *(undefined8 *)(puVar7 + -0x2f0) = *(undefined8 *)(puVar7 + -0x348);
              *(undefined8 *)(puVar7 + -0x2d8) = *(undefined8 *)(puVar7 + -0x330);
              *(undefined8 *)(puVar7 + -0x2e0) = *(undefined8 *)(puVar7 + -0x338);
code_r0x0152ad1c:
              uVar23 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(puVar7 + -0x2f0,uRam0000000003d33da0);
              if ((uVar23 & 1) != 0) {
                if (*(int *)(uVar26 + 0x10) <= *(int *)(puVar7 + -0x2dc)) {
                  if (*(long *)(uVar26 + 0x28) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar26 + 0x28),
                                  (int)(short)*(undefined4 *)(puVar7 + -0x2e0),puVar7 + -0x2f8,0);
                  if (plVar13 == (long *)0x0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar19 = *(uint *)(plVar13 + 3);
                  if (0 < (int)uVar19) {
                    uVar29 = 0;
                    do {
                      if (uVar19 <= uVar29) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar20 = *(long *)(plVar13[2] + (long)(int)uVar29 * 8 + 0x20);
                      if (lVar20 == 0) {
                        func_0x00f78af4();
                        goto code_r0x0152af9c;
                      }
                      uVar23 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar20 + 0x18),
                                               *(undefined8 *)(puVar7 + -0x2f8),0);
                      if ((uVar23 & 1) != 0) {
                        /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,*(undefined8 *)(puVar7 + -0x2f8),0);
                        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar13,uVar29,uRam0000000003d3b130);
                        break;
                      }
                      uVar29 = uVar29 + 1;
                      uVar19 = *(uint *)(plVar13 + 3);
                    } while ((int)uVar29 < (int)uVar19);
                  }
                }
                goto code_r0x0152ad1c;
              }
              uVar19 = *(uint *)(puVar7 + -0x314);
              uVar26 = (ulong)uVar19;
              uVar23 = (ulong)(uVar19 + 1);
              *(undefined4 *)(puVar7 + -800) = 0x1d1;
              *(uint *)(puVar7 + -0x314) = uVar19 + 1;
              /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(puVar7 + -0x2f0,uRam0000000003d33d98);
              if (uVar19 != 0xffffffff) goto code_r0x0152ae34;
              uVar23 = 0;
              iVar10 = 0;
              if (plVar13 != (long *)0x0) goto code_r0x0152ae5c;
            }
          }
        }
      }
      do {
        func_0x00f78af4();
code_r0x0152ae34:
        if (*(int *)(puVar7 + (long)(int)uVar26 * 4 + -800) == 0x1d1) {
          *(int *)(puVar7 + -0x314) = (int)uVar26;
          uVar23 = uVar26;
        }
        iVar10 = (int)uVar23;
      } while (plVar13 == (long *)0x0);
code_r0x0152ae5c:
      *(int *)(puVar7 + -0x294) = (int)plVar13[3];
      uVar25 = /*System.Int32$$ToString*/ func_0x02ae9b8c(puVar7 + -0x294,0);
      uVar25 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar25,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar7 + -0x310,plVar13,uRam0000000003d3b120);
      while( true ) {
        uVar23 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar7 + -0x310,uRam0000000003d32988);
        if ((uVar23 & 1) == 0) {
          *(undefined4 *)(puVar7 + (long)iVar10 * 4 + -800) = 0x23d;
          *(int *)(puVar7 + -0x314) = *(int *)(puVar7 + -0x314) + 1;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar7 + -0x310,uRam0000000003d32980);
          if ((int)plVar13[3] < 2) {
            plVar13 = *(long **)(puVar7 + -0x350);
          }
          return plVar13;
        }
        if (*(long *)(puVar7 + -0x300) == 0) break;
        uVar25 = /*System.String$$Concat*/ func_0x029be39c(uVar25,*(undefined8 *)(*(long *)(puVar7 + -0x300) + 0x18),
                                 /*STR(' ')*/ uRam0000000003d65ed8,0);
      }
      func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x152afa0);
      (*pcVar5)();
    }
  }
  else {
    uVar23 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
    Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor(uVar23,0);
    lVar20 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar21,uRam0000000003d40650);
    uVar28 = 0x3d40650;
    if ((lVar20 != 0) && (uVar23 != 0)) {
      *(undefined8 *)(uVar23 + 0x10) = *(undefined8 *)(lVar20 + 0x10);
      lVar20 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar21,uRam0000000003d40658);
      uVar28 = uVar27;
      if (lVar20 != 0) {
        *(undefined8 *)(uVar23 + 0x18) = *(undefined8 *)(lVar20 + 0x18);
        *(undefined1 *)(uVar23 + 0x20) = 1;
        uVar28 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ uRam0000000003d194d8;
        plVar13 = *(long **)(lVar21 + 0x78);
        if (((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar18 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar28,0);
        lVar21 = 0;
        if (plVar13 != (long *)0x0) {
          puVar31 = *(undefined1 **)(puVar7 + -0x1d0);
          puVar32 = *(undefined **)(puVar7 + -0x1c8);
          uVar25 = *(undefined8 *)(puVar7 + -0x1f0);
          uVar28 = *(undefined8 *)(puVar7 + -0x1e8);
          plVar12 = *(long **)(puVar7 + -0x1d8);
          uVar26 = *(ulong *)(puVar7 + -0x1e0);
          goto code_r0x01e7159c;
        }
      }
    }
  }
  auVar38 = func_0x00f78af4();
  puVar14 = auVar38._8_8_;
  lVar20 = auVar38._0_8_;
  puVar8 = puVar7 + -0x250;
  *(long **)(puVar7 + -0x230) = unaff_x24;
  *(undefined8 **)(puVar7 + -0x228) = unaff_x23;
  *(undefined8 *)(puVar7 + -0x220) = 0x3d32b90;
  *(undefined8 *)(puVar7 + -0x218) = uVar28;
  *(ulong *)(puVar7 + -0x210) = uVar23;
  *(long *)(puVar7 + -0x208) = lVar21;
  *(undefined1 **)(puVar7 + -0x200) = puVar7 + -0x1d0;
  *(undefined **)(puVar7 + -0x1f8) = &Atlas_Contexts_RoundResultsState__OnVoteStarted;
  puVar31 = puVar7 + -0x200;
  uVar28 = 0x3eb4000;
  if ((bRam0000000003eb4c0f & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d297a0);
    func_0x00f78a20(0x3d1a1a8);
    bRam0000000003eb4c0f = 1;
  }
  lVar21 = *(long *)(lVar20 + 0xa0);
  if (lVar21 != 0) {
    uVar28 = 0x3d40000;
    uVar27 = *puVar14;
    uVar34 = puVar14[3];
    uVar33 = puVar14[2];
    *(undefined8 *)(puVar7 + -0x248) = puVar14[1];
    *(undefined8 *)(puVar7 + -0x250) = uVar27;
    *(undefined8 *)(puVar7 + -0x238) = uVar34;
    *(undefined8 *)(puVar7 + -0x240) = uVar33;
    plVar12 = (long *)0x0;
    /*Atlas.UI.VotingManager$$SetVoteData*/ func_0x01529c00(lVar21,puVar7 + -0x250);
    lVar21 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar20,uRam0000000003d40650);
    if (lVar21 != 0) {
      uVar25 = 0x3d1a000;
      unaff_x23 = (undefined8 *)0x3d25000;
      uVar28 = *(undefined8 *)(lVar21 + 0x10);
      uVar23 = func_0x00f78aec(/*Atlas.Contexts.VotingState.VotingStateTransitionData_TypeInfo*/ uRam0000000003d297a0);
      plVar12 = (long *)((long)&MACH_HEADER.magic + 1);
      /*Atlas.Contexts.VotingState.VotingStateTransitionData$$.ctor*/ func_0x0156ebc8(uVar23,uVar28,1,0);
      uVar28 = /*Atlas.Contexts.VotingState_var*/ uRam0000000003d1a1a8;
      plVar13 = *(long **)(lVar20 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar18 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar28,0);
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar23;
      auVar38 = auVar38 << 0x40;
      if (plVar13 != (long *)0x0) {
        puVar32 = &UNK_014e6858;
        plVar12 = plVar13;
        uVar26 = uVar23;
code_r0x01e7159c:
        *(undefined8 *)(puVar8 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar8 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar8 + -0x50) = 0x3d3d168;
        *(undefined8 *)(puVar8 + -0x48) = 0x3d32b98;
        *(long **)(puVar8 + -0x40) = unaff_x24;
        *(undefined8 **)(puVar8 + -0x38) = unaff_x23;
        *(undefined8 *)(puVar8 + -0x30) = uVar25;
        *(undefined8 *)(puVar8 + -0x28) = uVar28;
        *(ulong *)(puVar8 + -0x20) = uVar26;
        *(long **)(puVar8 + -0x18) = plVar12;
        *(undefined1 **)(puVar8 + -0x10) = puVar31;
        *(undefined **)(puVar8 + -8) = puVar32;
        *(long **)(puVar8 + -0x68) = plVar13;
        lVar20 = plVar13[0xd];
        if (lVar20 == 0) {
          puVar31 = puVar8 + -0x68;
          lVar21 = 1;
        }
        else {
          lVar21 = *(long *)(lVar20 + 0x18);
          if (lVar21 == 0) {
            return plVar13;
          }
          puVar31 = (undefined1 *)(lVar20 + 0x20);
        }
        lVar20 = 0;
        do {
          lVar15 = *(long *)(puVar31 + lVar20 * 8);
          pcVar5 = *(code **)(lVar15 + 0x10);
          plVar12 = *(long **)(lVar15 + 0x20);
          lVar15 = *(long *)(lVar15 + 0x28);
          if (*(short *)(lVar15 + 0x48) == -1) {
            func_0x00f78ad8(lVar15);
          }
          iVar10 = func_0x00f78a4c(lVar15);
          bVar9 = *(char *)(lVar15 + 0x4a) == '\x03';
          if (iVar10 == 0) {
            if (bVar9) {
              if (plVar12 == (long *)0x0) {
code_r0x01e7173c:
                plVar12 = (long *)(*pcVar5)(plVar18,1,uVar23,lVar15);
              }
              else {
                if (((*(short *)(lVar15 + 0x48) == -1) || ((*(byte *)(*plVar12 + 0x115) & 1) != 0))
                   || (plVar13[3] == 0)) goto code_r0x01e7162c;
                iVar10 = func_0x00f78a44(lVar15);
                iVar11 = func_0x00f78ec0(lVar15);
                if (iVar10 == 0) {
                  uVar4 = *(ushort *)(lVar15 + 0x48);
                  if (iVar11 == 0) {
                    lVar15 = *plVar12 + (ulong)uVar4 * 0x10;
                    plVar12 = (long *)(**(code **)(lVar15 + 0x138))
                                                (plVar12,plVar18,1,uVar23,
                                                 *(undefined8 *)(lVar15 + 0x140));
                    goto code_r0x01e71750;
                  }
                  lVar15 = func_0x00f78a48(lVar15);
                  lVar22 = *plVar12;
                  uVar26 = (ulong)*(ushort *)(lVar22 + 0x12a);
                  if (uVar26 != 0) {
                    piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar24 + -2) == lVar15) {
                        puVar14 = (undefined8 *)
                                  (lVar22 + (long)(int)(*piVar24 + (uint)uVar4) * 0x10 + 0x138);
                        goto code_r0x01e718f4;
                      }
                      piVar24 = piVar24 + 4;
                      uVar26 = uVar26 - 1;
                    } while (uVar26 != 0);
                  }
                  puVar14 = (undefined8 *)func_0x00fac1f0(plVar12,lVar15,(ulong)uVar4);
code_r0x01e718f4:
                  pcVar5 = (code *)*puVar14;
                  puVar14 = (undefined8 *)puVar14[1];
                }
                else {
                  if (iVar11 == 0) {
                    uVar25 = *(undefined8 *)
                              (*plVar12 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar22 = *plVar12;
                    uVar26 = (ulong)*(ushort *)(lVar22 + 0x12a);
                    if (uVar26 != 0) {
                      piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar24 + -2) == *(long *)(lVar15 + 0x18)) {
                          lVar22 = lVar22 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar15 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e718cc;
                        }
                        piVar24 = piVar24 + 4;
                        uVar26 = uVar26 - 1;
                      } while (uVar26 != 0);
                    }
                    lVar22 = func_0x00fac1f0(plVar12);
code_r0x01e718cc:
                    uVar25 = *(undefined8 *)(lVar22 + 8);
                  }
                  puVar14 = (undefined8 *)func_0x00f78acc(uVar25,lVar15);
                  pcVar5 = (code *)*puVar14;
                }
                plVar12 = (long *)(*pcVar5)(plVar12,plVar18,1,uVar23,puVar14);
              }
            }
            else {
              if ((*(short *)(lVar15 + 0x48) == -1) || (plVar13[3] == 0)) goto code_r0x01e7173c;
              iVar10 = func_0x00f78a44(lVar15);
              iVar11 = func_0x00f78ec0(lVar15);
              if (iVar10 == 0) {
                uVar4 = *(ushort *)(lVar15 + 0x48);
                if (iVar11 == 0) {
                  lVar15 = *plVar18 + (ulong)uVar4 * 0x10;
                  plVar12 = (long *)(**(code **)(lVar15 + 0x138))
                                              (plVar18,1,uVar23,*(undefined8 *)(lVar15 + 0x140));
                  goto code_r0x01e71750;
                }
                lVar15 = func_0x00f78a48(lVar15);
                lVar22 = *plVar18;
                uVar26 = (ulong)*(ushort *)(lVar22 + 0x12a);
                if (uVar26 != 0) {
                  piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar24 + -2) == lVar15) {
                      puVar14 = (undefined8 *)
                                (lVar22 + (long)(int)(*piVar24 + (uint)uVar4) * 0x10 + 0x138);
                      goto code_r0x01e71880;
                    }
                    piVar24 = piVar24 + 4;
                    uVar26 = uVar26 - 1;
                  } while (uVar26 != 0);
                }
                puVar14 = (undefined8 *)func_0x00fac1f0(plVar18,lVar15,(ulong)uVar4);
code_r0x01e71880:
                pcVar5 = (code *)*puVar14;
                puVar14 = (undefined8 *)puVar14[1];
              }
              else {
                if (iVar11 == 0) {
                  uVar25 = *(undefined8 *)
                            (*plVar18 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar22 = *plVar18;
                  uVar26 = (ulong)*(ushort *)(lVar22 + 0x12a);
                  if (uVar26 != 0) {
                    piVar24 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar24 + -2) == *(long *)(lVar15 + 0x18)) {
                        lVar22 = lVar22 + (long)(int)(*piVar24 + (uint)*(ushort *)(lVar15 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71858;
                      }
                      piVar24 = piVar24 + 4;
                      uVar26 = uVar26 - 1;
                    } while (uVar26 != 0);
                  }
                  lVar22 = func_0x00fac1f0(plVar18);
code_r0x01e71858:
                  uVar25 = *(undefined8 *)(lVar22 + 8);
                }
                puVar14 = (undefined8 *)func_0x00f78acc(uVar25,lVar15);
                pcVar5 = (code *)*puVar14;
              }
              plVar12 = (long *)(*pcVar5)(plVar18,1,uVar23,puVar14);
            }
          }
          else {
            if (bVar9) goto code_r0x01e7173c;
code_r0x01e7162c:
            plVar12 = (long *)(*pcVar5)(plVar12,plVar18,1,uVar23,lVar15);
          }
code_r0x01e71750:
          lVar20 = lVar20 + 1;
          if (lVar20 == lVar21) {
            return plVar12;
          }
        } while( true );
      }
    }
  }
  plVar13 = (long *)func_0x00f78af4();
  *(undefined8 *)(puVar7 + -0x280) = uVar25;
  *(undefined8 *)(puVar7 + -0x278) = uVar28;
  *(long *)(puVar7 + -0x270) = auVar38._8_8_;
  *(long *)(puVar7 + -0x268) = auVar38._0_8_;
  *(undefined1 **)(puVar7 + -0x260) = puVar31;
  *(undefined **)(puVar7 + -600) = &Atlas_Contexts_RoundResultsState___ctor;
  if ((bRam0000000003eb4c10 & 1) == 0) {
    func_0x00f78a20(0x3d40648);
    bRam0000000003eb4c10 = 1;
  }
  if (plVar13 == (long *)0x0) {
    *(undefined8 *)(puVar7 + -0x260) = *(undefined8 *)(puVar7 + -0x260);
    *(undefined8 *)(puVar7 + -600) = *(undefined8 *)(puVar7 + -600);
    auVar36 = func_0x00f78af4(0,uRam0000000003d40648);
    plVar13 = auVar36._0_8_;
    plVar13[2] = *plVar12;
    plVar13[4] = auVar36._8_8_;
    plVar13[5] = (long)plVar12;
    return plVar13;
  }
  return plVar13;
}



// ============================================================
// RVA: 0x14e5af8 | Atlas.Contexts.RoundResultsState.RemoveDelegates
// ============================================================

/* WARNING: Possible PIC construction at 0x014e5d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e6854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e6858) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Contexts_RoundResultsState__RemoveDelegates(long *param_1)

{
  short sVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  code *pcVar5;
  long **pplVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  int extraout_w1;
  long extraout_x1;
  int extraout_w1_00;
  long *plVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long *plVar23;
  undefined8 unaff_x21;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint uVar28;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *puVar29;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar30;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar31;
  undefined *puVar32;
  float extraout_s0;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  long *plStack_a0;
  long lStack_98;
  undefined8 *******pppppppuStack_90;
  undefined *puStack_88;
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  
  plVar23 = (long *)0x3eb4000;
  if ((bRam0000000003eb4c0d & 1) == 0) {
    func_0x00f78a20(0x3d2a238);
    func_0x00f78a20(0x3d1b518);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d5c830);
    func_0x00f78a20(0x3d5c838);
    bRam0000000003eb4c0d = 1;
  }
  if (((param_1[0x10] == 0) || (lVar18 = *(long *)(param_1[0x10] + 0x20), lVar18 == 0)) ||
     (unaff_x22 = *(long *)(lVar18 + 0x10), unaff_x22 == 0)) {
LAB_014e5c68:
    func_0x00f78af4();
  }
  else {
    unaff_x23 = (undefined8 *)0x3d1fa78;
    unaff_x24 = (long *)0x3d5c000;
    plVar23 = *(long **)(unaff_x22 + 0x88);
    unaff_x21 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,param_1,uRam0000000003d5c830,0);
    plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(plVar23,unaff_x21,0);
    if ((plVar11 == (long *)0x0) || (*plVar11 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78)) {
      *(long **)(unaff_x22 + 0x88) = plVar11;
      plVar11 = (long *)Atlas_Contexts_RoundResultsState__IsTournamentOver(param_1);
      if (((ulong)plVar11 & 1) != 0) {
        return plVar11;
      }
      if (((param_1[0x10] == 0) || (lVar18 = *(long *)(param_1[0x10] + 0x20), lVar18 == 0)) ||
         (unaff_x22 = *(long *)(lVar18 + 0x10), unaff_x23 = (undefined8 *)0x3d1fa78, unaff_x22 == 0)
         ) goto LAB_014e5c68;
      plVar23 = *(long **)(unaff_x22 + 0x40);
      unaff_x23 = (undefined8 *)0x3d1b518;
      unaff_x21 = func_0x00f78aec(/*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518);
      /*System.Action<NetworkVoteStart>$$.ctor*/ func_0x01e47bb8(unaff_x21,param_1,uRam0000000003d5c838,uRam0000000003d2a238);
      plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(plVar23,unaff_x21,0);
      if ((plVar11 == (long *)0x0) || (*plVar11 == /*System.Action<NetworkVoteStart>_TypeInfo*/ lRam0000000003d1b518)) {
        *(long **)(unaff_x22 + 0x40) = plVar11;
        return plVar11;
      }
    }
  }
  auVar36 = func_0x00f78e5c();
  plVar11 = auVar36._8_8_;
  lVar18 = auVar36._0_8_;
  puStack_48 = &Atlas_Contexts_RoundResultsState__OnUpdate;
  uVar24 = 0x3eb4000;
  pppppppuStack_50 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4c06 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4c06 = 1;
  }
  plVar16 = (long *)0x0;
  plVar12 = (long *)/*Core.StateManagement.State$$OnUpdate*/ func_0x02b951d8(lVar18,plVar11);
  fVar35 = *(float *)(lVar18 + 0xbc);
  if (0.0 < fVar35) {
    if (plVar11 == (long *)0x0) goto code_r0x014e5da4;
    lVar19 = *plVar11;
    uVar21 = (ulong)*(ushort *)(lVar19 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar13 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
          goto code_r0x014e5d20;
        }
        piVar22 = piVar22 + 4;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    plVar16 = (long *)0x0;
    puVar13 = (undefined8 *)func_0x00fac1f0(plVar11);
code_r0x014e5d20:
    plVar12 = (long *)(*(code *)*puVar13)(plVar11,puVar13[1]);
    fVar35 = fVar35 - extraout_s0;
    *(float *)(lVar18 + 0xbc) = fVar35;
    if (0.0 < fVar35) goto code_r0x014e5d48;
    auVar36._8_8_ = *(undefined8 *)(lVar18 + 0x80);
    auVar36._0_8_ = lVar18;
    puVar32 = &UNK_014e5d48;
code_r0x014e5da8:
    param_1 = auVar36._0_8_;
    pplVar6 = &plStack_a0;
    pppppppuVar31 = &pppppppuStack_90;
    if ((char)param_1[0x17] != '\0') {
      return param_1;
    }
    plVar23 = param_1;
    if (auVar36._8_8_ == 0) {
code_r0x014e5ddc:
      *(undefined1 *)(param_1 + 0x17) = 1;
      return plVar23;
    }
    plVar23 = *(long **)(auVar36._8_8_ + 0x20);
    plStack_a0 = plVar11;
    lStack_98 = lVar18;
    pppppppuStack_90 = &pppppppuStack_50;
    puStack_88 = puVar32;
    if (plVar23 != (long *)0x0) {
      plVar23 = (long *)(**(code **)(*plVar23 + 0x228))(plVar23,*(undefined8 *)(*plVar23 + 0x230));
      goto code_r0x014e5ddc;
    }
    puVar32 = &Atlas_Contexts_RoundResultsState__BackOut;
    lVar18 = func_0x00f78af4();
  }
  else {
code_r0x014e5d48:
    if (*(long *)(lVar18 + 0x80) == 0) {
code_r0x014e5da4:
      puVar32 = &Atlas_Contexts_RoundResultsState__RequestResultsFinish;
      auVar36 = func_0x00f78af4();
      goto code_r0x014e5da8;
    }
    lVar19 = *(long *)(*(long *)(lVar18 + 0x80) + 0x20);
    if ((lVar19 == 0) || (*(char *)(lVar19 + 0x19c) != '\0')) {
      return plVar12;
    }
    Atlas_Contexts_RoundResultsState__RemoveDelegates(lVar18);
    if (*(long *)(lVar18 + 0x80) == 0) goto code_r0x014e5da4;
    /*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(*(long *)(lVar18 + 0x80),0);
    pplVar6 = (long **)&stack0xffffffffffffffc0;
    plVar11 = plVar23;
    uVar24 = unaff_x21;
    pppppppuVar31 = pppppppuStack_50;
    puVar32 = puStack_48;
  }
  *(long **)((long)pplVar6 + -0x20) = plVar11;
  *(long **)((long)pplVar6 + -0x18) = param_1;
  *(undefined8 ********)((long)pplVar6 + -0x10) = pppppppuVar31;
  *(undefined **)((long)pplVar6 + -8) = puVar32;
  if ((bRam0000000003eb4c0c & 1) == 0) {
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb4c0c = 1;
  }
  if (*(long *)(lVar18 + 0xa0) != 0) {
    /*Atlas.UI.VotingManager$$VotingFinished*/ func_0x0152a194(*(long *)(lVar18 + 0xa0),0);
    uVar27 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
    lVar19 = *(long *)(lVar18 + 0xa8);
    if (lVar19 != 0) {
      cVar2 = *(char *)(lVar19 + 0x50);
      if (cVar2 == '\0') {
        *(undefined1 *)(lVar19 + 0x50) = 1;
        *(undefined8 *)(lVar19 + 0x40) = uVar27;
        *(undefined8 *)(lVar19 + 0x48) = 0;
      }
      return (long *)(ulong)(cVar2 == '\0');
    }
  }
  func_0x00f78af4();
  *(undefined8 *)((long)pplVar6 + -0x70) = unaff_x26;
  *(undefined8 *)((long)pplVar6 + -0x68) = unaff_x25;
  *(long **)((long)pplVar6 + -0x60) = unaff_x24;
  *(undefined8 **)((long)pplVar6 + -0x58) = unaff_x23;
  *(long *)((long)pplVar6 + -0x50) = unaff_x22;
  *(undefined8 *)((long)pplVar6 + -0x48) = uVar24;
  *(undefined8 *)((long)pplVar6 + -0x40) = 0x3eb4000;
  *(long *)((long)pplVar6 + -0x38) = lVar18;
  *(undefined1 **)((long)pplVar6 + -0x30) = (undefined1 *)((long)pplVar6 + -0x10);
  *(undefined **)((long)pplVar6 + -0x28) =
       &Atlas_Contexts_RoundResultsState__UpdateEntryPreviousPositions;
  lVar18 = 0x3eb4000;
  plVar23 = plVar16;
  if ((bRam0000000003eb4c08 & 1) == 0) {
    func_0x00f78a20(0x3d2cf38);
    func_0x00f78a20(0x3d1b978);
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3d168);
    func_0x00f78a20(0x3d3b5c0);
    func_0x00f78a20(0x3d3d178);
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3d188);
    func_0x00f78a20(0x3d3d190);
    func_0x00f78a20(0x3d63bc0);
    func_0x00f78a20(0x3d289f8);
    bRam0000000003eb4c08 = 1;
  }
  uVar24 = 0x3d32b90;
  *(undefined8 *)((long)pplVar6 + -0x88) = 0;
  *(undefined8 *)((long)pplVar6 + -0x90) = 0;
  *(undefined8 *)((long)pplVar6 + -0x78) = 0;
  *(undefined8 *)((long)pplVar6 + -0x80) = 0;
  *(undefined4 *)((long)pplVar6 + -0x98) = 0;
  *(undefined8 *)((long)pplVar6 + -0xa0) = 0;
  lVar19 = *(long *)(extraout_x1 + 0x18);
  if ((lVar19 != 0) && (0 < *(int *)(lVar19 + 0x18))) {
    /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044((undefined1 *)((long)pplVar6 + -0xc0),lVar19,uRam0000000003d3b5c0);
    *(undefined8 *)((long)pplVar6 + -0x88) = *(undefined8 *)((long)pplVar6 + -0xb8);
    *(undefined8 *)((long)pplVar6 + -0x90) = *(undefined8 *)((long)pplVar6 + -0xc0);
    *(undefined8 *)((long)pplVar6 + -0x78) = *(undefined8 *)((long)pplVar6 + -0xa8);
    *(undefined8 *)((long)pplVar6 + -0x80) = *(undefined8 *)((long)pplVar6 + -0xb0);
    uVar17 = 1;
    while( true ) {
      uVar21 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84((undefined1 *)((long)pplVar6 + -0x90),uRam0000000003d32b98);
      if ((uVar21 & 1) == 0) {
        plVar23 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80((undefined1 *)((long)pplVar6 + -0x90),uRam0000000003d32b90
                                         );
        return plVar23;
      }
      if (plVar16 == (long *)0x0) break;
      /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(plVar16,(ulong)uVar17 | *(ulong *)((long)pplVar6 + -0x80) << 0x20,
                      *(ulong *)((long)pplVar6 + -0x80) >> 0x20,uRam0000000003d3d168);
      uVar17 = uVar17 + 1;
    }
    func_0x00f78af4();
code_r0x014e6194:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x14e6198);
    (*pcVar5)();
  }
  lVar19 = extraout_x1;
  if (*(long *)(extraout_x1 + 8) == 0) goto code_r0x014e6198;
  unaff_x24 = (long *)0x3d289f8;
  unaff_x23 = (undefined8 *)0x3d3d178;
  /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044((undefined1 *)((long)pplVar6 + -0xc0),*(long *)(extraout_x1 + 8),
                  uRam0000000003d3b5c0);
  *(undefined8 *)((long)pplVar6 + -0x88) = *(undefined8 *)((long)pplVar6 + -0xb8);
  *(undefined8 *)((long)pplVar6 + -0x90) = *(undefined8 *)((long)pplVar6 + -0xc0);
  *(undefined8 *)((long)pplVar6 + -0x78) = *(undefined8 *)((long)pplVar6 + -0xa8);
  *(undefined8 *)((long)pplVar6 + -0x80) = *(undefined8 *)((long)pplVar6 + -0xb0);
  while (uVar21 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84((undefined1 *)((long)pplVar6 + -0x90),uRam0000000003d32b98),
        (uVar21 & 1) != 0) {
    lVar18 = *(long *)((long)pplVar6 + -0x80);
    plVar23 = (long *)((long)pplVar6 + -0xa0);
    uVar21 = /*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(extraout_x1,lVar18,plVar23,0);
    if ((uVar21 & 1) != 0) {
      if (plVar16 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014e6194;
      }
      plVar23 = (long *)(ulong)(uint)((int)((ulong)lVar18 >> 0x20) - *(int *)((long)pplVar6 + -0x9c)
                                     );
      /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(plVar16,lVar18 << 0x20,plVar23,uRam0000000003d3d168);
    }
  }
  /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80((undefined1 *)((long)pplVar6 + -0x90),uRam0000000003d32b90);
  do {
    lVar14 = *unaff_x24;
    if (((*(ushort *)(lVar14 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar14 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar14 = *unaff_x24;
    }
    plVar11 = *(long **)(lVar14 + 0xb8);
    lVar19 = plVar11[1];
    if (lVar19 == 0) {
      if (((*(ushort *)(lVar14 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar14 + 0xe0) == 0)) {
        func_0x00f78ad0();
        plVar11 = *(long **)(*unaff_x24 + 0xb8);
      }
      lVar18 = *plVar11;
      lVar19 = func_0x00f78aec(/*System.Comparison<EndOfRoundScreen.LeaderboardEntry>_TypeInfo*/ uRam0000000003d1b978);
      plVar23 = plRam0000000003d63bc0;
      /*System.Comparison<EndOfRoundScreen.LeaderboardEntry>$$.ctor*/ func_0x01dc71e8(lVar19,lVar18,plRam0000000003d63bc0,uRam0000000003d2cf38);
      *(long *)(*(long *)(*unaff_x24 + 0xb8) + 8) = lVar19;
    }
    if (plVar16 != (long *)0x0) {
      plVar23 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Sort*/ func_0x025212a4(plVar16,lVar19,*unaff_x23);
      uVar21 = (ulong)*(uint *)(plVar16 + 3);
      if ((int)*(uint *)(plVar16 + 3) < 1) {
        return plVar23;
      }
      lVar18 = 0;
      uVar25 = 0;
      do {
        if ((uVar21 & 0xffffffff) <= uVar25) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar25 = uVar25 + 1;
        plVar23 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar16,(int)uVar25 + -1,
                                          uVar25 | (ulong)*(uint *)(plVar16[2] + lVar18 + 0x24) <<
                                                   0x20,*(undefined8 *)(plVar16[2] + lVar18 + 0x28),
                                          uRam0000000003d3d190);
        uVar21 = (ulong)(int)plVar16[3];
        lVar18 = lVar18 + 0x10;
      } while ((long)uVar25 < (long)uVar21);
      return plVar23;
    }
code_r0x014e6198:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014e620c;
    plVar11 = (long *)___cxa_begin_catch();
    lVar19 = *plVar11;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80((undefined1 *)((long)pplVar6 + -0x90),uRam0000000003d32b90);
  } while (lVar19 == 0);
  func_0x00f78ac0(lVar19,0);
code_r0x014e620c:
  auVar36 = __Unwind_Resume();
  plVar12 = auVar36._0_8_;
  *(long **)((long)pplVar6 + -0x100) = unaff_x24;
  *(undefined8 **)((long)pplVar6 + -0xf8) = unaff_x23;
  *(undefined8 *)((long)pplVar6 + -0xf0) = 0x3d32b90;
  *(long *)((long)pplVar6 + -0xe8) = lVar18;
  *(long *)((long)pplVar6 + -0xe0) = lVar19;
  *(long **)((long)pplVar6 + -0xd8) = plVar16;
  *(undefined1 **)((long)pplVar6 + -0xd0) = (undefined1 *)((long)pplVar6 + -0x30);
  *(undefined **)((long)pplVar6 + -200) = &Atlas_Contexts_RoundResultsState__UpdateEntryStarDeltas;
  plVar11 = plVar23;
  if ((bRam0000000003eb4c09 & 1) == 0) {
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    plVar12 = (long *)func_0x00f78a20(0x3d3d190);
    bRam0000000003eb4c09 = 1;
  }
  *(undefined4 *)((long)pplVar6 + -0x108) = 0;
  *(undefined8 *)((long)pplVar6 + -0x110) = 0;
  if (plVar23 != (long *)0x0) {
    uVar21 = (ulong)*(uint *)(plVar23 + 3);
    if (0 < (int)*(uint *)(plVar23 + 3)) {
      lVar18 = 0;
      uVar25 = 0;
      do {
        if ((uVar21 & 0xffffffff) <= uVar25) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar12 = (long *)/*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(auVar36._8_8_,*(undefined4 *)(plVar23[2] + lVar18 + 0x24),
                                          (undefined1 *)((long)pplVar6 + -0x110),0);
        if ((int)plVar12 != 0) {
          if (*(uint *)(plVar23 + 3) <= uVar25) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar12 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar23,uVar25,
                                            *(undefined8 *)(plVar23[2] + lVar18 + 0x20),
                                            CONCAT44(*(undefined4 *)((long)pplVar6 + -0x10c),
                                                     *(undefined4 *)(plVar23[2] + lVar18 + 0x28)),
                                            uRam0000000003d3d190);
        }
        uVar25 = uVar25 + 1;
        uVar21 = (ulong)(int)plVar23[3];
        lVar18 = lVar18 + 0x10;
      } while ((long)uVar25 < (long)uVar21);
    }
    return plVar12;
  }
  auVar37 = func_0x00f78af4();
  plVar12 = auVar37._0_8_;
  *(long **)((long)pplVar6 + -0x150) = unaff_x24;
  *(undefined8 **)((long)pplVar6 + -0x148) = unaff_x23;
  *(undefined8 *)((long)pplVar6 + -0x140) = 0x3d32b90;
  *(undefined8 *)((long)pplVar6 + -0x138) = 0x3eb4000;
  *(long *)((long)pplVar6 + -0x130) = auVar36._8_8_;
  *(undefined8 *)((long)pplVar6 + -0x128) = 0;
  *(undefined1 **)((long)pplVar6 + -0x120) = (undefined1 *)((long)pplVar6 + -0xd0);
  *(undefined **)((long)pplVar6 + -0x118) =
       &Atlas_Contexts_RoundResultsState__UpdateEntryCurrentStars;
  plVar23 = plVar11;
  if ((bRam0000000003eb4c0a & 1) == 0) {
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    plVar12 = (long *)func_0x00f78a20(0x3d3d190);
    bRam0000000003eb4c0a = 1;
  }
  *(undefined4 *)((long)pplVar6 + -0x158) = 0;
  *(undefined8 *)((long)pplVar6 + -0x160) = 0;
  if (plVar11 != (long *)0x0) {
    uVar21 = (ulong)*(uint *)(plVar11 + 3);
    if (0 < (int)*(uint *)(plVar11 + 3)) {
      uVar25 = 0;
      lVar18 = 0x20;
      do {
        if ((uVar21 & 0xffffffff) <= uVar25) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar12 = (long *)/*Core.Networking.NetworkTournament$$GetTotalNetworkScore*/ func_0x01660f34(auVar37._8_8_,*(undefined4 *)(plVar11[2] + lVar18 + 4),
                                          (undefined1 *)((long)pplVar6 + -0x160),0);
        if ((int)plVar12 != 0) {
          if (*(uint *)(plVar11 + 3) <= uVar25) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar12 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar11,uVar25,*(undefined8 *)(plVar11[2] + lVar18),
                                            *(undefined4 *)((long)pplVar6 + -0x15c),
                                            uRam0000000003d3d190);
        }
        uVar25 = uVar25 + 1;
        uVar21 = (ulong)(int)plVar11[3];
        lVar18 = lVar18 + 0x10;
      } while ((long)uVar25 < (long)uVar21);
    }
    return plVar12;
  }
  auVar36 = func_0x00f78af4();
  lVar18 = auVar36._8_8_;
  puVar13 = auVar36._0_8_;
  puVar7 = (undefined1 *)((long)pplVar6 + -0x1c0);
  *(long **)((long)pplVar6 + -0x1a0) = unaff_x24;
  *(undefined8 **)((long)pplVar6 + -0x198) = unaff_x23;
  *(undefined8 *)((long)pplVar6 + -400) = 0x3d32b90;
  *(undefined8 *)((long)pplVar6 + -0x188) = 0x3eb4000;
  *(long *)((long)pplVar6 + -0x180) = auVar37._8_8_;
  *(undefined8 *)((long)pplVar6 + -0x178) = 0;
  *(undefined1 **)((long)pplVar6 + -0x170) = (undefined1 *)((long)pplVar6 + -0x120);
  *(undefined **)((long)pplVar6 + -0x168) =
       &Atlas_Contexts_RoundResultsState__SortEntriesByStarCountFromTournamentData;
  if ((bRam0000000003eb4c0b & 1) == 0) {
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3d168);
    func_0x00f78a20(0x3d3d170);
    func_0x00f78a20(0x3d3b5c0);
    bRam0000000003eb4c0b = 1;
  }
  *(undefined8 *)((long)pplVar6 + -0x1b8) = 0;
  *(undefined8 *)((long)pplVar6 + -0x1c0) = 0;
  *(undefined8 *)((long)pplVar6 + -0x1a8) = 0;
  *(undefined8 *)((long)pplVar6 + -0x1b0) = 0;
  if (lVar18 != 0) {
    /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Clear*/ func_0x0251f970(lVar18,uRam0000000003d3d170);
    if (puVar13[1] != 0) {
      /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044((undefined1 *)((long)pplVar6 + -0x1c0),puVar13[1],uRam0000000003d3b5c0);
      uVar17 = 1;
      while (uVar21 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84((undefined1 *)((long)pplVar6 + -0x1c0),uRam0000000003d32b98),
            (uVar21 & 1) != 0) {
        /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(lVar18,(ulong)uVar17 | *(ulong *)((long)pplVar6 + -0x1b0) << 0x20,
                        *(ulong *)((long)pplVar6 + -0x1b0) >> 0x20,uRam0000000003d3d168);
        uVar17 = uVar17 + 1;
      }
      plVar23 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80((undefined1 *)((long)pplVar6 + -0x1c0),uRam0000000003d32b90)
      ;
      return plVar23;
    }
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar11 = (long *)___cxa_begin_catch();
    lVar18 = *plVar11;
    ___cxa_end_catch();
    plVar11 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80((undefined1 *)((long)pplVar6 + -0x1c0),*puVar13);
    if (lVar18 == 0) {
      return plVar11;
    }
    func_0x00f78ac0(lVar18,0);
  }
  lVar19 = __Unwind_Resume();
  *(undefined8 *)((long)pplVar6 + -0x1f0) = 0x3d32b90;
  *(undefined8 *)((long)pplVar6 + -0x1e8) = 0x3eb4000;
  *(undefined8 **)((long)pplVar6 + -0x1e0) = puVar13;
  *(long *)((long)pplVar6 + -0x1d8) = lVar18;
  *(undefined1 **)((long)pplVar6 + -0x1d0) = (undefined1 *)((long)pplVar6 + -0x170);
  *(undefined **)((long)pplVar6 + -0x1c8) = &Atlas_Contexts_RoundResultsState__OnResultsFinished;
  if ((bRam0000000003eb4c0e & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d27638);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d40658);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4c0e = 1;
  }
  uVar26 = 0x3d40650;
  iVar9 = Atlas_Contexts_RoundResultsState__IsTournamentOver(lVar19);
  uVar27 = uVar26;
  if (iVar9 == 0) {
    uVar21 = *(ulong *)(lVar19 + 0xa0);
    lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar19,uRam0000000003d40650);
    if ((lVar18 != 0) && (uVar21 != 0)) {
      plVar23 = *(long **)(lVar18 + 0x10);
      lVar18 = *(long *)((long)pplVar6 + -0x1f0);
      *(long **)((long)pplVar6 + -0x200) = unaff_x24;
      *(undefined8 **)((long)pplVar6 + -0x1f8) = unaff_x23;
      *(long *)((long)pplVar6 + -0x1f0) = lVar18;
      *(undefined8 *)((long)pplVar6 + -0x1e8) = *(undefined8 *)((long)pplVar6 + -0x1e8);
      *(undefined8 *)((long)pplVar6 + -0x1e0) = *(undefined8 *)((long)pplVar6 + -0x1e0);
      *(undefined8 *)((long)pplVar6 + -0x1d8) = *(undefined8 *)((long)pplVar6 + -0x1d8);
      *(undefined8 *)((long)pplVar6 + -0x1d0) = *(undefined8 *)((long)pplVar6 + -0x1d0);
      *(undefined8 *)((long)pplVar6 + -0x1c8) = *(undefined8 *)((long)pplVar6 + -0x1c8);
      lVar19 = 0x3eb4000;
      if ((bRam0000000003eb4e73 & 1) == 0) {
        func_0x00f78a20(0x3d3b110,plVar23,0);
        func_0x00f78a20(0x3d1f498);
        func_0x00f78a20(0x3d66320);
        func_0x00f78a20(0x3d663f8);
        func_0x00f78a20(0x3d66300);
        func_0x00f78a20(0x3d66318);
        func_0x00f78a20(0x3d663f0);
        func_0x00f78a20(0x3d6b9f8);
        bRam0000000003eb4e73 = 1;
      }
      *(undefined8 *)((long)pplVar6 + -0x210) = 0;
      *(undefined8 *)((long)pplVar6 + -0x208) = 0;
      *(undefined4 *)((long)pplVar6 + -0x218) = 0;
      *(undefined4 *)((long)pplVar6 + -0x214) = 0;
      puVar13 = unaff_x23;
      if (*(long *)(uVar21 + 0x20) == 0) {
code_r0x0152a8c4:
        plVar11 = plVar23;
        func_0x00f78af4();
code_r0x0152a8c8:
        uVar24 = func_0x00f78b24();
        unaff_x23 = puVar13;
code_r0x0152a8d4:
        puVar32 = &Atlas_UI_VotingManager__FilterMapsFromTournament;
        auVar37 = func_0x00f78ac0(uVar24,0);
      }
      else {
        plVar11 = (long *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(uVar21 + 0x20),0);
        if ((int)plVar11 == 0) {
          return plVar11;
        }
        if ((*(long *)(uVar21 + 0xb0) == 0) ||
           (/*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(*(long *)(uVar21 + 0xb0),*(undefined8 *)(uVar21 + 0xe0),0),
           plVar23 == (long *)0x0)) goto code_r0x0152a8c4;
        auVar37._8_8_ = *(undefined8 *)(uVar21 + 0xe0);
        auVar37._0_8_ = uVar21;
        if ((int)plVar23[2] != 2) {
          /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(uVar21,*(undefined8 *)(uVar21 + 0xe0),
                          (undefined1 *)((long)pplVar6 + -0x208),
                          (undefined1 *)((long)pplVar6 + -0x210));
          if (*(long *)(uVar21 + 0xe0) == 0) goto code_r0x0152a8c4;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(uVar21 + 0xe0),uRam0000000003d3b110);
          lVar18 = *(long *)((long)pplVar6 + -0x208);
          if ((lVar18 == 0) || (*(long *)(uVar21 + 0x28) == 0)) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar21 + 0x28),*(undefined8 *)(lVar18 + 0x18),
                          (undefined1 *)((long)pplVar6 + -0x216),0);
          lVar19 = *(long *)((long)pplVar6 + -0x210);
          if ((lVar19 == 0) || (*(long *)(uVar21 + 0x28) == 0)) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar21 + 0x28),*(undefined8 *)(lVar19 + 0x18),
                          (undefined1 *)((long)pplVar6 + -0x218),0);
          if (*(long *)(uVar21 + 0xb0) == 0) goto code_r0x0152a8c4;
          uVar24 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(uVar21 + 0xb0),lVar18,0);
          if (*(long *)(uVar21 + 0x28) == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar21 + 0x28),uVar24,(undefined1 *)((long)pplVar6 + -0x212),0);
          if (*(long *)(uVar21 + 0xb0) == 0) goto code_r0x0152a8c4;
          uVar24 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(uVar21 + 0xb0),lVar19,0);
          if (*(long *)(uVar21 + 0x28) == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar21 + 0x28),uVar24,(undefined1 *)((long)pplVar6 + -0x214),0);
          plVar11 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0xc);
          if (plVar11 == (long *)0x0) goto code_r0x0152a8c4;
          unaff_x23 = (undefined8 *)0x3d6b9f8;
          puVar29 = (undefined8 *)0x3d6b9f8;
          if ((/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8 != 0) &&
             (lVar14 = func_0x00f78adc(/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8,*(undefined8 *)(*plVar11 + 0x40)),
             lVar14 == 0)) goto code_r0x0152a8d0;
          uVar25 = plVar11[3];
          puVar13 = unaff_x23;
          if ((int)uVar25 == 0) goto code_r0x0152a8c8;
          plVar11[4] = /*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8;
          lVar18 = *(long *)(lVar18 + 0x18);
          if (lVar18 != 0) {
            lVar14 = func_0x00f78adc(lVar18,*(undefined8 *)(*plVar11 + 0x40));
            if (lVar14 == 0) goto code_r0x0152a8d0;
            uVar25 = plVar11[3];
          }
          if ((uVar25 & 0xfffffffe) == 0) goto code_r0x0152a8c8;
          plVar11[5] = lVar18;
          lVar18 = 0x3d66300;
          lVar14 = 0x3d66300;
          if (/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300 != 0) {
            lVar20 = func_0x00f78adc(/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300,*(undefined8 *)(*plVar11 + 0x40));
            if (lVar20 == 0) goto code_r0x0152a8d0;
            uVar25 = plVar11[3];
          }
          puVar13 = puVar29;
          if ((uint)uVar25 < 3) goto code_r0x0152a8c8;
          plVar11[6] = /*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300;
          lVar19 = *(long *)(lVar19 + 0x18);
          if (lVar19 != 0) {
            lVar20 = func_0x00f78adc(lVar19,*(undefined8 *)(*plVar11 + 0x40));
            if (lVar20 == 0) goto code_r0x0152a8d0;
            uVar25 = plVar11[3];
          }
          uVar17 = (uint)uVar25;
          if ((uVar25 & 0xfffffffc) == 0) goto code_r0x0152a8c8;
          plVar11[7] = lVar19;
          lVar19 = 0x3d663f0;
          lVar18 = lVar14;
          if (/*STR(' typeKey1: ')*/ lRam0000000003d663f0 != 0) {
            lVar14 = func_0x00f78adc(/*STR(' typeKey1: ')*/ lRam0000000003d663f0,*(undefined8 *)(*plVar11 + 0x40));
            if (lVar14 == 0) goto code_r0x0152a8d0;
            uVar17 = (uint)plVar11[3];
          }
          if (uVar17 < 5) goto code_r0x0152a8c8;
          plVar11[8] = /*STR(' typeKey1: ')*/ lRam0000000003d663f0;
          lVar19 = /*System.Int16$$ToString*/ func_0x02ae8e6c((undefined1 *)((long)pplVar6 + -0x212),0);
          if ((lVar19 == 0) ||
             (lVar14 = func_0x00f78adc(lVar19,*(undefined8 *)(*plVar11 + 0x40)), lVar14 != 0)) {
            uVar17 = *(uint *)(plVar11 + 3);
            if (5 < uVar17) {
              plVar11[9] = lVar19;
              lVar19 = 0x3d663f8;
              if (/*STR(' typeKey2: ')*/ lRam0000000003d663f8 != 0) {
                lVar14 = func_0x00f78adc(/*STR(' typeKey2: ')*/ lRam0000000003d663f8,*(undefined8 *)(*plVar11 + 0x40));
                if (lVar14 == 0) goto code_r0x0152a8d0;
                uVar17 = *(uint *)(plVar11 + 3);
              }
              if (6 < uVar17) {
                plVar11[10] = /*STR(' typeKey2: ')*/ lRam0000000003d663f8;
                lVar19 = /*System.Int16$$ToString*/ func_0x02ae8e6c((undefined1 *)((long)pplVar6 + -0x214),0);
                if ((lVar19 != 0) &&
                   (lVar14 = func_0x00f78adc(lVar19,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
                goto code_r0x0152a8d0;
                uVar17 = (uint)plVar11[3];
                if ((plVar11[3] & 0xfffffff8U) != 0) {
                  plVar11[0xb] = lVar19;
                  lVar19 = 0x3d66318;
                  if (/*STR(' mapKey1: ')*/ lRam0000000003d66318 != 0) {
                    lVar14 = func_0x00f78adc(/*STR(' mapKey1: ')*/ lRam0000000003d66318,*(undefined8 *)(*plVar11 + 0x40));
                    if (lVar14 == 0) goto code_r0x0152a8d0;
                    uVar17 = (uint)plVar11[3];
                  }
                  if (8 < uVar17) {
                    plVar11[0xc] = /*STR(' mapKey1: ')*/ lRam0000000003d66318;
                    lVar19 = /*System.Int16$$ToString*/ func_0x02ae8e6c((undefined1 *)((long)pplVar6 + -0x216),0);
                    if ((lVar19 != 0) &&
                       (lVar14 = func_0x00f78adc(lVar19,*(undefined8 *)(*plVar11 + 0x40)),
                       lVar14 == 0)) goto code_r0x0152a8d0;
                    uVar17 = *(uint *)(plVar11 + 3);
                    if (9 < uVar17) {
                      plVar11[0xd] = lVar19;
                      lVar19 = 0x3d66320;
                      if (/*STR(' mapKey2: ')*/ lRam0000000003d66320 != 0) {
                        lVar14 = func_0x00f78adc(/*STR(' mapKey2: ')*/ lRam0000000003d66320,
                                                 *(undefined8 *)(*plVar11 + 0x40));
                        if (lVar14 == 0) goto code_r0x0152a8d0;
                        uVar17 = *(uint *)(plVar11 + 3);
                      }
                      if (10 < uVar17) {
                        plVar11[0xe] = /*STR(' mapKey2: ')*/ lRam0000000003d66320;
                        lVar19 = /*System.Int16$$ToString*/ func_0x02ae8e6c((undefined1 *)((long)pplVar6 + -0x218),0);
                        if ((lVar19 != 0) &&
                           (lVar14 = func_0x00f78adc(lVar19,*(undefined8 *)(*plVar11 + 0x40)),
                           lVar14 == 0)) goto code_r0x0152a8d0;
                        if (0xb < *(uint *)(plVar11 + 3)) {
                          plVar11[0xf] = lVar19;
                          /*System.String$$Concat*/ func_0x029cfadc(plVar11,0);
                          plVar23 = plVar11;
                          puVar13 = unaff_x23;
                          if ((*(long *)(uVar21 + 0x20) != 0) &&
                             (plVar11 = *(long **)(*(long *)(uVar21 + 0x20) + 0x20),
                             plVar11 != (long *)0x0)) {
                            plVar23 = (long *)(**(code **)(*plVar11 + 0x1c8))
                                                        (plVar11,(long)*(short *)((long)pplVar6 +
                                                                                 -0x216),
                                                         (long)*(short *)((long)pplVar6 + -0x212),
                                                         (long)*(short *)((long)pplVar6 + -0x218),
                                                         (long)*(short *)((long)pplVar6 + -0x214),
                                                         &UNK_00001770,
                                                         *(undefined8 *)(*plVar11 + 0x1d0));
                            return plVar23;
                          }
                          goto code_r0x0152a8c4;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto code_r0x0152a8c8;
          }
code_r0x0152a8d0:
          uVar24 = func_0x00f78b14();
          goto code_r0x0152a8d4;
        }
        puVar32 = &UNK_0152a520;
        plVar11 = plVar23;
      }
      uVar25 = auVar37._0_8_;
      *(undefined8 *)((long)pplVar6 + -0x280) = unaff_x28;
      *(undefined8 *)((long)pplVar6 + -0x278) = unaff_x27;
      *(undefined8 *)((long)pplVar6 + -0x270) = 0x3d3d168;
      *(undefined8 *)((long)pplVar6 + -0x268) = 0x3d32b98;
      *(long **)((long)pplVar6 + -0x260) = unaff_x24;
      *(undefined8 **)((long)pplVar6 + -600) = unaff_x23;
      *(long *)((long)pplVar6 + -0x250) = lVar18;
      *(long *)((long)pplVar6 + -0x248) = lVar19;
      *(long **)((long)pplVar6 + -0x240) = plVar11;
      *(ulong *)((long)pplVar6 + -0x238) = uVar21;
      *(undefined1 **)((long)pplVar6 + -0x230) = (undefined1 *)((long)pplVar6 + -0x1d0);
      *(undefined **)((long)pplVar6 + -0x228) = puVar32;
      *(long *)((long)pplVar6 + -0x350) = auVar37._8_8_;
      uVar21 = 0x3eb4000;
      if ((bRam0000000003eb4e75 & 1) == 0) {
        func_0x00f78a20(0x3d2e6f0);
        func_0x00f78a20(0x3d2e6f8);
        func_0x00f78a20(0x3d2e700);
        func_0x00f78a20(0x3d2e710);
        func_0x00f78a20(0x3d2e748);
        func_0x00f78a20(0x3d2e750);
        func_0x00f78a20(0x3d32bf0);
        func_0x00f78a20(0x3d32980);
        func_0x00f78a20(0x3d33d98);
        func_0x00f78a20(0x3d33da0);
        func_0x00f78a20(0x3d32988);
        func_0x00f78a20(0x3d32bf8);
        func_0x00f78a20(0x3d32c00);
        func_0x00f78a20(0x3d32990);
        func_0x00f78a20(0x3d33dd0);
        func_0x00f78a20(0x3d39240);
        func_0x00f78a20(0x3d39248);
        func_0x00f78a20(0x3d3b120);
        func_0x00f78a20(0x3d3b6b8);
        func_0x00f78a20(0x3d3b130);
        func_0x00f78a20(0x3d3b0f8);
        func_0x00f78a20(0x3d3b140);
        func_0x00f78a20(0x3d3b6c0);
        func_0x00f78a20(0x3d3b148);
        func_0x00f78a20(0x3d1db90);
        func_0x00f78a20(0x3d65ed8);
        func_0x00f78a20(0x3d66270);
        func_0x00f78a20(0x3d6cdb0);
        func_0x00f78a20(0x3d6cdc0);
        func_0x00f78a20(0x3d6cdb8);
        func_0x00f78a20(0x3d6cdc8);
        bRam0000000003eb4e75 = 1;
      }
      *(undefined8 *)((long)pplVar6 + -0x2a0) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2b8) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2c0) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2a8) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2b0) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2c8) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2e8) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2f0) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2d8) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2e0) = 0;
      *(undefined8 *)((long)pplVar6 + -0x300) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2f8) = 0;
      *(undefined8 *)((long)pplVar6 + -0x310) = 0;
      *(undefined8 *)((long)pplVar6 + -0x308) = 0;
      *(undefined4 *)((long)pplVar6 + -0x314) = 0;
      if (*(long *)(uVar25 + 0xb8) != 0) {
        uVar21 = 0x3d1d000;
        /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(uVar25 + 0xb8),uRam0000000003d2e6f8);
        plVar11 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
        /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(plVar11,*(undefined8 *)((long)pplVar6 + -0x350),uRam0000000003d3b0f8);
        if (((*(long *)(uVar25 + 0x20) != 0) &&
            (lVar18 = *(long *)(*(long *)(uVar25 + 0x20) + 0x20), lVar18 != 0)) &&
           (lVar18 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar18,0), lVar18 != 0)) {
          uVar21 = 0x3d6c000;
          *(undefined4 *)((long)pplVar6 + -0x294) = *(undefined4 *)(lVar18 + 0x18);
          uVar24 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)pplVar6 + -0x294),0);
          /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar24,0);
          if (((*(long *)(uVar25 + 0x20) != 0) &&
              (lVar18 = *(long *)(*(long *)(uVar25 + 0x20) + 0x20), lVar18 != 0)) &&
             (lVar18 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar18,0), lVar18 != 0)) {
            uVar21 = 0x3d32bf8;
            /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100((undefined1 *)((long)pplVar6 + -0x348),lVar18,uRam0000000003d3b6b8);
            *(undefined8 *)((long)pplVar6 + -0x2b8) = *(undefined8 *)((long)pplVar6 + -0x340);
            *(undefined8 *)((long)pplVar6 + -0x2c0) = *(undefined8 *)((long)pplVar6 + -0x348);
            *(undefined8 *)((long)pplVar6 + -0x2a8) = *(undefined8 *)((long)pplVar6 + -0x330);
            *(undefined8 *)((long)pplVar6 + -0x2b0) = *(undefined8 *)((long)pplVar6 + -0x338);
            *(undefined8 *)((long)pplVar6 + -0x2a0) = *(undefined8 *)((long)pplVar6 + -0x328);
code_r0x0152aba4:
            uVar15 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810((undefined1 *)((long)pplVar6 + -0x2c0),uRam0000000003d32bf8);
            if ((uVar15 & 1) != 0) {
              sVar3 = *(short *)((long)pplVar6 + -0x2a4);
              sVar1 = *(short *)((long)pplVar6 + -0x2a8);
              if (sVar3 != *(short *)((long)pplVar6 + -0x2ac)) {
                sVar1 = *(short *)((long)pplVar6 + -0x2ac);
              }
              if (*(long *)(uVar25 + 0xb8) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              iVar9 = (int)sVar1;
              uVar15 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(uVar25 + 0xb8),iVar9,uRam0000000003d2e700);
              if ((uVar15 & 1) == 0) {
                if (*(long *)(uVar25 + 0xb8) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0152af9c;
                }
                /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(uVar25 + 0xb8),iVar9,0,uRam0000000003d2e6f0);
              }
              lVar18 = *(long *)(uVar25 + 0xb8);
              if (lVar18 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              iVar10 = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar18,iVar9,uRam0000000003d2e748);
              *(int *)((long)pplVar6 + -0x294) = iVar10;
              /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar18,iVar9,iVar10 + 1,uRam0000000003d2e750);
              if (*(long *)(uVar25 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar25 + 0x28),(int)sVar3,
                              (undefined1 *)((long)pplVar6 + -0x2c8),0);
              if (plVar11 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar17 = *(uint *)(plVar11 + 3);
              if (0 < (int)uVar17) {
                uVar28 = 0;
                do {
                  if (uVar17 <= uVar28) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar18 = *(long *)(plVar11[2] + (long)(int)uVar28 * 8 + 0x20);
                  if (lVar18 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar15 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar18 + 0x18),
                                           *(undefined8 *)((long)pplVar6 + -0x2c8),0);
                  if ((uVar15 & 1) != 0) {
                    /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,*(undefined8 *)((long)pplVar6 + -0x2c8),0);
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar11,uVar28,uRam0000000003d3b130);
                    break;
                  }
                  uVar28 = uVar28 + 1;
                  uVar17 = *(uint *)(plVar11 + 3);
                } while ((int)uVar28 < (int)uVar17);
              }
              goto code_r0x0152aba4;
            }
            *(undefined4 *)((long)pplVar6 + -800) = 0x136;
            /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c((undefined1 *)((long)pplVar6 + -0x2c0),uRam0000000003d32bf0);
            *(undefined4 *)((long)pplVar6 + -0x314) = 0;
            if (*(long *)(uVar25 + 0xb8) != 0) {
              /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8((undefined1 *)((long)pplVar6 + -0x348),*(long *)(uVar25 + 0xb8),
                              uRam0000000003d2e710);
              *(undefined8 *)((long)pplVar6 + -0x2e8) = *(undefined8 *)((long)pplVar6 + -0x340);
              *(undefined8 *)((long)pplVar6 + -0x2f0) = *(undefined8 *)((long)pplVar6 + -0x348);
              *(undefined8 *)((long)pplVar6 + -0x2d8) = *(undefined8 *)((long)pplVar6 + -0x330);
              *(undefined8 *)((long)pplVar6 + -0x2e0) = *(undefined8 *)((long)pplVar6 + -0x338);
code_r0x0152ad1c:
              uVar21 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398((undefined1 *)((long)pplVar6 + -0x2f0),uRam0000000003d33da0);
              if ((uVar21 & 1) != 0) {
                if (*(int *)(uVar25 + 0x10) <= *(int *)((long)pplVar6 + -0x2dc)) {
                  if (*(long *)(uVar25 + 0x28) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar25 + 0x28),
                                  (int)(short)*(undefined4 *)((long)pplVar6 + -0x2e0),
                                  (undefined1 *)((long)pplVar6 + -0x2f8),0);
                  if (plVar11 == (long *)0x0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar17 = *(uint *)(plVar11 + 3);
                  if (0 < (int)uVar17) {
                    uVar28 = 0;
                    do {
                      if (uVar17 <= uVar28) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar18 = *(long *)(plVar11[2] + (long)(int)uVar28 * 8 + 0x20);
                      if (lVar18 == 0) {
                        func_0x00f78af4();
                        goto code_r0x0152af9c;
                      }
                      uVar21 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar18 + 0x18),
                                               *(undefined8 *)((long)pplVar6 + -0x2f8),0);
                      if ((uVar21 & 1) != 0) {
                        /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,*(undefined8 *)((long)pplVar6 + -0x2f8)
                                        ,0);
                        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar11,uVar28,uRam0000000003d3b130);
                        break;
                      }
                      uVar28 = uVar28 + 1;
                      uVar17 = *(uint *)(plVar11 + 3);
                    } while ((int)uVar28 < (int)uVar17);
                  }
                }
                goto code_r0x0152ad1c;
              }
              uVar17 = *(uint *)((long)pplVar6 + -0x314);
              uVar25 = (ulong)uVar17;
              uVar21 = (ulong)(uVar17 + 1);
              *(undefined4 *)((long)pplVar6 + -800) = 0x1d1;
              *(uint *)((long)pplVar6 + -0x314) = uVar17 + 1;
              /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508((undefined1 *)((long)pplVar6 + -0x2f0),uRam0000000003d33d98);
              if (uVar17 != 0xffffffff) goto code_r0x0152ae34;
              uVar21 = 0;
              iVar9 = 0;
              if (plVar11 != (long *)0x0) goto code_r0x0152ae5c;
            }
          }
        }
      }
      do {
        func_0x00f78af4();
code_r0x0152ae34:
        if (*(int *)((long)pplVar6 + (long)(int)uVar25 * 4 + -800) == 0x1d1) {
          *(int *)((long)pplVar6 + -0x314) = (int)uVar25;
          uVar21 = uVar25;
        }
        iVar9 = (int)uVar21;
      } while (plVar11 == (long *)0x0);
code_r0x0152ae5c:
      *(int *)((long)pplVar6 + -0x294) = (int)plVar11[3];
      uVar24 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)pplVar6 + -0x294),0);
      uVar24 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar24,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)pplVar6 + -0x310),plVar11,uRam0000000003d3b120);
      while( true ) {
        uVar21 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)pplVar6 + -0x310),uRam0000000003d32988);
        if ((uVar21 & 1) == 0) {
          *(undefined4 *)((long)pplVar6 + (long)iVar9 * 4 + -800) = 0x23d;
          *(int *)((long)pplVar6 + -0x314) = *(int *)((long)pplVar6 + -0x314) + 1;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)pplVar6 + -0x310),uRam0000000003d32980);
          if ((int)plVar11[3] < 2) {
            plVar11 = *(long **)((long)pplVar6 + -0x350);
          }
          return plVar11;
        }
        if (*(long *)((long)pplVar6 + -0x300) == 0) break;
        uVar24 = /*System.String$$Concat*/ func_0x029be39c(uVar24,*(undefined8 *)(*(long *)((long)pplVar6 + -0x300) + 0x18),
                                 /*STR(' ')*/ uRam0000000003d65ed8,0);
      }
      func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x152afa0);
      (*pcVar5)();
    }
  }
  else {
    uVar21 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
    Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor(uVar21,0);
    lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar19,uRam0000000003d40650);
    uVar27 = 0x3d40650;
    if ((lVar18 != 0) && (uVar21 != 0)) {
      *(undefined8 *)(uVar21 + 0x10) = *(undefined8 *)(lVar18 + 0x10);
      lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar19,uRam0000000003d40658);
      uVar27 = uVar26;
      if (lVar18 != 0) {
        *(undefined8 *)(uVar21 + 0x18) = *(undefined8 *)(lVar18 + 0x18);
        *(undefined1 *)(uVar21 + 0x20) = 1;
        uVar27 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ uRam0000000003d194d8;
        plVar11 = *(long **)(lVar19 + 0x78);
        if (((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar12 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar27,0);
        lVar19 = 0;
        if (plVar11 != (long *)0x0) {
          puVar30 = *(undefined1 **)((long)pplVar6 + -0x1d0);
          puVar32 = *(undefined **)((long)pplVar6 + -0x1c8);
          uVar24 = *(undefined8 *)((long)pplVar6 + -0x1f0);
          uVar27 = *(undefined8 *)((long)pplVar6 + -0x1e8);
          plVar23 = *(long **)((long)pplVar6 + -0x1d8);
          uVar25 = *(ulong *)((long)pplVar6 + -0x1e0);
          goto code_r0x01e7159c;
        }
      }
    }
  }
  auVar38 = func_0x00f78af4();
  puVar13 = auVar38._8_8_;
  lVar18 = auVar38._0_8_;
  puVar7 = (undefined1 *)((long)pplVar6 + -0x250);
  *(long **)((long)pplVar6 + -0x230) = unaff_x24;
  *(undefined8 **)((long)pplVar6 + -0x228) = unaff_x23;
  *(undefined8 *)((long)pplVar6 + -0x220) = 0x3d32b90;
  *(undefined8 *)((long)pplVar6 + -0x218) = uVar27;
  *(ulong *)((long)pplVar6 + -0x210) = uVar21;
  *(long *)((long)pplVar6 + -0x208) = lVar19;
  *(undefined1 **)((long)pplVar6 + -0x200) = (undefined1 *)((long)pplVar6 + -0x1d0);
  *(undefined **)((long)pplVar6 + -0x1f8) = &Atlas_Contexts_RoundResultsState__OnVoteStarted;
  puVar30 = (undefined1 *)((long)pplVar6 + -0x200);
  uVar27 = 0x3eb4000;
  if ((bRam0000000003eb4c0f & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d297a0);
    func_0x00f78a20(0x3d1a1a8);
    bRam0000000003eb4c0f = 1;
  }
  lVar19 = *(long *)(lVar18 + 0xa0);
  if (lVar19 != 0) {
    uVar27 = 0x3d40000;
    uVar26 = *puVar13;
    uVar34 = puVar13[3];
    uVar33 = puVar13[2];
    *(undefined8 *)((long)pplVar6 + -0x248) = puVar13[1];
    *(undefined8 *)((long)pplVar6 + -0x250) = uVar26;
    *(undefined8 *)((long)pplVar6 + -0x238) = uVar34;
    *(undefined8 *)((long)pplVar6 + -0x240) = uVar33;
    plVar23 = (long *)0x0;
    /*Atlas.UI.VotingManager$$SetVoteData*/ func_0x01529c00(lVar19,(undefined1 *)((long)pplVar6 + -0x250));
    lVar19 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar18,uRam0000000003d40650);
    if (lVar19 != 0) {
      uVar24 = 0x3d1a000;
      unaff_x23 = (undefined8 *)0x3d25000;
      uVar27 = *(undefined8 *)(lVar19 + 0x10);
      uVar21 = func_0x00f78aec(/*Atlas.Contexts.VotingState.VotingStateTransitionData_TypeInfo*/ uRam0000000003d297a0);
      plVar23 = (long *)((long)&MACH_HEADER.magic + 1);
      /*Atlas.Contexts.VotingState.VotingStateTransitionData$$.ctor*/ func_0x0156ebc8(uVar21,uVar27,1,0);
      uVar27 = /*Atlas.Contexts.VotingState_var*/ uRam0000000003d1a1a8;
      plVar11 = *(long **)(lVar18 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar12 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar27,0);
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar21;
      auVar38 = auVar38 << 0x40;
      if (plVar11 != (long *)0x0) {
        puVar32 = &UNK_014e6858;
        plVar23 = plVar11;
        uVar25 = uVar21;
code_r0x01e7159c:
        *(undefined8 *)(puVar7 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar7 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar7 + -0x50) = 0x3d3d168;
        *(undefined8 *)(puVar7 + -0x48) = 0x3d32b98;
        *(long **)(puVar7 + -0x40) = unaff_x24;
        *(undefined8 **)(puVar7 + -0x38) = unaff_x23;
        *(undefined8 *)(puVar7 + -0x30) = uVar24;
        *(undefined8 *)(puVar7 + -0x28) = uVar27;
        *(ulong *)(puVar7 + -0x20) = uVar25;
        *(long **)(puVar7 + -0x18) = plVar23;
        *(undefined1 **)(puVar7 + -0x10) = puVar30;
        *(undefined **)(puVar7 + -8) = puVar32;
        *(long **)(puVar7 + -0x68) = plVar11;
        lVar18 = plVar11[0xd];
        if (lVar18 == 0) {
          puVar30 = puVar7 + -0x68;
          lVar19 = 1;
        }
        else {
          lVar19 = *(long *)(lVar18 + 0x18);
          if (lVar19 == 0) {
            return plVar11;
          }
          puVar30 = (undefined1 *)(lVar18 + 0x20);
        }
        lVar18 = 0;
        do {
          lVar14 = *(long *)(puVar30 + lVar18 * 8);
          pcVar5 = *(code **)(lVar14 + 0x10);
          plVar23 = *(long **)(lVar14 + 0x20);
          lVar14 = *(long *)(lVar14 + 0x28);
          if (*(short *)(lVar14 + 0x48) == -1) {
            func_0x00f78ad8(lVar14);
          }
          iVar9 = func_0x00f78a4c(lVar14);
          bVar8 = *(char *)(lVar14 + 0x4a) == '\x03';
          if (iVar9 == 0) {
            if (bVar8) {
              if (plVar23 == (long *)0x0) {
code_r0x01e7173c:
                plVar23 = (long *)(*pcVar5)(plVar12,1,uVar21,lVar14);
              }
              else {
                if (((*(short *)(lVar14 + 0x48) == -1) || ((*(byte *)(*plVar23 + 0x115) & 1) != 0))
                   || (plVar11[3] == 0)) goto code_r0x01e7162c;
                iVar9 = func_0x00f78a44(lVar14);
                iVar10 = func_0x00f78ec0(lVar14);
                if (iVar9 == 0) {
                  uVar4 = *(ushort *)(lVar14 + 0x48);
                  if (iVar10 == 0) {
                    lVar14 = *plVar23 + (ulong)uVar4 * 0x10;
                    plVar23 = (long *)(**(code **)(lVar14 + 0x138))
                                                (plVar23,plVar12,1,uVar21,
                                                 *(undefined8 *)(lVar14 + 0x140));
                    goto code_r0x01e71750;
                  }
                  lVar14 = func_0x00f78a48(lVar14);
                  lVar20 = *plVar23;
                  uVar25 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar25 != 0) {
                    piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == lVar14) {
                        puVar13 = (undefined8 *)
                                  (lVar20 + (long)(int)(*piVar22 + (uint)uVar4) * 0x10 + 0x138);
                        goto code_r0x01e718f4;
                      }
                      piVar22 = piVar22 + 4;
                      uVar25 = uVar25 - 1;
                    } while (uVar25 != 0);
                  }
                  puVar13 = (undefined8 *)func_0x00fac1f0(plVar23,lVar14,(ulong)uVar4);
code_r0x01e718f4:
                  pcVar5 = (code *)*puVar13;
                  puVar13 = (undefined8 *)puVar13[1];
                }
                else {
                  if (iVar10 == 0) {
                    uVar24 = *(undefined8 *)
                              (*plVar23 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar20 = *plVar23;
                    uVar25 = (ulong)*(ushort *)(lVar20 + 0x12a);
                    if (uVar25 != 0) {
                      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar22 + -2) == *(long *)(lVar14 + 0x18)) {
                          lVar20 = lVar20 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar14 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e718cc;
                        }
                        piVar22 = piVar22 + 4;
                        uVar25 = uVar25 - 1;
                      } while (uVar25 != 0);
                    }
                    lVar20 = func_0x00fac1f0(plVar23);
code_r0x01e718cc:
                    uVar24 = *(undefined8 *)(lVar20 + 8);
                  }
                  puVar13 = (undefined8 *)func_0x00f78acc(uVar24,lVar14);
                  pcVar5 = (code *)*puVar13;
                }
                plVar23 = (long *)(*pcVar5)(plVar23,plVar12,1,uVar21,puVar13);
              }
            }
            else {
              if ((*(short *)(lVar14 + 0x48) == -1) || (plVar11[3] == 0)) goto code_r0x01e7173c;
              iVar9 = func_0x00f78a44(lVar14);
              iVar10 = func_0x00f78ec0(lVar14);
              if (iVar9 == 0) {
                uVar4 = *(ushort *)(lVar14 + 0x48);
                if (iVar10 == 0) {
                  lVar14 = *plVar12 + (ulong)uVar4 * 0x10;
                  plVar23 = (long *)(**(code **)(lVar14 + 0x138))
                                              (plVar12,1,uVar21,*(undefined8 *)(lVar14 + 0x140));
                  goto code_r0x01e71750;
                }
                lVar14 = func_0x00f78a48(lVar14);
                lVar20 = *plVar12;
                uVar25 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar25 != 0) {
                  piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == lVar14) {
                      puVar13 = (undefined8 *)
                                (lVar20 + (long)(int)(*piVar22 + (uint)uVar4) * 0x10 + 0x138);
                      goto code_r0x01e71880;
                    }
                    piVar22 = piVar22 + 4;
                    uVar25 = uVar25 - 1;
                  } while (uVar25 != 0);
                }
                puVar13 = (undefined8 *)func_0x00fac1f0(plVar12,lVar14,(ulong)uVar4);
code_r0x01e71880:
                pcVar5 = (code *)*puVar13;
                puVar13 = (undefined8 *)puVar13[1];
              }
              else {
                if (iVar10 == 0) {
                  uVar24 = *(undefined8 *)
                            (*plVar12 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar20 = *plVar12;
                  uVar25 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar25 != 0) {
                    piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == *(long *)(lVar14 + 0x18)) {
                        lVar20 = lVar20 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar14 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71858;
                      }
                      piVar22 = piVar22 + 4;
                      uVar25 = uVar25 - 1;
                    } while (uVar25 != 0);
                  }
                  lVar20 = func_0x00fac1f0(plVar12);
code_r0x01e71858:
                  uVar24 = *(undefined8 *)(lVar20 + 8);
                }
                puVar13 = (undefined8 *)func_0x00f78acc(uVar24,lVar14);
                pcVar5 = (code *)*puVar13;
              }
              plVar23 = (long *)(*pcVar5)(plVar12,1,uVar21,puVar13);
            }
          }
          else {
            if (bVar8) goto code_r0x01e7173c;
code_r0x01e7162c:
            plVar23 = (long *)(*pcVar5)(plVar23,plVar12,1,uVar21,lVar14);
          }
code_r0x01e71750:
          lVar18 = lVar18 + 1;
          if (lVar18 == lVar19) {
            return plVar23;
          }
        } while( true );
      }
    }
  }
  plVar11 = (long *)func_0x00f78af4();
  *(undefined8 *)((long)pplVar6 + -0x280) = uVar24;
  *(undefined8 *)((long)pplVar6 + -0x278) = uVar27;
  *(long *)((long)pplVar6 + -0x270) = auVar38._8_8_;
  *(long *)((long)pplVar6 + -0x268) = auVar38._0_8_;
  *(undefined1 **)((long)pplVar6 + -0x260) = puVar30;
  *(undefined **)((long)pplVar6 + -600) = &Atlas_Contexts_RoundResultsState___ctor;
  if ((bRam0000000003eb4c10 & 1) == 0) {
    func_0x00f78a20(0x3d40648);
    bRam0000000003eb4c10 = 1;
  }
  if (plVar11 == (long *)0x0) {
    *(undefined8 *)((long)pplVar6 + -0x260) = *(undefined8 *)((long)pplVar6 + -0x260);
    *(undefined8 *)((long)pplVar6 + -600) = *(undefined8 *)((long)pplVar6 + -600);
    auVar36 = func_0x00f78af4(0,uRam0000000003d40648);
    plVar11 = auVar36._0_8_;
    plVar11[2] = *plVar23;
    plVar11[4] = auVar36._8_8_;
    plVar11[5] = (long)plVar23;
    return plVar11;
  }
  return plVar11;
}



// ============================================================
// RVA: 0x14e5c70 | Atlas.Contexts.RoundResultsState.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x014e5d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e6854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e6858) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */

long * Atlas_Contexts_RoundResultsState__OnUpdate(long *param_1,long *param_2)

{
  short sVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  code *pcVar5;
  long **pplVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int extraout_w1;
  int extraout_w1_00;
  long extraout_x1;
  long *plVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  uint uVar27;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *puVar28;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar29;
  undefined8 unaff_x28;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined *puVar30;
  float extraout_s0;
  undefined8 uVar31;
  undefined8 uVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  long *plStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar23 = 0x3eb4000;
  if ((bRam0000000003eb4c06 & 1) == 0) {
    func_0x00f78a20(0x3d22618);
    bRam0000000003eb4c06 = 1;
  }
  plVar16 = (long *)0x0;
  plVar11 = (long *)/*Core.StateManagement.State$$OnUpdate*/ func_0x02b951d8(param_1,param_2);
  fVar33 = *(float *)((long)param_1 + 0xbc);
  if (0.0 < fVar33) {
    if (param_2 == (long *)0x0) goto LAB_014e5da4;
    lVar18 = *param_2;
    uVar21 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == /*Core.Application.IUpdateParams_TypeInfo*/ lRam0000000003d22618) {
          puVar12 = (undefined8 *)(lVar18 + (long)*piVar22 * 0x10 + 0x138);
          goto LAB_014e5d20;
        }
        piVar22 = piVar22 + 4;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    plVar16 = (long *)0x0;
    puVar12 = (undefined8 *)func_0x00fac1f0(param_2);
LAB_014e5d20:
    plVar11 = (long *)(*(code *)*puVar12)(param_2,puVar12[1]);
    fVar33 = fVar33 - extraout_s0;
    *(float *)((long)param_1 + 0xbc) = fVar33;
    if (0.0 < fVar33) goto code_r0x014e5d48;
    lVar18 = param_1[0x10];
    puVar30 = &LAB_014e5d48;
    unaff_x19 = param_1;
code_r0x014e5da8:
    pplVar6 = &plStack_60;
    unaff_x29 = &puStack_50;
    if ((char)unaff_x19[0x17] != '\0') {
      return unaff_x19;
    }
    plVar11 = unaff_x19;
    if (lVar18 == 0) {
code_r0x014e5ddc:
      *(undefined1 *)(unaff_x19 + 0x17) = 1;
      return plVar11;
    }
    plVar11 = *(long **)(lVar18 + 0x20);
    plStack_60 = param_2;
    plStack_58 = param_1;
    puStack_50 = &stack0xfffffffffffffff0;
    puStack_48 = puVar30;
    if (plVar11 != (long *)0x0) {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x228))(plVar11,*(undefined8 *)(*plVar11 + 0x230));
      goto code_r0x014e5ddc;
    }
    unaff_x30 = &Atlas_Contexts_RoundResultsState__BackOut;
    param_1 = (long *)func_0x00f78af4();
  }
  else {
code_r0x014e5d48:
    if (param_1[0x10] == 0) {
LAB_014e5da4:
      puVar30 = &Atlas_Contexts_RoundResultsState__RequestResultsFinish;
      auVar34 = func_0x00f78af4();
      lVar18 = auVar34._8_8_;
      unaff_x19 = auVar34._0_8_;
      goto code_r0x014e5da8;
    }
    lVar18 = *(long *)(param_1[0x10] + 0x20);
    if ((lVar18 == 0) || (*(char *)(lVar18 + 0x19c) != '\0')) {
      return plVar11;
    }
    Atlas_Contexts_RoundResultsState__RemoveDelegates(param_1);
    if (param_1[0x10] == 0) goto LAB_014e5da4;
    /*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(param_1[0x10],0);
    pplVar6 = (long **)register0x00000008;
    param_2 = unaff_x20;
    uVar23 = unaff_x21;
  }
  *(long **)((long)pplVar6 + -0x20) = param_2;
  *(long **)((long)pplVar6 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)pplVar6 + -0x10) = unaff_x29;
  *(undefined **)((long)pplVar6 + -8) = unaff_x30;
  if ((bRam0000000003eb4c0c & 1) == 0) {
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb4c0c = 1;
  }
  if (param_1[0x14] != 0) {
    /*Atlas.UI.VotingManager$$VotingFinished*/ func_0x0152a194(param_1[0x14],0);
    uVar26 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
    lVar18 = param_1[0x15];
    if (lVar18 != 0) {
      cVar2 = *(char *)(lVar18 + 0x50);
      if (cVar2 == '\0') {
        *(undefined1 *)(lVar18 + 0x50) = 1;
        *(undefined8 *)(lVar18 + 0x40) = uVar26;
        *(undefined8 *)(lVar18 + 0x48) = 0;
      }
      return (long *)(ulong)(cVar2 == '\0');
    }
  }
  func_0x00f78af4();
  *(undefined8 *)((long)pplVar6 + -0x70) = unaff_x26;
  *(undefined8 *)((long)pplVar6 + -0x68) = unaff_x25;
  *(long **)((long)pplVar6 + -0x60) = unaff_x24;
  *(undefined8 **)((long)pplVar6 + -0x58) = unaff_x23;
  *(undefined8 *)((long)pplVar6 + -0x50) = unaff_x22;
  *(undefined8 *)((long)pplVar6 + -0x48) = uVar23;
  *(undefined8 *)((long)pplVar6 + -0x40) = 0x3eb4000;
  *(long **)((long)pplVar6 + -0x38) = param_1;
  *(undefined1 **)((long)pplVar6 + -0x30) = (undefined1 *)((long)pplVar6 + -0x10);
  *(undefined **)((long)pplVar6 + -0x28) =
       &Atlas_Contexts_RoundResultsState__UpdateEntryPreviousPositions;
  lVar18 = 0x3eb4000;
  plVar11 = plVar16;
  if ((bRam0000000003eb4c08 & 1) == 0) {
    func_0x00f78a20(0x3d2cf38);
    func_0x00f78a20(0x3d1b978);
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3d168);
    func_0x00f78a20(0x3d3b5c0);
    func_0x00f78a20(0x3d3d178);
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3d188);
    func_0x00f78a20(0x3d3d190);
    func_0x00f78a20(0x3d63bc0);
    func_0x00f78a20(0x3d289f8);
    bRam0000000003eb4c08 = 1;
  }
  uVar23 = 0x3d32b90;
  *(undefined8 *)((long)pplVar6 + -0x88) = 0;
  *(undefined8 *)((long)pplVar6 + -0x90) = 0;
  *(undefined8 *)((long)pplVar6 + -0x78) = 0;
  *(undefined8 *)((long)pplVar6 + -0x80) = 0;
  *(undefined4 *)((long)pplVar6 + -0x98) = 0;
  *(undefined8 *)((long)pplVar6 + -0xa0) = 0;
  lVar13 = *(long *)(extraout_x1 + 0x18);
  if ((lVar13 != 0) && (0 < *(int *)(lVar13 + 0x18))) {
    /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044((undefined1 *)((long)pplVar6 + -0xc0),lVar13,uRam0000000003d3b5c0);
    *(undefined8 *)((long)pplVar6 + -0x88) = *(undefined8 *)((long)pplVar6 + -0xb8);
    *(undefined8 *)((long)pplVar6 + -0x90) = *(undefined8 *)((long)pplVar6 + -0xc0);
    *(undefined8 *)((long)pplVar6 + -0x78) = *(undefined8 *)((long)pplVar6 + -0xa8);
    *(undefined8 *)((long)pplVar6 + -0x80) = *(undefined8 *)((long)pplVar6 + -0xb0);
    uVar17 = 1;
    while( true ) {
      uVar21 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84((undefined1 *)((long)pplVar6 + -0x90),uRam0000000003d32b98);
      if ((uVar21 & 1) == 0) {
        plVar11 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80((undefined1 *)((long)pplVar6 + -0x90),uRam0000000003d32b90
                                         );
        return plVar11;
      }
      if (plVar16 == (long *)0x0) break;
      /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(plVar16,(ulong)uVar17 | *(ulong *)((long)pplVar6 + -0x80) << 0x20,
                      *(ulong *)((long)pplVar6 + -0x80) >> 0x20,uRam0000000003d3d168);
      uVar17 = uVar17 + 1;
    }
    func_0x00f78af4();
code_r0x014e6194:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x14e6198);
    (*pcVar5)();
  }
  lVar13 = extraout_x1;
  if (*(long *)(extraout_x1 + 8) == 0) goto code_r0x014e6198;
  unaff_x24 = (long *)0x3d289f8;
  unaff_x23 = (undefined8 *)0x3d3d178;
  /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044((undefined1 *)((long)pplVar6 + -0xc0),*(long *)(extraout_x1 + 8),
                  uRam0000000003d3b5c0);
  *(undefined8 *)((long)pplVar6 + -0x88) = *(undefined8 *)((long)pplVar6 + -0xb8);
  *(undefined8 *)((long)pplVar6 + -0x90) = *(undefined8 *)((long)pplVar6 + -0xc0);
  *(undefined8 *)((long)pplVar6 + -0x78) = *(undefined8 *)((long)pplVar6 + -0xa8);
  *(undefined8 *)((long)pplVar6 + -0x80) = *(undefined8 *)((long)pplVar6 + -0xb0);
  while (uVar21 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84((undefined1 *)((long)pplVar6 + -0x90),uRam0000000003d32b98),
        (uVar21 & 1) != 0) {
    lVar18 = *(long *)((long)pplVar6 + -0x80);
    plVar11 = (long *)((long)pplVar6 + -0xa0);
    uVar21 = /*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(extraout_x1,lVar18,plVar11,0);
    if ((uVar21 & 1) != 0) {
      if (plVar16 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014e6194;
      }
      plVar11 = (long *)(ulong)(uint)((int)((ulong)lVar18 >> 0x20) - *(int *)((long)pplVar6 + -0x9c)
                                     );
      /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(plVar16,lVar18 << 0x20,plVar11,uRam0000000003d3d168);
    }
  }
  /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80((undefined1 *)((long)pplVar6 + -0x90),uRam0000000003d32b90);
  do {
    lVar14 = *unaff_x24;
    if (((*(ushort *)(lVar14 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar14 + 0xe0) == 0)) {
      func_0x00f78ad0();
      lVar14 = *unaff_x24;
    }
    plVar19 = *(long **)(lVar14 + 0xb8);
    lVar13 = plVar19[1];
    if (lVar13 == 0) {
      if (((*(ushort *)(lVar14 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar14 + 0xe0) == 0)) {
        func_0x00f78ad0();
        plVar19 = *(long **)(*unaff_x24 + 0xb8);
      }
      lVar18 = *plVar19;
      lVar13 = func_0x00f78aec(/*System.Comparison<EndOfRoundScreen.LeaderboardEntry>_TypeInfo*/ uRam0000000003d1b978);
      plVar11 = plRam0000000003d63bc0;
      /*System.Comparison<EndOfRoundScreen.LeaderboardEntry>$$.ctor*/ func_0x01dc71e8(lVar13,lVar18,plRam0000000003d63bc0,uRam0000000003d2cf38);
      *(long *)(*(long *)(*unaff_x24 + 0xb8) + 8) = lVar13;
    }
    if (plVar16 != (long *)0x0) {
      plVar11 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Sort*/ func_0x025212a4(plVar16,lVar13,*unaff_x23);
      uVar21 = (ulong)*(uint *)(plVar16 + 3);
      if ((int)*(uint *)(plVar16 + 3) < 1) {
        return plVar11;
      }
      lVar18 = 0;
      uVar24 = 0;
      do {
        if ((uVar21 & 0xffffffff) <= uVar24) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar24 = uVar24 + 1;
        plVar11 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar16,(int)uVar24 + -1,
                                          uVar24 | (ulong)*(uint *)(plVar16[2] + lVar18 + 0x24) <<
                                                   0x20,*(undefined8 *)(plVar16[2] + lVar18 + 0x28),
                                          uRam0000000003d3d190);
        uVar21 = (ulong)(int)plVar16[3];
        lVar18 = lVar18 + 0x10;
      } while ((long)uVar24 < (long)uVar21);
      return plVar11;
    }
code_r0x014e6198:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014e620c;
    plVar19 = (long *)___cxa_begin_catch();
    lVar13 = *plVar19;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80((undefined1 *)((long)pplVar6 + -0x90),uRam0000000003d32b90);
  } while (lVar13 == 0);
  func_0x00f78ac0(lVar13,0);
code_r0x014e620c:
  auVar34 = __Unwind_Resume();
  plVar19 = auVar34._0_8_;
  *(long **)((long)pplVar6 + -0x100) = unaff_x24;
  *(undefined8 **)((long)pplVar6 + -0xf8) = unaff_x23;
  *(undefined8 *)((long)pplVar6 + -0xf0) = 0x3d32b90;
  *(long *)((long)pplVar6 + -0xe8) = lVar18;
  *(long *)((long)pplVar6 + -0xe0) = lVar13;
  *(long **)((long)pplVar6 + -0xd8) = plVar16;
  *(undefined1 **)((long)pplVar6 + -0xd0) = (undefined1 *)((long)pplVar6 + -0x30);
  *(undefined **)((long)pplVar6 + -200) = &Atlas_Contexts_RoundResultsState__UpdateEntryStarDeltas;
  plVar16 = plVar11;
  if ((bRam0000000003eb4c09 & 1) == 0) {
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    plVar19 = (long *)func_0x00f78a20(0x3d3d190);
    bRam0000000003eb4c09 = 1;
  }
  *(undefined4 *)((long)pplVar6 + -0x108) = 0;
  *(undefined8 *)((long)pplVar6 + -0x110) = 0;
  if (plVar11 != (long *)0x0) {
    uVar21 = (ulong)*(uint *)(plVar11 + 3);
    if (0 < (int)*(uint *)(plVar11 + 3)) {
      lVar18 = 0;
      uVar24 = 0;
      do {
        if ((uVar21 & 0xffffffff) <= uVar24) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar19 = (long *)/*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(auVar34._8_8_,*(undefined4 *)(plVar11[2] + lVar18 + 0x24),
                                          (undefined1 *)((long)pplVar6 + -0x110),0);
        if ((int)plVar19 != 0) {
          if (*(uint *)(plVar11 + 3) <= uVar24) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar19 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar11,uVar24,
                                            *(undefined8 *)(plVar11[2] + lVar18 + 0x20),
                                            CONCAT44(*(undefined4 *)((long)pplVar6 + -0x10c),
                                                     *(undefined4 *)(plVar11[2] + lVar18 + 0x28)),
                                            uRam0000000003d3d190);
        }
        uVar24 = uVar24 + 1;
        uVar21 = (ulong)(int)plVar11[3];
        lVar18 = lVar18 + 0x10;
      } while ((long)uVar24 < (long)uVar21);
    }
    return plVar19;
  }
  auVar35 = func_0x00f78af4();
  plVar19 = auVar35._0_8_;
  *(long **)((long)pplVar6 + -0x150) = unaff_x24;
  *(undefined8 **)((long)pplVar6 + -0x148) = unaff_x23;
  *(undefined8 *)((long)pplVar6 + -0x140) = 0x3d32b90;
  *(undefined8 *)((long)pplVar6 + -0x138) = 0x3eb4000;
  *(long *)((long)pplVar6 + -0x130) = auVar34._8_8_;
  *(undefined8 *)((long)pplVar6 + -0x128) = 0;
  *(undefined1 **)((long)pplVar6 + -0x120) = (undefined1 *)((long)pplVar6 + -0xd0);
  *(undefined **)((long)pplVar6 + -0x118) =
       &Atlas_Contexts_RoundResultsState__UpdateEntryCurrentStars;
  plVar11 = plVar16;
  if ((bRam0000000003eb4c0a & 1) == 0) {
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    plVar19 = (long *)func_0x00f78a20(0x3d3d190);
    bRam0000000003eb4c0a = 1;
  }
  *(undefined4 *)((long)pplVar6 + -0x158) = 0;
  *(undefined8 *)((long)pplVar6 + -0x160) = 0;
  if (plVar16 != (long *)0x0) {
    uVar21 = (ulong)*(uint *)(plVar16 + 3);
    if (0 < (int)*(uint *)(plVar16 + 3)) {
      uVar24 = 0;
      lVar18 = 0x20;
      do {
        if ((uVar21 & 0xffffffff) <= uVar24) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar19 = (long *)/*Core.Networking.NetworkTournament$$GetTotalNetworkScore*/ func_0x01660f34(auVar35._8_8_,*(undefined4 *)(plVar16[2] + lVar18 + 4),
                                          (undefined1 *)((long)pplVar6 + -0x160),0);
        if ((int)plVar19 != 0) {
          if (*(uint *)(plVar16 + 3) <= uVar24) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar19 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar16,uVar24,*(undefined8 *)(plVar16[2] + lVar18),
                                            *(undefined4 *)((long)pplVar6 + -0x15c),
                                            uRam0000000003d3d190);
        }
        uVar24 = uVar24 + 1;
        uVar21 = (ulong)(int)plVar16[3];
        lVar18 = lVar18 + 0x10;
      } while ((long)uVar24 < (long)uVar21);
    }
    return plVar19;
  }
  auVar34 = func_0x00f78af4();
  lVar18 = auVar34._8_8_;
  puVar12 = auVar34._0_8_;
  puVar7 = (undefined1 *)((long)pplVar6 + -0x1c0);
  *(long **)((long)pplVar6 + -0x1a0) = unaff_x24;
  *(undefined8 **)((long)pplVar6 + -0x198) = unaff_x23;
  *(undefined8 *)((long)pplVar6 + -400) = 0x3d32b90;
  *(undefined8 *)((long)pplVar6 + -0x188) = 0x3eb4000;
  *(long *)((long)pplVar6 + -0x180) = auVar35._8_8_;
  *(undefined8 *)((long)pplVar6 + -0x178) = 0;
  *(undefined1 **)((long)pplVar6 + -0x170) = (undefined1 *)((long)pplVar6 + -0x120);
  *(undefined **)((long)pplVar6 + -0x168) =
       &Atlas_Contexts_RoundResultsState__SortEntriesByStarCountFromTournamentData;
  if ((bRam0000000003eb4c0b & 1) == 0) {
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3d168);
    func_0x00f78a20(0x3d3d170);
    func_0x00f78a20(0x3d3b5c0);
    bRam0000000003eb4c0b = 1;
  }
  *(undefined8 *)((long)pplVar6 + -0x1b8) = 0;
  *(undefined8 *)((long)pplVar6 + -0x1c0) = 0;
  *(undefined8 *)((long)pplVar6 + -0x1a8) = 0;
  *(undefined8 *)((long)pplVar6 + -0x1b0) = 0;
  if (lVar18 != 0) {
    /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Clear*/ func_0x0251f970(lVar18,uRam0000000003d3d170);
    if (puVar12[1] != 0) {
      /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044((undefined1 *)((long)pplVar6 + -0x1c0),puVar12[1],uRam0000000003d3b5c0);
      uVar17 = 1;
      while (uVar21 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84((undefined1 *)((long)pplVar6 + -0x1c0),uRam0000000003d32b98),
            (uVar21 & 1) != 0) {
        /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(lVar18,(ulong)uVar17 | *(ulong *)((long)pplVar6 + -0x1b0) << 0x20,
                        *(ulong *)((long)pplVar6 + -0x1b0) >> 0x20,uRam0000000003d3d168);
        uVar17 = uVar17 + 1;
      }
      plVar11 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80((undefined1 *)((long)pplVar6 + -0x1c0),uRam0000000003d32b90)
      ;
      return plVar11;
    }
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar16 = (long *)___cxa_begin_catch();
    lVar18 = *plVar16;
    ___cxa_end_catch();
    plVar16 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80((undefined1 *)((long)pplVar6 + -0x1c0),*puVar12);
    if (lVar18 == 0) {
      return plVar16;
    }
    func_0x00f78ac0(lVar18,0);
  }
  lVar13 = __Unwind_Resume();
  *(undefined8 *)((long)pplVar6 + -0x1f0) = 0x3d32b90;
  *(undefined8 *)((long)pplVar6 + -0x1e8) = 0x3eb4000;
  *(undefined8 **)((long)pplVar6 + -0x1e0) = puVar12;
  *(long *)((long)pplVar6 + -0x1d8) = lVar18;
  *(undefined1 **)((long)pplVar6 + -0x1d0) = (undefined1 *)((long)pplVar6 + -0x170);
  *(undefined **)((long)pplVar6 + -0x1c8) = &Atlas_Contexts_RoundResultsState__OnResultsFinished;
  if ((bRam0000000003eb4c0e & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d27638);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d40658);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4c0e = 1;
  }
  uVar25 = 0x3d40650;
  iVar9 = Atlas_Contexts_RoundResultsState__IsTournamentOver(lVar13);
  uVar26 = uVar25;
  if (iVar9 == 0) {
    uVar21 = *(ulong *)(lVar13 + 0xa0);
    lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar13,uRam0000000003d40650);
    if ((lVar18 != 0) && (uVar21 != 0)) {
      plVar11 = *(long **)(lVar18 + 0x10);
      lVar18 = *(long *)((long)pplVar6 + -0x1f0);
      *(long **)((long)pplVar6 + -0x200) = unaff_x24;
      *(undefined8 **)((long)pplVar6 + -0x1f8) = unaff_x23;
      *(long *)((long)pplVar6 + -0x1f0) = lVar18;
      *(undefined8 *)((long)pplVar6 + -0x1e8) = *(undefined8 *)((long)pplVar6 + -0x1e8);
      *(undefined8 *)((long)pplVar6 + -0x1e0) = *(undefined8 *)((long)pplVar6 + -0x1e0);
      *(undefined8 *)((long)pplVar6 + -0x1d8) = *(undefined8 *)((long)pplVar6 + -0x1d8);
      *(undefined8 *)((long)pplVar6 + -0x1d0) = *(undefined8 *)((long)pplVar6 + -0x1d0);
      *(undefined8 *)((long)pplVar6 + -0x1c8) = *(undefined8 *)((long)pplVar6 + -0x1c8);
      lVar13 = 0x3eb4000;
      if ((bRam0000000003eb4e73 & 1) == 0) {
        func_0x00f78a20(0x3d3b110,plVar11,0);
        func_0x00f78a20(0x3d1f498);
        func_0x00f78a20(0x3d66320);
        func_0x00f78a20(0x3d663f8);
        func_0x00f78a20(0x3d66300);
        func_0x00f78a20(0x3d66318);
        func_0x00f78a20(0x3d663f0);
        func_0x00f78a20(0x3d6b9f8);
        bRam0000000003eb4e73 = 1;
      }
      *(undefined8 *)((long)pplVar6 + -0x210) = 0;
      *(undefined8 *)((long)pplVar6 + -0x208) = 0;
      *(undefined4 *)((long)pplVar6 + -0x218) = 0;
      *(undefined4 *)((long)pplVar6 + -0x214) = 0;
      puVar12 = unaff_x23;
      if (*(long *)(uVar21 + 0x20) == 0) {
code_r0x0152a8c4:
        plVar16 = plVar11;
        func_0x00f78af4();
code_r0x0152a8c8:
        uVar23 = func_0x00f78b24();
        unaff_x23 = puVar12;
code_r0x0152a8d4:
        puVar30 = &Atlas_UI_VotingManager__FilterMapsFromTournament;
        auVar34 = func_0x00f78ac0(uVar23,0);
      }
      else {
        plVar16 = (long *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(uVar21 + 0x20),0);
        if ((int)plVar16 == 0) {
          return plVar16;
        }
        if ((*(long *)(uVar21 + 0xb0) == 0) ||
           (/*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(*(long *)(uVar21 + 0xb0),*(undefined8 *)(uVar21 + 0xe0),0),
           plVar11 == (long *)0x0)) goto code_r0x0152a8c4;
        auVar34._8_8_ = *(undefined8 *)(uVar21 + 0xe0);
        auVar34._0_8_ = uVar21;
        if ((int)plVar11[2] != 2) {
          /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(uVar21,*(undefined8 *)(uVar21 + 0xe0),
                          (undefined1 *)((long)pplVar6 + -0x208),
                          (undefined1 *)((long)pplVar6 + -0x210));
          if (*(long *)(uVar21 + 0xe0) == 0) goto code_r0x0152a8c4;
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(uVar21 + 0xe0),uRam0000000003d3b110);
          lVar18 = *(long *)((long)pplVar6 + -0x208);
          if ((lVar18 == 0) || (*(long *)(uVar21 + 0x28) == 0)) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar21 + 0x28),*(undefined8 *)(lVar18 + 0x18),
                          (undefined1 *)((long)pplVar6 + -0x216),0);
          lVar13 = *(long *)((long)pplVar6 + -0x210);
          if ((lVar13 == 0) || (*(long *)(uVar21 + 0x28) == 0)) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar21 + 0x28),*(undefined8 *)(lVar13 + 0x18),
                          (undefined1 *)((long)pplVar6 + -0x218),0);
          if (*(long *)(uVar21 + 0xb0) == 0) goto code_r0x0152a8c4;
          uVar23 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(uVar21 + 0xb0),lVar18,0);
          if (*(long *)(uVar21 + 0x28) == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar21 + 0x28),uVar23,(undefined1 *)((long)pplVar6 + -0x212),0);
          if (*(long *)(uVar21 + 0xb0) == 0) goto code_r0x0152a8c4;
          uVar23 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(uVar21 + 0xb0),lVar13,0);
          if (*(long *)(uVar21 + 0x28) == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar21 + 0x28),uVar23,(undefined1 *)((long)pplVar6 + -0x214),0);
          plVar16 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0xc);
          if (plVar16 == (long *)0x0) goto code_r0x0152a8c4;
          unaff_x23 = (undefined8 *)0x3d6b9f8;
          puVar28 = (undefined8 *)0x3d6b9f8;
          if ((/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8 != 0) &&
             (lVar14 = func_0x00f78adc(/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8,*(undefined8 *)(*plVar16 + 0x40)),
             lVar14 == 0)) goto code_r0x0152a8d0;
          uVar24 = plVar16[3];
          puVar12 = unaff_x23;
          if ((int)uVar24 == 0) goto code_r0x0152a8c8;
          plVar16[4] = /*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8;
          lVar18 = *(long *)(lVar18 + 0x18);
          if (lVar18 != 0) {
            lVar14 = func_0x00f78adc(lVar18,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar14 == 0) goto code_r0x0152a8d0;
            uVar24 = plVar16[3];
          }
          if ((uVar24 & 0xfffffffe) == 0) goto code_r0x0152a8c8;
          plVar16[5] = lVar18;
          lVar18 = 0x3d66300;
          lVar14 = 0x3d66300;
          if (/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300 != 0) {
            lVar20 = func_0x00f78adc(/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar20 == 0) goto code_r0x0152a8d0;
            uVar24 = plVar16[3];
          }
          puVar12 = puVar28;
          if ((uint)uVar24 < 3) goto code_r0x0152a8c8;
          plVar16[6] = /*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300;
          lVar13 = *(long *)(lVar13 + 0x18);
          if (lVar13 != 0) {
            lVar20 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar20 == 0) goto code_r0x0152a8d0;
            uVar24 = plVar16[3];
          }
          uVar17 = (uint)uVar24;
          if ((uVar24 & 0xfffffffc) == 0) goto code_r0x0152a8c8;
          plVar16[7] = lVar13;
          lVar13 = 0x3d663f0;
          lVar18 = lVar14;
          if (/*STR(' typeKey1: ')*/ lRam0000000003d663f0 != 0) {
            lVar14 = func_0x00f78adc(/*STR(' typeKey1: ')*/ lRam0000000003d663f0,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar14 == 0) goto code_r0x0152a8d0;
            uVar17 = (uint)plVar16[3];
          }
          if (uVar17 < 5) goto code_r0x0152a8c8;
          plVar16[8] = /*STR(' typeKey1: ')*/ lRam0000000003d663f0;
          lVar13 = /*System.Int16$$ToString*/ func_0x02ae8e6c((undefined1 *)((long)pplVar6 + -0x212),0);
          if ((lVar13 == 0) ||
             (lVar14 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar16 + 0x40)), lVar14 != 0)) {
            uVar17 = *(uint *)(plVar16 + 3);
            if (5 < uVar17) {
              plVar16[9] = lVar13;
              lVar13 = 0x3d663f8;
              if (/*STR(' typeKey2: ')*/ lRam0000000003d663f8 != 0) {
                lVar14 = func_0x00f78adc(/*STR(' typeKey2: ')*/ lRam0000000003d663f8,*(undefined8 *)(*plVar16 + 0x40));
                if (lVar14 == 0) goto code_r0x0152a8d0;
                uVar17 = *(uint *)(plVar16 + 3);
              }
              if (6 < uVar17) {
                plVar16[10] = /*STR(' typeKey2: ')*/ lRam0000000003d663f8;
                lVar13 = /*System.Int16$$ToString*/ func_0x02ae8e6c((undefined1 *)((long)pplVar6 + -0x214),0);
                if ((lVar13 != 0) &&
                   (lVar14 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar16 + 0x40)), lVar14 == 0))
                goto code_r0x0152a8d0;
                uVar17 = (uint)plVar16[3];
                if ((plVar16[3] & 0xfffffff8U) != 0) {
                  plVar16[0xb] = lVar13;
                  lVar13 = 0x3d66318;
                  if (/*STR(' mapKey1: ')*/ lRam0000000003d66318 != 0) {
                    lVar14 = func_0x00f78adc(/*STR(' mapKey1: ')*/ lRam0000000003d66318,*(undefined8 *)(*plVar16 + 0x40));
                    if (lVar14 == 0) goto code_r0x0152a8d0;
                    uVar17 = (uint)plVar16[3];
                  }
                  if (8 < uVar17) {
                    plVar16[0xc] = /*STR(' mapKey1: ')*/ lRam0000000003d66318;
                    lVar13 = /*System.Int16$$ToString*/ func_0x02ae8e6c((undefined1 *)((long)pplVar6 + -0x216),0);
                    if ((lVar13 != 0) &&
                       (lVar14 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar16 + 0x40)),
                       lVar14 == 0)) goto code_r0x0152a8d0;
                    uVar17 = *(uint *)(plVar16 + 3);
                    if (9 < uVar17) {
                      plVar16[0xd] = lVar13;
                      lVar13 = 0x3d66320;
                      if (/*STR(' mapKey2: ')*/ lRam0000000003d66320 != 0) {
                        lVar14 = func_0x00f78adc(/*STR(' mapKey2: ')*/ lRam0000000003d66320,
                                                 *(undefined8 *)(*plVar16 + 0x40));
                        if (lVar14 == 0) goto code_r0x0152a8d0;
                        uVar17 = *(uint *)(plVar16 + 3);
                      }
                      if (10 < uVar17) {
                        plVar16[0xe] = /*STR(' mapKey2: ')*/ lRam0000000003d66320;
                        lVar13 = /*System.Int16$$ToString*/ func_0x02ae8e6c((undefined1 *)((long)pplVar6 + -0x218),0);
                        if ((lVar13 != 0) &&
                           (lVar14 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar16 + 0x40)),
                           lVar14 == 0)) goto code_r0x0152a8d0;
                        if (0xb < *(uint *)(plVar16 + 3)) {
                          plVar16[0xf] = lVar13;
                          /*System.String$$Concat*/ func_0x029cfadc(plVar16,0);
                          plVar11 = plVar16;
                          puVar12 = unaff_x23;
                          if ((*(long *)(uVar21 + 0x20) != 0) &&
                             (plVar16 = *(long **)(*(long *)(uVar21 + 0x20) + 0x20),
                             plVar16 != (long *)0x0)) {
                            plVar11 = (long *)(**(code **)(*plVar16 + 0x1c8))
                                                        (plVar16,(long)*(short *)((long)pplVar6 +
                                                                                 -0x216),
                                                         (long)*(short *)((long)pplVar6 + -0x212),
                                                         (long)*(short *)((long)pplVar6 + -0x218),
                                                         (long)*(short *)((long)pplVar6 + -0x214),
                                                         &UNK_00001770,
                                                         *(undefined8 *)(*plVar16 + 0x1d0));
                            return plVar11;
                          }
                          goto code_r0x0152a8c4;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto code_r0x0152a8c8;
          }
code_r0x0152a8d0:
          uVar23 = func_0x00f78b14();
          goto code_r0x0152a8d4;
        }
        puVar30 = &UNK_0152a520;
        plVar16 = plVar11;
      }
      uVar24 = auVar34._0_8_;
      *(undefined8 *)((long)pplVar6 + -0x280) = unaff_x28;
      *(undefined8 *)((long)pplVar6 + -0x278) = unaff_x27;
      *(undefined8 *)((long)pplVar6 + -0x270) = 0x3d3d168;
      *(undefined8 *)((long)pplVar6 + -0x268) = 0x3d32b98;
      *(long **)((long)pplVar6 + -0x260) = unaff_x24;
      *(undefined8 **)((long)pplVar6 + -600) = unaff_x23;
      *(long *)((long)pplVar6 + -0x250) = lVar18;
      *(long *)((long)pplVar6 + -0x248) = lVar13;
      *(long **)((long)pplVar6 + -0x240) = plVar16;
      *(ulong *)((long)pplVar6 + -0x238) = uVar21;
      *(undefined1 **)((long)pplVar6 + -0x230) = (undefined1 *)((long)pplVar6 + -0x1d0);
      *(undefined **)((long)pplVar6 + -0x228) = puVar30;
      *(long *)((long)pplVar6 + -0x350) = auVar34._8_8_;
      uVar21 = 0x3eb4000;
      if ((bRam0000000003eb4e75 & 1) == 0) {
        func_0x00f78a20(0x3d2e6f0);
        func_0x00f78a20(0x3d2e6f8);
        func_0x00f78a20(0x3d2e700);
        func_0x00f78a20(0x3d2e710);
        func_0x00f78a20(0x3d2e748);
        func_0x00f78a20(0x3d2e750);
        func_0x00f78a20(0x3d32bf0);
        func_0x00f78a20(0x3d32980);
        func_0x00f78a20(0x3d33d98);
        func_0x00f78a20(0x3d33da0);
        func_0x00f78a20(0x3d32988);
        func_0x00f78a20(0x3d32bf8);
        func_0x00f78a20(0x3d32c00);
        func_0x00f78a20(0x3d32990);
        func_0x00f78a20(0x3d33dd0);
        func_0x00f78a20(0x3d39240);
        func_0x00f78a20(0x3d39248);
        func_0x00f78a20(0x3d3b120);
        func_0x00f78a20(0x3d3b6b8);
        func_0x00f78a20(0x3d3b130);
        func_0x00f78a20(0x3d3b0f8);
        func_0x00f78a20(0x3d3b140);
        func_0x00f78a20(0x3d3b6c0);
        func_0x00f78a20(0x3d3b148);
        func_0x00f78a20(0x3d1db90);
        func_0x00f78a20(0x3d65ed8);
        func_0x00f78a20(0x3d66270);
        func_0x00f78a20(0x3d6cdb0);
        func_0x00f78a20(0x3d6cdc0);
        func_0x00f78a20(0x3d6cdb8);
        func_0x00f78a20(0x3d6cdc8);
        bRam0000000003eb4e75 = 1;
      }
      *(undefined8 *)((long)pplVar6 + -0x2a0) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2b8) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2c0) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2a8) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2b0) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2c8) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2e8) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2f0) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2d8) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2e0) = 0;
      *(undefined8 *)((long)pplVar6 + -0x300) = 0;
      *(undefined8 *)((long)pplVar6 + -0x2f8) = 0;
      *(undefined8 *)((long)pplVar6 + -0x310) = 0;
      *(undefined8 *)((long)pplVar6 + -0x308) = 0;
      *(undefined4 *)((long)pplVar6 + -0x314) = 0;
      if (*(long *)(uVar24 + 0xb8) != 0) {
        uVar21 = 0x3d1d000;
        /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(uVar24 + 0xb8),uRam0000000003d2e6f8);
        plVar16 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
        /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(plVar16,*(undefined8 *)((long)pplVar6 + -0x350),uRam0000000003d3b0f8);
        if (((*(long *)(uVar24 + 0x20) != 0) &&
            (lVar18 = *(long *)(*(long *)(uVar24 + 0x20) + 0x20), lVar18 != 0)) &&
           (lVar18 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar18,0), lVar18 != 0)) {
          uVar21 = 0x3d6c000;
          *(undefined4 *)((long)pplVar6 + -0x294) = *(undefined4 *)(lVar18 + 0x18);
          uVar23 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)pplVar6 + -0x294),0);
          /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar23,0);
          if (((*(long *)(uVar24 + 0x20) != 0) &&
              (lVar18 = *(long *)(*(long *)(uVar24 + 0x20) + 0x20), lVar18 != 0)) &&
             (lVar18 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar18,0), lVar18 != 0)) {
            uVar21 = 0x3d32bf8;
            /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100((undefined1 *)((long)pplVar6 + -0x348),lVar18,uRam0000000003d3b6b8);
            *(undefined8 *)((long)pplVar6 + -0x2b8) = *(undefined8 *)((long)pplVar6 + -0x340);
            *(undefined8 *)((long)pplVar6 + -0x2c0) = *(undefined8 *)((long)pplVar6 + -0x348);
            *(undefined8 *)((long)pplVar6 + -0x2a8) = *(undefined8 *)((long)pplVar6 + -0x330);
            *(undefined8 *)((long)pplVar6 + -0x2b0) = *(undefined8 *)((long)pplVar6 + -0x338);
            *(undefined8 *)((long)pplVar6 + -0x2a0) = *(undefined8 *)((long)pplVar6 + -0x328);
code_r0x0152aba4:
            uVar15 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810((undefined1 *)((long)pplVar6 + -0x2c0),uRam0000000003d32bf8);
            if ((uVar15 & 1) != 0) {
              sVar3 = *(short *)((long)pplVar6 + -0x2a4);
              sVar1 = *(short *)((long)pplVar6 + -0x2a8);
              if (sVar3 != *(short *)((long)pplVar6 + -0x2ac)) {
                sVar1 = *(short *)((long)pplVar6 + -0x2ac);
              }
              if (*(long *)(uVar24 + 0xb8) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              iVar9 = (int)sVar1;
              uVar15 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(uVar24 + 0xb8),iVar9,uRam0000000003d2e700);
              if ((uVar15 & 1) == 0) {
                if (*(long *)(uVar24 + 0xb8) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0152af9c;
                }
                /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(uVar24 + 0xb8),iVar9,0,uRam0000000003d2e6f0);
              }
              lVar18 = *(long *)(uVar24 + 0xb8);
              if (lVar18 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              iVar10 = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar18,iVar9,uRam0000000003d2e748);
              *(int *)((long)pplVar6 + -0x294) = iVar10;
              /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar18,iVar9,iVar10 + 1,uRam0000000003d2e750);
              if (*(long *)(uVar24 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar24 + 0x28),(int)sVar3,
                              (undefined1 *)((long)pplVar6 + -0x2c8),0);
              if (plVar16 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar17 = *(uint *)(plVar16 + 3);
              if (0 < (int)uVar17) {
                uVar27 = 0;
                do {
                  if (uVar17 <= uVar27) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar18 = *(long *)(plVar16[2] + (long)(int)uVar27 * 8 + 0x20);
                  if (lVar18 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar15 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar18 + 0x18),
                                           *(undefined8 *)((long)pplVar6 + -0x2c8),0);
                  if ((uVar15 & 1) != 0) {
                    /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,*(undefined8 *)((long)pplVar6 + -0x2c8),0);
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar16,uVar27,uRam0000000003d3b130);
                    break;
                  }
                  uVar27 = uVar27 + 1;
                  uVar17 = *(uint *)(plVar16 + 3);
                } while ((int)uVar27 < (int)uVar17);
              }
              goto code_r0x0152aba4;
            }
            *(undefined4 *)((long)pplVar6 + -800) = 0x136;
            /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c((undefined1 *)((long)pplVar6 + -0x2c0),uRam0000000003d32bf0);
            *(undefined4 *)((long)pplVar6 + -0x314) = 0;
            if (*(long *)(uVar24 + 0xb8) != 0) {
              /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8((undefined1 *)((long)pplVar6 + -0x348),*(long *)(uVar24 + 0xb8),
                              uRam0000000003d2e710);
              *(undefined8 *)((long)pplVar6 + -0x2e8) = *(undefined8 *)((long)pplVar6 + -0x340);
              *(undefined8 *)((long)pplVar6 + -0x2f0) = *(undefined8 *)((long)pplVar6 + -0x348);
              *(undefined8 *)((long)pplVar6 + -0x2d8) = *(undefined8 *)((long)pplVar6 + -0x330);
              *(undefined8 *)((long)pplVar6 + -0x2e0) = *(undefined8 *)((long)pplVar6 + -0x338);
code_r0x0152ad1c:
              uVar21 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398((undefined1 *)((long)pplVar6 + -0x2f0),uRam0000000003d33da0);
              if ((uVar21 & 1) != 0) {
                if (*(int *)(uVar24 + 0x10) <= *(int *)((long)pplVar6 + -0x2dc)) {
                  if (*(long *)(uVar24 + 0x28) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar24 + 0x28),
                                  (int)(short)*(undefined4 *)((long)pplVar6 + -0x2e0),
                                  (undefined1 *)((long)pplVar6 + -0x2f8),0);
                  if (plVar16 == (long *)0x0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar17 = *(uint *)(plVar16 + 3);
                  if (0 < (int)uVar17) {
                    uVar27 = 0;
                    do {
                      if (uVar17 <= uVar27) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar18 = *(long *)(plVar16[2] + (long)(int)uVar27 * 8 + 0x20);
                      if (lVar18 == 0) {
                        func_0x00f78af4();
                        goto code_r0x0152af9c;
                      }
                      uVar21 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar18 + 0x18),
                                               *(undefined8 *)((long)pplVar6 + -0x2f8),0);
                      if ((uVar21 & 1) != 0) {
                        /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,*(undefined8 *)((long)pplVar6 + -0x2f8)
                                        ,0);
                        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar16,uVar27,uRam0000000003d3b130);
                        break;
                      }
                      uVar27 = uVar27 + 1;
                      uVar17 = *(uint *)(plVar16 + 3);
                    } while ((int)uVar27 < (int)uVar17);
                  }
                }
                goto code_r0x0152ad1c;
              }
              uVar17 = *(uint *)((long)pplVar6 + -0x314);
              uVar24 = (ulong)uVar17;
              uVar21 = (ulong)(uVar17 + 1);
              *(undefined4 *)((long)pplVar6 + -800) = 0x1d1;
              *(uint *)((long)pplVar6 + -0x314) = uVar17 + 1;
              /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508((undefined1 *)((long)pplVar6 + -0x2f0),uRam0000000003d33d98);
              if (uVar17 != 0xffffffff) goto code_r0x0152ae34;
              uVar21 = 0;
              iVar9 = 0;
              if (plVar16 != (long *)0x0) goto code_r0x0152ae5c;
            }
          }
        }
      }
      do {
        func_0x00f78af4();
code_r0x0152ae34:
        if (*(int *)((long)pplVar6 + (long)(int)uVar24 * 4 + -800) == 0x1d1) {
          *(int *)((long)pplVar6 + -0x314) = (int)uVar24;
          uVar21 = uVar24;
        }
        iVar9 = (int)uVar21;
      } while (plVar16 == (long *)0x0);
code_r0x0152ae5c:
      *(int *)((long)pplVar6 + -0x294) = (int)plVar16[3];
      uVar23 = /*System.Int32$$ToString*/ func_0x02ae9b8c((undefined1 *)((long)pplVar6 + -0x294),0);
      uVar23 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar23,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)pplVar6 + -0x310),plVar16,uRam0000000003d3b120);
      while( true ) {
        uVar21 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)pplVar6 + -0x310),uRam0000000003d32988);
        if ((uVar21 & 1) == 0) {
          *(undefined4 *)((long)pplVar6 + (long)iVar9 * 4 + -800) = 0x23d;
          *(int *)((long)pplVar6 + -0x314) = *(int *)((long)pplVar6 + -0x314) + 1;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)pplVar6 + -0x310),uRam0000000003d32980);
          if ((int)plVar16[3] < 2) {
            plVar16 = *(long **)((long)pplVar6 + -0x350);
          }
          return plVar16;
        }
        if (*(long *)((long)pplVar6 + -0x300) == 0) break;
        uVar23 = /*System.String$$Concat*/ func_0x029be39c(uVar23,*(undefined8 *)(*(long *)((long)pplVar6 + -0x300) + 0x18),
                                 /*STR(' ')*/ uRam0000000003d65ed8,0);
      }
      func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x152afa0);
      (*pcVar5)();
    }
  }
  else {
    uVar21 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
    Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor(uVar21,0);
    lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar13,uRam0000000003d40650);
    uVar26 = 0x3d40650;
    if ((lVar18 != 0) && (uVar21 != 0)) {
      *(undefined8 *)(uVar21 + 0x10) = *(undefined8 *)(lVar18 + 0x10);
      lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar13,uRam0000000003d40658);
      uVar26 = uVar25;
      if (lVar18 != 0) {
        *(undefined8 *)(uVar21 + 0x18) = *(undefined8 *)(lVar18 + 0x18);
        *(undefined1 *)(uVar21 + 0x20) = 1;
        uVar26 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ uRam0000000003d194d8;
        plVar16 = *(long **)(lVar13 + 0x78);
        if (((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar19 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar26,0);
        lVar13 = 0;
        if (plVar16 != (long *)0x0) {
          puVar29 = *(undefined1 **)((long)pplVar6 + -0x1d0);
          puVar30 = *(undefined **)((long)pplVar6 + -0x1c8);
          uVar23 = *(undefined8 *)((long)pplVar6 + -0x1f0);
          uVar26 = *(undefined8 *)((long)pplVar6 + -0x1e8);
          plVar11 = *(long **)((long)pplVar6 + -0x1d8);
          uVar24 = *(ulong *)((long)pplVar6 + -0x1e0);
          goto code_r0x01e7159c;
        }
      }
    }
  }
  auVar35 = func_0x00f78af4();
  puVar12 = auVar35._8_8_;
  lVar18 = auVar35._0_8_;
  puVar7 = (undefined1 *)((long)pplVar6 + -0x250);
  *(long **)((long)pplVar6 + -0x230) = unaff_x24;
  *(undefined8 **)((long)pplVar6 + -0x228) = unaff_x23;
  *(undefined8 *)((long)pplVar6 + -0x220) = 0x3d32b90;
  *(undefined8 *)((long)pplVar6 + -0x218) = uVar26;
  *(ulong *)((long)pplVar6 + -0x210) = uVar21;
  *(long *)((long)pplVar6 + -0x208) = lVar13;
  *(undefined1 **)((long)pplVar6 + -0x200) = (undefined1 *)((long)pplVar6 + -0x1d0);
  *(undefined **)((long)pplVar6 + -0x1f8) = &Atlas_Contexts_RoundResultsState__OnVoteStarted;
  puVar29 = (undefined1 *)((long)pplVar6 + -0x200);
  uVar26 = 0x3eb4000;
  if ((bRam0000000003eb4c0f & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d297a0);
    func_0x00f78a20(0x3d1a1a8);
    bRam0000000003eb4c0f = 1;
  }
  lVar13 = *(long *)(lVar18 + 0xa0);
  if (lVar13 != 0) {
    uVar26 = 0x3d40000;
    uVar25 = *puVar12;
    uVar32 = puVar12[3];
    uVar31 = puVar12[2];
    *(undefined8 *)((long)pplVar6 + -0x248) = puVar12[1];
    *(undefined8 *)((long)pplVar6 + -0x250) = uVar25;
    *(undefined8 *)((long)pplVar6 + -0x238) = uVar32;
    *(undefined8 *)((long)pplVar6 + -0x240) = uVar31;
    plVar11 = (long *)0x0;
    /*Atlas.UI.VotingManager$$SetVoteData*/ func_0x01529c00(lVar13,(undefined1 *)((long)pplVar6 + -0x250));
    lVar13 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar18,uRam0000000003d40650);
    if (lVar13 != 0) {
      uVar23 = 0x3d1a000;
      unaff_x23 = (undefined8 *)0x3d25000;
      uVar26 = *(undefined8 *)(lVar13 + 0x10);
      uVar21 = func_0x00f78aec(/*Atlas.Contexts.VotingState.VotingStateTransitionData_TypeInfo*/ uRam0000000003d297a0);
      plVar11 = (long *)((long)&MACH_HEADER.magic + 1);
      /*Atlas.Contexts.VotingState.VotingStateTransitionData$$.ctor*/ func_0x0156ebc8(uVar21,uVar26,1,0);
      uVar26 = /*Atlas.Contexts.VotingState_var*/ uRam0000000003d1a1a8;
      plVar16 = *(long **)(lVar18 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar19 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar26,0);
      auVar35._8_8_ = 0;
      auVar35._0_8_ = uVar21;
      auVar35 = auVar35 << 0x40;
      if (plVar16 != (long *)0x0) {
        puVar30 = &UNK_014e6858;
        plVar11 = plVar16;
        uVar24 = uVar21;
code_r0x01e7159c:
        *(undefined8 *)(puVar7 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar7 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar7 + -0x50) = 0x3d3d168;
        *(undefined8 *)(puVar7 + -0x48) = 0x3d32b98;
        *(long **)(puVar7 + -0x40) = unaff_x24;
        *(undefined8 **)(puVar7 + -0x38) = unaff_x23;
        *(undefined8 *)(puVar7 + -0x30) = uVar23;
        *(undefined8 *)(puVar7 + -0x28) = uVar26;
        *(ulong *)(puVar7 + -0x20) = uVar24;
        *(long **)(puVar7 + -0x18) = plVar11;
        *(undefined1 **)(puVar7 + -0x10) = puVar29;
        *(undefined **)(puVar7 + -8) = puVar30;
        *(long **)(puVar7 + -0x68) = plVar16;
        lVar18 = plVar16[0xd];
        if (lVar18 == 0) {
          puVar29 = puVar7 + -0x68;
          lVar13 = 1;
        }
        else {
          lVar13 = *(long *)(lVar18 + 0x18);
          if (lVar13 == 0) {
            return plVar16;
          }
          puVar29 = (undefined1 *)(lVar18 + 0x20);
        }
        lVar18 = 0;
        do {
          lVar14 = *(long *)(puVar29 + lVar18 * 8);
          pcVar5 = *(code **)(lVar14 + 0x10);
          plVar11 = *(long **)(lVar14 + 0x20);
          lVar14 = *(long *)(lVar14 + 0x28);
          if (*(short *)(lVar14 + 0x48) == -1) {
            func_0x00f78ad8(lVar14);
          }
          iVar9 = func_0x00f78a4c(lVar14);
          bVar8 = *(char *)(lVar14 + 0x4a) == '\x03';
          if (iVar9 == 0) {
            if (bVar8) {
              if (plVar11 == (long *)0x0) {
code_r0x01e7173c:
                plVar11 = (long *)(*pcVar5)(plVar19,1,uVar21,lVar14);
              }
              else {
                if (((*(short *)(lVar14 + 0x48) == -1) || ((*(byte *)(*plVar11 + 0x115) & 1) != 0))
                   || (plVar16[3] == 0)) goto code_r0x01e7162c;
                iVar9 = func_0x00f78a44(lVar14);
                iVar10 = func_0x00f78ec0(lVar14);
                if (iVar9 == 0) {
                  uVar4 = *(ushort *)(lVar14 + 0x48);
                  if (iVar10 == 0) {
                    lVar14 = *plVar11 + (ulong)uVar4 * 0x10;
                    plVar11 = (long *)(**(code **)(lVar14 + 0x138))
                                                (plVar11,plVar19,1,uVar21,
                                                 *(undefined8 *)(lVar14 + 0x140));
                    goto code_r0x01e71750;
                  }
                  lVar14 = func_0x00f78a48(lVar14);
                  lVar20 = *plVar11;
                  uVar24 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar24 != 0) {
                    piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == lVar14) {
                        puVar12 = (undefined8 *)
                                  (lVar20 + (long)(int)(*piVar22 + (uint)uVar4) * 0x10 + 0x138);
                        goto code_r0x01e718f4;
                      }
                      piVar22 = piVar22 + 4;
                      uVar24 = uVar24 - 1;
                    } while (uVar24 != 0);
                  }
                  puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,lVar14,(ulong)uVar4);
code_r0x01e718f4:
                  pcVar5 = (code *)*puVar12;
                  puVar12 = (undefined8 *)puVar12[1];
                }
                else {
                  if (iVar10 == 0) {
                    uVar23 = *(undefined8 *)
                              (*plVar11 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar20 = *plVar11;
                    uVar24 = (ulong)*(ushort *)(lVar20 + 0x12a);
                    if (uVar24 != 0) {
                      piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar22 + -2) == *(long *)(lVar14 + 0x18)) {
                          lVar20 = lVar20 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar14 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e718cc;
                        }
                        piVar22 = piVar22 + 4;
                        uVar24 = uVar24 - 1;
                      } while (uVar24 != 0);
                    }
                    lVar20 = func_0x00fac1f0(plVar11);
code_r0x01e718cc:
                    uVar23 = *(undefined8 *)(lVar20 + 8);
                  }
                  puVar12 = (undefined8 *)func_0x00f78acc(uVar23,lVar14);
                  pcVar5 = (code *)*puVar12;
                }
                plVar11 = (long *)(*pcVar5)(plVar11,plVar19,1,uVar21,puVar12);
              }
            }
            else {
              if ((*(short *)(lVar14 + 0x48) == -1) || (plVar16[3] == 0)) goto code_r0x01e7173c;
              iVar9 = func_0x00f78a44(lVar14);
              iVar10 = func_0x00f78ec0(lVar14);
              if (iVar9 == 0) {
                uVar4 = *(ushort *)(lVar14 + 0x48);
                if (iVar10 == 0) {
                  lVar14 = *plVar19 + (ulong)uVar4 * 0x10;
                  plVar11 = (long *)(**(code **)(lVar14 + 0x138))
                                              (plVar19,1,uVar21,*(undefined8 *)(lVar14 + 0x140));
                  goto code_r0x01e71750;
                }
                lVar14 = func_0x00f78a48(lVar14);
                lVar20 = *plVar19;
                uVar24 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar24 != 0) {
                  piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar22 + -2) == lVar14) {
                      puVar12 = (undefined8 *)
                                (lVar20 + (long)(int)(*piVar22 + (uint)uVar4) * 0x10 + 0x138);
                      goto code_r0x01e71880;
                    }
                    piVar22 = piVar22 + 4;
                    uVar24 = uVar24 - 1;
                  } while (uVar24 != 0);
                }
                puVar12 = (undefined8 *)func_0x00fac1f0(plVar19,lVar14,(ulong)uVar4);
code_r0x01e71880:
                pcVar5 = (code *)*puVar12;
                puVar12 = (undefined8 *)puVar12[1];
              }
              else {
                if (iVar10 == 0) {
                  uVar23 = *(undefined8 *)
                            (*plVar19 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar20 = *plVar19;
                  uVar24 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar24 != 0) {
                    piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar22 + -2) == *(long *)(lVar14 + 0x18)) {
                        lVar20 = lVar20 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar14 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71858;
                      }
                      piVar22 = piVar22 + 4;
                      uVar24 = uVar24 - 1;
                    } while (uVar24 != 0);
                  }
                  lVar20 = func_0x00fac1f0(plVar19);
code_r0x01e71858:
                  uVar23 = *(undefined8 *)(lVar20 + 8);
                }
                puVar12 = (undefined8 *)func_0x00f78acc(uVar23,lVar14);
                pcVar5 = (code *)*puVar12;
              }
              plVar11 = (long *)(*pcVar5)(plVar19,1,uVar21,puVar12);
            }
          }
          else {
            if (bVar8) goto code_r0x01e7173c;
code_r0x01e7162c:
            plVar11 = (long *)(*pcVar5)(plVar11,plVar19,1,uVar21,lVar14);
          }
code_r0x01e71750:
          lVar18 = lVar18 + 1;
          if (lVar18 == lVar13) {
            return plVar11;
          }
        } while( true );
      }
    }
  }
  plVar16 = (long *)func_0x00f78af4();
  *(undefined8 *)((long)pplVar6 + -0x280) = uVar23;
  *(undefined8 *)((long)pplVar6 + -0x278) = uVar26;
  *(long *)((long)pplVar6 + -0x270) = auVar35._8_8_;
  *(long *)((long)pplVar6 + -0x268) = auVar35._0_8_;
  *(undefined1 **)((long)pplVar6 + -0x260) = puVar29;
  *(undefined **)((long)pplVar6 + -600) = &Atlas_Contexts_RoundResultsState___ctor;
  if ((bRam0000000003eb4c10 & 1) == 0) {
    func_0x00f78a20(0x3d40648);
    bRam0000000003eb4c10 = 1;
  }
  if (plVar16 == (long *)0x0) {
    *(undefined8 *)((long)pplVar6 + -0x260) = *(undefined8 *)((long)pplVar6 + -0x260);
    *(undefined8 *)((long)pplVar6 + -600) = *(undefined8 *)((long)pplVar6 + -600);
    auVar34 = func_0x00f78af4(0,uRam0000000003d40648);
    plVar16 = auVar34._0_8_;
    plVar16[2] = *plVar11;
    plVar16[4] = auVar34._8_8_;
    plVar16[5] = (long)plVar11;
    return plVar16;
  }
  return plVar16;
}



// ============================================================
// RVA: 0x14e5da8 | Atlas.Contexts.RoundResultsState.RequestResultsFinish
// ============================================================

/* WARNING: Possible PIC construction at 0x014e6854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e6858) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Contexts_RoundResultsState__RequestResultsFinish
                 (long *param_1,long param_2,long *param_3)

{
  short sVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  code *pcVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined8 **ppuVar12;
  ulong uVar13;
  undefined8 *****pppppuVar14;
  ulong *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 ***extraout_x1;
  uint uVar24;
  undefined8 ****ppppuVar25;
  long lVar26;
  long lVar27;
  int *piVar28;
  undefined8 ***pppuVar29;
  undefined8 ***pppuVar30;
  ulong uVar31;
  undefined8 uVar32;
  uint uVar33;
  undefined8 *unaff_x23;
  undefined8 ******unaff_x24;
  undefined8 unaff_x27;
  undefined1 *puVar34;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar35;
  undefined *puVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  int aiStack_340 [4];
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  int aiStack_2b4 [5];
  long lStack_270;
  undefined8 *puStack_268;
  long *plStack_260;
  undefined8 *puStack_258;
  long *******ppppppplStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 *puStack_230;
  long lStack_228;
  long *******ppppppplStack_220;
  undefined8 *puStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  long *plStack_1f8;
  undefined8 *******pppppppuStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 ******ppppppuStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  undefined8 ******ppppppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 ******ppppppuStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  undefined8 *****pppppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 ******ppppppuStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 ***pppuStack_108;
  undefined8 ***pppuStack_100;
  long *plStack_f8;
  long ***ppplStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 uStack_98;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  if ((char)param_1[0x17] != '\0') {
    return param_1;
  }
  plVar10 = param_1;
  if (param_2 == 0) {
LAB_014e5ddc:
    *(undefined1 *)(param_1 + 0x17) = 1;
    return plVar10;
  }
  plVar10 = *(long **)(param_2 + 0x20);
  if (plVar10 != (long *)0x0) {
    plVar10 = (long *)(**(code **)(*plVar10 + 0x228))(plVar10,*(undefined8 *)(*plVar10 + 0x230));
    goto LAB_014e5ddc;
  }
  lVar11 = func_0x00f78af4();
  puStack_28 = &Atlas_Contexts_RoundResultsState__BackOut;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4c0c & 1) == 0) {
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb4c0c = 1;
  }
  if (*(long *)(lVar11 + 0xa0) != 0) {
    /*Atlas.UI.VotingManager$$VotingFinished*/ func_0x0152a194(*(long *)(lVar11 + 0xa0),0);
    uVar22 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
    lVar11 = *(long *)(lVar11 + 0xa8);
    if (lVar11 != 0) {
      cVar2 = *(char *)(lVar11 + 0x50);
      if (cVar2 == '\0') {
        *(undefined1 *)(lVar11 + 0x50) = 1;
        *(undefined8 *)(lVar11 + 0x40) = uVar22;
        *(undefined8 *)(lVar11 + 0x48) = 0;
      }
      return (long *)(ulong)(cVar2 == '\0');
    }
  }
  func_0x00f78af4();
  puStack_48 = &Atlas_Contexts_RoundResultsState__UpdateEntryPreviousPositions;
  pppuVar30 = (undefined8 ***)0x3eb4000;
  plVar10 = param_3;
  ppuStack_50 = &puStack_30;
  if ((bRam0000000003eb4c08 & 1) == 0) {
    func_0x00f78a20(0x3d2cf38);
    func_0x00f78a20(0x3d1b978);
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3d168);
    func_0x00f78a20(0x3d3b5c0);
    func_0x00f78a20(0x3d3d178);
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3d188);
    func_0x00f78a20(0x3d3d190);
    func_0x00f78a20(0x3d63bc0);
    func_0x00f78a20(0x3d289f8);
    bRam0000000003eb4c08 = 1;
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  pppuStack_a0 = (undefined8 ***)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  ppuVar12 = extraout_x1[3];
  if ((ppuVar12 != (undefined8 **)0x0) && (0 < *(int *)(ppuVar12 + 3))) {
    /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(&uStack_e0,ppuVar12,uRam0000000003d3b5c0);
    uStack_a8 = uStack_d8;
    uStack_b0 = uStack_e0;
    uStack_98 = uStack_c8;
    pppuStack_a0 = pppuStack_d0;
    uVar24 = 1;
    while( true ) {
      uVar13 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(&uStack_b0,uRam0000000003d32b98);
      if ((uVar13 & 1) == 0) {
        plVar10 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_b0,uRam0000000003d32b90);
        return plVar10;
      }
      if (param_3 == (long *)0x0) break;
      /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(param_3,(ulong)uVar24 | (long)pppuStack_a0 << 0x20,(ulong)pppuStack_a0 >> 0x20
                      ,uRam0000000003d3d168);
      uVar24 = uVar24 + 1;
    }
    func_0x00f78af4();
code_r0x014e6194:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x14e6198);
    (*pcVar5)();
  }
  pppuVar29 = extraout_x1;
  if (extraout_x1[1] == (undefined8 **)0x0) goto code_r0x014e6198;
  unaff_x24 = (undefined8 ******)0x3d289f8;
  unaff_x23 = (undefined8 *)0x3d3d178;
  /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(&uStack_e0,extraout_x1[1],uRam0000000003d3b5c0);
  uStack_a8 = uStack_d8;
  uStack_b0 = uStack_e0;
  uStack_98 = uStack_c8;
  pppuStack_a0 = pppuStack_d0;
  while (uVar13 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(&uStack_b0,uRam0000000003d32b98), pppuVar29 = pppuStack_a0,
        (uVar13 & 1) != 0) {
    plVar10 = &uStack_c0;
    uVar13 = /*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(extraout_x1,pppuStack_a0,plVar10,0);
    pppuVar30 = pppuVar29;
    if ((uVar13 & 1) != 0) {
      if (param_3 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014e6194;
      }
      plVar10 = (long *)(ulong)(uint)((int)((ulong)pppuVar29 >> 0x20) - uStack_c0._4_4_);
      /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(param_3,(long)pppuVar29 << 0x20,plVar10,uRam0000000003d3d168);
    }
  }
  /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_b0,uRam0000000003d32b90);
  do {
    pppppuVar14 = *unaff_x24;
    if (((*(ushort *)((long)pppppuVar14 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(pppppuVar14 + 0x1c) == 0)) {
      func_0x00f78ad0();
      pppppuVar14 = *unaff_x24;
    }
    ppppuVar25 = pppppuVar14[0x17];
    pppuVar29 = ppppuVar25[1];
    if (pppuVar29 == (undefined8 ***)0x0) {
      if (((*(ushort *)((long)pppppuVar14 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(pppppuVar14 + 0x1c) == 0)) {
        func_0x00f78ad0();
        ppppuVar25 = (*unaff_x24)[0x17];
      }
      pppuVar30 = *ppppuVar25;
      pppuVar29 = (undefined8 ***)func_0x00f78aec(/*System.Comparison<EndOfRoundScreen.LeaderboardEntry>_TypeInfo*/ uRam0000000003d1b978);
      plVar10 = plRam0000000003d63bc0;
      /*System.Comparison<EndOfRoundScreen.LeaderboardEntry>$$.ctor*/ func_0x01dc71e8(pppuVar29,pppuVar30,plRam0000000003d63bc0,uRam0000000003d2cf38);
      (*unaff_x24)[0x17][1] = pppuVar29;
    }
    if (param_3 != (long *)0x0) {
      plVar10 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Sort*/ func_0x025212a4(param_3,pppuVar29,*unaff_x23);
      uVar13 = (ulong)*(uint *)(param_3 + 3);
      if ((int)*(uint *)(param_3 + 3) < 1) {
        return plVar10;
      }
      lVar11 = 0;
      uVar31 = 0;
      do {
        if ((uVar13 & 0xffffffff) <= uVar31) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar31 = uVar31 + 1;
        plVar10 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(param_3,(int)uVar31 + -1,
                                          uVar31 | (ulong)*(uint *)(param_3[2] + lVar11 + 0x24) <<
                                                   0x20,*(undefined8 *)(param_3[2] + lVar11 + 0x28),
                                          uRam0000000003d3d190);
        uVar13 = (ulong)(int)param_3[3];
        lVar11 = lVar11 + 0x10;
      } while ((long)uVar31 < (long)uVar13);
      return plVar10;
    }
code_r0x014e6198:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014e620c;
    puVar15 = (ulong *)___cxa_begin_catch();
    pppuVar29 = (undefined8 ***)*puVar15;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_b0,uRam0000000003d32b90);
  } while (pppuVar29 == (undefined8 ***)0x0);
  func_0x00f78ac0(pppuVar29,0);
code_r0x014e620c:
  auVar37 = __Unwind_Resume();
  plVar16 = auVar37._0_8_;
  ppppppuStack_120 = unaff_x24;
  puStack_118 = unaff_x23;
  uStack_110 = 0x3d32b90;
  pppuStack_108 = pppuVar30;
  pppuStack_100 = pppuVar29;
  plStack_f8 = param_3;
  ppplStack_f0 = (long ***)&ppuStack_50;
  puStack_e8 = &Atlas_Contexts_RoundResultsState__UpdateEntryStarDeltas;
  plVar17 = plVar10;
  if ((bRam0000000003eb4c09 & 1) == 0) {
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    plVar16 = (long *)func_0x00f78a20(0x3d3d190);
    bRam0000000003eb4c09 = 1;
  }
  uStack_128 = 0;
  uStack_130 = 0;
  if (plVar10 != (long *)0x0) {
    uVar13 = (ulong)*(uint *)(plVar10 + 3);
    if (0 < (int)*(uint *)(plVar10 + 3)) {
      lVar11 = 0;
      uVar31 = 0;
      do {
        if ((uVar13 & 0xffffffff) <= uVar31) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar16 = (long *)/*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(auVar37._8_8_,*(undefined4 *)(plVar10[2] + lVar11 + 0x24),
                                          &uStack_130,0);
        if ((int)plVar16 != 0) {
          if (*(uint *)(plVar10 + 3) <= uVar31) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar16 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar10,uVar31,
                                            *(undefined8 *)(plVar10[2] + lVar11 + 0x20),
                                            *(undefined4 *)(plVar10[2] + lVar11 + 0x28),
                                            uRam0000000003d3d190);
        }
        uVar31 = uVar31 + 1;
        uVar13 = (ulong)(int)plVar10[3];
        lVar11 = lVar11 + 0x10;
      } while ((long)uVar31 < (long)uVar13);
    }
    return plVar16;
  }
  auVar38 = func_0x00f78af4();
  uVar22 = auVar38._8_8_;
  plVar16 = auVar38._0_8_;
  ppppppuStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  uStack_160 = 0x3d32b90;
  uStack_158 = 0x3eb4000;
  uStack_150 = auVar37._8_8_;
  plStack_148 = plVar10;
  pppppuStack_140 = (undefined8 *****)&ppplStack_f0;
  puStack_138 = &Atlas_Contexts_RoundResultsState__UpdateEntryCurrentStars;
  plVar10 = plVar17;
  if ((bRam0000000003eb4c0a & 1) == 0) {
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    plVar16 = (long *)func_0x00f78a20(0x3d3d190);
    bRam0000000003eb4c0a = 1;
  }
  uStack_178 = 0;
  uStack_180 = 0;
  if (plVar17 != (long *)0x0) {
    uVar13 = (ulong)*(uint *)(plVar17 + 3);
    if (0 < (int)*(uint *)(plVar17 + 3)) {
      uVar31 = 0;
      lVar11 = 0x20;
      do {
        if ((uVar13 & 0xffffffff) <= uVar31) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar16 = (long *)/*Core.Networking.NetworkTournament$$GetTotalNetworkScore*/ func_0x01660f34(uVar22,*(undefined4 *)(plVar17[2] + lVar11 + 4),
                                          &uStack_180,0);
        if ((int)plVar16 != 0) {
          if (*(uint *)(plVar17 + 3) <= uVar31) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar16 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar17,uVar31,*(undefined8 *)(plVar17[2] + lVar11),
                                            uStack_180._4_4_,uRam0000000003d3d190);
        }
        uVar31 = uVar31 + 1;
        uVar13 = (ulong)(int)plVar17[3];
        lVar11 = lVar11 + 0x10;
      } while ((long)uVar31 < (long)uVar13);
    }
    return plVar16;
  }
  auVar37 = func_0x00f78af4();
  plVar16 = auVar37._8_8_;
  puVar18 = auVar37._0_8_;
  plVar6 = &uStack_1e0;
  uStack_1b0 = 0x3d32b90;
  uStack_1a8 = 0x3eb4000;
  puStack_188 = &Atlas_Contexts_RoundResultsState__SortEntriesByStarCountFromTournamentData;
  ppppppuStack_1c0 = unaff_x24;
  puStack_1b8 = unaff_x23;
  uStack_1a0 = uVar22;
  plStack_198 = plVar17;
  ppppppuStack_190 = &pppppuStack_140;
  if ((bRam0000000003eb4c0b & 1) == 0) {
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3d168);
    func_0x00f78a20(0x3d3d170);
    func_0x00f78a20(0x3d3b5c0);
    bRam0000000003eb4c0b = 1;
  }
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  if (plVar16 != (long *)0x0) {
    /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Clear*/ func_0x0251f970(plVar16,uRam0000000003d3d170);
    if (puVar18[1] != 0) {
      /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(&uStack_1e0,puVar18[1],uRam0000000003d3b5c0);
      uVar24 = 1;
      while (uVar13 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(&uStack_1e0,uRam0000000003d32b98), (uVar13 & 1) != 0) {
        /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(plVar16,(ulong)uVar24 | uStack_1d0 << 0x20,uStack_1d0 >> 0x20,
                        uRam0000000003d3d168);
        uVar24 = uVar24 + 1;
      }
      plVar10 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_1e0,uRam0000000003d32b90);
      return plVar10;
    }
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar16 = (long *)___cxa_begin_catch();
    plVar16 = (long *)*plVar16;
    ___cxa_end_catch();
    plVar17 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_1e0,*puVar18);
    if (plVar16 == (long *)0x0) {
      return plVar17;
    }
    func_0x00f78ac0(plVar16,0);
  }
  lVar11 = __Unwind_Resume();
  lStack_210 = 0x3d32b90;
  uStack_208 = 0x3eb4000;
  puStack_1e8 = &Atlas_Contexts_RoundResultsState__OnResultsFinished;
  puStack_200 = puVar18;
  plStack_1f8 = plVar16;
  pppppppuStack_1f0 = &ppppppuStack_190;
  if ((bRam0000000003eb4c0e & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d27638);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d40658);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4c0e = 1;
  }
  uVar32 = 0x3d40650;
  iVar8 = Atlas_Contexts_RoundResultsState__IsTournamentOver(lVar11);
  uVar22 = uVar32;
  if (iVar8 == 0) {
    puVar18 = *(undefined8 **)(lVar11 + 0xa0);
    lVar26 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar11,uRam0000000003d40650);
    lVar19 = lStack_210;
    if ((lVar26 != 0) && (puVar18 != (undefined8 *)0x0)) {
      plVar10 = *(long **)(lVar26 + 0x10);
      puVar23 = (undefined8 *)0x3eb4000;
      ppppppplStack_220 = (long *******)unaff_x24;
      puStack_218 = unaff_x23;
      if ((bRam0000000003eb4e73 & 1) == 0) {
        func_0x00f78a20(0x3d3b110,plVar10,0);
        func_0x00f78a20(0x3d1f498);
        func_0x00f78a20(0x3d66320);
        func_0x00f78a20(0x3d663f8);
        func_0x00f78a20(0x3d66300);
        func_0x00f78a20(0x3d66318);
        func_0x00f78a20(0x3d663f0);
        func_0x00f78a20(0x3d6b9f8);
        bRam0000000003eb4e73 = 1;
      }
      puStack_230 = (undefined8 *)0x0;
      lStack_228 = 0;
      uStack_238 = 0;
      if (puVar18[4] == 0) {
code_r0x0152a8c4:
        plVar17 = plVar10;
        func_0x00f78af4();
code_r0x0152a8c8:
        uVar22 = func_0x00f78b24();
code_r0x0152a8d4:
        puVar36 = &Atlas_UI_VotingManager__FilterMapsFromTournament;
        auVar37 = func_0x00f78ac0(uVar22,0);
      }
      else {
        plVar17 = (long *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(puVar18[4],0);
        if ((int)plVar17 == 0) {
          return plVar17;
        }
        if ((puVar18[0x16] == 0) ||
           (/*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(puVar18[0x16],puVar18[0x1c],0), plVar10 == (long *)0x0))
        goto code_r0x0152a8c4;
        auVar37._8_8_ = puVar18[0x1c];
        auVar37._0_8_ = puVar18;
        if ((int)plVar10[2] != 2) {
          /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(puVar18,puVar18[0x1c],&lStack_228,&puStack_230);
          if ((((puVar18[0x1c] == 0) ||
               (/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(puVar18[0x1c],uRam0000000003d3b110), lVar19 = lStack_228,
               lStack_228 == 0)) || (puVar18[5] == 0)) ||
             ((/*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar18[5],*(undefined8 *)(lStack_228 + 0x18),(long)&uStack_238 + 2,0
                              ), puVar23 = puStack_230, puStack_230 == (undefined8 *)0x0 ||
              (puVar18[5] == 0)))) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar18[5],puStack_230[3],&uStack_238,0);
          if (puVar18[0x16] == 0) goto code_r0x0152a8c4;
          uVar22 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(puVar18[0x16],lVar19,0);
          if (puVar18[5] == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar18[5],uVar22,(long)&uStack_238 + 6,0);
          if (puVar18[0x16] == 0) goto code_r0x0152a8c4;
          uVar22 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(puVar18[0x16],puVar23,0);
          if (puVar18[5] == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar18[5],uVar22,(long)&uStack_238 + 4,0);
          plVar17 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0xc);
          if (plVar17 == (long *)0x0) goto code_r0x0152a8c4;
          if ((/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8 != 0) &&
             (lVar11 = func_0x00f78adc(/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8,*(undefined8 *)(*plVar17 + 0x40)),
             lVar11 == 0)) goto code_r0x0152a8d0;
          uVar13 = plVar17[3];
          if ((int)uVar13 == 0) goto code_r0x0152a8c8;
          plVar17[4] = /*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8;
          lVar19 = *(long *)(lVar19 + 0x18);
          if (lVar19 != 0) {
            lVar11 = func_0x00f78adc(lVar19,*(undefined8 *)(*plVar17 + 0x40));
            if (lVar11 == 0) goto code_r0x0152a8d0;
            uVar13 = plVar17[3];
          }
          if ((uVar13 & 0xfffffffe) == 0) goto code_r0x0152a8c8;
          plVar17[5] = lVar19;
          lVar19 = 0x3d66300;
          lVar11 = 0x3d66300;
          if (/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300 != 0) {
            lVar26 = func_0x00f78adc(/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300,*(undefined8 *)(*plVar17 + 0x40));
            if (lVar26 == 0) goto code_r0x0152a8d0;
            uVar13 = plVar17[3];
          }
          if ((uint)uVar13 < 3) goto code_r0x0152a8c8;
          plVar17[6] = /*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300;
          puVar23 = (undefined8 *)puVar23[3];
          if (puVar23 != (undefined8 *)0x0) {
            lVar26 = func_0x00f78adc(puVar23,*(undefined8 *)(*plVar17 + 0x40));
            if (lVar26 == 0) goto code_r0x0152a8d0;
            uVar13 = plVar17[3];
          }
          uVar24 = (uint)uVar13;
          if ((uVar13 & 0xfffffffc) == 0) goto code_r0x0152a8c8;
          plVar17[7] = (long)puVar23;
          puVar23 = (undefined8 *)0x3d663f0;
          lVar19 = lVar11;
          if (/*STR(' typeKey1: ')*/ lRam0000000003d663f0 != 0) {
            lVar11 = func_0x00f78adc(/*STR(' typeKey1: ')*/ lRam0000000003d663f0,*(undefined8 *)(*plVar17 + 0x40));
            if (lVar11 == 0) goto code_r0x0152a8d0;
            uVar24 = (uint)plVar17[3];
          }
          if (uVar24 < 5) goto code_r0x0152a8c8;
          plVar17[8] = /*STR(' typeKey1: ')*/ lRam0000000003d663f0;
          puVar23 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_238 + 6,0);
          if ((puVar23 == (undefined8 *)0x0) ||
             (lVar11 = func_0x00f78adc(puVar23,*(undefined8 *)(*plVar17 + 0x40)), lVar11 != 0)) {
            uVar24 = *(uint *)(plVar17 + 3);
            if (5 < uVar24) {
              plVar17[9] = (long)puVar23;
              puVar23 = (undefined8 *)0x3d663f8;
              if (/*STR(' typeKey2: ')*/ lRam0000000003d663f8 != 0) {
                lVar11 = func_0x00f78adc(/*STR(' typeKey2: ')*/ lRam0000000003d663f8,*(undefined8 *)(*plVar17 + 0x40));
                if (lVar11 == 0) goto code_r0x0152a8d0;
                uVar24 = *(uint *)(plVar17 + 3);
              }
              if (6 < uVar24) {
                plVar17[10] = /*STR(' typeKey2: ')*/ lRam0000000003d663f8;
                puVar23 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_238 + 4,0);
                if ((puVar23 != (undefined8 *)0x0) &&
                   (lVar11 = func_0x00f78adc(puVar23,*(undefined8 *)(*plVar17 + 0x40)), lVar11 == 0)
                   ) goto code_r0x0152a8d0;
                uVar24 = (uint)plVar17[3];
                if ((plVar17[3] & 0xfffffff8U) != 0) {
                  plVar17[0xb] = (long)puVar23;
                  puVar23 = (undefined8 *)0x3d66318;
                  if (/*STR(' mapKey1: ')*/ lRam0000000003d66318 != 0) {
                    lVar11 = func_0x00f78adc(/*STR(' mapKey1: ')*/ lRam0000000003d66318,*(undefined8 *)(*plVar17 + 0x40));
                    if (lVar11 == 0) goto code_r0x0152a8d0;
                    uVar24 = (uint)plVar17[3];
                  }
                  if (8 < uVar24) {
                    plVar17[0xc] = /*STR(' mapKey1: ')*/ lRam0000000003d66318;
                    puVar23 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_238 + 2,0);
                    if ((puVar23 != (undefined8 *)0x0) &&
                       (lVar11 = func_0x00f78adc(puVar23,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar11 == 0)) goto code_r0x0152a8d0;
                    uVar24 = *(uint *)(plVar17 + 3);
                    if (9 < uVar24) {
                      plVar17[0xd] = (long)puVar23;
                      puVar23 = (undefined8 *)0x3d66320;
                      if (/*STR(' mapKey2: ')*/ lRam0000000003d66320 != 0) {
                        lVar11 = func_0x00f78adc(/*STR(' mapKey2: ')*/ lRam0000000003d66320,
                                                 *(undefined8 *)(*plVar17 + 0x40));
                        if (lVar11 == 0) goto code_r0x0152a8d0;
                        uVar24 = *(uint *)(plVar17 + 3);
                      }
                      if (10 < uVar24) {
                        plVar17[0xe] = /*STR(' mapKey2: ')*/ lRam0000000003d66320;
                        puVar23 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c(&uStack_238,0);
                        if ((puVar23 != (undefined8 *)0x0) &&
                           (lVar11 = func_0x00f78adc(puVar23,*(undefined8 *)(*plVar17 + 0x40)),
                           lVar11 == 0)) goto code_r0x0152a8d0;
                        if (0xb < *(uint *)(plVar17 + 3)) {
                          plVar17[0xf] = (long)puVar23;
                          /*System.String$$Concat*/ func_0x029cfadc(plVar17,0);
                          plVar10 = plVar17;
                          if ((puVar18[4] != 0) &&
                             (plVar17 = *(long **)(puVar18[4] + 0x20), plVar17 != (long *)0x0)) {
                            plVar10 = (long *)(**(code **)(*plVar17 + 0x1c8))
                                                        (plVar17,(long)uStack_238._2_2_,
                                                         (long)uStack_238._6_2_,
                                                         (long)(short)uStack_238,
                                                         (long)uStack_238._4_2_,&UNK_00001770,
                                                         *(undefined8 *)(*plVar17 + 0x1d0));
                            return plVar10;
                          }
                          goto code_r0x0152a8c4;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto code_r0x0152a8c8;
          }
code_r0x0152a8d0:
          uVar22 = func_0x00f78b14();
          goto code_r0x0152a8d4;
        }
        puVar36 = &UNK_0152a520;
        plVar17 = plVar10;
      }
      uVar31 = auVar37._0_8_;
      uVar13 = 0x3eb4000;
      lStack_270 = lVar19;
      puStack_268 = puVar23;
      plStack_260 = plVar17;
      puStack_258 = puVar18;
      ppppppplStack_250 = (long *******)&pppppppuStack_1f0;
      puStack_248 = (undefined8 *)puVar36;
      if ((bRam0000000003eb4e75 & 1) == 0) {
        func_0x00f78a20(0x3d2e6f0);
        func_0x00f78a20(0x3d2e6f8);
        func_0x00f78a20(0x3d2e700);
        func_0x00f78a20(0x3d2e710);
        func_0x00f78a20(0x3d2e748);
        func_0x00f78a20(0x3d2e750);
        func_0x00f78a20(0x3d32bf0);
        func_0x00f78a20(0x3d32980);
        func_0x00f78a20(0x3d33d98);
        func_0x00f78a20(0x3d33da0);
        func_0x00f78a20(0x3d32988);
        func_0x00f78a20(0x3d32bf8);
        func_0x00f78a20(0x3d32c00);
        func_0x00f78a20(0x3d32990);
        func_0x00f78a20(0x3d33dd0);
        func_0x00f78a20(0x3d39240);
        func_0x00f78a20(0x3d39248);
        func_0x00f78a20(0x3d3b120);
        func_0x00f78a20(0x3d3b6b8);
        func_0x00f78a20(0x3d3b130);
        func_0x00f78a20(0x3d3b0f8);
        func_0x00f78a20(0x3d3b140);
        func_0x00f78a20(0x3d3b6c0);
        func_0x00f78a20(0x3d3b148);
        func_0x00f78a20(0x3d1db90);
        func_0x00f78a20(0x3d65ed8);
        func_0x00f78a20(0x3d66270);
        func_0x00f78a20(0x3d6cdb0);
        func_0x00f78a20(0x3d6cdc0);
        func_0x00f78a20(0x3d6cdb8);
        func_0x00f78a20(0x3d6cdc8);
        bRam0000000003eb4e75 = 1;
      }
      uStack_2c0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2e8 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      lStack_320 = 0;
      uStack_318 = 0;
      uStack_330 = 0;
      uStack_328 = 0;
      aiStack_340[3] = 0;
      if (*(long *)(uVar31 + 0xb8) != 0) {
        uVar13 = 0x3d1d000;
        /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(uVar31 + 0xb8),uRam0000000003d2e6f8);
        plVar17 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
        /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(plVar17,auVar37._8_8_,uRam0000000003d3b0f8);
        if (((*(long *)(uVar31 + 0x20) != 0) &&
            (lVar11 = *(long *)(*(long *)(uVar31 + 0x20) + 0x20), lVar11 != 0)) &&
           (lVar11 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar11,0), lVar11 != 0)) {
          uVar13 = 0x3d6c000;
          aiStack_2b4[0] = *(int *)(lVar11 + 0x18);
          uVar22 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_2b4,0);
          /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar22,0);
          if (((*(long *)(uVar31 + 0x20) != 0) &&
              (lVar11 = *(long *)(*(long *)(uVar31 + 0x20) + 0x20), lVar11 != 0)) &&
             (lVar11 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar11,0), lVar11 != 0)) {
            uVar13 = 0x3d32bf8;
            /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_368,lVar11,uRam0000000003d3b6b8);
            uStack_2d8 = uStack_360;
            uStack_2e0 = uStack_368;
            uStack_2c8 = uStack_350;
            uStack_2d0 = uStack_358;
            uStack_2c0 = uStack_348;
code_r0x0152aba4:
            uVar21 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_2e0,uRam0000000003d32bf8);
            if ((uVar21 & 1) != 0) {
              sVar4 = uStack_2c8._4_2_;
              sVar1 = (short)uStack_2c8;
              if (uStack_2c8._4_2_ != uStack_2d0._4_2_) {
                sVar1 = uStack_2d0._4_2_;
              }
              if (*(long *)(uVar31 + 0xb8) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              iVar8 = (int)sVar1;
              uVar21 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(uVar31 + 0xb8),iVar8,uRam0000000003d2e700);
              if ((uVar21 & 1) == 0) {
                if (*(long *)(uVar31 + 0xb8) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0152af9c;
                }
                /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(uVar31 + 0xb8),iVar8,0,uRam0000000003d2e6f0);
              }
              lVar11 = *(long *)(uVar31 + 0xb8);
              if (lVar11 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              aiStack_2b4[0] = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar11,iVar8,uRam0000000003d2e748);
              /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar11,iVar8,aiStack_2b4[0] + 1,uRam0000000003d2e750);
              if (*(long *)(uVar31 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar31 + 0x28),(int)sVar4,&uStack_2e8,0);
              if (plVar17 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar24 = *(uint *)(plVar17 + 3);
              if (0 < (int)uVar24) {
                uVar33 = 0;
                do {
                  if (uVar24 <= uVar33) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar11 = *(long *)(plVar17[2] + (long)(int)uVar33 * 8 + 0x20);
                  if (lVar11 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar21 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar11 + 0x18),uStack_2e8,0);
                  if ((uVar21 & 1) != 0) {
                    /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,uStack_2e8,0);
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar17,uVar33,uRam0000000003d3b130);
                    break;
                  }
                  uVar33 = uVar33 + 1;
                  uVar24 = *(uint *)(plVar17 + 3);
                } while ((int)uVar33 < (int)uVar24);
              }
              goto code_r0x0152aba4;
            }
            aiStack_340[0] = 0x136;
            /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_2e0,uRam0000000003d32bf0);
            aiStack_340[3] = 0;
            if (*(long *)(uVar31 + 0xb8) != 0) {
              /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_368,*(long *)(uVar31 + 0xb8),uRam0000000003d2e710);
              uStack_308 = uStack_360;
              uStack_310 = uStack_368;
              uStack_2f8 = uStack_350;
              uStack_300 = uStack_358;
code_r0x0152ad1c:
              uVar13 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_310,uRam0000000003d33da0);
              if ((uVar13 & 1) != 0) {
                if (*(int *)(uVar31 + 0x10) <= uStack_300._4_4_) {
                  if (*(long *)(uVar31 + 0x28) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar31 + 0x28),(int)(short)uStack_300,&uStack_318,0);
                  if (plVar17 == (long *)0x0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar24 = *(uint *)(plVar17 + 3);
                  if (0 < (int)uVar24) {
                    uVar33 = 0;
                    do {
                      if (uVar24 <= uVar33) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar11 = *(long *)(plVar17[2] + (long)(int)uVar33 * 8 + 0x20);
                      if (lVar11 == 0) {
                        func_0x00f78af4();
                        goto code_r0x0152af9c;
                      }
                      uVar13 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar11 + 0x18),uStack_318,0);
                      if ((uVar13 & 1) != 0) {
                        /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,uStack_318,0);
                        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar17,uVar33,uRam0000000003d3b130);
                        break;
                      }
                      uVar33 = uVar33 + 1;
                      uVar24 = *(uint *)(plVar17 + 3);
                    } while ((int)uVar33 < (int)uVar24);
                  }
                }
                goto code_r0x0152ad1c;
              }
              uVar31 = (ulong)(uint)aiStack_340[3];
              bVar7 = aiStack_340[3] != 0xffffffff;
              aiStack_340[3] = aiStack_340[3] + 1;
              uVar13 = (ulong)(uint)aiStack_340[3];
              aiStack_340[0] = 0x1d1;
              /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_310,uRam0000000003d33d98);
              if (bVar7) goto code_r0x0152ae34;
              uVar13 = 0;
              iVar8 = 0;
              if (plVar17 != (long *)0x0) goto code_r0x0152ae5c;
            }
          }
        }
      }
      do {
        func_0x00f78af4();
code_r0x0152ae34:
        if (aiStack_340[(int)(uint)uVar31] == 0x1d1) {
          uVar13 = uVar31;
          aiStack_340[3] = (uint)uVar31;
        }
        iVar8 = (int)uVar13;
      } while (plVar17 == (long *)0x0);
code_r0x0152ae5c:
      aiStack_2b4[0] = (int)plVar17[3];
      uVar22 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_2b4,0);
      uVar22 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar22,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_330,plVar17,uRam0000000003d3b120);
      while( true ) {
        uVar13 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_330,uRam0000000003d32988);
        if ((uVar13 & 1) == 0) {
          aiStack_340[iVar8] = 0x23d;
          aiStack_340[3] = aiStack_340[3] + 1;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_330,uRam0000000003d32980);
          if ((int)plVar17[3] < 2) {
            plVar17 = auVar37._8_8_;
          }
          return plVar17;
        }
        if (lStack_320 == 0) break;
        uVar22 = /*System.String$$Concat*/ func_0x029be39c(uVar22,*(undefined8 *)(lStack_320 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
      }
      func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x152afa0);
      (*pcVar5)();
    }
  }
  else {
    puVar18 = (undefined8 *)func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
    Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor(puVar18,0);
    lVar19 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar11,uRam0000000003d40650);
    uVar22 = 0x3d40650;
    if ((lVar19 != 0) && (puVar18 != (undefined8 *)0x0)) {
      puVar18[2] = *(undefined8 *)(lVar19 + 0x10);
      lVar19 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar11,uRam0000000003d40658);
      uVar22 = uVar32;
      if (lVar19 != 0) {
        puVar18[3] = *(undefined8 *)(lVar19 + 0x18);
        *(undefined1 *)(puVar18 + 4) = 1;
        uVar22 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ uRam0000000003d194d8;
        plVar17 = *(long **)(lVar11 + 0x78);
        if (((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar20 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar22,0);
        lVar11 = 0;
        plVar16 = plStack_1f8;
        puVar23 = puStack_200;
        uVar32 = uStack_208;
        lVar19 = lStack_210;
        pppppppuVar35 = pppppppuStack_1f0;
        puVar36 = puStack_1e8;
        if (plVar17 != (long *)0x0) goto code_r0x01e7159c;
      }
    }
  }
  auVar37 = func_0x00f78af4();
  plVar17 = auVar37._8_8_;
  lVar19 = auVar37._0_8_;
  plVar6 = &lStack_270;
  uStack_240 = 0x3d32b90;
  puStack_218 = (undefined8 *)&Atlas_Contexts_RoundResultsState__OnVoteStarted;
  ppppppplStack_250 = (long *******)unaff_x24;
  puStack_248 = unaff_x23;
  uStack_238 = uVar22;
  puStack_230 = puVar18;
  lStack_228 = lVar11;
  ppppppplStack_220 = (long *******)&pppppppuStack_1f0;
  if ((bRam0000000003eb4c0f & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d297a0);
    func_0x00f78a20(0x3d1a1a8);
    bRam0000000003eb4c0f = 1;
  }
  if (*(long *)(lVar19 + 0xa0) != 0) {
    puStack_268 = (undefined8 *)plVar17[1];
    lStack_270 = *plVar17;
    puStack_258 = (undefined8 *)plVar17[3];
    plStack_260 = (long *)plVar17[2];
    plVar10 = (long *)0x0;
    /*Atlas.UI.VotingManager$$SetVoteData*/ func_0x01529c00(*(long *)(lVar19 + 0xa0),&lStack_270);
    lVar11 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar19,uRam0000000003d40650);
    if (lVar11 != 0) {
      unaff_x23 = (undefined8 *)0x3d25000;
      uVar22 = *(undefined8 *)(lVar11 + 0x10);
      puVar18 = (undefined8 *)func_0x00f78aec(/*Atlas.Contexts.VotingState.VotingStateTransitionData_TypeInfo*/ uRam0000000003d297a0);
      plVar10 = (long *)((long)&MACH_HEADER.magic + 1);
      /*Atlas.Contexts.VotingState.VotingStateTransitionData$$.ctor*/ func_0x0156ebc8(puVar18,uVar22,1,0);
      uVar32 = /*Atlas.Contexts.VotingState_var*/ uRam0000000003d1a1a8;
      plVar17 = *(long **)(lVar19 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar20 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar32,0);
      if (plVar17 != (long *)0x0) {
        plVar16 = plVar17;
        puVar23 = puVar18;
        lVar19 = 0x3d1a000;
        pppppppuVar35 = &ppppppplStack_220;
        puVar36 = &UNK_014e6858;
code_r0x01e7159c:
        *(undefined8 *)((long)plVar6 + -0x60) = unaff_x28;
        *(undefined8 *)((long)plVar6 + -0x58) = unaff_x27;
        *(undefined8 *)((long)plVar6 + -0x50) = 0x3d3d168;
        *(undefined8 *)((long)plVar6 + -0x48) = 0x3d32b98;
        *(undefined8 *******)((long)plVar6 + -0x40) = unaff_x24;
        *(undefined8 **)((long)plVar6 + -0x38) = unaff_x23;
        *(long *)((long)plVar6 + -0x30) = lVar19;
        *(undefined8 *)((long)plVar6 + -0x28) = uVar32;
        *(undefined8 **)((long)plVar6 + -0x20) = puVar23;
        *(long **)((long)plVar6 + -0x18) = plVar16;
        *(undefined8 ********)((long)plVar6 + -0x10) = pppppppuVar35;
        *(undefined **)((long)plVar6 + -8) = puVar36;
        *(long **)((long)plVar6 + -0x68) = plVar17;
        lVar11 = plVar17[0xd];
        if (lVar11 == 0) {
          puVar34 = (undefined1 *)((long)plVar6 + -0x68);
          lVar19 = 1;
        }
        else {
          lVar19 = *(long *)(lVar11 + 0x18);
          if (lVar19 == 0) {
            return plVar17;
          }
          puVar34 = (undefined1 *)(lVar11 + 0x20);
        }
        lVar11 = 0;
        do {
          lVar26 = *(long *)(puVar34 + lVar11 * 8);
          pcVar5 = *(code **)(lVar26 + 0x10);
          plVar10 = *(long **)(lVar26 + 0x20);
          lVar26 = *(long *)(lVar26 + 0x28);
          if (*(short *)(lVar26 + 0x48) == -1) {
            func_0x00f78ad8(lVar26);
          }
          iVar8 = func_0x00f78a4c(lVar26);
          bVar7 = *(char *)(lVar26 + 0x4a) == '\x03';
          if (iVar8 == 0) {
            if (bVar7) {
              if (plVar10 == (long *)0x0) {
code_r0x01e7173c:
                plVar10 = (long *)(*pcVar5)(plVar20,1,puVar18,lVar26);
              }
              else {
                if (((*(short *)(lVar26 + 0x48) == -1) || ((*(byte *)(*plVar10 + 0x115) & 1) != 0))
                   || (plVar17[3] == 0)) goto code_r0x01e7162c;
                iVar8 = func_0x00f78a44(lVar26);
                iVar9 = func_0x00f78ec0(lVar26);
                if (iVar8 == 0) {
                  uVar3 = *(ushort *)(lVar26 + 0x48);
                  if (iVar9 == 0) {
                    lVar26 = *plVar10 + (ulong)uVar3 * 0x10;
                    plVar10 = (long *)(**(code **)(lVar26 + 0x138))
                                                (plVar10,plVar20,1,puVar18,
                                                 *(undefined8 *)(lVar26 + 0x140));
                    goto code_r0x01e71750;
                  }
                  lVar26 = func_0x00f78a48(lVar26);
                  lVar27 = *plVar10;
                  uVar13 = (ulong)*(ushort *)(lVar27 + 0x12a);
                  if (uVar13 != 0) {
                    piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == lVar26) {
                        puVar23 = (undefined8 *)
                                  (lVar27 + (long)(int)(*piVar28 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e718f4;
                      }
                      piVar28 = piVar28 + 4;
                      uVar13 = uVar13 - 1;
                    } while (uVar13 != 0);
                  }
                  puVar23 = (undefined8 *)func_0x00fac1f0(plVar10,lVar26,(ulong)uVar3);
code_r0x01e718f4:
                  pcVar5 = (code *)*puVar23;
                  puVar23 = (undefined8 *)puVar23[1];
                }
                else {
                  if (iVar9 == 0) {
                    uVar22 = *(undefined8 *)
                              (*plVar10 + (ulong)*(ushort *)(lVar26 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar27 = *plVar10;
                    uVar13 = (ulong)*(ushort *)(lVar27 + 0x12a);
                    if (uVar13 != 0) {
                      piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar28 + -2) == *(long *)(lVar26 + 0x18)) {
                          lVar27 = lVar27 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar26 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e718cc;
                        }
                        piVar28 = piVar28 + 4;
                        uVar13 = uVar13 - 1;
                      } while (uVar13 != 0);
                    }
                    lVar27 = func_0x00fac1f0(plVar10);
code_r0x01e718cc:
                    uVar22 = *(undefined8 *)(lVar27 + 8);
                  }
                  puVar23 = (undefined8 *)func_0x00f78acc(uVar22,lVar26);
                  pcVar5 = (code *)*puVar23;
                }
                plVar10 = (long *)(*pcVar5)(plVar10,plVar20,1,puVar18,puVar23);
              }
            }
            else {
              if ((*(short *)(lVar26 + 0x48) == -1) || (plVar17[3] == 0)) goto code_r0x01e7173c;
              iVar8 = func_0x00f78a44(lVar26);
              iVar9 = func_0x00f78ec0(lVar26);
              if (iVar8 == 0) {
                uVar3 = *(ushort *)(lVar26 + 0x48);
                if (iVar9 == 0) {
                  lVar26 = *plVar20 + (ulong)uVar3 * 0x10;
                  plVar10 = (long *)(**(code **)(lVar26 + 0x138))
                                              (plVar20,1,puVar18,*(undefined8 *)(lVar26 + 0x140));
                  goto code_r0x01e71750;
                }
                lVar26 = func_0x00f78a48(lVar26);
                lVar27 = *plVar20;
                uVar13 = (ulong)*(ushort *)(lVar27 + 0x12a);
                if (uVar13 != 0) {
                  piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == lVar26) {
                      puVar23 = (undefined8 *)
                                (lVar27 + (long)(int)(*piVar28 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71880;
                    }
                    piVar28 = piVar28 + 4;
                    uVar13 = uVar13 - 1;
                  } while (uVar13 != 0);
                }
                puVar23 = (undefined8 *)func_0x00fac1f0(plVar20,lVar26,(ulong)uVar3);
code_r0x01e71880:
                pcVar5 = (code *)*puVar23;
                puVar23 = (undefined8 *)puVar23[1];
              }
              else {
                if (iVar9 == 0) {
                  uVar22 = *(undefined8 *)
                            (*plVar20 + (ulong)*(ushort *)(lVar26 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar27 = *plVar20;
                  uVar13 = (ulong)*(ushort *)(lVar27 + 0x12a);
                  if (uVar13 != 0) {
                    piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == *(long *)(lVar26 + 0x18)) {
                        lVar27 = lVar27 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar26 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71858;
                      }
                      piVar28 = piVar28 + 4;
                      uVar13 = uVar13 - 1;
                    } while (uVar13 != 0);
                  }
                  lVar27 = func_0x00fac1f0(plVar20);
code_r0x01e71858:
                  uVar22 = *(undefined8 *)(lVar27 + 8);
                }
                puVar23 = (undefined8 *)func_0x00f78acc(uVar22,lVar26);
                pcVar5 = (code *)*puVar23;
              }
              plVar10 = (long *)(*pcVar5)(plVar20,1,puVar18,puVar23);
            }
          }
          else {
            if (bVar7) goto code_r0x01e7173c;
code_r0x01e7162c:
            plVar10 = (long *)(*pcVar5)(plVar10,plVar20,1,puVar18,lVar26);
          }
code_r0x01e71750:
          lVar11 = lVar11 + 1;
          if (lVar11 == lVar19) {
            return plVar10;
          }
        } while( true );
      }
    }
  }
  plVar17 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4c10 & 1) == 0) {
    func_0x00f78a20(0x3d40648);
    bRam0000000003eb4c10 = 1;
  }
  if (plVar17 != (long *)0x0) {
    return plVar17;
  }
  auVar37 = func_0x00f78af4(0,uRam0000000003d40648);
  plVar17 = auVar37._0_8_;
  plVar17[2] = *plVar10;
  plVar17[4] = auVar37._8_8_;
  plVar17[5] = (long)plVar10;
  return plVar17;
}



// ============================================================
// RVA: 0x14e5df4 | Atlas.Contexts.RoundResultsState.BackOut
// ============================================================

/* WARNING: Possible PIC construction at 0x014e6854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e6858) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Contexts_RoundResultsState__BackOut(long param_1,undefined8 param_2,long *param_3)

{
  short sVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  code *pcVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 **ppuVar11;
  ulong uVar12;
  undefined8 *****pppppuVar13;
  long *plVar14;
  ulong *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 ***extraout_x1;
  uint uVar24;
  undefined8 ****ppppuVar25;
  long lVar26;
  long lVar27;
  int *piVar28;
  undefined8 ***pppuVar29;
  undefined8 ***pppuVar30;
  ulong uVar31;
  undefined8 uVar32;
  uint uVar33;
  undefined8 *unaff_x23;
  undefined8 ******unaff_x24;
  undefined8 unaff_x27;
  undefined1 *puVar34;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar35;
  undefined *puVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  int aiStack_320 [4];
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  int aiStack_294 [5];
  long lStack_250;
  undefined8 *puStack_248;
  long *plStack_240;
  undefined8 *puStack_238;
  long *******ppppppplStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  long lStack_208;
  long *******ppppppplStack_200;
  undefined8 *puStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  long *plStack_1d8;
  undefined8 *******pppppppuStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 ******ppppppuStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  undefined8 ******ppppppuStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 *****pppppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 ******ppppppuStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ***pppuStack_e0;
  long *plStack_d8;
  long ***ppplStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 ***pppuStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb4c0c & 1) == 0) {
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb4c0c = 1;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    /*Atlas.UI.VotingManager$$VotingFinished*/ func_0x0152a194(*(long *)(param_1 + 0xa0),0);
    uVar22 = /*STR('FrontEndContext')*/ uRam0000000003d6d050;
    lVar10 = *(long *)(param_1 + 0xa8);
    if (lVar10 != 0) {
      cVar2 = *(char *)(lVar10 + 0x50);
      if (cVar2 == '\0') {
        *(undefined1 *)(lVar10 + 0x50) = 1;
        *(undefined8 *)(lVar10 + 0x40) = uVar22;
        *(undefined8 *)(lVar10 + 0x48) = 0;
      }
      return (long *)(ulong)(cVar2 == '\0');
    }
  }
  func_0x00f78af4();
  puStack_28 = &Atlas_Contexts_RoundResultsState__UpdateEntryPreviousPositions;
  pppuVar30 = (undefined8 ***)0x3eb4000;
  plVar14 = param_3;
  puStack_30 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4c08 & 1) == 0) {
    func_0x00f78a20(0x3d2cf38);
    func_0x00f78a20(0x3d1b978);
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3d168);
    func_0x00f78a20(0x3d3b5c0);
    func_0x00f78a20(0x3d3d178);
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3d188);
    func_0x00f78a20(0x3d3d190);
    func_0x00f78a20(0x3d63bc0);
    func_0x00f78a20(0x3d289f8);
    bRam0000000003eb4c08 = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  pppuStack_80 = (undefined8 ***)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  ppuVar11 = extraout_x1[3];
  if ((ppuVar11 != (undefined8 **)0x0) && (0 < *(int *)(ppuVar11 + 3))) {
    /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(&uStack_c0,ppuVar11,uRam0000000003d3b5c0);
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_78 = uStack_a8;
    pppuStack_80 = pppuStack_b0;
    uVar24 = 1;
    while( true ) {
      uVar12 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(&uStack_90,uRam0000000003d32b98);
      if ((uVar12 & 1) == 0) {
        plVar14 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_90,uRam0000000003d32b90);
        return plVar14;
      }
      if (param_3 == (long *)0x0) break;
      /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(param_3,(ulong)uVar24 | (long)pppuStack_80 << 0x20,(ulong)pppuStack_80 >> 0x20
                      ,uRam0000000003d3d168);
      uVar24 = uVar24 + 1;
    }
    func_0x00f78af4();
code_r0x014e6194:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x14e6198);
    (*pcVar5)();
  }
  pppuVar29 = extraout_x1;
  if (extraout_x1[1] == (undefined8 **)0x0) goto code_r0x014e6198;
  unaff_x24 = (undefined8 ******)0x3d289f8;
  unaff_x23 = (undefined8 *)0x3d3d178;
  /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(&uStack_c0,extraout_x1[1],uRam0000000003d3b5c0);
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  uStack_78 = uStack_a8;
  pppuStack_80 = pppuStack_b0;
  while (uVar12 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(&uStack_90,uRam0000000003d32b98), pppuVar29 = pppuStack_80,
        (uVar12 & 1) != 0) {
    plVar14 = &uStack_a0;
    uVar12 = /*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(extraout_x1,pppuStack_80,plVar14,0);
    pppuVar30 = pppuVar29;
    if ((uVar12 & 1) != 0) {
      if (param_3 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014e6194;
      }
      plVar14 = (long *)(ulong)(uint)((int)((ulong)pppuVar29 >> 0x20) - uStack_a0._4_4_);
      /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(param_3,(long)pppuVar29 << 0x20,plVar14,uRam0000000003d3d168);
    }
  }
  /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_90,uRam0000000003d32b90);
  do {
    pppppuVar13 = *unaff_x24;
    if (((*(ushort *)((long)pppppuVar13 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(pppppuVar13 + 0x1c) == 0)) {
      func_0x00f78ad0();
      pppppuVar13 = *unaff_x24;
    }
    ppppuVar25 = pppppuVar13[0x17];
    pppuVar29 = ppppuVar25[1];
    if (pppuVar29 == (undefined8 ***)0x0) {
      if (((*(ushort *)((long)pppppuVar13 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(pppppuVar13 + 0x1c) == 0)) {
        func_0x00f78ad0();
        ppppuVar25 = (*unaff_x24)[0x17];
      }
      pppuVar30 = *ppppuVar25;
      pppuVar29 = (undefined8 ***)func_0x00f78aec(/*System.Comparison<EndOfRoundScreen.LeaderboardEntry>_TypeInfo*/ uRam0000000003d1b978);
      plVar14 = plRam0000000003d63bc0;
      /*System.Comparison<EndOfRoundScreen.LeaderboardEntry>$$.ctor*/ func_0x01dc71e8(pppuVar29,pppuVar30,plRam0000000003d63bc0,uRam0000000003d2cf38);
      (*unaff_x24)[0x17][1] = pppuVar29;
    }
    if (param_3 != (long *)0x0) {
      plVar14 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Sort*/ func_0x025212a4(param_3,pppuVar29,*unaff_x23);
      uVar12 = (ulong)*(uint *)(param_3 + 3);
      if ((int)*(uint *)(param_3 + 3) < 1) {
        return plVar14;
      }
      lVar10 = 0;
      uVar31 = 0;
      do {
        if ((uVar12 & 0xffffffff) <= uVar31) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar31 = uVar31 + 1;
        plVar14 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(param_3,(int)uVar31 + -1,
                                          uVar31 | (ulong)*(uint *)(param_3[2] + lVar10 + 0x24) <<
                                                   0x20,*(undefined8 *)(param_3[2] + lVar10 + 0x28),
                                          uRam0000000003d3d190);
        uVar12 = (ulong)(int)param_3[3];
        lVar10 = lVar10 + 0x10;
      } while ((long)uVar31 < (long)uVar12);
      return plVar14;
    }
code_r0x014e6198:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014e620c;
    puVar15 = (ulong *)___cxa_begin_catch();
    pppuVar29 = (undefined8 ***)*puVar15;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_90,uRam0000000003d32b90);
  } while (pppuVar29 == (undefined8 ***)0x0);
  func_0x00f78ac0(pppuVar29,0);
code_r0x014e620c:
  auVar37 = __Unwind_Resume();
  plVar16 = auVar37._0_8_;
  ppppppuStack_100 = unaff_x24;
  puStack_f8 = unaff_x23;
  uStack_f0 = 0x3d32b90;
  pppuStack_e8 = pppuVar30;
  pppuStack_e0 = pppuVar29;
  plStack_d8 = param_3;
  ppplStack_d0 = (long ***)&puStack_30;
  puStack_c8 = &Atlas_Contexts_RoundResultsState__UpdateEntryStarDeltas;
  plVar17 = plVar14;
  if ((bRam0000000003eb4c09 & 1) == 0) {
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    plVar16 = (long *)func_0x00f78a20(0x3d3d190);
    bRam0000000003eb4c09 = 1;
  }
  uStack_108 = 0;
  uStack_110 = 0;
  if (plVar14 != (long *)0x0) {
    uVar12 = (ulong)*(uint *)(plVar14 + 3);
    if (0 < (int)*(uint *)(plVar14 + 3)) {
      lVar10 = 0;
      uVar31 = 0;
      do {
        if ((uVar12 & 0xffffffff) <= uVar31) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar16 = (long *)/*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(auVar37._8_8_,*(undefined4 *)(plVar14[2] + lVar10 + 0x24),
                                          &uStack_110,0);
        if ((int)plVar16 != 0) {
          if (*(uint *)(plVar14 + 3) <= uVar31) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar16 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar14,uVar31,
                                            *(undefined8 *)(plVar14[2] + lVar10 + 0x20),
                                            *(undefined4 *)(plVar14[2] + lVar10 + 0x28),
                                            uRam0000000003d3d190);
        }
        uVar31 = uVar31 + 1;
        uVar12 = (ulong)(int)plVar14[3];
        lVar10 = lVar10 + 0x10;
      } while ((long)uVar31 < (long)uVar12);
    }
    return plVar16;
  }
  auVar38 = func_0x00f78af4();
  uVar22 = auVar38._8_8_;
  plVar16 = auVar38._0_8_;
  ppppppuStack_150 = unaff_x24;
  puStack_148 = unaff_x23;
  uStack_140 = 0x3d32b90;
  uStack_138 = 0x3eb4000;
  uStack_130 = auVar37._8_8_;
  plStack_128 = plVar14;
  pppppuStack_120 = (undefined8 *****)&ppplStack_d0;
  puStack_118 = &Atlas_Contexts_RoundResultsState__UpdateEntryCurrentStars;
  plVar14 = plVar17;
  if ((bRam0000000003eb4c0a & 1) == 0) {
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    plVar16 = (long *)func_0x00f78a20(0x3d3d190);
    bRam0000000003eb4c0a = 1;
  }
  uStack_158 = 0;
  uStack_160 = 0;
  if (plVar17 != (long *)0x0) {
    uVar12 = (ulong)*(uint *)(plVar17 + 3);
    if (0 < (int)*(uint *)(plVar17 + 3)) {
      uVar31 = 0;
      lVar10 = 0x20;
      do {
        if ((uVar12 & 0xffffffff) <= uVar31) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar16 = (long *)/*Core.Networking.NetworkTournament$$GetTotalNetworkScore*/ func_0x01660f34(uVar22,*(undefined4 *)(plVar17[2] + lVar10 + 4),
                                          &uStack_160,0);
        if ((int)plVar16 != 0) {
          if (*(uint *)(plVar17 + 3) <= uVar31) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar16 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar17,uVar31,*(undefined8 *)(plVar17[2] + lVar10),
                                            uStack_160._4_4_,uRam0000000003d3d190);
        }
        uVar31 = uVar31 + 1;
        uVar12 = (ulong)(int)plVar17[3];
        lVar10 = lVar10 + 0x10;
      } while ((long)uVar31 < (long)uVar12);
    }
    return plVar16;
  }
  auVar37 = func_0x00f78af4();
  plVar16 = auVar37._8_8_;
  puVar18 = auVar37._0_8_;
  plVar6 = &uStack_1c0;
  uStack_190 = 0x3d32b90;
  uStack_188 = 0x3eb4000;
  puStack_168 = &Atlas_Contexts_RoundResultsState__SortEntriesByStarCountFromTournamentData;
  ppppppuStack_1a0 = unaff_x24;
  puStack_198 = unaff_x23;
  uStack_180 = uVar22;
  plStack_178 = plVar17;
  ppppppuStack_170 = &pppppuStack_120;
  if ((bRam0000000003eb4c0b & 1) == 0) {
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3d168);
    func_0x00f78a20(0x3d3d170);
    func_0x00f78a20(0x3d3b5c0);
    bRam0000000003eb4c0b = 1;
  }
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  if (plVar16 != (long *)0x0) {
    /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Clear*/ func_0x0251f970(plVar16,uRam0000000003d3d170);
    if (puVar18[1] != 0) {
      /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(&uStack_1c0,puVar18[1],uRam0000000003d3b5c0);
      uVar24 = 1;
      while (uVar12 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(&uStack_1c0,uRam0000000003d32b98), (uVar12 & 1) != 0) {
        /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(plVar16,(ulong)uVar24 | uStack_1b0 << 0x20,uStack_1b0 >> 0x20,
                        uRam0000000003d3d168);
        uVar24 = uVar24 + 1;
      }
      plVar14 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_1c0,uRam0000000003d32b90);
      return plVar14;
    }
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar16 = (long *)___cxa_begin_catch();
    plVar16 = (long *)*plVar16;
    ___cxa_end_catch();
    plVar17 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_1c0,*puVar18);
    if (plVar16 == (long *)0x0) {
      return plVar17;
    }
    func_0x00f78ac0(plVar16,0);
  }
  lVar10 = __Unwind_Resume();
  lStack_1f0 = 0x3d32b90;
  uStack_1e8 = 0x3eb4000;
  puStack_1c8 = &Atlas_Contexts_RoundResultsState__OnResultsFinished;
  puStack_1e0 = puVar18;
  plStack_1d8 = plVar16;
  pppppppuStack_1d0 = &ppppppuStack_170;
  if ((bRam0000000003eb4c0e & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d27638);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d40658);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4c0e = 1;
  }
  uVar32 = 0x3d40650;
  iVar8 = Atlas_Contexts_RoundResultsState__IsTournamentOver(lVar10);
  uVar22 = uVar32;
  if (iVar8 == 0) {
    puVar18 = *(undefined8 **)(lVar10 + 0xa0);
    lVar26 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar10,uRam0000000003d40650);
    lVar19 = lStack_1f0;
    if ((lVar26 != 0) && (puVar18 != (undefined8 *)0x0)) {
      plVar14 = *(long **)(lVar26 + 0x10);
      puVar23 = (undefined8 *)0x3eb4000;
      ppppppplStack_200 = (long *******)unaff_x24;
      puStack_1f8 = unaff_x23;
      if ((bRam0000000003eb4e73 & 1) == 0) {
        func_0x00f78a20(0x3d3b110,plVar14,0);
        func_0x00f78a20(0x3d1f498);
        func_0x00f78a20(0x3d66320);
        func_0x00f78a20(0x3d663f8);
        func_0x00f78a20(0x3d66300);
        func_0x00f78a20(0x3d66318);
        func_0x00f78a20(0x3d663f0);
        func_0x00f78a20(0x3d6b9f8);
        bRam0000000003eb4e73 = 1;
      }
      puStack_210 = (undefined8 *)0x0;
      lStack_208 = 0;
      uStack_218 = 0;
      if (puVar18[4] == 0) {
code_r0x0152a8c4:
        plVar17 = plVar14;
        func_0x00f78af4();
code_r0x0152a8c8:
        uVar22 = func_0x00f78b24();
code_r0x0152a8d4:
        puVar36 = &Atlas_UI_VotingManager__FilterMapsFromTournament;
        auVar37 = func_0x00f78ac0(uVar22,0);
      }
      else {
        plVar17 = (long *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(puVar18[4],0);
        if ((int)plVar17 == 0) {
          return plVar17;
        }
        if ((puVar18[0x16] == 0) ||
           (/*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(puVar18[0x16],puVar18[0x1c],0), plVar14 == (long *)0x0))
        goto code_r0x0152a8c4;
        auVar37._8_8_ = puVar18[0x1c];
        auVar37._0_8_ = puVar18;
        if ((int)plVar14[2] != 2) {
          /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(puVar18,puVar18[0x1c],&lStack_208,&puStack_210);
          if ((((puVar18[0x1c] == 0) ||
               (/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(puVar18[0x1c],uRam0000000003d3b110), lVar19 = lStack_208,
               lStack_208 == 0)) || (puVar18[5] == 0)) ||
             ((/*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar18[5],*(undefined8 *)(lStack_208 + 0x18),(long)&uStack_218 + 2,0
                              ), puVar23 = puStack_210, puStack_210 == (undefined8 *)0x0 ||
              (puVar18[5] == 0)))) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar18[5],puStack_210[3],&uStack_218,0);
          if (puVar18[0x16] == 0) goto code_r0x0152a8c4;
          uVar22 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(puVar18[0x16],lVar19,0);
          if (puVar18[5] == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar18[5],uVar22,(long)&uStack_218 + 6,0);
          if (puVar18[0x16] == 0) goto code_r0x0152a8c4;
          uVar22 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(puVar18[0x16],puVar23,0);
          if (puVar18[5] == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar18[5],uVar22,(long)&uStack_218 + 4,0);
          plVar17 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0xc);
          if (plVar17 == (long *)0x0) goto code_r0x0152a8c4;
          if ((/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8 != 0) &&
             (lVar10 = func_0x00f78adc(/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8,*(undefined8 *)(*plVar17 + 0x40)),
             lVar10 == 0)) goto code_r0x0152a8d0;
          uVar12 = plVar17[3];
          if ((int)uVar12 == 0) goto code_r0x0152a8c8;
          plVar17[4] = /*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8;
          lVar19 = *(long *)(lVar19 + 0x18);
          if (lVar19 != 0) {
            lVar10 = func_0x00f78adc(lVar19,*(undefined8 *)(*plVar17 + 0x40));
            if (lVar10 == 0) goto code_r0x0152a8d0;
            uVar12 = plVar17[3];
          }
          if ((uVar12 & 0xfffffffe) == 0) goto code_r0x0152a8c8;
          plVar17[5] = lVar19;
          lVar19 = 0x3d66300;
          lVar10 = 0x3d66300;
          if (/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300 != 0) {
            lVar26 = func_0x00f78adc(/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300,*(undefined8 *)(*plVar17 + 0x40));
            if (lVar26 == 0) goto code_r0x0152a8d0;
            uVar12 = plVar17[3];
          }
          if ((uint)uVar12 < 3) goto code_r0x0152a8c8;
          plVar17[6] = /*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300;
          puVar23 = (undefined8 *)puVar23[3];
          if (puVar23 != (undefined8 *)0x0) {
            lVar26 = func_0x00f78adc(puVar23,*(undefined8 *)(*plVar17 + 0x40));
            if (lVar26 == 0) goto code_r0x0152a8d0;
            uVar12 = plVar17[3];
          }
          uVar24 = (uint)uVar12;
          if ((uVar12 & 0xfffffffc) == 0) goto code_r0x0152a8c8;
          plVar17[7] = (long)puVar23;
          puVar23 = (undefined8 *)0x3d663f0;
          lVar19 = lVar10;
          if (/*STR(' typeKey1: ')*/ lRam0000000003d663f0 != 0) {
            lVar10 = func_0x00f78adc(/*STR(' typeKey1: ')*/ lRam0000000003d663f0,*(undefined8 *)(*plVar17 + 0x40));
            if (lVar10 == 0) goto code_r0x0152a8d0;
            uVar24 = (uint)plVar17[3];
          }
          if (uVar24 < 5) goto code_r0x0152a8c8;
          plVar17[8] = /*STR(' typeKey1: ')*/ lRam0000000003d663f0;
          puVar23 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_218 + 6,0);
          if ((puVar23 == (undefined8 *)0x0) ||
             (lVar10 = func_0x00f78adc(puVar23,*(undefined8 *)(*plVar17 + 0x40)), lVar10 != 0)) {
            uVar24 = *(uint *)(plVar17 + 3);
            if (5 < uVar24) {
              plVar17[9] = (long)puVar23;
              puVar23 = (undefined8 *)0x3d663f8;
              if (/*STR(' typeKey2: ')*/ lRam0000000003d663f8 != 0) {
                lVar10 = func_0x00f78adc(/*STR(' typeKey2: ')*/ lRam0000000003d663f8,*(undefined8 *)(*plVar17 + 0x40));
                if (lVar10 == 0) goto code_r0x0152a8d0;
                uVar24 = *(uint *)(plVar17 + 3);
              }
              if (6 < uVar24) {
                plVar17[10] = /*STR(' typeKey2: ')*/ lRam0000000003d663f8;
                puVar23 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_218 + 4,0);
                if ((puVar23 != (undefined8 *)0x0) &&
                   (lVar10 = func_0x00f78adc(puVar23,*(undefined8 *)(*plVar17 + 0x40)), lVar10 == 0)
                   ) goto code_r0x0152a8d0;
                uVar24 = (uint)plVar17[3];
                if ((plVar17[3] & 0xfffffff8U) != 0) {
                  plVar17[0xb] = (long)puVar23;
                  puVar23 = (undefined8 *)0x3d66318;
                  if (/*STR(' mapKey1: ')*/ lRam0000000003d66318 != 0) {
                    lVar10 = func_0x00f78adc(/*STR(' mapKey1: ')*/ lRam0000000003d66318,*(undefined8 *)(*plVar17 + 0x40));
                    if (lVar10 == 0) goto code_r0x0152a8d0;
                    uVar24 = (uint)plVar17[3];
                  }
                  if (8 < uVar24) {
                    plVar17[0xc] = /*STR(' mapKey1: ')*/ lRam0000000003d66318;
                    puVar23 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_218 + 2,0);
                    if ((puVar23 != (undefined8 *)0x0) &&
                       (lVar10 = func_0x00f78adc(puVar23,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar10 == 0)) goto code_r0x0152a8d0;
                    uVar24 = *(uint *)(plVar17 + 3);
                    if (9 < uVar24) {
                      plVar17[0xd] = (long)puVar23;
                      puVar23 = (undefined8 *)0x3d66320;
                      if (/*STR(' mapKey2: ')*/ lRam0000000003d66320 != 0) {
                        lVar10 = func_0x00f78adc(/*STR(' mapKey2: ')*/ lRam0000000003d66320,
                                                 *(undefined8 *)(*plVar17 + 0x40));
                        if (lVar10 == 0) goto code_r0x0152a8d0;
                        uVar24 = *(uint *)(plVar17 + 3);
                      }
                      if (10 < uVar24) {
                        plVar17[0xe] = /*STR(' mapKey2: ')*/ lRam0000000003d66320;
                        puVar23 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c(&uStack_218,0);
                        if ((puVar23 != (undefined8 *)0x0) &&
                           (lVar10 = func_0x00f78adc(puVar23,*(undefined8 *)(*plVar17 + 0x40)),
                           lVar10 == 0)) goto code_r0x0152a8d0;
                        if (0xb < *(uint *)(plVar17 + 3)) {
                          plVar17[0xf] = (long)puVar23;
                          /*System.String$$Concat*/ func_0x029cfadc(plVar17,0);
                          plVar14 = plVar17;
                          if ((puVar18[4] != 0) &&
                             (plVar17 = *(long **)(puVar18[4] + 0x20), plVar17 != (long *)0x0)) {
                            plVar14 = (long *)(**(code **)(*plVar17 + 0x1c8))
                                                        (plVar17,(long)uStack_218._2_2_,
                                                         (long)uStack_218._6_2_,
                                                         (long)(short)uStack_218,
                                                         (long)uStack_218._4_2_,&UNK_00001770,
                                                         *(undefined8 *)(*plVar17 + 0x1d0));
                            return plVar14;
                          }
                          goto code_r0x0152a8c4;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto code_r0x0152a8c8;
          }
code_r0x0152a8d0:
          uVar22 = func_0x00f78b14();
          goto code_r0x0152a8d4;
        }
        puVar36 = &UNK_0152a520;
        plVar17 = plVar14;
      }
      uVar31 = auVar37._0_8_;
      uVar12 = 0x3eb4000;
      lStack_250 = lVar19;
      puStack_248 = puVar23;
      plStack_240 = plVar17;
      puStack_238 = puVar18;
      ppppppplStack_230 = (long *******)&pppppppuStack_1d0;
      puStack_228 = (undefined8 *)puVar36;
      if ((bRam0000000003eb4e75 & 1) == 0) {
        func_0x00f78a20(0x3d2e6f0);
        func_0x00f78a20(0x3d2e6f8);
        func_0x00f78a20(0x3d2e700);
        func_0x00f78a20(0x3d2e710);
        func_0x00f78a20(0x3d2e748);
        func_0x00f78a20(0x3d2e750);
        func_0x00f78a20(0x3d32bf0);
        func_0x00f78a20(0x3d32980);
        func_0x00f78a20(0x3d33d98);
        func_0x00f78a20(0x3d33da0);
        func_0x00f78a20(0x3d32988);
        func_0x00f78a20(0x3d32bf8);
        func_0x00f78a20(0x3d32c00);
        func_0x00f78a20(0x3d32990);
        func_0x00f78a20(0x3d33dd0);
        func_0x00f78a20(0x3d39240);
        func_0x00f78a20(0x3d39248);
        func_0x00f78a20(0x3d3b120);
        func_0x00f78a20(0x3d3b6b8);
        func_0x00f78a20(0x3d3b130);
        func_0x00f78a20(0x3d3b0f8);
        func_0x00f78a20(0x3d3b140);
        func_0x00f78a20(0x3d3b6c0);
        func_0x00f78a20(0x3d3b148);
        func_0x00f78a20(0x3d1db90);
        func_0x00f78a20(0x3d65ed8);
        func_0x00f78a20(0x3d66270);
        func_0x00f78a20(0x3d6cdb0);
        func_0x00f78a20(0x3d6cdc0);
        func_0x00f78a20(0x3d6cdb8);
        func_0x00f78a20(0x3d6cdc8);
        bRam0000000003eb4e75 = 1;
      }
      uStack_2a0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_2c8 = 0;
      uStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      lStack_300 = 0;
      uStack_2f8 = 0;
      uStack_310 = 0;
      uStack_308 = 0;
      aiStack_320[3] = 0;
      if (*(long *)(uVar31 + 0xb8) != 0) {
        uVar12 = 0x3d1d000;
        /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(uVar31 + 0xb8),uRam0000000003d2e6f8);
        plVar17 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
        /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(plVar17,auVar37._8_8_,uRam0000000003d3b0f8);
        if (((*(long *)(uVar31 + 0x20) != 0) &&
            (lVar10 = *(long *)(*(long *)(uVar31 + 0x20) + 0x20), lVar10 != 0)) &&
           (lVar10 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar10,0), lVar10 != 0)) {
          uVar12 = 0x3d6c000;
          aiStack_294[0] = *(int *)(lVar10 + 0x18);
          uVar22 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_294,0);
          /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar22,0);
          if (((*(long *)(uVar31 + 0x20) != 0) &&
              (lVar10 = *(long *)(*(long *)(uVar31 + 0x20) + 0x20), lVar10 != 0)) &&
             (lVar10 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar10,0), lVar10 != 0)) {
            uVar12 = 0x3d32bf8;
            /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_348,lVar10,uRam0000000003d3b6b8);
            uStack_2b8 = uStack_340;
            uStack_2c0 = uStack_348;
            uStack_2a8 = uStack_330;
            uStack_2b0 = uStack_338;
            uStack_2a0 = uStack_328;
code_r0x0152aba4:
            uVar21 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_2c0,uRam0000000003d32bf8);
            if ((uVar21 & 1) != 0) {
              sVar4 = uStack_2a8._4_2_;
              sVar1 = (short)uStack_2a8;
              if (uStack_2a8._4_2_ != uStack_2b0._4_2_) {
                sVar1 = uStack_2b0._4_2_;
              }
              if (*(long *)(uVar31 + 0xb8) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              iVar8 = (int)sVar1;
              uVar21 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(uVar31 + 0xb8),iVar8,uRam0000000003d2e700);
              if ((uVar21 & 1) == 0) {
                if (*(long *)(uVar31 + 0xb8) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0152af9c;
                }
                /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(uVar31 + 0xb8),iVar8,0,uRam0000000003d2e6f0);
              }
              lVar10 = *(long *)(uVar31 + 0xb8);
              if (lVar10 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              aiStack_294[0] = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar10,iVar8,uRam0000000003d2e748);
              /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar10,iVar8,aiStack_294[0] + 1,uRam0000000003d2e750);
              if (*(long *)(uVar31 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar31 + 0x28),(int)sVar4,&uStack_2c8,0);
              if (plVar17 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar24 = *(uint *)(plVar17 + 3);
              if (0 < (int)uVar24) {
                uVar33 = 0;
                do {
                  if (uVar24 <= uVar33) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar10 = *(long *)(plVar17[2] + (long)(int)uVar33 * 8 + 0x20);
                  if (lVar10 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar21 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar10 + 0x18),uStack_2c8,0);
                  if ((uVar21 & 1) != 0) {
                    /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,uStack_2c8,0);
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar17,uVar33,uRam0000000003d3b130);
                    break;
                  }
                  uVar33 = uVar33 + 1;
                  uVar24 = *(uint *)(plVar17 + 3);
                } while ((int)uVar33 < (int)uVar24);
              }
              goto code_r0x0152aba4;
            }
            aiStack_320[0] = 0x136;
            /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_2c0,uRam0000000003d32bf0);
            aiStack_320[3] = 0;
            if (*(long *)(uVar31 + 0xb8) != 0) {
              /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_348,*(long *)(uVar31 + 0xb8),uRam0000000003d2e710);
              uStack_2e8 = uStack_340;
              uStack_2f0 = uStack_348;
              uStack_2d8 = uStack_330;
              uStack_2e0 = uStack_338;
code_r0x0152ad1c:
              uVar12 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_2f0,uRam0000000003d33da0);
              if ((uVar12 & 1) != 0) {
                if (*(int *)(uVar31 + 0x10) <= uStack_2e0._4_4_) {
                  if (*(long *)(uVar31 + 0x28) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar31 + 0x28),(int)(short)uStack_2e0,&uStack_2f8,0);
                  if (plVar17 == (long *)0x0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar24 = *(uint *)(plVar17 + 3);
                  if (0 < (int)uVar24) {
                    uVar33 = 0;
                    do {
                      if (uVar24 <= uVar33) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar10 = *(long *)(plVar17[2] + (long)(int)uVar33 * 8 + 0x20);
                      if (lVar10 == 0) {
                        func_0x00f78af4();
                        goto code_r0x0152af9c;
                      }
                      uVar12 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar10 + 0x18),uStack_2f8,0);
                      if ((uVar12 & 1) != 0) {
                        /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,uStack_2f8,0);
                        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar17,uVar33,uRam0000000003d3b130);
                        break;
                      }
                      uVar33 = uVar33 + 1;
                      uVar24 = *(uint *)(plVar17 + 3);
                    } while ((int)uVar33 < (int)uVar24);
                  }
                }
                goto code_r0x0152ad1c;
              }
              uVar31 = (ulong)(uint)aiStack_320[3];
              bVar7 = aiStack_320[3] != 0xffffffff;
              aiStack_320[3] = aiStack_320[3] + 1;
              uVar12 = (ulong)(uint)aiStack_320[3];
              aiStack_320[0] = 0x1d1;
              /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_2f0,uRam0000000003d33d98);
              if (bVar7) goto code_r0x0152ae34;
              uVar12 = 0;
              iVar8 = 0;
              if (plVar17 != (long *)0x0) goto code_r0x0152ae5c;
            }
          }
        }
      }
      do {
        func_0x00f78af4();
code_r0x0152ae34:
        if (aiStack_320[(int)(uint)uVar31] == 0x1d1) {
          uVar12 = uVar31;
          aiStack_320[3] = (uint)uVar31;
        }
        iVar8 = (int)uVar12;
      } while (plVar17 == (long *)0x0);
code_r0x0152ae5c:
      aiStack_294[0] = (int)plVar17[3];
      uVar22 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_294,0);
      uVar22 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar22,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_310,plVar17,uRam0000000003d3b120);
      while( true ) {
        uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_310,uRam0000000003d32988);
        if ((uVar12 & 1) == 0) {
          aiStack_320[iVar8] = 0x23d;
          aiStack_320[3] = aiStack_320[3] + 1;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_310,uRam0000000003d32980);
          if ((int)plVar17[3] < 2) {
            plVar17 = auVar37._8_8_;
          }
          return plVar17;
        }
        if (lStack_300 == 0) break;
        uVar22 = /*System.String$$Concat*/ func_0x029be39c(uVar22,*(undefined8 *)(lStack_300 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
      }
      func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x152afa0);
      (*pcVar5)();
    }
  }
  else {
    puVar18 = (undefined8 *)func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
    Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor(puVar18,0);
    lVar19 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar10,uRam0000000003d40650);
    uVar22 = 0x3d40650;
    if ((lVar19 != 0) && (puVar18 != (undefined8 *)0x0)) {
      puVar18[2] = *(undefined8 *)(lVar19 + 0x10);
      lVar19 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar10,uRam0000000003d40658);
      uVar22 = uVar32;
      if (lVar19 != 0) {
        puVar18[3] = *(undefined8 *)(lVar19 + 0x18);
        *(undefined1 *)(puVar18 + 4) = 1;
        uVar22 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ uRam0000000003d194d8;
        plVar17 = *(long **)(lVar10 + 0x78);
        if (((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar20 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar22,0);
        lVar10 = 0;
        plVar16 = plStack_1d8;
        puVar23 = puStack_1e0;
        uVar32 = uStack_1e8;
        lVar19 = lStack_1f0;
        pppppppuVar35 = pppppppuStack_1d0;
        puVar36 = puStack_1c8;
        if (plVar17 != (long *)0x0) goto code_r0x01e7159c;
      }
    }
  }
  auVar37 = func_0x00f78af4();
  plVar17 = auVar37._8_8_;
  lVar19 = auVar37._0_8_;
  plVar6 = &lStack_250;
  uStack_220 = 0x3d32b90;
  puStack_1f8 = (undefined8 *)&Atlas_Contexts_RoundResultsState__OnVoteStarted;
  ppppppplStack_230 = (long *******)unaff_x24;
  puStack_228 = unaff_x23;
  uStack_218 = uVar22;
  puStack_210 = puVar18;
  lStack_208 = lVar10;
  ppppppplStack_200 = (long *******)&pppppppuStack_1d0;
  if ((bRam0000000003eb4c0f & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d297a0);
    func_0x00f78a20(0x3d1a1a8);
    bRam0000000003eb4c0f = 1;
  }
  if (*(long *)(lVar19 + 0xa0) != 0) {
    puStack_248 = (undefined8 *)plVar17[1];
    lStack_250 = *plVar17;
    puStack_238 = (undefined8 *)plVar17[3];
    plStack_240 = (long *)plVar17[2];
    plVar14 = (long *)0x0;
    /*Atlas.UI.VotingManager$$SetVoteData*/ func_0x01529c00(*(long *)(lVar19 + 0xa0),&lStack_250);
    lVar10 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar19,uRam0000000003d40650);
    if (lVar10 != 0) {
      unaff_x23 = (undefined8 *)0x3d25000;
      uVar22 = *(undefined8 *)(lVar10 + 0x10);
      puVar18 = (undefined8 *)func_0x00f78aec(/*Atlas.Contexts.VotingState.VotingStateTransitionData_TypeInfo*/ uRam0000000003d297a0);
      plVar14 = (long *)((long)&MACH_HEADER.magic + 1);
      /*Atlas.Contexts.VotingState.VotingStateTransitionData$$.ctor*/ func_0x0156ebc8(puVar18,uVar22,1,0);
      uVar32 = /*Atlas.Contexts.VotingState_var*/ uRam0000000003d1a1a8;
      plVar17 = *(long **)(lVar19 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar20 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar32,0);
      if (plVar17 != (long *)0x0) {
        plVar16 = plVar17;
        puVar23 = puVar18;
        lVar19 = 0x3d1a000;
        pppppppuVar35 = &ppppppplStack_200;
        puVar36 = &UNK_014e6858;
code_r0x01e7159c:
        *(undefined8 *)((long)plVar6 + -0x60) = unaff_x28;
        *(undefined8 *)((long)plVar6 + -0x58) = unaff_x27;
        *(undefined8 *)((long)plVar6 + -0x50) = 0x3d3d168;
        *(undefined8 *)((long)plVar6 + -0x48) = 0x3d32b98;
        *(undefined8 *******)((long)plVar6 + -0x40) = unaff_x24;
        *(undefined8 **)((long)plVar6 + -0x38) = unaff_x23;
        *(long *)((long)plVar6 + -0x30) = lVar19;
        *(undefined8 *)((long)plVar6 + -0x28) = uVar32;
        *(undefined8 **)((long)plVar6 + -0x20) = puVar23;
        *(long **)((long)plVar6 + -0x18) = plVar16;
        *(undefined8 ********)((long)plVar6 + -0x10) = pppppppuVar35;
        *(undefined **)((long)plVar6 + -8) = puVar36;
        *(long **)((long)plVar6 + -0x68) = plVar17;
        lVar10 = plVar17[0xd];
        if (lVar10 == 0) {
          puVar34 = (undefined1 *)((long)plVar6 + -0x68);
          lVar19 = 1;
        }
        else {
          lVar19 = *(long *)(lVar10 + 0x18);
          if (lVar19 == 0) {
            return plVar17;
          }
          puVar34 = (undefined1 *)(lVar10 + 0x20);
        }
        lVar10 = 0;
        do {
          lVar26 = *(long *)(puVar34 + lVar10 * 8);
          pcVar5 = *(code **)(lVar26 + 0x10);
          plVar14 = *(long **)(lVar26 + 0x20);
          lVar26 = *(long *)(lVar26 + 0x28);
          if (*(short *)(lVar26 + 0x48) == -1) {
            func_0x00f78ad8(lVar26);
          }
          iVar8 = func_0x00f78a4c(lVar26);
          bVar7 = *(char *)(lVar26 + 0x4a) == '\x03';
          if (iVar8 == 0) {
            if (bVar7) {
              if (plVar14 == (long *)0x0) {
code_r0x01e7173c:
                plVar14 = (long *)(*pcVar5)(plVar20,1,puVar18,lVar26);
              }
              else {
                if (((*(short *)(lVar26 + 0x48) == -1) || ((*(byte *)(*plVar14 + 0x115) & 1) != 0))
                   || (plVar17[3] == 0)) goto code_r0x01e7162c;
                iVar8 = func_0x00f78a44(lVar26);
                iVar9 = func_0x00f78ec0(lVar26);
                if (iVar8 == 0) {
                  uVar3 = *(ushort *)(lVar26 + 0x48);
                  if (iVar9 == 0) {
                    lVar26 = *plVar14 + (ulong)uVar3 * 0x10;
                    plVar14 = (long *)(**(code **)(lVar26 + 0x138))
                                                (plVar14,plVar20,1,puVar18,
                                                 *(undefined8 *)(lVar26 + 0x140));
                    goto code_r0x01e71750;
                  }
                  lVar26 = func_0x00f78a48(lVar26);
                  lVar27 = *plVar14;
                  uVar12 = (ulong)*(ushort *)(lVar27 + 0x12a);
                  if (uVar12 != 0) {
                    piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == lVar26) {
                        puVar23 = (undefined8 *)
                                  (lVar27 + (long)(int)(*piVar28 + (uint)uVar3) * 0x10 + 0x138);
                        goto code_r0x01e718f4;
                      }
                      piVar28 = piVar28 + 4;
                      uVar12 = uVar12 - 1;
                    } while (uVar12 != 0);
                  }
                  puVar23 = (undefined8 *)func_0x00fac1f0(plVar14,lVar26,(ulong)uVar3);
code_r0x01e718f4:
                  pcVar5 = (code *)*puVar23;
                  puVar23 = (undefined8 *)puVar23[1];
                }
                else {
                  if (iVar9 == 0) {
                    uVar22 = *(undefined8 *)
                              (*plVar14 + (ulong)*(ushort *)(lVar26 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar27 = *plVar14;
                    uVar12 = (ulong)*(ushort *)(lVar27 + 0x12a);
                    if (uVar12 != 0) {
                      piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar28 + -2) == *(long *)(lVar26 + 0x18)) {
                          lVar27 = lVar27 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar26 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e718cc;
                        }
                        piVar28 = piVar28 + 4;
                        uVar12 = uVar12 - 1;
                      } while (uVar12 != 0);
                    }
                    lVar27 = func_0x00fac1f0(plVar14);
code_r0x01e718cc:
                    uVar22 = *(undefined8 *)(lVar27 + 8);
                  }
                  puVar23 = (undefined8 *)func_0x00f78acc(uVar22,lVar26);
                  pcVar5 = (code *)*puVar23;
                }
                plVar14 = (long *)(*pcVar5)(plVar14,plVar20,1,puVar18,puVar23);
              }
            }
            else {
              if ((*(short *)(lVar26 + 0x48) == -1) || (plVar17[3] == 0)) goto code_r0x01e7173c;
              iVar8 = func_0x00f78a44(lVar26);
              iVar9 = func_0x00f78ec0(lVar26);
              if (iVar8 == 0) {
                uVar3 = *(ushort *)(lVar26 + 0x48);
                if (iVar9 == 0) {
                  lVar26 = *plVar20 + (ulong)uVar3 * 0x10;
                  plVar14 = (long *)(**(code **)(lVar26 + 0x138))
                                              (plVar20,1,puVar18,*(undefined8 *)(lVar26 + 0x140));
                  goto code_r0x01e71750;
                }
                lVar26 = func_0x00f78a48(lVar26);
                lVar27 = *plVar20;
                uVar12 = (ulong)*(ushort *)(lVar27 + 0x12a);
                if (uVar12 != 0) {
                  piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar28 + -2) == lVar26) {
                      puVar23 = (undefined8 *)
                                (lVar27 + (long)(int)(*piVar28 + (uint)uVar3) * 0x10 + 0x138);
                      goto code_r0x01e71880;
                    }
                    piVar28 = piVar28 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                puVar23 = (undefined8 *)func_0x00fac1f0(plVar20,lVar26,(ulong)uVar3);
code_r0x01e71880:
                pcVar5 = (code *)*puVar23;
                puVar23 = (undefined8 *)puVar23[1];
              }
              else {
                if (iVar9 == 0) {
                  uVar22 = *(undefined8 *)
                            (*plVar20 + (ulong)*(ushort *)(lVar26 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar27 = *plVar20;
                  uVar12 = (ulong)*(ushort *)(lVar27 + 0x12a);
                  if (uVar12 != 0) {
                    piVar28 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar28 + -2) == *(long *)(lVar26 + 0x18)) {
                        lVar27 = lVar27 + (long)(int)(*piVar28 + (uint)*(ushort *)(lVar26 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71858;
                      }
                      piVar28 = piVar28 + 4;
                      uVar12 = uVar12 - 1;
                    } while (uVar12 != 0);
                  }
                  lVar27 = func_0x00fac1f0(plVar20);
code_r0x01e71858:
                  uVar22 = *(undefined8 *)(lVar27 + 8);
                }
                puVar23 = (undefined8 *)func_0x00f78acc(uVar22,lVar26);
                pcVar5 = (code *)*puVar23;
              }
              plVar14 = (long *)(*pcVar5)(plVar20,1,puVar18,puVar23);
            }
          }
          else {
            if (bVar7) goto code_r0x01e7173c;
code_r0x01e7162c:
            plVar14 = (long *)(*pcVar5)(plVar14,plVar20,1,puVar18,lVar26);
          }
code_r0x01e71750:
          lVar10 = lVar10 + 1;
          if (lVar10 == lVar19) {
            return plVar14;
          }
        } while( true );
      }
    }
  }
  plVar17 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4c10 & 1) == 0) {
    func_0x00f78a20(0x3d40648);
    bRam0000000003eb4c10 = 1;
  }
  if (plVar17 != (long *)0x0) {
    return plVar17;
  }
  auVar37 = func_0x00f78af4(0,uRam0000000003d40648);
  plVar17 = auVar37._0_8_;
  plVar17[2] = *plVar14;
  plVar17[4] = auVar37._8_8_;
  plVar17[5] = (long)plVar14;
  return plVar17;
}



// ============================================================
// RVA: 0x14e5e60 | Atlas.Contexts.RoundResultsState.UpdateEntryPreviousPositions
// ============================================================

/* WARNING: Possible PIC construction at 0x014e6854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e6858) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */
/* WARNING: Type propagation algorithm not settling */

long * Atlas_Contexts_RoundResultsState__UpdateEntryPreviousPositions
                 (undefined8 param_1,undefined8 ***param_2,long *param_3)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  undefined8 ***pppuVar4;
  code *pcVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined8 **ppuVar10;
  ulong uVar11;
  undefined8 *****pppppuVar12;
  long *plVar13;
  ulong *puVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  int extraout_w1;
  int extraout_w1_00;
  uint uVar23;
  undefined8 ****ppppuVar24;
  long lVar25;
  long lVar26;
  int *piVar27;
  long lVar28;
  undefined8 ***pppuVar29;
  ulong uVar30;
  undefined8 uVar31;
  uint uVar32;
  undefined8 *unaff_x23;
  undefined8 ******unaff_x24;
  undefined8 unaff_x27;
  undefined1 *puVar33;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar34;
  undefined *puVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  int aiStack_300 [4];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  int aiStack_274 [5];
  long lStack_230;
  undefined8 *puStack_228;
  long *plStack_220;
  undefined8 *puStack_218;
  long *******ppppppplStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 *puStack_1f0;
  long lStack_1e8;
  long *******ppppppplStack_1e0;
  undefined8 *puStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  long *plStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 ******ppppppuStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  undefined8 ******ppppppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined8 ******ppppppuStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long *plStack_108;
  undefined8 *****pppppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  long *plStack_b8;
  long ***ppplStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  
  pppuVar29 = (undefined8 ***)0x3eb4000;
  plVar13 = param_3;
  if ((bRam0000000003eb4c08 & 1) == 0) {
    func_0x00f78a20(0x3d2cf38);
    func_0x00f78a20(0x3d1b978);
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3d168);
    func_0x00f78a20(0x3d3b5c0);
    func_0x00f78a20(0x3d3d178);
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3b5d0);
    func_0x00f78a20(0x3d3d188);
    func_0x00f78a20(0x3d3d190);
    func_0x00f78a20(0x3d63bc0);
    func_0x00f78a20(0x3d289f8);
    bRam0000000003eb4c08 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  pppuStack_60 = (undefined8 ***)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  ppuVar10 = param_2[3];
  if ((ppuVar10 != (undefined8 **)0x0) && (0 < *(int *)(ppuVar10 + 3))) {
    /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(&uStack_a0,ppuVar10,uRam0000000003d3b5c0);
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    uStack_58 = uStack_88;
    pppuStack_60 = pppuStack_90;
    uVar23 = 1;
    while( true ) {
      uVar11 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(&uStack_70,uRam0000000003d32b98);
      if ((uVar11 & 1) == 0) {
        plVar13 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_70,uRam0000000003d32b90);
        return plVar13;
      }
      if (param_3 == (long *)0x0) break;
      /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(param_3,(ulong)uVar23 | (long)pppuStack_60 << 0x20,(ulong)pppuStack_60 >> 0x20
                      ,uRam0000000003d3d168);
      uVar23 = uVar23 + 1;
    }
    func_0x00f78af4();
code_r0x014e6194:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x14e6198);
    (*pcVar5)();
  }
  if (param_2[1] == (undefined8 **)0x0) goto code_r0x014e6198;
  unaff_x24 = (undefined8 ******)0x3d289f8;
  unaff_x23 = (undefined8 *)0x3d3d178;
  /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(&uStack_a0,param_2[1],uRam0000000003d3b5c0);
  uStack_68 = uStack_98;
  uStack_70 = uStack_a0;
  uStack_58 = uStack_88;
  pppuStack_60 = pppuStack_90;
  while (uVar11 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(&uStack_70,uRam0000000003d32b98), pppuVar4 = pppuStack_60,
        (uVar11 & 1) != 0) {
    plVar13 = &uStack_80;
    uVar11 = /*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(param_2,pppuStack_60,plVar13,0);
    pppuVar29 = pppuVar4;
    if ((uVar11 & 1) != 0) {
      if (param_3 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x014e6194;
      }
      plVar13 = (long *)(ulong)(uint)((int)((ulong)pppuVar4 >> 0x20) - uStack_80._4_4_);
      /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(param_3,(long)pppuVar4 << 0x20,plVar13,uRam0000000003d3d168);
    }
  }
  /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_70,uRam0000000003d32b90);
  do {
    pppppuVar12 = *unaff_x24;
    if (((*(ushort *)((long)pppppuVar12 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(pppppuVar12 + 0x1c) == 0)) {
      func_0x00f78ad0();
      pppppuVar12 = *unaff_x24;
    }
    ppppuVar24 = pppppuVar12[0x17];
    param_2 = ppppuVar24[1];
    if (param_2 == (undefined8 ***)0x0) {
      if (((*(ushort *)((long)pppppuVar12 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(pppppuVar12 + 0x1c) == 0)) {
        func_0x00f78ad0();
        ppppuVar24 = (*unaff_x24)[0x17];
      }
      pppuVar29 = *ppppuVar24;
      param_2 = (undefined8 ***)func_0x00f78aec(/*System.Comparison<EndOfRoundScreen.LeaderboardEntry>_TypeInfo*/ uRam0000000003d1b978);
      plVar13 = plRam0000000003d63bc0;
      /*System.Comparison<EndOfRoundScreen.LeaderboardEntry>$$.ctor*/ func_0x01dc71e8(param_2,pppuVar29,plRam0000000003d63bc0,uRam0000000003d2cf38);
      (*unaff_x24)[0x17][1] = param_2;
    }
    if (param_3 != (long *)0x0) {
      plVar13 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Sort*/ func_0x025212a4(param_3,param_2,*unaff_x23);
      uVar11 = (ulong)*(uint *)(param_3 + 3);
      if ((int)*(uint *)(param_3 + 3) < 1) {
        return plVar13;
      }
      lVar28 = 0;
      uVar30 = 0;
      do {
        if ((uVar11 & 0xffffffff) <= uVar30) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar30 = uVar30 + 1;
        plVar13 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(param_3,(int)uVar30 + -1,
                                          uVar30 | (ulong)*(uint *)(param_3[2] + lVar28 + 0x24) <<
                                                   0x20,*(undefined8 *)(param_3[2] + lVar28 + 0x28),
                                          uRam0000000003d3d190);
        uVar11 = (ulong)(int)param_3[3];
        lVar28 = lVar28 + 0x10;
      } while ((long)uVar30 < (long)uVar11);
      return plVar13;
    }
code_r0x014e6198:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014e620c;
    puVar14 = (ulong *)___cxa_begin_catch();
    param_2 = (undefined8 ***)*puVar14;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_70,uRam0000000003d32b90);
  } while (param_2 == (undefined8 ***)0x0);
  func_0x00f78ac0(param_2,0);
code_r0x014e620c:
  auVar36 = __Unwind_Resume();
  plVar15 = auVar36._0_8_;
  ppppppuStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  uStack_d0 = 0x3d32b90;
  pppuStack_c8 = pppuVar29;
  pppuStack_c0 = param_2;
  plStack_b8 = param_3;
  ppplStack_b0 = (long ***)&stack0xfffffffffffffff0;
  puStack_a8 = &Atlas_Contexts_RoundResultsState__UpdateEntryStarDeltas;
  plVar16 = plVar13;
  if ((bRam0000000003eb4c09 & 1) == 0) {
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    plVar15 = (long *)func_0x00f78a20(0x3d3d190);
    bRam0000000003eb4c09 = 1;
  }
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (plVar13 != (long *)0x0) {
    uVar11 = (ulong)*(uint *)(plVar13 + 3);
    if (0 < (int)*(uint *)(plVar13 + 3)) {
      lVar28 = 0;
      uVar30 = 0;
      do {
        if ((uVar11 & 0xffffffff) <= uVar30) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar15 = (long *)/*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(auVar36._8_8_,*(undefined4 *)(plVar13[2] + lVar28 + 0x24),
                                          &uStack_f0,0);
        if ((int)plVar15 != 0) {
          if (*(uint *)(plVar13 + 3) <= uVar30) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar15 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar13,uVar30,
                                            *(undefined8 *)(plVar13[2] + lVar28 + 0x20),
                                            *(undefined4 *)(plVar13[2] + lVar28 + 0x28),
                                            uRam0000000003d3d190);
        }
        uVar30 = uVar30 + 1;
        uVar11 = (ulong)(int)plVar13[3];
        lVar28 = lVar28 + 0x10;
      } while ((long)uVar30 < (long)uVar11);
    }
    return plVar15;
  }
  auVar37 = func_0x00f78af4();
  uVar21 = auVar37._8_8_;
  plVar15 = auVar37._0_8_;
  ppppppuStack_130 = unaff_x24;
  puStack_128 = unaff_x23;
  uStack_120 = 0x3d32b90;
  uStack_118 = 0x3eb4000;
  uStack_110 = auVar36._8_8_;
  plStack_108 = plVar13;
  pppppuStack_100 = (undefined8 *****)&ppplStack_b0;
  puStack_f8 = &Atlas_Contexts_RoundResultsState__UpdateEntryCurrentStars;
  plVar13 = plVar16;
  if ((bRam0000000003eb4c0a & 1) == 0) {
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    plVar15 = (long *)func_0x00f78a20(0x3d3d190);
    bRam0000000003eb4c0a = 1;
  }
  uStack_138 = 0;
  uStack_140 = 0;
  if (plVar16 != (long *)0x0) {
    uVar11 = (ulong)*(uint *)(plVar16 + 3);
    if (0 < (int)*(uint *)(plVar16 + 3)) {
      uVar30 = 0;
      lVar28 = 0x20;
      do {
        if ((uVar11 & 0xffffffff) <= uVar30) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar15 = (long *)/*Core.Networking.NetworkTournament$$GetTotalNetworkScore*/ func_0x01660f34(uVar21,*(undefined4 *)(plVar16[2] + lVar28 + 4),
                                          &uStack_140,0);
        if ((int)plVar15 != 0) {
          if (*(uint *)(plVar16 + 3) <= uVar30) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar15 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar16,uVar30,*(undefined8 *)(plVar16[2] + lVar28),
                                            uStack_140._4_4_,uRam0000000003d3d190);
        }
        uVar30 = uVar30 + 1;
        uVar11 = (ulong)(int)plVar16[3];
        lVar28 = lVar28 + 0x10;
      } while ((long)uVar30 < (long)uVar11);
    }
    return plVar15;
  }
  auVar36 = func_0x00f78af4();
  plVar15 = auVar36._8_8_;
  puVar17 = auVar36._0_8_;
  plVar6 = &uStack_1a0;
  uStack_170 = 0x3d32b90;
  uStack_168 = 0x3eb4000;
  puStack_148 = &Atlas_Contexts_RoundResultsState__SortEntriesByStarCountFromTournamentData;
  ppppppuStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  uStack_160 = uVar21;
  plStack_158 = plVar16;
  ppppppuStack_150 = &pppppuStack_100;
  if ((bRam0000000003eb4c0b & 1) == 0) {
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3d168);
    func_0x00f78a20(0x3d3d170);
    func_0x00f78a20(0x3d3b5c0);
    bRam0000000003eb4c0b = 1;
  }
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  if (plVar15 != (long *)0x0) {
    /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Clear*/ func_0x0251f970(plVar15,uRam0000000003d3d170);
    if (puVar17[1] != 0) {
      /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(&uStack_1a0,puVar17[1],uRam0000000003d3b5c0);
      uVar23 = 1;
      while (uVar11 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(&uStack_1a0,uRam0000000003d32b98), (uVar11 & 1) != 0) {
        /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(plVar15,(ulong)uVar23 | uStack_190 << 0x20,uStack_190 >> 0x20,
                        uRam0000000003d3d168);
        uVar23 = uVar23 + 1;
      }
      plVar13 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_1a0,uRam0000000003d32b90);
      return plVar13;
    }
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar15 = (long *)___cxa_begin_catch();
    plVar15 = (long *)*plVar15;
    ___cxa_end_catch();
    plVar16 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_1a0,*puVar17);
    if (plVar15 == (long *)0x0) {
      return plVar16;
    }
    func_0x00f78ac0(plVar15,0);
  }
  lVar28 = __Unwind_Resume();
  lStack_1d0 = 0x3d32b90;
  uStack_1c8 = 0x3eb4000;
  puStack_1a8 = &Atlas_Contexts_RoundResultsState__OnResultsFinished;
  puStack_1c0 = puVar17;
  plStack_1b8 = plVar15;
  pppppppuStack_1b0 = &ppppppuStack_150;
  if ((bRam0000000003eb4c0e & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d27638);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d40658);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4c0e = 1;
  }
  uVar31 = 0x3d40650;
  iVar8 = Atlas_Contexts_RoundResultsState__IsTournamentOver(lVar28);
  uVar21 = uVar31;
  if (iVar8 == 0) {
    puVar17 = *(undefined8 **)(lVar28 + 0xa0);
    lVar25 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar28,uRam0000000003d40650);
    lVar18 = lStack_1d0;
    if ((lVar25 != 0) && (puVar17 != (undefined8 *)0x0)) {
      plVar13 = *(long **)(lVar25 + 0x10);
      puVar22 = (undefined8 *)0x3eb4000;
      ppppppplStack_1e0 = (long *******)unaff_x24;
      puStack_1d8 = unaff_x23;
      if ((bRam0000000003eb4e73 & 1) == 0) {
        func_0x00f78a20(0x3d3b110,plVar13,0);
        func_0x00f78a20(0x3d1f498);
        func_0x00f78a20(0x3d66320);
        func_0x00f78a20(0x3d663f8);
        func_0x00f78a20(0x3d66300);
        func_0x00f78a20(0x3d66318);
        func_0x00f78a20(0x3d663f0);
        func_0x00f78a20(0x3d6b9f8);
        bRam0000000003eb4e73 = 1;
      }
      puStack_1f0 = (undefined8 *)0x0;
      lStack_1e8 = 0;
      uStack_1f8 = 0;
      if (puVar17[4] == 0) {
code_r0x0152a8c4:
        plVar16 = plVar13;
        func_0x00f78af4();
code_r0x0152a8c8:
        uVar21 = func_0x00f78b24();
code_r0x0152a8d4:
        puVar35 = &Atlas_UI_VotingManager__FilterMapsFromTournament;
        auVar36 = func_0x00f78ac0(uVar21,0);
      }
      else {
        plVar16 = (long *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(puVar17[4],0);
        if ((int)plVar16 == 0) {
          return plVar16;
        }
        if ((puVar17[0x16] == 0) ||
           (/*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(puVar17[0x16],puVar17[0x1c],0), plVar13 == (long *)0x0))
        goto code_r0x0152a8c4;
        auVar36._8_8_ = puVar17[0x1c];
        auVar36._0_8_ = puVar17;
        if ((int)plVar13[2] != 2) {
          /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(puVar17,puVar17[0x1c],&lStack_1e8,&puStack_1f0);
          if ((((puVar17[0x1c] == 0) ||
               (/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(puVar17[0x1c],uRam0000000003d3b110), lVar18 = lStack_1e8,
               lStack_1e8 == 0)) || (puVar17[5] == 0)) ||
             ((/*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar17[5],*(undefined8 *)(lStack_1e8 + 0x18),(long)&uStack_1f8 + 2,0
                              ), puVar22 = puStack_1f0, puStack_1f0 == (undefined8 *)0x0 ||
              (puVar17[5] == 0)))) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar17[5],puStack_1f0[3],&uStack_1f8,0);
          if (puVar17[0x16] == 0) goto code_r0x0152a8c4;
          uVar21 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(puVar17[0x16],lVar18,0);
          if (puVar17[5] == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar17[5],uVar21,(long)&uStack_1f8 + 6,0);
          if (puVar17[0x16] == 0) goto code_r0x0152a8c4;
          uVar21 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(puVar17[0x16],puVar22,0);
          if (puVar17[5] == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar17[5],uVar21,(long)&uStack_1f8 + 4,0);
          plVar16 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0xc);
          if (plVar16 == (long *)0x0) goto code_r0x0152a8c4;
          if ((/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8 != 0) &&
             (lVar28 = func_0x00f78adc(/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8,*(undefined8 *)(*plVar16 + 0x40)),
             lVar28 == 0)) goto code_r0x0152a8d0;
          uVar11 = plVar16[3];
          if ((int)uVar11 == 0) goto code_r0x0152a8c8;
          plVar16[4] = /*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8;
          lVar18 = *(long *)(lVar18 + 0x18);
          if (lVar18 != 0) {
            lVar28 = func_0x00f78adc(lVar18,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar28 == 0) goto code_r0x0152a8d0;
            uVar11 = plVar16[3];
          }
          if ((uVar11 & 0xfffffffe) == 0) goto code_r0x0152a8c8;
          plVar16[5] = lVar18;
          lVar18 = 0x3d66300;
          lVar28 = 0x3d66300;
          if (/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300 != 0) {
            lVar25 = func_0x00f78adc(/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar25 == 0) goto code_r0x0152a8d0;
            uVar11 = plVar16[3];
          }
          if ((uint)uVar11 < 3) goto code_r0x0152a8c8;
          plVar16[6] = /*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300;
          puVar22 = (undefined8 *)puVar22[3];
          if (puVar22 != (undefined8 *)0x0) {
            lVar25 = func_0x00f78adc(puVar22,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar25 == 0) goto code_r0x0152a8d0;
            uVar11 = plVar16[3];
          }
          uVar23 = (uint)uVar11;
          if ((uVar11 & 0xfffffffc) == 0) goto code_r0x0152a8c8;
          plVar16[7] = (long)puVar22;
          puVar22 = (undefined8 *)0x3d663f0;
          lVar18 = lVar28;
          if (/*STR(' typeKey1: ')*/ lRam0000000003d663f0 != 0) {
            lVar28 = func_0x00f78adc(/*STR(' typeKey1: ')*/ lRam0000000003d663f0,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar28 == 0) goto code_r0x0152a8d0;
            uVar23 = (uint)plVar16[3];
          }
          if (uVar23 < 5) goto code_r0x0152a8c8;
          plVar16[8] = /*STR(' typeKey1: ')*/ lRam0000000003d663f0;
          puVar22 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_1f8 + 6,0);
          if ((puVar22 == (undefined8 *)0x0) ||
             (lVar28 = func_0x00f78adc(puVar22,*(undefined8 *)(*plVar16 + 0x40)), lVar28 != 0)) {
            uVar23 = *(uint *)(plVar16 + 3);
            if (5 < uVar23) {
              plVar16[9] = (long)puVar22;
              puVar22 = (undefined8 *)0x3d663f8;
              if (/*STR(' typeKey2: ')*/ lRam0000000003d663f8 != 0) {
                lVar28 = func_0x00f78adc(/*STR(' typeKey2: ')*/ lRam0000000003d663f8,*(undefined8 *)(*plVar16 + 0x40));
                if (lVar28 == 0) goto code_r0x0152a8d0;
                uVar23 = *(uint *)(plVar16 + 3);
              }
              if (6 < uVar23) {
                plVar16[10] = /*STR(' typeKey2: ')*/ lRam0000000003d663f8;
                puVar22 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_1f8 + 4,0);
                if ((puVar22 != (undefined8 *)0x0) &&
                   (lVar28 = func_0x00f78adc(puVar22,*(undefined8 *)(*plVar16 + 0x40)), lVar28 == 0)
                   ) goto code_r0x0152a8d0;
                uVar23 = (uint)plVar16[3];
                if ((plVar16[3] & 0xfffffff8U) != 0) {
                  plVar16[0xb] = (long)puVar22;
                  puVar22 = (undefined8 *)0x3d66318;
                  if (/*STR(' mapKey1: ')*/ lRam0000000003d66318 != 0) {
                    lVar28 = func_0x00f78adc(/*STR(' mapKey1: ')*/ lRam0000000003d66318,*(undefined8 *)(*plVar16 + 0x40));
                    if (lVar28 == 0) goto code_r0x0152a8d0;
                    uVar23 = (uint)plVar16[3];
                  }
                  if (8 < uVar23) {
                    plVar16[0xc] = /*STR(' mapKey1: ')*/ lRam0000000003d66318;
                    puVar22 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_1f8 + 2,0);
                    if ((puVar22 != (undefined8 *)0x0) &&
                       (lVar28 = func_0x00f78adc(puVar22,*(undefined8 *)(*plVar16 + 0x40)),
                       lVar28 == 0)) goto code_r0x0152a8d0;
                    uVar23 = *(uint *)(plVar16 + 3);
                    if (9 < uVar23) {
                      plVar16[0xd] = (long)puVar22;
                      puVar22 = (undefined8 *)0x3d66320;
                      if (/*STR(' mapKey2: ')*/ lRam0000000003d66320 != 0) {
                        lVar28 = func_0x00f78adc(/*STR(' mapKey2: ')*/ lRam0000000003d66320,
                                                 *(undefined8 *)(*plVar16 + 0x40));
                        if (lVar28 == 0) goto code_r0x0152a8d0;
                        uVar23 = *(uint *)(plVar16 + 3);
                      }
                      if (10 < uVar23) {
                        plVar16[0xe] = /*STR(' mapKey2: ')*/ lRam0000000003d66320;
                        puVar22 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c(&uStack_1f8,0);
                        if ((puVar22 != (undefined8 *)0x0) &&
                           (lVar28 = func_0x00f78adc(puVar22,*(undefined8 *)(*plVar16 + 0x40)),
                           lVar28 == 0)) goto code_r0x0152a8d0;
                        if (0xb < *(uint *)(plVar16 + 3)) {
                          plVar16[0xf] = (long)puVar22;
                          /*System.String$$Concat*/ func_0x029cfadc(plVar16,0);
                          plVar13 = plVar16;
                          if ((puVar17[4] != 0) &&
                             (plVar16 = *(long **)(puVar17[4] + 0x20), plVar16 != (long *)0x0)) {
                            plVar13 = (long *)(**(code **)(*plVar16 + 0x1c8))
                                                        (plVar16,(long)uStack_1f8._2_2_,
                                                         (long)uStack_1f8._6_2_,
                                                         (long)(short)uStack_1f8,
                                                         (long)uStack_1f8._4_2_,&UNK_00001770,
                                                         *(undefined8 *)(*plVar16 + 0x1d0));
                            return plVar13;
                          }
                          goto code_r0x0152a8c4;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto code_r0x0152a8c8;
          }
code_r0x0152a8d0:
          uVar21 = func_0x00f78b14();
          goto code_r0x0152a8d4;
        }
        puVar35 = &UNK_0152a520;
        plVar16 = plVar13;
      }
      uVar30 = auVar36._0_8_;
      uVar11 = 0x3eb4000;
      lStack_230 = lVar18;
      puStack_228 = puVar22;
      plStack_220 = plVar16;
      puStack_218 = puVar17;
      ppppppplStack_210 = (long *******)&pppppppuStack_1b0;
      puStack_208 = (undefined8 *)puVar35;
      if ((bRam0000000003eb4e75 & 1) == 0) {
        func_0x00f78a20(0x3d2e6f0);
        func_0x00f78a20(0x3d2e6f8);
        func_0x00f78a20(0x3d2e700);
        func_0x00f78a20(0x3d2e710);
        func_0x00f78a20(0x3d2e748);
        func_0x00f78a20(0x3d2e750);
        func_0x00f78a20(0x3d32bf0);
        func_0x00f78a20(0x3d32980);
        func_0x00f78a20(0x3d33d98);
        func_0x00f78a20(0x3d33da0);
        func_0x00f78a20(0x3d32988);
        func_0x00f78a20(0x3d32bf8);
        func_0x00f78a20(0x3d32c00);
        func_0x00f78a20(0x3d32990);
        func_0x00f78a20(0x3d33dd0);
        func_0x00f78a20(0x3d39240);
        func_0x00f78a20(0x3d39248);
        func_0x00f78a20(0x3d3b120);
        func_0x00f78a20(0x3d3b6b8);
        func_0x00f78a20(0x3d3b130);
        func_0x00f78a20(0x3d3b0f8);
        func_0x00f78a20(0x3d3b140);
        func_0x00f78a20(0x3d3b6c0);
        func_0x00f78a20(0x3d3b148);
        func_0x00f78a20(0x3d1db90);
        func_0x00f78a20(0x3d65ed8);
        func_0x00f78a20(0x3d66270);
        func_0x00f78a20(0x3d6cdb0);
        func_0x00f78a20(0x3d6cdc0);
        func_0x00f78a20(0x3d6cdb8);
        func_0x00f78a20(0x3d6cdc8);
        bRam0000000003eb4e75 = 1;
      }
      uStack_280 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_2a8 = 0;
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      lStack_2e0 = 0;
      uStack_2d8 = 0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      aiStack_300[3] = 0;
      if (*(long *)(uVar30 + 0xb8) != 0) {
        uVar11 = 0x3d1d000;
        /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(uVar30 + 0xb8),uRam0000000003d2e6f8);
        plVar16 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
        /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(plVar16,auVar36._8_8_,uRam0000000003d3b0f8);
        if (((*(long *)(uVar30 + 0x20) != 0) &&
            (lVar28 = *(long *)(*(long *)(uVar30 + 0x20) + 0x20), lVar28 != 0)) &&
           (lVar28 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar28,0), lVar28 != 0)) {
          uVar11 = 0x3d6c000;
          aiStack_274[0] = *(int *)(lVar28 + 0x18);
          uVar21 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_274,0);
          /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar21,0);
          if (((*(long *)(uVar30 + 0x20) != 0) &&
              (lVar28 = *(long *)(*(long *)(uVar30 + 0x20) + 0x20), lVar28 != 0)) &&
             (lVar28 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar28,0), lVar28 != 0)) {
            uVar11 = 0x3d32bf8;
            /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_328,lVar28,uRam0000000003d3b6b8);
            uStack_298 = uStack_320;
            uStack_2a0 = uStack_328;
            uStack_288 = uStack_310;
            uStack_290 = uStack_318;
            uStack_280 = uStack_308;
code_r0x0152aba4:
            uVar20 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_2a0,uRam0000000003d32bf8);
            if ((uVar20 & 1) != 0) {
              sVar3 = uStack_288._4_2_;
              sVar1 = (short)uStack_288;
              if (uStack_288._4_2_ != uStack_290._4_2_) {
                sVar1 = uStack_290._4_2_;
              }
              if (*(long *)(uVar30 + 0xb8) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              iVar8 = (int)sVar1;
              uVar20 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(uVar30 + 0xb8),iVar8,uRam0000000003d2e700);
              if ((uVar20 & 1) == 0) {
                if (*(long *)(uVar30 + 0xb8) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0152af9c;
                }
                /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(uVar30 + 0xb8),iVar8,0,uRam0000000003d2e6f0);
              }
              lVar28 = *(long *)(uVar30 + 0xb8);
              if (lVar28 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              aiStack_274[0] = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar28,iVar8,uRam0000000003d2e748);
              /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar28,iVar8,aiStack_274[0] + 1,uRam0000000003d2e750);
              if (*(long *)(uVar30 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar30 + 0x28),(int)sVar3,&uStack_2a8,0);
              if (plVar16 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar23 = *(uint *)(plVar16 + 3);
              if (0 < (int)uVar23) {
                uVar32 = 0;
                do {
                  if (uVar23 <= uVar32) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar28 = *(long *)(plVar16[2] + (long)(int)uVar32 * 8 + 0x20);
                  if (lVar28 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar20 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar28 + 0x18),uStack_2a8,0);
                  if ((uVar20 & 1) != 0) {
                    /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,uStack_2a8,0);
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar16,uVar32,uRam0000000003d3b130);
                    break;
                  }
                  uVar32 = uVar32 + 1;
                  uVar23 = *(uint *)(plVar16 + 3);
                } while ((int)uVar32 < (int)uVar23);
              }
              goto code_r0x0152aba4;
            }
            aiStack_300[0] = 0x136;
            /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_2a0,uRam0000000003d32bf0);
            aiStack_300[3] = 0;
            if (*(long *)(uVar30 + 0xb8) != 0) {
              /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_328,*(long *)(uVar30 + 0xb8),uRam0000000003d2e710);
              uStack_2c8 = uStack_320;
              uStack_2d0 = uStack_328;
              uStack_2b8 = uStack_310;
              uStack_2c0 = uStack_318;
code_r0x0152ad1c:
              uVar11 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_2d0,uRam0000000003d33da0);
              if ((uVar11 & 1) != 0) {
                if (*(int *)(uVar30 + 0x10) <= uStack_2c0._4_4_) {
                  if (*(long *)(uVar30 + 0x28) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar30 + 0x28),(int)(short)uStack_2c0,&uStack_2d8,0);
                  if (plVar16 == (long *)0x0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar23 = *(uint *)(plVar16 + 3);
                  if (0 < (int)uVar23) {
                    uVar32 = 0;
                    do {
                      if (uVar23 <= uVar32) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar28 = *(long *)(plVar16[2] + (long)(int)uVar32 * 8 + 0x20);
                      if (lVar28 == 0) {
                        func_0x00f78af4();
                        goto code_r0x0152af9c;
                      }
                      uVar11 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar28 + 0x18),uStack_2d8,0);
                      if ((uVar11 & 1) != 0) {
                        /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,uStack_2d8,0);
                        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar16,uVar32,uRam0000000003d3b130);
                        break;
                      }
                      uVar32 = uVar32 + 1;
                      uVar23 = *(uint *)(plVar16 + 3);
                    } while ((int)uVar32 < (int)uVar23);
                  }
                }
                goto code_r0x0152ad1c;
              }
              uVar30 = (ulong)(uint)aiStack_300[3];
              bVar7 = aiStack_300[3] != 0xffffffff;
              aiStack_300[3] = aiStack_300[3] + 1;
              uVar11 = (ulong)(uint)aiStack_300[3];
              aiStack_300[0] = 0x1d1;
              /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_2d0,uRam0000000003d33d98);
              if (bVar7) goto code_r0x0152ae34;
              uVar11 = 0;
              iVar8 = 0;
              if (plVar16 != (long *)0x0) goto code_r0x0152ae5c;
            }
          }
        }
      }
      do {
        func_0x00f78af4();
code_r0x0152ae34:
        if (aiStack_300[(int)(uint)uVar30] == 0x1d1) {
          uVar11 = uVar30;
          aiStack_300[3] = (uint)uVar30;
        }
        iVar8 = (int)uVar11;
      } while (plVar16 == (long *)0x0);
code_r0x0152ae5c:
      aiStack_274[0] = (int)plVar16[3];
      uVar21 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_274,0);
      uVar21 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar21,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_2f0,plVar16,uRam0000000003d3b120);
      while( true ) {
        uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_2f0,uRam0000000003d32988);
        if ((uVar11 & 1) == 0) {
          aiStack_300[iVar8] = 0x23d;
          aiStack_300[3] = aiStack_300[3] + 1;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_2f0,uRam0000000003d32980);
          if ((int)plVar16[3] < 2) {
            plVar16 = auVar36._8_8_;
          }
          return plVar16;
        }
        if (lStack_2e0 == 0) break;
        uVar21 = /*System.String$$Concat*/ func_0x029be39c(uVar21,*(undefined8 *)(lStack_2e0 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
      }
      func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x152afa0);
      (*pcVar5)();
    }
  }
  else {
    puVar17 = (undefined8 *)func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
    Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor(puVar17,0);
    lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar28,uRam0000000003d40650);
    uVar21 = 0x3d40650;
    if ((lVar18 != 0) && (puVar17 != (undefined8 *)0x0)) {
      puVar17[2] = *(undefined8 *)(lVar18 + 0x10);
      lVar18 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar28,uRam0000000003d40658);
      uVar21 = uVar31;
      if (lVar18 != 0) {
        puVar17[3] = *(undefined8 *)(lVar18 + 0x18);
        *(undefined1 *)(puVar17 + 4) = 1;
        uVar21 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ uRam0000000003d194d8;
        plVar16 = *(long **)(lVar28 + 0x78);
        if (((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar19 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar21,0);
        lVar28 = 0;
        plVar15 = plStack_1b8;
        puVar22 = puStack_1c0;
        uVar31 = uStack_1c8;
        lVar18 = lStack_1d0;
        pppppppuVar34 = pppppppuStack_1b0;
        puVar35 = puStack_1a8;
        if (plVar16 != (long *)0x0) goto code_r0x01e7159c;
      }
    }
  }
  auVar36 = func_0x00f78af4();
  plVar16 = auVar36._8_8_;
  lVar18 = auVar36._0_8_;
  plVar6 = &lStack_230;
  uStack_200 = 0x3d32b90;
  puStack_1d8 = (undefined8 *)&Atlas_Contexts_RoundResultsState__OnVoteStarted;
  ppppppplStack_210 = (long *******)unaff_x24;
  puStack_208 = unaff_x23;
  uStack_1f8 = uVar21;
  puStack_1f0 = puVar17;
  lStack_1e8 = lVar28;
  ppppppplStack_1e0 = (long *******)&pppppppuStack_1b0;
  if ((bRam0000000003eb4c0f & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d297a0);
    func_0x00f78a20(0x3d1a1a8);
    bRam0000000003eb4c0f = 1;
  }
  if (*(long *)(lVar18 + 0xa0) != 0) {
    puStack_228 = (undefined8 *)plVar16[1];
    lStack_230 = *plVar16;
    puStack_218 = (undefined8 *)plVar16[3];
    plStack_220 = (long *)plVar16[2];
    plVar13 = (long *)0x0;
    /*Atlas.UI.VotingManager$$SetVoteData*/ func_0x01529c00(*(long *)(lVar18 + 0xa0),&lStack_230);
    lVar28 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar18,uRam0000000003d40650);
    if (lVar28 != 0) {
      unaff_x23 = (undefined8 *)0x3d25000;
      uVar21 = *(undefined8 *)(lVar28 + 0x10);
      puVar17 = (undefined8 *)func_0x00f78aec(/*Atlas.Contexts.VotingState.VotingStateTransitionData_TypeInfo*/ uRam0000000003d297a0);
      plVar13 = (long *)((long)&MACH_HEADER.magic + 1);
      /*Atlas.Contexts.VotingState.VotingStateTransitionData$$.ctor*/ func_0x0156ebc8(puVar17,uVar21,1,0);
      uVar31 = /*Atlas.Contexts.VotingState_var*/ uRam0000000003d1a1a8;
      plVar16 = *(long **)(lVar18 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar19 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar31,0);
      if (plVar16 != (long *)0x0) {
        plVar15 = plVar16;
        puVar22 = puVar17;
        lVar18 = 0x3d1a000;
        pppppppuVar34 = &ppppppplStack_1e0;
        puVar35 = &UNK_014e6858;
code_r0x01e7159c:
        *(undefined8 *)((long)plVar6 + -0x60) = unaff_x28;
        *(undefined8 *)((long)plVar6 + -0x58) = unaff_x27;
        *(undefined8 *)((long)plVar6 + -0x50) = 0x3d3d168;
        *(undefined8 *)((long)plVar6 + -0x48) = 0x3d32b98;
        *(undefined8 *******)((long)plVar6 + -0x40) = unaff_x24;
        *(undefined8 **)((long)plVar6 + -0x38) = unaff_x23;
        *(long *)((long)plVar6 + -0x30) = lVar18;
        *(undefined8 *)((long)plVar6 + -0x28) = uVar31;
        *(undefined8 **)((long)plVar6 + -0x20) = puVar22;
        *(long **)((long)plVar6 + -0x18) = plVar15;
        *(undefined8 ********)((long)plVar6 + -0x10) = pppppppuVar34;
        *(undefined **)((long)plVar6 + -8) = puVar35;
        *(long **)((long)plVar6 + -0x68) = plVar16;
        lVar28 = plVar16[0xd];
        if (lVar28 == 0) {
          puVar33 = (undefined1 *)((long)plVar6 + -0x68);
          lVar18 = 1;
        }
        else {
          lVar18 = *(long *)(lVar28 + 0x18);
          if (lVar18 == 0) {
            return plVar16;
          }
          puVar33 = (undefined1 *)(lVar28 + 0x20);
        }
        lVar28 = 0;
        do {
          lVar25 = *(long *)(puVar33 + lVar28 * 8);
          pcVar5 = *(code **)(lVar25 + 0x10);
          plVar13 = *(long **)(lVar25 + 0x20);
          lVar25 = *(long *)(lVar25 + 0x28);
          if (*(short *)(lVar25 + 0x48) == -1) {
            func_0x00f78ad8(lVar25);
          }
          iVar8 = func_0x00f78a4c(lVar25);
          bVar7 = *(char *)(lVar25 + 0x4a) == '\x03';
          if (iVar8 == 0) {
            if (bVar7) {
              if (plVar13 == (long *)0x0) {
code_r0x01e7173c:
                plVar13 = (long *)(*pcVar5)(plVar19,1,puVar17,lVar25);
              }
              else {
                if (((*(short *)(lVar25 + 0x48) == -1) || ((*(byte *)(*plVar13 + 0x115) & 1) != 0))
                   || (plVar16[3] == 0)) goto code_r0x01e7162c;
                iVar8 = func_0x00f78a44(lVar25);
                iVar9 = func_0x00f78ec0(lVar25);
                if (iVar8 == 0) {
                  uVar2 = *(ushort *)(lVar25 + 0x48);
                  if (iVar9 == 0) {
                    lVar25 = *plVar13 + (ulong)uVar2 * 0x10;
                    plVar13 = (long *)(**(code **)(lVar25 + 0x138))
                                                (plVar13,plVar19,1,puVar17,
                                                 *(undefined8 *)(lVar25 + 0x140));
                    goto code_r0x01e71750;
                  }
                  lVar25 = func_0x00f78a48(lVar25);
                  lVar26 = *plVar13;
                  uVar11 = (ulong)*(ushort *)(lVar26 + 0x12a);
                  if (uVar11 != 0) {
                    piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == lVar25) {
                        puVar22 = (undefined8 *)
                                  (lVar26 + (long)(int)(*piVar27 + (uint)uVar2) * 0x10 + 0x138);
                        goto code_r0x01e718f4;
                      }
                      piVar27 = piVar27 + 4;
                      uVar11 = uVar11 - 1;
                    } while (uVar11 != 0);
                  }
                  puVar22 = (undefined8 *)func_0x00fac1f0(plVar13,lVar25,(ulong)uVar2);
code_r0x01e718f4:
                  pcVar5 = (code *)*puVar22;
                  puVar22 = (undefined8 *)puVar22[1];
                }
                else {
                  if (iVar9 == 0) {
                    uVar21 = *(undefined8 *)
                              (*plVar13 + (ulong)*(ushort *)(lVar25 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar26 = *plVar13;
                    uVar11 = (ulong)*(ushort *)(lVar26 + 0x12a);
                    if (uVar11 != 0) {
                      piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar27 + -2) == *(long *)(lVar25 + 0x18)) {
                          lVar26 = lVar26 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar25 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e718cc;
                        }
                        piVar27 = piVar27 + 4;
                        uVar11 = uVar11 - 1;
                      } while (uVar11 != 0);
                    }
                    lVar26 = func_0x00fac1f0(plVar13);
code_r0x01e718cc:
                    uVar21 = *(undefined8 *)(lVar26 + 8);
                  }
                  puVar22 = (undefined8 *)func_0x00f78acc(uVar21,lVar25);
                  pcVar5 = (code *)*puVar22;
                }
                plVar13 = (long *)(*pcVar5)(plVar13,plVar19,1,puVar17,puVar22);
              }
            }
            else {
              if ((*(short *)(lVar25 + 0x48) == -1) || (plVar16[3] == 0)) goto code_r0x01e7173c;
              iVar8 = func_0x00f78a44(lVar25);
              iVar9 = func_0x00f78ec0(lVar25);
              if (iVar8 == 0) {
                uVar2 = *(ushort *)(lVar25 + 0x48);
                if (iVar9 == 0) {
                  lVar25 = *plVar19 + (ulong)uVar2 * 0x10;
                  plVar13 = (long *)(**(code **)(lVar25 + 0x138))
                                              (plVar19,1,puVar17,*(undefined8 *)(lVar25 + 0x140));
                  goto code_r0x01e71750;
                }
                lVar25 = func_0x00f78a48(lVar25);
                lVar26 = *plVar19;
                uVar11 = (ulong)*(ushort *)(lVar26 + 0x12a);
                if (uVar11 != 0) {
                  piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar27 + -2) == lVar25) {
                      puVar22 = (undefined8 *)
                                (lVar26 + (long)(int)(*piVar27 + (uint)uVar2) * 0x10 + 0x138);
                      goto code_r0x01e71880;
                    }
                    piVar27 = piVar27 + 4;
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                puVar22 = (undefined8 *)func_0x00fac1f0(plVar19,lVar25,(ulong)uVar2);
code_r0x01e71880:
                pcVar5 = (code *)*puVar22;
                puVar22 = (undefined8 *)puVar22[1];
              }
              else {
                if (iVar9 == 0) {
                  uVar21 = *(undefined8 *)
                            (*plVar19 + (ulong)*(ushort *)(lVar25 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar26 = *plVar19;
                  uVar11 = (ulong)*(ushort *)(lVar26 + 0x12a);
                  if (uVar11 != 0) {
                    piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar27 + -2) == *(long *)(lVar25 + 0x18)) {
                        lVar26 = lVar26 + (long)(int)(*piVar27 + (uint)*(ushort *)(lVar25 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71858;
                      }
                      piVar27 = piVar27 + 4;
                      uVar11 = uVar11 - 1;
                    } while (uVar11 != 0);
                  }
                  lVar26 = func_0x00fac1f0(plVar19);
code_r0x01e71858:
                  uVar21 = *(undefined8 *)(lVar26 + 8);
                }
                puVar22 = (undefined8 *)func_0x00f78acc(uVar21,lVar25);
                pcVar5 = (code *)*puVar22;
              }
              plVar13 = (long *)(*pcVar5)(plVar19,1,puVar17,puVar22);
            }
          }
          else {
            if (bVar7) goto code_r0x01e7173c;
code_r0x01e7162c:
            plVar13 = (long *)(*pcVar5)(plVar13,plVar19,1,puVar17,lVar25);
          }
code_r0x01e71750:
          lVar28 = lVar28 + 1;
          if (lVar28 == lVar18) {
            return plVar13;
          }
        } while( true );
      }
    }
  }
  plVar16 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4c10 & 1) == 0) {
    func_0x00f78a20(0x3d40648);
    bRam0000000003eb4c10 = 1;
  }
  if (plVar16 != (long *)0x0) {
    return plVar16;
  }
  auVar36 = func_0x00f78af4(0,uRam0000000003d40648);
  plVar16 = auVar36._0_8_;
  plVar16[2] = *plVar13;
  plVar16[4] = auVar36._8_8_;
  plVar16[5] = (long)plVar13;
  return plVar16;
}



// ============================================================
// RVA: 0x14e6210 | Atlas.Contexts.RoundResultsState.UpdateEntryStarDeltas
// ============================================================

/* WARNING: Possible PIC construction at 0x014e6854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e6858) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */

long * Atlas_Contexts_RoundResultsState__UpdateEntryStarDeltas
                 (long *param_1,undefined8 param_2,long *param_3)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  int extraout_w1;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  long unaff_x22;
  long lVar25;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar26;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar27;
  undefined8 unaff_x28;
  undefined1 ***pppuVar28;
  undefined1 auVar29 [16];
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  int aiStack_260 [4];
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  int aiStack_1d4 [5];
  long lStack_190;
  undefined8 *puStack_188;
  long *plStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  plVar9 = param_3;
  if ((bRam0000000003eb4c09 & 1) == 0) {
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    param_1 = (long *)func_0x00f78a20(0x3d3d190);
    bRam0000000003eb4c09 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  if (param_3 != (long *)0x0) {
    uVar18 = (ulong)*(uint *)(param_3 + 3);
    if (0 < (int)*(uint *)(param_3 + 3)) {
      lVar25 = 0;
      uVar22 = 0;
      do {
        if ((uVar18 & 0xffffffff) <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        param_1 = (long *)/*Core.Networking.NetworkTournament$$GetScoreAwardedThisRound*/ func_0x01661070(param_2,*(undefined4 *)(param_3[2] + lVar25 + 0x24),
                                          &uStack_50,0);
        if ((int)param_1 != 0) {
          if (*(uint *)(param_3 + 3) <= uVar22) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          param_1 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(param_3,uVar22,
                                            *(undefined8 *)(param_3[2] + lVar25 + 0x20),
                                            *(undefined4 *)(param_3[2] + lVar25 + 0x28),
                                            uRam0000000003d3d190);
        }
        uVar22 = uVar22 + 1;
        uVar18 = (ulong)(int)param_3[3];
        lVar25 = lVar25 + 0x10;
      } while ((long)uVar22 < (long)uVar18);
    }
    return param_1;
  }
  auVar29 = func_0x00f78af4();
  plVar8 = auVar29._0_8_;
  puStack_58 = &Atlas_Contexts_RoundResultsState__UpdateEntryCurrentStars;
  plVar16 = plVar9;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4c0a & 1) == 0) {
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    plVar8 = (long *)func_0x00f78a20(0x3d3d190);
    bRam0000000003eb4c0a = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  if (plVar9 != (long *)0x0) {
    uVar18 = (ulong)*(uint *)(plVar9 + 3);
    if (0 < (int)*(uint *)(plVar9 + 3)) {
      uVar22 = 0;
      lVar25 = 0x20;
      do {
        if ((uVar18 & 0xffffffff) <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        plVar8 = (long *)/*Core.Networking.NetworkTournament$$GetTotalNetworkScore*/ func_0x01660f34(auVar29._8_8_,*(undefined4 *)(plVar9[2] + lVar25 + 4),
                                         &uStack_a0,0);
        if ((int)plVar8 != 0) {
          if (*(uint *)(plVar9 + 3) <= uVar22) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar8 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(plVar9,uVar22,*(undefined8 *)(plVar9[2] + lVar25),
                                           uStack_a0._4_4_,uRam0000000003d3d190);
        }
        uVar22 = uVar22 + 1;
        uVar18 = (ulong)(int)plVar9[3];
        lVar25 = lVar25 + 0x10;
      } while ((long)uVar22 < (long)uVar18);
    }
    return plVar8;
  }
  auVar29 = func_0x00f78af4();
  plVar9 = auVar29._8_8_;
  puVar15 = auVar29._0_8_;
  plVar4 = &uStack_100;
  puStack_a8 = &Atlas_Contexts_RoundResultsState__SortEntriesByStarCountFromTournamentData;
  pppuVar28 = &ppuStack_b0;
  ppuStack_b0 = &puStack_60;
  if ((bRam0000000003eb4c0b & 1) == 0) {
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3d168);
    func_0x00f78a20(0x3d3d170);
    func_0x00f78a20(0x3d3b5c0);
    bRam0000000003eb4c0b = 1;
  }
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  if (plVar9 != (long *)0x0) {
    /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Clear*/ func_0x0251f970(plVar9,uRam0000000003d3d170);
    if (puVar15[1] != 0) {
      /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(&uStack_100,puVar15[1],uRam0000000003d3b5c0);
      uVar17 = 1;
      while (uVar18 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(&uStack_100,uRam0000000003d32b98), (uVar18 & 1) != 0) {
        /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(plVar9,(ulong)uVar17 | uStack_f0 << 0x20,uStack_f0 >> 0x20,
                        uRam0000000003d3d168);
        uVar17 = uVar17 + 1;
      }
      plVar9 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_100,uRam0000000003d32b90);
      return plVar9;
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar9 = (long *)___cxa_begin_catch();
    plVar9 = (long *)*plVar9;
    ___cxa_end_catch();
    plVar8 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_100,*puVar15);
    if (plVar9 == (long *)0x0) {
      return plVar8;
    }
    func_0x00f78ac0(plVar9,0);
  }
  lVar25 = __Unwind_Resume();
  puStack_108 = &Atlas_Contexts_RoundResultsState__OnResultsFinished;
  if ((bRam0000000003eb4c0e & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d27638);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d40658);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4c0e = 1;
  }
  uVar23 = 0x3d40650;
  iVar6 = Atlas_Contexts_RoundResultsState__IsTournamentOver(lVar25);
  uVar14 = uVar23;
  if (iVar6 == 0) {
    puVar10 = *(undefined8 **)(lVar25 + 0xa0);
    lVar11 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar25,uRam0000000003d40650);
    if ((lVar11 != 0) && (puVar10 != (undefined8 *)0x0)) {
      plVar9 = *(long **)(lVar11 + 0x10);
      puVar15 = (undefined8 *)0x3eb4000;
      if ((bRam0000000003eb4e73 & 1) == 0) {
        func_0x00f78a20(0x3d3b110,plVar9,0);
        func_0x00f78a20(0x3d1f498);
        func_0x00f78a20(0x3d66320);
        func_0x00f78a20(0x3d663f8);
        func_0x00f78a20(0x3d66300);
        func_0x00f78a20(0x3d66318);
        func_0x00f78a20(0x3d663f0);
        func_0x00f78a20(0x3d6b9f8);
        bRam0000000003eb4e73 = 1;
      }
      puStack_150 = (undefined8 *)0x0;
      lStack_148 = 0;
      uStack_158 = 0;
      if (puVar10[4] == 0) {
code_r0x0152a8c4:
        plVar16 = plVar9;
        func_0x00f78af4();
code_r0x0152a8c8:
        uVar14 = func_0x00f78b24();
code_r0x0152a8d4:
        auVar29 = func_0x00f78ac0(uVar14,0);
        plVar9 = plVar16;
      }
      else {
        plVar16 = (long *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(puVar10[4],0);
        if ((int)plVar16 == 0) {
          return plVar16;
        }
        if ((puVar10[0x16] == 0) ||
           (/*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(puVar10[0x16],puVar10[0x1c],0), plVar9 == (long *)0x0))
        goto code_r0x0152a8c4;
        auVar29._8_8_ = puVar10[0x1c];
        auVar29._0_8_ = puVar10;
        if ((int)plVar9[2] != 2) {
          /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(puVar10,puVar10[0x1c],&lStack_148,&puStack_150);
          if ((((puVar10[0x1c] == 0) ||
               (/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(puVar10[0x1c],uRam0000000003d3b110), unaff_x22 = lStack_148,
               lStack_148 == 0)) || (puVar10[5] == 0)) ||
             ((/*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar10[5],*(undefined8 *)(lStack_148 + 0x18),(long)&uStack_158 + 2,0
                              ), puVar15 = puStack_150, puStack_150 == (undefined8 *)0x0 ||
              (puVar10[5] == 0)))) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar10[5],puStack_150[3],&uStack_158,0);
          if (puVar10[0x16] == 0) goto code_r0x0152a8c4;
          uVar14 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(puVar10[0x16],unaff_x22,0);
          if (puVar10[5] == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar10[5],uVar14,(long)&uStack_158 + 6,0);
          if (puVar10[0x16] == 0) goto code_r0x0152a8c4;
          uVar14 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(puVar10[0x16],puVar15,0);
          if (puVar10[5] == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar10[5],uVar14,(long)&uStack_158 + 4,0);
          plVar16 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0xc);
          if (plVar16 == (long *)0x0) goto code_r0x0152a8c4;
          if ((/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8 != 0) &&
             (lVar25 = func_0x00f78adc(/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8,*(undefined8 *)(*plVar16 + 0x40)),
             lVar25 == 0)) goto code_r0x0152a8d0;
          uVar18 = plVar16[3];
          if ((int)uVar18 == 0) goto code_r0x0152a8c8;
          plVar16[4] = /*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8;
          unaff_x22 = *(long *)(unaff_x22 + 0x18);
          if (unaff_x22 != 0) {
            lVar25 = func_0x00f78adc(unaff_x22,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar25 == 0) goto code_r0x0152a8d0;
            uVar18 = plVar16[3];
          }
          if ((uVar18 & 0xfffffffe) == 0) goto code_r0x0152a8c8;
          plVar16[5] = unaff_x22;
          unaff_x22 = 0x3d66300;
          lVar25 = 0x3d66300;
          if (/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300 != 0) {
            lVar11 = func_0x00f78adc(/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar11 == 0) goto code_r0x0152a8d0;
            uVar18 = plVar16[3];
          }
          if ((uint)uVar18 < 3) goto code_r0x0152a8c8;
          plVar16[6] = /*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300;
          puVar15 = (undefined8 *)puVar15[3];
          if (puVar15 != (undefined8 *)0x0) {
            lVar11 = func_0x00f78adc(puVar15,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar11 == 0) goto code_r0x0152a8d0;
            uVar18 = plVar16[3];
          }
          uVar17 = (uint)uVar18;
          if ((uVar18 & 0xfffffffc) == 0) goto code_r0x0152a8c8;
          plVar16[7] = (long)puVar15;
          puVar15 = (undefined8 *)0x3d663f0;
          unaff_x22 = lVar25;
          if (/*STR(' typeKey1: ')*/ lRam0000000003d663f0 != 0) {
            lVar25 = func_0x00f78adc(/*STR(' typeKey1: ')*/ lRam0000000003d663f0,*(undefined8 *)(*plVar16 + 0x40));
            if (lVar25 == 0) goto code_r0x0152a8d0;
            uVar17 = (uint)plVar16[3];
          }
          if (uVar17 < 5) goto code_r0x0152a8c8;
          plVar16[8] = /*STR(' typeKey1: ')*/ lRam0000000003d663f0;
          puVar15 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_158 + 6,0);
          if ((puVar15 == (undefined8 *)0x0) ||
             (lVar25 = func_0x00f78adc(puVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar25 != 0)) {
            uVar17 = *(uint *)(plVar16 + 3);
            if (5 < uVar17) {
              plVar16[9] = (long)puVar15;
              puVar15 = (undefined8 *)0x3d663f8;
              if (/*STR(' typeKey2: ')*/ lRam0000000003d663f8 != 0) {
                lVar25 = func_0x00f78adc(/*STR(' typeKey2: ')*/ lRam0000000003d663f8,*(undefined8 *)(*plVar16 + 0x40));
                if (lVar25 == 0) goto code_r0x0152a8d0;
                uVar17 = *(uint *)(plVar16 + 3);
              }
              if (6 < uVar17) {
                plVar16[10] = /*STR(' typeKey2: ')*/ lRam0000000003d663f8;
                puVar15 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_158 + 4,0);
                if ((puVar15 != (undefined8 *)0x0) &&
                   (lVar25 = func_0x00f78adc(puVar15,*(undefined8 *)(*plVar16 + 0x40)), lVar25 == 0)
                   ) goto code_r0x0152a8d0;
                uVar17 = (uint)plVar16[3];
                if ((plVar16[3] & 0xfffffff8U) != 0) {
                  plVar16[0xb] = (long)puVar15;
                  puVar15 = (undefined8 *)0x3d66318;
                  if (/*STR(' mapKey1: ')*/ lRam0000000003d66318 != 0) {
                    lVar25 = func_0x00f78adc(/*STR(' mapKey1: ')*/ lRam0000000003d66318,*(undefined8 *)(*plVar16 + 0x40));
                    if (lVar25 == 0) goto code_r0x0152a8d0;
                    uVar17 = (uint)plVar16[3];
                  }
                  if (8 < uVar17) {
                    plVar16[0xc] = /*STR(' mapKey1: ')*/ lRam0000000003d66318;
                    puVar15 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_158 + 2,0);
                    if ((puVar15 != (undefined8 *)0x0) &&
                       (lVar25 = func_0x00f78adc(puVar15,*(undefined8 *)(*plVar16 + 0x40)),
                       lVar25 == 0)) goto code_r0x0152a8d0;
                    uVar17 = *(uint *)(plVar16 + 3);
                    if (9 < uVar17) {
                      plVar16[0xd] = (long)puVar15;
                      puVar15 = (undefined8 *)0x3d66320;
                      if (/*STR(' mapKey2: ')*/ lRam0000000003d66320 != 0) {
                        lVar25 = func_0x00f78adc(/*STR(' mapKey2: ')*/ lRam0000000003d66320,
                                                 *(undefined8 *)(*plVar16 + 0x40));
                        if (lVar25 == 0) goto code_r0x0152a8d0;
                        uVar17 = *(uint *)(plVar16 + 3);
                      }
                      if (10 < uVar17) {
                        plVar16[0xe] = /*STR(' mapKey2: ')*/ lRam0000000003d66320;
                        puVar15 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c(&uStack_158,0);
                        if ((puVar15 != (undefined8 *)0x0) &&
                           (lVar25 = func_0x00f78adc(puVar15,*(undefined8 *)(*plVar16 + 0x40)),
                           lVar25 == 0)) goto code_r0x0152a8d0;
                        if (0xb < *(uint *)(plVar16 + 3)) {
                          plVar16[0xf] = (long)puVar15;
                          /*System.String$$Concat*/ func_0x029cfadc(plVar16,0);
                          plVar9 = plVar16;
                          if ((puVar10[4] != 0) &&
                             (plVar16 = *(long **)(puVar10[4] + 0x20), plVar16 != (long *)0x0)) {
                            plVar9 = (long *)(**(code **)(*plVar16 + 0x1c8))
                                                       (plVar16,(long)uStack_158._2_2_,
                                                        (long)uStack_158._6_2_,
                                                        (long)(short)uStack_158,
                                                        (long)uStack_158._4_2_,&UNK_00001770,
                                                        *(undefined8 *)(*plVar16 + 0x1d0));
                            return plVar9;
                          }
                          goto code_r0x0152a8c4;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto code_r0x0152a8c8;
          }
code_r0x0152a8d0:
          uVar14 = func_0x00f78b14();
          goto code_r0x0152a8d4;
        }
      }
      uVar22 = auVar29._0_8_;
      uVar18 = 0x3eb4000;
      lStack_190 = unaff_x22;
      puStack_188 = puVar15;
      plStack_180 = plVar9;
      puStack_178 = puVar10;
      if ((bRam0000000003eb4e75 & 1) == 0) {
        func_0x00f78a20(0x3d2e6f0);
        func_0x00f78a20(0x3d2e6f8);
        func_0x00f78a20(0x3d2e700);
        func_0x00f78a20(0x3d2e710);
        func_0x00f78a20(0x3d2e748);
        func_0x00f78a20(0x3d2e750);
        func_0x00f78a20(0x3d32bf0);
        func_0x00f78a20(0x3d32980);
        func_0x00f78a20(0x3d33d98);
        func_0x00f78a20(0x3d33da0);
        func_0x00f78a20(0x3d32988);
        func_0x00f78a20(0x3d32bf8);
        func_0x00f78a20(0x3d32c00);
        func_0x00f78a20(0x3d32990);
        func_0x00f78a20(0x3d33dd0);
        func_0x00f78a20(0x3d39240);
        func_0x00f78a20(0x3d39248);
        func_0x00f78a20(0x3d3b120);
        func_0x00f78a20(0x3d3b6b8);
        func_0x00f78a20(0x3d3b130);
        func_0x00f78a20(0x3d3b0f8);
        func_0x00f78a20(0x3d3b140);
        func_0x00f78a20(0x3d3b6c0);
        func_0x00f78a20(0x3d3b148);
        func_0x00f78a20(0x3d1db90);
        func_0x00f78a20(0x3d65ed8);
        func_0x00f78a20(0x3d66270);
        func_0x00f78a20(0x3d6cdb0);
        func_0x00f78a20(0x3d6cdc0);
        func_0x00f78a20(0x3d6cdb8);
        func_0x00f78a20(0x3d6cdc8);
        bRam0000000003eb4e75 = 1;
      }
      uStack_1e0 = 0;
      uStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_208 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      lStack_240 = 0;
      uStack_238 = 0;
      uStack_250 = 0;
      uStack_248 = 0;
      aiStack_260[3] = 0;
      if (*(long *)(uVar22 + 0xb8) != 0) {
        uVar18 = 0x3d1d000;
        /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(uVar22 + 0xb8),uRam0000000003d2e6f8);
        plVar9 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
        /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(plVar9,auVar29._8_8_,uRam0000000003d3b0f8);
        if (((*(long *)(uVar22 + 0x20) != 0) &&
            (lVar25 = *(long *)(*(long *)(uVar22 + 0x20) + 0x20), lVar25 != 0)) &&
           (lVar25 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar25,0), lVar25 != 0)) {
          uVar18 = 0x3d6c000;
          aiStack_1d4[0] = *(int *)(lVar25 + 0x18);
          uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_1d4,0);
          /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar14,0);
          if (((*(long *)(uVar22 + 0x20) != 0) &&
              (lVar25 = *(long *)(*(long *)(uVar22 + 0x20) + 0x20), lVar25 != 0)) &&
             (lVar25 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar25,0), lVar25 != 0)) {
            uVar18 = 0x3d32bf8;
            /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_288,lVar25,uRam0000000003d3b6b8);
            uStack_1f8 = uStack_280;
            uStack_200 = uStack_288;
            uStack_1e8 = uStack_270;
            uStack_1f0 = uStack_278;
            uStack_1e0 = uStack_268;
code_r0x0152aba4:
            uVar13 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_200,uRam0000000003d32bf8);
            if ((uVar13 & 1) != 0) {
              sVar3 = uStack_1e8._4_2_;
              sVar1 = (short)uStack_1e8;
              if (uStack_1e8._4_2_ != uStack_1f0._4_2_) {
                sVar1 = uStack_1f0._4_2_;
              }
              if (*(long *)(uVar22 + 0xb8) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              iVar6 = (int)sVar1;
              uVar13 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(uVar22 + 0xb8),iVar6,uRam0000000003d2e700);
              if ((uVar13 & 1) == 0) {
                if (*(long *)(uVar22 + 0xb8) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0152af9c;
                }
                /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(uVar22 + 0xb8),iVar6,0,uRam0000000003d2e6f0);
              }
              lVar25 = *(long *)(uVar22 + 0xb8);
              if (lVar25 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              aiStack_1d4[0] = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar25,iVar6,uRam0000000003d2e748);
              /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar25,iVar6,aiStack_1d4[0] + 1,uRam0000000003d2e750);
              if (*(long *)(uVar22 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar22 + 0x28),(int)sVar3,&uStack_208,0);
              if (plVar9 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar17 = *(uint *)(plVar9 + 3);
              if (0 < (int)uVar17) {
                uVar24 = 0;
                do {
                  if (uVar17 <= uVar24) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar25 = *(long *)(plVar9[2] + (long)(int)uVar24 * 8 + 0x20);
                  if (lVar25 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar13 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar25 + 0x18),uStack_208,0);
                  if ((uVar13 & 1) != 0) {
                    /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,uStack_208,0);
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar9,uVar24,uRam0000000003d3b130);
                    break;
                  }
                  uVar24 = uVar24 + 1;
                  uVar17 = *(uint *)(plVar9 + 3);
                } while ((int)uVar24 < (int)uVar17);
              }
              goto code_r0x0152aba4;
            }
            aiStack_260[0] = 0x136;
            /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_200,uRam0000000003d32bf0);
            aiStack_260[3] = 0;
            if (*(long *)(uVar22 + 0xb8) != 0) {
              /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_288,*(long *)(uVar22 + 0xb8),uRam0000000003d2e710);
              uStack_228 = uStack_280;
              uStack_230 = uStack_288;
              uStack_218 = uStack_270;
              uStack_220 = uStack_278;
code_r0x0152ad1c:
              uVar18 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_230,uRam0000000003d33da0);
              if ((uVar18 & 1) != 0) {
                if (*(int *)(uVar22 + 0x10) <= uStack_220._4_4_) {
                  if (*(long *)(uVar22 + 0x28) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar22 + 0x28),(int)(short)uStack_220,&uStack_238,0);
                  if (plVar9 == (long *)0x0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar17 = *(uint *)(plVar9 + 3);
                  if (0 < (int)uVar17) {
                    uVar24 = 0;
                    do {
                      if (uVar17 <= uVar24) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar25 = *(long *)(plVar9[2] + (long)(int)uVar24 * 8 + 0x20);
                      if (lVar25 == 0) {
                        func_0x00f78af4();
                        goto code_r0x0152af9c;
                      }
                      uVar18 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar25 + 0x18),uStack_238,0);
                      if ((uVar18 & 1) != 0) {
                        /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,uStack_238,0);
                        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar9,uVar24,uRam0000000003d3b130);
                        break;
                      }
                      uVar24 = uVar24 + 1;
                      uVar17 = *(uint *)(plVar9 + 3);
                    } while ((int)uVar24 < (int)uVar17);
                  }
                }
                goto code_r0x0152ad1c;
              }
              uVar22 = (ulong)(uint)aiStack_260[3];
              bVar5 = aiStack_260[3] != 0xffffffff;
              aiStack_260[3] = aiStack_260[3] + 1;
              uVar18 = (ulong)(uint)aiStack_260[3];
              aiStack_260[0] = 0x1d1;
              /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_230,uRam0000000003d33d98);
              if (bVar5) goto code_r0x0152ae34;
              uVar18 = 0;
              iVar6 = 0;
              if (plVar9 != (long *)0x0) goto code_r0x0152ae5c;
            }
          }
        }
      }
      do {
        func_0x00f78af4();
code_r0x0152ae34:
        if (aiStack_260[(int)(uint)uVar22] == 0x1d1) {
          uVar18 = uVar22;
          aiStack_260[3] = (uint)uVar22;
        }
        iVar6 = (int)uVar18;
      } while (plVar9 == (long *)0x0);
code_r0x0152ae5c:
      aiStack_1d4[0] = (int)plVar9[3];
      uVar14 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_1d4,0);
      uVar14 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar14,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_250,plVar9,uRam0000000003d3b120);
      while( true ) {
        uVar18 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_250,uRam0000000003d32988);
        if ((uVar18 & 1) == 0) {
          aiStack_260[iVar6] = 0x23d;
          aiStack_260[3] = aiStack_260[3] + 1;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_250,uRam0000000003d32980);
          if ((int)plVar9[3] < 2) {
            plVar9 = auVar29._8_8_;
          }
          return plVar9;
        }
        if (lStack_240 == 0) break;
        uVar14 = /*System.String$$Concat*/ func_0x029be39c(uVar14,*(undefined8 *)(lStack_240 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
      }
      func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
      pcVar26 = (code *)SoftwareBreakpoint(1,0x152afa0);
      (*pcVar26)();
    }
  }
  else {
    puVar10 = (undefined8 *)func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
    Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor(puVar10,0);
    lVar11 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar25,uRam0000000003d40650);
    uVar14 = 0x3d40650;
    if ((lVar11 != 0) && (puVar10 != (undefined8 *)0x0)) {
      puVar10[2] = *(undefined8 *)(lVar11 + 0x10);
      lVar11 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar25,uRam0000000003d40658);
      uVar14 = uVar23;
      if (lVar11 != 0) {
        puVar10[3] = *(undefined8 *)(lVar11 + 0x18);
        *(undefined1 *)(puVar10 + 4) = 1;
        uVar14 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ uRam0000000003d194d8;
        plVar8 = *(long **)(lVar25 + 0x78);
        if (((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar12 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
        lVar25 = 0;
        if (plVar8 != (long *)0x0) {
          uVar14 = 0x3eb4000;
          goto code_r0x01e7159c;
        }
      }
    }
  }
  auVar29 = func_0x00f78af4();
  plVar9 = auVar29._8_8_;
  lVar11 = auVar29._0_8_;
  plVar4 = &lStack_190;
  pppuVar28 = (undefined1 ***)&stack0xfffffffffffffec0;
  uStack_158 = uVar14;
  puStack_150 = puVar10;
  lStack_148 = lVar25;
  if ((bRam0000000003eb4c0f & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d297a0);
    func_0x00f78a20(0x3d1a1a8);
    bRam0000000003eb4c0f = 1;
  }
  if (*(long *)(lVar11 + 0xa0) != 0) {
    puStack_188 = (undefined8 *)plVar9[1];
    lStack_190 = *plVar9;
    puStack_178 = (undefined8 *)plVar9[3];
    plStack_180 = (long *)plVar9[2];
    plVar16 = (long *)0x0;
    /*Atlas.UI.VotingManager$$SetVoteData*/ func_0x01529c00(*(long *)(lVar11 + 0xa0),&lStack_190);
    lVar25 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar11,uRam0000000003d40650);
    if (lVar25 != 0) {
      unaff_x22 = 0x3d1a000;
      unaff_x23 = 0x3d25000;
      uVar14 = *(undefined8 *)(lVar25 + 0x10);
      puVar10 = (undefined8 *)func_0x00f78aec(/*Atlas.Contexts.VotingState.VotingStateTransitionData_TypeInfo*/ uRam0000000003d297a0);
      plVar16 = (long *)((long)&MACH_HEADER.magic + 1);
      /*Atlas.Contexts.VotingState.VotingStateTransitionData$$.ctor*/ func_0x0156ebc8(puVar10,uVar14,1,0);
      uVar14 = /*Atlas.Contexts.VotingState_var*/ uRam0000000003d1a1a8;
      plVar8 = *(long **)(lVar11 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar12 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
      if (plVar8 != (long *)0x0) {
        puStack_108 = &UNK_014e6858;
        plVar9 = plVar8;
        puVar15 = puVar10;
code_r0x01e7159c:
        *(undefined8 *)((long)plVar4 + -0x60) = unaff_x28;
        *(undefined8 *)((long)plVar4 + -0x58) = unaff_x27;
        *(undefined8 *)((long)plVar4 + -0x50) = unaff_x26;
        *(undefined8 *)((long)plVar4 + -0x48) = unaff_x25;
        *(undefined8 *)((long)plVar4 + -0x40) = unaff_x24;
        *(undefined8 *)((long)plVar4 + -0x38) = unaff_x23;
        *(long *)((long)plVar4 + -0x30) = unaff_x22;
        *(undefined8 *)((long)plVar4 + -0x28) = uVar14;
        *(undefined8 **)((long)plVar4 + -0x20) = puVar15;
        *(long **)((long)plVar4 + -0x18) = plVar9;
        *(undefined1 ****)((long)plVar4 + -0x10) = pppuVar28;
        *(undefined **)((long)plVar4 + -8) = puStack_108;
        *(long **)((long)plVar4 + -0x68) = plVar8;
        lVar25 = plVar8[0xd];
        if (lVar25 == 0) {
          puVar27 = (undefined1 *)((long)plVar4 + -0x68);
          lVar11 = 1;
        }
        else {
          lVar11 = *(long *)(lVar25 + 0x18);
          if (lVar11 == 0) {
            return plVar8;
          }
          puVar27 = (undefined1 *)(lVar25 + 0x20);
        }
        lVar25 = 0;
        do {
          lVar19 = *(long *)(puVar27 + lVar25 * 8);
          pcVar26 = *(code **)(lVar19 + 0x10);
          plVar9 = *(long **)(lVar19 + 0x20);
          lVar19 = *(long *)(lVar19 + 0x28);
          if (*(short *)(lVar19 + 0x48) == -1) {
            func_0x00f78ad8(lVar19);
          }
          iVar6 = func_0x00f78a4c(lVar19);
          bVar5 = *(char *)(lVar19 + 0x4a) == '\x03';
          if (iVar6 == 0) {
            if (bVar5) {
              if (plVar9 == (long *)0x0) {
code_r0x01e7173c:
                plVar9 = (long *)(*pcVar26)(plVar12,1,puVar10,lVar19);
              }
              else {
                if (((*(short *)(lVar19 + 0x48) == -1) || ((*(byte *)(*plVar9 + 0x115) & 1) != 0))
                   || (plVar8[3] == 0)) goto code_r0x01e7162c;
                iVar6 = func_0x00f78a44(lVar19);
                iVar7 = func_0x00f78ec0(lVar19);
                if (iVar6 == 0) {
                  uVar2 = *(ushort *)(lVar19 + 0x48);
                  if (iVar7 == 0) {
                    lVar19 = *plVar9 + (ulong)uVar2 * 0x10;
                    plVar9 = (long *)(**(code **)(lVar19 + 0x138))
                                               (plVar9,plVar12,1,puVar10,
                                                *(undefined8 *)(lVar19 + 0x140));
                    goto code_r0x01e71750;
                  }
                  lVar19 = func_0x00f78a48(lVar19);
                  lVar20 = *plVar9;
                  uVar18 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar18 != 0) {
                    piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == lVar19) {
                        puVar15 = (undefined8 *)
                                  (lVar20 + (long)(int)(*piVar21 + (uint)uVar2) * 0x10 + 0x138);
                        goto code_r0x01e718f4;
                      }
                      piVar21 = piVar21 + 4;
                      uVar18 = uVar18 - 1;
                    } while (uVar18 != 0);
                  }
                  puVar15 = (undefined8 *)func_0x00fac1f0(plVar9,lVar19,(ulong)uVar2);
code_r0x01e718f4:
                  pcVar26 = (code *)*puVar15;
                  puVar15 = (undefined8 *)puVar15[1];
                }
                else {
                  if (iVar7 == 0) {
                    uVar14 = *(undefined8 *)
                              (*plVar9 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar20 = *plVar9;
                    uVar18 = (ulong)*(ushort *)(lVar20 + 0x12a);
                    if (uVar18 != 0) {
                      piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == *(long *)(lVar19 + 0x18)) {
                          lVar20 = lVar20 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar19 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e718cc;
                        }
                        piVar21 = piVar21 + 4;
                        uVar18 = uVar18 - 1;
                      } while (uVar18 != 0);
                    }
                    lVar20 = func_0x00fac1f0(plVar9);
code_r0x01e718cc:
                    uVar14 = *(undefined8 *)(lVar20 + 8);
                  }
                  puVar15 = (undefined8 *)func_0x00f78acc(uVar14,lVar19);
                  pcVar26 = (code *)*puVar15;
                }
                plVar9 = (long *)(*pcVar26)(plVar9,plVar12,1,puVar10,puVar15);
              }
            }
            else {
              if ((*(short *)(lVar19 + 0x48) == -1) || (plVar8[3] == 0)) goto code_r0x01e7173c;
              iVar6 = func_0x00f78a44(lVar19);
              iVar7 = func_0x00f78ec0(lVar19);
              if (iVar6 == 0) {
                uVar2 = *(ushort *)(lVar19 + 0x48);
                if (iVar7 == 0) {
                  lVar19 = *plVar12 + (ulong)uVar2 * 0x10;
                  plVar9 = (long *)(**(code **)(lVar19 + 0x138))
                                             (plVar12,1,puVar10,*(undefined8 *)(lVar19 + 0x140));
                  goto code_r0x01e71750;
                }
                lVar19 = func_0x00f78a48(lVar19);
                lVar20 = *plVar12;
                uVar18 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar18 != 0) {
                  piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == lVar19) {
                      puVar15 = (undefined8 *)
                                (lVar20 + (long)(int)(*piVar21 + (uint)uVar2) * 0x10 + 0x138);
                      goto code_r0x01e71880;
                    }
                    piVar21 = piVar21 + 4;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
                puVar15 = (undefined8 *)func_0x00fac1f0(plVar12,lVar19,(ulong)uVar2);
code_r0x01e71880:
                pcVar26 = (code *)*puVar15;
                puVar15 = (undefined8 *)puVar15[1];
              }
              else {
                if (iVar7 == 0) {
                  uVar14 = *(undefined8 *)
                            (*plVar12 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar20 = *plVar12;
                  uVar18 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar18 != 0) {
                    piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)(lVar19 + 0x18)) {
                        lVar20 = lVar20 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar19 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71858;
                      }
                      piVar21 = piVar21 + 4;
                      uVar18 = uVar18 - 1;
                    } while (uVar18 != 0);
                  }
                  lVar20 = func_0x00fac1f0(plVar12);
code_r0x01e71858:
                  uVar14 = *(undefined8 *)(lVar20 + 8);
                }
                puVar15 = (undefined8 *)func_0x00f78acc(uVar14,lVar19);
                pcVar26 = (code *)*puVar15;
              }
              plVar9 = (long *)(*pcVar26)(plVar12,1,puVar10,puVar15);
            }
          }
          else {
            if (bVar5) goto code_r0x01e7173c;
code_r0x01e7162c:
            plVar9 = (long *)(*pcVar26)(plVar9,plVar12,1,puVar10,lVar19);
          }
code_r0x01e71750:
          lVar25 = lVar25 + 1;
          if (lVar25 == lVar11) {
            return plVar9;
          }
        } while( true );
      }
    }
  }
  plVar9 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4c10 & 1) == 0) {
    func_0x00f78a20(0x3d40648);
    bRam0000000003eb4c10 = 1;
  }
  if (plVar9 != (long *)0x0) {
    return plVar9;
  }
  auVar29 = func_0x00f78af4(0,uRam0000000003d40648);
  plVar9 = auVar29._0_8_;
  plVar9[2] = *plVar16;
  plVar9[4] = auVar29._8_8_;
  plVar9[5] = (long)plVar16;
  return plVar9;
}



// ============================================================
// RVA: 0x14e632c | Atlas.Contexts.RoundResultsState.UpdateEntryCurrentStars
// ============================================================

/* WARNING: Possible PIC construction at 0x014e6854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e6858) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */

long * Atlas_Contexts_RoundResultsState__UpdateEntryCurrentStars
                 (long *param_1,undefined8 param_2,long *param_3)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  int extraout_w1;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  long unaff_x22;
  undefined8 unaff_x23;
  long lVar25;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar26;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar27;
  undefined8 unaff_x28;
  undefined1 **ppuVar28;
  undefined1 auVar29 [16];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  int aiStack_210 [4];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  int aiStack_184 [5];
  long lStack_140;
  undefined8 *puStack_138;
  long *plStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  plVar8 = param_3;
  if ((bRam0000000003eb4c0a & 1) == 0) {
    func_0x00f78a20(0x3d3d180);
    func_0x00f78a20(0x3d3d188);
    param_1 = (long *)func_0x00f78a20(0x3d3d190);
    bRam0000000003eb4c0a = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  if (param_3 != (long *)0x0) {
    uVar18 = (ulong)*(uint *)(param_3 + 3);
    if (0 < (int)*(uint *)(param_3 + 3)) {
      uVar22 = 0;
      lVar25 = 0x20;
      do {
        if ((uVar18 & 0xffffffff) <= uVar22) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        param_1 = (long *)/*Core.Networking.NetworkTournament$$GetTotalNetworkScore*/ func_0x01660f34(param_2,*(undefined4 *)(param_3[2] + lVar25 + 4),
                                          &uStack_50,0);
        if ((int)param_1 != 0) {
          if (*(uint *)(param_3 + 3) <= uVar22) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          param_1 = (long *)/*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$set_Item*/ func_0x0251f320(param_3,uVar22,*(undefined8 *)(param_3[2] + lVar25),
                                            uStack_50._4_4_,uRam0000000003d3d190);
        }
        uVar22 = uVar22 + 1;
        uVar18 = (ulong)(int)param_3[3];
        lVar25 = lVar25 + 0x10;
      } while ((long)uVar22 < (long)uVar18);
    }
    return param_1;
  }
  auVar29 = func_0x00f78af4();
  plVar9 = auVar29._8_8_;
  puVar16 = auVar29._0_8_;
  plVar4 = &uStack_b0;
  puStack_58 = &Atlas_Contexts_RoundResultsState__SortEntriesByStarCountFromTournamentData;
  ppuVar28 = &puStack_60;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4c0b & 1) == 0) {
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3d168);
    func_0x00f78a20(0x3d3d170);
    func_0x00f78a20(0x3d3b5c0);
    bRam0000000003eb4c0b = 1;
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (plVar9 != (long *)0x0) {
    /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Clear*/ func_0x0251f970(plVar9,uRam0000000003d3d170);
    if (puVar16[1] != 0) {
      /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(&uStack_b0,puVar16[1],uRam0000000003d3b5c0);
      uVar17 = 1;
      while (uVar18 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(&uStack_b0,uRam0000000003d32b98), (uVar18 & 1) != 0) {
        /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(plVar9,(ulong)uVar17 | uStack_a0 << 0x20,uStack_a0 >> 0x20,
                        uRam0000000003d3d168);
        uVar17 = uVar17 + 1;
      }
      plVar8 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_b0,uRam0000000003d32b90);
      return plVar8;
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar9 = (long *)___cxa_begin_catch();
    plVar9 = (long *)*plVar9;
    ___cxa_end_catch();
    plVar10 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_b0,*puVar16);
    if (plVar9 == (long *)0x0) {
      return plVar10;
    }
    func_0x00f78ac0(plVar9,0);
  }
  lVar25 = __Unwind_Resume();
  puStack_b8 = &Atlas_Contexts_RoundResultsState__OnResultsFinished;
  if ((bRam0000000003eb4c0e & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d27638);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d40658);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4c0e = 1;
  }
  uVar23 = 0x3d40650;
  iVar6 = Atlas_Contexts_RoundResultsState__IsTournamentOver(lVar25);
  uVar15 = uVar23;
  if (iVar6 == 0) {
    puVar11 = *(undefined8 **)(lVar25 + 0xa0);
    lVar12 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar25,uRam0000000003d40650);
    if ((lVar12 != 0) && (puVar11 != (undefined8 *)0x0)) {
      plVar8 = *(long **)(lVar12 + 0x10);
      puVar16 = (undefined8 *)0x3eb4000;
      if ((bRam0000000003eb4e73 & 1) == 0) {
        func_0x00f78a20(0x3d3b110,plVar8,0);
        func_0x00f78a20(0x3d1f498);
        func_0x00f78a20(0x3d66320);
        func_0x00f78a20(0x3d663f8);
        func_0x00f78a20(0x3d66300);
        func_0x00f78a20(0x3d66318);
        func_0x00f78a20(0x3d663f0);
        func_0x00f78a20(0x3d6b9f8);
        bRam0000000003eb4e73 = 1;
      }
      puStack_100 = (undefined8 *)0x0;
      lStack_f8 = 0;
      uStack_108 = 0;
      if (puVar11[4] == 0) {
code_r0x0152a8c4:
        plVar9 = plVar8;
        func_0x00f78af4();
code_r0x0152a8c8:
        uVar15 = func_0x00f78b24();
code_r0x0152a8d4:
        auVar29 = func_0x00f78ac0(uVar15,0);
        plVar8 = plVar9;
      }
      else {
        plVar9 = (long *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(puVar11[4],0);
        if ((int)plVar9 == 0) {
          return plVar9;
        }
        if ((puVar11[0x16] == 0) ||
           (/*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(puVar11[0x16],puVar11[0x1c],0), plVar8 == (long *)0x0))
        goto code_r0x0152a8c4;
        auVar29._8_8_ = puVar11[0x1c];
        auVar29._0_8_ = puVar11;
        if ((int)plVar8[2] != 2) {
          /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(puVar11,puVar11[0x1c],&lStack_f8,&puStack_100);
          if ((((puVar11[0x1c] == 0) ||
               (/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(puVar11[0x1c],uRam0000000003d3b110), unaff_x22 = lStack_f8,
               lStack_f8 == 0)) || (puVar11[5] == 0)) ||
             ((/*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar11[5],*(undefined8 *)(lStack_f8 + 0x18),(long)&uStack_108 + 2,0)
              , puVar16 = puStack_100, puStack_100 == (undefined8 *)0x0 || (puVar11[5] == 0))))
          goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar11[5],puStack_100[3],&uStack_108,0);
          if (puVar11[0x16] == 0) goto code_r0x0152a8c4;
          uVar15 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(puVar11[0x16],unaff_x22,0);
          if (puVar11[5] == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar11[5],uVar15,(long)&uStack_108 + 6,0);
          if (puVar11[0x16] == 0) goto code_r0x0152a8c4;
          uVar15 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(puVar11[0x16],puVar16,0);
          if (puVar11[5] == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar11[5],uVar15,(long)&uStack_108 + 4,0);
          plVar9 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0xc);
          if (plVar9 == (long *)0x0) goto code_r0x0152a8c4;
          if ((/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8 != 0) &&
             (lVar25 = func_0x00f78adc(/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8,*(undefined8 *)(*plVar9 + 0x40)),
             lVar25 == 0)) goto code_r0x0152a8d0;
          uVar18 = plVar9[3];
          if ((int)uVar18 == 0) goto code_r0x0152a8c8;
          plVar9[4] = /*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8;
          unaff_x22 = *(long *)(unaff_x22 + 0x18);
          if (unaff_x22 != 0) {
            lVar25 = func_0x00f78adc(unaff_x22,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar25 == 0) goto code_r0x0152a8d0;
            uVar18 = plVar9[3];
          }
          if ((uVar18 & 0xfffffffe) == 0) goto code_r0x0152a8c8;
          plVar9[5] = unaff_x22;
          unaff_x22 = 0x3d66300;
          lVar25 = 0x3d66300;
          if (/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300 != 0) {
            lVar12 = func_0x00f78adc(/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar12 == 0) goto code_r0x0152a8d0;
            uVar18 = plVar9[3];
          }
          if ((uint)uVar18 < 3) goto code_r0x0152a8c8;
          plVar9[6] = /*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300;
          puVar16 = (undefined8 *)puVar16[3];
          if (puVar16 != (undefined8 *)0x0) {
            lVar12 = func_0x00f78adc(puVar16,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar12 == 0) goto code_r0x0152a8d0;
            uVar18 = plVar9[3];
          }
          uVar17 = (uint)uVar18;
          if ((uVar18 & 0xfffffffc) == 0) goto code_r0x0152a8c8;
          plVar9[7] = (long)puVar16;
          puVar16 = (undefined8 *)0x3d663f0;
          unaff_x22 = lVar25;
          if (/*STR(' typeKey1: ')*/ lRam0000000003d663f0 != 0) {
            lVar25 = func_0x00f78adc(/*STR(' typeKey1: ')*/ lRam0000000003d663f0,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar25 == 0) goto code_r0x0152a8d0;
            uVar17 = (uint)plVar9[3];
          }
          if (uVar17 < 5) goto code_r0x0152a8c8;
          plVar9[8] = /*STR(' typeKey1: ')*/ lRam0000000003d663f0;
          puVar16 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_108 + 6,0);
          if ((puVar16 == (undefined8 *)0x0) ||
             (lVar25 = func_0x00f78adc(puVar16,*(undefined8 *)(*plVar9 + 0x40)), lVar25 != 0)) {
            uVar17 = *(uint *)(plVar9 + 3);
            if (5 < uVar17) {
              plVar9[9] = (long)puVar16;
              puVar16 = (undefined8 *)0x3d663f8;
              if (/*STR(' typeKey2: ')*/ lRam0000000003d663f8 != 0) {
                lVar25 = func_0x00f78adc(/*STR(' typeKey2: ')*/ lRam0000000003d663f8,*(undefined8 *)(*plVar9 + 0x40));
                if (lVar25 == 0) goto code_r0x0152a8d0;
                uVar17 = *(uint *)(plVar9 + 3);
              }
              if (6 < uVar17) {
                plVar9[10] = /*STR(' typeKey2: ')*/ lRam0000000003d663f8;
                puVar16 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_108 + 4,0);
                if ((puVar16 != (undefined8 *)0x0) &&
                   (lVar25 = func_0x00f78adc(puVar16,*(undefined8 *)(*plVar9 + 0x40)), lVar25 == 0))
                goto code_r0x0152a8d0;
                uVar17 = (uint)plVar9[3];
                if ((plVar9[3] & 0xfffffff8U) != 0) {
                  plVar9[0xb] = (long)puVar16;
                  puVar16 = (undefined8 *)0x3d66318;
                  if (/*STR(' mapKey1: ')*/ lRam0000000003d66318 != 0) {
                    lVar25 = func_0x00f78adc(/*STR(' mapKey1: ')*/ lRam0000000003d66318,*(undefined8 *)(*plVar9 + 0x40));
                    if (lVar25 == 0) goto code_r0x0152a8d0;
                    uVar17 = (uint)plVar9[3];
                  }
                  if (8 < uVar17) {
                    plVar9[0xc] = /*STR(' mapKey1: ')*/ lRam0000000003d66318;
                    puVar16 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_108 + 2,0);
                    if ((puVar16 != (undefined8 *)0x0) &&
                       (lVar25 = func_0x00f78adc(puVar16,*(undefined8 *)(*plVar9 + 0x40)),
                       lVar25 == 0)) goto code_r0x0152a8d0;
                    uVar17 = *(uint *)(plVar9 + 3);
                    if (9 < uVar17) {
                      plVar9[0xd] = (long)puVar16;
                      puVar16 = (undefined8 *)0x3d66320;
                      if (/*STR(' mapKey2: ')*/ lRam0000000003d66320 != 0) {
                        lVar25 = func_0x00f78adc(/*STR(' mapKey2: ')*/ lRam0000000003d66320,
                                                 *(undefined8 *)(*plVar9 + 0x40));
                        if (lVar25 == 0) goto code_r0x0152a8d0;
                        uVar17 = *(uint *)(plVar9 + 3);
                      }
                      if (10 < uVar17) {
                        plVar9[0xe] = /*STR(' mapKey2: ')*/ lRam0000000003d66320;
                        puVar16 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c(&uStack_108,0);
                        if ((puVar16 != (undefined8 *)0x0) &&
                           (lVar25 = func_0x00f78adc(puVar16,*(undefined8 *)(*plVar9 + 0x40)),
                           lVar25 == 0)) goto code_r0x0152a8d0;
                        if (0xb < *(uint *)(plVar9 + 3)) {
                          plVar9[0xf] = (long)puVar16;
                          /*System.String$$Concat*/ func_0x029cfadc(plVar9,0);
                          plVar8 = plVar9;
                          if ((puVar11[4] != 0) &&
                             (plVar9 = *(long **)(puVar11[4] + 0x20), plVar9 != (long *)0x0)) {
                            plVar8 = (long *)(**(code **)(*plVar9 + 0x1c8))
                                                       (plVar9,(long)uStack_108._2_2_,
                                                        (long)uStack_108._6_2_,
                                                        (long)(short)uStack_108,
                                                        (long)uStack_108._4_2_,&UNK_00001770,
                                                        *(undefined8 *)(*plVar9 + 0x1d0));
                            return plVar8;
                          }
                          goto code_r0x0152a8c4;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto code_r0x0152a8c8;
          }
code_r0x0152a8d0:
          uVar15 = func_0x00f78b14();
          goto code_r0x0152a8d4;
        }
      }
      uVar22 = auVar29._0_8_;
      uVar18 = 0x3eb4000;
      lStack_140 = unaff_x22;
      puStack_138 = puVar16;
      plStack_130 = plVar8;
      puStack_128 = puVar11;
      if ((bRam0000000003eb4e75 & 1) == 0) {
        func_0x00f78a20(0x3d2e6f0);
        func_0x00f78a20(0x3d2e6f8);
        func_0x00f78a20(0x3d2e700);
        func_0x00f78a20(0x3d2e710);
        func_0x00f78a20(0x3d2e748);
        func_0x00f78a20(0x3d2e750);
        func_0x00f78a20(0x3d32bf0);
        func_0x00f78a20(0x3d32980);
        func_0x00f78a20(0x3d33d98);
        func_0x00f78a20(0x3d33da0);
        func_0x00f78a20(0x3d32988);
        func_0x00f78a20(0x3d32bf8);
        func_0x00f78a20(0x3d32c00);
        func_0x00f78a20(0x3d32990);
        func_0x00f78a20(0x3d33dd0);
        func_0x00f78a20(0x3d39240);
        func_0x00f78a20(0x3d39248);
        func_0x00f78a20(0x3d3b120);
        func_0x00f78a20(0x3d3b6b8);
        func_0x00f78a20(0x3d3b130);
        func_0x00f78a20(0x3d3b0f8);
        func_0x00f78a20(0x3d3b140);
        func_0x00f78a20(0x3d3b6c0);
        func_0x00f78a20(0x3d3b148);
        func_0x00f78a20(0x3d1db90);
        func_0x00f78a20(0x3d65ed8);
        func_0x00f78a20(0x3d66270);
        func_0x00f78a20(0x3d6cdb0);
        func_0x00f78a20(0x3d6cdc0);
        func_0x00f78a20(0x3d6cdb8);
        func_0x00f78a20(0x3d6cdc8);
        bRam0000000003eb4e75 = 1;
      }
      uStack_190 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_1b8 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      lStack_1f0 = 0;
      uStack_1e8 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      aiStack_210[3] = 0;
      if (*(long *)(uVar22 + 0xb8) != 0) {
        uVar18 = 0x3d1d000;
        /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(uVar22 + 0xb8),uRam0000000003d2e6f8);
        plVar8 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
        /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(plVar8,auVar29._8_8_,uRam0000000003d3b0f8);
        if (((*(long *)(uVar22 + 0x20) != 0) &&
            (lVar25 = *(long *)(*(long *)(uVar22 + 0x20) + 0x20), lVar25 != 0)) &&
           (lVar25 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar25,0), lVar25 != 0)) {
          uVar18 = 0x3d6c000;
          aiStack_184[0] = *(int *)(lVar25 + 0x18);
          uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_184,0);
          /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar15,0);
          if (((*(long *)(uVar22 + 0x20) != 0) &&
              (lVar25 = *(long *)(*(long *)(uVar22 + 0x20) + 0x20), lVar25 != 0)) &&
             (lVar25 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar25,0), lVar25 != 0)) {
            uVar18 = 0x3d32bf8;
            /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_238,lVar25,uRam0000000003d3b6b8);
            uStack_1a8 = uStack_230;
            uStack_1b0 = uStack_238;
            uStack_198 = uStack_220;
            uStack_1a0 = uStack_228;
            uStack_190 = uStack_218;
code_r0x0152aba4:
            uVar14 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_1b0,uRam0000000003d32bf8);
            if ((uVar14 & 1) != 0) {
              sVar3 = uStack_198._4_2_;
              sVar1 = (short)uStack_198;
              if (uStack_198._4_2_ != uStack_1a0._4_2_) {
                sVar1 = uStack_1a0._4_2_;
              }
              if (*(long *)(uVar22 + 0xb8) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              iVar6 = (int)sVar1;
              uVar14 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(uVar22 + 0xb8),iVar6,uRam0000000003d2e700);
              if ((uVar14 & 1) == 0) {
                if (*(long *)(uVar22 + 0xb8) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0152af9c;
                }
                /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(uVar22 + 0xb8),iVar6,0,uRam0000000003d2e6f0);
              }
              lVar25 = *(long *)(uVar22 + 0xb8);
              if (lVar25 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              aiStack_184[0] = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar25,iVar6,uRam0000000003d2e748);
              /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar25,iVar6,aiStack_184[0] + 1,uRam0000000003d2e750);
              if (*(long *)(uVar22 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar22 + 0x28),(int)sVar3,&uStack_1b8,0);
              if (plVar8 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar17 = *(uint *)(plVar8 + 3);
              if (0 < (int)uVar17) {
                uVar24 = 0;
                do {
                  if (uVar17 <= uVar24) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar25 = *(long *)(plVar8[2] + (long)(int)uVar24 * 8 + 0x20);
                  if (lVar25 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar14 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar25 + 0x18),uStack_1b8,0);
                  if ((uVar14 & 1) != 0) {
                    /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,uStack_1b8,0);
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar8,uVar24,uRam0000000003d3b130);
                    break;
                  }
                  uVar24 = uVar24 + 1;
                  uVar17 = *(uint *)(plVar8 + 3);
                } while ((int)uVar24 < (int)uVar17);
              }
              goto code_r0x0152aba4;
            }
            aiStack_210[0] = 0x136;
            /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_1b0,uRam0000000003d32bf0);
            aiStack_210[3] = 0;
            if (*(long *)(uVar22 + 0xb8) != 0) {
              /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_238,*(long *)(uVar22 + 0xb8),uRam0000000003d2e710);
              uStack_1d8 = uStack_230;
              uStack_1e0 = uStack_238;
              uStack_1c8 = uStack_220;
              uStack_1d0 = uStack_228;
code_r0x0152ad1c:
              uVar18 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_1e0,uRam0000000003d33da0);
              if ((uVar18 & 1) != 0) {
                if (*(int *)(uVar22 + 0x10) <= uStack_1d0._4_4_) {
                  if (*(long *)(uVar22 + 0x28) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar22 + 0x28),(int)(short)uStack_1d0,&uStack_1e8,0);
                  if (plVar8 == (long *)0x0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar17 = *(uint *)(plVar8 + 3);
                  if (0 < (int)uVar17) {
                    uVar24 = 0;
                    do {
                      if (uVar17 <= uVar24) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar25 = *(long *)(plVar8[2] + (long)(int)uVar24 * 8 + 0x20);
                      if (lVar25 == 0) {
                        func_0x00f78af4();
                        goto code_r0x0152af9c;
                      }
                      uVar18 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar25 + 0x18),uStack_1e8,0);
                      if ((uVar18 & 1) != 0) {
                        /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,uStack_1e8,0);
                        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar8,uVar24,uRam0000000003d3b130);
                        break;
                      }
                      uVar24 = uVar24 + 1;
                      uVar17 = *(uint *)(plVar8 + 3);
                    } while ((int)uVar24 < (int)uVar17);
                  }
                }
                goto code_r0x0152ad1c;
              }
              uVar22 = (ulong)(uint)aiStack_210[3];
              bVar5 = aiStack_210[3] != 0xffffffff;
              aiStack_210[3] = aiStack_210[3] + 1;
              uVar18 = (ulong)(uint)aiStack_210[3];
              aiStack_210[0] = 0x1d1;
              /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_1e0,uRam0000000003d33d98);
              if (bVar5) goto code_r0x0152ae34;
              uVar18 = 0;
              iVar6 = 0;
              if (plVar8 != (long *)0x0) goto code_r0x0152ae5c;
            }
          }
        }
      }
      do {
        func_0x00f78af4();
code_r0x0152ae34:
        if (aiStack_210[(int)(uint)uVar22] == 0x1d1) {
          uVar18 = uVar22;
          aiStack_210[3] = (uint)uVar22;
        }
        iVar6 = (int)uVar18;
      } while (plVar8 == (long *)0x0);
code_r0x0152ae5c:
      aiStack_184[0] = (int)plVar8[3];
      uVar15 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_184,0);
      uVar15 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar15,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_200,plVar8,uRam0000000003d3b120);
      while( true ) {
        uVar18 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_200,uRam0000000003d32988);
        if ((uVar18 & 1) == 0) {
          aiStack_210[iVar6] = 0x23d;
          aiStack_210[3] = aiStack_210[3] + 1;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_200,uRam0000000003d32980);
          if ((int)plVar8[3] < 2) {
            plVar8 = auVar29._8_8_;
          }
          return plVar8;
        }
        if (lStack_1f0 == 0) break;
        uVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar15,*(undefined8 *)(lStack_1f0 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
      }
      func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
      pcVar26 = (code *)SoftwareBreakpoint(1,0x152afa0);
      (*pcVar26)();
    }
  }
  else {
    puVar11 = (undefined8 *)func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
    Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor(puVar11,0);
    lVar12 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar25,uRam0000000003d40650);
    uVar15 = 0x3d40650;
    if ((lVar12 != 0) && (puVar11 != (undefined8 *)0x0)) {
      puVar11[2] = *(undefined8 *)(lVar12 + 0x10);
      lVar12 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar25,uRam0000000003d40658);
      uVar15 = uVar23;
      if (lVar12 != 0) {
        puVar11[3] = *(undefined8 *)(lVar12 + 0x18);
        *(undefined1 *)(puVar11 + 4) = 1;
        uVar15 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ uRam0000000003d194d8;
        plVar10 = *(long **)(lVar25 + 0x78);
        if (((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar13 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
        lVar25 = 0;
        if (plVar10 != (long *)0x0) {
          uVar15 = 0x3eb4000;
          goto code_r0x01e7159c;
        }
      }
    }
  }
  auVar29 = func_0x00f78af4();
  plVar9 = auVar29._8_8_;
  lVar12 = auVar29._0_8_;
  plVar4 = &lStack_140;
  ppuVar28 = (undefined1 **)&stack0xffffffffffffff10;
  uStack_108 = uVar15;
  puStack_100 = puVar11;
  lStack_f8 = lVar25;
  if ((bRam0000000003eb4c0f & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d297a0);
    func_0x00f78a20(0x3d1a1a8);
    bRam0000000003eb4c0f = 1;
  }
  if (*(long *)(lVar12 + 0xa0) != 0) {
    puStack_138 = (undefined8 *)plVar9[1];
    lStack_140 = *plVar9;
    puStack_128 = (undefined8 *)plVar9[3];
    plStack_130 = (long *)plVar9[2];
    plVar8 = (long *)0x0;
    /*Atlas.UI.VotingManager$$SetVoteData*/ func_0x01529c00(*(long *)(lVar12 + 0xa0),&lStack_140);
    lVar25 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar12,uRam0000000003d40650);
    if (lVar25 != 0) {
      unaff_x22 = 0x3d1a000;
      unaff_x23 = 0x3d25000;
      uVar15 = *(undefined8 *)(lVar25 + 0x10);
      puVar11 = (undefined8 *)func_0x00f78aec(/*Atlas.Contexts.VotingState.VotingStateTransitionData_TypeInfo*/ uRam0000000003d297a0);
      plVar8 = (long *)((long)&MACH_HEADER.magic + 1);
      /*Atlas.Contexts.VotingState.VotingStateTransitionData$$.ctor*/ func_0x0156ebc8(puVar11,uVar15,1,0);
      uVar15 = /*Atlas.Contexts.VotingState_var*/ uRam0000000003d1a1a8;
      plVar10 = *(long **)(lVar12 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar13 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
      if (plVar10 != (long *)0x0) {
        puStack_b8 = &UNK_014e6858;
        plVar9 = plVar10;
        puVar16 = puVar11;
code_r0x01e7159c:
        *(undefined8 *)((long)plVar4 + -0x60) = unaff_x28;
        *(undefined8 *)((long)plVar4 + -0x58) = unaff_x27;
        *(undefined8 *)((long)plVar4 + -0x50) = unaff_x26;
        *(undefined8 *)((long)plVar4 + -0x48) = unaff_x25;
        *(undefined8 *)((long)plVar4 + -0x40) = unaff_x24;
        *(undefined8 *)((long)plVar4 + -0x38) = unaff_x23;
        *(long *)((long)plVar4 + -0x30) = unaff_x22;
        *(undefined8 *)((long)plVar4 + -0x28) = uVar15;
        *(undefined8 **)((long)plVar4 + -0x20) = puVar16;
        *(long **)((long)plVar4 + -0x18) = plVar9;
        *(undefined1 ***)((long)plVar4 + -0x10) = ppuVar28;
        *(undefined **)((long)plVar4 + -8) = puStack_b8;
        *(long **)((long)plVar4 + -0x68) = plVar10;
        lVar25 = plVar10[0xd];
        if (lVar25 == 0) {
          puVar27 = (undefined1 *)((long)plVar4 + -0x68);
          lVar12 = 1;
        }
        else {
          lVar12 = *(long *)(lVar25 + 0x18);
          if (lVar12 == 0) {
            return plVar10;
          }
          puVar27 = (undefined1 *)(lVar25 + 0x20);
        }
        lVar25 = 0;
        do {
          lVar19 = *(long *)(puVar27 + lVar25 * 8);
          pcVar26 = *(code **)(lVar19 + 0x10);
          plVar8 = *(long **)(lVar19 + 0x20);
          lVar19 = *(long *)(lVar19 + 0x28);
          if (*(short *)(lVar19 + 0x48) == -1) {
            func_0x00f78ad8(lVar19);
          }
          iVar6 = func_0x00f78a4c(lVar19);
          bVar5 = *(char *)(lVar19 + 0x4a) == '\x03';
          if (iVar6 == 0) {
            if (bVar5) {
              if (plVar8 == (long *)0x0) {
code_r0x01e7173c:
                plVar8 = (long *)(*pcVar26)(plVar13,1,puVar11,lVar19);
              }
              else {
                if (((*(short *)(lVar19 + 0x48) == -1) || ((*(byte *)(*plVar8 + 0x115) & 1) != 0))
                   || (plVar10[3] == 0)) goto code_r0x01e7162c;
                iVar6 = func_0x00f78a44(lVar19);
                iVar7 = func_0x00f78ec0(lVar19);
                if (iVar6 == 0) {
                  uVar2 = *(ushort *)(lVar19 + 0x48);
                  if (iVar7 == 0) {
                    lVar19 = *plVar8 + (ulong)uVar2 * 0x10;
                    plVar8 = (long *)(**(code **)(lVar19 + 0x138))
                                               (plVar8,plVar13,1,puVar11,
                                                *(undefined8 *)(lVar19 + 0x140));
                    goto code_r0x01e71750;
                  }
                  lVar19 = func_0x00f78a48(lVar19);
                  lVar20 = *plVar8;
                  uVar18 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar18 != 0) {
                    piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == lVar19) {
                        puVar16 = (undefined8 *)
                                  (lVar20 + (long)(int)(*piVar21 + (uint)uVar2) * 0x10 + 0x138);
                        goto code_r0x01e718f4;
                      }
                      piVar21 = piVar21 + 4;
                      uVar18 = uVar18 - 1;
                    } while (uVar18 != 0);
                  }
                  puVar16 = (undefined8 *)func_0x00fac1f0(plVar8,lVar19,(ulong)uVar2);
code_r0x01e718f4:
                  pcVar26 = (code *)*puVar16;
                  puVar16 = (undefined8 *)puVar16[1];
                }
                else {
                  if (iVar7 == 0) {
                    uVar15 = *(undefined8 *)
                              (*plVar8 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar20 = *plVar8;
                    uVar18 = (ulong)*(ushort *)(lVar20 + 0x12a);
                    if (uVar18 != 0) {
                      piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == *(long *)(lVar19 + 0x18)) {
                          lVar20 = lVar20 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar19 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e718cc;
                        }
                        piVar21 = piVar21 + 4;
                        uVar18 = uVar18 - 1;
                      } while (uVar18 != 0);
                    }
                    lVar20 = func_0x00fac1f0(plVar8);
code_r0x01e718cc:
                    uVar15 = *(undefined8 *)(lVar20 + 8);
                  }
                  puVar16 = (undefined8 *)func_0x00f78acc(uVar15,lVar19);
                  pcVar26 = (code *)*puVar16;
                }
                plVar8 = (long *)(*pcVar26)(plVar8,plVar13,1,puVar11,puVar16);
              }
            }
            else {
              if ((*(short *)(lVar19 + 0x48) == -1) || (plVar10[3] == 0)) goto code_r0x01e7173c;
              iVar6 = func_0x00f78a44(lVar19);
              iVar7 = func_0x00f78ec0(lVar19);
              if (iVar6 == 0) {
                uVar2 = *(ushort *)(lVar19 + 0x48);
                if (iVar7 == 0) {
                  lVar19 = *plVar13 + (ulong)uVar2 * 0x10;
                  plVar8 = (long *)(**(code **)(lVar19 + 0x138))
                                             (plVar13,1,puVar11,*(undefined8 *)(lVar19 + 0x140));
                  goto code_r0x01e71750;
                }
                lVar19 = func_0x00f78a48(lVar19);
                lVar20 = *plVar13;
                uVar18 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar18 != 0) {
                  piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == lVar19) {
                      puVar16 = (undefined8 *)
                                (lVar20 + (long)(int)(*piVar21 + (uint)uVar2) * 0x10 + 0x138);
                      goto code_r0x01e71880;
                    }
                    piVar21 = piVar21 + 4;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
                puVar16 = (undefined8 *)func_0x00fac1f0(plVar13,lVar19,(ulong)uVar2);
code_r0x01e71880:
                pcVar26 = (code *)*puVar16;
                puVar16 = (undefined8 *)puVar16[1];
              }
              else {
                if (iVar7 == 0) {
                  uVar15 = *(undefined8 *)
                            (*plVar13 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar20 = *plVar13;
                  uVar18 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar18 != 0) {
                    piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)(lVar19 + 0x18)) {
                        lVar20 = lVar20 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar19 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71858;
                      }
                      piVar21 = piVar21 + 4;
                      uVar18 = uVar18 - 1;
                    } while (uVar18 != 0);
                  }
                  lVar20 = func_0x00fac1f0(plVar13);
code_r0x01e71858:
                  uVar15 = *(undefined8 *)(lVar20 + 8);
                }
                puVar16 = (undefined8 *)func_0x00f78acc(uVar15,lVar19);
                pcVar26 = (code *)*puVar16;
              }
              plVar8 = (long *)(*pcVar26)(plVar13,1,puVar11,puVar16);
            }
          }
          else {
            if (bVar5) goto code_r0x01e7173c;
code_r0x01e7162c:
            plVar8 = (long *)(*pcVar26)(plVar8,plVar13,1,puVar11,lVar19);
          }
code_r0x01e71750:
          lVar25 = lVar25 + 1;
          if (lVar25 == lVar12) {
            return plVar8;
          }
        } while( true );
      }
    }
  }
  plVar9 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4c10 & 1) == 0) {
    func_0x00f78a20(0x3d40648);
    bRam0000000003eb4c10 = 1;
  }
  if (plVar9 != (long *)0x0) {
    return plVar9;
  }
  auVar29 = func_0x00f78af4(0,uRam0000000003d40648);
  plVar9 = auVar29._0_8_;
  plVar9[2] = *plVar8;
  plVar9[4] = auVar29._8_8_;
  plVar9[5] = (long)plVar8;
  return plVar9;
}



// ============================================================
// RVA: 0x14e643c | Atlas.Contexts.RoundResultsState.SortEntriesByStarCountFromTournamentData
// ============================================================

/* WARNING: Possible PIC construction at 0x014e6854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e6858) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */

long * Atlas_Contexts_RoundResultsState__SortEntriesByStarCountFromTournamentData
                 (undefined8 *param_1,long *param_2,long *param_3)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  int extraout_w1;
  uint uVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  undefined8 uVar22;
  ulong uVar23;
  uint uVar24;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar26;
  undefined8 unaff_x28;
  undefined1 auVar27 [16];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  int aiStack_1c0 [4];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  int aiStack_134 [5];
  long lStack_f0;
  undefined8 *puStack_e8;
  long *plStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  plVar4 = &uStack_60;
  puVar26 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4c0b & 1) == 0) {
    func_0x00f78a20(0x3d32b90);
    func_0x00f78a20(0x3d32b98);
    func_0x00f78a20(0x3d32ba0);
    func_0x00f78a20(0x3d3d168);
    func_0x00f78a20(0x3d3d170);
    func_0x00f78a20(0x3d3b5c0);
    bRam0000000003eb4c0b = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (param_2 != (long *)0x0) {
    /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Clear*/ func_0x0251f970(param_2,uRam0000000003d3d170);
    if (param_1[1] != 0) {
      /*System.Collections.Generic.List<NetworkScore>$$GetEnumerator*/ func_0x0241a044(&uStack_60,param_1[1],uRam0000000003d3b5c0);
      uVar18 = 1;
      while (uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkScore>$$MoveNext*/ func_0x01f6de84(&uStack_60,uRam0000000003d32b98), (uVar8 & 1) != 0) {
        /*System.Collections.Generic.List<EndOfRoundScreen.LeaderboardEntry>$$Add*/ func_0x0251f67c(param_2,(ulong)uVar18 | uStack_50 << 0x20,uStack_50 >> 0x20,
                        uRam0000000003d3d168);
        uVar18 = uVar18 + 1;
      }
      plVar9 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_60,uRam0000000003d32b90);
      return plVar9;
    }
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    param_2 = (long *)___cxa_begin_catch();
    param_2 = (long *)*param_2;
    ___cxa_end_catch();
    plVar9 = (long *)/*System.Collections.Generic.List.Enumerator<NetworkScore>$$Dispose*/ func_0x01f6de80(&uStack_60,*param_1);
    if (param_2 == (long *)0x0) {
      return plVar9;
    }
    func_0x00f78ac0(param_2,0);
  }
  lVar10 = __Unwind_Resume();
  puStack_68 = &Atlas_Contexts_RoundResultsState__OnResultsFinished;
  if ((bRam0000000003eb4c0e & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d27638);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d40658);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4c0e = 1;
  }
  uVar22 = 0x3d40650;
  iVar6 = Atlas_Contexts_RoundResultsState__IsTournamentOver(lVar10);
  uVar16 = uVar22;
  if (iVar6 == 0) {
    puVar11 = *(undefined8 **)(lVar10 + 0xa0);
    lVar12 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar10,uRam0000000003d40650);
    if ((lVar12 != 0) && (puVar11 != (undefined8 *)0x0)) {
      plVar9 = *(long **)(lVar12 + 0x10);
      puVar17 = (undefined8 *)0x3eb4000;
      if ((bRam0000000003eb4e73 & 1) == 0) {
        func_0x00f78a20(0x3d3b110,plVar9,0);
        func_0x00f78a20(0x3d1f498);
        func_0x00f78a20(0x3d66320);
        func_0x00f78a20(0x3d663f8);
        func_0x00f78a20(0x3d66300);
        func_0x00f78a20(0x3d66318);
        func_0x00f78a20(0x3d663f0);
        func_0x00f78a20(0x3d6b9f8);
        bRam0000000003eb4e73 = 1;
      }
      puStack_b0 = (undefined8 *)0x0;
      lStack_a8 = 0;
      uStack_b8 = 0;
      if (puVar11[4] == 0) {
code_r0x0152a8c4:
        plVar13 = plVar9;
        func_0x00f78af4();
code_r0x0152a8c8:
        uVar16 = func_0x00f78b24();
code_r0x0152a8d4:
        auVar27 = func_0x00f78ac0(uVar16,0);
        plVar9 = plVar13;
      }
      else {
        plVar13 = (long *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(puVar11[4],0);
        if ((int)plVar13 == 0) {
          return plVar13;
        }
        if ((puVar11[0x16] == 0) ||
           (/*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(puVar11[0x16],puVar11[0x1c],0), plVar9 == (long *)0x0))
        goto code_r0x0152a8c4;
        auVar27._8_8_ = puVar11[0x1c];
        auVar27._0_8_ = puVar11;
        if ((int)plVar9[2] != 2) {
          /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(puVar11,puVar11[0x1c],&lStack_a8,&puStack_b0);
          if ((((puVar11[0x1c] == 0) ||
               (/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(puVar11[0x1c],uRam0000000003d3b110), unaff_x22 = lStack_a8,
               lStack_a8 == 0)) || (puVar11[5] == 0)) ||
             ((/*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar11[5],*(undefined8 *)(lStack_a8 + 0x18),(long)&uStack_b8 + 2,0),
              puVar17 = puStack_b0, puStack_b0 == (undefined8 *)0x0 || (puVar11[5] == 0))))
          goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar11[5],puStack_b0[3],&uStack_b8,0);
          if (puVar11[0x16] == 0) goto code_r0x0152a8c4;
          uVar16 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(puVar11[0x16],unaff_x22,0);
          if (puVar11[5] == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar11[5],uVar16,(long)&uStack_b8 + 6,0);
          if (puVar11[0x16] == 0) goto code_r0x0152a8c4;
          uVar16 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(puVar11[0x16],puVar17,0);
          if (puVar11[5] == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(puVar11[5],uVar16,(long)&uStack_b8 + 4,0);
          plVar13 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0xc);
          if (plVar13 == (long *)0x0) goto code_r0x0152a8c4;
          if ((/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8 != 0) &&
             (lVar10 = func_0x00f78adc(/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8,*(undefined8 *)(*plVar13 + 0x40)),
             lVar10 == 0)) goto code_r0x0152a8d0;
          uVar8 = plVar13[3];
          if ((int)uVar8 == 0) goto code_r0x0152a8c8;
          plVar13[4] = /*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8;
          unaff_x22 = *(long *)(unaff_x22 + 0x18);
          if (unaff_x22 != 0) {
            lVar10 = func_0x00f78adc(unaff_x22,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar10 == 0) goto code_r0x0152a8d0;
            uVar8 = plVar13[3];
          }
          if ((uVar8 & 0xfffffffe) == 0) goto code_r0x0152a8c8;
          plVar13[5] = unaff_x22;
          unaff_x22 = 0x3d66300;
          lVar10 = 0x3d66300;
          if (/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300 != 0) {
            lVar12 = func_0x00f78adc(/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar12 == 0) goto code_r0x0152a8d0;
            uVar8 = plVar13[3];
          }
          if ((uint)uVar8 < 3) goto code_r0x0152a8c8;
          plVar13[6] = /*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300;
          puVar17 = (undefined8 *)puVar17[3];
          if (puVar17 != (undefined8 *)0x0) {
            lVar12 = func_0x00f78adc(puVar17,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar12 == 0) goto code_r0x0152a8d0;
            uVar8 = plVar13[3];
          }
          uVar18 = (uint)uVar8;
          if ((uVar8 & 0xfffffffc) == 0) goto code_r0x0152a8c8;
          plVar13[7] = (long)puVar17;
          puVar17 = (undefined8 *)0x3d663f0;
          unaff_x22 = lVar10;
          if (/*STR(' typeKey1: ')*/ lRam0000000003d663f0 != 0) {
            lVar10 = func_0x00f78adc(/*STR(' typeKey1: ')*/ lRam0000000003d663f0,*(undefined8 *)(*plVar13 + 0x40));
            if (lVar10 == 0) goto code_r0x0152a8d0;
            uVar18 = (uint)plVar13[3];
          }
          if (uVar18 < 5) goto code_r0x0152a8c8;
          plVar13[8] = /*STR(' typeKey1: ')*/ lRam0000000003d663f0;
          puVar17 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_b8 + 6,0);
          if ((puVar17 == (undefined8 *)0x0) ||
             (lVar10 = func_0x00f78adc(puVar17,*(undefined8 *)(*plVar13 + 0x40)), lVar10 != 0)) {
            uVar18 = *(uint *)(plVar13 + 3);
            if (5 < uVar18) {
              plVar13[9] = (long)puVar17;
              puVar17 = (undefined8 *)0x3d663f8;
              if (/*STR(' typeKey2: ')*/ lRam0000000003d663f8 != 0) {
                lVar10 = func_0x00f78adc(/*STR(' typeKey2: ')*/ lRam0000000003d663f8,*(undefined8 *)(*plVar13 + 0x40));
                if (lVar10 == 0) goto code_r0x0152a8d0;
                uVar18 = *(uint *)(plVar13 + 3);
              }
              if (6 < uVar18) {
                plVar13[10] = /*STR(' typeKey2: ')*/ lRam0000000003d663f8;
                puVar17 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_b8 + 4,0);
                if ((puVar17 != (undefined8 *)0x0) &&
                   (lVar10 = func_0x00f78adc(puVar17,*(undefined8 *)(*plVar13 + 0x40)), lVar10 == 0)
                   ) goto code_r0x0152a8d0;
                uVar18 = (uint)plVar13[3];
                if ((plVar13[3] & 0xfffffff8U) != 0) {
                  plVar13[0xb] = (long)puVar17;
                  puVar17 = (undefined8 *)0x3d66318;
                  if (/*STR(' mapKey1: ')*/ lRam0000000003d66318 != 0) {
                    lVar10 = func_0x00f78adc(/*STR(' mapKey1: ')*/ lRam0000000003d66318,*(undefined8 *)(*plVar13 + 0x40));
                    if (lVar10 == 0) goto code_r0x0152a8d0;
                    uVar18 = (uint)plVar13[3];
                  }
                  if (8 < uVar18) {
                    plVar13[0xc] = /*STR(' mapKey1: ')*/ lRam0000000003d66318;
                    puVar17 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_b8 + 2,0);
                    if ((puVar17 != (undefined8 *)0x0) &&
                       (lVar10 = func_0x00f78adc(puVar17,*(undefined8 *)(*plVar13 + 0x40)),
                       lVar10 == 0)) goto code_r0x0152a8d0;
                    uVar18 = *(uint *)(plVar13 + 3);
                    if (9 < uVar18) {
                      plVar13[0xd] = (long)puVar17;
                      puVar17 = (undefined8 *)0x3d66320;
                      if (/*STR(' mapKey2: ')*/ lRam0000000003d66320 != 0) {
                        lVar10 = func_0x00f78adc(/*STR(' mapKey2: ')*/ lRam0000000003d66320,
                                                 *(undefined8 *)(*plVar13 + 0x40));
                        if (lVar10 == 0) goto code_r0x0152a8d0;
                        uVar18 = *(uint *)(plVar13 + 3);
                      }
                      if (10 < uVar18) {
                        plVar13[0xe] = /*STR(' mapKey2: ')*/ lRam0000000003d66320;
                        puVar17 = (undefined8 *)/*System.Int16$$ToString*/ func_0x02ae8e6c(&uStack_b8,0);
                        if ((puVar17 != (undefined8 *)0x0) &&
                           (lVar10 = func_0x00f78adc(puVar17,*(undefined8 *)(*plVar13 + 0x40)),
                           lVar10 == 0)) goto code_r0x0152a8d0;
                        if (0xb < *(uint *)(plVar13 + 3)) {
                          plVar13[0xf] = (long)puVar17;
                          /*System.String$$Concat*/ func_0x029cfadc(plVar13,0);
                          plVar9 = plVar13;
                          if ((puVar11[4] != 0) &&
                             (plVar13 = *(long **)(puVar11[4] + 0x20), plVar13 != (long *)0x0)) {
                            plVar9 = (long *)(**(code **)(*plVar13 + 0x1c8))
                                                       (plVar13,(long)uStack_b8._2_2_,
                                                        (long)uStack_b8._6_2_,(long)(short)uStack_b8
                                                        ,(long)uStack_b8._4_2_,&UNK_00001770,
                                                        *(undefined8 *)(*plVar13 + 0x1d0));
                            return plVar9;
                          }
                          goto code_r0x0152a8c4;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto code_r0x0152a8c8;
          }
code_r0x0152a8d0:
          uVar16 = func_0x00f78b14();
          goto code_r0x0152a8d4;
        }
      }
      uVar23 = auVar27._0_8_;
      uVar8 = 0x3eb4000;
      lStack_f0 = unaff_x22;
      puStack_e8 = puVar17;
      plStack_e0 = plVar9;
      puStack_d8 = puVar11;
      if ((bRam0000000003eb4e75 & 1) == 0) {
        func_0x00f78a20(0x3d2e6f0);
        func_0x00f78a20(0x3d2e6f8);
        func_0x00f78a20(0x3d2e700);
        func_0x00f78a20(0x3d2e710);
        func_0x00f78a20(0x3d2e748);
        func_0x00f78a20(0x3d2e750);
        func_0x00f78a20(0x3d32bf0);
        func_0x00f78a20(0x3d32980);
        func_0x00f78a20(0x3d33d98);
        func_0x00f78a20(0x3d33da0);
        func_0x00f78a20(0x3d32988);
        func_0x00f78a20(0x3d32bf8);
        func_0x00f78a20(0x3d32c00);
        func_0x00f78a20(0x3d32990);
        func_0x00f78a20(0x3d33dd0);
        func_0x00f78a20(0x3d39240);
        func_0x00f78a20(0x3d39248);
        func_0x00f78a20(0x3d3b120);
        func_0x00f78a20(0x3d3b6b8);
        func_0x00f78a20(0x3d3b130);
        func_0x00f78a20(0x3d3b0f8);
        func_0x00f78a20(0x3d3b140);
        func_0x00f78a20(0x3d3b6c0);
        func_0x00f78a20(0x3d3b148);
        func_0x00f78a20(0x3d1db90);
        func_0x00f78a20(0x3d65ed8);
        func_0x00f78a20(0x3d66270);
        func_0x00f78a20(0x3d6cdb0);
        func_0x00f78a20(0x3d6cdc0);
        func_0x00f78a20(0x3d6cdb8);
        func_0x00f78a20(0x3d6cdc8);
        bRam0000000003eb4e75 = 1;
      }
      uStack_140 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_168 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      lStack_1a0 = 0;
      uStack_198 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      aiStack_1c0[3] = 0;
      if (*(long *)(uVar23 + 0xb8) != 0) {
        uVar8 = 0x3d1d000;
        /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(uVar23 + 0xb8),uRam0000000003d2e6f8);
        plVar9 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
        /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(plVar9,auVar27._8_8_,uRam0000000003d3b0f8);
        if (((*(long *)(uVar23 + 0x20) != 0) &&
            (lVar10 = *(long *)(*(long *)(uVar23 + 0x20) + 0x20), lVar10 != 0)) &&
           (lVar10 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar10,0), lVar10 != 0)) {
          uVar8 = 0x3d6c000;
          aiStack_134[0] = *(int *)(lVar10 + 0x18);
          uVar16 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_134,0);
          /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar16,0);
          if (((*(long *)(uVar23 + 0x20) != 0) &&
              (lVar10 = *(long *)(*(long *)(uVar23 + 0x20) + 0x20), lVar10 != 0)) &&
             (lVar10 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar10,0), lVar10 != 0)) {
            uVar8 = 0x3d32bf8;
            /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_1e8,lVar10,uRam0000000003d3b6b8);
            uStack_158 = uStack_1e0;
            uStack_160 = uStack_1e8;
            uStack_148 = uStack_1d0;
            uStack_150 = uStack_1d8;
            uStack_140 = uStack_1c8;
code_r0x0152aba4:
            uVar14 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_160,uRam0000000003d32bf8);
            if ((uVar14 & 1) != 0) {
              sVar3 = uStack_148._4_2_;
              sVar1 = (short)uStack_148;
              if (uStack_148._4_2_ != uStack_150._4_2_) {
                sVar1 = uStack_150._4_2_;
              }
              if (*(long *)(uVar23 + 0xb8) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              iVar6 = (int)sVar1;
              uVar14 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(uVar23 + 0xb8),iVar6,uRam0000000003d2e700);
              if ((uVar14 & 1) == 0) {
                if (*(long *)(uVar23 + 0xb8) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0152af9c;
                }
                /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(uVar23 + 0xb8),iVar6,0,uRam0000000003d2e6f0);
              }
              lVar10 = *(long *)(uVar23 + 0xb8);
              if (lVar10 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              aiStack_134[0] = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar10,iVar6,uRam0000000003d2e748);
              /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar10,iVar6,aiStack_134[0] + 1,uRam0000000003d2e750);
              if (*(long *)(uVar23 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar23 + 0x28),(int)sVar3,&uStack_168,0);
              if (plVar9 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar18 = *(uint *)(plVar9 + 3);
              if (0 < (int)uVar18) {
                uVar24 = 0;
                do {
                  if (uVar18 <= uVar24) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar10 = *(long *)(plVar9[2] + (long)(int)uVar24 * 8 + 0x20);
                  if (lVar10 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar14 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar10 + 0x18),uStack_168,0);
                  if ((uVar14 & 1) != 0) {
                    /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,uStack_168,0);
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar9,uVar24,uRam0000000003d3b130);
                    break;
                  }
                  uVar24 = uVar24 + 1;
                  uVar18 = *(uint *)(plVar9 + 3);
                } while ((int)uVar24 < (int)uVar18);
              }
              goto code_r0x0152aba4;
            }
            aiStack_1c0[0] = 0x136;
            /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_160,uRam0000000003d32bf0);
            aiStack_1c0[3] = 0;
            if (*(long *)(uVar23 + 0xb8) != 0) {
              /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_1e8,*(long *)(uVar23 + 0xb8),uRam0000000003d2e710);
              uStack_188 = uStack_1e0;
              uStack_190 = uStack_1e8;
              uStack_178 = uStack_1d0;
              uStack_180 = uStack_1d8;
code_r0x0152ad1c:
              uVar8 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_190,uRam0000000003d33da0);
              if ((uVar8 & 1) != 0) {
                if (*(int *)(uVar23 + 0x10) <= uStack_180._4_4_) {
                  if (*(long *)(uVar23 + 0x28) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar23 + 0x28),(int)(short)uStack_180,&uStack_198,0);
                  if (plVar9 == (long *)0x0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar18 = *(uint *)(plVar9 + 3);
                  if (0 < (int)uVar18) {
                    uVar24 = 0;
                    do {
                      if (uVar18 <= uVar24) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar10 = *(long *)(plVar9[2] + (long)(int)uVar24 * 8 + 0x20);
                      if (lVar10 == 0) {
                        func_0x00f78af4();
                        goto code_r0x0152af9c;
                      }
                      uVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar10 + 0x18),uStack_198,0);
                      if ((uVar8 & 1) != 0) {
                        /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,uStack_198,0);
                        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar9,uVar24,uRam0000000003d3b130);
                        break;
                      }
                      uVar24 = uVar24 + 1;
                      uVar18 = *(uint *)(plVar9 + 3);
                    } while ((int)uVar24 < (int)uVar18);
                  }
                }
                goto code_r0x0152ad1c;
              }
              uVar23 = (ulong)(uint)aiStack_1c0[3];
              bVar5 = aiStack_1c0[3] != 0xffffffff;
              aiStack_1c0[3] = aiStack_1c0[3] + 1;
              uVar8 = (ulong)(uint)aiStack_1c0[3];
              aiStack_1c0[0] = 0x1d1;
              /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_190,uRam0000000003d33d98);
              if (bVar5) goto code_r0x0152ae34;
              uVar8 = 0;
              iVar6 = 0;
              if (plVar9 != (long *)0x0) goto code_r0x0152ae5c;
            }
          }
        }
      }
      do {
        func_0x00f78af4();
code_r0x0152ae34:
        if (aiStack_1c0[(int)(uint)uVar23] == 0x1d1) {
          uVar8 = uVar23;
          aiStack_1c0[3] = (uint)uVar23;
        }
        iVar6 = (int)uVar8;
      } while (plVar9 == (long *)0x0);
code_r0x0152ae5c:
      aiStack_134[0] = (int)plVar9[3];
      uVar16 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_134,0);
      uVar16 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar16,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_1b0,plVar9,uRam0000000003d3b120);
      while( true ) {
        uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_1b0,uRam0000000003d32988);
        if ((uVar8 & 1) == 0) {
          aiStack_1c0[iVar6] = 0x23d;
          aiStack_1c0[3] = aiStack_1c0[3] + 1;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_1b0,uRam0000000003d32980);
          if ((int)plVar9[3] < 2) {
            plVar9 = auVar27._8_8_;
          }
          return plVar9;
        }
        if (lStack_1a0 == 0) break;
        uVar16 = /*System.String$$Concat*/ func_0x029be39c(uVar16,*(undefined8 *)(lStack_1a0 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
      }
      func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
      pcVar25 = (code *)SoftwareBreakpoint(1,0x152afa0);
      (*pcVar25)();
    }
  }
  else {
    puVar11 = (undefined8 *)func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
    Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor(puVar11,0);
    lVar12 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar10,uRam0000000003d40650);
    uVar16 = 0x3d40650;
    if ((lVar12 != 0) && (puVar11 != (undefined8 *)0x0)) {
      puVar11[2] = *(undefined8 *)(lVar12 + 0x10);
      lVar12 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(lVar10,uRam0000000003d40658);
      uVar16 = uVar22;
      if (lVar12 != 0) {
        puVar11[3] = *(undefined8 *)(lVar12 + 0x18);
        *(undefined1 *)(puVar11 + 4) = 1;
        uVar16 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ uRam0000000003d194d8;
        plVar9 = *(long **)(lVar10 + 0x78);
        if (((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar13 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
        lVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar16 = 0x3eb4000;
          goto code_r0x01e7159c;
        }
      }
    }
  }
  auVar27 = func_0x00f78af4();
  plVar9 = auVar27._8_8_;
  lVar12 = auVar27._0_8_;
  plVar4 = &lStack_f0;
  puVar26 = &stack0xffffffffffffff60;
  uStack_b8 = uVar16;
  puStack_b0 = puVar11;
  lStack_a8 = lVar10;
  if ((bRam0000000003eb4c0f & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d297a0);
    func_0x00f78a20(0x3d1a1a8);
    bRam0000000003eb4c0f = 1;
  }
  if (*(long *)(lVar12 + 0xa0) != 0) {
    puStack_e8 = (undefined8 *)plVar9[1];
    lStack_f0 = *plVar9;
    puStack_d8 = (undefined8 *)plVar9[3];
    plStack_e0 = (long *)plVar9[2];
    param_3 = (long *)0x0;
    /*Atlas.UI.VotingManager$$SetVoteData*/ func_0x01529c00(*(long *)(lVar12 + 0xa0),&lStack_f0);
    lVar10 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar12,uRam0000000003d40650);
    if (lVar10 != 0) {
      unaff_x22 = 0x3d1a000;
      unaff_x23 = 0x3d25000;
      uVar16 = *(undefined8 *)(lVar10 + 0x10);
      puVar11 = (undefined8 *)func_0x00f78aec(/*Atlas.Contexts.VotingState.VotingStateTransitionData_TypeInfo*/ uRam0000000003d297a0);
      param_3 = (long *)((long)&MACH_HEADER.magic + 1);
      /*Atlas.Contexts.VotingState.VotingStateTransitionData$$.ctor*/ func_0x0156ebc8(puVar11,uVar16,1,0);
      uVar16 = /*Atlas.Contexts.VotingState_var*/ uRam0000000003d1a1a8;
      plVar9 = *(long **)(lVar12 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar13 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
      if (plVar9 != (long *)0x0) {
        puStack_68 = &UNK_014e6858;
        param_2 = plVar9;
        param_1 = puVar11;
code_r0x01e7159c:
        *(undefined8 *)((long)plVar4 + -0x60) = unaff_x28;
        *(undefined8 *)((long)plVar4 + -0x58) = unaff_x27;
        *(undefined8 *)((long)plVar4 + -0x50) = unaff_x26;
        *(undefined8 *)((long)plVar4 + -0x48) = unaff_x25;
        *(undefined8 *)((long)plVar4 + -0x40) = unaff_x24;
        *(undefined8 *)((long)plVar4 + -0x38) = unaff_x23;
        *(long *)((long)plVar4 + -0x30) = unaff_x22;
        *(undefined8 *)((long)plVar4 + -0x28) = uVar16;
        *(undefined8 **)((long)plVar4 + -0x20) = param_1;
        *(long **)((long)plVar4 + -0x18) = param_2;
        *(undefined1 **)((long)plVar4 + -0x10) = puVar26;
        *(undefined **)((long)plVar4 + -8) = puStack_68;
        *(long **)((long)plVar4 + -0x68) = plVar9;
        lVar10 = plVar9[0xd];
        if (lVar10 == 0) {
          puVar26 = (undefined1 *)((long)plVar4 + -0x68);
          lVar12 = 1;
        }
        else {
          lVar12 = *(long *)(lVar10 + 0x18);
          if (lVar12 == 0) {
            return plVar9;
          }
          puVar26 = (undefined1 *)(lVar10 + 0x20);
        }
        lVar10 = 0;
        do {
          lVar19 = *(long *)(puVar26 + lVar10 * 8);
          pcVar25 = *(code **)(lVar19 + 0x10);
          plVar15 = *(long **)(lVar19 + 0x20);
          lVar19 = *(long *)(lVar19 + 0x28);
          if (*(short *)(lVar19 + 0x48) == -1) {
            func_0x00f78ad8(lVar19);
          }
          iVar6 = func_0x00f78a4c(lVar19);
          bVar5 = *(char *)(lVar19 + 0x4a) == '\x03';
          if (iVar6 == 0) {
            if (bVar5) {
              if (plVar15 == (long *)0x0) {
code_r0x01e7173c:
                plVar15 = (long *)(*pcVar25)(plVar13,1,puVar11,lVar19);
              }
              else {
                if (((*(short *)(lVar19 + 0x48) == -1) || ((*(byte *)(*plVar15 + 0x115) & 1) != 0))
                   || (plVar9[3] == 0)) goto code_r0x01e7162c;
                iVar6 = func_0x00f78a44(lVar19);
                iVar7 = func_0x00f78ec0(lVar19);
                if (iVar6 == 0) {
                  uVar2 = *(ushort *)(lVar19 + 0x48);
                  if (iVar7 == 0) {
                    lVar19 = *plVar15 + (ulong)uVar2 * 0x10;
                    plVar15 = (long *)(**(code **)(lVar19 + 0x138))
                                                (plVar15,plVar13,1,puVar11,
                                                 *(undefined8 *)(lVar19 + 0x140));
                    goto code_r0x01e71750;
                  }
                  lVar19 = func_0x00f78a48(lVar19);
                  lVar20 = *plVar15;
                  uVar8 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar8 != 0) {
                    piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == lVar19) {
                        puVar17 = (undefined8 *)
                                  (lVar20 + (long)(int)(*piVar21 + (uint)uVar2) * 0x10 + 0x138);
                        goto code_r0x01e718f4;
                      }
                      piVar21 = piVar21 + 4;
                      uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                  }
                  puVar17 = (undefined8 *)func_0x00fac1f0(plVar15,lVar19,(ulong)uVar2);
code_r0x01e718f4:
                  pcVar25 = (code *)*puVar17;
                  puVar17 = (undefined8 *)puVar17[1];
                }
                else {
                  if (iVar7 == 0) {
                    uVar16 = *(undefined8 *)
                              (*plVar15 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar20 = *plVar15;
                    uVar8 = (ulong)*(ushort *)(lVar20 + 0x12a);
                    if (uVar8 != 0) {
                      piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar21 + -2) == *(long *)(lVar19 + 0x18)) {
                          lVar20 = lVar20 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar19 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e718cc;
                        }
                        piVar21 = piVar21 + 4;
                        uVar8 = uVar8 - 1;
                      } while (uVar8 != 0);
                    }
                    lVar20 = func_0x00fac1f0(plVar15);
code_r0x01e718cc:
                    uVar16 = *(undefined8 *)(lVar20 + 8);
                  }
                  puVar17 = (undefined8 *)func_0x00f78acc(uVar16,lVar19);
                  pcVar25 = (code *)*puVar17;
                }
                plVar15 = (long *)(*pcVar25)(plVar15,plVar13,1,puVar11,puVar17);
              }
            }
            else {
              if ((*(short *)(lVar19 + 0x48) == -1) || (plVar9[3] == 0)) goto code_r0x01e7173c;
              iVar6 = func_0x00f78a44(lVar19);
              iVar7 = func_0x00f78ec0(lVar19);
              if (iVar6 == 0) {
                uVar2 = *(ushort *)(lVar19 + 0x48);
                if (iVar7 == 0) {
                  lVar19 = *plVar13 + (ulong)uVar2 * 0x10;
                  plVar15 = (long *)(**(code **)(lVar19 + 0x138))
                                              (plVar13,1,puVar11,*(undefined8 *)(lVar19 + 0x140));
                  goto code_r0x01e71750;
                }
                lVar19 = func_0x00f78a48(lVar19);
                lVar20 = *plVar13;
                uVar8 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar8 != 0) {
                  piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar21 + -2) == lVar19) {
                      puVar17 = (undefined8 *)
                                (lVar20 + (long)(int)(*piVar21 + (uint)uVar2) * 0x10 + 0x138);
                      goto code_r0x01e71880;
                    }
                    piVar21 = piVar21 + 4;
                    uVar8 = uVar8 - 1;
                  } while (uVar8 != 0);
                }
                puVar17 = (undefined8 *)func_0x00fac1f0(plVar13,lVar19,(ulong)uVar2);
code_r0x01e71880:
                pcVar25 = (code *)*puVar17;
                puVar17 = (undefined8 *)puVar17[1];
              }
              else {
                if (iVar7 == 0) {
                  uVar16 = *(undefined8 *)
                            (*plVar13 + (ulong)*(ushort *)(lVar19 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar20 = *plVar13;
                  uVar8 = (ulong)*(ushort *)(lVar20 + 0x12a);
                  if (uVar8 != 0) {
                    piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar21 + -2) == *(long *)(lVar19 + 0x18)) {
                        lVar20 = lVar20 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar19 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71858;
                      }
                      piVar21 = piVar21 + 4;
                      uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                  }
                  lVar20 = func_0x00fac1f0(plVar13);
code_r0x01e71858:
                  uVar16 = *(undefined8 *)(lVar20 + 8);
                }
                puVar17 = (undefined8 *)func_0x00f78acc(uVar16,lVar19);
                pcVar25 = (code *)*puVar17;
              }
              plVar15 = (long *)(*pcVar25)(plVar13,1,puVar11,puVar17);
            }
          }
          else {
            if (bVar5) goto code_r0x01e7173c;
code_r0x01e7162c:
            plVar15 = (long *)(*pcVar25)(plVar15,plVar13,1,puVar11,lVar19);
          }
code_r0x01e71750:
          lVar10 = lVar10 + 1;
          if (lVar10 == lVar12) {
            return plVar15;
          }
        } while( true );
      }
    }
  }
  plVar9 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4c10 & 1) == 0) {
    func_0x00f78a20(0x3d40648);
    bRam0000000003eb4c10 = 1;
  }
  if (plVar9 != (long *)0x0) {
    return plVar9;
  }
  auVar27 = func_0x00f78af4(0,uRam0000000003d40648);
  plVar9 = auVar27._0_8_;
  plVar9[2] = *param_3;
  plVar9[4] = auVar27._8_8_;
  plVar9[5] = (long)param_3;
  return plVar9;
}



// ============================================================
// RVA: 0x14e65a4 | Atlas.Contexts.RoundResultsState.OnResultsFinished
// ============================================================

/* WARNING: Possible PIC construction at 0x014e6854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152a51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e6858) */
/* WARNING: Removing unreachable block (ram,0x0152a520) */

long * Atlas_Contexts_RoundResultsState__OnResultsFinished
                 (long param_1,undefined8 param_2,long *param_3)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *unaff_x19;
  long *plVar19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar20;
  ulong uVar21;
  uint uVar22;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar23;
  undefined8 unaff_x26;
  long lVar24;
  undefined8 unaff_x27;
  undefined1 *puVar25;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar26 [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  int aiStack_160 [4];
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  int aiStack_d4 [5];
  long lStack_90;
  ulong uStack_88;
  long *plStack_80;
  ulong uStack_78;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  if ((bRam0000000003eb4c0e & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d194d8);
    func_0x00f78a20(0x3d27638);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d40658);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4c0e = 1;
  }
  uVar20 = 0x3d40650;
  iVar5 = Atlas_Contexts_RoundResultsState__IsTournamentOver(param_1);
  uVar11 = uVar20;
  if (iVar5 == 0) {
    uVar7 = *(ulong *)(param_1 + 0xa0);
    lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40650);
    if ((lVar8 != 0) && (uVar7 != 0)) {
      plVar19 = *(long **)(lVar8 + 0x10);
      uVar17 = 0x3eb4000;
      if ((bRam0000000003eb4e73 & 1) == 0) {
        func_0x00f78a20(0x3d3b110,plVar19,0);
        func_0x00f78a20(0x3d1f498);
        func_0x00f78a20(0x3d66320);
        func_0x00f78a20(0x3d663f8);
        func_0x00f78a20(0x3d66300);
        func_0x00f78a20(0x3d66318);
        func_0x00f78a20(0x3d663f0);
        func_0x00f78a20(0x3d6b9f8);
        bRam0000000003eb4e73 = 1;
      }
      uStack_50 = 0;
      lStack_48 = 0;
      uStack_58 = 0;
      if (*(long *)(uVar7 + 0x20) == 0) {
code_r0x0152a8c4:
        plVar9 = plVar19;
        func_0x00f78af4();
code_r0x0152a8c8:
        uVar11 = func_0x00f78b24();
code_r0x0152a8d4:
        auVar26 = func_0x00f78ac0(uVar11,0);
        plVar19 = plVar9;
      }
      else {
        plVar9 = (long *)/*Atlas.Networking.Network$$IsSessionHost*/ func_0x0149e540(*(long *)(uVar7 + 0x20),0);
        if ((int)plVar9 == 0) {
          return plVar9;
        }
        if ((*(long *)(uVar7 + 0xb0) == 0) ||
           (/*Atlas.Definitions.AtlasDefinitions$$GetAllPlayerFacingMapDefinitions*/ func_0x01467074(*(long *)(uVar7 + 0xb0),*(undefined8 *)(uVar7 + 0xe0),0),
           plVar19 == (long *)0x0)) goto code_r0x0152a8c4;
        auVar26._8_8_ = *(undefined8 *)(uVar7 + 0xe0);
        auVar26._0_8_ = uVar7;
        if ((int)plVar19[2] != 2) {
          /*Atlas.UI.VotingManager$$SelectMapsForVoting*/ func_0x0152b0b8(uVar7,*(undefined8 *)(uVar7 + 0xe0),&lStack_48,&uStack_50);
          if ((((*(long *)(uVar7 + 0xe0) == 0) ||
               (/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Clear*/ func_0x024273f0(*(long *)(uVar7 + 0xe0),uRam0000000003d3b110), unaff_x22 = lStack_48
               , lStack_48 == 0)) || (*(long *)(uVar7 + 0x28) == 0)) ||
             ((/*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar7 + 0x28),*(undefined8 *)(lStack_48 + 0x18),
                               (long)&uStack_58 + 2,0), uVar17 = uStack_50, uStack_50 == 0 ||
              (*(long *)(uVar7 + 0x28) == 0)))) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar7 + 0x28),*(undefined8 *)(uStack_50 + 0x18),&uStack_58,0);
          if (*(long *)(uVar7 + 0xb0) == 0) goto code_r0x0152a8c4;
          uVar11 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(uVar7 + 0xb0),unaff_x22,0);
          if (*(long *)(uVar7 + 0x28) == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar7 + 0x28),uVar11,(long)&uStack_58 + 6,0);
          if (*(long *)(uVar7 + 0xb0) == 0) goto code_r0x0152a8c4;
          uVar11 = /*Atlas.Definitions.AtlasDefinitions$$GetContextTypeFromMap*/ func_0x014673a8(*(long *)(uVar7 + 0xb0),uVar17,0);
          if (*(long *)(uVar7 + 0x28) == 0) goto code_r0x0152a8c4;
          /*Atlas.Networking.NetworkIdentifiers$$TryGetKeyFromIdentifier*/ func_0x014a77f0(*(long *)(uVar7 + 0x28),uVar11,(long)&uStack_58 + 4,0);
          plVar9 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,0xc);
          if (plVar9 == (long *)0x0) goto code_r0x0152a8c4;
          if ((/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8 != 0) &&
             (lVar8 = func_0x00f78adc(/*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8,*(undefined8 *)(*plVar9 + 0x40)),
             lVar8 == 0)) goto code_r0x0152a8d0;
          uVar14 = plVar9[3];
          if ((int)uVar14 == 0) goto code_r0x0152a8c8;
          plVar9[4] = /*STR('DecideVoteOptions: mapDefinition1.ID.Value: ')*/ lRam0000000003d6b9f8;
          unaff_x22 = *(long *)(unaff_x22 + 0x18);
          if (unaff_x22 != 0) {
            lVar8 = func_0x00f78adc(unaff_x22,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar8 == 0) goto code_r0x0152a8d0;
            uVar14 = plVar9[3];
          }
          if ((uVar14 & 0xfffffffe) == 0) goto code_r0x0152a8c8;
          plVar9[5] = unaff_x22;
          unaff_x22 = 0x3d66300;
          lVar8 = 0x3d66300;
          if (/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300 != 0) {
            lVar24 = func_0x00f78adc(/*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar24 == 0) goto code_r0x0152a8d0;
            uVar14 = plVar9[3];
          }
          if ((uint)uVar14 < 3) goto code_r0x0152a8c8;
          plVar9[6] = /*STR(' mapDefinition2.ID.Value: ')*/ lRam0000000003d66300;
          uVar17 = *(ulong *)(uVar17 + 0x18);
          if (uVar17 != 0) {
            lVar24 = func_0x00f78adc(uVar17,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar24 == 0) goto code_r0x0152a8d0;
            uVar14 = plVar9[3];
          }
          uVar13 = (uint)uVar14;
          if ((uVar14 & 0xfffffffc) == 0) goto code_r0x0152a8c8;
          plVar9[7] = uVar17;
          uVar17 = 0x3d663f0;
          unaff_x22 = lVar8;
          if (/*STR(' typeKey1: ')*/ lRam0000000003d663f0 != 0) {
            lVar8 = func_0x00f78adc(/*STR(' typeKey1: ')*/ lRam0000000003d663f0,*(undefined8 *)(*plVar9 + 0x40));
            if (lVar8 == 0) goto code_r0x0152a8d0;
            uVar13 = (uint)plVar9[3];
          }
          if (uVar13 < 5) goto code_r0x0152a8c8;
          plVar9[8] = /*STR(' typeKey1: ')*/ lRam0000000003d663f0;
          uVar17 = /*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_58 + 6,0);
          if ((uVar17 == 0) ||
             (lVar8 = func_0x00f78adc(uVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar8 != 0)) {
            uVar13 = *(uint *)(plVar9 + 3);
            if (5 < uVar13) {
              plVar9[9] = uVar17;
              uVar17 = 0x3d663f8;
              if (/*STR(' typeKey2: ')*/ lRam0000000003d663f8 != 0) {
                lVar8 = func_0x00f78adc(/*STR(' typeKey2: ')*/ lRam0000000003d663f8,*(undefined8 *)(*plVar9 + 0x40));
                if (lVar8 == 0) goto code_r0x0152a8d0;
                uVar13 = *(uint *)(plVar9 + 3);
              }
              if (6 < uVar13) {
                plVar9[10] = /*STR(' typeKey2: ')*/ lRam0000000003d663f8;
                uVar17 = /*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_58 + 4,0);
                if ((uVar17 != 0) &&
                   (lVar8 = func_0x00f78adc(uVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
                goto code_r0x0152a8d0;
                uVar13 = (uint)plVar9[3];
                if ((plVar9[3] & 0xfffffff8U) != 0) {
                  plVar9[0xb] = uVar17;
                  uVar17 = 0x3d66318;
                  if (/*STR(' mapKey1: ')*/ lRam0000000003d66318 != 0) {
                    lVar8 = func_0x00f78adc(/*STR(' mapKey1: ')*/ lRam0000000003d66318,*(undefined8 *)(*plVar9 + 0x40));
                    if (lVar8 == 0) goto code_r0x0152a8d0;
                    uVar13 = (uint)plVar9[3];
                  }
                  if (8 < uVar13) {
                    plVar9[0xc] = /*STR(' mapKey1: ')*/ lRam0000000003d66318;
                    uVar17 = /*System.Int16$$ToString*/ func_0x02ae8e6c((long)&uStack_58 + 2,0);
                    if ((uVar17 != 0) &&
                       (lVar8 = func_0x00f78adc(uVar17,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0)
                       ) goto code_r0x0152a8d0;
                    uVar13 = *(uint *)(plVar9 + 3);
                    if (9 < uVar13) {
                      plVar9[0xd] = uVar17;
                      uVar17 = 0x3d66320;
                      if (/*STR(' mapKey2: ')*/ lRam0000000003d66320 != 0) {
                        lVar8 = func_0x00f78adc(/*STR(' mapKey2: ')*/ lRam0000000003d66320,*(undefined8 *)(*plVar9 + 0x40)
                                               );
                        if (lVar8 == 0) goto code_r0x0152a8d0;
                        uVar13 = *(uint *)(plVar9 + 3);
                      }
                      if (10 < uVar13) {
                        plVar9[0xe] = /*STR(' mapKey2: ')*/ lRam0000000003d66320;
                        uVar17 = /*System.Int16$$ToString*/ func_0x02ae8e6c(&uStack_58,0);
                        if ((uVar17 != 0) &&
                           (lVar8 = func_0x00f78adc(uVar17,*(undefined8 *)(*plVar9 + 0x40)),
                           lVar8 == 0)) goto code_r0x0152a8d0;
                        if (0xb < *(uint *)(plVar9 + 3)) {
                          plVar9[0xf] = uVar17;
                          /*System.String$$Concat*/ func_0x029cfadc(plVar9,0);
                          plVar19 = plVar9;
                          if ((*(long *)(uVar7 + 0x20) != 0) &&
                             (plVar9 = *(long **)(*(long *)(uVar7 + 0x20) + 0x20),
                             plVar9 != (long *)0x0)) {
                            plVar19 = (long *)(**(code **)(*plVar9 + 0x1c8))
                                                        (plVar9,(long)uStack_58._2_2_,
                                                         (long)uStack_58._6_2_,
                                                         (long)(short)uStack_58,
                                                         (long)uStack_58._4_2_,&UNK_00001770,
                                                         *(undefined8 *)(*plVar9 + 0x1d0));
                            return plVar19;
                          }
                          goto code_r0x0152a8c4;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto code_r0x0152a8c8;
          }
code_r0x0152a8d0:
          uVar11 = func_0x00f78b14();
          goto code_r0x0152a8d4;
        }
      }
      uVar21 = auVar26._0_8_;
      uVar14 = 0x3eb4000;
      lStack_90 = unaff_x22;
      uStack_88 = uVar17;
      plStack_80 = plVar19;
      uStack_78 = uVar7;
      if ((bRam0000000003eb4e75 & 1) == 0) {
        func_0x00f78a20(0x3d2e6f0);
        func_0x00f78a20(0x3d2e6f8);
        func_0x00f78a20(0x3d2e700);
        func_0x00f78a20(0x3d2e710);
        func_0x00f78a20(0x3d2e748);
        func_0x00f78a20(0x3d2e750);
        func_0x00f78a20(0x3d32bf0);
        func_0x00f78a20(0x3d32980);
        func_0x00f78a20(0x3d33d98);
        func_0x00f78a20(0x3d33da0);
        func_0x00f78a20(0x3d32988);
        func_0x00f78a20(0x3d32bf8);
        func_0x00f78a20(0x3d32c00);
        func_0x00f78a20(0x3d32990);
        func_0x00f78a20(0x3d33dd0);
        func_0x00f78a20(0x3d39240);
        func_0x00f78a20(0x3d39248);
        func_0x00f78a20(0x3d3b120);
        func_0x00f78a20(0x3d3b6b8);
        func_0x00f78a20(0x3d3b130);
        func_0x00f78a20(0x3d3b0f8);
        func_0x00f78a20(0x3d3b140);
        func_0x00f78a20(0x3d3b6c0);
        func_0x00f78a20(0x3d3b148);
        func_0x00f78a20(0x3d1db90);
        func_0x00f78a20(0x3d65ed8);
        func_0x00f78a20(0x3d66270);
        func_0x00f78a20(0x3d6cdb0);
        func_0x00f78a20(0x3d6cdc0);
        func_0x00f78a20(0x3d6cdb8);
        func_0x00f78a20(0x3d6cdc8);
        bRam0000000003eb4e75 = 1;
      }
      uStack_e0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_108 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      lStack_140 = 0;
      uStack_138 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      aiStack_160[3] = 0;
      if (*(long *)(uVar21 + 0xb8) != 0) {
        uVar14 = 0x3d1d000;
        /*System.Collections.Generic.Dictionary<short, int>$$Clear*/ func_0x01e7d808(*(long *)(uVar21 + 0xb8),uRam0000000003d2e6f8);
        plVar19 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<MapDefinition>_TypeInfo*/ uRam0000000003d1db90);
        /*System.Collections.Generic.List<XmlQualifiedName>$$.ctor*/ func_0x024266f0(plVar19,auVar26._8_8_,uRam0000000003d3b0f8);
        if (((*(long *)(uVar21 + 0x20) != 0) &&
            (lVar8 = *(long *)(*(long *)(uVar21 + 0x20) + 0x20), lVar8 != 0)) &&
           (lVar8 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar8,0), lVar8 != 0)) {
          uVar14 = 0x3d6c000;
          aiStack_d4[0] = *(int *)(lVar8 + 0x18);
          uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_d4,0);
          /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament GetTournamentVoteHistory count ')*/ uRam0000000003d6cdb0,uVar11,0);
          if (((*(long *)(uVar21 + 0x20) != 0) &&
              (lVar8 = *(long *)(*(long *)(uVar21 + 0x20) + 0x20), lVar8 != 0)) &&
             (lVar8 = /*Core.Networking.NetworkSession$$GetTournamentVoteHistory*/ func_0x0165e830(lVar8,0), lVar8 != 0)) {
            uVar14 = 0x3d32bf8;
            /*System.Collections.Generic.List<NetworkVoteHistory>$$GetEnumerator*/ func_0x02425100(&uStack_188,lVar8,uRam0000000003d3b6b8);
            uStack_f8 = uStack_180;
            uStack_100 = uStack_188;
            uStack_e8 = uStack_170;
            uStack_f0 = uStack_178;
            uStack_e0 = uStack_168;
code_r0x0152aba4:
            uVar7 = /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$MoveNext*/ func_0x01f6e810(&uStack_100,uRam0000000003d32bf8);
            if ((uVar7 & 1) != 0) {
              sVar3 = uStack_e8._4_2_;
              sVar1 = (short)uStack_e8;
              if (uStack_e8._4_2_ != uStack_f0._4_2_) {
                sVar1 = uStack_f0._4_2_;
              }
              if (*(long *)(uVar21 + 0xb8) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              iVar5 = (int)sVar1;
              uVar7 = /*System.Collections.Generic.Dictionary<short, int>$$ContainsKey*/ func_0x01e7d8a8(*(long *)(uVar21 + 0xb8),iVar5,uRam0000000003d2e700);
              if ((uVar7 & 1) == 0) {
                if (*(long *)(uVar21 + 0xb8) == 0) {
                  func_0x00f78af4();
                  goto code_r0x0152af9c;
                }
                /*System.Collections.Generic.Dictionary<short, int>$$Add*/ func_0x01e7d61c(*(long *)(uVar21 + 0xb8),iVar5,0,uRam0000000003d2e6f0);
              }
              lVar8 = *(long *)(uVar21 + 0xb8);
              if (lVar8 == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              aiStack_d4[0] = /*System.Collections.Generic.Dictionary<short, int>$$get_Item*/ func_0x01e7d558(lVar8,iVar5,uRam0000000003d2e748);
              /*System.Collections.Generic.Dictionary<short, int>$$set_Item*/ func_0x01e7d5f0(lVar8,iVar5,aiStack_d4[0] + 1,uRam0000000003d2e750);
              if (*(long *)(uVar21 + 0x28) == 0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar21 + 0x28),(int)sVar3,&uStack_108,0);
              if (plVar19 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x0152af9c;
              }
              uVar13 = *(uint *)(plVar19 + 3);
              if (0 < (int)uVar13) {
                uVar22 = 0;
                do {
                  if (uVar13 <= uVar22) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar8 = *(long *)(plVar19[2] + (long)(int)uVar22 * 8 + 0x20);
                  if (lVar8 == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar8 + 0x18),uStack_108,0);
                  if ((uVar7 & 1) != 0) {
                    /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Winner - ')*/ uRam0000000003d6cdc0,uStack_108,0);
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar19,uVar22,uRam0000000003d3b130);
                    break;
                  }
                  uVar22 = uVar22 + 1;
                  uVar13 = *(uint *)(plVar19 + 3);
                } while ((int)uVar22 < (int)uVar13);
              }
              goto code_r0x0152aba4;
            }
            aiStack_160[0] = 0x136;
            /*System.Collections.Generic.List.Enumerator<NetworkVoteHistory>$$Dispose*/ func_0x01f6e80c(&uStack_100,uRam0000000003d32bf0);
            aiStack_160[3] = 0;
            if (*(long *)(uVar21 + 0xb8) != 0) {
              /*System.Collections.Generic.Dictionary<short, int>$$GetEnumerator*/ func_0x01e7dbb8(&uStack_188,*(long *)(uVar21 + 0xb8),uRam0000000003d2e710);
              uStack_128 = uStack_180;
              uStack_130 = uStack_188;
              uStack_118 = uStack_170;
              uStack_120 = uStack_178;
code_r0x0152ad1c:
              uVar7 = /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$MoveNext*/ func_0x01fbe398(&uStack_130,uRam0000000003d33da0);
              if ((uVar7 & 1) != 0) {
                if (*(int *)(uVar21 + 0x10) <= uStack_120._4_4_) {
                  if (*(long *)(uVar21 + 0x28) == 0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(*(long *)(uVar21 + 0x28),(int)(short)uStack_120,&uStack_138,0);
                  if (plVar19 == (long *)0x0) {
                    func_0x00f78af4();
                    goto code_r0x0152af9c;
                  }
                  uVar13 = *(uint *)(plVar19 + 3);
                  if (0 < (int)uVar13) {
                    uVar22 = 0;
                    do {
                      if (uVar13 <= uVar22) {
                        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                      }
                      lVar8 = *(long *)(plVar19[2] + (long)(int)uVar22 * 8 + 0x20);
                      if (lVar8 == 0) {
                        func_0x00f78af4();
                        goto code_r0x0152af9c;
                      }
                      uVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(*(undefined8 *)(lVar8 + 0x18),uStack_138,0);
                      if ((uVar7 & 1) != 0) {
                        /*System.String$$Concat*/ func_0x029bdb88(/*STR('FilterMapsFromTournament: Lost twice - ')*/ uRam0000000003d6cdb8,uStack_138,0);
                        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$RemoveAt*/ func_0x02428930(plVar19,uVar22,uRam0000000003d3b130);
                        break;
                      }
                      uVar22 = uVar22 + 1;
                      uVar13 = *(uint *)(plVar19 + 3);
                    } while ((int)uVar22 < (int)uVar13);
                  }
                }
                goto code_r0x0152ad1c;
              }
              uVar21 = (ulong)(uint)aiStack_160[3];
              bVar4 = aiStack_160[3] != 0xffffffff;
              aiStack_160[3] = aiStack_160[3] + 1;
              uVar14 = (ulong)(uint)aiStack_160[3];
              aiStack_160[0] = 0x1d1;
              /*System.Collections.Generic.Dictionary.Enumerator<short, int>$$Dispose*/ func_0x01fbe508(&uStack_130,uRam0000000003d33d98);
              if (bVar4) goto code_r0x0152ae34;
              uVar14 = 0;
              iVar5 = 0;
              if (plVar19 != (long *)0x0) goto code_r0x0152ae5c;
            }
          }
        }
      }
      do {
        func_0x00f78af4();
code_r0x0152ae34:
        if (aiStack_160[(int)(uint)uVar21] == 0x1d1) {
          uVar14 = uVar21;
          aiStack_160[3] = (uint)uVar21;
        }
        iVar5 = (int)uVar14;
      } while (plVar19 == (long *)0x0);
code_r0x0152ae5c:
      aiStack_d4[0] = (int)plVar19[3];
      uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(aiStack_d4,0);
      uVar11 = /*System.String$$Concat*/ func_0x029be39c(/*STR('FilterMapsFromTournament: filtered.Count ')*/ uRam0000000003d6cdc8,uVar11,/*STR(' filtered IDS ')*/ uRam0000000003d66270,0);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_150,plVar19,uRam0000000003d3b120);
      while( true ) {
        uVar7 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_150,uRam0000000003d32988);
        if ((uVar7 & 1) == 0) {
          aiStack_160[iVar5] = 0x23d;
          aiStack_160[3] = aiStack_160[3] + 1;
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_150,uRam0000000003d32980);
          if ((int)plVar19[3] < 2) {
            plVar19 = auVar26._8_8_;
          }
          return plVar19;
        }
        if (lStack_140 == 0) break;
        uVar11 = /*System.String$$Concat*/ func_0x029be39c(uVar11,*(undefined8 *)(lStack_140 + 0x18),/*STR(' ')*/ uRam0000000003d65ed8,0);
      }
      func_0x00f78af4();
code_r0x0152af9c:
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x152afa0);
      (*pcVar23)();
    }
  }
  else {
    uVar7 = func_0x00f78aec(/*Atlas.Contexts.FrontEndContextPostQuickPlayState.QuickPlayTransitionData_TypeInfo*/ uRam0000000003d27638);
    Atlas_Contexts_FrontEndContextPostQuickPlayState_QuickPlayTransitionData___ctor(uVar7,0);
    lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40650);
    uVar11 = 0x3d40650;
    if ((lVar8 != 0) && (uVar7 != 0)) {
      *(undefined8 *)(uVar7 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
      lVar8 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_TransitionData*/ func_0x02866b94(param_1,uRam0000000003d40658);
      uVar11 = uVar20;
      if (lVar8 != 0) {
        *(undefined8 *)(uVar7 + 0x18) = *(undefined8 *)(lVar8 + 0x18);
        *(undefined1 *)(uVar7 + 0x20) = 1;
        uVar11 = /*Atlas.Contexts.FrontEndContextPostQuickPlayState_var*/ uRam0000000003d194d8;
        plVar19 = *(long **)(param_1 + 0x78);
        if (((*(byte *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar9 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
        param_1 = 0;
        if (plVar19 != (long *)0x0) goto code_r0x01e7159c;
      }
    }
  }
  auVar26 = func_0x00f78af4();
  plVar19 = auVar26._8_8_;
  lVar8 = auVar26._0_8_;
  unaff_x29 = &stack0xffffffffffffffc0;
  uStack_58 = uVar11;
  uStack_50 = uVar7;
  lStack_48 = param_1;
  if ((bRam0000000003eb4c0f & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d297a0);
    func_0x00f78a20(0x3d1a1a8);
    bRam0000000003eb4c0f = 1;
  }
  if (*(long *)(lVar8 + 0xa0) != 0) {
    uStack_88 = plVar19[1];
    lStack_90 = *plVar19;
    uStack_78 = plVar19[3];
    plStack_80 = (long *)plVar19[2];
    param_3 = (long *)0x0;
    /*Atlas.UI.VotingManager$$SetVoteData*/ func_0x01529c00(*(long *)(lVar8 + 0xa0),&lStack_90);
    lVar24 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(lVar8,uRam0000000003d40650);
    if (lVar24 != 0) {
      unaff_x22 = 0x3d1a000;
      unaff_x23 = 0x3d25000;
      uVar11 = *(undefined8 *)(lVar24 + 0x10);
      uVar7 = func_0x00f78aec(/*Atlas.Contexts.VotingState.VotingStateTransitionData_TypeInfo*/ uRam0000000003d297a0);
      param_3 = (long *)((long)&MACH_HEADER.magic + 1);
      /*Atlas.Contexts.VotingState.VotingStateTransitionData$$.ctor*/ func_0x0156ebc8(uVar7,uVar11,1,0);
      unaff_x21 = /*Atlas.Contexts.VotingState_var*/ uRam0000000003d1a1a8;
      plVar19 = *(long **)(lVar8 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      plVar9 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(unaff_x21,0);
      if (plVar19 != (long *)0x0) {
        unaff_x30 = &UNK_014e6858;
        register0x00000008 = (BADSPACEBASE *)&lStack_90;
        unaff_x19 = plVar19;
        unaff_x20 = uVar7;
code_r0x01e7159c:
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
        *(long **)((long)register0x00000008 + -0x68) = plVar19;
        lVar8 = plVar19[0xd];
        if (lVar8 == 0) {
          puVar25 = (undefined1 *)((long)register0x00000008 + -0x68);
          lVar24 = 1;
        }
        else {
          lVar24 = *(long *)(lVar8 + 0x18);
          if (lVar24 == 0) {
            return plVar19;
          }
          puVar25 = (undefined1 *)(lVar8 + 0x20);
        }
        lVar8 = 0;
        do {
          lVar15 = *(long *)(puVar25 + lVar8 * 8);
          pcVar23 = *(code **)(lVar15 + 0x10);
          plVar10 = *(long **)(lVar15 + 0x20);
          lVar15 = *(long *)(lVar15 + 0x28);
          if (*(short *)(lVar15 + 0x48) == -1) {
            func_0x00f78ad8(lVar15);
          }
          iVar5 = func_0x00f78a4c(lVar15);
          bVar4 = *(char *)(lVar15 + 0x4a) == '\x03';
          if (iVar5 == 0) {
            if (bVar4) {
              if (plVar10 == (long *)0x0) {
code_r0x01e7173c:
                plVar10 = (long *)(*pcVar23)(plVar9,1,uVar7,lVar15);
              }
              else {
                if (((*(short *)(lVar15 + 0x48) == -1) || ((*(byte *)(*plVar10 + 0x115) & 1) != 0))
                   || (plVar19[3] == 0)) goto code_r0x01e7162c;
                iVar5 = func_0x00f78a44(lVar15);
                iVar6 = func_0x00f78ec0(lVar15);
                if (iVar5 == 0) {
                  uVar2 = *(ushort *)(lVar15 + 0x48);
                  if (iVar6 == 0) {
                    lVar15 = *plVar10 + (ulong)uVar2 * 0x10;
                    plVar10 = (long *)(**(code **)(lVar15 + 0x138))
                                                (plVar10,plVar9,1,uVar7,
                                                 *(undefined8 *)(lVar15 + 0x140));
                    goto code_r0x01e71750;
                  }
                  lVar15 = func_0x00f78a48(lVar15);
                  lVar16 = *plVar10;
                  uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
                  if (uVar17 != 0) {
                    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == lVar15) {
                        puVar12 = (undefined8 *)
                                  (lVar16 + (long)(int)(*piVar18 + (uint)uVar2) * 0x10 + 0x138);
                        goto code_r0x01e718f4;
                      }
                      piVar18 = piVar18 + 4;
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                  puVar12 = (undefined8 *)func_0x00fac1f0(plVar10,lVar15,(ulong)uVar2);
code_r0x01e718f4:
                  pcVar23 = (code *)*puVar12;
                  puVar12 = (undefined8 *)puVar12[1];
                }
                else {
                  if (iVar6 == 0) {
                    uVar11 = *(undefined8 *)
                              (*plVar10 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar16 = *plVar10;
                    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
                    if (uVar17 != 0) {
                      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar18 + -2) == *(long *)(lVar15 + 0x18)) {
                          lVar16 = lVar16 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar15 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01e718cc;
                        }
                        piVar18 = piVar18 + 4;
                        uVar17 = uVar17 - 1;
                      } while (uVar17 != 0);
                    }
                    lVar16 = func_0x00fac1f0(plVar10);
code_r0x01e718cc:
                    uVar11 = *(undefined8 *)(lVar16 + 8);
                  }
                  puVar12 = (undefined8 *)func_0x00f78acc(uVar11,lVar15);
                  pcVar23 = (code *)*puVar12;
                }
                plVar10 = (long *)(*pcVar23)(plVar10,plVar9,1,uVar7,puVar12);
              }
            }
            else {
              if ((*(short *)(lVar15 + 0x48) == -1) || (plVar19[3] == 0)) goto code_r0x01e7173c;
              iVar5 = func_0x00f78a44(lVar15);
              iVar6 = func_0x00f78ec0(lVar15);
              if (iVar5 == 0) {
                uVar2 = *(ushort *)(lVar15 + 0x48);
                if (iVar6 == 0) {
                  lVar15 = *plVar9 + (ulong)uVar2 * 0x10;
                  plVar10 = (long *)(**(code **)(lVar15 + 0x138))
                                              (plVar9,1,uVar7,*(undefined8 *)(lVar15 + 0x140));
                  goto code_r0x01e71750;
                }
                lVar15 = func_0x00f78a48(lVar15);
                lVar16 = *plVar9;
                uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
                if (uVar17 != 0) {
                  piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar18 + -2) == lVar15) {
                      puVar12 = (undefined8 *)
                                (lVar16 + (long)(int)(*piVar18 + (uint)uVar2) * 0x10 + 0x138);
                      goto code_r0x01e71880;
                    }
                    piVar18 = piVar18 + 4;
                    uVar17 = uVar17 - 1;
                  } while (uVar17 != 0);
                }
                puVar12 = (undefined8 *)func_0x00fac1f0(plVar9,lVar15,(ulong)uVar2);
code_r0x01e71880:
                pcVar23 = (code *)*puVar12;
                puVar12 = (undefined8 *)puVar12[1];
              }
              else {
                if (iVar6 == 0) {
                  uVar11 = *(undefined8 *)
                            (*plVar9 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar16 = *plVar9;
                  uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
                  if (uVar17 != 0) {
                    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar18 + -2) == *(long *)(lVar15 + 0x18)) {
                        lVar16 = lVar16 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar15 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01e71858;
                      }
                      piVar18 = piVar18 + 4;
                      uVar17 = uVar17 - 1;
                    } while (uVar17 != 0);
                  }
                  lVar16 = func_0x00fac1f0(plVar9);
code_r0x01e71858:
                  uVar11 = *(undefined8 *)(lVar16 + 8);
                }
                puVar12 = (undefined8 *)func_0x00f78acc(uVar11,lVar15);
                pcVar23 = (code *)*puVar12;
              }
              plVar10 = (long *)(*pcVar23)(plVar9,1,uVar7,puVar12);
            }
          }
          else {
            if (bVar4) goto code_r0x01e7173c;
code_r0x01e7162c:
            plVar10 = (long *)(*pcVar23)(plVar10,plVar9,1,uVar7,lVar15);
          }
code_r0x01e71750:
          lVar8 = lVar8 + 1;
          if (lVar8 == lVar24) {
            return plVar10;
          }
        } while( true );
      }
    }
  }
  plVar19 = (long *)func_0x00f78af4();
  if ((bRam0000000003eb4c10 & 1) == 0) {
    func_0x00f78a20(0x3d40648);
    bRam0000000003eb4c10 = 1;
  }
  if (plVar19 != (long *)0x0) {
    return plVar19;
  }
  auVar26 = func_0x00f78af4(0,uRam0000000003d40648);
  plVar19 = auVar26._0_8_;
  plVar19[2] = *param_3;
  plVar19[4] = auVar26._8_8_;
  plVar19[5] = (long)param_3;
  return plVar19;
}



// ============================================================
// RVA: 0x14e672c | Atlas.Contexts.RoundResultsState.OnVoteStarted
// ============================================================

void Atlas_Contexts_RoundResultsState__OnVoteStarted
               (long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4c0f & 1) == 0) {
    func_0x00f78a20(0x3d2a5b0);
    func_0x00f78a20(0x3d40650);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d297a0);
    func_0x00f78a20(0x3d1a1a8);
    bRam0000000003eb4c0f = 1;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    uStack_58 = param_2[1];
    uStack_60 = *param_2;
    uStack_48 = param_2[3];
    uStack_50 = param_2[2];
    param_3 = (undefined8 *)0x0;
    /*Atlas.UI.VotingManager$$SetVoteData*/ func_0x01529c00(*(long *)(param_1 + 0xa0),&uStack_60);
    lVar1 = /*Core.StateManagement.State<RoundResultsState.RoundResultsStateData, RoundResultsState.RoundResultsTransitionData>$$get_StateData*/ func_0x02866b00(param_1,uRam0000000003d40650);
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x10);
      uVar2 = func_0x00f78aec(/*Atlas.Contexts.VotingState.VotingStateTransitionData_TypeInfo*/ uRam0000000003d297a0);
      param_3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      /*Atlas.Contexts.VotingState.VotingStateTransitionData$$.ctor*/ func_0x0156ebc8(uVar2,uVar3,1,0);
      uVar3 = /*Atlas.Contexts.VotingState_var*/ uRam0000000003d1a1a8;
      lVar1 = *(long *)(param_1 + 0x78);
      if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar3 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar3,0);
      if (lVar1 != 0) {
        /*System.Action<Type, bool, TransitionData>$$Invoke*/ func_0x01e7159c(lVar1,uVar3,1,uVar2,uRam0000000003d2a5b0);
        return;
      }
    }
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4c10 & 1) == 0) {
    func_0x00f78a20(0x3d40648);
    bRam0000000003eb4c10 = 1;
  }
  if (lVar1 != 0) {
    return;
  }
  auVar4 = func_0x00f78af4(0,uRam0000000003d40648);
  lVar1 = auVar4._0_8_;
  *(undefined8 *)(lVar1 + 0x10) = *param_3;
  *(long *)(lVar1 + 0x20) = auVar4._8_8_;
  *(undefined8 **)(lVar1 + 0x28) = param_3;
  return;
}



// ============================================================
// RVA: 0x14e6874 | Atlas.Contexts.RoundResultsState..ctor
// ============================================================

void Atlas_Contexts_RoundResultsState___ctor(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4c10 & 1) == 0) {
    func_0x00f78a20(0x3d40648);
    bRam0000000003eb4c10 = 1;
  }
  if (param_1 != 0) {
    return;
  }
  auVar2 = func_0x00f78af4(0,uRam0000000003d40648);
  lVar1 = auVar2._0_8_;
  *(undefined8 *)(lVar1 + 0x10) = *param_3;
  *(long *)(lVar1 + 0x20) = auVar2._8_8_;
  *(undefined8 **)(lVar1 + 0x28) = param_3;
  return;
}



