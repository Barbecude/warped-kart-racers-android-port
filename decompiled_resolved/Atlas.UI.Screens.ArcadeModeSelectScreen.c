// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.ArcadeModeSelectScreen

// ============================================================
// RVA: 0x1453a40 | Atlas.UI.Screens.ArcadeModeSelectScreen.OnBeforeEnter
// ============================================================

void Atlas_UI_Screens_ArcadeModeSelectScreen__OnBeforeEnter(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb478c & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d1fc80);
    func_0x00f78a20(0x3d1fca8);
    func_0x00f78a20(0x3d436e8);
    func_0x00f78a20(0x3d1fcb0);
    func_0x00f78a20(0x3d2c6a0);
    func_0x00f78a20(0x3d2c6a8);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2dc18);
    func_0x00f78a20(0x3d2e480);
    func_0x00f78a20(0x3d2e468);
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57248);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d57288);
    func_0x00f78a20(0x3d572d8);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d231f8);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d62030);
    func_0x00f78a20(0x3d62038);
    func_0x00f78a20(0x3d62040);
    func_0x00f78a20(0x3d62048);
    func_0x00f78a20(0x3d268e0);
    func_0x00f78a20(0x3d40fb8);
    func_0x00f78a20(0x3d40fc0);
    func_0x00f78a20(0x3d40fc8);
    func_0x00f78a20(0x3d69090);
    func_0x00f78a20(0x3d71920);
    func_0x00f78a20(0x3d69088);
    func_0x00f78a20(0x3d69080);
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb478c = 1;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fc8);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar3 + 0x20);
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fc8);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar3 + 0x88);
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fc8);
      if (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 0xb8);
        uVar4 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
        /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(uVar4,param_1,uRam0000000003d436e8,0);
        if (lVar3 != 0) {
          /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar3,6,uVar4,0);
          if (*(long *)(param_1 + 0x70) != 0) {
            lVar10 = *(long *)(*(long *)(param_1 + 0x70) + 0x10);
            lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d40fc0);
            if ((lVar3 != 0) && (lVar10 != 0)) {
              lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar10,*(undefined8 *)(lVar3 + 0x20),uRam0000000003d572d8);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              iVar2 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(lVar3,0);
              if (iVar2 != 0) {
                lVar10 = func_0x00f78aec(/*Atlas.UI.Screens.ArcadeModeSelectScreen.<>c__DisplayClass8_0_TypeInfo*/ uRam0000000003d268e0);
                /*Atlas.UI.Screens.ArcadeModeSelectScreen.<>c__DisplayClass8_0$$.ctor*/ func_0x01534a9c(lVar10,0);
                if (lVar10 == 0) goto LAB_01454478;
                *(long *)(lVar10 + 0x20) = param_1;
                lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fc8);
                if (lVar5 == 0) goto LAB_01454478;
                uVar11 = *(undefined8 *)(lVar5 + 0x88);
                uVar4 = func_0x00f78aec(/*Atlas.UI.MapMetagameData_TypeInfo*/ uRam0000000003d231f8);
                /*Atlas.UI.MapMetagameData$$.ctor*/ func_0x0148d608(uVar4,lVar3,uVar11,0,0);
                lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fb8);
                if ((lVar5 == 0) || (plVar6 = *(long **)(lVar5 + 0x68), plVar6 == (long *)0x0))
                goto LAB_01454478;
                (**(code **)(*plVar6 + 0x188))(plVar6,uVar4,*(undefined8 *)(*plVar6 + 400));
                if (lVar3 == 0) goto LAB_01454478;
                puVar7 = (undefined8 *)/*Atlas.Definitions.MapDefinition$$get_GameContextDefinitionDefinitionRef*/ func_0x0148d584(lVar3,0);
                uVar4 = *puVar7;
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('RaceGameContext')*/ uRam0000000003d71920,0);
                iVar2 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar4,uVar11,0);
                lVar5 = *(long *)(param_1 + 0x70);
                if (iVar2 == 0) {
                  if (lVar5 == 0) goto LAB_01454478;
                  lVar5 = *(long *)(lVar5 + 0x10);
                  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('BattleGameContext')*/ uRam0000000003d69658,0);
                  if (lVar5 == 0) goto LAB_01454478;
                  /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,uVar4,uRam0000000003d57288);
                  if (*(long *)(param_1 + 0x70) == 0) goto LAB_01454478;
                  lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0x10);
                  puVar7 = (undefined8 *)0x3d69088;
                }
                else {
                  if (lVar5 == 0) goto LAB_01454478;
                  lVar5 = *(long *)(lVar5 + 0x10);
                  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('RaceGameContext')*/ uRam0000000003d71920,0);
                  if (lVar5 == 0) goto LAB_01454478;
                  /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,uVar4,uRam0000000003d57288);
                  if (*(long *)(param_1 + 0x70) == 0) goto LAB_01454478;
                  lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0x10);
                  puVar7 = (undefined8 *)0x3d69090;
                }
                uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(*puVar7,0);
                if (lVar5 == 0) goto LAB_01454478;
                uVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,uVar4,uRam0000000003d57248);
                *(undefined8 *)(lVar10 + 0x10) = uVar4;
                uVar11 = *(undefined8 *)(param_1 + 0x78);
                lVar5 = func_0x00f78aec(/*Atlas.UI.ArcadeModeMetagameData_TypeInfo*/ uRam0000000003d1fca8);
                /*Atlas.UI.MetagameData$$.ctor*/ func_0x0148d648(lVar5,0);
                *(undefined8 *)(lVar5 + 0x10) = uVar4;
                *(undefined8 *)(lVar5 + 0x18) = uVar11;
                lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fb8);
                if ((lVar8 == 0) || (plVar6 = *(long **)(lVar8 + 0x70), plVar6 == (long *)0x0))
                goto LAB_01454478;
                (**(code **)(*plVar6 + 0x188))(plVar6,lVar5,*(undefined8 *)(*plVar6 + 400));
                lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fb8);
                if ((lVar8 == 0) || (*(long *)(lVar8 + 0x70) == 0)) goto LAB_01454478;
                lVar8 = *(long *)(*(long *)(lVar8 + 0x70) + 0x38);
                uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                /*System.Action$$.ctor*/ func_0x02924c80(uVar4,lVar10,uRam0000000003d62030,0);
                if (lVar8 == 0) goto LAB_01454478;
                /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar8,uVar4,0);
                lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fb8);
                if ((lVar8 == 0) || (*(long *)(lVar8 + 0x70) == 0)) goto LAB_01454478;
                lVar8 = *(long *)(*(long *)(lVar8 + 0x70) + 0x38);
                uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                /*System.Action$$.ctor*/ func_0x02924c80(uVar4,lVar10,uRam0000000003d62038,0);
                if (lVar8 == 0) goto LAB_01454478;
                /*Atlas.UI.UIAtlasButton$$add_Selected*/ func_0x015141a0(lVar8,uVar4,0);
                if ((*(long *)(lVar10 + 0x10) == 0) || (*(long *)(param_1 + 0x88) == 0))
                goto LAB_01454478;
                /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(*(long *)(param_1 + 0x88),
                                *(undefined4 *)(*(long *)(lVar10 + 0x10) + 0x28),lVar5,
                                uRam0000000003d2e480);
                if (*(long *)(param_1 + 0x70) == 0) goto LAB_01454478;
                lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0x10);
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('ArcadeMode_Collector')*/ uRam0000000003d69080,0);
                if (lVar5 == 0) goto LAB_01454478;
                uVar4 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,uVar4,uRam0000000003d57248);
                *(undefined8 *)(lVar10 + 0x18) = uVar4;
                uVar11 = *(undefined8 *)(param_1 + 0x78);
                lVar5 = func_0x00f78aec(/*Atlas.UI.ArcadeModeMetagameData_TypeInfo*/ uRam0000000003d1fca8);
                /*Atlas.UI.MetagameData$$.ctor*/ func_0x0148d648(lVar5,0);
                *(undefined8 *)(lVar5 + 0x10) = uVar4;
                *(undefined8 *)(lVar5 + 0x18) = uVar11;
                lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fb8);
                if ((lVar8 == 0) || (plVar6 = *(long **)(lVar8 + 0x78), plVar6 == (long *)0x0))
                goto LAB_01454478;
                (**(code **)(*plVar6 + 0x188))(plVar6,lVar5,*(undefined8 *)(*plVar6 + 400));
                lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fb8);
                if ((lVar8 == 0) || (*(long *)(lVar8 + 0x78) == 0)) goto LAB_01454478;
                lVar8 = *(long *)(*(long *)(lVar8 + 0x78) + 0x38);
                uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                /*System.Action$$.ctor*/ func_0x02924c80(uVar4,lVar10,uRam0000000003d62040,0);
                if (lVar8 == 0) goto LAB_01454478;
                /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar8,uVar4,0);
                lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fb8);
                if ((lVar8 == 0) || (*(long *)(lVar8 + 0x78) == 0)) goto LAB_01454478;
                lVar8 = *(long *)(*(long *)(lVar8 + 0x78) + 0x38);
                uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                /*System.Action$$.ctor*/ func_0x02924c80(uVar4,lVar10,uRam0000000003d62048,0);
                if (lVar8 == 0) goto LAB_01454478;
                /*Atlas.UI.UIAtlasButton$$add_Selected*/ func_0x015141a0(lVar8,uVar4,0);
                if ((*(long *)(lVar10 + 0x18) == 0) || (*(long *)(param_1 + 0x88) == 0))
                goto LAB_01454478;
                /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(*(long *)(param_1 + 0x88),
                                *(undefined4 *)(*(long *)(lVar10 + 0x18) + 0x28),lVar5,
                                uRam0000000003d2e480);
                if ((*(long *)(lVar10 + 0x10) == 0) || (*(long *)(param_1 + 0x70) == 0))
                goto LAB_01454478;
                uVar4 = /*Atlas.Definitions.AtlasDefinitions$$GetArcadeEvent*/ func_0x0146914c(*(long *)(param_1 + 0x70),*(undefined8 *)(lVar3 + 0x18),
                                        *(undefined4 *)(*(long *)(lVar10 + 0x10) + 0x28),0);
                lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fc8);
                if (lVar5 == 0) goto LAB_01454478;
                uVar11 = *(undefined8 *)(lVar5 + 0x48);
                lVar5 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
                /*Atlas.UI.MetagameData$$.ctor*/ func_0x0148d648(lVar5,0);
                *(undefined8 *)(lVar5 + 0x10) = uVar4;
                *(undefined8 *)(lVar5 + 0x18) = uVar11;
                if ((*(long *)(lVar10 + 0x10) == 0) || (*(long *)(param_1 + 0x80) == 0))
                goto LAB_01454478;
                /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(*(long *)(param_1 + 0x80),
                                *(undefined4 *)(*(long *)(lVar10 + 0x10) + 0x28),lVar5,
                                uRam0000000003d2e468);
                lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fb8);
                if ((lVar10 == 0) || (*(long *)(lVar10 + 0x70) == 0)) goto LAB_01454478;
                /*Atlas.UI.Screens.AtlasScreen<TopBarScreenBehaviour, TopBarScreen.TransitionData>$$ReLayoutLayoutAndContentSizeFitters*/ func_0x01cb529c(param_1,*(undefined8 *)(*(long *)(lVar10 + 0x70) + 0x30),
                                uRam0000000003d2c6a0);
                if (*(long *)(param_1 + 0x70) == 0) goto LAB_01454478;
                uVar4 = /*Atlas.Definitions.AtlasDefinitions$$GetArcadeEvent*/ func_0x0146914c(*(long *)(param_1 + 0x70),*(undefined8 *)(lVar3 + 0x18),7,0)
                ;
                lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fc8);
                if (lVar3 == 0) goto LAB_01454478;
                uVar11 = *(undefined8 *)(lVar3 + 0x48);
                lVar3 = func_0x00f78aec(/*Atlas.UI.ArcadeEventMetagameData_TypeInfo*/ uRam0000000003d1fc80);
                /*Atlas.UI.MetagameData$$.ctor*/ func_0x0148d648(lVar3,0);
                *(undefined8 *)(lVar3 + 0x10) = uVar4;
                *(undefined8 *)(lVar3 + 0x18) = uVar11;
                if (*(long *)(param_1 + 0x80) == 0) goto LAB_01454478;
                /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$Add*/ func_0x01ea71ac(*(long *)(param_1 + 0x80),7,lVar3,uRam0000000003d2e468);
                lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fb8);
                if ((lVar3 == 0) || (*(long *)(lVar3 + 0x78) == 0)) goto LAB_01454478;
                /*Atlas.UI.Screens.AtlasScreen<TopBarScreenBehaviour, TopBarScreen.TransitionData>$$ReLayoutLayoutAndContentSizeFitters*/ func_0x01cb529c(param_1,*(undefined8 *)(*(long *)(lVar3 + 0x78) + 0x30),
                                uRam0000000003d2c6a0);
              }
              lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fb8);
              if (((lVar3 != 0) && (*(long *)(lVar3 + 0x70) != 0)) &&
                 (lVar3 = *(long *)(*(long *)(lVar3 + 0x70) + 0x38), lVar3 != 0)) {
                /*Atlas.UI.UIAtlasButton$$SelectButton*/ func_0x01514808(lVar3,0,0,0,0);
                /*Atlas.UI.UIAtlasButton$$PressButton*/ func_0x01514bcc(lVar3,0,0,0);
                /*Atlas.UI.Screens.AtlasScreen<SettingsScreenBehaviour, SettingsScreen.TransitionData>$$SelectComponent*/ func_0x01cb5640(param_1,lVar3,uRam0000000003d2c6a8);
                lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fc8);
                if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
                  lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10);
                  if (((*(ushort *)(/*Atlas.UI.Screens.ArcadeModeSelectScreen_TypeInfo*/ lRam0000000003d1fcb0 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Atlas.UI.Screens.ArcadeModeSelectScreen_TypeInfo*/ lRam0000000003d1fcb0 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  if (lVar3 != 0) {
                    lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,**(undefined8 **)(/*Atlas.UI.Screens.ArcadeModeSelectScreen_TypeInfo*/ lRam0000000003d1fcb0 + 0xb8),
                                            uRam0000000003d57280);
                    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fc8);
                    if ((lVar10 != 0) && (*(long *)(lVar10 + 0xb0) != 0)) {
                      iVar2 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                                        (*(long *)(lVar10 + 0xb0),lVar3,0);
                      if (iVar2 != 0) {
                        if ((lVar3 == 0) || (*(long *)(lVar3 + 0x58) == 0)) goto LAB_01454478;
                        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_78,*(long *)(lVar3 + 0x58),uRam0000000003d3dc70);
                        while (uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_78,uRam0000000003d337d0),
                              uVar4 = uStack_68, (uVar9 & 1) != 0) {
                          lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d40fc8);
                          if (lVar3 == 0) goto code_r0x0145447c;
                          if (*(long *)(lVar3 + 0x98) == 0) {
                            func_0x00f78af4();
                            goto code_r0x01454488;
                          }
                          /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar3 + 0x98),uVar4,uRam0000000003d3e188);
                        }
                        /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_78,uRam0000000003d337c8);
                      }
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
LAB_01454478:
  func_0x00f78af4();
code_r0x0145447c:
  func_0x00f78af4();
code_r0x01454488:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x145448c);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x14544d8 | Atlas.UI.Screens.ArcadeModeSelectScreen.OnArcadeModeSelected
// ============================================================

void Atlas_UI_Screens_ArcadeModeSelectScreen__OnArcadeModeSelected(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb478d & 1) == 0) {
    func_0x00f78a20(0x3d2e488);
    func_0x00f78a20(0x3d2e470);
    func_0x00f78a20(0x3d40fb8);
    func_0x00f78a20(0x3d40fc0);
    bRam0000000003eb478d = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d40fc0);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x18) != 0) {
      /*Atlas.UI.Screens.ArcadeModeSelectScreen.ArcadeModeSelected$$Invoke*/ func_0x01534b64(*(long *)(lVar1 + 0x18),param_2,0);
    }
    lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fb8);
    if ((lVar1 != 0) && (*(long *)(param_1 + 0x80) != 0)) {
      plVar5 = *(long **)(lVar1 + 0x88);
      uVar2 = /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$get_Item*/ func_0x01ea70e4(*(long *)(param_1 + 0x80),param_2,uRam0000000003d2e470);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x188))(plVar5,uVar2,*(undefined8 *)(*plVar5 + 400));
        lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d40fb8);
        if ((lVar1 != 0) && (*(long *)(param_1 + 0x88) != 0)) {
          plVar5 = *(long **)(lVar1 + 0x90);
          uVar2 = /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$get_Item*/ func_0x01ea70e4(*(long *)(param_1 + 0x88),param_2,uRam0000000003d2e488);
          if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01454608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar5 + 0x188))(plVar5,uVar2,*(undefined8 *)(*plVar5 + 400));
            return;
          }
        }
      }
    }
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb478e & 1) == 0) {
    func_0x00f78a20(0x3d2c698);
    func_0x00f78a20(0x3d2e478);
    func_0x00f78a20(0x3d2e460);
    func_0x00f78a20(0x3d1c220);
    func_0x00f78a20(0x3d1c228);
    bRam0000000003eb478e = 1;
  }
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, ArcadeEventMetagameData>_TypeInfo*/ uRam0000000003d1c220);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar2,uRam0000000003d2e460);
  *(undefined8 *)(lVar1 + 0x80) = uVar2;
  uVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, ArcadeModeMetagameData>_TypeInfo*/ uRam0000000003d1c228);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar2,uRam0000000003d2e478);
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c698 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar7 = func_0x00f78af4();
  puVar4 = auVar7._8_8_;
  puVar3 = auVar7._0_8_;
  uVar6 = puVar4[1];
  uVar2 = *puVar4;
  puVar3[2] = puVar4[2];
  puVar3[1] = uVar6;
  *puVar3 = uVar2;
  return;
}



// ============================================================
// RVA: 0x1454610 | Atlas.UI.Screens.ArcadeModeSelectScreen..ctor
// ============================================================

void Atlas_UI_Screens_ArcadeModeSelectScreen___ctor(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb478e & 1) == 0) {
    func_0x00f78a20(0x3d2c698);
    func_0x00f78a20(0x3d2e478);
    func_0x00f78a20(0x3d2e460);
    func_0x00f78a20(0x3d1c220);
    func_0x00f78a20(0x3d1c228);
    bRam0000000003eb478e = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, ArcadeEventMetagameData>_TypeInfo*/ uRam0000000003d1c220);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar1,uRam0000000003d2e460);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<GameType, ArcadeModeMetagameData>_TypeInfo*/ uRam0000000003d1c228);
  /*System.Collections.Generic.Dictionary<WeaponAudio.WeaponType, string>$$.ctor*/ func_0x01ea6c78(uVar1,uRam0000000003d2e478);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c698 + 0x18) + 0xc0) + 0x38))();
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
// RVA: 0x14546f4 | Atlas.UI.Screens.ArcadeModeSelectScreen..cctor
// ============================================================

void Atlas_UI_Screens_ArcadeModeSelectScreen___cctor(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000003eb478f & 1) == 0) {
    func_0x00f78a20(0x3d1fcb0);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d6cb88);
    bRam0000000003eb478f = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_25_ArcadeModeSelect')*/ uRam0000000003d6cb88,0);
  **(undefined8 **)(/*Atlas.UI.Screens.ArcadeModeSelectScreen_TypeInfo*/ lRam0000000003d1fcb0 + 0xb8) = uVar1;
  return;
}



// ============================================================
// RVA: 0x1454794 | Atlas.UI.Screens.ArcadeModeSelectScreen.<OnBeforeEnter>b__8_0
// ============================================================

undefined8 Atlas_UI_Screens_ArcadeModeSelectScreen___OnBeforeEnter_b__8_0(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000003eb4790 & 1) == 0) {
    func_0x00f78a20(0x3d40fc0);
    bRam0000000003eb4790 = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d40fc0);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x10) != 0) {
      /*Atlas.UI.Screens.ArcadeModeSelectScreen.ContinuePressed$$Invoke*/ func_0x01534e80(*(long *)(lVar1 + 0x10),0);
    }
    return 1;
  }
  lVar1 = func_0x00f78af4();
  return *(undefined8 *)(lVar1 + 0x68);
}



