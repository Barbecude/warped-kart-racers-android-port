// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.GameContextBaseIntroState

// ============================================================
// RVA: 0x159bbf4 | Atlas.Contexts.GameContextBaseIntroState.Init
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

long * Atlas_Contexts_GameContextBaseIntroState__Init
                 (long param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  lVar6 = param_3;
  lVar7 = param_4;
  if ((bRam0000000003eb51c3 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d57100);
    func_0x00f78a20(0x3d57108);
    func_0x00f78a20(0x3d57110);
    func_0x00f78a20(0x3d57118);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d5d930);
    func_0x00f78a20(0x3d5d938);
    func_0x00f78a20(0x3d5d940);
    func_0x00f78a20(0x3d5d948);
    func_0x00f78a20(0x3d5d950);
    func_0x00f78a20(0x3d24d40);
    bRam0000000003eb51c3 = 1;
  }
  *(long *)(param_1 + 0x78) = param_2;
  if (param_4 != 0) {
    uVar2 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_4,uRam0000000003d550b8);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    if (((param_2 != 0) && (*(long *)(param_2 + 0x140) != 0)) &&
       (lVar8 = *(long *)(*(long *)(param_2 + 0x140) + 0x10), lVar8 != 0)) {
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar8 + 0x30);
      lVar8 = func_0x00f78aec(/*Core.StateManagement.StateMachine_TypeInfo*/ uRam0000000003d24d40);
      /*Core.StateManagement.StateMachine$$.ctor*/ func_0x02b9585c(lVar8,0);
      *(long *)(param_1 + 0x90) = lVar8;
      if (lVar8 != 0) {
        lVar6 = 0;
        /*Core.StateManagement.StateMachine$$Init*/ func_0x02b95450(lVar8,2);
        if (*(long *)(param_1 + 0x90) != 0) {
          lVar6 = lRam0000000003d5d940;
          /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(param_1 + 0x90),(long *)(param_1 + 0x98));
          if (*(long *)(param_1 + 0x90) != 0) {
            lVar6 = lRam0000000003d5d948;
            /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(param_1 + 0x90),param_1 + 0xa0);
            if (*(long *)(param_1 + 0x90) != 0) {
              lVar6 = lRam0000000003d5d950;
              /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(param_1 + 0x90),(long *)(param_1 + 0xa8));
              if (*(long *)(param_1 + 0x90) != 0) {
                lVar6 = lRam0000000003d5d930;
                /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(param_1 + 0x90),param_1 + 0xb0);
                if (*(long *)(param_1 + 0x90) != 0) {
                  lVar6 = lRam0000000003d5d938;
                  /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(param_1 + 0x90),(long *)(param_1 + 0xb8));
                  lVar8 = *(long *)(param_1 + 0x98);
                  if (lVar8 != 0) {
                    /*Atlas.Contexts.IntroSequenceMapPanState$$Init*/ func_0x015b9044(lVar8,*(undefined8 *)(param_1 + 0x78),param_4,0);
                    lVar8 = *(long *)(param_1 + 0x98);
                    uVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                    lVar7 = 0;
                    lVar6 = lRam0000000003d57110;
                    /*System.Action$$.ctor*/ func_0x02924c80(uVar2,param_1);
                    if (lVar8 != 0) {
                      lVar6 = 0;
                      /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar8,uVar2);
                      lVar8 = *(long *)(param_1 + 0x78);
                      if (((lVar8 != 0) && (*(long *)(lVar8 + 0x130) != 0)) &&
                         (lVar3 = *(long *)(*(long *)(lVar8 + 0x130) + 0x48), lVar3 != 0)) {
                        lVar9 = *(long *)(param_1 + 0xa0);
                        uVar2 = *(undefined8 *)(lVar8 + 0x140);
                        lVar8 = Atlas_Gameplay_Kart_KartComposite__get_KartPhysicsRootObject
                                          (lVar3,0);
                        if (lVar8 != 0) {
                          uVar4 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar8,0);
                          if ((*(long *)(param_1 + 0x78) != 0) && (lVar9 != 0)) {
                            param_5 = *(long *)(*(long *)(param_1 + 0x78) + 0x208);
                            /*Atlas.Contexts.IntroSequencePlayerPanState$$Init*/ func_0x015b9828(lVar9,uVar2,uVar4,param_4,param_5,0);
                            lVar8 = *(long *)(param_1 + 0xa0);
                            uVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                            lVar7 = 0;
                            lVar6 = lRam0000000003d57118;
                            /*System.Action$$.ctor*/ func_0x02924c80(uVar2,param_1);
                            if (lVar8 != 0) {
                              lVar6 = 0;
                              /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar8,uVar2);
                              lVar8 = *(long *)(param_1 + 0xa8);
                              if (lVar8 != 0) {
                                /*Atlas.Contexts.IntroSequenceWaitingState$$Init*/ func_0x015b9b84(lVar8,param_4,0);
                                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                                  func_0x00f78ad0();
                                }
                                lVar6 = 0;
                                iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_3,0);
                                if (iVar1 == 0) {
LAB_0159bf40:
                                  lVar8 = *(long *)(param_1 + 0xa8);
                                  uVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                  lVar6 = lRam0000000003d57100;
                                }
                                else {
                                  if (param_3 == 0) goto LAB_0159c014;
                                  if (*(char *)(param_3 + 0x11c) == '\0') goto LAB_0159bf40;
                                  lVar8 = *(long *)(param_1 + 0xa8);
                                  uVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                  lVar6 = lRam0000000003d57108;
                                }
                                lVar7 = 0;
                                /*System.Action$$.ctor*/ func_0x02924c80(uVar2,param_1);
                                if (lVar8 != 0) {
                                  lVar6 = 0;
                                  /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar8,uVar2);
                                  lVar8 = *(long *)(param_1 + 0x78);
                                  if ((((lVar8 != 0) && (*(long *)(lVar8 + 0x140) != 0)) &&
                                      (lVar3 = *(long *)(*(long *)(lVar8 + 0x140) + 0x10),
                                      lVar3 != 0)) && (*(long *)(param_1 + 0xb0) != 0)) {
                                    param_5 = 0;
                                    /*Atlas.Contexts.IntroSequenceCountdownState$$Init*/ func_0x015b8a2c((char)*(undefined4 *)(lVar3 + 0x50),
                                                    *(long *)(param_1 + 0xb0),param_4,
                                                    *(undefined8 *)(lVar8 + 0x130),
                                                    *(undefined8 *)(lVar8 + 0x208));
                                    lVar8 = *(long *)(param_1 + 0xb0);
                                    uVar2 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                    lVar7 = 0;
                                    lVar6 = lRam0000000003d57108;
                                    /*System.Action$$.ctor*/ func_0x02924c80(uVar2,param_1);
                                    if (lVar8 != 0) {
                                      lVar6 = 0;
                                      /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar8,uVar2);
                                      lVar8 = *(long *)(param_1 + 0xb8);
                                      if (lVar8 != 0) {
                                        if ((bRam0000000003eb52a5 & 1) == 0) {
                                          func_0x00f78a20(0x3d55148,param_4,0);
                                          bRam0000000003eb52a5 = 1;
                                        }
                                        if (param_4 != 0) {
                                          plVar5 = (long *)/*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_4,
                                                  uRam0000000003d55148);
                                          *(long **)(lVar8 + 0x78) = plVar5;
                                          return plVar5;
                                        }
                                        plVar5 = (long *)func_0x00f78af4();
                                        return plVar5;
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
LAB_0159c014:
  auVar10 = func_0x00f78af4();
  lVar9 = auVar10._0_8_;
  lVar8 = lVar6;
  lVar3 = lVar7;
  if ((bRam0000000003eb51c1 & 1) == 0) {
    func_0x00f78a20(0x3d550b0);
    func_0x00f78a20(0x3d550b8);
    func_0x00f78a20(0x3d55148);
    func_0x00f78a20(0x3d55168);
    bRam0000000003eb51c1 = 1;
  }
  *(long *)(lVar9 + 0x80) = auVar10._8_8_;
  *(long *)(lVar9 + 0xa0) = lVar6;
  if (lVar7 != 0) {
    uVar2 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar7,uRam0000000003d550b8);
    *(undefined8 *)(lVar9 + 0x78) = uVar2;
    uVar2 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar7,uRam0000000003d55148);
    *(undefined8 *)(lVar9 + 0x88) = uVar2;
    uVar2 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar7,uRam0000000003d55168);
    *(undefined8 *)(lVar9 + 0x90) = uVar2;
    plVar5 = (long *)/*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(lVar7,uRam0000000003d550b0);
    *(long **)(lVar9 + 0x98) = plVar5;
    return plVar5;
  }
  auVar10 = func_0x00f78af4();
  uVar2 = auVar10._8_8_;
  lVar6 = auVar10._0_8_;
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
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d550b8);
    *(undefined8 *)(lVar6 + 0x88) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55148);
    *(undefined8 *)(lVar6 + 0x90) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55088);
    *(undefined8 *)(lVar6 + 0x98) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d550b0);
    *(undefined8 *)(lVar6 + 0xa0) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55150);
    *(undefined8 *)(lVar6 + 0xd0) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55188);
    *(undefined8 *)(lVar6 + 0xa8) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55068);
    *(undefined8 *)(lVar6 + 0xb0) = uVar4;
    uVar4 = /*Core.Application.DependencyManager$$GetDependency<VotingManager>*/ func_0x01842e30(param_5,uRam0000000003d55090);
    *(undefined8 *)(lVar6 + 0x78) = uVar2;
    *(undefined8 *)(lVar6 + 0xb8) = uVar4;
    *(long *)(lVar6 + 0xc0) = lVar8;
    lVar7 = func_0x00f78aec(/*Core.StateManagement.StateMachine_TypeInfo*/ uRam0000000003d24d40);
    /*Core.StateManagement.StateMachine$$.ctor*/ func_0x02b9585c(lVar7,0);
    *(long *)(lVar6 + 200) = lVar7;
    if (lVar7 != 0) {
      /*Core.StateManagement.StateMachine$$Init*/ func_0x02b95450(lVar7,2,0);
      if (*(long *)(lVar6 + 200) != 0) {
        /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar6 + 200),(long *)(lVar6 + 0xd8),uRam0000000003d5d958);
        if (*(long *)(lVar6 + 200) != 0) {
          /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar6 + 200),lVar6 + 0xe0,uRam0000000003d5d968);
          if (*(long *)(lVar6 + 200) != 0) {
            /*Core.StateManagement.StateMachine$$TryAddState<VotingState>*/ func_0x018e147c(*(long *)(lVar6 + 200),(long *)(lVar6 + 0xe8),uRam0000000003d5d960);
            lVar7 = *(long *)(lVar6 + 0xd8);
            if (lVar7 != 0) {
              /*Atlas.Contexts.OutroSequenceBeginRoundCompleteState$$Init*/ func_0x014b48cc(lVar7,uVar2,lVar3,0);
              lVar7 = *(long *)(lVar6 + 0xd8);
              uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(uVar4,lVar6,uRam0000000003d57130,0);
              if (lVar7 != 0) {
                /*Core.StateManagement.State$$add_NotifyStateComplete*/ func_0x02b94de8(lVar7,uVar4,0);
                if ((*(long *)(lVar6 + 0xd0) != 0) && (*(long *)(lVar6 + 0xe0) != 0)) {
                  /*Atlas.Contexts.OutroSequenceShowPlacementsState$$Init*/ func_0x014b5468(*(long *)(lVar6 + 0xe0),uVar2,
                                  *(undefined1 *)(*(long *)(lVar6 + 0xd0) + 0x50),0);
                  lVar7 = *(long *)(lVar6 + 0xe8);
                  if (lVar7 != 0) {
                    /*Atlas.Contexts.OutroSequenceEndGameState$$Init*/ func_0x014b4ba8(lVar7,param_5,uVar2,0);
                    if (((*(long *)(lVar6 + 0xd0) != 0) &&
                        (lVar7 = *(long *)(*(long *)(lVar6 + 0xd0) + 0x20), lVar7 != 0)) &&
                       (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)) {
                      uVar4 = *(undefined8 *)(lVar7 + 0x20);
                      uVar2 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
                      /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(uVar2,lVar6,uRam0000000003d57120,uRam0000000003d2a1d8);
                      plVar5 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,uVar2,0);
                      if ((plVar5 != (long *)0x0) && (*plVar5 != /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8))
                      goto code_r0x0159c53c;
                      *(long **)(lVar7 + 0x20) = plVar5;
                      if ((*(long *)(lVar6 + 0xd0) != 0) &&
                         ((lVar7 = *(long *)(*(long *)(lVar6 + 0xd0) + 0x20), lVar7 != 0 &&
                          (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)))) {
                        uVar4 = *(undefined8 *)(lVar7 + 0x68);
                        uVar2 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
                        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,lVar6,uRam0000000003d57128,uRam0000000003d29f28);
                        plVar5 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,uVar2,0);
                        if ((plVar5 == (long *)0x0) || (*plVar5 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
                          *(long **)(lVar7 + 0x68) = plVar5;
                          return plVar5;
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
  lVar6 = func_0x00f78e5c();
  lVar7 = *(long *)(lVar6 + 0x20);
  if (lVar7 != 0) {
    plVar5 = (long *)/*Core.StateManagement.StateMachine$$DeInit*/ func_0x02b954d8(lVar7,0);
    *(undefined8 *)(lVar6 + 0x28) = 0;
    *(long *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x38) = 0;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    return plVar5;
  }
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb51b4 & 1) == 0) {
    func_0x00f78a20(0x3d276d0);
    bRam0000000003eb51b4 = 1;
  }
  plVar5 = (long *)func_0x00f78aec(/*Atlas.Contexts.GameContextBase.<InitPools>d__164_TypeInfo*/ uRam0000000003d276d0);
  Atlas_Contexts_GameContextBase__InitPools_d__164___ctor(plVar5,0,0);
  if (plVar5 != (long *)0x0) {
    plVar5[4] = lVar6;
    return plVar5;
  }
  lVar6 = func_0x00f78af4();
  if ((bRam0000000003eb51b5 & 1) == 0) {
    func_0x00f78a20(0x3d5b978);
    bRam0000000003eb51b5 = 1;
  }
  if (*(long *)(lVar6 + 0x98) != 0) {
    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar6 + 0x98),uRam0000000003d5b978);
    lVar6 = *(long *)(lVar6 + 0xb0);
    if (lVar6 != 0) {
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
                (lVar6,uRam0000000003d5fed8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar6,uRam0000000003d5fed0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar6,uRam0000000003d5fec8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar6,uRam0000000003d5fec0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar6,uRam0000000003d5feb0);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar6,uRam0000000003d5feb8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar6,uRam0000000003d5fee8);
      Atlas_Gameplay_Usables_UsableManager__DeInitLightMembers_BoostUsableBehaviour_
                (lVar6,uRam0000000003d5fee0);
      *(undefined8 *)(lVar6 + 0x50) = 0;
      *(undefined8 *)(lVar6 + 0x58) = 0;
      if (*(long *)(lVar6 + 0x10) != 0) {
        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar6 + 0x10),uRam0000000003d5ba70);
        if (*(long *)(lVar6 + 0x10) != 0) {
          /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar6 + 0x10),uRam0000000003d5ba68);
          if (*(long *)(lVar6 + 0x10) != 0) {
            /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar6 + 0x10),uRam0000000003d5ba60);
            if (*(long *)(lVar6 + 0x10) != 0) {
              /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar6 + 0x10),uRam0000000003d5ba58);
              if (*(long *)(lVar6 + 0x10) != 0) {
                /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar6 + 0x10),uRam0000000003d5ba48);
                if (*(long *)(lVar6 + 0x10) != 0) {
                  /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar6 + 0x10),uRam0000000003d5ba50);
                  if (*(long *)(lVar6 + 0x10) != 0) {
                    /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar6 + 0x10),uRam0000000003d5ba80);
                    if (*(long *)(lVar6 + 0x10) != 0) {
                      /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar6 + 0x10),uRam0000000003d5ba78);
                      if (*(long *)(lVar6 + 0x18) != 0) {
                        /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar6 + 0x18),uRam0000000003d5b988);
                        if (*(long *)(lVar6 + 0x18) != 0) {
                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar6 + 0x18),uRam0000000003d5b980);
                          if (*(long *)(lVar6 + 0x18) != 0) {
                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar6 + 0x18),uRam0000000003d5b970);
                            if (*(long *)(lVar6 + 0x18) != 0) {
                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar6 + 0x18),uRam0000000003d5b968);
                              if (*(long *)(lVar6 + 0x18) != 0) {
                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar6 + 0x18),uRam0000000003d5b958);
                                if (*(long *)(lVar6 + 0x18) != 0) {
                                  /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar6 + 0x18),uRam0000000003d5b960);
                                  if (*(long *)(lVar6 + 0x18) != 0) {
                                    /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar6 + 0x18),uRam0000000003d5b998);
                                    if (*(long *)(lVar6 + 0x18) != 0) {
                                      /*Core.Containers.PoolManager$$DeInitAndRemovePool<SuperShieldUsableBehaviour>*/ func_0x018bc564(*(long *)(lVar6 + 0x18),uRam0000000003d5b990);
                                      if (*(long *)(lVar6 + 0x10) != 0) {
                                        /*Core.Actors.PooledActorManager$$DeInitAndRemovePool<SuperShieldUsable>*/ func_0x018bd53c(*(long *)(lVar6 + 0x10),uRam0000000003d5ba40
                                                       );
                                        if (*(long *)(lVar6 + 0x18) != 0) {
                                          /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar6 + 0x18),
                                                          /*STR('RicochetHitVFX')*/ uRam0000000003d71fa8,uRam0000000003d5b9a0)
                                          ;
                                          if (*(long *)(lVar6 + 0x18) != 0) {
                                            /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar6 + 0x18),
                                                            /*STR('SheldonHitVFX')*/ uRam0000000003d72880,
                                                            uRam0000000003d5b9a0);
                                            if (*(long *)(lVar6 + 0x18) != 0) {
                                              /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar6 + 0x18),
                                                              /*STR('GoldenTurdHitVFX')*/ uRam0000000003d6d498,
                                                              uRam0000000003d5b9a0);
                                              if (*(long *)(lVar6 + 0x18) != 0) {
                                                /*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar6 + 0x18),
                                                                /*STR('ShieldHitVFX')*/ uRam0000000003d728b8,
                                                                uRam0000000003d5b9a0);
                                                if (*(long *)(lVar6 + 0x18) != 0) {
                                                  plVar5 = (long *)/*Core.Containers.PoolManager$$DeInitAndRemovePool<VFXBehaviour>*/ func_0x018bc60c(*(long *)(lVar6 +
                                                                                            0x18),
                                                                                                                                                                      
                                                  /*STR('CulturePodExplosionVFX')*/ uRam0000000003d6b360,uRam0000000003d5b9a0);
                                                  *(undefined8 *)(lVar6 + 0x30) = 0;
                                                  return plVar5;
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
      lVar6 = func_0x00f78af4();
      plVar5 = (long *)Atlas_Gameplay_Usables_UsableManager__SpawnAndSetUpUsableInternal();
      if ((plVar5 != (long *)0x0) && (*(long *)(lVar6 + 0x60) != 0)) {
        Atlas_Gameplay_Usables_UsableManagerEvents_UsableSpawned__Invoke
                  (*(long *)(lVar6 + 0x60),plVar5,0);
      }
      return plVar5;
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
  plVar5 = (long *)func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerManager_TypeInfo*/ uRam0000000003d21b40);
  if ((bRam0000000003eb520d & 1) == 0) {
    func_0x00f78a20(0x3d35b00);
    func_0x00f78a20(0x3d1cd80);
    func_0x00f78a20(0x3d5b928);
    bRam0000000003eb520d = 1;
  }
  lVar6 = func_0x00f78aec(/*System.Func<PlayerRankingPair, PlayerRankingPair, bool>_TypeInfo*/ uRam0000000003d1cd80);
  /*System.Func<PlayerRankingPair, PlayerRankingPair, bool>$$.ctor*/ func_0x02185b00(lVar6,0,uRam0000000003d5b928,uRam0000000003d35b00);
  plVar5[9] = lVar6;
  return plVar5;
}



// ============================================================
// RVA: 0x159eac8 | Atlas.Contexts.GameContextBaseIntroState.get_GameContextBase
// ============================================================

undefined8 Atlas_Contexts_GameContextBaseIntroState__get_GameContextBase(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x159ead0 | Atlas.Contexts.GameContextBaseIntroState.get_CountDownState
// ============================================================

undefined8 Atlas_Contexts_GameContextBaseIntroState__get_CountDownState(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



// ============================================================
// RVA: 0x159ead8 | Atlas.Contexts.GameContextBaseIntroState.OnEnter
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02b9561c) */
/* WARNING: Removing unreachable block (ram,0x02b95628) */
/* WARNING: Removing unreachable block (ram,0x02b95640) */
/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_Contexts_GameContextBaseIntroState__OnEnter(long param_1)

{
  ushort uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar17;
  undefined8 unaff_x23;
  long lVar18;
  undefined8 unaff_x24;
  undefined1 *puVar19;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar20 [16];
  
  puVar3 = &stack0xffffffffffffffe0;
  puVar19 = &stack0xfffffffffffffff0;
  lVar18 = unaff_x19;
  if ((*(long *)(param_1 + 0x78) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0x78) + 0x130), lVar18 = param_1, lVar6 == 0)) {
LAB_0159eb48:
    unaff_x19 = lVar18;
    unaff_x30 = &Atlas_Contexts_GameContextBaseIntroState__TransitionToMapPan;
    param_1 = func_0x00f78af4();
  }
  else {
    Atlas_Gameplay_Kart_KartManager__FreezeAllKarts(lVar6,1,0);
    if ((*(long *)(param_1 + 0x78) == 0) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x78) + 0x130), lVar6 == 0)) goto LAB_0159eb48;
    Atlas_Gameplay_Kart_KartManager__SetActiveKartVisuals(lVar6,0,0);
    if (*(long *)(param_1 + 0x88) == 0) goto LAB_0159eb48;
    /*Atlas.Gameplay.VirtualCamera$$StartTracking*/ func_0x01528348(0xbf800000,*(long *)(param_1 + 0x88),0,0);
    puVar3 = (undefined1 *)register0x00000008;
    puVar19 = unaff_x29;
  }
  *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
  *(long *)(puVar3 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar3 + -0x10) = puVar19;
  *(undefined **)(puVar3 + -8) = unaff_x30;
  if ((bRam0000000003eb51c5 & 1) == 0) {
    func_0x00f78a20(0x3d5d9a8);
    bRam0000000003eb51c5 = 1;
  }
  lVar18 = lRam0000000003d5d9a8;
  lVar6 = *(long *)(param_1 + 0x90);
  if (lVar6 == 0) {
    auVar20 = func_0x00f78af4();
    lVar18 = auVar20._0_8_;
    *(undefined8 *)(puVar3 + -0x50) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x48) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x40) = 0x3eb5000;
    *(long *)(puVar3 + -0x38) = param_1;
    *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x28) = &Atlas_Contexts_GameContextBaseIntroState__OnUpdate;
    if ((bRam0000000003eb51c4 & 1) == 0) {
      func_0x00f78a20(0x3d5d8c0);
      bRam0000000003eb51c4 = 1;
    }
    if (*(long *)(lVar18 + 0x90) != 0) {
      lVar6 = /*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(*(long *)(lVar18 + 0x90),0);
      if (lVar6 == 0) {
        return 0;
      }
      if (*(long *)(lVar18 + 0x90) != 0) {
        /*Core.StateManagement.StateMachine$$Update*/ func_0x02b9521c(*(long *)(lVar18 + 0x90),auVar20._8_8_,0);
        if (*(long *)(lVar18 + 0x90) != 0) {
          uVar14 = /*Core.StateManagement.StateMachine$$IsActiveState<object>*/ func_0x018e1420(*(long *)(lVar18 + 0x90),uRam0000000003d5d8c0);
          if ((int)uVar14 == 0) {
            return uVar14;
          }
          uVar14 = *(ulong *)(lVar18 + 0x60);
          if (uVar14 == 0) {
            return 0;
          }
          uVar17 = 0;
          *(undefined8 *)(puVar3 + -0x70) = unaff_x26;
          *(undefined8 *)(puVar3 + -0x68) = unaff_x25;
          *(undefined8 *)(puVar3 + -0x60) = unaff_x24;
          *(undefined8 *)(puVar3 + -0x58) = unaff_x23;
          *(undefined8 *)(puVar3 + -0x50) = *(undefined8 *)(puVar3 + -0x50);
          *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(puVar3 + -0x48);
          *(undefined8 *)(puVar3 + -0x40) = *(undefined8 *)(puVar3 + -0x40);
          *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(puVar3 + -0x38);
          *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
          *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
          *(ulong *)(puVar3 + -0x78) = uVar14;
          lVar18 = *(long *)(uVar14 + 0x68);
          if (lVar18 == 0) {
            puVar19 = puVar3 + -0x78;
            lVar6 = 1;
          }
          else {
            lVar6 = *(long *)(lVar18 + 0x18);
            if (lVar6 == 0) {
              return uVar14;
            }
            puVar19 = (undefined1 *)(lVar18 + 0x20);
          }
          lVar18 = 0;
          do {
            lVar11 = *(long *)(puVar19 + lVar18 * 8);
            pcVar2 = *(code **)(lVar11 + 0x10);
            plVar9 = *(long **)(lVar11 + 0x20);
            lVar11 = *(long *)(lVar11 + 0x28);
            if (*(short *)(lVar11 + 0x48) == -1) {
              func_0x00f78ad8(lVar11,uVar17);
            }
            iVar4 = func_0x00f78a4c(lVar11);
            if (iVar4 == 0) {
              if ((((plVar9 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
                  ((*(byte *)(*plVar9 + 0x115) & 1) != 0)) || (*(long *)(uVar14 + 0x18) == 0))
              goto code_r0x02924d98;
              iVar4 = func_0x00f78a44(lVar11);
              iVar5 = func_0x00f78ec0(lVar11);
              if (iVar4 == 0) {
                uVar1 = *(ushort *)(lVar11 + 0x48);
                if (iVar5 == 0) {
                  lVar11 = *plVar9 + (ulong)uVar1 * 0x10;
                  auVar20 = (**(code **)(lVar11 + 0x138))(plVar9,*(undefined8 *)(lVar11 + 0x140));
                  goto code_r0x02924da4;
                }
                lVar11 = func_0x00f78a48(lVar11);
                lVar12 = *plVar9;
                uVar15 = (ulong)*(ushort *)(lVar12 + 0x12a);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar11) {
                      puVar8 = (undefined8 *)
                               (lVar12 + (long)(int)(*piVar16 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x02924e68;
                    }
                    piVar16 = piVar16 + 4;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,lVar11,(ulong)uVar1);
code_r0x02924e68:
                pcVar2 = (code *)*puVar8;
                puVar8 = (undefined8 *)puVar8[1];
              }
              else {
                if (iVar5 == 0) {
                  uVar17 = *(undefined8 *)
                            (*plVar9 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar12 = *plVar9;
                  uVar15 = (ulong)*(ushort *)(lVar12 + 0x12a);
                  if (uVar15 != 0) {
                    piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)(lVar11 + 0x18)) {
                        lVar12 = lVar12 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar11 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x02924e40;
                      }
                      piVar16 = piVar16 + 4;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                  lVar12 = func_0x00fac1f0(plVar9);
code_r0x02924e40:
                  uVar17 = *(undefined8 *)(lVar12 + 8);
                }
                puVar8 = (undefined8 *)func_0x00f78acc(uVar17,lVar11);
                pcVar2 = (code *)*puVar8;
              }
              auVar20 = (*pcVar2)(plVar9,puVar8);
            }
            else if (*(char *)(lVar11 + 0x4a) == '\0') {
              auVar20 = (*pcVar2)(lVar11);
            }
            else {
code_r0x02924d98:
              auVar20 = (*pcVar2)(plVar9,lVar11);
            }
code_r0x02924da4:
            uVar17 = auVar20._8_8_;
            lVar18 = lVar18 + 1;
            if (lVar18 == lVar6) {
              return auVar20._0_8_;
            }
          } while( true );
        }
      }
    }
    uVar14 = func_0x00f78af4();
    return uVar14;
  }
  lVar11 = 0;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
  *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
  *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
  *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar17 = **(undefined8 **)(lVar18 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar17,0);
  if (lVar6 != 0) {
    *(undefined8 *)(puVar3 + -0x40) = *(undefined8 *)(puVar3 + -0x40);
    *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(puVar3 + -0x38);
    *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
    *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
    *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
    *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
    *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
    *(undefined8 *)(puVar3 + -0x50) = 0;
    *(undefined8 *)(puVar3 + -0x48) = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar6,uVar7,puVar3 + -0x50,0,0);
    lVar18 = *(long *)(puVar3 + -0x50);
    if (lVar18 != 0) {
      if (*(long *)(lVar6 + 0x18) != 0) {
        /*Core.StateManagement.State$$Exit*/ func_0x02b95144();
      }
      *(long *)(lVar6 + 0x18) = lVar18;
      *(undefined8 *)(lVar6 + 0x20) = uVar7;
      *(undefined8 *)(lVar18 + 0x70) = 0;
      /*Core.StateManagement.State$$Enter*/ func_0x02b94f28();
    }
    return (ulong)(lVar18 != 0);
  }
  auVar20 = func_0x00f78af4();
  plVar9 = auVar20._8_8_;
  lVar18 = auVar20._0_8_;
  *(undefined8 *)(puVar3 + -0x80) = 0x3eb6000;
  *(undefined8 *)(puVar3 + -0x78) = 0x3d25458;
  *(undefined8 *)(puVar3 + -0x70) = uVar17;
  *(undefined8 *)(puVar3 + -0x68) = 0;
  *(undefined8 *)(puVar3 + -0x60) = 0;
  *(undefined8 *)(puVar3 + -0x58) = 0;
  *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x48) = &System_String__Join_object_;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar9 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar17 = func_0x00f78aec();
    uVar7 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar17,uVar7,0);
    uVar7 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar17,uVar7);
  }
  else {
    if (lVar18 == 0) {
      lVar18 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar6 = **(long **)(lVar11 + 0x30);
    if ((*(ushort *)(lVar6 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar6);
    }
    lVar12 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar16 = piVar16 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,lVar6,0);
code_r0x018e1828:
    plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar8 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar16 = piVar16 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar14 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if ((uVar14 & 1) == 0) {
        uVar14 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar9 != (long *)0x0) {
          lVar18 = *plVar9;
          uVar15 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar8 = (undefined8 *)(lVar18 + (long)*piVar16 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar8)(plVar9,puVar8[1]);
        }
        return uVar14;
      }
      lVar6 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar12 = *(long *)(*(long *)(lVar11 + 0x30) + 8);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      lVar13 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar12) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar16 = piVar16 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,lVar12,0);
code_r0x018e1934:
      lVar12 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if (lVar12 != 0) {
        lVar12 = *(long *)(*(long *)(lVar11 + 0x30) + 8);
        if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar12);
        }
        lVar13 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar12) {
              puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar16 = piVar16 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,lVar12,0);
code_r0x018e19a8:
        plVar10 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
        if (plVar10 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar12 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        if (lVar12 != 0) {
          if (lVar6 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar6,lVar12,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar12 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar16 = piVar16 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar14 = (*(code *)*puVar8)(plVar9,puVar8[1]);
        if ((uVar14 & 1) == 0) {
          uVar14 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar6,0);
          goto joined_r0x018e1920;
        }
        if (lVar6 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar6,lVar18,0);
        lVar12 = *(long *)(*(long *)(lVar11 + 0x30) + 8);
        if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar12);
        }
        lVar13 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar12) {
              puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar16 = piVar16 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,lVar12,0);
code_r0x018e1ab0:
        lVar12 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      } while (lVar12 == 0);
      lVar12 = *(long *)(*(long *)(lVar11 + 0x30) + 8);
      if ((*(ushort *)(lVar12 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar12);
      }
      lVar13 = *plVar9;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar12) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar16 = piVar16 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      puVar8 = (undefined8 *)func_0x00fac1f0(plVar9,lVar12,0);
code_r0x018e1b24:
      plVar10 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
      if (plVar10 != (long *)0x0) {
        lVar12 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
        if (lVar12 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar6,lVar12,0);
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
// RVA: 0x159eb4c | Atlas.Contexts.GameContextBaseIntroState.TransitionToMapPan
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02b9561c) */
/* WARNING: Removing unreachable block (ram,0x02b95628) */
/* WARNING: Removing unreachable block (ram,0x02b95640) */
/* WARNING: Removing unreachable block (ram,0x018e1c4c) */
/* WARNING: Removing unreachable block (ram,0x02b95608) */
/* WARNING: Removing unreachable block (ram,0x02b95610) */
/* WARNING: Removing unreachable block (ram,0x02b95614) */

long Atlas_Contexts_GameContextBaseIntroState__TransitionToMapPan(long param_1)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  long lStack_78;
  
  if ((bRam0000000003eb51c5 & 1) == 0) {
    func_0x00f78a20(0x3d5d9a8);
    bRam0000000003eb51c5 = 1;
  }
  lVar15 = lRam0000000003d5d9a8;
  lVar5 = *(long *)(param_1 + 0x90);
  if (lVar5 == 0) {
    auVar17 = func_0x00f78af4();
    lVar15 = auVar17._0_8_;
    if ((bRam0000000003eb51c4 & 1) == 0) {
      func_0x00f78a20(0x3d5d8c0);
      bRam0000000003eb51c4 = 1;
    }
    if (*(long *)(lVar15 + 0x90) != 0) {
      lVar5 = /*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(*(long *)(lVar15 + 0x90),0);
      if (lVar5 == 0) {
        return 0;
      }
      if (*(long *)(lVar15 + 0x90) != 0) {
        /*Core.StateManagement.StateMachine$$Update*/ func_0x02b9521c(*(long *)(lVar15 + 0x90),auVar17._8_8_,0);
        if (*(long *)(lVar15 + 0x90) != 0) {
          lVar5 = /*Core.StateManagement.StateMachine$$IsActiveState<object>*/ func_0x018e1420(*(long *)(lVar15 + 0x90),uRam0000000003d5d8c0);
          if ((int)lVar5 == 0) {
            return lVar5;
          }
          lVar15 = *(long *)(lVar15 + 0x60);
          if (lVar15 == 0) {
            return 0;
          }
          uVar16 = 0;
          lStack_78 = lVar15;
          lVar5 = *(long *)(lVar15 + 0x68);
          if (lVar5 == 0) {
            plVar7 = &lStack_78;
            lVar10 = 1;
          }
          else {
            lVar10 = *(long *)(lVar5 + 0x18);
            if (lVar10 == 0) {
              return lVar15;
            }
            plVar7 = (long *)(lVar5 + 0x20);
          }
          lVar5 = 0;
          do {
            lVar11 = plVar7[lVar5];
            pcVar2 = *(code **)(lVar11 + 0x10);
            plVar8 = *(long **)(lVar11 + 0x20);
            lVar11 = *(long *)(lVar11 + 0x28);
            if (*(short *)(lVar11 + 0x48) == -1) {
              func_0x00f78ad8(lVar11,uVar16);
            }
            iVar3 = func_0x00f78a4c(lVar11);
            if (iVar3 == 0) {
              if ((((plVar8 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
                  ((*(byte *)(*plVar8 + 0x115) & 1) != 0)) || (*(long *)(lVar15 + 0x18) == 0))
              goto code_r0x02924d98;
              iVar3 = func_0x00f78a44(lVar11);
              iVar4 = func_0x00f78ec0(lVar11);
              if (iVar3 == 0) {
                uVar1 = *(ushort *)(lVar11 + 0x48);
                if (iVar4 == 0) {
                  lVar11 = *plVar8 + (ulong)uVar1 * 0x10;
                  auVar17 = (**(code **)(lVar11 + 0x138))(plVar8,*(undefined8 *)(lVar11 + 0x140));
                  goto code_r0x02924da4;
                }
                lVar11 = func_0x00f78a48(lVar11);
                lVar12 = *plVar8;
                uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == lVar11) {
                      puVar6 = (undefined8 *)
                               (lVar12 + (long)(int)(*piVar14 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x02924e68;
                    }
                    piVar14 = piVar14 + 4;
                    uVar13 = uVar13 - 1;
                  } while (uVar13 != 0);
                }
                puVar6 = (undefined8 *)func_0x00fac1f0(plVar8,lVar11,(ulong)uVar1);
code_r0x02924e68:
                pcVar2 = (code *)*puVar6;
                puVar6 = (undefined8 *)puVar6[1];
              }
              else {
                if (iVar4 == 0) {
                  uVar16 = *(undefined8 *)
                            (*plVar8 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar12 = *plVar8;
                  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                  if (uVar13 != 0) {
                    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                        lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x02924e40;
                      }
                      piVar14 = piVar14 + 4;
                      uVar13 = uVar13 - 1;
                    } while (uVar13 != 0);
                  }
                  lVar12 = func_0x00fac1f0(plVar8);
code_r0x02924e40:
                  uVar16 = *(undefined8 *)(lVar12 + 8);
                }
                puVar6 = (undefined8 *)func_0x00f78acc(uVar16,lVar11);
                pcVar2 = (code *)*puVar6;
              }
              auVar17 = (*pcVar2)(plVar8,puVar6);
            }
            else if (*(char *)(lVar11 + 0x4a) == '\0') {
              auVar17 = (*pcVar2)(lVar11);
            }
            else {
code_r0x02924d98:
              auVar17 = (*pcVar2)(plVar8,lVar11);
            }
code_r0x02924da4:
            uVar16 = auVar17._8_8_;
            lVar5 = lVar5 + 1;
            if (lVar5 == lVar10) {
              return auVar17._0_8_;
            }
          } while( true );
        }
      }
    }
    lVar15 = func_0x00f78af4();
    return lVar15;
  }
  lVar10 = 0;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar16 = **(undefined8 **)(lVar15 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar16 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar16,0);
  if (lVar5 != 0) {
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar5,uVar16,&stack0xffffffffffffffb0,0,0);
    return 0;
  }
  auVar17 = func_0x00f78af4();
  plVar7 = auVar17._8_8_;
  lVar15 = auVar17._0_8_;
  lStack_78 = 0x3d25458;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar7 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar16 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar16,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar16,uVar9);
  }
  else {
    if (lVar15 == 0) {
      lVar15 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar5 = **(long **)(lVar10 + 0x30);
    if ((*(ushort *)(lVar5 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar5);
    }
    lVar11 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar14 = piVar14 + 4;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar5,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar14 = piVar14 + 4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar13 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar13 & 1) == 0) {
        lVar15 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        if (plVar7 != (long *)0x0) {
code_r0x018e1b70:
          lVar5 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar5 + (long)*piVar14 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar14 = piVar14 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
        }
        return lVar15;
      }
      lVar5 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar11 = *(long *)(*(long *)(lVar10 + 0x30) + 8);
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar14 = piVar14 + 4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar11,0);
code_r0x018e1934:
      lVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar11 != 0) {
        lVar11 = *(long *)(*(long *)(lVar10 + 0x30) + 8);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar14 = piVar14 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar11,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar11 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar11 != 0) {
          if (lVar5 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar11,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar11 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar14 = piVar14 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar13 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar13 & 1) == 0) {
          lVar15 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar5,0);
          if (plVar7 == (long *)0x0) {
            return lVar15;
          }
          goto code_r0x018e1b70;
        }
        if (lVar5 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar15,0);
        lVar11 = *(long *)(*(long *)(lVar10 + 0x30) + 8);
        if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar11);
        }
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar11) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar14 = piVar14 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar11,0);
code_r0x018e1ab0:
        lVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar11 == 0);
      lVar11 = *(long *)(*(long *)(lVar10 + 0x30) + 8);
      if ((*(ushort *)(lVar11 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar11);
      }
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar11) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar14 = piVar14 + 4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar11,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar11 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar11 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar5,lVar11,0);
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
// RVA: 0x159eba8 | Atlas.Contexts.GameContextBaseIntroState.OnUpdate
// ============================================================

void Atlas_Contexts_GameContextBaseIntroState__OnUpdate(long param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
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
  
  if ((bRam0000000003eb51c4 & 1) == 0) {
    func_0x00f78a20(0x3d5d8c0);
    bRam0000000003eb51c4 = 1;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    lVar5 = /*Core.StateManagement.StateMachine$$get_ActiveState*/ func_0x02b95214(*(long *)(param_1 + 0x90),0);
    if (lVar5 == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x90) != 0) {
      /*Core.StateManagement.StateMachine$$Update*/ func_0x02b9521c(*(long *)(param_1 + 0x90),param_2,0);
      if (*(long *)(param_1 + 0x90) != 0) {
        iVar3 = /*Core.StateManagement.StateMachine$$IsActiveState<object>*/ func_0x018e1420(*(long *)(param_1 + 0x90),uRam0000000003d5d8c0);
        if (iVar3 == 0) {
          return;
        }
        lVar5 = *(long *)(param_1 + 0x60);
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
                    puVar6 = (undefined8 *)
                             (lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
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
                      lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar9 + 0x48)) *
                                        0x10 + 0x138;
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
    }
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x159ec50 | Atlas.Contexts.GameContextBaseIntroState.OnLateUpdate
// ============================================================

void Atlas_Contexts_GameContextBaseIntroState__OnLateUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x159ec54 | Atlas.Contexts.GameContextBaseIntroState.OnFixedUpdate
// ============================================================

void Atlas_Contexts_GameContextBaseIntroState__OnFixedUpdate(void)

{
  return;
}



// ============================================================
// RVA: 0x159ec58 | Atlas.Contexts.GameContextBaseIntroState.OnExit
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02b9561c) */
/* WARNING: Removing unreachable block (ram,0x02b95628) */
/* WARNING: Removing unreachable block (ram,0x02b95640) */
/* WARNING: Removing unreachable block (ram,0x018e1c4c) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] Atlas_Contexts_GameContextBaseIntroState__OnExit(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined1 **ppuVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long alStack_100 [15];
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 **ppuStack_50;
  undefined *puStack_48;
  undefined1 **ppuStack_30;
  undefined *puStack_28;
  
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x140), unaff_x19 = param_1, lVar2 != 0)) {
    /*Atlas.Maps.MapSequenceController$$StopActiveTimeline*/ func_0x0148df24(lVar2,0);
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x130), lVar2 != 0)) {
      Atlas_Gameplay_Kart_KartManager__FreezeAllKarts(lVar2,0,0);
      if ((*(long *)(param_1 + 0x78) != 0) &&
         (lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x130), lVar2 != 0)) {
        Atlas_Gameplay_Kart_KartManager__SetActiveKartVisuals(lVar2,1,0);
        auVar16._0_8_ = *(ulong *)(param_1 + 0x88);
        if (auVar16._0_8_ != 0) {
          *(undefined1 *)(auVar16._0_8_ + 0x30) = 0;
          auVar16._8_8_ = 0;
          return auVar16;
        }
      }
    }
  }
  lVar2 = func_0x00f78af4();
  puStack_28 = &Atlas_Contexts_GameContextBaseIntroState__TransitionToPlayerPan;
  ppuStack_30 = (undefined1 **)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb51c6 & 1) == 0) {
    func_0x00f78a20(0x3d5d9b0);
    bRam0000000003eb51c6 = 1;
  }
  lVar3 = *(long *)(lVar2 + 0x90);
  if (lVar3 == 0) {
    lVar4 = func_0x00f78af4();
    lStack_60 = 0x3eb5000;
    puStack_48 = &Atlas_Contexts_GameContextBaseIntroState__TransitionToWaiting;
    lStack_58 = lVar2;
    ppuStack_50 = (undefined1 **)&ppuStack_30;
    if ((bRam0000000003eb51c7 & 1) == 0) {
      func_0x00f78a20(0x3d5d9b8);
      bRam0000000003eb51c7 = 1;
    }
    lVar3 = *(long *)(lVar4 + 0x90);
    if (lVar3 == 0) {
      unaff_x19 = func_0x00f78af4();
      lStack_80 = 0x3eb5000;
      puStack_68 = &Atlas_Contexts_GameContextBaseIntroState__TransitionToCountdown;
      ppuVar14 = (undefined1 **)(alStack_100 + 0x12);
      lStack_78 = lVar4;
      ppuStack_70 = (undefined1 **)(alStack_100 + 0x16);
      if ((bRam0000000003eb51c8 & 1) == 0) {
        func_0x00f78a20(0x3d5d998);
        bRam0000000003eb51c8 = 1;
      }
      lVar3 = *(long *)(unaff_x19 + 0x90);
      if (lVar3 == 0) {
        lVar2 = func_0x00f78af4();
        puStack_88 = &Atlas_Contexts_GameContextBaseIntroState__TransitionToFinish;
        if ((bRam0000000003eb51c9 & 1) == 0) {
          func_0x00f78a20(0x3d5d9a0);
          bRam0000000003eb51c9 = 1;
        }
        lVar3 = *(long *)(lVar2 + 0x90);
        if (lVar3 == 0) {
          auVar16 = func_0x00f78af4();
          uVar12 = auVar16._8_8_;
          lVar2 = auVar16._0_8_;
          if (*(long *)(lVar2 + 0x90) != 0) {
            /*Core.StateManagement.StateMachine$$DeInit*/ func_0x02b954d8(*(long *)(lVar2 + 0x90),0);
            *(undefined8 *)(lVar2 + 0x90) = 0;
            uVar12 = extraout_x1;
          }
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar12;
          auVar15 = auVar15 << 0x40;
          if (*(long *)(lVar2 + 0x80) != 0) {
            auVar15 = /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(lVar2 + 0x80),1,0);
          }
          *(undefined8 *)(lVar2 + 0x78) = 0;
          *(undefined8 *)(lVar2 + 0x80) = 0;
          *(undefined8 *)(lVar2 + 0x88) = 0;
          *(undefined8 *)(lVar2 + 0xa0) = 0;
          *(undefined8 *)(lVar2 + 0x98) = 0;
          *(undefined8 *)(lVar2 + 0xb0) = 0;
          *(undefined8 *)(lVar2 + 0xa8) = 0;
          *(undefined8 *)(lVar2 + 0xb8) = 0;
          return auVar15;
        }
        plVar7 = alStack_100 + 0x10;
        unaff_x20 = 0x3eb5000;
        lVar2 = lRam0000000003d5d9a0;
      }
      else {
        plVar7 = alStack_100 + 0x14;
        lVar2 = lRam0000000003d5d998;
        unaff_x19 = lStack_78;
        unaff_x20 = lStack_80;
        ppuVar14 = ppuStack_70;
        puStack_88 = puStack_68;
      }
    }
    else {
      plVar7 = (long *)&stack0xffffffffffffffc0;
      lVar2 = lRam0000000003d5d9b8;
      unaff_x19 = lStack_58;
      unaff_x20 = lStack_60;
      ppuVar14 = ppuStack_50;
      puStack_88 = puStack_48;
    }
  }
  else {
    plVar7 = (long *)&stack0xffffffffffffffe0;
    lVar2 = lRam0000000003d5d9b0;
    ppuVar14 = ppuStack_30;
    puStack_88 = puStack_28;
  }
  lVar4 = 0;
  plVar7[0xfffffffffffffff8] = unaff_x24;
  plVar7[0xfffffffffffffff9] = unaff_x23;
  plVar7[0xfffffffffffffffa] = unaff_x22;
  plVar7[0xfffffffffffffffb] = unaff_x21;
  plVar7[0xfffffffffffffffc] = unaff_x20;
  plVar7[0xfffffffffffffffd] = unaff_x19;
  plVar7[0xfffffffffffffffe] = (long)ppuVar14;
  plVar7[0xffffffffffffffff] = (long)puStack_88;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  lVar2 = **(long **)(lVar2 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(lVar2,0);
  if (lVar3 != 0) {
    plVar7[0xfffffffffffffff8] = plVar7[0xfffffffffffffff8];
    plVar7[0xfffffffffffffff9] = plVar7[0xfffffffffffffff9];
    plVar7[0xfffffffffffffffa] = plVar7[0xfffffffffffffffa];
    plVar7[0xfffffffffffffffb] = plVar7[0xfffffffffffffffb];
    plVar7[0xfffffffffffffffc] = plVar7[0xfffffffffffffffc];
    plVar7[0xfffffffffffffffd] = plVar7[0xfffffffffffffffd];
    plVar7[0xfffffffffffffffe] = plVar7[0xfffffffffffffffe];
    plVar7[0xffffffffffffffff] = plVar7[0xffffffffffffffff];
    plVar7[0xfffffffffffffff6] = 0;
    plVar7[0xfffffffffffffff7] = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar3,uVar5,plVar7 + 0xfffffffffffffff6,0,0);
    lVar2 = plVar7[0xfffffffffffffff6];
    uVar9 = extraout_x1_01;
    if (lVar2 != 0) {
      if (*(long *)(lVar3 + 0x18) != 0) {
        /*Core.StateManagement.State$$Exit*/ func_0x02b95144();
      }
      *(long *)(lVar3 + 0x18) = lVar2;
      *(undefined8 *)(lVar3 + 0x20) = uVar5;
      *(undefined8 *)(lVar2 + 0x70) = 0;
      /*Core.StateManagement.State$$Enter*/ func_0x02b94f28();
      uVar9 = extraout_x1_02;
    }
    auVar18._1_7_ = 0;
    auVar18[0] = lVar2 != 0;
    auVar18._8_8_ = uVar9;
    return auVar18;
  }
  auVar16 = func_0x00f78af4();
  plVar8 = auVar16._8_8_;
  lVar3 = auVar16._0_8_;
  plVar7[0xfffffffffffffff0] = 0x3eb6000;
  plVar7[0xfffffffffffffff1] = 0x3d25458;
  plVar7[0xfffffffffffffff2] = lVar2;
  plVar7[0xfffffffffffffff3] = 0;
  plVar7[0xfffffffffffffff4] = 0;
  plVar7[0xfffffffffffffff5] = 0;
  plVar7[0xfffffffffffffff6] = (long)(plVar7 + 0xfffffffffffffffe);
  plVar7[0xfffffffffffffff7] = (long)&System_String__Join_object_;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar8 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar5 = func_0x00f78aec();
    uVar9 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar5,uVar9,0);
    uVar9 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar5,uVar9);
  }
  else {
    if (lVar3 == 0) {
      lVar3 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar2 = **(long **)(lVar4 + 0x30);
    if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar2);
    }
    lVar10 = *plVar8;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar2) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar13 = piVar13 + 4;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)func_0x00fac1f0(plVar8,lVar2,0);
code_r0x018e1828:
    plVar7 = (long *)(*(code *)*puVar6)(plVar8,puVar6[1]);
    if (plVar7 != (long *)0x0) {
      lVar2 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar6 = (undefined8 *)(lVar2 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar13 = piVar13 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      auVar16 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((auVar16._0_8_ & 1) == 0) {
        uVar5 = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        auVar17._8_8_ = auVar16._8_8_;
        auVar17._0_8_ = uVar5;
joined_r0x018e1920:
        if (plVar7 != (long *)0x0) {
          lVar2 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar2 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar6 = (undefined8 *)(lVar2 + (long)*piVar13 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar13 = piVar13 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
          auVar17._8_8_ = extraout_x1_00;
          auVar17._0_8_ = uVar5;
        }
        return auVar17;
      }
      lVar2 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar10 = *(long *)(*(long *)(lVar4 + 0x30) + 8);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar13 = piVar13 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar10,0);
code_r0x018e1934:
      lVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar10 != 0) {
        lVar10 = *(long *)(*(long *)(lVar4 + 0x30) + 8);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
        }
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar10,0);
code_r0x018e19a8:
        plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar8 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar10 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar10 != 0) {
          if (lVar2 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar2,lVar10,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar10 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar12 & 1) == 0) {
          auVar17 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar2,0);
          uVar5 = auVar17._0_8_;
          goto joined_r0x018e1920;
        }
        if (lVar2 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar2,lVar3,0);
        lVar10 = *(long *)(*(long *)(lVar4 + 0x30) + 8);
        if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar10);
        }
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar13 = piVar13 + 4;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar10,0);
code_r0x018e1ab0:
        lVar10 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      } while (lVar10 == 0);
      lVar10 = *(long *)(*(long *)(lVar4 + 0x30) + 8);
      if ((*(ushort *)(lVar10 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar10);
      }
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar13 = piVar13 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x00fac1f0(plVar7,lVar10,0);
code_r0x018e1b24:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 != (long *)0x0) {
        lVar10 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
        if (lVar10 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar2,lVar10,0);
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
// RVA: 0x159ecd4 | Atlas.Contexts.GameContextBaseIntroState.TransitionToPlayerPan
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02b9561c) */
/* WARNING: Removing unreachable block (ram,0x02b95628) */
/* WARNING: Removing unreachable block (ram,0x02b95640) */
/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_Contexts_GameContextBaseIntroState__TransitionToPlayerPan(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar13;
  undefined8 unaff_x23;
  long lVar14;
  undefined8 unaff_x24;
  undefined8 *****unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar15 [16];
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 ****ppppuStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 ****ppppuStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb51c6 & 1) == 0) {
    func_0x00f78a20(0x3d5d9b0);
    bRam0000000003eb51c6 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x90);
  lVar14 = lRam0000000003d5d9b0;
  if (lVar2 == 0) {
    lVar14 = func_0x00f78af4();
    uStack_40 = 0x3eb5000;
    puStack_28 = &Atlas_Contexts_GameContextBaseIntroState__TransitionToWaiting;
    lStack_38 = param_1;
    ppppuStack_30 = (undefined8 ****)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb51c7 & 1) == 0) {
      func_0x00f78a20(0x3d5d9b8);
      bRam0000000003eb51c7 = 1;
    }
    lVar2 = *(long *)(lVar14 + 0x90);
    if (lVar2 == 0) {
      unaff_x19 = func_0x00f78af4();
      uStack_60 = 0x3eb5000;
      puStack_48 = &Atlas_Contexts_GameContextBaseIntroState__TransitionToCountdown;
      unaff_x29 = &ppppuStack_50;
      lStack_58 = lVar14;
      ppppuStack_50 = &ppppuStack_30;
      if ((bRam0000000003eb51c8 & 1) == 0) {
        func_0x00f78a20(0x3d5d998);
        bRam0000000003eb51c8 = 1;
      }
      lVar2 = *(long *)(unaff_x19 + 0x90);
      if (lVar2 == 0) {
        lVar14 = func_0x00f78af4();
        puStack_68 = &Atlas_Contexts_GameContextBaseIntroState__TransitionToFinish;
        if ((bRam0000000003eb51c9 & 1) == 0) {
          func_0x00f78a20(0x3d5d9a0);
          bRam0000000003eb51c9 = 1;
        }
        lVar2 = *(long *)(lVar14 + 0x90);
        if (lVar2 == 0) {
          lVar14 = func_0x00f78af4();
          if (*(long *)(lVar14 + 0x90) != 0) {
            /*Core.StateManagement.StateMachine$$DeInit*/ func_0x02b954d8(*(long *)(lVar14 + 0x90),0);
            *(undefined8 *)(lVar14 + 0x90) = 0;
          }
          uVar10 = 0;
          if (*(long *)(lVar14 + 0x80) != 0) {
            uVar10 = /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(lVar14 + 0x80),1,0);
          }
          *(undefined8 *)(lVar14 + 0x78) = 0;
          *(undefined8 *)(lVar14 + 0x80) = 0;
          *(undefined8 *)(lVar14 + 0x88) = 0;
          *(undefined8 *)(lVar14 + 0xa0) = 0;
          *(undefined8 *)(lVar14 + 0x98) = 0;
          *(undefined8 *)(lVar14 + 0xb0) = 0;
          *(undefined8 *)(lVar14 + 0xa8) = 0;
          *(undefined8 *)(lVar14 + 0xb8) = 0;
          return uVar10;
        }
        register0x00000008 = (BADSPACEBASE *)&uStack_60;
        unaff_x20 = 0x3eb5000;
        lVar14 = lRam0000000003d5d9a0;
        unaff_x30 = puStack_68;
      }
      else {
        register0x00000008 = (BADSPACEBASE *)&uStack_40;
        lVar14 = lRam0000000003d5d998;
        unaff_x19 = lStack_58;
        unaff_x20 = uStack_60;
        unaff_x29 = (undefined8 *****)ppppuStack_50;
        unaff_x30 = puStack_48;
      }
    }
    else {
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      lVar14 = lRam0000000003d5d9b8;
      unaff_x19 = lStack_38;
      unaff_x20 = uStack_40;
      unaff_x29 = (undefined8 *****)ppppuStack_30;
      unaff_x30 = puStack_28;
    }
  }
  lVar7 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ******)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar13 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (lVar2 != 0) {
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
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
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar2,uVar3,(undefined1 *)((long)register0x00000008 + -0x50),0,0);
    lVar14 = *(long *)((long)register0x00000008 + -0x50);
    if (lVar14 != 0) {
      if (*(long *)(lVar2 + 0x18) != 0) {
        /*Core.StateManagement.State$$Exit*/ func_0x02b95144();
      }
      *(long *)(lVar2 + 0x18) = lVar14;
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      *(undefined8 *)(lVar14 + 0x70) = 0;
      /*Core.StateManagement.State$$Enter*/ func_0x02b94f28();
    }
    return (ulong)(lVar14 != 0);
  }
  auVar15 = func_0x00f78af4();
  plVar5 = auVar15._8_8_;
  lVar14 = auVar15._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3eb6000;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3d25458;
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar13;
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x48) = &System_String__Join_object_;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar5 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar13 = func_0x00f78aec();
    uVar3 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar13,uVar3,0);
    uVar3 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar13,uVar3);
  }
  else {
    if (lVar14 == 0) {
      lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar2 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar2);
    }
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar2) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar12 = piVar12 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar2,0);
code_r0x018e1828:
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    if (plVar5 != (long *)0x0) {
      lVar2 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar12 = piVar12 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar10 & 1) == 0) {
        uVar10 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar5 != (long *)0x0) {
          lVar14 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar4 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar4)(plVar5,puVar4[1]);
        }
        return uVar10;
      }
      lVar2 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar8 = *(long *)(*(long *)(lVar7 + 0x30) + 8);
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar12 = piVar12 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar8,0);
code_r0x018e1934:
      lVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if (lVar8 != 0) {
        lVar8 = *(long *)(*(long *)(lVar7 + 0x30) + 8);
        if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar8);
        }
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar8) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar12 = piVar12 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar8,0);
code_r0x018e19a8:
        plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
        if (plVar6 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        if (lVar8 != 0) {
          if (lVar2 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar2,lVar8,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar8 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar12 = piVar12 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        if ((uVar10 & 1) == 0) {
          uVar10 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar2,0);
          goto joined_r0x018e1920;
        }
        if (lVar2 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar2,lVar14,0);
        lVar8 = *(long *)(*(long *)(lVar7 + 0x30) + 8);
        if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar8);
        }
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar8) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar12 = piVar12 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar8,0);
code_r0x018e1ab0:
        lVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      } while (lVar8 == 0);
      lVar8 = *(long *)(*(long *)(lVar7 + 0x30) + 8);
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar12 = piVar12 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar8,0);
code_r0x018e1b24:
      plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      if (plVar6 != (long *)0x0) {
        lVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        if (lVar8 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar2,lVar8,0);
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
// RVA: 0x159ed30 | Atlas.Contexts.GameContextBaseIntroState.TransitionToWaiting
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02b9561c) */
/* WARNING: Removing unreachable block (ram,0x02b95628) */
/* WARNING: Removing unreachable block (ram,0x02b95640) */
/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_Contexts_GameContextBaseIntroState__TransitionToWaiting(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar13;
  undefined8 unaff_x23;
  long lVar14;
  undefined8 unaff_x24;
  undefined8 *****unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar15 [16];
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 ****ppppuStack_30;
  undefined *puStack_28;
  
  if ((bRam0000000003eb51c7 & 1) == 0) {
    func_0x00f78a20(0x3d5d9b8);
    bRam0000000003eb51c7 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x90);
  lVar14 = lRam0000000003d5d9b8;
  if (lVar2 == 0) {
    unaff_x19 = func_0x00f78af4();
    uStack_40 = 0x3eb5000;
    puStack_28 = &Atlas_Contexts_GameContextBaseIntroState__TransitionToCountdown;
    unaff_x29 = &ppppuStack_30;
    lStack_38 = param_1;
    ppppuStack_30 = (undefined8 ****)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb51c8 & 1) == 0) {
      func_0x00f78a20(0x3d5d998);
      bRam0000000003eb51c8 = 1;
    }
    lVar2 = *(long *)(unaff_x19 + 0x90);
    if (lVar2 == 0) {
      lVar14 = func_0x00f78af4();
      puStack_48 = &Atlas_Contexts_GameContextBaseIntroState__TransitionToFinish;
      if ((bRam0000000003eb51c9 & 1) == 0) {
        func_0x00f78a20(0x3d5d9a0);
        bRam0000000003eb51c9 = 1;
      }
      lVar2 = *(long *)(lVar14 + 0x90);
      if (lVar2 == 0) {
        lVar14 = func_0x00f78af4();
        if (*(long *)(lVar14 + 0x90) != 0) {
          /*Core.StateManagement.StateMachine$$DeInit*/ func_0x02b954d8(*(long *)(lVar14 + 0x90),0);
          *(undefined8 *)(lVar14 + 0x90) = 0;
        }
        uVar10 = 0;
        if (*(long *)(lVar14 + 0x80) != 0) {
          uVar10 = /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(lVar14 + 0x80),1,0);
        }
        *(undefined8 *)(lVar14 + 0x78) = 0;
        *(undefined8 *)(lVar14 + 0x80) = 0;
        *(undefined8 *)(lVar14 + 0x88) = 0;
        *(undefined8 *)(lVar14 + 0xa0) = 0;
        *(undefined8 *)(lVar14 + 0x98) = 0;
        *(undefined8 *)(lVar14 + 0xb0) = 0;
        *(undefined8 *)(lVar14 + 0xa8) = 0;
        *(undefined8 *)(lVar14 + 0xb8) = 0;
        return uVar10;
      }
      register0x00000008 = (BADSPACEBASE *)&uStack_40;
      unaff_x20 = 0x3eb5000;
      lVar14 = lRam0000000003d5d9a0;
      unaff_x30 = puStack_48;
    }
    else {
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      lVar14 = lRam0000000003d5d998;
      unaff_x19 = lStack_38;
      unaff_x20 = uStack_40;
      unaff_x29 = (undefined8 *****)ppppuStack_30;
      unaff_x30 = puStack_28;
    }
  }
  lVar7 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ******)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar13 = **(undefined8 **)(lVar14 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar3 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar13,0);
  if (lVar2 != 0) {
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
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
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar2,uVar3,(undefined1 *)((long)register0x00000008 + -0x50),0,0);
    lVar14 = *(long *)((long)register0x00000008 + -0x50);
    if (lVar14 != 0) {
      if (*(long *)(lVar2 + 0x18) != 0) {
        /*Core.StateManagement.State$$Exit*/ func_0x02b95144();
      }
      *(long *)(lVar2 + 0x18) = lVar14;
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      *(undefined8 *)(lVar14 + 0x70) = 0;
      /*Core.StateManagement.State$$Enter*/ func_0x02b94f28();
    }
    return (ulong)(lVar14 != 0);
  }
  auVar15 = func_0x00f78af4();
  plVar5 = auVar15._8_8_;
  lVar14 = auVar15._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3eb6000;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3d25458;
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar13;
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x48) = &System_String__Join_object_;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar5 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar13 = func_0x00f78aec();
    uVar3 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar13,uVar3,0);
    uVar3 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar13,uVar3);
  }
  else {
    if (lVar14 == 0) {
      lVar14 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
    }
    lVar2 = **(long **)(lVar7 + 0x30);
    if ((*(ushort *)(lVar2 + 0x132) & 1) == 0) {
      func_0x00fac028(lVar2);
    }
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar2) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto code_r0x018e1828;
        }
        piVar12 = piVar12 + 4;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar2,0);
code_r0x018e1828:
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    if (plVar5 != (long *)0x0) {
      lVar2 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x018e1890;
          }
          piVar12 = piVar12 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1890:
      uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar10 & 1) == 0) {
        uVar10 = **(ulong **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
joined_r0x018e1920:
        if (plVar5 != (long *)0x0) {
          lVar14 = *plVar5;
          uVar11 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar4 = (undefined8 *)(lVar14 + (long)*piVar12 * 0x10 + 0x138);
                goto code_r0x018e1bc4;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.IDisposable_TypeInfo*/ lRam0000000003d220f0,0);
code_r0x018e1bc4:
          (*(code *)*puVar4)(plVar5,puVar4[1]);
        }
        return uVar10;
      }
      lVar2 = /*System.Text.StringBuilderCache$$Acquire*/ func_0x029d4f5c(0x10,0);
      lVar8 = *(long *)(*(long *)(lVar7 + 0x30) + 8);
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x018e1934;
          }
          piVar12 = piVar12 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar8,0);
code_r0x018e1934:
      lVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if (lVar8 != 0) {
        lVar8 = *(long *)(*(long *)(lVar7 + 0x30) + 8);
        if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar8);
        }
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar8) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x018e19a8;
            }
            piVar12 = piVar12 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar8,0);
code_r0x018e19a8:
        plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
        if (plVar6 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        lVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        if (lVar8 != 0) {
          if (lVar2 == 0) {
            func_0x00f78af4();
            goto code_r0x018e1c64;
          }
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar2,lVar8,0);
        }
      }
code_r0x018e19dc:
      do {
        lVar8 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x018e1a28;
            }
            piVar12 = piVar12 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,/*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180,0);
code_r0x018e1a28:
        uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
        if ((uVar10 & 1) == 0) {
          uVar10 = /*System.Text.StringBuilderCache$$GetStringAndRelease*/ func_0x029d509c(lVar2,0);
          goto joined_r0x018e1920;
        }
        if (lVar2 == 0) {
          func_0x00f78af4();
          goto code_r0x018e1c64;
        }
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar2,lVar14,0);
        lVar8 = *(long *)(*(long *)(lVar7 + 0x30) + 8);
        if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
          func_0x00fac028(lVar8);
        }
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar10 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar8) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto code_r0x018e1ab0;
            }
            piVar12 = piVar12 + 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar8,0);
code_r0x018e1ab0:
        lVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      } while (lVar8 == 0);
      lVar8 = *(long *)(*(long *)(lVar7 + 0x30) + 8);
      if ((*(ushort *)(lVar8 + 0x132) & 1) == 0) {
        func_0x00fac028(lVar8);
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar8) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto code_r0x018e1b24;
          }
          piVar12 = piVar12 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)func_0x00fac1f0(plVar5,lVar8,0);
code_r0x018e1b24:
      plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      if (plVar6 != (long *)0x0) {
        lVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        if (lVar8 != 0) {
          /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar2,lVar8,0);
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
// RVA: 0x159ed8c | Atlas.Contexts.GameContextBaseIntroState.TransitionToCountdown
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02b9561c) */
/* WARNING: Removing unreachable block (ram,0x02b95628) */
/* WARNING: Removing unreachable block (ram,0x02b95640) */
/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_Contexts_GameContextBaseIntroState__TransitionToCountdown(long param_1)

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
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar14;
  undefined8 unaff_x23;
  long lVar15;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar16 [16];
  undefined *puStack_28;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb51c8 & 1) == 0) {
    func_0x00f78a20(0x3d5d998);
    bRam0000000003eb51c8 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x90);
  lVar15 = lRam0000000003d5d998;
  puStack_28 = unaff_x30;
  if (lVar3 == 0) {
    lVar15 = func_0x00f78af4();
    puStack_28 = &Atlas_Contexts_GameContextBaseIntroState__TransitionToFinish;
    if ((bRam0000000003eb51c9 & 1) == 0) {
      func_0x00f78a20(0x3d5d9a0);
      bRam0000000003eb51c9 = 1;
    }
    lVar3 = *(long *)(lVar15 + 0x90);
    if (lVar3 == 0) {
      lVar15 = func_0x00f78af4();
      if (*(long *)(lVar15 + 0x90) != 0) {
        /*Core.StateManagement.StateMachine$$DeInit*/ func_0x02b954d8(*(long *)(lVar15 + 0x90),0);
        *(undefined8 *)(lVar15 + 0x90) = 0;
      }
      uVar11 = 0;
      if (*(long *)(lVar15 + 0x80) != 0) {
        uVar11 = /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(lVar15 + 0x80),1,0);
      }
      *(undefined8 *)(lVar15 + 0x78) = 0;
      *(undefined8 *)(lVar15 + 0x80) = 0;
      *(undefined8 *)(lVar15 + 0x88) = 0;
      *(undefined8 *)(lVar15 + 0xa0) = 0;
      *(undefined8 *)(lVar15 + 0x98) = 0;
      *(undefined8 *)(lVar15 + 0xb0) = 0;
      *(undefined8 *)(lVar15 + 0xa8) = 0;
      *(undefined8 *)(lVar15 + 0xb8) = 0;
      return uVar11;
    }
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x20 = 0x3eb5000;
    lVar15 = lRam0000000003d5d9a0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  lVar8 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = puStack_28;
  if ((bRam0000000003eb668b & 1) == 0) {
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb668b = 1;
  }
  uVar14 = **(undefined8 **)(lVar15 + 0x30);
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar4 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
  if (lVar3 != 0) {
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
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
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    /*Core.StateManagement.StateMachine$$TryFindEntry*/ func_0x02b956b0(lVar3,uVar4,(undefined1 *)((long)register0x00000008 + -0x50),0,0);
    lVar15 = *(long *)((long)register0x00000008 + -0x50);
    if (lVar15 != 0) {
      if (*(long *)(lVar3 + 0x18) != 0) {
        /*Core.StateManagement.State$$Exit*/ func_0x02b95144();
      }
      *(long *)(lVar3 + 0x18) = lVar15;
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      *(undefined8 *)(lVar15 + 0x70) = 0;
      /*Core.StateManagement.State$$Enter*/ func_0x02b94f28();
    }
    return (ulong)(lVar15 != 0);
  }
  auVar16 = func_0x00f78af4();
  plVar6 = auVar16._8_8_;
  lVar15 = auVar16._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3eb6000;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3d25458;
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar14;
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x48) = &System_String__Join_object_;
  if ((bRam0000000003eb668c & 1) == 0) {
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d24dd0);
    bRam0000000003eb668c = 1;
  }
  if (plVar6 == (long *)0x0) {
    func_0x00f78a24(0x3d1fcf0);
    uVar14 = func_0x00f78aec();
    uVar4 = func_0x00f78a24(0x3d7c5e8);
    /*System.ArgumentNullException$$.ctor*/ func_0x02920400(uVar14,uVar4,0);
    uVar4 = func_0x00f78a24(0x3d5da50);
    func_0x00f78ac0(uVar14,uVar4);
  }
  else {
    if (lVar15 == 0) {
      lVar15 = **(long **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
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
          lVar15 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
                puVar5 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
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
        /*System.Text.StringBuilder$$Append*/ func_0x029d2c70(lVar3,lVar15,0);
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
// RVA: 0x159ede8 | Atlas.Contexts.GameContextBaseIntroState.TransitionToFinish
// ============================================================

/* WARNING: Removing unreachable block (ram,0x02b9561c) */
/* WARNING: Removing unreachable block (ram,0x02b95628) */
/* WARNING: Removing unreachable block (ram,0x02b95640) */
/* WARNING: Removing unreachable block (ram,0x018e1c4c) */

ulong Atlas_Contexts_GameContextBaseIntroState__TransitionToFinish(long param_1)

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
  
  if ((bRam0000000003eb51c9 & 1) == 0) {
    func_0x00f78a20(0x3d5d9a0);
    bRam0000000003eb51c9 = 1;
  }
  lVar14 = lRam0000000003d5d9a0;
  lVar3 = *(long *)(param_1 + 0x90);
  if (lVar3 == 0) {
    lVar14 = func_0x00f78af4();
    if (*(long *)(lVar14 + 0x90) != 0) {
      /*Core.StateManagement.StateMachine$$DeInit*/ func_0x02b954d8(*(long *)(lVar14 + 0x90),0);
      *(undefined8 *)(lVar14 + 0x90) = 0;
    }
    uVar11 = 0;
    if (*(long *)(lVar14 + 0x80) != 0) {
      uVar11 = /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(lVar14 + 0x80),1,0);
    }
    *(undefined8 *)(lVar14 + 0x78) = 0;
    *(undefined8 *)(lVar14 + 0x80) = 0;
    *(undefined8 *)(lVar14 + 0x88) = 0;
    *(undefined8 *)(lVar14 + 0xa0) = 0;
    *(undefined8 *)(lVar14 + 0x98) = 0;
    *(undefined8 *)(lVar14 + 0xb0) = 0;
    *(undefined8 *)(lVar14 + 0xa8) = 0;
    *(undefined8 *)(lVar14 + 0xb8) = 0;
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
// RVA: 0x159ee44 | Atlas.Contexts.GameContextBaseIntroState.OnDeInit
// ============================================================

void Atlas_Contexts_GameContextBaseIntroState__OnDeInit(long param_1)

{
  if (*(long *)(param_1 + 0x90) != 0) {
    /*Core.StateManagement.StateMachine$$DeInit*/ func_0x02b954d8(*(long *)(param_1 + 0x90),0);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(*(long *)(param_1 + 0x80),1,0);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  return;
}



// ============================================================
// RVA: 0x159eea0 | Atlas.Contexts.GameContextBaseIntroState..ctor
// ============================================================

void Atlas_Contexts_GameContextBaseIntroState___ctor(void)

{
  return;
}



