// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.PostArcadeScreen

// ============================================================
// RVA: 0x14c4890 | Atlas.UI.Screens.PostArcadeScreen.OnBeforeEnter
// ============================================================

void Atlas_UI_Screens_PostArcadeScreen__OnBeforeEnter(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  int extraout_w8;
  undefined1 uVar13;
  undefined1 *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  ulong unaff_x23;
  dword *unaff_x24;
  dword *pdVar20;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 in_s3;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 auStack_90 [2];
  
  plVar16 = (long *)0x3eb4000;
  plVar17 = (long *)0x3d41238;
  if ((bRam0000000003eb4b32 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d1ff30);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2db98);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d32150);
    func_0x00f78a20(0x3d32158);
    func_0x00f78a20(0x3d32160);
    func_0x00f78a20(0x3d56da8);
    func_0x00f78a20(0x3d57528);
    func_0x00f78a20(0x3d574e0);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d39d18);
    func_0x00f78a20(0x3d39d20);
    func_0x00f78a20(0x3d39d10);
    func_0x00f78a20(0x3d39d28);
    func_0x00f78a20(0x3d1d7c8);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d26888);
    func_0x00f78a20(0x3d5bae8);
    func_0x00f78a20(0x3d5baf8);
    func_0x00f78a20(0x3d25458);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41240);
    func_0x00f78a20(0x3d41248);
    func_0x00f78a20(0x3d7cd68);
    func_0x00f78a20(0x3d69068);
    func_0x00f78a20(0x3d6d050);
    func_0x00f78a20(0x3d79080);
    func_0x00f78a20(0x3d79088);
    func_0x00f78a20(0x3d79078);
    bRam0000000003eb4b32 = 1;
  }
  auStack_90[0] = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lStack_b0 = 0;
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
  plVar18 = (long *)0x3d41238;
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x118) != 0)) {
    /*UnityEngine.CanvasGroup$$set_alpha*/ func_0x032f44fc(0,*(long *)(lVar7 + 0x118),0);
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
    plVar18 = plVar17;
    if (lVar7 != 0) {
      plVar16 = *(long **)(lVar7 + 0x20);
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
      if (lVar7 != 0) {
        uVar5 = /*Atlas.Helpers.ArcadeHelper$$GetTotalPossibleMedalCount*/ func_0x0144fb24(plVar16,*(undefined8 *)(lVar7 + 0x48),0);
        *(undefined4 *)(param_1 + 0xc0) = uVar5;
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x50) != 0)) {
          *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(*(long *)(lVar7 + 0x50) + 0x68);
          lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
          if (lVar7 != 0) {
            plVar16 = *(long **)(lVar7 + 0x20);
            lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
            if (lVar7 != 0) {
              /*Atlas.Helpers.ArcadeHelper$$GetCurrentRank*/ func_0x014500ac(plVar16,*(undefined8 *)(lVar7 + 0x48),0);
              lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
              if (((lVar7 != 0) && (*(long *)(lVar7 + 0x20) != 0)) &&
                 (lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 0x10), lVar7 != 0)) {
                /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(lVar7,auStack_90,uRam0000000003d57528);
                lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
                if ((lVar7 != 0) && (*(long *)(lVar7 + 0x20) != 0)) {
                  plVar18 = (long *)0x3d69068;
                  plVar16 = *(long **)(*(long *)(lVar7 + 0x20) + 0x10);
                  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('Arcade')*/ uRam0000000003d69068,0);
                  if (plVar16 != (long *)0x0) {
                    /*Core.Definitions.GameDefinitions$$TryGetDefinition<object>*/ func_0x0185cc1c(plVar16,uVar8,&uStack_98,uRam0000000003d574e0);
                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
                    if (lVar7 != 0) {
                      plVar16 = *(long **)(lVar7 + 0x50);
                      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41240);
                      if ((lVar7 != 0) && (plVar16 != (long *)0x0)) {
                        /*Atlas.Stats.UnlockManager$$GetArcadeMedalFromHistory*/ func_0x01521ca8(plVar16,*(undefined8 *)(lVar7 + 0x60),0);
                        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
                        if (lVar7 != 0) {
                          plVar16 = *(long **)(lVar7 + 0x20);
                          lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
                          if (lVar7 != 0) {
                            uVar5 = /*Atlas.Helpers.ArcadeHelper$$GetCurrentRank*/ func_0x014500ac(plVar16,*(undefined8 *)(lVar7 + 0x48),0);
                            *(undefined4 *)(param_1 + 0xb0) = uVar5;
                            *(undefined4 *)(param_1 + 0xb8) = uVar5;
                            lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
                            if ((lVar7 != 0) && (*(long *)(lVar7 + 0x50) != 0)) {
                              plVar16 = *(long **)(*(long *)(lVar7 + 0x50) + 0x78);
                              if (plVar16 == (long *)0x0) {
                                unaff_x23 = 0;
                              }
                              else {
                                plVar17 = (long *)/*Atlas.UI.Screens.PostArcadeScreen$$CreateScreenData*/ func_0x014c58e4(param_1);
                                unaff_x23 = (ulong)(plVar16 != plVar17);
                              }
                              if (*(long *)(param_1 + 0xa0) != 0) {
                                if (1 < *(int *)(*(long *)(param_1 + 0xa0) + 0x18)) {
                                  plVar17 = (long *)0x3d25458;
                                  plVar1 = (long *)0x3d215e0;
                                  puVar2 = (undefined8 *)0x3d26888;
                                  plVar18 = (long *)0x3d69068;
                                  pdVar20 = &MACH_HEADER.cpusubtype;
                                  do {
                                    uVar8 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
                                    unaff_x24 = (dword *)((long)pdVar20 + 1);
                                    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0)
                                       && (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
                                      func_0x00f78ad0();
                                    }
                                    uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
                                    if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0)
                                       && (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
                                      func_0x00f78ad0();
                                    }
                                    plVar16 = (long *)/*System.Enum$$ToObject*/ func_0x02ac67ac(uVar8,(int)unaff_x24 + -8,0);
                                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
                                    unaff_x25 = (long *)0x3d1a510;
                                    unaff_x26 = puVar2;
                                    unaff_x27 = plVar17;
                                    unaff_x28 = plVar1;
                                    if (lVar7 == 0) goto LAB_014c5360;
                                    plVar18 = *(long **)(lVar7 + 0x20);
                                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
                                    if ((lVar7 == 0) ||
                                       (unaff_x25 = (long *)0x3d1a510,
                                       unaff_x26 = (undefined8 *)0x3d26888,
                                       unaff_x27 = (long *)0x3d25458, unaff_x28 = (long *)0x3d215e0,
                                       plVar16 == (long *)0x0)) goto LAB_014c5360;
                                    if (*(long *)(*plVar16 + 0x40) !=
                                        *(long *)(/*Atlas.Definitions.ArcadeEventDefinition.Medal_TypeInfo*/ lRam0000000003d26888 + 0x40))
                                    goto code_r0x014c5870;
                                    uVar8 = *(undefined8 *)(lVar7 + 0x48);
                                    puVar9 = (undefined4 *)func_0x00f78ae4(plVar16);
                                    iVar6 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(*puVar9,plVar18,uVar8,0);
                                    lVar7 = *(long *)(param_1 + 0xa0);
                                    if (lVar7 == 0) goto LAB_014c5360;
                                    if ((undefined1 *)(ulong)*(uint *)(lVar7 + 0x18) <=
                                        (undefined1 *)((long)pdVar20 + -7)) goto code_r0x014c5860;
                                    unaff_x23 = (ulong)((uint)(iVar6 != *(int *)(lVar7 + (long)
                                                  unaff_x24 * 4)) | (uint)unaff_x23);
                                    puVar14 = (undefined1 *)((long)pdVar20 + -6);
                                    unaff_x26 = puVar2;
                                    unaff_x27 = plVar17;
                                    unaff_x28 = plVar1;
                                    pdVar20 = unaff_x24;
                                  } while ((long)puVar14 < (long)(int)*(uint *)(lVar7 + 0x18));
                                }
                                plVar18 = (long *)0x3d1ff30;
                                unaff_x25 = (long *)0x3d79000;
                                uVar8 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
                                /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar8,/*STR('event:/UI/Front_End/RankUp1')*/ uRam0000000003d79078,0,0,0);
                                *(undefined8 *)(param_1 + 0x138) = uVar8;
                                uVar8 = func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
                                /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(uVar8,/*STR('event:/UI/Front_End/RankUp2')*/ uRam0000000003d79080,0,0,0);
                                *(undefined8 *)(param_1 + 0x140) = uVar8;
                                plVar16 = (long *)func_0x00f78aec(/*Core.Audio.AudioEvent_TypeInfo*/ uRam0000000003d1ff30);
                                /*Core.Audio.AudioEvent$$.ctor*/ func_0x01638690(plVar16,/*STR('event:/UI/Front_End/RankUp3')*/ uRam0000000003d79088,0,0,0);
                                *(long **)(param_1 + 0x148) = plVar16;
                                pdVar20 = (dword *)0x3d41248;
                                lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
                                unaff_x24 = (dword *)0x3d41248;
                                if (lVar7 != 0) {
                                  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar7 + 0x78);
                                  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
                                  unaff_x26 = (undefined8 *)0x3d41238;
                                  plVar18 = (long *)0x3d41240;
                                  if (lVar7 != 0) {
                                    plVar16 = *(long **)(lVar7 + 0x20);
                                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41240);
                                    unaff_x24 = pdVar20;
                                    if ((lVar7 != 0) && (plVar16 != (long *)0x0)) {
                                      uVar8 = /*Atlas.Definitions.AtlasDefinitions$$GetCharacterOwnerOrCharacterIfNone*/ func_0x01466574(plVar16,*(undefined8 *)(lVar7 + 0x10),
                                                              0);
                                      *(undefined8 *)(param_1 + 0x70) = uVar8;
                                      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
                                      if (lVar7 != 0) {
                                        *(undefined8 *)(param_1 + 0x78) =
                                             *(undefined8 *)(lVar7 + 0x100);
                                        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
                                        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)) {
                                          *(undefined4 *)(param_1 + 0x114) =
                                               *(undefined4 *)(*(long *)(lVar7 + 0x68) + 0x18);
                                          lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
                                          if ((lVar7 != 0) &&
                                             ((*(long *)(lVar7 + 0x18) != 0 &&
                                              (lVar7 = /*Core.Contexts.ContextManager$$GetContext<object>*/ func_0x0183a04c(*(long *)(lVar7 + 0x18),
                                                                       /*STR('FrontEndContext')*/ uRam0000000003d6d050,
                                                                       uRam0000000003d53980),
                                              lVar7 != 0)))) {
                                            plVar16 = *(long **)(lVar7 + 0x118);
                                            *(long **)(param_1 + 0x80) = plVar16;
                                            lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41240);
                                            if ((lVar7 != 0) && (plVar16 != (long *)0x0)) {
                                              uStack_f8 = *(undefined8 *)(lVar7 + 0x18);
                                              uStack_100 = *(undefined8 *)(lVar7 + 0x10);
                                              uStack_e8 = *(undefined8 *)(lVar7 + 0x28);
                                              uStack_f0 = *(undefined8 *)(lVar7 + 0x20);
                                              uStack_d8 = *(undefined8 *)(lVar7 + 0x38);
                                              uStack_e0 = *(undefined8 *)(lVar7 + 0x30);
                                              uStack_c8 = *(undefined8 *)(lVar7 + 0x48);
                                              uStack_d0 = *(undefined8 *)(lVar7 + 0x40);
                                              Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                                                        (plVar16,0,&uStack_100,0);
                                              if (*(long *)(param_1 + 0x80) != 0) {
                                                Atlas_FrontEnd_FrontEndScene__SetKartPose
                                                          (*(long *)(param_1 + 0x80),0,1,0,0,0,0,0);
                                                if ((*(long *)(param_1 + 0x80) != 0) &&
                                                   (lVar7 = 
                                                  Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator
                                                            (*(long *)(param_1 + 0x80),0,0),
                                                  lVar7 != 0)) {
                                                  Atlas_Gameplay_Kart_KartFEAnimator__PlayPostEventScreen
                                                            (lVar7,0);
                                                  if ((*(long *)(param_1 + 0x80) != 0) &&
                                                     (
                                                  Atlas_FrontEnd_FrontEndScene__TryGetSubsceneBehaviour_FrontEndSubsceneBehaviourBase_
                                                            (*(long *)(param_1 + 0x80),&lStack_a0,
                                                             uRam0000000003d56da8), lStack_a0 != 0))
                                                  {
                                                                                                        
                                                  Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__GetKartLocator
                                                            (lStack_a0,0,0);
                                                  if (*(long *)(param_1 + 0x80) != 0) {
                                                    plVar16 = (long *)
                                                  Atlas_FrontEnd_FrontEndScene__GetKartTransform
                                                            (*(long *)(param_1 + 0x80),0,0);
                                                  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,
                                                  uRam0000000003d41238);
                                                  if (lVar7 != 0) {
                                                    uVar5 = *(undefined4 *)(lVar7 + 0x120);
                                                    uVar24 = *(undefined4 *)(lVar7 + 0x124);
                                                    uVar25 = *(undefined4 *)(lVar7 + 0x128);
                                                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,
                                                  uRam0000000003d41238);
                                                  if (lVar7 != 0) {
                                                    uVar22 = *(undefined4 *)(lVar7 + 0x130);
                                                    uVar23 = *(undefined4 *)(lVar7 + 0x134);
                                                    uVar21 = /*UnityEngine.Quaternion$$Euler*/ func_0x03252154(*(undefined4 *)
                                                                              (lVar7 + 300),uVar22,
                                                                             uVar23,0);
                                                    if (plVar16 != (long *)0x0) {
                                                      /*UnityEngine.Transform$$SetPositionAndRotation*/ func_0x032760c8(uVar5,uVar24,uVar25,uVar21,
                                                                      uVar22,uVar23,in_s3,plVar16,0)
                                                      ;
                                                      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,
                                                  uRam0000000003d41248);
                                                  if ((lVar7 != 0) &&
                                                     (*(long *)(lVar7 + 0x100) != 0)) {
                                                    lVar7 = /*Atlas.Definitions.MetagameDefinition$$get_ArcadeDefinitionRef*/ func_0x014948e8(*(long *)(lVar7 + 0x100)
                                                                            ,0);
                                                    *(undefined8 *)(param_1 + 0xd0) =
                                                         *(undefined8 *)(lVar7 + 8);
                                                    if ((int)unaff_x23 == 0) {
                                                      /*Atlas.UI.Screens.PostArcadeScreen$$ExitPressed*/ func_0x014c59a0(param_1);
                                                      return;
                                                    }
                                                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,
                                                  uRam0000000003d41238);
                                                  if ((lVar7 != 0) &&
                                                     (*(long *)(lVar7 + 0x118) != 0)) {
                                                    /*UnityEngine.CanvasGroup$$set_alpha*/ func_0x032f44fc(0x3f800000,
                                                                    *(long *)(lVar7 + 0x118),0);
                                                    lVar7 = *(long *)(param_1 + 0xa0);
                                                    if (lVar7 != 0) {
                                                      plVar16 = (long *)0x0;
                                                      unaff_x27 = (long *)0x3d25458;
                                                      unaff_x25 = (long *)0x3d215e0;
                                                      unaff_x28 = (long *)0x3d26888;
                                                      while (uVar8 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,
                                                            (long)plVar16 <
                                                            (long)*(int *)(lVar7 + 0x18)) {
                                                        if (((*(ushort *)
                                                               (/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10
                                                             & 1) != 0) &&
                                                           (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) ==
                                                            0)) {
                                                          func_0x00f78ad0();
                                                        }
                                                        plVar18 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
                                                        if (((*(ushort *)
                                                               (/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10
                                                             & 1) != 0) &&
                                                           (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) ==
                                                            0)) {
                                                          func_0x00f78ad0();
                                                        }
                                                        plVar17 = (long *)/*System.Enum$$ToObject*/ func_0x02ac67ac(plVar18,
                                                  plVar16,0);
                                                  if (plVar17 == (long *)0x0) goto LAB_014c5360;
                                                  if (*(long *)(*plVar17 + 0x40) !=
                                                      *(long *)(/*Atlas.Definitions.ArcadeEventDefinition.Medal_TypeInfo*/ lRam0000000003d26888 + 0x40))
                                                  goto code_r0x014c586c;
                                                  puVar10 = (uint *)func_0x00f78ae4();
                                                  plVar18 = (long *)(ulong)*puVar10;
                                                  unaff_x23 = *(ulong *)(param_1 + 0xa8);
                                                  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,
                                                  uRam0000000003d41248);
                                                  if (lVar7 == 0) goto LAB_014c5360;
                                                  uVar8 = *(undefined8 *)(lVar7 + 0x20);
                                                  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,
                                                  uRam0000000003d41248);
                                                  if ((lVar7 == 0) ||
                                                     (uVar5 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(plVar18,uVar8,
                                                                              *(undefined8 *)
                                                                               (lVar7 + 0x48),0),
                                                     unaff_x23 == 0)) goto LAB_014c5360;
                                                  if ((long *)(ulong)*(uint *)(unaff_x23 + 0x18) <=
                                                      plVar16) goto code_r0x014c5860;
                                                  *(undefined4 *)
                                                   (unaff_x23 + (long)plVar16 * 4 + 0x20) = uVar5;
                                                  plVar16 = (long *)((long)plVar16 + 1);
                                                  lVar7 = *(long *)(param_1 + 0xa0);
                                                  if (lVar7 == 0) goto LAB_014c5360;
                                                  }
                                                  plVar18 = (long *)func_0x00f78aec(
                                                  /*System.Collections.Generic.List<ArcadeRewardsData>_TypeInfo*/ uRam0000000003d1d7c8);
                                                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(plVar18,uRam0000000003d39d10);
                                                  plVar16 = (long *)func_0x00f78aec(
                                                  /*System.Collections.Generic.List<ArcadeRewardsData>_TypeInfo*/ uRam0000000003d1d7c8);
                                                  uVar11 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(plVar16,
                                                  uRam0000000003d39d10);
                                                  unaff_x23 = *(ulong *)(param_1 + 0xd0);
                                                  if (unaff_x23 != 0) {
                                                    uVar19 = 0;
                                                    goto code_r0x014c5218;
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
        }
      }
    }
  }
LAB_014c5360:
  do {
    uVar11 = func_0x00f78af4();
    plVar17 = unaff_x25;
    puVar2 = unaff_x26;
    plVar1 = unaff_x27;
    plVar3 = unaff_x28;
    iVar6 = extraout_w8;
code_r0x014c5364:
    unaff_x28 = plVar3;
    unaff_x27 = plVar1;
    unaff_x26 = puVar2;
    unaff_x25 = plVar17;
  } while (plVar18 == (long *)0x0);
  if ((int)plVar18[3] < 1) {
    if (plVar16 == (long *)0x0) goto LAB_014c5360;
    if ((int)plVar16[3] < 1) {
      lVar7 = /*Atlas.Helpers.ArcadeUnlockHelper$$GetRewardData*/ func_0x014551d4(iVar6 + -1,unaff_x23,0);
    }
    else {
      iVar6 = 3;
      unaff_x23 = 0xb;
      do {
        uVar8 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
        lVar7 = *(long *)(param_1 + 0xa0);
        if (lVar7 == 0) goto LAB_014c5360;
        unaff_x24 = (dword *)(unaff_x23 - 8);
        if ((undefined1 *)(ulong)*(uint *)(lVar7 + 0x18) <= unaff_x24) goto code_r0x014c5860;
        lVar15 = *(long *)(param_1 + 0xa8);
        if (lVar15 == 0) goto LAB_014c5360;
        if ((undefined1 *)(ulong)*(uint *)(lVar15 + 0x18) <= unaff_x24) goto code_r0x014c5860;
        if (*(int *)(lVar7 + unaff_x23 * 4) != *(int *)(lVar15 + unaff_x23 * 4)) {
          if (((*(ushort *)(*unaff_x27 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(*unaff_x27 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar18 = (long *)/*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
          if (((*(ushort *)(*unaff_x25 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(*unaff_x25 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          plVar17 = (long *)/*System.Enum$$ToObject*/ func_0x02ac67ac(plVar18,(int)unaff_x23 + -8,0);
          if (plVar17 == (long *)0x0) goto LAB_014c5360;
          if (*(long *)(*plVar17 + 0x40) != *(long *)(*unaff_x28 + 0x40)) goto code_r0x014c586c;
          piVar12 = (int *)func_0x00f78ae4();
          iVar6 = *piVar12;
        }
        unaff_x23 = unaff_x23 - 1;
      } while ((undefined1 *)((long)&MACH_HEADER.magic + 1) < unaff_x24);
      plVar18 = (long *)func_0x00f78aec(/*System.Collections.Generic.List<ArcadeRewardsData>_TypeInfo*/ uRam0000000003d1d7c8);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(plVar18,uRam0000000003d39d10);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_118,plVar16,uRam0000000003d39d20);
      uStack_c0 = CONCAT44(uStack_114,uStack_118);
      uStack_b8 = uStack_110;
      lStack_b0 = lStack_108;
      plVar16 = (long *)0x3d32158;
      unaff_x24 = (dword *)0x3d41248;
      while (uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_c0,uRam0000000003d32158), (uVar11 & 1) != 0) {
        if (lStack_b0 == 0) goto code_r0x014c5878;
        if (iVar6 <= *(int *)(lStack_b0 + 0x14)) {
          if (plVar18 == (long *)0x0) {
            func_0x00f78af4();
            goto code_r0x014c5884;
          }
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar18,lStack_b0,uRam0000000003d39d18);
        }
      }
      uVar8 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_c0,uRam0000000003d32150);
      lVar7 = /*Atlas.UI.Screens.PostArcadeScreen$$GetLowestReward*/ func_0x014c5ac0(uVar8,plVar18);
    }
  }
  else {
    lVar7 = /*Atlas.UI.Screens.PostArcadeScreen$$GetLowestReward*/ func_0x014c5ac0(uVar11,plVar18);
  }
  unaff_x23 = 0x3d41240;
  if (lVar7 != 0) {
    unaff_x23 = 0x3d41240;
    iVar6 = *(int *)(lVar7 + 0x14);
    *(int *)(param_1 + 0xb4) = iVar6;
    if (iVar6 < 1) {
      iVar6 = 1;
      *(undefined4 *)(param_1 + 0xb4) = 1;
      *(undefined8 *)(param_1 + 0xc0) = 0x100000001;
      uVar13 = *(undefined1 *)(lVar7 + 0x18);
    }
    else {
      lVar15 = *(long *)(param_1 + 0xd0);
      if (*(char *)(lVar7 + 0x18) == '\0') {
        if (lVar15 == 0) goto LAB_014c5360;
        uVar13 = 0;
        uVar5 = *(undefined4 *)(lVar15 + 0x24);
        *(undefined4 *)(param_1 + 0xc0) = uVar5;
        *(undefined4 *)(param_1 + 0xc4) = uVar5;
      }
      else {
        if (lVar15 == 0) goto LAB_014c5360;
        uVar5 = *(undefined4 *)(lVar15 + 0x20);
        *(undefined4 *)(param_1 + 0xc0) = uVar5;
        *(undefined4 *)(param_1 + 0xc4) = uVar5;
        uVar13 = 1;
      }
    }
    *(int *)(param_1 + 0xbc) = iVar6;
    *(undefined1 *)(param_1 + 0xcc) = uVar13;
    /*Atlas.UI.Screens.PostArcadeScreen$$DisplayReward*/ func_0x014c5b9c(param_1);
    *(undefined1 *)(param_1 + 0xe0) = 1;
    /*Atlas.UI.Screens.PostArcadeScreen$$SetMedalIndicators*/ func_0x014c5d54(param_1);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,*unaff_x26);
    if ((lVar7 != 0) && (lVar15 = *(long *)(param_1 + 0xa0), lVar15 != 0)) {
      if (*(uint *)(lVar15 + 0x18) <= *(uint *)(param_1 + 0xbc)) goto code_r0x014c5860;
      if (*(long *)(lVar7 + 0xb0) != 0) {
        /*Atlas.UI.SlantFillBar$$SetProgress*/ func_0x014fcde4(*(long *)(lVar7 + 0xb0),
                        *(undefined4 *)(lVar15 + (long)(int)*(uint *)(param_1 + 0xbc) * 4 + 0x20),
                        *(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xc4),0);
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,*unaff_x26);
        if ((lVar7 != 0) && (lVar15 = *(long *)(param_1 + 0xa0), lVar15 != 0)) {
          if (*(uint *)(lVar15 + 0x18) <= *(uint *)(param_1 + 0xbc)) {
code_r0x014c5860:
            uVar8 = func_0x00f78b24();
            func_0x00f78ac0(uVar8,0);
code_r0x014c586c:
            func_0x00f78e5c();
code_r0x014c5870:
            func_0x00f78e5c(plVar16);
code_r0x014c5878:
            func_0x00f78af4();
code_r0x014c5884:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x14c5888);
            (*pcVar4)();
          }
          plVar16 = *(long **)(lVar7 + 0xa0);
          uStack_118 = *(undefined4 *)(lVar15 + (long)(int)*(uint *)(param_1 + 0xbc) * 4 + 0x20);
          plVar18 = (long *)func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_118);
          uStack_11c = *(undefined4 *)(param_1 + 0xc4);
          uVar8 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_11c);
          uVar8 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0} / {1}')*/ uRam0000000003d7cd68,plVar18,uVar8,0);
          if (plVar16 != (long *)0x0) {
            /*Atlas.UI.UIXPBehaviour$$Set*/ func_0x0151db10(plVar16,uVar8,0);
            lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,*unaff_x26);
            if (lVar7 != 0) {
              plVar16 = *(long **)(lVar7 + 0xc0);
              plVar18 = (long *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(plVar18,param_1,uRam0000000003d5baf8,0);
              if (plVar16 != (long *)0x0) {
                /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(plVar16,plVar18,0);
                lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,*(undefined8 *)unaff_x24);
                if (lVar7 != 0) {
                  plVar16 = *(long **)(lVar7 + 0xb8);
                  plVar18 = (long *)func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
                  /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(plVar18,param_1,uRam0000000003d5bae8,0);
                  if (plVar16 != (long *)0x0) {
                    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(plVar16,6,plVar18,0);
                    if (*(char *)(param_1 + 0xe0) == '\0') {
                      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,*(undefined8 *)unaff_x24);
                      if ((lVar7 == 0) || (*(long *)(lVar7 + 0x70) == 0)) goto LAB_014c5360;
                      iVar6 = /*Atlas.Stats.DailyChallengeManager$$AreAllChallengesComplete*/ func_0x01574d48(*(long *)(lVar7 + 0x70),0);
                      if (iVar6 == 0) {
                        *(undefined4 *)(param_1 + 300) = 1;
                      }
                      else {
                        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,*unaff_x26);
                        if (((lVar7 == 0) || (*(long *)(lVar7 + 0x110) == 0)) ||
                           (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar7 + 0x110),0), lVar7 == 0))
                        goto LAB_014c5360;
                        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,0,0);
                      }
                    }
                    else {
                      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,*unaff_x26);
                      if ((lVar7 == 0) || (*(long *)(lVar7 + 0xc0) == 0)) goto LAB_014c5360;
                      /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(*(long *)(lVar7 + 0xc0),0,0);
                    }
                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41240);
                    if (lVar7 != 0) {
                      if (*(long *)(lVar7 + 0x50) != 0) {
                        return;
                      }
                      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,*unaff_x26);
                      if (((lVar7 != 0) && (*(long *)(lVar7 + 0xc0) != 0)) &&
                         (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar7 + 0xc0),0), lVar7 != 0)) {
                        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,0,0);
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
  goto LAB_014c5360;
code_r0x014c5218:
  unaff_x24 = (dword *)0x3d41248;
  if (*(long *)(unaff_x23 + 0x28) == 0) goto LAB_014c5360;
  iVar6 = (int)*(undefined8 *)(*(long *)(unaff_x23 + 0x28) + 0x18);
  plVar17 = (long *)0x3d215e0;
  puVar2 = (undefined8 *)0x3d41238;
  plVar1 = (long *)0x3d25458;
  plVar3 = (long *)0x3d26888;
  if ((long)iVar6 <= (long)uVar19) goto code_r0x014c5364;
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
  if (lVar7 == 0) goto LAB_014c5360;
  unaff_x24 = *(dword **)(lVar7 + 0x20);
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
  if (lVar7 == 0) goto LAB_014c5360;
  iVar6 = /*Atlas.Helpers.ArcadeUnlockHelper$$CanBeUnlocked*/ func_0x01454ff4(uVar19,unaff_x23,unaff_x24,*(undefined8 *)(lVar7 + 0x48),0);
  unaff_x24 = (dword *)0x3d41248;
  if (iVar6 == 0) {
code_r0x014c52e0:
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
    if (((lVar7 == 0) || (*(long *)(param_1 + 0xd0) == 0)) ||
       (lVar15 = *(long *)(*(long *)(param_1 + 0xd0) + 0x28), lVar15 == 0)) goto LAB_014c5360;
    if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x014c5860;
    if (*(long *)(lVar7 + 0x50) == 0) goto LAB_014c5360;
    uVar11 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(*(long *)(lVar7 + 0x50),*(undefined8 *)(lVar15 + uVar19 * 8 + 0x20),0);
    if ((uVar11 & 1) == 0) {
      uVar8 = /*Atlas.Helpers.ArcadeUnlockHelper$$GetRewardData*/ func_0x014551d4(uVar19,*(undefined8 *)(param_1 + 0xd0),0);
      plVar17 = plVar16;
      if (plVar16 != (long *)0x0) goto code_r0x014c5344;
      goto LAB_014c5360;
    }
  }
  else {
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
    if (((lVar7 == 0) || (*(long *)(param_1 + 0xd0) == 0)) ||
       (lVar15 = *(long *)(*(long *)(param_1 + 0xd0) + 0x28), lVar15 == 0)) goto LAB_014c5360;
    if (*(uint *)(lVar15 + 0x18) <= uVar19) goto code_r0x014c5860;
    if (*(long *)(lVar7 + 0x50) == 0) goto LAB_014c5360;
    iVar6 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(lVar7 + 0x50),*(undefined8 *)(lVar15 + uVar19 * 8 + 0x20),0);
    if (iVar6 == 0) goto code_r0x014c52e0;
    uVar8 = /*Atlas.Helpers.ArcadeUnlockHelper$$GetRewardData*/ func_0x014551d4(uVar19,*(undefined8 *)(param_1 + 0xd0),0);
    plVar17 = plVar18;
    if (plVar18 == (long *)0x0) goto LAB_014c5360;
code_r0x014c5344:
    uVar11 = /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar17,uVar8,uRam0000000003d39d18);
  }
  uVar19 = uVar19 + 1;
  unaff_x23 = *(ulong *)(param_1 + 0xd0);
  if (unaff_x23 == 0) goto LAB_014c5360;
  goto code_r0x014c5218;
}



// ============================================================
// RVA: 0x14c58e4 | Atlas.UI.Screens.PostArcadeScreen.CreateScreenData
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14c59a0 | Atlas.UI.Screens.PostArcadeScreen.ExitPressed
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14c5ac0 | Atlas.UI.Screens.PostArcadeScreen.GetLowestReward
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14c5b9c | Atlas.UI.Screens.PostArcadeScreen.DisplayReward
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14c5d54 | Atlas.UI.Screens.PostArcadeScreen.SetMedalIndicators
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14c5ec0 | Atlas.UI.Screens.PostArcadeScreen.OnAfterEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x014c6434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c6458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c647c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c64a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c77b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c7904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151de78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c7338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c7594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c6548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c733c) */
/* WARNING: Removing unreachable block (ram,0x014c734c) */
/* WARNING: Removing unreachable block (ram,0x014c7354) */
/* WARNING: Removing unreachable block (ram,0x014c73a4) */
/* WARNING: Removing unreachable block (ram,0x014c73c4) */
/* WARNING: Removing unreachable block (ram,0x014c73cc) */
/* WARNING: Removing unreachable block (ram,0x0151de7c) */
/* WARNING: Removing unreachable block (ram,0x014500ac) */
/* WARNING: Removing unreachable block (ram,0x01450100) */
/* WARNING: Removing unreachable block (ram,0x0145011c) */
/* WARNING: Removing unreachable block (ram,0x014c7908) */
/* WARNING: Removing unreachable block (ram,0x014c64a4) */
/* WARNING: Removing unreachable block (ram,0x014c64b0) */
/* WARNING: Removing unreachable block (ram,0x014c654c) */
/* WARNING: Removing unreachable block (ram,0x014c6568) */
/* WARNING: Removing unreachable block (ram,0x014c6570) */
/* WARNING: Removing unreachable block (ram,0x014c6574) */
/* WARNING: Removing unreachable block (ram,0x014c6590) */
/* WARNING: Removing unreachable block (ram,0x014c65a0) */
/* WARNING: Removing unreachable block (ram,0x014c65c0) */
/* WARNING: Removing unreachable block (ram,0x014c65d4) */
/* WARNING: Removing unreachable block (ram,0x014c65dc) */
/* WARNING: Removing unreachable block (ram,0x014c661c) */
/* WARNING: Removing unreachable block (ram,0x014c6654) */
/* WARNING: Removing unreachable block (ram,0x014c668c) */
/* WARNING: Removing unreachable block (ram,0x014c66c4) */
/* WARNING: Removing unreachable block (ram,0x014c66d8) */
/* WARNING: Removing unreachable block (ram,0x014c66e0) */
/* WARNING: Removing unreachable block (ram,0x014c6724) */
/* WARNING: Removing unreachable block (ram,0x014c6738) */
/* WARNING: Removing unreachable block (ram,0x014c6740) */
/* WARNING: Removing unreachable block (ram,0x014c675c) */
/* WARNING: Removing unreachable block (ram,0x014c6764) */
/* WARNING: Removing unreachable block (ram,0x014c6798) */
/* WARNING: Removing unreachable block (ram,0x014c67a0) */
/* WARNING: Removing unreachable block (ram,0x014c67e0) */
/* WARNING: Removing unreachable block (ram,0x014c67e8) */
/* WARNING: Removing unreachable block (ram,0x014c67f0) */
/* WARNING: Removing unreachable block (ram,0x014c6804) */
/* WARNING: Removing unreachable block (ram,0x014c680c) */
/* WARNING: Removing unreachable block (ram,0x014c6814) */
/* WARNING: Removing unreachable block (ram,0x014c6820) */
/* WARNING: Removing unreachable block (ram,0x014c6854) */
/* WARNING: Removing unreachable block (ram,0x014c6878) */
/* WARNING: Removing unreachable block (ram,0x014c68ac) */
/* WARNING: Removing unreachable block (ram,0x014c68b4) */
/* WARNING: Removing unreachable block (ram,0x014c68bc) */
/* WARNING: Removing unreachable block (ram,0x014c68c8) */
/* WARNING: Removing unreachable block (ram,0x014c68d0) */
/* WARNING: Removing unreachable block (ram,0x014c68d8) */
/* WARNING: Removing unreachable block (ram,0x014c68e4) */
/* WARNING: Removing unreachable block (ram,0x014c6918) */
/* WARNING: Removing unreachable block (ram,0x014c693c) */
/* WARNING: Removing unreachable block (ram,0x014c6950) */
/* WARNING: Removing unreachable block (ram,0x014c6958) */
/* WARNING: Removing unreachable block (ram,0x014c6990) */
/* WARNING: Removing unreachable block (ram,0x014c69a4) */
/* WARNING: Removing unreachable block (ram,0x014c69ac) */
/* WARNING: Removing unreachable block (ram,0x014c6a00) */
/* WARNING: Removing unreachable block (ram,0x014c6a08) */
/* WARNING: Removing unreachable block (ram,0x014c6a2c) */
/* WARNING: Removing unreachable block (ram,0x014c6a34) */
/* WARNING: Removing unreachable block (ram,0x014c6a3c) */
/* WARNING: Removing unreachable block (ram,0x014c6a48) */
/* WARNING: Removing unreachable block (ram,0x014c6a50) */
/* WARNING: Removing unreachable block (ram,0x014c6a58) */
/* WARNING: Removing unreachable block (ram,0x014c6a64) */
/* WARNING: Removing unreachable block (ram,0x014c6a98) */
/* WARNING: Removing unreachable block (ram,0x014c6abc) */
/* WARNING: Removing unreachable block (ram,0x014c6ad0) */
/* WARNING: Removing unreachable block (ram,0x014c6ad8) */
/* WARNING: Removing unreachable block (ram,0x014c6afc) */
/* WARNING: Removing unreachable block (ram,0x014c6b04) */
/* WARNING: Removing unreachable block (ram,0x014c6b50) */
/* WARNING: Removing unreachable block (ram,0x014c6b64) */
/* WARNING: Removing unreachable block (ram,0x014c6b6c) */
/* WARNING: Removing unreachable block (ram,0x014c6bac) */
/* WARNING: Removing unreachable block (ram,0x014c6bc0) */
/* WARNING: Removing unreachable block (ram,0x014c6bc8) */
/* WARNING: Removing unreachable block (ram,0x014c6c3c) */
/* WARNING: Removing unreachable block (ram,0x014c6c4c) */
/* WARNING: Removing unreachable block (ram,0x014c6c54) */
/* WARNING: Removing unreachable block (ram,0x014c6c60) */
/* WARNING: Removing unreachable block (ram,0x014c6c88) */
/* WARNING: Removing unreachable block (ram,0x014c6cb4) */
/* WARNING: Removing unreachable block (ram,0x014c64bc) */
/* WARNING: Removing unreachable block (ram,0x014c6528) */
/* WARNING: Removing unreachable block (ram,0x014c6538) */
/* WARNING: Removing unreachable block (ram,0x014c650c) */
/* WARNING: Removing unreachable block (ram,0x014c651c) */
/* WARNING: Removing unreachable block (ram,0x014c6524) */
/* WARNING: Removing unreachable block (ram,0x014c64f0) */
/* WARNING: Removing unreachable block (ram,0x014c6500) */
/* WARNING: Removing unreachable block (ram,0x014c6508) */
/* WARNING: Removing unreachable block (ram,0x014c64d4) */
/* WARNING: Removing unreachable block (ram,0x014c64e4) */
/* WARNING: Removing unreachable block (ram,0x014c6540) */
/* WARNING: Removing unreachable block (ram,0x014c64ec) */
/* WARNING: Removing unreachable block (ram,0x014c6480) */
/* WARNING: Removing unreachable block (ram,0x014c6490) */
/* WARNING: Removing unreachable block (ram,0x014c6498) */
/* WARNING: Removing unreachable block (ram,0x014c645c) */
/* WARNING: Removing unreachable block (ram,0x014c646c) */
/* WARNING: Removing unreachable block (ram,0x014c6474) */
/* WARNING: Removing unreachable block (ram,0x014c6438) */
/* WARNING: Removing unreachable block (ram,0x014c6448) */
/* WARNING: Removing unreachable block (ram,0x014c6450) */
/* WARNING: Removing unreachable block (ram,0x014c7598) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined8 * Atlas_UI_Screens_PostArcadeScreen__OnAfterEnter(undefined8 *param_1)

{
  ushort uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int extraout_w1;
  int *piVar16;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar17;
  long *unaff_x21;
  long unaff_x22;
  long lVar18;
  undefined8 unaff_x23;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 unaff_x24;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 *puVar23;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar24;
  float fVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  ulong extraout_d0;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined4 uVar29;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  puVar23 = &stack0xfffffffffffffff0;
  lVar17 = 0x3eb4000;
  if ((bRam0000000003eb4b33 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d2c8a0);
    func_0x00f78a20(0x3d5baf0);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41240);
    bRam0000000003eb4b33 = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
  plVar9 = unaff_x21;
  uVar19 = unaff_x23;
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0xb0) == 0)) {
LAB_014c6018:
    unaff_x23 = uVar19;
    unaff_x21 = plVar9;
    unaff_x20 = lVar17;
    unaff_x30 = &Atlas_UI_Screens_PostArcadeScreen__OnSkipTapped;
    puVar11 = (undefined8 *)func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_1;
    unaff_x22 = 0x3d41238;
    unaff_x29 = puVar23;
  }
  else {
    /*Atlas.UI.SlantFillBar$$UpdateCachedLocalPosition*/ func_0x014fcb04(*(long *)(lVar8 + 0xb0),0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
    if (lVar8 == 0) goto LAB_014c6018;
    uVar19 = 0x3d5b000;
    lVar17 = *(long *)(lVar8 + 0x110);
    plVar9 = (long *)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(plVar9,param_1,uRam0000000003d5baf0,0);
    if (lVar17 == 0) goto LAB_014c6018;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar17,plVar9,0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
    if (lVar8 == 0) goto LAB_014c6018;
    Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
              (param_1,*(undefined8 *)(lVar8 + 0x110),uRam0000000003d2c8a0);
    puVar10 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41240);
    lVar17 = 0x3d41000;
    if (puVar10 == (undefined8 *)0x0) goto LAB_014c6018;
    puVar11 = param_1;
    if (*(char *)(puVar10 + 0xd) == '\0') {
      return puVar10;
    }
  }
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar10 = puVar11;
  if ((bRam0000000003eb4b38 & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    puVar10 = (undefined8 *)func_0x00f78a20(0x3d79018);
    bRam0000000003eb4b38 = 1;
  }
  if (*(int *)((long)puVar11 + 0x4c) != 2) {
    return puVar10;
  }
  *(undefined1 *)(puVar11 + 0x26) = 1;
  lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
  if ((lVar17 != 0) && (*(long *)(lVar17 + 0x68) != 0)) {
    /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$SkipSet*/ func_0x01562ca8(*(long *)(lVar17 + 0x68),0);
    /*DG.Tweening.TweenExtensions$$Complete*/ func_0x016bbb04(puVar11[0x24],0);
    /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018,0);
    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
    if ((lVar17 != 0) &&
       ((*(long *)(lVar17 + 0x110) != 0 &&
        (lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar17 + 0x110),0), lVar17 != 0)))) {
      puVar23 = *(undefined1 **)((long)register0x00000008 + -0x10);
      puVar24 = *(undefined **)((long)register0x00000008 + -8);
      auVar30._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x20);
      auVar30._0_8_ = *(undefined8 *)((long)register0x00000008 + -0x18);
code_r0x0322ef1c:
      *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = auVar30._8_8_;
      *(long *)((long)register0x00000008 + -0x18) = auVar30._0_8_;
      *(undefined1 **)((long)register0x00000008 + -0x10) = puVar23;
      *(undefined **)((long)register0x00000008 + -8) = puVar24;
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar10 = (undefined8 *)(*pcRam0000000003ebf4c0)(lVar17,0);
      return puVar10;
    }
  }
  lVar17 = func_0x00f78af4();
  *(long *)((long)register0x00000008 + -0x50) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x48) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x40) = 0x3d41238;
  *(undefined8 **)((long)register0x00000008 + -0x38) = puVar11;
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x28) =
       &Atlas_UI_Screens_PostArcadeScreen__OnAfterExit;
  if ((bRam0000000003eb4b34 & 1) == 0) {
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b34 = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar17,uRam0000000003d41248);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0xb8) != 0)) {
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar8 + 0xb8),6,0,0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar17,uRam0000000003d41248);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x70) != 0)) {
      iVar6 = /*Atlas.Stats.DailyChallengeManager$$PollForChallengeRefresh*/ func_0x01574644(*(long *)(lVar8 + 0x70),0);
      if (iVar6 != 0) {
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar17,uRam0000000003d41248);
        if ((lVar8 == 0) || (*(long *)(lVar8 + 0x48) == 0)) goto code_r0x014c61d0;
        /*Atlas.Save.SaveManager$$StartSave*/ func_0x014eb4e0(*(long *)(lVar8 + 0x48),0);
      }
      if ((*(long *)(lVar17 + 0x80) != 0) &&
         (lVar8 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(lVar17 + 0x80),0,0),
         lVar8 != 0)) {
        *(undefined8 *)((long)register0x00000008 + -0x50) =
             *(undefined8 *)((long)register0x00000008 + -0x50);
        *(undefined8 *)((long)register0x00000008 + -0x48) =
             *(undefined8 *)((long)register0x00000008 + -0x48);
        *(undefined8 *)((long)register0x00000008 + -0x40) =
             *(undefined8 *)((long)register0x00000008 + -0x40);
        *(undefined8 *)((long)register0x00000008 + -0x38) =
             *(undefined8 *)((long)register0x00000008 + -0x38);
        *(undefined8 *)((long)register0x00000008 + -0x30) =
             *(undefined8 *)((long)register0x00000008 + -0x30);
        *(undefined8 *)((long)register0x00000008 + -0x28) =
             *(undefined8 *)((long)register0x00000008 + -0x28);
        if ((bRam0000000003eb5326 & 1) == 0) {
          func_0x00f78a20(0x3d22c88,0);
          bRam0000000003eb5326 = 1;
        }
        if (((*(ushort *)((long)/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88 + 0x1c) == 0)) {
          func_0x00f78ad0();
        }
        iVar6 = *(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88[0x17] + 0x4c);
        *(undefined8 *)((long)register0x00000008 + -0x50) =
             *(undefined8 *)((long)register0x00000008 + -0x50);
        *(undefined8 *)((long)register0x00000008 + -0x48) =
             *(undefined8 *)((long)register0x00000008 + -0x48);
        *(undefined8 *)((long)register0x00000008 + -0x40) =
             *(undefined8 *)((long)register0x00000008 + -0x40);
        *(undefined8 *)((long)register0x00000008 + -0x38) =
             *(undefined8 *)((long)register0x00000008 + -0x38);
        *(undefined8 *)((long)register0x00000008 + -0x30) =
             *(undefined8 *)((long)register0x00000008 + -0x30);
        *(undefined8 *)((long)register0x00000008 + -0x28) =
             *(undefined8 *)((long)register0x00000008 + -0x28);
        if ((bRam0000000003eb5315 & 1) == 0) {
          func_0x00f78a20(0x3d22c88);
          bRam0000000003eb5315 = 1;
        }
        puVar10 = /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88;
        if (((*(ushort *)((long)/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88 + 0x1c) == 0)) {
          func_0x00f78ad0();
          puVar10 = /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88;
        }
        /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88 = puVar10;
        if ((*(int *)(puVar10[0x17] + 0x4c) != iVar6) || (*(int *)(lVar8 + 0x24) == -1)) {
          *(int *)(lVar8 + 0x24) = iVar6;
        }
        return puVar10;
      }
    }
  }
code_r0x014c61d0:
  puVar10 = (undefined8 *)func_0x00f78af4();
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x80);
  *(long *)((long)register0x00000008 + -0x80) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3d41248;
  *(long *)((long)register0x00000008 + -0x68) = lVar17;
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined **)((long)register0x00000008 + -0x58) =
       &Atlas_UI_Screens_PostArcadeScreen__TryGetNextAward;
  puVar23 = (undefined1 *)((long)register0x00000008 + -0x60);
  plVar9 = (long *)0x3eb4000;
  unaff_x21 = (long *)0x3d41248;
  if ((bRam0000000003eb4b35 & 1) == 0) {
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b35 = 1;
  }
  lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar10,uRam0000000003d41248);
  if (((lVar17 != 0) && (puVar10[0x1a] != 0)) &&
     (lVar8 = *(long *)(puVar10[0x1a] + 0x28), lVar8 != 0)) {
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)((long)puVar10 + 0xbc)) goto code_r0x014c6278;
    if (*(long *)(lVar17 + 0x50) != 0) {
      puVar11 = (undefined8 *)
                /*Atlas.Stats.UnlockManager$$TryGetAndRemoveAwardFromHistory*/ func_0x0152197c(*(long *)(lVar17 + 0x50),
                                *(undefined8 *)
                                 (lVar8 + (long)(int)*(uint *)((long)puVar10 + 0xbc) * 8 + 0x20),
                                puVar10 + 0x1d,puVar10 + 0x22,0);
      *(char *)(puVar10 + 0x1c) = (char)puVar11;
      return puVar11;
    }
  }
  func_0x00f78af4();
code_r0x014c6278:
  uVar19 = func_0x00f78b24();
  puVar24 = &Atlas_UI_Screens_PostArcadeScreen__StartAward;
  auVar30 = func_0x00f78ac0(uVar19,0);
code_r0x014c6284:
  uVar19 = auVar30._0_8_;
  register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x80);
  *(undefined8 *)(puVar3 + -0x70) = unaff_d11;
  *(undefined8 *)(puVar3 + -0x68) = unaff_d10;
  *(ulong *)(puVar3 + -0x60) = unaff_d9;
  *(ulong *)(puVar3 + -0x58) = unaff_d8;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(long *)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = unaff_x21;
  *(long **)(puVar3 + -0x20) = plVar9;
  *(undefined8 **)(puVar3 + -0x18) = puVar10;
  *(undefined1 **)(puVar3 + -0x10) = puVar23;
  *(undefined **)(puVar3 + -8) = puVar24;
  puVar23 = puVar3 + -0x10;
  unaff_x21 = (long *)0x3eb4000;
  unaff_x23 = 0x3d41238;
  if ((bRam0000000003eb4b3a & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d5bae0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7b0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d63a08);
    func_0x00f78a20(0x3d63a10);
    func_0x00f78a20(0x3d63a18);
    func_0x00f78a20(0x3d286e8);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41248);
    func_0x00f78a20(0x3d66fb0);
    bRam0000000003eb4b3a = 1;
  }
  *(undefined4 *)(puVar3 + -0x74) = 0;
  lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar19,uRam0000000003d41238);
  if (lVar17 != 0) {
    uVar21 = 0x3d41248;
    unaff_x21 = *(long **)(lVar17 + 0x70);
    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar19,uRam0000000003d41248);
    unaff_x24 = 0x3d41248;
    if (lVar17 != 0) {
      unaff_x22 = *(long *)(lVar17 + 0x88);
      lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar19,uRam0000000003d41238);
      if (((lVar17 != 0) && (unaff_x24 = uVar21, unaff_x22 != 0)) &&
         (uVar21 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(unaff_x22,*(undefined8 *)(lVar17 + 0x50),0),
         unaff_x21 != (long *)0x0)) {
        (**(code **)(*unaff_x21 + 0x558))(unaff_x21,uVar21,*(undefined8 *)(*unaff_x21 + 0x560));
        lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar19,uRam0000000003d41248);
        if (lVar17 != 0) {
          unaff_x21 = *(long **)(lVar17 + 0x88);
          lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar19,uRam0000000003d41238);
          if ((lVar17 != 0) && (unaff_x21 != (long *)0x0)) {
            /*Core.Localisation.LocalisationManager$$FixForMultilineIfArabic*/ func_0x0164ff98(unaff_x21,*(undefined8 *)(lVar17 + 0x70),0);
            lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar19,uRam0000000003d41238);
            if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x78), lVar17 != 0)) {
              puVar24 = &UNK_014c6438;
              goto code_r0x0322ef1c;
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
  uVar19 = func_0x00f78b24();
  puVar24 = &Atlas_UI_Screens_PostArcadeScreen__HideAward;
  puVar11 = (undefined8 *)func_0x00f78ac0(uVar19,0);
  puVar5 = puVar3 + -0x80;
code_r0x014c6d04:
  puVar4 = puVar5 + -0x40;
  *(ulong *)(puVar5 + -0x40) = unaff_d9;
  *(ulong *)(puVar5 + -0x38) = unaff_d8;
  *(long *)(puVar5 + -0x30) = unaff_x22;
  *(long **)(puVar5 + -0x28) = unaff_x21;
  *(long *)(puVar5 + -0x20) = auVar30._8_8_;
  *(long *)(puVar5 + -0x18) = auVar30._0_8_;
  *(undefined1 **)(puVar5 + -0x10) = puVar23;
  *(undefined **)(puVar5 + -8) = puVar24;
  unaff_x21 = (long *)0x3d78fd8;
  if ((bRam0000000003eb4b3b & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d78fd8);
    bRam0000000003eb4b3b = 1;
  }
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/Dotween_SlideIn')*/ uRam0000000003d78fd8,0);
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar19 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
  puVar11[0x24] = uVar19;
  lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
  if (lVar17 != 0) {
    unaff_x21 = *(long **)(lVar17 + 0xd0);
    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
    if ((lVar17 != 0) && (*(long *)(lVar17 + 0x68) != 0)) {
      fVar25 = (float)/*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideOutTime*/ func_0x01562c40(*(long *)(lVar17 + 0x68),0);
      uVar21 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,fVar25 * 0.5,unaff_x21,0);
      uVar19 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar19,uVar21,0);
      lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
      if (lVar17 != 0) {
        unaff_x21 = *(long **)(lVar17 + 0xd8);
        lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
        if ((lVar17 != 0) && (*(long *)(lVar17 + 0xf0) != 0)) {
          uVar26 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar17 + 0xf0),0);
          unaff_d8 = (ulong)uVar26;
          lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
          if ((lVar17 != 0) && (*(long *)(lVar17 + 0x68) != 0)) {
            uVar27 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideOutTime*/ func_0x01562c40(*(long *)(lVar17 + 0x68),0);
            unaff_x21 = (long *)/*DG.Tweening.ShortcutExtensions$$DOMoveX*/ func_0x016b28e8(uVar26,uVar27,unaff_x21,0,0);
            lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
            if ((lVar17 != 0) && (*(long *)(lVar17 + 0x68) != 0)) {
              uVar21 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(unaff_x21,*(undefined4 *)(*(long *)(lVar17 + 0x68) + 0x40),
                                       uRam0000000003d5e7a8);
              puVar10 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar19,uVar21,0);
              *(undefined1 *)((long)puVar11 + 0x94) = 0;
              return puVar10;
            }
          }
        }
      }
    }
  }
  puVar10 = (undefined8 *)func_0x00f78af4();
  puVar3 = puVar5 + -0xd0;
  auVar30._8_8_ = puVar5 + -0xd0;
  auVar30._0_8_ = puVar10;
  *(undefined8 *)(puVar5 + -0xa0) = unaff_d11;
  *(undefined8 *)(puVar5 + -0x98) = unaff_d10;
  *(ulong *)(puVar5 + -0x90) = unaff_d9;
  *(ulong *)(puVar5 + -0x88) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x80) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x78) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x70) = 0x3d41238;
  *(long **)(puVar5 + -0x68) = unaff_x21;
  *(undefined8 *)(puVar5 + -0x60) = uVar19;
  *(undefined8 **)(puVar5 + -0x58) = puVar11;
  *(undefined1 **)(puVar5 + -0x50) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x48) = &Atlas_UI_Screens_PostArcadeScreen__OnUpdate;
  puVar23 = puVar5 + -0x50;
  unaff_d8 = extraout_d0 & 0xffffffff;
  plVar9 = (long *)0x3eb4000;
  unaff_x22 = 0x3d41238;
  lVar17 = 0x3d41238;
  if ((bRam0000000003eb4b3c & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d3e178);
    func_0x00f78a20(0x3d5bad8);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5c7a0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41240);
    func_0x00f78a20(0x3d41248);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d79110);
    func_0x00f78a20(0x3d7cd68);
    bRam0000000003eb4b3c = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
  lVar8 = unaff_x22;
  uVar19 = unaff_x23;
  uVar21 = unaff_x24;
  if ((lVar12 != 0) && (*(long *)(lVar12 + 0xa8) != 0)) {
    plVar9 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar12 + 0xa8),0);
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
    lVar8 = lVar17;
    if ((lVar12 == 0) ||
       ((*(long *)(lVar12 + 0xb0) == 0 ||
        (/*Atlas.UI.SlantFillBar$$get_FillBotomRightPosition*/ func_0x014fc974(*(long *)(lVar12 + 0xb0),0), plVar9 == (long *)0x0))))
    goto code_r0x014c75c8;
    if (*plVar9 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) goto code_r0x014c75cc;
    puVar11 = (undefined8 *)/*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(plVar9,0);
    if (*(char *)((long)puVar10 + 0x9d) != '\0') {
      return puVar11;
    }
    if (puVar10[0x11] == 0) goto code_r0x014c75c8;
    puVar11 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionVisible*/ func_0x01511a80(puVar10[0x11],0);
    if ((int)puVar11 != 0) {
      if (puVar10[0x11] != 0) {
        puVar11 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionEnding*/ func_0x01511a70(puVar10[0x11],0);
        if (((ulong)puVar11 & 1) != 0) {
          return puVar11;
        }
        if (puVar10[0x10] != 0) {
          puVar11 = (undefined8 *)Atlas_FrontEnd_FrontEndScene__get_IsSceneChanging(puVar10[0x10],0)
          ;
          if (((ulong)puVar11 & 1) != 0) {
            return puVar11;
          }
          lVar17 = puVar10[0x11];
          if (lVar17 != 0) {
            *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x80);
            *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x78);
            *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0x70);
            *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)(puVar5 + -0x68);
            *(undefined8 *)(puVar5 + -0x60) = *(undefined8 *)(puVar5 + -0x60);
            *(undefined8 *)(puVar5 + -0x58) = *(undefined8 *)(puVar5 + -0x58);
            *(undefined8 *)(puVar5 + -0x50) = *(undefined8 *)(puVar5 + -0x50);
            *(undefined8 *)(puVar5 + -0x48) = *(undefined8 *)(puVar5 + -0x48);
            if ((bRam0000000003eb4d7b & 1) == 0) {
              func_0x00f78a20(0x3d417a8);
              bRam0000000003eb4d7b = 1;
            }
            if ((*(char *)(lVar17 + 0x10) == '\0') || (*(int *)(lVar17 + 0x30) != 2)) {
              puVar10 = (undefined8 *)0x0;
            }
            else {
              *(undefined4 *)(lVar17 + 0x30) = 3;
              if (*(long *)(lVar17 + 0x40) != 0) {
                /*UnityEngine.Events.UnityEvent<int, Sprite>$$Invoke*/ func_0x01b85798(*(long *)(lVar17 + 0x40),1,0,uRam0000000003d417a8);
              }
              /*Core.Input.InputManager$$ResumeAllInput*/ func_0x0164ae40(0);
              puVar10 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
            return puVar10;
          }
        }
      }
      goto code_r0x014c75c8;
    }
    if (*(char *)((long)puVar10 + 0x9c) == '\0') {
      if (0.0 < *(float *)(puVar10 + 0x12)) {
        *(float *)(puVar10 + 0x12) = *(float *)(puVar10 + 0x12) - (float)extraout_d0;
        return puVar11;
      }
      lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar10,uRam0000000003d41248);
      if ((lVar17 == 0) || (*(long *)(lVar17 + 0x98) == 0)) goto code_r0x014c75c8;
      puVar11 = (undefined8 *)/*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar17 + 0x98),uRam0000000003d3e178);
      if (((ulong)puVar11 & 1) != 0) {
        return puVar11;
      }
      if (*(int *)((long)puVar10 + 0x4c) != 2) {
        return puVar11;
      }
      if (*(char *)((long)puVar10 + 0x94) == '\0') goto code_r0x014c7564;
      lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
      if ((lVar17 == 0) || (puVar10[0x14] == 0)) goto code_r0x014c75c8;
      plVar9 = *(long **)(lVar17 + 0xb0);
      unaff_x21 = (long *)func_0x0001c0f4(puVar10[0x14],(long)*(int *)((long)puVar10 + 0xbc));
      if ((puVar10[0x15] == 0) ||
         (iVar6 = func_0x0001c0f4(puVar10[0x15],(long)*(int *)((long)puVar10 + 0xbc)),
         plVar9 == (long *)0x0)) goto code_r0x014c75c8;
      fVar25 = (float)/*Atlas.UI.SlantFillBar$$CalculateValue*/ func_0x014fcfb8((float)(int)unaff_x21,(float)iVar6,plVar9,0);
      unaff_d9 = (ulong)(uint)fVar25;
      lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
      if (lVar17 == 0) goto code_r0x014c75c8;
      plVar9 = *(long **)(lVar17 + 0xa0);
      auVar30._8_8_ = plVar9;
      *(int *)(puVar5 + -0xa4) = (int)fVar25;
      unaff_x21 = (long *)func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,puVar5 + -0xa4);
      *(undefined4 *)(puVar5 + -0xa8) = *(undefined4 *)((long)puVar10 + 0xc4);
      unaff_x23 = 0x3d22910;
      uVar20 = 0x3d22910;
      uVar19 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,puVar5 + -0xa8);
      unaff_x24 = 0x3d7cd68;
      uVar22 = 0x3d7cd68;
      uVar13 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0} / {1}')*/ uRam0000000003d7cd68,unaff_x21,uVar19,0);
      uVar19 = unaff_x23;
      uVar21 = unaff_x24;
      if (plVar9 == (long *)0x0) goto code_r0x014c75c8;
      /*Atlas.UI.UIXPBehaviour$$Set*/ func_0x0151db10(plVar9,uVar13,0);
      puVar11 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
      if ((puVar11 == (undefined8 *)0x0) || (uVar19 = uVar20, uVar21 = uVar22, puVar11[0x16] == 0))
      goto code_r0x014c75c8;
      if (*(char *)(puVar11[0x16] + 0x90) != '\0') {
code_r0x014c7554:
        *(float *)(puVar10 + 0x13) = *(float *)(puVar10 + 0x13) + (float)extraout_d0;
        return puVar11;
      }
      if (*(char *)(puVar10 + 0x25) != '\0') {
        if (puVar10[0x15] != 0) {
          puVar11 = (undefined8 *)
                    func_0x0001c0f4(puVar10[0x15],(long)*(int *)((long)puVar10 + 0xbc));
          if ((fVar25 < (float)(int)puVar11) || (*(char *)((long)puVar10 + 0x119) != '\0'))
          goto code_r0x014c7554;
          *(undefined1 *)((long)puVar10 + 0x119) = 1;
          lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
          if ((lVar17 != 0) && (*(long *)(lVar17 + 0xb8) != 0)) {
            /*Atlas.UI.UIRewardBehaviour$$Set*/ func_0x0151d2a8(*(long *)(lVar17 + 0xb8),1,0);
            lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
            if ((lVar17 != 0) && (*(long *)(lVar17 + 200) != 0)) {
              plVar9 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(lVar17 + 200),0);
              lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
              if ((lVar17 != 0) && (*(long *)(lVar17 + 0x68) != 0)) {
                uVar27 = *(undefined4 *)(*(long *)(lVar17 + 0x68) + 0x4c);
                lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                if ((lVar17 != 0) && (*(long *)(lVar17 + 0x68) != 0)) {
                  uVar29 = *(undefined4 *)(*(long *)(lVar17 + 0x68) + 0x44);
                  lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                  if ((lVar17 != 0) && (*(long *)(lVar17 + 0x68) != 0)) {
                    uVar28 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_RankJumpDuration*/ func_0x01562c60(*(long *)(lVar17 + 0x68),0);
                    /*Atlas.UI.AtlasTweenAnimations$$JumpZoom*/ func_0x0146f84c(uVar27,0x3f800000,uVar29,uVar28,0,0,plVar9,0,0,0);
                    /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/ProgressBarComplete')*/ uRam0000000003d79110,0);
                    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                    if (lVar17 != 0) {
                      lVar17 = *(long *)(lVar17 + 0xb8);
                      unaff_x21 = (long *)func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(unaff_x21,puVar10,uRam0000000003d5bad8,0);
                      plVar9 = (long *)0x0;
                      if (lVar17 != 0) {
                        puVar11 = (undefined8 *)/*Atlas.UI.UIRewardBehaviour$$Wiggle*/ func_0x0151d394(0,lVar17,unaff_x21,0);
                        goto code_r0x014c7554;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_r0x014c75c8;
      }
      puVar24 = &UNK_014c733c;
      puVar5 = puVar5 + -0xd0;
      puVar11 = puVar10;
      goto code_r0x014c6d04;
    }
    *(undefined1 *)((long)puVar10 + 0x9c) = 0;
    if (*(char *)(puVar10 + 0x26) != '\0') {
      lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar10,uRam0000000003d41240);
      if (lVar17 == 0) goto code_r0x014c75c8;
      *(undefined1 *)(lVar17 + 0x68) = 1;
    }
    plVar9 = (long *)puVar10[0x10];
    unaff_x21 = (long *)puVar10[0x1b];
    unaff_x22 = 0x3d41248;
    lVar8 = 0x3d41248;
    uVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar10,uRam0000000003d41248);
    puVar11 = (undefined8 *)/*Atlas.UI.Screens.RewardScreenExtensions$$RunRewardSequenceIfRewardUnseen<SingleplayerChapterBehaviour, SingleplayerChapterScreen.TransitionData>*/ func_0x018de5e0(plVar9,unaff_x21,puVar10,uVar13,uRam0000000003d5c7a0);
    if ((int)puVar11 == 0) goto code_r0x014c75a4;
    *(undefined1 *)((long)puVar10 + 0x9d) = 1;
    lVar17 = puVar10[0x15];
    if (lVar17 == 0) goto code_r0x014c75c8;
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)((long)puVar10 + 0xbc)) goto code_r0x014c75d0;
    if (*(int *)(lVar17 + (long)(int)*(uint *)((long)puVar10 + 0xbc) * 4 + 0x20) <
        *(int *)((long)puVar10 + 0xc4)) {
      return puVar11;
    }
    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar10,uRam0000000003d41248);
    if (lVar17 == 0) goto code_r0x014c75c8;
    plVar9 = *(long **)(lVar17 + 0x50);
    puVar11 = (undefined8 *)Atlas_UI_Screens_PostArcadeScreen__CreateScreenData(puVar10);
    if (plVar9 != (long *)0x0) {
      plVar9[0xf] = (long)puVar11;
      if (*(char *)((long)puVar10 + 0xcc) == '\0') {
        return puVar11;
      }
      lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar10,uRam0000000003d41248);
      if ((lVar17 != 0) && (*(ulong *)(lVar17 + 0x50) != 0)) {
        auVar31._8_8_ = 0;
        auVar31._0_8_ = *(ulong *)(lVar17 + 0x50);
        puVar23 = *(undefined1 **)(puVar5 + -0x50);
        puVar24 = *(undefined **)(puVar5 + -0x48);
        lVar17 = *(long *)(puVar5 + -0x60);
        lVar8 = *(long *)(puVar5 + -0x58);
        puVar5 = puVar5 + -0x40;
        goto code_r0x0151ddac;
      }
    }
  }
code_r0x014c75c8:
  func_0x00f78af4();
  unaff_x22 = lVar8;
code_r0x014c75cc:
  func_0x00f78e5c();
  unaff_x23 = uVar19;
  unaff_x24 = uVar21;
code_r0x014c75d0:
  uVar19 = func_0x00f78b24();
  puVar24 = &Atlas_UI_Screens_PostArcadeScreen__PlacementAwardSequenceEnded;
  puVar14 = (undefined8 *)func_0x00f78ac0(uVar19,0);
  puVar4 = puVar5 + -0xd0;
  puVar11 = puVar10;
  goto code_r0x014c75dc;
code_r0x014c7564:
  if (*(char *)((long)puVar10 + 0x119) != '\0') {
    return puVar11;
  }
  if (*(char *)(puVar10 + 0x1c) == '\0') goto code_r0x014c759c;
  uVar19 = puVar10[0x1d];
  uVar13 = puVar10[0x20];
  uVar21 = puVar10[0x1f];
  *(undefined8 *)(puVar5 + -200) = puVar10[0x1e];
  *(undefined8 *)(puVar5 + -0xd0) = uVar19;
  *(undefined8 *)(puVar5 + -0xb8) = uVar13;
  *(undefined8 *)(puVar5 + -0xc0) = uVar21;
  *(undefined8 *)(puVar5 + -0xb0) = puVar10[0x21];
  puVar24 = &UNK_014c7598;
  goto code_r0x014c6284;
code_r0x014c759c:
  if (*(char *)(puVar10 + 0x23) != '\0') {
    return puVar11;
  }
code_r0x014c75a4:
  puVar23 = *(undefined1 **)(puVar5 + -0x50);
  puVar24 = *(undefined **)(puVar5 + -0x48);
  plVar9 = *(long **)(puVar5 + -0x60);
  puVar11 = *(undefined8 **)(puVar5 + -0x58);
  unaff_x22 = *(long *)(puVar5 + -0x70);
  unaff_x21 = *(long **)(puVar5 + -0x68);
  unaff_x24 = *(undefined8 *)(puVar5 + -0x80);
  unaff_x23 = *(undefined8 *)(puVar5 + -0x78);
  puVar14 = puVar10;
code_r0x014c75dc:
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(long *)(puVar4 + -0x30) = unaff_x22;
  *(long **)(puVar4 + -0x28) = unaff_x21;
  *(long **)(puVar4 + -0x20) = plVar9;
  *(undefined8 **)(puVar4 + -0x18) = puVar11;
  *(undefined1 **)(puVar4 + -0x10) = puVar23;
  *(undefined **)(puVar4 + -8) = puVar24;
  lVar17 = 0x3eb4000;
  puVar10 = puVar14;
  if ((bRam0000000003eb4b3e & 1) == 0) {
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d23df0);
    puVar10 = (undefined8 *)func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b3e = 1;
  }
  *(undefined8 *)(puVar4 + -0x58) = 0;
  *(undefined8 *)(puVar4 + -0x50) = 0;
  *(undefined8 *)(puVar4 + -0x48) = 0;
  if (*(char *)(puVar14 + 0x23) != '\0') {
    return puVar10;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar14,uRam0000000003d41248);
  lVar8 = unaff_x22;
  if (lVar12 == 0) goto code_r0x014c77e0;
  if (*(long *)(lVar12 + 0x20) == 0) goto code_r0x014c77e0;
  lVar12 = *(long *)(*(long *)(lVar12 + 0x20) + 0x10);
  unaff_x22 = 0x3d23df0;
  lVar18 = 0x3d23df0;
  if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar17 = 0;
  lVar8 = unaff_x22;
  if (lVar12 == 0) goto code_r0x014c77e0;
  lVar17 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar12,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18),
                           uRam0000000003d57280);
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar14,uRam0000000003d41248);
  if (lVar12 == 0) goto code_r0x014c77e0;
  lVar8 = lVar18;
  if (*(long *)(lVar12 + 0xb0) == 0) goto code_r0x014c77e0;
  iVar6 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                    (*(long *)(lVar12 + 0xb0),lVar17,0);
  if (iVar6 != 0) {
    if (lVar17 == 0) goto code_r0x014c77e0;
    if (*(long *)(lVar17 + 0x58) == 0) goto code_r0x014c77e0;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar4 + -0x58,*(long *)(lVar17 + 0x58),uRam0000000003d3dc70);
    unaff_x22 = 0x3d337d0;
    unaff_x23 = 0x3d3e188;
    while (uVar15 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar4 + -0x58,uRam0000000003d337d0), (uVar15 & 1) != 0) {
      lVar17 = *(long *)(puVar4 + -0x48);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar14,uRam0000000003d41248);
      if (lVar8 == 0) {
        func_0x00f78af4();
code_r0x014c77dc:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x14c77e0);
        (*pcVar2)();
      }
      if (*(long *)(lVar8 + 0x98) == 0) {
        func_0x00f78af4();
        goto code_r0x014c77dc;
      }
      /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar8 + 0x98),lVar17,uRam0000000003d3e188);
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar4 + -0x58,uRam0000000003d337c8);
  }
  do {
    lVar8 = unaff_x22;
    if ((puVar14[0x10] != 0) &&
       (lVar12 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(puVar14[0x10],0,0), lVar12 != 0)) {
      Atlas_Gameplay_Kart_KartFEAnimator__TriggerFEGainXP(lVar12,0);
      puVar24 = &UNK_014c77b8;
      puVar10 = puVar14;
      goto code_r0x014c7830;
    }
code_r0x014c77e0:
    unaff_x22 = lVar8;
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014c782c;
    plVar9 = (long *)___cxa_begin_catch();
    lVar17 = *plVar9;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar4 + -0x58,uRam0000000003d337c8);
  } while (lVar17 == 0);
  func_0x00f78ac0(lVar17,0);
code_r0x014c782c:
  puVar24 = &Atlas_UI_Screens_PostArcadeScreen__AllowExit;
  puVar10 = (undefined8 *)__Unwind_Resume();
code_r0x014c7830:
  register0x00000008 = (BADSPACEBASE *)(puVar4 + -0x90);
  *(long *)(puVar4 + -0x90) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x88) = 0x3d41248;
  *(long *)(puVar4 + -0x80) = lVar17;
  *(undefined8 **)(puVar4 + -0x78) = puVar14;
  *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x68) = puVar24;
  puVar23 = puVar4 + -0x70;
  unaff_x21 = (long *)0x3eb4000;
  auVar30._8_8_ = 0x3d41238;
  auVar30._0_8_ = puVar10;
  if ((bRam0000000003eb4b3f & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b3f = 1;
  }
  *(undefined4 *)((long)puVar10 + 300) = 2;
  lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
  if ((lVar17 == 0) || (*(long *)(lVar17 + 0xc0) == 0)) {
code_r0x014c7920:
    uVar19 = func_0x00f78af4();
    *(long *)(puVar4 + -0xc0) = unaff_x22;
    *(long **)(puVar4 + -0xb8) = unaff_x21;
    *(undefined8 *)(puVar4 + -0xb0) = 0x3d41238;
    *(undefined8 **)(puVar4 + -0xa8) = puVar10;
    *(undefined1 **)(puVar4 + -0xa0) = puVar23;
    *(undefined **)(puVar4 + -0x98) = &Atlas_UI_Screens_PostArcadeScreen__PlayAgainPressed;
    uVar21 = 0x3eb4000;
    if ((bRam0000000003eb4b40 & 1) == 0) {
      func_0x00f78a20(0x3d41238);
      func_0x00f78a20(0x3d41240);
      func_0x00f78a20(0x3d41248);
      bRam0000000003eb4b40 = 1;
    }
    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar19,uRam0000000003d41238);
    if ((lVar17 != 0) && (*(long *)(lVar17 + 0xc0) != 0)) {
      uVar21 = 0x3d41000;
      /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(*(long *)(lVar17 + 0xc0),0);
      lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar19,uRam0000000003d41248);
      if ((lVar17 != 0) && (*(long *)(lVar17 + 0xb8) != 0)) {
        uVar21 = 0x3d41000;
        /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar17 + 0xb8),6,0,0);
        lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar19,uRam0000000003d41240);
        if (lVar17 != 0) {
          puVar10 = *(undefined8 **)(lVar17 + 0x50);
          if (puVar10 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          uVar19 = 0;
          *(undefined8 *)(puVar4 + -0xe0) = unaff_x26;
          *(undefined8 *)(puVar4 + -0xd8) = unaff_x25;
          *(undefined8 *)(puVar4 + -0xd0) = unaff_x24;
          *(undefined8 *)(puVar4 + -200) = unaff_x23;
          *(undefined8 *)(puVar4 + -0xc0) = *(undefined8 *)(puVar4 + -0xc0);
          *(undefined8 *)(puVar4 + -0xb8) = *(undefined8 *)(puVar4 + -0xb8);
          *(undefined8 *)(puVar4 + -0xb0) = *(undefined8 *)(puVar4 + -0xb0);
          *(undefined8 *)(puVar4 + -0xa8) = *(undefined8 *)(puVar4 + -0xa8);
          *(undefined8 *)(puVar4 + -0xa0) = *(undefined8 *)(puVar4 + -0xa0);
          *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(puVar4 + -0x98);
          *(undefined8 **)(puVar4 + -0xe8) = puVar10;
          lVar17 = puVar10[0xd];
          if (lVar17 == 0) {
            puVar23 = puVar4 + -0xe8;
            lVar8 = 1;
          }
          else {
            lVar8 = *(long *)(lVar17 + 0x18);
            if (lVar8 == 0) {
              return puVar10;
            }
            puVar23 = (undefined1 *)(lVar17 + 0x20);
          }
          lVar17 = 0;
          do {
            lVar12 = *(long *)(puVar23 + lVar17 * 8);
            pcVar2 = *(code **)(lVar12 + 0x10);
            plVar9 = *(long **)(lVar12 + 0x20);
            lVar12 = *(long *)(lVar12 + 0x28);
            if (*(short *)(lVar12 + 0x48) == -1) {
              func_0x00f78ad8(lVar12,uVar19);
            }
            iVar6 = func_0x00f78a4c(lVar12);
            if (iVar6 == 0) {
              if ((((plVar9 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
                  ((*(byte *)(*plVar9 + 0x115) & 1) != 0)) || (puVar10[3] == 0))
              goto code_r0x01562a40;
              iVar6 = func_0x00f78a44(lVar12);
              iVar7 = func_0x00f78ec0(lVar12);
              if (iVar6 == 0) {
                uVar1 = *(ushort *)(lVar12 + 0x48);
                if (iVar7 == 0) {
                  lVar12 = *plVar9 + (ulong)uVar1 * 0x10;
                  auVar30 = (**(code **)(lVar12 + 0x138))(plVar9,*(undefined8 *)(lVar12 + 0x140));
                  goto code_r0x01562a4c;
                }
                lVar12 = func_0x00f78a48(lVar12);
                lVar18 = *plVar9;
                uVar15 = (ulong)*(ushort *)(lVar18 + 0x12a);
                if (uVar15 != 0) {
                  piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == lVar12) {
                      puVar11 = (undefined8 *)
                                (lVar18 + (long)(int)(*piVar16 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x01562b10;
                    }
                    piVar16 = piVar16 + 4;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                }
                puVar11 = (undefined8 *)func_0x00fac1f0(plVar9,lVar12,(ulong)uVar1);
code_r0x01562b10:
                pcVar2 = (code *)*puVar11;
                puVar11 = (undefined8 *)puVar11[1];
              }
              else {
                if (iVar7 == 0) {
                  uVar19 = *(undefined8 *)
                            (*plVar9 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar18 = *plVar9;
                  uVar15 = (ulong)*(ushort *)(lVar18 + 0x12a);
                  if (uVar15 != 0) {
                    piVar16 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar16 + -2) == *(long *)(lVar12 + 0x18)) {
                        lVar18 = lVar18 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01562ae8;
                      }
                      piVar16 = piVar16 + 4;
                      uVar15 = uVar15 - 1;
                    } while (uVar15 != 0);
                  }
                  lVar18 = func_0x00fac1f0(plVar9);
code_r0x01562ae8:
                  uVar19 = *(undefined8 *)(lVar18 + 8);
                }
                puVar11 = (undefined8 *)func_0x00f78acc(uVar19,lVar12);
                pcVar2 = (code *)*puVar11;
              }
              auVar30 = (*pcVar2)(plVar9,puVar11);
            }
            else if (*(char *)(lVar12 + 0x4a) == '\0') {
              auVar30 = (*pcVar2)(lVar12);
            }
            else {
code_r0x01562a40:
              auVar30 = (*pcVar2)(plVar9,lVar12);
            }
code_r0x01562a4c:
            uVar19 = auVar30._8_8_;
            lVar17 = lVar17 + 1;
            if (lVar17 == lVar8) {
              return auVar30._0_8_;
            }
          } while( true );
        }
      }
    }
    lVar17 = func_0x00f78af4();
    *(undefined8 *)(puVar4 + -0x100) = unaff_x24;
    *(undefined8 *)(puVar4 + -0xf8) = unaff_x23;
    *(long *)(puVar4 + -0xf0) = unaff_x22;
    *(undefined8 *)(puVar4 + -0xe8) = 0x3d41238;
    *(undefined8 *)(puVar4 + -0xe0) = uVar21;
    *(undefined8 *)(puVar4 + -0xd8) = uVar19;
    *(undefined1 **)(puVar4 + -0xd0) = puVar4 + -0xa0;
    *(undefined **)(puVar4 + -200) = &Atlas_UI_Screens_PostArcadeScreen___ctor;
    if ((bRam0000000003eb4b42 & 1) == 0) {
      func_0x00f78a20(0x3d2c898);
      func_0x00f78a20(0x3d215e0);
      func_0x00f78a20(0x3d1f100);
      func_0x00f78a20(0x3d1a510);
      func_0x00f78a20(0x3d25458);
      bRam0000000003eb4b42 = 1;
    }
    uVar19 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
    if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar19,0);
    if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar19,0);
    if (lVar8 != 0) {
      uVar19 = 0x3d1f100;
      uVar21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar8 + 0x18));
      *(undefined8 *)(lVar17 + 0xa0) = uVar21;
      uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
      lVar8 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar21,0);
      if (lVar8 != 0) {
        uVar19 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar8 + 0x18));
        *(undefined8 *)(lVar17 + 0xa8) = uVar19;
        *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)(puVar4 + -0xd0);
        *(undefined8 *)(puVar4 + -200) = *(undefined8 *)(puVar4 + -200);
        if (lVar17 == 0) {
          auVar30 = func_0x00f78af4();
          puVar11 = auVar30._8_8_;
          puVar10 = auVar30._0_8_;
          uVar21 = puVar11[1];
          uVar19 = *puVar11;
          puVar10[2] = puVar11[2];
          puVar10[1] = uVar21;
          *puVar10 = uVar19;
          return puVar10;
        }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar10 = (undefined8 *)
                  (*(code *)**(undefined8 **)
                              (*(long *)(*(long *)(lRam0000000003d2c898 + 0x18) + 0xc0) + 0x38))();
        return puVar10;
      }
    }
    func_0x00f78af4();
    *(undefined8 *)(puVar4 + -0x150) = unaff_x26;
    *(undefined8 *)(puVar4 + -0x148) = unaff_x25;
    *(undefined8 *)(puVar4 + -0x140) = unaff_x24;
    *(undefined8 *)(puVar4 + -0x138) = 0x3d215e0;
    *(undefined8 *)(puVar4 + -0x130) = 0x3d25458;
    *(undefined8 *)(puVar4 + -0x128) = 0x3d1a510;
    *(undefined8 *)(puVar4 + -0x120) = uVar19;
    *(long *)(puVar4 + -0x118) = lVar17;
    *(undefined1 **)(puVar4 + -0x110) = puVar4 + -0xd0;
    *(undefined **)(puVar4 + -0x108) = &Atlas_UI_Screens_PostArcadeScreen___cctor;
    if ((bRam0000000003eb4b43 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d23df0);
      func_0x00f78a20(0x3d6cb40);
      func_0x00f78a20(0x3d6cbd0);
      func_0x00f78a20(0x3d706f8);
      func_0x00f78a20(0x3d729a8);
      func_0x00f78a20(0x3d6cb00);
      func_0x00f78a20(0x3d69870);
      bRam0000000003eb4b43 = 1;
    }
    uVar27 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('NothingToBronze')*/ uRam0000000003d706f8,0);
    **(undefined4 **)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) = uVar27;
    uVar27 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('BronzeToSilver')*/ uRam0000000003d69870,0);
    *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 4) = uVar27;
    uVar27 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('SilverToGold')*/ uRam0000000003d729a8,0);
    *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 8) = uVar27;
    if (((*(byte *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar19 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_9_CharacterProgress')*/ uRam0000000003d6cbd0,0);
    *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x10) = uVar19;
    uVar19 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_10_CharacterProgress_2')*/ uRam0000000003d6cb00,0);
    *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18) = uVar19;
    puVar10 = (undefined8 *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_17_DailyChallenges')*/ uRam0000000003d6cb40,0);
    *(undefined8 **)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x20) = puVar10;
    return puVar10;
  }
  unaff_x21 = (long *)0x3d41000;
  /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(*(long *)(lVar17 + 0xc0),1,0);
  lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar10,uRam0000000003d41248);
  if ((lVar17 == 0) || (*(long *)(lVar17 + 0xb8) == 0)) goto code_r0x014c7920;
  /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar17 + 0xb8),6,1,1,0);
  lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
  if (((lVar17 == 0) || (*(long *)(lVar17 + 0x110) == 0)) ||
     (lVar17 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar17 + 0x110),0), lVar17 == 0)) goto code_r0x014c7920;
  puVar24 = &UNK_014c7908;
  goto code_r0x0322ef1c;
code_r0x0151ddac:
  lVar18 = auVar31._0_8_;
  *(long *)(puVar5 + -0x20) = lVar17;
  *(long *)(puVar5 + -0x18) = lVar8;
  *(undefined1 **)(puVar5 + -0x10) = puVar23;
  *(undefined **)(puVar5 + -8) = puVar24;
  lVar17 = *(long *)(lVar18 + 0x68);
  lVar12 = lVar8;
  if (lVar17 == 0) goto code_r0x0151de64;
  if (*(int *)(lVar17 + 0x18) == 0) {
code_r0x0151de58:
    uVar19 = func_0x00f78b24(auVar31._0_8_,auVar31._8_8_);
    func_0x00f78ac0(uVar19,0);
  }
  else {
    *(undefined4 *)(lVar17 + 0x20) = 0;
    auVar31 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(1,*(undefined8 *)(lVar18 + 0x10),*(undefined8 *)(lVar18 + 0x20),0);
    lVar12 = lVar18;
    if ((*(uint *)(lVar17 + 0x18) & 0xfffffffe) == 0) goto code_r0x0151de58;
    *(int *)(lVar17 + 0x24) = auVar31._0_4_;
    lVar17 = *(long *)(lVar18 + 0x68);
    auVar31 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(2,*(undefined8 *)(lVar18 + 0x10),*(undefined8 *)(lVar18 + 0x20),0);
    if (lVar17 != 0) {
      if (2 < *(uint *)(lVar17 + 0x18)) {
        *(int *)(lVar17 + 0x28) = auVar31._0_4_;
        lVar17 = *(long *)(lVar18 + 0x68);
        auVar31 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(3,*(undefined8 *)(lVar18 + 0x10),*(undefined8 *)(lVar18 + 0x20),0)
        ;
        if (lVar17 == 0) goto code_r0x0151de64;
        if ((*(uint *)(lVar17 + 0x18) & 0xfffffffc) != 0) {
          *(int *)(lVar17 + 0x2c) = auVar31._0_4_;
          return auVar31._0_8_;
        }
      }
      goto code_r0x0151de58;
    }
  }
code_r0x0151de64:
  auVar31 = func_0x00f78af4();
  lVar8 = auVar31._0_8_;
  *(long *)(puVar5 + -0x40) = lVar17;
  *(long *)(puVar5 + -0x38) = lVar12;
  *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x28) = &Atlas_Stats_UnlockManager__CacheCurrentArcadeRank;
  puVar23 = puVar5 + -0x30;
  puVar24 = &UNK_0151de7c;
  puVar5 = puVar5 + -0x40;
  goto code_r0x0151ddac;
}



// ============================================================
// RVA: 0x14c601c | Atlas.UI.Screens.PostArcadeScreen.OnSkipTapped
// ============================================================

/* WARNING: Possible PIC construction at 0x014c6434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c6458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c647c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c64a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c77b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c7904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151de78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c7338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c7594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c6548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c733c) */
/* WARNING: Removing unreachable block (ram,0x014c734c) */
/* WARNING: Removing unreachable block (ram,0x014c7354) */
/* WARNING: Removing unreachable block (ram,0x014c73a4) */
/* WARNING: Removing unreachable block (ram,0x014c73c4) */
/* WARNING: Removing unreachable block (ram,0x014c73cc) */
/* WARNING: Removing unreachable block (ram,0x0151de7c) */
/* WARNING: Removing unreachable block (ram,0x014500ac) */
/* WARNING: Removing unreachable block (ram,0x01450100) */
/* WARNING: Removing unreachable block (ram,0x0145011c) */
/* WARNING: Removing unreachable block (ram,0x014c7908) */
/* WARNING: Removing unreachable block (ram,0x014c64a4) */
/* WARNING: Removing unreachable block (ram,0x014c64b0) */
/* WARNING: Removing unreachable block (ram,0x014c654c) */
/* WARNING: Removing unreachable block (ram,0x014c6568) */
/* WARNING: Removing unreachable block (ram,0x014c6570) */
/* WARNING: Removing unreachable block (ram,0x014c6574) */
/* WARNING: Removing unreachable block (ram,0x014c6590) */
/* WARNING: Removing unreachable block (ram,0x014c65a0) */
/* WARNING: Removing unreachable block (ram,0x014c65c0) */
/* WARNING: Removing unreachable block (ram,0x014c65d4) */
/* WARNING: Removing unreachable block (ram,0x014c65dc) */
/* WARNING: Removing unreachable block (ram,0x014c661c) */
/* WARNING: Removing unreachable block (ram,0x014c6654) */
/* WARNING: Removing unreachable block (ram,0x014c668c) */
/* WARNING: Removing unreachable block (ram,0x014c66c4) */
/* WARNING: Removing unreachable block (ram,0x014c66d8) */
/* WARNING: Removing unreachable block (ram,0x014c66e0) */
/* WARNING: Removing unreachable block (ram,0x014c6724) */
/* WARNING: Removing unreachable block (ram,0x014c6738) */
/* WARNING: Removing unreachable block (ram,0x014c6740) */
/* WARNING: Removing unreachable block (ram,0x014c675c) */
/* WARNING: Removing unreachable block (ram,0x014c6764) */
/* WARNING: Removing unreachable block (ram,0x014c6798) */
/* WARNING: Removing unreachable block (ram,0x014c67a0) */
/* WARNING: Removing unreachable block (ram,0x014c67e0) */
/* WARNING: Removing unreachable block (ram,0x014c67e8) */
/* WARNING: Removing unreachable block (ram,0x014c67f0) */
/* WARNING: Removing unreachable block (ram,0x014c6804) */
/* WARNING: Removing unreachable block (ram,0x014c680c) */
/* WARNING: Removing unreachable block (ram,0x014c6814) */
/* WARNING: Removing unreachable block (ram,0x014c6820) */
/* WARNING: Removing unreachable block (ram,0x014c6854) */
/* WARNING: Removing unreachable block (ram,0x014c6878) */
/* WARNING: Removing unreachable block (ram,0x014c68ac) */
/* WARNING: Removing unreachable block (ram,0x014c68b4) */
/* WARNING: Removing unreachable block (ram,0x014c68bc) */
/* WARNING: Removing unreachable block (ram,0x014c68c8) */
/* WARNING: Removing unreachable block (ram,0x014c68d0) */
/* WARNING: Removing unreachable block (ram,0x014c68d8) */
/* WARNING: Removing unreachable block (ram,0x014c68e4) */
/* WARNING: Removing unreachable block (ram,0x014c6918) */
/* WARNING: Removing unreachable block (ram,0x014c693c) */
/* WARNING: Removing unreachable block (ram,0x014c6950) */
/* WARNING: Removing unreachable block (ram,0x014c6958) */
/* WARNING: Removing unreachable block (ram,0x014c6990) */
/* WARNING: Removing unreachable block (ram,0x014c69a4) */
/* WARNING: Removing unreachable block (ram,0x014c69ac) */
/* WARNING: Removing unreachable block (ram,0x014c6a00) */
/* WARNING: Removing unreachable block (ram,0x014c6a08) */
/* WARNING: Removing unreachable block (ram,0x014c6a2c) */
/* WARNING: Removing unreachable block (ram,0x014c6a34) */
/* WARNING: Removing unreachable block (ram,0x014c6a3c) */
/* WARNING: Removing unreachable block (ram,0x014c6a48) */
/* WARNING: Removing unreachable block (ram,0x014c6a50) */
/* WARNING: Removing unreachable block (ram,0x014c6a58) */
/* WARNING: Removing unreachable block (ram,0x014c6a64) */
/* WARNING: Removing unreachable block (ram,0x014c6a98) */
/* WARNING: Removing unreachable block (ram,0x014c6abc) */
/* WARNING: Removing unreachable block (ram,0x014c6ad0) */
/* WARNING: Removing unreachable block (ram,0x014c6ad8) */
/* WARNING: Removing unreachable block (ram,0x014c6afc) */
/* WARNING: Removing unreachable block (ram,0x014c6b04) */
/* WARNING: Removing unreachable block (ram,0x014c6b50) */
/* WARNING: Removing unreachable block (ram,0x014c6b64) */
/* WARNING: Removing unreachable block (ram,0x014c6b6c) */
/* WARNING: Removing unreachable block (ram,0x014c6bac) */
/* WARNING: Removing unreachable block (ram,0x014c6bc0) */
/* WARNING: Removing unreachable block (ram,0x014c6bc8) */
/* WARNING: Removing unreachable block (ram,0x014c6c3c) */
/* WARNING: Removing unreachable block (ram,0x014c6c4c) */
/* WARNING: Removing unreachable block (ram,0x014c6c54) */
/* WARNING: Removing unreachable block (ram,0x014c6c60) */
/* WARNING: Removing unreachable block (ram,0x014c6c88) */
/* WARNING: Removing unreachable block (ram,0x014c6cb4) */
/* WARNING: Removing unreachable block (ram,0x014c64bc) */
/* WARNING: Removing unreachable block (ram,0x014c6528) */
/* WARNING: Removing unreachable block (ram,0x014c6538) */
/* WARNING: Removing unreachable block (ram,0x014c650c) */
/* WARNING: Removing unreachable block (ram,0x014c651c) */
/* WARNING: Removing unreachable block (ram,0x014c6524) */
/* WARNING: Removing unreachable block (ram,0x014c64f0) */
/* WARNING: Removing unreachable block (ram,0x014c6500) */
/* WARNING: Removing unreachable block (ram,0x014c6508) */
/* WARNING: Removing unreachable block (ram,0x014c64d4) */
/* WARNING: Removing unreachable block (ram,0x014c64e4) */
/* WARNING: Removing unreachable block (ram,0x014c6540) */
/* WARNING: Removing unreachable block (ram,0x014c64ec) */
/* WARNING: Removing unreachable block (ram,0x014c6480) */
/* WARNING: Removing unreachable block (ram,0x014c6490) */
/* WARNING: Removing unreachable block (ram,0x014c6498) */
/* WARNING: Removing unreachable block (ram,0x014c645c) */
/* WARNING: Removing unreachable block (ram,0x014c646c) */
/* WARNING: Removing unreachable block (ram,0x014c6474) */
/* WARNING: Removing unreachable block (ram,0x014c6438) */
/* WARNING: Removing unreachable block (ram,0x014c6448) */
/* WARNING: Removing unreachable block (ram,0x014c6450) */
/* WARNING: Removing unreachable block (ram,0x014c7598) */
/* WARNING: Recovered jumptable eliminated as dead code */

undefined8 * Atlas_UI_Screens_PostArcadeScreen__OnSkipTapped(undefined8 *param_1)

{
  ushort uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  int extraout_w1;
  int *piVar17;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *plVar18;
  long *unaff_x21;
  long unaff_x22;
  long lVar19;
  undefined8 unaff_x23;
  undefined8 uVar20;
  undefined8 unaff_x24;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 ***unaff_x29;
  undefined *unaff_x30;
  undefined *puVar23;
  float fVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  ulong extraout_d0;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined4 uVar28;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 **ppuStack_60;
  undefined *puStack_58;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  auVar29._8_8_ = unaff_x20;
  auVar29._0_8_ = unaff_x19;
  puVar8 = param_1;
  if ((bRam0000000003eb4b38 & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    puVar8 = (undefined8 *)func_0x00f78a20(0x3d79018);
    bRam0000000003eb4b38 = 1;
  }
  if (*(int *)((long)param_1 + 0x4c) != 2) {
    return puVar8;
  }
  *(undefined1 *)(param_1 + 0x26) = 1;
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) {
    /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$SkipSet*/ func_0x01562ca8(*(long *)(lVar9 + 0x68),0);
    /*DG.Tweening.TweenExtensions$$Complete*/ func_0x016bbb04(param_1[0x24],0);
    /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018,0);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
    if ((lVar9 != 0) &&
       ((*(long *)(lVar9 + 0x110) != 0 &&
        (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar9 + 0x110),0), lVar9 != 0)))) {
code_r0x0322ef1c:
      *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = auVar29._8_8_;
      *(long *)((long)register0x00000008 + -0x18) = auVar29._0_8_;
      *(undefined1 ****)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      if (pcRam0000000003ebf4c0 == (code *)0x0) {
        pcRam0000000003ebf4c0 =
             (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar8 = (undefined8 *)(*pcRam0000000003ebf4c0)(lVar9,0);
      return puVar8;
    }
  }
  lVar9 = func_0x00f78af4();
  puStack_28 = &Atlas_UI_Screens_PostArcadeScreen__OnAfterExit;
  puStack_30 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b34 & 1) == 0) {
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b34 = 1;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d41248);
  if ((lVar10 != 0) && (*(long *)(lVar10 + 0xb8) != 0)) {
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar10 + 0xb8),6,0,0);
    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d41248);
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x70) != 0)) {
      iVar6 = /*Atlas.Stats.DailyChallengeManager$$PollForChallengeRefresh*/ func_0x01574644(*(long *)(lVar10 + 0x70),0);
      if (iVar6 != 0) {
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d41248);
        if ((lVar10 == 0) || (*(long *)(lVar10 + 0x48) == 0)) goto code_r0x014c61d0;
        /*Atlas.Save.SaveManager$$StartSave*/ func_0x014eb4e0(*(long *)(lVar10 + 0x48),0);
      }
      if ((*(long *)(lVar9 + 0x80) != 0) &&
         (lVar9 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(lVar9 + 0x80),0,0),
         lVar9 != 0)) {
        if ((bRam0000000003eb5326 & 1) == 0) {
          func_0x00f78a20(0x3d22c88,0);
          bRam0000000003eb5326 = 1;
        }
        if (((*(ushort *)((long)/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88 + 0x1c) == 0)) {
          func_0x00f78ad0();
        }
        iVar6 = *(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88[0x17] + 0x4c);
        if ((bRam0000000003eb5315 & 1) == 0) {
          func_0x00f78a20(0x3d22c88);
          bRam0000000003eb5315 = 1;
        }
        puVar8 = /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88;
        if (((*(ushort *)((long)/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88 + 0x1c) == 0)) {
          func_0x00f78ad0();
          puVar8 = /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88;
        }
        /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88 = puVar8;
        if ((*(int *)(puVar8[0x17] + 0x4c) != iVar6) || (*(int *)(lVar9 + 0x24) == -1)) {
          *(int *)(lVar9 + 0x24) = iVar6;
        }
        return puVar8;
      }
    }
  }
code_r0x014c61d0:
  puVar8 = (undefined8 *)func_0x00f78af4();
  puVar3 = &stack0xffffffffffffff80;
  puStack_58 = &Atlas_UI_Screens_PostArcadeScreen__TryGetNextAward;
  unaff_x29 = &ppuStack_60;
  plVar18 = (long *)0x3eb4000;
  unaff_x21 = (long *)0x3d41248;
  ppuStack_60 = &puStack_30;
  if ((bRam0000000003eb4b35 & 1) == 0) {
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b35 = 1;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar8,uRam0000000003d41248);
  if (((lVar9 != 0) && (puVar8[0x1a] != 0)) &&
     (lVar10 = *(long *)(puVar8[0x1a] + 0x28), lVar10 != 0)) {
    if (*(uint *)(lVar10 + 0x18) <= *(uint *)((long)puVar8 + 0xbc)) goto code_r0x014c6278;
    if (*(long *)(lVar9 + 0x50) != 0) {
      puVar11 = (undefined8 *)
                /*Atlas.Stats.UnlockManager$$TryGetAndRemoveAwardFromHistory*/ func_0x0152197c(*(long *)(lVar9 + 0x50),
                                *(undefined8 *)
                                 (lVar10 + (long)(int)*(uint *)((long)puVar8 + 0xbc) * 8 + 0x20),
                                puVar8 + 0x1d,puVar8 + 0x22,0);
      *(char *)(puVar8 + 0x1c) = (char)puVar11;
      return puVar11;
    }
  }
  func_0x00f78af4();
code_r0x014c6278:
  uVar12 = func_0x00f78b24();
  puVar23 = &Atlas_UI_Screens_PostArcadeScreen__StartAward;
  auVar29 = func_0x00f78ac0(uVar12,0);
code_r0x014c6284:
  uVar12 = auVar29._0_8_;
  register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x80);
  *(undefined8 *)(puVar3 + -0x70) = unaff_d11;
  *(undefined8 *)(puVar3 + -0x68) = unaff_d10;
  *(ulong *)(puVar3 + -0x60) = unaff_d9;
  *(ulong *)(puVar3 + -0x58) = unaff_d8;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(long *)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = unaff_x21;
  *(long **)(puVar3 + -0x20) = plVar18;
  *(undefined8 **)(puVar3 + -0x18) = puVar8;
  *(undefined1 ****)(puVar3 + -0x10) = unaff_x29;
  *(undefined **)(puVar3 + -8) = puVar23;
  unaff_x29 = (undefined1 ***)(puVar3 + -0x10);
  unaff_x21 = (long *)0x3eb4000;
  unaff_x23 = 0x3d41238;
  if ((bRam0000000003eb4b3a & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d5bae0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7b0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d63a08);
    func_0x00f78a20(0x3d63a10);
    func_0x00f78a20(0x3d63a18);
    func_0x00f78a20(0x3d286e8);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41248);
    func_0x00f78a20(0x3d66fb0);
    bRam0000000003eb4b3a = 1;
  }
  *(undefined4 *)(puVar3 + -0x74) = 0;
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar12,uRam0000000003d41238);
  if (lVar9 != 0) {
    uVar21 = 0x3d41248;
    unaff_x21 = *(long **)(lVar9 + 0x70);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar12,uRam0000000003d41248);
    unaff_x24 = 0x3d41248;
    if (lVar9 != 0) {
      unaff_x22 = *(long *)(lVar9 + 0x88);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar12,uRam0000000003d41238);
      if (((lVar9 != 0) && (unaff_x24 = uVar21, unaff_x22 != 0)) &&
         (uVar21 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(unaff_x22,*(undefined8 *)(lVar9 + 0x50),0),
         unaff_x21 != (long *)0x0)) {
        (**(code **)(*unaff_x21 + 0x558))(unaff_x21,uVar21,*(undefined8 *)(*unaff_x21 + 0x560));
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar12,uRam0000000003d41248);
        if (lVar9 != 0) {
          unaff_x21 = *(long **)(lVar9 + 0x88);
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar12,uRam0000000003d41238);
          if ((lVar9 != 0) && (unaff_x21 != (long *)0x0)) {
            /*Core.Localisation.LocalisationManager$$FixForMultilineIfArabic*/ func_0x0164ff98(unaff_x21,*(undefined8 *)(lVar9 + 0x70),0);
            lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar12,uRam0000000003d41238);
            if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x78), lVar9 != 0)) {
              unaff_x30 = &UNK_014c6438;
              goto code_r0x0322ef1c;
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
  uVar12 = func_0x00f78b24();
  puVar23 = &Atlas_UI_Screens_PostArcadeScreen__HideAward;
  puVar11 = (undefined8 *)func_0x00f78ac0(uVar12,0);
  puVar5 = puVar3 + -0x80;
code_r0x014c6d04:
  puVar4 = puVar5 + -0x40;
  *(ulong *)(puVar5 + -0x40) = unaff_d9;
  *(ulong *)(puVar5 + -0x38) = unaff_d8;
  *(long *)(puVar5 + -0x30) = unaff_x22;
  *(long **)(puVar5 + -0x28) = unaff_x21;
  *(long *)(puVar5 + -0x20) = auVar29._8_8_;
  *(long *)(puVar5 + -0x18) = auVar29._0_8_;
  *(undefined1 ****)(puVar5 + -0x10) = unaff_x29;
  *(undefined **)(puVar5 + -8) = puVar23;
  unaff_x21 = (long *)0x3d78fd8;
  if ((bRam0000000003eb4b3b & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d78fd8);
    bRam0000000003eb4b3b = 1;
  }
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/Dotween_SlideIn')*/ uRam0000000003d78fd8,0);
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar12 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
  puVar11[0x24] = uVar12;
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
  if (lVar9 != 0) {
    unaff_x21 = *(long **)(lVar9 + 0xd0);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) {
      fVar24 = (float)/*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideOutTime*/ func_0x01562c40(*(long *)(lVar9 + 0x68),0);
      uVar21 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,fVar24 * 0.5,unaff_x21,0);
      uVar12 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar12,uVar21,0);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
      if (lVar9 != 0) {
        unaff_x21 = *(long **)(lVar9 + 0xd8);
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0xf0) != 0)) {
          uVar25 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar9 + 0xf0),0);
          unaff_d8 = (ulong)uVar25;
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
          if ((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) {
            uVar26 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideOutTime*/ func_0x01562c40(*(long *)(lVar9 + 0x68),0);
            unaff_x21 = (long *)/*DG.Tweening.ShortcutExtensions$$DOMoveX*/ func_0x016b28e8(uVar25,uVar26,unaff_x21,0,0);
            lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
            if ((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) {
              uVar21 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(unaff_x21,*(undefined4 *)(*(long *)(lVar9 + 0x68) + 0x40),
                                       uRam0000000003d5e7a8);
              puVar8 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar12,uVar21,0);
              *(undefined1 *)((long)puVar11 + 0x94) = 0;
              return puVar8;
            }
          }
        }
      }
    }
  }
  puVar8 = (undefined8 *)func_0x00f78af4();
  puVar3 = puVar5 + -0xd0;
  auVar29._8_8_ = puVar5 + -0xd0;
  auVar29._0_8_ = puVar8;
  *(undefined8 *)(puVar5 + -0xa0) = unaff_d11;
  *(undefined8 *)(puVar5 + -0x98) = unaff_d10;
  *(ulong *)(puVar5 + -0x90) = unaff_d9;
  *(ulong *)(puVar5 + -0x88) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x80) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x78) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x70) = 0x3d41238;
  *(long **)(puVar5 + -0x68) = unaff_x21;
  *(undefined8 *)(puVar5 + -0x60) = uVar12;
  *(undefined8 **)(puVar5 + -0x58) = puVar11;
  *(undefined1 **)(puVar5 + -0x50) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x48) = &Atlas_UI_Screens_PostArcadeScreen__OnUpdate;
  unaff_x29 = (undefined1 ***)(puVar5 + -0x50);
  unaff_d8 = extraout_d0 & 0xffffffff;
  plVar18 = (long *)0x3eb4000;
  unaff_x22 = 0x3d41238;
  lVar9 = 0x3d41238;
  if ((bRam0000000003eb4b3c & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d3e178);
    func_0x00f78a20(0x3d5bad8);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5c7a0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41240);
    func_0x00f78a20(0x3d41248);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d79110);
    func_0x00f78a20(0x3d7cd68);
    bRam0000000003eb4b3c = 1;
  }
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
  lVar10 = unaff_x22;
  uVar12 = unaff_x23;
  uVar21 = unaff_x24;
  if ((lVar13 != 0) && (*(long *)(lVar13 + 0xa8) != 0)) {
    plVar18 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar13 + 0xa8),0);
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
    lVar10 = lVar9;
    if ((lVar13 == 0) ||
       ((*(long *)(lVar13 + 0xb0) == 0 ||
        (/*Atlas.UI.SlantFillBar$$get_FillBotomRightPosition*/ func_0x014fc974(*(long *)(lVar13 + 0xb0),0), plVar18 == (long *)0x0))))
    goto code_r0x014c75c8;
    if (*plVar18 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) goto code_r0x014c75cc;
    puVar11 = (undefined8 *)/*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(plVar18,0);
    if (*(char *)((long)puVar8 + 0x9d) != '\0') {
      return puVar11;
    }
    if (puVar8[0x11] == 0) goto code_r0x014c75c8;
    puVar11 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionVisible*/ func_0x01511a80(puVar8[0x11],0);
    if ((int)puVar11 != 0) {
      if (puVar8[0x11] != 0) {
        puVar11 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionEnding*/ func_0x01511a70(puVar8[0x11],0);
        if (((ulong)puVar11 & 1) != 0) {
          return puVar11;
        }
        if (puVar8[0x10] != 0) {
          puVar11 = (undefined8 *)Atlas_FrontEnd_FrontEndScene__get_IsSceneChanging(puVar8[0x10],0);
          if (((ulong)puVar11 & 1) != 0) {
            return puVar11;
          }
          lVar9 = puVar8[0x11];
          if (lVar9 != 0) {
            *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x80);
            *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x78);
            *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0x70);
            *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)(puVar5 + -0x68);
            *(undefined8 *)(puVar5 + -0x60) = *(undefined8 *)(puVar5 + -0x60);
            *(undefined8 *)(puVar5 + -0x58) = *(undefined8 *)(puVar5 + -0x58);
            *(undefined8 *)(puVar5 + -0x50) = *(undefined8 *)(puVar5 + -0x50);
            *(undefined8 *)(puVar5 + -0x48) = *(undefined8 *)(puVar5 + -0x48);
            if ((bRam0000000003eb4d7b & 1) == 0) {
              func_0x00f78a20(0x3d417a8);
              bRam0000000003eb4d7b = 1;
            }
            if ((*(char *)(lVar9 + 0x10) == '\0') || (*(int *)(lVar9 + 0x30) != 2)) {
              puVar8 = (undefined8 *)0x0;
            }
            else {
              *(undefined4 *)(lVar9 + 0x30) = 3;
              if (*(long *)(lVar9 + 0x40) != 0) {
                /*UnityEngine.Events.UnityEvent<int, Sprite>$$Invoke*/ func_0x01b85798(*(long *)(lVar9 + 0x40),1,0,uRam0000000003d417a8);
              }
              /*Core.Input.InputManager$$ResumeAllInput*/ func_0x0164ae40(0);
              puVar8 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
            return puVar8;
          }
        }
      }
      goto code_r0x014c75c8;
    }
    if (*(char *)((long)puVar8 + 0x9c) == '\0') {
      if (0.0 < *(float *)(puVar8 + 0x12)) {
        *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) - (float)extraout_d0;
        return puVar11;
      }
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar8,uRam0000000003d41248);
      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x98) == 0)) goto code_r0x014c75c8;
      puVar11 = (undefined8 *)/*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar9 + 0x98),uRam0000000003d3e178);
      if (((ulong)puVar11 & 1) != 0) {
        return puVar11;
      }
      if (*(int *)((long)puVar8 + 0x4c) != 2) {
        return puVar11;
      }
      if (*(char *)((long)puVar8 + 0x94) == '\0') goto code_r0x014c7564;
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
      if ((lVar9 == 0) || (puVar8[0x14] == 0)) goto code_r0x014c75c8;
      plVar18 = *(long **)(lVar9 + 0xb0);
      unaff_x21 = (long *)func_0x0001c0f4(puVar8[0x14],(long)*(int *)((long)puVar8 + 0xbc));
      if ((puVar8[0x15] == 0) ||
         (iVar6 = func_0x0001c0f4(puVar8[0x15],(long)*(int *)((long)puVar8 + 0xbc)),
         plVar18 == (long *)0x0)) goto code_r0x014c75c8;
      fVar24 = (float)/*Atlas.UI.SlantFillBar$$CalculateValue*/ func_0x014fcfb8((float)(int)unaff_x21,(float)iVar6,plVar18,0);
      unaff_d9 = (ulong)(uint)fVar24;
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
      if (lVar9 == 0) goto code_r0x014c75c8;
      plVar18 = *(long **)(lVar9 + 0xa0);
      auVar29._8_8_ = plVar18;
      *(int *)(puVar5 + -0xa4) = (int)fVar24;
      unaff_x21 = (long *)func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,puVar5 + -0xa4);
      *(undefined4 *)(puVar5 + -0xa8) = *(undefined4 *)((long)puVar8 + 0xc4);
      unaff_x23 = 0x3d22910;
      uVar20 = 0x3d22910;
      uVar12 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,puVar5 + -0xa8);
      unaff_x24 = 0x3d7cd68;
      uVar22 = 0x3d7cd68;
      uVar14 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0} / {1}')*/ uRam0000000003d7cd68,unaff_x21,uVar12,0);
      uVar12 = unaff_x23;
      uVar21 = unaff_x24;
      if (plVar18 == (long *)0x0) goto code_r0x014c75c8;
      /*Atlas.UI.UIXPBehaviour$$Set*/ func_0x0151db10(plVar18,uVar14,0);
      puVar11 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
      if ((puVar11 == (undefined8 *)0x0) || (uVar12 = uVar20, uVar21 = uVar22, puVar11[0x16] == 0))
      goto code_r0x014c75c8;
      if (*(char *)(puVar11[0x16] + 0x90) != '\0') {
code_r0x014c7554:
        *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) + (float)extraout_d0;
        return puVar11;
      }
      if (*(char *)(puVar8 + 0x25) != '\0') {
        if (puVar8[0x15] != 0) {
          puVar11 = (undefined8 *)func_0x0001c0f4(puVar8[0x15],(long)*(int *)((long)puVar8 + 0xbc));
          if ((fVar24 < (float)(int)puVar11) || (*(char *)((long)puVar8 + 0x119) != '\0'))
          goto code_r0x014c7554;
          *(undefined1 *)((long)puVar8 + 0x119) = 1;
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
          if ((lVar9 != 0) && (*(long *)(lVar9 + 0xb8) != 0)) {
            /*Atlas.UI.UIRewardBehaviour$$Set*/ func_0x0151d2a8(*(long *)(lVar9 + 0xb8),1,0);
            lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
            if ((lVar9 != 0) && (*(long *)(lVar9 + 200) != 0)) {
              plVar18 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(lVar9 + 200),0);
              lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
              if ((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) {
                uVar26 = *(undefined4 *)(*(long *)(lVar9 + 0x68) + 0x4c);
                lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
                if ((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) {
                  uVar28 = *(undefined4 *)(*(long *)(lVar9 + 0x68) + 0x44);
                  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
                  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x68) != 0)) {
                    uVar27 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_RankJumpDuration*/ func_0x01562c60(*(long *)(lVar9 + 0x68),0);
                    /*Atlas.UI.AtlasTweenAnimations$$JumpZoom*/ func_0x0146f84c(uVar26,0x3f800000,uVar28,uVar27,0,0,plVar18,0,0,0);
                    /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/ProgressBarComplete')*/ uRam0000000003d79110,0);
                    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
                    if (lVar9 != 0) {
                      lVar9 = *(long *)(lVar9 + 0xb8);
                      unaff_x21 = (long *)func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(unaff_x21,puVar8,uRam0000000003d5bad8,0);
                      plVar18 = (long *)0x0;
                      if (lVar9 != 0) {
                        puVar11 = (undefined8 *)/*Atlas.UI.UIRewardBehaviour$$Wiggle*/ func_0x0151d394(0,lVar9,unaff_x21,0);
                        goto code_r0x014c7554;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_r0x014c75c8;
      }
      puVar23 = &UNK_014c733c;
      puVar5 = puVar5 + -0xd0;
      puVar11 = puVar8;
      goto code_r0x014c6d04;
    }
    *(undefined1 *)((long)puVar8 + 0x9c) = 0;
    if (*(char *)(puVar8 + 0x26) != '\0') {
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar8,uRam0000000003d41240);
      if (lVar9 == 0) goto code_r0x014c75c8;
      *(undefined1 *)(lVar9 + 0x68) = 1;
    }
    plVar18 = (long *)puVar8[0x10];
    unaff_x21 = (long *)puVar8[0x1b];
    unaff_x22 = 0x3d41248;
    lVar10 = 0x3d41248;
    uVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar8,uRam0000000003d41248);
    puVar11 = (undefined8 *)/*Atlas.UI.Screens.RewardScreenExtensions$$RunRewardSequenceIfRewardUnseen<SingleplayerChapterBehaviour, SingleplayerChapterScreen.TransitionData>*/ func_0x018de5e0(plVar18,unaff_x21,puVar8,uVar14,uRam0000000003d5c7a0);
    if ((int)puVar11 == 0) goto code_r0x014c75a4;
    *(undefined1 *)((long)puVar8 + 0x9d) = 1;
    lVar9 = puVar8[0x15];
    if (lVar9 == 0) goto code_r0x014c75c8;
    if (*(uint *)(lVar9 + 0x18) <= *(uint *)((long)puVar8 + 0xbc)) goto code_r0x014c75d0;
    if (*(int *)(lVar9 + (long)(int)*(uint *)((long)puVar8 + 0xbc) * 4 + 0x20) <
        *(int *)((long)puVar8 + 0xc4)) {
      return puVar11;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar8,uRam0000000003d41248);
    if (lVar9 == 0) goto code_r0x014c75c8;
    plVar18 = *(long **)(lVar9 + 0x50);
    puVar11 = (undefined8 *)Atlas_UI_Screens_PostArcadeScreen__CreateScreenData(puVar8);
    if (plVar18 != (long *)0x0) {
      plVar18[0xf] = (long)puVar11;
      if (*(char *)((long)puVar8 + 0xcc) == '\0') {
        return puVar11;
      }
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar8,uRam0000000003d41248);
      if ((lVar9 != 0) && (*(ulong *)(lVar9 + 0x50) != 0)) {
        auVar30._8_8_ = 0;
        auVar30._0_8_ = *(ulong *)(lVar9 + 0x50);
        puVar4 = *(undefined1 **)(puVar5 + -0x50);
        puVar23 = *(undefined **)(puVar5 + -0x48);
        lVar9 = *(long *)(puVar5 + -0x60);
        lVar10 = *(long *)(puVar5 + -0x58);
        puVar5 = puVar5 + -0x40;
        goto code_r0x0151ddac;
      }
    }
  }
code_r0x014c75c8:
  func_0x00f78af4();
  unaff_x22 = lVar10;
code_r0x014c75cc:
  func_0x00f78e5c();
  unaff_x23 = uVar12;
  unaff_x24 = uVar21;
code_r0x014c75d0:
  uVar12 = func_0x00f78b24();
  puVar23 = &Atlas_UI_Screens_PostArcadeScreen__PlacementAwardSequenceEnded;
  puVar15 = (undefined8 *)func_0x00f78ac0(uVar12,0);
  puVar4 = puVar5 + -0xd0;
  puVar11 = puVar8;
  goto code_r0x014c75dc;
code_r0x014c7564:
  if (*(char *)((long)puVar8 + 0x119) != '\0') {
    return puVar11;
  }
  if (*(char *)(puVar8 + 0x1c) == '\0') goto code_r0x014c759c;
  uVar12 = puVar8[0x1d];
  uVar14 = puVar8[0x20];
  uVar21 = puVar8[0x1f];
  *(undefined8 *)(puVar5 + -200) = puVar8[0x1e];
  *(undefined8 *)(puVar5 + -0xd0) = uVar12;
  *(undefined8 *)(puVar5 + -0xb8) = uVar14;
  *(undefined8 *)(puVar5 + -0xc0) = uVar21;
  *(undefined8 *)(puVar5 + -0xb0) = puVar8[0x21];
  puVar23 = &UNK_014c7598;
  goto code_r0x014c6284;
code_r0x0151ddac:
  lVar19 = auVar30._0_8_;
  *(long *)(puVar5 + -0x20) = lVar9;
  *(long *)(puVar5 + -0x18) = lVar10;
  *(undefined1 **)(puVar5 + -0x10) = puVar4;
  *(undefined **)(puVar5 + -8) = puVar23;
  lVar9 = *(long *)(lVar19 + 0x68);
  lVar13 = lVar10;
  if (lVar9 == 0) goto code_r0x0151de64;
  if (*(int *)(lVar9 + 0x18) == 0) {
code_r0x0151de58:
    uVar12 = func_0x00f78b24(auVar30._0_8_,auVar30._8_8_);
    func_0x00f78ac0(uVar12,0);
  }
  else {
    *(undefined4 *)(lVar9 + 0x20) = 0;
    auVar30 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(1,*(undefined8 *)(lVar19 + 0x10),*(undefined8 *)(lVar19 + 0x20),0);
    lVar13 = lVar19;
    if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto code_r0x0151de58;
    *(int *)(lVar9 + 0x24) = auVar30._0_4_;
    lVar9 = *(long *)(lVar19 + 0x68);
    auVar30 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(2,*(undefined8 *)(lVar19 + 0x10),*(undefined8 *)(lVar19 + 0x20),0);
    if (lVar9 != 0) {
      if (2 < *(uint *)(lVar9 + 0x18)) {
        *(int *)(lVar9 + 0x28) = auVar30._0_4_;
        lVar9 = *(long *)(lVar19 + 0x68);
        auVar30 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(3,*(undefined8 *)(lVar19 + 0x10),*(undefined8 *)(lVar19 + 0x20),0)
        ;
        if (lVar9 == 0) goto code_r0x0151de64;
        if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
          *(int *)(lVar9 + 0x2c) = auVar30._0_4_;
          return auVar30._0_8_;
        }
      }
      goto code_r0x0151de58;
    }
  }
code_r0x0151de64:
  auVar30 = func_0x00f78af4();
  lVar10 = auVar30._0_8_;
  *(long *)(puVar5 + -0x40) = lVar9;
  *(long *)(puVar5 + -0x38) = lVar13;
  *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x28) = &Atlas_Stats_UnlockManager__CacheCurrentArcadeRank;
  puVar4 = puVar5 + -0x30;
  puVar23 = &UNK_0151de7c;
  puVar5 = puVar5 + -0x40;
  goto code_r0x0151ddac;
code_r0x014c759c:
  if (*(char *)(puVar8 + 0x23) != '\0') {
    return puVar11;
  }
code_r0x014c75a4:
  unaff_x29 = *(undefined1 ****)(puVar5 + -0x50);
  puVar23 = *(undefined **)(puVar5 + -0x48);
  plVar18 = *(long **)(puVar5 + -0x60);
  puVar11 = *(undefined8 **)(puVar5 + -0x58);
  unaff_x22 = *(long *)(puVar5 + -0x70);
  unaff_x21 = *(long **)(puVar5 + -0x68);
  unaff_x24 = *(undefined8 *)(puVar5 + -0x80);
  unaff_x23 = *(undefined8 *)(puVar5 + -0x78);
  puVar15 = puVar8;
code_r0x014c75dc:
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(long *)(puVar4 + -0x30) = unaff_x22;
  *(long **)(puVar4 + -0x28) = unaff_x21;
  *(long **)(puVar4 + -0x20) = plVar18;
  *(undefined8 **)(puVar4 + -0x18) = puVar11;
  *(undefined1 ****)(puVar4 + -0x10) = unaff_x29;
  *(undefined **)(puVar4 + -8) = puVar23;
  lVar9 = 0x3eb4000;
  puVar8 = puVar15;
  if ((bRam0000000003eb4b3e & 1) == 0) {
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d23df0);
    puVar8 = (undefined8 *)func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b3e = 1;
  }
  *(undefined8 *)(puVar4 + -0x58) = 0;
  *(undefined8 *)(puVar4 + -0x50) = 0;
  *(undefined8 *)(puVar4 + -0x48) = 0;
  if (*(char *)(puVar15 + 0x23) != '\0') {
    return puVar8;
  }
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar15,uRam0000000003d41248);
  lVar10 = unaff_x22;
  if (lVar13 == 0) goto code_r0x014c77e0;
  if (*(long *)(lVar13 + 0x20) == 0) goto code_r0x014c77e0;
  lVar13 = *(long *)(*(long *)(lVar13 + 0x20) + 0x10);
  unaff_x22 = 0x3d23df0;
  lVar19 = 0x3d23df0;
  if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar9 = 0;
  lVar10 = unaff_x22;
  if (lVar13 == 0) goto code_r0x014c77e0;
  lVar9 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar13,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18),
                          uRam0000000003d57280);
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar15,uRam0000000003d41248);
  if (lVar13 == 0) goto code_r0x014c77e0;
  lVar10 = lVar19;
  if (*(long *)(lVar13 + 0xb0) == 0) goto code_r0x014c77e0;
  iVar6 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                    (*(long *)(lVar13 + 0xb0),lVar9,0);
  if (iVar6 != 0) {
    if (lVar9 == 0) goto code_r0x014c77e0;
    if (*(long *)(lVar9 + 0x58) == 0) goto code_r0x014c77e0;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar4 + -0x58,*(long *)(lVar9 + 0x58),uRam0000000003d3dc70);
    unaff_x22 = 0x3d337d0;
    unaff_x23 = 0x3d3e188;
    while (uVar16 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar4 + -0x58,uRam0000000003d337d0), (uVar16 & 1) != 0) {
      lVar9 = *(long *)(puVar4 + -0x48);
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar15,uRam0000000003d41248);
      if (lVar10 == 0) {
        func_0x00f78af4();
code_r0x014c77dc:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x14c77e0);
        (*pcVar2)();
      }
      if (*(long *)(lVar10 + 0x98) == 0) {
        func_0x00f78af4();
        goto code_r0x014c77dc;
      }
      /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar10 + 0x98),lVar9,uRam0000000003d3e188);
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar4 + -0x58,uRam0000000003d337c8);
  }
  do {
    lVar10 = unaff_x22;
    if ((puVar15[0x10] != 0) &&
       (lVar13 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(puVar15[0x10],0,0), lVar13 != 0)) {
      Atlas_Gameplay_Kart_KartFEAnimator__TriggerFEGainXP(lVar13,0);
      puVar23 = &UNK_014c77b8;
      puVar8 = puVar15;
      goto code_r0x014c7830;
    }
code_r0x014c77e0:
    unaff_x22 = lVar10;
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014c782c;
    plVar18 = (long *)___cxa_begin_catch();
    lVar9 = *plVar18;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar4 + -0x58,uRam0000000003d337c8);
  } while (lVar9 == 0);
  func_0x00f78ac0(lVar9,0);
code_r0x014c782c:
  puVar23 = &Atlas_UI_Screens_PostArcadeScreen__AllowExit;
  puVar8 = (undefined8 *)__Unwind_Resume();
code_r0x014c7830:
  register0x00000008 = (BADSPACEBASE *)(puVar4 + -0x90);
  *(long *)(puVar4 + -0x90) = unaff_x22;
  *(undefined8 *)(puVar4 + -0x88) = 0x3d41248;
  *(long *)(puVar4 + -0x80) = lVar9;
  *(undefined8 **)(puVar4 + -0x78) = puVar15;
  *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x68) = puVar23;
  unaff_x29 = (undefined1 ***)(puVar4 + -0x70);
  unaff_x21 = (long *)0x3eb4000;
  auVar29._8_8_ = 0x3d41238;
  auVar29._0_8_ = puVar8;
  if ((bRam0000000003eb4b3f & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b3f = 1;
  }
  *(undefined4 *)((long)puVar8 + 300) = 2;
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0xc0) != 0)) {
    unaff_x21 = (long *)0x3d41000;
    /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(*(long *)(lVar9 + 0xc0),1,0);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar8,uRam0000000003d41248);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar9 + 0xb8),6,1,1,0);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
      if (((lVar9 != 0) && (*(long *)(lVar9 + 0x110) != 0)) &&
         (lVar9 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar9 + 0x110),0), lVar9 != 0)) {
        unaff_x30 = &UNK_014c7908;
        goto code_r0x0322ef1c;
      }
    }
  }
  uVar12 = func_0x00f78af4();
  *(long *)(puVar4 + -0xc0) = unaff_x22;
  *(long **)(puVar4 + -0xb8) = unaff_x21;
  *(undefined8 *)(puVar4 + -0xb0) = 0x3d41238;
  *(undefined8 **)(puVar4 + -0xa8) = puVar8;
  *(undefined1 ****)(puVar4 + -0xa0) = unaff_x29;
  *(undefined **)(puVar4 + -0x98) = &Atlas_UI_Screens_PostArcadeScreen__PlayAgainPressed;
  uVar21 = 0x3eb4000;
  if ((bRam0000000003eb4b40 & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41240);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b40 = 1;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar12,uRam0000000003d41238);
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0xc0) != 0)) {
    uVar21 = 0x3d41000;
    /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(*(long *)(lVar9 + 0xc0),0);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar12,uRam0000000003d41248);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0xb8) != 0)) {
      uVar21 = 0x3d41000;
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar9 + 0xb8),6,0,0);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar12,uRam0000000003d41240);
      if (lVar9 != 0) {
        puVar8 = *(undefined8 **)(lVar9 + 0x50);
        if (puVar8 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        uVar12 = 0;
        *(undefined8 *)(puVar4 + -0xe0) = unaff_x26;
        *(undefined8 *)(puVar4 + -0xd8) = unaff_x25;
        *(undefined8 *)(puVar4 + -0xd0) = unaff_x24;
        *(undefined8 *)(puVar4 + -200) = unaff_x23;
        *(undefined8 *)(puVar4 + -0xc0) = *(undefined8 *)(puVar4 + -0xc0);
        *(undefined8 *)(puVar4 + -0xb8) = *(undefined8 *)(puVar4 + -0xb8);
        *(undefined8 *)(puVar4 + -0xb0) = *(undefined8 *)(puVar4 + -0xb0);
        *(undefined8 *)(puVar4 + -0xa8) = *(undefined8 *)(puVar4 + -0xa8);
        *(undefined8 *)(puVar4 + -0xa0) = *(undefined8 *)(puVar4 + -0xa0);
        *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(puVar4 + -0x98);
        *(undefined8 **)(puVar4 + -0xe8) = puVar8;
        lVar9 = puVar8[0xd];
        if (lVar9 == 0) {
          puVar5 = puVar4 + -0xe8;
          lVar10 = 1;
        }
        else {
          lVar10 = *(long *)(lVar9 + 0x18);
          if (lVar10 == 0) {
            return puVar8;
          }
          puVar5 = (undefined1 *)(lVar9 + 0x20);
        }
        lVar9 = 0;
        do {
          lVar13 = *(long *)(puVar5 + lVar9 * 8);
          pcVar2 = *(code **)(lVar13 + 0x10);
          plVar18 = *(long **)(lVar13 + 0x20);
          lVar13 = *(long *)(lVar13 + 0x28);
          if (*(short *)(lVar13 + 0x48) == -1) {
            func_0x00f78ad8(lVar13,uVar12);
          }
          iVar6 = func_0x00f78a4c(lVar13);
          if (iVar6 == 0) {
            if ((((plVar18 == (long *)0x0) || (*(short *)(lVar13 + 0x48) == -1)) ||
                ((*(byte *)(*plVar18 + 0x115) & 1) != 0)) || (puVar8[3] == 0))
            goto code_r0x01562a40;
            iVar6 = func_0x00f78a44(lVar13);
            iVar7 = func_0x00f78ec0(lVar13);
            if (iVar6 == 0) {
              uVar1 = *(ushort *)(lVar13 + 0x48);
              if (iVar7 == 0) {
                lVar13 = *plVar18 + (ulong)uVar1 * 0x10;
                auVar29 = (**(code **)(lVar13 + 0x138))(plVar18,*(undefined8 *)(lVar13 + 0x140));
                goto code_r0x01562a4c;
              }
              lVar13 = func_0x00f78a48(lVar13);
              lVar19 = *plVar18;
              uVar16 = (ulong)*(ushort *)(lVar19 + 0x12a);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar13) {
                    puVar11 = (undefined8 *)
                              (lVar19 + (long)(int)(*piVar17 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x01562b10;
                  }
                  piVar17 = piVar17 + 4;
                  uVar16 = uVar16 - 1;
                } while (uVar16 != 0);
              }
              puVar11 = (undefined8 *)func_0x00fac1f0(plVar18,lVar13,(ulong)uVar1);
code_r0x01562b10:
              pcVar2 = (code *)*puVar11;
              puVar11 = (undefined8 *)puVar11[1];
            }
            else {
              if (iVar7 == 0) {
                uVar12 = *(undefined8 *)
                          (*plVar18 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar19 = *plVar18;
                uVar16 = (ulong)*(ushort *)(lVar19 + 0x12a);
                if (uVar16 != 0) {
                  piVar17 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)(lVar13 + 0x18)) {
                      lVar19 = lVar19 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01562ae8;
                    }
                    piVar17 = piVar17 + 4;
                    uVar16 = uVar16 - 1;
                  } while (uVar16 != 0);
                }
                lVar19 = func_0x00fac1f0(plVar18);
code_r0x01562ae8:
                uVar12 = *(undefined8 *)(lVar19 + 8);
              }
              puVar11 = (undefined8 *)func_0x00f78acc(uVar12,lVar13);
              pcVar2 = (code *)*puVar11;
            }
            auVar29 = (*pcVar2)(plVar18,puVar11);
          }
          else if (*(char *)(lVar13 + 0x4a) == '\0') {
            auVar29 = (*pcVar2)(lVar13);
          }
          else {
code_r0x01562a40:
            auVar29 = (*pcVar2)(plVar18,lVar13);
          }
code_r0x01562a4c:
          uVar12 = auVar29._8_8_;
          lVar9 = lVar9 + 1;
          if (lVar9 == lVar10) {
            return auVar29._0_8_;
          }
        } while( true );
      }
    }
  }
  lVar9 = func_0x00f78af4();
  *(undefined8 *)(puVar4 + -0x100) = unaff_x24;
  *(undefined8 *)(puVar4 + -0xf8) = unaff_x23;
  *(long *)(puVar4 + -0xf0) = unaff_x22;
  *(undefined8 *)(puVar4 + -0xe8) = 0x3d41238;
  *(undefined8 *)(puVar4 + -0xe0) = uVar21;
  *(undefined8 *)(puVar4 + -0xd8) = uVar12;
  *(undefined1 **)(puVar4 + -0xd0) = puVar4 + -0xa0;
  *(undefined **)(puVar4 + -200) = &Atlas_UI_Screens_PostArcadeScreen___ctor;
  if ((bRam0000000003eb4b42 & 1) == 0) {
    func_0x00f78a20(0x3d2c898);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4b42 = 1;
  }
  uVar12 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar12 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar12,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar12,0);
  if (lVar10 != 0) {
    uVar12 = 0x3d1f100;
    uVar21 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar10 + 0x18));
    *(undefined8 *)(lVar9 + 0xa0) = uVar21;
    uVar21 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar10 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar21,0);
    if (lVar10 != 0) {
      uVar12 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar10 + 0x18));
      *(undefined8 *)(lVar9 + 0xa8) = uVar12;
      *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)(puVar4 + -0xd0);
      *(undefined8 *)(puVar4 + -200) = *(undefined8 *)(puVar4 + -200);
      if (lVar9 == 0) {
        auVar29 = func_0x00f78af4();
        puVar11 = auVar29._8_8_;
        puVar8 = auVar29._0_8_;
        uVar21 = puVar11[1];
        uVar12 = *puVar11;
        puVar8[2] = puVar11[2];
        puVar8[1] = uVar21;
        *puVar8 = uVar12;
        return puVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar8 = (undefined8 *)
               (*(code *)**(undefined8 **)
                           (*(long *)(*(long *)(lRam0000000003d2c898 + 0x18) + 0xc0) + 0x38))();
      return puVar8;
    }
  }
  func_0x00f78af4();
  *(undefined8 *)(puVar4 + -0x150) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x148) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x140) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x138) = 0x3d215e0;
  *(undefined8 *)(puVar4 + -0x130) = 0x3d25458;
  *(undefined8 *)(puVar4 + -0x128) = 0x3d1a510;
  *(undefined8 *)(puVar4 + -0x120) = uVar12;
  *(long *)(puVar4 + -0x118) = lVar9;
  *(undefined1 **)(puVar4 + -0x110) = puVar4 + -0xd0;
  *(undefined **)(puVar4 + -0x108) = &Atlas_UI_Screens_PostArcadeScreen___cctor;
  if ((bRam0000000003eb4b43 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d23df0);
    func_0x00f78a20(0x3d6cb40);
    func_0x00f78a20(0x3d6cbd0);
    func_0x00f78a20(0x3d706f8);
    func_0x00f78a20(0x3d729a8);
    func_0x00f78a20(0x3d6cb00);
    func_0x00f78a20(0x3d69870);
    bRam0000000003eb4b43 = 1;
  }
  uVar26 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('NothingToBronze')*/ uRam0000000003d706f8,0);
  **(undefined4 **)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) = uVar26;
  uVar26 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('BronzeToSilver')*/ uRam0000000003d69870,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 4) = uVar26;
  uVar26 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('SilverToGold')*/ uRam0000000003d729a8,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 8) = uVar26;
  if (((*(byte *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_9_CharacterProgress')*/ uRam0000000003d6cbd0,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x10) = uVar12;
  uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_10_CharacterProgress_2')*/ uRam0000000003d6cb00,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18) = uVar12;
  puVar8 = (undefined8 *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_17_DailyChallenges')*/ uRam0000000003d6cb40,0);
  *(undefined8 **)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x20) = puVar8;
  return puVar8;
}



// ============================================================
// RVA: 0x14c60fc | Atlas.UI.Screens.PostArcadeScreen.OnAfterExit
// ============================================================

/* WARNING: Possible PIC construction at 0x014c77b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151de78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c7338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c7594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c733c) */
/* WARNING: Removing unreachable block (ram,0x014c734c) */
/* WARNING: Removing unreachable block (ram,0x014c7354) */
/* WARNING: Removing unreachable block (ram,0x014c73a4) */
/* WARNING: Removing unreachable block (ram,0x014c73c4) */
/* WARNING: Removing unreachable block (ram,0x014c73cc) */
/* WARNING: Removing unreachable block (ram,0x0151de7c) */
/* WARNING: Removing unreachable block (ram,0x014500ac) */
/* WARNING: Removing unreachable block (ram,0x01450100) */
/* WARNING: Removing unreachable block (ram,0x0145011c) */
/* WARNING: Removing unreachable block (ram,0x014c7598) */

undefined8 *
Atlas_UI_Screens_PostArcadeScreen__OnAfterExit
          (undefined1 param_1 [16],undefined1 param_2 [16],uint param_3,long param_4)

{
  ushort uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int extraout_w1;
  long lVar15;
  long *plVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  long unaff_x22;
  long lVar20;
  undefined8 unaff_x23;
  undefined8 uVar21;
  undefined8 unaff_x24;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 unaff_x25;
  undefined8 uVar24;
  undefined8 unaff_x26;
  undefined1 **ppuVar25;
  undefined *puVar26;
  float fVar27;
  uint uVar28;
  undefined4 uVar29;
  uint uVar30;
  uint uVar31;
  undefined4 uVar32;
  ulong extraout_d0;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined4 uVar33;
  ulong unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4b34 & 1) == 0) {
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b34 = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41248);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0xb8) != 0)) {
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar8 + 0xb8),6,0,0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41248);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x70) != 0)) {
      iVar6 = /*Atlas.Stats.DailyChallengeManager$$PollForChallengeRefresh*/ func_0x01574644(*(long *)(lVar8 + 0x70),0);
      if (iVar6 != 0) {
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41248);
        if ((lVar8 == 0) || (*(long *)(lVar8 + 0x48) == 0)) goto LAB_014c61d0;
        /*Atlas.Save.SaveManager$$StartSave*/ func_0x014eb4e0(*(long *)(lVar8 + 0x48),0);
      }
      if ((*(long *)(param_4 + 0x80) != 0) &&
         (lVar8 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(param_4 + 0x80),0,0),
         lVar8 != 0)) {
        if ((bRam0000000003eb5326 & 1) == 0) {
          func_0x00f78a20(0x3d22c88,0);
          bRam0000000003eb5326 = 1;
        }
        if (((*(ushort *)((long)/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88 + 0x1c) == 0)) {
          func_0x00f78ad0();
        }
        iVar6 = *(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88[0x17] + 0x4c);
        if ((bRam0000000003eb5315 & 1) == 0) {
          func_0x00f78a20(0x3d22c88);
          bRam0000000003eb5315 = 1;
        }
        puVar9 = /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88;
        if (((*(ushort *)((long)/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88 + 0x1c) == 0)) {
          func_0x00f78ad0();
          puVar9 = /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88;
        }
        /*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ puRam0000000003d22c88 = puVar9;
        if ((*(int *)(puVar9[0x17] + 0x4c) != iVar6) || (*(int *)(lVar8 + 0x24) == -1)) {
          *(int *)(lVar8 + 0x24) = iVar6;
        }
        return puVar9;
      }
    }
  }
LAB_014c61d0:
  puVar9 = (undefined8 *)func_0x00f78af4();
  puVar3 = &stack0xffffffffffffffa0;
  puStack_38 = &Atlas_UI_Screens_PostArcadeScreen__TryGetNextAward;
  ppuVar25 = &puStack_40;
  plVar19 = (long *)0x3d41248;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b35 & 1) == 0) {
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b35 = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar9,uRam0000000003d41248);
  if (((lVar8 != 0) && (puVar9[0x1a] != 0)) &&
     (lVar15 = *(long *)(puVar9[0x1a] + 0x28), lVar15 != 0)) {
    if (*(uint *)(lVar15 + 0x18) <= *(uint *)((long)puVar9 + 0xbc)) goto code_r0x014c6278;
    if (*(long *)(lVar8 + 0x50) != 0) {
      puVar10 = (undefined8 *)
                /*Atlas.Stats.UnlockManager$$TryGetAndRemoveAwardFromHistory*/ func_0x0152197c(*(long *)(lVar8 + 0x50),
                                *(undefined8 *)
                                 (lVar15 + (long)(int)*(uint *)((long)puVar9 + 0xbc) * 8 + 0x20),
                                puVar9 + 0x1d,puVar9 + 0x22,0);
      *(char *)(puVar9 + 0x1c) = (char)puVar10;
      return puVar10;
    }
  }
  func_0x00f78af4();
code_r0x014c6278:
  uVar11 = func_0x00f78b24();
  puVar26 = &Atlas_UI_Screens_PostArcadeScreen__StartAward;
  auVar34 = func_0x00f78ac0(uVar11,0);
  plVar16 = (long *)0x3eb4000;
code_r0x014c6284:
  plVar18 = auVar34._8_8_;
  puVar10 = auVar34._0_8_;
  *(undefined8 *)(puVar3 + -0x70) = unaff_d11;
  *(ulong *)(puVar3 + -0x68) = unaff_d10;
  *(ulong *)(puVar3 + -0x60) = unaff_d9;
  *(ulong *)(puVar3 + -0x58) = unaff_d8;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(long *)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = plVar19;
  *(long **)(puVar3 + -0x20) = plVar16;
  *(undefined8 **)(puVar3 + -0x18) = puVar9;
  *(undefined1 ***)(puVar3 + -0x10) = ppuVar25;
  *(undefined **)(puVar3 + -8) = puVar26;
  ppuVar25 = (undefined1 **)(puVar3 + -0x10);
  plVar19 = (long *)0x3eb4000;
  unaff_x23 = 0x3d41238;
  if ((bRam0000000003eb4b3a & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d5bae0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7b0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d63a08);
    func_0x00f78a20(0x3d63a10);
    func_0x00f78a20(0x3d63a18);
    func_0x00f78a20(0x3d286e8);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41248);
    func_0x00f78a20(0x3d66fb0);
    bRam0000000003eb4b3a = 1;
  }
  *(undefined4 *)(puVar3 + -0x74) = 0;
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
  if (lVar8 != 0) {
    uVar11 = 0x3d41248;
    plVar19 = *(long **)(lVar8 + 0x70);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar10,uRam0000000003d41248);
    unaff_x24 = 0x3d41248;
    if (lVar8 != 0) {
      unaff_x22 = *(long *)(lVar8 + 0x88);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
      if (((lVar8 != 0) && (unaff_x24 = uVar11, unaff_x22 != 0)) &&
         (uVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(unaff_x22,*(undefined8 *)(lVar8 + 0x50),0),
         plVar19 != (long *)0x0)) {
        (**(code **)(*plVar19 + 0x558))(plVar19,uVar11,*(undefined8 *)(*plVar19 + 0x560));
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar10,uRam0000000003d41248);
        if (lVar8 != 0) {
          plVar19 = *(long **)(lVar8 + 0x88);
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
          if ((lVar8 != 0) && (plVar19 != (long *)0x0)) {
            /*Core.Localisation.LocalisationManager$$FixForMultilineIfArabic*/ func_0x0164ff98(plVar19,*(undefined8 *)(lVar8 + 0x70),0);
            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
            if ((lVar8 != 0) && (*(long *)(lVar8 + 0x78) != 0)) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar8 + 0x78),0,0);
              lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
              if ((lVar8 != 0) && (*(long *)(lVar8 + 0x80) != 0)) {
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar8 + 0x80),0,0);
                lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                if ((lVar8 != 0) && (*(long *)(lVar8 + 0x88) != 0)) {
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar8 + 0x88),0,0);
                  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x90) != 0)) {
                    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar8 + 0x90),0,0);
                    uVar31 = param_3;
                    if (*(int *)((long)plVar18 + 0x14) == 4) {
                      switch((int)*plVar18) {
                      case 0:
                        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                        if (lVar8 != 0) {
                          lVar8 = *(long *)(lVar8 + 0x90);
joined_r0x014c653c:
                          if (lVar8 != 0) {
                            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,1,0);
                            uVar31 = param_3;
                            goto code_r0x014c654c;
                          }
                        }
                        break;
                      case 1:
                        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                        if (lVar8 != 0) {
                          lVar8 = *(long *)(lVar8 + 0x88);
                          goto joined_r0x014c653c;
                        }
                        break;
                      case 2:
                        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                        if (lVar8 != 0) {
                          lVar8 = *(long *)(lVar8 + 0x80);
                          goto joined_r0x014c653c;
                        }
                        break;
                      case 3:
                        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                        if (lVar8 != 0) {
                          lVar8 = *(long *)(lVar8 + 0x78);
                          goto joined_r0x014c653c;
                        }
                        break;
                      default:
                        goto code_r0x014c654c;
                      }
                    }
                    else {
code_r0x014c654c:
                      *(undefined1 *)(puVar10 + 0x25) = 1;
                      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar11 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
                      puVar10[0x24] = uVar11;
                      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                      param_3 = uVar31;
                      if (lVar8 != 0) {
                        lVar8 = *(long *)(lVar8 + 0x100);
                        /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                        plVar18 = (long *)0x0;
                        param_3 = uVar31;
                        if (lVar8 != 0) {
                          /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar8,0);
                          plVar18 = (long *)puVar10[0x24];
                          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                          param_3 = uVar31;
                          if (lVar8 != 0) {
                            plVar19 = *(long **)(lVar8 + 0xd8);
                            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                            param_3 = uVar31;
                            if ((lVar8 != 0) && (*(long *)(lVar8 + 0xe0) != 0)) {
                              uVar11 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar8 + 0xe0),0);
                              uVar11 = /*DG.Tweening.ShortcutExtensions$$DOMoveX*/ func_0x016b28e8(uVar11,0,plVar19,0,0);
                              plVar18 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(plVar18,uVar11,0);
                              lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                              param_3 = uVar31;
                              if (lVar8 != 0) {
                                uVar11 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,0,*(undefined8 *)(lVar8 + 0x100)
                                                         ,0);
                                plVar18 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(plVar18,uVar11,0);
                                lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                                param_3 = uVar31;
                                if (lVar8 != 0) {
                                  uVar11 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,0,*(undefined8 *)(lVar8 + 0xf8),0);
                                  plVar18 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(plVar18,uVar11,0);
                                  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                                  param_3 = uVar31;
                                  if (lVar8 != 0) {
                                    uVar11 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,0,*(undefined8 *)(lVar8 + 0xd0),0);
                                    plVar18 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(plVar18,uVar11,0);
                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                                    param_3 = uVar31;
                                    if (lVar8 != 0) {
                                      plVar19 = *(long **)(lVar8 + 0xd0);
                                      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                                      param_3 = uVar31;
                                      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
                                        fVar27 = (float)/*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideInTime*/ func_0x01562c28(*(long *)(lVar8 + 0x68),0);
                                        uVar11 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0x3f800000,fVar27 * 0.5,plVar19,0);
                                        plVar18 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(plVar18,uVar11,0);
                                        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                                        param_3 = uVar31;
                                        if (lVar8 != 0) {
                                          plVar19 = *(long **)(lVar8 + 0xd8);
                                          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                                          param_3 = uVar31;
                                          if ((lVar8 != 0) && (*(long *)(lVar8 + 0xe8) != 0)) {
                                            uVar28 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar8 + 0xe8),0);
                                            unaff_d8 = (ulong)uVar28;
                                            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                                            param_3 = uVar31;
                                            if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
                                              uVar29 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideInTime*/ func_0x01562c28(*(long *)(lVar8 + 0x68),0);
                                              plVar19 = (long *)/*DG.Tweening.ShortcutExtensions$$DOMoveX*/ func_0x016b28e8(uVar28,uVar29,
                                                                                plVar19,0,0);
                                              lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238);
                                              param_3 = uVar31;
                                              if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
                                                uVar24 = 0x3d286e8;
                                                uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(plVar19,*(undefined4 *)
                                                                                  (*(long *)(lVar8 +
                                                                                            0x68) +
                                                                                  0x38),
                                                                         uRam0000000003d5e7a8);
                                                uVar11 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(plVar18,uVar11,0);
                                                if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132) >>
                                                      10 & 1) != 0) &&
                                                   (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0)) {
                                                  func_0x00f78ad0();
                                                }
                                                uVar22 = 0x3d25428;
                                                plVar16 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8);
                                                plVar19 = (long *)plVar16[1];
                                                if (plVar19 == (long *)0x0) {
                                                  if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132) >>
                                                        10 & 1) != 0) &&
                                                     (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0)) {
                                                    func_0x00f78ad0();
                                                    plVar16 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8
                                                                        );
                                                  }
                                                  unaff_x22 = *plVar16;
                                                  plVar19 = (long *)func_0x00f78aec(
                                                  /*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                                                  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(plVar19,unaff_x22,
                                                                  uRam0000000003d63a08,0);
                                                  *(long **)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8)
                                                            + 8) = plVar19;
                                                }
                                                /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar11,plVar19,0);
                                                plVar18 = (long *)puVar10[0x24];
                                                lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,uRam0000000003d41238
                                                                       );
                                                unaff_x24 = uVar22;
                                                unaff_x25 = 0x3d286e8;
                                                param_3 = uVar31;
                                                if (lVar8 != 0) {
                                                  uVar11 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0x3f800000,0,
                                                                           *(undefined8 *)
                                                                            (lVar8 + 0xf8),0);
                                                  uVar11 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(plVar18,uVar11,0);
                                                  if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132) >>
                                                        10 & 1) != 0) &&
                                                     (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0)) {
                                                    func_0x00f78ad0();
                                                  }
                                                  plVar16 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8);
                                                  plVar19 = (long *)plVar16[2];
                                                  if (plVar19 == (long *)0x0) {
                                                    if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132)
                                                          >> 10 & 1) != 0) &&
                                                       (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0))
                                                    {
                                                      func_0x00f78ad0();
                                                      plVar16 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 +
                                                                          0xb8);
                                                    }
                                                    unaff_x22 = *plVar16;
                                                    plVar19 = (long *)func_0x00f78aec(
                                                  /*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                                                  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(plVar19,unaff_x22,
                                                                  uRam0000000003d63a10,0);
                                                  *(long **)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8)
                                                            + 0x10) = plVar19;
                                                  }
                                                  /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar11,plVar19,0);
                                                  plVar18 = (long *)puVar10[0x24];
                                                  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar31;
                                                  if (lVar8 != 0) {
                                                    plVar19 = *(long **)(lVar8 + 0x100);
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,
                                                  uRam0000000003d41238);
                                                  unaff_x25 = uVar24;
                                                  param_3 = uVar31;
                                                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)
                                                     ) {
                                                    uVar11 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(*(undefined4 *)
                                                                              (*(long *)(lVar8 + 
                                                  0x68) + 0x24),0,plVar19,0);
                                                  /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(plVar18,uVar11,0);
                                                  plVar18 = (long *)puVar10[0x24];
                                                  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar31;
                                                  if (lVar8 != 0) {
                                                    plVar19 = *(long **)(lVar8 + 0x100);
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar31;
                                                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)
                                                     ) {
                                                    unaff_x22 = 0x3d5e000;
                                                    uVar28 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_XPScaleTime*/ func_0x01562c00(*(long *)(lVar8 + 0x68)
                                                                             ,0);
                                                    uVar11 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,plVar19,0);
                                                    uVar11 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(plVar18,uVar11,0);
                                                    /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar11,3,uRam0000000003d5e7b0);
                                                    plVar18 = (long *)puVar10[0x24];
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar31;
                                                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)
                                                     ) {
                                                    /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_XPWaitTime*/ func_0x01562c10(*(long *)(lVar8 + 0x68),0);
                                                    uVar11 = /*DG.Tweening.TweenSettingsExtensions$$AppendInterval*/ func_0x016c3110(plVar18,0);
                                                    if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132)
                                                          >> 10 & 1) != 0) &&
                                                       (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0))
                                                    {
                                                      func_0x00f78ad0();
                                                    }
                                                    plVar16 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8
                                                                        );
                                                    plVar19 = (long *)plVar16[3];
                                                    if (plVar19 == (long *)0x0) {
                                                      if (((*(ushort *)
                                                             (/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132) >> 10 &
                                                           1) != 0) &&
                                                         (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0
                                                         )) {
                                                        func_0x00f78ad0();
                                                        plVar16 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 +
                                                                            0xb8);
                                                      }
                                                      unaff_x22 = *plVar16;
                                                      plVar19 = (long *)func_0x00f78aec(
                                                  /*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                                                  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(plVar19,unaff_x22,
                                                                  uRam0000000003d63a18,0);
                                                  *(long **)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8)
                                                            + 0x18) = plVar19;
                                                  }
                                                  /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar11,plVar19,0);
                                                  plVar18 = (long *)puVar10[0x24];
                                                  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar31;
                                                  if (lVar8 != 0) {
                                                    plVar19 = *(long **)(lVar8 + 0x100);
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar31;
                                                  if ((lVar8 != 0) &&
                                                     (*(long *)(lVar8 + 0x108) != 0)) {
                                                    uVar30 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar8 + 0x108
                                                                                      ),0);
                                                    unaff_d8 = (ulong)uVar30;
                                                    unaff_d9 = (ulong)uVar28;
                                                    unaff_d10 = (ulong)uVar31;
                                                    param_3 = uVar31;
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,
                                                  uRam0000000003d41238);
                                                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)
                                                     ) {
                                                    uVar29 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_XPSlideTime*/ func_0x01562bf0(*(long *)(lVar8 + 0x68)
                                                                             ,0);
                                                    uVar11 = /*DG.Tweening.ShortcutExtensions$$DOMove*/ func_0x016b26f4(uVar30,uVar28,uVar31,
                                                                             uVar29,plVar19,0,0);
                                                    plVar18 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(plVar18,uVar11
                                                                                      ,0);
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar31;
                                                  if (lVar8 != 0) {
                                                    plVar19 = *(long **)(lVar8 + 0xf8);
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar31;
                                                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)
                                                     ) {
                                                    uVar29 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_XPSlideTime*/ func_0x01562bf0(*(long *)(lVar8 + 0x68)
                                                                             ,0);
                                                    uVar11 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,uVar29,plVar19,0);
                                                    plVar18 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(plVar18,uVar11
                                                                                      ,0);
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar31;
                                                  if (lVar8 != 0) {
                                                    plVar19 = *(long **)(lVar8 + 0x100);
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar31;
                                                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)
                                                     ) {
                                                    unaff_x25 = 0x3d5b000;
                                                    unaff_x26 = 0x3d5e000;
                                                    uVar29 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_XPSlideTime*/ func_0x01562bf0(*(long *)(lVar8 + 0x68)
                                                                             ,0);
                                                    plVar19 = (long *)/*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f000000,
                                                                                      uVar29,plVar19
                                                                                      ,0);
                                                    unaff_x22 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428
                                                                               );
                                                    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(unaff_x22,puVar10,
                                                                    uRam0000000003d5bae0,0);
                                                    uVar11 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(plVar19,unaff_x22,
                                                                             uRam0000000003d5e6e0);
                                                    /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(plVar18,uVar11,0);
                                                    lVar8 = puVar10[0x15];
                                                    param_3 = uVar31;
                                                    if (lVar8 != 0) {
                                                      uVar28 = *(uint *)((long)puVar10 + 0xbc);
                                                      unaff_x24 = 0x3d25428;
                                                      if (*(uint *)(lVar8 + 0x18) <= uVar28)
                                                      goto code_r0x014c6cf8;
                                                      lVar15 = puVar10[0x14];
                                                      unaff_x24 = uVar22;
                                                      if (lVar15 != 0) {
                                                        unaff_x24 = 0x3d25428;
                                                        if (*(uint *)(lVar15 + 0x18) <= uVar28)
                                                        goto code_r0x014c6cf8;
                                                        *(int *)(puVar3 + -0x74) =
                                                             *(int *)(lVar8 + (long)(int)uVar28 * 4
                                                                     + 0x20) -
                                                             *(int *)(lVar15 + (long)(int)uVar28 * 4
                                                                     + 0x20);
                                                        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar10,
                                                  uRam0000000003d41238);
                                                  unaff_x24 = uVar22;
                                                  param_3 = uVar31;
                                                  if (lVar8 != 0) {
                                                    plVar19 = (long *)0x3d66000;
                                                    lVar8 = *(long *)(lVar8 + 0x98);
                                                    uVar11 = /*System.Int32$$ToString*/ func_0x02ae9b8c(puVar3 + -0x74,0);
                                                    uVar11 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('+')*/ uRam0000000003d66fb0,
                                                                             uVar11,0);
                                                    plVar18 = (long *)0x0;
                                                    param_3 = uVar31;
                                                    if (lVar8 != 0) {
                                                      puVar9 = (undefined8 *)
                                                               /*Atlas.UI.UIXPBehaviour$$Set*/ func_0x0151db10(lVar8,uVar11,0);
                                                      *(undefined4 *)(puVar10 + 0x13) = 0;
                                                      *(undefined1 *)((long)puVar10 + 0x94) = 1;
                                                      return puVar9;
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
code_r0x014c6cf8:
  uVar11 = func_0x00f78b24();
  puVar26 = &Atlas_UI_Screens_PostArcadeScreen__HideAward;
  puVar12 = (undefined8 *)func_0x00f78ac0(uVar11,0);
  puVar5 = puVar3 + -0x80;
  puVar9 = puVar10;
code_r0x014c6d04:
  puVar4 = puVar5 + -0x40;
  *(ulong *)(puVar5 + -0x40) = unaff_d9;
  *(ulong *)(puVar5 + -0x38) = unaff_d8;
  *(long *)(puVar5 + -0x30) = unaff_x22;
  *(long **)(puVar5 + -0x28) = plVar19;
  *(long **)(puVar5 + -0x20) = plVar18;
  *(undefined8 **)(puVar5 + -0x18) = puVar9;
  *(undefined1 ***)(puVar5 + -0x10) = ppuVar25;
  *(undefined **)(puVar5 + -8) = puVar26;
  plVar19 = (long *)0x3d78fd8;
  if ((bRam0000000003eb4b3b & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d78fd8);
    bRam0000000003eb4b3b = 1;
  }
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/Dotween_SlideIn')*/ uRam0000000003d78fd8,0);
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
  puVar12[0x24] = uVar11;
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar12,uRam0000000003d41238);
  if (lVar8 != 0) {
    plVar19 = *(long **)(lVar8 + 0xd0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar12,uRam0000000003d41238);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
      fVar27 = (float)/*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideOutTime*/ func_0x01562c40(*(long *)(lVar8 + 0x68),0);
      uVar24 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,fVar27 * 0.5,plVar19,0);
      uVar11 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar11,uVar24,0);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar12,uRam0000000003d41238);
      if (lVar8 != 0) {
        plVar19 = *(long **)(lVar8 + 0xd8);
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar12,uRam0000000003d41238);
        if ((lVar8 != 0) && (*(long *)(lVar8 + 0xf0) != 0)) {
          uVar31 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar8 + 0xf0),0);
          unaff_d8 = (ulong)uVar31;
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar12,uRam0000000003d41238);
          if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
            uVar29 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideOutTime*/ func_0x01562c40(*(long *)(lVar8 + 0x68),0);
            plVar19 = (long *)/*DG.Tweening.ShortcutExtensions$$DOMoveX*/ func_0x016b28e8(uVar31,uVar29,plVar19,0,0);
            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar12,uRam0000000003d41238);
            if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
              uVar24 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(plVar19,*(undefined4 *)(*(long *)(lVar8 + 0x68) + 0x40),
                                       uRam0000000003d5e7a8);
              puVar9 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar11,uVar24,0);
              *(undefined1 *)((long)puVar12 + 0x94) = 0;
              return puVar9;
            }
          }
        }
      }
    }
  }
  puVar9 = (undefined8 *)func_0x00f78af4();
  puVar3 = puVar5 + -0xd0;
  auVar34._8_8_ = puVar5 + -0xd0;
  auVar34._0_8_ = puVar9;
  *(undefined8 *)(puVar5 + -0xa0) = unaff_d11;
  *(ulong *)(puVar5 + -0x98) = unaff_d10;
  *(ulong *)(puVar5 + -0x90) = unaff_d9;
  *(ulong *)(puVar5 + -0x88) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x80) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x78) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x70) = 0x3d41238;
  *(long **)(puVar5 + -0x68) = plVar19;
  *(undefined8 *)(puVar5 + -0x60) = uVar11;
  *(undefined8 **)(puVar5 + -0x58) = puVar12;
  *(undefined1 **)(puVar5 + -0x50) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x48) = &Atlas_UI_Screens_PostArcadeScreen__OnUpdate;
  ppuVar25 = (undefined1 **)(puVar5 + -0x50);
  unaff_d8 = extraout_d0 & 0xffffffff;
  plVar18 = (long *)0x3eb4000;
  unaff_x22 = 0x3d41238;
  lVar8 = 0x3d41238;
  if ((bRam0000000003eb4b3c & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d3e178);
    func_0x00f78a20(0x3d5bad8);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5c7a0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41240);
    func_0x00f78a20(0x3d41248);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d79110);
    func_0x00f78a20(0x3d7cd68);
    bRam0000000003eb4b3c = 1;
  }
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
  lVar15 = unaff_x22;
  uVar11 = unaff_x23;
  uVar24 = unaff_x24;
  if ((lVar13 != 0) && (*(long *)(lVar13 + 0xa8) != 0)) {
    plVar18 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar13 + 0xa8),0);
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
    lVar15 = lVar8;
    if ((lVar13 == 0) ||
       ((*(long *)(lVar13 + 0xb0) == 0 ||
        (/*Atlas.UI.SlantFillBar$$get_FillBotomRightPosition*/ func_0x014fc974(*(long *)(lVar13 + 0xb0),0), plVar18 == (long *)0x0))))
    goto code_r0x014c75c8;
    if (*plVar18 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) goto code_r0x014c75cc;
    puVar10 = (undefined8 *)/*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(plVar18,0);
    if (*(char *)((long)puVar9 + 0x9d) != '\0') {
      return puVar10;
    }
    if (puVar9[0x11] == 0) goto code_r0x014c75c8;
    puVar10 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionVisible*/ func_0x01511a80(puVar9[0x11],0);
    if ((int)puVar10 != 0) {
      if (puVar9[0x11] != 0) {
        puVar10 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionEnding*/ func_0x01511a70(puVar9[0x11],0);
        if (((ulong)puVar10 & 1) != 0) {
          return puVar10;
        }
        if (puVar9[0x10] != 0) {
          puVar10 = (undefined8 *)Atlas_FrontEnd_FrontEndScene__get_IsSceneChanging(puVar9[0x10],0);
          if (((ulong)puVar10 & 1) != 0) {
            return puVar10;
          }
          lVar8 = puVar9[0x11];
          if (lVar8 != 0) {
            *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x80);
            *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x78);
            *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0x70);
            *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)(puVar5 + -0x68);
            *(undefined8 *)(puVar5 + -0x60) = *(undefined8 *)(puVar5 + -0x60);
            *(undefined8 *)(puVar5 + -0x58) = *(undefined8 *)(puVar5 + -0x58);
            *(undefined8 *)(puVar5 + -0x50) = *(undefined8 *)(puVar5 + -0x50);
            *(undefined8 *)(puVar5 + -0x48) = *(undefined8 *)(puVar5 + -0x48);
            if ((bRam0000000003eb4d7b & 1) == 0) {
              func_0x00f78a20(0x3d417a8);
              bRam0000000003eb4d7b = 1;
            }
            if ((*(char *)(lVar8 + 0x10) == '\0') || (*(int *)(lVar8 + 0x30) != 2)) {
              puVar9 = (undefined8 *)0x0;
            }
            else {
              *(undefined4 *)(lVar8 + 0x30) = 3;
              if (*(long *)(lVar8 + 0x40) != 0) {
                /*UnityEngine.Events.UnityEvent<int, Sprite>$$Invoke*/ func_0x01b85798(*(long *)(lVar8 + 0x40),1,0,uRam0000000003d417a8);
              }
              /*Core.Input.InputManager$$ResumeAllInput*/ func_0x0164ae40(0);
              puVar9 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
            return puVar9;
          }
        }
      }
      goto code_r0x014c75c8;
    }
    if (*(char *)((long)puVar9 + 0x9c) == '\0') {
      if (0.0 < *(float *)(puVar9 + 0x12)) {
        *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) - (float)extraout_d0;
        return puVar10;
      }
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar9,uRam0000000003d41248);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x98) == 0)) goto code_r0x014c75c8;
      puVar10 = (undefined8 *)/*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar8 + 0x98),uRam0000000003d3e178);
      if (((ulong)puVar10 & 1) != 0) {
        return puVar10;
      }
      if (*(int *)((long)puVar9 + 0x4c) != 2) {
        return puVar10;
      }
      if (*(char *)((long)puVar9 + 0x94) == '\0') goto code_r0x014c7564;
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
      if ((lVar8 == 0) || (puVar9[0x14] == 0)) goto code_r0x014c75c8;
      plVar18 = *(long **)(lVar8 + 0xb0);
      plVar19 = (long *)func_0x0001c0f4(puVar9[0x14],(long)*(int *)((long)puVar9 + 0xbc));
      if ((puVar9[0x15] == 0) ||
         (iVar6 = func_0x0001c0f4(puVar9[0x15],(long)*(int *)((long)puVar9 + 0xbc)),
         plVar18 == (long *)0x0)) goto code_r0x014c75c8;
      fVar27 = (float)/*Atlas.UI.SlantFillBar$$CalculateValue*/ func_0x014fcfb8((float)(int)plVar19,(float)iVar6,plVar18,0);
      unaff_d9 = (ulong)(uint)fVar27;
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
      if (lVar8 == 0) goto code_r0x014c75c8;
      plVar18 = *(long **)(lVar8 + 0xa0);
      *(int *)(puVar5 + -0xa4) = (int)fVar27;
      plVar19 = (long *)func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,puVar5 + -0xa4);
      *(undefined4 *)(puVar5 + -0xa8) = *(undefined4 *)((long)puVar9 + 0xc4);
      unaff_x23 = 0x3d22910;
      uVar21 = 0x3d22910;
      uVar11 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,puVar5 + -0xa8);
      unaff_x24 = 0x3d7cd68;
      uVar23 = 0x3d7cd68;
      uVar22 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0} / {1}')*/ uRam0000000003d7cd68,plVar19,uVar11,0);
      uVar11 = unaff_x23;
      uVar24 = unaff_x24;
      if (plVar18 == (long *)0x0) goto code_r0x014c75c8;
      /*Atlas.UI.UIXPBehaviour$$Set*/ func_0x0151db10(plVar18,uVar22,0);
      puVar10 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
      if ((puVar10 == (undefined8 *)0x0) || (uVar11 = uVar21, uVar24 = uVar23, puVar10[0x16] == 0))
      goto code_r0x014c75c8;
      if (*(char *)(puVar10[0x16] + 0x90) != '\0') {
code_r0x014c7554:
        *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) + (float)extraout_d0;
        return puVar10;
      }
      if (*(char *)(puVar9 + 0x25) != '\0') {
        if (puVar9[0x15] != 0) {
          puVar10 = (undefined8 *)func_0x0001c0f4(puVar9[0x15],(long)*(int *)((long)puVar9 + 0xbc));
          if ((fVar27 < (float)(int)puVar10) || (*(char *)((long)puVar9 + 0x119) != '\0'))
          goto code_r0x014c7554;
          *(undefined1 *)((long)puVar9 + 0x119) = 1;
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
          if ((lVar8 != 0) && (*(long *)(lVar8 + 0xb8) != 0)) {
            /*Atlas.UI.UIRewardBehaviour$$Set*/ func_0x0151d2a8(*(long *)(lVar8 + 0xb8),1,0);
            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
            if ((lVar8 != 0) && (*(long *)(lVar8 + 200) != 0)) {
              plVar18 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(lVar8 + 200),0);
              lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
              if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
                uVar29 = *(undefined4 *)(*(long *)(lVar8 + 0x68) + 0x4c);
                lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
                  uVar33 = *(undefined4 *)(*(long *)(lVar8 + 0x68) + 0x44);
                  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
                    uVar32 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_RankJumpDuration*/ func_0x01562c60(*(long *)(lVar8 + 0x68),0);
                    /*Atlas.UI.AtlasTweenAnimations$$JumpZoom*/ func_0x0146f84c(uVar29,0x3f800000,uVar33,uVar32,0,0,plVar18,0,0,0);
                    /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/ProgressBarComplete')*/ uRam0000000003d79110,0);
                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                    if (lVar8 != 0) {
                      lVar8 = *(long *)(lVar8 + 0xb8);
                      plVar19 = (long *)func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(plVar19,puVar9,uRam0000000003d5bad8,0);
                      plVar18 = (long *)0x0;
                      if (lVar8 != 0) {
                        puVar10 = (undefined8 *)/*Atlas.UI.UIRewardBehaviour$$Wiggle*/ func_0x0151d394(0,lVar8,plVar19,0);
                        goto code_r0x014c7554;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_r0x014c75c8;
      }
      puVar26 = &UNK_014c733c;
      puVar5 = puVar5 + -0xd0;
      puVar12 = puVar9;
      goto code_r0x014c6d04;
    }
    *(undefined1 *)((long)puVar9 + 0x9c) = 0;
    if (*(char *)(puVar9 + 0x26) != '\0') {
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar9,uRam0000000003d41240);
      if (lVar8 == 0) goto code_r0x014c75c8;
      *(undefined1 *)(lVar8 + 0x68) = 1;
    }
    plVar18 = (long *)puVar9[0x10];
    plVar19 = (long *)puVar9[0x1b];
    unaff_x22 = 0x3d41248;
    lVar15 = 0x3d41248;
    uVar22 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar9,uRam0000000003d41248);
    puVar10 = (undefined8 *)/*Atlas.UI.Screens.RewardScreenExtensions$$RunRewardSequenceIfRewardUnseen<SingleplayerChapterBehaviour, SingleplayerChapterScreen.TransitionData>*/ func_0x018de5e0(plVar18,plVar19,puVar9,uVar22,uRam0000000003d5c7a0);
    if ((int)puVar10 == 0) goto code_r0x014c75a4;
    *(undefined1 *)((long)puVar9 + 0x9d) = 1;
    lVar8 = puVar9[0x15];
    if (lVar8 == 0) goto code_r0x014c75c8;
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)((long)puVar9 + 0xbc)) goto code_r0x014c75d0;
    if (*(int *)(lVar8 + (long)(int)*(uint *)((long)puVar9 + 0xbc) * 4 + 0x20) <
        *(int *)((long)puVar9 + 0xc4)) {
      return puVar10;
    }
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar9,uRam0000000003d41248);
    if (lVar8 == 0) goto code_r0x014c75c8;
    plVar18 = *(long **)(lVar8 + 0x50);
    puVar10 = (undefined8 *)Atlas_UI_Screens_PostArcadeScreen__CreateScreenData(puVar9);
    if (plVar18 != (long *)0x0) {
      plVar18[0xf] = (long)puVar10;
      if (*(char *)((long)puVar9 + 0xcc) == '\0') {
        return puVar10;
      }
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar9,uRam0000000003d41248);
      if ((lVar8 != 0) && (*(ulong *)(lVar8 + 0x50) != 0)) {
        auVar35._8_8_ = 0;
        auVar35._0_8_ = *(ulong *)(lVar8 + 0x50);
        puVar4 = *(undefined1 **)(puVar5 + -0x50);
        puVar26 = *(undefined **)(puVar5 + -0x48);
        lVar8 = *(long *)(puVar5 + -0x60);
        lVar15 = *(long *)(puVar5 + -0x58);
        puVar5 = puVar5 + -0x40;
        goto code_r0x0151ddac;
      }
    }
  }
code_r0x014c75c8:
  func_0x00f78af4();
  unaff_x22 = lVar15;
code_r0x014c75cc:
  func_0x00f78e5c();
  unaff_x23 = uVar11;
  unaff_x24 = uVar24;
code_r0x014c75d0:
  uVar11 = func_0x00f78b24();
  puVar26 = &Atlas_UI_Screens_PostArcadeScreen__PlacementAwardSequenceEnded;
  puVar12 = (undefined8 *)func_0x00f78ac0(uVar11,0);
  puVar4 = puVar5 + -0xd0;
  puVar10 = puVar9;
  goto code_r0x014c75dc;
code_r0x014c7564:
  if (*(char *)((long)puVar9 + 0x119) != '\0') {
    return puVar10;
  }
  if (*(char *)(puVar9 + 0x1c) == '\0') goto code_r0x014c759c;
  uVar11 = puVar9[0x1d];
  uVar22 = puVar9[0x20];
  uVar24 = puVar9[0x1f];
  *(undefined8 *)(puVar5 + -200) = puVar9[0x1e];
  *(undefined8 *)(puVar5 + -0xd0) = uVar11;
  *(undefined8 *)(puVar5 + -0xb8) = uVar22;
  *(undefined8 *)(puVar5 + -0xc0) = uVar24;
  *(undefined8 *)(puVar5 + -0xb0) = puVar9[0x21];
  puVar26 = &UNK_014c7598;
  plVar16 = plVar18;
  goto code_r0x014c6284;
code_r0x0151ddac:
  lVar20 = auVar35._0_8_;
  *(long *)(puVar5 + -0x20) = lVar8;
  *(long *)(puVar5 + -0x18) = lVar15;
  *(undefined1 **)(puVar5 + -0x10) = puVar4;
  *(undefined **)(puVar5 + -8) = puVar26;
  lVar8 = *(long *)(lVar20 + 0x68);
  lVar13 = lVar15;
  if (lVar8 == 0) goto code_r0x0151de64;
  if (*(int *)(lVar8 + 0x18) == 0) {
code_r0x0151de58:
    uVar11 = func_0x00f78b24(auVar35._0_8_,auVar35._8_8_);
    func_0x00f78ac0(uVar11,0);
  }
  else {
    *(undefined4 *)(lVar8 + 0x20) = 0;
    auVar35 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(1,*(undefined8 *)(lVar20 + 0x10),*(undefined8 *)(lVar20 + 0x20),0);
    lVar13 = lVar20;
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto code_r0x0151de58;
    *(int *)(lVar8 + 0x24) = auVar35._0_4_;
    lVar8 = *(long *)(lVar20 + 0x68);
    auVar35 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(2,*(undefined8 *)(lVar20 + 0x10),*(undefined8 *)(lVar20 + 0x20),0);
    if (lVar8 != 0) {
      if (2 < *(uint *)(lVar8 + 0x18)) {
        *(int *)(lVar8 + 0x28) = auVar35._0_4_;
        lVar8 = *(long *)(lVar20 + 0x68);
        auVar35 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(3,*(undefined8 *)(lVar20 + 0x10),*(undefined8 *)(lVar20 + 0x20),0)
        ;
        if (lVar8 == 0) goto code_r0x0151de64;
        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
          *(int *)(lVar8 + 0x2c) = auVar35._0_4_;
          return auVar35._0_8_;
        }
      }
      goto code_r0x0151de58;
    }
  }
code_r0x0151de64:
  auVar35 = func_0x00f78af4();
  lVar15 = auVar35._0_8_;
  *(long *)(puVar5 + -0x40) = lVar8;
  *(long *)(puVar5 + -0x38) = lVar13;
  *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x28) = &Atlas_Stats_UnlockManager__CacheCurrentArcadeRank;
  puVar4 = puVar5 + -0x30;
  puVar26 = &UNK_0151de7c;
  puVar5 = puVar5 + -0x40;
  goto code_r0x0151ddac;
code_r0x014c759c:
  if (*(char *)(puVar9 + 0x23) != '\0') {
    return puVar10;
  }
code_r0x014c75a4:
  ppuVar25 = *(undefined1 ***)(puVar5 + -0x50);
  puVar26 = *(undefined **)(puVar5 + -0x48);
  plVar18 = *(long **)(puVar5 + -0x60);
  puVar10 = *(undefined8 **)(puVar5 + -0x58);
  unaff_x22 = *(long *)(puVar5 + -0x70);
  plVar19 = *(long **)(puVar5 + -0x68);
  unaff_x24 = *(undefined8 *)(puVar5 + -0x80);
  unaff_x23 = *(undefined8 *)(puVar5 + -0x78);
  puVar12 = puVar9;
code_r0x014c75dc:
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(long *)(puVar4 + -0x30) = unaff_x22;
  *(long **)(puVar4 + -0x28) = plVar19;
  *(long **)(puVar4 + -0x20) = plVar18;
  *(undefined8 **)(puVar4 + -0x18) = puVar10;
  *(undefined1 ***)(puVar4 + -0x10) = ppuVar25;
  *(undefined **)(puVar4 + -8) = puVar26;
  lVar8 = 0x3eb4000;
  puVar9 = puVar12;
  if ((bRam0000000003eb4b3e & 1) == 0) {
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d23df0);
    puVar9 = (undefined8 *)func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b3e = 1;
  }
  *(undefined8 *)(puVar4 + -0x58) = 0;
  *(undefined8 *)(puVar4 + -0x50) = 0;
  *(undefined8 *)(puVar4 + -0x48) = 0;
  if (*(char *)(puVar12 + 0x23) != '\0') {
    return puVar9;
  }
  lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar12,uRam0000000003d41248);
  if (lVar15 == 0) goto code_r0x014c77e0;
  if (*(long *)(lVar15 + 0x20) == 0) goto code_r0x014c77e0;
  lVar13 = *(long *)(*(long *)(lVar15 + 0x20) + 0x10);
  lVar15 = 0x3d23df0;
  lVar20 = 0x3d23df0;
  if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar8 = 0;
  unaff_x22 = lVar15;
  if (lVar13 == 0) goto code_r0x014c77e0;
  lVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar13,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18),
                          uRam0000000003d57280);
  lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar12,uRam0000000003d41248);
  if (lVar13 == 0) goto code_r0x014c77e0;
  unaff_x22 = lVar20;
  if (*(long *)(lVar13 + 0xb0) == 0) goto code_r0x014c77e0;
  iVar6 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                    (*(long *)(lVar13 + 0xb0),lVar8,0);
  if (iVar6 != 0) {
    if (lVar8 == 0) goto code_r0x014c77e0;
    if (*(long *)(lVar8 + 0x58) == 0) goto code_r0x014c77e0;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar4 + -0x58,*(long *)(lVar8 + 0x58),uRam0000000003d3dc70);
    lVar15 = 0x3d337d0;
    unaff_x23 = 0x3d3e188;
    while (uVar14 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar4 + -0x58,uRam0000000003d337d0), (uVar14 & 1) != 0) {
      lVar8 = *(long *)(puVar4 + -0x48);
      lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar12,uRam0000000003d41248);
      if (lVar13 == 0) {
        func_0x00f78af4();
code_r0x014c77dc:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x14c77e0);
        (*pcVar2)();
      }
      if (*(long *)(lVar13 + 0x98) == 0) {
        func_0x00f78af4();
        goto code_r0x014c77dc;
      }
      /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar13 + 0x98),lVar8,uRam0000000003d3e188);
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar4 + -0x58,uRam0000000003d337c8);
  }
  do {
    unaff_x22 = lVar15;
    if ((puVar12[0x10] != 0) &&
       (lVar13 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(puVar12[0x10],0,0), lVar13 != 0)) {
      Atlas_Gameplay_Kart_KartFEAnimator__TriggerFEGainXP(lVar13,0);
      puVar26 = &UNK_014c77b8;
      puVar9 = puVar12;
      goto code_r0x014c7830;
    }
code_r0x014c77e0:
    lVar15 = unaff_x22;
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014c782c;
    plVar19 = (long *)___cxa_begin_catch();
    lVar8 = *plVar19;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar4 + -0x58,uRam0000000003d337c8);
  } while (lVar8 == 0);
  func_0x00f78ac0(lVar8,0);
code_r0x014c782c:
  puVar26 = &Atlas_UI_Screens_PostArcadeScreen__AllowExit;
  puVar9 = (undefined8 *)__Unwind_Resume();
code_r0x014c7830:
  *(long *)(puVar4 + -0x90) = lVar15;
  *(undefined8 *)(puVar4 + -0x88) = 0x3d41248;
  *(long *)(puVar4 + -0x80) = lVar8;
  *(undefined8 **)(puVar4 + -0x78) = puVar12;
  *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x68) = puVar26;
  uVar11 = 0x3eb4000;
  if ((bRam0000000003eb4b3f & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b3f = 1;
  }
  *(undefined4 *)((long)puVar9 + 300) = 2;
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0xc0) != 0)) {
    uVar11 = 0x3d41000;
    /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(*(long *)(lVar8 + 0xc0),1,0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar9,uRam0000000003d41248);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar8 + 0xb8),6,1,1,0);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
      if (((lVar8 != 0) && (*(long *)(lVar8 + 0x110) != 0)) &&
         (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar8 + 0x110),0), lVar8 != 0)) {
        puVar10 = (undefined8 *)/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,0,0);
        *(undefined1 *)(puVar9 + 0x23) = 1;
        return puVar10;
      }
    }
  }
  uVar24 = func_0x00f78af4();
  *(long *)(puVar4 + -0xc0) = lVar15;
  *(undefined8 *)(puVar4 + -0xb8) = uVar11;
  *(undefined8 *)(puVar4 + -0xb0) = 0x3d41238;
  *(undefined8 **)(puVar4 + -0xa8) = puVar9;
  *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x70;
  *(undefined **)(puVar4 + -0x98) = &Atlas_UI_Screens_PostArcadeScreen__PlayAgainPressed;
  uVar11 = 0x3eb4000;
  if ((bRam0000000003eb4b40 & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41240);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b40 = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar24,uRam0000000003d41238);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0xc0) != 0)) {
    uVar11 = 0x3d41000;
    /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(*(long *)(lVar8 + 0xc0),0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar24,uRam0000000003d41248);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0xb8) != 0)) {
      uVar11 = 0x3d41000;
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar8 + 0xb8),6,0,0);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar24,uRam0000000003d41240);
      if (lVar8 != 0) {
        puVar9 = *(undefined8 **)(lVar8 + 0x50);
        if (puVar9 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        uVar11 = 0;
        *(undefined8 *)(puVar4 + -0xe0) = unaff_x26;
        *(undefined8 *)(puVar4 + -0xd8) = unaff_x25;
        *(undefined8 *)(puVar4 + -0xd0) = unaff_x24;
        *(undefined8 *)(puVar4 + -200) = unaff_x23;
        *(undefined8 *)(puVar4 + -0xc0) = *(undefined8 *)(puVar4 + -0xc0);
        *(undefined8 *)(puVar4 + -0xb8) = *(undefined8 *)(puVar4 + -0xb8);
        *(undefined8 *)(puVar4 + -0xb0) = *(undefined8 *)(puVar4 + -0xb0);
        *(undefined8 *)(puVar4 + -0xa8) = *(undefined8 *)(puVar4 + -0xa8);
        *(undefined8 *)(puVar4 + -0xa0) = *(undefined8 *)(puVar4 + -0xa0);
        *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(puVar4 + -0x98);
        *(undefined8 **)(puVar4 + -0xe8) = puVar9;
        lVar8 = puVar9[0xd];
        if (lVar8 == 0) {
          puVar5 = puVar4 + -0xe8;
          lVar15 = 1;
        }
        else {
          lVar15 = *(long *)(lVar8 + 0x18);
          if (lVar15 == 0) {
            return puVar9;
          }
          puVar5 = (undefined1 *)(lVar8 + 0x20);
        }
        lVar8 = 0;
        do {
          lVar13 = *(long *)(puVar5 + lVar8 * 8);
          pcVar2 = *(code **)(lVar13 + 0x10);
          plVar19 = *(long **)(lVar13 + 0x20);
          lVar13 = *(long *)(lVar13 + 0x28);
          if (*(short *)(lVar13 + 0x48) == -1) {
            func_0x00f78ad8(lVar13,uVar11);
          }
          iVar6 = func_0x00f78a4c(lVar13);
          if (iVar6 == 0) {
            if ((((plVar19 == (long *)0x0) || (*(short *)(lVar13 + 0x48) == -1)) ||
                ((*(byte *)(*plVar19 + 0x115) & 1) != 0)) || (puVar9[3] == 0))
            goto code_r0x01562a40;
            iVar6 = func_0x00f78a44(lVar13);
            iVar7 = func_0x00f78ec0(lVar13);
            if (iVar6 == 0) {
              uVar1 = *(ushort *)(lVar13 + 0x48);
              if (iVar7 == 0) {
                lVar13 = *plVar19 + (ulong)uVar1 * 0x10;
                auVar34 = (**(code **)(lVar13 + 0x138))(plVar19,*(undefined8 *)(lVar13 + 0x140));
                goto code_r0x01562a4c;
              }
              lVar13 = func_0x00f78a48(lVar13);
              lVar20 = *plVar19;
              uVar14 = (ulong)*(ushort *)(lVar20 + 0x12a);
              if (uVar14 != 0) {
                piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar13) {
                    puVar10 = (undefined8 *)
                              (lVar20 + (long)(int)(*piVar17 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x01562b10;
                  }
                  piVar17 = piVar17 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              puVar10 = (undefined8 *)func_0x00fac1f0(plVar19,lVar13,(ulong)uVar1);
code_r0x01562b10:
              pcVar2 = (code *)*puVar10;
              puVar10 = (undefined8 *)puVar10[1];
            }
            else {
              if (iVar7 == 0) {
                uVar11 = *(undefined8 *)
                          (*plVar19 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar20 = *plVar19;
                uVar14 = (ulong)*(ushort *)(lVar20 + 0x12a);
                if (uVar14 != 0) {
                  piVar17 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)(lVar13 + 0x18)) {
                      lVar20 = lVar20 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01562ae8;
                    }
                    piVar17 = piVar17 + 4;
                    uVar14 = uVar14 - 1;
                  } while (uVar14 != 0);
                }
                lVar20 = func_0x00fac1f0(plVar19);
code_r0x01562ae8:
                uVar11 = *(undefined8 *)(lVar20 + 8);
              }
              puVar10 = (undefined8 *)func_0x00f78acc(uVar11,lVar13);
              pcVar2 = (code *)*puVar10;
            }
            auVar34 = (*pcVar2)(plVar19,puVar10);
          }
          else if (*(char *)(lVar13 + 0x4a) == '\0') {
            auVar34 = (*pcVar2)(lVar13);
          }
          else {
code_r0x01562a40:
            auVar34 = (*pcVar2)(plVar19,lVar13);
          }
code_r0x01562a4c:
          uVar11 = auVar34._8_8_;
          lVar8 = lVar8 + 1;
          if (lVar8 == lVar15) {
            return auVar34._0_8_;
          }
        } while( true );
      }
    }
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)(puVar4 + -0x100) = unaff_x24;
  *(undefined8 *)(puVar4 + -0xf8) = unaff_x23;
  *(long *)(puVar4 + -0xf0) = lVar15;
  *(undefined8 *)(puVar4 + -0xe8) = 0x3d41238;
  *(undefined8 *)(puVar4 + -0xe0) = uVar11;
  *(undefined8 *)(puVar4 + -0xd8) = uVar24;
  *(undefined1 **)(puVar4 + -0xd0) = puVar4 + -0xa0;
  *(undefined **)(puVar4 + -200) = &Atlas_UI_Screens_PostArcadeScreen___ctor;
  if ((bRam0000000003eb4b42 & 1) == 0) {
    func_0x00f78a20(0x3d2c898);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4b42 = 1;
  }
  uVar11 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar15 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar11,0);
  if (lVar15 != 0) {
    uVar11 = 0x3d1f100;
    uVar24 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar15 + 0x18));
    *(undefined8 *)(lVar8 + 0xa0) = uVar24;
    uVar24 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar15 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar24,0);
    if (lVar15 != 0) {
      uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar15 + 0x18));
      *(undefined8 *)(lVar8 + 0xa8) = uVar11;
      *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)(puVar4 + -0xd0);
      *(undefined8 *)(puVar4 + -200) = *(undefined8 *)(puVar4 + -200);
      if (lVar8 == 0) {
        auVar34 = func_0x00f78af4();
        puVar10 = auVar34._8_8_;
        puVar9 = auVar34._0_8_;
        uVar24 = puVar10[1];
        uVar11 = *puVar10;
        puVar9[2] = puVar10[2];
        puVar9[1] = uVar24;
        *puVar9 = uVar11;
        return puVar9;
      }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar9 = (undefined8 *)
               (*(code *)**(undefined8 **)
                           (*(long *)(*(long *)(lRam0000000003d2c898 + 0x18) + 0xc0) + 0x38))();
      return puVar9;
    }
  }
  func_0x00f78af4();
  *(undefined8 *)(puVar4 + -0x150) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x148) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x140) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x138) = 0x3d215e0;
  *(undefined8 *)(puVar4 + -0x130) = 0x3d25458;
  *(undefined8 *)(puVar4 + -0x128) = 0x3d1a510;
  *(undefined8 *)(puVar4 + -0x120) = uVar11;
  *(long *)(puVar4 + -0x118) = lVar8;
  *(undefined1 **)(puVar4 + -0x110) = puVar4 + -0xd0;
  *(undefined **)(puVar4 + -0x108) = &Atlas_UI_Screens_PostArcadeScreen___cctor;
  if ((bRam0000000003eb4b43 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d23df0);
    func_0x00f78a20(0x3d6cb40);
    func_0x00f78a20(0x3d6cbd0);
    func_0x00f78a20(0x3d706f8);
    func_0x00f78a20(0x3d729a8);
    func_0x00f78a20(0x3d6cb00);
    func_0x00f78a20(0x3d69870);
    bRam0000000003eb4b43 = 1;
  }
  uVar29 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('NothingToBronze')*/ uRam0000000003d706f8,0);
  **(undefined4 **)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) = uVar29;
  uVar29 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('BronzeToSilver')*/ uRam0000000003d69870,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 4) = uVar29;
  uVar29 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('SilverToGold')*/ uRam0000000003d729a8,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 8) = uVar29;
  if (((*(byte *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_9_CharacterProgress')*/ uRam0000000003d6cbd0,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x10) = uVar11;
  uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_10_CharacterProgress_2')*/ uRam0000000003d6cb00,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18) = uVar11;
  puVar9 = (undefined8 *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_17_DailyChallenges')*/ uRam0000000003d6cb40,0);
  *(undefined8 **)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x20) = puVar9;
  return puVar9;
}



// ============================================================
// RVA: 0x14c61d4 | Atlas.UI.Screens.PostArcadeScreen.TryGetNextAward
// ============================================================

/* WARNING: Possible PIC construction at 0x014c77b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151de78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c7338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c7594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014c733c) */
/* WARNING: Removing unreachable block (ram,0x014c734c) */
/* WARNING: Removing unreachable block (ram,0x014c7354) */
/* WARNING: Removing unreachable block (ram,0x014c73a4) */
/* WARNING: Removing unreachable block (ram,0x014c73c4) */
/* WARNING: Removing unreachable block (ram,0x014c73cc) */
/* WARNING: Removing unreachable block (ram,0x0151de7c) */
/* WARNING: Removing unreachable block (ram,0x014500ac) */
/* WARNING: Removing unreachable block (ram,0x01450100) */
/* WARNING: Removing unreachable block (ram,0x0145011c) */
/* WARNING: Removing unreachable block (ram,0x014c7598) */

undefined8 *
Atlas_UI_Screens_PostArcadeScreen__TryGetNextAward
          (undefined1 param_1 [16],undefined1 param_2 [16],uint param_3,undefined8 *param_4)

{
  ushort uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  int extraout_w1;
  long lVar14;
  long *plVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  long unaff_x22;
  long lVar19;
  undefined8 unaff_x23;
  undefined8 uVar20;
  undefined8 unaff_x24;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 *puVar23;
  undefined8 unaff_x25;
  undefined8 uVar24;
  undefined8 unaff_x26;
  undefined *puVar25;
  float fVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  ulong extraout_d0;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined4 uVar32;
  ulong unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  puVar3 = &stack0xffffffffffffffd0;
  puVar23 = &stack0xfffffffffffffff0;
  plVar18 = (long *)0x3d41248;
  if ((bRam0000000003eb4b35 & 1) == 0) {
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b35 = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41248);
  if (((lVar8 != 0) && (param_4[0x1a] != 0)) &&
     (lVar14 = *(long *)(param_4[0x1a] + 0x28), lVar14 != 0)) {
    if (*(uint *)(lVar14 + 0x18) <= *(uint *)((long)param_4 + 0xbc)) goto LAB_014c6278;
    if (*(long *)(lVar8 + 0x50) != 0) {
      puVar9 = (undefined8 *)
               /*Atlas.Stats.UnlockManager$$TryGetAndRemoveAwardFromHistory*/ func_0x0152197c(*(long *)(lVar8 + 0x50),
                               *(undefined8 *)
                                (lVar14 + (long)(int)*(uint *)((long)param_4 + 0xbc) * 8 + 0x20),
                               param_4 + 0x1d,param_4 + 0x22,0);
      *(char *)(param_4 + 0x1c) = (char)puVar9;
      return puVar9;
    }
  }
  func_0x00f78af4();
LAB_014c6278:
  uVar10 = func_0x00f78b24();
  puVar25 = &Atlas_UI_Screens_PostArcadeScreen__StartAward;
  auVar33 = func_0x00f78ac0(uVar10,0);
  plVar15 = (long *)0x3eb4000;
code_r0x014c6284:
  plVar17 = auVar33._8_8_;
  puVar9 = auVar33._0_8_;
  *(undefined8 *)(puVar3 + -0x70) = unaff_d11;
  *(ulong *)(puVar3 + -0x68) = unaff_d10;
  *(ulong *)(puVar3 + -0x60) = unaff_d9;
  *(ulong *)(puVar3 + -0x58) = unaff_d8;
  *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
  *(long *)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = plVar18;
  *(long **)(puVar3 + -0x20) = plVar15;
  *(undefined8 **)(puVar3 + -0x18) = param_4;
  *(undefined1 **)(puVar3 + -0x10) = puVar23;
  *(undefined **)(puVar3 + -8) = puVar25;
  puVar23 = puVar3 + -0x10;
  plVar18 = (long *)0x3eb4000;
  unaff_x23 = 0x3d41238;
  if ((bRam0000000003eb4b3a & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d5bae0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7b0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d63a08);
    func_0x00f78a20(0x3d63a10);
    func_0x00f78a20(0x3d63a18);
    func_0x00f78a20(0x3d286e8);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41248);
    func_0x00f78a20(0x3d66fb0);
    bRam0000000003eb4b3a = 1;
  }
  *(undefined4 *)(puVar3 + -0x74) = 0;
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
  if (lVar8 != 0) {
    uVar10 = 0x3d41248;
    plVar18 = *(long **)(lVar8 + 0x70);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar9,uRam0000000003d41248);
    unaff_x24 = 0x3d41248;
    if (lVar8 != 0) {
      unaff_x22 = *(long *)(lVar8 + 0x88);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
      if (((lVar8 != 0) && (unaff_x24 = uVar10, unaff_x22 != 0)) &&
         (uVar10 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(unaff_x22,*(undefined8 *)(lVar8 + 0x50),0),
         plVar18 != (long *)0x0)) {
        (**(code **)(*plVar18 + 0x558))(plVar18,uVar10,*(undefined8 *)(*plVar18 + 0x560));
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar9,uRam0000000003d41248);
        if (lVar8 != 0) {
          plVar18 = *(long **)(lVar8 + 0x88);
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
          if ((lVar8 != 0) && (plVar18 != (long *)0x0)) {
            /*Core.Localisation.LocalisationManager$$FixForMultilineIfArabic*/ func_0x0164ff98(plVar18,*(undefined8 *)(lVar8 + 0x70),0);
            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
            if ((lVar8 != 0) && (*(long *)(lVar8 + 0x78) != 0)) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar8 + 0x78),0,0);
              lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
              if ((lVar8 != 0) && (*(long *)(lVar8 + 0x80) != 0)) {
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar8 + 0x80),0,0);
                lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                if ((lVar8 != 0) && (*(long *)(lVar8 + 0x88) != 0)) {
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar8 + 0x88),0,0);
                  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x90) != 0)) {
                    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar8 + 0x90),0,0);
                    uVar30 = param_3;
                    if (*(int *)((long)plVar17 + 0x14) == 4) {
                      switch((int)*plVar17) {
                      case 0:
                        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                        if (lVar8 != 0) {
                          lVar8 = *(long *)(lVar8 + 0x90);
joined_r0x014c653c:
                          if (lVar8 != 0) {
                            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,1,0);
                            uVar30 = param_3;
                            goto code_r0x014c654c;
                          }
                        }
                        break;
                      case 1:
                        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                        if (lVar8 != 0) {
                          lVar8 = *(long *)(lVar8 + 0x88);
                          goto joined_r0x014c653c;
                        }
                        break;
                      case 2:
                        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                        if (lVar8 != 0) {
                          lVar8 = *(long *)(lVar8 + 0x80);
                          goto joined_r0x014c653c;
                        }
                        break;
                      case 3:
                        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                        if (lVar8 != 0) {
                          lVar8 = *(long *)(lVar8 + 0x78);
                          goto joined_r0x014c653c;
                        }
                        break;
                      default:
                        goto code_r0x014c654c;
                      }
                    }
                    else {
code_r0x014c654c:
                      *(undefined1 *)(puVar9 + 0x25) = 1;
                      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar10 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
                      puVar9[0x24] = uVar10;
                      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                      param_3 = uVar30;
                      if (lVar8 != 0) {
                        lVar8 = *(long *)(lVar8 + 0x100);
                        /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                        plVar17 = (long *)0x0;
                        param_3 = uVar30;
                        if (lVar8 != 0) {
                          /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar8,0);
                          plVar17 = (long *)puVar9[0x24];
                          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                          param_3 = uVar30;
                          if (lVar8 != 0) {
                            plVar18 = *(long **)(lVar8 + 0xd8);
                            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                            param_3 = uVar30;
                            if ((lVar8 != 0) && (*(long *)(lVar8 + 0xe0) != 0)) {
                              uVar10 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar8 + 0xe0),0);
                              uVar10 = /*DG.Tweening.ShortcutExtensions$$DOMoveX*/ func_0x016b28e8(uVar10,0,plVar18,0,0);
                              plVar17 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(plVar17,uVar10,0);
                              lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                              param_3 = uVar30;
                              if (lVar8 != 0) {
                                uVar10 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,0,*(undefined8 *)(lVar8 + 0x100)
                                                         ,0);
                                plVar17 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(plVar17,uVar10,0);
                                lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                                param_3 = uVar30;
                                if (lVar8 != 0) {
                                  uVar10 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,0,*(undefined8 *)(lVar8 + 0xf8),0);
                                  plVar17 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(plVar17,uVar10,0);
                                  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                                  param_3 = uVar30;
                                  if (lVar8 != 0) {
                                    uVar10 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,0,*(undefined8 *)(lVar8 + 0xd0),0);
                                    plVar17 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(plVar17,uVar10,0);
                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                                    param_3 = uVar30;
                                    if (lVar8 != 0) {
                                      plVar18 = *(long **)(lVar8 + 0xd0);
                                      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                                      param_3 = uVar30;
                                      if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
                                        fVar26 = (float)/*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideInTime*/ func_0x01562c28(*(long *)(lVar8 + 0x68),0);
                                        uVar10 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0x3f800000,fVar26 * 0.5,plVar18,0);
                                        plVar17 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(plVar17,uVar10,0);
                                        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                                        param_3 = uVar30;
                                        if (lVar8 != 0) {
                                          plVar18 = *(long **)(lVar8 + 0xd8);
                                          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                                          param_3 = uVar30;
                                          if ((lVar8 != 0) && (*(long *)(lVar8 + 0xe8) != 0)) {
                                            uVar27 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar8 + 0xe8),0);
                                            unaff_d8 = (ulong)uVar27;
                                            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                                            param_3 = uVar30;
                                            if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
                                              uVar28 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideInTime*/ func_0x01562c28(*(long *)(lVar8 + 0x68),0);
                                              plVar18 = (long *)/*DG.Tweening.ShortcutExtensions$$DOMoveX*/ func_0x016b28e8(uVar27,uVar28,
                                                                                plVar18,0,0);
                                              lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                                              param_3 = uVar30;
                                              if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
                                                uVar24 = 0x3d286e8;
                                                uVar10 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(plVar18,*(undefined4 *)
                                                                                  (*(long *)(lVar8 +
                                                                                            0x68) +
                                                                                  0x38),
                                                                         uRam0000000003d5e7a8);
                                                uVar10 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(plVar17,uVar10,0);
                                                if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132) >>
                                                      10 & 1) != 0) &&
                                                   (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0)) {
                                                  func_0x00f78ad0();
                                                }
                                                uVar21 = 0x3d25428;
                                                plVar15 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8);
                                                plVar18 = (long *)plVar15[1];
                                                if (plVar18 == (long *)0x0) {
                                                  if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132) >>
                                                        10 & 1) != 0) &&
                                                     (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0)) {
                                                    func_0x00f78ad0();
                                                    plVar15 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8
                                                                        );
                                                  }
                                                  unaff_x22 = *plVar15;
                                                  plVar18 = (long *)func_0x00f78aec(
                                                  /*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                                                  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(plVar18,unaff_x22,
                                                                  uRam0000000003d63a08,0);
                                                  *(long **)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8)
                                                            + 8) = plVar18;
                                                }
                                                /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar10,plVar18,0);
                                                plVar17 = (long *)puVar9[0x24];
                                                lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238)
                                                ;
                                                unaff_x24 = uVar21;
                                                unaff_x25 = 0x3d286e8;
                                                param_3 = uVar30;
                                                if (lVar8 != 0) {
                                                  uVar10 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0x3f800000,0,
                                                                           *(undefined8 *)
                                                                            (lVar8 + 0xf8),0);
                                                  uVar10 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(plVar17,uVar10,0);
                                                  if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132) >>
                                                        10 & 1) != 0) &&
                                                     (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0)) {
                                                    func_0x00f78ad0();
                                                  }
                                                  plVar15 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8);
                                                  plVar18 = (long *)plVar15[2];
                                                  if (plVar18 == (long *)0x0) {
                                                    if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132)
                                                          >> 10 & 1) != 0) &&
                                                       (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0))
                                                    {
                                                      func_0x00f78ad0();
                                                      plVar15 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 +
                                                                          0xb8);
                                                    }
                                                    unaff_x22 = *plVar15;
                                                    plVar18 = (long *)func_0x00f78aec(
                                                  /*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                                                  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(plVar18,unaff_x22,
                                                                  uRam0000000003d63a10,0);
                                                  *(long **)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8)
                                                            + 0x10) = plVar18;
                                                  }
                                                  /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar10,plVar18,0);
                                                  plVar17 = (long *)puVar9[0x24];
                                                  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar30;
                                                  if (lVar8 != 0) {
                                                    plVar18 = *(long **)(lVar8 + 0x100);
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,
                                                  uRam0000000003d41238);
                                                  unaff_x25 = uVar24;
                                                  param_3 = uVar30;
                                                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)
                                                     ) {
                                                    uVar10 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(*(undefined4 *)
                                                                              (*(long *)(lVar8 + 
                                                  0x68) + 0x24),0,plVar18,0);
                                                  /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(plVar17,uVar10,0);
                                                  plVar17 = (long *)puVar9[0x24];
                                                  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar30;
                                                  if (lVar8 != 0) {
                                                    plVar18 = *(long **)(lVar8 + 0x100);
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar30;
                                                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)
                                                     ) {
                                                    unaff_x22 = 0x3d5e000;
                                                    uVar27 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_XPScaleTime*/ func_0x01562c00(*(long *)(lVar8 + 0x68)
                                                                             ,0);
                                                    uVar10 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,plVar18,0);
                                                    uVar10 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(plVar17,uVar10,0);
                                                    /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar10,3,uRam0000000003d5e7b0);
                                                    plVar17 = (long *)puVar9[0x24];
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar30;
                                                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)
                                                     ) {
                                                    /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_XPWaitTime*/ func_0x01562c10(*(long *)(lVar8 + 0x68),0);
                                                    uVar10 = /*DG.Tweening.TweenSettingsExtensions$$AppendInterval*/ func_0x016c3110(plVar17,0);
                                                    if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132)
                                                          >> 10 & 1) != 0) &&
                                                       (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0))
                                                    {
                                                      func_0x00f78ad0();
                                                    }
                                                    plVar15 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8
                                                                        );
                                                    plVar18 = (long *)plVar15[3];
                                                    if (plVar18 == (long *)0x0) {
                                                      if (((*(ushort *)
                                                             (/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132) >> 10 &
                                                           1) != 0) &&
                                                         (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0
                                                         )) {
                                                        func_0x00f78ad0();
                                                        plVar15 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 +
                                                                            0xb8);
                                                      }
                                                      unaff_x22 = *plVar15;
                                                      plVar18 = (long *)func_0x00f78aec(
                                                  /*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                                                  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(plVar18,unaff_x22,
                                                                  uRam0000000003d63a18,0);
                                                  *(long **)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8)
                                                            + 0x18) = plVar18;
                                                  }
                                                  /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar10,plVar18,0);
                                                  plVar17 = (long *)puVar9[0x24];
                                                  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar30;
                                                  if (lVar8 != 0) {
                                                    plVar18 = *(long **)(lVar8 + 0x100);
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar30;
                                                  if ((lVar8 != 0) &&
                                                     (*(long *)(lVar8 + 0x108) != 0)) {
                                                    uVar29 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar8 + 0x108
                                                                                      ),0);
                                                    unaff_d8 = (ulong)uVar29;
                                                    unaff_d9 = (ulong)uVar27;
                                                    unaff_d10 = (ulong)uVar30;
                                                    param_3 = uVar30;
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,
                                                  uRam0000000003d41238);
                                                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)
                                                     ) {
                                                    uVar28 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_XPSlideTime*/ func_0x01562bf0(*(long *)(lVar8 + 0x68)
                                                                             ,0);
                                                    uVar10 = /*DG.Tweening.ShortcutExtensions$$DOMove*/ func_0x016b26f4(uVar29,uVar27,uVar30,
                                                                             uVar28,plVar18,0,0);
                                                    plVar17 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(plVar17,uVar10
                                                                                      ,0);
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar30;
                                                  if (lVar8 != 0) {
                                                    plVar18 = *(long **)(lVar8 + 0xf8);
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar30;
                                                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)
                                                     ) {
                                                    uVar28 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_XPSlideTime*/ func_0x01562bf0(*(long *)(lVar8 + 0x68)
                                                                             ,0);
                                                    uVar10 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,uVar28,plVar18,0);
                                                    plVar17 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(plVar17,uVar10
                                                                                      ,0);
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar30;
                                                  if (lVar8 != 0) {
                                                    plVar18 = *(long **)(lVar8 + 0x100);
                                                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,
                                                  uRam0000000003d41238);
                                                  param_3 = uVar30;
                                                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)
                                                     ) {
                                                    unaff_x25 = 0x3d5b000;
                                                    unaff_x26 = 0x3d5e000;
                                                    uVar28 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_XPSlideTime*/ func_0x01562bf0(*(long *)(lVar8 + 0x68)
                                                                             ,0);
                                                    plVar18 = (long *)/*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f000000,
                                                                                      uVar28,plVar18
                                                                                      ,0);
                                                    unaff_x22 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428
                                                                               );
                                                    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(unaff_x22,puVar9,
                                                                    uRam0000000003d5bae0,0);
                                                    uVar10 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(plVar18,unaff_x22,
                                                                             uRam0000000003d5e6e0);
                                                    /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(plVar17,uVar10,0);
                                                    lVar8 = puVar9[0x15];
                                                    param_3 = uVar30;
                                                    if (lVar8 != 0) {
                                                      uVar27 = *(uint *)((long)puVar9 + 0xbc);
                                                      unaff_x24 = 0x3d25428;
                                                      if (*(uint *)(lVar8 + 0x18) <= uVar27)
                                                      goto code_r0x014c6cf8;
                                                      lVar14 = puVar9[0x14];
                                                      unaff_x24 = uVar21;
                                                      if (lVar14 != 0) {
                                                        unaff_x24 = 0x3d25428;
                                                        if (*(uint *)(lVar14 + 0x18) <= uVar27)
                                                        goto code_r0x014c6cf8;
                                                        *(int *)(puVar3 + -0x74) =
                                                             *(int *)(lVar8 + (long)(int)uVar27 * 4
                                                                     + 0x20) -
                                                             *(int *)(lVar14 + (long)(int)uVar27 * 4
                                                                     + 0x20);
                                                        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,
                                                  uRam0000000003d41238);
                                                  unaff_x24 = uVar21;
                                                  param_3 = uVar30;
                                                  if (lVar8 != 0) {
                                                    plVar18 = (long *)0x3d66000;
                                                    lVar8 = *(long *)(lVar8 + 0x98);
                                                    uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(puVar3 + -0x74,0);
                                                    uVar10 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('+')*/ uRam0000000003d66fb0,
                                                                             uVar10,0);
                                                    plVar17 = (long *)0x0;
                                                    param_3 = uVar30;
                                                    if (lVar8 != 0) {
                                                      puVar11 = (undefined8 *)
                                                                /*Atlas.UI.UIXPBehaviour$$Set*/ func_0x0151db10(lVar8,uVar10,0);
                                                      *(undefined4 *)(puVar9 + 0x13) = 0;
                                                      *(undefined1 *)((long)puVar9 + 0x94) = 1;
                                                      return puVar11;
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
code_r0x014c6cf8:
  uVar10 = func_0x00f78b24();
  puVar25 = &Atlas_UI_Screens_PostArcadeScreen__HideAward;
  puVar11 = (undefined8 *)func_0x00f78ac0(uVar10,0);
  puVar5 = puVar3 + -0x80;
  param_4 = puVar9;
code_r0x014c6d04:
  puVar4 = puVar5 + -0x40;
  *(ulong *)(puVar5 + -0x40) = unaff_d9;
  *(ulong *)(puVar5 + -0x38) = unaff_d8;
  *(long *)(puVar5 + -0x30) = unaff_x22;
  *(long **)(puVar5 + -0x28) = plVar18;
  *(long **)(puVar5 + -0x20) = plVar17;
  *(undefined8 **)(puVar5 + -0x18) = param_4;
  *(undefined1 **)(puVar5 + -0x10) = puVar23;
  *(undefined **)(puVar5 + -8) = puVar25;
  plVar18 = (long *)0x3d78fd8;
  if ((bRam0000000003eb4b3b & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d78fd8);
    bRam0000000003eb4b3b = 1;
  }
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/Dotween_SlideIn')*/ uRam0000000003d78fd8,0);
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
  puVar11[0x24] = uVar10;
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
  if (lVar8 != 0) {
    plVar18 = *(long **)(lVar8 + 0xd0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
      fVar26 = (float)/*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideOutTime*/ func_0x01562c40(*(long *)(lVar8 + 0x68),0);
      uVar24 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,fVar26 * 0.5,plVar18,0);
      uVar10 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar10,uVar24,0);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
      if (lVar8 != 0) {
        plVar18 = *(long **)(lVar8 + 0xd8);
        lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
        if ((lVar8 != 0) && (*(long *)(lVar8 + 0xf0) != 0)) {
          uVar30 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar8 + 0xf0),0);
          unaff_d8 = (ulong)uVar30;
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
          if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
            uVar28 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideOutTime*/ func_0x01562c40(*(long *)(lVar8 + 0x68),0);
            plVar18 = (long *)/*DG.Tweening.ShortcutExtensions$$DOMoveX*/ func_0x016b28e8(uVar30,uVar28,plVar18,0,0);
            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar11,uRam0000000003d41238);
            if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
              uVar24 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(plVar18,*(undefined4 *)(*(long *)(lVar8 + 0x68) + 0x40),
                                       uRam0000000003d5e7a8);
              puVar9 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar10,uVar24,0);
              *(undefined1 *)((long)puVar11 + 0x94) = 0;
              return puVar9;
            }
          }
        }
      }
    }
  }
  param_4 = (undefined8 *)func_0x00f78af4();
  puVar3 = puVar5 + -0xd0;
  auVar33._8_8_ = puVar5 + -0xd0;
  auVar33._0_8_ = param_4;
  *(undefined8 *)(puVar5 + -0xa0) = unaff_d11;
  *(ulong *)(puVar5 + -0x98) = unaff_d10;
  *(ulong *)(puVar5 + -0x90) = unaff_d9;
  *(ulong *)(puVar5 + -0x88) = unaff_d8;
  *(undefined8 *)(puVar5 + -0x80) = unaff_x24;
  *(undefined8 *)(puVar5 + -0x78) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x70) = 0x3d41238;
  *(long **)(puVar5 + -0x68) = plVar18;
  *(undefined8 *)(puVar5 + -0x60) = uVar10;
  *(undefined8 **)(puVar5 + -0x58) = puVar11;
  *(undefined1 **)(puVar5 + -0x50) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x48) = &Atlas_UI_Screens_PostArcadeScreen__OnUpdate;
  puVar23 = puVar5 + -0x50;
  unaff_d8 = extraout_d0 & 0xffffffff;
  plVar17 = (long *)0x3eb4000;
  unaff_x22 = 0x3d41238;
  lVar8 = 0x3d41238;
  if ((bRam0000000003eb4b3c & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d3e178);
    func_0x00f78a20(0x3d5bad8);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5c7a0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41240);
    func_0x00f78a20(0x3d41248);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d79110);
    func_0x00f78a20(0x3d7cd68);
    bRam0000000003eb4b3c = 1;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
  lVar14 = unaff_x22;
  uVar10 = unaff_x23;
  uVar24 = unaff_x24;
  if ((lVar12 != 0) && (*(long *)(lVar12 + 0xa8) != 0)) {
    plVar17 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar12 + 0xa8),0);
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
    lVar14 = lVar8;
    if ((lVar12 == 0) ||
       ((*(long *)(lVar12 + 0xb0) == 0 ||
        (/*Atlas.UI.SlantFillBar$$get_FillBotomRightPosition*/ func_0x014fc974(*(long *)(lVar12 + 0xb0),0), plVar17 == (long *)0x0))))
    goto code_r0x014c75c8;
    if (*plVar17 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) goto code_r0x014c75cc;
    puVar9 = (undefined8 *)/*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(plVar17,0);
    if (*(char *)((long)param_4 + 0x9d) != '\0') {
      return puVar9;
    }
    if (param_4[0x11] == 0) goto code_r0x014c75c8;
    puVar9 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionVisible*/ func_0x01511a80(param_4[0x11],0);
    if ((int)puVar9 != 0) {
      if (param_4[0x11] != 0) {
        puVar9 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionEnding*/ func_0x01511a70(param_4[0x11],0);
        if (((ulong)puVar9 & 1) != 0) {
          return puVar9;
        }
        if (param_4[0x10] != 0) {
          puVar9 = (undefined8 *)Atlas_FrontEnd_FrontEndScene__get_IsSceneChanging(param_4[0x10],0);
          if (((ulong)puVar9 & 1) != 0) {
            return puVar9;
          }
          lVar8 = param_4[0x11];
          if (lVar8 != 0) {
            *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x80);
            *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x78);
            *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0x70);
            *(undefined8 *)(puVar5 + -0x68) = *(undefined8 *)(puVar5 + -0x68);
            *(undefined8 *)(puVar5 + -0x60) = *(undefined8 *)(puVar5 + -0x60);
            *(undefined8 *)(puVar5 + -0x58) = *(undefined8 *)(puVar5 + -0x58);
            *(undefined8 *)(puVar5 + -0x50) = *(undefined8 *)(puVar5 + -0x50);
            *(undefined8 *)(puVar5 + -0x48) = *(undefined8 *)(puVar5 + -0x48);
            if ((bRam0000000003eb4d7b & 1) == 0) {
              func_0x00f78a20(0x3d417a8);
              bRam0000000003eb4d7b = 1;
            }
            if ((*(char *)(lVar8 + 0x10) == '\0') || (*(int *)(lVar8 + 0x30) != 2)) {
              puVar9 = (undefined8 *)0x0;
            }
            else {
              *(undefined4 *)(lVar8 + 0x30) = 3;
              if (*(long *)(lVar8 + 0x40) != 0) {
                /*UnityEngine.Events.UnityEvent<int, Sprite>$$Invoke*/ func_0x01b85798(*(long *)(lVar8 + 0x40),1,0,uRam0000000003d417a8);
              }
              /*Core.Input.InputManager$$ResumeAllInput*/ func_0x0164ae40(0);
              puVar9 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
            return puVar9;
          }
        }
      }
      goto code_r0x014c75c8;
    }
    if (*(char *)((long)param_4 + 0x9c) == '\0') {
      if (0.0 < *(float *)(param_4 + 0x12)) {
        *(float *)(param_4 + 0x12) = *(float *)(param_4 + 0x12) - (float)extraout_d0;
        return puVar9;
      }
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41248);
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x98) == 0)) goto code_r0x014c75c8;
      puVar9 = (undefined8 *)/*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar8 + 0x98),uRam0000000003d3e178);
      if (((ulong)puVar9 & 1) != 0) {
        return puVar9;
      }
      if (*(int *)((long)param_4 + 0x4c) != 2) {
        return puVar9;
      }
      if (*(char *)((long)param_4 + 0x94) == '\0') goto code_r0x014c7564;
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
      if ((lVar8 == 0) || (param_4[0x14] == 0)) goto code_r0x014c75c8;
      plVar17 = *(long **)(lVar8 + 0xb0);
      plVar18 = (long *)func_0x0001c0f4(param_4[0x14],(long)*(int *)((long)param_4 + 0xbc));
      if ((param_4[0x15] == 0) ||
         (iVar6 = func_0x0001c0f4(param_4[0x15],(long)*(int *)((long)param_4 + 0xbc)),
         plVar17 == (long *)0x0)) goto code_r0x014c75c8;
      fVar26 = (float)/*Atlas.UI.SlantFillBar$$CalculateValue*/ func_0x014fcfb8((float)(int)plVar18,(float)iVar6,plVar17,0);
      unaff_d9 = (ulong)(uint)fVar26;
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
      if (lVar8 == 0) goto code_r0x014c75c8;
      plVar17 = *(long **)(lVar8 + 0xa0);
      *(int *)(puVar5 + -0xa4) = (int)fVar26;
      plVar18 = (long *)func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,puVar5 + -0xa4);
      *(undefined4 *)(puVar5 + -0xa8) = *(undefined4 *)((long)param_4 + 0xc4);
      unaff_x23 = 0x3d22910;
      uVar20 = 0x3d22910;
      uVar10 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,puVar5 + -0xa8);
      unaff_x24 = 0x3d7cd68;
      uVar22 = 0x3d7cd68;
      uVar21 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0} / {1}')*/ uRam0000000003d7cd68,plVar18,uVar10,0);
      uVar10 = unaff_x23;
      uVar24 = unaff_x24;
      if (plVar17 == (long *)0x0) goto code_r0x014c75c8;
      /*Atlas.UI.UIXPBehaviour$$Set*/ func_0x0151db10(plVar17,uVar21,0);
      puVar9 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
      if ((puVar9 == (undefined8 *)0x0) || (uVar10 = uVar20, uVar24 = uVar22, puVar9[0x16] == 0))
      goto code_r0x014c75c8;
      if (*(char *)(puVar9[0x16] + 0x90) != '\0') {
code_r0x014c7554:
        *(float *)(param_4 + 0x13) = *(float *)(param_4 + 0x13) + (float)extraout_d0;
        return puVar9;
      }
      if (*(char *)(param_4 + 0x25) != '\0') {
        if (param_4[0x15] != 0) {
          puVar9 = (undefined8 *)func_0x0001c0f4(param_4[0x15],(long)*(int *)((long)param_4 + 0xbc))
          ;
          if ((fVar26 < (float)(int)puVar9) || (*(char *)((long)param_4 + 0x119) != '\0'))
          goto code_r0x014c7554;
          *(undefined1 *)((long)param_4 + 0x119) = 1;
          lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
          if ((lVar8 != 0) && (*(long *)(lVar8 + 0xb8) != 0)) {
            /*Atlas.UI.UIRewardBehaviour$$Set*/ func_0x0151d2a8(*(long *)(lVar8 + 0xb8),1,0);
            lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
            if ((lVar8 != 0) && (*(long *)(lVar8 + 200) != 0)) {
              plVar17 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(lVar8 + 200),0);
              lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
              if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
                uVar28 = *(undefined4 *)(*(long *)(lVar8 + 0x68) + 0x4c);
                lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
                  uVar32 = *(undefined4 *)(*(long *)(lVar8 + 0x68) + 0x44);
                  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x68) != 0)) {
                    uVar31 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_RankJumpDuration*/ func_0x01562c60(*(long *)(lVar8 + 0x68),0);
                    /*Atlas.UI.AtlasTweenAnimations$$JumpZoom*/ func_0x0146f84c(uVar28,0x3f800000,uVar32,uVar31,0,0,plVar17,0,0,0);
                    /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/ProgressBarComplete')*/ uRam0000000003d79110,0);
                    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                    if (lVar8 != 0) {
                      lVar8 = *(long *)(lVar8 + 0xb8);
                      plVar18 = (long *)func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(plVar18,param_4,uRam0000000003d5bad8,0);
                      plVar17 = (long *)0x0;
                      if (lVar8 != 0) {
                        puVar9 = (undefined8 *)/*Atlas.UI.UIRewardBehaviour$$Wiggle*/ func_0x0151d394(0,lVar8,plVar18,0);
                        goto code_r0x014c7554;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto code_r0x014c75c8;
      }
      puVar25 = &UNK_014c733c;
      puVar5 = puVar5 + -0xd0;
      puVar11 = param_4;
      goto code_r0x014c6d04;
    }
    *(undefined1 *)((long)param_4 + 0x9c) = 0;
    if (*(char *)(param_4 + 0x26) != '\0') {
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41240);
      if (lVar8 == 0) goto code_r0x014c75c8;
      *(undefined1 *)(lVar8 + 0x68) = 1;
    }
    plVar17 = (long *)param_4[0x10];
    plVar18 = (long *)param_4[0x1b];
    unaff_x22 = 0x3d41248;
    lVar14 = 0x3d41248;
    uVar21 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41248);
    puVar9 = (undefined8 *)/*Atlas.UI.Screens.RewardScreenExtensions$$RunRewardSequenceIfRewardUnseen<SingleplayerChapterBehaviour, SingleplayerChapterScreen.TransitionData>*/ func_0x018de5e0(plVar17,plVar18,param_4,uVar21,uRam0000000003d5c7a0);
    if ((int)puVar9 == 0) goto code_r0x014c75a4;
    *(undefined1 *)((long)param_4 + 0x9d) = 1;
    lVar8 = param_4[0x15];
    if (lVar8 == 0) goto code_r0x014c75c8;
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)((long)param_4 + 0xbc)) goto code_r0x014c75d0;
    if (*(int *)(lVar8 + (long)(int)*(uint *)((long)param_4 + 0xbc) * 4 + 0x20) <
        *(int *)((long)param_4 + 0xc4)) {
      return puVar9;
    }
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41248);
    if (lVar8 == 0) goto code_r0x014c75c8;
    plVar17 = *(long **)(lVar8 + 0x50);
    puVar9 = (undefined8 *)Atlas_UI_Screens_PostArcadeScreen__CreateScreenData(param_4);
    if (plVar17 != (long *)0x0) {
      plVar17[0xf] = (long)puVar9;
      if (*(char *)((long)param_4 + 0xcc) == '\0') {
        return puVar9;
      }
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41248);
      if ((lVar8 != 0) && (*(ulong *)(lVar8 + 0x50) != 0)) {
        auVar34._8_8_ = 0;
        auVar34._0_8_ = *(ulong *)(lVar8 + 0x50);
        puVar23 = *(undefined1 **)(puVar5 + -0x50);
        puVar25 = *(undefined **)(puVar5 + -0x48);
        lVar8 = *(long *)(puVar5 + -0x60);
        lVar14 = *(long *)(puVar5 + -0x58);
        puVar5 = puVar5 + -0x40;
        goto code_r0x0151ddac;
      }
    }
  }
code_r0x014c75c8:
  func_0x00f78af4();
  unaff_x22 = lVar14;
code_r0x014c75cc:
  func_0x00f78e5c();
  unaff_x23 = uVar10;
  unaff_x24 = uVar24;
code_r0x014c75d0:
  uVar10 = func_0x00f78b24();
  puVar25 = &Atlas_UI_Screens_PostArcadeScreen__PlacementAwardSequenceEnded;
  puVar11 = (undefined8 *)func_0x00f78ac0(uVar10,0);
  puVar4 = puVar5 + -0xd0;
  puVar9 = param_4;
  goto code_r0x014c75dc;
code_r0x014c7564:
  if (*(char *)((long)param_4 + 0x119) != '\0') {
    return puVar9;
  }
  if (*(char *)(param_4 + 0x1c) == '\0') goto code_r0x014c759c;
  uVar10 = param_4[0x1d];
  uVar21 = param_4[0x20];
  uVar24 = param_4[0x1f];
  *(undefined8 *)(puVar5 + -200) = param_4[0x1e];
  *(undefined8 *)(puVar5 + -0xd0) = uVar10;
  *(undefined8 *)(puVar5 + -0xb8) = uVar21;
  *(undefined8 *)(puVar5 + -0xc0) = uVar24;
  *(undefined8 *)(puVar5 + -0xb0) = param_4[0x21];
  puVar25 = &UNK_014c7598;
  plVar15 = plVar17;
  goto code_r0x014c6284;
code_r0x0151ddac:
  lVar19 = auVar34._0_8_;
  *(long *)(puVar5 + -0x20) = lVar8;
  *(long *)(puVar5 + -0x18) = lVar14;
  *(undefined1 **)(puVar5 + -0x10) = puVar23;
  *(undefined **)(puVar5 + -8) = puVar25;
  lVar8 = *(long *)(lVar19 + 0x68);
  lVar12 = lVar14;
  if (lVar8 == 0) goto code_r0x0151de64;
  if (*(int *)(lVar8 + 0x18) == 0) {
code_r0x0151de58:
    uVar10 = func_0x00f78b24(auVar34._0_8_,auVar34._8_8_);
    func_0x00f78ac0(uVar10,0);
  }
  else {
    *(undefined4 *)(lVar8 + 0x20) = 0;
    auVar34 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(1,*(undefined8 *)(lVar19 + 0x10),*(undefined8 *)(lVar19 + 0x20),0);
    lVar12 = lVar19;
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto code_r0x0151de58;
    *(int *)(lVar8 + 0x24) = auVar34._0_4_;
    lVar8 = *(long *)(lVar19 + 0x68);
    auVar34 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(2,*(undefined8 *)(lVar19 + 0x10),*(undefined8 *)(lVar19 + 0x20),0);
    if (lVar8 != 0) {
      if (2 < *(uint *)(lVar8 + 0x18)) {
        *(int *)(lVar8 + 0x28) = auVar34._0_4_;
        lVar8 = *(long *)(lVar19 + 0x68);
        auVar34 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(3,*(undefined8 *)(lVar19 + 0x10),*(undefined8 *)(lVar19 + 0x20),0)
        ;
        if (lVar8 == 0) goto code_r0x0151de64;
        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
          *(int *)(lVar8 + 0x2c) = auVar34._0_4_;
          return auVar34._0_8_;
        }
      }
      goto code_r0x0151de58;
    }
  }
code_r0x0151de64:
  auVar34 = func_0x00f78af4();
  lVar14 = auVar34._0_8_;
  *(long *)(puVar5 + -0x40) = lVar8;
  *(long *)(puVar5 + -0x38) = lVar12;
  *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x28) = &Atlas_Stats_UnlockManager__CacheCurrentArcadeRank;
  puVar23 = puVar5 + -0x30;
  puVar25 = &UNK_0151de7c;
  puVar5 = puVar5 + -0x40;
  goto code_r0x0151ddac;
code_r0x014c759c:
  if (*(char *)(param_4 + 0x23) != '\0') {
    return puVar9;
  }
code_r0x014c75a4:
  puVar23 = *(undefined1 **)(puVar5 + -0x50);
  puVar25 = *(undefined **)(puVar5 + -0x48);
  plVar17 = *(long **)(puVar5 + -0x60);
  puVar9 = *(undefined8 **)(puVar5 + -0x58);
  unaff_x22 = *(long *)(puVar5 + -0x70);
  plVar18 = *(long **)(puVar5 + -0x68);
  unaff_x24 = *(undefined8 *)(puVar5 + -0x80);
  unaff_x23 = *(undefined8 *)(puVar5 + -0x78);
  puVar11 = param_4;
code_r0x014c75dc:
  *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x38) = unaff_x23;
  *(long *)(puVar4 + -0x30) = unaff_x22;
  *(long **)(puVar4 + -0x28) = plVar18;
  *(long **)(puVar4 + -0x20) = plVar17;
  *(undefined8 **)(puVar4 + -0x18) = puVar9;
  *(undefined1 **)(puVar4 + -0x10) = puVar23;
  *(undefined **)(puVar4 + -8) = puVar25;
  lVar8 = 0x3eb4000;
  puVar9 = puVar11;
  if ((bRam0000000003eb4b3e & 1) == 0) {
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d23df0);
    puVar9 = (undefined8 *)func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b3e = 1;
  }
  *(undefined8 *)(puVar4 + -0x58) = 0;
  *(undefined8 *)(puVar4 + -0x50) = 0;
  *(undefined8 *)(puVar4 + -0x48) = 0;
  if (*(char *)(puVar11 + 0x23) != '\0') {
    return puVar9;
  }
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar11,uRam0000000003d41248);
  if (lVar14 == 0) goto code_r0x014c77e0;
  if (*(long *)(lVar14 + 0x20) == 0) goto code_r0x014c77e0;
  lVar12 = *(long *)(*(long *)(lVar14 + 0x20) + 0x10);
  lVar14 = 0x3d23df0;
  lVar19 = 0x3d23df0;
  if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar8 = 0;
  unaff_x22 = lVar14;
  if (lVar12 == 0) goto code_r0x014c77e0;
  lVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar12,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18),
                          uRam0000000003d57280);
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar11,uRam0000000003d41248);
  if (lVar12 == 0) goto code_r0x014c77e0;
  unaff_x22 = lVar19;
  if (*(long *)(lVar12 + 0xb0) == 0) goto code_r0x014c77e0;
  iVar6 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                    (*(long *)(lVar12 + 0xb0),lVar8,0);
  if (iVar6 != 0) {
    if (lVar8 == 0) goto code_r0x014c77e0;
    if (*(long *)(lVar8 + 0x58) == 0) goto code_r0x014c77e0;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar4 + -0x58,*(long *)(lVar8 + 0x58),uRam0000000003d3dc70);
    lVar14 = 0x3d337d0;
    unaff_x23 = 0x3d3e188;
    while (uVar13 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar4 + -0x58,uRam0000000003d337d0), (uVar13 & 1) != 0) {
      lVar8 = *(long *)(puVar4 + -0x48);
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar11,uRam0000000003d41248);
      if (lVar12 == 0) {
        func_0x00f78af4();
code_r0x014c77dc:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x14c77e0);
        (*pcVar2)();
      }
      if (*(long *)(lVar12 + 0x98) == 0) {
        func_0x00f78af4();
        goto code_r0x014c77dc;
      }
      /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar12 + 0x98),lVar8,uRam0000000003d3e188);
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar4 + -0x58,uRam0000000003d337c8);
  }
  do {
    unaff_x22 = lVar14;
    if ((puVar11[0x10] != 0) &&
       (lVar12 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(puVar11[0x10],0,0), lVar12 != 0)) {
      Atlas_Gameplay_Kart_KartFEAnimator__TriggerFEGainXP(lVar12,0);
      puVar25 = &UNK_014c77b8;
      puVar9 = puVar11;
      goto code_r0x014c7830;
    }
code_r0x014c77e0:
    lVar14 = unaff_x22;
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014c782c;
    plVar18 = (long *)___cxa_begin_catch();
    lVar8 = *plVar18;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar4 + -0x58,uRam0000000003d337c8);
  } while (lVar8 == 0);
  func_0x00f78ac0(lVar8,0);
code_r0x014c782c:
  puVar25 = &Atlas_UI_Screens_PostArcadeScreen__AllowExit;
  puVar9 = (undefined8 *)__Unwind_Resume();
code_r0x014c7830:
  *(long *)(puVar4 + -0x90) = lVar14;
  *(undefined8 *)(puVar4 + -0x88) = 0x3d41248;
  *(long *)(puVar4 + -0x80) = lVar8;
  *(undefined8 **)(puVar4 + -0x78) = puVar11;
  *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x68) = puVar25;
  uVar10 = 0x3eb4000;
  if ((bRam0000000003eb4b3f & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b3f = 1;
  }
  *(undefined4 *)((long)puVar9 + 300) = 2;
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0xc0) != 0)) {
    uVar10 = 0x3d41000;
    /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(*(long *)(lVar8 + 0xc0),1,0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar9,uRam0000000003d41248);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar8 + 0xb8),6,1,1,0);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
      if (((lVar8 != 0) && (*(long *)(lVar8 + 0x110) != 0)) &&
         (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar8 + 0x110),0), lVar8 != 0)) {
        puVar11 = (undefined8 *)/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,0,0);
        *(undefined1 *)(puVar9 + 0x23) = 1;
        return puVar11;
      }
    }
  }
  uVar24 = func_0x00f78af4();
  *(long *)(puVar4 + -0xc0) = lVar14;
  *(undefined8 *)(puVar4 + -0xb8) = uVar10;
  *(undefined8 *)(puVar4 + -0xb0) = 0x3d41238;
  *(undefined8 **)(puVar4 + -0xa8) = puVar9;
  *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x70;
  *(undefined **)(puVar4 + -0x98) = &Atlas_UI_Screens_PostArcadeScreen__PlayAgainPressed;
  uVar10 = 0x3eb4000;
  if ((bRam0000000003eb4b40 & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41240);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b40 = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar24,uRam0000000003d41238);
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0xc0) != 0)) {
    uVar10 = 0x3d41000;
    /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(*(long *)(lVar8 + 0xc0),0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar24,uRam0000000003d41248);
    if ((lVar8 != 0) && (*(long *)(lVar8 + 0xb8) != 0)) {
      uVar10 = 0x3d41000;
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar8 + 0xb8),6,0,0);
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar24,uRam0000000003d41240);
      if (lVar8 != 0) {
        puVar9 = *(undefined8 **)(lVar8 + 0x50);
        if (puVar9 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        uVar10 = 0;
        *(undefined8 *)(puVar4 + -0xe0) = unaff_x26;
        *(undefined8 *)(puVar4 + -0xd8) = unaff_x25;
        *(undefined8 *)(puVar4 + -0xd0) = unaff_x24;
        *(undefined8 *)(puVar4 + -200) = unaff_x23;
        *(undefined8 *)(puVar4 + -0xc0) = *(undefined8 *)(puVar4 + -0xc0);
        *(undefined8 *)(puVar4 + -0xb8) = *(undefined8 *)(puVar4 + -0xb8);
        *(undefined8 *)(puVar4 + -0xb0) = *(undefined8 *)(puVar4 + -0xb0);
        *(undefined8 *)(puVar4 + -0xa8) = *(undefined8 *)(puVar4 + -0xa8);
        *(undefined8 *)(puVar4 + -0xa0) = *(undefined8 *)(puVar4 + -0xa0);
        *(undefined8 *)(puVar4 + -0x98) = *(undefined8 *)(puVar4 + -0x98);
        *(undefined8 **)(puVar4 + -0xe8) = puVar9;
        lVar8 = puVar9[0xd];
        if (lVar8 == 0) {
          puVar23 = puVar4 + -0xe8;
          lVar14 = 1;
        }
        else {
          lVar14 = *(long *)(lVar8 + 0x18);
          if (lVar14 == 0) {
            return puVar9;
          }
          puVar23 = (undefined1 *)(lVar8 + 0x20);
        }
        lVar8 = 0;
        do {
          lVar12 = *(long *)(puVar23 + lVar8 * 8);
          pcVar2 = *(code **)(lVar12 + 0x10);
          plVar18 = *(long **)(lVar12 + 0x20);
          lVar12 = *(long *)(lVar12 + 0x28);
          if (*(short *)(lVar12 + 0x48) == -1) {
            func_0x00f78ad8(lVar12,uVar10);
          }
          iVar6 = func_0x00f78a4c(lVar12);
          if (iVar6 == 0) {
            if ((((plVar18 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
                ((*(byte *)(*plVar18 + 0x115) & 1) != 0)) || (puVar9[3] == 0))
            goto code_r0x01562a40;
            iVar6 = func_0x00f78a44(lVar12);
            iVar7 = func_0x00f78ec0(lVar12);
            if (iVar6 == 0) {
              uVar1 = *(ushort *)(lVar12 + 0x48);
              if (iVar7 == 0) {
                lVar12 = *plVar18 + (ulong)uVar1 * 0x10;
                auVar33 = (**(code **)(lVar12 + 0x138))(plVar18,*(undefined8 *)(lVar12 + 0x140));
                goto code_r0x01562a4c;
              }
              lVar12 = func_0x00f78a48(lVar12);
              lVar19 = *plVar18;
              uVar13 = (ulong)*(ushort *)(lVar19 + 0x12a);
              if (uVar13 != 0) {
                piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar12) {
                    puVar11 = (undefined8 *)
                              (lVar19 + (long)(int)(*piVar16 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x01562b10;
                  }
                  piVar16 = piVar16 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              puVar11 = (undefined8 *)func_0x00fac1f0(plVar18,lVar12,(ulong)uVar1);
code_r0x01562b10:
              pcVar2 = (code *)*puVar11;
              puVar11 = (undefined8 *)puVar11[1];
            }
            else {
              if (iVar7 == 0) {
                uVar10 = *(undefined8 *)
                          (*plVar18 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar19 = *plVar18;
                uVar13 = (ulong)*(ushort *)(lVar19 + 0x12a);
                if (uVar13 != 0) {
                  piVar16 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)(lVar12 + 0x18)) {
                      lVar19 = lVar19 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01562ae8;
                    }
                    piVar16 = piVar16 + 4;
                    uVar13 = uVar13 - 1;
                  } while (uVar13 != 0);
                }
                lVar19 = func_0x00fac1f0(plVar18);
code_r0x01562ae8:
                uVar10 = *(undefined8 *)(lVar19 + 8);
              }
              puVar11 = (undefined8 *)func_0x00f78acc(uVar10,lVar12);
              pcVar2 = (code *)*puVar11;
            }
            auVar33 = (*pcVar2)(plVar18,puVar11);
          }
          else if (*(char *)(lVar12 + 0x4a) == '\0') {
            auVar33 = (*pcVar2)(lVar12);
          }
          else {
code_r0x01562a40:
            auVar33 = (*pcVar2)(plVar18,lVar12);
          }
code_r0x01562a4c:
          uVar10 = auVar33._8_8_;
          lVar8 = lVar8 + 1;
          if (lVar8 == lVar14) {
            return auVar33._0_8_;
          }
        } while( true );
      }
    }
  }
  lVar8 = func_0x00f78af4();
  *(undefined8 *)(puVar4 + -0x100) = unaff_x24;
  *(undefined8 *)(puVar4 + -0xf8) = unaff_x23;
  *(long *)(puVar4 + -0xf0) = lVar14;
  *(undefined8 *)(puVar4 + -0xe8) = 0x3d41238;
  *(undefined8 *)(puVar4 + -0xe0) = uVar10;
  *(undefined8 *)(puVar4 + -0xd8) = uVar24;
  *(undefined1 **)(puVar4 + -0xd0) = puVar4 + -0xa0;
  *(undefined **)(puVar4 + -200) = &Atlas_UI_Screens_PostArcadeScreen___ctor;
  if ((bRam0000000003eb4b42 & 1) == 0) {
    func_0x00f78a20(0x3d2c898);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4b42 = 1;
  }
  uVar10 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar10,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar14 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar10,0);
  if (lVar14 != 0) {
    uVar10 = 0x3d1f100;
    uVar24 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar14 + 0x18));
    *(undefined8 *)(lVar8 + 0xa0) = uVar24;
    uVar24 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar14 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar24,0);
    if (lVar14 != 0) {
      uVar10 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar14 + 0x18));
      *(undefined8 *)(lVar8 + 0xa8) = uVar10;
      *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)(puVar4 + -0xd0);
      *(undefined8 *)(puVar4 + -200) = *(undefined8 *)(puVar4 + -200);
      if (lVar8 == 0) {
        auVar33 = func_0x00f78af4();
        puVar11 = auVar33._8_8_;
        puVar9 = auVar33._0_8_;
        uVar24 = puVar11[1];
        uVar10 = *puVar11;
        puVar9[2] = puVar11[2];
        puVar9[1] = uVar24;
        *puVar9 = uVar10;
        return puVar9;
      }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar9 = (undefined8 *)
               (*(code *)**(undefined8 **)
                           (*(long *)(*(long *)(lRam0000000003d2c898 + 0x18) + 0xc0) + 0x38))();
      return puVar9;
    }
  }
  func_0x00f78af4();
  *(undefined8 *)(puVar4 + -0x150) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x148) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x140) = unaff_x24;
  *(undefined8 *)(puVar4 + -0x138) = 0x3d215e0;
  *(undefined8 *)(puVar4 + -0x130) = 0x3d25458;
  *(undefined8 *)(puVar4 + -0x128) = 0x3d1a510;
  *(undefined8 *)(puVar4 + -0x120) = uVar10;
  *(long *)(puVar4 + -0x118) = lVar8;
  *(undefined1 **)(puVar4 + -0x110) = puVar4 + -0xd0;
  *(undefined **)(puVar4 + -0x108) = &Atlas_UI_Screens_PostArcadeScreen___cctor;
  if ((bRam0000000003eb4b43 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d23df0);
    func_0x00f78a20(0x3d6cb40);
    func_0x00f78a20(0x3d6cbd0);
    func_0x00f78a20(0x3d706f8);
    func_0x00f78a20(0x3d729a8);
    func_0x00f78a20(0x3d6cb00);
    func_0x00f78a20(0x3d69870);
    bRam0000000003eb4b43 = 1;
  }
  uVar28 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('NothingToBronze')*/ uRam0000000003d706f8,0);
  **(undefined4 **)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) = uVar28;
  uVar28 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('BronzeToSilver')*/ uRam0000000003d69870,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 4) = uVar28;
  uVar28 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('SilverToGold')*/ uRam0000000003d729a8,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 8) = uVar28;
  if (((*(byte *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_9_CharacterProgress')*/ uRam0000000003d6cbd0,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x10) = uVar10;
  uVar10 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_10_CharacterProgress_2')*/ uRam0000000003d6cb00,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18) = uVar10;
  puVar9 = (undefined8 *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_17_DailyChallenges')*/ uRam0000000003d6cb40,0);
  *(undefined8 **)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x20) = puVar9;
  return puVar9;
}



// ============================================================
// RVA: 0x14c6284 | Atlas.UI.Screens.PostArcadeScreen.StartAward
// ============================================================

/* WARNING: Possible PIC construction at 0x014c77b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151de78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014c7338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151de7c) */
/* WARNING: Removing unreachable block (ram,0x014500ac) */
/* WARNING: Removing unreachable block (ram,0x01450100) */
/* WARNING: Removing unreachable block (ram,0x0145011c) */
/* WARNING: Removing unreachable block (ram,0x014c733c) */
/* WARNING: Removing unreachable block (ram,0x014c734c) */
/* WARNING: Removing unreachable block (ram,0x014c7354) */
/* WARNING: Removing unreachable block (ram,0x014c73a4) */
/* WARNING: Removing unreachable block (ram,0x014c73c4) */
/* WARNING: Removing unreachable block (ram,0x014c73cc) */

undefined8 *
Atlas_UI_Screens_PostArcadeScreen__StartAward
          (undefined1 param_1 [16],undefined1 param_2 [16],uint param_3,undefined8 *param_4,
          long *param_5)

{
  ushort uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int extraout_w1;
  long *plVar13;
  long lVar14;
  int *piVar15;
  long *plVar16;
  long unaff_x22;
  long lVar17;
  undefined8 uVar18;
  undefined8 unaff_x24;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  undefined8 unaff_x25;
  undefined8 uVar23;
  undefined8 unaff_x26;
  undefined *puVar24;
  float fVar25;
  uint uVar26;
  undefined4 uVar27;
  uint uVar28;
  undefined4 uVar29;
  ulong extraout_d0;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined4 uVar30;
  ulong unaff_d10;
  undefined8 unaff_d11;
  undefined1 auVar31 [16];
  undefined1 auStack_80 [12];
  int iStack_74;
  
  puVar22 = &stack0xfffffffffffffff0;
  plVar16 = (long *)0x3eb4000;
  uVar9 = 0x3d41238;
  if ((bRam0000000003eb4b3a & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d5bae0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6e0);
    func_0x00f78a20(0x3d5e7b0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d63a08);
    func_0x00f78a20(0x3d63a10);
    func_0x00f78a20(0x3d63a18);
    func_0x00f78a20(0x3d286e8);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41248);
    func_0x00f78a20(0x3d66fb0);
    bRam0000000003eb4b3a = 1;
  }
  iStack_74 = 0;
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
  if (lVar7 != 0) {
    uVar19 = 0x3d41248;
    plVar16 = *(long **)(lVar7 + 0x70);
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41248);
    unaff_x24 = 0x3d41248;
    if (lVar7 != 0) {
      unaff_x22 = *(long *)(lVar7 + 0x88);
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
      if (((lVar7 != 0) && (unaff_x24 = uVar19, unaff_x22 != 0)) &&
         (uVar19 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(unaff_x22,*(undefined8 *)(lVar7 + 0x50),0),
         plVar16 != (long *)0x0)) {
        (**(code **)(*plVar16 + 0x558))(plVar16,uVar19,*(undefined8 *)(*plVar16 + 0x560));
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41248);
        if (lVar7 != 0) {
          plVar16 = *(long **)(lVar7 + 0x88);
          lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
          if ((lVar7 != 0) && (plVar16 != (long *)0x0)) {
            /*Core.Localisation.LocalisationManager$$FixForMultilineIfArabic*/ func_0x0164ff98(plVar16,*(undefined8 *)(lVar7 + 0x70),0);
            lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
            if ((lVar7 != 0) && (*(long *)(lVar7 + 0x78) != 0)) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar7 + 0x78),0,0);
              lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
              if ((lVar7 != 0) && (*(long *)(lVar7 + 0x80) != 0)) {
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar7 + 0x80),0,0);
                lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                if ((lVar7 != 0) && (*(long *)(lVar7 + 0x88) != 0)) {
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar7 + 0x88),0,0);
                  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x90) != 0)) {
                    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar7 + 0x90),0,0);
                    if (*(int *)((long)param_5 + 0x14) == 4) {
                      switch((int)*param_5) {
                      case 0:
                        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                        if (lVar7 != 0) {
                          lVar7 = *(long *)(lVar7 + 0x90);
joined_r0x014c653c:
                          if (lVar7 != 0) {
                            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,1,0);
                            goto LAB_014c654c;
                          }
                        }
                        break;
                      case 1:
                        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                        if (lVar7 != 0) {
                          lVar7 = *(long *)(lVar7 + 0x88);
                          goto joined_r0x014c653c;
                        }
                        break;
                      case 2:
                        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                        if (lVar7 != 0) {
                          lVar7 = *(long *)(lVar7 + 0x80);
                          goto joined_r0x014c653c;
                        }
                        break;
                      case 3:
                        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                        if (lVar7 != 0) {
                          lVar7 = *(long *)(lVar7 + 0x78);
                          goto joined_r0x014c653c;
                        }
                        break;
                      default:
                        goto LAB_014c654c;
                      }
                    }
                    else {
LAB_014c654c:
                      *(undefined1 *)(param_4 + 0x25) = 1;
                      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar19 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
                      param_4[0x24] = uVar19;
                      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                      if (lVar7 != 0) {
                        lVar7 = *(long *)(lVar7 + 0x100);
                        /*UnityEngine.Vector3$$get_zero*/ func_0x0327b7d4(0);
                        param_5 = (long *)0x0;
                        if (lVar7 != 0) {
                          /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar7,0);
                          param_5 = (long *)param_4[0x24];
                          lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                          if (lVar7 != 0) {
                            plVar16 = *(long **)(lVar7 + 0xd8);
                            lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                            if ((lVar7 != 0) && (*(long *)(lVar7 + 0xe0) != 0)) {
                              uVar19 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar7 + 0xe0),0);
                              uVar19 = /*DG.Tweening.ShortcutExtensions$$DOMoveX*/ func_0x016b28e8(uVar19,0,plVar16,0,0);
                              param_5 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(param_5,uVar19,0);
                              lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                              if (lVar7 != 0) {
                                uVar19 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,0,*(undefined8 *)(lVar7 + 0x100)
                                                         ,0);
                                param_5 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(param_5,uVar19,0);
                                lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                                if (lVar7 != 0) {
                                  uVar19 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,0,*(undefined8 *)(lVar7 + 0xf8),0);
                                  param_5 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(param_5,uVar19,0);
                                  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                                  if (lVar7 != 0) {
                                    uVar19 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,0,*(undefined8 *)(lVar7 + 0xd0),0);
                                    param_5 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(param_5,uVar19,0);
                                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                                    if (lVar7 != 0) {
                                      plVar16 = *(long **)(lVar7 + 0xd0);
                                      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                                      if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)) {
                                        fVar25 = (float)/*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideInTime*/ func_0x01562c28(*(long *)(lVar7 + 0x68),0);
                                        uVar19 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0x3f800000,fVar25 * 0.5,plVar16,0);
                                        param_5 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(param_5,uVar19,0);
                                        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                                        if (lVar7 != 0) {
                                          plVar16 = *(long **)(lVar7 + 0xd8);
                                          lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                                          if ((lVar7 != 0) && (*(long *)(lVar7 + 0xe8) != 0)) {
                                            uVar26 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar7 + 0xe8),0);
                                            unaff_d8 = (ulong)uVar26;
                                            lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                                            if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)) {
                                              uVar27 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideInTime*/ func_0x01562c28(*(long *)(lVar7 + 0x68),0);
                                              plVar16 = (long *)/*DG.Tweening.ShortcutExtensions$$DOMoveX*/ func_0x016b28e8(uVar26,uVar27,
                                                                                plVar16,0,0);
                                              lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
                                              if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)) {
                                                uVar23 = 0x3d286e8;
                                                uVar19 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(plVar16,*(undefined4 *)
                                                                                  (*(long *)(lVar7 +
                                                                                            0x68) +
                                                                                  0x38),
                                                                         uRam0000000003d5e7a8);
                                                uVar19 = /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(param_5,uVar19,0);
                                                if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132) >>
                                                      10 & 1) != 0) &&
                                                   (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0)) {
                                                  func_0x00f78ad0();
                                                }
                                                uVar20 = 0x3d25428;
                                                plVar13 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8);
                                                plVar16 = (long *)plVar13[1];
                                                if (plVar16 == (long *)0x0) {
                                                  if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132) >>
                                                        10 & 1) != 0) &&
                                                     (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0)) {
                                                    func_0x00f78ad0();
                                                    plVar13 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8
                                                                        );
                                                  }
                                                  unaff_x22 = *plVar13;
                                                  plVar16 = (long *)func_0x00f78aec(
                                                  /*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                                                  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(plVar16,unaff_x22,
                                                                  uRam0000000003d63a08,0);
                                                  *(long **)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8)
                                                            + 8) = plVar16;
                                                }
                                                /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar19,plVar16,0);
                                                param_5 = (long *)param_4[0x24];
                                                lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238
                                                                       );
                                                unaff_x24 = uVar20;
                                                unaff_x25 = 0x3d286e8;
                                                if (lVar7 != 0) {
                                                  uVar19 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0x3f800000,0,
                                                                           *(undefined8 *)
                                                                            (lVar7 + 0xf8),0);
                                                  uVar19 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(param_5,uVar19,0);
                                                  if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132) >>
                                                        10 & 1) != 0) &&
                                                     (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0)) {
                                                    func_0x00f78ad0();
                                                  }
                                                  plVar13 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8);
                                                  plVar16 = (long *)plVar13[2];
                                                  if (plVar16 == (long *)0x0) {
                                                    if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132)
                                                          >> 10 & 1) != 0) &&
                                                       (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0))
                                                    {
                                                      func_0x00f78ad0();
                                                      plVar13 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 +
                                                                          0xb8);
                                                    }
                                                    unaff_x22 = *plVar13;
                                                    plVar16 = (long *)func_0x00f78aec(
                                                  /*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                                                  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(plVar16,unaff_x22,
                                                                  uRam0000000003d63a10,0);
                                                  *(long **)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8)
                                                            + 0x10) = plVar16;
                                                  }
                                                  /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar19,plVar16,0);
                                                  param_5 = (long *)param_4[0x24];
                                                  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,
                                                  uRam0000000003d41238);
                                                  if (lVar7 != 0) {
                                                    plVar16 = *(long **)(lVar7 + 0x100);
                                                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,
                                                  uRam0000000003d41238);
                                                  unaff_x25 = uVar23;
                                                  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)
                                                     ) {
                                                    uVar19 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(*(undefined4 *)
                                                                              (*(long *)(lVar7 + 
                                                  0x68) + 0x24),0,plVar16,0);
                                                  /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(param_5,uVar19,0);
                                                  param_5 = (long *)param_4[0x24];
                                                  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,
                                                  uRam0000000003d41238);
                                                  if (lVar7 != 0) {
                                                    plVar16 = *(long **)(lVar7 + 0x100);
                                                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,
                                                  uRam0000000003d41238);
                                                  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)
                                                     ) {
                                                    unaff_x22 = 0x3d5e000;
                                                    uVar26 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_XPScaleTime*/ func_0x01562c00(*(long *)(lVar7 + 0x68)
                                                                             ,0);
                                                    uVar19 = /*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f800000,plVar16,0);
                                                    uVar19 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(param_5,uVar19,0);
                                                    /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar19,3,uRam0000000003d5e7b0);
                                                    param_5 = (long *)param_4[0x24];
                                                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,
                                                  uRam0000000003d41238);
                                                  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)
                                                     ) {
                                                    /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_XPWaitTime*/ func_0x01562c10(*(long *)(lVar7 + 0x68),0);
                                                    uVar19 = /*DG.Tweening.TweenSettingsExtensions$$AppendInterval*/ func_0x016c3110(param_5,0);
                                                    if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132)
                                                          >> 10 & 1) != 0) &&
                                                       (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0))
                                                    {
                                                      func_0x00f78ad0();
                                                    }
                                                    plVar13 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8
                                                                        );
                                                    plVar16 = (long *)plVar13[3];
                                                    if (plVar16 == (long *)0x0) {
                                                      if (((*(ushort *)
                                                             (/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0x132) >> 10 &
                                                           1) != 0) &&
                                                         (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xe0) == 0
                                                         )) {
                                                        func_0x00f78ad0();
                                                        plVar13 = *(long **)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 +
                                                                            0xb8);
                                                      }
                                                      unaff_x22 = *plVar13;
                                                      plVar16 = (long *)func_0x00f78aec(
                                                  /*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                                                  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(plVar16,unaff_x22,
                                                                  uRam0000000003d63a18,0);
                                                  *(long **)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen.<>c_TypeInfo*/ lRam0000000003d286e8 + 0xb8)
                                                            + 0x18) = plVar16;
                                                  }
                                                  /*DG.Tweening.TweenSettingsExtensions$$AppendCallback*/ func_0x016c3190(uVar19,plVar16,0);
                                                  param_5 = (long *)param_4[0x24];
                                                  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,
                                                  uRam0000000003d41238);
                                                  if (lVar7 != 0) {
                                                    plVar16 = *(long **)(lVar7 + 0x100);
                                                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,
                                                  uRam0000000003d41238);
                                                  if ((lVar7 != 0) &&
                                                     (*(long *)(lVar7 + 0x108) != 0)) {
                                                    uVar28 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar7 + 0x108
                                                                                      ),0);
                                                    unaff_d8 = (ulong)uVar28;
                                                    unaff_d9 = (ulong)uVar26;
                                                    unaff_d10 = (ulong)param_3;
                                                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,
                                                  uRam0000000003d41238);
                                                  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)
                                                     ) {
                                                    uVar27 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_XPSlideTime*/ func_0x01562bf0(*(long *)(lVar7 + 0x68)
                                                                             ,0);
                                                    uVar19 = /*DG.Tweening.ShortcutExtensions$$DOMove*/ func_0x016b26f4(uVar28,uVar26,param_3,
                                                                             uVar27,plVar16,0,0);
                                                    param_5 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(param_5,uVar19
                                                                                      ,0);
                                                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,
                                                  uRam0000000003d41238);
                                                  if (lVar7 != 0) {
                                                    plVar16 = *(long **)(lVar7 + 0xf8);
                                                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,
                                                  uRam0000000003d41238);
                                                  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)
                                                     ) {
                                                    uVar27 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_XPSlideTime*/ func_0x01562bf0(*(long *)(lVar7 + 0x68)
                                                                             ,0);
                                                    uVar19 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,uVar27,plVar16,0);
                                                    param_5 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(param_5,uVar19
                                                                                      ,0);
                                                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,
                                                  uRam0000000003d41238);
                                                  if (lVar7 != 0) {
                                                    plVar16 = *(long **)(lVar7 + 0x100);
                                                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,
                                                  uRam0000000003d41238);
                                                  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)
                                                     ) {
                                                    unaff_x25 = 0x3d5b000;
                                                    unaff_x26 = 0x3d5e000;
                                                    uVar27 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_XPSlideTime*/ func_0x01562bf0(*(long *)(lVar7 + 0x68)
                                                                             ,0);
                                                    plVar16 = (long *)/*DG.Tweening.ShortcutExtensions$$DOScale*/ func_0x016b3f58(0x3f000000,
                                                                                      uVar27,plVar16
                                                                                      ,0);
                                                    unaff_x22 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428
                                                                               );
                                                    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(unaff_x22,param_4,
                                                                    uRam0000000003d5bae0,0);
                                                    uVar19 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(plVar16,unaff_x22,
                                                                             uRam0000000003d5e6e0);
                                                    /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(param_5,uVar19,0);
                                                    lVar7 = param_4[0x15];
                                                    if (lVar7 != 0) {
                                                      uVar26 = *(uint *)((long)param_4 + 0xbc);
                                                      unaff_x24 = 0x3d25428;
                                                      if (*(uint *)(lVar7 + 0x18) <= uVar26)
                                                      goto code_r0x014c6cf8;
                                                      lVar14 = param_4[0x14];
                                                      unaff_x24 = uVar20;
                                                      if (lVar14 != 0) {
                                                        unaff_x24 = 0x3d25428;
                                                        if (*(uint *)(lVar14 + 0x18) <= uVar26)
                                                        goto code_r0x014c6cf8;
                                                        iStack_74 = *(int *)(lVar7 + (long)(int)
                                                  uVar26 * 4 + 0x20) -
                                                  *(int *)(lVar14 + (long)(int)uVar26 * 4 + 0x20);
                                                  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,
                                                  uRam0000000003d41238);
                                                  unaff_x24 = uVar20;
                                                  if (lVar7 != 0) {
                                                    plVar16 = (long *)0x3d66000;
                                                    lVar7 = *(long *)(lVar7 + 0x98);
                                                    uVar19 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_74,0);
                                                    uVar19 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('+')*/ uRam0000000003d66fb0,
                                                                             uVar19,0);
                                                    param_5 = (long *)0x0;
                                                    if (lVar7 != 0) {
                                                      puVar8 = (undefined8 *)
                                                               /*Atlas.UI.UIXPBehaviour$$Set*/ func_0x0151db10(lVar7,uVar19,0);
                                                      *(undefined4 *)(param_4 + 0x13) = 0;
                                                      *(undefined1 *)((long)param_4 + 0x94) = 1;
                                                      return puVar8;
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
code_r0x014c6cf8:
  uVar19 = func_0x00f78b24();
  puVar24 = &Atlas_UI_Screens_PostArcadeScreen__HideAward;
  puVar8 = (undefined8 *)func_0x00f78ac0(uVar19,0);
  puVar4 = auStack_80;
  do {
    puVar3 = puVar4 + -0x40;
    *(ulong *)(puVar4 + -0x40) = unaff_d9;
    *(ulong *)(puVar4 + -0x38) = unaff_d8;
    *(long *)(puVar4 + -0x30) = unaff_x22;
    *(long **)(puVar4 + -0x28) = plVar16;
    *(long **)(puVar4 + -0x20) = param_5;
    *(undefined8 **)(puVar4 + -0x18) = param_4;
    *(undefined1 **)(puVar4 + -0x10) = puVar22;
    *(undefined **)(puVar4 + -8) = puVar24;
    plVar16 = (long *)0x3d78fd8;
    if ((bRam0000000003eb4b3b & 1) == 0) {
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d5e7a8);
      func_0x00f78a20(0x3d41238);
      func_0x00f78a20(0x3d78fd8);
      bRam0000000003eb4b3b = 1;
    }
    /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/Dotween_SlideIn')*/ uRam0000000003d78fd8,0);
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar19 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
    puVar8[0x24] = uVar19;
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
    if (lVar7 != 0) {
      plVar16 = *(long **)(lVar7 + 0xd0);
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)) {
        fVar25 = (float)/*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideOutTime*/ func_0x01562c40(*(long *)(lVar7 + 0x68),0);
        uVar23 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,fVar25 * 0.5,plVar16,0);
        uVar19 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar19,uVar23,0);
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
        if (lVar7 != 0) {
          plVar16 = *(long **)(lVar7 + 0xd8);
          lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
          if ((lVar7 != 0) && (*(long *)(lVar7 + 0xf0) != 0)) {
            uVar26 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar7 + 0xf0),0);
            unaff_d8 = (ulong)uVar26;
            lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
            if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)) {
              uVar27 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideOutTime*/ func_0x01562c40(*(long *)(lVar7 + 0x68),0);
              plVar16 = (long *)/*DG.Tweening.ShortcutExtensions$$DOMoveX*/ func_0x016b28e8(uVar26,uVar27,plVar16,0,0);
              lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
              if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)) {
                uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(plVar16,*(undefined4 *)(*(long *)(lVar7 + 0x68) + 0x40),
                                        uRam0000000003d5e7a8);
                puVar10 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar19,uVar9,0);
                *(undefined1 *)((long)puVar8 + 0x94) = 0;
                return puVar10;
              }
            }
          }
        }
      }
    }
    param_4 = (undefined8 *)func_0x00f78af4();
    *(undefined8 *)(puVar4 + -0xa0) = unaff_d11;
    *(ulong *)(puVar4 + -0x98) = unaff_d10;
    *(ulong *)(puVar4 + -0x90) = unaff_d9;
    *(ulong *)(puVar4 + -0x88) = unaff_d8;
    *(undefined8 *)(puVar4 + -0x80) = unaff_x24;
    *(undefined8 *)(puVar4 + -0x78) = uVar9;
    *(undefined8 *)(puVar4 + -0x70) = 0x3d41238;
    *(long **)(puVar4 + -0x68) = plVar16;
    *(undefined8 *)(puVar4 + -0x60) = uVar19;
    *(undefined8 **)(puVar4 + -0x58) = puVar8;
    *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x48) = &Atlas_UI_Screens_PostArcadeScreen__OnUpdate;
    puVar22 = puVar4 + -0x50;
    unaff_d8 = extraout_d0 & 0xffffffff;
    param_5 = (long *)0x3eb4000;
    unaff_x22 = 0x3d41238;
    lVar7 = 0x3d41238;
    if ((bRam0000000003eb4b3c & 1) == 0) {
      func_0x00f78a20(0x3d22910);
      func_0x00f78a20(0x3d3e178);
      func_0x00f78a20(0x3d5bad8);
      func_0x00f78a20(0x3d24188);
      func_0x00f78a20(0x3d5c7a0);
      func_0x00f78a20(0x3d25428);
      func_0x00f78a20(0x3d41238);
      func_0x00f78a20(0x3d41240);
      func_0x00f78a20(0x3d41248);
      func_0x00f78a20(0x3d25628);
      func_0x00f78a20(0x3d79110);
      func_0x00f78a20(0x3d7cd68);
      bRam0000000003eb4b3c = 1;
    }
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
    lVar14 = unaff_x22;
    uVar19 = uVar9;
    uVar23 = unaff_x24;
    if ((lVar11 == 0) || (*(long *)(lVar11 + 0xa8) == 0)) goto code_r0x014c75c8;
    param_5 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar11 + 0xa8),0);
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
    lVar14 = lVar7;
    if ((lVar11 == 0) ||
       ((*(long *)(lVar11 + 0xb0) == 0 ||
        (/*Atlas.UI.SlantFillBar$$get_FillBotomRightPosition*/ func_0x014fc974(*(long *)(lVar11 + 0xb0),0), param_5 == (long *)0x0))))
    goto code_r0x014c75c8;
    if (*param_5 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) goto code_r0x014c75cc;
    puVar8 = (undefined8 *)/*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(param_5,0);
    if (*(char *)((long)param_4 + 0x9d) != '\0') {
      return puVar8;
    }
    if (param_4[0x11] == 0) goto code_r0x014c75c8;
    puVar8 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionVisible*/ func_0x01511a80(param_4[0x11],0);
    if ((int)puVar8 != 0) {
      if (param_4[0x11] != 0) {
        puVar8 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionEnding*/ func_0x01511a70(param_4[0x11],0);
        if (((ulong)puVar8 & 1) != 0) {
          return puVar8;
        }
        if (param_4[0x10] != 0) {
          puVar8 = (undefined8 *)Atlas_FrontEnd_FrontEndScene__get_IsSceneChanging(param_4[0x10],0);
          if (((ulong)puVar8 & 1) != 0) {
            return puVar8;
          }
          lVar7 = param_4[0x11];
          if (lVar7 != 0) {
            *(undefined8 *)(puVar4 + -0x80) = *(undefined8 *)(puVar4 + -0x80);
            *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x78);
            *(undefined8 *)(puVar4 + -0x70) = *(undefined8 *)(puVar4 + -0x70);
            *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)(puVar4 + -0x68);
            *(undefined8 *)(puVar4 + -0x60) = *(undefined8 *)(puVar4 + -0x60);
            *(undefined8 *)(puVar4 + -0x58) = *(undefined8 *)(puVar4 + -0x58);
            *(undefined8 *)(puVar4 + -0x50) = *(undefined8 *)(puVar4 + -0x50);
            *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)(puVar4 + -0x48);
            if ((bRam0000000003eb4d7b & 1) == 0) {
              func_0x00f78a20(0x3d417a8);
              bRam0000000003eb4d7b = 1;
            }
            if ((*(char *)(lVar7 + 0x10) == '\0') || (*(int *)(lVar7 + 0x30) != 2)) {
              puVar8 = (undefined8 *)0x0;
            }
            else {
              *(undefined4 *)(lVar7 + 0x30) = 3;
              if (*(long *)(lVar7 + 0x40) != 0) {
                /*UnityEngine.Events.UnityEvent<int, Sprite>$$Invoke*/ func_0x01b85798(*(long *)(lVar7 + 0x40),1,0,uRam0000000003d417a8);
              }
              /*Core.Input.InputManager$$ResumeAllInput*/ func_0x0164ae40(0);
              puVar8 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
            return puVar8;
          }
        }
      }
      goto code_r0x014c75c8;
    }
    if (*(char *)((long)param_4 + 0x9c) != '\0') {
      *(undefined1 *)((long)param_4 + 0x9c) = 0;
      if (*(char *)(param_4 + 0x26) != '\0') {
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41240);
        if (lVar7 == 0) goto code_r0x014c75c8;
        *(undefined1 *)(lVar7 + 0x68) = 1;
      }
      param_5 = (long *)param_4[0x10];
      plVar16 = (long *)param_4[0x1b];
      unaff_x22 = 0x3d41248;
      lVar14 = 0x3d41248;
      uVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41248);
      puVar8 = (undefined8 *)/*Atlas.UI.Screens.RewardScreenExtensions$$RunRewardSequenceIfRewardUnseen<SingleplayerChapterBehaviour, SingleplayerChapterScreen.TransitionData>*/ func_0x018de5e0(param_5,plVar16,param_4,uVar20,uRam0000000003d5c7a0);
      if ((int)puVar8 == 0) {
code_r0x014c75a4:
        puVar22 = *(undefined1 **)(puVar4 + -0x50);
        puVar24 = *(undefined **)(puVar4 + -0x48);
        param_5 = *(long **)(puVar4 + -0x60);
        puVar8 = *(undefined8 **)(puVar4 + -0x58);
        unaff_x22 = *(long *)(puVar4 + -0x70);
        plVar16 = *(long **)(puVar4 + -0x68);
        unaff_x24 = *(undefined8 *)(puVar4 + -0x80);
        uVar9 = *(undefined8 *)(puVar4 + -0x78);
        puVar10 = param_4;
        goto code_r0x014c75dc;
      }
      *(undefined1 *)((long)param_4 + 0x9d) = 1;
      lVar7 = param_4[0x15];
      if (lVar7 == 0) goto code_r0x014c75c8;
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)((long)param_4 + 0xbc)) goto code_r0x014c75d0;
      if (*(int *)(lVar7 + (long)(int)*(uint *)((long)param_4 + 0xbc) * 4 + 0x20) <
          *(int *)((long)param_4 + 0xc4)) {
        return puVar8;
      }
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41248);
      if (lVar7 == 0) goto code_r0x014c75c8;
      param_5 = *(long **)(lVar7 + 0x50);
      puVar8 = (undefined8 *)Atlas_UI_Screens_PostArcadeScreen__CreateScreenData(param_4);
      if (param_5 == (long *)0x0) goto code_r0x014c75c8;
      param_5[0xf] = (long)puVar8;
      if (*(char *)((long)param_4 + 0xcc) == '\0') {
        return puVar8;
      }
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41248);
      if ((lVar7 == 0) || (*(ulong *)(lVar7 + 0x50) == 0)) goto code_r0x014c75c8;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = *(ulong *)(lVar7 + 0x50);
      puVar22 = *(undefined1 **)(puVar4 + -0x50);
      puVar24 = *(undefined **)(puVar4 + -0x48);
      lVar7 = *(long *)(puVar4 + -0x60);
      lVar14 = *(long *)(puVar4 + -0x58);
      puVar4 = puVar4 + -0x40;
      break;
    }
    if (0.0 < *(float *)(param_4 + 0x12)) {
      *(float *)(param_4 + 0x12) = *(float *)(param_4 + 0x12) - (float)extraout_d0;
      return puVar8;
    }
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41248);
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x98) == 0)) goto code_r0x014c75c8;
    puVar8 = (undefined8 *)/*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar7 + 0x98),uRam0000000003d3e178);
    if (((ulong)puVar8 & 1) != 0) {
      return puVar8;
    }
    if (*(int *)((long)param_4 + 0x4c) != 2) {
      return puVar8;
    }
    if (*(char *)((long)param_4 + 0x94) == '\0') {
      if (*(char *)((long)param_4 + 0x119) != '\0') {
        return puVar8;
      }
      if (*(char *)(param_4 + 0x1c) != '\0') {
        uVar9 = param_4[0x1d];
        uVar23 = param_4[0x20];
        uVar19 = param_4[0x1f];
        *(undefined8 *)(puVar4 + -200) = param_4[0x1e];
        *(undefined8 *)(puVar4 + -0xd0) = uVar9;
        *(undefined8 *)(puVar4 + -0xb8) = uVar23;
        *(undefined8 *)(puVar4 + -0xc0) = uVar19;
        *(undefined8 *)(puVar4 + -0xb0) = param_4[0x21];
        puVar8 = (undefined8 *)Atlas_UI_Screens_PostArcadeScreen__StartAward(param_4,puVar4 + -0xd0)
        ;
        return puVar8;
      }
      if (*(char *)(param_4 + 0x23) != '\0') {
        return puVar8;
      }
      goto code_r0x014c75a4;
    }
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
    if ((lVar7 == 0) || (param_4[0x14] == 0)) goto code_r0x014c75c8;
    param_5 = *(long **)(lVar7 + 0xb0);
    plVar16 = (long *)func_0x0001c0f4(param_4[0x14],(long)*(int *)((long)param_4 + 0xbc));
    if ((param_4[0x15] == 0) ||
       (iVar5 = func_0x0001c0f4(param_4[0x15],(long)*(int *)((long)param_4 + 0xbc)),
       param_5 == (long *)0x0)) goto code_r0x014c75c8;
    fVar25 = (float)/*Atlas.UI.SlantFillBar$$CalculateValue*/ func_0x014fcfb8((float)(int)plVar16,(float)iVar5,param_5,0);
    unaff_d9 = (ulong)(uint)fVar25;
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
    if (lVar7 == 0) goto code_r0x014c75c8;
    param_5 = *(long **)(lVar7 + 0xa0);
    *(int *)(puVar4 + -0xa4) = (int)fVar25;
    plVar16 = (long *)func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,puVar4 + -0xa4);
    *(undefined4 *)(puVar4 + -0xa8) = *(undefined4 *)((long)param_4 + 0xc4);
    uVar9 = 0x3d22910;
    uVar18 = 0x3d22910;
    uVar19 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,puVar4 + -0xa8);
    unaff_x24 = 0x3d7cd68;
    uVar21 = 0x3d7cd68;
    uVar20 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0} / {1}')*/ uRam0000000003d7cd68,plVar16,uVar19,0);
    uVar19 = uVar9;
    uVar23 = unaff_x24;
    if (param_5 == (long *)0x0) goto code_r0x014c75c8;
    /*Atlas.UI.UIXPBehaviour$$Set*/ func_0x0151db10(param_5,uVar20,0);
    puVar8 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
    if ((puVar8 == (undefined8 *)0x0) || (uVar19 = uVar18, uVar23 = uVar21, puVar8[0x16] == 0))
    goto code_r0x014c75c8;
    if (*(char *)(puVar8[0x16] + 0x90) != '\0') goto code_r0x014c7554;
    if (*(char *)(param_4 + 0x25) != '\0') goto code_r0x014c73f0;
    puVar24 = &UNK_014c733c;
    puVar4 = puVar4 + -0xd0;
    puVar8 = param_4;
  } while( true );
code_r0x0151ddac:
  lVar17 = auVar31._0_8_;
  *(long *)(puVar4 + -0x20) = lVar7;
  *(long *)(puVar4 + -0x18) = lVar14;
  *(undefined1 **)(puVar4 + -0x10) = puVar22;
  *(undefined **)(puVar4 + -8) = puVar24;
  lVar7 = *(long *)(lVar17 + 0x68);
  lVar11 = lVar14;
  if (lVar7 == 0) goto code_r0x0151de64;
  if (*(int *)(lVar7 + 0x18) == 0) {
code_r0x0151de58:
    uVar9 = func_0x00f78b24(auVar31._0_8_,auVar31._8_8_);
    func_0x00f78ac0(uVar9,0);
  }
  else {
    *(undefined4 *)(lVar7 + 0x20) = 0;
    auVar31 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(1,*(undefined8 *)(lVar17 + 0x10),*(undefined8 *)(lVar17 + 0x20),0);
    lVar11 = lVar17;
    if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto code_r0x0151de58;
    *(int *)(lVar7 + 0x24) = auVar31._0_4_;
    lVar7 = *(long *)(lVar17 + 0x68);
    auVar31 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(2,*(undefined8 *)(lVar17 + 0x10),*(undefined8 *)(lVar17 + 0x20),0);
    if (lVar7 != 0) {
      if (2 < *(uint *)(lVar7 + 0x18)) {
        *(int *)(lVar7 + 0x28) = auVar31._0_4_;
        lVar7 = *(long *)(lVar17 + 0x68);
        auVar31 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(3,*(undefined8 *)(lVar17 + 0x10),*(undefined8 *)(lVar17 + 0x20),0)
        ;
        if (lVar7 == 0) goto code_r0x0151de64;
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
          *(int *)(lVar7 + 0x2c) = auVar31._0_4_;
          return auVar31._0_8_;
        }
      }
      goto code_r0x0151de58;
    }
  }
code_r0x0151de64:
  auVar31 = func_0x00f78af4();
  lVar14 = auVar31._0_8_;
  *(long *)(puVar4 + -0x40) = lVar7;
  *(long *)(puVar4 + -0x38) = lVar11;
  *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x28) = &Atlas_Stats_UnlockManager__CacheCurrentArcadeRank;
  puVar22 = puVar4 + -0x30;
  puVar24 = &UNK_0151de7c;
  puVar4 = puVar4 + -0x40;
  goto code_r0x0151ddac;
code_r0x014c73f0:
  if (param_4[0x15] != 0) {
    puVar8 = (undefined8 *)func_0x0001c0f4(param_4[0x15],(long)*(int *)((long)param_4 + 0xbc));
    if ((fVar25 < (float)(int)puVar8) || (*(char *)((long)param_4 + 0x119) != '\0')) {
code_r0x014c7554:
      *(float *)(param_4 + 0x13) = *(float *)(param_4 + 0x13) + (float)extraout_d0;
      return puVar8;
    }
    *(undefined1 *)((long)param_4 + 0x119) = 1;
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0xb8) != 0)) {
      /*Atlas.UI.UIRewardBehaviour$$Set*/ func_0x0151d2a8(*(long *)(lVar7 + 0xb8),1,0);
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
      if ((lVar7 != 0) && (*(long *)(lVar7 + 200) != 0)) {
        param_5 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(lVar7 + 200),0);
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)) {
          uVar27 = *(undefined4 *)(*(long *)(lVar7 + 0x68) + 0x4c);
          lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
          if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)) {
            uVar30 = *(undefined4 *)(*(long *)(lVar7 + 0x68) + 0x44);
            lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
            if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)) {
              uVar29 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_RankJumpDuration*/ func_0x01562c60(*(long *)(lVar7 + 0x68),0);
              /*Atlas.UI.AtlasTweenAnimations$$JumpZoom*/ func_0x0146f84c(uVar27,0x3f800000,uVar30,uVar29,0,0,param_5,0,0,0);
              /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/ProgressBarComplete')*/ uRam0000000003d79110,0);
              lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41238);
              if (lVar7 != 0) {
                lVar7 = *(long *)(lVar7 + 0xb8);
                plVar16 = (long *)func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(plVar16,param_4,uRam0000000003d5bad8,0);
                param_5 = (long *)0x0;
                if (lVar7 != 0) {
                  puVar8 = (undefined8 *)/*Atlas.UI.UIRewardBehaviour$$Wiggle*/ func_0x0151d394(0,lVar7,plVar16,0);
                  goto code_r0x014c7554;
                }
              }
            }
          }
        }
      }
    }
  }
code_r0x014c75c8:
  func_0x00f78af4();
  unaff_x22 = lVar14;
code_r0x014c75cc:
  func_0x00f78e5c();
  uVar9 = uVar19;
  unaff_x24 = uVar23;
code_r0x014c75d0:
  uVar19 = func_0x00f78b24();
  puVar24 = &Atlas_UI_Screens_PostArcadeScreen__PlacementAwardSequenceEnded;
  puVar10 = (undefined8 *)func_0x00f78ac0(uVar19,0);
  puVar3 = puVar4 + -0xd0;
  puVar8 = param_4;
code_r0x014c75dc:
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x38) = uVar9;
  *(long *)(puVar3 + -0x30) = unaff_x22;
  *(long **)(puVar3 + -0x28) = plVar16;
  *(long **)(puVar3 + -0x20) = param_5;
  *(undefined8 **)(puVar3 + -0x18) = puVar8;
  *(undefined1 **)(puVar3 + -0x10) = puVar22;
  *(undefined **)(puVar3 + -8) = puVar24;
  lVar7 = 0x3eb4000;
  puVar8 = puVar10;
  if ((bRam0000000003eb4b3e & 1) == 0) {
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d23df0);
    puVar8 = (undefined8 *)func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b3e = 1;
  }
  *(undefined8 *)(puVar3 + -0x58) = 0;
  *(undefined8 *)(puVar3 + -0x50) = 0;
  *(undefined8 *)(puVar3 + -0x48) = 0;
  if (*(char *)(puVar10 + 0x23) != '\0') {
    return puVar8;
  }
  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar10,uRam0000000003d41248);
  if (lVar14 == 0) goto code_r0x014c77e0;
  if (*(long *)(lVar14 + 0x20) == 0) goto code_r0x014c77e0;
  lVar11 = *(long *)(*(long *)(lVar14 + 0x20) + 0x10);
  lVar14 = 0x3d23df0;
  lVar17 = 0x3d23df0;
  if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = 0;
  unaff_x22 = lVar14;
  if (lVar11 == 0) goto code_r0x014c77e0;
  lVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar11,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18),
                          uRam0000000003d57280);
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar10,uRam0000000003d41248);
  if (lVar11 == 0) goto code_r0x014c77e0;
  unaff_x22 = lVar17;
  if (*(long *)(lVar11 + 0xb0) == 0) goto code_r0x014c77e0;
  iVar5 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                    (*(long *)(lVar11 + 0xb0),lVar7,0);
  if (iVar5 != 0) {
    if (lVar7 == 0) goto code_r0x014c77e0;
    if (*(long *)(lVar7 + 0x58) == 0) goto code_r0x014c77e0;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar3 + -0x58,*(long *)(lVar7 + 0x58),uRam0000000003d3dc70);
    lVar14 = 0x3d337d0;
    uVar9 = 0x3d3e188;
    while (uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar3 + -0x58,uRam0000000003d337d0), (uVar12 & 1) != 0) {
      lVar7 = *(long *)(puVar3 + -0x48);
      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar10,uRam0000000003d41248);
      if (lVar11 == 0) {
        func_0x00f78af4();
code_r0x014c77dc:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x14c77e0);
        (*pcVar2)();
      }
      if (*(long *)(lVar11 + 0x98) == 0) {
        func_0x00f78af4();
        goto code_r0x014c77dc;
      }
      /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar11 + 0x98),lVar7,uRam0000000003d3e188);
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar3 + -0x58,uRam0000000003d337c8);
  }
  do {
    unaff_x22 = lVar14;
    if ((puVar10[0x10] != 0) &&
       (lVar11 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(puVar10[0x10],0,0), lVar11 != 0)) {
      Atlas_Gameplay_Kart_KartFEAnimator__TriggerFEGainXP(lVar11,0);
      puVar24 = &UNK_014c77b8;
      puVar8 = puVar10;
      goto code_r0x014c7830;
    }
code_r0x014c77e0:
    lVar14 = unaff_x22;
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014c782c;
    plVar16 = (long *)___cxa_begin_catch();
    lVar7 = *plVar16;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar3 + -0x58,uRam0000000003d337c8);
  } while (lVar7 == 0);
  func_0x00f78ac0(lVar7,0);
code_r0x014c782c:
  puVar24 = &Atlas_UI_Screens_PostArcadeScreen__AllowExit;
  puVar8 = (undefined8 *)__Unwind_Resume();
code_r0x014c7830:
  *(long *)(puVar3 + -0x90) = lVar14;
  *(undefined8 *)(puVar3 + -0x88) = 0x3d41248;
  *(long *)(puVar3 + -0x80) = lVar7;
  *(undefined8 **)(puVar3 + -0x78) = puVar10;
  *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x68) = puVar24;
  uVar19 = 0x3eb4000;
  if ((bRam0000000003eb4b3f & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b3f = 1;
  }
  *(undefined4 *)((long)puVar8 + 300) = 2;
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0xc0) != 0)) {
    uVar19 = 0x3d41000;
    /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(*(long *)(lVar7 + 0xc0),1,0);
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar8,uRam0000000003d41248);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar7 + 0xb8),6,1,1,0);
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0x110) != 0)) &&
         (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar7 + 0x110),0), lVar7 != 0)) {
        puVar10 = (undefined8 *)/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,0,0);
        *(undefined1 *)(puVar8 + 0x23) = 1;
        return puVar10;
      }
    }
  }
  uVar23 = func_0x00f78af4();
  *(long *)(puVar3 + -0xc0) = lVar14;
  *(undefined8 *)(puVar3 + -0xb8) = uVar19;
  *(undefined8 *)(puVar3 + -0xb0) = 0x3d41238;
  *(undefined8 **)(puVar3 + -0xa8) = puVar8;
  *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x70;
  *(undefined **)(puVar3 + -0x98) = &Atlas_UI_Screens_PostArcadeScreen__PlayAgainPressed;
  uVar19 = 0x3eb4000;
  if ((bRam0000000003eb4b40 & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41240);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b40 = 1;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar23,uRam0000000003d41238);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0xc0) != 0)) {
    uVar19 = 0x3d41000;
    /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(*(long *)(lVar7 + 0xc0),0);
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar23,uRam0000000003d41248);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0xb8) != 0)) {
      uVar19 = 0x3d41000;
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar7 + 0xb8),6,0,0);
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar23,uRam0000000003d41240);
      if (lVar7 != 0) {
        puVar8 = *(undefined8 **)(lVar7 + 0x50);
        if (puVar8 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        uVar19 = 0;
        *(undefined8 *)(puVar3 + -0xe0) = unaff_x26;
        *(undefined8 *)(puVar3 + -0xd8) = unaff_x25;
        *(undefined8 *)(puVar3 + -0xd0) = unaff_x24;
        *(undefined8 *)(puVar3 + -200) = uVar9;
        *(undefined8 *)(puVar3 + -0xc0) = *(undefined8 *)(puVar3 + -0xc0);
        *(undefined8 *)(puVar3 + -0xb8) = *(undefined8 *)(puVar3 + -0xb8);
        *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0xb0);
        *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0xa8);
        *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0xa0);
        *(undefined8 *)(puVar3 + -0x98) = *(undefined8 *)(puVar3 + -0x98);
        *(undefined8 **)(puVar3 + -0xe8) = puVar8;
        lVar7 = puVar8[0xd];
        if (lVar7 == 0) {
          puVar22 = puVar3 + -0xe8;
          lVar14 = 1;
        }
        else {
          lVar14 = *(long *)(lVar7 + 0x18);
          if (lVar14 == 0) {
            return puVar8;
          }
          puVar22 = (undefined1 *)(lVar7 + 0x20);
        }
        lVar7 = 0;
        do {
          lVar11 = *(long *)(puVar22 + lVar7 * 8);
          pcVar2 = *(code **)(lVar11 + 0x10);
          plVar16 = *(long **)(lVar11 + 0x20);
          lVar11 = *(long *)(lVar11 + 0x28);
          if (*(short *)(lVar11 + 0x48) == -1) {
            func_0x00f78ad8(lVar11,uVar19);
          }
          iVar5 = func_0x00f78a4c(lVar11);
          if (iVar5 == 0) {
            if ((((plVar16 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
                ((*(byte *)(*plVar16 + 0x115) & 1) != 0)) || (puVar8[3] == 0))
            goto code_r0x01562a40;
            iVar5 = func_0x00f78a44(lVar11);
            iVar6 = func_0x00f78ec0(lVar11);
            if (iVar5 == 0) {
              uVar1 = *(ushort *)(lVar11 + 0x48);
              if (iVar6 == 0) {
                lVar11 = *plVar16 + (ulong)uVar1 * 0x10;
                auVar31 = (**(code **)(lVar11 + 0x138))(plVar16,*(undefined8 *)(lVar11 + 0x140));
                goto code_r0x01562a4c;
              }
              lVar11 = func_0x00f78a48(lVar11);
              lVar17 = *plVar16;
              uVar12 = (ulong)*(ushort *)(lVar17 + 0x12a);
              if (uVar12 != 0) {
                piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar11) {
                    puVar10 = (undefined8 *)
                              (lVar17 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x01562b10;
                  }
                  piVar15 = piVar15 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar10 = (undefined8 *)func_0x00fac1f0(plVar16,lVar11,(ulong)uVar1);
code_r0x01562b10:
              pcVar2 = (code *)*puVar10;
              puVar10 = (undefined8 *)puVar10[1];
            }
            else {
              if (iVar6 == 0) {
                uVar9 = *(undefined8 *)(*plVar16 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar17 = *plVar16;
                uVar12 = (ulong)*(ushort *)(lVar17 + 0x12a);
                if (uVar12 != 0) {
                  piVar15 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == *(long *)(lVar11 + 0x18)) {
                      lVar17 = lVar17 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar11 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01562ae8;
                    }
                    piVar15 = piVar15 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                lVar17 = func_0x00fac1f0(plVar16);
code_r0x01562ae8:
                uVar9 = *(undefined8 *)(lVar17 + 8);
              }
              puVar10 = (undefined8 *)func_0x00f78acc(uVar9,lVar11);
              pcVar2 = (code *)*puVar10;
            }
            auVar31 = (*pcVar2)(plVar16,puVar10);
          }
          else if (*(char *)(lVar11 + 0x4a) == '\0') {
            auVar31 = (*pcVar2)(lVar11);
          }
          else {
code_r0x01562a40:
            auVar31 = (*pcVar2)(plVar16,lVar11);
          }
code_r0x01562a4c:
          uVar19 = auVar31._8_8_;
          lVar7 = lVar7 + 1;
          if (lVar7 == lVar14) {
            return auVar31._0_8_;
          }
        } while( true );
      }
    }
  }
  lVar7 = func_0x00f78af4();
  *(undefined8 *)(puVar3 + -0x100) = unaff_x24;
  *(undefined8 *)(puVar3 + -0xf8) = uVar9;
  *(long *)(puVar3 + -0xf0) = lVar14;
  *(undefined8 *)(puVar3 + -0xe8) = 0x3d41238;
  *(undefined8 *)(puVar3 + -0xe0) = uVar19;
  *(undefined8 *)(puVar3 + -0xd8) = uVar23;
  *(undefined1 **)(puVar3 + -0xd0) = puVar3 + -0xa0;
  *(undefined **)(puVar3 + -200) = &Atlas_UI_Screens_PostArcadeScreen___ctor;
  if ((bRam0000000003eb4b42 & 1) == 0) {
    func_0x00f78a20(0x3d2c898);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4b42 = 1;
  }
  uVar9 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar9,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar14 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar9,0);
  if (lVar14 != 0) {
    uVar9 = 0x3d1f100;
    uVar19 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar14 + 0x18));
    *(undefined8 *)(lVar7 + 0xa0) = uVar19;
    uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar14 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar19,0);
    if (lVar14 != 0) {
      uVar9 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar14 + 0x18));
      *(undefined8 *)(lVar7 + 0xa8) = uVar9;
      *(undefined8 *)(puVar3 + -0xd0) = *(undefined8 *)(puVar3 + -0xd0);
      *(undefined8 *)(puVar3 + -200) = *(undefined8 *)(puVar3 + -200);
      if (lVar7 == 0) {
        auVar31 = func_0x00f78af4();
        puVar10 = auVar31._8_8_;
        puVar8 = auVar31._0_8_;
        uVar19 = puVar10[1];
        uVar9 = *puVar10;
        puVar8[2] = puVar10[2];
        puVar8[1] = uVar19;
        *puVar8 = uVar9;
        return puVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar8 = (undefined8 *)
               (*(code *)**(undefined8 **)
                           (*(long *)(*(long *)(lRam0000000003d2c898 + 0x18) + 0xc0) + 0x38))();
      return puVar8;
    }
  }
  func_0x00f78af4();
  *(undefined8 *)(puVar3 + -0x150) = unaff_x26;
  *(undefined8 *)(puVar3 + -0x148) = unaff_x25;
  *(undefined8 *)(puVar3 + -0x140) = unaff_x24;
  *(undefined8 *)(puVar3 + -0x138) = 0x3d215e0;
  *(undefined8 *)(puVar3 + -0x130) = 0x3d25458;
  *(undefined8 *)(puVar3 + -0x128) = 0x3d1a510;
  *(undefined8 *)(puVar3 + -0x120) = uVar9;
  *(long *)(puVar3 + -0x118) = lVar7;
  *(undefined1 **)(puVar3 + -0x110) = puVar3 + -0xd0;
  *(undefined **)(puVar3 + -0x108) = &Atlas_UI_Screens_PostArcadeScreen___cctor;
  if ((bRam0000000003eb4b43 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d23df0);
    func_0x00f78a20(0x3d6cb40);
    func_0x00f78a20(0x3d6cbd0);
    func_0x00f78a20(0x3d706f8);
    func_0x00f78a20(0x3d729a8);
    func_0x00f78a20(0x3d6cb00);
    func_0x00f78a20(0x3d69870);
    bRam0000000003eb4b43 = 1;
  }
  uVar27 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('NothingToBronze')*/ uRam0000000003d706f8,0);
  **(undefined4 **)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) = uVar27;
  uVar27 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('BronzeToSilver')*/ uRam0000000003d69870,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 4) = uVar27;
  uVar27 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('SilverToGold')*/ uRam0000000003d729a8,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 8) = uVar27;
  if (((*(byte *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_9_CharacterProgress')*/ uRam0000000003d6cbd0,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x10) = uVar9;
  uVar9 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_10_CharacterProgress_2')*/ uRam0000000003d6cb00,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18) = uVar9;
  puVar8 = (undefined8 *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_17_DailyChallenges')*/ uRam0000000003d6cb40,0);
  *(undefined8 **)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x20) = puVar8;
  return puVar8;
}



// ============================================================
// RVA: 0x14c6d04 | Atlas.UI.Screens.PostArcadeScreen.HideAward
// ============================================================

/* WARNING: Possible PIC construction at 0x014c77b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151de78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151de7c) */
/* WARNING: Removing unreachable block (ram,0x014500ac) */
/* WARNING: Removing unreachable block (ram,0x01450100) */
/* WARNING: Removing unreachable block (ram,0x0145011c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 * Atlas_UI_Screens_PostArcadeScreen__HideAward(undefined8 *param_1)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int extraout_w1;
  long lVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *puVar21;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *******pppppppuVar22;
  undefined *puVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float extraout_s0;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined8 *******pppppppuStack_50;
  undefined *puStack_48;
  
  puVar8 = (undefined8 *)&stack0xffffffffffffffc0;
  uVar18 = 0x3d78fd8;
  if ((bRam0000000003eb4b3b & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d78fd8);
    bRam0000000003eb4b3b = 1;
  }
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/Dotween_SlideIn')*/ uRam0000000003d78fd8,0);
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  plVar5 = (long *)/*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
  param_1[0x24] = plVar5;
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
  if (lVar6 != 0) {
    uVar18 = *(undefined8 *)(lVar6 + 0xd0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x68) != 0)) {
      fVar24 = (float)/*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideOutTime*/ func_0x01562c40(*(long *)(lVar6 + 0x68),0);
      uVar7 = /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,fVar24 * 0.5,uVar18,0);
      plVar5 = (long *)/*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(plVar5,uVar7,0);
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
      if (lVar6 != 0) {
        uVar18 = *(undefined8 *)(lVar6 + 0xd8);
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
        if ((lVar6 != 0) && (*(long *)(lVar6 + 0xf0) != 0)) {
          uVar25 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar6 + 0xf0),0);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
          if ((lVar6 != 0) && (*(long *)(lVar6 + 0x68) != 0)) {
            uVar26 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_AwardSlideOutTime*/ func_0x01562c40(*(long *)(lVar6 + 0x68),0);
            uVar18 = /*DG.Tweening.ShortcutExtensions$$DOMoveX*/ func_0x016b28e8(uVar25,uVar26,uVar18,0,0);
            lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
            if ((lVar6 != 0) && (*(long *)(lVar6 + 0x68) != 0)) {
              uVar18 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar18,*(undefined4 *)(*(long *)(lVar6 + 0x68) + 0x40),
                                       uRam0000000003d5e7a8);
              puVar8 = (undefined8 *)/*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(plVar5,uVar18,0);
              *(undefined1 *)((long)param_1 + 0x94) = 0;
              return puVar8;
            }
          }
        }
      }
    }
  }
  puVar9 = (undefined8 *)func_0x00f78af4();
  puStack_48 = &Atlas_UI_Screens_PostArcadeScreen__OnUpdate;
  plVar17 = (long *)0x3eb4000;
  uVar7 = 0x3d41238;
  uVar19 = 0x3d41238;
  pppppppuStack_50 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4b3c & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d3e178);
    func_0x00f78a20(0x3d5bad8);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5c7a0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41240);
    func_0x00f78a20(0x3d41248);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d79110);
    func_0x00f78a20(0x3d7cd68);
    bRam0000000003eb4b3c = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
  uVar20 = uVar7;
  if ((lVar6 == 0) || (*(long *)(lVar6 + 0xa8) == 0)) {
code_r0x014c75c8:
    func_0x00f78af4();
    uVar19 = uVar18;
    uVar7 = uVar20;
code_r0x014c75cc:
    func_0x00f78e5c();
  }
  else {
    plVar17 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar6 + 0xa8),0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
    uVar20 = uVar19;
    if ((lVar6 == 0) ||
       ((*(long *)(lVar6 + 0xb0) == 0 ||
        (/*Atlas.UI.SlantFillBar$$get_FillBotomRightPosition*/ func_0x014fc974(*(long *)(lVar6 + 0xb0),0), plVar17 == (long *)0x0))))
    goto code_r0x014c75c8;
    uVar19 = uVar18;
    if (*plVar17 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) goto code_r0x014c75cc;
    puVar10 = (undefined8 *)/*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(plVar17,0);
    if (*(char *)((long)puVar9 + 0x9d) != '\0') {
      return puVar10;
    }
    if (puVar9[0x11] == 0) goto code_r0x014c75c8;
    puVar10 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionVisible*/ func_0x01511a80(puVar9[0x11],0);
    if ((int)puVar10 != 0) {
      if (puVar9[0x11] != 0) {
        puVar8 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionEnding*/ func_0x01511a70(puVar9[0x11],0);
        if (((ulong)puVar8 & 1) != 0) {
          return puVar8;
        }
        if (puVar9[0x10] != 0) {
          puVar8 = (undefined8 *)Atlas_FrontEnd_FrontEndScene__get_IsSceneChanging(puVar9[0x10],0);
          if (((ulong)puVar8 & 1) != 0) {
            return puVar8;
          }
          lVar6 = puVar9[0x11];
          if (lVar6 != 0) {
            if ((bRam0000000003eb4d7b & 1) == 0) {
              func_0x00f78a20(0x3d417a8);
              bRam0000000003eb4d7b = 1;
            }
            if ((*(char *)(lVar6 + 0x10) == '\0') || (*(int *)(lVar6 + 0x30) != 2)) {
              puVar8 = (undefined8 *)0x0;
            }
            else {
              *(undefined4 *)(lVar6 + 0x30) = 3;
              if (*(long *)(lVar6 + 0x40) != 0) {
                /*UnityEngine.Events.UnityEvent<int, Sprite>$$Invoke*/ func_0x01b85798(*(long *)(lVar6 + 0x40),1,0,uRam0000000003d417a8);
              }
              /*Core.Input.InputManager$$ResumeAllInput*/ func_0x0164ae40(0);
              puVar8 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
            return puVar8;
          }
        }
      }
      goto code_r0x014c75c8;
    }
    if (*(char *)((long)puVar9 + 0x9c) == '\0') {
      if (0.0 < *(float *)(puVar9 + 0x12)) {
        *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) - extraout_s0;
        return puVar10;
      }
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar9,uRam0000000003d41248);
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x98) != 0)) {
        puVar10 = (undefined8 *)/*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar6 + 0x98),uRam0000000003d3e178);
        if (((ulong)puVar10 & 1) != 0) {
          return puVar10;
        }
        if (*(int *)((long)puVar9 + 0x4c) != 2) {
          return puVar10;
        }
        if (*(char *)((long)puVar9 + 0x94) == '\0') {
          if (*(char *)((long)puVar9 + 0x119) != '\0') {
            return puVar10;
          }
          if (*(char *)(puVar9 + 0x1c) != '\0') {
            uStack_c8 = puVar9[0x1e];
            uStack_d0 = puVar9[0x1d];
            uStack_b8 = puVar9[0x20];
            uStack_c0 = puVar9[0x1f];
            uStack_b0 = puVar9[0x21];
            puVar8 = (undefined8 *)Atlas_UI_Screens_PostArcadeScreen__StartAward(puVar9,&uStack_d0);
            return puVar8;
          }
          if (*(char *)(puVar9 + 0x23) != '\0') {
            return puVar10;
          }
          goto code_r0x014c75a4;
        }
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
        if ((lVar6 != 0) && (puVar9[0x14] != 0)) {
          plVar17 = *(long **)(lVar6 + 0xb0);
          uVar18 = func_0x0001c0f4(puVar9[0x14],(long)*(int *)((long)puVar9 + 0xbc));
          if ((puVar9[0x15] != 0) &&
             (iVar3 = func_0x0001c0f4(puVar9[0x15],(long)*(int *)((long)puVar9 + 0xbc)),
             plVar17 != (long *)0x0)) {
            fVar24 = (float)/*Atlas.UI.SlantFillBar$$CalculateValue*/ func_0x014fcfb8((float)(int)uVar18,(float)iVar3,plVar17,0);
            lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
            if (lVar6 != 0) {
              iStack_a4 = (int)fVar24;
              plVar17 = *(long **)(lVar6 + 0xa0);
              uVar18 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,&iStack_a4);
              uStack_a8 = *(undefined4 *)((long)puVar9 + 0xc4);
              uVar19 = 0x3d22910;
              uVar7 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_a8);
              uVar11 = 0x3d7cd68;
              uVar7 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0} / {1}')*/ uRam0000000003d7cd68,uVar18,uVar7,0);
              unaff_x23 = 0x3d22910;
              unaff_x24 = 0x3d7cd68;
              if (plVar17 != (long *)0x0) {
                /*Atlas.UI.UIXPBehaviour$$Set*/ func_0x0151db10(plVar17,uVar7,0);
                puVar8 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                if ((puVar8 != (undefined8 *)0x0) &&
                   (unaff_x23 = uVar19, unaff_x24 = uVar11, puVar8[0x16] != 0)) {
                  if (*(char *)(puVar8[0x16] + 0x90) != '\0') goto code_r0x014c7554;
                  if (*(char *)(puVar9 + 0x25) == '\0') {
                    Atlas_UI_Screens_PostArcadeScreen__HideAward(puVar9);
                    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                    if ((lVar6 != 0) && (puVar9[0x15] != 0)) {
                      plVar17 = *(long **)(lVar6 + 0xa0);
                      iStack_a4 = func_0x0001c0f4(puVar9[0x15],(long)*(int *)((long)puVar9 + 0xbc));
                      uVar18 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_a4);
                      uStack_a8 = *(undefined4 *)((long)puVar9 + 0xc4);
                      uVar7 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_a8);
                      uVar7 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0} / {1}')*/ uRam0000000003d7cd68,uVar18,uVar7,0);
                      if (plVar17 != (long *)0x0) {
                        /*Atlas.UI.UIXPBehaviour$$Set*/ func_0x0151db10(plVar17,uVar7,0);
                        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                        if ((lVar6 != 0) && (*(long *)(lVar6 + 0x68) != 0)) {
                          uVar25 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_PauseBeforeFollowingAwards*/ func_0x01562bd0(*(long *)(lVar6 + 0x68),0);
                          puVar9[0x1e] = 0;
                          puVar9[0x1d] = 0;
                          *(undefined4 *)(puVar9 + 0x12) = uVar25;
                          puVar9[0x20] = 0;
                          puVar9[0x1f] = 0;
                          puVar9[0x21] = 0;
                          *(undefined1 *)(puVar9 + 0x1c) = 0;
                          goto code_r0x014c73f0;
                        }
                      }
                    }
                  }
                  else {
code_r0x014c73f0:
                    if (puVar9[0x15] != 0) {
                      puVar8 = (undefined8 *)
                               func_0x0001c0f4(puVar9[0x15],(long)*(int *)((long)puVar9 + 0xbc));
                      if ((fVar24 < (float)(int)puVar8) || (*(char *)((long)puVar9 + 0x119) != '\0')
                         ) {
code_r0x014c7554:
                        *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) + extraout_s0;
                        return puVar8;
                      }
                      *(undefined1 *)((long)puVar9 + 0x119) = 1;
                      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                      if ((lVar6 != 0) && (*(long *)(lVar6 + 0xb8) != 0)) {
                        /*Atlas.UI.UIRewardBehaviour$$Set*/ func_0x0151d2a8(*(long *)(lVar6 + 0xb8),1,0);
                        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                        if ((lVar6 != 0) && (*(long *)(lVar6 + 200) != 0)) {
                          plVar17 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(lVar6 + 200),0);
                          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                          if ((lVar6 != 0) && (*(long *)(lVar6 + 0x68) != 0)) {
                            uVar25 = *(undefined4 *)(*(long *)(lVar6 + 0x68) + 0x4c);
                            lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                            if ((lVar6 != 0) && (*(long *)(lVar6 + 0x68) != 0)) {
                              uVar26 = *(undefined4 *)(*(long *)(lVar6 + 0x68) + 0x44);
                              lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                              if ((lVar6 != 0) && (*(long *)(lVar6 + 0x68) != 0)) {
                                uVar27 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_RankJumpDuration*/ func_0x01562c60(*(long *)(lVar6 + 0x68),0);
                                /*Atlas.UI.AtlasTweenAnimations$$JumpZoom*/ func_0x0146f84c(uVar25,0x3f800000,uVar26,uVar27,0,0,plVar17,0,0,0);
                                /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/ProgressBarComplete')*/ uRam0000000003d79110,0);
                                lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
                                if (lVar6 != 0) {
                                  lVar6 = *(long *)(lVar6 + 0xb8);
                                  uVar18 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                                  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar18,puVar9,uRam0000000003d5bad8,0);
                                  plVar17 = (long *)0x0;
                                  if (lVar6 != 0) {
                                    puVar8 = (undefined8 *)/*Atlas.UI.UIRewardBehaviour$$Wiggle*/ func_0x0151d394(0,lVar6,uVar18,0);
                                    goto code_r0x014c7554;
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
      goto code_r0x014c75c8;
    }
    *(undefined1 *)((long)puVar9 + 0x9c) = 0;
    if (*(char *)(puVar9 + 0x26) != '\0') {
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(puVar9,uRam0000000003d41240);
      if (lVar6 == 0) goto code_r0x014c75c8;
      *(undefined1 *)(lVar6 + 0x68) = 1;
    }
    plVar17 = (long *)puVar9[0x10];
    uVar19 = puVar9[0x1b];
    uVar7 = 0x3d41248;
    uVar20 = 0x3d41248;
    uVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar9,uRam0000000003d41248);
    puVar10 = (undefined8 *)/*Atlas.UI.Screens.RewardScreenExtensions$$RunRewardSequenceIfRewardUnseen<SingleplayerChapterBehaviour, SingleplayerChapterScreen.TransitionData>*/ func_0x018de5e0(plVar17,uVar19,puVar9,uVar11,uRam0000000003d5c7a0);
    if ((int)puVar10 == 0) {
code_r0x014c75a4:
      uVar7 = 0x3d41238;
      puVar10 = puVar9;
      pppppppuVar22 = pppppppuStack_50;
      puVar23 = puStack_48;
      goto code_r0x014c75dc;
    }
    *(undefined1 *)((long)puVar9 + 0x9d) = 1;
    lVar6 = puVar9[0x15];
    uVar18 = uVar19;
    if (lVar6 == 0) goto code_r0x014c75c8;
    if (*(uint *)((long)puVar9 + 0xbc) < *(uint *)(lVar6 + 0x18)) {
      if (*(int *)(lVar6 + (long)(int)*(uint *)((long)puVar9 + 0xbc) * 4 + 0x20) <
          *(int *)((long)puVar9 + 0xc4)) {
        return puVar10;
      }
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar9,uRam0000000003d41248);
      if (lVar6 != 0) {
        plVar17 = *(long **)(lVar6 + 0x50);
        puVar8 = (undefined8 *)Atlas_UI_Screens_PostArcadeScreen__CreateScreenData(puVar9);
        if (plVar17 != (long *)0x0) {
          plVar17[0xf] = (long)puVar8;
          if (*(char *)((long)puVar9 + 0xcc) == '\0') {
            return puVar8;
          }
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar9,uRam0000000003d41248);
          if ((lVar6 != 0) && (*(ulong *)(lVar6 + 0x50) != 0)) {
            auVar28._8_8_ = 0;
            auVar28._0_8_ = *(ulong *)(lVar6 + 0x50);
            pppppppuVar22 = pppppppuStack_50;
            puVar23 = puStack_48;
            puVar21 = (undefined1 *)register0x00000008;
            do {
              puVar9 = auVar28._0_8_;
              *(long **)(puVar21 + -0x60) = plVar5;
              *(undefined8 **)(puVar21 + -0x58) = param_1;
              *(undefined8 ********)(puVar21 + -0x50) = pppppppuVar22;
              *(undefined **)(puVar21 + -0x48) = puVar23;
              plVar5 = (long *)puVar9[0xd];
              puVar8 = param_1;
              if (plVar5 == (long *)0x0) goto code_r0x0151de64;
              if ((int)plVar5[3] == 0) {
code_r0x0151de58:
                uVar18 = func_0x00f78b24(auVar28._0_8_,auVar28._8_8_);
                func_0x00f78ac0(uVar18,0);
              }
              else {
                *(undefined4 *)(plVar5 + 4) = 0;
                auVar28 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(1,puVar9[2],puVar9[4],0);
                puVar8 = puVar9;
                if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto code_r0x0151de58;
                *(int *)((long)plVar5 + 0x24) = auVar28._0_4_;
                plVar5 = (long *)puVar9[0xd];
                auVar28 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(2,puVar9[2],puVar9[4],0);
                if (plVar5 != (long *)0x0) {
                  if (2 < *(uint *)(plVar5 + 3)) {
                    *(int *)(plVar5 + 5) = auVar28._0_4_;
                    plVar5 = (long *)puVar9[0xd];
                    auVar28 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(3,puVar9[2],puVar9[4],0);
                    if (plVar5 == (long *)0x0) goto code_r0x0151de64;
                    if ((*(uint *)(plVar5 + 3) & 0xfffffffc) != 0) {
                      *(int *)((long)plVar5 + 0x2c) = auVar28._0_4_;
                      return auVar28._0_8_;
                    }
                  }
                  goto code_r0x0151de58;
                }
              }
code_r0x0151de64:
              auVar28 = func_0x00f78af4();
              param_1 = auVar28._0_8_;
              *(long **)(puVar21 + -0x80) = plVar5;
              *(undefined8 **)(puVar21 + -0x78) = puVar8;
              *(undefined1 **)(puVar21 + -0x70) = puVar21 + -0x50;
              *(undefined **)(puVar21 + -0x68) = &Atlas_Stats_UnlockManager__CacheCurrentArcadeRank;
              pppppppuVar22 = (undefined8 *******)(puVar21 + -0x70);
              puVar23 = &UNK_0151de7c;
              puVar21 = puVar21 + -0x40;
            } while( true );
          }
        }
      }
      goto code_r0x014c75c8;
    }
  }
  uVar18 = func_0x00f78b24();
  puVar10 = (undefined8 *)func_0x00f78ac0(uVar18,0);
  puVar8 = &uStack_d0;
  param_1 = puVar9;
  plVar5 = plVar17;
  uVar18 = uVar19;
  pppppppuVar22 = &pppppppuStack_50;
  puVar23 = &Atlas_UI_Screens_PostArcadeScreen__PlacementAwardSequenceEnded;
code_r0x014c75dc:
  *(undefined8 *)((long)puVar8 + -0x40) = unaff_x24;
  *(undefined8 *)((long)puVar8 + -0x38) = unaff_x23;
  *(undefined8 *)((long)puVar8 + -0x30) = uVar7;
  *(undefined8 *)((long)puVar8 + -0x28) = uVar18;
  *(long **)((long)puVar8 + -0x20) = plVar5;
  *(undefined8 **)((long)puVar8 + -0x18) = param_1;
  *(undefined8 ********)((long)puVar8 + -0x10) = pppppppuVar22;
  *(undefined **)((long)puVar8 + -8) = puVar23;
  lVar6 = 0x3eb4000;
  puVar9 = puVar10;
  if ((bRam0000000003eb4b3e & 1) == 0) {
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d23df0);
    puVar9 = (undefined8 *)func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b3e = 1;
  }
  *(undefined8 *)((long)puVar8 + -0x58) = 0;
  *(undefined8 *)((long)puVar8 + -0x50) = 0;
  *(undefined8 *)((long)puVar8 + -0x48) = 0;
  if (*(char *)(puVar10 + 0x23) != '\0') {
    return puVar9;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar10,uRam0000000003d41248);
  if (lVar12 == 0) goto code_r0x014c77e0;
  if (*(long *)(lVar12 + 0x20) == 0) goto code_r0x014c77e0;
  lVar12 = *(long *)(*(long *)(lVar12 + 0x20) + 0x10);
  uVar18 = 0x3d23df0;
  uVar19 = 0x3d23df0;
  if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar6 = 0;
  uVar7 = uVar18;
  if (lVar12 == 0) goto code_r0x014c77e0;
  lVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar12,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18),
                          uRam0000000003d57280);
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar10,uRam0000000003d41248);
  if (lVar12 == 0) goto code_r0x014c77e0;
  uVar7 = uVar19;
  if (*(long *)(lVar12 + 0xb0) == 0) goto code_r0x014c77e0;
  iVar3 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                    (*(long *)(lVar12 + 0xb0),lVar6,0);
  if (iVar3 != 0) {
    if (lVar6 == 0) goto code_r0x014c77e0;
    if (*(long *)(lVar6 + 0x58) == 0) goto code_r0x014c77e0;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)puVar8 + -0x58),*(long *)(lVar6 + 0x58),
                    uRam0000000003d3dc70);
    uVar18 = 0x3d337d0;
    unaff_x23 = 0x3d3e188;
    while (uVar13 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)puVar8 + -0x58),uRam0000000003d337d0),
          (uVar13 & 1) != 0) {
      lVar6 = *(long *)((long)puVar8 + -0x48);
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar10,uRam0000000003d41248);
      if (lVar12 == 0) {
        func_0x00f78af4();
code_r0x014c77dc:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x14c77e0);
        (*pcVar2)();
      }
      if (*(long *)(lVar12 + 0x98) == 0) {
        func_0x00f78af4();
        goto code_r0x014c77dc;
      }
      /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar12 + 0x98),lVar6,uRam0000000003d3e188);
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)puVar8 + -0x58),uRam0000000003d337c8);
  }
  do {
    uVar7 = uVar18;
    if ((puVar10[0x10] != 0) &&
       (lVar12 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(puVar10[0x10],0,0), lVar12 != 0)) {
      Atlas_Gameplay_Kart_KartFEAnimator__TriggerFEGainXP(lVar12,0);
      puVar23 = &UNK_014c77b8;
      puVar9 = puVar10;
      goto code_r0x014c7830;
    }
code_r0x014c77e0:
    uVar18 = uVar7;
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014c782c;
    plVar5 = (long *)___cxa_begin_catch();
    lVar6 = *plVar5;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)puVar8 + -0x58),uRam0000000003d337c8);
  } while (lVar6 == 0);
  func_0x00f78ac0(lVar6,0);
code_r0x014c782c:
  puVar23 = &Atlas_UI_Screens_PostArcadeScreen__AllowExit;
  puVar9 = (undefined8 *)__Unwind_Resume();
code_r0x014c7830:
  *(undefined8 *)((long)puVar8 + -0x90) = uVar18;
  *(undefined8 *)((long)puVar8 + -0x88) = 0x3d41248;
  *(long *)((long)puVar8 + -0x80) = lVar6;
  *(undefined8 **)((long)puVar8 + -0x78) = puVar10;
  *(undefined1 **)((long)puVar8 + -0x70) = (undefined1 *)((long)puVar8 + -0x10);
  *(undefined **)((long)puVar8 + -0x68) = puVar23;
  uVar7 = 0x3eb4000;
  if ((bRam0000000003eb4b3f & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b3f = 1;
  }
  *(undefined4 *)((long)puVar9 + 300) = 2;
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0xc0) != 0)) {
    uVar7 = 0x3d41000;
    /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(*(long *)(lVar6 + 0xc0),1,0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar9,uRam0000000003d41248);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar6 + 0xb8),6,1,1,0);
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41238);
      if (((lVar6 != 0) && (*(long *)(lVar6 + 0x110) != 0)) &&
         (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x110),0), lVar6 != 0)) {
        puVar8 = (undefined8 *)/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,0,0);
        *(undefined1 *)(puVar9 + 0x23) = 1;
        return puVar8;
      }
    }
  }
  uVar19 = func_0x00f78af4();
  *(undefined8 *)((long)puVar8 + -0xc0) = uVar18;
  *(undefined8 *)((long)puVar8 + -0xb8) = uVar7;
  *(undefined8 *)((long)puVar8 + -0xb0) = 0x3d41238;
  *(undefined8 **)((long)puVar8 + -0xa8) = puVar9;
  *(undefined1 **)((long)puVar8 + -0xa0) = (undefined1 *)((long)puVar8 + -0x70);
  *(undefined **)((long)puVar8 + -0x98) = &Atlas_UI_Screens_PostArcadeScreen__PlayAgainPressed;
  uVar7 = 0x3eb4000;
  if ((bRam0000000003eb4b40 & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41240);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b40 = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar19,uRam0000000003d41238);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0xc0) != 0)) {
    uVar7 = 0x3d41000;
    /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(*(long *)(lVar6 + 0xc0),0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar19,uRam0000000003d41248);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0xb8) != 0)) {
      uVar7 = 0x3d41000;
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar6 + 0xb8),6,0,0);
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar19,uRam0000000003d41240);
      if (lVar6 != 0) {
        puVar9 = *(undefined8 **)(lVar6 + 0x50);
        if (puVar9 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        uVar18 = 0;
        *(undefined8 *)((long)puVar8 + -0xe0) = unaff_x26;
        *(undefined8 *)((long)puVar8 + -0xd8) = unaff_x25;
        *(undefined8 *)((long)puVar8 + -0xd0) = unaff_x24;
        *(undefined8 *)((long)puVar8 + -200) = unaff_x23;
        *(undefined8 *)((long)puVar8 + -0xc0) = *(undefined8 *)((long)puVar8 + -0xc0);
        *(undefined8 *)((long)puVar8 + -0xb8) = *(undefined8 *)((long)puVar8 + -0xb8);
        *(undefined8 *)((long)puVar8 + -0xb0) = *(undefined8 *)((long)puVar8 + -0xb0);
        *(undefined8 *)((long)puVar8 + -0xa8) = *(undefined8 *)((long)puVar8 + -0xa8);
        *(undefined8 *)((long)puVar8 + -0xa0) = *(undefined8 *)((long)puVar8 + -0xa0);
        *(undefined8 *)((long)puVar8 + -0x98) = *(undefined8 *)((long)puVar8 + -0x98);
        *(undefined8 **)((long)puVar8 + -0xe8) = puVar9;
        lVar6 = puVar9[0xd];
        if (lVar6 == 0) {
          puVar21 = (undefined1 *)((long)puVar8 + -0xe8);
          lVar12 = 1;
        }
        else {
          lVar12 = *(long *)(lVar6 + 0x18);
          if (lVar12 == 0) {
            return puVar9;
          }
          puVar21 = (undefined1 *)(lVar6 + 0x20);
        }
        lVar6 = 0;
        do {
          lVar14 = *(long *)(puVar21 + lVar6 * 8);
          pcVar2 = *(code **)(lVar14 + 0x10);
          plVar5 = *(long **)(lVar14 + 0x20);
          lVar14 = *(long *)(lVar14 + 0x28);
          if (*(short *)(lVar14 + 0x48) == -1) {
            func_0x00f78ad8(lVar14,uVar18);
          }
          iVar3 = func_0x00f78a4c(lVar14);
          if (iVar3 == 0) {
            if ((((plVar5 == (long *)0x0) || (*(short *)(lVar14 + 0x48) == -1)) ||
                ((*(byte *)(*plVar5 + 0x115) & 1) != 0)) || (puVar9[3] == 0)) goto code_r0x01562a40;
            iVar3 = func_0x00f78a44(lVar14);
            iVar4 = func_0x00f78ec0(lVar14);
            if (iVar3 == 0) {
              uVar1 = *(ushort *)(lVar14 + 0x48);
              if (iVar4 == 0) {
                lVar14 = *plVar5 + (ulong)uVar1 * 0x10;
                auVar28 = (**(code **)(lVar14 + 0x138))(plVar5,*(undefined8 *)(lVar14 + 0x140));
                goto code_r0x01562a4c;
              }
              lVar14 = func_0x00f78a48(lVar14);
              lVar15 = *plVar5;
              uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar13 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar14) {
                    puVar8 = (undefined8 *)
                             (lVar15 + (long)(int)(*piVar16 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x01562b10;
                  }
                  piVar16 = piVar16 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              puVar8 = (undefined8 *)func_0x00fac1f0(plVar5,lVar14,(ulong)uVar1);
code_r0x01562b10:
              pcVar2 = (code *)*puVar8;
              puVar8 = (undefined8 *)puVar8[1];
            }
            else {
              if (iVar4 == 0) {
                uVar18 = *(undefined8 *)(*plVar5 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar15 = *plVar5;
                uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
                if (uVar13 != 0) {
                  piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)(lVar14 + 0x18)) {
                      lVar15 = lVar15 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar14 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01562ae8;
                    }
                    piVar16 = piVar16 + 4;
                    uVar13 = uVar13 - 1;
                  } while (uVar13 != 0);
                }
                lVar15 = func_0x00fac1f0(plVar5);
code_r0x01562ae8:
                uVar18 = *(undefined8 *)(lVar15 + 8);
              }
              puVar8 = (undefined8 *)func_0x00f78acc(uVar18,lVar14);
              pcVar2 = (code *)*puVar8;
            }
            auVar28 = (*pcVar2)(plVar5,puVar8);
          }
          else if (*(char *)(lVar14 + 0x4a) == '\0') {
            auVar28 = (*pcVar2)(lVar14);
          }
          else {
code_r0x01562a40:
            auVar28 = (*pcVar2)(plVar5,lVar14);
          }
code_r0x01562a4c:
          uVar18 = auVar28._8_8_;
          lVar6 = lVar6 + 1;
          if (lVar6 == lVar12) {
            return auVar28._0_8_;
          }
        } while( true );
      }
    }
  }
  lVar6 = func_0x00f78af4();
  *(undefined8 *)((long)puVar8 + -0x100) = unaff_x24;
  *(undefined8 *)((long)puVar8 + -0xf8) = unaff_x23;
  *(undefined8 *)((long)puVar8 + -0xf0) = uVar18;
  *(undefined8 *)((long)puVar8 + -0xe8) = 0x3d41238;
  *(undefined8 *)((long)puVar8 + -0xe0) = uVar7;
  *(undefined8 *)((long)puVar8 + -0xd8) = uVar19;
  *(undefined1 **)((long)puVar8 + -0xd0) = (undefined1 *)((long)puVar8 + -0xa0);
  *(undefined **)((long)puVar8 + -200) = &Atlas_UI_Screens_PostArcadeScreen___ctor;
  if ((bRam0000000003eb4b42 & 1) == 0) {
    func_0x00f78a20(0x3d2c898);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4b42 = 1;
  }
  uVar18 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar18 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar18,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar18,0);
  if (lVar12 != 0) {
    uVar18 = 0x3d1f100;
    uVar7 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar12 + 0x18));
    *(undefined8 *)(lVar6 + 0xa0) = uVar7;
    uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar12 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar7,0);
    if (lVar12 != 0) {
      uVar18 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar12 + 0x18));
      *(undefined8 *)(lVar6 + 0xa8) = uVar18;
      *(undefined8 *)((long)puVar8 + -0xd0) = *(undefined8 *)((long)puVar8 + -0xd0);
      *(undefined8 *)((long)puVar8 + -200) = *(undefined8 *)((long)puVar8 + -200);
      if (lVar6 == 0) {
        auVar28 = func_0x00f78af4();
        puVar9 = auVar28._8_8_;
        puVar8 = auVar28._0_8_;
        uVar7 = puVar9[1];
        uVar18 = *puVar9;
        puVar8[2] = puVar9[2];
        puVar8[1] = uVar7;
        *puVar8 = uVar18;
        return puVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar8 = (undefined8 *)
               (*(code *)**(undefined8 **)
                           (*(long *)(*(long *)(lRam0000000003d2c898 + 0x18) + 0xc0) + 0x38))();
      return puVar8;
    }
  }
  func_0x00f78af4();
  *(undefined8 *)((long)puVar8 + -0x150) = unaff_x26;
  *(undefined8 *)((long)puVar8 + -0x148) = unaff_x25;
  *(undefined8 *)((long)puVar8 + -0x140) = unaff_x24;
  *(undefined8 *)((long)puVar8 + -0x138) = 0x3d215e0;
  *(undefined8 *)((long)puVar8 + -0x130) = 0x3d25458;
  *(undefined8 *)((long)puVar8 + -0x128) = 0x3d1a510;
  *(undefined8 *)((long)puVar8 + -0x120) = uVar18;
  *(long *)((long)puVar8 + -0x118) = lVar6;
  *(undefined1 **)((long)puVar8 + -0x110) = (undefined1 *)((long)puVar8 + -0xd0);
  *(undefined **)((long)puVar8 + -0x108) = &Atlas_UI_Screens_PostArcadeScreen___cctor;
  if ((bRam0000000003eb4b43 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d23df0);
    func_0x00f78a20(0x3d6cb40);
    func_0x00f78a20(0x3d6cbd0);
    func_0x00f78a20(0x3d706f8);
    func_0x00f78a20(0x3d729a8);
    func_0x00f78a20(0x3d6cb00);
    func_0x00f78a20(0x3d69870);
    bRam0000000003eb4b43 = 1;
  }
  uVar25 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('NothingToBronze')*/ uRam0000000003d706f8,0);
  **(undefined4 **)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) = uVar25;
  uVar25 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('BronzeToSilver')*/ uRam0000000003d69870,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 4) = uVar25;
  uVar25 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('SilverToGold')*/ uRam0000000003d729a8,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 8) = uVar25;
  if (((*(byte *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_9_CharacterProgress')*/ uRam0000000003d6cbd0,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x10) = uVar18;
  uVar18 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_10_CharacterProgress_2')*/ uRam0000000003d6cb00,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18) = uVar18;
  puVar8 = (undefined8 *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_17_DailyChallenges')*/ uRam0000000003d6cb40,0);
  *(undefined8 **)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x20) = puVar8;
  return puVar8;
}



// ============================================================
// RVA: 0x14c6edc | Atlas.UI.Screens.PostArcadeScreen.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x014c77b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151de78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151de7c) */
/* WARNING: Removing unreachable block (ram,0x014500ac) */
/* WARNING: Removing unreachable block (ram,0x01450100) */
/* WARNING: Removing unreachable block (ram,0x0145011c) */

undefined8 * Atlas_UI_Screens_PostArcadeScreen__OnUpdate(float param_1,undefined8 *param_2)

{
  ushort uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar6;
  undefined4 uVar5;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  int extraout_w1;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *plVar18;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar19;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  int iStack_64;
  
  puVar3 = &stack0xfffffffffffffff0;
  plVar18 = (long *)0x3eb4000;
  uVar14 = 0x3d41238;
  uVar19 = 0x3d41238;
  if ((bRam0000000003eb4b3c & 1) == 0) {
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d3e178);
    func_0x00f78a20(0x3d5bad8);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5c7a0);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41240);
    func_0x00f78a20(0x3d41248);
    func_0x00f78a20(0x3d25628);
    func_0x00f78a20(0x3d79110);
    func_0x00f78a20(0x3d7cd68);
    bRam0000000003eb4b3c = 1;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41238);
  uVar10 = uVar14;
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0xa8) == 0)) {
LAB_014c75c8:
    func_0x00f78af4();
    uVar19 = unaff_x21;
    uVar14 = uVar10;
LAB_014c75cc:
    func_0x00f78e5c();
  }
  else {
    plVar18 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar7 + 0xa8),0);
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41238);
    uVar10 = uVar19;
    if ((lVar7 == 0) ||
       ((*(long *)(lVar7 + 0xb0) == 0 ||
        (/*Atlas.UI.SlantFillBar$$get_FillBotomRightPosition*/ func_0x014fc974(*(long *)(lVar7 + 0xb0),0), plVar18 == (long *)0x0)))) goto LAB_014c75c8;
    uVar19 = unaff_x21;
    if (*plVar18 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) goto LAB_014c75cc;
    puVar8 = (undefined8 *)/*UnityEngine.RectTransform$$set_anchoredPosition*/ func_0x03254d08(plVar18,0);
    if (*(char *)((long)param_2 + 0x9d) != '\0') {
      return puVar8;
    }
    if (param_2[0x11] == 0) goto LAB_014c75c8;
    puVar8 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionVisible*/ func_0x01511a80(param_2[0x11],0);
    if ((int)puVar8 != 0) {
      if (param_2[0x11] != 0) {
        puVar8 = (undefined8 *)/*Atlas.UI.TransitionManager$$get_IsTransitionEnding*/ func_0x01511a70(param_2[0x11],0);
        if (((ulong)puVar8 & 1) != 0) {
          return puVar8;
        }
        if (param_2[0x10] != 0) {
          puVar8 = (undefined8 *)Atlas_FrontEnd_FrontEndScene__get_IsSceneChanging(param_2[0x10],0);
          if (((ulong)puVar8 & 1) != 0) {
            return puVar8;
          }
          lVar7 = param_2[0x11];
          if (lVar7 != 0) {
            if ((bRam0000000003eb4d7b & 1) == 0) {
              func_0x00f78a20(0x3d417a8);
              bRam0000000003eb4d7b = 1;
            }
            if ((*(char *)(lVar7 + 0x10) == '\0') || (*(int *)(lVar7 + 0x30) != 2)) {
              puVar8 = (undefined8 *)0x0;
            }
            else {
              *(undefined4 *)(lVar7 + 0x30) = 3;
              if (*(long *)(lVar7 + 0x40) != 0) {
                /*UnityEngine.Events.UnityEvent<int, Sprite>$$Invoke*/ func_0x01b85798(*(long *)(lVar7 + 0x40),1,0,uRam0000000003d417a8);
              }
              /*Core.Input.InputManager$$ResumeAllInput*/ func_0x0164ae40(0);
              puVar8 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
            }
            return puVar8;
          }
        }
      }
      goto LAB_014c75c8;
    }
    puVar11 = param_2;
    if (*(char *)((long)param_2 + 0x9c) == '\0') {
      if (0.0 < *(float *)(param_2 + 0x12)) {
        *(float *)(param_2 + 0x12) = *(float *)(param_2 + 0x12) - param_1;
        return puVar8;
      }
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_2,uRam0000000003d41248);
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0x98) != 0)) {
        puVar8 = (undefined8 *)/*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar7 + 0x98),uRam0000000003d3e178);
        if (((ulong)puVar8 & 1) != 0) {
          return puVar8;
        }
        if (*(int *)((long)param_2 + 0x4c) != 2) {
          return puVar8;
        }
        if (*(char *)((long)param_2 + 0x94) == '\0') {
          if (*(char *)((long)param_2 + 0x119) != '\0') {
            return puVar8;
          }
          if (*(char *)(param_2 + 0x1c) != '\0') {
            uStack_88 = param_2[0x1e];
            uStack_90 = param_2[0x1d];
            uStack_78 = param_2[0x20];
            uStack_80 = param_2[0x1f];
            uStack_70 = param_2[0x21];
            puVar8 = (undefined8 *)Atlas_UI_Screens_PostArcadeScreen__StartAward(param_2,&uStack_90)
            ;
            return puVar8;
          }
          if (*(char *)(param_2 + 0x23) != '\0') {
            return puVar8;
          }
          goto code_r0x014c75dc;
        }
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41238);
        if ((lVar7 != 0) && (param_2[0x14] != 0)) {
          plVar18 = *(long **)(lVar7 + 0xb0);
          unaff_x21 = func_0x0001c0f4(param_2[0x14],(long)*(int *)((long)param_2 + 0xbc));
          if ((param_2[0x15] != 0) &&
             (iVar4 = func_0x0001c0f4(param_2[0x15],(long)*(int *)((long)param_2 + 0xbc)),
             plVar18 != (long *)0x0)) {
            fVar21 = (float)/*Atlas.UI.SlantFillBar$$CalculateValue*/ func_0x014fcfb8((float)(int)unaff_x21,(float)iVar4,plVar18,0);
            lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41238);
            if (lVar7 != 0) {
              iStack_64 = (int)fVar21;
              plVar18 = *(long **)(lVar7 + 0xa0);
              unaff_x21 = func_0x00f78ae0(/*uint_TypeInfo*/ uRam0000000003d25628,&iStack_64);
              uStack_68 = *(undefined4 *)((long)param_2 + 0xc4);
              uVar19 = 0x3d22910;
              uVar14 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_68);
              uVar9 = 0x3d7cd68;
              uVar14 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0} / {1}')*/ uRam0000000003d7cd68,unaff_x21,uVar14,0);
              unaff_x23 = 0x3d22910;
              unaff_x24 = 0x3d7cd68;
              if (plVar18 != (long *)0x0) {
                /*Atlas.UI.UIXPBehaviour$$Set*/ func_0x0151db10(plVar18,uVar14,0);
                puVar8 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41238);
                if ((puVar8 != (undefined8 *)0x0) &&
                   (unaff_x23 = uVar19, unaff_x24 = uVar9, puVar8[0x16] != 0)) {
                  if (*(char *)(puVar8[0x16] + 0x90) != '\0') goto code_r0x014c7554;
                  if (*(char *)(param_2 + 0x25) == '\0') {
                    Atlas_UI_Screens_PostArcadeScreen__HideAward(param_2);
                    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41238);
                    if ((lVar7 != 0) && (param_2[0x15] != 0)) {
                      plVar18 = *(long **)(lVar7 + 0xa0);
                      iStack_64 = func_0x0001c0f4(param_2[0x15],(long)*(int *)((long)param_2 + 0xbc)
                                                 );
                      unaff_x21 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&iStack_64);
                      uStack_68 = *(undefined4 *)((long)param_2 + 0xc4);
                      uVar14 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_68);
                      uVar14 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0} / {1}')*/ uRam0000000003d7cd68,unaff_x21,uVar14,0);
                      if (plVar18 != (long *)0x0) {
                        /*Atlas.UI.UIXPBehaviour$$Set*/ func_0x0151db10(plVar18,uVar14,0);
                        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41238);
                        if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)) {
                          uVar5 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_PauseBeforeFollowingAwards*/ func_0x01562bd0(*(long *)(lVar7 + 0x68),0);
                          param_2[0x1e] = 0;
                          param_2[0x1d] = 0;
                          *(undefined4 *)(param_2 + 0x12) = uVar5;
                          param_2[0x20] = 0;
                          param_2[0x1f] = 0;
                          param_2[0x21] = 0;
                          *(undefined1 *)(param_2 + 0x1c) = 0;
                          goto code_r0x014c73f0;
                        }
                      }
                    }
                  }
                  else {
code_r0x014c73f0:
                    if (param_2[0x15] != 0) {
                      puVar8 = (undefined8 *)
                               func_0x0001c0f4(param_2[0x15],(long)*(int *)((long)param_2 + 0xbc));
                      if ((fVar21 < (float)(int)puVar8) ||
                         (*(char *)((long)param_2 + 0x119) != '\0')) {
code_r0x014c7554:
                        *(float *)(param_2 + 0x13) = *(float *)(param_2 + 0x13) + param_1;
                        return puVar8;
                      }
                      *(undefined1 *)((long)param_2 + 0x119) = 1;
                      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41238);
                      if ((lVar7 != 0) && (*(long *)(lVar7 + 0xb8) != 0)) {
                        /*Atlas.UI.UIRewardBehaviour$$Set*/ func_0x0151d2a8(*(long *)(lVar7 + 0xb8),1,0);
                        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41238);
                        if ((lVar7 != 0) && (*(long *)(lVar7 + 200) != 0)) {
                          plVar18 = (long *)/*UnityEngine.UI.Graphic$$get_rectTransform*/ func_0x032bc0b0(*(long *)(lVar7 + 200),0);
                          lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41238);
                          if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)) {
                            uVar5 = *(undefined4 *)(*(long *)(lVar7 + 0x68) + 0x4c);
                            lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41238);
                            if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)) {
                              uVar23 = *(undefined4 *)(*(long *)(lVar7 + 0x68) + 0x44);
                              lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41238);
                              if ((lVar7 != 0) && (*(long *)(lVar7 + 0x68) != 0)) {
                                uVar22 = /*Atlas.UI.Screens.PostArcadeScreenBehaviour.PostEventSettings$$get_RankJumpDuration*/ func_0x01562c60(*(long *)(lVar7 + 0x68),0);
                                /*Atlas.UI.AtlasTweenAnimations$$JumpZoom*/ func_0x0146f84c(uVar5,0x3f800000,uVar23,uVar22,0,0,plVar18,0,0,0);
                                /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/ProgressBarComplete')*/ uRam0000000003d79110,0);
                                lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41238);
                                if (lVar7 != 0) {
                                  lVar7 = *(long *)(lVar7 + 0xb8);
                                  unaff_x21 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                                  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(unaff_x21,param_2,uRam0000000003d5bad8,0);
                                  plVar18 = (long *)0x0;
                                  if (lVar7 != 0) {
                                    puVar8 = (undefined8 *)/*Atlas.UI.UIRewardBehaviour$$Wiggle*/ func_0x0151d394(0,lVar7,unaff_x21,0);
                                    goto code_r0x014c7554;
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
      goto LAB_014c75c8;
    }
    *(undefined1 *)((long)param_2 + 0x9c) = 0;
    if (*(char *)(param_2 + 0x26) != '\0') {
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41240);
      if (lVar7 == 0) goto LAB_014c75c8;
      *(undefined1 *)(lVar7 + 0x68) = 1;
    }
    plVar18 = (long *)param_2[0x10];
    uVar19 = param_2[0x1b];
    uVar14 = 0x3d41248;
    uVar10 = 0x3d41248;
    uVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_2,uRam0000000003d41248);
    puVar8 = (undefined8 *)/*Atlas.UI.Screens.RewardScreenExtensions$$RunRewardSequenceIfRewardUnseen<SingleplayerChapterBehaviour, SingleplayerChapterScreen.TransitionData>*/ func_0x018de5e0(plVar18,uVar19,param_2,uVar9,uRam0000000003d5c7a0);
    if ((int)puVar8 == 0) goto code_r0x014c75dc;
    *(undefined1 *)((long)param_2 + 0x9d) = 1;
    lVar7 = param_2[0x15];
    unaff_x21 = uVar19;
    if (lVar7 == 0) goto LAB_014c75c8;
    if (*(uint *)((long)param_2 + 0xbc) < *(uint *)(lVar7 + 0x18)) {
      if (*(int *)(lVar7 + (long)(int)*(uint *)((long)param_2 + 0xbc) * 4 + 0x20) <
          *(int *)((long)param_2 + 0xc4)) {
        return puVar8;
      }
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_2,uRam0000000003d41248);
      if (lVar7 != 0) {
        plVar18 = *(long **)(lVar7 + 0x50);
        puVar8 = (undefined8 *)Atlas_UI_Screens_PostArcadeScreen__CreateScreenData(param_2);
        if (plVar18 != (long *)0x0) {
          plVar18[0xf] = (long)puVar8;
          if (*(char *)((long)param_2 + 0xcc) == '\0') {
            return puVar8;
          }
          lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_2,uRam0000000003d41248);
          if ((lVar7 != 0) && (*(ulong *)(lVar7 + 0x50) != 0)) {
            auVar24._8_8_ = 0;
            auVar24._0_8_ = *(ulong *)(lVar7 + 0x50);
            puVar3 = (undefined1 *)register0x00000008;
            do {
              puVar11 = auVar24._0_8_;
              *(long **)(puVar3 + -0x20) = unaff_x20;
              *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
              *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
              *(undefined **)(puVar3 + -8) = unaff_x30;
              unaff_x20 = (long *)puVar11[0xd];
              puVar8 = unaff_x19;
              if (unaff_x20 == (long *)0x0) goto code_r0x0151de64;
              if ((int)unaff_x20[3] == 0) {
code_r0x0151de58:
                uVar14 = func_0x00f78b24(auVar24._0_8_,auVar24._8_8_);
                func_0x00f78ac0(uVar14,0);
              }
              else {
                *(undefined4 *)(unaff_x20 + 4) = 0;
                auVar24 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(1,puVar11[2],puVar11[4],0);
                puVar8 = puVar11;
                if ((*(uint *)(unaff_x20 + 3) & 0xfffffffe) == 0) goto code_r0x0151de58;
                *(int *)((long)unaff_x20 + 0x24) = auVar24._0_4_;
                unaff_x20 = (long *)puVar11[0xd];
                auVar24 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(2,puVar11[2],puVar11[4],0);
                if (unaff_x20 != (long *)0x0) {
                  if (2 < *(uint *)(unaff_x20 + 3)) {
                    *(int *)(unaff_x20 + 5) = auVar24._0_4_;
                    unaff_x20 = (long *)puVar11[0xd];
                    auVar24 = /*Atlas.Helpers.ArcadeHelper$$GetMedalsOfAndAboveType*/ func_0x0144ff90(3,puVar11[2],puVar11[4],0);
                    if (unaff_x20 == (long *)0x0) goto code_r0x0151de64;
                    if ((*(uint *)(unaff_x20 + 3) & 0xfffffffc) != 0) {
                      *(int *)((long)unaff_x20 + 0x2c) = auVar24._0_4_;
                      return auVar24._0_8_;
                    }
                  }
                  goto code_r0x0151de58;
                }
              }
code_r0x0151de64:
              auVar24 = func_0x00f78af4();
              unaff_x19 = auVar24._0_8_;
              *(long **)(puVar3 + -0x40) = unaff_x20;
              *(undefined8 **)(puVar3 + -0x38) = puVar8;
              *(undefined1 **)(puVar3 + -0x30) = puVar3 + -0x10;
              *(undefined **)(puVar3 + -0x28) = &Atlas_Stats_UnlockManager__CacheCurrentArcadeRank;
              unaff_x29 = puVar3 + -0x30;
              unaff_x30 = &UNK_0151de7c;
              puVar3 = puVar3 + -0x40;
            } while( true );
          }
        }
      }
      goto LAB_014c75c8;
    }
  }
  uVar10 = func_0x00f78b24();
  unaff_x30 = &Atlas_UI_Screens_PostArcadeScreen__PlacementAwardSequenceEnded;
  puVar11 = (undefined8 *)func_0x00f78ac0(uVar10,0);
  register0x00000008 = (BADSPACEBASE *)&uStack_90;
  unaff_x19 = param_2;
  unaff_x20 = plVar18;
  unaff_x21 = uVar19;
  unaff_x22 = uVar14;
  unaff_x29 = puVar3;
code_r0x014c75dc:
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  lVar7 = 0x3eb4000;
  puVar8 = puVar11;
  if ((bRam0000000003eb4b3e & 1) == 0) {
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d23df0);
    puVar8 = (undefined8 *)func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b3e = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
  if (*(char *)(puVar11 + 0x23) != '\0') {
    return puVar8;
  }
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar11,uRam0000000003d41248);
  if (lVar12 == 0) goto code_r0x014c77e0;
  if (*(long *)(lVar12 + 0x20) == 0) goto code_r0x014c77e0;
  lVar12 = *(long *)(*(long *)(lVar12 + 0x20) + 0x10);
  uVar14 = 0x3d23df0;
  uVar19 = 0x3d23df0;
  if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar7 = 0;
  unaff_x22 = uVar14;
  if (lVar12 == 0) goto code_r0x014c77e0;
  lVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar12,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18),
                          uRam0000000003d57280);
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar11,uRam0000000003d41248);
  if (lVar12 == 0) goto code_r0x014c77e0;
  unaff_x22 = uVar19;
  if (*(long *)(lVar12 + 0xb0) == 0) goto code_r0x014c77e0;
  iVar4 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                    (*(long *)(lVar12 + 0xb0),lVar7,0);
  if (iVar4 != 0) {
    if (lVar7 == 0) goto code_r0x014c77e0;
    if (*(long *)(lVar7 + 0x58) == 0) goto code_r0x014c77e0;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)register0x00000008 + -0x58),*(long *)(lVar7 + 0x58),
                    uRam0000000003d3dc70);
    uVar14 = 0x3d337d0;
    unaff_x23 = 0x3d3e188;
    while (uVar13 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)register0x00000008 + -0x58),
                                    uRam0000000003d337d0), (uVar13 & 1) != 0) {
      lVar7 = *(long *)((long)register0x00000008 + -0x48);
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar11,uRam0000000003d41248);
      if (lVar12 == 0) {
        func_0x00f78af4();
code_r0x014c77dc:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x14c77e0);
        (*pcVar2)();
      }
      if (*(long *)(lVar12 + 0x98) == 0) {
        func_0x00f78af4();
        goto code_r0x014c77dc;
      }
      /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar12 + 0x98),lVar7,uRam0000000003d3e188);
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)register0x00000008 + -0x58),uRam0000000003d337c8);
  }
  do {
    unaff_x22 = uVar14;
    if ((puVar11[0x10] != 0) &&
       (lVar12 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(puVar11[0x10],0,0), lVar12 != 0)) {
      Atlas_Gameplay_Kart_KartFEAnimator__TriggerFEGainXP(lVar12,0);
      puVar20 = &UNK_014c77b8;
      puVar8 = puVar11;
      goto code_r0x014c7830;
    }
code_r0x014c77e0:
    uVar14 = unaff_x22;
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014c782c;
    plVar18 = (long *)___cxa_begin_catch();
    lVar7 = *plVar18;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)register0x00000008 + -0x58),uRam0000000003d337c8);
  } while (lVar7 == 0);
  func_0x00f78ac0(lVar7,0);
code_r0x014c782c:
  puVar20 = &Atlas_UI_Screens_PostArcadeScreen__AllowExit;
  puVar8 = (undefined8 *)__Unwind_Resume();
code_r0x014c7830:
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar14;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0x3d41248;
  *(long *)((long)register0x00000008 + -0x80) = lVar7;
  *(undefined8 **)((long)register0x00000008 + -0x78) = puVar11;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x68) = puVar20;
  uVar19 = 0x3eb4000;
  if ((bRam0000000003eb4b3f & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b3f = 1;
  }
  *(undefined4 *)((long)puVar8 + 300) = 2;
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0xc0) != 0)) {
    uVar19 = 0x3d41000;
    /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(*(long *)(lVar7 + 0xc0),1,0);
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(puVar8,uRam0000000003d41248);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar7 + 0xb8),6,1,1,0);
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41238);
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0x110) != 0)) &&
         (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar7 + 0x110),0), lVar7 != 0)) {
        puVar11 = (undefined8 *)/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,0,0);
        *(undefined1 *)(puVar8 + 0x23) = 1;
        return puVar11;
      }
    }
  }
  uVar10 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar14;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar19;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0x3d41238;
  *(undefined8 **)((long)register0x00000008 + -0xa8) = puVar8;
  *(undefined1 **)((long)register0x00000008 + -0xa0) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined **)((long)register0x00000008 + -0x98) =
       &Atlas_UI_Screens_PostArcadeScreen__PlayAgainPressed;
  uVar19 = 0x3eb4000;
  if ((bRam0000000003eb4b40 & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41240);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b40 = 1;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar10,uRam0000000003d41238);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0xc0) != 0)) {
    uVar19 = 0x3d41000;
    /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(*(long *)(lVar7 + 0xc0),0);
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar10,uRam0000000003d41248);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0xb8) != 0)) {
      uVar19 = 0x3d41000;
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar7 + 0xb8),6,0,0);
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41240);
      if (lVar7 != 0) {
        puVar8 = *(undefined8 **)(lVar7 + 0x50);
        if (puVar8 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        uVar14 = 0;
        *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -200) = unaff_x23;
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
        *(undefined8 **)((long)register0x00000008 + -0xe8) = puVar8;
        lVar7 = puVar8[0xd];
        if (lVar7 == 0) {
          puVar3 = (undefined1 *)((long)register0x00000008 + -0xe8);
          lVar12 = 1;
        }
        else {
          lVar12 = *(long *)(lVar7 + 0x18);
          if (lVar12 == 0) {
            return puVar8;
          }
          puVar3 = (undefined1 *)(lVar7 + 0x20);
        }
        lVar7 = 0;
        do {
          lVar15 = *(long *)(puVar3 + lVar7 * 8);
          pcVar2 = *(code **)(lVar15 + 0x10);
          plVar18 = *(long **)(lVar15 + 0x20);
          lVar15 = *(long *)(lVar15 + 0x28);
          if (*(short *)(lVar15 + 0x48) == -1) {
            func_0x00f78ad8(lVar15,uVar14);
          }
          iVar4 = func_0x00f78a4c(lVar15);
          if (iVar4 == 0) {
            if ((((plVar18 == (long *)0x0) || (*(short *)(lVar15 + 0x48) == -1)) ||
                ((*(byte *)(*plVar18 + 0x115) & 1) != 0)) || (puVar8[3] == 0))
            goto code_r0x01562a40;
            iVar4 = func_0x00f78a44(lVar15);
            iVar6 = func_0x00f78ec0(lVar15);
            if (iVar4 == 0) {
              uVar1 = *(ushort *)(lVar15 + 0x48);
              if (iVar6 == 0) {
                lVar15 = *plVar18 + (ulong)uVar1 * 0x10;
                auVar24 = (**(code **)(lVar15 + 0x138))(plVar18,*(undefined8 *)(lVar15 + 0x140));
                goto code_r0x01562a4c;
              }
              lVar15 = func_0x00f78a48(lVar15);
              lVar16 = *plVar18;
              uVar13 = (ulong)*(ushort *)(lVar16 + 0x12a);
              if (uVar13 != 0) {
                piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar15) {
                    puVar11 = (undefined8 *)
                              (lVar16 + (long)(int)(*piVar17 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x01562b10;
                  }
                  piVar17 = piVar17 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              puVar11 = (undefined8 *)func_0x00fac1f0(plVar18,lVar15,(ulong)uVar1);
code_r0x01562b10:
              pcVar2 = (code *)*puVar11;
              puVar11 = (undefined8 *)puVar11[1];
            }
            else {
              if (iVar6 == 0) {
                uVar14 = *(undefined8 *)
                          (*plVar18 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar16 = *plVar18;
                uVar13 = (ulong)*(ushort *)(lVar16 + 0x12a);
                if (uVar13 != 0) {
                  piVar17 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)(lVar15 + 0x18)) {
                      lVar16 = lVar16 + (long)(int)(*piVar17 + (uint)*(ushort *)(lVar15 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01562ae8;
                    }
                    piVar17 = piVar17 + 4;
                    uVar13 = uVar13 - 1;
                  } while (uVar13 != 0);
                }
                lVar16 = func_0x00fac1f0(plVar18);
code_r0x01562ae8:
                uVar14 = *(undefined8 *)(lVar16 + 8);
              }
              puVar11 = (undefined8 *)func_0x00f78acc(uVar14,lVar15);
              pcVar2 = (code *)*puVar11;
            }
            auVar24 = (*pcVar2)(plVar18,puVar11);
          }
          else if (*(char *)(lVar15 + 0x4a) == '\0') {
            auVar24 = (*pcVar2)(lVar15);
          }
          else {
code_r0x01562a40:
            auVar24 = (*pcVar2)(plVar18,lVar15);
          }
code_r0x01562a4c:
          uVar14 = auVar24._8_8_;
          lVar7 = lVar7 + 1;
          if (lVar7 == lVar12) {
            return auVar24._0_8_;
          }
        } while( true );
      }
    }
  }
  lVar7 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0xf8) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar14;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0x3d41238;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar19;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar10;
  *(undefined1 **)((long)register0x00000008 + -0xd0) =
       (undefined1 *)((long)register0x00000008 + -0xa0);
  *(undefined **)((long)register0x00000008 + -200) = &Atlas_UI_Screens_PostArcadeScreen___ctor;
  if ((bRam0000000003eb4b42 & 1) == 0) {
    func_0x00f78a20(0x3d2c898);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4b42 = 1;
  }
  uVar14 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar14 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar14,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar12 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar14,0);
  if (lVar12 != 0) {
    uVar14 = 0x3d1f100;
    uVar19 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar12 + 0x18));
    *(undefined8 *)(lVar7 + 0xa0) = uVar19;
    uVar19 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar12 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar19,0);
    if (lVar12 != 0) {
      uVar14 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar12 + 0x18));
      *(undefined8 *)(lVar7 + 0xa8) = uVar14;
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -200);
      if (lVar7 == 0) {
        auVar24 = func_0x00f78af4();
        puVar11 = auVar24._8_8_;
        puVar8 = auVar24._0_8_;
        uVar19 = puVar11[1];
        uVar14 = *puVar11;
        puVar8[2] = puVar11[2];
        puVar8[1] = uVar19;
        *puVar8 = uVar14;
        return puVar8;
      }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar8 = (undefined8 *)
               (*(code *)**(undefined8 **)
                           (*(long *)(*(long *)(lRam0000000003d2c898 + 0x18) + 0xc0) + 0x38))();
      return puVar8;
    }
  }
  func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x150) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x148) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x138) = 0x3d215e0;
  *(undefined8 *)((long)register0x00000008 + -0x130) = 0x3d25458;
  *(undefined8 *)((long)register0x00000008 + -0x128) = 0x3d1a510;
  *(undefined8 *)((long)register0x00000008 + -0x120) = uVar14;
  *(long *)((long)register0x00000008 + -0x118) = lVar7;
  *(undefined1 **)((long)register0x00000008 + -0x110) =
       (undefined1 *)((long)register0x00000008 + -0xd0);
  *(undefined **)((long)register0x00000008 + -0x108) = &Atlas_UI_Screens_PostArcadeScreen___cctor;
  if ((bRam0000000003eb4b43 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d23df0);
    func_0x00f78a20(0x3d6cb40);
    func_0x00f78a20(0x3d6cbd0);
    func_0x00f78a20(0x3d706f8);
    func_0x00f78a20(0x3d729a8);
    func_0x00f78a20(0x3d6cb00);
    func_0x00f78a20(0x3d69870);
    bRam0000000003eb4b43 = 1;
  }
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('NothingToBronze')*/ uRam0000000003d706f8,0);
  **(undefined4 **)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('BronzeToSilver')*/ uRam0000000003d69870,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 4) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('SilverToGold')*/ uRam0000000003d729a8,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 8) = uVar5;
  if (((*(byte *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar14 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_9_CharacterProgress')*/ uRam0000000003d6cbd0,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x10) = uVar14;
  uVar14 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_10_CharacterProgress_2')*/ uRam0000000003d6cb00,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18) = uVar14;
  puVar8 = (undefined8 *)/*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_17_DailyChallenges')*/ uRam0000000003d6cb40,0);
  *(undefined8 **)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x20) = puVar8;
  return puVar8;
}



// ============================================================
// RVA: 0x14c75dc | Atlas.UI.Screens.PostArcadeScreen.PlacementAwardSequenceEnded
// ============================================================

/* WARNING: Possible PIC construction at 0x014c77b4: Changing call to branch */

void Atlas_UI_Screens_PostArcadeScreen__PlacementAwardSequenceEnded(long param_1)

{
  long *plVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  long lStack_e8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000003eb4b3e & 1) == 0) {
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d23df0);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b3e = 1;
  }
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if (*(char *)(param_1 + 0x118) != '\0') {
    return;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
  if (lVar7 == 0) goto LAB_014c77e0;
  if (*(long *)(lVar7 + 0x20) == 0) goto LAB_014c77e0;
  lVar7 = *(long *)(*(long *)(lVar7 + 0x20) + 0x10);
  if (((*(ushort *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar7 == 0) goto LAB_014c77e0;
  lVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar7,*(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18),
                          uRam0000000003d57280);
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
  if (lVar8 == 0) goto LAB_014c77e0;
  if (*(long *)(lVar8 + 0xb0) == 0) goto LAB_014c77e0;
  iVar4 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete(*(long *)(lVar8 + 0xb0),lVar7,0)
  ;
  if (iVar4 != 0) {
    if (lVar7 == 0) goto LAB_014c77e0;
    if (*(long *)(lVar7 + 0x58) == 0) goto LAB_014c77e0;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_58,*(long *)(lVar7 + 0x58),uRam0000000003d3dc70);
    while (uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_58,uRam0000000003d337d0), uVar11 = uStack_48,
          (uVar9 & 1) != 0) {
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
      if (lVar7 == 0) {
        func_0x00f78af4();
code_r0x014c77dc:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x14c77e0);
        (*pcVar3)();
      }
      if (*(long *)(lVar7 + 0x98) == 0) {
        func_0x00f78af4();
        goto code_r0x014c77dc;
      }
      /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar7 + 0x98),uVar11,uRam0000000003d3e188);
    }
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d337c8);
  }
  do {
    if ((*(long *)(param_1 + 0x80) != 0) &&
       (lVar7 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(param_1 + 0x80),0,0),
       lVar7 != 0)) {
      Atlas_Gameplay_Kart_KartFEAnimator__TriggerFEGainXP(lVar7,0);
      goto code_r0x014c7830;
    }
LAB_014c77e0:
    func_0x00f78af4();
    if (extraout_w1 != 1) goto code_r0x014c782c;
    plVar10 = (long *)___cxa_begin_catch();
    lVar7 = *plVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_58,uRam0000000003d337c8);
  } while (lVar7 == 0);
  func_0x00f78ac0(lVar7,0);
code_r0x014c782c:
  param_1 = __Unwind_Resume();
code_r0x014c7830:
  if ((bRam0000000003eb4b3f & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b3f = 1;
  }
  *(undefined4 *)(param_1 + 300) = 2;
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0xc0) != 0)) {
    /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(*(long *)(lVar7 + 0xc0),1,0);
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar7 + 0xb8),6,1,1,0);
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0x110) != 0)) &&
         (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar7 + 0x110),0), lVar7 != 0)) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,0,0);
        *(undefined1 *)(param_1 + 0x118) = 1;
        return;
      }
    }
  }
  uVar11 = func_0x00f78af4();
  if ((bRam0000000003eb4b40 & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41240);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b40 = 1;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d41238);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0xc0) != 0)) {
    /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(*(long *)(lVar7 + 0xc0),0);
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d41248);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar7 + 0xb8),6,0,0);
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar11,uRam0000000003d41240);
      if (lVar7 != 0) {
        lVar7 = *(long *)(lVar7 + 0x50);
        if (lVar7 == 0) {
          return;
        }
        uVar11 = 0;
        lStack_e8 = lVar7;
        lVar8 = *(long *)(lVar7 + 0x68);
        if (lVar8 == 0) {
          plVar10 = &lStack_e8;
          lVar17 = 1;
        }
        else {
          lVar17 = *(long *)(lVar8 + 0x18);
          if (lVar17 == 0) {
            return;
          }
          plVar10 = (long *)(lVar8 + 0x20);
        }
        lVar8 = 0;
        do {
          lVar14 = plVar10[lVar8];
          pcVar3 = *(code **)(lVar14 + 0x10);
          plVar1 = *(long **)(lVar14 + 0x20);
          lVar14 = *(long *)(lVar14 + 0x28);
          if (*(short *)(lVar14 + 0x48) == -1) {
            func_0x00f78ad8(lVar14,uVar11);
          }
          iVar4 = func_0x00f78a4c(lVar14);
          if (iVar4 == 0) {
            if ((((plVar1 == (long *)0x0) || (*(short *)(lVar14 + 0x48) == -1)) ||
                ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar7 + 0x18) == 0))
            goto code_r0x01562a40;
            iVar4 = func_0x00f78a44(lVar14);
            iVar6 = func_0x00f78ec0(lVar14);
            if (iVar4 == 0) {
              uVar2 = *(ushort *)(lVar14 + 0x48);
              if (iVar6 == 0) {
                lVar14 = *plVar1 + (ulong)uVar2 * 0x10;
                (**(code **)(lVar14 + 0x138))(plVar1,*(undefined8 *)(lVar14 + 0x140));
                uVar11 = extraout_x1_01;
                goto code_r0x01562a4c;
              }
              lVar14 = func_0x00f78a48(lVar14);
              lVar15 = *plVar1;
              uVar9 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar9 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar14) {
                    puVar12 = (undefined8 *)
                              (lVar15 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x01562b10;
                  }
                  piVar16 = piVar16 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
              puVar12 = (undefined8 *)func_0x00fac1f0(plVar1,lVar14,(ulong)uVar2);
code_r0x01562b10:
              pcVar3 = (code *)*puVar12;
              puVar12 = (undefined8 *)puVar12[1];
            }
            else {
              if (iVar6 == 0) {
                uVar11 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar14 + 0x48) * 0x10 + 0x140)
                ;
              }
              else {
                lVar15 = *plVar1;
                uVar9 = (ulong)*(ushort *)(lVar15 + 0x12a);
                if (uVar9 != 0) {
                  piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)(lVar14 + 0x18)) {
                      lVar15 = lVar15 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar14 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01562ae8;
                    }
                    piVar16 = piVar16 + 4;
                    uVar9 = uVar9 - 1;
                  } while (uVar9 != 0);
                }
                lVar15 = func_0x00fac1f0(plVar1);
code_r0x01562ae8:
                uVar11 = *(undefined8 *)(lVar15 + 8);
              }
              puVar12 = (undefined8 *)func_0x00f78acc(uVar11,lVar14);
              pcVar3 = (code *)*puVar12;
            }
            (*pcVar3)(plVar1,puVar12);
            uVar11 = extraout_x1_02;
          }
          else if (*(char *)(lVar14 + 0x4a) == '\0') {
            (*pcVar3)(lVar14);
            uVar11 = extraout_x1;
          }
          else {
code_r0x01562a40:
            (*pcVar3)(plVar1,lVar14);
            uVar11 = extraout_x1_00;
          }
code_r0x01562a4c:
          lVar8 = lVar8 + 1;
          if (lVar8 == lVar17) {
            return;
          }
        } while( true );
      }
    }
  }
  lVar7 = func_0x00f78af4();
  lStack_e8 = 0x3d41238;
  if ((bRam0000000003eb4b42 & 1) == 0) {
    func_0x00f78a20(0x3d2c898);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4b42 = 1;
  }
  uVar11 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar11,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar8 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar11,0);
  if (lVar8 != 0) {
    uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar8 + 0x18));
    *(undefined8 *)(lVar7 + 0xa0) = uVar11;
    uVar11 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar8 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar11,0);
    if (lVar8 != 0) {
      uVar11 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar8 + 0x18));
      *(undefined8 *)(lVar7 + 0xa8) = uVar11;
      if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c898 + 0x18) + 0xc0) + 0x38)
        )();
        return;
      }
      auVar19 = func_0x00f78af4();
      puVar13 = auVar19._8_8_;
      puVar12 = auVar19._0_8_;
      uVar18 = puVar13[1];
      uVar11 = *puVar13;
      puVar12[2] = puVar13[2];
      puVar12[1] = uVar18;
      *puVar12 = uVar11;
      return;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4b43 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d23df0);
    func_0x00f78a20(0x3d6cb40);
    func_0x00f78a20(0x3d6cbd0);
    func_0x00f78a20(0x3d706f8);
    func_0x00f78a20(0x3d729a8);
    func_0x00f78a20(0x3d6cb00);
    func_0x00f78a20(0x3d69870);
    bRam0000000003eb4b43 = 1;
  }
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('NothingToBronze')*/ uRam0000000003d706f8,0);
  **(undefined4 **)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('BronzeToSilver')*/ uRam0000000003d69870,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 4) = uVar5;
  uVar5 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('SilverToGold')*/ uRam0000000003d729a8,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 8) = uVar5;
  if (((*(byte *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_9_CharacterProgress')*/ uRam0000000003d6cbd0,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x10) = uVar11;
  uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_10_CharacterProgress_2')*/ uRam0000000003d6cb00,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18) = uVar11;
  uVar11 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_17_DailyChallenges')*/ uRam0000000003d6cb40,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x20) = uVar11;
  return;
}



// ============================================================
// RVA: 0x14c7830 | Atlas.UI.Screens.PostArcadeScreen.AllowExit
// ============================================================

void Atlas_UI_Screens_PostArcadeScreen__AllowExit(long param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  code *pcVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  long lStack_88;
  
  if ((bRam0000000003eb4b3f & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b3f = 1;
  }
  *(undefined4 *)(param_1 + 300) = 2;
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0xc0) != 0)) {
    /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(*(long *)(lVar6 + 0xc0),1,0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar6 + 0xb8),6,1,1,0);
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
      if (((lVar6 != 0) && (*(long *)(lVar6 + 0x110) != 0)) &&
         (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar6 + 0x110),0), lVar6 != 0)) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar6,0,0);
        *(undefined1 *)(param_1 + 0x118) = 1;
        return;
      }
    }
  }
  uVar7 = func_0x00f78af4();
  if ((bRam0000000003eb4b40 & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41240);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b40 = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar7,uRam0000000003d41238);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0xc0) != 0)) {
    /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(*(long *)(lVar6 + 0xc0),0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar7,uRam0000000003d41248);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar6 + 0xb8),6,0,0);
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar7,uRam0000000003d41240);
      if (lVar6 != 0) {
        lVar6 = *(long *)(lVar6 + 0x50);
        if (lVar6 == 0) {
          return;
        }
        uVar7 = 0;
        lStack_88 = lVar6;
        lVar10 = *(long *)(lVar6 + 0x68);
        if (lVar10 == 0) {
          plVar17 = &lStack_88;
          lVar16 = 1;
        }
        else {
          lVar16 = *(long *)(lVar10 + 0x18);
          if (lVar16 == 0) {
            return;
          }
          plVar17 = (long *)(lVar10 + 0x20);
        }
        lVar10 = 0;
        do {
          lVar11 = plVar17[lVar10];
          pcVar15 = *(code **)(lVar11 + 0x10);
          plVar1 = *(long **)(lVar11 + 0x20);
          lVar11 = *(long *)(lVar11 + 0x28);
          if (*(short *)(lVar11 + 0x48) == -1) {
            func_0x00f78ad8(lVar11,uVar7);
          }
          iVar4 = func_0x00f78a4c(lVar11);
          if (iVar4 == 0) {
            if ((((plVar1 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
                ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar6 + 0x18) == 0))
            goto code_r0x01562a40;
            iVar4 = func_0x00f78a44(lVar11);
            iVar5 = func_0x00f78ec0(lVar11);
            if (iVar4 == 0) {
              uVar2 = *(ushort *)(lVar11 + 0x48);
              if (iVar5 == 0) {
                lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
                (**(code **)(lVar11 + 0x138))(plVar1,*(undefined8 *)(lVar11 + 0x140));
                uVar7 = extraout_x1_01;
                goto code_r0x01562a4c;
              }
              lVar11 = func_0x00f78a48(lVar11);
              lVar12 = *plVar1;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar11) {
                    puVar8 = (undefined8 *)
                             (lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x01562b10;
                  }
                  piVar14 = piVar14 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              puVar8 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x01562b10:
              pcVar15 = (code *)*puVar8;
              puVar8 = (undefined8 *)puVar8[1];
            }
            else {
              if (iVar5 == 0) {
                uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar12 = *plVar1;
                uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                      lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01562ae8;
                    }
                    piVar14 = piVar14 + 4;
                    uVar13 = uVar13 - 1;
                  } while (uVar13 != 0);
                }
                lVar12 = func_0x00fac1f0(plVar1);
code_r0x01562ae8:
                uVar7 = *(undefined8 *)(lVar12 + 8);
              }
              puVar8 = (undefined8 *)func_0x00f78acc(uVar7,lVar11);
              pcVar15 = (code *)*puVar8;
            }
            (*pcVar15)(plVar1,puVar8);
            uVar7 = extraout_x1_02;
          }
          else if (*(char *)(lVar11 + 0x4a) == '\0') {
            (*pcVar15)(lVar11);
            uVar7 = extraout_x1;
          }
          else {
code_r0x01562a40:
            (*pcVar15)(plVar1,lVar11);
            uVar7 = extraout_x1_00;
          }
code_r0x01562a4c:
          lVar10 = lVar10 + 1;
          if (lVar10 == lVar16) {
            return;
          }
        } while( true );
      }
    }
  }
  lVar6 = func_0x00f78af4();
  lStack_88 = 0x3d41238;
  if ((bRam0000000003eb4b42 & 1) == 0) {
    func_0x00f78a20(0x3d2c898);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4b42 = 1;
  }
  uVar7 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar7,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar7,0);
  if (lVar10 != 0) {
    uVar7 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar10 + 0x18));
    *(undefined8 *)(lVar6 + 0xa0) = uVar7;
    uVar7 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar10 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar7,0);
    if (lVar10 != 0) {
      uVar7 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar10 + 0x18));
      *(undefined8 *)(lVar6 + 0xa8) = uVar7;
      if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c898 + 0x18) + 0xc0) + 0x38)
        )();
        return;
      }
      auVar19 = func_0x00f78af4();
      puVar9 = auVar19._8_8_;
      puVar8 = auVar19._0_8_;
      uVar18 = puVar9[1];
      uVar7 = *puVar9;
      puVar8[2] = puVar9[2];
      puVar8[1] = uVar18;
      *puVar8 = uVar7;
      return;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4b43 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d23df0);
    func_0x00f78a20(0x3d6cb40);
    func_0x00f78a20(0x3d6cbd0);
    func_0x00f78a20(0x3d706f8);
    func_0x00f78a20(0x3d729a8);
    func_0x00f78a20(0x3d6cb00);
    func_0x00f78a20(0x3d69870);
    bRam0000000003eb4b43 = 1;
  }
  uVar3 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('NothingToBronze')*/ uRam0000000003d706f8,0);
  **(undefined4 **)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) = uVar3;
  uVar3 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('BronzeToSilver')*/ uRam0000000003d69870,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 4) = uVar3;
  uVar3 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('SilverToGold')*/ uRam0000000003d729a8,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 8) = uVar3;
  if (((*(byte *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_9_CharacterProgress')*/ uRam0000000003d6cbd0,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x10) = uVar7;
  uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_10_CharacterProgress_2')*/ uRam0000000003d6cb00,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18) = uVar7;
  uVar7 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_17_DailyChallenges')*/ uRam0000000003d6cb40,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x20) = uVar7;
  return;
}



// ============================================================
// RVA: 0x14c7924 | Atlas.UI.Screens.PostArcadeScreen.PlayAgainPressed
// ============================================================

void Atlas_UI_Screens_PostArcadeScreen__PlayAgainPressed(undefined8 param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  code *pcVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  long lStack_58;
  
  if ((bRam0000000003eb4b40 & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    func_0x00f78a20(0x3d41240);
    func_0x00f78a20(0x3d41248);
    bRam0000000003eb4b40 = 1;
  }
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0xc0) != 0)) {
    /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(*(long *)(lVar6 + 0xc0),0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41248);
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar6 + 0xb8),6,0,0);
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41240);
      if (lVar6 != 0) {
        lVar6 = *(long *)(lVar6 + 0x50);
        if (lVar6 == 0) {
          return;
        }
        uVar8 = 0;
        lStack_58 = lVar6;
        lVar10 = *(long *)(lVar6 + 0x68);
        if (lVar10 == 0) {
          plVar17 = &lStack_58;
          lVar16 = 1;
        }
        else {
          lVar16 = *(long *)(lVar10 + 0x18);
          if (lVar16 == 0) {
            return;
          }
          plVar17 = (long *)(lVar10 + 0x20);
        }
        lVar10 = 0;
        do {
          lVar11 = plVar17[lVar10];
          pcVar15 = *(code **)(lVar11 + 0x10);
          plVar1 = *(long **)(lVar11 + 0x20);
          lVar11 = *(long *)(lVar11 + 0x28);
          if (*(short *)(lVar11 + 0x48) == -1) {
            func_0x00f78ad8(lVar11,uVar8);
          }
          iVar4 = func_0x00f78a4c(lVar11);
          if (iVar4 == 0) {
            if ((((plVar1 == (long *)0x0) || (*(short *)(lVar11 + 0x48) == -1)) ||
                ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar6 + 0x18) == 0))
            goto code_r0x01562a40;
            iVar4 = func_0x00f78a44(lVar11);
            iVar5 = func_0x00f78ec0(lVar11);
            if (iVar4 == 0) {
              uVar2 = *(ushort *)(lVar11 + 0x48);
              if (iVar5 == 0) {
                lVar11 = *plVar1 + (ulong)uVar2 * 0x10;
                (**(code **)(lVar11 + 0x138))(plVar1,*(undefined8 *)(lVar11 + 0x140));
                uVar8 = extraout_x1_01;
                goto code_r0x01562a4c;
              }
              lVar11 = func_0x00f78a48(lVar11);
              lVar12 = *plVar1;
              uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar11) {
                    puVar7 = (undefined8 *)
                             (lVar12 + (long)(int)(*piVar14 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x01562b10;
                  }
                  piVar14 = piVar14 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar11,(ulong)uVar2);
code_r0x01562b10:
              pcVar15 = (code *)*puVar7;
              puVar7 = (undefined8 *)puVar7[1];
            }
            else {
              if (iVar5 == 0) {
                uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar11 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar12 = *plVar1;
                uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)(lVar11 + 0x18)) {
                      lVar12 = lVar12 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar11 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x01562ae8;
                    }
                    piVar14 = piVar14 + 4;
                    uVar13 = uVar13 - 1;
                  } while (uVar13 != 0);
                }
                lVar12 = func_0x00fac1f0(plVar1);
code_r0x01562ae8:
                uVar8 = *(undefined8 *)(lVar12 + 8);
              }
              puVar7 = (undefined8 *)func_0x00f78acc(uVar8,lVar11);
              pcVar15 = (code *)*puVar7;
            }
            (*pcVar15)(plVar1,puVar7);
            uVar8 = extraout_x1_02;
          }
          else if (*(char *)(lVar11 + 0x4a) == '\0') {
            (*pcVar15)(lVar11);
            uVar8 = extraout_x1;
          }
          else {
code_r0x01562a40:
            (*pcVar15)(plVar1,lVar11);
            uVar8 = extraout_x1_00;
          }
code_r0x01562a4c:
          lVar10 = lVar10 + 1;
          if (lVar10 == lVar16) {
            return;
          }
        } while( true );
      }
    }
  }
  lVar6 = func_0x00f78af4();
  lStack_58 = 0x3d41238;
  if ((bRam0000000003eb4b42 & 1) == 0) {
    func_0x00f78a20(0x3d2c898);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4b42 = 1;
  }
  uVar8 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar8,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar10 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar8,0);
  if (lVar10 != 0) {
    uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar10 + 0x18));
    *(undefined8 *)(lVar6 + 0xa0) = uVar8;
    uVar8 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar10 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar8,0);
    if (lVar10 != 0) {
      uVar8 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar10 + 0x18));
      *(undefined8 *)(lVar6 + 0xa8) = uVar8;
      if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c898 + 0x18) + 0xc0) + 0x38)
        )();
        return;
      }
      auVar19 = func_0x00f78af4();
      puVar9 = auVar19._8_8_;
      puVar7 = auVar19._0_8_;
      uVar18 = puVar9[1];
      uVar8 = *puVar9;
      puVar7[2] = puVar9[2];
      puVar7[1] = uVar18;
      *puVar7 = uVar8;
      return;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4b43 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d23df0);
    func_0x00f78a20(0x3d6cb40);
    func_0x00f78a20(0x3d6cbd0);
    func_0x00f78a20(0x3d706f8);
    func_0x00f78a20(0x3d729a8);
    func_0x00f78a20(0x3d6cb00);
    func_0x00f78a20(0x3d69870);
    bRam0000000003eb4b43 = 1;
  }
  uVar3 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('NothingToBronze')*/ uRam0000000003d706f8,0);
  **(undefined4 **)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) = uVar3;
  uVar3 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('BronzeToSilver')*/ uRam0000000003d69870,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 4) = uVar3;
  uVar3 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('SilverToGold')*/ uRam0000000003d729a8,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 8) = uVar3;
  if (((*(byte *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_9_CharacterProgress')*/ uRam0000000003d6cbd0,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x10) = uVar8;
  uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_10_CharacterProgress_2')*/ uRam0000000003d6cb00,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18) = uVar8;
  uVar8 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_17_DailyChallenges')*/ uRam0000000003d6cb40,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x20) = uVar8;
  return;
}



// ============================================================
// RVA: 0x14c7a10 | Atlas.UI.Screens.PostArcadeScreen..ctor
// ============================================================

void Atlas_UI_Screens_PostArcadeScreen___ctor(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4b42 & 1) == 0) {
    func_0x00f78a20(0x3d2c898);
    func_0x00f78a20(0x3d215e0);
    func_0x00f78a20(0x3d1f100);
    func_0x00f78a20(0x3d1a510);
    func_0x00f78a20(0x3d25458);
    bRam0000000003eb4b42 = 1;
  }
  uVar2 = /*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510;
  if (((*(ushort *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Type_TypeInfo*/ lRam0000000003d25458 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(uVar2,0);
  if (((*(ushort *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Enum_TypeInfo*/ lRam0000000003d215e0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar3 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar2,0);
  if (lVar3 != 0) {
    uVar2 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar3 + 0x18));
    *(undefined8 *)(param_1 + 0xa0) = uVar2;
    uVar2 = /*System.Type$$GetTypeFromHandle*/ func_0x02a00598(/*Atlas.Definitions.ArcadeEventDefinition.Medal_var*/ uRam0000000003d1a510,0);
    lVar3 = /*System.Enum$$GetNames*/ func_0x02ac6658(uVar2,0);
    if (lVar3 != 0) {
      uVar2 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,*(undefined4 *)(lVar3 + 0x18));
      *(undefined8 *)(param_1 + 0xa8) = uVar2;
      if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c898 + 0x18) + 0xc0) + 0x38)
        )();
        return;
      }
      auVar7 = func_0x00f78af4();
      puVar5 = auVar7._8_8_;
      puVar4 = auVar7._0_8_;
      uVar6 = puVar5[1];
      uVar2 = *puVar5;
      puVar4[2] = puVar5[2];
      puVar4[1] = uVar6;
      *puVar4 = uVar2;
      return;
    }
  }
  func_0x00f78af4();
  if ((bRam0000000003eb4b43 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d23df0);
    func_0x00f78a20(0x3d6cb40);
    func_0x00f78a20(0x3d6cbd0);
    func_0x00f78a20(0x3d706f8);
    func_0x00f78a20(0x3d729a8);
    func_0x00f78a20(0x3d6cb00);
    func_0x00f78a20(0x3d69870);
    bRam0000000003eb4b43 = 1;
  }
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('NothingToBronze')*/ uRam0000000003d706f8,0);
  **(undefined4 **)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('BronzeToSilver')*/ uRam0000000003d69870,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 4) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('SilverToGold')*/ uRam0000000003d729a8,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 8) = uVar1;
  if (((*(byte *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_9_CharacterProgress')*/ uRam0000000003d6cbd0,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x10) = uVar2;
  uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_10_CharacterProgress_2')*/ uRam0000000003d6cb00,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18) = uVar2;
  uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_17_DailyChallenges')*/ uRam0000000003d6cb40,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x20) = uVar2;
  return;
}



// ============================================================
// RVA: 0x14c7b54 | Atlas.UI.Screens.PostArcadeScreen..cctor
// ============================================================

void Atlas_UI_Screens_PostArcadeScreen___cctor(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb4b43 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d23df0);
    func_0x00f78a20(0x3d6cb40);
    func_0x00f78a20(0x3d6cbd0);
    func_0x00f78a20(0x3d706f8);
    func_0x00f78a20(0x3d729a8);
    func_0x00f78a20(0x3d6cb00);
    func_0x00f78a20(0x3d69870);
    bRam0000000003eb4b43 = 1;
  }
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('NothingToBronze')*/ uRam0000000003d706f8,0);
  **(undefined4 **)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('BronzeToSilver')*/ uRam0000000003d69870,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 4) = uVar1;
  uVar1 = /*UnityEngine.Animator$$StringToHash*/ func_0x03210a58(/*STR('SilverToGold')*/ uRam0000000003d729a8,0);
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 8) = uVar1;
  if (((*(byte *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_9_CharacterProgress')*/ uRam0000000003d6cbd0,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x10) = uVar2;
  uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_10_CharacterProgress_2')*/ uRam0000000003d6cb00,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x18) = uVar2;
  uVar2 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_17_DailyChallenges')*/ uRam0000000003d6cb40,0);
  *(undefined8 *)(*(long *)(/*Atlas.UI.Screens.PostArcadeScreen_TypeInfo*/ lRam0000000003d23df0 + 0xb8) + 0x20) = uVar2;
  return;
}



// ============================================================
// RVA: 0x14c7ce0 | Atlas.UI.Screens.PostArcadeScreen.<StartAward>b__54_3
// ============================================================

undefined8 Atlas_UI_Screens_PostArcadeScreen___StartAward_b__54_3(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam0000000003eb4b44 & 1) == 0) {
    func_0x00f78a20(0x3d41238);
    bRam0000000003eb4b44 = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41238);
  if ((lVar1 != 0) && (lVar3 = *(long *)(param_1 + 0xa8), lVar3 != 0)) {
    if (*(uint *)(lVar3 + 0x18) <= *(uint *)(param_1 + 0xbc)) goto LAB_014c7d88;
    lVar1 = *(long *)(lVar1 + 0xb0);
    /*Atlas.UI.SlantFillBar$$CalculateProgress*/ func_0x014fce2c(*(undefined4 *)(lVar3 + (long)(int)*(uint *)(param_1 + 0xbc) * 4 + 0x20),
                    *(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xc4),0);
    if (lVar1 != 0) {
      uVar2 = /*Atlas.UI.SlantFillBar$$SetTargetProgress*/ func_0x014fce4c(lVar1,0,0);
      *(undefined1 *)(param_1 + 0x128) = 0;
      return uVar2;
    }
  }
  func_0x00f78af4();
LAB_014c7d88:
  uVar2 = func_0x00f78b24();
  lVar1 = func_0x00f78ac0(uVar2,0);
  if ((*(long *)(lVar1 + 0x80) != 0) &&
     (lVar3 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(lVar1 + 0x80),0,0),
     lVar3 != 0)) {
    uVar2 = Atlas_Gameplay_Kart_KartFEAnimator__TriggerFERankUp(lVar3,0);
    *(undefined1 *)(lVar1 + 0x9c) = 1;
    return uVar2;
  }
  lVar1 = func_0x00f78af4();
  return *(undefined8 *)(lVar1 + 0x68);
}



// ============================================================
// RVA: 0x14c7d94 | Atlas.UI.Screens.PostArcadeScreen.<OnUpdate>b__56_0
// ============================================================

undefined8 Atlas_UI_Screens_PostArcadeScreen___OnUpdate_b__56_0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x80) != 0) &&
     (lVar1 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(param_1 + 0x80),0,0),
     lVar1 != 0)) {
    uVar2 = Atlas_Gameplay_Kart_KartFEAnimator__TriggerFERankUp(lVar1,0);
    *(undefined1 *)(param_1 + 0x9c) = 1;
    return uVar2;
  }
  lVar1 = func_0x00f78af4();
  return *(undefined8 *)(lVar1 + 0x68);
}



