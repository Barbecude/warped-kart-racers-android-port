// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.GameContextBaseInProgressState

// ============================================================
// RVA: 0x159c018 | Atlas.Contexts.GameContextBaseInProgressState.Init
// ============================================================

/* WARNING: Possible PIC construction at 0x0159c728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159c89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x0159c8a0) */
/* WARNING: Removing unreachable block (ram,0x0159c8c4) */
/* WARNING: Removing unreachable block (ram,0x0159c868) */
/* WARNING: Removing unreachable block (ram,0x0159c88c) */
/* WARNING: Removing unreachable block (ram,0x0159c828) */
/* WARNING: Removing unreachable block (ram,0x0159c84c) */
/* WARNING: Removing unreachable block (ram,0x0159c72c) */
/* WARNING: Removing unreachable block (ram,0x0159c738) */
/* WARNING: Removing unreachable block (ram,0x0159c73c) */
/* WARNING: Removing unreachable block (ram,0x0159c78c) */
/* WARNING: Removing unreachable block (ram,0x0159c7cc) */
/* WARNING: Removing unreachable block (ram,0x0159c8e4) */
/* WARNING: Removing unreachable block (ram,0x0159c80c) */
/* WARNING: Removing unreachable block (ram,0x0159d188) */
/* WARNING: Removing unreachable block (ram,0x0159d1ac) */
/* WARNING: Removing unreachable block (ram,0x0159d1c0) */
/* WARNING: Removing unreachable block (ram,0x0159d1cc) */
/* WARNING: Removing unreachable block (ram,0x0159d1e4) */
/* WARNING: Removing unreachable block (ram,0x0159d220) */
/* WARNING: Removing unreachable block (ram,0x0159d228) */
/* WARNING: Removing unreachable block (ram,0x0159d24c) */
/* WARNING: Removing unreachable block (ram,0x0159d260) */
/* WARNING: Removing unreachable block (ram,0x0159d26c) */
/* WARNING: Removing unreachable block (ram,0x0159d284) */
/* WARNING: Removing unreachable block (ram,0x0159d2c0) */
/* WARNING: Removing unreachable block (ram,0x0159d2c8) */
/* WARNING: Removing unreachable block (ram,0x0159d2ec) */
/* WARNING: Removing unreachable block (ram,0x0159d300) */
/* WARNING: Removing unreachable block (ram,0x0159d30c) */
/* WARNING: Removing unreachable block (ram,0x0159d324) */
/* WARNING: Removing unreachable block (ram,0x0159d360) */
/* WARNING: Removing unreachable block (ram,0x0159d3a4) */
/* WARNING: Removing unreachable block (ram,0x0159d430) */
/* WARNING: Removing unreachable block (ram,0x0159d454) */
/* WARNING: Removing unreachable block (ram,0x0159d334) */
/* WARNING: Removing unreachable block (ram,0x0159d350) */
/* WARNING: Removing unreachable block (ram,0x0159d294) */
/* WARNING: Removing unreachable block (ram,0x0159d2b0) */
/* WARNING: Removing unreachable block (ram,0x0159d1f4) */
/* WARNING: Removing unreachable block (ram,0x0159d210) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5c0) */
/* WARNING: Removing unreachable block (ram,0x0159d5c4) */
/* WARNING: Removing unreachable block (ram,0x0159d5e8) */
/* WARNING: Removing unreachable block (ram,0x0159d5fc) */
/* WARNING: Removing unreachable block (ram,0x0159d608) */
/* WARNING: Removing unreachable block (ram,0x0159d620) */
/* WARNING: Removing unreachable block (ram,0x0159d65c) */
/* WARNING: Removing unreachable block (ram,0x0159d664) */
/* WARNING: Removing unreachable block (ram,0x0159d688) */
/* WARNING: Removing unreachable block (ram,0x0159d69c) */
/* WARNING: Removing unreachable block (ram,0x0159d6a8) */
/* WARNING: Removing unreachable block (ram,0x0159d6c0) */
/* WARNING: Removing unreachable block (ram,0x0159d6fc) */
/* WARNING: Removing unreachable block (ram,0x0159d704) */
/* WARNING: Removing unreachable block (ram,0x0159d728) */
/* WARNING: Removing unreachable block (ram,0x0159d73c) */
/* WARNING: Removing unreachable block (ram,0x0159d748) */
/* WARNING: Removing unreachable block (ram,0x0159d760) */
/* WARNING: Removing unreachable block (ram,0x0159d79c) */
/* WARNING: Removing unreachable block (ram,0x0159d7a4) */
/* WARNING: Removing unreachable block (ram,0x0159d7c8) */
/* WARNING: Removing unreachable block (ram,0x0159d7dc) */
/* WARNING: Removing unreachable block (ram,0x0159d7e8) */
/* WARNING: Removing unreachable block (ram,0x0159d800) */
/* WARNING: Removing unreachable block (ram,0x0159d83c) */
/* WARNING: Removing unreachable block (ram,0x0159d844) */
/* WARNING: Removing unreachable block (ram,0x0159d868) */
/* WARNING: Removing unreachable block (ram,0x0159d87c) */
/* WARNING: Removing unreachable block (ram,0x0159d888) */
/* WARNING: Removing unreachable block (ram,0x0159d8a0) */
/* WARNING: Removing unreachable block (ram,0x0159d8dc) */
/* WARNING: Removing unreachable block (ram,0x0159d90c) */
/* WARNING: Removing unreachable block (ram,0x0159d98c) */
/* WARNING: Removing unreachable block (ram,0x0159d994) */
/* WARNING: Removing unreachable block (ram,0x0159d9a4) */
/* WARNING: Removing unreachable block (ram,0x0159d9b0) */
/* WARNING: Removing unreachable block (ram,0x0159d9b8) */
/* WARNING: Removing unreachable block (ram,0x0159d9c0) */
/* WARNING: Removing unreachable block (ram,0x0159d9d8) */
/* WARNING: Removing unreachable block (ram,0x0159d9f0) */
/* WARNING: Removing unreachable block (ram,0x0159d9f8) */
/* WARNING: Removing unreachable block (ram,0x0159da00) */
/* WARNING: Removing unreachable block (ram,0x0159da08) */
/* WARNING: Removing unreachable block (ram,0x0159da54) */
/* WARNING: Removing unreachable block (ram,0x0159da64) */
/* WARNING: Removing unreachable block (ram,0x0159da70) */
/* WARNING: Removing unreachable block (ram,0x0159da78) */
/* WARNING: Removing unreachable block (ram,0x0159da80) */
/* WARNING: Removing unreachable block (ram,0x0159dacc) */
/* WARNING: Removing unreachable block (ram,0x0159dadc) */
/* WARNING: Removing unreachable block (ram,0x0159dae8) */
/* WARNING: Removing unreachable block (ram,0x0159daf0) */
/* WARNING: Removing unreachable block (ram,0x0159db7c) */
/* WARNING: Removing unreachable block (ram,0x0159db80) */
/* WARNING: Removing unreachable block (ram,0x0159daf8) */
/* WARNING: Removing unreachable block (ram,0x0159db44) */
/* WARNING: Removing unreachable block (ram,0x0159db8c) */
/* WARNING: Removing unreachable block (ram,0x0159dbc4) */
/* WARNING: Removing unreachable block (ram,0x0159dbd8) */
/* WARNING: Removing unreachable block (ram,0x0159dbe0) */
/* WARNING: Removing unreachable block (ram,0x0159dbf8) */
/* WARNING: Removing unreachable block (ram,0x0159dc00) */
/* WARNING: Removing unreachable block (ram,0x0159dc1c) */
/* WARNING: Removing unreachable block (ram,0x0159dc24) */
/* WARNING: Removing unreachable block (ram,0x0159dc40) */
/* WARNING: Removing unreachable block (ram,0x0159dc4c) */
/* WARNING: Removing unreachable block (ram,0x0159dc7c) */
/* WARNING: Removing unreachable block (ram,0x0159dc84) */
/* WARNING: Removing unreachable block (ram,0x0159dcb0) */
/* WARNING: Removing unreachable block (ram,0x0159dcf8) */
/* WARNING: Removing unreachable block (ram,0x0159dcb8) */
/* WARNING: Removing unreachable block (ram,0x0159dcc4) */
/* WARNING: Removing unreachable block (ram,0x0159dccc) */
/* WARNING: Removing unreachable block (ram,0x0159dce0) */
/* WARNING: Removing unreachable block (ram,0x0159db54) */
/* WARNING: Removing unreachable block (ram,0x0159d8b0) */
/* WARNING: Removing unreachable block (ram,0x0159d8cc) */
/* WARNING: Removing unreachable block (ram,0x0159d810) */
/* WARNING: Removing unreachable block (ram,0x0159d82c) */
/* WARNING: Removing unreachable block (ram,0x0159d770) */
/* WARNING: Removing unreachable block (ram,0x0159d78c) */
/* WARNING: Removing unreachable block (ram,0x0159d6d0) */
/* WARNING: Removing unreachable block (ram,0x0159d6ec) */
/* WARNING: Removing unreachable block (ram,0x0159d630) */
/* WARNING: Removing unreachable block (ram,0x0159d64c) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

long * Atlas_Contexts_GameContextBaseInProgressState__Init
                 (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  uVar1 = param_3;
  lVar7 = param_4;
  if ((bRam0000000003eb51c1 & 1) == 0) {
    func_0x00f78a20(0x3d550b0);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d55148);
    func_0x00f78a20(0x3d55168);
    bRam0000000003eb51c1 = 1;
  }
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  if (param_4 != 0) {
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_4,uRam0000000003d550b8);
    *(undefined8 *)(param_1 + 0x78) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_4,uRam0000000003d55148);
    *(undefined8 *)(param_1 + 0x88) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_4,uRam0000000003d55168);
    *(undefined8 *)(param_1 + 0x90) = uVar1;
    plVar2 = (long *)/*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_4,uRam0000000003d550b0);
    *(long **)(param_1 + 0x98) = plVar2;
    return plVar2;
  }
  auVar8 = func_0x00f78af4();
  uVar6 = auVar8._8_8_;
  lVar5 = auVar8._0_8_;
  if ((bRam0000000003eb51ca & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d55068);
    func_0x00f78a20(0x3d55088);
    func_0x00f78a20(0x3d55090);
    func_0x00f78a20(0x3d550b0);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d55148);
    func_0x00f78a20(0x3d55150);
    func_0x00f78a20(0x3d55188);
    func_0x00f78a20(0x3d57120);
    func_0x00f78a20(0x3d57128);
    func_0x00f78a20(0x3d57130);
    func_0x00f78a20(0x3d5d958);
    func_0x00f78a20(0x3d5d960);
    func_0x00f78a20(0x3d5d968);
    func_0x00f78a20(0x3d24d40);
    bRam0000000003eb51ca = 1;
  }
  if (param_5 != 0) {
    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d550b8);
    *(undefined8 *)(lVar5 + 0x88) = uVar3;
    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55148);
    *(undefined8 *)(lVar5 + 0x90) = uVar3;
    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55088);
    *(undefined8 *)(lVar5 + 0x98) = uVar3;
    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d550b0);
    *(undefined8 *)(lVar5 + 0xa0) = uVar3;
    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55150);
    *(undefined8 *)(lVar5 + 0xd0) = uVar3;
    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55188);
    *(undefined8 *)(lVar5 + 0xa8) = uVar3;
    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55068);
    *(undefined8 *)(lVar5 + 0xb0) = uVar3;
    uVar3 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55090);
    *(undefined8 *)(lVar5 + 0x78) = uVar6;
    *(undefined8 *)(lVar5 + 0xb8) = uVar3;
    *(undefined8 *)(lVar5 + 0xc0) = uVar1;
    lVar4 = func_0x00f78aec(/*Core.StateManagement.StateMachine_TypeInfo*/ uRam0000000003d24d40);
    /*Core.StateManagement.StateMachine$$.ctor*/ func_0x02b9585c(lVar4,0);
    *(long *)(lVar5 + 200) = lVar4;
    if (lVar4 != 0) {
      /*Core.StateManagement.StateMachine$$Init*/ func_0x02b95450(lVar4,2,0);
      if (*(long *)(lVar5 + 200) != 0) {
        /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar5 + 200),(long *)(lVar5 + 0xd8),uRam0000000003d5d958);
        if (*(long *)(lVar5 + 200) != 0) {
          /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar5 + 200),lVar5 + 0xe0,uRam0000000003d5d968);
          if (*(long *)(lVar5 + 200) != 0) {
            /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar5 + 200),(long *)(lVar5 + 0xe8),uRam0000000003d5d960);
            lVar4 = *(long *)(lVar5 + 0xd8);
            if (lVar4 != 0) {
              /*Atlas.Contexts.OutroSequenceBeginRoundCompleteState$$Init*/ func_0x014b48cc(lVar4,uVar6,lVar7,0);
              lVar7 = *(long *)(lVar5 + 0xd8);
              uVar1 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(uVar1,lVar5,uRam0000000003d57130,0);
              if (lVar7 != 0) {
                /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar7,uVar1,0);
                if ((*(long *)(lVar5 + 0xd0) != 0) && (*(long *)(lVar5 + 0xe0) != 0)) {
                  /*Atlas.Contexts.OutroSequenceShowPlacementsState$$Init*/ func_0x014b5468(*(long *)(lVar5 + 0xe0),uVar6,
                                  *(undefined1 *)(*(long *)(lVar5 + 0xd0) + 0x50),0);
                  lVar7 = *(long *)(lVar5 + 0xe8);
                  if (lVar7 != 0) {
                    /*Atlas.Contexts.OutroSequenceEndGameState$$Init*/ func_0x014b4ba8(lVar7,param_5,uVar6,0);
                    if (((*(long *)(lVar5 + 0xd0) != 0) &&
                        (lVar7 = *(long *)(*(long *)(lVar5 + 0xd0) + 0x20), lVar7 != 0)) &&
                       (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)) {
                      uVar6 = *(undefined8 *)(lVar7 + 0x20);
                      uVar1 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
                      /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(uVar1,lVar5,uRam0000000003d57120,uRam0000000003d2a1d8);
                      plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,uVar1,0);
                      if ((plVar2 != (long *)0x0) && (*plVar2 != /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8))
                      goto code_r0x0159c53c;
                      *(long **)(lVar7 + 0x20) = plVar2;
                      if ((*(long *)(lVar5 + 0xd0) != 0) &&
                         ((lVar7 = *(long *)(*(long *)(lVar5 + 0xd0) + 0x20), lVar7 != 0 &&
                          (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)))) {
                        uVar6 = *(undefined8 *)(lVar7 + 0x68);
                        uVar1 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
                        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar1,lVar5,uRam0000000003d57128,uRam0000000003d29f28);
                        plVar2 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar6,uVar1,0);
                        if ((plVar2 == (long *)0x0) || (*plVar2 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
                          *(long **)(lVar7 + 0x68) = plVar2;
                          return plVar2;
                        }
                        goto code_r0x0159c53c;
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
  func_0x00f78af4();
code_r0x0159c53c:
  lVar7 = func_0x00f78e5c();
  lVar5 = *(long *)(lVar7 + 0x20);
  if (lVar5 != 0) {
    plVar2 = (long *)/*Core.StateManagement.StateMachine$$DeInit*/ func_0x02b954d8(lVar5,0);
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(long *)(lVar7 + 0x20) = 0;
    *(undefined8 *)(lVar7 + 0x38) = 0;
    *(undefined8 *)(lVar7 + 0x30) = 0;
    return plVar2;
  }
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb51b4 & 1) == 0) {
    func_0x00f78a20(0x3d276d0);
    bRam0000000003eb51b4 = 1;
  }
  plVar2 = (long *)func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<InitPools>d__164_TypeInfo*/ uRam0000000003d276d0);
  Atlas_Contexts_GameContextBase__InitPools_d__164___ctor(plVar2,0,0);
  if (plVar2 != (long *)0x0) {
    plVar2[4] = lVar7;
    return plVar2;
  }
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb51b5 & 1) == 0) {
    func_0x00f78a20(0x3d5b978);
    bRam0000000003eb51b5 = 1;
  }
  if (*(long *)(lVar7 + 0x98) != 0) {
    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x98),uRam0000000003d5b978);
    lVar7 = *(long *)(lVar7 + 0xb0);
    if (lVar7 != 0) {
      if ((bRam0000000003eb4e5c & 1) == 0) {
        func_0x00f78a20(0x3d5b958,0);
        func_0x00f78a20(0x3d5b960);
        func_0x00f78a20(0x3d5b968);
        func_0x00f78a20(0x3d5b970);
        func_0x00f78a20(0x3d5b980);
        func_0x00f78a20(0x3d5b988);
        func_0x00f78a20(0x3d5b990);
        func_0x00f78a20(0x3d5b998);
        func_0x00f78a20(0x3d5b9a0);
        func_0x00f78a20(0x3d5ba40);
        func_0x00f78a20(0x3d5ba48);
        func_0x00f78a20(0x3d5ba50);
        func_0x00f78a20(0x3d5ba58);
        func_0x00f78a20(0x3d5ba60);
        func_0x00f78a20(0x3d5ba68);
        func_0x00f78a20(0x3d5ba70);
        func_0x00f78a20(0x3d5ba78);
        func_0x00f78a20(0x3d5ba80);
        func_0x00f78a20(0x3d5feb0);
        func_0x00f78a20(0x3d5feb8);
        func_0x00f78a20(0x3d5fec0);
        func_0x00f78a20(0x3d5fec8);
        func_0x00f78a20(0x3d5fed0);
        func_0x00f78a20(0x3d5fed8);
        func_0x00f78a20(0x3d5fee0);
        func_0x00f78a20(0x3d5fee8);
        func_0x00f78a20(0x3d71fa8);
        func_0x00f78a20(0x3d728b8);
        func_0x00f78a20(0x3d6b360);
        func_0x00f78a20(0x3d72880);
        func_0x00f78a20(0x3d6d498);
        bRam0000000003eb4e5c = 1;
      }
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar7,uRam0000000003d5fed8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar7,uRam0000000003d5fed0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar7,uRam0000000003d5fec8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar7,uRam0000000003d5fec0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar7,uRam0000000003d5feb0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar7,uRam0000000003d5feb8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar7,uRam0000000003d5fee8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar7,uRam0000000003d5fee0);
      *(undefined8 *)(lVar7 + 0x50) = 0;
      *(undefined8 *)(lVar7 + 0x58) = 0;
      if (*(long *)(lVar7 + 0x10) != 0) {
        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba70);
        if (*(long *)(lVar7 + 0x10) != 0) {
          /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba68);
          if (*(long *)(lVar7 + 0x10) != 0) {
            /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba60);
            if (*(long *)(lVar7 + 0x10) != 0) {
              /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba58);
              if (*(long *)(lVar7 + 0x10) != 0) {
                /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba48);
                if (*(long *)(lVar7 + 0x10) != 0) {
                  /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba50);
                  if (*(long *)(lVar7 + 0x10) != 0) {
                    /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba80);
                    if (*(long *)(lVar7 + 0x10) != 0) {
                      /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba78);
                      if (*(long *)(lVar7 + 0x18) != 0) {
                        /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x18),uRam0000000003d5b988);
                        if (*(long *)(lVar7 + 0x18) != 0) {
                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x18),uRam0000000003d5b980);
                          if (*(long *)(lVar7 + 0x18) != 0) {
                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x18),uRam0000000003d5b970);
                            if (*(long *)(lVar7 + 0x18) != 0) {
                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x18),uRam0000000003d5b968);
                              if (*(long *)(lVar7 + 0x18) != 0) {
                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x18),uRam0000000003d5b958);
                                if (*(long *)(lVar7 + 0x18) != 0) {
                                  /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x18),uRam0000000003d5b960);
                                  if (*(long *)(lVar7 + 0x18) != 0) {
                                    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x18),uRam0000000003d5b998);
                                    if (*(long *)(lVar7 + 0x18) != 0) {
                                      /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar7 + 0x18),uRam0000000003d5b990);
                                      if (*(long *)(lVar7 + 0x10) != 0) {
                                        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar7 + 0x10),uRam0000000003d5ba40
                                                       );
                                        if (*(long *)(lVar7 + 0x18) != 0) {
                                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar7 + 0x18),
                                                          /*STR('RicochetHitVFX')*/ uRam0000000003d71fa8,uRam0000000003d5b9a0)
                                          ;
                                          if (*(long *)(lVar7 + 0x18) != 0) {
                                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar7 + 0x18),
                                                            /*STR('SheldonHitVFX')*/ uRam0000000003d72880,
                                                            uRam0000000003d5b9a0);
                                            if (*(long *)(lVar7 + 0x18) != 0) {
                                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar7 + 0x18),
                                                              /*STR('GoldenTurdHitVFX')*/ uRam0000000003d6d498,
                                                              uRam0000000003d5b9a0);
                                              if (*(long *)(lVar7 + 0x18) != 0) {
                                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar7 + 0x18),
                                                                /*STR('ShieldHitVFX')*/ uRam0000000003d728b8,
                                                                uRam0000000003d5b9a0);
                                                if (*(long *)(lVar7 + 0x18) != 0) {
                                                  plVar2 = (long *)/*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar7 +
                                                                                            0x18),
                                                                                                                                                                      
                                                  /*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,uRam0000000003d5b9a0);
                                                  *(undefined8 *)(lVar7 + 0x30) = 0;
                                                  return plVar2;
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
      lVar7 = func_0x00f78af4();
      plVar2 = (long *)Atlas_Gameplay_Usables_UsableManager__SpawnAndSetUpUsableInternal();
      if ((plVar2 != (long *)0x0) && (*(long *)(lVar7 + 0x60) != 0)) {
        Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned__Invoke
                  (*(long *)(lVar7 + 0x60),plVar2,0);
      }
      return plVar2;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb51b6 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d21b40);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b6 = 1;
  }
  plVar2 = (long *)func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerManager_TypeInfo*/ uRam0000000003d21b40);
  if ((bRam0000000003eb520d & 1) == 0) {
    func_0x00f78a20(0x3d35b00);
    func_0x00f78a20(0x3d1cd80);
    func_0x00f78a20(0x3d5b928);
    bRam0000000003eb520d = 1;
  }
  lVar7 = func_0x00f78aec(/*System.Func<PlayerRankingPair, PlayerRankingPair, bool>_TypeInfo*/ uRam0000000003d1cd80);
  /*System.Func<PlayerRankingPair, PlayerRankingPair, bool>$$.ctor*/ func_0x02185b00(lVar7,0,uRam0000000003d5b928,uRam0000000003d35b00);
  plVar2[9] = lVar7;
  return plVar2;
}



// ============================================================
// RVA: 0x159e468 | Atlas.Contexts.GameContextBaseInProgressState.add_OnInProgressScreenEntered
// ============================================================

/* WARNING: Possible PIC construction at 0x0159e744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149d7a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159e748) */
/* WARNING: Removing unreachable block (ram,0x0159e750) */
/* WARNING: Removing unreachable block (ram,0x0159e758) */
/* WARNING: Removing unreachable block (ram,0x0159e76c) */
/* WARNING: Removing unreachable block (ram,0x0159e774) */
/* WARNING: Removing unreachable block (ram,0x0159e78c) */
/* WARNING: Removing unreachable block (ram,0x0159e79c) */
/* WARNING: Removing unreachable block (ram,0x0149d7a4) */
/* WARNING: Removing unreachable block (ram,0x0149d79c) */

long Atlas_Contexts_GameContextBaseInProgressState__add_OnInProgressScreenEntered
               (long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  long **pplVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar20;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar21;
  undefined *puVar22;
  float fVar23;
  undefined4 extraout_s0;
  undefined4 uVar24;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  long lStack_f8;
  undefined8 *****pppppuStack_f0;
  undefined *puStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb51bd & 1) == 0) {
    func_0x00f78a20(0x3d1b438);
    bRam0000000003eb51bd = 1;
  }
  plVar16 = (long *)(param_1 + 0xb0);
  lVar17 = *plVar16;
  while ((plVar7 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar17,param_2,0), plVar7 == (long *)0x0 ||
         (*plVar7 == /*System.Action<GameInProgressScreen>_TypeInfo*/ lRam0000000003d1b438))) {
    lVar8 = func_0x00ff0f44(plVar16,plVar7,lVar17);
    bVar4 = lVar17 == lVar8;
    lVar17 = lVar8;
    if (bVar4) {
      return lVar8;
    }
  }
  auVar26 = func_0x00f78e5c(plVar7);
  uVar12 = auVar26._8_8_;
  uStack_60 = 0x3d1b438;
  puStack_38 = &Atlas_Contexts_GameContextBaseInProgressState__remove_OnInProgressScreenEntered;
  lStack_58 = lVar17;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb51be & 1) == 0) {
    func_0x00f78a20(0x3d1b438);
    bRam0000000003eb51be = 1;
  }
  plVar16 = (long *)(auVar26._0_8_ + 0xb0);
  lVar17 = *plVar16;
  while ((plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar17,uVar12,0), plVar7 == (long *)0x0 ||
         (*plVar7 == /*System.Action<GameInProgressScreen>_TypeInfo*/ lRam0000000003d1b438))) {
    lVar8 = func_0x00ff0f44(plVar16,plVar7,lVar17);
    bVar4 = lVar17 == lVar8;
    lVar17 = lVar8;
    if (bVar4) {
      return lVar8;
    }
  }
  auVar26 = func_0x00f78e5c(plVar7);
  uVar18 = auVar26._8_8_;
  uStack_90 = 0x3d1b438;
  puStack_68 = &Atlas_Contexts_GameContextBaseInProgressState__add_OnInProgressScreenExited;
  lStack_88 = lVar17;
  plStack_80 = plVar16;
  uStack_78 = uVar12;
  ppuStack_70 = &puStack_40;
  if ((bRam0000000003eb51bf & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb51bf = 1;
  }
  plVar16 = (long *)(auVar26._0_8_ + 0xb8);
  lVar17 = *plVar16;
  while ((plVar7 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar17,uVar18,0), plVar7 == (long *)0x0 ||
         (*plVar7 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar8 = func_0x00ff0f44(plVar16,plVar7,lVar17);
    bVar4 = lVar17 == lVar8;
    lVar17 = lVar8;
    if (bVar4) {
      return lVar8;
    }
  }
  auVar26 = func_0x00f78e5c(plVar7);
  uVar12 = auVar26._8_8_;
  uStack_c0 = 0x3d1fa78;
  puStack_98 = &Atlas_Contexts_GameContextBaseInProgressState__remove_OnInProgressScreenExited;
  lStack_b8 = lVar17;
  plStack_b0 = plVar16;
  uStack_a8 = uVar18;
  pppuStack_a0 = (undefined8 ***)&ppuStack_70;
  if ((bRam0000000003eb51c0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb51c0 = 1;
  }
  uVar18 = 0x3d1fa78;
  plVar16 = (long *)(auVar26._0_8_ + 0xb8);
  lVar17 = *plVar16;
  while ((plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar17,uVar12,0), plVar7 == (long *)0x0 ||
         (*plVar7 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar8 = func_0x00ff0f44(plVar16,plVar7,lVar17);
    bVar4 = lVar17 == lVar8;
    lVar17 = lVar8;
    if (bVar4) {
      return lVar8;
    }
  }
  lStack_f8 = func_0x00f78e5c(plVar7);
  puStack_c8 = &Atlas_Contexts_GameContextBaseInProgressState__OnEnter;
  plStack_e0 = plVar16;
  uStack_d8 = uVar12;
  ppppuStack_d0 = &pppuStack_a0;
  lStack_108 = lVar17;
  plStack_100 = plVar16;
  pppppuStack_f0 = &ppppuStack_d0;
  if (*(long *)(lStack_f8 + 0x88) != 0) {
    /*Atlas.Audio.MusicManager$$SetParameter*/ func_0x0149d550(*(long *)(lStack_f8 + 0x88),3,0);
    if ((*(long *)(lStack_f8 + 0x80) != 0) &&
       (lVar8 = *(long *)(*(long *)(lStack_f8 + 0x80) + 0x1c0), lVar8 != 0)) {
      lVar9 = *(long *)(lStack_f8 + 0x88);
      if (*(int *)(lVar8 + 200) == 2) {
        if (lVar9 != 0) {
          iVar5 = 10;
code_r0x0159e740:
          uStack_110 = 0x3d1fa78;
          puStack_e8 = &UNK_0159e748;
          lVar17 = lVar9;
          if ((bRam0000000003eb4a18 & 1) == 0) {
            lVar17 = func_0x00f78a20(0x3d69668,iVar5,0);
            bRam0000000003eb4a18 = 1;
          }
          if (*(int *)(lVar9 + 0x30) != 1) {
            return lVar17;
          }
          if (*(long *)(lVar9 + 0x10) == 0) {
            return 0;
          }
          lVar17 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar9 + 0x10),0);
          if ((int)lVar17 == 0) {
            return lVar17;
          }
          lVar17 = *(long *)(lVar9 + 0x10);
          if (lVar17 == 0) {
            lVar17 = func_0x00f78af4();
            if ((bRam0000000003eb4a15 & 1) == 0) {
              func_0x00f78a20(0x3d71930);
              func_0x00f78a20(0x3d69668);
              bRam0000000003eb4a15 = 1;
            }
            lVar8 = 0;
            if (*(long *)(lVar17 + 0x10) != 0) {
              puVar11 = (undefined8 *)0x3d69668;
              if (*(int *)(lVar17 + 0x30) != 1) {
                puVar11 = (undefined8 *)0x3d71930;
              }
              lVar8 = /*Core.Audio.AudioEvent$$GetParameter*/ func_0x01639030(*(long *)(lVar17 + 0x10),*puVar11,0);
              *(undefined4 *)(lVar17 + 0x40) = extraout_s0;
            }
            return lVar8;
          }
          fVar23 = (float)iVar5;
          pplVar2 = &plStack_e0;
          uVar12 = /*STR('BattleMusic_Context')*/ uRam0000000003d69668;
          lVar8 = lStack_f8;
          plVar16 = plStack_100;
          lVar9 = lStack_108;
          uVar18 = uStack_110;
          ppppppuVar21 = (undefined8 ******)pppppuStack_f0;
          puVar22 = puStack_e8;
          goto Core_Audio_AudioEvent__SetParameter;
        }
      }
      else if (lVar9 != 0) {
        iVar5 = 3;
        goto code_r0x0159e740;
      }
    }
  }
  lVar8 = func_0x00f78af4();
  pplVar3 = (long **)&uStack_110;
  uStack_110 = 0x3d1fa78;
  puStack_e8 = &Atlas_Contexts_GameContextBaseInProgressState__OnUpdate;
  ppppppuVar21 = &pppppuStack_f0;
  if (*(char *)(lVar8 + 0xa8) == '\0') {
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar9 = *(long *)(*(long *)(lVar8 + 0x80) + 0x230);
      if (lVar9 != 0) {
        /*Atlas.Arcade.ArcadeEvent$$InProgressStateStartFirstUpdate*/ func_0x0144ddfc(lVar9,0);
      }
      *(undefined1 *)(lVar8 + 0xa8) = 1;
      goto code_r0x0159e7f4;
    }
code_r0x0159e8cc:
    puVar22 = &Atlas_UI_Screens_GameInProgressScreen__OnPauseRequested;
    lVar10 = func_0x00f78af4();
  }
  else {
code_r0x0159e7f4:
    plVar16 = (long *)0x3ca3000;
    if (cRam0000000003ca3507 == '\0') {
      func_0x00f78a20(0x3d21b78);
      cRam0000000003ca3507 = '\x01';
    }
    if (**(long **)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 0xb8) == 0) {
      plVar16 = (long *)0x0;
    }
    else {
      lVar9 = *(long *)(**(long **)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 0xb8) + 0x188);
      if (lVar9 == 0) goto code_r0x0159e8cc;
      plVar16 = (long *)/*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(lVar9,0);
    }
    lVar17 = 0x3ca3000;
    if (cRam0000000003ca3500 == '\0') {
      func_0x00f78a20(0x3d22d90);
      cRam0000000003ca3500 = '\x01';
    }
    lVar9 = 0;
    if (**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8) != 0) {
      lVar9 = /*UnityEngine.InputSystem.Keyboard$$get_escapeKey*/ func_0x03078cd8(**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8),0);
      if (lVar9 == 0) goto code_r0x0159e8cc;
      lVar9 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(lVar9,0);
    }
    if ((int)lVar9 == 0 && (int)plVar16 == 0) {
      return lVar9;
    }
    if ((*(long *)(lVar8 + 0x80) == 0) ||
       (lVar10 = *(long *)(*(long *)(lVar8 + 0x80) + 0x48), lVar10 == 0)) goto code_r0x0159e8cc;
    pplVar3 = &plStack_e0;
    lVar8 = lStack_f8;
    plVar16 = plStack_100;
    lVar17 = lStack_108;
    uVar18 = uStack_110;
    ppppppuVar21 = (undefined8 ******)pppppuStack_f0;
    puVar22 = puStack_e8;
  }
  *(undefined8 *)((long)pplVar3 + -0x30) = uVar18;
  *(long *)((long)pplVar3 + -0x28) = lVar17;
  *(long **)((long)pplVar3 + -0x20) = plVar16;
  *(long *)((long)pplVar3 + -0x18) = lVar8;
  *(undefined8 *******)((long)pplVar3 + -0x10) = ppppppuVar21;
  *(undefined **)((long)pplVar3 + -8) = puVar22;
  lVar9 = 0x3eb5000;
  if ((bRam0000000003eb5224 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5224 = 1;
  }
  lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41088);
  if ((lVar17 != 0) && (*(long *)(lVar17 + 0x40) != 0)) {
    if (*(char *)(*(long *)(lVar17 + 0x40) + 0x48) != '\0') {
      return lVar17;
    }
    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41088);
    if ((lVar17 != 0) && (*(long *)(lVar17 + 0x40) != 0)) {
      if (*(char *)(*(long *)(lVar17 + 0x40) + 0x49) != '\0') {
        return lVar17;
      }
      lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41088);
      if ((lVar17 != 0) && (*(long *)(lVar17 + 0x30) != 0)) {
        if (*(char *)(*(long *)(lVar17 + 0x30) + 0x1b8) == '\0') {
          return lVar17;
        }
        lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41080);
        if (lVar17 != 0) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$StashButtonInteractableStates*/ func_0x015ac630(lVar17,0);
          lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41088);
          if ((lVar17 != 0) && (*(long *)(lVar17 + 0x40) != 0)) {
            lVar17 = /*Atlas.Gameplay.PauseManager$$UserPause*/ func_0x014b6a64(*(long *)(lVar17 + 0x40),0);
            *(undefined1 *)(lVar10 + 0xf4) = 1;
            return lVar17;
          }
        }
      }
    }
  }
  lVar17 = func_0x00f78af4();
  *(undefined1 **)((long)pplVar3 + -0x40) = (undefined1 *)((long)pplVar3 + -0x10);
  *(undefined **)((long)pplVar3 + -0x38) = &Atlas_Contexts_GameContextBaseInProgressState__OnExit;
  lVar17 = *(long *)(lVar17 + 0x90);
  if (lVar17 == 0) {
    lVar17 = func_0x00f78af4();
    lVar17 = *(long *)(lVar17 + 0x60);
    if (lVar17 == 0) {
      return 0;
    }
    uVar12 = 0;
    *(undefined8 *)((long)pplVar3 + -0x90) = unaff_x26;
    *(undefined8 *)((long)pplVar3 + -0x88) = unaff_x25;
    *(undefined8 *)((long)pplVar3 + -0x80) = unaff_x24;
    *(undefined8 *)((long)pplVar3 + -0x78) = unaff_x23;
    *(undefined8 *)((long)pplVar3 + -0x70) = uVar18;
    *(undefined8 *)((long)pplVar3 + -0x68) = 0x3eb5000;
    *(undefined8 *)((long)pplVar3 + -0x60) = 0x3d41088;
    *(long *)((long)pplVar3 + -0x58) = lVar10;
    *(undefined1 **)((long)pplVar3 + -0x50) = (undefined1 *)((long)pplVar3 + -0x40);
    *(undefined **)((long)pplVar3 + -0x48) =
         &Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished;
    *(long *)((long)pplVar3 + -0x98) = lVar17;
    lVar8 = *(long *)(lVar17 + 0x68);
    if (lVar8 == 0) {
      puVar20 = (undefined1 *)((long)pplVar3 + -0x98);
      lVar9 = 1;
    }
    else {
      lVar9 = *(long *)(lVar8 + 0x18);
      if (lVar9 == 0) {
        return lVar17;
      }
      puVar20 = (undefined1 *)(lVar8 + 0x20);
    }
    lVar8 = 0;
    do {
      lVar10 = *(long *)(puVar20 + lVar8 * 8);
      pcVar19 = *(code **)(lVar10 + 0x10);
      plVar16 = *(long **)(lVar10 + 0x20);
      lVar10 = *(long *)(lVar10 + 0x28);
      if (*(short *)(lVar10 + 0x48) == -1) {
        func_0x00f78ad8(lVar10,uVar12);
      }
      iVar5 = func_0x00f78a4c(lVar10);
      if (iVar5 == 0) {
        if ((((plVar16 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
            ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar17 + 0x18) == 0))
        goto code_r0x02924d98;
        iVar5 = func_0x00f78a44(lVar10);
        iVar6 = func_0x00f78ec0(lVar10);
        if (iVar5 == 0) {
          uVar1 = *(ushort *)(lVar10 + 0x48);
          if (iVar6 == 0) {
            lVar10 = *plVar16 + (ulong)uVar1 * 0x10;
            auVar26 = (**(code **)(lVar10 + 0x138))(plVar16,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x02924da4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar10) {
                puVar11 = (undefined8 *)
                          (lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x02924e68;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar16,lVar10,(ulong)uVar1);
code_r0x02924e68:
          pcVar19 = (code *)*puVar11;
          puVar11 = (undefined8 *)puVar11[1];
        }
        else {
          if (iVar6 == 0) {
            uVar12 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar16;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
            uVar12 = *(undefined8 *)(lVar13 + 8);
          }
          puVar11 = (undefined8 *)func_0x00f78acc(uVar12,lVar10);
          pcVar19 = (code *)*puVar11;
        }
        auVar26 = (*pcVar19)(plVar16,puVar11);
      }
      else if (*(char *)(lVar10 + 0x4a) == '\0') {
        auVar26 = (*pcVar19)(lVar10);
      }
      else {
code_r0x02924d98:
        auVar26 = (*pcVar19)(plVar16,lVar10);
      }
code_r0x02924da4:
      uVar12 = auVar26._8_8_;
      lVar8 = lVar8 + 1;
      if (lVar8 == lVar9) {
        return auVar26._0_8_;
      }
    } while( true );
  }
  uVar12 = 0;
  *(undefined8 *)((long)pplVar3 + -0x50) = 0x3d41088;
  *(long *)((long)pplVar3 + -0x48) = lVar10;
  *(undefined8 *)((long)pplVar3 + -0x40) = *(undefined8 *)((long)pplVar3 + -0x40);
  *(undefined8 *)((long)pplVar3 + -0x38) = *(undefined8 *)((long)pplVar3 + -0x38);
  if ((*(char *)(lVar17 + 0x48) == '\0') && (*(char *)(lVar17 + 0x49) == '\0')) {
    return lVar17;
  }
  *(undefined4 *)(lVar17 + 0x4c) = 3;
  *(undefined2 *)(lVar17 + 0x48) = 0;
  if (*(long *)(lVar17 + 0x20) != 0) {
    uVar12 = 0;
    /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(lVar17 + 0x20),8);
    lVar8 = *(long *)(lVar17 + 0x28);
    if (lVar8 != 0) {
      *(undefined8 *)((long)pplVar3 + -0x50) = *(undefined8 *)((long)pplVar3 + -0x50);
      *(undefined8 *)((long)pplVar3 + -0x48) = *(undefined8 *)((long)pplVar3 + -0x48);
      *(undefined8 *)((long)pplVar3 + -0x40) = *(undefined8 *)((long)pplVar3 + -0x40);
      *(undefined8 *)((long)pplVar3 + -0x38) = *(undefined8 *)((long)pplVar3 + -0x38);
      *(undefined8 *)((long)pplVar3 + -0x50) = *(undefined8 *)((long)pplVar3 + -0x50);
      *(undefined8 *)((long)pplVar3 + -0x48) = *(undefined8 *)((long)pplVar3 + -0x48);
      *(undefined8 *)((long)pplVar3 + -0x40) = *(undefined8 *)((long)pplVar3 + -0x40);
      *(undefined8 *)((long)pplVar3 + -0x38) = *(undefined8 *)((long)pplVar3 + -0x38);
      if ((bRam0000000003eb4a16 & 1) == 0) {
        func_0x00f78a20(0x3d71930,0,0);
        func_0x00f78a20(0x3d69668);
        bRam0000000003eb4a16 = 1;
      }
      lVar17 = *(long *)(lVar8 + 0x10);
      if (lVar17 == 0) {
        return 0;
      }
      fVar23 = *(float *)(lVar8 + 0x40);
      puVar11 = (undefined8 *)0x3d69668;
      if (*(int *)(lVar8 + 0x30) != 1) {
        puVar11 = (undefined8 *)0x3d71930;
      }
      uVar12 = *puVar11;
      ppppppuVar21 = *(undefined8 *******)((long)pplVar3 + -0x40);
      puVar22 = *(undefined **)((long)pplVar3 + -0x38);
      pplVar2 = (long **)((long)pplVar3 + -0x30);
      plVar16 = *(long **)((long)pplVar3 + -0x50);
      lVar8 = *(long *)((long)pplVar3 + -0x48);
Core_Audio_AudioEvent__SetParameter:
      *(undefined8 *)((long)pplVar2 + -0x40) = unaff_d9;
      *(undefined8 *)((long)pplVar2 + -0x38) = unaff_d8;
      *(undefined8 *)((long)pplVar2 + -0x30) = uVar18;
      *(long *)((long)pplVar2 + -0x28) = lVar9;
      *(long **)((long)pplVar2 + -0x20) = plVar16;
      *(long *)((long)pplVar2 + -0x18) = lVar8;
      *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar21;
      *(undefined **)((long)pplVar2 + -8) = puVar22;
      iVar5 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar17 + 0x28,0,0,0);
      if (iVar5 != 0) {
        /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(fVar23,lVar17 + 0x28,uVar12,0,0);
      }
      return lVar17;
    }
  }
  auVar25 = func_0x00f78af4();
  *(long *)((long)pplVar3 + -0x70) = lVar17;
  *(undefined8 *)((long)pplVar3 + -0x68) = 0;
  *(undefined1 **)((long)pplVar3 + -0x60) = (undefined1 *)((long)pplVar3 + -0x40);
  *(undefined **)((long)pplVar3 + -0x58) = &Atlas_Gameplay_PauseManager__SetSystemsPaused;
  uVar24 = 0;
  if (auVar25._8_4_ == 0) {
    uVar24 = 0x3f800000;
  }
  lVar17 = /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(uVar24,0);
  lVar8 = *(long *)(auVar25._0_8_ + 0x30);
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x20);
    lVar17 = 0;
    if (lVar8 != 0) {
      *(undefined8 *)((long)pplVar3 + -0x60) = *(undefined8 *)((long)pplVar3 + -0x60);
      *(undefined8 *)((long)pplVar3 + -0x58) = *(undefined8 *)((long)pplVar3 + -0x58);
      *(char *)(lVar8 + 0x1b8) = (char)uVar12;
      lVar17 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c((undefined1 *)((long)pplVar3 + -0x78),lVar8,uVar12,0);
      return lVar17;
    }
  }
  return lVar17;
}



// ============================================================
// RVA: 0x159e508 | Atlas.Contexts.GameContextBaseInProgressState.remove_OnInProgressScreenEntered
// ============================================================

/* WARNING: Possible PIC construction at 0x0159e744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149d7a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159e748) */
/* WARNING: Removing unreachable block (ram,0x0159e750) */
/* WARNING: Removing unreachable block (ram,0x0159e758) */
/* WARNING: Removing unreachable block (ram,0x0159e76c) */
/* WARNING: Removing unreachable block (ram,0x0159e774) */
/* WARNING: Removing unreachable block (ram,0x0159e78c) */
/* WARNING: Removing unreachable block (ram,0x0159e79c) */
/* WARNING: Removing unreachable block (ram,0x0149d7a4) */
/* WARNING: Removing unreachable block (ram,0x0149d79c) */

long Atlas_Contexts_GameContextBaseInProgressState__remove_OnInProgressScreenEntered
               (long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  long **pplVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  long lVar18;
  code *pcVar19;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar20;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar21;
  undefined *puVar22;
  float fVar23;
  undefined4 extraout_s0;
  undefined4 uVar24;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  undefined8 uStack_e0;
  long lStack_d8;
  long *plStack_d0;
  long lStack_c8;
  undefined8 *****pppppuStack_c0;
  undefined *puStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 ****ppppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 ***pppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb51be & 1) == 0) {
    func_0x00f78a20(0x3d1b438);
    bRam0000000003eb51be = 1;
  }
  plVar17 = (long *)(param_1 + 0xb0);
  lVar18 = *plVar17;
  while ((plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar18,param_2,0), plVar7 == (long *)0x0 ||
         (*plVar7 == /*System.Action<GameInProgressScreen>_TypeInfo*/ lRam0000000003d1b438))) {
    lVar8 = func_0x00ff0f44(plVar17,plVar7,lVar18);
    bVar4 = lVar18 == lVar8;
    lVar18 = lVar8;
    if (bVar4) {
      return lVar8;
    }
  }
  auVar26 = func_0x00f78e5c(plVar7);
  uVar11 = auVar26._8_8_;
  uStack_60 = 0x3d1b438;
  puStack_38 = &Atlas_Contexts_GameContextBaseInProgressState__add_OnInProgressScreenExited;
  lStack_58 = lVar18;
  plStack_50 = plVar17;
  uStack_48 = param_2;
  puStack_40 = (undefined8 *)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb51bf & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb51bf = 1;
  }
  plVar17 = (long *)(auVar26._0_8_ + 0xb8);
  lVar18 = *plVar17;
  while ((plVar7 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar18,uVar11,0), plVar7 == (long *)0x0 ||
         (*plVar7 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar8 = func_0x00ff0f44(plVar17,plVar7,lVar18);
    bVar4 = lVar18 == lVar8;
    lVar18 = lVar8;
    if (bVar4) {
      return lVar8;
    }
  }
  auVar26 = func_0x00f78e5c(plVar7);
  uVar13 = auVar26._8_8_;
  uStack_90 = 0x3d1fa78;
  puStack_68 = &Atlas_Contexts_GameContextBaseInProgressState__remove_OnInProgressScreenExited;
  lStack_88 = lVar18;
  plStack_80 = plVar17;
  uStack_78 = uVar11;
  pppuStack_70 = (undefined8 ***)&puStack_40;
  if ((bRam0000000003eb51c0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb51c0 = 1;
  }
  uVar11 = 0x3d1fa78;
  plVar17 = (long *)(auVar26._0_8_ + 0xb8);
  lVar18 = *plVar17;
  while ((plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar18,uVar13,0), plVar7 == (long *)0x0 ||
         (*plVar7 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar8 = func_0x00ff0f44(plVar17,plVar7,lVar18);
    bVar4 = lVar18 == lVar8;
    lVar18 = lVar8;
    if (bVar4) {
      return lVar8;
    }
  }
  lStack_c8 = func_0x00f78e5c(plVar7);
  puStack_98 = &Atlas_Contexts_GameContextBaseInProgressState__OnEnter;
  plStack_b0 = plVar17;
  uStack_a8 = uVar13;
  ppppuStack_a0 = &pppuStack_70;
  lStack_d8 = lVar18;
  plStack_d0 = plVar17;
  pppppuStack_c0 = &ppppuStack_a0;
  if (*(long *)(lStack_c8 + 0x88) != 0) {
    /*Atlas.Audio.MusicManager$$SetParameter*/ func_0x0149d550(*(long *)(lStack_c8 + 0x88),3,0);
    if ((*(long *)(lStack_c8 + 0x80) != 0) &&
       (lVar8 = *(long *)(*(long *)(lStack_c8 + 0x80) + 0x1c0), lVar8 != 0)) {
      lVar9 = *(long *)(lStack_c8 + 0x88);
      if (*(int *)(lVar8 + 200) == 2) {
        if (lVar9 != 0) {
          iVar5 = 10;
code_r0x0159e740:
          uStack_e0 = 0x3d1fa78;
          puStack_b8 = &UNK_0159e748;
          lVar18 = lVar9;
          if ((bRam0000000003eb4a18 & 1) == 0) {
            lVar18 = func_0x00f78a20(0x3d69668,iVar5,0);
            bRam0000000003eb4a18 = 1;
          }
          if (*(int *)(lVar9 + 0x30) != 1) {
            return lVar18;
          }
          if (*(long *)(lVar9 + 0x10) == 0) {
            return 0;
          }
          lVar18 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar9 + 0x10),0);
          if ((int)lVar18 == 0) {
            return lVar18;
          }
          lVar18 = *(long *)(lVar9 + 0x10);
          if (lVar18 == 0) {
            lVar18 = func_0x00f78af4();
            if ((bRam0000000003eb4a15 & 1) == 0) {
              func_0x00f78a20(0x3d71930);
              func_0x00f78a20(0x3d69668);
              bRam0000000003eb4a15 = 1;
            }
            lVar8 = 0;
            if (*(long *)(lVar18 + 0x10) != 0) {
              puVar12 = (undefined8 *)0x3d69668;
              if (*(int *)(lVar18 + 0x30) != 1) {
                puVar12 = (undefined8 *)0x3d71930;
              }
              lVar8 = /*Core.Audio.AudioEvent$$GetParameter*/ func_0x01639030(*(long *)(lVar18 + 0x10),*puVar12,0);
              *(undefined4 *)(lVar18 + 0x40) = extraout_s0;
            }
            return lVar8;
          }
          fVar23 = (float)iVar5;
          pplVar2 = &plStack_b0;
          uVar13 = /*STR('BattleMusic_Context')*/ uRam0000000003d69668;
          lVar8 = lStack_c8;
          plVar17 = plStack_d0;
          lVar9 = lStack_d8;
          uVar11 = uStack_e0;
          ppppppuVar21 = (undefined8 ******)pppppuStack_c0;
          puVar22 = puStack_b8;
          goto Core_Audio_AudioEvent__SetParameter;
        }
      }
      else if (lVar9 != 0) {
        iVar5 = 3;
        goto code_r0x0159e740;
      }
    }
  }
  lVar8 = func_0x00f78af4();
  pplVar3 = (long **)&uStack_e0;
  uStack_e0 = 0x3d1fa78;
  puStack_b8 = &Atlas_Contexts_GameContextBaseInProgressState__OnUpdate;
  ppppppuVar21 = &pppppuStack_c0;
  if (*(char *)(lVar8 + 0xa8) == '\0') {
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar9 = *(long *)(*(long *)(lVar8 + 0x80) + 0x230);
      if (lVar9 != 0) {
        /*Atlas.Arcade.ArcadeEvent$$InProgressStateStartFirstUpdate*/ func_0x0144ddfc(lVar9,0);
      }
      *(undefined1 *)(lVar8 + 0xa8) = 1;
      goto code_r0x0159e7f4;
    }
code_r0x0159e8cc:
    puVar22 = &Atlas_UI_Screens_GameInProgressScreen__OnPauseRequested;
    lVar10 = func_0x00f78af4();
  }
  else {
code_r0x0159e7f4:
    plVar17 = (long *)0x3ca3000;
    if (cRam0000000003ca3507 == '\0') {
      func_0x00f78a20(0x3d21b78);
      cRam0000000003ca3507 = '\x01';
    }
    if (**(long **)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 0xb8) == 0) {
      plVar17 = (long *)0x0;
    }
    else {
      lVar9 = *(long *)(**(long **)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 0xb8) + 0x188);
      if (lVar9 == 0) goto code_r0x0159e8cc;
      plVar17 = (long *)/*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(lVar9,0);
    }
    lVar18 = 0x3ca3000;
    if (cRam0000000003ca3500 == '\0') {
      func_0x00f78a20(0x3d22d90);
      cRam0000000003ca3500 = '\x01';
    }
    lVar9 = 0;
    if (**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8) != 0) {
      lVar9 = /*UnityEngine.InputSystem.Keyboard$$get_escapeKey*/ func_0x03078cd8(**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8),0);
      if (lVar9 == 0) goto code_r0x0159e8cc;
      lVar9 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(lVar9,0);
    }
    if ((int)lVar9 == 0 && (int)plVar17 == 0) {
      return lVar9;
    }
    if ((*(long *)(lVar8 + 0x80) == 0) ||
       (lVar10 = *(long *)(*(long *)(lVar8 + 0x80) + 0x48), lVar10 == 0)) goto code_r0x0159e8cc;
    pplVar3 = &plStack_b0;
    lVar8 = lStack_c8;
    plVar17 = plStack_d0;
    lVar18 = lStack_d8;
    uVar11 = uStack_e0;
    ppppppuVar21 = (undefined8 ******)pppppuStack_c0;
    puVar22 = puStack_b8;
  }
  *(undefined8 *)((long)pplVar3 + -0x30) = uVar11;
  *(long *)((long)pplVar3 + -0x28) = lVar18;
  *(long **)((long)pplVar3 + -0x20) = plVar17;
  *(long *)((long)pplVar3 + -0x18) = lVar8;
  *(undefined8 *******)((long)pplVar3 + -0x10) = ppppppuVar21;
  *(undefined **)((long)pplVar3 + -8) = puVar22;
  lVar9 = 0x3eb5000;
  if ((bRam0000000003eb5224 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5224 = 1;
  }
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41088);
  if ((lVar18 != 0) && (*(long *)(lVar18 + 0x40) != 0)) {
    if (*(char *)(*(long *)(lVar18 + 0x40) + 0x48) != '\0') {
      return lVar18;
    }
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41088);
    if ((lVar18 != 0) && (*(long *)(lVar18 + 0x40) != 0)) {
      if (*(char *)(*(long *)(lVar18 + 0x40) + 0x49) != '\0') {
        return lVar18;
      }
      lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41088);
      if ((lVar18 != 0) && (*(long *)(lVar18 + 0x30) != 0)) {
        if (*(char *)(*(long *)(lVar18 + 0x30) + 0x1b8) == '\0') {
          return lVar18;
        }
        lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41080);
        if (lVar18 != 0) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$StashButtonInteractableStates*/ func_0x015ac630(lVar18,0);
          lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41088);
          if ((lVar18 != 0) && (*(long *)(lVar18 + 0x40) != 0)) {
            lVar18 = /*Atlas.Gameplay.PauseManager$$UserPause*/ func_0x014b6a64(*(long *)(lVar18 + 0x40),0);
            *(undefined1 *)(lVar10 + 0xf4) = 1;
            return lVar18;
          }
        }
      }
    }
  }
  lVar18 = func_0x00f78af4();
  *(undefined1 **)((long)pplVar3 + -0x40) = (undefined1 *)((long)pplVar3 + -0x10);
  *(undefined **)((long)pplVar3 + -0x38) = &Atlas_Contexts_GameContextBaseInProgressState__OnExit;
  lVar18 = *(long *)(lVar18 + 0x90);
  if (lVar18 == 0) {
    lVar18 = func_0x00f78af4();
    lVar18 = *(long *)(lVar18 + 0x60);
    if (lVar18 == 0) {
      return 0;
    }
    uVar13 = 0;
    *(undefined8 *)((long)pplVar3 + -0x90) = unaff_x26;
    *(undefined8 *)((long)pplVar3 + -0x88) = unaff_x25;
    *(undefined8 *)((long)pplVar3 + -0x80) = unaff_x24;
    *(undefined8 *)((long)pplVar3 + -0x78) = unaff_x23;
    *(undefined8 *)((long)pplVar3 + -0x70) = uVar11;
    *(undefined8 *)((long)pplVar3 + -0x68) = 0x3eb5000;
    *(undefined8 *)((long)pplVar3 + -0x60) = 0x3d41088;
    *(long *)((long)pplVar3 + -0x58) = lVar10;
    *(undefined1 **)((long)pplVar3 + -0x50) = (undefined1 *)((long)pplVar3 + -0x40);
    *(undefined **)((long)pplVar3 + -0x48) =
         &Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished;
    *(long *)((long)pplVar3 + -0x98) = lVar18;
    lVar8 = *(long *)(lVar18 + 0x68);
    if (lVar8 == 0) {
      puVar20 = (undefined1 *)((long)pplVar3 + -0x98);
      lVar9 = 1;
    }
    else {
      lVar9 = *(long *)(lVar8 + 0x18);
      if (lVar9 == 0) {
        return lVar18;
      }
      puVar20 = (undefined1 *)(lVar8 + 0x20);
    }
    lVar8 = 0;
    do {
      lVar10 = *(long *)(puVar20 + lVar8 * 8);
      pcVar19 = *(code **)(lVar10 + 0x10);
      plVar17 = *(long **)(lVar10 + 0x20);
      lVar10 = *(long *)(lVar10 + 0x28);
      if (*(short *)(lVar10 + 0x48) == -1) {
        func_0x00f78ad8(lVar10,uVar13);
      }
      iVar5 = func_0x00f78a4c(lVar10);
      if (iVar5 == 0) {
        if ((((plVar17 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
            ((*(byte *)(*plVar17 + 0x115) & 1) != 0)) || (*(long *)(lVar18 + 0x18) == 0))
        goto code_r0x02924d98;
        iVar5 = func_0x00f78a44(lVar10);
        iVar6 = func_0x00f78ec0(lVar10);
        if (iVar5 == 0) {
          uVar1 = *(ushort *)(lVar10 + 0x48);
          if (iVar6 == 0) {
            lVar10 = *plVar17 + (ulong)uVar1 * 0x10;
            auVar26 = (**(code **)(lVar10 + 0x138))(plVar17,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x02924da4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar14 = *plVar17;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar10) {
                puVar12 = (undefined8 *)
                          (lVar14 + (long)(int)(*piVar16 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x02924e68;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar12 = (undefined8 *)func_0x00fac1f0(plVar17,lVar10,(ulong)uVar1);
code_r0x02924e68:
          pcVar19 = (code *)*puVar12;
          puVar12 = (undefined8 *)puVar12[1];
        }
        else {
          if (iVar6 == 0) {
            uVar11 = *(undefined8 *)(*plVar17 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar17;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar17);
code_r0x02924e40:
            uVar11 = *(undefined8 *)(lVar14 + 8);
          }
          puVar12 = (undefined8 *)func_0x00f78acc(uVar11,lVar10);
          pcVar19 = (code *)*puVar12;
        }
        auVar26 = (*pcVar19)(plVar17,puVar12);
      }
      else if (*(char *)(lVar10 + 0x4a) == '\0') {
        auVar26 = (*pcVar19)(lVar10);
      }
      else {
code_r0x02924d98:
        auVar26 = (*pcVar19)(plVar17,lVar10);
      }
code_r0x02924da4:
      uVar13 = auVar26._8_8_;
      lVar8 = lVar8 + 1;
      if (lVar8 == lVar9) {
        return auVar26._0_8_;
      }
    } while( true );
  }
  uVar13 = 0;
  *(undefined8 *)((long)pplVar3 + -0x50) = 0x3d41088;
  *(long *)((long)pplVar3 + -0x48) = lVar10;
  *(undefined8 *)((long)pplVar3 + -0x40) = *(undefined8 *)((long)pplVar3 + -0x40);
  *(undefined8 *)((long)pplVar3 + -0x38) = *(undefined8 *)((long)pplVar3 + -0x38);
  if ((*(char *)(lVar18 + 0x48) == '\0') && (*(char *)(lVar18 + 0x49) == '\0')) {
    return lVar18;
  }
  *(undefined4 *)(lVar18 + 0x4c) = 3;
  *(undefined2 *)(lVar18 + 0x48) = 0;
  if (*(long *)(lVar18 + 0x20) != 0) {
    uVar13 = 0;
    /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(lVar18 + 0x20),8);
    lVar8 = *(long *)(lVar18 + 0x28);
    if (lVar8 != 0) {
      *(undefined8 *)((long)pplVar3 + -0x50) = *(undefined8 *)((long)pplVar3 + -0x50);
      *(undefined8 *)((long)pplVar3 + -0x48) = *(undefined8 *)((long)pplVar3 + -0x48);
      *(undefined8 *)((long)pplVar3 + -0x40) = *(undefined8 *)((long)pplVar3 + -0x40);
      *(undefined8 *)((long)pplVar3 + -0x38) = *(undefined8 *)((long)pplVar3 + -0x38);
      *(undefined8 *)((long)pplVar3 + -0x50) = *(undefined8 *)((long)pplVar3 + -0x50);
      *(undefined8 *)((long)pplVar3 + -0x48) = *(undefined8 *)((long)pplVar3 + -0x48);
      *(undefined8 *)((long)pplVar3 + -0x40) = *(undefined8 *)((long)pplVar3 + -0x40);
      *(undefined8 *)((long)pplVar3 + -0x38) = *(undefined8 *)((long)pplVar3 + -0x38);
      if ((bRam0000000003eb4a16 & 1) == 0) {
        func_0x00f78a20(0x3d71930,0,0);
        func_0x00f78a20(0x3d69668);
        bRam0000000003eb4a16 = 1;
      }
      lVar18 = *(long *)(lVar8 + 0x10);
      if (lVar18 == 0) {
        return 0;
      }
      fVar23 = *(float *)(lVar8 + 0x40);
      puVar12 = (undefined8 *)0x3d69668;
      if (*(int *)(lVar8 + 0x30) != 1) {
        puVar12 = (undefined8 *)0x3d71930;
      }
      uVar13 = *puVar12;
      ppppppuVar21 = *(undefined8 *******)((long)pplVar3 + -0x40);
      puVar22 = *(undefined **)((long)pplVar3 + -0x38);
      pplVar2 = (long **)((long)pplVar3 + -0x30);
      plVar17 = *(long **)((long)pplVar3 + -0x50);
      lVar8 = *(long *)((long)pplVar3 + -0x48);
Core_Audio_AudioEvent__SetParameter:
      *(undefined8 *)((long)pplVar2 + -0x40) = unaff_d9;
      *(undefined8 *)((long)pplVar2 + -0x38) = unaff_d8;
      *(undefined8 *)((long)pplVar2 + -0x30) = uVar11;
      *(long *)((long)pplVar2 + -0x28) = lVar9;
      *(long **)((long)pplVar2 + -0x20) = plVar17;
      *(long *)((long)pplVar2 + -0x18) = lVar8;
      *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar21;
      *(undefined **)((long)pplVar2 + -8) = puVar22;
      iVar5 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar18 + 0x28,0,0,0);
      if (iVar5 != 0) {
        /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(fVar23,lVar18 + 0x28,uVar13,0,0);
      }
      return lVar18;
    }
  }
  auVar25 = func_0x00f78af4();
  *(long *)((long)pplVar3 + -0x70) = lVar18;
  *(undefined8 *)((long)pplVar3 + -0x68) = 0;
  *(undefined1 **)((long)pplVar3 + -0x60) = (undefined1 *)((long)pplVar3 + -0x40);
  *(undefined **)((long)pplVar3 + -0x58) = &Atlas_Gameplay_PauseManager__SetSystemsPaused;
  uVar24 = 0;
  if (auVar25._8_4_ == 0) {
    uVar24 = 0x3f800000;
  }
  lVar18 = /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(uVar24,0);
  lVar8 = *(long *)(auVar25._0_8_ + 0x30);
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x20);
    lVar18 = 0;
    if (lVar8 != 0) {
      *(undefined8 *)((long)pplVar3 + -0x60) = *(undefined8 *)((long)pplVar3 + -0x60);
      *(undefined8 *)((long)pplVar3 + -0x58) = *(undefined8 *)((long)pplVar3 + -0x58);
      *(char *)(lVar8 + 0x1b8) = (char)uVar13;
      lVar18 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c((undefined1 *)((long)pplVar3 + -0x78),lVar8,uVar13,0);
      return lVar18;
    }
  }
  return lVar18;
}



// ============================================================
// RVA: 0x159e5a8 | Atlas.Contexts.GameContextBaseInProgressState.add_OnInProgressScreenExited
// ============================================================

/* WARNING: Possible PIC construction at 0x0159e744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149d7a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159e748) */
/* WARNING: Removing unreachable block (ram,0x0159e750) */
/* WARNING: Removing unreachable block (ram,0x0159e758) */
/* WARNING: Removing unreachable block (ram,0x0159e76c) */
/* WARNING: Removing unreachable block (ram,0x0159e774) */
/* WARNING: Removing unreachable block (ram,0x0159e78c) */
/* WARNING: Removing unreachable block (ram,0x0159e79c) */
/* WARNING: Removing unreachable block (ram,0x0149d7a4) */
/* WARNING: Removing unreachable block (ram,0x0149d79c) */

long Atlas_Contexts_GameContextBaseInProgressState__add_OnInProgressScreenExited
               (long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  long **pplVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar20;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar21;
  undefined *puVar22;
  float fVar23;
  undefined4 extraout_s0;
  undefined4 uVar24;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 ****ppppuStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb51bf & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb51bf = 1;
  }
  plVar16 = (long *)(param_1 + 0xb8);
  lVar17 = *plVar16;
  while ((plVar7 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar17,param_2,0), plVar7 == (long *)0x0 ||
         (*plVar7 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar8 = func_0x00ff0f44(plVar16,plVar7,lVar17);
    bVar4 = lVar17 == lVar8;
    lVar17 = lVar8;
    if (bVar4) {
      return lVar8;
    }
  }
  auVar26 = func_0x00f78e5c(plVar7);
  uVar12 = auVar26._8_8_;
  uStack_60 = 0x3d1fa78;
  puStack_38 = &Atlas_Contexts_GameContextBaseInProgressState__remove_OnInProgressScreenExited;
  lStack_58 = lVar17;
  plStack_50 = plVar16;
  uStack_48 = param_2;
  pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb51c0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb51c0 = 1;
  }
  uVar18 = 0x3d1fa78;
  plVar16 = (long *)(auVar26._0_8_ + 0xb8);
  lVar17 = *plVar16;
  while ((plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar17,uVar12,0), plVar7 == (long *)0x0 ||
         (*plVar7 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar8 = func_0x00ff0f44(plVar16,plVar7,lVar17);
    bVar4 = lVar17 == lVar8;
    lVar17 = lVar8;
    if (bVar4) {
      return lVar8;
    }
  }
  lStack_98 = func_0x00f78e5c(plVar7);
  puStack_68 = &Atlas_Contexts_GameContextBaseInProgressState__OnEnter;
  plStack_80 = plVar16;
  uStack_78 = uVar12;
  ppppuStack_70 = &pppuStack_40;
  lStack_a8 = lVar17;
  plStack_a0 = plVar16;
  pppppuStack_90 = &ppppuStack_70;
  if (*(long *)(lStack_98 + 0x88) != 0) {
    /*Atlas.Audio.MusicManager$$SetParameter*/ func_0x0149d550(*(long *)(lStack_98 + 0x88),3,0);
    if ((*(long *)(lStack_98 + 0x80) != 0) &&
       (lVar8 = *(long *)(*(long *)(lStack_98 + 0x80) + 0x1c0), lVar8 != 0)) {
      lVar9 = *(long *)(lStack_98 + 0x88);
      if (*(int *)(lVar8 + 200) == 2) {
        if (lVar9 != 0) {
          iVar5 = 10;
code_r0x0159e740:
          uStack_b0 = 0x3d1fa78;
          puStack_88 = &UNK_0159e748;
          lVar17 = lVar9;
          if ((bRam0000000003eb4a18 & 1) == 0) {
            lVar17 = func_0x00f78a20(0x3d69668,iVar5,0);
            bRam0000000003eb4a18 = 1;
          }
          if (*(int *)(lVar9 + 0x30) != 1) {
            return lVar17;
          }
          if (*(long *)(lVar9 + 0x10) == 0) {
            return 0;
          }
          lVar17 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar9 + 0x10),0);
          if ((int)lVar17 == 0) {
            return lVar17;
          }
          lVar17 = *(long *)(lVar9 + 0x10);
          if (lVar17 == 0) {
            lVar17 = func_0x00f78af4();
            if ((bRam0000000003eb4a15 & 1) == 0) {
              func_0x00f78a20(0x3d71930);
              func_0x00f78a20(0x3d69668);
              bRam0000000003eb4a15 = 1;
            }
            lVar8 = 0;
            if (*(long *)(lVar17 + 0x10) != 0) {
              puVar11 = (undefined8 *)0x3d69668;
              if (*(int *)(lVar17 + 0x30) != 1) {
                puVar11 = (undefined8 *)0x3d71930;
              }
              lVar8 = /*Core.Audio.AudioEvent$$GetParameter*/ func_0x01639030(*(long *)(lVar17 + 0x10),*puVar11,0);
              *(undefined4 *)(lVar17 + 0x40) = extraout_s0;
            }
            return lVar8;
          }
          fVar23 = (float)iVar5;
          pplVar2 = &plStack_80;
          uVar12 = /*STR('BattleMusic_Context')*/ uRam0000000003d69668;
          lVar8 = lStack_98;
          plVar16 = plStack_a0;
          lVar9 = lStack_a8;
          uVar18 = uStack_b0;
          ppppppuVar21 = (undefined8 ******)pppppuStack_90;
          puVar22 = puStack_88;
          goto Core_Audio_AudioEvent__SetParameter;
        }
      }
      else if (lVar9 != 0) {
        iVar5 = 3;
        goto code_r0x0159e740;
      }
    }
  }
  lVar8 = func_0x00f78af4();
  pplVar3 = (long **)&uStack_b0;
  uStack_b0 = 0x3d1fa78;
  puStack_88 = &Atlas_Contexts_GameContextBaseInProgressState__OnUpdate;
  ppppppuVar21 = &pppppuStack_90;
  if (*(char *)(lVar8 + 0xa8) == '\0') {
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar9 = *(long *)(*(long *)(lVar8 + 0x80) + 0x230);
      if (lVar9 != 0) {
        /*Atlas.Arcade.ArcadeEvent$$InProgressStateStartFirstUpdate*/ func_0x0144ddfc(lVar9,0);
      }
      *(undefined1 *)(lVar8 + 0xa8) = 1;
      goto code_r0x0159e7f4;
    }
code_r0x0159e8cc:
    puVar22 = &Atlas_UI_Screens_GameInProgressScreen__OnPauseRequested;
    lVar10 = func_0x00f78af4();
  }
  else {
code_r0x0159e7f4:
    plVar16 = (long *)0x3ca3000;
    if (cRam0000000003ca3507 == '\0') {
      func_0x00f78a20(0x3d21b78);
      cRam0000000003ca3507 = '\x01';
    }
    if (**(long **)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 0xb8) == 0) {
      plVar16 = (long *)0x0;
    }
    else {
      lVar9 = *(long *)(**(long **)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 0xb8) + 0x188);
      if (lVar9 == 0) goto code_r0x0159e8cc;
      plVar16 = (long *)/*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(lVar9,0);
    }
    lVar17 = 0x3ca3000;
    if (cRam0000000003ca3500 == '\0') {
      func_0x00f78a20(0x3d22d90);
      cRam0000000003ca3500 = '\x01';
    }
    lVar9 = 0;
    if (**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8) != 0) {
      lVar9 = /*UnityEngine.InputSystem.Keyboard$$get_escapeKey*/ func_0x03078cd8(**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8),0);
      if (lVar9 == 0) goto code_r0x0159e8cc;
      lVar9 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(lVar9,0);
    }
    if ((int)lVar9 == 0 && (int)plVar16 == 0) {
      return lVar9;
    }
    if ((*(long *)(lVar8 + 0x80) == 0) ||
       (lVar10 = *(long *)(*(long *)(lVar8 + 0x80) + 0x48), lVar10 == 0)) goto code_r0x0159e8cc;
    pplVar3 = &plStack_80;
    lVar8 = lStack_98;
    plVar16 = plStack_a0;
    lVar17 = lStack_a8;
    uVar18 = uStack_b0;
    ppppppuVar21 = (undefined8 ******)pppppuStack_90;
    puVar22 = puStack_88;
  }
  *(undefined8 *)((long)pplVar3 + -0x30) = uVar18;
  *(long *)((long)pplVar3 + -0x28) = lVar17;
  *(long **)((long)pplVar3 + -0x20) = plVar16;
  *(long *)((long)pplVar3 + -0x18) = lVar8;
  *(undefined8 *******)((long)pplVar3 + -0x10) = ppppppuVar21;
  *(undefined **)((long)pplVar3 + -8) = puVar22;
  lVar9 = 0x3eb5000;
  if ((bRam0000000003eb5224 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5224 = 1;
  }
  lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41088);
  if ((lVar17 != 0) && (*(long *)(lVar17 + 0x40) != 0)) {
    if (*(char *)(*(long *)(lVar17 + 0x40) + 0x48) != '\0') {
      return lVar17;
    }
    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41088);
    if ((lVar17 != 0) && (*(long *)(lVar17 + 0x40) != 0)) {
      if (*(char *)(*(long *)(lVar17 + 0x40) + 0x49) != '\0') {
        return lVar17;
      }
      lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41088);
      if ((lVar17 != 0) && (*(long *)(lVar17 + 0x30) != 0)) {
        if (*(char *)(*(long *)(lVar17 + 0x30) + 0x1b8) == '\0') {
          return lVar17;
        }
        lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41080);
        if (lVar17 != 0) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$StashButtonInteractableStates*/ func_0x015ac630(lVar17,0);
          lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41088);
          if ((lVar17 != 0) && (*(long *)(lVar17 + 0x40) != 0)) {
            lVar17 = /*Atlas.Gameplay.PauseManager$$UserPause*/ func_0x014b6a64(*(long *)(lVar17 + 0x40),0);
            *(undefined1 *)(lVar10 + 0xf4) = 1;
            return lVar17;
          }
        }
      }
    }
  }
  lVar17 = func_0x00f78af4();
  *(undefined1 **)((long)pplVar3 + -0x40) = (undefined1 *)((long)pplVar3 + -0x10);
  *(undefined **)((long)pplVar3 + -0x38) = &Atlas_Contexts_GameContextBaseInProgressState__OnExit;
  lVar17 = *(long *)(lVar17 + 0x90);
  if (lVar17 == 0) {
    lVar17 = func_0x00f78af4();
    lVar17 = *(long *)(lVar17 + 0x60);
    if (lVar17 == 0) {
      return 0;
    }
    uVar12 = 0;
    *(undefined8 *)((long)pplVar3 + -0x90) = unaff_x26;
    *(undefined8 *)((long)pplVar3 + -0x88) = unaff_x25;
    *(undefined8 *)((long)pplVar3 + -0x80) = unaff_x24;
    *(undefined8 *)((long)pplVar3 + -0x78) = unaff_x23;
    *(undefined8 *)((long)pplVar3 + -0x70) = uVar18;
    *(undefined8 *)((long)pplVar3 + -0x68) = 0x3eb5000;
    *(undefined8 *)((long)pplVar3 + -0x60) = 0x3d41088;
    *(long *)((long)pplVar3 + -0x58) = lVar10;
    *(undefined1 **)((long)pplVar3 + -0x50) = (undefined1 *)((long)pplVar3 + -0x40);
    *(undefined **)((long)pplVar3 + -0x48) =
         &Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished;
    *(long *)((long)pplVar3 + -0x98) = lVar17;
    lVar8 = *(long *)(lVar17 + 0x68);
    if (lVar8 == 0) {
      puVar20 = (undefined1 *)((long)pplVar3 + -0x98);
      lVar9 = 1;
    }
    else {
      lVar9 = *(long *)(lVar8 + 0x18);
      if (lVar9 == 0) {
        return lVar17;
      }
      puVar20 = (undefined1 *)(lVar8 + 0x20);
    }
    lVar8 = 0;
    do {
      lVar10 = *(long *)(puVar20 + lVar8 * 8);
      pcVar19 = *(code **)(lVar10 + 0x10);
      plVar16 = *(long **)(lVar10 + 0x20);
      lVar10 = *(long *)(lVar10 + 0x28);
      if (*(short *)(lVar10 + 0x48) == -1) {
        func_0x00f78ad8(lVar10,uVar12);
      }
      iVar5 = func_0x00f78a4c(lVar10);
      if (iVar5 == 0) {
        if ((((plVar16 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
            ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (*(long *)(lVar17 + 0x18) == 0))
        goto code_r0x02924d98;
        iVar5 = func_0x00f78a44(lVar10);
        iVar6 = func_0x00f78ec0(lVar10);
        if (iVar5 == 0) {
          uVar1 = *(ushort *)(lVar10 + 0x48);
          if (iVar6 == 0) {
            lVar10 = *plVar16 + (ulong)uVar1 * 0x10;
            auVar26 = (**(code **)(lVar10 + 0x138))(plVar16,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x02924da4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar13 = *plVar16;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar10) {
                puVar11 = (undefined8 *)
                          (lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x02924e68;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          puVar11 = (undefined8 *)func_0x00fac1f0(plVar16,lVar10,(ulong)uVar1);
code_r0x02924e68:
          pcVar19 = (code *)*puVar11;
          puVar11 = (undefined8 *)puVar11[1];
        }
        else {
          if (iVar6 == 0) {
            uVar12 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar13 = *plVar16;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            lVar13 = func_0x00fac1f0(plVar16);
code_r0x02924e40:
            uVar12 = *(undefined8 *)(lVar13 + 8);
          }
          puVar11 = (undefined8 *)func_0x00f78acc(uVar12,lVar10);
          pcVar19 = (code *)*puVar11;
        }
        auVar26 = (*pcVar19)(plVar16,puVar11);
      }
      else if (*(char *)(lVar10 + 0x4a) == '\0') {
        auVar26 = (*pcVar19)(lVar10);
      }
      else {
code_r0x02924d98:
        auVar26 = (*pcVar19)(plVar16,lVar10);
      }
code_r0x02924da4:
      uVar12 = auVar26._8_8_;
      lVar8 = lVar8 + 1;
      if (lVar8 == lVar9) {
        return auVar26._0_8_;
      }
    } while( true );
  }
  uVar12 = 0;
  *(undefined8 *)((long)pplVar3 + -0x50) = 0x3d41088;
  *(long *)((long)pplVar3 + -0x48) = lVar10;
  *(undefined8 *)((long)pplVar3 + -0x40) = *(undefined8 *)((long)pplVar3 + -0x40);
  *(undefined8 *)((long)pplVar3 + -0x38) = *(undefined8 *)((long)pplVar3 + -0x38);
  if ((*(char *)(lVar17 + 0x48) == '\0') && (*(char *)(lVar17 + 0x49) == '\0')) {
    return lVar17;
  }
  *(undefined4 *)(lVar17 + 0x4c) = 3;
  *(undefined2 *)(lVar17 + 0x48) = 0;
  if (*(long *)(lVar17 + 0x20) != 0) {
    uVar12 = 0;
    /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(lVar17 + 0x20),8);
    lVar8 = *(long *)(lVar17 + 0x28);
    if (lVar8 != 0) {
      *(undefined8 *)((long)pplVar3 + -0x50) = *(undefined8 *)((long)pplVar3 + -0x50);
      *(undefined8 *)((long)pplVar3 + -0x48) = *(undefined8 *)((long)pplVar3 + -0x48);
      *(undefined8 *)((long)pplVar3 + -0x40) = *(undefined8 *)((long)pplVar3 + -0x40);
      *(undefined8 *)((long)pplVar3 + -0x38) = *(undefined8 *)((long)pplVar3 + -0x38);
      *(undefined8 *)((long)pplVar3 + -0x50) = *(undefined8 *)((long)pplVar3 + -0x50);
      *(undefined8 *)((long)pplVar3 + -0x48) = *(undefined8 *)((long)pplVar3 + -0x48);
      *(undefined8 *)((long)pplVar3 + -0x40) = *(undefined8 *)((long)pplVar3 + -0x40);
      *(undefined8 *)((long)pplVar3 + -0x38) = *(undefined8 *)((long)pplVar3 + -0x38);
      if ((bRam0000000003eb4a16 & 1) == 0) {
        func_0x00f78a20(0x3d71930,0,0);
        func_0x00f78a20(0x3d69668);
        bRam0000000003eb4a16 = 1;
      }
      lVar17 = *(long *)(lVar8 + 0x10);
      if (lVar17 == 0) {
        return 0;
      }
      fVar23 = *(float *)(lVar8 + 0x40);
      puVar11 = (undefined8 *)0x3d69668;
      if (*(int *)(lVar8 + 0x30) != 1) {
        puVar11 = (undefined8 *)0x3d71930;
      }
      uVar12 = *puVar11;
      ppppppuVar21 = *(undefined8 *******)((long)pplVar3 + -0x40);
      puVar22 = *(undefined **)((long)pplVar3 + -0x38);
      pplVar2 = (long **)((long)pplVar3 + -0x30);
      plVar16 = *(long **)((long)pplVar3 + -0x50);
      lVar8 = *(long *)((long)pplVar3 + -0x48);
Core_Audio_AudioEvent__SetParameter:
      *(undefined8 *)((long)pplVar2 + -0x40) = unaff_d9;
      *(undefined8 *)((long)pplVar2 + -0x38) = unaff_d8;
      *(undefined8 *)((long)pplVar2 + -0x30) = uVar18;
      *(long *)((long)pplVar2 + -0x28) = lVar9;
      *(long **)((long)pplVar2 + -0x20) = plVar16;
      *(long *)((long)pplVar2 + -0x18) = lVar8;
      *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar21;
      *(undefined **)((long)pplVar2 + -8) = puVar22;
      iVar5 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar17 + 0x28,0,0,0);
      if (iVar5 != 0) {
        /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(fVar23,lVar17 + 0x28,uVar12,0,0);
      }
      return lVar17;
    }
  }
  auVar25 = func_0x00f78af4();
  *(long *)((long)pplVar3 + -0x70) = lVar17;
  *(undefined8 *)((long)pplVar3 + -0x68) = 0;
  *(undefined1 **)((long)pplVar3 + -0x60) = (undefined1 *)((long)pplVar3 + -0x40);
  *(undefined **)((long)pplVar3 + -0x58) = &Atlas_Gameplay_PauseManager__SetSystemsPaused;
  uVar24 = 0;
  if (auVar25._8_4_ == 0) {
    uVar24 = 0x3f800000;
  }
  lVar17 = /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(uVar24,0);
  lVar8 = *(long *)(auVar25._0_8_ + 0x30);
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x20);
    lVar17 = 0;
    if (lVar8 != 0) {
      *(undefined8 *)((long)pplVar3 + -0x60) = *(undefined8 *)((long)pplVar3 + -0x60);
      *(undefined8 *)((long)pplVar3 + -0x58) = *(undefined8 *)((long)pplVar3 + -0x58);
      *(char *)(lVar8 + 0x1b8) = (char)uVar12;
      lVar17 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c((undefined1 *)((long)pplVar3 + -0x78),lVar8,uVar12,0);
      return lVar17;
    }
  }
  return lVar17;
}



// ============================================================
// RVA: 0x159e648 | Atlas.Contexts.GameContextBaseInProgressState.remove_OnInProgressScreenExited
// ============================================================

/* WARNING: Possible PIC construction at 0x0159e744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149d7a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159e748) */
/* WARNING: Removing unreachable block (ram,0x0159e750) */
/* WARNING: Removing unreachable block (ram,0x0159e758) */
/* WARNING: Removing unreachable block (ram,0x0159e76c) */
/* WARNING: Removing unreachable block (ram,0x0159e774) */
/* WARNING: Removing unreachable block (ram,0x0159e78c) */
/* WARNING: Removing unreachable block (ram,0x0159e79c) */
/* WARNING: Removing unreachable block (ram,0x0149d7a4) */
/* WARNING: Removing unreachable block (ram,0x0149d79c) */

long Atlas_Contexts_GameContextBaseInProgressState__remove_OnInProgressScreenExited
               (long param_1,undefined8 param_2)

{
  ushort uVar1;
  long **pplVar2;
  long **pplVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  long lVar18;
  code *pcVar19;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar20;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar21;
  undefined *puVar22;
  float fVar23;
  undefined4 extraout_s0;
  undefined4 uVar24;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar25 [12];
  undefined1 auVar26 [16];
  undefined8 uStack_80;
  long lStack_78;
  long *plStack_70;
  long lStack_68;
  undefined8 *****pppppuStack_60;
  undefined *puStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 ****ppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb51c0 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    bRam0000000003eb51c0 = 1;
  }
  uVar11 = 0x3d1fa78;
  plVar17 = (long *)(param_1 + 0xb8);
  lVar18 = *plVar17;
  while ((plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar18,param_2,0), plVar7 == (long *)0x0 ||
         (*plVar7 == /*System.Action_TypeInfo*/ lRam0000000003d1fa78))) {
    lVar8 = func_0x00ff0f44(plVar17,plVar7,lVar18);
    bVar4 = lVar18 == lVar8;
    lVar18 = lVar8;
    if (bVar4) {
      return lVar8;
    }
  }
  lStack_68 = func_0x00f78e5c(plVar7);
  puStack_38 = &Atlas_Contexts_GameContextBaseInProgressState__OnEnter;
  plStack_50 = plVar17;
  uStack_48 = param_2;
  ppppuStack_40 = (undefined8 ****)&stack0xfffffffffffffff0;
  lStack_78 = lVar18;
  plStack_70 = plVar17;
  pppppuStack_60 = &ppppuStack_40;
  if (*(long *)(lStack_68 + 0x88) != 0) {
    /*Atlas.Audio.MusicManager$$SetParameter*/ func_0x0149d550(*(long *)(lStack_68 + 0x88),3,0);
    if ((*(long *)(lStack_68 + 0x80) != 0) &&
       (lVar8 = *(long *)(*(long *)(lStack_68 + 0x80) + 0x1c0), lVar8 != 0)) {
      lVar9 = *(long *)(lStack_68 + 0x88);
      if (*(int *)(lVar8 + 200) == 2) {
        if (lVar9 != 0) {
          iVar5 = 10;
code_r0x0159e740:
          uStack_80 = 0x3d1fa78;
          puStack_58 = &UNK_0159e748;
          lVar18 = lVar9;
          if ((bRam0000000003eb4a18 & 1) == 0) {
            lVar18 = func_0x00f78a20(0x3d69668,iVar5,0);
            bRam0000000003eb4a18 = 1;
          }
          if (*(int *)(lVar9 + 0x30) != 1) {
            return lVar18;
          }
          if (*(long *)(lVar9 + 0x10) == 0) {
            return 0;
          }
          lVar18 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar9 + 0x10),0);
          if ((int)lVar18 == 0) {
            return lVar18;
          }
          lVar18 = *(long *)(lVar9 + 0x10);
          if (lVar18 == 0) {
            lVar18 = func_0x00f78af4();
            if ((bRam0000000003eb4a15 & 1) == 0) {
              func_0x00f78a20(0x3d71930);
              func_0x00f78a20(0x3d69668);
              bRam0000000003eb4a15 = 1;
            }
            lVar8 = 0;
            if (*(long *)(lVar18 + 0x10) != 0) {
              puVar12 = (undefined8 *)0x3d69668;
              if (*(int *)(lVar18 + 0x30) != 1) {
                puVar12 = (undefined8 *)0x3d71930;
              }
              lVar8 = /*Core.Audio.AudioEvent$$GetParameter*/ func_0x01639030(*(long *)(lVar18 + 0x10),*puVar12,0);
              *(undefined4 *)(lVar18 + 0x40) = extraout_s0;
            }
            return lVar8;
          }
          fVar23 = (float)iVar5;
          pplVar2 = &plStack_50;
          uVar13 = /*STR('BattleMusic_Context')*/ uRam0000000003d69668;
          lVar8 = lStack_68;
          plVar17 = plStack_70;
          lVar9 = lStack_78;
          uVar11 = uStack_80;
          ppppppuVar21 = (undefined8 ******)pppppuStack_60;
          puVar22 = puStack_58;
          goto Core_Audio_AudioEvent__SetParameter;
        }
      }
      else if (lVar9 != 0) {
        iVar5 = 3;
        goto code_r0x0159e740;
      }
    }
  }
  lVar8 = func_0x00f78af4();
  pplVar3 = (long **)&uStack_80;
  uStack_80 = 0x3d1fa78;
  puStack_58 = &Atlas_Contexts_GameContextBaseInProgressState__OnUpdate;
  ppppppuVar21 = &pppppuStack_60;
  if (*(char *)(lVar8 + 0xa8) == '\0') {
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar9 = *(long *)(*(long *)(lVar8 + 0x80) + 0x230);
      if (lVar9 != 0) {
        /*Atlas.Arcade.ArcadeEvent$$InProgressStateStartFirstUpdate*/ func_0x0144ddfc(lVar9,0);
      }
      *(undefined1 *)(lVar8 + 0xa8) = 1;
      goto code_r0x0159e7f4;
    }
code_r0x0159e8cc:
    puVar22 = &Atlas_UI_Screens_GameInProgressScreen__OnPauseRequested;
    lVar10 = func_0x00f78af4();
  }
  else {
code_r0x0159e7f4:
    plVar17 = (long *)0x3ca3000;
    if (cRam0000000003ca3507 == '\0') {
      func_0x00f78a20(0x3d21b78);
      cRam0000000003ca3507 = '\x01';
    }
    if (**(long **)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 0xb8) == 0) {
      plVar17 = (long *)0x0;
    }
    else {
      lVar9 = *(long *)(**(long **)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 0xb8) + 0x188);
      if (lVar9 == 0) goto code_r0x0159e8cc;
      plVar17 = (long *)/*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(lVar9,0);
    }
    lVar18 = 0x3ca3000;
    if (cRam0000000003ca3500 == '\0') {
      func_0x00f78a20(0x3d22d90);
      cRam0000000003ca3500 = '\x01';
    }
    lVar9 = 0;
    if (**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8) != 0) {
      lVar9 = /*UnityEngine.InputSystem.Keyboard$$get_escapeKey*/ func_0x03078cd8(**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8),0);
      if (lVar9 == 0) goto code_r0x0159e8cc;
      lVar9 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(lVar9,0);
    }
    if ((int)lVar9 == 0 && (int)plVar17 == 0) {
      return lVar9;
    }
    if ((*(long *)(lVar8 + 0x80) == 0) ||
       (lVar10 = *(long *)(*(long *)(lVar8 + 0x80) + 0x48), lVar10 == 0)) goto code_r0x0159e8cc;
    pplVar3 = &plStack_50;
    lVar8 = lStack_68;
    plVar17 = plStack_70;
    lVar18 = lStack_78;
    uVar11 = uStack_80;
    ppppppuVar21 = (undefined8 ******)pppppuStack_60;
    puVar22 = puStack_58;
  }
  *(undefined8 *)((long)pplVar3 + -0x30) = uVar11;
  *(long *)((long)pplVar3 + -0x28) = lVar18;
  *(long **)((long)pplVar3 + -0x20) = plVar17;
  *(long *)((long)pplVar3 + -0x18) = lVar8;
  *(undefined8 *******)((long)pplVar3 + -0x10) = ppppppuVar21;
  *(undefined **)((long)pplVar3 + -8) = puVar22;
  lVar9 = 0x3eb5000;
  if ((bRam0000000003eb5224 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5224 = 1;
  }
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41088);
  if ((lVar18 != 0) && (*(long *)(lVar18 + 0x40) != 0)) {
    if (*(char *)(*(long *)(lVar18 + 0x40) + 0x48) != '\0') {
      return lVar18;
    }
    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41088);
    if ((lVar18 != 0) && (*(long *)(lVar18 + 0x40) != 0)) {
      if (*(char *)(*(long *)(lVar18 + 0x40) + 0x49) != '\0') {
        return lVar18;
      }
      lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41088);
      if ((lVar18 != 0) && (*(long *)(lVar18 + 0x30) != 0)) {
        if (*(char *)(*(long *)(lVar18 + 0x30) + 0x1b8) == '\0') {
          return lVar18;
        }
        lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar10,uRam0000000003d41080);
        if (lVar18 != 0) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$StashButtonInteractableStates*/ func_0x015ac630(lVar18,0);
          lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar10,uRam0000000003d41088);
          if ((lVar18 != 0) && (*(long *)(lVar18 + 0x40) != 0)) {
            lVar18 = /*Atlas.Gameplay.PauseManager$$UserPause*/ func_0x014b6a64(*(long *)(lVar18 + 0x40),0);
            *(undefined1 *)(lVar10 + 0xf4) = 1;
            return lVar18;
          }
        }
      }
    }
  }
  lVar18 = func_0x00f78af4();
  *(undefined1 **)((long)pplVar3 + -0x40) = (undefined1 *)((long)pplVar3 + -0x10);
  *(undefined **)((long)pplVar3 + -0x38) = &Atlas_Contexts_GameContextBaseInProgressState__OnExit;
  lVar18 = *(long *)(lVar18 + 0x90);
  if (lVar18 == 0) {
    lVar18 = func_0x00f78af4();
    lVar18 = *(long *)(lVar18 + 0x60);
    if (lVar18 == 0) {
      return 0;
    }
    uVar13 = 0;
    *(undefined8 *)((long)pplVar3 + -0x90) = unaff_x26;
    *(undefined8 *)((long)pplVar3 + -0x88) = unaff_x25;
    *(undefined8 *)((long)pplVar3 + -0x80) = unaff_x24;
    *(undefined8 *)((long)pplVar3 + -0x78) = unaff_x23;
    *(undefined8 *)((long)pplVar3 + -0x70) = uVar11;
    *(undefined8 *)((long)pplVar3 + -0x68) = 0x3eb5000;
    *(undefined8 *)((long)pplVar3 + -0x60) = 0x3d41088;
    *(long *)((long)pplVar3 + -0x58) = lVar10;
    *(undefined1 **)((long)pplVar3 + -0x50) = (undefined1 *)((long)pplVar3 + -0x40);
    *(undefined **)((long)pplVar3 + -0x48) =
         &Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished;
    *(long *)((long)pplVar3 + -0x98) = lVar18;
    lVar8 = *(long *)(lVar18 + 0x68);
    if (lVar8 == 0) {
      puVar20 = (undefined1 *)((long)pplVar3 + -0x98);
      lVar9 = 1;
    }
    else {
      lVar9 = *(long *)(lVar8 + 0x18);
      if (lVar9 == 0) {
        return lVar18;
      }
      puVar20 = (undefined1 *)(lVar8 + 0x20);
    }
    lVar8 = 0;
    do {
      lVar10 = *(long *)(puVar20 + lVar8 * 8);
      pcVar19 = *(code **)(lVar10 + 0x10);
      plVar17 = *(long **)(lVar10 + 0x20);
      lVar10 = *(long *)(lVar10 + 0x28);
      if (*(short *)(lVar10 + 0x48) == -1) {
        func_0x00f78ad8(lVar10,uVar13);
      }
      iVar5 = func_0x00f78a4c(lVar10);
      if (iVar5 == 0) {
        if ((((plVar17 == (long *)0x0) || (*(short *)(lVar10 + 0x48) == -1)) ||
            ((*(byte *)(*plVar17 + 0x115) & 1) != 0)) || (*(long *)(lVar18 + 0x18) == 0))
        goto code_r0x02924d98;
        iVar5 = func_0x00f78a44(lVar10);
        iVar6 = func_0x00f78ec0(lVar10);
        if (iVar5 == 0) {
          uVar1 = *(ushort *)(lVar10 + 0x48);
          if (iVar6 == 0) {
            lVar10 = *plVar17 + (ulong)uVar1 * 0x10;
            auVar26 = (**(code **)(lVar10 + 0x138))(plVar17,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x02924da4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar14 = *plVar17;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == lVar10) {
                puVar12 = (undefined8 *)
                          (lVar14 + (long)(int)(*piVar16 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x02924e68;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar12 = (undefined8 *)func_0x00fac1f0(plVar17,lVar10,(ulong)uVar1);
code_r0x02924e68:
          pcVar19 = (code *)*puVar12;
          puVar12 = (undefined8 *)puVar12[1];
        }
        else {
          if (iVar6 == 0) {
            uVar11 = *(undefined8 *)(*plVar17 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar17;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar15 != 0) {
              piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar16 = piVar16 + 4;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar17);
code_r0x02924e40:
            uVar11 = *(undefined8 *)(lVar14 + 8);
          }
          puVar12 = (undefined8 *)func_0x00f78acc(uVar11,lVar10);
          pcVar19 = (code *)*puVar12;
        }
        auVar26 = (*pcVar19)(plVar17,puVar12);
      }
      else if (*(char *)(lVar10 + 0x4a) == '\0') {
        auVar26 = (*pcVar19)(lVar10);
      }
      else {
code_r0x02924d98:
        auVar26 = (*pcVar19)(plVar17,lVar10);
      }
code_r0x02924da4:
      uVar13 = auVar26._8_8_;
      lVar8 = lVar8 + 1;
      if (lVar8 == lVar9) {
        return auVar26._0_8_;
      }
    } while( true );
  }
  uVar13 = 0;
  *(undefined8 *)((long)pplVar3 + -0x50) = 0x3d41088;
  *(long *)((long)pplVar3 + -0x48) = lVar10;
  *(undefined8 *)((long)pplVar3 + -0x40) = *(undefined8 *)((long)pplVar3 + -0x40);
  *(undefined8 *)((long)pplVar3 + -0x38) = *(undefined8 *)((long)pplVar3 + -0x38);
  if ((*(char *)(lVar18 + 0x48) == '\0') && (*(char *)(lVar18 + 0x49) == '\0')) {
    return lVar18;
  }
  *(undefined4 *)(lVar18 + 0x4c) = 3;
  *(undefined2 *)(lVar18 + 0x48) = 0;
  if (*(long *)(lVar18 + 0x20) != 0) {
    uVar13 = 0;
    /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(lVar18 + 0x20),8);
    lVar8 = *(long *)(lVar18 + 0x28);
    if (lVar8 != 0) {
      *(undefined8 *)((long)pplVar3 + -0x50) = *(undefined8 *)((long)pplVar3 + -0x50);
      *(undefined8 *)((long)pplVar3 + -0x48) = *(undefined8 *)((long)pplVar3 + -0x48);
      *(undefined8 *)((long)pplVar3 + -0x40) = *(undefined8 *)((long)pplVar3 + -0x40);
      *(undefined8 *)((long)pplVar3 + -0x38) = *(undefined8 *)((long)pplVar3 + -0x38);
      *(undefined8 *)((long)pplVar3 + -0x50) = *(undefined8 *)((long)pplVar3 + -0x50);
      *(undefined8 *)((long)pplVar3 + -0x48) = *(undefined8 *)((long)pplVar3 + -0x48);
      *(undefined8 *)((long)pplVar3 + -0x40) = *(undefined8 *)((long)pplVar3 + -0x40);
      *(undefined8 *)((long)pplVar3 + -0x38) = *(undefined8 *)((long)pplVar3 + -0x38);
      if ((bRam0000000003eb4a16 & 1) == 0) {
        func_0x00f78a20(0x3d71930,0,0);
        func_0x00f78a20(0x3d69668);
        bRam0000000003eb4a16 = 1;
      }
      lVar18 = *(long *)(lVar8 + 0x10);
      if (lVar18 == 0) {
        return 0;
      }
      fVar23 = *(float *)(lVar8 + 0x40);
      puVar12 = (undefined8 *)0x3d69668;
      if (*(int *)(lVar8 + 0x30) != 1) {
        puVar12 = (undefined8 *)0x3d71930;
      }
      uVar13 = *puVar12;
      ppppppuVar21 = *(undefined8 *******)((long)pplVar3 + -0x40);
      puVar22 = *(undefined **)((long)pplVar3 + -0x38);
      pplVar2 = (long **)((long)pplVar3 + -0x30);
      plVar17 = *(long **)((long)pplVar3 + -0x50);
      lVar8 = *(long *)((long)pplVar3 + -0x48);
Core_Audio_AudioEvent__SetParameter:
      *(undefined8 *)((long)pplVar2 + -0x40) = unaff_d9;
      *(undefined8 *)((long)pplVar2 + -0x38) = unaff_d8;
      *(undefined8 *)((long)pplVar2 + -0x30) = uVar11;
      *(long *)((long)pplVar2 + -0x28) = lVar9;
      *(long **)((long)pplVar2 + -0x20) = plVar17;
      *(long *)((long)pplVar2 + -0x18) = lVar8;
      *(undefined8 *******)((long)pplVar2 + -0x10) = ppppppuVar21;
      *(undefined **)((long)pplVar2 + -8) = puVar22;
      iVar5 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar18 + 0x28,0,0,0);
      if (iVar5 != 0) {
        /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(fVar23,lVar18 + 0x28,uVar13,0,0);
      }
      return lVar18;
    }
  }
  auVar25 = func_0x00f78af4();
  *(long *)((long)pplVar3 + -0x70) = lVar18;
  *(undefined8 *)((long)pplVar3 + -0x68) = 0;
  *(undefined1 **)((long)pplVar3 + -0x60) = (undefined1 *)((long)pplVar3 + -0x40);
  *(undefined **)((long)pplVar3 + -0x58) = &Atlas_Gameplay_PauseManager__SetSystemsPaused;
  uVar24 = 0;
  if (auVar25._8_4_ == 0) {
    uVar24 = 0x3f800000;
  }
  lVar18 = /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(uVar24,0);
  lVar8 = *(long *)(auVar25._0_8_ + 0x30);
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x20);
    lVar18 = 0;
    if (lVar8 != 0) {
      *(undefined8 *)((long)pplVar3 + -0x60) = *(undefined8 *)((long)pplVar3 + -0x60);
      *(undefined8 *)((long)pplVar3 + -0x58) = *(undefined8 *)((long)pplVar3 + -0x58);
      *(char *)(lVar8 + 0x1b8) = (char)uVar13;
      lVar18 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c((undefined1 *)((long)pplVar3 + -0x78),lVar8,uVar13,0);
      return lVar18;
    }
  }
  return lVar18;
}



// ============================================================
// RVA: 0x159e6e8 | Atlas.Contexts.GameContextBaseInProgressState.OnEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x0159e744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0149d7a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159e748) */
/* WARNING: Removing unreachable block (ram,0x0159e750) */
/* WARNING: Removing unreachable block (ram,0x0159e758) */
/* WARNING: Removing unreachable block (ram,0x0159e76c) */
/* WARNING: Removing unreachable block (ram,0x0159e774) */
/* WARNING: Removing unreachable block (ram,0x0159e78c) */
/* WARNING: Removing unreachable block (ram,0x0159e79c) */
/* WARNING: Removing unreachable block (ram,0x0149d7a4) */
/* WARNING: Removing unreachable block (ram,0x0149d79c) */

long Atlas_Contexts_GameContextBaseInProgressState__OnEnter(long param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar15;
  undefined8 unaff_x22;
  code *pcVar16;
  undefined8 unaff_x23;
  long lVar17;
  undefined8 unaff_x24;
  undefined1 *puVar18;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ******ppppppuVar19;
  undefined *puVar20;
  float fVar21;
  undefined4 extraout_s0;
  undefined4 uVar22;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  undefined8 *****pppppuStack_30;
  undefined *puStack_28;
  
  pppppuStack_30 = (undefined8 *****)&stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0x88) != 0) {
    /*Atlas.Audio.MusicManager$$SetParameter*/ func_0x0149d550(*(long *)(param_1 + 0x88),3,0);
    if ((*(long *)(param_1 + 0x80) != 0) &&
       (lVar10 = *(long *)(*(long *)(param_1 + 0x80) + 0x1c0), lVar10 != 0)) {
      lVar7 = *(long *)(param_1 + 0x88);
      if (*(int *)(lVar10 + 200) == 2) {
        if (lVar7 != 0) {
          iVar5 = 10;
LAB_0159e740:
          puStack_28 = &UNK_0159e748;
          lVar10 = lVar7;
          if ((bRam0000000003eb4a18 & 1) == 0) {
            lVar10 = func_0x00f78a20(0x3d69668,iVar5,0);
            bRam0000000003eb4a18 = 1;
          }
          if (*(int *)(lVar7 + 0x30) != 1) {
            return lVar10;
          }
          if (*(long *)(lVar7 + 0x10) == 0) {
            return 0;
          }
          lVar10 = /*Core.Audio.AudioEvent$$IsValid*/ func_0x01638fbc(*(long *)(lVar7 + 0x10),0);
          if ((int)lVar10 == 0) {
            return lVar10;
          }
          lVar10 = *(long *)(lVar7 + 0x10);
          if (lVar10 == 0) {
            lVar10 = func_0x00f78af4();
            if ((bRam0000000003eb4a15 & 1) == 0) {
              func_0x00f78a20(0x3d71930);
              func_0x00f78a20(0x3d69668);
              bRam0000000003eb4a15 = 1;
            }
            lVar7 = 0;
            if (*(long *)(lVar10 + 0x10) != 0) {
              puVar9 = (undefined8 *)0x3d69668;
              if (*(int *)(lVar10 + 0x30) != 1) {
                puVar9 = (undefined8 *)0x3d71930;
              }
              lVar7 = /*Core.Audio.AudioEvent$$GetParameter*/ func_0x01639030(*(long *)(lVar10 + 0x10),*puVar9,0);
              *(undefined4 *)(lVar10 + 0x40) = extraout_s0;
            }
            return lVar7;
          }
          fVar21 = (float)iVar5;
          puVar3 = &stack0xffffffffffffffe0;
          uVar15 = /*STR('BattleMusic_Context')*/ uRam0000000003d69668;
          ppppppuVar19 = (undefined8 ******)pppppuStack_30;
          puVar20 = puStack_28;
          goto Core_Audio_AudioEvent__SetParameter;
        }
      }
      else if (lVar7 != 0) {
        iVar5 = 3;
        goto LAB_0159e740;
      }
    }
  }
  lVar10 = func_0x00f78af4();
  puVar4 = &stack0xffffffffffffffb0;
  puStack_28 = &Atlas_Contexts_GameContextBaseInProgressState__OnUpdate;
  ppppppuVar19 = &pppppuStack_30;
  uVar15 = unaff_x21;
  if (*(char *)(lVar10 + 0xa8) == '\0') {
    uVar8 = unaff_x20;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar7 = *(long *)(*(long *)(lVar10 + 0x80) + 0x230);
      if (lVar7 != 0) {
        /*Atlas.Arcade.ArcadeEvent$$InProgressStateStartFirstUpdate*/ func_0x0144ddfc(lVar7,0);
      }
      *(undefined1 *)(lVar10 + 0xa8) = 1;
      goto code_r0x0159e7f4;
    }
code_r0x0159e8cc:
    unaff_x21 = uVar15;
    unaff_x20 = uVar8;
    puVar20 = &Atlas_UI_Screens_GameInProgressScreen__OnPauseRequested;
    lVar7 = func_0x00f78af4();
  }
  else {
code_r0x0159e7f4:
    if (cRam0000000003ca3507 == '\0') {
      func_0x00f78a20(0x3d21b78);
      cRam0000000003ca3507 = '\x01';
    }
    if (**(long **)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 0xb8) == 0) {
      uVar8 = 0;
    }
    else {
      lVar7 = *(long *)(**(long **)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 0xb8) + 0x188);
      uVar8 = 0x3ca3000;
      if (lVar7 == 0) goto code_r0x0159e8cc;
      uVar8 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(lVar7,0);
    }
    uVar15 = 0x3ca3000;
    if (cRam0000000003ca3500 == '\0') {
      func_0x00f78a20(0x3d22d90);
      cRam0000000003ca3500 = '\x01';
    }
    lVar7 = 0;
    if (**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8) != 0) {
      lVar7 = /*UnityEngine.InputSystem.Keyboard$$get_escapeKey*/ func_0x03078cd8(**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8),0);
      if (lVar7 == 0) goto code_r0x0159e8cc;
      lVar7 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(lVar7,0);
    }
    if ((int)lVar7 == 0 && (int)uVar8 == 0) {
      return lVar7;
    }
    if ((*(long *)(lVar10 + 0x80) == 0) ||
       (lVar7 = *(long *)(*(long *)(lVar10 + 0x80) + 0x48), lVar7 == 0)) goto code_r0x0159e8cc;
    puVar4 = &stack0xffffffffffffffe0;
    lVar10 = param_1;
    ppppppuVar19 = (undefined8 ******)pppppuStack_30;
    puVar20 = puStack_28;
  }
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar4 + -0x20) = unaff_x20;
  *(long *)(puVar4 + -0x18) = lVar10;
  *(undefined8 *******)(puVar4 + -0x10) = ppppppuVar19;
  *(undefined **)(puVar4 + -8) = puVar20;
  unaff_x21 = 0x3eb5000;
  if ((bRam0000000003eb5224 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5224 = 1;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar7,uRam0000000003d41088);
  if ((lVar10 != 0) && (*(long *)(lVar10 + 0x40) != 0)) {
    if (*(char *)(*(long *)(lVar10 + 0x40) + 0x48) != '\0') {
      return lVar10;
    }
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar7,uRam0000000003d41088);
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x40) != 0)) {
      if (*(char *)(*(long *)(lVar10 + 0x40) + 0x49) != '\0') {
        return lVar10;
      }
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar7,uRam0000000003d41088);
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x30) != 0)) {
        if (*(char *)(*(long *)(lVar10 + 0x30) + 0x1b8) == '\0') {
          return lVar10;
        }
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d41080);
        if (lVar10 != 0) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$StashButtonInteractableStates*/ func_0x015ac630(lVar10,0);
          lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar7,uRam0000000003d41088);
          if ((lVar10 != 0) && (*(long *)(lVar10 + 0x40) != 0)) {
            lVar10 = /*Atlas.Gameplay.PauseManager$$UserPause*/ func_0x014b6a64(*(long *)(lVar10 + 0x40),0);
            *(undefined1 *)(lVar7 + 0xf4) = 1;
            return lVar10;
          }
        }
      }
    }
  }
  lVar10 = func_0x00f78af4();
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x38) = &Atlas_Contexts_GameContextBaseInProgressState__OnExit;
  lVar10 = *(long *)(lVar10 + 0x90);
  if (lVar10 == 0) {
    lVar10 = func_0x00f78af4();
    lVar10 = *(long *)(lVar10 + 0x60);
    if (lVar10 == 0) {
      return 0;
    }
    uVar15 = 0;
    *(undefined8 *)(puVar4 + -0x90) = unaff_x26;
    *(undefined8 *)(puVar4 + -0x88) = unaff_x25;
    *(undefined8 *)(puVar4 + -0x80) = unaff_x24;
    *(undefined8 *)(puVar4 + -0x78) = unaff_x23;
    *(undefined8 *)(puVar4 + -0x70) = unaff_x22;
    *(undefined8 *)(puVar4 + -0x68) = 0x3eb5000;
    *(undefined8 *)(puVar4 + -0x60) = 0x3d41088;
    *(long *)(puVar4 + -0x58) = lVar7;
    *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x40;
    *(undefined **)(puVar4 + -0x48) =
         &Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished;
    *(long *)(puVar4 + -0x98) = lVar10;
    lVar7 = *(long *)(lVar10 + 0x68);
    if (lVar7 == 0) {
      puVar18 = puVar4 + -0x98;
      lVar17 = 1;
    }
    else {
      lVar17 = *(long *)(lVar7 + 0x18);
      if (lVar17 == 0) {
        return lVar10;
      }
      puVar18 = (undefined1 *)(lVar7 + 0x20);
    }
    lVar7 = 0;
    do {
      lVar11 = *(long *)(puVar18 + lVar7 * 8);
      pcVar16 = *(code **)(lVar11 + 0x10);
      plVar1 = *(long **)(lVar11 + 0x20);
      lVar11 = *(long *)(lVar11 + 0x28);
      if (*(short *)(lVar11 + 0x48) == -1) {
        func_0x00f78ad8(lVar11,uVar15);
      }
      iVar5 = func_0x00f78a4c(lVar11);
      if (iVar5 == 0) {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar10 + 0x18) == 0))
        goto code_r0x02924d98;
        iVar5 = func_0x00f78a44(lVar11);
        iVar6 = func_0x00f78ec0(lVar11);
        if (iVar5 == 0) {
          uVar2 = *(ushort *)(lVar11 + 0x48);
          if (iVar6 == 0) {
            lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
            auVar24 = (**(code **)(lVar11 + 0x138))(plVar1,*(undefined8 *)(lVar11 + 0x140));
            goto code_r0x02924da4;
          }
          lVar11 = func_0x00f78a48(lVar11);
          lVar12 = *plVar1;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == lVar11) {
                puVar9 = (undefined8 *)(lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x02924e68;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x02924e68:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar6 == 0) {
            uVar15 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar12 = *plVar1;
            uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar14 = piVar14 + 4;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar12 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
            uVar15 = *(undefined8 *)(lVar12 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar15,lVar11);
          pcVar16 = (code *)*puVar9;
        }
        auVar24 = (*pcVar16)(plVar1,puVar9);
      }
      else if (*(char *)(lVar11 + 0x4a) == '\0') {
        auVar24 = (*pcVar16)(lVar11);
      }
      else {
code_r0x02924d98:
        auVar24 = (*pcVar16)(plVar1,lVar11);
      }
code_r0x02924da4:
      uVar15 = auVar24._8_8_;
      lVar7 = lVar7 + 1;
      if (lVar7 == lVar17) {
        return auVar24._0_8_;
      }
    } while( true );
  }
  uVar15 = 0;
  *(undefined8 *)(puVar4 + -0x50) = 0x3d41088;
  *(long *)(puVar4 + -0x48) = lVar7;
  *(undefined8 *)(puVar4 + -0x40) = *(undefined8 *)(puVar4 + -0x40);
  *(undefined8 *)(puVar4 + -0x38) = *(undefined8 *)(puVar4 + -0x38);
  if ((*(char *)(lVar10 + 0x48) == '\0') && (*(char *)(lVar10 + 0x49) == '\0')) {
    return lVar10;
  }
  *(undefined4 *)(lVar10 + 0x4c) = 3;
  *(undefined2 *)(lVar10 + 0x48) = 0;
  if (*(long *)(lVar10 + 0x20) != 0) {
    uVar15 = 0;
    /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(lVar10 + 0x20),8);
    lVar7 = *(long *)(lVar10 + 0x28);
    if (lVar7 != 0) {
      *(undefined8 *)(puVar4 + -0x50) = *(undefined8 *)(puVar4 + -0x50);
      *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)(puVar4 + -0x48);
      *(undefined8 *)(puVar4 + -0x40) = *(undefined8 *)(puVar4 + -0x40);
      *(undefined8 *)(puVar4 + -0x38) = *(undefined8 *)(puVar4 + -0x38);
      *(undefined8 *)(puVar4 + -0x50) = *(undefined8 *)(puVar4 + -0x50);
      *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)(puVar4 + -0x48);
      *(undefined8 *)(puVar4 + -0x40) = *(undefined8 *)(puVar4 + -0x40);
      *(undefined8 *)(puVar4 + -0x38) = *(undefined8 *)(puVar4 + -0x38);
      if ((bRam0000000003eb4a16 & 1) == 0) {
        func_0x00f78a20(0x3d71930,0,0);
        func_0x00f78a20(0x3d69668);
        bRam0000000003eb4a16 = 1;
      }
      lVar10 = *(long *)(lVar7 + 0x10);
      if (lVar10 == 0) {
        return 0;
      }
      fVar21 = *(float *)(lVar7 + 0x40);
      puVar9 = (undefined8 *)0x3d69668;
      if (*(int *)(lVar7 + 0x30) != 1) {
        puVar9 = (undefined8 *)0x3d71930;
      }
      uVar15 = *puVar9;
      ppppppuVar19 = *(undefined8 *******)(puVar4 + -0x40);
      puVar20 = *(undefined **)(puVar4 + -0x38);
      puVar3 = puVar4 + -0x30;
      unaff_x20 = *(undefined8 *)(puVar4 + -0x50);
      param_1 = *(long *)(puVar4 + -0x48);
Core_Audio_AudioEvent__SetParameter:
      *(undefined8 *)(puVar3 + -0x40) = unaff_d9;
      *(undefined8 *)(puVar3 + -0x38) = unaff_d8;
      *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
      *(long *)(puVar3 + -0x18) = param_1;
      *(undefined8 *******)(puVar3 + -0x10) = ppppppuVar19;
      *(undefined **)(puVar3 + -8) = puVar20;
      iVar5 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar10 + 0x28,0,0,0);
      if (iVar5 != 0) {
        /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(fVar21,lVar10 + 0x28,uVar15,0,0);
      }
      return lVar10;
    }
  }
  auVar23 = func_0x00f78af4();
  *(long *)(puVar4 + -0x70) = lVar10;
  *(undefined8 *)(puVar4 + -0x68) = 0;
  *(undefined1 **)(puVar4 + -0x60) = puVar4 + -0x40;
  *(undefined **)(puVar4 + -0x58) = &Atlas_Gameplay_PauseManager__SetSystemsPaused;
  uVar22 = 0;
  if (auVar23._8_4_ == 0) {
    uVar22 = 0x3f800000;
  }
  lVar10 = /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(uVar22,0);
  lVar7 = *(long *)(auVar23._0_8_ + 0x30);
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x20);
    lVar10 = 0;
    if (lVar7 != 0) {
      *(undefined8 *)(puVar4 + -0x60) = *(undefined8 *)(puVar4 + -0x60);
      *(undefined8 *)(puVar4 + -0x58) = *(undefined8 *)(puVar4 + -0x58);
      *(char *)(lVar7 + 0x1b8) = (char)uVar15;
      lVar10 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar4 + -0x78,lVar7,uVar15,0);
      return lVar10;
    }
  }
  return lVar10;
}



// ============================================================
// RVA: 0x159e7b8 | Atlas.Contexts.GameContextBaseInProgressState.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x0149d7a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0149d7a4) */
/* WARNING: Removing unreachable block (ram,0x0149d5e8) */
/* WARNING: Removing unreachable block (ram,0x0149d60c) */
/* WARNING: Removing unreachable block (ram,0x0149d620) */
/* WARNING: Removing unreachable block (ram,0x0149d62c) */
/* WARNING: Removing unreachable block (ram,0x0149d634) */
/* WARNING: Removing unreachable block (ram,0x0149d670) */
/* WARNING: Removing unreachable block (ram,0x0149d640) */
/* WARNING: Removing unreachable block (ram,0x0149d680) */
/* WARNING: Removing unreachable block (ram,0x0149d648) */
/* WARNING: Removing unreachable block (ram,0x0149d684) */
/* WARNING: Removing unreachable block (ram,0x0149d6a0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c8) */
/* WARNING: Removing unreachable block (ram,0x0149d6e0) */
/* WARNING: Removing unreachable block (ram,0x0149d6f4) */

long Atlas_Contexts_GameContextBaseInProgressState__OnUpdate(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined8 unaff_x22;
  code *pcVar14;
  undefined8 unaff_x23;
  long lVar15;
  undefined8 unaff_x24;
  undefined1 *puVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined4 uVar17;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar18 [12];
  undefined1 auVar19 [16];
  
  puVar16 = &stack0xfffffffffffffff0;
  uVar13 = unaff_x21;
  if (*(char *)(param_1 + 0xa8) == '\0') {
    uVar6 = unaff_x20;
    if (*(long *)(param_1 + 0x80) != 0) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x80) + 0x230);
      if (lVar5 != 0) {
        /*Atlas.Arcade.ArcadeEvent$$InProgressStateStartFirstUpdate*/ func_0x0144ddfc(lVar5,0);
      }
      *(undefined1 *)(param_1 + 0xa8) = 1;
      goto LAB_0159e7f4;
    }
  }
  else {
LAB_0159e7f4:
    if (cRam0000000003ca3507 == '\0') {
      func_0x00f78a20(0x3d21b78);
      cRam0000000003ca3507 = '\x01';
    }
    if (**(long **)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 0xb8) == 0) {
      uVar6 = 0;
    }
    else {
      lVar5 = *(long *)(**(long **)(/*UnityEngine.InputSystem.Gamepad_TypeInfo*/ lRam0000000003d21b78 + 0xb8) + 0x188);
      uVar6 = 0x3ca3000;
      if (lVar5 == 0) goto LAB_0159e8cc;
      uVar6 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(lVar5,0);
    }
    uVar13 = 0x3ca3000;
    if (cRam0000000003ca3500 == '\0') {
      func_0x00f78a20(0x3d22d90);
      cRam0000000003ca3500 = '\x01';
    }
    lVar5 = 0;
    if (**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8) != 0) {
      lVar5 = /*UnityEngine.InputSystem.Keyboard$$get_escapeKey*/ func_0x03078cd8(**(long **)(/*UnityEngine.InputSystem.Keyboard_TypeInfo*/ lRam0000000003d22d90 + 0xb8),0);
      if (lVar5 == 0) goto LAB_0159e8cc;
      lVar5 = /*UnityEngine.InputSystem.Controls.ButtonControl$$get_wasPressedThisFrame*/ func_0x02fdd794(lVar5,0);
    }
    if ((int)lVar5 == 0 && (int)uVar6 == 0) {
      return lVar5;
    }
    if ((*(long *)(param_1 + 0x80) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x80) + 0x48), lVar5 != 0)) goto code_r0x0159e8d0;
  }
LAB_0159e8cc:
  unaff_x21 = uVar13;
  unaff_x20 = uVar6;
  unaff_x30 = &Atlas_UI_Screens_GameInProgressScreen__OnPauseRequested;
  lVar5 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
  unaff_x19 = param_1;
  unaff_x29 = puVar16;
code_r0x0159e8d0:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb5224 & 1) == 0) {
    func_0x00f78a20(0x3d41080);
    func_0x00f78a20(0x3d41088);
    bRam0000000003eb5224 = 1;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar5,uRam0000000003d41088);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x40) != 0)) {
    if (*(char *)(*(long *)(lVar7 + 0x40) + 0x48) != '\0') {
      return lVar7;
    }
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar5,uRam0000000003d41088);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x40) != 0)) {
      if (*(char *)(*(long *)(lVar7 + 0x40) + 0x49) != '\0') {
        return lVar7;
      }
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar5,uRam0000000003d41088);
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0x30) != 0)) {
        if (*(char *)(*(long *)(lVar7 + 0x30) + 0x1b8) == '\0') {
          return lVar7;
        }
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar5,uRam0000000003d41080);
        if (lVar7 != 0) {
          /*Atlas.UI.Screens.GameInProgressScreenBehaviour$$StashButtonInteractableStates*/ func_0x015ac630(lVar7,0);
          lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar5,uRam0000000003d41088);
          if ((lVar7 != 0) && (*(long *)(lVar7 + 0x40) != 0)) {
            lVar7 = /*Atlas.Gameplay.PauseManager$$UserPause*/ func_0x014b6a64(*(long *)(lVar7 + 0x40),0);
            *(undefined1 *)(lVar5 + 0xf4) = 1;
            return lVar7;
          }
        }
      }
    }
  }
  lVar7 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &Atlas_Contexts_GameContextBaseInProgressState__OnExit;
  lVar7 = *(long *)(lVar7 + 0x90);
  if (lVar7 != 0) {
    uVar13 = 0;
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0x3d41088;
    *(long *)((long)register0x00000008 + -0x48) = lVar5;
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    if ((*(char *)(lVar7 + 0x48) == '\0') && (*(char *)(lVar7 + 0x49) == '\0')) {
      return lVar7;
    }
    *(undefined4 *)(lVar7 + 0x4c) = 3;
    *(undefined2 *)(lVar7 + 0x48) = 0;
    if (*(long *)(lVar7 + 0x20) != 0) {
      uVar13 = 0;
      /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(lVar7 + 0x20),8);
      lVar5 = *(long *)(lVar7 + 0x28);
      if (lVar5 != 0) {
        *(undefined8 *)((long)register0x00000008 + -0x50) =
             *(undefined8 *)((long)register0x00000008 + -0x50);
        *(undefined8 *)((long)register0x00000008 + -0x48) =
             *(undefined8 *)((long)register0x00000008 + -0x48);
        *(undefined8 *)((long)register0x00000008 + -0x40) =
             *(undefined8 *)((long)register0x00000008 + -0x40);
        *(undefined8 *)((long)register0x00000008 + -0x38) =
             *(undefined8 *)((long)register0x00000008 + -0x38);
        *(undefined8 *)((long)register0x00000008 + -0x50) =
             *(undefined8 *)((long)register0x00000008 + -0x50);
        *(undefined8 *)((long)register0x00000008 + -0x48) =
             *(undefined8 *)((long)register0x00000008 + -0x48);
        *(undefined8 *)((long)register0x00000008 + -0x40) =
             *(undefined8 *)((long)register0x00000008 + -0x40);
        *(undefined8 *)((long)register0x00000008 + -0x38) =
             *(undefined8 *)((long)register0x00000008 + -0x38);
        if ((bRam0000000003eb4a16 & 1) == 0) {
          func_0x00f78a20(0x3d71930,0,0);
          func_0x00f78a20(0x3d69668);
          bRam0000000003eb4a16 = 1;
        }
        lVar7 = *(long *)(lVar5 + 0x10);
        if (lVar7 == 0) {
          return 0;
        }
        uVar17 = *(undefined4 *)(lVar5 + 0x40);
        puVar8 = (undefined8 *)0x3d69668;
        if (*(int *)(lVar5 + 0x30) != 1) {
          puVar8 = (undefined8 *)0x3d71930;
        }
        uVar13 = *puVar8;
        *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
        *(undefined8 *)((long)register0x00000008 + -0x68) = unaff_d8;
        *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3eb5000;
        *(undefined8 *)((long)register0x00000008 + -0x50) =
             *(undefined8 *)((long)register0x00000008 + -0x50);
        *(undefined8 *)((long)register0x00000008 + -0x48) =
             *(undefined8 *)((long)register0x00000008 + -0x48);
        *(undefined8 *)((long)register0x00000008 + -0x40) =
             *(undefined8 *)((long)register0x00000008 + -0x40);
        *(undefined8 *)((long)register0x00000008 + -0x38) =
             *(undefined8 *)((long)register0x00000008 + -0x38);
        iVar3 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar7 + 0x28,0,0,0);
        if (iVar3 != 0) {
          /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(uVar17,lVar7 + 0x28,uVar13,0,0);
        }
        return lVar7;
      }
    }
    auVar18 = func_0x00f78af4();
    *(long *)((long)register0x00000008 + -0x70) = lVar7;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x58) =
         &Atlas_Gameplay_PauseManager__SetSystemsPaused;
    uVar17 = 0;
    if (auVar18._8_4_ == 0) {
      uVar17 = 0x3f800000;
    }
    lVar5 = /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(uVar17,0);
    lVar7 = *(long *)(auVar18._0_8_ + 0x30);
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x20);
      lVar5 = 0;
      if (lVar7 != 0) {
        *(undefined8 *)((long)register0x00000008 + -0x60) =
             *(undefined8 *)((long)register0x00000008 + -0x60);
        *(undefined8 *)((long)register0x00000008 + -0x58) =
             *(undefined8 *)((long)register0x00000008 + -0x58);
        *(char *)(lVar7 + 0x1b8) = (char)uVar13;
        lVar5 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c((undefined1 *)((long)register0x00000008 + -0x78),lVar7,uVar13,0);
        return lVar5;
      }
    }
    return lVar5;
  }
  lVar7 = func_0x00f78af4();
  lVar7 = *(long *)(lVar7 + 0x60);
  if (lVar7 == 0) {
    return 0;
  }
  uVar13 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0x3eb5000;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3d41088;
  *(long *)((long)register0x00000008 + -0x58) = lVar5;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x48) =
       &Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished;
  *(long *)((long)register0x00000008 + -0x98) = lVar7;
  lVar5 = *(long *)(lVar7 + 0x68);
  if (lVar5 == 0) {
    puVar16 = (undefined1 *)((long)register0x00000008 + -0x98);
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar5 + 0x18);
    if (lVar15 == 0) {
      return lVar7;
    }
    puVar16 = (undefined1 *)(lVar5 + 0x20);
  }
  lVar5 = 0;
  do {
    lVar9 = *(long *)(puVar16 + lVar5 * 8);
    pcVar14 = *(code **)(lVar9 + 0x10);
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9,uVar13);
    }
    iVar3 = func_0x00f78a4c(lVar9);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar7 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          auVar19 = (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
          goto code_r0x02924da4;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar8 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x02924e68:
        pcVar14 = (code *)*puVar8;
        puVar8 = (undefined8 *)puVar8[1];
      }
      else {
        if (iVar4 == 0) {
          uVar13 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar1;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
          uVar13 = *(undefined8 *)(lVar10 + 8);
        }
        puVar8 = (undefined8 *)func_0x00f78acc(uVar13,lVar9);
        pcVar14 = (code *)*puVar8;
      }
      auVar19 = (*pcVar14)(plVar1,puVar8);
    }
    else if (*(char *)(lVar9 + 0x4a) == '\0') {
      auVar19 = (*pcVar14)(lVar9);
    }
    else {
code_r0x02924d98:
      auVar19 = (*pcVar14)(plVar1,lVar9);
    }
code_r0x02924da4:
    uVar13 = auVar19._8_8_;
    lVar5 = lVar5 + 1;
    if (lVar5 == lVar15) {
      return auVar19._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x159e9d4 | Atlas.Contexts.GameContextBaseInProgressState.OnExit
// ============================================================

/* WARNING: Possible PIC construction at 0x0149d7a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0149d7a4) */
/* WARNING: Removing unreachable block (ram,0x0149d5e8) */
/* WARNING: Removing unreachable block (ram,0x0149d60c) */
/* WARNING: Removing unreachable block (ram,0x0149d620) */
/* WARNING: Removing unreachable block (ram,0x0149d62c) */
/* WARNING: Removing unreachable block (ram,0x0149d634) */
/* WARNING: Removing unreachable block (ram,0x0149d670) */
/* WARNING: Removing unreachable block (ram,0x0149d640) */
/* WARNING: Removing unreachable block (ram,0x0149d680) */
/* WARNING: Removing unreachable block (ram,0x0149d648) */
/* WARNING: Removing unreachable block (ram,0x0149d684) */
/* WARNING: Removing unreachable block (ram,0x0149d6a0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c0) */
/* WARNING: Removing unreachable block (ram,0x0149d6c8) */
/* WARNING: Removing unreachable block (ram,0x0149d6e0) */
/* WARNING: Removing unreachable block (ram,0x0149d6f4) */

long Atlas_Contexts_GameContextBaseInProgressState__OnExit(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  long lStack_68;
  
  lVar6 = *(long *)(param_1 + 0x90);
  if (lVar6 != 0) {
    uVar8 = 0;
    if ((*(char *)(lVar6 + 0x48) == '\0') && (*(char *)(lVar6 + 0x49) == '\0')) {
      return lVar6;
    }
    *(undefined4 *)(lVar6 + 0x4c) = 3;
    *(undefined2 *)(lVar6 + 0x48) = 0;
    if (*(long *)(lVar6 + 0x20) != 0) {
      uVar8 = 0;
      /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(lVar6 + 0x20),8);
      lVar6 = *(long *)(lVar6 + 0x28);
      if (lVar6 != 0) {
        if ((bRam0000000003eb4a16 & 1) == 0) {
          func_0x00f78a20(0x3d71930,0,0);
          func_0x00f78a20(0x3d69668);
          bRam0000000003eb4a16 = 1;
        }
        lVar5 = *(long *)(lVar6 + 0x10);
        if (lVar5 == 0) {
          return 0;
        }
        uVar16 = *(undefined4 *)(lVar6 + 0x40);
        puVar7 = (undefined8 *)0x3d69668;
        if (*(int *)(lVar6 + 0x30) != 1) {
          puVar7 = (undefined8 *)0x3d71930;
        }
        uVar8 = *puVar7;
        iVar3 = /*FMOD.Studio.EventInstance$$isValid*/ func_0x016e011c(lVar5 + 0x28,0,0,0);
        if (iVar3 != 0) {
          /*FMOD.Studio.EventInstance$$setParameterByName*/ func_0x016dfe34(uVar16,lVar5 + 0x28,uVar8,0,0);
        }
        return lVar5;
      }
    }
    auVar17 = func_0x00f78af4();
    uVar16 = 0;
    if (auVar17._8_4_ == 0) {
      uVar16 = 0x3f800000;
    }
    lVar6 = /*UnityEngine.Time$$set_timeScale*/ func_0x03272d10(uVar16,0);
    lVar5 = *(long *)(auVar17._0_8_ + 0x30);
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x20);
      lVar6 = 0;
      if (lVar5 != 0) {
        *(char *)(lVar5 + 0x1b8) = (char)uVar8;
        lVar6 = /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&stack0xffffffffffffffb8,lVar5,uVar8,0);
        return lVar6;
      }
    }
    return lVar6;
  }
  lVar6 = func_0x00f78af4();
  lVar6 = *(long *)(lVar6 + 0x60);
  if (lVar6 == 0) {
    return 0;
  }
  uVar8 = 0;
  lStack_68 = lVar6;
  lVar5 = *(long *)(lVar6 + 0x68);
  if (lVar5 == 0) {
    plVar15 = &lStack_68;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar5 + 0x18);
    if (lVar14 == 0) {
      return lVar6;
    }
    plVar15 = (long *)(lVar5 + 0x20);
  }
  lVar5 = 0;
  do {
    lVar9 = plVar15[lVar5];
    pcVar13 = *(code **)(lVar9 + 0x10);
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9,uVar8);
    }
    iVar3 = func_0x00f78a4c(lVar9);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar6 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          auVar18 = (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
          goto code_r0x02924da4;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x02924e68:
        pcVar13 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar4 == 0) {
          uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar1;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
          uVar8 = *(undefined8 *)(lVar10 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar8,lVar9);
        pcVar13 = (code *)*puVar7;
      }
      auVar18 = (*pcVar13)(plVar1,puVar7);
    }
    else if (*(char *)(lVar9 + 0x4a) == '\0') {
      auVar18 = (*pcVar13)(lVar9);
    }
    else {
code_r0x02924d98:
      auVar18 = (*pcVar13)(plVar1,lVar9);
    }
code_r0x02924da4:
    uVar8 = auVar18._8_8_;
    lVar5 = lVar5 + 1;
    if (lVar5 == lVar14) {
      return auVar18._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x159e9f8 | Atlas.Contexts.GameContextBaseInProgressState.NotifyGameContextFinished
// ============================================================

void Atlas_Contexts_GameContextBaseInProgressState__NotifyGameContextFinished(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long lStack_58;
  
  lVar6 = *(long *)(param_1 + 0x60);
  if (lVar6 == 0) {
    return;
  }
  uVar7 = 0;
  lStack_58 = lVar6;
  lVar8 = *(long *)(lVar6 + 0x68);
  if (lVar8 == 0) {
    plVar15 = &lStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar8 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    plVar15 = (long *)(lVar8 + 0x20);
  }
  lVar8 = 0;
  do {
    lVar9 = plVar15[lVar8];
    pcVar13 = *(code **)(lVar9 + 0x10);
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9,uVar7);
    }
    iVar3 = func_0x00f78a4c(lVar9);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar6 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
          uVar7 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar5 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x02924e68:
        pcVar13 = (code *)*puVar5;
        puVar5 = (undefined8 *)puVar5[1];
      }
      else {
        if (iVar4 == 0) {
          uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar1;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
          uVar7 = *(undefined8 *)(lVar10 + 8);
        }
        puVar5 = (undefined8 *)func_0x00f78acc(uVar7,lVar9);
        pcVar13 = (code *)*puVar5;
      }
      (*pcVar13)(plVar1,puVar5);
      uVar7 = extraout_x1_02;
    }
    else if (*(char *)(lVar9 + 0x4a) == '\0') {
      (*pcVar13)(lVar9);
      uVar7 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar13)(plVar1,lVar9);
      uVar7 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar14) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x159ea00 | Atlas.Contexts.GameContextBaseInProgressState.OnDeInit
// ============================================================

void Atlas_Contexts_GameContextBaseInProgressState__OnDeInit(long param_1)

{
  if (*(long *)(param_1 + 0x78) != 0) {
    /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(param_1 + 0x78),2,0);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}



// ============================================================
// RVA: 0x159ea3c | Atlas.Contexts.GameContextBaseInProgressState.InvokeOnInProgressScreenEntered
// ============================================================

void Atlas_Contexts_GameContextBaseInProgressState__InvokeOnInProgressScreenEntered
               (long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_58;
  
  if ((bRam0000000003eb51c2 & 1) == 0) {
    func_0x00f78a20(0x3d2a070);
    bRam0000000003eb51c2 = 1;
  }
  lVar6 = *(long *)(param_1 + 0xb0);
  if (lVar6 == 0) {
    return;
  }
  lStack_58 = lVar6;
  lVar9 = *(long *)(lVar6 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_58;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    pcVar14 = *(code **)(lVar10 + 0x10);
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(short *)(lVar10 + 0x48) == -1) {
      func_0x00f78ad8(lVar10);
    }
    iVar4 = func_0x00f78a4c(lVar10);
    bVar3 = *(char *)(lVar10 + 0x4a) == '\x01';
    if (iVar4 == 0) {
      if (bVar3) {
        if (plVar1 == (long *)0x0) {
code_r0x01e480c8:
          (*pcVar14)(param_2,lVar10);
        }
        else {
          if (((*(short *)(lVar10 + 0x48) == -1) || ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
             (*(long *)(lVar6 + 0x18) == 0)) goto code_r0x01e47fc0;
          iVar4 = func_0x00f78a44(lVar10);
          iVar5 = func_0x00f78ec0(lVar10);
          if (iVar4 == 0) {
            uVar2 = *(ushort *)(lVar10 + 0x48);
            if (iVar5 == 0) {
              lVar10 = *plVar1 + (ulong)uVar2 * 0x10;
              (**(code **)(lVar10 + 0x138))(plVar1,param_2,*(undefined8 *)(lVar10 + 0x140));
              goto code_r0x01e480d4;
            }
            lVar10 = func_0x00f78a48(lVar10);
            lVar11 = *plVar1;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar10) {
                  puVar8 = (undefined8 *)
                           (lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
                  goto code_r0x01e48260;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar10,(ulong)uVar2);
code_r0x01e48260:
            pcVar14 = (code *)*puVar8;
            puVar8 = (undefined8 *)puVar8[1];
          }
          else {
            if (iVar5 == 0) {
              uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar11 = *plVar1;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01e48238;
                  }
                  piVar13 = piVar13 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              lVar11 = func_0x00fac1f0(plVar1);
code_r0x01e48238:
              uVar7 = *(undefined8 *)(lVar11 + 8);
            }
            puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
            pcVar14 = (code *)*puVar8;
          }
          (*pcVar14)(plVar1,param_2,puVar8);
        }
      }
      else {
        if ((*(short *)(lVar10 + 0x48) == -1) || (*(long *)(lVar6 + 0x18) == 0))
        goto code_r0x01e480c8;
        iVar4 = func_0x00f78a44(lVar10);
        iVar5 = func_0x00f78ec0(lVar10);
        if (iVar4 == 0) {
          uVar2 = *(ushort *)(lVar10 + 0x48);
          if (iVar5 == 0) {
            lVar10 = *param_2 + (ulong)uVar2 * 0x10;
            (**(code **)(lVar10 + 0x138))(param_2,*(undefined8 *)(lVar10 + 0x140));
            goto code_r0x01e480d4;
          }
          lVar10 = func_0x00f78a48(lVar10);
          lVar11 = *param_2;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                puVar8 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138)
                ;
                goto code_r0x01e481fc;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(param_2,lVar10,(ulong)uVar2);
code_r0x01e481fc:
          pcVar14 = (code *)*puVar8;
          puVar8 = (undefined8 *)puVar8[1];
        }
        else {
          if (iVar5 == 0) {
            uVar7 = *(undefined8 *)(*param_2 + (ulong)*(ushort *)(lVar10 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar11 = *param_2;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)(lVar10 + 0x18)) {
                  lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar10 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01e481d4;
                }
                piVar13 = piVar13 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar11 = func_0x00fac1f0(param_2);
code_r0x01e481d4:
            uVar7 = *(undefined8 *)(lVar11 + 8);
          }
          puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar10);
          pcVar14 = (code *)*puVar8;
        }
        (*pcVar14)(param_2,puVar8);
      }
    }
    else {
      if (bVar3) goto code_r0x01e480c8;
code_r0x01e47fc0:
      (*pcVar14)(plVar1,param_2,lVar10);
    }
code_r0x01e480d4:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x159eaac | Atlas.Contexts.GameContextBaseInProgressState.InvokeOnExitInProgressScreen
// ============================================================

void Atlas_Contexts_GameContextBaseInProgressState__InvokeOnExitInProgressScreen(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long lStack_58;
  
  lVar5 = *(long *)(param_1 + 0xb8);
  if (lVar5 == 0) {
    return;
  }
  uVar7 = 0;
  lStack_58 = lVar5;
  lVar8 = *(long *)(lVar5 + 0x68);
  if (lVar8 == 0) {
    plVar15 = &lStack_58;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar8 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    plVar15 = (long *)(lVar8 + 0x20);
  }
  lVar8 = 0;
  do {
    lVar9 = plVar15[lVar8];
    pcVar13 = *(code **)(lVar9 + 0x10);
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9,uVar7);
    }
    iVar3 = func_0x00f78a4c(lVar9);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar5 + 0x18) == 0))
      goto code_r0x02924d98;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
          uVar7 = extraout_x1_01;
          goto code_r0x02924da4;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar6 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x02924e68:
        pcVar13 = (code *)*puVar6;
        puVar6 = (undefined8 *)puVar6[1];
      }
      else {
        if (iVar4 == 0) {
          uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar1;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar9 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x02924e40:
          uVar7 = *(undefined8 *)(lVar10 + 8);
        }
        puVar6 = (undefined8 *)func_0x00f78acc(uVar7,lVar9);
        pcVar13 = (code *)*puVar6;
      }
      (*pcVar13)(plVar1,puVar6);
      uVar7 = extraout_x1_02;
    }
    else if (*(char *)(lVar9 + 0x4a) == '\0') {
      (*pcVar13)(lVar9);
      uVar7 = extraout_x1;
    }
    else {
code_r0x02924d98:
      (*pcVar13)(plVar1,lVar9);
      uVar7 = extraout_x1_00;
    }
code_r0x02924da4:
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar14) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x159eac0 | Atlas.Contexts.GameContextBaseInProgressState..ctor
// ============================================================

void Atlas_Contexts_GameContextBaseInProgressState___ctor(void)

{
  return;
}



