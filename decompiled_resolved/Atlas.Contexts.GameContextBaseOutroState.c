// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.GameContextBaseOutroState

// ============================================================
// RVA: 0x159c104 | Atlas.Contexts.GameContextBaseOutroState.Init
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

long * Atlas_Contexts_GameContextBaseOutroState__Init
                 (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
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
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d550b8);
    *(undefined8 *)(param_1 + 0x88) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55148);
    *(undefined8 *)(param_1 + 0x90) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55088);
    *(undefined8 *)(param_1 + 0x98) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d550b0);
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55150);
    *(undefined8 *)(param_1 + 0xd0) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55188);
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55068);
    *(undefined8 *)(param_1 + 0xb0) = uVar1;
    uVar1 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55090);
    *(undefined8 *)(param_1 + 0x78) = param_2;
    *(undefined8 *)(param_1 + 0xb8) = uVar1;
    *(undefined8 *)(param_1 + 0xc0) = param_3;
    lVar2 = func_0x00f78aec(/*Core.StateManagement.StateMachine_TypeInfo*/ uRam0000000003d24d40);
    /*Core.StateManagement.StateMachine$$.ctor*/ func_0x02b9585c(lVar2,0);
    *(long *)(param_1 + 200) = lVar2;
    if (lVar2 != 0) {
      /*Core.StateManagement.StateMachine$$Init*/ func_0x02b95450(lVar2,2,0);
      if (*(long *)(param_1 + 200) != 0) {
        /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(param_1 + 200),(long *)(param_1 + 0xd8),uRam0000000003d5d958);
        if (*(long *)(param_1 + 200) != 0) {
          /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(param_1 + 200),param_1 + 0xe0,uRam0000000003d5d968);
          if (*(long *)(param_1 + 200) != 0) {
            /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(param_1 + 200),(long *)(param_1 + 0xe8),uRam0000000003d5d960);
            lVar2 = *(long *)(param_1 + 0xd8);
            if (lVar2 != 0) {
              /*Atlas.Contexts.OutroSequenceBeginRoundCompleteState$$Init*/ func_0x014b48cc(lVar2,param_2,param_4,0);
              lVar2 = *(long *)(param_1 + 0xd8);
              uVar1 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(uVar1,param_1,uRam0000000003d57130,0);
              if (lVar2 != 0) {
                /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar2,uVar1,0);
                if ((*(long *)(param_1 + 0xd0) != 0) && (*(long *)(param_1 + 0xe0) != 0)) {
                  /*Atlas.Contexts.OutroSequenceShowPlacementsState$$Init*/ func_0x014b5468(*(long *)(param_1 + 0xe0),param_2,
                                  *(undefined1 *)(*(long *)(param_1 + 0xd0) + 0x50),0);
                  lVar2 = *(long *)(param_1 + 0xe8);
                  if (lVar2 != 0) {
                    /*Atlas.Contexts.OutroSequenceEndGameState$$Init*/ func_0x014b4ba8(lVar2,param_5,param_2,0);
                    if (((*(long *)(param_1 + 0xd0) != 0) &&
                        (lVar2 = *(long *)(*(long *)(param_1 + 0xd0) + 0x20), lVar2 != 0)) &&
                       (lVar2 = *(long *)(lVar2 + 0x10), lVar2 != 0)) {
                      uVar5 = *(undefined8 *)(lVar2 + 0x20);
                      uVar1 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
                      /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(uVar1,param_1,uRam0000000003d57120,uRam0000000003d2a1d8);
                      plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar1,0);
                      if ((plVar3 != (long *)0x0) && (*plVar3 != /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8))
                      goto LAB_0159c53c;
                      *(long **)(lVar2 + 0x20) = plVar3;
                      if ((*(long *)(param_1 + 0xd0) != 0) &&
                         ((lVar2 = *(long *)(*(long *)(param_1 + 0xd0) + 0x20), lVar2 != 0 &&
                          (lVar2 = *(long *)(lVar2 + 0x10), lVar2 != 0)))) {
                        uVar5 = *(undefined8 *)(lVar2 + 0x68);
                        uVar1 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
                        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar1,param_1,uRam0000000003d57128,uRam0000000003d29f28);
                        plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar5,uVar1,0);
                        if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
                          *(long **)(lVar2 + 0x68) = plVar3;
                          return plVar3;
                        }
                        goto LAB_0159c53c;
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
LAB_0159c53c:
  lVar2 = func_0x00f78e5c();
  lVar4 = *(long *)(lVar2 + 0x20);
  if (lVar4 != 0) {
    plVar3 = (long *)/*Core.StateManagement.StateMachine$$DeInit*/ func_0x02b954d8(lVar4,0);
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(long *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    return plVar3;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb51b4 & 1) == 0) {
    func_0x00f78a20(0x3d276d0);
    bRam0000000003eb51b4 = 1;
  }
  plVar3 = (long *)func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<InitPools>d__164_TypeInfo*/ uRam0000000003d276d0);
  Atlas_Contexts_GameContextBase__InitPools_d__164___ctor(plVar3,0,0);
  if (plVar3 != (long *)0x0) {
    plVar3[4] = lVar2;
    return plVar3;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb51b5 & 1) == 0) {
    func_0x00f78a20(0x3d5b978);
    bRam0000000003eb51b5 = 1;
  }
  if (*(long *)(lVar2 + 0x98) != 0) {
    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x98),uRam0000000003d5b978);
    lVar2 = *(long *)(lVar2 + 0xb0);
    if (lVar2 != 0) {
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
                (lVar2,uRam0000000003d5fed8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fed0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fec8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fec0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5feb0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5feb8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fee8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar2,uRam0000000003d5fee0);
      *(undefined8 *)(lVar2 + 0x50) = 0;
      *(undefined8 *)(lVar2 + 0x58) = 0;
      if (*(long *)(lVar2 + 0x10) != 0) {
        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba70);
        if (*(long *)(lVar2 + 0x10) != 0) {
          /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba68);
          if (*(long *)(lVar2 + 0x10) != 0) {
            /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba60);
            if (*(long *)(lVar2 + 0x10) != 0) {
              /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba58);
              if (*(long *)(lVar2 + 0x10) != 0) {
                /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba48);
                if (*(long *)(lVar2 + 0x10) != 0) {
                  /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba50);
                  if (*(long *)(lVar2 + 0x10) != 0) {
                    /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba80);
                    if (*(long *)(lVar2 + 0x10) != 0) {
                      /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba78);
                      if (*(long *)(lVar2 + 0x18) != 0) {
                        /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b988);
                        if (*(long *)(lVar2 + 0x18) != 0) {
                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b980);
                          if (*(long *)(lVar2 + 0x18) != 0) {
                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b970);
                            if (*(long *)(lVar2 + 0x18) != 0) {
                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b968);
                              if (*(long *)(lVar2 + 0x18) != 0) {
                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b958);
                                if (*(long *)(lVar2 + 0x18) != 0) {
                                  /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b960);
                                  if (*(long *)(lVar2 + 0x18) != 0) {
                                    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b998);
                                    if (*(long *)(lVar2 + 0x18) != 0) {
                                      /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar2 + 0x18),uRam0000000003d5b990);
                                      if (*(long *)(lVar2 + 0x10) != 0) {
                                        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar2 + 0x10),uRam0000000003d5ba40
                                                       );
                                        if (*(long *)(lVar2 + 0x18) != 0) {
                                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                          /*STR('RicochetHitVFX')*/ uRam0000000003d71fa8,uRam0000000003d5b9a0)
                                          ;
                                          if (*(long *)(lVar2 + 0x18) != 0) {
                                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                            /*STR('SheldonHitVFX')*/ uRam0000000003d72880,
                                                            uRam0000000003d5b9a0);
                                            if (*(long *)(lVar2 + 0x18) != 0) {
                                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                              /*STR('GoldenTurdHitVFX')*/ uRam0000000003d6d498,
                                                              uRam0000000003d5b9a0);
                                              if (*(long *)(lVar2 + 0x18) != 0) {
                                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 + 0x18),
                                                                /*STR('ShieldHitVFX')*/ uRam0000000003d728b8,
                                                                uRam0000000003d5b9a0);
                                                if (*(long *)(lVar2 + 0x18) != 0) {
                                                  plVar3 = (long *)/*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar2 +
                                                                                            0x18),
                                                                                                                                                                      
                                                  /*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,uRam0000000003d5b9a0);
                                                  *(undefined8 *)(lVar2 + 0x30) = 0;
                                                  return plVar3;
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
      lVar2 = func_0x00f78af4();
      plVar3 = (long *)Atlas_Gameplay_Usables_UsableManager__SpawnAndSetUpUsableInternal();
      if ((plVar3 != (long *)0x0) && (*(long *)(lVar2 + 0x60) != 0)) {
        Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned__Invoke
                  (*(long *)(lVar2 + 0x60),plVar3,0);
      }
      return plVar3;
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
  plVar3 = (long *)func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerManager_TypeInfo*/ uRam0000000003d21b40);
  if ((bRam0000000003eb520d & 1) == 0) {
    func_0x00f78a20(0x3d35b00);
    func_0x00f78a20(0x3d1cd80);
    func_0x00f78a20(0x3d5b928);
    bRam0000000003eb520d = 1;
  }
  lVar2 = func_0x00f78aec(/*System.Func<PlayerRankingPair, PlayerRankingPair, bool>_TypeInfo*/ uRam0000000003d1cd80);
  /*System.Func<PlayerRankingPair, PlayerRankingPair, bool>$$.ctor*/ func_0x02185b00(lVar2,0,uRam0000000003d5b928,uRam0000000003d35b00);
  plVar3[9] = lVar2;
  return plVar3;
}



// ============================================================
// RVA: 0x159eea8 | Atlas.Contexts.GameContextBaseOutroState.get_ShowPoints
// ============================================================

undefined1 Atlas_Contexts_GameContextBaseOutroState__get_ShowPoints(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x159eeb0 | Atlas.Contexts.GameContextBaseOutroState.set_ShowPoints
// ============================================================

void Atlas_Contexts_GameContextBaseOutroState__set_ShowPoints(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x80) = param_2;
  return;
}



// ============================================================
// RVA: 0x159eeb8 | Atlas.Contexts.GameContextBaseOutroState.get_ShowTimer
// ============================================================

undefined1 Atlas_Contexts_GameContextBaseOutroState__get_ShowTimer(long param_1)

{
  return *(undefined1 *)(param_1 + 0x81);
}



// ============================================================
// RVA: 0x159eec0 | Atlas.Contexts.GameContextBaseOutroState.set_ShowTimer
// ============================================================

void Atlas_Contexts_GameContextBaseOutroState__set_ShowTimer(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x81) = param_2;
  return;
}



// ============================================================
// RVA: 0x159eec8 | Atlas.Contexts.GameContextBaseOutroState.get_IsArcadeEvent
// ============================================================

undefined1 Atlas_Contexts_GameContextBaseOutroState__get_IsArcadeEvent(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf0);
}



// ============================================================
// RVA: 0x159eed0 | Atlas.Contexts.GameContextBaseOutroState.set_IsArcadeEvent
// ============================================================

void Atlas_Contexts_GameContextBaseOutroState__set_IsArcadeEvent(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xf0) = param_2;
  return;
}



// ============================================================
// RVA: 0x159eed8 | Atlas.Contexts.GameContextBaseOutroState.get_StateMachine
// ============================================================

undefined8 Atlas_Contexts_GameContextBaseOutroState__get_StateMachine(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



// ============================================================
// RVA: 0x159eee0 | Atlas.Contexts.GameContextBaseOutroState.get_BeginRoundCompleteState
// ============================================================

undefined8 Atlas_Contexts_GameContextBaseOutroState__get_BeginRoundCompleteState(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



// ============================================================
// RVA: 0x159eee8 | Atlas.Contexts.GameContextBaseOutroState.get_ShowPlacementsState
// ============================================================

undefined8 Atlas_Contexts_GameContextBaseOutroState__get_ShowPlacementsState(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



// ============================================================
// RVA: 0x159eef0 | Atlas.Contexts.GameContextBaseOutroState.OnGameModeUpdated
// ============================================================

void Atlas_Contexts_GameContextBaseOutroState__OnGameModeUpdated(void)

{
  return;
}



// ============================================================
// RVA: 0x159eef4 | Atlas.Contexts.GameContextBaseOutroState.OnLocalPlayerFinished
// ============================================================

void Atlas_Contexts_GameContextBaseOutroState__OnLocalPlayerFinished(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  long *plVar15;
  long unaff_x23;
  ulong uVar16;
  int iVar17;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  int aiStack_b0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000003eb51cb & 1) == 0) {
    func_0x00f78a20(0x3d20050);
    func_0x00f78a20(0x3d1f010);
    func_0x00f78a20(0x3d1cf20);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d0a0);
    func_0x00f78a20(0x3d1d260);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3b448);
    func_0x00f78a20(0x3d3b450);
    func_0x00f78a20(0x3d24068);
    bRam0000000003eb51cb = 1;
  }
  aiStack_b0[2] = 0;
  if (param_2 == 0) goto LAB_0159f5cc;
  plVar6 = (long *)func_0x00f78a34(/*Atlas.Gameplay.Player.GameContextPlayer[]_TypeInfo*/ uRam0000000003d1f010,*(undefined4 *)(param_2 + 0x18));
  if (0 < *(int *)(param_2 + 0x18)) {
    iVar17 = 0;
    uVar16 = 0;
    do {
      if (((*(long *)(param_1 + 0x78) == 0) ||
          (lVar11 = *(long *)(*(long *)(param_1 + 0x78) + 0x40), lVar11 == 0)) ||
         (plVar15 = *(long **)(lVar11 + 0x28), plVar15 == (long *)0x0)) goto LAB_0159f5cc;
      lVar11 = *plVar15;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0159f064;
          }
          piVar13 = piVar13 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)func_0x00fac1f0(plVar15,/*System.Collections.Generic.IEnumerable<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d0a0,0);
LAB_0159f064:
      plVar15 = (long *)(*(code *)*puVar7)(plVar15,puVar7[1]);
      if (plVar15 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x0159f5e0;
      }
      do {
        lVar11 = *plVar15;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x0159f0c4;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar15,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x0159f0c4:
        uVar12 = (*(code *)*puVar7)(plVar15,puVar7[1]);
        if ((uVar12 & 1) == 0) goto code_r0x0159f1a0;
        lVar11 = *plVar15;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x0159f120;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar15,/*System.Collections.Generic.IEnumerator<GameContextPlayer>_TypeInfo*/ lRam0000000003d1d260,0);
code_r0x0159f120:
        lVar11 = (*(code *)*puVar7)(plVar15,puVar7[1]);
        if (lVar11 == 0) {
          func_0x00f78af4();
          goto code_r0x0159f5e0;
        }
        if (*(long *)(lVar11 + 0x10) == 0) {
          func_0x00f78af4();
          goto code_r0x0159f5e0;
        }
        iVar1 = *(int *)(*(long *)(lVar11 + 0x10) + 0x54);
        if (*(uint *)(param_2 + 0x18) <= uVar16) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
      } while (iVar1 != *(int *)(*(long *)(param_2 + 0x10) + uVar16 * 0x28 + 0x20));
      if (plVar6 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x0159f5e0;
      }
      lVar8 = func_0x00f78adc(lVar11,*(undefined8 *)(*plVar6 + 0x40));
      if (lVar8 == 0) {
        uVar14 = func_0x00f78b14();
code_r0x0159f280:
        func_0x00f78ac0(uVar14,0);
        goto code_r0x0159f5e0;
      }
      if (*(uint *)(plVar6 + 3) <= uVar16) {
        uVar14 = func_0x00f78b24();
        goto code_r0x0159f280;
      }
      plVar6[uVar16 + 4] = lVar11;
code_r0x0159f1a0:
      unaff_x23 = 0;
      aiStack_b0[iVar17] = 0x72;
      iVar1 = aiStack_b0[2];
      iVar17 = aiStack_b0[2] + 1;
      aiStack_b0[2] = iVar17;
      if (plVar15 != (long *)0x0) {
        lVar11 = *plVar15;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x0159f210;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar15,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x0159f210:
        (*(code *)*puVar7)(plVar15,puVar7[1]);
      }
      if ((iVar17 != 0) && (aiStack_b0[iVar1] == 0x72)) {
        iVar17 = iVar1;
        aiStack_b0[2] = iVar1;
      }
      uVar16 = uVar16 + 1;
    } while ((long)uVar16 < (long)*(int *)(param_2 + 0x18));
  }
  if (((*(long *)(param_1 + 0x78) == 0) || (*(long *)(*(long *)(param_1 + 0x78) + 0x40) == 0)) ||
     (lVar11 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalGameContextPlayer*/ func_0x01599b24(), lVar11 == 0)) goto LAB_0159f5cc;
  uVar14 = *(undefined8 *)(lVar11 + 0x28);
  uStack_98 = *(undefined8 *)(lVar11 + 0x38);
  uStack_a0 = *(undefined8 *)(lVar11 + 0x30);
  uStack_88 = *(undefined8 *)(lVar11 + 0x48);
  uStack_90 = *(undefined8 *)(lVar11 + 0x40);
  uStack_78 = *(undefined8 *)(lVar11 + 0x58);
  uStack_80 = *(undefined8 *)(lVar11 + 0x50);
  uStack_70 = *(undefined8 *)(lVar11 + 0x60);
  if (*(long *)(param_1 + 0xc0) == 0) goto LAB_0159f5cc;
  if (*(char *)(param_1 + 0xf0) == '\0') {
    uVar2 = *(uint *)(*(long *)(param_1 + 0xc0) + 0x70);
    uVar16 = (ulong)uVar2;
    if (uVar2 == 1) {
      if (*(long *)(param_1 + 0xa8) == 0) goto LAB_0159f5cc;
      /*Atlas.Save.SaveManager$$RegisterPlayerCharacterWin*/ func_0x014eea34(*(long *)(param_1 + 0xa8),uVar14,0);
    }
    if (((*(long *)(param_1 + 0x78) == 0) ||
        (lVar8 = *(long *)(*(long *)(param_1 + 0x78) + 0x40), lVar8 == 0)) ||
       (plVar6 = *(long **)(lVar8 + 0x28), plVar6 == (long *)0x0)) goto LAB_0159f5cc;
    unaff_x23 = *(long *)(param_1 + 0xa0);
    lVar8 = *plVar6;
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == /*System.Collections.Generic.ICollection<GameContextPlayer>_TypeInfo*/ lRam0000000003d1cf20) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x0159f4fc;
        }
        piVar13 = piVar13 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.Generic.ICollection<GameContextPlayer>_TypeInfo*/ lRam0000000003d1cf20,0);
code_r0x0159f4fc:
    uVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((*(long *)(param_1 + 0xd0) == 0) || (unaff_x23 == 0)) goto LAB_0159f5cc;
    if (*(long **)(param_1 + 0x78) == (long *)0x0) {
code_r0x0159f544:
      bVar5 = false;
    }
    else {
      lVar8 = **(long **)(param_1 + 0x78);
      if (*(byte *)(lVar8 + 300) < *(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300)) goto code_r0x0159f544;
      bVar5 = *(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068 + 300) * 8 +
                       -8) == /*Atlas.Contexts.RaceGameContext_TypeInfo*/ lRam0000000003d24068;
    }
    /*Atlas.Stats.AtlasStats$$RecordFinish*/ func_0x0146e564(unaff_x23,uVar16,uVar9,bVar5,*(char *)(*(long *)(param_1 + 0xd0) + 0x50) != '\0'
                    ,0);
    if (*(long **)(param_1 + 0x78) != (long *)0x0) {
      lVar8 = **(long **)(param_1 + 0x78);
      if ((*(byte *)(/*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050 + 300) <= *(byte *)(lVar8 + 300)) &&
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(/*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050 + 300) * 8 + -8)
          == /*Atlas.Contexts.BattleGameContext_TypeInfo*/ lRam0000000003d20050)) {
        if (*(long *)(param_1 + 0xa0) == 0) goto LAB_0159f5cc;
        /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(*(long *)(param_1 + 0xa0),*(undefined4 *)(lVar11 + 0x78),0);
      }
    }
  }
  else {
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (plVar6 = *(long **)(*(long *)(param_1 + 0x78) + 0x230), plVar6 == (long *)0x0))
    goto LAB_0159f5cc;
    lVar8 = plVar6[10];
    uVar9 = /*Atlas.Arcade.ArcadeEvent$$TimeMsInProgress*/ func_0x0144d61c(plVar6,0);
    unaff_x23 = 0;
    if (lVar8 == 0) goto LAB_0159f5cc;
    unaff_x23 = /*Atlas.UI.ArcadeEventMetagameData$$GetMedal*/ func_0x0144d6c0(lVar8,uVar9,0);
    if (plVar6[10] == 0) goto LAB_0159f5cc;
    uVar9 = /*Atlas.UI.ArcadeEventMetagameData$$GetCurrentMedal*/ func_0x0144ec24(plVar6[10],0);
    lVar8 = *(long *)(param_1 + 0xa0);
    cVar3 = *(char *)((long)plVar6 + 0x8e);
    uVar10 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
    if (lVar8 == 0) goto LAB_0159f5cc;
    /*Atlas.Stats.AtlasStats$$OnArcadeEnd*/ func_0x0146ebb8(lVar8,unaff_x23,(int)uVar9 < (int)unaff_x23,uVar9,cVar3 != '\0',uVar10,0);
    if (*(long *)(param_1 + 0xb0) == 0) goto LAB_0159f5cc;
    /*Atlas.Stats.AchievementManager$$OnArcadeEventEnded*/ func_0x01447c38(*(long *)(param_1 + 0xb0),unaff_x23,*(undefined1 *)((long)plVar6 + 0x8e),
                    *(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xa8),0);
    uVar16 = /*Atlas.Arcade.ArcadeEvent$$GetFakeFinishPositionForMedal*/ func_0x0144dd6c(unaff_x23,0);
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    uStack_e0 = uStack_98;
    uStack_e8 = uStack_a0;
    uStack_d0 = uStack_88;
    uStack_d8 = uStack_90;
    uStack_c0 = uStack_78;
    uStack_c8 = uStack_80;
    uStack_b8 = uStack_70;
    uStack_f0 = uVar14;
    /*Atlas.Save.SaveManager$$RegisterLoadoutPlayed*/ func_0x014ee814(*(long *)(param_1 + 0xa8),&uStack_f0,0);
    if (((*(long *)(param_1 + 0x78) != 0) &&
        (lVar8 = *(long *)(*(long *)(param_1 + 0x78) + 0x1c0), lVar8 != 0)) &&
       (*(long *)(param_1 + 0xa8) != 0)) {
      /*Atlas.Save.SaveManager$$RegisterMapPlayed*/ func_0x014ee6cc(*(long *)(param_1 + 0xa8),*(undefined8 *)(lVar8 + 0x38),0);
      if ((*(long *)(lVar11 + 0x10) != 0) && (*(long *)(param_1 + 0x98) != 0)) {
        /*Atlas.Audio.AtlasAudioManager$$SpeakWinOrLose*/ func_0x0145b418(*(long *)(param_1 + 0x98),*(undefined8 *)(*(long *)(lVar11 + 0x10) + 0x70),
                        uVar16,0);
        /*Atlas.Contexts.GameContextBaseOutroState$$TransitionToBeginRoundCompleteState*/ func_0x0159f5e4(param_1);
        return;
      }
    }
  }
LAB_0159f5cc:
  func_0x00f78af4();
  func_0x00f78ac0(unaff_x23,0);
  __Unwind_Resume();
code_r0x0159f5e0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x159f5e4);
  (*pcVar4)();
}



// ============================================================
// RVA: 0x159f5e4 | Atlas.Contexts.GameContextBaseOutroState.TransitionToBeginRoundCompleteState
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02b9561c) */
/* WARNING: Removing unreachable block (ram,0x02b95628) */
/* WARNING: Removing unreachable block (ram,0x02b95640) */
/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_Contexts_GameContextBaseOutroState__TransitionToBeginRoundCompleteState(long param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb51cd & 1) == 0) {
    func_0x00f78a20(0x3d5d9c0);
    bRam0000000003eb51cd = 1;
  }
  lVar14 = lRam0000000003d5d9c0;
  lVar3 = *(long *)(param_1 + 200);
  if (lVar3 == 0) {
    lVar14 = func_0x00f78af4();
    if (((*(long *)(lVar14 + 0x78) != 0) && (*(long *)(lVar14 + 0xd0) != 0)) &&
       (lVar3 = *(long *)(*(long *)(lVar14 + 0xd0) + 0x20), lVar3 != 0)) {
      lVar8 = *(long *)(*(long *)(lVar14 + 0x78) + 0x130);
      /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(&uStack_60,lVar3,0);
      if (lVar8 != 0) {
        uStack_78 = uStack_58;
        uStack_80 = uStack_60;
        lStack_68 = (long)puStack_48;
        puStack_70 = puStack_50;
        Atlas_Gameplay_Kart_KartManager__SetInputTypeByNetworkPlayer(lVar8,1,&uStack_80,0);
        if ((*(long *)(lVar14 + 0x90) != 0) &&
           (lVar3 = *(long *)(*(long *)(lVar14 + 0x90) + 0x38), lVar3 != 0)) {
          uVar11 = /*Atlas.Audio.AtlasAudioManager$$PlayFinishMusic*/ func_0x01459890(lVar3,0);
          if (*(long *)(lVar14 + 0xa0) != 0) {
            *(undefined4 *)(*(long *)(lVar14 + 0xa0) + 0x60) = 2;
            return uVar11;
          }
        }
      }
    }
    auVar16 = func_0x00f78af4();
    lVar14 = *(long *)(auVar16._0_8_ + 200);
    if (lVar14 == 0) {
      uVar11 = func_0x00f78af4();
      return uVar11;
    }
    if ((bRam0000000003eba4f5 & 1) == 0) {
      func_0x00f78a20(0x3d24d40,auVar16._8_8_,0);
      bRam0000000003eba4f5 = 1;
    }
    if (((*(ushort *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar15 = **(undefined8 **)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar15,0);
    lVar14 = *(long *)(lVar14 + 0x18);
    if (lVar14 != 0) {
      /*Core.StateManagement.State$$Update*/ func_0x02b94f7c(lVar14,auVar16._8_8_);
    }
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (*pcRam0000000003ec05a0)(uVar15);
    return uVar11;
  }
  lVar8 = 0;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar15 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
  if (lVar3 != 0) {
    puStack_50 = (undefined1 *)0x0;
    puStack_48 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar3,uVar4,&puStack_50,0,0);
    puVar1 = puStack_50;
    if (puStack_50 != (undefined1 *)0x0) {
      if (*(long *)(lVar3 + 0x18) != 0) {
        /*Core.StateManagement.State$$Exit*/ func_0x02b95144();
      }
      *(undefined1 **)(lVar3 + 0x18) = puVar1;
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      *(undefined8 *)(puVar1 + 0x70) = 0;
      /*Core.StateManagement.State$$Enter*/ func_0x02b94f28();
    }
    return (ulong)(puVar1 != (undefined1 *)0x0);
  }
  auVar16 = func_0x00f78af4();
  plVar6 = auVar16._8_8_;
  lVar14 = auVar16._0_8_;
  uStack_80 = 0x3eb6000;
  uStack_78 = 0x3d25458;
  uStack_60 = 0;
  uStack_58 = 0;
  puStack_48 = &System_String__Join_object_;
  puStack_70 = (undefined1 *)uVar15;
  lStack_68 = lVar3;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar6 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar15 = func_0x00f78aec();
    uVar4 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar4,0);
    uVar4 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar15,uVar4);
  }
  else {
    if (lVar14 == 0) {
      lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar3 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar3);
    }
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar3) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar13 = piVar13 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)func_0x00fac1f0(plVar6,lVar3,0);
code_r0x018e1828:
    plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if ((uVar11 & 1) == 0) {
        uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar6 != (long *)0x0) {
          lVar14 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar5 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar5)(plVar6,puVar5[1]);
        }
        return uVar11;
      }
      lVar3 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar9 = *(long *)(*(long *)(lVar8 + 0x30) + 8);
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar9) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar6,lVar9,0);
code_r0x018e1934:
      lVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      if (lVar9 != 0) {
        lVar9 = *(long *)(*(long *)(lVar8 + 0x30) + 8);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar9) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar6,lVar9,0);
code_r0x018e19a8:
        plVar7 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
        if (plVar7 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        if (lVar9 != 0) {
          if (lVar3 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar3,lVar9,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar9 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar6,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar11 = (*(code *)*puVar5)(plVar6,puVar5[1]);
        if ((uVar11 & 1) == 0) {
          uVar11 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar3,0);
          goto joined_r0x018e1920;
        }
        if (lVar3 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar3,lVar14,0);
        lVar9 = *(long *)(*(long *)(lVar8 + 0x30) + 8);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar9) {
              puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)func_0x00fac1f0(plVar6,lVar9,0);
code_r0x018e1ab0:
        lVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
      } while (lVar9 == 0);
      lVar9 = *(long *)(*(long *)(lVar8 + 0x30) + 8);
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar9) {
            puVar5 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)func_0x00fac1f0(plVar6,lVar9,0);
code_r0x018e1b24:
      plVar7 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
      if (plVar7 != (long *)0x0) {
        lVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        if (lVar9 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar3,lVar9,0);
        }
        goto code_r0x018e19dc;
      }
      func_0x00f78af4();
      goto code_r0x018e1c64;
    }
  }
  func_0x00f78af4();
code_r0x018e1c64:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x18e1c68);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x159f640 | Atlas.Contexts.GameContextBaseOutroState.OnEnter
// ============================================================

void Atlas_Contexts_GameContextBaseOutroState__OnEnter(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (((*(long *)(param_1 + 0x78) != 0) && (*(long *)(param_1 + 0xd0) != 0)) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0xd0) + 0x20), lVar1 != 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x130);
    /*Core.Networking.NetworkSession$$GetLocalPlayer*/ func_0x0165d950(&uStack_40,lVar1,0);
    if (lVar2 != 0) {
      uStack_58 = uStack_38;
      uStack_60 = uStack_40;
      uStack_48 = uStack_28;
      uStack_50 = uStack_30;
      Atlas_Gameplay_Kart_KartManager__SetInputTypeByNetworkPlayer(lVar2,1,&uStack_60,0);
      if ((*(long *)(param_1 + 0x90) != 0) &&
         (lVar1 = *(long *)(*(long *)(param_1 + 0x90) + 0x38), lVar1 != 0)) {
        /*Atlas.Audio.AtlasAudioManager$$PlayFinishMusic*/ func_0x01459890(lVar1,0);
        if (*(long *)(param_1 + 0xa0) != 0) {
          *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x60) = 2;
          return;
        }
      }
    }
  }
  auVar4 = func_0x00f78af4();
  lVar1 = *(long *)(auVar4._0_8_ + 200);
  if (lVar1 != 0) {
    if ((bRam0000000003eba4f5 & 1) == 0) {
      func_0x00f78a20(0x3d24d40,auVar4._8_8_,0);
      bRam0000000003eba4f5 = 1;
    }
    if (((*(ushort *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar3 = **(undefined8 **)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar3,0);
    lVar1 = *(long *)(lVar1 + 0x18);
    if (lVar1 != 0) {
      /*Core.StateManagement.State$$Update*/ func_0x02b94f7c(lVar1,auVar4._8_8_);
    }
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec05a0)(uVar3);
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x159f6d8 | Atlas.Contexts.GameContextBaseOutroState.OnUpdate
// ============================================================

void Atlas_Contexts_GameContextBaseOutroState__OnUpdate(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 200);
  if (lVar1 != 0) {
    if ((bRam0000000003eba4f5 & 1) == 0) {
      func_0x00f78a20(0x3d24d40,param_2,0);
      bRam0000000003eba4f5 = 1;
    }
    if (((*(ushort *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar2 = **(undefined8 **)(/*Core.StateManagement.StateMachine_TypeInfo*/ lRam0000000003d24d40 + 0xb8);
    /*Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility$$BeginSample*/ func_0x03250f24(uVar2,0);
    lVar1 = *(long *)(lVar1 + 0x18);
    if (lVar1 != 0) {
      /*Core.StateManagement.State$$Update*/ func_0x02b94f7c(lVar1,param_2);
    }
    if (pcRam0000000003ec05a0 == (code *)0x0) {
      pcRam0000000003ec05a0 =
           (code *)func_0x00f789d4(
                                  "Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03250fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000003ec05a0)(uVar2);
    return;
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x159f6f8 | Atlas.Contexts.GameContextBaseOutroState.OnFixedUpdate
// ============================================================

void Atlas_Contexts_GameContextBaseOutroState__OnFixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x159f6fc | Atlas.Contexts.GameContextBaseOutroState.OnExit
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02b9561c) */
/* WARNING: Removing unreachable block (ram,0x02b95628) */
/* WARNING: Removing unreachable block (ram,0x02b95640) */
/* WARNING: Removing unreachable block (ram,0x018e1c4c) */
/* WARNING: Removing unreachable block (ram,0x015d0320) */
/* WARNING: Removing unreachable block (ram,0x015d0360) */
/* WARNING: Removing unreachable block (ram,0x015d0328) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_Contexts_GameContextBaseOutroState__OnExit(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  long extraout_x1;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  uint uVar14;
  long lVar15;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined1 *unaff_x24;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 extraout_d0;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  long lStack_158;
  undefined1 ***pppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  long lStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  if ((((*(long *)(param_1 + 0x78) != 0) &&
       (lVar10 = *(long *)(*(long *)(param_1 + 0x78) + 0x140), lVar10 != 0)) &&
      (lVar10 = *(long *)(lVar10 + 0x10), lVar10 != 0)) &&
     (lVar10 = *(long *)(lVar10 + 0x30), lVar10 != 0)) {
    /*Atlas.Gameplay.VirtualCamera$$StopTracking*/ func_0x0152835c(lVar10,0);
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar10 = *(long *)(*(long *)(param_1 + 0x78) + 0x140), lVar10 != 0)) {
      /*Atlas.Maps.MapSequenceController$$StopActiveTimeline*/ func_0x0148df24(lVar10,0);
      if ((*(long *)(param_1 + 0x78) != 0) &&
         (puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x78) + 0x130), puVar2 != (undefined8 *)0x0)
         ) {
        lVar10 = 0;
        if ((bRam0000000003eb5346 & 1) == 0) {
          func_0x00f78a20(0x3d328c8);
          func_0x00f78a20(0x3d328d0);
          func_0x00f78a20(0x3d328d8);
          func_0x00f78a20(0x3d3ae20);
          bRam0000000003eb5346 = 1;
        }
        if (puVar2[2] != 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&stack0xffffffffffffffb8,puVar2[2],uRam0000000003d3ae20);
          uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&stack0xffffffffffffffb8,uRam0000000003d328d0);
          if ((uVar3 & 1) == 0) {
            plVar4 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&stack0xffffffffffffffb8,uRam0000000003d328c8);
            return plVar4;
          }
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0368);
          (*pcVar1)();
        }
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar4 = (long *)___cxa_begin_catch();
          lVar15 = *plVar4;
          ___cxa_end_catch();
          plVar4 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&stack0xffffffffffffffb8,*puVar2);
          if (lVar15 == 0) {
            return plVar4;
          }
          func_0x00f78ac0(lVar15,0);
        }
        auVar25 = __Unwind_Resume();
        lVar15 = lVar10;
        if ((bRam0000000003eb5347 & 1) == 0) {
          func_0x00f78a20(0x3d328c8);
          func_0x00f78a20(0x3d328d0);
          func_0x00f78a20(0x3d328d8);
          func_0x00f78a20(0x3d3ae20);
          bRam0000000003eb5347 = 1;
        }
        uStack_98 = 0;
        uStack_90 = 0;
        lStack_88 = 0;
        lVar5 = auVar25._0_8_[2];
        if (lVar5 != 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,lVar5,uRam0000000003d3ae20);
          while( true ) {
            uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_98,uRam0000000003d328d0);
            if ((uVar3 & 1) == 0) {
              plVar4 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,uRam0000000003d328c8);
              return plVar4;
            }
            if (lStack_88 == 0) break;
            if (*(int *)(lStack_88 + 0x54) == *(int *)(lVar10 + 0xc)) {
              if (*(long *)(lStack_88 + 0x20) == 0) {
                func_0x00f78af4();
code_r0x015d04b0:
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x15d04b4);
                (*pcVar1)();
              }
              Atlas_Gameplay_Kart_KartPhysicsInput__SetLogicFreeze
                        (*(long *)(lStack_88 + 0x20),auVar25._8_8_,0);
            }
          }
          func_0x00f78af4();
          goto code_r0x015d04b0;
        }
        func_0x00f78af4();
        if (extraout_w1_00 == 1) {
          plVar4 = (long *)___cxa_begin_catch();
          lVar10 = *plVar4;
          ___cxa_end_catch();
          plVar4 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_98,*auVar25._0_8_);
          if (lVar10 == 0) {
            return plVar4;
          }
          func_0x00f78ac0(lVar10,0);
        }
        auVar26 = __Unwind_Resume();
        lVar5 = auVar26._8_8_;
        puVar2 = auVar26._0_8_;
        uStack_d0 = 0x3eb5000;
        pcStack_a8 = Atlas_Gameplay_Kart_KartManager__SetActiveKartVisuals;
        puStack_b8 = (undefined *)lVar10;
        puStack_b0 = &stack0xffffffffffffffa0;
        _auStack_c8 = auVar25;
        if ((bRam0000000003eb5348 & 1) == 0) {
          func_0x00f78a20(0x3d328c8);
          func_0x00f78a20(0x3d328d0);
          func_0x00f78a20(0x3d328d8);
          func_0x00f78a20(0x3d3ae20);
          bRam0000000003eb5348 = 1;
        }
        uStack_e8 = 0;
        uStack_e0 = 0;
        lStack_d8 = 0;
        if (puVar2[2] != 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_e8,puVar2[2],uRam0000000003d3ae20);
          while( true ) {
            uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_e8,uRam0000000003d328d0);
            if ((uVar3 & 1) == 0) {
              plVar4 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e8,uRam0000000003d328c8);
              return plVar4;
            }
            if (lStack_d8 == 0) break;
            if (*(long *)(lStack_d8 + 0x28) == 0) {
              func_0x00f78af4();
              goto code_r0x015d05e8;
            }
            Atlas_Gameplay_Kart_KartVisualComposite__SetVisualRootActive
                      (*(long *)(lStack_d8 + 0x28),lVar5,0);
          }
          func_0x00f78af4();
code_r0x015d05e8:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x15d05ec);
          (*pcVar1)();
        }
        func_0x00f78af4();
        if (extraout_w1_01 == 1) {
          plVar4 = (long *)___cxa_begin_catch();
          lVar5 = *plVar4;
          ___cxa_end_catch();
          plVar4 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e8,*puVar2);
          if (lVar5 == 0) {
            return plVar4;
          }
          func_0x00f78ac0(lVar5,0);
        }
        auVar25 = __Unwind_Resume();
        uStack_120 = 0x3eb5000;
        uStack_118 = 0x3eb5000;
        pcStack_f8 = Atlas_Gameplay_Kart_KartManager__SetInputTypeByNetworkPlayer;
        lVar10 = lVar15;
        puStack_110 = puVar2;
        lStack_108 = lVar5;
        ppuStack_100 = &puStack_b0;
        if ((bRam0000000003eb5349 & 1) == 0) {
          func_0x00f78a20(0x3d328c8);
          func_0x00f78a20(0x3d328d0);
          func_0x00f78a20(0x3d328d8);
          func_0x00f78a20(0x3d3ae20);
          bRam0000000003eb5349 = 1;
        }
        uStack_138 = 0;
        uStack_130 = 0;
        lStack_128 = 0;
        lVar5 = auVar25._0_8_[2];
        if (lVar5 != 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_138,lVar5,uRam0000000003d3ae20);
          while( true ) {
            uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_138,uRam0000000003d328d0);
            if ((uVar3 & 1) == 0) {
              plVar4 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_138,uRam0000000003d328c8);
              return plVar4;
            }
            if (lStack_128 == 0) break;
            if (*(int *)(lStack_128 + 0x54) == *(int *)(lVar15 + 0xc)) {
              if (*(long *)(lStack_128 + 0x20) == 0) {
                func_0x00f78af4();
code_r0x015d072c:
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0730);
                (*pcVar1)();
              }
              *(int *)(*(long *)(lStack_128 + 0x20) + 0x10) = auVar25._8_4_;
            }
          }
          func_0x00f78af4();
          goto code_r0x015d072c;
        }
        func_0x00f78af4();
        if (extraout_w1_02 == 1) {
          plVar4 = (long *)___cxa_begin_catch();
          lVar15 = *plVar4;
          ___cxa_end_catch();
          plVar4 = (long *)/*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_138,*auVar25._0_8_);
          if (lVar15 == 0) {
            return plVar4;
          }
          func_0x00f78ac0(lVar15,0);
        }
        lVar5 = __Unwind_Resume();
        uStack_170 = 0x3eb5000;
        pcStack_148 = Atlas_Gameplay_Kart_KartManager__GetLocalPlayerIndex;
        lStack_158 = lVar15;
        pppuStack_150 = &ppuStack_100;
        auStack_168 = auVar25;
        if ((bRam0000000003eb534a & 1) == 0) {
          func_0x00f78a20(0x3d328c8);
          func_0x00f78a20(0x3d328d0);
          func_0x00f78a20(0x3d328d8);
          func_0x00f78a20(0x3d3ae20);
          bRam0000000003eb534a = 1;
        }
        uStack_188 = 0;
        uStack_180 = 0;
        lStack_178 = 0;
        if (lVar5 == 0) {
          func_0x00f78af4();
          if (extraout_w1_03 == 1) {
            plVar4 = (long *)___cxa_begin_catch();
            lVar15 = *plVar4;
            ___cxa_end_catch();
            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_188,uRam0000000003eb5000);
            if (lVar15 == 0) {
              return (long *)0xffffffff;
            }
          }
          else {
            __Unwind_Resume();
            lVar15 = 0;
          }
          auVar25 = func_0x00f78ac0(lVar15,0);
          lVar15 = *auVar25._8_8_;
          if (lVar15 != 0) {
            lVar5 = 0;
            uVar3 = 0;
            do {
              if ((long)(int)*(uint *)(lVar15 + 0x18) <= (long)uVar3) {
                return auVar25._0_8_;
              }
              if (*(uint *)(lVar15 + 0x18) <= uVar3) {
                uVar6 = func_0x00f78b24();
                lVar15 = func_0x00f78ac0(uVar6,0);
                uVar3 = /*UnityEngine.Mathf$$Approximately*/ func_0x0323d44c(extraout_d0,0,0);
                if ((uVar3 & 1) == 0) {
                  if (((extraout_x1 == 0) || (lVar5 = *(long *)(extraout_x1 + 0x10), lVar5 == 0)) ||
                     ((lVar10 == 0 || (lVar10 = *(long *)(lVar10 + 0x10), lVar10 == 0)))) {
                    plVar4 = (long *)func_0x00f78af4();
                    lVar10 = _UNK_033f8b20;
                    plVar4[0xd] = _UNK_033f8b28;
                    plVar4[0xc] = lVar10;
                    return plVar4;
                  }
                  fVar19 = *(float *)(lVar10 + 0x2d0);
                  fVar20 = *(float *)(lVar10 + 0x2d4);
                  fVar21 = *(float *)(lVar10 + 0x2d8);
                  fVar22 = *(float *)(lVar5 + 0x2d0);
                  fVar23 = *(float *)(lVar5 + 0x2d4);
                  fVar24 = *(float *)(lVar5 + 0x2d8);
                  if (cRam0000000003ca34fc == '\0') {
                    func_0x00f78a20(0x3d232c0);
                    cRam0000000003ca34fc = '\x01';
                  }
                  fVar19 = fVar19 - fVar22;
                  fVar20 = fVar20 - fVar23;
                  fVar21 = fVar21 - fVar24;
                  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  fVar22 = fVar21 * fVar21 + fVar19 * fVar19 + fVar20 * fVar20;
                  fVar23 = 1.0 / SQRT(fVar22);
                  fVar19 = fVar19 * fVar23;
                  fVar20 = fVar20 * fVar23;
                  fVar21 = fVar21 * fVar23;
                  if (fVar22 <= 1.1754944e-38) {
                    fVar19 = 0.0;
                    fVar20 = 0.0;
                    fVar21 = 0.0;
                  }
                  uVar16 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar19,fVar20,fVar21,0);
                  fVar23 = *(float *)(lVar5 + 0x294);
                  fVar22 = *(float *)(lVar5 + 0x298);
                  fVar19 = *(float *)(lVar5 + 0x29c);
                  if (cRam0000000003ca34fc == '\0') {
                    func_0x00f78a20(0x3d232c0);
                    cRam0000000003ca34fc = '\x01';
                  }
                  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  fVar24 = fVar19 * fVar19 + fVar23 * fVar23 + fVar22 * fVar22;
                  fVar18 = 1.0 / SQRT(fVar24);
                  fVar23 = fVar23 * fVar18;
                  fVar22 = fVar22 * fVar18;
                  fVar19 = fVar19 * fVar18;
                  if (fVar24 <= 1.1754944e-38) {
                    fVar23 = 0.0;
                    fVar22 = 0.0;
                    fVar19 = 0.0;
                  }
                  uVar17 = /*Unity.Mathematics.float3$$op_Implicit*/ func_0x030c264c(fVar23,fVar22,fVar19,0);
                  uVar3 = /*Atlas.Gameplay.SpatialUtils$$IsInFov*/ func_0x014fd738(uVar16,fVar20,fVar21,uVar17,fVar22,fVar19,
                                          *(undefined4 *)(lVar15 + 0x68),0);
                  if ((uVar3 & 1) != 0) {
                    return (long *)0x0;
                  }
                  if (1.0 < (float)extraout_d0) {
                    return (long *)0x0;
                  }
                  if (10.0 <= *(float *)(lVar5 + 0x194) - *(float *)(lVar10 + 0x194)) {
                    return (long *)(ulong)(*(float *)(lVar15 + 0x6c) <=
                                          (float)((ulong)*(undefined8 *)(lVar5 + 0x298) >> 0x20) *
                                          (float)((ulong)*(undefined8 *)(lVar10 + 0x298) >> 0x20) +
                                          *(float *)(lVar5 + 0x294) * *(float *)(lVar10 + 0x294) +
                                          (float)*(undefined8 *)(lVar5 + 0x298) *
                                          (float)*(undefined8 *)(lVar10 + 0x298));
                  }
                }
                return (long *)0x0;
              }
              lVar15 = lVar15 + lVar5;
              lVar5 = lVar5 + 0xc;
              uVar3 = uVar3 + 1;
              *(undefined8 *)(lVar15 + 0x20) = 0x200000000;
              *(undefined4 *)(lVar15 + 0x28) = 0;
              lVar15 = *auVar25._8_8_;
            } while (lVar15 != 0);
          }
          plVar4 = (long *)func_0x00f78af4();
          return plVar4;
        }
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_188,lVar5,uRam0000000003d3ae20);
        uVar14 = 0;
        do {
          uVar3 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_188,uRam0000000003d328d0);
          if ((uVar3 & 1) == 0) {
            uVar14 = 0;
            iVar9 = 0x3f;
code_r0x015d083c:
            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_188,uRam0000000003d328c8);
            if (iVar9 != 0x41) {
              uVar14 = 0xffffffff;
            }
            return (long *)(ulong)uVar14;
          }
          if (lStack_178 == 0) {
            func_0x00f78af4();
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x15d0884);
            (*pcVar1)();
          }
          if (*(int *)(lStack_178 + 0x50) == 0) {
            iVar9 = 0x41;
            goto code_r0x015d083c;
          }
          uVar14 = uVar14 + 1;
        } while( true );
      }
    }
  }
  lVar10 = func_0x00f78af4();
  uVar6 = 0x3eb5000;
  if ((bRam0000000003eb51cc & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d57120);
    func_0x00f78a20(0x3d57128);
    bRam0000000003eb51cc = 1;
  }
  if (*(long *)(lVar10 + 200) != 0) {
    /*Core.StateManagement.StateMachine$$DeInit*/ func_0x02b954d8(*(long *)(lVar10 + 200),0);
  }
  if (*(long *)(lVar10 + 0x88) != 0) {
    /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(lVar10 + 0x88),3,0);
  }
  if (((*(long *)(lVar10 + 0xd0) == 0) ||
      (lVar15 = *(long *)(*(long *)(lVar10 + 0xd0) + 0x20), lVar15 == 0)) ||
     (unaff_x22 = *(long *)(lVar15 + 0x10), unaff_x22 == 0)) {
code_r0x0159f924:
    func_0x00f78af4();
  }
  else {
    unaff_x23 = 0x3d1b4e8;
    unaff_x24 = (undefined1 *)0x3d57000;
    uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
    unaff_x21 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(unaff_x21,lVar10,uRam0000000003d57120,uRam0000000003d2a1d8);
    plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,unaff_x21,0);
    if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      *(long **)(unaff_x22 + 0x20) = plVar4;
      if ((*(long *)(lVar10 + 0xd0) == 0) ||
         ((lVar15 = *(long *)(*(long *)(lVar10 + 0xd0) + 0x20), lVar15 == 0 ||
          (unaff_x22 = *(long *)(lVar15 + 0x10), unaff_x23 = 0x3d1b4e8, unaff_x22 == 0))))
      goto code_r0x0159f924;
      unaff_x23 = 0x3d1b3b0;
      unaff_x24 = (undefined1 *)0x3d57000;
      uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
      unaff_x21 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,lVar10,uRam0000000003d57128,uRam0000000003d29f28);
      plVar4 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar6,unaff_x21,0);
      if ((plVar4 == (long *)0x0) || (*plVar4 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
        *(long **)(unaff_x22 + 0x68) = plVar4;
        *(undefined1 *)(lVar10 + 0x80) = 0;
        *(undefined8 *)(lVar10 + 0xc0) = 0;
        *(undefined8 *)(lVar10 + 200) = 0;
        *(undefined8 *)(lVar10 + 0xd8) = 0;
        *(undefined8 *)(lVar10 + 0xe0) = 0;
        return plVar4;
      }
    }
  }
  lVar15 = func_0x00f78e5c();
  uStack_90 = uVar6;
  lStack_88 = lVar10;
  if ((bRam0000000003eb51ce & 1) == 0) {
    func_0x00f78a20(0x3d5d9d0);
    bRam0000000003eb51ce = 1;
  }
  lVar10 = lRam0000000003d5d9d0;
  lVar15 = *(long *)(lVar15 + 200);
  if (lVar15 == 0) {
    plVar4 = (long *)func_0x00f78af4();
    return plVar4;
  }
  lVar5 = 0;
  puStack_b0 = unaff_x24;
  pcStack_a8 = (code *)unaff_x23;
  lStack_a0 = unaff_x22;
  uStack_98 = unaff_x21;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar6 = **(undefined8 **)(lVar10 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar6,0);
  if (lVar15 != 0) {
    lStack_c0 = 0;
    puStack_b8 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar15,uVar7,&lStack_c0,0,0);
    lVar10 = lStack_c0;
    if (lStack_c0 != 0) {
      if (*(long *)(lVar15 + 0x18) != 0) {
        /*Core.StateManagement.State$$Exit*/ func_0x02b95144();
      }
      *(long *)(lVar15 + 0x18) = lVar10;
      *(undefined8 *)(lVar15 + 0x20) = uVar7;
      *(undefined8 *)(lVar10 + 0x70) = 0;
      /*Core.StateManagement.State$$Enter*/ func_0x02b94f28();
    }
    return (long *)(ulong)(lVar10 != 0);
  }
  auVar25 = func_0x00f78af4();
  plVar4 = auVar25._8_8_;
  lVar10 = auVar25._0_8_;
  uStack_f0 = 0x3eb6000;
  uStack_e8 = 0x3d25458;
  uStack_d0 = 0;
  auStack_c8 = (undefined1  [8])0x0;
  puStack_b8 = &System_String__Join_object_;
  uStack_e0 = uVar6;
  lStack_d8 = lVar15;
  lStack_c0 = (long)&stack0xffffffffffffff80;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar4 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar6 = func_0x00f78aec();
    uVar7 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar6,uVar7,0);
    uVar7 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar6,uVar7);
  }
  else {
    if (lVar10 == 0) {
      lVar10 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar15 = **(long **)(lVar5 + 0x30);
    if ((*(ushort *)(lVar15 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar15);
    }
    lVar11 = *plVar4;
    uVar3 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar3 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar15) {
          puVar2 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar13 = piVar13 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)func_0x00fac1f0(plVar4,lVar15,0);
code_r0x018e1828:
    plVar4 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
    if (plVar4 != (long *)0x0) {
      lVar15 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar3 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar2 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar13 = piVar13 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar3 = (*(code *)*puVar2)(plVar4,puVar2[1]);
      if ((uVar3 & 1) == 0) {
        plVar8 = (long *)**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar4 != (long *)0x0) {
          lVar10 = *plVar4;
          uVar3 = (ulong)*(ushort *)(lVar10 + 0x12a);
          if (uVar3 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar2 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar13 = piVar13 + 4;
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar2)(plVar4,puVar2[1]);
        }
        return plVar8;
      }
      lVar15 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar11 = *(long *)(*(long *)(lVar5 + 0x30) + 8);
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      lVar12 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar3 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar11) {
            puVar2 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar13 = piVar13 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(plVar4,lVar11,0);
code_r0x018e1934:
      lVar11 = (*(code *)*puVar2)(plVar4,puVar2[1]);
      if (lVar11 != 0) {
        lVar11 = *(long *)(*(long *)(lVar5 + 0x30) + 8);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar12 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar3 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar11) {
              puVar2 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar13 = piVar13 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)func_0x00fac1f0(plVar4,lVar11,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar11 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar11 != 0) {
          if (lVar15 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar15,lVar11,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar11 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar3 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar2 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar13 = piVar13 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)func_0x00fac1f0(plVar4,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar3 = (*(code *)*puVar2)(plVar4,puVar2[1]);
        if ((uVar3 & 1) == 0) {
          plVar8 = (long *)/*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar15,0);
          goto joined_r0x018e1920;
        }
        if (lVar15 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar15,lVar10,0);
        lVar11 = *(long *)(*(long *)(lVar5 + 0x30) + 8);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar12 = *plVar4;
        uVar3 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar3 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar11) {
              puVar2 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar13 = piVar13 + 4;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined8 *)func_0x00fac1f0(plVar4,lVar11,0);
code_r0x018e1ab0:
        lVar11 = (*(code *)*puVar2)(plVar4,puVar2[1]);
      } while (lVar11 == 0);
      lVar11 = *(long *)(*(long *)(lVar5 + 0x30) + 8);
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      lVar12 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar3 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar11) {
            puVar2 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar13 = piVar13 + 4;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)func_0x00fac1f0(plVar4,lVar11,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar2)(plVar4,puVar2[1]);
      if (plVar8 != (long *)0x0) {
        lVar11 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar11 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar15,lVar11,0);
        }
        goto code_r0x018e19dc;
      }
      func_0x00f78af4();
      goto code_r0x018e1c64;
    }
  }
  func_0x00f78af4();
code_r0x018e1c64:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x18e1c68);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x159f774 | Atlas.Contexts.GameContextBaseOutroState.OnDeInit
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02b9561c) */
/* WARNING: Removing unreachable block (ram,0x02b95628) */
/* WARNING: Removing unreachable block (ram,0x02b95640) */
/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

long * Atlas_Contexts_GameContextBaseOutroState__OnDeInit(long param_1)

{
  undefined1 **ppuVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar14;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 auVar15 [16];
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  uVar13 = 0x3eb5000;
  if ((bRam0000000003eb51cc & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d57120);
    func_0x00f78a20(0x3d57128);
    bRam0000000003eb51cc = 1;
  }
  if (*(long *)(param_1 + 200) != 0) {
    /*Core.StateManagement.StateMachine$$DeInit*/ func_0x02b954d8(*(long *)(param_1 + 200),0);
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(param_1 + 0x88),3,0);
  }
  if (((*(long *)(param_1 + 0xd0) == 0) ||
      (lVar8 = *(long *)(*(long *)(param_1 + 0xd0) + 0x20), lVar8 == 0)) ||
     (unaff_x22 = *(long *)(lVar8 + 0x10), unaff_x22 == 0)) {
LAB_0159f924:
    func_0x00f78af4();
  }
  else {
    unaff_x23 = 0x3d1b4e8;
    unaff_x24 = 0x3d57000;
    uVar13 = *(undefined8 *)(unaff_x22 + 0x20);
    unaff_x21 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(unaff_x21,param_1,uRam0000000003d57120,uRam0000000003d2a1d8);
    plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar13,unaff_x21,0);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      *(long **)(unaff_x22 + 0x20) = plVar3;
      if ((*(long *)(param_1 + 0xd0) == 0) ||
         ((lVar8 = *(long *)(*(long *)(param_1 + 0xd0) + 0x20), lVar8 == 0 ||
          (unaff_x22 = *(long *)(lVar8 + 0x10), unaff_x23 = 0x3d1b4e8, unaff_x22 == 0))))
      goto LAB_0159f924;
      unaff_x23 = 0x3d1b3b0;
      unaff_x24 = 0x3d57000;
      uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
      unaff_x21 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(unaff_x21,param_1,uRam0000000003d57128,uRam0000000003d29f28);
      plVar3 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar13,unaff_x21,0);
      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
        *(long **)(unaff_x22 + 0x68) = plVar3;
        *(undefined1 *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0xc0) = 0;
        *(undefined8 *)(param_1 + 200) = 0;
        *(undefined8 *)(param_1 + 0xd8) = 0;
        *(undefined8 *)(param_1 + 0xe0) = 0;
        return plVar3;
      }
    }
  }
  lVar8 = func_0x00f78e5c();
  puStack_58 = &Atlas_Contexts_GameContextBaseOutroState__TransitionToShowPlacementState;
  uStack_70 = uVar13;
  lStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb51ce & 1) == 0) {
    func_0x00f78a20(0x3d5d9d0);
    bRam0000000003eb51ce = 1;
  }
  lVar14 = lRam0000000003d5d9d0;
  lVar8 = *(long *)(lVar8 + 200);
  if (lVar8 == 0) {
    plVar3 = (long *)func_0x00f78af4();
    return plVar3;
  }
  lVar7 = 0;
  uStack_90 = unaff_x24;
  uStack_88 = unaff_x23;
  lStack_80 = unaff_x22;
  uStack_78 = unaff_x21;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar13 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar13 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (lVar8 != 0) {
    ppuStack_a0 = (undefined1 **)0x0;
    puStack_98 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar8,uVar13,&ppuStack_a0,0,0);
    ppuVar1 = ppuStack_a0;
    if (ppuStack_a0 != (undefined1 **)0x0) {
      if (*(long *)(lVar8 + 0x18) != 0) {
        /*Core.StateManagement.State$$Exit*/ func_0x02b95144();
      }
      *(undefined1 ***)(lVar8 + 0x18) = ppuVar1;
      *(undefined8 *)(lVar8 + 0x20) = uVar13;
      ppuVar1[0xe] = (undefined1 *)0x0;
      /*Core.StateManagement.State$$Enter*/ func_0x02b94f28();
    }
    return (long *)(ulong)(ppuVar1 != (undefined1 **)0x0);
  }
  auVar15 = func_0x00f78af4();
  plVar3 = auVar15._8_8_;
  lVar8 = auVar15._0_8_;
  puStack_98 = &System_String__Join_object_;
  ppuStack_a0 = &puStack_60;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar3 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar13 = func_0x00f78aec();
    uVar6 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar13,uVar6,0);
    uVar6 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar13,uVar6);
  }
  else {
    if (lVar8 == 0) {
      lVar8 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar14 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar14 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar14);
    }
    lVar9 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar14) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar12 = piVar12 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,lVar14,0);
code_r0x018e1828:
    plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar3 != (long *)0x0) {
      lVar14 = *plVar3;
      uVar11 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar4 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar12 = piVar12 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar11 & 1) == 0) {
        plVar5 = (long *)**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar3 != (long *)0x0) {
          lVar8 = *plVar3;
          uVar11 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar4)(plVar3,puVar4[1]);
        }
        return plVar5;
      }
      lVar14 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar9 = *(long *)(*(long *)(lVar7 + 0x30) + 8);
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      lVar10 = *plVar3;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar12 = piVar12 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,lVar9,0);
code_r0x018e1934:
      lVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (lVar9 != 0) {
        lVar9 = *(long *)(*(long *)(lVar7 + 0x30) + 8);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar10 = *plVar3;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,lVar9,0);
code_r0x018e19a8:
        plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
        if (plVar5 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar9 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        if (lVar9 != 0) {
          if (lVar14 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar14,lVar9,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar9 = *plVar3;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if ((uVar11 & 1) == 0) {
          plVar5 = (long *)/*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar14,0);
          goto joined_r0x018e1920;
        }
        if (lVar14 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar14,lVar8,0);
        lVar9 = *(long *)(*(long *)(lVar7 + 0x30) + 8);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar10 = *plVar3;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,lVar9,0);
code_r0x018e1ab0:
        lVar9 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      } while (lVar9 == 0);
      lVar9 = *(long *)(*(long *)(lVar7 + 0x30) + 8);
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      lVar10 = *plVar3;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar12 = piVar12 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar3,lVar9,0);
code_r0x018e1b24:
      plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar5 != (long *)0x0) {
        lVar9 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        if (lVar9 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar14,lVar9,0);
        }
        goto code_r0x018e19dc;
      }
      func_0x00f78af4();
      goto code_r0x018e1c64;
    }
  }
  func_0x00f78af4();
code_r0x018e1c64:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x18e1c68);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x159f92c | Atlas.Contexts.GameContextBaseOutroState.TransitionToShowPlacementState
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02b9561c) */
/* WARNING: Removing unreachable block (ram,0x02b95628) */
/* WARNING: Removing unreachable block (ram,0x02b95640) */
/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_Contexts_GameContextBaseOutroState__TransitionToShowPlacementState(long param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb51ce & 1) == 0) {
    func_0x00f78a20(0x3d5d9d0);
    bRam0000000003eb51ce = 1;
  }
  lVar14 = lRam0000000003d5d9d0;
  lVar3 = *(long *)(param_1 + 200);
  if (lVar3 == 0) {
    uVar11 = func_0x00f78af4();
    return uVar11;
  }
  lVar8 = 0;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar15 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar15,0);
  if (lVar3 != 0) {
    puStack_50 = (undefined1 *)0x0;
    puStack_48 = (undefined *)0x0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar3,uVar15,&puStack_50,0,0);
    puVar1 = puStack_50;
    if (puStack_50 != (undefined1 *)0x0) {
      if (*(long *)(lVar3 + 0x18) != 0) {
        /*Core.StateManagement.State$$Exit*/ func_0x02b95144();
      }
      *(undefined1 **)(lVar3 + 0x18) = puVar1;
      *(undefined8 *)(lVar3 + 0x20) = uVar15;
      *(undefined8 *)(puVar1 + 0x70) = 0;
      /*Core.StateManagement.State$$Enter*/ func_0x02b94f28();
    }
    return (ulong)(puVar1 != (undefined1 *)0x0);
  }
  auVar16 = func_0x00f78af4();
  plVar5 = auVar16._8_8_;
  lVar14 = auVar16._0_8_;
  puStack_48 = &System_String__Join_object_;
  puStack_50 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar5 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar15 = func_0x00f78aec();
    uVar7 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar15,uVar7,0);
    uVar7 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar15,uVar7);
  }
  else {
    if (lVar14 == 0) {
      lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar3 = **(long **)(lVar8 + 0x30);
    if ((*(ushort *)(lVar3 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar3);
    }
    lVar9 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar13 = piVar13 + 4;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar3,0);
code_r0x018e1828:
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    if (plVar5 != (long *)0x0) {
      lVar3 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar11 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar11 & 1) == 0) {
        uVar11 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar5 != (long *)0x0) {
          lVar14 = *plVar5;
          uVar12 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar4 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar4)(plVar5,puVar4[1]);
        }
        return uVar11;
      }
      lVar3 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar9 = *(long *)(*(long *)(lVar8 + 0x30) + 8);
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      lVar10 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar9) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar9,0);
code_r0x018e1934:
      lVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if (lVar9 != 0) {
        lVar9 = *(long *)(*(long *)(lVar8 + 0x30) + 8);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar9) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar9,0);
code_r0x018e19a8:
        plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
        if (plVar6 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        if (lVar9 != 0) {
          if (lVar3 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar3,lVar9,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar9 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar11 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        if ((uVar11 & 1) == 0) {
          uVar11 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar3,0);
          goto joined_r0x018e1920;
        }
        if (lVar3 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar3,lVar14,0);
        lVar9 = *(long *)(*(long *)(lVar8 + 0x30) + 8);
        if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar9);
        }
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar9) {
              puVar4 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar9,0);
code_r0x018e1ab0:
        lVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      } while (lVar9 == 0);
      lVar9 = *(long *)(*(long *)(lVar8 + 0x30) + 8);
      if ((*(ushort *)(lVar9 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar9);
      }
      lVar10 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar9) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar9,0);
code_r0x018e1b24:
      plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      if (plVar6 != (long *)0x0) {
        lVar9 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        if (lVar9 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar3,lVar9,0);
        }
        goto code_r0x018e19dc;
      }
      func_0x00f78af4();
      goto code_r0x018e1c64;
    }
  }
  func_0x00f78af4();
code_r0x018e1c64:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x18e1c68);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x159f988 | Atlas.Contexts.GameContextBaseOutroState..ctor
// ============================================================

void Atlas_Contexts_GameContextBaseOutroState___ctor(void)

{
  return;
}



