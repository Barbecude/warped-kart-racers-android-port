// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.CharacterSelectScreen

// ============================================================
// RVA: 0x1542f50 | Atlas.UI.Screens.CharacterSelectScreen.OnBeforeEnter
// ============================================================

void Atlas_UI_Screens_CharacterSelectScreen__OnBeforeEnter(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  int iStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((bRam0000000003eb4f4e & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d20658);
    func_0x00f78a20(0x3d53038);
    func_0x00f78a20(0x3d53020);
    func_0x00f78a20(0x3d53028);
    func_0x00f78a20(0x3d53030);
    func_0x00f78a20(0x3d20660);
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d40fe8);
    func_0x00f78a20(0x3d40ff8);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb4f4e = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  iStack_78 = 0;
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar3 + 0x38);
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar3 + 0x20);
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
      if (lVar3 != 0) {
        *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar3 + 0x50);
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
        if (lVar3 != 0) {
          *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar3 + 0xd0);
          lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
          if (lVar3 != 0) {
            lVar3 = *(long *)(lVar3 + 0xb8);
            uVar4 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
            /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(uVar4,param_1,uRam0000000003d53038,0);
            if (lVar3 != 0) {
              /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar3,6,uVar4,0);
              lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
              if (lVar3 != 0) {
                lVar3 = *(long *)(lVar3 + 0xd0);
                uVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
                if (lVar3 != 0) {
                  /*Atlas.UI.UILobbyInfoPanelBehaviour$$Init*/ func_0x0151c484(lVar3,uVar4,0);
                  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
                  if (((lVar3 != 0) && (*(long *)(lVar3 + 0x48) != 0)) &&
                     (lVar3 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar3 + 0x48),0), lVar3 != 0)) {
                    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar3 + 0x80);
                    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
                    if (((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) &&
                       (lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10), lVar3 != 0)) {
                      uVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,*(undefined8 *)(param_1 + 0xe8),
                                              uRam0000000003d57270);
                      uVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
                      uVar6 = func_0x00f78aec(/*Atlas.UI.CharacterMetagameData_TypeInfo*/ uRam0000000003d20658);
                      /*Atlas.UI.CharacterMetagameData$$.ctor*/ func_0x01541218(uVar6,uVar4,uVar5);
                      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                      if ((lVar3 != 0) && (plVar7 = *(long **)(lVar3 + 0x78), plVar7 != (long *)0x0)
                         ) {
                        (**(code **)(*plVar7 + 0x188))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 400));
                        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                        if ((lVar3 != 0) &&
                           (plVar7 = *(long **)(lVar3 + 0x80), plVar7 != (long *)0x0)) {
                          (**(code **)(*plVar7 + 0x188))
                                    (plVar7,uVar6,*(undefined8 *)(*plVar7 + 400));
                          lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
                          if (((lVar3 != 0) && (*(long *)(lVar3 + 0x18) != 0)) &&
                             (lVar3 = /*Core.Contexts.ContextManager$$GetContext<object>*/ func_0x0183a04c(*(long *)(lVar3 + 0x18),/*STR('FrontEndContext')*/ uRam0000000003d6d050,
                                                      uRam0000000003d53980), lVar3 != 0)) {
                            lVar3 = *(long *)(lVar3 + 0x118);
                            *(long *)(param_1 + 0xf8) = lVar3;
                            if (lVar3 != 0) {
                              Atlas_FrontEnd_FrontEndScene__SetGreyScaleLockedKartPartsOnLoad
                                        (lVar3,0,1,0);
                              if (*(long *)(param_1 + 0xf8) != 0) {
                                Atlas_FrontEnd_FrontEndScene__SetKartVisible
                                          (*(long *)(param_1 + 0xf8),0,0);
                                if (*(long *)(param_1 + 0xf8) != 0) {
                                  Atlas_FrontEnd_FrontEndScene__SetKartPose
                                            (*(long *)(param_1 + 0xf8),0,1,0,0,1,0,0);
                                  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                                  if (lVar3 != 0) {
                                    lVar3 = *(long *)(lVar3 + 0xa0);
                                    uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                    /*System.Action$$.ctor*/ func_0x02924c80(uVar4,param_1,uRam0000000003d53020,0);
                                    if (lVar3 != 0) {
                                      /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar3,uVar4,0);
                                      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                                      if (lVar3 != 0) {
                                        lVar3 = *(long *)(lVar3 + 0xa8);
                                        uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                        /*System.Action$$.ctor*/ func_0x02924c80(uVar4,param_1,uRam0000000003d53028,0);
                                        if (lVar3 != 0) {
                                          /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar3,uVar4,0);
                                          lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                                          if (lVar3 != 0) {
                                            lVar3 = *(long *)(lVar3 + 0xb0);
                                            uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                                            /*System.Action$$.ctor*/ func_0x02924c80(uVar4,param_1,uRam0000000003d53030,0);
                                            if (lVar3 != 0) {
                                              /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar3,uVar4,0);
                                              lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                                              if (((lVar3 != 0) && (*(long *)(lVar3 + 0xa0) != 0))
                                                 && (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar3 + 0xa0)
                                                                             ,0), lVar3 != 0)) {
                                                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,0,0);
                                                lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8
                                                                       );
                                                if (((lVar3 != 0) && (*(long *)(lVar3 + 0xa8) != 0))
                                                   && (lVar3 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar3 + 
                                                  0xa8),0), lVar3 != 0)) {
                                                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar3,0,0);
                                                  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,
                                                  uRam0000000003d40ff8);
                                                  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)
                                                     ) {
                                                    lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10
                                                                     );
                                                    if (((*(ushort *)(/*Atlas.UI.Screens.CharacterSelectScreen_TypeInfo*/ lRam0000000003d20660 + 0x132)
                                                          >> 10 & 1) != 0) &&
                                                       (*(int *)(/*Atlas.UI.Screens.CharacterSelectScreen_TypeInfo*/ lRam0000000003d20660 + 0xe0) == 0))
                                                    {
                                                      func_0x00f78ad0();
                                                    }
                                                    if (lVar3 != 0) {
                                                      lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,**(undefined8 **
                                                                                      )(
                                                  /*Atlas.UI.Screens.CharacterSelectScreen_TypeInfo*/ lRam0000000003d20660 + 0xb8),uRam0000000003d57280)
                                                  ;
                                                  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,
                                                  uRam0000000003d40ff8);
                                                  if (((lVar8 != 0) &&
                                                      (*(long *)(lVar8 + 0x20) != 0)) &&
                                                     (lVar8 = *(long *)(*(long *)(lVar8 + 0x20) +
                                                                       0x10), lVar8 != 0)) {
                                                    lVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar8,*(undefined8 *)
                                                                                   (*(long *)(
                                                  /*Atlas.UI.Screens.CharacterSelectScreen_TypeInfo*/ lRam0000000003d20660 + 0xb8) + 8),
                                                  uRam0000000003d57280);
                                                  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,
                                                  uRam0000000003d40ff8);
                                                  if ((lVar9 != 0) && (*(long *)(lVar9 + 0xb0) != 0)
                                                     ) {
                                                    iVar2 = 
                                                  Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                                            (*(long *)(lVar9 + 0xb0),lVar3,0);
                                                  if (iVar2 == 0) {
                                                    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,
                                                  uRam0000000003d40ff8);
                                                  if ((lVar3 != 0) && (*(long *)(lVar3 + 0xb0) != 0)
                                                     ) {
                                                    iVar2 = 
                                                  Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                                            (*(long *)(lVar3 + 0xb0),lVar8,0);
                                                  if (iVar2 == 0) {
                                                    return;
                                                  }
                                                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x58) != 0)
                                                     ) {
                                                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,
                                                                    *(long *)(lVar8 + 0x58),
                                                                    uRam0000000003d3dc70);
                                                    uStack_68 = uStack_90;
                                                    uStack_70 = uStack_98;
                                                    uStack_60 = uStack_88;
                                                    while (uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_70,
                                                                                                                                                                        
                                                  uRam0000000003d337d0), uVar4 = uStack_60,
                                                  (uVar10 & 1) != 0) {
                                                    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,
                                                  uRam0000000003d40ff8);
                                                  if (lVar3 == 0) goto code_r0x015436b0;
                                                  if (*(long *)(lVar3 + 0x98) == 0) {
                                                    func_0x00f78af4();
                                                    goto code_r0x015436bc;
                                                  }
                                                  /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar3 + 0x98),uVar4,
                                                                  uRam0000000003d3e188);
                                                  }
                                                  iStack_78 = iStack_78 + 1;
                                                  goto code_r0x01543680;
                                                  }
                                                  }
                                                  }
                                                  else if ((lVar3 != 0) &&
                                                          (*(long *)(lVar3 + 0x58) != 0)) {
                                                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,
                                                                    *(long *)(lVar3 + 0x58),
                                                                    uRam0000000003d3dc70);
                                                    uStack_68 = uStack_90;
                                                    uStack_70 = uStack_98;
                                                    uStack_60 = uStack_88;
                                                    while (uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_70,
                                                                                                                                                                        
                                                  uRam0000000003d337d0), uVar4 = uStack_60,
                                                  (uVar10 & 1) != 0) {
                                                    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,
                                                  uRam0000000003d40ff8);
                                                  if (lVar3 == 0) {
                                                    func_0x00f78af4();
                                                    goto code_r0x015436bc;
                                                  }
                                                  if (*(long *)(lVar3 + 0x98) == 0) {
                                                    func_0x00f78af4();
                                                    goto code_r0x015436bc;
                                                  }
                                                  /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar3 + 0x98),uVar4,
                                                                  uRam0000000003d3e188);
                                                  }
                                                  iStack_78 = 1;
code_r0x01543680:
                                                  uStack_80 = 0x292;
                                                  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_70,uRam0000000003d337c8);
                                                  return;
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
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x015436b0:
  func_0x00f78af4();
code_r0x015436bc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x15436c0);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x154370c | Atlas.UI.Screens.CharacterSelectScreen.OnAfterEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x0154379c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x015437a0) */
/* WARNING: Removing unreachable block (ram,0x015437a8) */
/* WARNING: Removing unreachable block (ram,0x015437d4) */
/* WARNING: Removing unreachable block (ram,0x015437fc) */
/* WARNING: Removing unreachable block (ram,0x01543808) */
/* WARNING: Removing unreachable block (ram,0x01543838) */
/* WARNING: Removing unreachable block (ram,0x01543848) */
/* WARNING: Removing unreachable block (ram,0x01543850) */
/* WARNING: Removing unreachable block (ram,0x0154386c) */
/* WARNING: Removing unreachable block (ram,0x01543878) */
/* WARNING: Removing unreachable block (ram,0x01543810) */
/* WARNING: Removing unreachable block (ram,0x015437e4) */
/* WARNING: Removing unreachable block (ram,0x0154382c) */
/* WARNING: Removing unreachable block (ram,0x015437ec) */

undefined8 Atlas_UI_Screens_CharacterSelectScreen__OnAfterEnter(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int extraout_w1;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  
  if ((bRam0000000003eb4f4f & 1) == 0) {
    func_0x00f78a20(0x3d302a0);
    func_0x00f78a20(0x3d302a8);
    func_0x00f78a20(0x3d35010);
    func_0x00f78a20(0x3d35018);
    func_0x00f78a20(0x3d35020);
    func_0x00f78a20(0x3d39448);
    func_0x00f78a20(0x3d39450);
    bRam0000000003eb4f4f = 1;
  }
  if ((bRam0000000003eb4f52 & 1) == 0) {
    func_0x00f78a20(0x3d2e180);
    func_0x00f78a20(0x3d2e188);
    func_0x00f78a20(0x3d2e190);
    func_0x00f78a20(0x3d33b98);
    func_0x00f78a20(0x3d33ba0);
    func_0x00f78a20(0x3d33ba8);
    func_0x00f78a20(0x3d391c8);
    func_0x00f78a20(0x3d391d0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f52 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0xf0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
  if ((int)uVar5 != 0) {
    if (*(long *)(param_1 + 0xf0) == 0) goto code_r0x01543a88;
    lVar2 = *(long *)(*(long *)(param_1 + 0xf0) + 0x38);
    if (lVar2 == 0) goto code_r0x01543a88;
    uVar5 = /*System.Collections.Generic.Dictionary<string, int>$$get_Count*/ func_0x01ece418(lVar2,uRam0000000003d2e190);
    if (0 < (int)uVar5) {
      if (*(long *)(param_1 + 0xf0) == 0) goto code_r0x01543a88;
      lVar2 = *(long *)(*(long *)(param_1 + 0xf0) + 0x38);
      if (lVar2 == 0) goto code_r0x01543a88;
      /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$GetEnumerator*/ func_0x01ecec64(&uStack_e8,lVar2,uRam0000000003d2e188);
      uStack_b8 = uStack_e0;
      uStack_c0 = uStack_e8;
      uStack_a8 = uStack_d0;
      plStack_b0 = plStack_d8;
      uStack_a0 = uStack_c8;
      while (uVar3 = /*System.Collections.Generic.Dictionary.Enumerator<UIAtlasButton, int>$$MoveNext*/ func_0x01fd38c0(&uStack_c0,uRam0000000003d33ba0), plVar4 = plStack_b0,
            (uVar3 & 1) != 0) {
        if (plStack_b0 == (long *)0x0) {
          func_0x00f78af4();
code_r0x01543a84:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1543a88);
          (*pcVar1)();
        }
        if (plStack_b0[9] == 0) {
          func_0x00f78af4();
          goto code_r0x01543a84;
        }
        /*Atlas.UI.UIAtlasButton$$PlayAnimation*/ func_0x01515608(plStack_b0[9],uStack_a8 & 0xffffffff,0);
        lVar6 = *(long *)(param_1 + 0x78);
        lVar2 = *plVar4;
        plVar4 = (long *)(**(code **)(lVar2 + 0x178))(plVar4,*(undefined8 *)(lVar2 + 0x180));
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01543a84;
        }
        uVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
        if (lVar6 == 0) {
          func_0x00f78af4(uVar5,uVar5);
          goto code_r0x01543a84;
        }
        /*Atlas.Stats.UnlockManager$$UnsetUnlockStatus*/ func_0x015226e4(lVar6,uVar5,2,0);
      }
      /*System.Collections.Generic.Dictionary.Enumerator<UIAtlasButton, int>$$Dispose*/ func_0x01fd3a3c(&uStack_c0,uRam0000000003d33b98);
      while ((*(long *)(param_1 + 0xf0) == 0 ||
             (lVar2 = *(long *)(*(long *)(param_1 + 0xf0) + 0x38), lVar2 == 0))) {
code_r0x01543a88:
        func_0x00f78af4();
        if (extraout_w1 != 1) goto code_r0x01543ae4;
        plVar4 = (long *)___cxa_begin_catch();
        lVar2 = *plVar4;
        ___cxa_end_catch();
        /*System.Collections.Generic.Dictionary.Enumerator<UIAtlasButton, int>$$Dispose*/ func_0x01fd3a3c(&uStack_c0,uRam0000000003d33b98);
        if (lVar2 != 0) {
          func_0x00f78ac0(lVar2,0);
code_r0x01543ae4:
          __Unwind_Resume();
          return 1;
        }
      }
      uVar5 = /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Clear*/ func_0x01ece8b4(lVar2,uRam0000000003d2e180);
    }
  }
  return uVar5;
}



// ============================================================
// RVA: 0x154387c | Atlas.UI.Screens.CharacterSelectScreen.PlayCurrentTabAnimations
// ============================================================

undefined8 Atlas_UI_Screens_CharacterSelectScreen__PlayCurrentTabAnimations(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int extraout_w1;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  
  if ((bRam0000000003eb4f52 & 1) == 0) {
    func_0x00f78a20(0x3d2e180);
    func_0x00f78a20(0x3d2e188);
    func_0x00f78a20(0x3d2e190);
    func_0x00f78a20(0x3d33b98);
    func_0x00f78a20(0x3d33ba0);
    func_0x00f78a20(0x3d33ba8);
    func_0x00f78a20(0x3d391c8);
    func_0x00f78a20(0x3d391d0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f52 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0xf0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
  if ((int)uVar5 != 0) {
    if (*(long *)(param_1 + 0xf0) == 0) goto LAB_01543a88;
    lVar2 = *(long *)(*(long *)(param_1 + 0xf0) + 0x38);
    if (lVar2 == 0) goto LAB_01543a88;
    uVar5 = /*System.Collections.Generic.Dictionary<string, int>$$get_Count*/ func_0x01ece418(lVar2,uRam0000000003d2e190);
    if (0 < (int)uVar5) {
      if (*(long *)(param_1 + 0xf0) == 0) goto LAB_01543a88;
      lVar2 = *(long *)(*(long *)(param_1 + 0xf0) + 0x38);
      if (lVar2 == 0) goto LAB_01543a88;
      /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$GetEnumerator*/ func_0x01ecec64(&uStack_88,lVar2,uRam0000000003d2e188);
      uStack_58 = uStack_80;
      uStack_60 = uStack_88;
      uStack_48 = uStack_70;
      plStack_50 = plStack_78;
      uStack_40 = uStack_68;
      while (uVar3 = /*System.Collections.Generic.Dictionary.Enumerator<UIAtlasButton, int>$$MoveNext*/ func_0x01fd38c0(&uStack_60,uRam0000000003d33ba0), plVar4 = plStack_50,
            (uVar3 & 1) != 0) {
        if (plStack_50 == (long *)0x0) {
          func_0x00f78af4();
code_r0x01543a84:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1543a88);
          (*pcVar1)();
        }
        if (plStack_50[9] == 0) {
          func_0x00f78af4();
          goto code_r0x01543a84;
        }
        /*Atlas.UI.UIAtlasButton$$PlayAnimation*/ func_0x01515608(plStack_50[9],uStack_48 & 0xffffffff,0);
        lVar6 = *(long *)(param_1 + 0x78);
        lVar2 = *plVar4;
        plVar4 = (long *)(**(code **)(lVar2 + 0x178))(plVar4,*(undefined8 *)(lVar2 + 0x180));
        if (plVar4 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x01543a84;
        }
        uVar5 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
        if (lVar6 == 0) {
          func_0x00f78af4(uVar5,uVar5);
          goto code_r0x01543a84;
        }
        /*Atlas.Stats.UnlockManager$$UnsetUnlockStatus*/ func_0x015226e4(lVar6,uVar5,2,0);
      }
      /*System.Collections.Generic.Dictionary.Enumerator<UIAtlasButton, int>$$Dispose*/ func_0x01fd3a3c(&uStack_60,uRam0000000003d33b98);
      while ((*(long *)(param_1 + 0xf0) == 0 ||
             (lVar2 = *(long *)(*(long *)(param_1 + 0xf0) + 0x38), lVar2 == 0))) {
LAB_01543a88:
        func_0x00f78af4();
        if (extraout_w1 != 1) goto code_r0x01543ae4;
        plVar4 = (long *)___cxa_begin_catch();
        lVar2 = *plVar4;
        ___cxa_end_catch();
        /*System.Collections.Generic.Dictionary.Enumerator<UIAtlasButton, int>$$Dispose*/ func_0x01fd3a3c(&uStack_60,uRam0000000003d33b98);
        if (lVar2 != 0) {
          func_0x00f78ac0(lVar2,0);
code_r0x01543ae4:
          __Unwind_Resume();
          return 1;
        }
      }
      uVar5 = /*System.Collections.Generic.Dictionary<UIAtlasButton, int>$$Clear*/ func_0x01ece8b4(lVar2,uRam0000000003d2e180);
    }
  }
  return uVar5;
}



// ============================================================
// RVA: 0x1543ae8 | Atlas.UI.Screens.CharacterSelectScreen.RequiresBeforeEnterCoroutine
// ============================================================

undefined8 Atlas_UI_Screens_CharacterSelectScreen__RequiresBeforeEnterCoroutine(void)

{
  return 1;
}



// ============================================================
// RVA: 0x1543af0 | Atlas.UI.Screens.CharacterSelectScreen.OnBeforeEnterCoroutine
// ============================================================

long Atlas_UI_Screens_CharacterSelectScreen__OnBeforeEnterCoroutine(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000003eb4f50 & 1) == 0) {
    func_0x00f78a20(0x3d26c28);
    bRam0000000003eb4f50 = 1;
  }
  lVar2 = func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.<OnBeforeEnterCoroutine>d__27_TypeInfo*/ uRam0000000003d26c28);
  /*Atlas.UI.Screens.CharacterSelectScreen.<OnBeforeEnterCoroutine>d__27$$.ctor*/ func_0x01547af8(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    return lVar2;
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4f51 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f51 = 1;
  }
  uVar4 = *(undefined8 *)(lVar2 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar4,0,0);
  if ((int)lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 200);
    uVar1 = *(undefined8 *)(lVar2 + 0xd0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar3 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar1,uVar4,0);
    if ((int)lVar3 != 0) {
      *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)(lVar2 + 200);
    }
  }
  return lVar3;
}



// ============================================================
// RVA: 0x1543b64 | Atlas.UI.Screens.CharacterSelectScreen.OnUpdate
// ============================================================

void Atlas_UI_Screens_CharacterSelectScreen__OnUpdate(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((bRam0000000003eb4f51 & 1) == 0) {
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4f51 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 200);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar3,0,0);
  if (iVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 200);
    uVar1 = *(undefined8 *)(param_1 + 0xd0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar1,uVar3,0);
    if (iVar2 != 0) {
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 200);
    }
  }
  return;
}



// ============================================================
// RVA: 0x1543c18 | Atlas.UI.Screens.CharacterSelectScreen.SetupData
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1543c8c | Atlas.UI.Screens.CharacterSelectScreen.ContinuePressed
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1543d4c | Atlas.UI.Screens.CharacterSelectScreen.OnAfterExit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1543f18 | Atlas.UI.Screens.CharacterSelectScreen.CharacterButtonPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x015442d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0154464c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0154474c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150c674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01544350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015442f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150c678) */
/* WARNING: Removing unreachable block (ram,0x0150c67c) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x01544750) */
/* WARNING: Removing unreachable block (ram,0x0154476c) */
/* WARNING: Removing unreachable block (ram,0x01544754) */
/* WARNING: Removing unreachable block (ram,0x015442d4) */
/* WARNING: Removing unreachable block (ram,0x015442fc) */
/* WARNING: Removing unreachable block (ram,0x01544304) */
/* WARNING: Removing unreachable block (ram,0x0154431c) */
/* WARNING: Removing unreachable block (ram,0x01544330) */
/* WARNING: Removing unreachable block (ram,0x01544338) */
/* WARNING: Removing unreachable block (ram,0x01544344) */
/* WARNING: Removing unreachable block (ram,0x015442d8) */
/* WARNING: Removing unreachable block (ram,0x01544354) */
/* WARNING: Removing unreachable block (ram,0x01544364) */
/* WARNING: Removing unreachable block (ram,0x0154436c) */
/* WARNING: Removing unreachable block (ram,0x01544378) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_CharacterSelectScreen__CharacterButtonPressed
               (long *param_1,long param_2,long param_3,undefined1 *param_4)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  long *plVar18;
  long unaff_x24;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 ***pppuVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 *puStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  long *plStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  plVar18 = (long *)0x3eb4000;
  lVar22 = 0x3d40fe8;
  puVar13 = param_4;
  if ((bRam0000000003eb4f56 & 1) == 0) {
    func_0x00f78a20(0x3d20658);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2e250);
    func_0x00f78a20(0x3d39fe8);
    func_0x00f78a20(0x3d39ff0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d40fe8);
    func_0x00f78a20(0x3d40ff8);
    bRam0000000003eb4f56 = 1;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
  if (lVar7 == 0) {
LAB_0154439c:
    puStack_58 = &Atlas_UI_Screens_CharacterSelectScreen__SetSkin;
    param_1 = (long *)func_0x00f78af4();
  }
  else {
    plVar18 = *(long **)(lVar7 + 200);
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
    if (((lVar7 == 0) || (*(long *)(lVar7 + 200) == 0)) || (plVar18 == (long *)0x0))
    goto LAB_0154439c;
    unaff_x24 = 0x3d23990;
    lVar19 = 0x3d23990;
    puVar13 = (undefined1 *)0x0;
    /*Atlas.UI.TabController$$SetSelectedGameObjectInTab*/ func_0x01508ae0(plVar18,*(undefined8 *)(*(long *)(lVar7 + 200) + 0x28),param_3);
    lVar7 = param_1[0x16];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_2,lVar7,0);
    if (iVar6 == 0) {
      return;
    }
    plVar18 = (long *)param_1[0x18];
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar18,0,0);
    if (iVar6 != 0) {
      plVar8 = (long *)param_1[0x18];
      if ((plVar8 != (long *)0x0) &&
         (lVar7 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180)),
         lVar7 != 0)) {
        iVar6 = /*Atlas.UI.LoadoutMetagameData$$get_IsLocked*/ func_0x014881dc(lVar7,0);
        if (iVar6 == 0) goto LAB_0154417c;
        unaff_x24 = lVar19;
        if ((param_1[0x16] != 0) && (param_1[0x1b] != 0)) {
          plVar18 = (long *)param_1[0x18];
          lVar7 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(param_1[0x1b],*(undefined8 *)(param_1[0x16] + 0x18),
                                  uRam0000000003d2e250);
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x18) == 0) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            unaff_x24 = lVar7;
            if (plVar18 != (long *)0x0) {
              (**(code **)(*plVar18 + 0x188))
                        (plVar18,*(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x20),
                         *(undefined8 *)(*plVar18 + 400));
              if (param_1[0x16] != 0) {
                plVar18 = (long *)param_1[0xf];
                uVar20 = *(undefined8 *)(param_1[0x16] + 0x18);
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                unaff_x24 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
                plVar8 = (long *)param_1[0x18];
                if (((plVar8 != (long *)0x0) &&
                    (plVar8 = (long *)(**(code **)(*plVar8 + 0x178))
                                                (plVar8,*(undefined8 *)(*plVar8 + 0x180)),
                    plVar8 != (long *)0x0)) &&
                   (plVar8 = (long *)(**(code **)(*plVar8 + 0x178))
                                               (plVar8,*(undefined8 *)(*plVar8 + 0x180)),
                   plVar8 != (long *)0x0)) {
                  uVar20 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
                  uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
                  if (plVar18 != (long *)0x0) {
                    puVar13 = (undefined1 *)0x0;
                    /*Atlas.Stats.UnlockManager$$AddOrUpdateCharacterLastUsedSkin*/ func_0x01521520(plVar18,unaff_x24,uVar20);
                    goto LAB_0154417c;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0154439c;
    }
LAB_0154417c:
    param_1[0x18] = (long)param_4;
    param_1[0x19] = param_3;
    param_1[0x16] = param_2;
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
    if ((lVar7 == 0) || (plVar8 = *(long **)(lVar7 + 0x78), plVar8 == (long *)0x0))
    goto LAB_0154439c;
    lVar7 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    if (lVar7 == 0) {
LAB_01544224:
      param_4 = (undefined1 *)0x3d40ff8;
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
      if (lVar7 != 0) {
        puVar17 = *(undefined1 **)(lVar7 + 0x50);
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x20) != 0)) {
          plVar18 = *(long **)(*(long *)(lVar7 + 0x20) + 0x10);
          lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
          if (lVar7 != 0) {
            unaff_x24 = *(long *)(lVar7 + 0x88);
            param_4 = (undefined1 *)func_0x00f78aec(/*Atlas.UI.CharacterMetagameData_TypeInfo*/ uRam0000000003d20658);
            /*Atlas.UI.LoadoutMetagameData$$.ctor*/ func_0x01488030(param_4,param_2,param_2,puVar17,plVar18,unaff_x24,0);
            *(long *)(param_4 + 0x60) = param_2;
            lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
            puVar13 = puVar17;
            if ((lVar7 != 0) && (plVar8 = *(long **)(lVar7 + 0x78), plVar8 != (long *)0x0)) {
              (**(code **)(*plVar8 + 0x188))(plVar8,param_4,*(undefined8 *)(*plVar8 + 400));
              puStack_58 = (undefined *)0x15442d4;
              puVar13 = puVar17;
              goto code_r0x015443a0;
            }
          }
        }
      }
      goto LAB_0154439c;
    }
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
    if (((lVar7 == 0) || (plVar8 = *(long **)(lVar7 + 0x78), plVar8 == (long *)0x0)) ||
       (plVar8 = (long *)(**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180)),
       plVar8 == (long *)0x0)) goto LAB_0154439c;
    uVar20 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar20,0);
    if (param_2 == 0) goto LAB_0154439c;
    uVar9 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar20,*(undefined8 *)(param_2 + 0x18),0);
    if ((uVar9 & 1) != 0) goto LAB_01544224;
    puStack_58 = &LAB_015442fc;
  }
code_r0x015443a0:
  puVar4 = &stack0xffffffffffffff60;
  ppuVar3 = &puStack_60;
  lVar7 = 0x3d26c18;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f57 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2e250);
    func_0x00f78a20(0x3d39fd0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3f3e8);
    func_0x00f78a20(0x3d1e558);
    func_0x00f78a20(0x3d62388);
    func_0x00f78a20(0x3d26c18);
    func_0x00f78a20(0x3d40fe8);
    func_0x00f78a20(0x3d40ff0);
    func_0x00f78a20(0x3d40ff8);
    bRam0000000003eb4f57 = 1;
  }
  puVar17 = (undefined1 *)func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass34_0_TypeInfo*/ uRam0000000003d26c18);
  /*Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass34_0$$.ctor*/ func_0x015479b8(puVar17,0);
  lVar19 = 0x3d40fe8;
  if ((param_1[0x16] != 0) && (param_1[0xf] != 0)) {
    lVar14 = 0x3d21270;
    lVar21 = 0x3d21270;
    lVar7 = /*Atlas.Stats.UnlockManager$$GetLastUsedSkinIDForCharacter*/ func_0x01521360(param_1[0xf],*(undefined8 *)(param_1[0x16] + 0x18),0);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar7,0);
    unaff_x24 = lVar14;
    lVar19 = lVar22;
    if (puVar17 != (undefined1 *)0x0) {
      *(undefined8 *)(puVar17 + 0x10) = uVar20;
      if ((param_1[0x16] != 0) && (unaff_x24 = lVar21, param_1[0x1b] != 0)) {
        lVar19 = 0x3d3f000;
        lVar22 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(param_1[0x1b],*(undefined8 *)(param_1[0x16] + 0x18),
                                 uRam0000000003d2e250);
        param_4 = (undefined1 *)func_0x00f78aec(/*System.Predicate<CharacterMetagameData>_TypeInfo*/ uRam0000000003d1e558);
        puVar13 = puRam0000000003d3f3e8;
        /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(param_4,puVar17,uRam0000000003d62388);
        lVar7 = 0;
        plVar18 = (long *)0x3d62000;
        if (lVar22 != 0) {
          plVar8 = (long *)0x3d40fe8;
          lVar7 = /*System.Collections.Generic.List<RuntimeManager.AttachedInstance>$$Find*/ func_0x024278b4(lVar22,param_4,uRam0000000003d39fd0);
          auVar31._8_8_ = puVar17;
          auVar31._0_8_ = lVar7;
          lVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
          plVar18 = (long *)0x3d40fe8;
          if ((lVar22 != 0) && (plVar10 = *(long **)(lVar22 + 0x80), plVar10 != (long *)0x0)) {
            lVar22 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
            plVar18 = plVar8;
            if (lVar22 == 0) {
code_r0x01544668:
              lVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d40ff0);
              if (lVar22 != 0) {
                if (*(long *)(lVar22 + 0x18) != 0) {
                  puVar13 = (undefined1 *)0x0;
                  /*Atlas.UI.Screens.CharacterSelectScreen.CharacterSelected$$Invoke*/ func_0x01549fe0(*(long *)(lVar22 + 0x18),0,*(undefined8 *)(puVar17 + 0x10));
                }
                if (param_1[0x1f] != 0) {
                  puVar13 = (undefined1 *)0x0;
                  lVar7 = Atlas_FrontEnd_FrontEndScene__RequestLoadCharacter
                                    (param_1[0x1f],0,*(undefined8 *)(puVar17 + 0x10));
                  if ((param_1[0x1f] != 0) &&
                     (lVar22 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(param_1[0x1f],0,0),
                     lVar22 != 0)) {
                    param_4 = (undefined1 *)0x3d40000;
                    Atlas_Gameplay_Kart_KartFEAnimator__PlayCharacterSelectScreen(lVar22,0);
                    lVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
                    if ((lVar22 != 0) && (*(long *)(lVar22 + 0x48) != 0)) {
                      param_4 = (undefined1 *)/*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar22 + 0x48),0);
                      plVar18 = *(long **)(puVar17 + 0x10);
                      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar20 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(plVar18,0);
                      if (param_4 != (undefined1 *)0x0) {
                        *(undefined8 *)(param_4 + 0x80) = uVar20;
                        uVar20 = (**(code **)(*param_1 + 0x268))
                                           (param_1,*(undefined8 *)(*param_1 + 0x270));
                        auVar30._8_8_ = uVar20;
                        auVar30._0_8_ = param_1;
                        puVar24 = &UNK_01544750;
                        unaff_x24 = lVar14;
                        goto code_r0x01544790;
                      }
                    }
                  }
                }
              }
            }
            else {
              lVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
              if ((lVar22 != 0) && (plVar8 = *(long **)(lVar22 + 0x80), plVar8 != (long *)0x0)) {
                (**(code **)(*plVar8 + 0x188))(plVar8,lVar7,*(undefined8 *)(*plVar8 + 400));
                lVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                if (lVar22 != 0) {
                  param_4 = *(undefined1 **)(lVar22 + 0x88);
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_4,0,0);
                  if (iVar6 == 0) {
                    plVar8 = (long *)param_1[0x18];
                    if (plVar8 != (long *)0x0) {
                      (**(code **)(*plVar8 + 0x188))(plVar8,lVar7,*(undefined8 *)(*plVar8 + 400));
                      goto code_r0x01544668;
                    }
                  }
                  else {
                    lVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                    if ((lVar22 != 0) && (plVar8 = *(long **)(lVar22 + 0x88), plVar8 != (long *)0x0)
                       ) {
                      (**(code **)(*plVar8 + 0x188))(plVar8,lVar7,*(undefined8 *)(*plVar8 + 400));
                      lVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                      if ((lVar22 != 0) &&
                         ((*(long *)(lVar22 + 0x88) != 0 &&
                          (puVar11 = (undefined1 *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar22 + 0x88),0),
                          lVar7 != 0)))) {
                        uVar20 = /*Atlas.UI.LoadoutMetagameData$$get_IsLocked*/ func_0x014881dc(lVar7,0);
                        param_4 = (undefined1 *)0x0;
                        if (puVar11 != (undefined1 *)0x0) {
                          puVar24 = &UNK_01544650;
                          puVar17 = puVar11;
code_r0x0322ef1c:
                          *(undefined1 **)(puVar4 + -0x30) = puVar17;
                          *(undefined1 (*) [16])(puVar4 + -0x28) = auVar31;
                          *(long **)(puVar4 + -0x18) = param_1;
                          *(undefined1 ***)(puVar4 + -0x10) = ppuVar3;
                          *(undefined **)(puVar4 + -8) = puVar24;
                          if (pcRam0000000003ebf4c0 == (code *)0x0) {
                            pcRam0000000003ebf4c0 =
                                 (code *)func_0x00f789d4(
                                                  "UnityEngine.GameObject::SetActive(System.Boolean)"
                                                  );
                          }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*pcRam0000000003ebf4c0)(puVar11,uVar20);
                          return;
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
  puVar24 = &Atlas_UI_Screens_CharacterSelectScreen__SetVisualsForCanProgress;
  auVar30 = func_0x00f78af4();
code_r0x01544790:
  uVar16 = auVar30._0_8_;
  ppuVar1 = &puStack_d0;
  pppuVar23 = &ppuStack_b0;
  uVar20 = 0x3d40ff8;
  puStack_d0 = param_4;
  plStack_c8 = (long *)lVar7;
  puStack_c0 = puVar17;
  plStack_b8 = param_1;
  ppuStack_b0 = ppuVar3;
  puStack_a8 = puVar24;
  if ((bRam0000000003eb4f59 & 1) == 0) {
    func_0x00f78a20(0x3d40ff8);
    bRam0000000003eb4f59 = 1;
  }
  lVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar16,uRam0000000003d40ff8);
  if ((lVar22 != 0) && (*(long *)(lVar22 + 0xb8) != 0)) {
    puVar13 = (undefined1 *)0x1;
    /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar22 + 0xb8),6,auVar30._8_8_,1,0);
    lVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar16,uRam0000000003d40ff8);
    if ((lVar22 != 0) && (*(long *)(lVar22 + 0xb8) != 0)) {
      puVar13 = (undefined1 *)0x1;
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar22 + 0xb8),8,auVar30._8_4_ ^ 1,1,0);
      lVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar16,uRam0000000003d40ff8);
      plVar10 = plStack_b8;
      puVar11 = puStack_c0;
      plVar8 = plStack_c8;
      puVar17 = puStack_d0;
      if ((lVar22 != 0) && (*(long *)(lVar22 + 0xb8) != 0)) {
        uVar20 = 0;
        lVar22 = *(long *)(*(long *)(lVar22 + 0xb8) + 0x28);
        if (lVar22 != 0) {
          *(char *)(lVar22 + 0x80) = auVar30[8];
          return;
        }
        lVar22 = func_0x00f78af4();
        puStack_d0 = puVar11;
        plStack_c8 = plVar10;
        plStack_b8 = (long *)&Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
        ppuVar3 = &puStack_c0;
        if (*(ulong *)(lVar22 + 0x28) == 0) {
          puVar24 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
          puStack_c0 = (undefined1 *)&ppuStack_b0;
          auVar31 = func_0x00f78af4();
          auVar29._8_8_ = puVar13;
          auVar29._0_8_ = puVar11;
        }
        else {
          auVar31._8_8_ = 0;
          auVar31._0_8_ = *(ulong *)(lVar22 + 0x28);
          uVar20 = 0;
          auVar29._8_8_ = 1;
          auVar29._0_8_ = puVar11;
          puVar24 = &UNK_0150bbf4;
          ppuVar1 = &puStack_d0;
          puStack_c0 = (undefined1 *)&ppuStack_b0;
        }
        do {
          lVar7 = auVar31._0_8_;
          *(long *)((long)ppuVar1 + -0x20) = auVar29._0_8_;
          *(long *)((long)ppuVar1 + -0x18) = lVar22;
          *(undefined1 ***)((long)ppuVar1 + -0x10) = ppuVar3;
          *(undefined **)((long)ppuVar1 + -8) = puVar24;
          uVar12 = auVar31._8_4_;
          if (uVar12 == 0xffffffff) {
            return;
          }
          lVar14 = *(long *)(lVar7 + 0x70);
          if (lVar14 == 0) {
            func_0x00f78af4();
            lVar21 = lVar22;
          }
          else {
            lVar21 = auVar31._8_8_;
            if (uVar12 < *(uint *)(lVar14 + 0x18)) {
              uVar15 = 2;
              if ((int)uVar20 == 0) {
                uVar15 = 0;
              }
              *(undefined4 *)(lVar14 + (long)(int)uVar12 * 0x60 + 0x5c) = uVar15;
              if ((auVar29._8_8_ & 1) == 0) {
                /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(lVar7,auVar31._8_8_);
              }
              puVar4 = (undefined1 *)((long)ppuVar1 + -0x130);
              *(undefined8 *)((long)ppuVar1 + -0x60) = unaff_x28;
              *(undefined8 *)((long)ppuVar1 + -0x58) = unaff_x27;
              *(undefined8 *)((long)ppuVar1 + -0x50) = unaff_x26;
              *(long *)((long)ppuVar1 + -0x48) = lVar19;
              *(long *)((long)ppuVar1 + -0x40) = unaff_x24;
              *(long **)((long)ppuVar1 + -0x38) = plVar18;
              *(undefined1 **)((long)ppuVar1 + -0x30) = puVar17;
              *(long **)((long)ppuVar1 + -0x28) = plVar8;
              *(undefined8 *)((long)ppuVar1 + -0x20) = *(undefined8 *)((long)ppuVar1 + -0x20);
              *(undefined8 *)((long)ppuVar1 + -0x18) = *(undefined8 *)((long)ppuVar1 + -0x18);
              *(undefined8 *)((long)ppuVar1 + -0x10) = *(undefined8 *)((long)ppuVar1 + -0x10);
              *(undefined8 *)((long)ppuVar1 + -8) = *(undefined8 *)((long)ppuVar1 + -8);
              ppuVar3 = (undefined1 **)((long)ppuVar1 + -0x10);
              param_1 = (long *)0x3eb4000;
              if ((bRam0000000003eb4d5b & 1) == 0) {
                func_0x00f78a20(0x3d2a408);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb4d5b = 1;
              }
              lVar22 = *(long *)(lVar7 + 0x70);
              if (lVar22 == 0) goto code_r0x0150c7d4;
              if (*(uint *)(lVar22 + 0x18) <= uVar12) goto code_r0x0150c7d8;
              lVar19 = (long)(int)uVar12;
              lVar22 = lVar22 + lVar19 * 0x60;
              unaff_x26 = *(undefined8 *)(lVar22 + 0x20);
              puVar17 = *(undefined1 **)(lVar22 + 0x28);
              uVar20 = *(undefined8 *)(lVar22 + 0x30);
              uVar25 = *(undefined8 *)(lVar22 + 0x48);
              uVar16 = *(undefined8 *)(lVar22 + 0x40);
              *(undefined8 *)((long)ppuVar1 + -0xe8) = *(undefined8 *)(lVar22 + 0x38);
              *(undefined8 *)((long)ppuVar1 + -0xf0) = uVar20;
              *(undefined8 *)((long)ppuVar1 + -0xd8) = uVar25;
              *(undefined8 *)((long)ppuVar1 + -0xe0) = uVar16;
              param_1 = *(long **)(lVar22 + 0x50);
              iVar6 = *(int *)(lVar22 + 0x58);
              iVar5 = *(int *)(lVar22 + 0x5c);
              plVar18 = *(long **)(lVar22 + 0x60);
              unaff_x24 = *(long *)(lVar22 + 0x68);
              uVar20 = *(undefined8 *)(lVar22 + 0x70);
              *(undefined8 *)((long)ppuVar1 + -0xf8) = *(undefined8 *)(lVar22 + 0x78);
              *(undefined8 *)((long)ppuVar1 + -0x100) = uVar20;
              if (iVar5 == iVar6) {
code_r0x0150c768:
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_1,0,0);
                if (iVar5 == 0) {
                  return;
                }
                if (param_1 != (long *)0x0) {
                  /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(param_1,iVar6 == 2,0);
                  return;
                }
              }
              else if (iVar6 == 2) {
                if (iVar5 == 0) {
                  if (unaff_x24 == 0) goto code_r0x0150c7d4;
                  uVar16 = *(undefined8 *)(lVar22 + 0x38);
                  uVar20 = *(undefined8 *)(lVar22 + 0x30);
                  uVar26 = *(undefined8 *)(lVar22 + 0x48);
                  uVar25 = *(undefined8 *)(lVar22 + 0x40);
                  *(undefined8 *)((long)ppuVar1 + -0x118) = uVar16;
                  *(undefined8 *)((long)ppuVar1 + -0x120) = uVar20;
                  *(undefined8 *)((long)ppuVar1 + -0x108) = uVar26;
                  *(undefined8 *)((long)ppuVar1 + -0x110) = uVar25;
                  uVar28 = *(undefined8 *)(lVar22 + 0x78);
                  uVar27 = *(undefined8 *)(lVar22 + 0x70);
                  *(undefined8 *)((long)ppuVar1 + -0x128) = uVar28;
                  *(undefined8 *)((long)ppuVar1 + -0x130) = uVar27;
                  *(undefined8 *)((long)ppuVar1 + -200) = unaff_x26;
                  *(undefined1 **)((long)ppuVar1 + -0xc0) = puVar17;
                  *(undefined8 *)((long)ppuVar1 + -0xb0) = uVar16;
                  *(undefined8 *)((long)ppuVar1 + -0xb8) = uVar20;
                  *(undefined8 *)((long)ppuVar1 + -0xa0) = uVar26;
                  *(undefined8 *)((long)ppuVar1 + -0xa8) = uVar25;
                  *(long **)((long)ppuVar1 + -0x98) = param_1;
                  *(undefined8 *)((long)ppuVar1 + -0x90) = _UNK_033f8620;
                  *(long **)((long)ppuVar1 + -0x88) = plVar18;
                  *(long *)((long)ppuVar1 + -0x80) = unaff_x24;
                  *(undefined8 *)((long)ppuVar1 + -0x70) = uVar28;
                  *(undefined8 *)((long)ppuVar1 + -0x78) = uVar27;
                  /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(unaff_x24,(undefined1 *)((long)ppuVar1 + -200),
                                  uRam0000000003d2a408);
                  iVar6 = 1;
                }
                else {
                  iVar6 = 2;
                }
code_r0x0150c72c:
                lVar22 = *(long *)(lVar7 + 0x70);
                if (lVar22 != 0) {
                  if (*(uint *)(lVar22 + 0x18) <= uVar12) goto code_r0x0150c7d8;
                  lVar22 = lVar22 + lVar19 * 0x60;
                  *(undefined8 *)(lVar22 + 0x20) = unaff_x26;
                  *(undefined1 **)(lVar22 + 0x28) = puVar17;
                  uVar20 = *(undefined8 *)((long)ppuVar1 + -0xf0);
                  uVar25 = *(undefined8 *)((long)ppuVar1 + -0xd8);
                  uVar16 = *(undefined8 *)((long)ppuVar1 + -0xe0);
                  *(undefined8 *)(lVar22 + 0x38) = *(undefined8 *)((long)ppuVar1 + -0xe8);
                  *(undefined8 *)(lVar22 + 0x30) = uVar20;
                  *(undefined8 *)(lVar22 + 0x48) = uVar25;
                  *(undefined8 *)(lVar22 + 0x40) = uVar16;
                  *(long **)(lVar22 + 0x50) = param_1;
                  *(int *)(lVar22 + 0x58) = iVar6;
                  *(int *)(lVar22 + 0x5c) = iVar5;
                  *(long **)(lVar22 + 0x60) = plVar18;
                  *(long *)(lVar22 + 0x68) = unaff_x24;
                  uVar20 = *(undefined8 *)((long)ppuVar1 + -0x100);
                  *(undefined8 *)(lVar22 + 0x78) = *(undefined8 *)((long)ppuVar1 + -0xf8);
                  *(undefined8 *)(lVar22 + 0x70) = uVar20;
                  goto code_r0x0150c768;
                }
              }
              else {
                if (iVar6 != 0) goto code_r0x0150c72c;
                if (iVar5 != 2) {
                  iVar6 = 0;
                  goto code_r0x0150c72c;
                }
                if ((puVar17 != (undefined1 *)0x0) &&
                   (puVar11 = (undefined1 *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(puVar17,0), puVar11 != (undefined1 *)0x0
                   )) {
                  uVar20 = 1;
                  puVar24 = &UNK_0150c678;
                  goto code_r0x0322ef1c;
                }
              }
code_r0x0150c7d4:
              func_0x00f78af4();
code_r0x0150c7d8:
              uVar20 = func_0x00f78b24();
              auVar30 = func_0x00f78ac0(uVar20,0);
              lVar22 = auVar30._8_8_;
              *(undefined8 *)((long)ppuVar1 + -0x180) = unaff_x26;
              *(long *)((long)ppuVar1 + -0x178) = lVar19;
              *(long *)((long)ppuVar1 + -0x170) = unaff_x24;
              *(long **)((long)ppuVar1 + -0x168) = plVar18;
              *(undefined1 **)((long)ppuVar1 + -0x160) = puVar17;
              *(undefined1 (*) [16])((long)ppuVar1 + -0x158) = auVar31;
              *(long **)((long)ppuVar1 + -0x148) = param_1;
              *(undefined1 ***)((long)ppuVar1 + -0x140) = ppuVar3;
              *(undefined **)((long)ppuVar1 + -0x138) =
                   &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
              if ((bRam0000000003eb4d55 & 1) == 0) {
                func_0x00f78a20(0x3d5e6e0);
                func_0x00f78a20(0x3d5e7a8);
                func_0x00f78a20(0x3d5e7d0);
                func_0x00f78a20(0x3d5e850);
                func_0x00f78a20(0x3d5e888);
                bRam0000000003eb4d55 = 1;
              }
              uVar20 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar22 + 0x18),*(undefined4 *)(lVar22 + 0x1c)
                                       ,*(undefined4 *)(lVar22 + 0x20),_UNK_033f8144,
                                       *(undefined8 *)(lVar22 + 0x10),0,0);
              uVar20 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar20,10,uRam0000000003d5e7a8);
              uVar20 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar20,*(undefined8 *)(lVar22 + 0x58),uRam0000000003d5e6e0);
              uVar20 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar20,1,uRam0000000003d5e888);
              lVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar20,auVar30._0_8_,uRam0000000003d5e850);
              if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
                *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar22 + 0x10);
              }
              return;
            }
          }
          uVar20 = func_0x00f78b24();
          auVar31 = func_0x00f78ac0(uVar20,0);
          puVar2 = (undefined1 *)((long)ppuVar1 + -0x30);
          puVar13 = (undefined1 *)((long)ppuVar1 + -0x30);
          *(undefined1 **)((long)ppuVar1 + -0x30) = (undefined1 *)((long)ppuVar1 + -0x10);
          *(undefined **)((long)ppuVar1 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
          lVar22 = *(long *)(auVar31._0_8_ + 0x28);
          auVar29._8_8_ = auVar31._8_8_;
          auVar29._0_8_ = lVar22;
          if (lVar22 == 0) {
            puVar24 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
            auVar29 = func_0x00f78af4();
          }
          else {
            puVar2 = (undefined1 *)((long)ppuVar1 + -0x20);
            puVar13 = *(undefined1 **)((long)ppuVar1 + -0x30);
            puVar24 = *(undefined **)((long)ppuVar1 + -0x28);
          }
          lVar22 = auVar29._8_8_;
          ppuVar1 = (undefined1 **)(puVar2 + -0x20);
          *(long *)(puVar2 + -0x20) = lVar7;
          *(long *)(puVar2 + -0x18) = lVar21;
          *(undefined1 **)(puVar2 + -0x10) = puVar13;
          *(undefined **)(puVar2 + -8) = puVar24;
          ppuVar3 = (undefined1 **)(puVar2 + -0x10);
          auVar31._8_8_ = 4;
          auVar31._0_8_ = auVar29._0_8_;
          uVar20 = 0;
          puVar24 = &UNK_0150bd10;
        } while( true );
      }
    }
  }
  puVar24 = &Atlas_UI_Screens_CharacterSelectScreen__PlayCharacterVO;
  auVar31 = func_0x00f78af4();
  ppuVar3 = &puStack_d0;
  do {
    uVar16 = auVar31._8_8_;
    lVar22 = auVar31._0_8_;
    *(undefined8 *)((long)ppuVar3 + -0x30) = 0x3eb4000;
    *(undefined8 *)((long)ppuVar3 + -0x28) = uVar20;
    *(undefined1 (*) [16])((long)ppuVar3 + -0x20) = auVar30;
    *(undefined1 ****)((long)ppuVar3 + -0x10) = pppuVar23;
    *(undefined **)((long)ppuVar3 + -8) = puVar24;
    pppuVar23 = (undefined1 ***)((long)ppuVar3 + -0x10);
    uVar20 = 0x3eb4000;
    if ((bRam0000000003eb4f58 & 1) == 0) {
      func_0x00f78a20(0x3d57270);
      func_0x00f78a20(0x3d574f0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f58 = 1;
    }
    *(undefined8 *)((long)ppuVar3 + -0x38) = 0;
    if ((*(long *)(lVar22 + 0x80) != 0) &&
       (lVar7 = *(long *)(*(long *)(lVar22 + 0x80) + 0x10), lVar7 != 0)) {
      puVar13 = puRam0000000003d574f0;
      iVar6 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar7,uVar16,(undefined1 *)((long)ppuVar3 + -0x38));
      if (iVar6 == 0) {
        return;
      }
      if (*(long *)((long)ppuVar3 + -0x38) != 0) {
        uVar9 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)((long)ppuVar3 + -0x38) + 0x70),0);
        if ((uVar9 & 1) == 0) {
          if (((*(long *)(lVar22 + 0x80) == 0) || (*(long *)((long)ppuVar3 + -0x38) == 0)) ||
             (lVar7 = *(long *)(*(long *)(lVar22 + 0x80) + 0x10), lVar7 == 0))
          goto code_r0x01544998;
          uVar16 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar7,*(undefined8 *)(*(long *)((long)ppuVar3 + -0x38) + 0x70),
                                   uRam0000000003d57270);
        }
        else {
          uVar16 = *(undefined8 *)((long)ppuVar3 + -0x38);
        }
        uVar20 = *(undefined8 *)(lVar22 + 0xb8);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar16,uVar20,0);
        if (iVar6 == 0) {
          return;
        }
        *(undefined8 *)(lVar22 + 0xb8) = uVar16;
        lVar7 = *(long *)((long)ppuVar3 + -0x38);
        if (lVar7 != 0) {
          /*Atlas.Audio.UIAudio$$SetSelectedCharacter*/ func_0x01516b9c(*(undefined8 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0xa8),0);
          return;
        }
      }
    }
code_r0x01544998:
    auVar30._8_8_ = lVar22;
    auVar30._0_8_ = uVar16;
    puVar24 = &Atlas_UI_Screens_CharacterSelectScreen__KartPartLoaded;
    auVar31 = func_0x00f78af4();
    ppuVar3 = (undefined1 **)((long)ppuVar3 + -0x40);
    if ((int)puVar13 != 1) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x15443a0 | Atlas.UI.Screens.CharacterSelectScreen.SetSkin
// ============================================================

/* WARNING: Possible PIC construction at 0x0154474c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x01544750) */
/* WARNING: Removing unreachable block (ram,0x0154476c) */
/* WARNING: Removing unreachable block (ram,0x01544754) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_CharacterSelectScreen__SetSkin
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  undefined4 uVar14;
  long *plVar15;
  undefined1 *unaff_x22;
  long unaff_x23;
  long lVar16;
  long unaff_x24;
  long lVar17;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 **ppuVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 *puStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  lVar7 = 0x3d26c18;
  if ((bRam0000000003eb4f57 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2e250);
    func_0x00f78a20(0x3d39fd0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3f3e8);
    func_0x00f78a20(0x3d1e558);
    func_0x00f78a20(0x3d62388);
    func_0x00f78a20(0x3d26c18);
    func_0x00f78a20(0x3d40fe8);
    func_0x00f78a20(0x3d40ff0);
    func_0x00f78a20(0x3d40ff8);
    bRam0000000003eb4f57 = 1;
  }
  puVar6 = (undefined1 *)func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass34_0_TypeInfo*/ uRam0000000003d26c18);
  /*Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass34_0$$.ctor*/ func_0x015479b8(puVar6,0);
  if ((param_1[0x16] != 0) && (param_1[0xf] != 0)) {
    lVar11 = 0x3d21270;
    lVar17 = 0x3d21270;
    lVar7 = /*Atlas.Stats.UnlockManager$$GetLastUsedSkinIDForCharacter*/ func_0x01521360(param_1[0xf],*(undefined8 *)(param_1[0x16] + 0x18),0);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar7,0);
    unaff_x24 = lVar11;
    if (puVar6 != (undefined1 *)0x0) {
      *(undefined8 *)(puVar6 + 0x10) = uVar8;
      if ((param_1[0x16] != 0) && (unaff_x24 = lVar17, param_1[0x1b] != 0)) {
        unaff_x25 = 0x3d3f000;
        lVar17 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(param_1[0x1b],*(undefined8 *)(param_1[0x16] + 0x18),
                                 uRam0000000003d2e250);
        unaff_x22 = (undefined1 *)func_0x00f78aec(/*System.Predicate<CharacterMetagameData>_TypeInfo*/ uRam0000000003d1e558);
        param_4 = uRam0000000003d3f3e8;
        /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(unaff_x22,puVar6,uRam0000000003d62388);
        lVar7 = 0;
        unaff_x23 = 0x3d62000;
        if (lVar17 != 0) {
          lVar16 = 0x3d40fe8;
          lVar7 = /*System.Collections.Generic.List<RuntimeManager.AttachedInstance>$$Find*/ func_0x024278b4(lVar17,unaff_x22,uRam0000000003d39fd0);
          lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
          unaff_x23 = 0x3d40fe8;
          if ((lVar17 != 0) && (plVar9 = *(long **)(lVar17 + 0x80), plVar9 != (long *)0x0)) {
            lVar17 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
            unaff_x23 = lVar16;
            if (lVar17 == 0) {
LAB_01544668:
              lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d40ff0);
              if (lVar17 != 0) {
                if (*(long *)(lVar17 + 0x18) != 0) {
                  param_4 = 0;
                  /*Atlas.UI.Screens.CharacterSelectScreen.CharacterSelected$$Invoke*/ func_0x01549fe0(*(long *)(lVar17 + 0x18),0,*(undefined8 *)(puVar6 + 0x10));
                }
                if (param_1[0x1f] != 0) {
                  param_4 = 0;
                  lVar7 = Atlas_FrontEnd_FrontEndScene__RequestLoadCharacter
                                    (param_1[0x1f],0,*(undefined8 *)(puVar6 + 0x10));
                  if ((param_1[0x1f] != 0) &&
                     (lVar17 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(param_1[0x1f],0,0),
                     lVar17 != 0)) {
                    unaff_x22 = (undefined1 *)0x3d40000;
                    Atlas_Gameplay_Kart_KartFEAnimator__PlayCharacterSelectScreen(lVar17,0);
                    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
                    if ((lVar17 != 0) && (*(long *)(lVar17 + 0x48) != 0)) {
                      unaff_x22 = (undefined1 *)/*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar17 + 0x48),0);
                      unaff_x23 = *(long *)(puVar6 + 0x10);
                      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x23,0);
                      if (unaff_x22 != (undefined1 *)0x0) {
                        *(undefined8 *)(unaff_x22 + 0x80) = uVar8;
                        lVar17 = (**(code **)(*param_1 + 0x268))
                                           (param_1,*(undefined8 *)(*param_1 + 0x270));
                        puStack_58 = (undefined *)0x1544750;
                        plVar9 = param_1;
                        unaff_x24 = lVar11;
                        goto code_r0x01544790;
                      }
                    }
                  }
                }
              }
            }
            else {
              lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
              if ((lVar17 != 0) && (plVar9 = *(long **)(lVar17 + 0x80), plVar9 != (long *)0x0)) {
                (**(code **)(*plVar9 + 0x188))(plVar9,lVar7,*(undefined8 *)(*plVar9 + 400));
                lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                if (lVar17 != 0) {
                  unaff_x22 = *(undefined1 **)(lVar17 + 0x88);
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(unaff_x22,0,0);
                  if (iVar5 == 0) {
LAB_01544650:
                    plVar9 = (long *)param_1[0x18];
                    if (plVar9 != (long *)0x0) {
                      (**(code **)(*plVar9 + 0x188))(plVar9,lVar7,*(undefined8 *)(*plVar9 + 400));
                      goto LAB_01544668;
                    }
                  }
                  else {
                    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                    if ((lVar17 != 0) && (plVar9 = *(long **)(lVar17 + 0x88), plVar9 != (long *)0x0)
                       ) {
                      (**(code **)(*plVar9 + 0x188))(plVar9,lVar7,*(undefined8 *)(*plVar9 + 400));
                      lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                      if ((lVar17 != 0) &&
                         (((*(long *)(lVar17 + 0x88) != 0 &&
                           (puVar10 = (undefined1 *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar17 + 0x88),0),
                           lVar7 != 0)) &&
                          (uVar8 = /*Atlas.UI.LoadoutMetagameData$$get_IsLocked*/ func_0x014881dc(lVar7,0), unaff_x22 = puVar10,
                          puVar10 != (undefined1 *)0x0)))) {
                        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(puVar10,uVar8,0);
                        goto LAB_01544650;
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
  puStack_58 = &Atlas_UI_Screens_CharacterSelectScreen__SetVisualsForCanProgress;
  auVar26 = func_0x00f78af4();
  lVar17 = auVar26._8_8_;
  plVar9 = auVar26._0_8_;
code_r0x01544790:
  ppuVar2 = &puStack_80;
  ppuVar18 = &puStack_60;
  uVar8 = 0x3d40ff8;
  puStack_80 = unaff_x22;
  plStack_78 = (long *)lVar7;
  puStack_70 = puVar6;
  plStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f59 & 1) == 0) {
    func_0x00f78a20(0x3d40ff8);
    bRam0000000003eb4f59 = 1;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(plVar9,uRam0000000003d40ff8);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0xb8) != 0)) {
    param_4 = 1;
    /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar7 + 0xb8),6,lVar17,1,0);
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(plVar9,uRam0000000003d40ff8);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0xb8) != 0)) {
      param_4 = 1;
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar7 + 0xb8),8,(uint)lVar17 ^ 1,1,0);
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(plVar9,uRam0000000003d40ff8);
      plVar1 = plStack_68;
      puVar10 = puStack_70;
      plVar15 = plStack_78;
      puVar6 = puStack_80;
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0xb8) != 0)) {
        uVar8 = 0;
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
        if (lVar7 != 0) {
          *(char *)(lVar7 + 0x80) = (char)lVar17;
          return;
        }
        lVar7 = func_0x00f78af4();
        puStack_80 = puVar10;
        plStack_78 = plVar1;
        plStack_68 = (long *)&Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
        ppuVar18 = &puStack_70;
        if (*(ulong *)(lVar7 + 0x28) == 0) {
          puVar19 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
          puStack_70 = (undefined1 *)&puStack_60;
          auVar26 = func_0x00f78af4();
          auVar25._8_8_ = param_4;
          auVar25._0_8_ = puVar10;
        }
        else {
          auVar26._8_8_ = 0;
          auVar26._0_8_ = *(ulong *)(lVar7 + 0x28);
          uVar8 = 0;
          auVar25._8_8_ = 1;
          auVar25._0_8_ = puVar10;
          puVar19 = &UNK_0150bbf4;
          ppuVar2 = &puStack_80;
          puStack_70 = (undefined1 *)&puStack_60;
        }
        do {
          lVar11 = auVar26._0_8_;
          *(long *)((long)ppuVar2 + -0x20) = auVar25._0_8_;
          *(long *)((long)ppuVar2 + -0x18) = lVar7;
          *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar18;
          *(undefined **)((long)ppuVar2 + -8) = puVar19;
          uVar13 = auVar26._8_4_;
          if (uVar13 == 0xffffffff) {
            return;
          }
          lVar17 = *(long *)(lVar11 + 0x70);
          if (lVar17 == 0) {
            func_0x00f78af4();
            lVar16 = lVar7;
          }
          else {
            lVar16 = auVar26._8_8_;
            if (uVar13 < *(uint *)(lVar17 + 0x18)) {
              uVar14 = 2;
              if ((int)uVar8 == 0) {
                uVar14 = 0;
              }
              *(undefined4 *)(lVar17 + (long)(int)uVar13 * 0x60 + 0x5c) = uVar14;
              if ((auVar25._8_8_ & 1) == 0) {
                /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(lVar11,auVar26._8_8_);
              }
              *(undefined8 *)((long)ppuVar2 + -0x60) = unaff_x28;
              *(undefined8 *)((long)ppuVar2 + -0x58) = unaff_x27;
              *(undefined8 *)((long)ppuVar2 + -0x50) = unaff_x26;
              *(long *)((long)ppuVar2 + -0x48) = unaff_x25;
              *(long *)((long)ppuVar2 + -0x40) = unaff_x24;
              *(long *)((long)ppuVar2 + -0x38) = unaff_x23;
              *(undefined1 **)((long)ppuVar2 + -0x30) = puVar6;
              *(long **)((long)ppuVar2 + -0x28) = plVar15;
              *(undefined8 *)((long)ppuVar2 + -0x20) = *(undefined8 *)((long)ppuVar2 + -0x20);
              *(undefined8 *)((long)ppuVar2 + -0x18) = *(undefined8 *)((long)ppuVar2 + -0x18);
              *(undefined8 *)((long)ppuVar2 + -0x10) = *(undefined8 *)((long)ppuVar2 + -0x10);
              *(undefined8 *)((long)ppuVar2 + -8) = *(undefined8 *)((long)ppuVar2 + -8);
              lVar7 = 0x3eb4000;
              if ((bRam0000000003eb4d5b & 1) == 0) {
                func_0x00f78a20(0x3d2a408);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb4d5b = 1;
              }
              lVar17 = *(long *)(lVar11 + 0x70);
              if (lVar17 == 0) goto code_r0x0150c7d4;
              if (*(uint *)(lVar17 + 0x18) <= uVar13) goto code_r0x0150c7d8;
              unaff_x25 = (long)(int)uVar13;
              lVar17 = lVar17 + unaff_x25 * 0x60;
              unaff_x26 = *(undefined8 *)(lVar17 + 0x20);
              puVar6 = *(undefined1 **)(lVar17 + 0x28);
              uVar8 = *(undefined8 *)(lVar17 + 0x30);
              uVar21 = *(undefined8 *)(lVar17 + 0x48);
              uVar20 = *(undefined8 *)(lVar17 + 0x40);
              *(undefined8 *)((long)ppuVar2 + -0xe8) = *(undefined8 *)(lVar17 + 0x38);
              *(undefined8 *)((long)ppuVar2 + -0xf0) = uVar8;
              *(undefined8 *)((long)ppuVar2 + -0xd8) = uVar21;
              *(undefined8 *)((long)ppuVar2 + -0xe0) = uVar20;
              lVar7 = *(long *)(lVar17 + 0x50);
              iVar5 = *(int *)(lVar17 + 0x58);
              iVar4 = *(int *)(lVar17 + 0x5c);
              unaff_x23 = *(long *)(lVar17 + 0x60);
              unaff_x24 = *(long *)(lVar17 + 0x68);
              uVar8 = *(undefined8 *)(lVar17 + 0x70);
              *(undefined8 *)((long)ppuVar2 + -0xf8) = *(undefined8 *)(lVar17 + 0x78);
              *(undefined8 *)((long)ppuVar2 + -0x100) = uVar8;
              if (iVar4 == iVar5) {
code_r0x0150c768:
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
                if (iVar4 == 0) {
                  return;
                }
                if (lVar7 != 0) {
                  /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar7,iVar5 == 2,0);
                  return;
                }
              }
              else if (iVar5 == 2) {
                if (iVar4 == 0) {
                  if (unaff_x24 == 0) goto code_r0x0150c7d4;
                  uVar20 = *(undefined8 *)(lVar17 + 0x38);
                  uVar8 = *(undefined8 *)(lVar17 + 0x30);
                  uVar22 = *(undefined8 *)(lVar17 + 0x48);
                  uVar21 = *(undefined8 *)(lVar17 + 0x40);
                  *(undefined8 *)((long)ppuVar2 + -0x118) = uVar20;
                  *(undefined8 *)((long)ppuVar2 + -0x120) = uVar8;
                  *(undefined8 *)((long)ppuVar2 + -0x108) = uVar22;
                  *(undefined8 *)((long)ppuVar2 + -0x110) = uVar21;
                  uVar24 = *(undefined8 *)(lVar17 + 0x78);
                  uVar23 = *(undefined8 *)(lVar17 + 0x70);
                  *(undefined8 *)((long)ppuVar2 + -0x128) = uVar24;
                  *(undefined8 *)((long)ppuVar2 + -0x130) = uVar23;
                  *(undefined8 *)((long)ppuVar2 + -200) = unaff_x26;
                  *(undefined1 **)((long)ppuVar2 + -0xc0) = puVar6;
                  *(undefined8 *)((long)ppuVar2 + -0xb0) = uVar20;
                  *(undefined8 *)((long)ppuVar2 + -0xb8) = uVar8;
                  *(undefined8 *)((long)ppuVar2 + -0xa0) = uVar22;
                  *(undefined8 *)((long)ppuVar2 + -0xa8) = uVar21;
                  *(long *)((long)ppuVar2 + -0x98) = lVar7;
                  *(undefined8 *)((long)ppuVar2 + -0x90) = _UNK_033f8620;
                  *(long *)((long)ppuVar2 + -0x88) = unaff_x23;
                  *(long *)((long)ppuVar2 + -0x80) = unaff_x24;
                  *(undefined8 *)((long)ppuVar2 + -0x70) = uVar24;
                  *(undefined8 *)((long)ppuVar2 + -0x78) = uVar23;
                  lVar17 = unaff_x24;
code_r0x0150c724:
                  /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar17,(undefined1 *)((long)ppuVar2 + -200),uRam0000000003d2a408);
                  iVar5 = 1;
                }
                else {
                  iVar5 = 2;
                }
code_r0x0150c72c:
                lVar11 = *(long *)(lVar11 + 0x70);
                if (lVar11 != 0) {
                  if (*(uint *)(lVar11 + 0x18) <= uVar13) goto code_r0x0150c7d8;
                  lVar11 = lVar11 + unaff_x25 * 0x60;
                  *(undefined8 *)(lVar11 + 0x20) = unaff_x26;
                  *(undefined1 **)(lVar11 + 0x28) = puVar6;
                  uVar8 = *(undefined8 *)((long)ppuVar2 + -0xf0);
                  uVar21 = *(undefined8 *)((long)ppuVar2 + -0xd8);
                  uVar20 = *(undefined8 *)((long)ppuVar2 + -0xe0);
                  *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)((long)ppuVar2 + -0xe8);
                  *(undefined8 *)(lVar11 + 0x30) = uVar8;
                  *(undefined8 *)(lVar11 + 0x48) = uVar21;
                  *(undefined8 *)(lVar11 + 0x40) = uVar20;
                  *(long *)(lVar11 + 0x50) = lVar7;
                  *(int *)(lVar11 + 0x58) = iVar5;
                  *(int *)(lVar11 + 0x5c) = iVar4;
                  *(long *)(lVar11 + 0x60) = unaff_x23;
                  *(long *)(lVar11 + 0x68) = unaff_x24;
                  uVar8 = *(undefined8 *)((long)ppuVar2 + -0x100);
                  *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)((long)ppuVar2 + -0xf8);
                  *(undefined8 *)(lVar11 + 0x70) = uVar8;
                  goto code_r0x0150c768;
                }
              }
              else {
                if (iVar5 != 0) goto code_r0x0150c72c;
                if (iVar4 != 2) {
                  iVar5 = 0;
                  goto code_r0x0150c72c;
                }
                if (((puVar6 != (undefined1 *)0x0) &&
                    (lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(puVar6,0), lVar17 != 0)) &&
                   (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar17,1,0), unaff_x23 != 0)) {
                  *(undefined8 *)((long)ppuVar2 + -200) = unaff_x26;
                  *(undefined1 **)((long)ppuVar2 + -0xc0) = puVar6;
                  *(undefined8 *)((long)ppuVar2 + -0xb0) = *(undefined8 *)((long)ppuVar2 + -0xe8);
                  *(undefined8 *)((long)ppuVar2 + -0xb8) = *(undefined8 *)((long)ppuVar2 + -0xf0);
                  *(undefined8 *)((long)ppuVar2 + -0xa0) = *(undefined8 *)((long)ppuVar2 + -0xd8);
                  *(undefined8 *)((long)ppuVar2 + -0xa8) = *(undefined8 *)((long)ppuVar2 + -0xe0);
                  *(long *)((long)ppuVar2 + -0x98) = lVar7;
                  *(undefined8 *)((long)ppuVar2 + -0x90) = _UNK_033f8628;
                  *(long *)((long)ppuVar2 + -0x88) = unaff_x23;
                  *(long *)((long)ppuVar2 + -0x80) = unaff_x24;
                  *(undefined8 *)((long)ppuVar2 + -0x70) = *(undefined8 *)((long)ppuVar2 + -0xf8);
                  *(undefined8 *)((long)ppuVar2 + -0x78) = *(undefined8 *)((long)ppuVar2 + -0x100);
                  lVar17 = unaff_x23;
                  goto code_r0x0150c724;
                }
              }
code_r0x0150c7d4:
              func_0x00f78af4();
code_r0x0150c7d8:
              uVar8 = func_0x00f78b24();
              auVar25 = func_0x00f78ac0(uVar8,0);
              lVar11 = auVar25._8_8_;
              *(undefined8 *)((long)ppuVar2 + -0x180) = unaff_x26;
              *(long *)((long)ppuVar2 + -0x178) = unaff_x25;
              *(long *)((long)ppuVar2 + -0x170) = unaff_x24;
              *(long *)((long)ppuVar2 + -0x168) = unaff_x23;
              *(undefined1 **)((long)ppuVar2 + -0x160) = puVar6;
              *(undefined1 (*) [16])((long)ppuVar2 + -0x158) = auVar26;
              *(long *)((long)ppuVar2 + -0x148) = lVar7;
              *(undefined1 **)((long)ppuVar2 + -0x140) = (undefined1 *)((long)ppuVar2 + -0x10);
              *(undefined **)((long)ppuVar2 + -0x138) =
                   &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
              if ((bRam0000000003eb4d55 & 1) == 0) {
                func_0x00f78a20(0x3d5e6e0);
                func_0x00f78a20(0x3d5e7a8);
                func_0x00f78a20(0x3d5e7d0);
                func_0x00f78a20(0x3d5e850);
                func_0x00f78a20(0x3d5e888);
                bRam0000000003eb4d55 = 1;
              }
              uVar8 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x1c),
                                      *(undefined4 *)(lVar11 + 0x20),_UNK_033f8144,
                                      *(undefined8 *)(lVar11 + 0x10),0,0);
              uVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar8,10,uRam0000000003d5e7a8);
              uVar8 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar8,*(undefined8 *)(lVar11 + 0x58),uRam0000000003d5e6e0);
              uVar8 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar8,1,uRam0000000003d5e888);
              lVar7 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar8,auVar25._0_8_,uRam0000000003d5e850);
              if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe8) != '\0')) {
                *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar11 + 0x10);
              }
              return;
            }
          }
          uVar8 = func_0x00f78b24();
          auVar26 = func_0x00f78ac0(uVar8,0);
          puVar3 = (undefined1 *)((long)ppuVar2 + -0x30);
          puVar10 = (undefined1 *)((long)ppuVar2 + -0x30);
          *(undefined1 **)((long)ppuVar2 + -0x30) = (undefined1 *)((long)ppuVar2 + -0x10);
          *(undefined **)((long)ppuVar2 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
          lVar7 = *(long *)(auVar26._0_8_ + 0x28);
          auVar25._8_8_ = auVar26._8_8_;
          auVar25._0_8_ = lVar7;
          if (lVar7 == 0) {
            puVar19 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
            auVar25 = func_0x00f78af4();
          }
          else {
            puVar3 = (undefined1 *)((long)ppuVar2 + -0x20);
            puVar10 = *(undefined1 **)((long)ppuVar2 + -0x30);
            puVar19 = *(undefined **)((long)ppuVar2 + -0x28);
          }
          lVar7 = auVar25._8_8_;
          ppuVar2 = (undefined1 **)(puVar3 + -0x20);
          *(long *)(puVar3 + -0x20) = lVar11;
          *(long *)(puVar3 + -0x18) = lVar16;
          *(undefined1 **)(puVar3 + -0x10) = puVar10;
          *(undefined **)(puVar3 + -8) = puVar19;
          ppuVar18 = (undefined1 **)(puVar3 + -0x10);
          auVar26._8_8_ = 4;
          auVar26._0_8_ = auVar25._0_8_;
          uVar8 = 0;
          puVar19 = &UNK_0150bd10;
        } while( true );
      }
    }
  }
  puVar19 = &Atlas_UI_Screens_CharacterSelectScreen__PlayCharacterVO;
  auVar26 = func_0x00f78af4();
  ppuVar2 = &puStack_80;
  do {
    plVar15 = auVar26._8_8_;
    lVar7 = auVar26._0_8_;
    *(undefined8 *)((long)ppuVar2 + -0x30) = 0x3eb4000;
    *(undefined8 *)((long)ppuVar2 + -0x28) = uVar8;
    *(long **)((long)ppuVar2 + -0x20) = plVar9;
    *(long *)((long)ppuVar2 + -0x18) = lVar17;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar18;
    *(undefined **)((long)ppuVar2 + -8) = puVar19;
    ppuVar18 = (undefined1 **)((long)ppuVar2 + -0x10);
    uVar8 = 0x3eb4000;
    if ((bRam0000000003eb4f58 & 1) == 0) {
      func_0x00f78a20(0x3d57270);
      func_0x00f78a20(0x3d574f0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f58 = 1;
    }
    *(undefined8 *)((long)ppuVar2 + -0x38) = 0;
    if ((*(long *)(lVar7 + 0x80) != 0) &&
       (lVar11 = *(long *)(*(long *)(lVar7 + 0x80) + 0x10), lVar11 != 0)) {
      param_4 = uRam0000000003d574f0;
      iVar5 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar11,plVar15,(undefined1 *)((long)ppuVar2 + -0x38));
      if (iVar5 == 0) {
        return;
      }
      if (*(long *)((long)ppuVar2 + -0x38) != 0) {
        uVar12 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)((long)ppuVar2 + -0x38) + 0x70),0);
        if ((uVar12 & 1) == 0) {
          if (((*(long *)(lVar7 + 0x80) == 0) || (*(long *)((long)ppuVar2 + -0x38) == 0)) ||
             (lVar11 = *(long *)(*(long *)(lVar7 + 0x80) + 0x10), lVar11 == 0))
          goto code_r0x01544998;
          plVar15 = (long *)/*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,*(undefined8 *)
                                                    (*(long *)((long)ppuVar2 + -0x38) + 0x70),
                                            uRam0000000003d57270);
        }
        else {
          plVar15 = *(long **)((long)ppuVar2 + -0x38);
        }
        uVar8 = *(undefined8 *)(lVar7 + 0xb8);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar15,uVar8,0);
        if (iVar5 == 0) {
          return;
        }
        *(long **)(lVar7 + 0xb8) = plVar15;
        lVar11 = *(long *)((long)ppuVar2 + -0x38);
        if (lVar11 != 0) {
          /*Atlas.Audio.UIAudio$$SetSelectedCharacter*/ func_0x01516b9c(*(undefined8 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0xa8),0);
          return;
        }
      }
    }
code_r0x01544998:
    puVar19 = &Atlas_UI_Screens_CharacterSelectScreen__KartPartLoaded;
    auVar26 = func_0x00f78af4();
    ppuVar2 = (undefined1 **)((long)ppuVar2 + -0x40);
    lVar17 = lVar7;
    plVar9 = plVar15;
    if ((int)param_4 != 1) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x1544790 | Atlas.UI.Screens.CharacterSelectScreen.SetVisualsForCanProgress
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_CharacterSelectScreen__SetVisualsForCanProgress
               (undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined8 unaff_x20;
  undefined8 uVar13;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  puVar1 = &stack0xffffffffffffffd0;
  uVar9 = 0x3d40ff8;
  if ((bRam0000000003eb4f59 & 1) == 0) {
    func_0x00f78a20(0x3d40ff8);
    bRam0000000003eb4f59 = 1;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0xb8) != 0)) {
    param_4 = 1;
    /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar7 + 0xb8),6,param_2,1,0);
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0xb8) != 0)) {
      param_4 = 1;
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar7 + 0xb8),8,(uint)param_2 ^ 1,1,0);
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0xb8) != 0)) {
        uVar9 = 0;
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
        if (lVar7 != 0) {
          *(char *)(lVar7 + 0x80) = (char)param_2;
          return;
        }
        uVar6 = func_0x00f78af4();
        puVar14 = &stack0xffffffffffffffe0;
        if (*(ulong *)(uVar6 + 0x28) == 0) {
          puVar15 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
          auVar20 = func_0x00f78af4();
        }
        else {
          auVar20._8_8_ = 0;
          auVar20._0_8_ = *(ulong *)(uVar6 + 0x28);
          uVar9 = 0;
          param_4 = 1;
          puVar15 = &UNK_0150bbf4;
          puVar1 = &stack0xffffffffffffffd0;
        }
        do {
          lVar7 = auVar20._0_8_;
          *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
          *(ulong *)(puVar1 + -0x18) = uVar6;
          *(undefined1 **)(puVar1 + -0x10) = puVar14;
          *(undefined **)(puVar1 + -8) = puVar15;
          uVar8 = auVar20._8_4_;
          if (uVar8 == 0xffffffff) {
            return;
          }
          lVar10 = *(long *)(lVar7 + 0x70);
          if (lVar10 == 0) {
            func_0x00f78af4();
          }
          else {
            uVar6 = auVar20._8_8_;
            if (uVar8 < *(uint *)(lVar10 + 0x18)) {
              uVar12 = 2;
              if ((int)uVar9 == 0) {
                uVar12 = 0;
              }
              *(undefined4 *)(lVar10 + (long)(int)uVar8 * 0x60 + 0x5c) = uVar12;
              if ((param_4 & 1) == 0) {
                /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(lVar7,auVar20._8_8_);
              }
              *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
              *(undefined8 *)(puVar1 + -0x58) = unaff_x27;
              *(undefined8 *)(puVar1 + -0x50) = unaff_x26;
              *(long *)(puVar1 + -0x48) = unaff_x25;
              *(long *)(puVar1 + -0x40) = unaff_x24;
              *(long *)(puVar1 + -0x38) = unaff_x23;
              *(long *)(puVar1 + -0x30) = unaff_x22;
              *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
              *(undefined8 *)(puVar1 + -0x20) = *(undefined8 *)(puVar1 + -0x20);
              *(undefined8 *)(puVar1 + -0x18) = *(undefined8 *)(puVar1 + -0x18);
              *(undefined8 *)(puVar1 + -0x10) = *(undefined8 *)(puVar1 + -0x10);
              *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + -8);
              lVar10 = 0x3eb4000;
              if ((bRam0000000003eb4d5b & 1) == 0) {
                func_0x00f78a20(0x3d2a408);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb4d5b = 1;
              }
              lVar11 = *(long *)(lVar7 + 0x70);
              if (lVar11 == 0) goto code_r0x0150c7d4;
              if (*(uint *)(lVar11 + 0x18) <= uVar8) goto code_r0x0150c7d8;
              unaff_x25 = (long)(int)uVar8;
              lVar11 = lVar11 + unaff_x25 * 0x60;
              unaff_x26 = *(undefined8 *)(lVar11 + 0x20);
              unaff_x22 = *(long *)(lVar11 + 0x28);
              uVar9 = *(undefined8 *)(lVar11 + 0x30);
              uVar16 = *(undefined8 *)(lVar11 + 0x48);
              uVar13 = *(undefined8 *)(lVar11 + 0x40);
              *(undefined8 *)(puVar1 + -0xe8) = *(undefined8 *)(lVar11 + 0x38);
              *(undefined8 *)(puVar1 + -0xf0) = uVar9;
              *(undefined8 *)(puVar1 + -0xd8) = uVar16;
              *(undefined8 *)(puVar1 + -0xe0) = uVar13;
              lVar10 = *(long *)(lVar11 + 0x50);
              iVar5 = *(int *)(lVar11 + 0x58);
              iVar4 = *(int *)(lVar11 + 0x5c);
              unaff_x23 = *(long *)(lVar11 + 0x60);
              unaff_x24 = *(long *)(lVar11 + 0x68);
              uVar9 = *(undefined8 *)(lVar11 + 0x70);
              *(undefined8 *)(puVar1 + -0xf8) = *(undefined8 *)(lVar11 + 0x78);
              *(undefined8 *)(puVar1 + -0x100) = uVar9;
              if (iVar4 == iVar5) {
code_r0x0150c768:
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar10,0,0);
                if (iVar4 == 0) {
                  return;
                }
                if (lVar10 != 0) {
                  /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar10,iVar5 == 2,0);
                  return;
                }
              }
              else if (iVar5 == 2) {
                if (iVar4 == 0) {
                  if (unaff_x24 == 0) goto code_r0x0150c7d4;
                  uVar13 = *(undefined8 *)(lVar11 + 0x38);
                  uVar9 = *(undefined8 *)(lVar11 + 0x30);
                  uVar17 = *(undefined8 *)(lVar11 + 0x48);
                  uVar16 = *(undefined8 *)(lVar11 + 0x40);
                  *(undefined8 *)(puVar1 + -0x118) = uVar13;
                  *(undefined8 *)(puVar1 + -0x120) = uVar9;
                  *(undefined8 *)(puVar1 + -0x108) = uVar17;
                  *(undefined8 *)(puVar1 + -0x110) = uVar16;
                  uVar19 = *(undefined8 *)(lVar11 + 0x78);
                  uVar18 = *(undefined8 *)(lVar11 + 0x70);
                  *(undefined8 *)(puVar1 + -0x128) = uVar19;
                  *(undefined8 *)(puVar1 + -0x130) = uVar18;
                  *(undefined8 *)(puVar1 + -200) = unaff_x26;
                  *(long *)(puVar1 + -0xc0) = unaff_x22;
                  *(undefined8 *)(puVar1 + -0xb0) = uVar13;
                  *(undefined8 *)(puVar1 + -0xb8) = uVar9;
                  *(undefined8 *)(puVar1 + -0xa0) = uVar17;
                  *(undefined8 *)(puVar1 + -0xa8) = uVar16;
                  *(long *)(puVar1 + -0x98) = lVar10;
                  *(undefined8 *)(puVar1 + -0x90) = _UNK_033f8620;
                  *(long *)(puVar1 + -0x88) = unaff_x23;
                  *(long *)(puVar1 + -0x80) = unaff_x24;
                  *(undefined8 *)(puVar1 + -0x70) = uVar19;
                  *(undefined8 *)(puVar1 + -0x78) = uVar18;
                  lVar11 = unaff_x24;
code_r0x0150c724:
                  /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar11,puVar1 + -200,uRam0000000003d2a408);
                  iVar5 = 1;
                }
                else {
                  iVar5 = 2;
                }
code_r0x0150c72c:
                lVar7 = *(long *)(lVar7 + 0x70);
                if (lVar7 != 0) {
                  if (*(uint *)(lVar7 + 0x18) <= uVar8) goto code_r0x0150c7d8;
                  lVar7 = lVar7 + unaff_x25 * 0x60;
                  *(undefined8 *)(lVar7 + 0x20) = unaff_x26;
                  *(long *)(lVar7 + 0x28) = unaff_x22;
                  uVar9 = *(undefined8 *)(puVar1 + -0xf0);
                  uVar16 = *(undefined8 *)(puVar1 + -0xd8);
                  uVar13 = *(undefined8 *)(puVar1 + -0xe0);
                  *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(puVar1 + -0xe8);
                  *(undefined8 *)(lVar7 + 0x30) = uVar9;
                  *(undefined8 *)(lVar7 + 0x48) = uVar16;
                  *(undefined8 *)(lVar7 + 0x40) = uVar13;
                  *(long *)(lVar7 + 0x50) = lVar10;
                  *(int *)(lVar7 + 0x58) = iVar5;
                  *(int *)(lVar7 + 0x5c) = iVar4;
                  *(long *)(lVar7 + 0x60) = unaff_x23;
                  *(long *)(lVar7 + 0x68) = unaff_x24;
                  uVar9 = *(undefined8 *)(puVar1 + -0x100);
                  *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(puVar1 + -0xf8);
                  *(undefined8 *)(lVar7 + 0x70) = uVar9;
                  goto code_r0x0150c768;
                }
              }
              else {
                if (iVar5 != 0) goto code_r0x0150c72c;
                if (iVar4 != 2) {
                  iVar5 = 0;
                  goto code_r0x0150c72c;
                }
                if (((unaff_x22 != 0) && (lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar11 != 0)) &&
                   (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar11,1,0), unaff_x23 != 0)) {
                  *(undefined8 *)(puVar1 + -200) = unaff_x26;
                  *(long *)(puVar1 + -0xc0) = unaff_x22;
                  *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)(puVar1 + -0xe8);
                  *(undefined8 *)(puVar1 + -0xb8) = *(undefined8 *)(puVar1 + -0xf0);
                  *(undefined8 *)(puVar1 + -0xa0) = *(undefined8 *)(puVar1 + -0xd8);
                  *(undefined8 *)(puVar1 + -0xa8) = *(undefined8 *)(puVar1 + -0xe0);
                  *(long *)(puVar1 + -0x98) = lVar10;
                  *(undefined8 *)(puVar1 + -0x90) = _UNK_033f8628;
                  *(long *)(puVar1 + -0x88) = unaff_x23;
                  *(long *)(puVar1 + -0x80) = unaff_x24;
                  *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)(puVar1 + -0xf8);
                  *(undefined8 *)(puVar1 + -0x78) = *(undefined8 *)(puVar1 + -0x100);
                  lVar11 = unaff_x23;
                  goto code_r0x0150c724;
                }
              }
code_r0x0150c7d4:
              func_0x00f78af4();
code_r0x0150c7d8:
              uVar9 = func_0x00f78b24();
              auVar21 = func_0x00f78ac0(uVar9,0);
              lVar7 = auVar21._8_8_;
              *(undefined8 *)(puVar1 + -0x180) = unaff_x26;
              *(long *)(puVar1 + -0x178) = unaff_x25;
              *(long *)(puVar1 + -0x170) = unaff_x24;
              *(long *)(puVar1 + -0x168) = unaff_x23;
              *(long *)(puVar1 + -0x160) = unaff_x22;
              *(undefined1 (*) [16])(puVar1 + -0x158) = auVar20;
              *(long *)(puVar1 + -0x148) = lVar10;
              *(undefined1 **)(puVar1 + -0x140) = puVar1 + -0x10;
              *(undefined **)(puVar1 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
              if ((bRam0000000003eb4d55 & 1) == 0) {
                func_0x00f78a20(0x3d5e6e0);
                func_0x00f78a20(0x3d5e7a8);
                func_0x00f78a20(0x3d5e7d0);
                func_0x00f78a20(0x3d5e850);
                func_0x00f78a20(0x3d5e888);
                bRam0000000003eb4d55 = 1;
              }
              uVar9 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c),
                                      *(undefined4 *)(lVar7 + 0x20),_UNK_033f8144,
                                      *(undefined8 *)(lVar7 + 0x10),0,0);
              uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar9,10,uRam0000000003d5e7a8);
              uVar9 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar9,*(undefined8 *)(lVar7 + 0x58),uRam0000000003d5e6e0);
              uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar9,1,uRam0000000003d5e888);
              lVar10 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar9,auVar21._0_8_,uRam0000000003d5e850);
              if ((lVar10 != 0) && (*(char *)(lVar10 + 0xe8) != '\0')) {
                *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)(lVar7 + 0x10);
              }
              return;
            }
          }
          uVar9 = func_0x00f78b24();
          auVar20 = func_0x00f78ac0(uVar9,0);
          puVar2 = puVar1 + -0x30;
          puVar14 = puVar1 + -0x30;
          *(undefined1 **)(puVar1 + -0x30) = puVar1 + -0x10;
          *(undefined **)(puVar1 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
          lVar10 = *(long *)(auVar20._0_8_ + 0x28);
          auVar21._8_8_ = auVar20._8_8_;
          auVar21._0_8_ = lVar10;
          if (lVar10 == 0) {
            puVar15 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
            auVar21 = func_0x00f78af4();
          }
          else {
            puVar2 = puVar1 + -0x20;
            puVar14 = *(undefined1 **)(puVar1 + -0x30);
            puVar15 = *(undefined **)(puVar1 + -0x28);
          }
          param_4 = auVar21._8_8_;
          unaff_x20 = auVar21._0_8_;
          puVar1 = puVar2 + -0x20;
          *(long *)(puVar2 + -0x20) = lVar7;
          *(ulong *)(puVar2 + -0x18) = uVar6;
          *(undefined1 **)(puVar2 + -0x10) = puVar14;
          *(undefined **)(puVar2 + -8) = puVar15;
          puVar14 = puVar2 + -0x10;
          auVar20._8_8_ = 4;
          auVar20._0_8_ = unaff_x20;
          uVar9 = 0;
          puVar15 = &UNK_0150bd10;
          uVar6 = param_4;
        } while( true );
      }
    }
  }
  puVar15 = &Atlas_UI_Screens_CharacterSelectScreen__PlayCharacterVO;
  auVar20 = func_0x00f78af4();
  puVar1 = &stack0xffffffffffffffd0;
  puVar14 = (undefined1 *)register0x00000008;
  do {
    puVar3 = puVar1;
    uVar13 = auVar20._8_8_;
    lVar7 = auVar20._0_8_;
    *(undefined8 *)(puVar3 + -0x30) = 0x3eb4000;
    *(undefined8 *)(puVar3 + -0x28) = uVar9;
    *(undefined8 *)(puVar3 + -0x20) = param_1;
    *(long *)(puVar3 + -0x18) = param_2;
    *(undefined1 **)(puVar3 + -0x10) = puVar14 + -0x10;
    *(undefined **)(puVar3 + -8) = puVar15;
    uVar9 = 0x3eb4000;
    if ((bRam0000000003eb4f58 & 1) == 0) {
      func_0x00f78a20(0x3d57270);
      func_0x00f78a20(0x3d574f0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f58 = 1;
    }
    *(undefined8 *)(puVar3 + -0x38) = 0;
    if ((*(long *)(lVar7 + 0x80) != 0) &&
       (lVar10 = *(long *)(*(long *)(lVar7 + 0x80) + 0x10), lVar10 != 0)) {
      param_4 = uRam0000000003d574f0;
      iVar5 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar10,uVar13,puVar3 + -0x38);
      if (iVar5 == 0) {
        return;
      }
      if (*(long *)(puVar3 + -0x38) != 0) {
        uVar6 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)(puVar3 + -0x38) + 0x70),0);
        if ((uVar6 & 1) == 0) {
          if (((*(long *)(lVar7 + 0x80) == 0) || (*(long *)(puVar3 + -0x38) == 0)) ||
             (lVar10 = *(long *)(*(long *)(lVar7 + 0x80) + 0x10), lVar10 == 0))
          goto code_r0x01544998;
          uVar13 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,*(undefined8 *)(*(long *)(puVar3 + -0x38) + 0x70),
                                   uRam0000000003d57270);
        }
        else {
          uVar13 = *(undefined8 *)(puVar3 + -0x38);
        }
        uVar9 = *(undefined8 *)(lVar7 + 0xb8);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar13,uVar9,0);
        if (iVar5 == 0) {
          return;
        }
        *(undefined8 *)(lVar7 + 0xb8) = uVar13;
        lVar10 = *(long *)(puVar3 + -0x38);
        if (lVar10 != 0) {
          /*Atlas.Audio.UIAudio$$SetSelectedCharacter*/ func_0x01516b9c(*(undefined8 *)(lVar10 + 0x18),*(undefined4 *)(lVar10 + 0xa8),0);
          return;
        }
      }
    }
code_r0x01544998:
    puVar15 = &Atlas_UI_Screens_CharacterSelectScreen__KartPartLoaded;
    auVar20 = func_0x00f78af4();
    puVar1 = puVar3 + -0x40;
    param_2 = lVar7;
    param_1 = uVar13;
    puVar14 = puVar3;
    if ((int)param_4 != 1) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x154485c | Atlas.UI.Screens.CharacterSelectScreen.PlayCharacterVO
// ============================================================

void Atlas_UI_Screens_CharacterSelectScreen__PlayCharacterVO
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar6;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  puVar1 = (undefined1 *)register0x00000008;
  do {
    uVar6 = auVar7._8_8_;
    lVar3 = auVar7._0_8_;
    *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
    *(long *)(puVar1 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
    *(undefined **)(puVar1 + -8) = unaff_x30;
    unaff_x29 = puVar1 + -0x10;
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4f58 & 1) == 0) {
      func_0x00f78a20(0x3d57270);
      func_0x00f78a20(0x3d574f0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f58 = 1;
    }
    *(undefined8 *)(puVar1 + -0x38) = 0;
    if ((*(long *)(lVar3 + 0x80) != 0) &&
       (lVar4 = *(long *)(*(long *)(lVar3 + 0x80) + 0x10), lVar4 != 0)) {
      param_4 = uRam0000000003d574f0;
      iVar2 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar4,uVar6,puVar1 + -0x38);
      if (iVar2 == 0) {
        return;
      }
      if (*(long *)(puVar1 + -0x38) != 0) {
        uVar5 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)(puVar1 + -0x38) + 0x70),0);
        if ((uVar5 & 1) == 0) {
          if (((*(long *)(lVar3 + 0x80) == 0) || (*(long *)(puVar1 + -0x38) == 0)) ||
             (lVar4 = *(long *)(*(long *)(lVar3 + 0x80) + 0x10), lVar4 == 0)) goto LAB_01544998;
          uVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar4,*(undefined8 *)(*(long *)(puVar1 + -0x38) + 0x70),
                                  uRam0000000003d57270);
        }
        else {
          uVar6 = *(undefined8 *)(puVar1 + -0x38);
        }
        unaff_x21 = *(undefined8 *)(lVar3 + 0xb8);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar2 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,unaff_x21,0);
        if (iVar2 == 0) {
          return;
        }
        *(undefined8 *)(lVar3 + 0xb8) = uVar6;
        lVar4 = *(long *)(puVar1 + -0x38);
        if (lVar4 != 0) {
          /*Atlas.Audio.UIAudio$$SetSelectedCharacter*/ func_0x01516b9c(*(undefined8 *)(lVar4 + 0x18),*(undefined4 *)(lVar4 + 0xa8),0);
          return;
        }
      }
    }
LAB_01544998:
    unaff_x30 = &Atlas_UI_Screens_CharacterSelectScreen__KartPartLoaded;
    auVar7 = func_0x00f78af4();
    puVar1 = puVar1 + -0x40;
    unaff_x19 = lVar3;
    unaff_x20 = uVar6;
    if ((int)param_4 != 1) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x154499c | Atlas.UI.Screens.CharacterSelectScreen.KartPartLoaded
// ============================================================

void Atlas_UI_Screens_CharacterSelectScreen__KartPartLoaded
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auVar6 [16];
  
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  do {
    uVar5 = auVar6._8_8_;
    lVar4 = auVar6._0_8_;
    if ((int)param_4 != 1) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4f58 & 1) == 0) {
      func_0x00f78a20(0x3d57270);
      func_0x00f78a20(0x3d574f0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f58 = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    if ((*(long *)(lVar4 + 0x80) != 0) &&
       (lVar2 = *(long *)(*(long *)(lVar4 + 0x80) + 0x10), lVar2 != 0)) {
      param_4 = uRam0000000003d574f0;
      iVar1 = /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar2,uVar5,(undefined1 *)((long)register0x00000008 + -0x38));
      if (iVar1 == 0) {
        return;
      }
      if (*(long *)((long)register0x00000008 + -0x38) != 0) {
        uVar3 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)((long)register0x00000008 + -0x38) + 0x70),
                                0);
        if ((uVar3 & 1) == 0) {
          if (((*(long *)(lVar4 + 0x80) == 0) || (*(long *)((long)register0x00000008 + -0x38) == 0))
             || (lVar2 = *(long *)(*(long *)(lVar4 + 0x80) + 0x10), lVar2 == 0)) goto LAB_01544998;
          uVar5 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar2,*(undefined8 *)
                                         (*(long *)((long)register0x00000008 + -0x38) + 0x70),
                                  uRam0000000003d57270);
        }
        else {
          uVar5 = *(undefined8 *)((long)register0x00000008 + -0x38);
        }
        unaff_x21 = *(undefined8 *)(lVar4 + 0xb8);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,unaff_x21,0);
        if (iVar1 == 0) {
          return;
        }
        *(undefined8 *)(lVar4 + 0xb8) = uVar5;
        lVar2 = *(long *)((long)register0x00000008 + -0x38);
        if (lVar2 != 0) {
          /*Atlas.Audio.UIAudio$$SetSelectedCharacter*/ func_0x01516b9c(*(undefined8 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0xa8),0);
          return;
        }
      }
    }
LAB_01544998:
    unaff_x30 = Atlas_UI_Screens_CharacterSelectScreen__KartPartLoaded;
    auVar6 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
    unaff_x19 = lVar4;
    unaff_x20 = uVar5;
  } while( true );
}



// ============================================================
// RVA: 0x15449ac | Atlas.UI.Screens.CharacterSelectScreen.SkinButtonPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01514cbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x015450b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x015450b8) */
/* WARNING: Removing unreachable block (ram,0x015450d0) */
/* WARNING: Removing unreachable block (ram,0x015450d8) */
/* WARNING: Removing unreachable block (ram,0x015450f0) */
/* WARNING: Removing unreachable block (ram,0x015450fc) */
/* WARNING: Removing unreachable block (ram,0x01545104) */
/* WARNING: Removing unreachable block (ram,0x01545110) */
/* WARNING: Removing unreachable block (ram,0x01545118) */
/* WARNING: Removing unreachable block (ram,0x01545124) */
/* WARNING: Removing unreachable block (ram,0x01514c5c) */
/* WARNING: Removing unreachable block (ram,0x01514c7c) */
/* WARNING: Removing unreachable block (ram,0x01514c90) */
/* WARNING: Removing unreachable block (ram,0x01514c94) */
/* WARNING: Removing unreachable block (ram,0x01514c98) */
/* WARNING: Removing unreachable block (ram,0x01514ca0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_Screens_CharacterSelectScreen__SkinButtonPressed(long *param_1,ulong param_2)

{
  ushort uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long **pplVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  int extraout_w1;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined4 uVar20;
  int *piVar21;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar22;
  long unaff_x21;
  long lVar23;
  long *unaff_x22;
  code *pcVar24;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong uVar25;
  ulong uVar26;
  undefined1 *puVar27;
  long *unaff_x25;
  long *plVar28;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  long **pplVar29;
  undefined1 **unaff_x29;
  undefined *puVar30;
  code *unaff_x30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  auVar36._8_8_ = unaff_x19;
  auVar36._0_8_ = unaff_x20;
  puVar27 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f5a & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2e250);
    func_0x00f78a20(0x3d39fd8);
    func_0x00f78a20(0x3d39fe8);
    func_0x00f78a20(0x3d39ff0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3f3e8);
    func_0x00f78a20(0x3d1e558);
    func_0x00f78a20(0x3d62390);
    func_0x00f78a20(0x3d26c20);
    bRam0000000003eb4f5a = 1;
  }
  lVar23 = param_1[0x16];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar17 = 0;
  plVar10 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar23,0);
  if ((int)plVar10 == 0) {
    return plVar10;
  }
  plVar11 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass38_0_TypeInfo*/ uRam0000000003d26c20);
  /*Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass38_0$$.ctor*/ func_0x01547a58(plVar11,0);
  lVar23 = 0x3d23990;
  uVar13 = unaff_x23;
  uVar26 = unaff_x24;
  plVar10 = unaff_x25;
  if ((param_1[0x16] == 0) || (param_1[0xf] == 0)) {
LAB_01544ca8:
    puVar30 = &Atlas_UI_Screens_CharacterSelectScreen__SetSelected;
    auVar37 = func_0x00f78af4();
    puVar5 = &stack0xffffffffffffffb0;
code_r0x01544cac:
    plVar28 = auVar37._8_8_;
    *(ulong *)(puVar5 + -0x40) = uVar26;
    *(ulong *)(puVar5 + -0x38) = uVar13;
    *(long *)(puVar5 + -0x30) = lVar23;
    *(long **)(puVar5 + -0x28) = plVar11;
    *(ulong *)(puVar5 + -0x20) = param_2;
    *(long **)(puVar5 + -0x18) = param_1;
    *(undefined1 **)(puVar5 + -0x10) = puVar27;
    *(undefined **)(puVar5 + -8) = puVar30;
    if ((bRam0000000003eb4f5b & 1) == 0) {
      func_0x00f78a20(0x3d2c6c8);
      bRam0000000003eb4f5b = 1;
    }
    param_2 = uRam0000000003d2c6c8;
    Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
              (auVar37._0_8_,plVar28);
    if (plVar28 == (long *)0x0) {
      auVar36 = func_0x00f78af4();
      plVar28 = auVar36._8_8_;
      param_1 = auVar36._0_8_;
      *(undefined8 *)(puVar5 + -0xa0) = unaff_x28;
      *(undefined8 **)(puVar5 + -0x98) = unaff_x27;
      *(undefined8 **)(puVar5 + -0x90) = unaff_x26;
      *(long **)(puVar5 + -0x88) = plVar10;
      *(ulong *)(puVar5 + -0x80) = uVar26;
      *(undefined8 *)(puVar5 + -0x78) = 0x3d2c6c8;
      *(undefined8 *)(puVar5 + -0x70) = 0x3eb4000;
      *(long *)(puVar5 + -0x68) = auVar37._0_8_;
      *(undefined8 *)(puVar5 + -0x60) = uVar17;
      *(undefined8 *)(puVar5 + -0x58) = 0;
      *(undefined1 **)(puVar5 + -0x50) = puVar5 + -0x10;
      *(undefined **)(puVar5 + -0x48) = &Atlas_UI_Screens_CharacterSelectScreen__OnTabChanged;
      puVar27 = puVar5 + -0x50;
      lVar23 = 0x3eb4000;
      uVar13 = 0x3d40fe8;
      uVar25 = 0x3d40fe8;
      if ((bRam0000000003eb4f5c & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d30678);
        func_0x00f78a20(0x3d32290);
        func_0x00f78a20(0x3d32298);
        func_0x00f78a20(0x3d322a0);
        func_0x00f78a20(0x3d223e8);
        func_0x00f78a20(0x3d3a008);
        func_0x00f78a20(0x3d3a010);
        func_0x00f78a20(0x3d25578);
        func_0x00f78a20(0x3d40fe8);
        bRam0000000003eb4f5c = 1;
      }
      *(undefined8 *)(puVar5 + -0xc0) = 0;
      *(undefined8 *)(puVar5 + -0xb8) = 0;
      *(undefined8 *)(puVar5 + -0xb0) = 0;
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
      uVar2 = uVar13;
      if (lVar12 == 0) goto code_r0x015451d4;
      if (*(long *)(lVar12 + 200) == 0) goto code_r0x015451d4;
      lVar12 = *(long *)(*(long *)(lVar12 + 200) + 0x28);
      uVar2 = uVar25;
      if (lVar12 == 0) goto code_r0x015451d4;
      plVar11 = *(long **)(lVar12 + 0x40);
      if (plVar11 != (long *)0x0) {
        if (*(byte *)(*plVar11 + 300) < *(byte *)(/*Atlas.UI.IPTabData_TypeInfo*/ lRam0000000003d223e8 + 300)) {
          plVar11 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar11 + 200) +
                           (ulong)*(byte *)(/*Atlas.UI.IPTabData_TypeInfo*/ lRam0000000003d223e8 + 300) * 8 + -8) !=
                 /*Atlas.UI.IPTabData_TypeInfo*/ lRam0000000003d223e8) {
          plVar11 = (long *)0x0;
        }
      }
      param_1[0x1e] = (long)plVar11;
      if (param_1[0x1c] == 0) goto code_r0x015451d4;
      unaff_x26 = (undefined8 *)0x3d30678;
      lVar12 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(param_1[0x1c],plVar28,uRam0000000003d30678);
      if (lVar12 == 0) goto code_r0x015451d4;
      unaff_x28 = 0x3d32298;
      uVar26 = 0x3d21270;
      plVar10 = (long *)0x3d25578;
      unaff_x27 = (undefined8 *)0x3d32290;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar5 + -0xd8,lVar12,uRam0000000003d3a008);
      *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0xd0);
      *(undefined8 *)(puVar5 + -0xc0) = *(undefined8 *)(puVar5 + -0xd8);
      *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -200);
code_r0x01544ef8:
      do {
        uVar25 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar5 + -0xc0,uRam0000000003d32298);
        if ((uVar25 & 1) == 0) goto code_r0x01545024;
        plVar28 = *(long **)(puVar5 + -0xb0);
        if (plVar28 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x015451d0;
        }
        lVar23 = param_1[0xf];
        plVar11 = (long *)(**(code **)(*plVar28 + 0x178))(plVar28,*(undefined8 *)(*plVar28 + 0x180))
        ;
        if (plVar11 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x015451d0;
        }
        uVar13 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar13,0);
        if (lVar23 == 0) {
          func_0x00f78af4(uVar17,uVar17);
          goto code_r0x015451d0;
        }
        uVar17 = /*Atlas.Stats.UnlockManager$$GetLastUsedSkinIDForCharacter*/ func_0x01521360(lVar23,uVar17,0);
        uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
        if (param_1[0xf] == 0) {
          func_0x00f78af4(0,uVar17);
          goto code_r0x015451d0;
        }
        uVar25 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(param_1[0xf],uVar17,0);
        if ((uVar25 & 1) == 0) {
          lVar23 = param_1[0xf];
          plVar11 = (long *)(**(code **)(*plVar28 + 0x178))
                                      (plVar28,*(undefined8 *)(*plVar28 + 0x180));
          if (plVar11 == (long *)0x0) {
            func_0x00f78af4();
          }
          else {
            uVar17 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar13 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
            plVar11 = (long *)(**(code **)(*plVar28 + 0x178))
                                        (plVar28,*(undefined8 *)(*plVar28 + 0x180));
            if (plVar11 == (long *)0x0) {
              func_0x00f78af4();
            }
            else {
              uVar17 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
              uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
              if (lVar23 != 0) {
                /*Atlas.Stats.UnlockManager$$AddOrUpdateCharacterLastUsedSkin*/ func_0x01521520(lVar23,uVar13,uVar17,0);
                goto code_r0x01544ef8;
              }
              func_0x00f78af4();
            }
          }
code_r0x015451d0:
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x15451d4);
          (*pcVar24)();
        }
      } while( true );
    }
    uVar7 = (uint)uVar17 ^ 1;
    plVar11 = (long *)/*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(plVar28,0,uVar7,0,0);
    if ((uVar7 & 1) != 0) {
      return plVar11;
    }
    uVar31 = *(undefined8 *)(puVar5 + -0x40);
    uVar32 = *(undefined8 *)(puVar5 + -0x38);
    *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x30);
    *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar5 + -0x28);
    *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
    *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
    *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
    puVar27 = puVar5 + -0x10;
    uVar17 = 0;
    uVar22 = 0;
    uVar15 = 0x3eb4000;
    if ((bRam0000000003eb4d9a & 1) == 0) {
      func_0x00f78a20(0x3d23da0,0,0,0);
      func_0x00f78a20(0x3d754d8);
      bRam0000000003eb4d9a = 1;
    }
    plVar11 = (long *)(**(code **)(*plVar28 + 0x1c8))(plVar28,*(undefined8 *)(*plVar28 + 0x1d0));
    if (((int)plVar11 == 0) ||
       (plVar11 = (long *)(**(code **)(*plVar28 + 0x2b8))(plVar28,*(undefined8 *)(*plVar28 + 0x2c0))
       , (int)plVar11 == 0)) {
      return plVar11;
    }
    /*UnityEngine.UISystemProfilerApi$$AddMarker*/ func_0x032f6f10(/*STR('UIAtlasButton.OnPress')*/ uRam0000000003d754d8,plVar28,0);
    plVar11 = (long *)plVar28[0x2b];
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)plVar28[0x2c];
      if (plVar11 == (long *)0x0) {
        return (long *)0x0;
      }
      puVar27 = *(undefined1 **)(puVar5 + -0x10);
      puVar30 = *(undefined **)(puVar5 + -8);
      uVar17 = *(undefined8 *)(puVar5 + -0x20);
      plVar28 = *(long **)(puVar5 + -0x18);
      uVar15 = *(undefined8 *)(puVar5 + -0x30);
      uVar22 = *(undefined8 *)(puVar5 + -0x28);
    }
    else {
      puVar30 = &UNK_01514cc0;
      puVar5 = puVar5 + -0x30;
    }
    uVar33 = 0;
    *(undefined8 **)(puVar5 + -0x50) = unaff_x26;
    *(long **)(puVar5 + -0x48) = plVar10;
    *(undefined8 *)(puVar5 + -0x40) = uVar31;
    *(undefined8 *)(puVar5 + -0x38) = uVar32;
    *(undefined8 *)(puVar5 + -0x30) = uVar15;
    *(undefined8 *)(puVar5 + -0x28) = uVar22;
    *(undefined8 *)(puVar5 + -0x20) = uVar17;
    *(long **)(puVar5 + -0x18) = plVar28;
    *(undefined1 **)(puVar5 + -0x10) = puVar27;
    *(undefined **)(puVar5 + -8) = puVar30;
    *(long **)(puVar5 + -0x58) = plVar11;
    lVar23 = plVar11[0xd];
    if (lVar23 == 0) {
      puVar27 = puVar5 + -0x58;
      lVar12 = 1;
    }
    else {
      lVar12 = *(long *)(lVar23 + 0x18);
      if (lVar12 == 0) {
        return plVar11;
      }
      puVar27 = (undefined1 *)(lVar23 + 0x20);
    }
    lVar23 = 0;
    goto code_r0x02924cd8;
  }
  uVar17 = 0;
  lVar23 = /*Atlas.Stats.UnlockManager$$GetLastUsedSkinIDForCharacter*/ func_0x01521360(param_1[0xf],*(undefined8 *)(param_1[0x16] + 0x18));
  uVar25 = 0x3d21270;
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar23,0);
  uVar26 = 0x3d21270;
  if (plVar11 == (long *)0x0) goto LAB_01544ca8;
  plVar11[2] = lVar12;
  if ((param_1[0x16] == 0) || (uVar26 = uVar25, param_1[0x1b] == 0)) goto LAB_01544ca8;
  plVar28 = (long *)0x3d2e250;
  lVar23 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(param_1[0x1b],*(undefined8 *)(param_1[0x16] + 0x18),uRam0000000003d2e250)
  ;
  uVar13 = func_0x00f78aec(/*System.Predicate<CharacterMetagameData>_TypeInfo*/ uRam0000000003d1e558);
  uVar17 = uRam0000000003d62390;
  /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(uVar13,plVar11,uRam0000000003d62390,uRam0000000003d3f3e8);
  plVar10 = (long *)0x3d2e250;
  if (lVar23 == 0) goto LAB_01544ca8;
  uVar17 = uRam0000000003d39fd8;
  iVar6 = /*System.Collections.Generic.List<TMP_MaterialManager.MaskingMaterial>$$FindIndex*/ func_0x02427980(lVar23,uVar13);
  uVar7 = iVar6 - 1;
  if ((int)param_2 != 0) {
    uVar7 = iVar6 + 1;
  }
  param_2 = (ulong)uVar7;
  lVar12 = param_1[0x1b];
  lVar18 = param_1[0x16];
  if ((int)uVar7 < 0) {
    plVar10 = plVar28;
    if (((lVar18 == 0) || (lVar12 == 0)) ||
       (uVar17 = uRam0000000003d2e250,
       lVar12 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(lVar12,*(undefined8 *)(lVar18 + 0x18)), lVar12 == 0))
    goto LAB_01544ca8;
    uVar7 = *(int *)(lVar12 + 0x18) - 1;
  }
  else {
    if (((lVar18 == 0) || (plVar10 = plVar28, lVar12 == 0)) ||
       (uVar17 = uRam0000000003d2e250,
       lVar12 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(lVar12,*(undefined8 *)(lVar18 + 0x18)), lVar12 == 0))
    goto LAB_01544ca8;
    if (*(int *)(lVar12 + 0x18) <= (int)uVar7) {
      uVar7 = 0;
    }
  }
  uVar13 = (ulong)uVar7;
  plVar10 = plVar28;
  if ((param_1[0x16] == 0) || (param_1[0x1b] == 0)) goto LAB_01544ca8;
  param_2 = param_1[0xf];
  plVar11 = *(long **)(param_1[0x16] + 0x18);
  uVar17 = uRam0000000003d2e250;
  lVar12 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(param_1[0x1b],plVar11);
  if (lVar12 == 0) goto LAB_01544ca8;
  if (*(uint *)(lVar12 + 0x18) <= uVar7) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  plVar14 = *(long **)(*(long *)(lVar12 + 0x10) + (long)(int)uVar7 * 8 + 0x20);
  lVar23 = lVar12;
  if (plVar14 == (long *)0x0) goto LAB_01544ca8;
  lVar23 = (**(code **)(*plVar14 + 0x178))(plVar14,*(undefined8 *)(*plVar14 + 0x180));
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar23,0);
  if (param_2 == 0) goto LAB_01544ca8;
  uVar17 = 0;
  /*Atlas.Stats.UnlockManager$$AddOrUpdateCharacterLastUsedSkin*/ func_0x01521520(param_2,plVar11,uVar15);
  uVar13 = 0x3d26c18;
  if ((bRam0000000003eb4f57 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2e250);
    func_0x00f78a20(0x3d39fd0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3f3e8);
    func_0x00f78a20(0x3d1e558);
    func_0x00f78a20(0x3d62388);
    func_0x00f78a20(0x3d26c18);
    func_0x00f78a20(0x3d40fe8);
    func_0x00f78a20(0x3d40ff0);
    func_0x00f78a20(0x3d40ff8);
    bRam0000000003eb4f57 = 1;
  }
  plVar11 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass34_0_TypeInfo*/ uRam0000000003d26c18);
  /*Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass34_0$$.ctor*/ func_0x015479b8(plVar11,0);
  plVar10 = unaff_x22;
  if ((param_1[0x16] != 0) && (param_1[0xf] != 0)) {
    unaff_x24 = 0x3d21270;
    uVar13 = /*Atlas.Stats.UnlockManager$$GetLastUsedSkinIDForCharacter*/ func_0x01521360(param_1[0xf],*(undefined8 *)(param_1[0x16] + 0x18),0);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar23 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar13,0);
    if (plVar11 != (long *)0x0) {
      plVar11[2] = lVar23;
      if ((param_1[0x16] != 0) && (param_1[0x1b] != 0)) {
        unaff_x23 = 0x3d62000;
        unaff_x25 = (long *)0x3d3f000;
        lVar23 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(param_1[0x1b],*(undefined8 *)(param_1[0x16] + 0x18),
                                 uRam0000000003d2e250);
        plVar10 = (long *)func_0x00f78aec(/*System.Predicate<CharacterMetagameData>_TypeInfo*/ uRam0000000003d1e558);
        uVar17 = uRam0000000003d3f3e8;
        /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(plVar10,plVar11,uRam0000000003d62388);
        uVar13 = 0;
        if (lVar23 != 0) {
          unaff_x23 = 0x3d40fe8;
          uVar13 = /*System.Collections.Generic.List<RuntimeManager.AttachedInstance>$$Find*/ func_0x024278b4(lVar23,plVar10,uRam0000000003d39fd0);
          lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
          if ((lVar23 != 0) && (plVar28 = *(long **)(lVar23 + 0x80), plVar28 != (long *)0x0)) {
            lVar23 = (**(code **)(*plVar28 + 0x178))(plVar28,*(undefined8 *)(*plVar28 + 0x180));
            if (lVar23 == 0) {
LAB_01544668:
              lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d40ff0);
              if (lVar23 != 0) {
                if (*(long *)(lVar23 + 0x18) != 0) {
                  uVar17 = 0;
                  /*Atlas.UI.Screens.CharacterSelectScreen.CharacterSelected$$Invoke*/ func_0x01549fe0(*(long *)(lVar23 + 0x18),0,plVar11[2]);
                }
                if (param_1[0x1f] != 0) {
                  uVar17 = 0;
                  uVar13 = Atlas_FrontEnd_FrontEndScene__RequestLoadCharacter
                                     (param_1[0x1f],0,plVar11[2]);
                  if ((param_1[0x1f] != 0) &&
                     (lVar23 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(param_1[0x1f],0,0),
                     lVar23 != 0)) {
                    plVar10 = (long *)0x3d40000;
                    Atlas_Gameplay_Kart_KartFEAnimator__PlayCharacterSelectScreen(lVar23,0);
                    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
                    if ((lVar23 != 0) && (*(long *)(lVar23 + 0x48) != 0)) {
                      lVar23 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar23 + 0x48),0);
                      unaff_x23 = plVar11[2];
                      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar15 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x23,0);
                      plVar10 = (long *)0x0;
                      if (lVar23 != 0) {
                        *(undefined8 *)(lVar23 + 0x80) = uVar15;
                        uVar15 = (**(code **)(*param_1 + 0x268))
                                           (param_1,*(undefined8 *)(*param_1 + 0x270));
                        plVar10 = (long *)Atlas_UI_Screens_CharacterSelectScreen__SetVisualsForCanProgress
                                                    (param_1,uVar15);
                        if ((uVar13 & 1) != 0) {
                          return plVar10;
                        }
                        lVar23 = plVar11[2];
                        pplVar4 = (long **)register0x00000008;
                        goto code_r0x0154485c;
                      }
                    }
                  }
                }
              }
            }
            else {
              lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
              if ((lVar23 != 0) && (plVar28 = *(long **)(lVar23 + 0x80), plVar28 != (long *)0x0)) {
                (**(code **)(*plVar28 + 0x188))(plVar28,uVar13,*(undefined8 *)(*plVar28 + 400));
                lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                if (lVar23 != 0) {
                  plVar10 = *(long **)(lVar23 + 0x88);
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar10,0,0);
                  if (iVar6 == 0) {
LAB_01544650:
                    plVar28 = (long *)param_1[0x18];
                    if (plVar28 != (long *)0x0) {
                      (**(code **)(*plVar28 + 0x188))
                                (plVar28,uVar13,*(undefined8 *)(*plVar28 + 400));
                      goto LAB_01544668;
                    }
                  }
                  else {
                    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                    if ((lVar23 != 0) &&
                       (plVar28 = *(long **)(lVar23 + 0x88), plVar28 != (long *)0x0)) {
                      (**(code **)(*plVar28 + 0x188))
                                (plVar28,uVar13,*(undefined8 *)(*plVar28 + 400));
                      lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                      if ((lVar23 != 0) &&
                         (((*(long *)(lVar23 + 0x88) != 0 &&
                           (plVar28 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar23 + 0x88),0),
                           uVar13 != 0)) &&
                          (uVar15 = /*Atlas.UI.LoadoutMetagameData$$get_IsLocked*/ func_0x014881dc(uVar13,0), plVar10 = plVar28,
                          plVar28 != (long *)0x0)))) {
                        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(plVar28,uVar15,0);
                        goto LAB_01544650;
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
  auVar36 = func_0x00f78af4();
  uVar15 = auVar36._0_8_;
  pplVar4 = &plStack_80;
  pcStack_58 = Atlas_UI_Screens_CharacterSelectScreen__SetVisualsForCanProgress;
  unaff_x29 = &puStack_60;
  unaff_x22 = (long *)0x3eb4000;
  unaff_x21 = 0x3d40ff8;
  plStack_80 = plVar10;
  plStack_78 = (long *)uVar13;
  plStack_70 = plVar11;
  plStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f59 & 1) == 0) {
    func_0x00f78a20(0x3d40ff8);
    bRam0000000003eb4f59 = 1;
  }
  lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar15,uRam0000000003d40ff8);
  if ((lVar23 != 0) && (*(long *)(lVar23 + 0xb8) != 0)) {
    uVar17 = 1;
    /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar23 + 0xb8),6,auVar36._8_8_,1,0);
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar15,uRam0000000003d40ff8);
    if ((lVar23 != 0) && (*(long *)(lVar23 + 0xb8) != 0)) {
      uVar17 = 1;
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar23 + 0xb8),8,auVar36._8_4_ ^ 1,1,0);
      lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar15,uRam0000000003d40ff8);
      plVar14 = plStack_68;
      plVar28 = plStack_70;
      plVar11 = plStack_78;
      plVar10 = plStack_80;
      if ((lVar23 != 0) && (plVar9 = *(long **)(lVar23 + 0xb8), plVar9 != (long *)0x0)) {
        uVar15 = 0;
        if (plVar9[5] != 0) {
          *(char *)(plVar9[5] + 0x80) = auVar36[8];
          return plVar9;
        }
        lVar23 = func_0x00f78af4();
        plStack_80 = plVar28;
        plStack_78 = plVar14;
        plStack_70 = (long *)&puStack_60;
        plStack_68 = (long *)&Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
        pplVar29 = &plStack_70;
        if (*(ulong *)(lVar23 + 0x28) == 0) {
          puVar30 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
          auVar34 = func_0x00f78af4();
          auVar35._8_8_ = uVar17;
          auVar35._0_8_ = plVar28;
        }
        else {
          auVar34._8_8_ = 0;
          auVar34._0_8_ = *(ulong *)(lVar23 + 0x28);
          uVar15 = 0;
          auVar35._8_8_ = 1;
          auVar35._0_8_ = plVar28;
          puVar30 = &UNK_0150bbf4;
          pplVar4 = &plStack_80;
        }
        do {
          plVar28 = auVar34._0_8_;
          *(long *)((long)pplVar4 + -0x20) = auVar35._0_8_;
          *(long *)((long)pplVar4 + -0x18) = lVar23;
          *(long ***)((long)pplVar4 + -0x10) = pplVar29;
          *(undefined **)((long)pplVar4 + -8) = puVar30;
          uVar7 = auVar34._8_4_;
          if (uVar7 == 0xffffffff) {
            return plVar28;
          }
          lVar12 = plVar28[0xe];
          if (lVar12 == 0) {
            func_0x00f78af4();
            lVar18 = lVar23;
          }
          else {
            lVar18 = auVar34._8_8_;
            if (uVar7 < *(uint *)(lVar12 + 0x18)) {
              uVar20 = 2;
              if ((int)uVar15 == 0) {
                uVar20 = 0;
              }
              *(undefined4 *)(lVar12 + (long)(int)uVar7 * 0x60 + 0x5c) = uVar20;
              if ((auVar35._8_8_ & 1) == 0) {
                /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(plVar28,auVar34._8_8_);
              }
              *(undefined8 *)((long)pplVar4 + -0x60) = unaff_x28;
              *(undefined8 **)((long)pplVar4 + -0x58) = unaff_x27;
              *(undefined8 **)((long)pplVar4 + -0x50) = unaff_x26;
              *(long **)((long)pplVar4 + -0x48) = unaff_x25;
              *(ulong *)((long)pplVar4 + -0x40) = unaff_x24;
              *(ulong *)((long)pplVar4 + -0x38) = unaff_x23;
              *(long **)((long)pplVar4 + -0x30) = plVar10;
              *(long **)((long)pplVar4 + -0x28) = plVar11;
              *(undefined8 *)((long)pplVar4 + -0x20) = *(undefined8 *)((long)pplVar4 + -0x20);
              *(undefined8 *)((long)pplVar4 + -0x18) = *(undefined8 *)((long)pplVar4 + -0x18);
              *(undefined8 *)((long)pplVar4 + -0x10) = *(undefined8 *)((long)pplVar4 + -0x10);
              *(undefined8 *)((long)pplVar4 + -8) = *(undefined8 *)((long)pplVar4 + -8);
              lVar23 = 0x3eb4000;
              if ((bRam0000000003eb4d5b & 1) == 0) {
                func_0x00f78a20(0x3d2a408);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb4d5b = 1;
              }
              lVar12 = plVar28[0xe];
              if (lVar12 == 0) goto code_r0x0150c7d4;
              if (*(uint *)(lVar12 + 0x18) <= uVar7) goto code_r0x0150c7d8;
              unaff_x25 = (long *)(long)(int)uVar7;
              lVar12 = lVar12 + (long)unaff_x25 * 0x60;
              unaff_x26 = *(undefined8 **)(lVar12 + 0x20);
              plVar10 = *(long **)(lVar12 + 0x28);
              uVar17 = *(undefined8 *)(lVar12 + 0x30);
              uVar31 = *(undefined8 *)(lVar12 + 0x48);
              uVar15 = *(undefined8 *)(lVar12 + 0x40);
              *(undefined8 *)((long)pplVar4 + -0xe8) = *(undefined8 *)(lVar12 + 0x38);
              *(undefined8 *)((long)pplVar4 + -0xf0) = uVar17;
              *(undefined8 *)((long)pplVar4 + -0xd8) = uVar31;
              *(undefined8 *)((long)pplVar4 + -0xe0) = uVar15;
              lVar23 = *(long *)(lVar12 + 0x50);
              iVar6 = *(int *)(lVar12 + 0x58);
              iVar8 = *(int *)(lVar12 + 0x5c);
              unaff_x23 = *(ulong *)(lVar12 + 0x60);
              unaff_x24 = *(ulong *)(lVar12 + 0x68);
              uVar17 = *(undefined8 *)(lVar12 + 0x70);
              *(undefined8 *)((long)pplVar4 + -0xf8) = *(undefined8 *)(lVar12 + 0x78);
              *(undefined8 *)((long)pplVar4 + -0x100) = uVar17;
              if (iVar8 == iVar6) {
code_r0x0150c768:
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                plVar11 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar23,0,0);
                if ((int)plVar11 == 0) {
                  return plVar11;
                }
                if (lVar23 != 0) {
                  plVar10 = (long *)/*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar23,iVar6 == 2,0);
                  return plVar10;
                }
              }
              else if (iVar6 == 2) {
                if (iVar8 == 0) {
                  if (unaff_x24 == 0) goto code_r0x0150c7d4;
                  uVar15 = *(undefined8 *)(lVar12 + 0x38);
                  uVar17 = *(undefined8 *)(lVar12 + 0x30);
                  uVar22 = *(undefined8 *)(lVar12 + 0x48);
                  uVar31 = *(undefined8 *)(lVar12 + 0x40);
                  *(undefined8 *)((long)pplVar4 + -0x118) = uVar15;
                  *(undefined8 *)((long)pplVar4 + -0x120) = uVar17;
                  *(undefined8 *)((long)pplVar4 + -0x108) = uVar22;
                  *(undefined8 *)((long)pplVar4 + -0x110) = uVar31;
                  uVar33 = *(undefined8 *)(lVar12 + 0x78);
                  uVar32 = *(undefined8 *)(lVar12 + 0x70);
                  *(undefined8 *)((long)pplVar4 + -0x128) = uVar33;
                  *(undefined8 *)((long)pplVar4 + -0x130) = uVar32;
                  *(undefined8 **)((long)pplVar4 + -200) = unaff_x26;
                  *(long **)((long)pplVar4 + -0xc0) = plVar10;
                  *(undefined8 *)((long)pplVar4 + -0xb0) = uVar15;
                  *(undefined8 *)((long)pplVar4 + -0xb8) = uVar17;
                  *(undefined8 *)((long)pplVar4 + -0xa0) = uVar22;
                  *(undefined8 *)((long)pplVar4 + -0xa8) = uVar31;
                  *(long *)((long)pplVar4 + -0x98) = lVar23;
                  *(undefined8 *)((long)pplVar4 + -0x90) = _UNK_033f8620;
                  *(ulong *)((long)pplVar4 + -0x88) = unaff_x23;
                  *(ulong *)((long)pplVar4 + -0x80) = unaff_x24;
                  *(undefined8 *)((long)pplVar4 + -0x70) = uVar33;
                  *(undefined8 *)((long)pplVar4 + -0x78) = uVar32;
                  uVar13 = unaff_x24;
code_r0x0150c724:
                  /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(uVar13,(undefined1 *)((long)pplVar4 + -200),uRam0000000003d2a408);
                  iVar6 = 1;
                }
                else {
                  iVar6 = 2;
                }
code_r0x0150c72c:
                lVar12 = plVar28[0xe];
                if (lVar12 != 0) {
                  if (*(uint *)(lVar12 + 0x18) <= uVar7) goto code_r0x0150c7d8;
                  lVar12 = lVar12 + (long)unaff_x25 * 0x60;
                  *(undefined8 **)(lVar12 + 0x20) = unaff_x26;
                  *(long **)(lVar12 + 0x28) = plVar10;
                  uVar17 = *(undefined8 *)((long)pplVar4 + -0xf0);
                  uVar31 = *(undefined8 *)((long)pplVar4 + -0xd8);
                  uVar15 = *(undefined8 *)((long)pplVar4 + -0xe0);
                  *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)((long)pplVar4 + -0xe8);
                  *(undefined8 *)(lVar12 + 0x30) = uVar17;
                  *(undefined8 *)(lVar12 + 0x48) = uVar31;
                  *(undefined8 *)(lVar12 + 0x40) = uVar15;
                  *(long *)(lVar12 + 0x50) = lVar23;
                  *(int *)(lVar12 + 0x58) = iVar6;
                  *(int *)(lVar12 + 0x5c) = iVar8;
                  *(ulong *)(lVar12 + 0x60) = unaff_x23;
                  *(ulong *)(lVar12 + 0x68) = unaff_x24;
                  uVar17 = *(undefined8 *)((long)pplVar4 + -0x100);
                  *(undefined8 *)(lVar12 + 0x78) = *(undefined8 *)((long)pplVar4 + -0xf8);
                  *(undefined8 *)(lVar12 + 0x70) = uVar17;
                  goto code_r0x0150c768;
                }
              }
              else {
                if (iVar6 != 0) goto code_r0x0150c72c;
                if (iVar8 != 2) {
                  iVar6 = 0;
                  goto code_r0x0150c72c;
                }
                if (((plVar10 != (long *)0x0) && (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar10,0), lVar12 != 0))
                   && (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar12,1,0), unaff_x23 != 0)) {
                  *(undefined8 **)((long)pplVar4 + -200) = unaff_x26;
                  *(long **)((long)pplVar4 + -0xc0) = plVar10;
                  *(undefined8 *)((long)pplVar4 + -0xb0) = *(undefined8 *)((long)pplVar4 + -0xe8);
                  *(undefined8 *)((long)pplVar4 + -0xb8) = *(undefined8 *)((long)pplVar4 + -0xf0);
                  *(undefined8 *)((long)pplVar4 + -0xa0) = *(undefined8 *)((long)pplVar4 + -0xd8);
                  *(undefined8 *)((long)pplVar4 + -0xa8) = *(undefined8 *)((long)pplVar4 + -0xe0);
                  *(long *)((long)pplVar4 + -0x98) = lVar23;
                  *(undefined8 *)((long)pplVar4 + -0x90) = _UNK_033f8628;
                  *(ulong *)((long)pplVar4 + -0x88) = unaff_x23;
                  *(ulong *)((long)pplVar4 + -0x80) = unaff_x24;
                  *(undefined8 *)((long)pplVar4 + -0x70) = *(undefined8 *)((long)pplVar4 + -0xf8);
                  *(undefined8 *)((long)pplVar4 + -0x78) = *(undefined8 *)((long)pplVar4 + -0x100);
                  uVar13 = unaff_x23;
                  goto code_r0x0150c724;
                }
              }
code_r0x0150c7d4:
              func_0x00f78af4();
code_r0x0150c7d8:
              uVar17 = func_0x00f78b24();
              auVar36 = func_0x00f78ac0(uVar17,0);
              lVar12 = auVar36._8_8_;
              *(undefined8 **)((long)pplVar4 + -0x180) = unaff_x26;
              *(long **)((long)pplVar4 + -0x178) = unaff_x25;
              *(ulong *)((long)pplVar4 + -0x170) = unaff_x24;
              *(ulong *)((long)pplVar4 + -0x168) = unaff_x23;
              *(long **)((long)pplVar4 + -0x160) = plVar10;
              *(undefined1 (*) [16])((long)pplVar4 + -0x158) = auVar34;
              *(long *)((long)pplVar4 + -0x148) = lVar23;
              *(undefined1 **)((long)pplVar4 + -0x140) = (undefined1 *)((long)pplVar4 + -0x10);
              *(undefined **)((long)pplVar4 + -0x138) =
                   &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
              if ((bRam0000000003eb4d55 & 1) == 0) {
                func_0x00f78a20(0x3d5e6e0);
                func_0x00f78a20(0x3d5e7a8);
                func_0x00f78a20(0x3d5e7d0);
                func_0x00f78a20(0x3d5e850);
                func_0x00f78a20(0x3d5e888);
                bRam0000000003eb4d55 = 1;
              }
              uVar17 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar12 + 0x18),*(undefined4 *)(lVar12 + 0x1c)
                                       ,*(undefined4 *)(lVar12 + 0x20),_UNK_033f8144,
                                       *(undefined8 *)(lVar12 + 0x10),0,0);
              uVar17 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar17,10,uRam0000000003d5e7a8);
              uVar17 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar17,*(undefined8 *)(lVar12 + 0x58),uRam0000000003d5e6e0);
              uVar17 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar17,1,uRam0000000003d5e888);
              plVar10 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar17,auVar36._0_8_,uRam0000000003d5e850);
              if ((plVar10 != (long *)0x0) && ((char)plVar10[0x1d] != '\0')) {
                plVar10[6] = *(long *)(lVar12 + 0x10);
              }
              return plVar10;
            }
          }
          uVar17 = func_0x00f78b24();
          auVar36 = func_0x00f78ac0(uVar17,0);
          puVar3 = (undefined1 *)((long)pplVar4 + -0x30);
          puVar27 = (undefined1 *)((long)pplVar4 + -0x30);
          *(undefined1 **)((long)pplVar4 + -0x30) = (undefined1 *)((long)pplVar4 + -0x10);
          *(undefined **)((long)pplVar4 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
          lVar23 = *(long *)(auVar36._0_8_ + 0x28);
          auVar35._8_8_ = auVar36._8_8_;
          auVar35._0_8_ = lVar23;
          if (lVar23 == 0) {
            puVar30 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
            auVar35 = func_0x00f78af4();
          }
          else {
            puVar3 = (undefined1 *)((long)pplVar4 + -0x20);
            puVar27 = *(undefined1 **)((long)pplVar4 + -0x30);
            puVar30 = *(undefined **)((long)pplVar4 + -0x28);
          }
          lVar23 = auVar35._8_8_;
          pplVar4 = (long **)(puVar3 + -0x20);
          *(long **)(puVar3 + -0x20) = plVar28;
          *(long *)(puVar3 + -0x18) = lVar18;
          *(undefined1 **)(puVar3 + -0x10) = puVar27;
          *(undefined **)(puVar3 + -8) = puVar30;
          pplVar29 = (long **)(puVar3 + -0x10);
          auVar34._8_8_ = 4;
          auVar34._0_8_ = auVar35._0_8_;
          uVar15 = 0;
          puVar30 = &UNK_0150bd10;
        } while( true );
      }
    }
  }
  unaff_x30 = Atlas_UI_Screens_CharacterSelectScreen__PlayCharacterVO;
  auVar37 = func_0x00f78af4();
  lVar23 = auVar37._8_8_;
  param_1 = auVar37._0_8_;
  pplVar4 = &plStack_80;
code_r0x0154485c:
  do {
    *(long **)((long)pplVar4 + -0x30) = unaff_x22;
    *(long *)((long)pplVar4 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])((long)pplVar4 + -0x20) = auVar36;
    *(undefined1 ***)((long)pplVar4 + -0x10) = unaff_x29;
    *(code **)((long)pplVar4 + -8) = unaff_x30;
    unaff_x29 = (undefined1 **)((long)pplVar4 + -0x10);
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4f58 & 1) == 0) {
      func_0x00f78a20(0x3d57270);
      func_0x00f78a20(0x3d574f0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f58 = 1;
    }
    *(undefined8 *)((long)pplVar4 + -0x38) = 0;
    if ((param_1[0x10] != 0) && (lVar12 = *(long *)(param_1[0x10] + 0x10), lVar12 != 0)) {
      uVar17 = uRam0000000003d574f0;
      plVar10 = (long *)/*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar12,lVar23,(undefined1 *)((long)pplVar4 + -0x38));
      if ((int)plVar10 == 0) {
        return plVar10;
      }
      if (*(long *)((long)pplVar4 + -0x38) != 0) {
        uVar13 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)((long)pplVar4 + -0x38) + 0x70),0);
        if ((uVar13 & 1) == 0) {
          if (((param_1[0x10] == 0) || (*(long *)((long)pplVar4 + -0x38) == 0)) ||
             (lVar12 = *(long *)(param_1[0x10] + 0x10), lVar12 == 0)) goto LAB_01544998;
          lVar23 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar12,*(undefined8 *)(*(long *)((long)pplVar4 + -0x38) + 0x70),
                                   uRam0000000003d57270);
        }
        else {
          lVar23 = *(long *)((long)pplVar4 + -0x38);
        }
        unaff_x21 = param_1[0x17];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar10 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar23,unaff_x21,0);
        if ((int)plVar10 == 0) {
          return plVar10;
        }
        param_1[0x17] = lVar23;
        lVar12 = *(long *)((long)pplVar4 + -0x38);
        if (lVar12 != 0) {
          plVar10 = (long *)/*Atlas.Audio.UIAudio$$SetSelectedCharacter*/ func_0x01516b9c(*(undefined8 *)(lVar12 + 0x18),
                                            *(undefined4 *)(lVar12 + 0xa8),0);
          return plVar10;
        }
      }
    }
LAB_01544998:
    auVar36._8_8_ = param_1;
    auVar36._0_8_ = lVar23;
    unaff_x30 = Atlas_UI_Screens_CharacterSelectScreen__KartPartLoaded;
    auVar37 = func_0x00f78af4();
    lVar23 = auVar37._8_8_;
    param_1 = auVar37._0_8_;
    pplVar4 = (long **)((long)pplVar4 + -0x40);
    if ((int)uVar17 != 1) {
      return param_1;
    }
  } while( true );
code_r0x01545024:
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar5 + -0xc0,uRam0000000003d32290);
code_r0x01545030:
  plVar11 = (long *)param_1[0x18];
  uVar2 = uVar13;
  if (plVar11 != (long *)0x0) {
    plVar28 = (long *)param_1[0xf];
    plVar11 = (long *)(**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
    if ((plVar11 != (long *)0x0) &&
       (uVar17 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180)),
       plVar28 != (long *)0x0)) {
      uVar25 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(plVar28,uVar17,0);
      if ((uVar25 & 1) == 0) {
        if ((param_1[0x1c] != 0) &&
           (plVar11 = (long *)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(param_1[0x1c],param_2,*unaff_x26),
           plVar11 != (long *)0x0)) {
          if ((int)plVar11[3] == 0) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          plVar28 = plVar11;
          if (*(long *)(plVar11[2] + 0x20) != 0) goto code_r0x015450a8;
        }
      }
      else if (param_2 != 0) {
        param_2 = *(ulong *)(param_2 + 0x10);
        if (((*(ushort *)(*plVar10 + 0x132) >> 10 & 1) != 0) && (*(int *)(*plVar10 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (param_2 != 0) {
          /*Atlas.UI.UIAtlasButton$$SetTrigger*/ func_0x015159e4(param_2,*(undefined4 *)(*(long *)(*plVar10 + 0xb8) + 0x18),0);
          plVar10 = (long *)Atlas_UI_Screens_CharacterSelectScreen__PlayCurrentTabAnimations
                                      (param_1);
          return plVar10;
        }
      }
    }
  }
code_r0x015451d4:
  uVar13 = uVar2;
  func_0x00f78af4();
  if (extraout_w1 == 1) goto code_r0x01545230;
  goto code_r0x01545258;
code_r0x015450a8:
  auVar37._8_8_ = *(undefined8 *)(*(long *)(plVar11[2] + 0x20) + 0x48);
  auVar37._0_8_ = param_1;
  uVar17 = 1;
  puVar30 = &UNK_015450b8;
  puVar5 = puVar5 + -0xe0;
  goto code_r0x01544cac;
code_r0x02924cd8:
  lVar18 = *(long *)(puVar27 + lVar23 * 8);
  pcVar24 = *(code **)(lVar18 + 0x10);
  plVar10 = *(long **)(lVar18 + 0x20);
  lVar18 = *(long *)(lVar18 + 0x28);
  if (*(short *)(lVar18 + 0x48) == -1) {
    func_0x00f78ad8(lVar18,uVar33);
  }
  iVar6 = func_0x00f78a4c(lVar18);
  if (iVar6 == 0) {
    if ((((plVar10 == (long *)0x0) || (*(short *)(lVar18 + 0x48) == -1)) ||
        ((*(byte *)(*plVar10 + 0x115) & 1) != 0)) || (plVar11[3] == 0)) goto code_r0x02924d98;
    iVar6 = func_0x00f78a44(lVar18);
    iVar8 = func_0x00f78ec0(lVar18);
    if (iVar6 == 0) {
      uVar1 = *(ushort *)(lVar18 + 0x48);
      if (iVar8 == 0) {
        lVar18 = *plVar10 + (ulong)uVar1 * 0x10;
        auVar36 = (**(code **)(lVar18 + 0x138))(plVar10,*(undefined8 *)(lVar18 + 0x140));
        goto code_r0x02924da4;
      }
      lVar18 = func_0x00f78a48(lVar18);
      lVar19 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar19 + 0x12a);
      if (uVar13 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == lVar18) {
            puVar16 = (undefined8 *)(lVar19 + (long)(int)(*piVar21 + (uint)uVar1) * 0x10 + 0x138);
            goto code_r0x02924e68;
          }
          piVar21 = piVar21 + 4;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      puVar16 = (undefined8 *)func_0x00fac1f0(plVar10,lVar18,(ulong)uVar1);
code_r0x02924e68:
      pcVar24 = (code *)*puVar16;
      puVar16 = (undefined8 *)puVar16[1];
    }
    else {
      if (iVar8 == 0) {
        uVar17 = *(undefined8 *)(*plVar10 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
      }
      else {
        lVar19 = *plVar10;
        uVar13 = (ulong)*(ushort *)(lVar19 + 0x12a);
        if (uVar13 != 0) {
          piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
          do {
            if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x18)) {
              lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x48)) * 0x10 +
                       0x138;
              goto code_r0x02924e40;
            }
            piVar21 = piVar21 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        lVar19 = func_0x00fac1f0(plVar10);
code_r0x02924e40:
        uVar17 = *(undefined8 *)(lVar19 + 8);
      }
      puVar16 = (undefined8 *)func_0x00f78acc(uVar17,lVar18);
      pcVar24 = (code *)*puVar16;
    }
    auVar36 = (*pcVar24)(plVar10,puVar16);
  }
  else if (*(char *)(lVar18 + 0x4a) == '\0') {
    auVar36 = (*pcVar24)(lVar18);
  }
  else {
code_r0x02924d98:
    auVar36 = (*pcVar24)(plVar10,lVar18);
  }
code_r0x02924da4:
  uVar33 = auVar36._8_8_;
  lVar23 = lVar23 + 1;
  if (lVar23 == lVar12) {
    return auVar36._0_8_;
  }
  goto code_r0x02924cd8;
code_r0x01545230:
  puVar16 = (undefined8 *)___cxa_begin_catch();
  plVar28 = (long *)*puVar16;
  ___cxa_end_catch();
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar5 + -0xc0,*unaff_x27);
  if (plVar28 == (long *)0x0) goto code_r0x01545030;
  func_0x00f78ac0(plVar28,0);
code_r0x01545258:
  uVar17 = __Unwind_Resume();
  *(long *)(puVar5 + -0x110) = lVar23;
  *(long **)(puVar5 + -0x108) = plVar28;
  *(ulong *)(puVar5 + -0x100) = param_2;
  *(long **)(puVar5 + -0xf8) = param_1;
  *(undefined1 **)(puVar5 + -0xf0) = puVar27;
  *(undefined **)(puVar5 + -0xe8) = &Atlas_UI_Screens_CharacterSelectScreen__CanProgressToNextScreen
  ;
  if ((bRam0000000003eb4f5d & 1) == 0) {
    func_0x00f78a20(0x3d40fe8);
    bRam0000000003eb4f5d = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar17,uRam0000000003d40fe8);
  if ((lVar12 != 0) && (plVar11 = *(long **)(lVar12 + 0x80), plVar11 != (long *)0x0)) {
    lVar12 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
    plVar11 = (long *)0x0;
    if (lVar12 != 0) {
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar17,uRam0000000003d40fe8);
      if (((lVar12 == 0) || (plVar11 = *(long **)(lVar12 + 0x80), plVar11 == (long *)0x0)) ||
         (lVar12 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180)),
         lVar12 == 0)) goto code_r0x01545304;
      uVar7 = /*Atlas.UI.LoadoutMetagameData$$get_IsLocked*/ func_0x014881dc(lVar12,0);
      plVar11 = (long *)(ulong)(uVar7 ^ 1);
    }
    return plVar11;
  }
code_r0x01545304:
  lVar12 = func_0x00f78af4();
  *(undefined8 *)(puVar5 + -0x170) = unaff_x28;
  *(undefined8 **)(puVar5 + -0x168) = unaff_x27;
  *(undefined8 **)(puVar5 + -0x160) = unaff_x26;
  *(long **)(puVar5 + -0x158) = plVar10;
  *(ulong *)(puVar5 + -0x150) = uVar26;
  *(ulong *)(puVar5 + -0x148) = uVar13;
  *(long *)(puVar5 + -0x140) = lVar23;
  *(undefined8 *)(puVar5 + -0x138) = 0x3eb4000;
  *(undefined8 *)(puVar5 + -0x130) = 0x3d40fe8;
  *(undefined8 *)(puVar5 + -0x128) = uVar17;
  *(undefined1 **)(puVar5 + -0x120) = puVar5 + -0xf0;
  *(undefined **)(puVar5 + -0x118) = &Atlas_UI_Screens_CharacterSelectScreen___ctor;
  if ((bRam0000000003eb4f5e & 1) == 0) {
    func_0x00f78a20(0x3d2c6c0);
    func_0x00f78a20(0x3d30290);
    func_0x00f78a20(0x3d2e240);
    func_0x00f78a20(0x3d30660);
    func_0x00f78a20(0x3d1c5e8);
    func_0x00f78a20(0x3d1c678);
    func_0x00f78a20(0x3d1c1b8);
    func_0x00f78a20(0x3d240a8);
    bRam0000000003eb4f5e = 1;
  }
  uVar17 = func_0x00f78aec(/*System.Random_TypeInfo*/ uRam0000000003d240a8);
  /*System.Random$$.ctor*/ func_0x0297f008(uVar17,0);
  *(undefined8 *)(lVar12 + 0xa8) = uVar17;
  uVar17 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, List<CharacterMetagameData>>_TypeInfo*/ uRam0000000003d1c1b8);
  /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$.ctor*/ func_0x01e3bb54(uVar17,uRam0000000003d2e240);
  *(undefined8 *)(lVar12 + 0xd8) = uVar17;
  uVar17 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>_TypeInfo*/ uRam0000000003d1c678);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar17,uRam0000000003d30660);
  *(undefined8 *)(lVar12 + 0xe0) = uVar17;
  uVar17 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<UIAtlasButton, int>_TypeInfo*/ uRam0000000003d1c5e8);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(uVar17,uRam0000000003d30290);
  *(undefined8 *)(lVar12 + 0x100) = uVar17;
  *(undefined8 *)(puVar5 + -0x120) = *(undefined8 *)(puVar5 + -0x120);
  *(undefined8 *)(puVar5 + -0x118) = *(undefined8 *)(puVar5 + -0x118);
  if (lVar12 == 0) {
    auVar36 = func_0x00f78af4();
    plVar11 = auVar36._8_8_;
    plVar10 = auVar36._0_8_;
    lVar12 = plVar11[1];
    lVar23 = *plVar11;
    plVar10[2] = plVar11[2];
    plVar10[1] = lVar12;
    *plVar10 = lVar23;
    return plVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar10 = (long *)(*(code *)**(undefined8 **)
                                (*(long *)(*(long *)(lRam0000000003d2c6c0 + 0x18) + 0xc0) + 0x38))()
  ;
  return plVar10;
}



// ============================================================
// RVA: 0x1544cac | Atlas.UI.Screens.CharacterSelectScreen.SetSelected
// ============================================================

/* WARNING: Possible PIC construction at 0x01514cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01514c5c) */
/* WARNING: Removing unreachable block (ram,0x01514c7c) */
/* WARNING: Removing unreachable block (ram,0x01514c90) */
/* WARNING: Removing unreachable block (ram,0x01514c94) */
/* WARNING: Removing unreachable block (ram,0x01514c98) */
/* WARNING: Removing unreachable block (ram,0x01514ca0) */

undefined8 *
Atlas_UI_Screens_CharacterSelectScreen__SetSelected(undefined8 param_1,long *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int extraout_w1;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  code *pcVar16;
  undefined8 unaff_x23;
  long lVar17;
  undefined8 unaff_x24;
  undefined1 *puVar18;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar19 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  
  if ((bRam0000000003eb4f5b & 1) == 0) {
    func_0x00f78a20(0x3d2c6c8);
    bRam0000000003eb4f5b = 1;
  }
  lVar11 = lRam0000000003d2c6c8;
  Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
            (param_1,param_2);
  if (param_2 == (long *)0x0) {
    auVar19 = func_0x00f78af4();
    lVar17 = auVar19._0_8_;
    if ((bRam0000000003eb4f5c & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d30678);
      func_0x00f78a20(0x3d32290);
      func_0x00f78a20(0x3d32298);
      func_0x00f78a20(0x3d322a0);
      func_0x00f78a20(0x3d223e8);
      func_0x00f78a20(0x3d3a008);
      func_0x00f78a20(0x3d3a010);
      func_0x00f78a20(0x3d25578);
      func_0x00f78a20(0x3d40fe8);
      bRam0000000003eb4f5c = 1;
    }
    uStack_c0 = 0;
    uStack_b8 = 0;
    plStack_b0 = (long *)0x0;
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d40fe8);
    if (lVar12 == 0) goto code_r0x015451d4;
    if (*(long *)(lVar12 + 200) == 0) goto code_r0x015451d4;
    lVar12 = *(long *)(*(long *)(lVar12 + 200) + 0x28);
    if (lVar12 == 0) goto code_r0x015451d4;
    plVar10 = *(long **)(lVar12 + 0x40);
    if (plVar10 != (long *)0x0) {
      if (*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.UI.IPTabData_TypeInfo*/ lRam0000000003d223e8 + 300)) {
        plVar10 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar10 + 200) +
                         (ulong)*(byte *)(/*Atlas.UI.IPTabData_TypeInfo*/ lRam0000000003d223e8 + 300) * 8 + -8) !=
               /*Atlas.UI.IPTabData_TypeInfo*/ lRam0000000003d223e8) {
        plVar10 = (long *)0x0;
      }
    }
    *(long **)(lVar17 + 0xf0) = plVar10;
    if (*(long *)(lVar17 + 0xe0) == 0) goto code_r0x015451d4;
    unaff_x26 = (undefined8 *)0x3d30678;
    lVar12 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar17 + 0xe0),auVar19._8_8_,uRam0000000003d30678);
    if (lVar12 == 0) goto code_r0x015451d4;
    unaff_x25 = (long *)0x3d25578;
    unaff_x27 = (undefined8 *)0x3d32290;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_d8,lVar12,uRam0000000003d3a008);
    uStack_b8 = uStack_d0;
    uStack_c0 = uStack_d8;
    plStack_b0 = plStack_c8;
code_r0x01544ef8:
    do {
      uVar14 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c0,uRam0000000003d32298);
      plVar10 = plStack_b0;
      if ((uVar14 & 1) == 0) goto code_r0x01545024;
      if (plStack_b0 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x015451d0;
      }
      lVar12 = *(long *)(lVar17 + 0x78);
      plVar6 = (long *)(**(code **)(*plStack_b0 + 0x178))
                                 (plStack_b0,*(undefined8 *)(*plStack_b0 + 0x180));
      if (plVar6 == (long *)0x0) {
        func_0x00f78af4();
        goto code_r0x015451d0;
      }
      uVar8 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar8,0);
      if (lVar12 == 0) {
        func_0x00f78af4(uVar8,uVar8);
        goto code_r0x015451d0;
      }
      uVar8 = /*Atlas.Stats.UnlockManager$$GetLastUsedSkinIDForCharacter*/ func_0x01521360(lVar12,uVar8,0);
      uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar8,0);
      if (*(long *)(lVar17 + 0x78) == 0) {
        func_0x00f78af4(0,uVar8);
        goto code_r0x015451d0;
      }
      uVar14 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar17 + 0x78),uVar8,0);
      if ((uVar14 & 1) == 0) {
        lVar12 = *(long *)(lVar17 + 0x78);
        plVar6 = (long *)(**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        if (plVar6 == (long *)0x0) {
          func_0x00f78af4();
        }
        else {
          uVar8 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar8,0);
          plVar10 = (long *)(**(code **)(*plVar10 + 0x178))
                                      (plVar10,*(undefined8 *)(*plVar10 + 0x180));
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
          }
          else {
            uVar7 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
            uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar7,0);
            if (lVar12 != 0) {
              /*Atlas.Stats.UnlockManager$$AddOrUpdateCharacterLastUsedSkin*/ func_0x01521520(lVar12,uVar8,uVar7,0);
              goto code_r0x01544ef8;
            }
            func_0x00f78af4();
          }
        }
code_r0x015451d0:
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x15451d4);
        (*pcVar16)();
      }
    } while( true );
  }
  puVar5 = (undefined8 *)/*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(param_2,0,param_3 ^ 1,0,0);
  if (((param_3 ^ 1) & 1) != 0) {
    return puVar5;
  }
  puVar18 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4d9a & 1) == 0) {
    func_0x00f78a20(0x3d23da0,0,0,0);
    func_0x00f78a20(0x3d754d8);
    bRam0000000003eb4d9a = 1;
  }
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
  if (((int)puVar5 == 0) ||
     (puVar5 = (undefined8 *)
               (**(code **)(*param_2 + 0x2b8))(param_2,*(undefined8 *)(*param_2 + 0x2c0)),
     (int)puVar5 == 0)) {
    return puVar5;
  }
  /*UnityEngine.UISystemProfilerApi$$AddMarker*/ func_0x032f6f10(/*STR('UIAtlasButton.OnPress')*/ uRam0000000003d754d8,param_2,0);
  puVar5 = (undefined8 *)param_2[0x2b];
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_2[0x2c];
    if (puVar5 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  else {
    unaff_x30 = &UNK_01514cc0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x19 = param_2;
    unaff_x20 = 0;
    unaff_x21 = 0;
    unaff_x22 = 0x3eb4000;
    unaff_x29 = puVar18;
  }
  uVar8 = 0;
  *(undefined8 **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 **)((long)register0x00000008 + -0x58) = puVar5;
  lVar11 = puVar5[0xd];
  if (lVar11 == 0) {
    puVar18 = (undefined1 *)((long)register0x00000008 + -0x58);
    lVar17 = 1;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x18);
    if (lVar17 == 0) {
      return puVar5;
    }
    puVar18 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar18 + lVar11 * 8);
    pcVar16 = *(code **)(lVar12 + 0x10);
    plVar10 = *(long **)(lVar12 + 0x20);
    lVar12 = *(long *)(lVar12 + 0x28);
    if (*(short *)(lVar12 + 0x48) == -1) {
      func_0x00f78ad8(lVar12,uVar8);
    }
    iVar3 = func_0x00f78a4c(lVar12);
    if (iVar3 == 0) {
      if ((((plVar10 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
          ((*(byte *)(*plVar10 + 0x115) & 1) != 0)) || (puVar5[3] == 0)) goto code_r0x02924d98;
      iVar3 = func_0x00f78a44(lVar12);
      iVar4 = func_0x00f78ec0(lVar12);
      if (iVar3 == 0) {
        uVar1 = *(ushort *)(lVar12 + 0x48);
        if (iVar4 == 0) {
          lVar12 = *plVar10 + (ulong)uVar1 * 0x10;
          auVar19 = (**(code **)(lVar12 + 0x138))(plVar10,*(undefined8 *)(lVar12 + 0x140));
          goto code_r0x02924da4;
        }
        lVar12 = func_0x00f78a48(lVar12);
        lVar13 = *plVar10;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar12) {
              puVar9 = (undefined8 *)(lVar13 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
              goto code_r0x02924e68;
            }
            piVar15 = piVar15 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar10,lVar12,(ulong)uVar1);
code_r0x02924e68:
        pcVar16 = (code *)*puVar9;
        puVar9 = (undefined8 *)puVar9[1];
      }
      else {
        if (iVar4 == 0) {
          uVar8 = *(undefined8 *)(*plVar10 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar13 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar14 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x02924e40;
              }
              piVar15 = piVar15 + 4;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          lVar13 = func_0x00fac1f0(plVar10);
code_r0x02924e40:
          uVar8 = *(undefined8 *)(lVar13 + 8);
        }
        puVar9 = (undefined8 *)func_0x00f78acc(uVar8,lVar12);
        pcVar16 = (code *)*puVar9;
      }
      auVar19 = (*pcVar16)(plVar10,puVar9);
    }
    else if (*(char *)(lVar12 + 0x4a) == '\0') {
      auVar19 = (*pcVar16)(lVar12);
    }
    else {
code_r0x02924d98:
      auVar19 = (*pcVar16)(plVar10,lVar12);
    }
code_r0x02924da4:
    uVar8 = auVar19._8_8_;
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar17) {
      return auVar19._0_8_;
    }
  } while( true );
code_r0x01545024:
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,uRam0000000003d32290);
  do {
    plVar10 = *(long **)(lVar17 + 0xc0);
    if (plVar10 != (long *)0x0) {
      lVar12 = *(long *)(lVar17 + 0x78);
      plVar10 = (long *)(**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
      if ((plVar10 != (long *)0x0) &&
         (uVar8 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180)),
         lVar12 != 0)) {
        uVar14 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar12,uVar8,0);
        if ((uVar14 & 1) == 0) {
          if ((*(long *)(lVar17 + 0xe0) != 0) &&
             (lVar12 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar17 + 0xe0),lVar11,*unaff_x26), lVar12 != 0)) {
            if (*(int *)(lVar12 + 0x18) == 0) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + 0x20);
            if (lVar12 != 0) {
              Atlas_UI_Screens_CharacterSelectScreen__SetSelected
                        (lVar17,*(undefined8 *)(lVar12 + 0x48),1);
              lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d40fe8);
              if ((lVar12 != 0) && (*(long *)(lVar17 + 0xe0) != 0)) {
                lVar13 = *(long *)(lVar12 + 200);
                lVar12 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar17 + 0xe0),lVar11,*unaff_x26);
                if (lVar12 != 0) {
                  if (*(int *)(lVar12 + 0x18) == 0) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar12 = *(long *)(*(long *)(lVar12 + 0x10) + 0x20);
                  if (((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x48), lVar12 != 0)) &&
                     (uVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0), lVar13 != 0)) {
                    /*Atlas.UI.TabController$$SetSelectedGameObjectInTab*/ func_0x01508ae0(lVar13,lVar11,uVar8,0);
                    goto code_r0x01545138;
                  }
                }
              }
            }
          }
        }
        else {
code_r0x01545138:
          if (lVar11 != 0) {
            lVar11 = *(long *)(lVar11 + 0x10);
            if (((*(ushort *)(*unaff_x25 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(*unaff_x25 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (lVar11 != 0) {
              /*Atlas.UI.UIAtlasButton$$SetTrigger*/ func_0x015159e4(lVar11,*(undefined4 *)(*(long *)(*unaff_x25 + 0xb8) + 0x18),0);
              puVar5 = (undefined8 *)
                       Atlas_UI_Screens_CharacterSelectScreen__PlayCurrentTabAnimations(lVar17);
              return puVar5;
            }
          }
        }
      }
    }
code_r0x015451d4:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01545258;
    plVar10 = (long *)___cxa_begin_catch();
    lVar12 = *plVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,*unaff_x27);
  } while (lVar12 == 0);
  func_0x00f78ac0(lVar12,0);
code_r0x01545258:
  uVar8 = __Unwind_Resume();
  if ((bRam0000000003eb4f5d & 1) == 0) {
    func_0x00f78a20(0x3d40fe8);
    bRam0000000003eb4f5d = 1;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar8,uRam0000000003d40fe8);
  if ((lVar11 != 0) && (plVar10 = *(long **)(lVar11 + 0x80), plVar10 != (long *)0x0)) {
    lVar11 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
    puVar5 = (undefined8 *)0x0;
    if (lVar11 != 0) {
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar8,uRam0000000003d40fe8);
      if (((lVar11 == 0) || (plVar10 = *(long **)(lVar11 + 0x80), plVar10 == (long *)0x0)) ||
         (lVar11 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180)),
         lVar11 == 0)) goto code_r0x01545304;
      uVar2 = /*Atlas.UI.LoadoutMetagameData$$get_IsLocked*/ func_0x014881dc(lVar11,0);
      puVar5 = (undefined8 *)(ulong)(uVar2 ^ 1);
    }
    return puVar5;
  }
code_r0x01545304:
  lVar11 = func_0x00f78af4();
  if ((bRam0000000003eb4f5e & 1) == 0) {
    func_0x00f78a20(0x3d2c6c0);
    func_0x00f78a20(0x3d30290);
    func_0x00f78a20(0x3d2e240);
    func_0x00f78a20(0x3d30660);
    func_0x00f78a20(0x3d1c5e8);
    func_0x00f78a20(0x3d1c678);
    func_0x00f78a20(0x3d1c1b8);
    func_0x00f78a20(0x3d240a8);
    bRam0000000003eb4f5e = 1;
  }
  uVar8 = func_0x00f78aec(/*System.Random_TypeInfo*/ uRam0000000003d240a8);
  /*System.Random$$.ctor*/ func_0x0297f008(uVar8,0);
  *(undefined8 *)(lVar11 + 0xa8) = uVar8;
  uVar8 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, List<CharacterMetagameData>>_TypeInfo*/ uRam0000000003d1c1b8);
  /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$.ctor*/ func_0x01e3bb54(uVar8,uRam0000000003d2e240);
  *(undefined8 *)(lVar11 + 0xd8) = uVar8;
  uVar8 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>_TypeInfo*/ uRam0000000003d1c678);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar8,uRam0000000003d30660);
  *(undefined8 *)(lVar11 + 0xe0) = uVar8;
  uVar8 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<UIAtlasButton, int>_TypeInfo*/ uRam0000000003d1c5e8);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(uVar8,uRam0000000003d30290);
  *(undefined8 *)(lVar11 + 0x100) = uVar8;
  if (lVar11 == 0) {
    auVar19 = func_0x00f78af4();
    puVar9 = auVar19._8_8_;
    puVar5 = auVar19._0_8_;
    uVar7 = puVar9[1];
    uVar8 = *puVar9;
    puVar5[2] = puVar9[2];
    puVar5[1] = uVar7;
    *puVar5 = uVar8;
    return puVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar5 = (undefined8 *)
           (*(code *)**(undefined8 **)
                       (*(long *)(*(long *)(lRam0000000003d2c6c0 + 0x18) + 0xc0) + 0x38))();
  return puVar5;
}



// ============================================================
// RVA: 0x1544d64 | Atlas.UI.Screens.CharacterSelectScreen.OnTabChanged
// ============================================================

undefined8 *
Atlas_UI_Screens_CharacterSelectScreen__OnTabChanged(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int extraout_w1;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined1 auVar12 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  if ((bRam0000000003eb4f5c & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d30678);
    func_0x00f78a20(0x3d32290);
    func_0x00f78a20(0x3d32298);
    func_0x00f78a20(0x3d322a0);
    func_0x00f78a20(0x3d223e8);
    func_0x00f78a20(0x3d3a008);
    func_0x00f78a20(0x3d3a010);
    func_0x00f78a20(0x3d25578);
    func_0x00f78a20(0x3d40fe8);
    bRam0000000003eb4f5c = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
  if (lVar3 == 0) goto LAB_015451d4;
  if (*(long *)(lVar3 + 200) == 0) goto LAB_015451d4;
  lVar3 = *(long *)(*(long *)(lVar3 + 200) + 0x28);
  if (lVar3 == 0) goto LAB_015451d4;
  plVar10 = *(long **)(lVar3 + 0x40);
  if (plVar10 != (long *)0x0) {
    if (*(byte *)(*plVar10 + 300) < *(byte *)(/*Atlas.UI.IPTabData_TypeInfo*/ lRam0000000003d223e8 + 300)) {
      plVar10 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(/*Atlas.UI.IPTabData_TypeInfo*/ lRam0000000003d223e8 + 300) * 8
                      + -8) != /*Atlas.UI.IPTabData_TypeInfo*/ lRam0000000003d223e8) {
      plVar10 = (long *)0x0;
    }
  }
  *(long **)(param_1 + 0xf0) = plVar10;
  if (*(long *)(param_1 + 0xe0) == 0) goto LAB_015451d4;
  unaff_x26 = (undefined8 *)0x3d30678;
  lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(param_1 + 0xe0),param_2,uRam0000000003d30678);
  if (lVar3 == 0) goto LAB_015451d4;
  unaff_x25 = (long *)0x3d25578;
  unaff_x27 = (undefined8 *)0x3d32290;
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_98,lVar3,uRam0000000003d3a008);
  uStack_78 = uStack_90;
  uStack_80 = uStack_98;
  plStack_70 = plStack_88;
code_r0x01544ef8:
  do {
    uVar4 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32298);
    plVar10 = plStack_70;
    if ((uVar4 & 1) == 0) break;
    if (plStack_70 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x015451d0;
    }
    lVar3 = *(long *)(param_1 + 0x78);
    plVar5 = (long *)(**(code **)(*plStack_70 + 0x178))
                               (plStack_70,*(undefined8 *)(*plStack_70 + 0x180));
    if (plVar5 == (long *)0x0) {
      func_0x00f78af4();
      goto code_r0x015451d0;
    }
    uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar6,0);
    if (lVar3 == 0) {
      func_0x00f78af4(uVar6,uVar6);
      goto code_r0x015451d0;
    }
    uVar6 = /*Atlas.Stats.UnlockManager$$GetLastUsedSkinIDForCharacter*/ func_0x01521360(lVar3,uVar6,0);
    uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar6,0);
    if (*(long *)(param_1 + 0x78) == 0) {
      func_0x00f78af4(0,uVar6);
      goto code_r0x015451d0;
    }
    uVar4 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(param_1 + 0x78),uVar6,0);
    if ((uVar4 & 1) == 0) {
      lVar3 = *(long *)(param_1 + 0x78);
      plVar5 = (long *)(**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
      if (plVar5 == (long *)0x0) {
        func_0x00f78af4();
      }
      else {
        uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar6,0);
        plVar10 = (long *)(**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180))
        ;
        if (plVar10 == (long *)0x0) {
          func_0x00f78af4();
        }
        else {
          uVar7 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
          uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar7,0);
          if (lVar3 != 0) {
            /*Atlas.Stats.UnlockManager$$AddOrUpdateCharacterLastUsedSkin*/ func_0x01521520(lVar3,uVar6,uVar7,0);
            goto code_r0x01544ef8;
          }
          func_0x00f78af4();
        }
      }
code_r0x015451d0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x15451d4);
      (*pcVar1)();
    }
  } while( true );
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32290);
  do {
    plVar10 = *(long **)(param_1 + 0xc0);
    if (plVar10 != (long *)0x0) {
      lVar3 = *(long *)(param_1 + 0x78);
      plVar10 = (long *)(**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
      if ((plVar10 != (long *)0x0) &&
         (uVar6 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180)),
         lVar3 != 0)) {
        uVar4 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar3,uVar6,0);
        if ((uVar4 & 1) == 0) {
          if ((*(long *)(param_1 + 0xe0) != 0) &&
             (lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(param_1 + 0xe0),param_3,*unaff_x26), lVar3 != 0)) {
            if (*(int *)(lVar3 + 0x18) == 0) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + 0x20);
            if (lVar3 != 0) {
              Atlas_UI_Screens_CharacterSelectScreen__SetSelected
                        (param_1,*(undefined8 *)(lVar3 + 0x48),1);
              lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
              if ((lVar3 != 0) && (*(long *)(param_1 + 0xe0) != 0)) {
                lVar11 = *(long *)(lVar3 + 200);
                lVar3 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(param_1 + 0xe0),param_3,*unaff_x26);
                if (lVar3 != 0) {
                  if (*(int *)(lVar3 + 0x18) == 0) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + 0x20);
                  if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x48), lVar3 != 0)) &&
                     (uVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar3,0), lVar11 != 0)) {
                    /*Atlas.UI.TabController$$SetSelectedGameObjectInTab*/ func_0x01508ae0(lVar11,param_3,uVar6,0);
                    goto code_r0x01545138;
                  }
                }
              }
            }
          }
        }
        else {
code_r0x01545138:
          if (param_3 != 0) {
            param_3 = *(long *)(param_3 + 0x10);
            if (((*(ushort *)(*unaff_x25 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(*unaff_x25 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (param_3 != 0) {
              /*Atlas.UI.UIAtlasButton$$SetTrigger*/ func_0x015159e4(param_3,*(undefined4 *)(*(long *)(*unaff_x25 + 0xb8) + 0x18),0);
              puVar8 = (undefined8 *)
                       Atlas_UI_Screens_CharacterSelectScreen__PlayCurrentTabAnimations(param_1);
              return puVar8;
            }
          }
        }
      }
    }
LAB_015451d4:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01545258;
    plVar10 = (long *)___cxa_begin_catch();
    lVar3 = *plVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,*unaff_x27);
  } while (lVar3 == 0);
  func_0x00f78ac0(lVar3,0);
code_r0x01545258:
  uVar6 = __Unwind_Resume();
  if ((bRam0000000003eb4f5d & 1) == 0) {
    func_0x00f78a20(0x3d40fe8);
    bRam0000000003eb4f5d = 1;
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar6,uRam0000000003d40fe8);
  if ((lVar3 != 0) && (plVar10 = *(long **)(lVar3 + 0x80), plVar10 != (long *)0x0)) {
    lVar3 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
    puVar8 = (undefined8 *)0x0;
    if (lVar3 != 0) {
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar6,uRam0000000003d40fe8);
      if (((lVar3 == 0) || (plVar10 = *(long **)(lVar3 + 0x80), plVar10 == (long *)0x0)) ||
         (lVar3 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180)),
         lVar3 == 0)) goto code_r0x01545304;
      uVar2 = /*Atlas.UI.LoadoutMetagameData$$get_IsLocked*/ func_0x014881dc(lVar3,0);
      puVar8 = (undefined8 *)(ulong)(uVar2 ^ 1);
    }
    return puVar8;
  }
code_r0x01545304:
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4f5e & 1) == 0) {
    func_0x00f78a20(0x3d2c6c0);
    func_0x00f78a20(0x3d30290);
    func_0x00f78a20(0x3d2e240);
    func_0x00f78a20(0x3d30660);
    func_0x00f78a20(0x3d1c5e8);
    func_0x00f78a20(0x3d1c678);
    func_0x00f78a20(0x3d1c1b8);
    func_0x00f78a20(0x3d240a8);
    bRam0000000003eb4f5e = 1;
  }
  uVar6 = func_0x00f78aec(/*System.Random_TypeInfo*/ uRam0000000003d240a8);
  /*System.Random$$.ctor*/ func_0x0297f008(uVar6,0);
  *(undefined8 *)(lVar3 + 0xa8) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, List<CharacterMetagameData>>_TypeInfo*/ uRam0000000003d1c1b8);
  /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$.ctor*/ func_0x01e3bb54(uVar6,uRam0000000003d2e240);
  *(undefined8 *)(lVar3 + 0xd8) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>_TypeInfo*/ uRam0000000003d1c678);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar6,uRam0000000003d30660);
  *(undefined8 *)(lVar3 + 0xe0) = uVar6;
  uVar6 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<UIAtlasButton, int>_TypeInfo*/ uRam0000000003d1c5e8);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(uVar6,uRam0000000003d30290);
  *(undefined8 *)(lVar3 + 0x100) = uVar6;
  if (lVar3 == 0) {
    auVar12 = func_0x00f78af4();
    puVar9 = auVar12._8_8_;
    puVar8 = auVar12._0_8_;
    uVar7 = puVar9[1];
    uVar6 = *puVar9;
    puVar8[2] = puVar9[2];
    puVar8[1] = uVar7;
    *puVar8 = uVar6;
    return puVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar8 = (undefined8 *)
           (*(code *)**(undefined8 **)
                       (*(long *)(*(long *)(lRam0000000003d2c6c0 + 0x18) + 0xc0) + 0x38))();
  return puVar8;
}



// ============================================================
// RVA: 0x154525c | Atlas.UI.Screens.CharacterSelectScreen.CanProgressToNextScreen
// ============================================================

undefined8 * Atlas_UI_Screens_CharacterSelectScreen__CanProgressToNextScreen(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb4f5d & 1) == 0) {
    func_0x00f78a20(0x3d40fe8);
    bRam0000000003eb4f5d = 1;
  }
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
  if ((lVar2 != 0) && (plVar3 = *(long **)(lVar2 + 0x80), plVar3 != (long *)0x0)) {
    lVar2 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
    if (lVar2 == 0) {
      return (undefined8 *)0x0;
    }
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
    if (((lVar2 != 0) && (plVar3 = *(long **)(lVar2 + 0x80), plVar3 != (long *)0x0)) &&
       (lVar2 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180)), lVar2 != 0)
       ) {
      uVar1 = /*Atlas.UI.LoadoutMetagameData$$get_IsLocked*/ func_0x014881dc(lVar2,0);
      return (undefined8 *)(ulong)(uVar1 ^ 1);
    }
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4f5e & 1) == 0) {
    func_0x00f78a20(0x3d2c6c0);
    func_0x00f78a20(0x3d30290);
    func_0x00f78a20(0x3d2e240);
    func_0x00f78a20(0x3d30660);
    func_0x00f78a20(0x3d1c5e8);
    func_0x00f78a20(0x3d1c678);
    func_0x00f78a20(0x3d1c1b8);
    func_0x00f78a20(0x3d240a8);
    bRam0000000003eb4f5e = 1;
  }
  uVar4 = func_0x00f78aec(/*System.Random_TypeInfo*/ uRam0000000003d240a8);
  /*System.Random$$.ctor*/ func_0x0297f008(uVar4,0);
  *(undefined8 *)(lVar2 + 0xa8) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, List<CharacterMetagameData>>_TypeInfo*/ uRam0000000003d1c1b8);
  /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$.ctor*/ func_0x01e3bb54(uVar4,uRam0000000003d2e240);
  *(undefined8 *)(lVar2 + 0xd8) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>_TypeInfo*/ uRam0000000003d1c678);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar4,uRam0000000003d30660);
  *(undefined8 *)(lVar2 + 0xe0) = uVar4;
  uVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<UIAtlasButton, int>_TypeInfo*/ uRam0000000003d1c5e8);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(uVar4,uRam0000000003d30290);
  *(undefined8 *)(lVar2 + 0x100) = uVar4;
  if (lVar2 == 0) {
    auVar8 = func_0x00f78af4();
    puVar6 = auVar8._8_8_;
    puVar5 = auVar8._0_8_;
    uVar7 = puVar6[1];
    uVar4 = *puVar6;
    puVar5[2] = puVar6[2];
    puVar5[1] = uVar7;
    *puVar5 = uVar4;
    return puVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar5 = (undefined8 *)
           (*(code *)**(undefined8 **)
                       (*(long *)(*(long *)(lRam0000000003d2c6c0 + 0x18) + 0xc0) + 0x38))();
  return puVar5;
}



// ============================================================
// RVA: 0x1545308 | Atlas.UI.Screens.CharacterSelectScreen..ctor
// ============================================================

void Atlas_UI_Screens_CharacterSelectScreen___ctor(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4f5e & 1) == 0) {
    func_0x00f78a20(0x3d2c6c0);
    func_0x00f78a20(0x3d30290);
    func_0x00f78a20(0x3d2e240);
    func_0x00f78a20(0x3d30660);
    func_0x00f78a20(0x3d1c5e8);
    func_0x00f78a20(0x3d1c678);
    func_0x00f78a20(0x3d1c1b8);
    func_0x00f78a20(0x3d240a8);
    bRam0000000003eb4f5e = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Random_TypeInfo*/ uRam0000000003d240a8);
  /*System.Random$$.ctor*/ func_0x0297f008(uVar1,0);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, List<CharacterMetagameData>>_TypeInfo*/ uRam0000000003d1c1b8);
  /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$.ctor*/ func_0x01e3bb54(uVar1,uRam0000000003d2e240);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>_TypeInfo*/ uRam0000000003d1c678);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar1,uRam0000000003d30660);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<UIAtlasButton, int>_TypeInfo*/ uRam0000000003d1c5e8);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(uVar1,uRam0000000003d30290);
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c6c0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar5 = func_0x00f78af4();
  puVar3 = auVar5._8_8_;
  puVar2 = auVar5._0_8_;
  uVar4 = puVar3[1];
  uVar1 = *puVar3;
  puVar2[2] = puVar3[2];
  puVar2[1] = uVar4;
  *puVar2 = uVar1;
  return;
}



// ============================================================
// RVA: 0x1545460 | Atlas.UI.Screens.CharacterSelectScreen..cctor
// ============================================================

void Atlas_UI_Screens_CharacterSelectScreen___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb4f5f & 1) == 0) {
    func_0x00f78a20(0x3d20660);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d6cb18);
    func_0x00f78a20(0x3d6cbc0);
    bRam0000000003eb4f5f = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_6_CharacterSelect_1')*/ uRam0000000003d6cbc0,0);
  **(undefined8 **)(/*Atlas.UI.Screens.CharacterSelectScreen_TypeInfo*/ lRam0000000003d20660 + 0xb8) = uVar1;
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_12_CharacterSelect_2')*/ uRam0000000003d6cb18,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.CharacterSelectScreen_TypeInfo*/ lRam0000000003d20660 + 0xb8) + 8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x154552c | Atlas.UI.Screens.CharacterSelectScreen.<OnBeforeEnter>b__24_0
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01514cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x01544b80) */
/* WARNING: Removing unreachable block (ram,0x01514c5c) */
/* WARNING: Removing unreachable block (ram,0x01514c7c) */
/* WARNING: Removing unreachable block (ram,0x01514c90) */
/* WARNING: Removing unreachable block (ram,0x01514c94) */
/* WARNING: Removing unreachable block (ram,0x01514c98) */
/* WARNING: Removing unreachable block (ram,0x01514ca0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_Screens_CharacterSelectScreen___OnBeforeEnter_b__24_0(long *param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined1 *puVar3;
  long **pplVar4;
  long **pplVar5;
  int iVar6;
  int iVar8;
  uint uVar7;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  int extraout_w1;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined4 uVar20;
  int *piVar21;
  undefined8 unaff_x19;
  long *plVar22;
  undefined8 unaff_x20;
  long lVar23;
  long unaff_x21;
  long *unaff_x22;
  code *pcVar24;
  ulong unaff_x23;
  ulong uVar25;
  ulong uVar26;
  ulong unaff_x24;
  undefined1 *puVar27;
  long *plVar28;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  long **pplVar29;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar30;
  undefined *puVar31;
  code *unaff_x30;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 ******ppppppuStack_60;
  code *pcStack_58;
  
  auVar37._8_8_ = unaff_x19;
  auVar37._0_8_ = unaff_x20;
  plVar22 = (long *)0x0;
  if ((bRam0000000003eb4f5a & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2e250);
    func_0x00f78a20(0x3d39fd8);
    func_0x00f78a20(0x3d39fe8);
    func_0x00f78a20(0x3d39ff0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3f3e8);
    func_0x00f78a20(0x3d1e558);
    func_0x00f78a20(0x3d62390);
    func_0x00f78a20(0x3d26c20);
    bRam0000000003eb4f5a = 1;
  }
  lVar23 = param_1[0x16];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = 0;
  plVar9 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar23,0);
  if ((int)plVar9 == 0) {
    return plVar9;
  }
  lVar23 = func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass38_0_TypeInfo*/ uRam0000000003d26c20);
  /*Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass38_0$$.ctor*/ func_0x01547a58(lVar23,0);
  plVar10 = (long *)0x3d23990;
  uVar12 = unaff_x23;
  uVar26 = unaff_x24;
  plVar9 = unaff_x25;
  if ((param_1[0x16] == 0) || (param_1[0xf] == 0)) {
LAB_01544ca8:
    auVar37 = func_0x00f78af4();
    plVar28 = auVar37._8_8_;
    pcStack_58 = Atlas_UI_Screens_CharacterSelectScreen__SetSelected;
    plStack_80 = plVar10;
    plStack_78 = (long *)lVar23;
    plStack_70 = plVar22;
    plStack_68 = param_1;
    ppppppuStack_60 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4f5b & 1) == 0) {
      func_0x00f78a20(0x3d2c6c8);
      bRam0000000003eb4f5b = 1;
    }
    lVar23 = lRam0000000003d2c6c8;
    Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
              (auVar37._0_8_,plVar28);
    if (plVar28 == (long *)0x0) {
      auVar37 = func_0x00f78af4();
      lVar13 = auVar37._0_8_;
      if ((bRam0000000003eb4f5c & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d30678);
        func_0x00f78a20(0x3d32290);
        func_0x00f78a20(0x3d32298);
        func_0x00f78a20(0x3d322a0);
        func_0x00f78a20(0x3d223e8);
        func_0x00f78a20(0x3d3a008);
        func_0x00f78a20(0x3d3a010);
        func_0x00f78a20(0x3d25578);
        func_0x00f78a20(0x3d40fe8);
        bRam0000000003eb4f5c = 1;
      }
      uStack_110 = 0;
      uStack_108 = 0;
      plStack_100 = (long *)0x0;
      lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar13,uRam0000000003d40fe8);
      if (lVar18 == 0) goto LAB_015451d4;
      if (*(long *)(lVar18 + 200) == 0) goto LAB_015451d4;
      lVar18 = *(long *)(*(long *)(lVar18 + 200) + 0x28);
      if (lVar18 == 0) goto LAB_015451d4;
      plVar22 = *(long **)(lVar18 + 0x40);
      if (plVar22 != (long *)0x0) {
        if (*(byte *)(*plVar22 + 300) < *(byte *)(/*Atlas.UI.IPTabData_TypeInfo*/ lRam0000000003d223e8 + 300)) {
          plVar22 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar22 + 200) +
                           (ulong)*(byte *)(/*Atlas.UI.IPTabData_TypeInfo*/ lRam0000000003d223e8 + 300) * 8 + -8) !=
                 /*Atlas.UI.IPTabData_TypeInfo*/ lRam0000000003d223e8) {
          plVar22 = (long *)0x0;
        }
      }
      *(long **)(lVar13 + 0xf0) = plVar22;
      if (*(long *)(lVar13 + 0xe0) == 0) goto LAB_015451d4;
      unaff_x26 = (undefined8 *)0x3d30678;
      lVar18 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar13 + 0xe0),auVar37._8_8_,uRam0000000003d30678);
      if (lVar18 == 0) goto LAB_015451d4;
      plVar9 = (long *)0x3d25578;
      unaff_x27 = (undefined8 *)0x3d32290;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_128,lVar18,uRam0000000003d3a008);
      uStack_108 = uStack_120;
      uStack_110 = uStack_128;
      plStack_100 = plStack_118;
code_r0x01544ef8:
      do {
        uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_110,uRam0000000003d32298);
        plVar22 = plStack_100;
        if ((uVar12 & 1) == 0) goto code_r0x01545024;
        if (plStack_100 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x015451d0;
        }
        lVar18 = *(long *)(lVar13 + 0x78);
        plVar10 = (long *)(**(code **)(*plStack_100 + 0x178))
                                    (plStack_100,*(undefined8 *)(*plStack_100 + 0x180));
        if (plVar10 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x015451d0;
        }
        uVar11 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
        if (lVar18 == 0) {
          func_0x00f78af4(uVar11,uVar11);
          goto code_r0x015451d0;
        }
        uVar11 = /*Atlas.Stats.UnlockManager$$GetLastUsedSkinIDForCharacter*/ func_0x01521360(lVar18,uVar11,0);
        uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
        if (*(long *)(lVar13 + 0x78) == 0) {
          func_0x00f78af4(0,uVar11);
          goto code_r0x015451d0;
        }
        uVar12 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar13 + 0x78),uVar11,0);
        if ((uVar12 & 1) == 0) {
          lVar18 = *(long *)(lVar13 + 0x78);
          plVar10 = (long *)(**(code **)(*plVar22 + 0x178))
                                      (plVar22,*(undefined8 *)(*plVar22 + 0x180));
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
          }
          else {
            uVar11 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
            plVar22 = (long *)(**(code **)(*plVar22 + 0x178))
                                        (plVar22,*(undefined8 *)(*plVar22 + 0x180));
            if (plVar22 == (long *)0x0) {
              func_0x00f78af4();
            }
            else {
              uVar17 = (**(code **)(*plVar22 + 0x178))(plVar22,*(undefined8 *)(*plVar22 + 0x180));
              uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
              if (lVar18 != 0) {
                /*Atlas.Stats.UnlockManager$$AddOrUpdateCharacterLastUsedSkin*/ func_0x01521520(lVar18,uVar11,uVar17,0);
                goto code_r0x01544ef8;
              }
              func_0x00f78af4();
            }
          }
code_r0x015451d0:
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x15451d4);
          (*pcVar24)();
        }
      } while( true );
    }
    plVar22 = (long *)/*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(plVar28,0,uVar7 ^ 1,0,0);
    if (((uVar7 ^ 1) & 1) != 0) {
      return plVar22;
    }
    pplVar5 = &plStack_80;
    if ((bRam0000000003eb4d9a & 1) == 0) {
      func_0x00f78a20(0x3d23da0,0,0,0);
      func_0x00f78a20(0x3d754d8);
      bRam0000000003eb4d9a = 1;
    }
    plVar22 = (long *)(**(code **)(*plVar28 + 0x1c8))(plVar28,*(undefined8 *)(*plVar28 + 0x1d0));
    if (((int)plVar22 == 0) ||
       (plVar22 = (long *)(**(code **)(*plVar28 + 0x2b8))(plVar28,*(undefined8 *)(*plVar28 + 0x2c0))
       , (int)plVar22 == 0)) {
      return plVar22;
    }
    /*UnityEngine.UISystemProfilerApi$$AddMarker*/ func_0x032f6f10(/*STR('UIAtlasButton.OnPress')*/ uRam0000000003d754d8,plVar28,0);
    plVar22 = (long *)plVar28[0x2b];
    if (plVar22 == (long *)0x0) {
      plVar22 = (long *)plVar28[0x2c];
      if (plVar22 == (long *)0x0) {
        return (long *)0x0;
      }
      pplVar5 = (long **)&stack0xffffffffffffffb0;
      plVar28 = plStack_68;
      plVar10 = plStack_70;
      plVar14 = plStack_78;
      plVar15 = plStack_80;
      pppppppuVar30 = (undefined8 *******)ppppppuStack_60;
      pcVar24 = pcStack_58;
    }
    else {
      plVar10 = (long *)0x0;
      plVar14 = (long *)0;
      plVar15 = (long *)0x3eb4000;
      pppppppuVar30 = &ppppppuStack_60;
      pcVar24 = (code *)&UNK_01514cc0;
    }
    uVar11 = 0;
    *(undefined8 **)((long)pplVar5 + -0x50) = unaff_x26;
    *(long **)((long)pplVar5 + -0x48) = plVar9;
    *(ulong *)((long)pplVar5 + -0x40) = uVar26;
    *(ulong *)((long)pplVar5 + -0x38) = uVar12;
    *(long **)((long)pplVar5 + -0x30) = plVar15;
    *(long **)((long)pplVar5 + -0x28) = plVar14;
    *(long **)((long)pplVar5 + -0x20) = plVar10;
    *(long **)((long)pplVar5 + -0x18) = plVar28;
    *(undefined8 ********)((long)pplVar5 + -0x10) = pppppppuVar30;
    *(code **)((long)pplVar5 + -8) = pcVar24;
    *(long **)((long)pplVar5 + -0x58) = plVar22;
    lVar23 = plVar22[0xd];
    if (lVar23 == 0) {
      puVar27 = (undefined1 *)((long)pplVar5 + -0x58);
      lVar13 = 1;
    }
    else {
      lVar13 = *(long *)(lVar23 + 0x18);
      if (lVar13 == 0) {
        return plVar22;
      }
      puVar27 = (undefined1 *)(lVar23 + 0x20);
    }
    lVar23 = 0;
    do {
      lVar18 = *(long *)(puVar27 + lVar23 * 8);
      pcVar24 = *(code **)(lVar18 + 0x10);
      plVar9 = *(long **)(lVar18 + 0x20);
      lVar18 = *(long *)(lVar18 + 0x28);
      if (*(short *)(lVar18 + 0x48) == -1) {
        func_0x00f78ad8(lVar18,uVar11);
      }
      iVar6 = func_0x00f78a4c(lVar18);
      if (iVar6 == 0) {
        if ((((plVar9 == (long *)0x0) || (*(short *)(lVar18 + 0x48) == -1)) ||
            ((*(byte *)(*plVar9 + 0x115) & 1) != 0)) || (plVar22[3] == 0)) goto code_r0x02924d98;
        iVar6 = func_0x00f78a44(lVar18);
        iVar8 = func_0x00f78ec0(lVar18);
        if (iVar6 == 0) {
          uVar1 = *(ushort *)(lVar18 + 0x48);
          if (iVar8 == 0) {
            lVar18 = *plVar9 + (ulong)uVar1 * 0x10;
            auVar37 = (**(code **)(lVar18 + 0x138))(plVar9,*(undefined8 *)(lVar18 + 0x140));
            goto code_r0x02924da4;
          }
          lVar18 = func_0x00f78a48(lVar18);
          lVar19 = *plVar9;
          uVar12 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar12 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == lVar18) {
                puVar16 = (undefined8 *)
                          (lVar19 + (long)(int)(*piVar21 + (uint)uVar1) * 0x10 + 0x138);
                goto code_r0x02924e68;
              }
              piVar21 = piVar21 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar16 = (undefined8 *)func_0x00fac1f0(plVar9,lVar18,(ulong)uVar1);
code_r0x02924e68:
          pcVar24 = (code *)*puVar16;
          puVar16 = (undefined8 *)puVar16[1];
        }
        else {
          if (iVar8 == 0) {
            uVar11 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar19 = *plVar9;
            uVar12 = (ulong)*(ushort *)(lVar19 + 0x12a);
            if (uVar12 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x18)) {
                  lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar21 = piVar21 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar19 = func_0x00fac1f0(plVar9);
code_r0x02924e40:
            uVar11 = *(undefined8 *)(lVar19 + 8);
          }
          puVar16 = (undefined8 *)func_0x00f78acc(uVar11,lVar18);
          pcVar24 = (code *)*puVar16;
        }
        auVar37 = (*pcVar24)(plVar9,puVar16);
      }
      else if (*(char *)(lVar18 + 0x4a) == '\0') {
        auVar37 = (*pcVar24)(lVar18);
      }
      else {
code_r0x02924d98:
        auVar37 = (*pcVar24)(plVar9,lVar18);
      }
code_r0x02924da4:
      uVar11 = auVar37._8_8_;
      lVar23 = lVar23 + 1;
      if (lVar23 == lVar13) {
        return auVar37._0_8_;
      }
    } while( true );
  }
  uVar7 = 0;
  plVar10 = (long *)/*Atlas.Stats.UnlockManager$$GetLastUsedSkinIDForCharacter*/ func_0x01521360(param_1[0xf],*(undefined8 *)(param_1[0x16] + 0x18));
  uVar25 = 0x3d21270;
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(plVar10,0);
  uVar26 = 0x3d21270;
  if (lVar23 == 0) goto LAB_01544ca8;
  *(undefined8 *)(lVar23 + 0x10) = uVar11;
  if ((param_1[0x16] == 0) || (uVar26 = uVar25, param_1[0x1b] == 0)) goto LAB_01544ca8;
  plVar28 = (long *)0x3d2e250;
  plVar10 = (long *)/*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(param_1[0x1b],*(undefined8 *)(param_1[0x16] + 0x18),
                                    uRam0000000003d2e250);
  uVar12 = func_0x00f78aec(/*System.Predicate<CharacterMetagameData>_TypeInfo*/ uRam0000000003d1e558);
  uVar11 = uRam0000000003d62390;
  /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(uVar12,lVar23,uRam0000000003d62390,uRam0000000003d3f3e8);
  uVar7 = (uint)uVar11;
  plVar9 = (long *)0x3d2e250;
  if (plVar10 == (long *)0x0) goto LAB_01544ca8;
  uVar11 = uRam0000000003d39fd8;
  iVar6 = /*System.Collections.Generic.List<TMP_MaterialManager.MaskingMaterial>$$FindIndex*/ func_0x02427980(plVar10,uVar12);
  uVar7 = (uint)uVar11;
  uVar2 = iVar6 - 1;
  plVar22 = (long *)(ulong)uVar2;
  lVar13 = param_1[0x1b];
  lVar18 = param_1[0x16];
  if ((int)uVar2 < 0) {
    plVar9 = plVar28;
    if ((lVar18 == 0) || (lVar13 == 0)) goto LAB_01544ca8;
    uVar11 = uRam0000000003d2e250;
    lVar13 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(lVar13,*(undefined8 *)(lVar18 + 0x18));
    uVar7 = (uint)uVar11;
    if (lVar13 == 0) goto LAB_01544ca8;
    uVar2 = *(int *)(lVar13 + 0x18) - 1;
  }
  else {
    if ((lVar18 == 0) || (plVar9 = plVar28, lVar13 == 0)) goto LAB_01544ca8;
    uVar11 = uRam0000000003d2e250;
    lVar13 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(lVar13,*(undefined8 *)(lVar18 + 0x18));
    uVar7 = (uint)uVar11;
    if (lVar13 == 0) goto LAB_01544ca8;
    if (*(int *)(lVar13 + 0x18) <= (int)uVar2) {
      uVar2 = 0;
    }
  }
  uVar12 = (ulong)uVar2;
  plVar9 = plVar28;
  if ((param_1[0x16] == 0) || (param_1[0x1b] == 0)) goto LAB_01544ca8;
  plVar22 = (long *)param_1[0xf];
  lVar23 = *(long *)(param_1[0x16] + 0x18);
  uVar11 = uRam0000000003d2e250;
  plVar14 = (long *)/*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(param_1[0x1b],lVar23);
  uVar7 = (uint)uVar11;
  if (plVar14 == (long *)0x0) goto LAB_01544ca8;
  if (*(uint *)(plVar14 + 3) <= uVar2) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  plVar15 = *(long **)(plVar14[2] + (long)(int)uVar2 * 8 + 0x20);
  plVar10 = plVar14;
  if (plVar15 == (long *)0x0) goto LAB_01544ca8;
  plVar10 = (long *)(**(code **)(*plVar15 + 0x178))(plVar15,*(undefined8 *)(*plVar15 + 0x180));
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(plVar10,0);
  if (plVar22 == (long *)0x0) goto LAB_01544ca8;
  uVar17 = 0;
  /*Atlas.Stats.UnlockManager$$AddOrUpdateCharacterLastUsedSkin*/ func_0x01521520(plVar22,lVar23,uVar11);
  uVar12 = 0x3d26c18;
  if ((bRam0000000003eb4f57 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2e250);
    func_0x00f78a20(0x3d39fd0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3f3e8);
    func_0x00f78a20(0x3d1e558);
    func_0x00f78a20(0x3d62388);
    func_0x00f78a20(0x3d26c18);
    func_0x00f78a20(0x3d40fe8);
    func_0x00f78a20(0x3d40ff0);
    func_0x00f78a20(0x3d40ff8);
    bRam0000000003eb4f57 = 1;
  }
  plVar9 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass34_0_TypeInfo*/ uRam0000000003d26c18);
  /*Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass34_0$$.ctor*/ func_0x015479b8(plVar9,0);
  plVar22 = unaff_x22;
  if ((param_1[0x16] != 0) && (param_1[0xf] != 0)) {
    unaff_x24 = 0x3d21270;
    uVar12 = /*Atlas.Stats.UnlockManager$$GetLastUsedSkinIDForCharacter*/ func_0x01521360(param_1[0xf],*(undefined8 *)(param_1[0x16] + 0x18),0);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar23 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar12,0);
    if (plVar9 != (long *)0x0) {
      plVar9[2] = lVar23;
      if ((param_1[0x16] != 0) && (param_1[0x1b] != 0)) {
        unaff_x23 = 0x3d62000;
        unaff_x25 = (long *)0x3d3f000;
        lVar23 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(param_1[0x1b],*(undefined8 *)(param_1[0x16] + 0x18),
                                 uRam0000000003d2e250);
        plVar22 = (long *)func_0x00f78aec(/*System.Predicate<CharacterMetagameData>_TypeInfo*/ uRam0000000003d1e558);
        uVar17 = uRam0000000003d3f3e8;
        /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(plVar22,plVar9,uRam0000000003d62388);
        uVar12 = 0;
        if (lVar23 != 0) {
          unaff_x23 = 0x3d40fe8;
          uVar12 = /*System.Collections.Generic.List<RuntimeManager.AttachedInstance>$$Find*/ func_0x024278b4(lVar23,plVar22,uRam0000000003d39fd0);
          lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
          if ((lVar23 != 0) && (plVar10 = *(long **)(lVar23 + 0x80), plVar10 != (long *)0x0)) {
            lVar23 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
            if (lVar23 == 0) {
LAB_01544668:
              lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d40ff0);
              if (lVar23 != 0) {
                if (*(long *)(lVar23 + 0x18) != 0) {
                  uVar17 = 0;
                  /*Atlas.UI.Screens.CharacterSelectScreen.CharacterSelected$$Invoke*/ func_0x01549fe0(*(long *)(lVar23 + 0x18),0,plVar9[2]);
                }
                if (param_1[0x1f] != 0) {
                  uVar17 = 0;
                  uVar12 = Atlas_FrontEnd_FrontEndScene__RequestLoadCharacter
                                     (param_1[0x1f],0,plVar9[2]);
                  if ((param_1[0x1f] != 0) &&
                     (lVar23 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(param_1[0x1f],0,0),
                     lVar23 != 0)) {
                    plVar22 = (long *)0x3d40000;
                    Atlas_Gameplay_Kart_KartFEAnimator__PlayCharacterSelectScreen(lVar23,0);
                    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
                    if ((lVar23 != 0) && (*(long *)(lVar23 + 0x48) != 0)) {
                      lVar23 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar23 + 0x48),0);
                      unaff_x23 = plVar9[2];
                      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x23,0);
                      plVar22 = (long *)0x0;
                      if (lVar23 != 0) {
                        *(undefined8 *)(lVar23 + 0x80) = uVar11;
                        uVar11 = (**(code **)(*param_1 + 0x268))
                                           (param_1,*(undefined8 *)(*param_1 + 0x270));
                        plVar22 = (long *)Atlas_UI_Screens_CharacterSelectScreen__SetVisualsForCanProgress
                                                    (param_1,uVar11);
                        if ((uVar12 & 1) != 0) {
                          return plVar22;
                        }
                        lVar23 = plVar9[2];
                        pplVar4 = (long **)register0x00000008;
                        goto code_r0x0154485c;
                      }
                    }
                  }
                }
              }
            }
            else {
              lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
              if ((lVar23 != 0) && (plVar10 = *(long **)(lVar23 + 0x80), plVar10 != (long *)0x0)) {
                (**(code **)(*plVar10 + 0x188))(plVar10,uVar12,*(undefined8 *)(*plVar10 + 400));
                lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                if (lVar23 != 0) {
                  plVar22 = *(long **)(lVar23 + 0x88);
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar22,0,0);
                  if (iVar6 == 0) {
LAB_01544650:
                    plVar10 = (long *)param_1[0x18];
                    if (plVar10 != (long *)0x0) {
                      (**(code **)(*plVar10 + 0x188))
                                (plVar10,uVar12,*(undefined8 *)(*plVar10 + 400));
                      goto LAB_01544668;
                    }
                  }
                  else {
                    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                    if ((lVar23 != 0) &&
                       (plVar10 = *(long **)(lVar23 + 0x88), plVar10 != (long *)0x0)) {
                      (**(code **)(*plVar10 + 0x188))
                                (plVar10,uVar12,*(undefined8 *)(*plVar10 + 400));
                      lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                      if ((lVar23 != 0) &&
                         (((*(long *)(lVar23 + 0x88) != 0 &&
                           (plVar10 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar23 + 0x88),0),
                           uVar12 != 0)) &&
                          (uVar11 = /*Atlas.UI.LoadoutMetagameData$$get_IsLocked*/ func_0x014881dc(uVar12,0), plVar22 = plVar10,
                          plVar10 != (long *)0x0)))) {
                        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(plVar10,uVar11,0);
                        goto LAB_01544650;
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
  auVar37 = func_0x00f78af4();
  uVar11 = auVar37._0_8_;
  pplVar4 = &plStack_80;
  pcStack_58 = Atlas_UI_Screens_CharacterSelectScreen__SetVisualsForCanProgress;
  unaff_x29 = &ppppppuStack_60;
  unaff_x22 = (long *)0x3eb4000;
  unaff_x21 = 0x3d40ff8;
  plStack_80 = plVar22;
  plStack_78 = (long *)uVar12;
  plStack_70 = plVar9;
  plStack_68 = param_1;
  ppppppuStack_60 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f59 & 1) == 0) {
    func_0x00f78a20(0x3d40ff8);
    bRam0000000003eb4f59 = 1;
  }
  lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d40ff8);
  if ((lVar23 != 0) && (*(long *)(lVar23 + 0xb8) != 0)) {
    uVar17 = 1;
    /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar23 + 0xb8),6,auVar37._8_8_,1,0);
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d40ff8);
    if ((lVar23 != 0) && (*(long *)(lVar23 + 0xb8) != 0)) {
      uVar17 = 1;
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar23 + 0xb8),8,auVar37._8_4_ ^ 1,1,0);
      lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d40ff8);
      plVar28 = plStack_68;
      plVar10 = plStack_70;
      plVar9 = plStack_78;
      plVar22 = plStack_80;
      if ((lVar23 != 0) && (plVar14 = *(long **)(lVar23 + 0xb8), plVar14 != (long *)0x0)) {
        uVar11 = 0;
        if (plVar14[5] != 0) {
          *(char *)(plVar14[5] + 0x80) = auVar37[8];
          return plVar14;
        }
        lVar23 = func_0x00f78af4();
        plStack_80 = plVar10;
        plStack_78 = plVar28;
        plStack_70 = (long *)&ppppppuStack_60;
        plStack_68 = (long *)&Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
        pplVar29 = &plStack_70;
        if (*(ulong *)(lVar23 + 0x28) == 0) {
          puVar31 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
          auVar38 = func_0x00f78af4();
          auVar36._8_8_ = uVar17;
          auVar36._0_8_ = plVar10;
        }
        else {
          auVar38._8_8_ = 0;
          auVar38._0_8_ = *(ulong *)(lVar23 + 0x28);
          uVar11 = 0;
          auVar36._8_8_ = 1;
          auVar36._0_8_ = plVar10;
          puVar31 = &UNK_0150bbf4;
          pplVar4 = &plStack_80;
        }
        do {
          plVar10 = auVar38._0_8_;
          *(long *)((long)pplVar4 + -0x20) = auVar36._0_8_;
          *(long *)((long)pplVar4 + -0x18) = lVar23;
          *(long ***)((long)pplVar4 + -0x10) = pplVar29;
          *(undefined **)((long)pplVar4 + -8) = puVar31;
          uVar7 = auVar38._8_4_;
          if (uVar7 == 0xffffffff) {
            return plVar10;
          }
          lVar13 = plVar10[0xe];
          if (lVar13 == 0) {
            func_0x00f78af4();
            lVar18 = lVar23;
          }
          else {
            lVar18 = auVar38._8_8_;
            if (uVar7 < *(uint *)(lVar13 + 0x18)) {
              uVar20 = 2;
              if ((int)uVar11 == 0) {
                uVar20 = 0;
              }
              *(undefined4 *)(lVar13 + (long)(int)uVar7 * 0x60 + 0x5c) = uVar20;
              if ((auVar36._8_8_ & 1) == 0) {
                /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(plVar10,auVar38._8_8_);
              }
              *(undefined8 *)((long)pplVar4 + -0x60) = unaff_x28;
              *(undefined8 **)((long)pplVar4 + -0x58) = unaff_x27;
              *(undefined8 **)((long)pplVar4 + -0x50) = unaff_x26;
              *(long **)((long)pplVar4 + -0x48) = unaff_x25;
              *(ulong *)((long)pplVar4 + -0x40) = unaff_x24;
              *(ulong *)((long)pplVar4 + -0x38) = unaff_x23;
              *(long **)((long)pplVar4 + -0x30) = plVar22;
              *(long **)((long)pplVar4 + -0x28) = plVar9;
              *(undefined8 *)((long)pplVar4 + -0x20) = *(undefined8 *)((long)pplVar4 + -0x20);
              *(undefined8 *)((long)pplVar4 + -0x18) = *(undefined8 *)((long)pplVar4 + -0x18);
              *(undefined8 *)((long)pplVar4 + -0x10) = *(undefined8 *)((long)pplVar4 + -0x10);
              *(undefined8 *)((long)pplVar4 + -8) = *(undefined8 *)((long)pplVar4 + -8);
              lVar23 = 0x3eb4000;
              if ((bRam0000000003eb4d5b & 1) == 0) {
                func_0x00f78a20(0x3d2a408);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb4d5b = 1;
              }
              lVar13 = plVar10[0xe];
              if (lVar13 == 0) goto code_r0x0150c7d4;
              if (*(uint *)(lVar13 + 0x18) <= uVar7) goto code_r0x0150c7d8;
              unaff_x25 = (long *)(long)(int)uVar7;
              lVar13 = lVar13 + (long)unaff_x25 * 0x60;
              unaff_x26 = *(undefined8 **)(lVar13 + 0x20);
              plVar22 = *(long **)(lVar13 + 0x28);
              uVar11 = *(undefined8 *)(lVar13 + 0x30);
              uVar32 = *(undefined8 *)(lVar13 + 0x48);
              uVar17 = *(undefined8 *)(lVar13 + 0x40);
              *(undefined8 *)((long)pplVar4 + -0xe8) = *(undefined8 *)(lVar13 + 0x38);
              *(undefined8 *)((long)pplVar4 + -0xf0) = uVar11;
              *(undefined8 *)((long)pplVar4 + -0xd8) = uVar32;
              *(undefined8 *)((long)pplVar4 + -0xe0) = uVar17;
              lVar23 = *(long *)(lVar13 + 0x50);
              iVar6 = *(int *)(lVar13 + 0x58);
              iVar8 = *(int *)(lVar13 + 0x5c);
              unaff_x23 = *(ulong *)(lVar13 + 0x60);
              unaff_x24 = *(ulong *)(lVar13 + 0x68);
              uVar11 = *(undefined8 *)(lVar13 + 0x70);
              *(undefined8 *)((long)pplVar4 + -0xf8) = *(undefined8 *)(lVar13 + 0x78);
              *(undefined8 *)((long)pplVar4 + -0x100) = uVar11;
              if (iVar8 == iVar6) {
code_r0x0150c768:
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                plVar9 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar23,0,0);
                if ((int)plVar9 == 0) {
                  return plVar9;
                }
                if (lVar23 != 0) {
                  plVar22 = (long *)/*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar23,iVar6 == 2,0);
                  return plVar22;
                }
              }
              else if (iVar6 == 2) {
                if (iVar8 == 0) {
                  if (unaff_x24 == 0) goto code_r0x0150c7d4;
                  uVar17 = *(undefined8 *)(lVar13 + 0x38);
                  uVar11 = *(undefined8 *)(lVar13 + 0x30);
                  uVar33 = *(undefined8 *)(lVar13 + 0x48);
                  uVar32 = *(undefined8 *)(lVar13 + 0x40);
                  *(undefined8 *)((long)pplVar4 + -0x118) = uVar17;
                  *(undefined8 *)((long)pplVar4 + -0x120) = uVar11;
                  *(undefined8 *)((long)pplVar4 + -0x108) = uVar33;
                  *(undefined8 *)((long)pplVar4 + -0x110) = uVar32;
                  uVar35 = *(undefined8 *)(lVar13 + 0x78);
                  uVar34 = *(undefined8 *)(lVar13 + 0x70);
                  *(undefined8 *)((long)pplVar4 + -0x128) = uVar35;
                  *(undefined8 *)((long)pplVar4 + -0x130) = uVar34;
                  *(undefined8 **)((long)pplVar4 + -200) = unaff_x26;
                  *(long **)((long)pplVar4 + -0xc0) = plVar22;
                  *(undefined8 *)((long)pplVar4 + -0xb0) = uVar17;
                  *(undefined8 *)((long)pplVar4 + -0xb8) = uVar11;
                  *(undefined8 *)((long)pplVar4 + -0xa0) = uVar33;
                  *(undefined8 *)((long)pplVar4 + -0xa8) = uVar32;
                  *(long *)((long)pplVar4 + -0x98) = lVar23;
                  *(undefined8 *)((long)pplVar4 + -0x90) = _UNK_033f8620;
                  *(ulong *)((long)pplVar4 + -0x88) = unaff_x23;
                  *(ulong *)((long)pplVar4 + -0x80) = unaff_x24;
                  *(undefined8 *)((long)pplVar4 + -0x70) = uVar35;
                  *(undefined8 *)((long)pplVar4 + -0x78) = uVar34;
                  uVar12 = unaff_x24;
code_r0x0150c724:
                  /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(uVar12,(undefined1 *)((long)pplVar4 + -200),uRam0000000003d2a408);
                  iVar6 = 1;
                }
                else {
                  iVar6 = 2;
                }
code_r0x0150c72c:
                lVar13 = plVar10[0xe];
                if (lVar13 != 0) {
                  if (*(uint *)(lVar13 + 0x18) <= uVar7) goto code_r0x0150c7d8;
                  lVar13 = lVar13 + (long)unaff_x25 * 0x60;
                  *(undefined8 **)(lVar13 + 0x20) = unaff_x26;
                  *(long **)(lVar13 + 0x28) = plVar22;
                  uVar11 = *(undefined8 *)((long)pplVar4 + -0xf0);
                  uVar32 = *(undefined8 *)((long)pplVar4 + -0xd8);
                  uVar17 = *(undefined8 *)((long)pplVar4 + -0xe0);
                  *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)((long)pplVar4 + -0xe8);
                  *(undefined8 *)(lVar13 + 0x30) = uVar11;
                  *(undefined8 *)(lVar13 + 0x48) = uVar32;
                  *(undefined8 *)(lVar13 + 0x40) = uVar17;
                  *(long *)(lVar13 + 0x50) = lVar23;
                  *(int *)(lVar13 + 0x58) = iVar6;
                  *(int *)(lVar13 + 0x5c) = iVar8;
                  *(ulong *)(lVar13 + 0x60) = unaff_x23;
                  *(ulong *)(lVar13 + 0x68) = unaff_x24;
                  uVar11 = *(undefined8 *)((long)pplVar4 + -0x100);
                  *(undefined8 *)(lVar13 + 0x78) = *(undefined8 *)((long)pplVar4 + -0xf8);
                  *(undefined8 *)(lVar13 + 0x70) = uVar11;
                  goto code_r0x0150c768;
                }
              }
              else {
                if (iVar6 != 0) goto code_r0x0150c72c;
                if (iVar8 != 2) {
                  iVar6 = 0;
                  goto code_r0x0150c72c;
                }
                if (((plVar22 != (long *)0x0) && (lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar22,0), lVar13 != 0))
                   && (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,1,0), unaff_x23 != 0)) {
                  *(undefined8 **)((long)pplVar4 + -200) = unaff_x26;
                  *(long **)((long)pplVar4 + -0xc0) = plVar22;
                  *(undefined8 *)((long)pplVar4 + -0xb0) = *(undefined8 *)((long)pplVar4 + -0xe8);
                  *(undefined8 *)((long)pplVar4 + -0xb8) = *(undefined8 *)((long)pplVar4 + -0xf0);
                  *(undefined8 *)((long)pplVar4 + -0xa0) = *(undefined8 *)((long)pplVar4 + -0xd8);
                  *(undefined8 *)((long)pplVar4 + -0xa8) = *(undefined8 *)((long)pplVar4 + -0xe0);
                  *(long *)((long)pplVar4 + -0x98) = lVar23;
                  *(undefined8 *)((long)pplVar4 + -0x90) = _UNK_033f8628;
                  *(ulong *)((long)pplVar4 + -0x88) = unaff_x23;
                  *(ulong *)((long)pplVar4 + -0x80) = unaff_x24;
                  *(undefined8 *)((long)pplVar4 + -0x70) = *(undefined8 *)((long)pplVar4 + -0xf8);
                  *(undefined8 *)((long)pplVar4 + -0x78) = *(undefined8 *)((long)pplVar4 + -0x100);
                  uVar12 = unaff_x23;
                  goto code_r0x0150c724;
                }
              }
code_r0x0150c7d4:
              func_0x00f78af4();
code_r0x0150c7d8:
              uVar11 = func_0x00f78b24();
              auVar37 = func_0x00f78ac0(uVar11,0);
              lVar13 = auVar37._8_8_;
              *(undefined8 **)((long)pplVar4 + -0x180) = unaff_x26;
              *(long **)((long)pplVar4 + -0x178) = unaff_x25;
              *(ulong *)((long)pplVar4 + -0x170) = unaff_x24;
              *(ulong *)((long)pplVar4 + -0x168) = unaff_x23;
              *(long **)((long)pplVar4 + -0x160) = plVar22;
              *(undefined1 (*) [16])((long)pplVar4 + -0x158) = auVar38;
              *(long *)((long)pplVar4 + -0x148) = lVar23;
              *(undefined1 **)((long)pplVar4 + -0x140) = (undefined1 *)((long)pplVar4 + -0x10);
              *(undefined **)((long)pplVar4 + -0x138) =
                   &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
              if ((bRam0000000003eb4d55 & 1) == 0) {
                func_0x00f78a20(0x3d5e6e0);
                func_0x00f78a20(0x3d5e7a8);
                func_0x00f78a20(0x3d5e7d0);
                func_0x00f78a20(0x3d5e850);
                func_0x00f78a20(0x3d5e888);
                bRam0000000003eb4d55 = 1;
              }
              uVar11 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar13 + 0x18),*(undefined4 *)(lVar13 + 0x1c)
                                       ,*(undefined4 *)(lVar13 + 0x20),_UNK_033f8144,
                                       *(undefined8 *)(lVar13 + 0x10),0,0);
              uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar11,10,uRam0000000003d5e7a8);
              uVar11 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar11,*(undefined8 *)(lVar13 + 0x58),uRam0000000003d5e6e0);
              uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar11,1,uRam0000000003d5e888);
              plVar22 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar11,auVar37._0_8_,uRam0000000003d5e850);
              if ((plVar22 != (long *)0x0) && ((char)plVar22[0x1d] != '\0')) {
                plVar22[6] = *(long *)(lVar13 + 0x10);
              }
              return plVar22;
            }
          }
          uVar11 = func_0x00f78b24();
          auVar37 = func_0x00f78ac0(uVar11,0);
          puVar3 = (undefined1 *)((long)pplVar4 + -0x30);
          puVar27 = (undefined1 *)((long)pplVar4 + -0x30);
          *(undefined1 **)((long)pplVar4 + -0x30) = (undefined1 *)((long)pplVar4 + -0x10);
          *(undefined **)((long)pplVar4 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
          lVar23 = *(long *)(auVar37._0_8_ + 0x28);
          auVar36._8_8_ = auVar37._8_8_;
          auVar36._0_8_ = lVar23;
          if (lVar23 == 0) {
            puVar31 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
            auVar36 = func_0x00f78af4();
          }
          else {
            puVar3 = (undefined1 *)((long)pplVar4 + -0x20);
            puVar27 = *(undefined1 **)((long)pplVar4 + -0x30);
            puVar31 = *(undefined **)((long)pplVar4 + -0x28);
          }
          lVar23 = auVar36._8_8_;
          pplVar4 = (long **)(puVar3 + -0x20);
          *(long **)(puVar3 + -0x20) = plVar10;
          *(long *)(puVar3 + -0x18) = lVar18;
          *(undefined1 **)(puVar3 + -0x10) = puVar27;
          *(undefined **)(puVar3 + -8) = puVar31;
          pplVar29 = (long **)(puVar3 + -0x10);
          auVar38._8_8_ = 4;
          auVar38._0_8_ = auVar36._0_8_;
          uVar11 = 0;
          puVar31 = &UNK_0150bd10;
        } while( true );
      }
    }
  }
  unaff_x30 = Atlas_UI_Screens_CharacterSelectScreen__PlayCharacterVO;
  auVar38 = func_0x00f78af4();
  lVar23 = auVar38._8_8_;
  param_1 = auVar38._0_8_;
  pplVar4 = &plStack_80;
code_r0x0154485c:
  do {
    *(long **)((long)pplVar4 + -0x30) = unaff_x22;
    *(long *)((long)pplVar4 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])((long)pplVar4 + -0x20) = auVar37;
    *(undefined8 ********)((long)pplVar4 + -0x10) = unaff_x29;
    *(code **)((long)pplVar4 + -8) = unaff_x30;
    unaff_x29 = (undefined8 *******)((long)pplVar4 + -0x10);
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4f58 & 1) == 0) {
      func_0x00f78a20(0x3d57270);
      func_0x00f78a20(0x3d574f0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f58 = 1;
    }
    *(undefined8 *)((long)pplVar4 + -0x38) = 0;
    if ((param_1[0x10] != 0) && (lVar13 = *(long *)(param_1[0x10] + 0x10), lVar13 != 0)) {
      uVar17 = uRam0000000003d574f0;
      plVar22 = (long *)/*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar13,lVar23,(undefined1 *)((long)pplVar4 + -0x38));
      if ((int)plVar22 == 0) {
        return plVar22;
      }
      if (*(long *)((long)pplVar4 + -0x38) != 0) {
        uVar12 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)((long)pplVar4 + -0x38) + 0x70),0);
        if ((uVar12 & 1) == 0) {
          if (((param_1[0x10] == 0) || (*(long *)((long)pplVar4 + -0x38) == 0)) ||
             (lVar13 = *(long *)(param_1[0x10] + 0x10), lVar13 == 0)) goto LAB_01544998;
          lVar23 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar13,*(undefined8 *)(*(long *)((long)pplVar4 + -0x38) + 0x70),
                                   uRam0000000003d57270);
        }
        else {
          lVar23 = *(long *)((long)pplVar4 + -0x38);
        }
        unaff_x21 = param_1[0x17];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar22 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar23,unaff_x21,0);
        if ((int)plVar22 == 0) {
          return plVar22;
        }
        param_1[0x17] = lVar23;
        lVar13 = *(long *)((long)pplVar4 + -0x38);
        if (lVar13 != 0) {
          plVar22 = (long *)/*Atlas.Audio.UIAudio$$SetSelectedCharacter*/ func_0x01516b9c(*(undefined8 *)(lVar13 + 0x18),
                                            *(undefined4 *)(lVar13 + 0xa8),0);
          return plVar22;
        }
      }
    }
LAB_01544998:
    auVar37._8_8_ = param_1;
    auVar37._0_8_ = lVar23;
    unaff_x30 = Atlas_UI_Screens_CharacterSelectScreen__KartPartLoaded;
    auVar38 = func_0x00f78af4();
    lVar23 = auVar38._8_8_;
    param_1 = auVar38._0_8_;
    pplVar4 = (long **)((long)pplVar4 + -0x40);
    if ((int)uVar17 != 1) {
      return param_1;
    }
  } while( true );
code_r0x01545024:
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_110,uRam0000000003d32290);
  do {
    plVar22 = *(long **)(lVar13 + 0xc0);
    if (plVar22 != (long *)0x0) {
      lVar18 = *(long *)(lVar13 + 0x78);
      plVar22 = (long *)(**(code **)(*plVar22 + 0x178))(plVar22,*(undefined8 *)(*plVar22 + 0x180));
      if ((plVar22 != (long *)0x0) &&
         (uVar11 = (**(code **)(*plVar22 + 0x178))(plVar22,*(undefined8 *)(*plVar22 + 0x180)),
         lVar18 != 0)) {
        uVar12 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar18,uVar11,0);
        if ((uVar12 & 1) == 0) {
          if ((*(long *)(lVar13 + 0xe0) != 0) &&
             (lVar18 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar13 + 0xe0),lVar23,*unaff_x26), lVar18 != 0)) {
            if (*(int *)(lVar18 + 0x18) == 0) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + 0x20);
            if (lVar18 != 0) {
              Atlas_UI_Screens_CharacterSelectScreen__SetSelected
                        (lVar13,*(undefined8 *)(lVar18 + 0x48),1);
              lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar13,uRam0000000003d40fe8);
              if ((lVar18 != 0) && (*(long *)(lVar13 + 0xe0) != 0)) {
                lVar19 = *(long *)(lVar18 + 200);
                lVar18 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar13 + 0xe0),lVar23,*unaff_x26);
                if (lVar18 != 0) {
                  if (*(int *)(lVar18 + 0x18) == 0) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + 0x20);
                  if (((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x48), lVar18 != 0)) &&
                     (uVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar18,0), lVar19 != 0)) {
                    /*Atlas.UI.TabController$$SetSelectedGameObjectInTab*/ func_0x01508ae0(lVar19,lVar23,uVar11,0);
                    goto code_r0x01545138;
                  }
                }
              }
            }
          }
        }
        else {
code_r0x01545138:
          if (lVar23 != 0) {
            lVar23 = *(long *)(lVar23 + 0x10);
            if (((*(ushort *)(*plVar9 + 0x132) >> 10 & 1) != 0) && (*(int *)(*plVar9 + 0xe0) == 0))
            {
              func_0x00f78ad0();
            }
            if (lVar23 != 0) {
              /*Atlas.UI.UIAtlasButton$$SetTrigger*/ func_0x015159e4(lVar23,*(undefined4 *)(*(long *)(*plVar9 + 0xb8) + 0x18),0);
              plVar22 = (long *)Atlas_UI_Screens_CharacterSelectScreen__PlayCurrentTabAnimations
                                          (lVar13);
              return plVar22;
            }
          }
        }
      }
    }
LAB_015451d4:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01545258;
    plVar22 = (long *)___cxa_begin_catch();
    lVar18 = *plVar22;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_110,*unaff_x27);
  } while (lVar18 == 0);
  func_0x00f78ac0(lVar18,0);
code_r0x01545258:
  uVar11 = __Unwind_Resume();
  if ((bRam0000000003eb4f5d & 1) == 0) {
    func_0x00f78a20(0x3d40fe8);
    bRam0000000003eb4f5d = 1;
  }
  lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d40fe8);
  if ((lVar23 != 0) && (plVar22 = *(long **)(lVar23 + 0x80), plVar22 != (long *)0x0)) {
    lVar23 = (**(code **)(*plVar22 + 0x178))(plVar22,*(undefined8 *)(*plVar22 + 0x180));
    plVar22 = (long *)0x0;
    if (lVar23 != 0) {
      lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d40fe8);
      if (((lVar23 == 0) || (plVar22 = *(long **)(lVar23 + 0x80), plVar22 == (long *)0x0)) ||
         (lVar23 = (**(code **)(*plVar22 + 0x178))(plVar22,*(undefined8 *)(*plVar22 + 0x180)),
         lVar23 == 0)) goto LAB_01545304;
      uVar7 = /*Atlas.UI.LoadoutMetagameData$$get_IsLocked*/ func_0x014881dc(lVar23,0);
      plVar22 = (long *)(ulong)(uVar7 ^ 1);
    }
    return plVar22;
  }
LAB_01545304:
  lVar23 = func_0x00f78af4();
  if ((bRam0000000003eb4f5e & 1) == 0) {
    func_0x00f78a20(0x3d2c6c0);
    func_0x00f78a20(0x3d30290);
    func_0x00f78a20(0x3d2e240);
    func_0x00f78a20(0x3d30660);
    func_0x00f78a20(0x3d1c5e8);
    func_0x00f78a20(0x3d1c678);
    func_0x00f78a20(0x3d1c1b8);
    func_0x00f78a20(0x3d240a8);
    bRam0000000003eb4f5e = 1;
  }
  uVar11 = func_0x00f78aec(/*System.Random_TypeInfo*/ uRam0000000003d240a8);
  /*System.Random$$.ctor*/ func_0x0297f008(uVar11,0);
  *(undefined8 *)(lVar23 + 0xa8) = uVar11;
  uVar11 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, List<CharacterMetagameData>>_TypeInfo*/ uRam0000000003d1c1b8);
  /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$.ctor*/ func_0x01e3bb54(uVar11,uRam0000000003d2e240);
  *(undefined8 *)(lVar23 + 0xd8) = uVar11;
  uVar11 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>_TypeInfo*/ uRam0000000003d1c678);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar11,uRam0000000003d30660);
  *(undefined8 *)(lVar23 + 0xe0) = uVar11;
  uVar11 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<UIAtlasButton, int>_TypeInfo*/ uRam0000000003d1c5e8);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(uVar11,uRam0000000003d30290);
  *(undefined8 *)(lVar23 + 0x100) = uVar11;
  if (lVar23 == 0) {
    auVar37 = func_0x00f78af4();
    plVar9 = auVar37._8_8_;
    plVar22 = auVar37._0_8_;
    lVar13 = plVar9[1];
    lVar23 = *plVar9;
    plVar22[2] = plVar9[2];
    plVar22[1] = lVar13;
    *plVar22 = lVar23;
    return plVar22;
  }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar22 = (long *)(*(code *)**(undefined8 **)
                                (*(long *)(*(long *)(lRam0000000003d2c6c0 + 0x18) + 0xc0) + 0x38))()
  ;
  return plVar22;
}



// ============================================================
// RVA: 0x1545534 | Atlas.UI.Screens.CharacterSelectScreen.<OnBeforeEnter>b__24_1
// ============================================================

/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01514cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x01514c5c) */
/* WARNING: Removing unreachable block (ram,0x01514c7c) */
/* WARNING: Removing unreachable block (ram,0x01514c90) */
/* WARNING: Removing unreachable block (ram,0x01514c94) */
/* WARNING: Removing unreachable block (ram,0x01514c98) */
/* WARNING: Removing unreachable block (ram,0x01514ca0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * Atlas_UI_Screens_CharacterSelectScreen___OnBeforeEnter_b__24_1(long *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  long **pplVar4;
  long **pplVar5;
  int iVar6;
  int iVar8;
  uint uVar7;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  int extraout_w1;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined4 uVar20;
  int *piVar21;
  undefined8 unaff_x19;
  long *plVar22;
  undefined8 unaff_x20;
  long lVar23;
  long unaff_x21;
  long *unaff_x22;
  code *pcVar24;
  ulong unaff_x23;
  ulong uVar25;
  ulong uVar26;
  ulong unaff_x24;
  undefined1 *puVar27;
  long *plVar28;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 unaff_x28;
  long **pplVar29;
  undefined8 *******unaff_x29;
  undefined8 *******pppppppuVar30;
  undefined *puVar31;
  code *unaff_x30;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 ******ppppppuStack_60;
  code *pcStack_58;
  
  auVar37._8_8_ = unaff_x19;
  auVar37._0_8_ = unaff_x20;
  plVar22 = (long *)0x1;
  if ((bRam0000000003eb4f5a & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2e250);
    func_0x00f78a20(0x3d39fd8);
    func_0x00f78a20(0x3d39fe8);
    func_0x00f78a20(0x3d39ff0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3f3e8);
    func_0x00f78a20(0x3d1e558);
    func_0x00f78a20(0x3d62390);
    func_0x00f78a20(0x3d26c20);
    bRam0000000003eb4f5a = 1;
  }
  lVar23 = param_1[0x16];
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = 0;
  plVar9 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar23,0);
  if ((int)plVar9 == 0) {
    return plVar9;
  }
  lVar23 = func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass38_0_TypeInfo*/ uRam0000000003d26c20);
  /*Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass38_0$$.ctor*/ func_0x01547a58(lVar23,0);
  plVar10 = (long *)0x3d23990;
  uVar12 = unaff_x23;
  uVar26 = unaff_x24;
  plVar9 = unaff_x25;
  if ((param_1[0x16] == 0) || (param_1[0xf] == 0)) {
LAB_01544ca8:
    auVar37 = func_0x00f78af4();
    plVar28 = auVar37._8_8_;
    pcStack_58 = Atlas_UI_Screens_CharacterSelectScreen__SetSelected;
    plStack_80 = plVar10;
    plStack_78 = (long *)lVar23;
    plStack_70 = plVar22;
    plStack_68 = param_1;
    ppppppuStack_60 = (undefined8 ******)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4f5b & 1) == 0) {
      func_0x00f78a20(0x3d2c6c8);
      bRam0000000003eb4f5b = 1;
    }
    lVar23 = lRam0000000003d2c6c8;
    Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
              (auVar37._0_8_,plVar28);
    if (plVar28 == (long *)0x0) {
      auVar37 = func_0x00f78af4();
      lVar13 = auVar37._0_8_;
      if ((bRam0000000003eb4f5c & 1) == 0) {
        func_0x00f78a20(0x3d21270);
        func_0x00f78a20(0x3d30678);
        func_0x00f78a20(0x3d32290);
        func_0x00f78a20(0x3d32298);
        func_0x00f78a20(0x3d322a0);
        func_0x00f78a20(0x3d223e8);
        func_0x00f78a20(0x3d3a008);
        func_0x00f78a20(0x3d3a010);
        func_0x00f78a20(0x3d25578);
        func_0x00f78a20(0x3d40fe8);
        bRam0000000003eb4f5c = 1;
      }
      uStack_110 = 0;
      uStack_108 = 0;
      plStack_100 = (long *)0x0;
      lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar13,uRam0000000003d40fe8);
      if (lVar18 == 0) goto LAB_015451d4;
      if (*(long *)(lVar18 + 200) == 0) goto LAB_015451d4;
      lVar18 = *(long *)(*(long *)(lVar18 + 200) + 0x28);
      if (lVar18 == 0) goto LAB_015451d4;
      plVar22 = *(long **)(lVar18 + 0x40);
      if (plVar22 != (long *)0x0) {
        if (*(byte *)(*plVar22 + 300) < *(byte *)(/*Atlas.UI.IPTabData_TypeInfo*/ lRam0000000003d223e8 + 300)) {
          plVar22 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar22 + 200) +
                           (ulong)*(byte *)(/*Atlas.UI.IPTabData_TypeInfo*/ lRam0000000003d223e8 + 300) * 8 + -8) !=
                 /*Atlas.UI.IPTabData_TypeInfo*/ lRam0000000003d223e8) {
          plVar22 = (long *)0x0;
        }
      }
      *(long **)(lVar13 + 0xf0) = plVar22;
      if (*(long *)(lVar13 + 0xe0) == 0) goto LAB_015451d4;
      unaff_x26 = (undefined8 *)0x3d30678;
      lVar18 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar13 + 0xe0),auVar37._8_8_,uRam0000000003d30678);
      if (lVar18 == 0) goto LAB_015451d4;
      plVar9 = (long *)0x3d25578;
      unaff_x27 = (undefined8 *)0x3d32290;
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_128,lVar18,uRam0000000003d3a008);
      uStack_108 = uStack_120;
      uStack_110 = uStack_128;
      plStack_100 = plStack_118;
code_r0x01544ef8:
      do {
        uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_110,uRam0000000003d32298);
        plVar22 = plStack_100;
        if ((uVar12 & 1) == 0) goto code_r0x01545024;
        if (plStack_100 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x015451d0;
        }
        lVar18 = *(long *)(lVar13 + 0x78);
        plVar10 = (long *)(**(code **)(*plStack_100 + 0x178))
                                    (plStack_100,*(undefined8 *)(*plStack_100 + 0x180));
        if (plVar10 == (long *)0x0) {
          func_0x00f78af4();
          goto code_r0x015451d0;
        }
        uVar11 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
        if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
        if (lVar18 == 0) {
          func_0x00f78af4(uVar11,uVar11);
          goto code_r0x015451d0;
        }
        uVar11 = /*Atlas.Stats.UnlockManager$$GetLastUsedSkinIDForCharacter*/ func_0x01521360(lVar18,uVar11,0);
        uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
        if (*(long *)(lVar13 + 0x78) == 0) {
          func_0x00f78af4(0,uVar11);
          goto code_r0x015451d0;
        }
        uVar12 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar13 + 0x78),uVar11,0);
        if ((uVar12 & 1) == 0) {
          lVar18 = *(long *)(lVar13 + 0x78);
          plVar10 = (long *)(**(code **)(*plVar22 + 0x178))
                                      (plVar22,*(undefined8 *)(*plVar22 + 0x180));
          if (plVar10 == (long *)0x0) {
            func_0x00f78af4();
          }
          else {
            uVar11 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar11,0);
            plVar22 = (long *)(**(code **)(*plVar22 + 0x178))
                                        (plVar22,*(undefined8 *)(*plVar22 + 0x180));
            if (plVar22 == (long *)0x0) {
              func_0x00f78af4();
            }
            else {
              uVar17 = (**(code **)(*plVar22 + 0x178))(plVar22,*(undefined8 *)(*plVar22 + 0x180));
              uVar17 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar17,0);
              if (lVar18 != 0) {
                /*Atlas.Stats.UnlockManager$$AddOrUpdateCharacterLastUsedSkin*/ func_0x01521520(lVar18,uVar11,uVar17,0);
                goto code_r0x01544ef8;
              }
              func_0x00f78af4();
            }
          }
code_r0x015451d0:
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x15451d4);
          (*pcVar24)();
        }
      } while( true );
    }
    plVar22 = (long *)/*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(plVar28,0,uVar7 ^ 1,0,0);
    if (((uVar7 ^ 1) & 1) != 0) {
      return plVar22;
    }
    pplVar5 = &plStack_80;
    if ((bRam0000000003eb4d9a & 1) == 0) {
      func_0x00f78a20(0x3d23da0,0,0,0);
      func_0x00f78a20(0x3d754d8);
      bRam0000000003eb4d9a = 1;
    }
    plVar22 = (long *)(**(code **)(*plVar28 + 0x1c8))(plVar28,*(undefined8 *)(*plVar28 + 0x1d0));
    if (((int)plVar22 == 0) ||
       (plVar22 = (long *)(**(code **)(*plVar28 + 0x2b8))(plVar28,*(undefined8 *)(*plVar28 + 0x2c0))
       , (int)plVar22 == 0)) {
      return plVar22;
    }
    /*UnityEngine.UISystemProfilerApi$$AddMarker*/ func_0x032f6f10(/*STR('UIAtlasButton.OnPress')*/ uRam0000000003d754d8,plVar28,0);
    plVar22 = (long *)plVar28[0x2b];
    if (plVar22 == (long *)0x0) {
      plVar22 = (long *)plVar28[0x2c];
      if (plVar22 == (long *)0x0) {
        return (long *)0x0;
      }
      pplVar5 = (long **)&stack0xffffffffffffffb0;
      plVar28 = plStack_68;
      plVar10 = plStack_70;
      plVar14 = plStack_78;
      plVar15 = plStack_80;
      pppppppuVar30 = (undefined8 *******)ppppppuStack_60;
      pcVar24 = pcStack_58;
    }
    else {
      plVar10 = (long *)0x0;
      plVar14 = (long *)0;
      plVar15 = (long *)0x3eb4000;
      pppppppuVar30 = &ppppppuStack_60;
      pcVar24 = (code *)&UNK_01514cc0;
    }
    uVar11 = 0;
    *(undefined8 **)((long)pplVar5 + -0x50) = unaff_x26;
    *(long **)((long)pplVar5 + -0x48) = plVar9;
    *(ulong *)((long)pplVar5 + -0x40) = uVar26;
    *(ulong *)((long)pplVar5 + -0x38) = uVar12;
    *(long **)((long)pplVar5 + -0x30) = plVar15;
    *(long **)((long)pplVar5 + -0x28) = plVar14;
    *(long **)((long)pplVar5 + -0x20) = plVar10;
    *(long **)((long)pplVar5 + -0x18) = plVar28;
    *(undefined8 ********)((long)pplVar5 + -0x10) = pppppppuVar30;
    *(code **)((long)pplVar5 + -8) = pcVar24;
    *(long **)((long)pplVar5 + -0x58) = plVar22;
    lVar23 = plVar22[0xd];
    if (lVar23 == 0) {
      puVar27 = (undefined1 *)((long)pplVar5 + -0x58);
      lVar13 = 1;
    }
    else {
      lVar13 = *(long *)(lVar23 + 0x18);
      if (lVar13 == 0) {
        return plVar22;
      }
      puVar27 = (undefined1 *)(lVar23 + 0x20);
    }
    lVar23 = 0;
    do {
      lVar18 = *(long *)(puVar27 + lVar23 * 8);
      pcVar24 = *(code **)(lVar18 + 0x10);
      plVar9 = *(long **)(lVar18 + 0x20);
      lVar18 = *(long *)(lVar18 + 0x28);
      if (*(short *)(lVar18 + 0x48) == -1) {
        func_0x00f78ad8(lVar18,uVar11);
      }
      iVar6 = func_0x00f78a4c(lVar18);
      if (iVar6 == 0) {
        if ((((plVar9 == (long *)0x0) || (*(short *)(lVar18 + 0x48) == -1)) ||
            ((*(byte *)(*plVar9 + 0x115) & 1) != 0)) || (plVar22[3] == 0)) goto code_r0x02924d98;
        iVar6 = func_0x00f78a44(lVar18);
        iVar8 = func_0x00f78ec0(lVar18);
        if (iVar6 == 0) {
          uVar2 = *(ushort *)(lVar18 + 0x48);
          if (iVar8 == 0) {
            lVar18 = *plVar9 + (ulong)uVar2 * 0x10;
            auVar37 = (**(code **)(lVar18 + 0x138))(plVar9,*(undefined8 *)(lVar18 + 0x140));
            goto code_r0x02924da4;
          }
          lVar18 = func_0x00f78a48(lVar18);
          lVar19 = *plVar9;
          uVar12 = (ulong)*(ushort *)(lVar19 + 0x12a);
          if (uVar12 != 0) {
            piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == lVar18) {
                puVar16 = (undefined8 *)
                          (lVar19 + (long)(int)(*piVar21 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x02924e68;
              }
              piVar21 = piVar21 + 4;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          puVar16 = (undefined8 *)func_0x00fac1f0(plVar9,lVar18,(ulong)uVar2);
code_r0x02924e68:
          pcVar24 = (code *)*puVar16;
          puVar16 = (undefined8 *)puVar16[1];
        }
        else {
          if (iVar8 == 0) {
            uVar11 = *(undefined8 *)(*plVar9 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar19 = *plVar9;
            uVar12 = (ulong)*(ushort *)(lVar19 + 0x12a);
            if (uVar12 != 0) {
              piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
              do {
                if (*(long *)(piVar21 + -2) == *(long *)(lVar18 + 0x18)) {
                  lVar19 = lVar19 + (long)(int)(*piVar21 + (uint)*(ushort *)(lVar18 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar21 = piVar21 + 4;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            lVar19 = func_0x00fac1f0(plVar9);
code_r0x02924e40:
            uVar11 = *(undefined8 *)(lVar19 + 8);
          }
          puVar16 = (undefined8 *)func_0x00f78acc(uVar11,lVar18);
          pcVar24 = (code *)*puVar16;
        }
        auVar37 = (*pcVar24)(plVar9,puVar16);
      }
      else if (*(char *)(lVar18 + 0x4a) == '\0') {
        auVar37 = (*pcVar24)(lVar18);
      }
      else {
code_r0x02924d98:
        auVar37 = (*pcVar24)(plVar9,lVar18);
      }
code_r0x02924da4:
      uVar11 = auVar37._8_8_;
      lVar23 = lVar23 + 1;
      if (lVar23 == lVar13) {
        return auVar37._0_8_;
      }
    } while( true );
  }
  uVar7 = 0;
  plVar10 = (long *)/*Atlas.Stats.UnlockManager$$GetLastUsedSkinIDForCharacter*/ func_0x01521360(param_1[0xf],*(undefined8 *)(param_1[0x16] + 0x18));
  uVar25 = 0x3d21270;
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(plVar10,0);
  uVar26 = 0x3d21270;
  if (lVar23 == 0) goto LAB_01544ca8;
  *(undefined8 *)(lVar23 + 0x10) = uVar11;
  if ((param_1[0x16] == 0) || (uVar26 = uVar25, param_1[0x1b] == 0)) goto LAB_01544ca8;
  plVar28 = (long *)0x3d2e250;
  plVar10 = (long *)/*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(param_1[0x1b],*(undefined8 *)(param_1[0x16] + 0x18),
                                    uRam0000000003d2e250);
  uVar12 = func_0x00f78aec(/*System.Predicate<CharacterMetagameData>_TypeInfo*/ uRam0000000003d1e558);
  uVar11 = uRam0000000003d62390;
  /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(uVar12,lVar23,uRam0000000003d62390,uRam0000000003d3f3e8);
  uVar7 = (uint)uVar11;
  plVar9 = (long *)0x3d2e250;
  if (plVar10 == (long *)0x0) goto LAB_01544ca8;
  uVar11 = uRam0000000003d39fd8;
  iVar6 = /*System.Collections.Generic.List<TMP_MaterialManager.MaskingMaterial>$$FindIndex*/ func_0x02427980(plVar10,uVar12);
  uVar7 = (uint)uVar11;
  uVar1 = iVar6 + 1;
  plVar22 = (long *)(ulong)uVar1;
  lVar13 = param_1[0x1b];
  lVar18 = param_1[0x16];
  if ((int)uVar1 < 0) {
    plVar9 = plVar28;
    if ((lVar18 == 0) || (lVar13 == 0)) goto LAB_01544ca8;
    uVar11 = uRam0000000003d2e250;
    lVar13 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(lVar13,*(undefined8 *)(lVar18 + 0x18));
    uVar7 = (uint)uVar11;
    if (lVar13 == 0) goto LAB_01544ca8;
    uVar1 = *(int *)(lVar13 + 0x18) - 1;
  }
  else {
    if ((lVar18 == 0) || (plVar9 = plVar28, lVar13 == 0)) goto LAB_01544ca8;
    uVar11 = uRam0000000003d2e250;
    lVar13 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(lVar13,*(undefined8 *)(lVar18 + 0x18));
    uVar7 = (uint)uVar11;
    if (lVar13 == 0) goto LAB_01544ca8;
    if (*(int *)(lVar13 + 0x18) <= (int)uVar1) {
      uVar1 = 0;
    }
  }
  uVar12 = (ulong)uVar1;
  plVar9 = plVar28;
  if ((param_1[0x16] == 0) || (param_1[0x1b] == 0)) goto LAB_01544ca8;
  plVar22 = (long *)param_1[0xf];
  lVar23 = *(long *)(param_1[0x16] + 0x18);
  uVar11 = uRam0000000003d2e250;
  plVar14 = (long *)/*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(param_1[0x1b],lVar23);
  uVar7 = (uint)uVar11;
  if (plVar14 == (long *)0x0) goto LAB_01544ca8;
  if (*(uint *)(plVar14 + 3) <= uVar1) {
    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
  }
  plVar15 = *(long **)(plVar14[2] + (long)(int)uVar1 * 8 + 0x20);
  plVar10 = plVar14;
  if (plVar15 == (long *)0x0) goto LAB_01544ca8;
  plVar10 = (long *)(**(code **)(*plVar15 + 0x178))(plVar15,*(undefined8 *)(*plVar15 + 0x180));
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(plVar10,0);
  if (plVar22 == (long *)0x0) goto LAB_01544ca8;
  uVar17 = 0;
  /*Atlas.Stats.UnlockManager$$AddOrUpdateCharacterLastUsedSkin*/ func_0x01521520(plVar22,lVar23,uVar11);
  uVar12 = 0x3d26c18;
  if ((bRam0000000003eb4f57 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2e250);
    func_0x00f78a20(0x3d39fd0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d3f3e8);
    func_0x00f78a20(0x3d1e558);
    func_0x00f78a20(0x3d62388);
    func_0x00f78a20(0x3d26c18);
    func_0x00f78a20(0x3d40fe8);
    func_0x00f78a20(0x3d40ff0);
    func_0x00f78a20(0x3d40ff8);
    bRam0000000003eb4f57 = 1;
  }
  plVar9 = (long *)func_0x00f78aec(/*Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass34_0_TypeInfo*/ uRam0000000003d26c18);
  /*Atlas.UI.Screens.CharacterSelectScreen.<>c__DisplayClass34_0$$.ctor*/ func_0x015479b8(plVar9,0);
  plVar22 = unaff_x22;
  if ((param_1[0x16] != 0) && (param_1[0xf] != 0)) {
    unaff_x24 = 0x3d21270;
    uVar12 = /*Atlas.Stats.UnlockManager$$GetLastUsedSkinIDForCharacter*/ func_0x01521360(param_1[0xf],*(undefined8 *)(param_1[0x16] + 0x18),0);
    if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar23 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar12,0);
    if (plVar9 != (long *)0x0) {
      plVar9[2] = lVar23;
      if ((param_1[0x16] != 0) && (param_1[0x1b] != 0)) {
        unaff_x23 = 0x3d62000;
        unaff_x25 = (long *)0x3d3f000;
        lVar23 = /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$get_Item*/ func_0x01e3bfc0(param_1[0x1b],*(undefined8 *)(param_1[0x16] + 0x18),
                                 uRam0000000003d2e250);
        plVar22 = (long *)func_0x00f78aec(/*System.Predicate<CharacterMetagameData>_TypeInfo*/ uRam0000000003d1e558);
        uVar17 = uRam0000000003d3f3e8;
        /*System.Predicate<TMP_MaterialManager.MaskingMaterial>$$.ctor*/ func_0x0270a61c(plVar22,plVar9,uRam0000000003d62388);
        uVar12 = 0;
        if (lVar23 != 0) {
          unaff_x23 = 0x3d40fe8;
          uVar12 = /*System.Collections.Generic.List<RuntimeManager.AttachedInstance>$$Find*/ func_0x024278b4(lVar23,plVar22,uRam0000000003d39fd0);
          lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
          if ((lVar23 != 0) && (plVar10 = *(long **)(lVar23 + 0x80), plVar10 != (long *)0x0)) {
            lVar23 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
            if (lVar23 == 0) {
LAB_01544668:
              lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d40ff0);
              if (lVar23 != 0) {
                if (*(long *)(lVar23 + 0x18) != 0) {
                  uVar17 = 0;
                  /*Atlas.UI.Screens.CharacterSelectScreen.CharacterSelected$$Invoke*/ func_0x01549fe0(*(long *)(lVar23 + 0x18),0,plVar9[2]);
                }
                if (param_1[0x1f] != 0) {
                  uVar17 = 0;
                  uVar12 = Atlas_FrontEnd_FrontEndScene__RequestLoadCharacter
                                     (param_1[0x1f],0,plVar9[2]);
                  if ((param_1[0x1f] != 0) &&
                     (lVar23 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(param_1[0x1f],0,0),
                     lVar23 != 0)) {
                    plVar22 = (long *)0x3d40000;
                    Atlas_Gameplay_Kart_KartFEAnimator__PlayCharacterSelectScreen(lVar23,0);
                    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40ff8);
                    if ((lVar23 != 0) && (*(long *)(lVar23 + 0x48) != 0)) {
                      lVar23 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(*(long *)(lVar23 + 0x48),0);
                      unaff_x23 = plVar9[2];
                      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(unaff_x23,0);
                      plVar22 = (long *)0x0;
                      if (lVar23 != 0) {
                        *(undefined8 *)(lVar23 + 0x80) = uVar11;
                        uVar11 = (**(code **)(*param_1 + 0x268))
                                           (param_1,*(undefined8 *)(*param_1 + 0x270));
                        plVar22 = (long *)Atlas_UI_Screens_CharacterSelectScreen__SetVisualsForCanProgress
                                                    (param_1,uVar11);
                        if ((uVar12 & 1) != 0) {
                          return plVar22;
                        }
                        lVar23 = plVar9[2];
                        pplVar4 = (long **)register0x00000008;
                        goto code_r0x0154485c;
                      }
                    }
                  }
                }
              }
            }
            else {
              lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
              if ((lVar23 != 0) && (plVar10 = *(long **)(lVar23 + 0x80), plVar10 != (long *)0x0)) {
                (**(code **)(*plVar10 + 0x188))(plVar10,uVar12,*(undefined8 *)(*plVar10 + 400));
                lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                if (lVar23 != 0) {
                  plVar22 = *(long **)(lVar23 + 0x88);
                  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar22,0,0);
                  if (iVar6 == 0) {
LAB_01544650:
                    plVar10 = (long *)param_1[0x18];
                    if (plVar10 != (long *)0x0) {
                      (**(code **)(*plVar10 + 0x188))
                                (plVar10,uVar12,*(undefined8 *)(*plVar10 + 400));
                      goto LAB_01544668;
                    }
                  }
                  else {
                    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                    if ((lVar23 != 0) &&
                       (plVar10 = *(long **)(lVar23 + 0x88), plVar10 != (long *)0x0)) {
                      (**(code **)(*plVar10 + 0x188))
                                (plVar10,uVar12,*(undefined8 *)(*plVar10 + 400));
                      lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fe8);
                      if ((lVar23 != 0) &&
                         (((*(long *)(lVar23 + 0x88) != 0 &&
                           (plVar10 = (long *)/*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar23 + 0x88),0),
                           uVar12 != 0)) &&
                          (uVar11 = /*Atlas.UI.LoadoutMetagameData$$get_IsLocked*/ func_0x014881dc(uVar12,0), plVar22 = plVar10,
                          plVar10 != (long *)0x0)))) {
                        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(plVar10,uVar11,0);
                        goto LAB_01544650;
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
  auVar37 = func_0x00f78af4();
  uVar11 = auVar37._0_8_;
  pplVar4 = &plStack_80;
  pcStack_58 = Atlas_UI_Screens_CharacterSelectScreen__SetVisualsForCanProgress;
  unaff_x29 = &ppppppuStack_60;
  unaff_x22 = (long *)0x3eb4000;
  unaff_x21 = 0x3d40ff8;
  plStack_80 = plVar22;
  plStack_78 = (long *)uVar12;
  plStack_70 = plVar9;
  plStack_68 = param_1;
  ppppppuStack_60 = (undefined8 ******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4f59 & 1) == 0) {
    func_0x00f78a20(0x3d40ff8);
    bRam0000000003eb4f59 = 1;
  }
  lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d40ff8);
  if ((lVar23 != 0) && (*(long *)(lVar23 + 0xb8) != 0)) {
    uVar17 = 1;
    /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar23 + 0xb8),6,auVar37._8_8_,1,0);
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d40ff8);
    if ((lVar23 != 0) && (*(long *)(lVar23 + 0xb8) != 0)) {
      uVar17 = 1;
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar23 + 0xb8),8,auVar37._8_4_ ^ 1,1,0);
      lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d40ff8);
      plVar28 = plStack_68;
      plVar10 = plStack_70;
      plVar9 = plStack_78;
      plVar22 = plStack_80;
      if ((lVar23 != 0) && (plVar14 = *(long **)(lVar23 + 0xb8), plVar14 != (long *)0x0)) {
        uVar11 = 0;
        if (plVar14[5] != 0) {
          *(char *)(plVar14[5] + 0x80) = auVar37[8];
          return plVar14;
        }
        lVar23 = func_0x00f78af4();
        plStack_80 = plVar10;
        plStack_78 = plVar28;
        plStack_70 = (long *)&ppppppuStack_60;
        plStack_68 = (long *)&Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
        pplVar29 = &plStack_70;
        if (*(ulong *)(lVar23 + 0x28) == 0) {
          puVar31 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
          auVar38 = func_0x00f78af4();
          auVar36._8_8_ = uVar17;
          auVar36._0_8_ = plVar10;
        }
        else {
          auVar38._8_8_ = 0;
          auVar38._0_8_ = *(ulong *)(lVar23 + 0x28);
          uVar11 = 0;
          auVar36._8_8_ = 1;
          auVar36._0_8_ = plVar10;
          puVar31 = &UNK_0150bbf4;
          pplVar4 = &plStack_80;
        }
        do {
          plVar10 = auVar38._0_8_;
          *(long *)((long)pplVar4 + -0x20) = auVar36._0_8_;
          *(long *)((long)pplVar4 + -0x18) = lVar23;
          *(long ***)((long)pplVar4 + -0x10) = pplVar29;
          *(undefined **)((long)pplVar4 + -8) = puVar31;
          uVar7 = auVar38._8_4_;
          if (uVar7 == 0xffffffff) {
            return plVar10;
          }
          lVar13 = plVar10[0xe];
          if (lVar13 == 0) {
            func_0x00f78af4();
            lVar18 = lVar23;
          }
          else {
            lVar18 = auVar38._8_8_;
            if (uVar7 < *(uint *)(lVar13 + 0x18)) {
              uVar20 = 2;
              if ((int)uVar11 == 0) {
                uVar20 = 0;
              }
              *(undefined4 *)(lVar13 + (long)(int)uVar7 * 0x60 + 0x5c) = uVar20;
              if ((auVar36._8_8_ & 1) == 0) {
                /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(plVar10,auVar38._8_8_);
              }
              *(undefined8 *)((long)pplVar4 + -0x60) = unaff_x28;
              *(undefined8 **)((long)pplVar4 + -0x58) = unaff_x27;
              *(undefined8 **)((long)pplVar4 + -0x50) = unaff_x26;
              *(long **)((long)pplVar4 + -0x48) = unaff_x25;
              *(ulong *)((long)pplVar4 + -0x40) = unaff_x24;
              *(ulong *)((long)pplVar4 + -0x38) = unaff_x23;
              *(long **)((long)pplVar4 + -0x30) = plVar22;
              *(long **)((long)pplVar4 + -0x28) = plVar9;
              *(undefined8 *)((long)pplVar4 + -0x20) = *(undefined8 *)((long)pplVar4 + -0x20);
              *(undefined8 *)((long)pplVar4 + -0x18) = *(undefined8 *)((long)pplVar4 + -0x18);
              *(undefined8 *)((long)pplVar4 + -0x10) = *(undefined8 *)((long)pplVar4 + -0x10);
              *(undefined8 *)((long)pplVar4 + -8) = *(undefined8 *)((long)pplVar4 + -8);
              lVar23 = 0x3eb4000;
              if ((bRam0000000003eb4d5b & 1) == 0) {
                func_0x00f78a20(0x3d2a408);
                func_0x00f78a20(0x3d23990);
                bRam0000000003eb4d5b = 1;
              }
              lVar13 = plVar10[0xe];
              if (lVar13 == 0) goto code_r0x0150c7d4;
              if (*(uint *)(lVar13 + 0x18) <= uVar7) goto code_r0x0150c7d8;
              unaff_x25 = (long *)(long)(int)uVar7;
              lVar13 = lVar13 + (long)unaff_x25 * 0x60;
              unaff_x26 = *(undefined8 **)(lVar13 + 0x20);
              plVar22 = *(long **)(lVar13 + 0x28);
              uVar11 = *(undefined8 *)(lVar13 + 0x30);
              uVar32 = *(undefined8 *)(lVar13 + 0x48);
              uVar17 = *(undefined8 *)(lVar13 + 0x40);
              *(undefined8 *)((long)pplVar4 + -0xe8) = *(undefined8 *)(lVar13 + 0x38);
              *(undefined8 *)((long)pplVar4 + -0xf0) = uVar11;
              *(undefined8 *)((long)pplVar4 + -0xd8) = uVar32;
              *(undefined8 *)((long)pplVar4 + -0xe0) = uVar17;
              lVar23 = *(long *)(lVar13 + 0x50);
              iVar6 = *(int *)(lVar13 + 0x58);
              iVar8 = *(int *)(lVar13 + 0x5c);
              unaff_x23 = *(ulong *)(lVar13 + 0x60);
              unaff_x24 = *(ulong *)(lVar13 + 0x68);
              uVar11 = *(undefined8 *)(lVar13 + 0x70);
              *(undefined8 *)((long)pplVar4 + -0xf8) = *(undefined8 *)(lVar13 + 0x78);
              *(undefined8 *)((long)pplVar4 + -0x100) = uVar11;
              if (iVar8 == iVar6) {
code_r0x0150c768:
                if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                plVar9 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar23,0,0);
                if ((int)plVar9 == 0) {
                  return plVar9;
                }
                if (lVar23 != 0) {
                  plVar22 = (long *)/*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar23,iVar6 == 2,0);
                  return plVar22;
                }
              }
              else if (iVar6 == 2) {
                if (iVar8 == 0) {
                  if (unaff_x24 == 0) goto code_r0x0150c7d4;
                  uVar17 = *(undefined8 *)(lVar13 + 0x38);
                  uVar11 = *(undefined8 *)(lVar13 + 0x30);
                  uVar33 = *(undefined8 *)(lVar13 + 0x48);
                  uVar32 = *(undefined8 *)(lVar13 + 0x40);
                  *(undefined8 *)((long)pplVar4 + -0x118) = uVar17;
                  *(undefined8 *)((long)pplVar4 + -0x120) = uVar11;
                  *(undefined8 *)((long)pplVar4 + -0x108) = uVar33;
                  *(undefined8 *)((long)pplVar4 + -0x110) = uVar32;
                  uVar35 = *(undefined8 *)(lVar13 + 0x78);
                  uVar34 = *(undefined8 *)(lVar13 + 0x70);
                  *(undefined8 *)((long)pplVar4 + -0x128) = uVar35;
                  *(undefined8 *)((long)pplVar4 + -0x130) = uVar34;
                  *(undefined8 **)((long)pplVar4 + -200) = unaff_x26;
                  *(long **)((long)pplVar4 + -0xc0) = plVar22;
                  *(undefined8 *)((long)pplVar4 + -0xb0) = uVar17;
                  *(undefined8 *)((long)pplVar4 + -0xb8) = uVar11;
                  *(undefined8 *)((long)pplVar4 + -0xa0) = uVar33;
                  *(undefined8 *)((long)pplVar4 + -0xa8) = uVar32;
                  *(long *)((long)pplVar4 + -0x98) = lVar23;
                  *(undefined8 *)((long)pplVar4 + -0x90) = _UNK_033f8620;
                  *(ulong *)((long)pplVar4 + -0x88) = unaff_x23;
                  *(ulong *)((long)pplVar4 + -0x80) = unaff_x24;
                  *(undefined8 *)((long)pplVar4 + -0x70) = uVar35;
                  *(undefined8 *)((long)pplVar4 + -0x78) = uVar34;
                  uVar12 = unaff_x24;
code_r0x0150c724:
                  /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(uVar12,(undefined1 *)((long)pplVar4 + -200),uRam0000000003d2a408);
                  iVar6 = 1;
                }
                else {
                  iVar6 = 2;
                }
code_r0x0150c72c:
                lVar13 = plVar10[0xe];
                if (lVar13 != 0) {
                  if (*(uint *)(lVar13 + 0x18) <= uVar7) goto code_r0x0150c7d8;
                  lVar13 = lVar13 + (long)unaff_x25 * 0x60;
                  *(undefined8 **)(lVar13 + 0x20) = unaff_x26;
                  *(long **)(lVar13 + 0x28) = plVar22;
                  uVar11 = *(undefined8 *)((long)pplVar4 + -0xf0);
                  uVar32 = *(undefined8 *)((long)pplVar4 + -0xd8);
                  uVar17 = *(undefined8 *)((long)pplVar4 + -0xe0);
                  *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)((long)pplVar4 + -0xe8);
                  *(undefined8 *)(lVar13 + 0x30) = uVar11;
                  *(undefined8 *)(lVar13 + 0x48) = uVar32;
                  *(undefined8 *)(lVar13 + 0x40) = uVar17;
                  *(long *)(lVar13 + 0x50) = lVar23;
                  *(int *)(lVar13 + 0x58) = iVar6;
                  *(int *)(lVar13 + 0x5c) = iVar8;
                  *(ulong *)(lVar13 + 0x60) = unaff_x23;
                  *(ulong *)(lVar13 + 0x68) = unaff_x24;
                  uVar11 = *(undefined8 *)((long)pplVar4 + -0x100);
                  *(undefined8 *)(lVar13 + 0x78) = *(undefined8 *)((long)pplVar4 + -0xf8);
                  *(undefined8 *)(lVar13 + 0x70) = uVar11;
                  goto code_r0x0150c768;
                }
              }
              else {
                if (iVar6 != 0) goto code_r0x0150c72c;
                if (iVar8 != 2) {
                  iVar6 = 0;
                  goto code_r0x0150c72c;
                }
                if (((plVar22 != (long *)0x0) && (lVar13 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar22,0), lVar13 != 0))
                   && (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar13,1,0), unaff_x23 != 0)) {
                  *(undefined8 **)((long)pplVar4 + -200) = unaff_x26;
                  *(long **)((long)pplVar4 + -0xc0) = plVar22;
                  *(undefined8 *)((long)pplVar4 + -0xb0) = *(undefined8 *)((long)pplVar4 + -0xe8);
                  *(undefined8 *)((long)pplVar4 + -0xb8) = *(undefined8 *)((long)pplVar4 + -0xf0);
                  *(undefined8 *)((long)pplVar4 + -0xa0) = *(undefined8 *)((long)pplVar4 + -0xd8);
                  *(undefined8 *)((long)pplVar4 + -0xa8) = *(undefined8 *)((long)pplVar4 + -0xe0);
                  *(long *)((long)pplVar4 + -0x98) = lVar23;
                  *(undefined8 *)((long)pplVar4 + -0x90) = _UNK_033f8628;
                  *(ulong *)((long)pplVar4 + -0x88) = unaff_x23;
                  *(ulong *)((long)pplVar4 + -0x80) = unaff_x24;
                  *(undefined8 *)((long)pplVar4 + -0x70) = *(undefined8 *)((long)pplVar4 + -0xf8);
                  *(undefined8 *)((long)pplVar4 + -0x78) = *(undefined8 *)((long)pplVar4 + -0x100);
                  uVar12 = unaff_x23;
                  goto code_r0x0150c724;
                }
              }
code_r0x0150c7d4:
              func_0x00f78af4();
code_r0x0150c7d8:
              uVar11 = func_0x00f78b24();
              auVar37 = func_0x00f78ac0(uVar11,0);
              lVar13 = auVar37._8_8_;
              *(undefined8 **)((long)pplVar4 + -0x180) = unaff_x26;
              *(long **)((long)pplVar4 + -0x178) = unaff_x25;
              *(ulong *)((long)pplVar4 + -0x170) = unaff_x24;
              *(ulong *)((long)pplVar4 + -0x168) = unaff_x23;
              *(long **)((long)pplVar4 + -0x160) = plVar22;
              *(undefined1 (*) [16])((long)pplVar4 + -0x158) = auVar38;
              *(long *)((long)pplVar4 + -0x148) = lVar23;
              *(undefined1 **)((long)pplVar4 + -0x140) = (undefined1 *)((long)pplVar4 + -0x10);
              *(undefined **)((long)pplVar4 + -0x138) =
                   &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
              if ((bRam0000000003eb4d55 & 1) == 0) {
                func_0x00f78a20(0x3d5e6e0);
                func_0x00f78a20(0x3d5e7a8);
                func_0x00f78a20(0x3d5e7d0);
                func_0x00f78a20(0x3d5e850);
                func_0x00f78a20(0x3d5e888);
                bRam0000000003eb4d55 = 1;
              }
              uVar11 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar13 + 0x18),*(undefined4 *)(lVar13 + 0x1c)
                                       ,*(undefined4 *)(lVar13 + 0x20),_UNK_033f8144,
                                       *(undefined8 *)(lVar13 + 0x10),0,0);
              uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar11,10,uRam0000000003d5e7a8);
              uVar11 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar11,*(undefined8 *)(lVar13 + 0x58),uRam0000000003d5e6e0);
              uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar11,1,uRam0000000003d5e888);
              plVar22 = (long *)/*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar11,auVar37._0_8_,uRam0000000003d5e850);
              if ((plVar22 != (long *)0x0) && ((char)plVar22[0x1d] != '\0')) {
                plVar22[6] = *(long *)(lVar13 + 0x10);
              }
              return plVar22;
            }
          }
          uVar11 = func_0x00f78b24();
          auVar37 = func_0x00f78ac0(uVar11,0);
          puVar3 = (undefined1 *)((long)pplVar4 + -0x30);
          puVar27 = (undefined1 *)((long)pplVar4 + -0x30);
          *(undefined1 **)((long)pplVar4 + -0x30) = (undefined1 *)((long)pplVar4 + -0x10);
          *(undefined **)((long)pplVar4 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
          lVar23 = *(long *)(auVar37._0_8_ + 0x28);
          auVar36._8_8_ = auVar37._8_8_;
          auVar36._0_8_ = lVar23;
          if (lVar23 == 0) {
            puVar31 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
            auVar36 = func_0x00f78af4();
          }
          else {
            puVar3 = (undefined1 *)((long)pplVar4 + -0x20);
            puVar27 = *(undefined1 **)((long)pplVar4 + -0x30);
            puVar31 = *(undefined **)((long)pplVar4 + -0x28);
          }
          lVar23 = auVar36._8_8_;
          pplVar4 = (long **)(puVar3 + -0x20);
          *(long **)(puVar3 + -0x20) = plVar10;
          *(long *)(puVar3 + -0x18) = lVar18;
          *(undefined1 **)(puVar3 + -0x10) = puVar27;
          *(undefined **)(puVar3 + -8) = puVar31;
          pplVar29 = (long **)(puVar3 + -0x10);
          auVar38._8_8_ = 4;
          auVar38._0_8_ = auVar36._0_8_;
          uVar11 = 0;
          puVar31 = &UNK_0150bd10;
        } while( true );
      }
    }
  }
  unaff_x30 = Atlas_UI_Screens_CharacterSelectScreen__PlayCharacterVO;
  auVar38 = func_0x00f78af4();
  lVar23 = auVar38._8_8_;
  param_1 = auVar38._0_8_;
  pplVar4 = &plStack_80;
code_r0x0154485c:
  do {
    *(long **)((long)pplVar4 + -0x30) = unaff_x22;
    *(long *)((long)pplVar4 + -0x28) = unaff_x21;
    *(undefined1 (*) [16])((long)pplVar4 + -0x20) = auVar37;
    *(undefined8 ********)((long)pplVar4 + -0x10) = unaff_x29;
    *(code **)((long)pplVar4 + -8) = unaff_x30;
    unaff_x29 = (undefined8 *******)((long)pplVar4 + -0x10);
    unaff_x21 = 0x3eb4000;
    if ((bRam0000000003eb4f58 & 1) == 0) {
      func_0x00f78a20(0x3d57270);
      func_0x00f78a20(0x3d574f0);
      func_0x00f78a20(0x3d23990);
      bRam0000000003eb4f58 = 1;
    }
    *(undefined8 *)((long)pplVar4 + -0x38) = 0;
    if ((param_1[0x10] != 0) && (lVar13 = *(long *)(param_1[0x10] + 0x10), lVar13 != 0)) {
      uVar17 = uRam0000000003d574f0;
      plVar22 = (long *)/*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(lVar13,lVar23,(undefined1 *)((long)pplVar4 + -0x38));
      if ((int)plVar22 == 0) {
        return plVar22;
      }
      if (*(long *)((long)pplVar4 + -0x38) != 0) {
        uVar12 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(*(undefined8 *)(*(long *)((long)pplVar4 + -0x38) + 0x70),0);
        if ((uVar12 & 1) == 0) {
          if (((param_1[0x10] == 0) || (*(long *)((long)pplVar4 + -0x38) == 0)) ||
             (lVar13 = *(long *)(param_1[0x10] + 0x10), lVar13 == 0)) goto LAB_01544998;
          lVar23 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar13,*(undefined8 *)(*(long *)((long)pplVar4 + -0x38) + 0x70),
                                   uRam0000000003d57270);
        }
        else {
          lVar23 = *(long *)((long)pplVar4 + -0x38);
        }
        unaff_x21 = param_1[0x17];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        plVar22 = (long *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar23,unaff_x21,0);
        if ((int)plVar22 == 0) {
          return plVar22;
        }
        param_1[0x17] = lVar23;
        lVar13 = *(long *)((long)pplVar4 + -0x38);
        if (lVar13 != 0) {
          plVar22 = (long *)/*Atlas.Audio.UIAudio$$SetSelectedCharacter*/ func_0x01516b9c(*(undefined8 *)(lVar13 + 0x18),
                                            *(undefined4 *)(lVar13 + 0xa8),0);
          return plVar22;
        }
      }
    }
LAB_01544998:
    auVar37._8_8_ = param_1;
    auVar37._0_8_ = lVar23;
    unaff_x30 = Atlas_UI_Screens_CharacterSelectScreen__KartPartLoaded;
    auVar38 = func_0x00f78af4();
    lVar23 = auVar38._8_8_;
    param_1 = auVar38._0_8_;
    pplVar4 = (long **)((long)pplVar4 + -0x40);
    if ((int)uVar17 != 1) {
      return param_1;
    }
  } while( true );
code_r0x01545024:
  /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_110,uRam0000000003d32290);
  do {
    plVar22 = *(long **)(lVar13 + 0xc0);
    if (plVar22 != (long *)0x0) {
      lVar18 = *(long *)(lVar13 + 0x78);
      plVar22 = (long *)(**(code **)(*plVar22 + 0x178))(plVar22,*(undefined8 *)(*plVar22 + 0x180));
      if ((plVar22 != (long *)0x0) &&
         (uVar11 = (**(code **)(*plVar22 + 0x178))(plVar22,*(undefined8 *)(*plVar22 + 0x180)),
         lVar18 != 0)) {
        uVar12 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar18,uVar11,0);
        if ((uVar12 & 1) == 0) {
          if ((*(long *)(lVar13 + 0xe0) != 0) &&
             (lVar18 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar13 + 0xe0),lVar23,*unaff_x26), lVar18 != 0)) {
            if (*(int *)(lVar18 + 0x18) == 0) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + 0x20);
            if (lVar18 != 0) {
              Atlas_UI_Screens_CharacterSelectScreen__SetSelected
                        (lVar13,*(undefined8 *)(lVar18 + 0x48),1);
              lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar13,uRam0000000003d40fe8);
              if ((lVar18 != 0) && (*(long *)(lVar13 + 0xe0) != 0)) {
                lVar19 = *(long *)(lVar18 + 200);
                lVar18 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(*(long *)(lVar13 + 0xe0),lVar23,*unaff_x26);
                if (lVar18 != 0) {
                  if (*(int *)(lVar18 + 0x18) == 0) {
                    /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  }
                  lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + 0x20);
                  if (((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x48), lVar18 != 0)) &&
                     (uVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar18,0), lVar19 != 0)) {
                    /*Atlas.UI.TabController$$SetSelectedGameObjectInTab*/ func_0x01508ae0(lVar19,lVar23,uVar11,0);
                    goto code_r0x01545138;
                  }
                }
              }
            }
          }
        }
        else {
code_r0x01545138:
          if (lVar23 != 0) {
            lVar23 = *(long *)(lVar23 + 0x10);
            if (((*(ushort *)(*plVar9 + 0x132) >> 10 & 1) != 0) && (*(int *)(*plVar9 + 0xe0) == 0))
            {
              func_0x00f78ad0();
            }
            if (lVar23 != 0) {
              /*Atlas.UI.UIAtlasButton$$SetTrigger*/ func_0x015159e4(lVar23,*(undefined4 *)(*(long *)(*plVar9 + 0xb8) + 0x18),0);
              plVar22 = (long *)Atlas_UI_Screens_CharacterSelectScreen__PlayCurrentTabAnimations
                                          (lVar13);
              return plVar22;
            }
          }
        }
      }
    }
LAB_015451d4:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x01545258;
    plVar22 = (long *)___cxa_begin_catch();
    lVar18 = *plVar22;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_110,*unaff_x27);
  } while (lVar18 == 0);
  func_0x00f78ac0(lVar18,0);
code_r0x01545258:
  uVar11 = __Unwind_Resume();
  if ((bRam0000000003eb4f5d & 1) == 0) {
    func_0x00f78a20(0x3d40fe8);
    bRam0000000003eb4f5d = 1;
  }
  lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d40fe8);
  if ((lVar23 != 0) && (plVar22 = *(long **)(lVar23 + 0x80), plVar22 != (long *)0x0)) {
    lVar23 = (**(code **)(*plVar22 + 0x178))(plVar22,*(undefined8 *)(*plVar22 + 0x180));
    plVar22 = (long *)0x0;
    if (lVar23 != 0) {
      lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d40fe8);
      if (((lVar23 == 0) || (plVar22 = *(long **)(lVar23 + 0x80), plVar22 == (long *)0x0)) ||
         (lVar23 = (**(code **)(*plVar22 + 0x178))(plVar22,*(undefined8 *)(*plVar22 + 0x180)),
         lVar23 == 0)) goto LAB_01545304;
      uVar7 = /*Atlas.UI.LoadoutMetagameData$$get_IsLocked*/ func_0x014881dc(lVar23,0);
      plVar22 = (long *)(ulong)(uVar7 ^ 1);
    }
    return plVar22;
  }
LAB_01545304:
  lVar23 = func_0x00f78af4();
  if ((bRam0000000003eb4f5e & 1) == 0) {
    func_0x00f78a20(0x3d2c6c0);
    func_0x00f78a20(0x3d30290);
    func_0x00f78a20(0x3d2e240);
    func_0x00f78a20(0x3d30660);
    func_0x00f78a20(0x3d1c5e8);
    func_0x00f78a20(0x3d1c678);
    func_0x00f78a20(0x3d1c1b8);
    func_0x00f78a20(0x3d240a8);
    bRam0000000003eb4f5e = 1;
  }
  uVar11 = func_0x00f78aec(/*System.Random_TypeInfo*/ uRam0000000003d240a8);
  /*System.Random$$.ctor*/ func_0x0297f008(uVar11,0);
  *(undefined8 *)(lVar23 + 0xa8) = uVar11;
  uVar11 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<DefinitionID, List<CharacterMetagameData>>_TypeInfo*/ uRam0000000003d1c1b8);
  /*System.Collections.Generic.Dictionary<DefinitionID, WheelsMetagameData>$$.ctor*/ func_0x01e3bb54(uVar11,uRam0000000003d2e240);
  *(undefined8 *)(lVar23 + 0xd8) = uVar11;
  uVar11 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>_TypeInfo*/ uRam0000000003d1c678);
  /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar11,uRam0000000003d30660);
  *(undefined8 *)(lVar23 + 0xe0) = uVar11;
  uVar11 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<UIAtlasButton, int>_TypeInfo*/ uRam0000000003d1c5e8);
  /*System.Collections.Generic.Dictionary<XmlQualifiedName, int>$$.ctor*/ func_0x01ece19c(uVar11,uRam0000000003d30290);
  *(undefined8 *)(lVar23 + 0x100) = uVar11;
  if (lVar23 == 0) {
    auVar37 = func_0x00f78af4();
    plVar9 = auVar37._8_8_;
    plVar22 = auVar37._0_8_;
    lVar13 = plVar9[1];
    lVar23 = *plVar9;
    plVar22[2] = plVar9[2];
    plVar22[1] = lVar13;
    *plVar22 = lVar23;
    return plVar22;
  }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar22 = (long *)(*(code *)**(undefined8 **)
                                (*(long *)(*(long *)(lRam0000000003d2c6c0 + 0x18) + 0xc0) + 0x38))()
  ;
  return plVar22;
}



// ============================================================
// RVA: 0x154553c | Atlas.UI.Screens.CharacterSelectScreen.<OnBeforeEnter>b__24_2
// ============================================================

void Atlas_UI_Screens_CharacterSelectScreen___OnBeforeEnter_b__24_2(undefined8 param_1)

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
  
  if ((bRam0000000003eb4f60 & 1) == 0) {
    func_0x00f78a20(0x3d40ff0);
    bRam0000000003eb4f60 = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d40ff0);
  if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0)) {
    func_0x00f78af4();
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
      goto code_r0x01549e70;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
          uVar7 = extraout_x1_01;
          goto code_r0x01549e7c;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar6 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x01549f40;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x01549f40:
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
                goto code_r0x01549f18;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x01549f18:
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
code_r0x01549e70:
      (*pcVar13)(plVar1,lVar9);
      uVar7 = extraout_x1_00;
    }
code_r0x01549e7c:
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar14) {
      return;
    }
  } while( true );
}



