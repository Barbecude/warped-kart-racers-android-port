// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.ArcadeMapSelectScreen.<BuildOptions>d__36

// ============================================================
// RVA: 0x15339bc | Atlas.UI.Screens.ArcadeMapSelectScreen.<BuildOptions>d__36..ctor
// ============================================================

void Atlas_UI_Screens_ArcadeMapSelectScreen__BuildOptions_d__36___ctor
               (long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15339e8 | Atlas.UI.Screens.ArcadeMapSelectScreen.<BuildOptions>d__36.System.IDisposable.Dispose
// ============================================================

void Atlas_UI_Screens_ArcadeMapSelectScreen__BuildOptions_d__36__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x15339ec | Atlas.UI.Screens.ArcadeMapSelectScreen.<BuildOptions>d__36.MoveNext
// ============================================================

undefined8 Atlas_UI_Screens_ArcadeMapSelectScreen__BuildOptions_d__36__MoveNext(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  if ((bRam0000000003eb4eb8 & 1) == 0) {
    func_0x00f78a20(0x3d51bd0);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d40fa0);
    func_0x00f78a20(0x3d40fb0);
    func_0x00f78a20(0x3d25608);
    func_0x00f78a20(0x3d6ba50);
    bRam0000000003eb4eb8 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar9 != 0) && (lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d40fa0), lVar6 != 0)) {
      lVar6 = *(long *)(lVar6 + 0x80);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d40fa0);
      if ((lVar9 != 0) && ((*(long *)(lVar9 + 0x80) != 0 && (*(long *)(param_1 + 0x28) != 0)))) {
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x80) + 0x18);
        lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x28),0);
        if (lVar9 != 0) {
          plVar7 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar9,0);
          if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (plVar7 == (long *)0x0) {
            plVar7 = (long *)0x0;
          }
          else if (*plVar7 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
            plVar7 = (long *)0x0;
          }
          /*Core.UI2.UIUtils$$ScrollTargetNormalizedPosition*/ func_0x02f91280(uVar5,plVar7,0,0);
          if (lVar6 != 0) {
            /*Atlas.UI.PaginationDotController$$SnapToTarget*/ func_0x014b6090(lVar6,0);
            return 0;
          }
        }
      }
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x78) != 0)) {
      /*Core.Assets.AssetManager$$TryGetLoadedAsset<object>*/ func_0x01818904(*(long *)(lVar9 + 0x78),*(undefined4 *)(lVar9 + 0xa0),lVar9 + 0x98,
                      uRam0000000003d51bd0);
      uVar5 = Atlas_UI_Screens_ArcadeMapSelectScreen__BuildMapPanels(lVar9,0);
      *(undefined8 *)(param_1 + 0x28) = uVar5;
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d40fa0);
      if ((lVar6 != 0) && (lVar8 = *(long *)(lVar9 + 0xe8), lVar8 != 0)) {
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_01533ea8;
        if ((*(long *)(lVar9 + 0xb8) != 0) && (*(long *)(lVar6 + 0xc0) != 0)) {
          /*Atlas.UI.UIArcadeSingleMedalBehaviour$$Set*/ func_0x01513cb0(*(long *)(lVar6 + 0xc0),*(undefined4 *)(lVar8 + 0x20),
                          *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x24),0,0);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d40fa0);
          if ((lVar6 != 0) && (lVar8 = *(long *)(lVar9 + 0xe8), lVar8 != 0)) {
            if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_01533ea8;
            if ((*(long *)(lVar9 + 0xb8) != 0) && (*(long *)(lVar6 + 0xb8) != 0)) {
              /*Atlas.UI.UIArcadeSingleMedalBehaviour$$Set*/ func_0x01513cb0(*(long *)(lVar6 + 0xb8),*(undefined4 *)(lVar8 + 0x24),
                              *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x24),1,0);
              lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d40fa0);
              if ((lVar6 != 0) && (lVar8 = *(long *)(lVar9 + 0xe8), lVar8 != 0)) {
                if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_01533ea8;
                if ((*(long *)(lVar9 + 0xb8) != 0) && (*(long *)(lVar6 + 0xb0) != 0)) {
                  /*Atlas.UI.UIArcadeSingleMedalBehaviour$$Set*/ func_0x01513cb0(*(long *)(lVar6 + 0xb0),*(undefined4 *)(lVar8 + 0x28),
                                  *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x24),2,0);
                  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d40fa0);
                  if ((lVar6 != 0) && (lVar8 = *(long *)(lVar9 + 0xe8), lVar8 != 0)) {
                    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0) goto LAB_01533ea8;
                    if ((*(long *)(lVar9 + 0xb8) != 0) && (*(long *)(lVar6 + 0xa8) != 0)) {
                      /*Atlas.UI.UIArcadeSingleMedalBehaviour$$Set*/ func_0x01513cb0(*(long *)(lVar6 + 0xa8),*(undefined4 *)(lVar8 + 0x2c),
                                      *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x24),3,0);
                      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d40fa0);
                      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x78) != 0)) {
                        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar6 + 0x78),1,0);
                        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d40fa0);
                        if (lVar6 != 0) {
                          lVar8 = *(long *)(lVar6 + 0x80);
                          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d40fa0);
                          if ((lVar6 != 0) && (lVar8 != 0)) {
                            /*Atlas.UI.PaginationDotController$$SetDotAmount*/ func_0x014b5d08(lVar8,*(undefined4 *)(lVar6 + 0xa0),0);
                            Atlas_UI_Screens_ArcadeMapSelectScreen__SetRewardPanelsAndAnimate
                                      (lVar9,0);
                            if (*(long *)(param_1 + 0x28) != 0) {
                              uVar5 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_1 + 0x28),0);
                              *(undefined8 *)(lVar9 + 0xa8) = uVar5;
                              *(undefined8 *)(param_1 + 0x18) = 0;
                              *(undefined4 *)(param_1 + 0x10) = 2;
                              return 1;
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
  else {
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x70) != 0)) {
      uVar5 = /*Atlas.Helpers.ArcadeHelper$$GetAllRewards*/ func_0x01450150(*(undefined8 *)(*(long *)(lVar9 + 0x70) + 0x10),
                              *(undefined8 *)(lVar9 + 0xb8),0);
      *(undefined8 *)(lVar9 + 0xc0) = uVar5;
      uVar5 = *(undefined8 *)(lVar9 + 0x70);
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d40fb0);
      if (lVar6 != 0) {
        uVar5 = /*Atlas.Helpers.ArcadeHelper$$GetTotalMedalCounts*/ func_0x0144fda8(uVar5,*(undefined8 *)(lVar6 + 0x48),0);
        *(undefined8 *)(lVar9 + 0xe8) = uVar5;
        uVar5 = *(undefined8 *)(lVar9 + 0x70);
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d40fb0);
        if (lVar6 != 0) {
          lVar6 = /*Atlas.Helpers.ArcadeHelper$$GetTotalMedalCounts*/ func_0x0144fda8(uVar5,*(undefined8 *)(lVar6 + 0x48),0);
          lVar8 = *(long *)(lVar9 + 0xf0);
          if (lVar8 != 0) {
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (uVar2 == 0) goto LAB_01533ea8;
            *(undefined4 *)(lVar8 + 0x20) = 0;
            if (lVar6 != 0) {
              uVar3 = *(uint *)(lVar6 + 0x18);
              if (((((uVar3 < 2) || (uVar3 == 2)) || (uVar3 < 4)) ||
                  ((uVar2 < 2 ||
                   (*(int *)(lVar8 + 0x24) =
                         *(int *)(lVar6 + 0x2c) + *(int *)(lVar6 + 0x24) + *(int *)(lVar6 + 0x28),
                   uVar2 == 2)))) ||
                 (*(int *)(lVar8 + 0x28) = *(int *)(lVar6 + 0x28) + *(int *)(lVar6 + 0x2c),
                 uVar2 < 4)) goto LAB_01533ea8;
              *(undefined4 *)(lVar8 + 0x2c) = *(undefined4 *)(lVar6 + 0x2c);
              lVar8 = *(long *)(lVar9 + 0x78);
              lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d40fa0);
              if ((lVar6 != 0) && (lVar8 != 0)) {
                uVar4 = /*Core.Assets.AssetManager$$RequestAsset*/ func_0x01635f34(lVar8,*(undefined8 *)(lVar6 + 0x68),/*STR('Default')*/ uRam0000000003d6ba50,0,0
                                        ,0);
                *(undefined4 *)(lVar9 + 0xa0) = uVar4;
                if (*(long *)(lVar9 + 0x78) != 0) {
                  uVar5 = /*Core.Assets.AssetManager$$WaitForAsset*/ func_0x01636f40(*(long *)(lVar9 + 0x78),uVar4,0);
                  *(undefined8 *)(param_1 + 0x18) = uVar5;
                  *(undefined4 *)(param_1 + 0x10) = 1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
LAB_01533ea8:
  uVar5 = func_0x00f78b24();
  lVar9 = func_0x00f78ac0(uVar5,0);
  return *(undefined8 *)(lVar9 + 0x18);
}



// ============================================================
// RVA: 0x1533eb4 | Atlas.UI.Screens.ArcadeMapSelectScreen.<BuildOptions>d__36.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_ArcadeMapSelectScreen__BuildOptions_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1533ebc | Atlas.UI.Screens.ArcadeMapSelectScreen.<BuildOptions>d__36.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_UI_Screens_ArcadeMapSelectScreen__BuildOptions_d__36__System_Collections_IEnumerator_Reset
          (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62018);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1533efc | Atlas.UI.Screens.ArcadeMapSelectScreen.<BuildOptions>d__36.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_UI_Screens_ArcadeMapSelectScreen__BuildOptions_d__36__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



