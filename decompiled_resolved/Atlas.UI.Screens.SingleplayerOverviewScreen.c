// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.SingleplayerOverviewScreen

// ============================================================
// RVA: 0x14fa390 | Atlas.UI.Screens.SingleplayerOverviewScreen.OnBeforeEnter
// ============================================================

void Atlas_UI_Screens_SingleplayerOverviewScreen__OnBeforeEnter(long param_1)

{
  int iVar1;
  long *plVar2;
  bool bVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  long lVar23;
  byte bVar24;
  ulong uVar25;
  long lVar26;
  undefined8 uVar27;
  int iVar28;
  float fVar29;
  undefined8 uStack_100;
  int iStack_dc;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  if ((bRam0000000003eb4cc2 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d2c970);
    func_0x00f78a20(0x3d2c978);
    func_0x00f78a20(0x3d534e8);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2dbb8);
    func_0x00f78a20(0x3d2ecf8);
    func_0x00f78a20(0x3d55b40);
    func_0x00f78a20(0x3d55d78);
    func_0x00f78a20(0x3d55ec0);
    func_0x00f78a20(0x3d337c8);
    func_0x00f78a20(0x3d337d0);
    func_0x00f78a20(0x3d337d8);
    func_0x00f78a20(0x3d35a98);
    func_0x00f78a20(0x3d1cd48);
    func_0x00f78a20(0x3d57260);
    func_0x00f78a20(0x3d57280);
    func_0x00f78a20(0x3d3d9b8);
    func_0x00f78a20(0x3d3dc70);
    func_0x00f78a20(0x3d3d9c8);
    func_0x00f78a20(0x3d3d9d0);
    func_0x00f78a20(0x3d3d9d8);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d24a88);
    func_0x00f78a20(0x3d64300);
    func_0x00f78a20(0x3d64308);
    func_0x00f78a20(0x3d64310);
    func_0x00f78a20(0x3d64318);
    func_0x00f78a20(0x3d28f00);
    func_0x00f78a20(0x3d28ef8);
    func_0x00f78a20(0x3d25578);
    func_0x00f78a20(0x3d41310);
    func_0x00f78a20(0x3d41318);
    func_0x00f78a20(0x3d41320);
    func_0x00f78a20(0x3d25608);
    func_0x00f78a20(0x3d6f158);
    bRam0000000003eb4cc2 = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41320);
  if (lVar11 != 0) {
    lVar23 = *(long *)(lVar11 + 0x50);
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41320);
    if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x20), lVar11 != 0)) {
      lVar26 = *(long *)(lVar11 + 0x10);
      if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (lVar26 != 0) {
        lVar26 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar26,**(undefined8 **)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xb8),
                                 uRam0000000003d57280);
        lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41320);
        if ((lVar12 != 0) && (*(long *)(lVar12 + 0xb0) != 0)) {
          iVar6 = Atlas_FrontEnd_FTUEManager__IsStageUnlockedButNotComplete
                            (*(long *)(lVar12 + 0xb0),lVar26,0);
          if (iVar6 != 0) {
            if ((lVar26 == 0) || (*(long *)(lVar26 + 0x58) == 0)) goto LAB_014fb76c;
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_90,*(long *)(lVar26 + 0x58),uRam0000000003d3dc70);
            uStack_b0 = CONCAT44(uStack_8c,uStack_90);
            uStack_a8 = uStack_88;
            uStack_a0 = CONCAT44(uStack_7c,uStack_80);
            while (uVar13 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_b0,uRam0000000003d337d0), uVar27 = uStack_a0,
                  (uVar13 & 1) != 0) {
              lVar26 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41320);
              if (lVar26 == 0) goto LAB_014fb77c;
              if (*(long *)(lVar26 + 0x98) == 0) {
                func_0x00f78af4();
                goto code_r0x014fb788;
              }
              /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$QueueModal*/ func_0x025dfbac(*(long *)(lVar26 + 0x98),uVar27,uRam0000000003d3e188);
            }
            /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_b0,uRam0000000003d337c8);
          }
          /*Atlas.UI.Screens.SingleplayerOverviewScreen$$SetupArcadePanel*/ func_0x014fb7dc(param_1,lVar11);
          lVar26 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41318);
          if (lVar26 != 0) {
            uVar27 = *(undefined8 *)(lVar26 + 0x18);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            bVar5 = /*Core.Definitions.DefinitionID$$op_Inequality*/ func_0x0164530c(uVar27,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
            lVar26 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41310);
            if ((lVar26 != 0) && (lVar26 = *(long *)(lVar26 + 0x68), lVar26 != 0)) {
              if (*(int *)(lVar26 + 0x18) < 1) {
                uStack_100 = 0;
              }
              else {
                uStack_100 = 0;
                iStack_dc = 0;
                uVar13 = 0;
                do {
                  lVar12 = func_0x00f78aec(/*Atlas.UI.Screens.SingleplayerOverviewScreen.<>c__DisplayClass10_0_TypeInfo*/ uRam0000000003d28f00);
                  /*Atlas.UI.Screens.SingleplayerOverviewScreen.<>c__DisplayClass10_0$$.ctor*/ func_0x0156a8cc(lVar12,0);
                  if (lVar12 == 0) goto LAB_014fb76c;
                  *(long *)(lVar12 + 0x20) = param_1;
                  if (*(uint *)(lVar26 + 0x18) <= uVar13) goto code_r0x014fb770;
                  lVar14 = lVar26 + uVar13 * 0x10;
                  uVar27 = *(undefined8 *)(lVar14 + 0x28);
                  *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar14 + 0x20);
                  *(undefined8 *)(lVar12 + 0x18) = uVar27;
                  if (*(long *)(lVar11 + 0x10) == 0) goto LAB_014fb76c;
                  lVar14 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(*(long *)(lVar11 + 0x10),uVar27,uRam0000000003d57260);
                  lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41320);
                  if ((lVar15 == 0) || (*(long *)(lVar15 + 0x20) == 0)) goto LAB_014fb76c;
                  uVar27 = /*Atlas.Definitions.AtlasDefinitions$$IsContentValid*/ func_0x01467384(*(long *)(lVar15 + 0x20),lVar14,0);
                  if ((*(long *)(lVar12 + 0x10) == 0) ||
                     (lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar12 + 0x10),0), lVar15 == 0))
                  goto LAB_014fb76c;
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar15,uVar27,0);
                  if ((int)uVar27 != 0) {
                    if ((*(long *)(lVar12 + 0x10) == 0) ||
                       (lVar15 = *(long *)(*(long *)(lVar12 + 0x10) + 0x28), lVar15 == 0))
                    goto LAB_014fb76c;
                    uVar27 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar15,0);
                    Atlas_UI_Screens_AtlasScreen_GameOutroScreenBehaviour__GameOutroScreen_TransitionData___ReLayoutLayoutAndContentSizeFitters
                              (param_1,uVar27,uRam0000000003d2c970);
                    if (lVar23 == 0) goto LAB_014fb76c;
                    uVar7 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar23,*(undefined8 *)(lVar12 + 0x18),0);
                    uVar27 = /*Atlas.Stats.UnlockManager$$GetChallengesCompletedCountForCampaign*/ func_0x01520dfc(lVar23,*(undefined8 *)(lVar12 + 0x18),0);
                    uVar16 = /*Atlas.Definitions.AtlasDefinitions$$GetChallengeCountForCampaign*/ func_0x01468d24(lVar11,*(undefined8 *)(lVar12 + 0x18),0);
                    if ((*(long *)(lVar12 + 0x10) == 0) ||
                       (lVar15 = *(long *)(*(long *)(lVar12 + 0x10) + 0x20), lVar15 == 0))
                    goto LAB_014fb76c;
                    /*Atlas.UI.UIFlagsBehaviour$$Set*/ func_0x0151aba8(lVar15,uVar27,uVar16,0);
                    iVar6 = (int)uVar27;
                    iVar28 = (int)uVar16;
                    if ((iVar28 <= iVar6) && (0 < iVar28)) {
                      lVar15 = *(long *)(lVar12 + 0x10);
                      if ((lVar15 == 0) ||
                         (plVar17 = *(long **)(lVar15 + 0x68), plVar17 == (long *)0x0))
                      goto LAB_014fb76c;
                      (**(code **)(*plVar17 + 0x2a8))
                                (*(undefined4 *)(lVar15 + 0x70),*(undefined4 *)(lVar15 + 0x74),
                                 *(undefined4 *)(lVar15 + 0x78),*(undefined4 *)(lVar15 + 0x7c),
                                 plVar17,*(undefined8 *)(*plVar17 + 0x2b0));
                    }
                    if (uVar7 == 0) {
                      if (*(long *)(lVar12 + 0x10) == 0) goto LAB_014fb76c;
                      lVar14 = *(long *)(*(long *)(lVar12 + 0x10) + 0x18);
                      uVar27 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                      /*System.Action$$.ctor*/ func_0x02924c80(uVar27,lVar12,uRam0000000003d64310,0);
                      if (lVar14 == 0) goto LAB_014fb76c;
                      /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar14,uVar27,0);
                      /*Atlas.UI.Screens.SingleplayerOverviewScreen$$LockButton*/ func_0x014fc0f8(param_1,*(undefined8 *)(lVar12 + 0x10));
                      uVar27 = 0;
                    }
                    else {
                      if ((lVar14 == 0) || (lVar15 = *(long *)(lVar14 + 0x50), lVar15 == 0))
                      goto LAB_014fb76c;
                      if ((int)*(ulong *)(lVar15 + 0x18) < 1) {
                        bVar3 = false;
                      }
                      else {
                        uVar25 = 0;
                        uVar20 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
                        puVar21 = (undefined8 *)(lVar15 + 0x20);
                        do {
                          if (uVar20 <= uVar25) goto code_r0x014fb770;
                          uVar20 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(lVar23,*puVar21,0);
                          if ((uVar20 & 1) != 0) {
                            bVar3 = true;
                            goto code_r0x014fa9ec;
                          }
                          uVar25 = uVar25 + 1;
                          uVar20 = (ulong)*(uint *)(lVar15 + 0x18);
                          puVar21 = puVar21 + 2;
                        } while ((long)uVar25 < (long)(int)*(uint *)(lVar15 + 0x18));
                        bVar3 = false;
                      }
code_r0x014fa9ec:
                      if (*(long *)(lVar12 + 0x10) == 0) goto LAB_014fb76c;
                      lVar15 = *(long *)(*(long *)(lVar12 + 0x10) + 0x18);
                      uVar27 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                      /*System.Action$$.ctor*/ func_0x02924c80(uVar27,lVar12,uRam0000000003d64318,0);
                      if (lVar15 == 0) goto LAB_014fb76c;
                      /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar15,uVar27,0);
                      iVar1 = iStack_dc;
                      if (iVar28 <= iVar6) {
                        iVar1 = uStack_100._4_4_;
                      }
                      uStack_100 = CONCAT44(iVar1,(undefined4)uStack_100);
                      if (*(long *)(lVar12 + 0x10) == 0) goto LAB_014fb76c;
                      lVar15 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(*(long *)(lVar12 + 0x10),uRam0000000003d534e8);
                      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      iVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar15,0,0);
                      if (iVar8 != 0) {
                        /*Atlas.UI.Screens.SingleplayerOverviewScreen$$SetupLeagueBadgeRepresentation*/ func_0x014fbd14(param_1,lVar15,1);
                        lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41320);
                        if ((lVar18 == 0) || (*(long *)(lVar18 + 0xd0) == 0)) goto LAB_014fb76c;
                        uStack_b8 = *(undefined8 *)(*(long *)(lVar18 + 0xd0) + 0x38);
                        uVar9 = /*System.DateTime$$get_DayOfWeek*/ func_0x02a8e2a0(&uStack_b8,0);
                        bVar24 = 0;
                        while (uVar9 = uVar9 - 1, -1 < (int)uVar9) {
                          lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41320);
                          if ((((lVar18 == 0) || (*(long *)(lVar18 + 0xe8) == 0)) ||
                              (lVar18 = *(long *)(*(long *)(lVar18 + 0xe8) + 0x50), lVar18 == 0)) ||
                             (lVar18 = *(long *)(lVar18 + 0x10), lVar18 == 0)) goto LAB_014fb76c;
                          if (*(uint *)(lVar18 + 0x18) <= uVar9) goto code_r0x014fb770;
                          bVar24 = 0xb < *(int *)(lVar18 + (ulong)uVar9 * 4 + 0x20) | bVar24;
                        }
                        if (((lVar15 == 0) || (*(long *)(lVar15 + 0x20) == 0)) ||
                           (lVar18 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(*(long *)(lVar15 + 0x20),0), lVar18 == 0))
                        goto LAB_014fb76c;
                        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar18,bVar24,0);
                        uVar27 = /*STR('LEAGUE_NEW_EVENT_TAG')*/ uRam0000000003d6f158;
                        if (bVar24 != 0) {
                          lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41320);
                          if ((lVar18 == 0) || (*(long *)(lVar18 + 0x88) == 0)) goto LAB_014fb76c;
                          uVar27 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar18 + 0x88),uVar27,0);
                          if (*(long *)(lVar15 + 0x28) == 0) goto LAB_014fb76c;
                          /*TMPro.TMP_Text$$SetText*/ func_0x031b3d44(*(long *)(lVar15 + 0x28),uVar27,1,0);
                        }
                      }
                      uVar27 = *(undefined8 *)(lVar12 + 0x18);
                      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41318);
                      if (lVar15 == 0) goto LAB_014fb76c;
                      uVar16 = *(undefined8 *)(lVar15 + 0x18);
                      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      iVar8 = /*Core.Definitions.DefinitionID$$op_Equality*/ func_0x016452f0(uVar27,uVar16,0);
                      if (iVar8 == 0) {
                        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41320);
                        if ((lVar15 == 0) || (*(long *)(lVar15 + 0x50) == 0)) goto LAB_014fb76c;
                        iVar8 = /*Atlas.Stats.UnlockManager$$IsUnlockUnseen*/ func_0x015217ac(*(long *)(lVar15 + 0x50),
                                                *(undefined8 *)(lVar12 + 0x18),0);
                        if (iVar8 != 0) {
                          /*Atlas.UI.Screens.SingleplayerOverviewScreen$$SetLockedMaterial*/ func_0x014fbf70(param_1,*(undefined8 *)(lVar12 + 0x10));
                          if (*(long *)(lVar12 + 0x10) != 0) {
                            lVar15 = *(long *)(*(long *)(lVar12 + 0x10) + 0x18);
                            if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            if (lVar15 != 0) {
                              /*Atlas.UI.UIAtlasButton$$PlayAnimation*/ func_0x01515608(lVar15,*(undefined4 *)
                                                      (*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 4),0
                                             );
                              uVar22 = *(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 8);
                              if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0x132) >> 10 & 1) != 0) &&
                                 (*(int *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xe0) == 0)) {
                                func_0x00f78ad0();
                              }
                              lVar15 = *(long *)(*(long *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xb8) + 0x10);
                              if (lVar15 != 0) {
                                uVar10 = /*System.Collections.Generic.Dictionary<int, uint>$$get_Item*/ func_0x01e922d0(lVar15,*(undefined4 *)
                                                                 (*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 +
                                                                           0xb8) + 8),
                                                         uRam0000000003d2ecf8);
                                if ((*(long *)(lVar12 + 0x10) != 0) &&
                                   (*(long *)(param_1 + 0x70) != 0)) {
                                  uStack_90 = *(undefined4 *)(lVar14 + 0x9c);
                                  uStack_88 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x18);
                                  uStack_7c = 0;
                                  uStack_8c = uVar10;
                                  uStack_80 = uVar22;
                                  /*System.Collections.Generic.List<SingleplayerOverviewScreen.QueuedAnim>$$Add*/ func_0x0259a238(*(long *)(param_1 + 0x70),&uStack_90,
                                                  uRam0000000003d3d9b8);
                                  *(undefined1 *)(param_1 + 0x78) = 1;
                                  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41320);
                                  if ((lVar14 != 0) && (*(long *)(lVar14 + 0x50) != 0)) {
                                    /*Atlas.Stats.UnlockManager$$MarkUnlockSeen*/ func_0x015226dc(*(long *)(lVar14 + 0x50),
                                                    *(undefined8 *)(lVar12 + 0x18),0);
                                    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41320);
                                    if ((lVar14 != 0) &&
                                       (lVar14 = *(long *)(lVar14 + 0x48), lVar14 != 0)) {
                                      if (*(float *)(lVar14 + 0x54) == 0.0) {
                                        fVar29 = (float)/*UnityEngine.Time$$get_time*/ func_0x03272b70(0);
                                        uVar27 = 0;
                                        *(float *)(lVar14 + 0x54) = fVar29 + 5.0;
                                      }
                                      else {
                                        uVar27 = 0;
                                      }
                                      goto code_r0x014fae70;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          goto LAB_014fb76c;
                        }
                        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41320);
                        if ((lVar15 == 0) || (*(long *)(lVar15 + 0x50) == 0)) goto LAB_014fb76c;
                        iVar8 = /*Atlas.Stats.UnlockManager$$HasNextCampaignBeenUnlockedAndNotSeenAndIsValidContent*/ func_0x015223e4(*(long *)(lVar15 + 0x50),lVar14,0);
                        if (iVar8 != 0) {
                          if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar22 = *(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 0xc);
                          if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          lVar15 = *(long *)(*(long *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xb8) + 0x10);
                          if (lVar15 != 0) {
                            uVar10 = *(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 0xc);
                            goto code_r0x014fae1c;
                          }
                          goto LAB_014fb76c;
                        }
                        if (bVar3 || (bVar5 & iVar6 < iVar28) != 0) {
                          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
                          if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          uVar22 = *(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 0x14);
                          if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          lVar15 = *(long *)(*(long *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xb8) + 0x10);
                          if (lVar15 != 0) {
                            uVar10 = /*System.Collections.Generic.Dictionary<int, uint>$$get_Item*/ func_0x01e922d0(lVar15,*(undefined4 *)
                                                             (*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8)
                                                             + 0x14),uRam0000000003d2ecf8);
                            if ((*(long *)(lVar12 + 0x10) != 0) && (*(long *)(param_1 + 0x70) != 0))
                            {
                              uStack_90 = *(undefined4 *)(lVar14 + 0x9c);
                              uStack_88 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x18);
                              uStack_7c = 0;
                              uStack_8c = uVar10;
                              uStack_80 = uVar22;
                              /*System.Collections.Generic.List<SingleplayerOverviewScreen.QueuedAnim>$$Add*/ func_0x0259a238(*(long *)(param_1 + 0x70),&uStack_90,
                                              uRam0000000003d3d9b8);
                              if (*(long *)(lVar12 + 0x10) != 0) {
                                Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
                                          (param_1,*(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x18),
                                           uRam0000000003d2c978);
                                uVar27 = 1;
                                bVar5 = 0;
                                uStack_100 = CONCAT44(iVar1,1);
                                goto code_r0x014fae70;
                              }
                            }
                          }
                          goto LAB_014fb76c;
                        }
                      }
                      else {
                        if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        uVar22 = *(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 0x10);
                        if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0x132) >> 10 & 1) != 0) &&
                           (*(int *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xe0) == 0)) {
                          func_0x00f78ad0();
                        }
                        lVar15 = *(long *)(*(long *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xb8) + 0x10);
                        if (lVar15 == 0) goto LAB_014fb76c;
                        uVar10 = *(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 0x10);
code_r0x014fae1c:
                        uVar10 = /*System.Collections.Generic.Dictionary<int, uint>$$get_Item*/ func_0x01e922d0(lVar15,uVar10,uRam0000000003d2ecf8);
                        if ((*(long *)(lVar12 + 0x10) == 0) || (*(long *)(param_1 + 0x70) == 0))
                        goto LAB_014fb76c;
                        uStack_90 = *(undefined4 *)(lVar14 + 0x9c);
                        uStack_88 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x18);
                        uStack_7c = 0;
                        uStack_8c = uVar10;
                        uStack_80 = uVar22;
                        /*System.Collections.Generic.List<SingleplayerOverviewScreen.QueuedAnim>$$Add*/ func_0x0259a238(*(long *)(param_1 + 0x70),&uStack_90,uRam0000000003d3d9b8);
                      }
                      uVar27 = 1;
                    }
code_r0x014fae70:
                    lVar14 = *(long *)(lVar12 + 0x10);
                    if (lVar14 == 0) goto LAB_014fb76c;
                    lVar15 = *(long *)(lVar14 + 0x68);
                    if (lVar15 != 0) {
                      if ((lVar15 == 0) || (lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar15,0), lVar14 == 0))
                      goto LAB_014fb76c;
                      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar14,uVar27,0);
                      lVar14 = *(long *)(lVar12 + 0x10);
                      if (lVar14 == 0) goto LAB_014fb76c;
                    }
                    lVar12 = *(long *)(lVar14 + 0x60);
                    if (lVar12 == 0) goto LAB_014fb76c;
                    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
                      uVar25 = 0;
                      uVar20 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
                      puVar21 = (undefined8 *)(lVar12 + 0x38);
                      do {
                        if (uVar20 <= uVar25) goto code_r0x014fb770;
                        plVar17 = (long *)puVar21[-3];
                        plVar2 = (long *)puVar21[-2];
                        lVar14 = puVar21[-1];
                        uVar27 = *puVar21;
                        uVar20 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(uVar27,0);
                        if ((uVar20 & 1) == 0) {
                          uVar20 = /*Atlas.Stats.UnlockManager$$IsUnlocked*/ func_0x0151fea0(lVar23,uVar27,0);
                          lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41320);
                          if ((lVar15 == 0) || (*(long *)(lVar15 + 0x20) == 0)) goto LAB_014fb76c;
                          /*Atlas.Definitions.AtlasDefinitions$$TryGetCharacterKartOrAnntennaDefinition*/ func_0x0146865c(*(long *)(lVar15 + 0x20),uVar27,&uStack_c0,0);
                          uVar27 = uStack_c0;
                          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar27,0,0);
                          if (iVar6 != 0) {
                            lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41320);
                            if ((lVar15 == 0) || (*(long *)(lVar15 + 0xd0) == 0)) goto LAB_014fb76c;
                            uVar19 = /*Atlas.Stats.SeasonsManager$$IsContentAvailable*/ func_0x014f2948(*(long *)(lVar15 + 0xd0),uStack_c0);
                            if ((uVar19 & 1) == 0) {
                              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                                func_0x00f78ad0();
                              }
                              iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar14,0,0);
                              if (iVar6 != 0) {
                                if ((lVar14 == 0) ||
                                   (lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar14,0), lVar14 == 0))
                                goto LAB_014fb76c;
                                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar14,1,0);
                              }
                              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                                func_0x00f78ad0();
                              }
                              iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar2,0,0);
                              if (iVar6 != 0) {
                                lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41310);
                                if ((lVar14 == 0) || (plVar2 == (long *)0x0)) goto LAB_014fb76c;
                                (**(code **)(*plVar2 + 0x348))
                                          (plVar2,*(undefined8 *)(lVar14 + 0x98),
                                           *(undefined8 *)(*plVar2 + 0x350));
                                lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41310);
                                if (lVar14 == 0) goto LAB_014fb76c;
                                (**(code **)(*plVar2 + 0x2a8))
                                          (*(undefined4 *)(lVar14 + 0xa0),
                                           *(undefined4 *)(lVar14 + 0xa4),
                                           *(undefined4 *)(lVar14 + 0xa8),
                                           *(undefined4 *)(lVar14 + 0xac),plVar2,
                                           *(undefined8 *)(*plVar2 + 0x2b0));
                              }
                              if ((plVar17 != (long *)0x0) &&
                                 (lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar17,0), lVar14 != 0)) {
                                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar14,0,0);
                                goto code_r0x014faef4;
                              }
                              goto LAB_014fb76c;
                            }
                          }
                          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                            func_0x00f78ad0();
                          }
                          iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar14,0,0);
                          if (iVar6 != 0) {
                            if ((lVar14 == 0) || (lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar14,0), lVar14 == 0))
                            goto LAB_014fb76c;
                            /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar14,0,0);
                          }
                          if ((plVar17 == (long *)0x0) ||
                             (lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(plVar17,0), lVar14 == 0)) goto LAB_014fb76c;
                          /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar14,1,0);
                          if ((uVar7 & 1) == 0) {
                            lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41310);
                            if (lVar14 == 0) goto LAB_014fb76c;
                            (**(code **)(*plVar17 + 0x348))
                                      (plVar17,*(undefined8 *)(lVar14 + 0x70),
                                       *(undefined8 *)(*plVar17 + 0x350));
                            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                              func_0x00f78ad0();
                            }
                            iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(plVar2,0,0);
                            if (iVar6 != 0) {
                              lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41310);
                              if ((lVar14 == 0) || (plVar2 == (long *)0x0)) goto LAB_014fb76c;
                              (**(code **)(*plVar2 + 0x348))
                                        (plVar2,*(undefined8 *)(lVar14 + 0x70),
                                         *(undefined8 *)(*plVar2 + 0x350));
                            }
                          }
                          else if ((uVar20 & 1) == 0) {
                            lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41310);
                            if (lVar14 == 0) goto LAB_014fb76c;
                            (**(code **)(*plVar17 + 0x348))
                                      (plVar17,*(undefined8 *)(lVar14 + 0x98),
                                       *(undefined8 *)(*plVar17 + 0x350));
                            lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41310);
                            if (lVar14 == 0) goto LAB_014fb76c;
                            (**(code **)(*plVar17 + 0x2a8))
                                      (*(undefined4 *)(lVar14 + 0xa0),*(undefined4 *)(lVar14 + 0xa4)
                                       ,*(undefined4 *)(lVar14 + 0xa8),
                                       *(undefined4 *)(lVar14 + 0xac),plVar17,
                                       *(undefined8 *)(*plVar17 + 0x2b0));
                          }
                        }
code_r0x014faef4:
                        uVar25 = uVar25 + 1;
                        uVar20 = (ulong)*(uint *)(lVar12 + 0x18);
                        puVar21 = puVar21 + 4;
                      } while ((long)uVar25 < (long)(int)*(uint *)(lVar12 + 0x18));
                    }
                  }
                  iStack_dc = iStack_dc + 1;
                  uVar13 = uVar13 + 1;
                } while ((long)uVar13 < (long)*(int *)(lVar26 + 0x18));
              }
              if (((long)uStack_100 < 0) || ((uStack_100 & 1) != 0)) {
code_r0x014fb4a0:
                lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41310);
                if (lVar11 != 0) {
                  lVar23 = *(long *)(lVar11 + 0xb0);
                  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41310);
                  if ((lVar11 != 0) && (lVar23 != 0)) {
                    /*Atlas.UI.PaginationDotController$$SetDotAmount*/ func_0x014b5d08(lVar23,*(undefined4 *)(lVar11 + 0xb8),0);
                    uVar27 = *(undefined8 *)(param_1 + 0x70);
                    if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen.<>c_TypeInfo*/ lRam0000000003d28ef8 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen.<>c_TypeInfo*/ lRam0000000003d28ef8 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    puVar21 = *(undefined8 **)(/*Atlas.UI.Screens.SingleplayerOverviewScreen.<>c_TypeInfo*/ lRam0000000003d28ef8 + 0xb8);
                    lVar11 = puVar21[1];
                    if (lVar11 == 0) {
                      if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen.<>c_TypeInfo*/ lRam0000000003d28ef8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen.<>c_TypeInfo*/ lRam0000000003d28ef8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                        puVar21 = *(undefined8 **)(/*Atlas.UI.Screens.SingleplayerOverviewScreen.<>c_TypeInfo*/ lRam0000000003d28ef8 + 0xb8);
                      }
                      uVar16 = *puVar21;
                      lVar11 = func_0x00f78aec(/*System.Func<SingleplayerOverviewScreen.QueuedAnim, uint>_TypeInfo*/ uRam0000000003d1cd48);
                      /*System.Func<SingleplayerOverviewScreen.QueuedAnim, uint>$$.ctor*/ func_0x0218165c(lVar11,uVar16,uRam0000000003d64300,uRam0000000003d35a98);
                      *(long *)(*(long *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen.<>c_TypeInfo*/ lRam0000000003d28ef8 + 0xb8) + 8) = lVar11;
                    }
                    uVar27 = /*System.Linq.Enumerable$$OrderByDescending<SingleplayerOverviewScreen.QueuedAnim, uint>*/ func_0x0184f3cc(uVar27,lVar11,uRam0000000003d55b40);
                    if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen.<>c_TypeInfo*/ lRam0000000003d28ef8 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen.<>c_TypeInfo*/ lRam0000000003d28ef8 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                    }
                    puVar21 = *(undefined8 **)(/*Atlas.UI.Screens.SingleplayerOverviewScreen.<>c_TypeInfo*/ lRam0000000003d28ef8 + 0xb8);
                    lVar11 = puVar21[2];
                    if (lVar11 == 0) {
                      if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen.<>c_TypeInfo*/ lRam0000000003d28ef8 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen.<>c_TypeInfo*/ lRam0000000003d28ef8 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                        puVar21 = *(undefined8 **)(/*Atlas.UI.Screens.SingleplayerOverviewScreen.<>c_TypeInfo*/ lRam0000000003d28ef8 + 0xb8);
                      }
                      uVar16 = *puVar21;
                      lVar11 = func_0x00f78aec(/*System.Func<SingleplayerOverviewScreen.QueuedAnim, uint>_TypeInfo*/ uRam0000000003d1cd48);
                      /*System.Func<SingleplayerOverviewScreen.QueuedAnim, uint>$$.ctor*/ func_0x0218165c(lVar11,uVar16,uRam0000000003d64308,uRam0000000003d35a98);
                      *(long *)(*(long *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen.<>c_TypeInfo*/ lRam0000000003d28ef8 + 0xb8) + 0x10) = lVar11;
                    }
                    uVar27 = /*System.Linq.Enumerable$$ThenByDescending<SingleplayerOverviewScreen.QueuedAnim, uint>*/ func_0x01854188(uVar27,lVar11,uRam0000000003d55d78);
                    lVar11 = /*System.Linq.Enumerable$$ToList<SingleplayerOverviewScreen.QueuedAnim>*/ func_0x01854fc0(uVar27,uRam0000000003d55ec0);
                    *(long *)(param_1 + 0x70) = lVar11;
                    iVar6 = (int)*(char *)(param_1 + 0x78) + *(int *)(param_1 + 0x7c) + -1;
                    if (0 < iVar6) {
                      if (lVar11 == 0) goto LAB_014fb76c;
                      /*System.Collections.Generic.List<SingleplayerOverviewScreen.QueuedAnim>$$RemoveRange*/ func_0x0259bce8(lVar11,0,iVar6,uRam0000000003d3d9c8);
                      lVar11 = *(long *)(param_1 + 0x70);
                    }
                    if (lVar11 != 0) {
                      if (*(int *)(lVar11 + 0x18) < 1) {
                        return;
                      }
                      lVar23 = *(long *)(*(long *)(lVar11 + 0x10) +
                                         (ulong)(*(int *)(lVar11 + 0x18) - 1) * 0x18 + 0x28);
                      lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41310);
                      if (lVar11 != 0) {
                        lVar26 = *(long *)(lVar11 + 0xb0);
                        lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41310);
                        if (((lVar11 != 0) && (*(long *)(lVar11 + 0xb0) != 0)) && (lVar23 != 0)) {
                          uVar27 = *(undefined8 *)(*(long *)(lVar11 + 0xb0) + 0x18);
                          lVar11 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar23,0);
                          if (lVar11 != 0) {
                            plVar17 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar11,0);
                            if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) == 0) ||
                               (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) != 0)) {
                              if (plVar17 == (long *)0x0) goto code_r0x014fb724;
code_r0x014fb700:
                              if (*plVar17 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                                plVar17 = (long *)0x0;
                              }
                            }
                            else {
                              func_0x00f78ad0();
                              if (plVar17 != (long *)0x0) goto code_r0x014fb700;
code_r0x014fb724:
                              plVar17 = (long *)0x0;
                            }
                            /*Core.UI2.UIUtils$$ScrollTargetNormalizedPosition*/ func_0x02f91280(uVar27,plVar17,0,0);
                            if (lVar26 != 0) {
                              /*Atlas.UI.PaginationDotController$$SnapToTarget*/ func_0x014b6090(lVar26,0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41310);
                if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x68), lVar11 != 0)) {
                  if (*(uint *)(lVar11 + 0x18) <= uStack_100._4_4_) goto code_r0x014fb770;
                  lVar11 = *(long *)(lVar11 + (ulong)uStack_100._4_4_ * 0x10 + 0x20);
                  if (lVar11 != 0) {
                    Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
                              (param_1,*(undefined8 *)(lVar11 + 0x18),uRam0000000003d2c978);
                    goto code_r0x014fb4a0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_014fb76c:
  func_0x00f78af4();
code_r0x014fb770:
  uVar27 = func_0x00f78b24();
  func_0x00f78ac0(uVar27,0);
LAB_014fb77c:
  func_0x00f78af4();
code_r0x014fb788:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x14fb78c);
  (*pcVar4)();
}



// ============================================================
// RVA: 0x14fb7dc | Atlas.UI.Screens.SingleplayerOverviewScreen.SetupArcadePanel
// ============================================================

/* WARNING: Possible PIC construction at 0x014fc208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fc650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x014fc20c) */
/* WARNING: Removing unreachable block (ram,0x014fc218) */
/* WARNING: Removing unreachable block (ram,0x014fc220) */
/* WARNING: Removing unreachable block (ram,0x014fc224) */
/* WARNING: Removing unreachable block (ram,0x014fc238) */
/* WARNING: Removing unreachable block (ram,0x014fc23c) */
/* WARNING: Removing unreachable block (ram,0x014fc244) */
/* WARNING: Removing unreachable block (ram,0x014fc250) */
/* WARNING: Removing unreachable block (ram,0x014fc25c) */
/* WARNING: Removing unreachable block (ram,0x014fc654) */
/* WARNING: Removing unreachable block (ram,0x014fc664) */
/* WARNING: Removing unreachable block (ram,0x014fc66c) */
/* WARNING: Removing unreachable block (ram,0x014fc674) */
/* WARNING: Removing unreachable block (ram,0x014fc6ac) */
/* WARNING: Removing unreachable block (ram,0x014fc6b0) */
/* WARNING: Removing unreachable block (ram,0x014fc6d8) */
/* WARNING: Removing unreachable block (ram,0x014fc704) */
/* WARNING: Removing unreachable block (ram,0x014fc744) */
/* WARNING: Removing unreachable block (ram,0x014fc770) */
/* WARNING: Removing unreachable block (ram,0x01cb5944) */
/* WARNING: Removing unreachable block (ram,0x01cb5968) */
/* WARNING: Removing unreachable block (ram,0x01cb5950) */
/* WARNING: Removing unreachable block (ram,0x014fc6e0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_SingleplayerOverviewScreen__SetupArcadePanel
                (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  undefined1 *puVar6;
  int iVar7;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined4 uVar8;
  long lVar14;
  undefined8 uVar15;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 *puVar26;
  undefined *puVar27;
  float extraout_s0;
  float fVar28;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int aiStack_90 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long lStack_68;
  
  puVar26 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4cc3 & 1) == 0) {
    func_0x00f78a20(0x3d1fc78);
    func_0x00f78a20(0x3d1fcc0);
    func_0x00f78a20(0x3d32548);
    func_0x00f78a20(0x3d32550);
    func_0x00f78a20(0x3d32558);
    func_0x00f78a20(0x3d57528);
    func_0x00f78a20(0x3d220f0);
    func_0x00f78a20(0x3d1d270);
    func_0x00f78a20(0x3d22180);
    func_0x00f78a20(0x3d3a760);
    func_0x00f78a20(0x3d3fe40);
    func_0x00f78a20(0x3d41310);
    func_0x00f78a20(0x3d41320);
    bRam0000000003eb4cc3 = 1;
  }
  plStack_70 = (long *)0x0;
  lStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  aiStack_90[2] = 0;
  if ((param_5 == 0) || (*(long *)(param_5 + 0x10) == 0)) {
LAB_014fbc70:
    func_0x00f78af4();
  }
  else {
    uVar16 = uRam0000000003d57528;
    /*Core.Definitions.GameDefinitions$$TryGetDefinitionList<WheelsDefinition>*/ func_0x0185d020(*(long *)(param_5 + 0x10),&lStack_68);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41320);
    if (lVar9 == 0) goto LAB_014fbc70;
    lVar20 = *(long *)(lVar9 + 0x48);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41320);
    if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x48) == 0)) || (lVar20 == 0)) ||
       (uVar10 = /*Atlas.Save.SaveManager$$SlotSaveData*/ func_0x014e84e8(lVar20,*(undefined4 *)(*(long *)(lVar9 + 0x48) + 0xf8)),
       lStack_68 == 0)) goto LAB_014fbc70;
    plVar11 = (long *)/*System.Collections.ObjectModel.ReadOnlyCollection<DebugUI.Panel>$$GetEnumerator*/ func_0x027bcdf0(lStack_68,uRam0000000003d3fe40);
    if (plVar11 != (long *)0x0) {
      uVar22 = 0;
      uVar21 = 0;
      do {
        lVar9 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar18 != 0) {
          piVar5 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == /*System.Collections.IEnumerator_TypeInfo*/ lRam0000000003d22180) {
              puVar12 = (undefined8 *)(lVar9 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_014fb9bc;
            }
            piVar5 = piVar5 + 4;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        uVar16 = 0;
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11);
LAB_014fb9bc:
        uVar18 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar18 & 1) == 0) {
          uVar10 = 0;
          lVar9 = 0;
          plVar13 = (long *)((long)&MACH_HEADER.magic + 1);
          aiStack_90[0] = 0x70;
          aiStack_90[2] = 1;
          goto joined_r0x014fbaa4;
        }
        lVar9 = *plVar11;
        uVar18 = (ulong)*(ushort *)(lVar9 + 0x12a);
        if (uVar18 != 0) {
          piVar5 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == /*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270) {
              puVar12 = (undefined8 *)(lVar9 + (long)*piVar5 * 0x10 + 0x138);
              goto code_r0x014fba18;
            }
            piVar5 = piVar5 + 4;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)func_0x00fac1f0(plVar11,/*System.Collections.Generic.IEnumerator<IDefinition>_TypeInfo*/ lRam0000000003d1d270,0);
code_r0x014fba18:
        plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
        if (((*(ushort *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.Arcade.ArcadeSave_TypeInfo*/ lRam0000000003d1fcc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (plVar13 != (long *)0x0) {
          if ((*(byte *)(*plVar13 + 300) < *(byte *)(/*Atlas.Definitions.ArcadeEventDefinition_TypeInfo*/ lRam0000000003d1fc78 + 300)) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(/*Atlas.Definitions.ArcadeEventDefinition_TypeInfo*/ lRam0000000003d1fc78 + 300) * 8
                       + -8) != /*Atlas.Definitions.ArcadeEventDefinition_TypeInfo*/ lRam0000000003d1fc78)) goto code_r0x014fbc4c;
        }
        uVar16 = 0;
        iVar7 = /*Atlas.Arcade.ArcadeSave$$HasGoldMedal*/ func_0x01454848(plVar13,uVar10);
        uVar22 = (ulong)(uint)((int)uVar22 + iVar7);
        uVar21 = (ulong)((int)uVar21 + 1);
      } while( true );
    }
  }
  func_0x00f78af4();
code_r0x014fbc78:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x14fbc7c);
  (*pcVar4)();
joined_r0x014fbaa4:
  if (plVar11 != (long *)0x0) {
    lVar20 = *plVar11;
    uVar18 = (ulong)*(ushort *)(lVar20 + 0x12a);
    if (uVar18 != 0) {
      piVar5 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == /*System.IDisposable_TypeInfo*/ lRam0000000003d220f0) {
          puVar12 = (undefined8 *)(lVar20 + (long)*piVar5 * 0x10 + 0x138);
          goto code_r0x014fbafc;
        }
        piVar5 = piVar5 + 4;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    uVar16 = 0;
    puVar12 = (undefined8 *)func_0x00fac1f0(plVar11);
code_r0x014fbafc:
    (*(code *)*puVar12)(plVar11,puVar12[1]);
  }
  if (lVar9 == 0) {
    if ((int)uVar10 == 0) {
      lVar9 = (long)plVar13 + 0xffffffffffffffff;
      if (aiStack_90[lVar9] == 0x70) {
        aiStack_90[2] = (int)lVar9;
        plVar13 = (long *)lVar9;
      }
    }
    else {
      plVar13 = (long *)0x0;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41310);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0xc0) == 0)) goto LAB_014fbc70;
    uVar18 = /*Atlas.UI.UIArcadeSingleMedalBehaviour$$Set*/ func_0x01513cb0(*(long *)(lVar9 + 0xc0),uVar22,uVar21,3,0);
    if ((int)uVar22 < (int)uVar21) {
      return uVar18;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41310);
    if (((lVar9 == 0) || (*(long *)(lVar9 + 0xc0) == 0)) ||
       (lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x30), lVar9 == 0)) goto LAB_014fbc70;
    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_80,lVar9,uRam0000000003d3a760);
    goto code_r0x014fbbb0;
  }
  func_0x00f78ac0(lVar9,0);
  uVar21 = 0;
  uVar22 = 0;
  if (extraout_w1 != 1) goto code_r0x014fbd10;
  plVar13 = (long *)___cxa_begin_catch();
  lVar9 = *plVar13;
  ___cxa_end_catch();
  plVar13 = (long *)0x0;
  uVar10 = 1;
  goto joined_r0x014fbaa4;
code_r0x014fbbb0:
  uVar21 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_80,uRam0000000003d32550);
  plVar11 = plStack_70;
  if ((uVar21 & 1) == 0) {
    aiStack_90[(int)plVar13] = 0xd5;
    aiStack_90[2] = aiStack_90[2] + 1;
    uVar21 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_80,uRam0000000003d32548);
    return uVar21;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41310);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x014fbc78;
  }
  lVar9 = *(long *)(lVar9 + 0xc0);
  if (lVar9 == 0) {
    func_0x00f78af4();
    goto code_r0x014fbc78;
  }
  if (plVar11 == (long *)0x0) {
    func_0x00f78af4();
    goto code_r0x014fbc78;
  }
  (**(code **)(*plVar11 + 0x2a8))
            (*(undefined4 *)(lVar9 + 0x38),*(undefined4 *)(lVar9 + 0x3c),
             *(undefined4 *)(lVar9 + 0x40),*(undefined4 *)(lVar9 + 0x44),plVar11,
             *(undefined8 *)(*plVar11 + 0x2b0));
  goto code_r0x014fbbb0;
code_r0x014fbd10:
  puVar27 = &Atlas_UI_Screens_SingleplayerOverviewScreen__SetupLeagueBadgeRepresentation;
  auVar29 = __Unwind_Resume();
  piVar5 = aiStack_90;
  do {
    lVar23 = auVar29._8_8_;
    lVar20 = auVar29._0_8_;
    *(undefined8 *)((long)piVar5 + -0x50) = 0x3d1d270;
    *(undefined8 *)((long)piVar5 + -0x48) = uVar10;
    *(long **)((long)piVar5 + -0x40) = plVar13;
    *(long *)((long)piVar5 + -0x38) = lVar9;
    *(long **)((long)piVar5 + -0x30) = plVar11;
    *(ulong *)((long)piVar5 + -0x28) = uVar22;
    *(ulong *)((long)piVar5 + -0x20) = uVar21;
    *(long *)((long)piVar5 + -0x18) = param_4;
    *(undefined1 **)((long)piVar5 + -0x10) = puVar26;
    *(undefined **)((long)piVar5 + -8) = puVar27;
    uVar24 = 0x3eb4000;
    lVar9 = 0x3d23990;
    if ((bRam0000000003eb4cc9 & 1) == 0) {
      func_0x00f78a20(0x3d21270);
      func_0x00f78a20(0x3d572c8);
      func_0x00f78a20(0x3d22e58);
      func_0x00f78a20(0x3d22ea0);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d41320);
      bRam0000000003eb4cc9 = 1;
    }
    *(undefined4 *)((long)piVar5 + -0x54) = 0;
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar21 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(lVar23,0,0);
    if ((uVar21 & 1) != 0) {
      return uVar21;
    }
    uVar25 = 0x3d41320;
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar20,uRam0000000003d41320);
    uVar10 = 0x3d41320;
    if (lVar14 != 0) {
      uVar24 = *(undefined8 *)(lVar14 + 0x48);
      lVar9 = func_0x00f78aec(/*Atlas.League.LeaguePlayerSave_TypeInfo*/ uRam0000000003d22ea0);
      /*Atlas.League.LeaguePlayerSave$$.ctor*/ func_0x0147e760(lVar9,uVar24,0);
      if (lVar9 != 0) {
        uVar24 = /*Atlas.League.LeaguePlayerSave$$get_PlayerLeague*/ func_0x0147e78c(lVar9,0);
        lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar20,uRam0000000003d41320);
        uVar10 = uVar25;
        if ((lVar14 != 0) && (*(long *)(lVar14 + 0xe8) != 0)) {
          lVar9 = /*Atlas.League.LeagueManager$$CheckForDemotion*/ func_0x015f4690(*(long *)(lVar14 + 0xe8),(undefined1 *)((long)piVar5 + -0x54),0);
          uVar8 = *(undefined4 *)((long)piVar5 + -0x54);
          if ((int)lVar9 != 2) {
            uVar8 = (undefined4)uVar24;
          }
          uVar24 = /*Atlas.League.LeagueModeHelper$$GetLeagueDefinitionID*/ func_0x0147a640(uVar8,0);
          lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar20,uRam0000000003d41320);
          if ((lVar14 != 0) && (*(long *)(lVar14 + 0x20) != 0)) {
            plVar13 = *(long **)(*(long *)(lVar14 + 0x20) + 0x10);
            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar25 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar24,0);
            if (plVar13 != (long *)0x0) {
              uVar24 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(plVar13,uVar25,uRam0000000003d572c8);
              lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar20,uRam0000000003d41320);
              if (lVar14 != 0) {
                plVar13 = *(long **)(lVar14 + 0x88);
                lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar20,uRam0000000003d41320);
                if (lVar14 != 0) {
                  uVar10 = *(undefined8 *)(lVar14 + 0xe8);
                  lVar20 = func_0x00f78aec(/*LeagueBadgeData_TypeInfo*/ uRam0000000003d22e58);
                  /*LeagueBadgeData$$.ctor*/ func_0x015ed228(lVar20,uVar24,plVar13,uVar10,uVar16,0);
                  if ((int)lVar9 == 2) {
                    if (lVar20 == 0) goto code_r0x014fbf6c;
                    /*LeagueBadgeData$$DisablePlacementDisplay*/ func_0x015ed520(lVar20,0);
                  }
                  if ((lVar23 != 0) && (plVar11 = *(long **)(lVar23 + 0x18), plVar11 != (long *)0x0)
                     ) {
                    uVar21 = (**(code **)(*plVar11 + 0x188))
                                       (plVar11,lVar20,*(undefined8 *)(*plVar11 + 400));
                    return uVar21;
                  }
                }
              }
            }
          }
        }
      }
    }
code_r0x014fbf6c:
    auVar29 = func_0x00f78af4();
    lVar14 = auVar29._8_8_;
    puVar12 = auVar29._0_8_;
    *(long *)((long)piVar5 + -0x90) = lVar9;
    *(long *)((long)piVar5 + -0x88) = lVar20;
    *(undefined8 *)((long)piVar5 + -0x80) = uVar16;
    *(long *)((long)piVar5 + -0x78) = lVar23;
    *(undefined1 **)((long)piVar5 + -0x70) = (undefined1 *)((long)piVar5 + -0x10);
    *(undefined **)((long)piVar5 + -0x68) =
         &Atlas_UI_Screens_SingleplayerOverviewScreen__SetLockedMaterial;
    uVar16 = 0x3d41310;
    if ((bRam0000000003eb4cc5 & 1) == 0) {
      func_0x00f78a20(0x3d329c8);
      func_0x00f78a20(0x3d329d0);
      func_0x00f78a20(0x3d329d8);
      func_0x00f78a20(0x3d3b180);
      func_0x00f78a20(0x3d23298);
      func_0x00f78a20(0x3d41310);
      bRam0000000003eb4cc5 = 1;
    }
    *(undefined8 *)((long)piVar5 + -0xa8) = 0;
    *(undefined8 *)((long)piVar5 + -0xa0) = 0;
    *(undefined8 *)((long)piVar5 + -0x98) = 0;
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar12,uRam0000000003d41310);
    if (lVar9 != 0) {
      uVar16 = *(undefined8 *)(lVar9 + 0x70);
      puVar12 = (undefined8 *)func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(puVar12,uVar16,0);
      if (lVar14 != 0) {
        *(undefined8 **)(lVar14 + 0x90) = puVar12;
        if (*(long *)(lVar14 + 0x88) != 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)piVar5 + -0xa8),*(long *)(lVar14 + 0x88),
                          uRam0000000003d3b180);
          while( true ) {
            uVar21 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)piVar5 + -0xa8),uRam0000000003d329d0);
            if ((uVar21 & 1) == 0) {
              uVar21 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)piVar5 + -0xa8),uRam0000000003d329c8);
              return uVar21;
            }
            plVar11 = *(long **)((long)piVar5 + -0x98);
            if (plVar11 == (long *)0x0) break;
            (**(code **)(*plVar11 + 0x348))
                      (plVar11,*(undefined8 *)(lVar14 + 0x90),*(undefined8 *)(*plVar11 + 0x350));
          }
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x14fc0b8);
          (*pcVar4)();
        }
      }
    }
    func_0x00f78af4();
    if (extraout_w1_00 == 1) {
      plVar11 = (long *)___cxa_begin_catch();
      lVar14 = *plVar11;
      ___cxa_end_catch();
      uVar21 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)piVar5 + -0xa8),*puVar12);
      if (lVar14 == 0) {
        return uVar21;
      }
      func_0x00f78ac0(lVar14,0);
    }
    auVar29 = __Unwind_Resume();
    param_4 = auVar29._8_8_;
    uVar21 = auVar29._0_8_;
    *(long **)((long)piVar5 + -0xf0) = plVar13;
    *(undefined8 *)((long)piVar5 + -0xe8) = uVar24;
    *(undefined8 *)((long)piVar5 + -0xe0) = 0x3eb4000;
    *(undefined8 *)((long)piVar5 + -0xd8) = uVar16;
    *(undefined8 **)((long)piVar5 + -0xd0) = puVar12;
    *(long *)((long)piVar5 + -200) = lVar14;
    *(undefined1 **)((long)piVar5 + -0xc0) = (undefined1 *)((long)piVar5 + -0x70);
    *(undefined **)((long)piVar5 + -0xb8) = &Atlas_UI_Screens_SingleplayerOverviewScreen__LockButton
    ;
    puVar26 = (undefined1 *)((long)piVar5 + -0xc0);
    lVar20 = 0x3eb4000;
    if ((bRam0000000003eb4cc6 & 1) == 0) {
      func_0x00f78a20(0x3d534e8);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d25578);
      func_0x00f78a20(0x3d41310);
      bRam0000000003eb4cc6 = 1;
    }
    lVar9 = 0x3eb4000;
    if (param_4 == 0) goto code_r0x014fc278;
    lVar23 = *(long *)(param_4 + 0x18);
    if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar20 = 0;
    lVar9 = 0x3d25578;
    if (lVar23 == 0) goto code_r0x014fc278;
    uVar24 = 0x3d41000;
    /*Atlas.UI.UIAtlasButton$$PlayAnimation*/ func_0x01515608(lVar23,*(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 4),0);
    lVar20 = *(long *)(param_4 + 0x30);
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar21,uRam0000000003d41310);
    if (lVar23 == 0) goto code_r0x014fc278;
    param_2 = *(float *)(lVar23 + 0x8c);
    param_3 = *(float *)(lVar23 + 0x90);
    uVar8 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)(lVar23 + 0x88),param_2,param_3,
                            *(undefined4 *)(lVar23 + 0x94),0);
    lVar9 = 0x3d25578;
    if (lVar20 == 0) goto code_r0x014fc278;
    plVar11 = (long *)0x3d53000;
    lVar9 = 0x3d23000;
    /*TMPro.TMP_Text$$set_outlineColor*/ func_0x031af2f4(lVar20,uVar8,0);
    uVar22 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_4,uRam0000000003d534e8);
    auVar29._8_8_ = uVar22;
    auVar29._0_8_ = uVar21;
    uVar16 = 0;
    puVar27 = &UNK_014fc20c;
    piVar5 = (int *)((long)piVar5 + -0xf0);
  } while( true );
code_r0x014fbc4c:
  func_0x00f78e5c(plVar13);
  goto code_r0x014fbc78;
code_r0x014fc278:
  uVar22 = func_0x00f78af4();
  *(undefined8 *)((long)piVar5 + -0x140) = unaff_d9;
  *(undefined8 *)((long)piVar5 + -0x138) = unaff_d8;
  *(long **)((long)piVar5 + -0x130) = plVar13;
  *(undefined8 *)((long)piVar5 + -0x128) = uVar24;
  *(long *)((long)piVar5 + -0x120) = lVar9;
  *(long *)((long)piVar5 + -0x118) = lVar20;
  *(undefined1 (*) [16])((long)piVar5 + -0x110) = auVar29;
  *(undefined1 **)((long)piVar5 + -0x100) = puVar26;
  *(undefined **)((long)piVar5 + -0xf8) = &Atlas_UI_Screens_SingleplayerOverviewScreen__OnUpdate;
  lVar23 = 0x3eb4000;
  uVar21 = uVar22;
  if ((bRam0000000003eb4cc4 & 1) == 0) {
    func_0x00f78a20(0x3d3d9c0);
    func_0x00f78a20(0x3d3d9d0);
    func_0x00f78a20(0x3d3d9d8);
    func_0x00f78a20(0x3d3e178);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d24a88);
    func_0x00f78a20(0x3d41310);
    func_0x00f78a20(0x3d41320);
    uVar21 = func_0x00f78a20(0x3d25608);
    bRam0000000003eb4cc4 = 1;
  }
  if (*(long *)(uVar22 + 0x70) != 0) {
    if (*(int *)(*(long *)(uVar22 + 0x70) + 0x18) < 1) {
      return uVar21;
    }
    lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar22,uRam0000000003d41320);
    if ((lVar14 != 0) && (*(long *)(lVar14 + 0x98) != 0)) {
      uVar21 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar14 + 0x98),uRam0000000003d3e178);
      if ((uVar21 & 1) != 0) {
        return uVar21;
      }
      if (*(int *)(uVar22 + 0x4c) != 2) {
        return uVar21;
      }
      fVar28 = *(float *)(uVar22 + 0x6c) - extraout_s0;
      *(float *)(uVar22 + 0x6c) = fVar28;
      if (0.0 < fVar28) {
        return uVar21;
      }
      if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined4 *)(uVar22 + 0x6c) = *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xb8) + 8);
      lVar14 = *(long *)(uVar22 + 0x70);
      lVar23 = 0;
      if (lVar14 != 0) {
        iVar7 = *(int *)(lVar14 + 0x18);
        if (iVar7 == 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar20 = *(long *)(lVar14 + 0x10) + (long)(iVar7 + -1) * 0x18;
        lVar23 = *(long *)(lVar20 + 0x28);
        lVar20 = *(long *)(lVar20 + 0x30);
        lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar22,uRam0000000003d41310);
        uVar24 = 0x3d41310;
        if (lVar14 != 0) {
          lVar9 = *(long *)(lVar14 + 0xb0);
          lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar22,uRam0000000003d41310);
          if (((lVar14 != 0) && (uVar24 = 0x3d41310, *(long *)(lVar14 + 0xb0) != 0)) &&
             (lVar23 != 0)) {
            uVar24 = *(undefined8 *)(*(long *)(lVar14 + 0xb0) + 0x18);
            lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar23,0);
            if (lVar14 != 0) {
              plVar13 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar14,0);
              if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (plVar13 == (long *)0x0) {
                plVar11 = (long *)0x0;
              }
              else {
                plVar11 = plVar13;
                if (*plVar13 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                  plVar11 = (long *)0x0;
                }
              }
              /*Core.UI2.UIUtils$$ScrollTargetNormalizedPosition*/ func_0x02f91280(uVar24,plVar11,0,0);
              if (lVar9 != 0) {
                /*Atlas.UI.PaginationDotController$$ScrollToTarget*/ func_0x014b600c(lVar9,0);
                /*Atlas.UI.UIAtlasButton$$PlayAnimation*/ func_0x01515608(lVar23,lVar20,0);
                uVar21 = *(ulong *)(uVar22 + 0x70);
                if (uVar21 != 0) {
                  iVar7 = *(int *)(uVar21 + 0x18);
                  uVar2 = iVar7 - 1;
                  uVar16 = *(undefined8 *)((long)piVar5 + -0x120);
                  uVar10 = *(undefined8 *)((long)piVar5 + -0x118);
                  *(undefined8 *)((long)piVar5 + -0x110) = *(undefined8 *)((long)piVar5 + -0x110);
                  *(undefined8 *)((long)piVar5 + -0x108) = *(undefined8 *)((long)piVar5 + -0x108);
                  *(undefined8 *)((long)piVar5 + -0x100) = *(undefined8 *)((long)piVar5 + -0x100);
                  *(undefined8 *)((long)piVar5 + -0xf8) = *(undefined8 *)((long)piVar5 + -0xf8);
                  uVar17 = *(uint *)(uVar21 + 0x18);
                  uVar22 = uVar21;
                  uVar24 = uRam0000000003d3d9c0;
                  if (uVar17 <= uVar2) {
                    uVar22 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    uVar17 = *(uint *)(uVar21 + 0x18);
                  }
                  uVar17 = uVar17 - 1;
                  *(uint *)(uVar21 + 0x18) = uVar17;
                  if (uVar17 - uVar2 != 0 && (int)uVar2 <= (int)uVar17) {
                    uVar24 = *(undefined8 *)(uVar21 + 0x10);
                    uVar22 = /*System.Array$$Copy*/ func_0x0292b4cc(uVar24,iVar7,uVar24,(ulong)uVar2,uVar17 - uVar2,0);
                    uVar17 = *(uint *)(uVar21 + 0x18);
                  }
                  lVar9 = *(long *)(uVar21 + 0x10);
                  if (lVar9 == 0) {
                    func_0x00f78af4();
                  }
                  else if (uVar17 < *(uint *)(lVar9 + 0x18)) {
                    lVar9 = lVar9 + (long)(int)uVar17 * 0x18;
                    *(undefined8 *)(lVar9 + 0x20) = 0;
                    *(undefined8 *)(lVar9 + 0x28) = 0;
                    *(undefined8 *)(lVar9 + 0x30) = 0;
                    *(int *)(uVar21 + 0x1c) = *(int *)(uVar21 + 0x1c) + 1;
                    return uVar22;
                  }
                  uVar25 = func_0x00f78b24();
                  auVar29 = func_0x00f78ac0(uVar25,0);
                  uVar22 = auVar29._0_8_;
                  *(undefined8 *)((long)piVar5 + -0x140) = uVar16;
                  *(undefined8 *)((long)piVar5 + -0x138) = uVar10;
                  *(ulong *)((long)piVar5 + -0x130) = (ulong)uVar2;
                  *(ulong *)((long)piVar5 + -0x128) = uVar21;
                  *(undefined1 **)((long)piVar5 + -0x120) = (undefined1 *)((long)piVar5 + -0x100);
                  *(undefined **)((long)piVar5 + -0x118) =
                       &
                       System_Collections_Generic_List_SingleplayerOverviewScreen_QueuedAnim___RemoveRange
                  ;
                  iVar7 = auVar29._8_4_;
                  iVar19 = (int)uVar24;
                  uVar21 = uVar22;
                  if (iVar7 < 0) {
                    uVar21 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
                  }
                  if (iVar19 < 0) {
                    uVar21 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
                  }
                  if (*(int *)(uVar22 + 0x18) - iVar7 < iVar19) {
                    uVar21 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
                  }
                  if (0 < iVar19) {
                    iVar3 = *(int *)(uVar22 + 0x18) - iVar19;
                    *(int *)(uVar22 + 0x18) = iVar3;
                    if (iVar3 - iVar7 != 0 && iVar7 <= iVar3) {
                      /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(uVar22 + 0x10),iVar19 + iVar7,
                                      *(undefined8 *)(uVar22 + 0x10),auVar29._8_8_,iVar3 - iVar7,0);
                      iVar3 = *(int *)(uVar22 + 0x18);
                    }
                    uVar21 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar22 + 0x10),iVar3,uVar24,0);
                    *(int *)(uVar22 + 0x1c) = *(int *)(uVar22 + 0x1c) + 1;
                  }
                  return uVar21;
                }
              }
            }
          }
        }
      }
    }
  }
  auVar29 = func_0x00f78af4();
  *(long *)((long)piVar5 + -0x170) = lVar9;
  *(long *)((long)piVar5 + -0x168) = lVar20;
  *(long *)((long)piVar5 + -0x160) = lVar23;
  *(ulong *)((long)piVar5 + -0x158) = uVar22;
  *(undefined1 **)((long)piVar5 + -0x150) = (undefined1 *)((long)piVar5 + -0x100);
  *(undefined **)((long)piVar5 + -0x148) =
       &Atlas_UI_Screens_SingleplayerOverviewScreen__ButtonPressed;
  if ((bRam0000000003eb4cc7 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d41318);
    func_0x00f78a20(0x3d79010);
    bRam0000000003eb4cc7 = 1;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(auVar29._0_8_,uRam0000000003d41318);
  if (lVar9 == 0) {
    auVar30 = func_0x00f78af4();
    puVar6 = (undefined1 *)((long)piVar5 + -0x1b0);
    *(long **)((long)piVar5 + -0x1b0) = plVar13;
    *(undefined8 *)((long)piVar5 + -0x1a8) = uVar24;
    *(undefined8 *)((long)piVar5 + -0x1a0) = 0x3d41318;
    *(undefined8 *)((long)piVar5 + -0x198) = 0x3eb4000;
    *(undefined1 (*) [16])((long)piVar5 + -400) = auVar29;
    *(undefined1 **)((long)piVar5 + -0x180) = (undefined1 *)((long)piVar5 + -0x150);
    *(undefined **)((long)piVar5 + -0x178) =
         &Atlas_UI_Screens_SingleplayerOverviewScreen__LockedButtonPressed;
    puVar26 = (undefined1 *)((long)piVar5 + -0x180);
    uVar10 = 0x3eb4000;
    uVar16 = 0x3d41320;
    if ((bRam0000000003eb4cc8 & 1) == 0) {
      func_0x00f78a20(0x3d57260);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d29328);
      func_0x00f78a20(0x3d41320);
      func_0x00f78a20(0x3d79018);
      bRam0000000003eb4cc8 = 1;
    }
    puVar27 = &UNK_014fc654;
    uVar21 = /*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x10);
    if (lVar9 != 0) {
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Atlas.UI.Screens.SingleplayerOverviewScreen.ContinueSelected$$Invoke*/ func_0x0156a934(lVar9,auVar29._8_8_,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
    }
    puVar26 = *(undefined1 **)((long)piVar5 + -0x150);
    puVar27 = *(undefined **)((long)piVar5 + -0x148);
    auVar30._8_8_ = *(undefined8 *)((long)piVar5 + -0x160);
    auVar30._0_8_ = *(undefined8 *)((long)piVar5 + -0x158);
    puVar6 = (undefined1 *)((long)piVar5 + -0x140);
    uVar16 = *(undefined8 *)((long)piVar5 + -0x170);
    uVar10 = *(undefined8 *)((long)piVar5 + -0x168);
    uVar21 = /*STR('event:/UI/Front_End/GeneralButton2')*/ uRam0000000003d79010;
  }
  *(undefined8 *)(puVar6 + -0x30) = uVar16;
  *(undefined8 *)(puVar6 + -0x28) = uVar10;
  *(long *)(puVar6 + -0x20) = auVar30._8_8_;
  *(long *)(puVar6 + -0x18) = auVar30._0_8_;
  *(undefined1 **)(puVar6 + -0x10) = puVar26;
  *(undefined **)(puVar6 + -8) = puVar27;
  uVar10 = 0x3eb4000;
  uVar22 = uVar21;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    uVar22 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar22;
  }
  lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar9 != 0) {
    uVar22 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar9,uVar21,uRam0000000003d2faf8);
    if ((int)uVar22 == 0) {
      return uVar22;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar9 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar9 != 0)) &&
       (uVar22 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar9,uVar21,uRam0000000003d2fb00), uVar22 != 0)) {
      *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
      *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
      *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
      *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar22,0,0);
      return uVar22;
    }
  }
  plVar11 = (long *)func_0x00f78af4();
  *(undefined8 *)(puVar6 + -0x70) = unaff_d9;
  *(ulong *)(puVar6 + -0x68) = (ulong)(uint)extraout_s0;
  *(undefined8 *)(puVar6 + -0x60) = uVar16;
  *(undefined8 *)(puVar6 + -0x58) = 0x3eb4000;
  *(undefined8 *)(puVar6 + -0x50) = 0x3d25580;
  *(ulong *)(puVar6 + -0x48) = uVar21;
  *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
  *(undefined **)(puVar6 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar13 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar11,0);
  if ((plVar13 != (long *)0x0) && (*plVar13 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar25 = func_0x00f78e5c(plVar13);
    *(long **)(puVar6 + -0x90) = plVar13;
    *(long **)(puVar6 + -0x88) = plVar11;
    *(undefined1 **)(puVar6 + -0x80) = puVar6 + -0x40;
    *(undefined **)(puVar6 + -0x78) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
    lVar9 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    uVar24 = *(undefined8 *)(puVar6 + -0x90);
    *(undefined8 *)(puVar6 + -0xa0) = uVar16;
    *(undefined8 *)(puVar6 + -0x98) = 0x3eb4000;
    *(undefined8 *)(puVar6 + -0x90) = uVar24;
    *(undefined8 *)(puVar6 + -0x88) = *(undefined8 *)(puVar6 + -0x88);
    *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x80);
    *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x78);
    if (lVar9 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar15 = func_0x00f78aec();
      uVar25 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar15,uVar25,0);
    }
    else {
      uVar10 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar21 = (*pcRam0000000003ec01d0)(uVar25);
      if ((uVar21 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar21 = (*pcRam0000000003ec01e0)(uVar25,lVar9);
        return uVar21;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar15 = func_0x00f78aec();
      uVar24 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar15,uVar24,0);
      uVar24 = uVar25;
    }
    uVar25 = func_0x00f78a24(0x3d5a8a8);
    auVar29 = func_0x00f78ac0(uVar15,uVar25);
    *(undefined8 *)(puVar6 + -0xd0) = uVar16;
    *(undefined8 *)(puVar6 + -200) = uVar10;
    *(undefined8 *)(puVar6 + -0xc0) = uVar24;
    *(undefined8 *)(puVar6 + -0xb8) = uVar15;
    *(undefined1 **)(puVar6 + -0xb0) = puVar6 + -0x80;
    *(undefined **)(puVar6 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar21 = (*pcRam0000000003ec01e0)(auVar29._0_8_,auVar29._8_8_);
    return uVar21;
  }
  fVar28 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar16 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar28 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                           plVar13,4,0);
  uVar21 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar16,uRam0000000003d5e780);
  *(undefined8 *)(puVar6 + -0xa0) = 0x3d5e780;
  *(undefined8 *)(puVar6 + -0x98) = 0x3d5e868;
  *(long **)(puVar6 + -0x90) = plVar13;
  *(long **)(puVar6 + -0x88) = plVar11;
  *(undefined1 **)(puVar6 + -0x80) = puVar6 + -0x40;
  *(undefined **)(puVar6 + -0x78) = &UNK_01513b44;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar11,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((uVar21 != 0) && (*(char *)(uVar21 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar7 != 0) {
      lVar9 = func_0x00f78adc(plVar11,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar22 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
      if ((uVar22 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto code_r0x018eef34;
        uVar16 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      }
      else {
        if (lVar9 == 0) {
code_r0x018eef34:
          auVar29 = func_0x00f78af4();
          uVar22 = auVar29._0_8_;
          *(undefined8 *)(puVar6 + -0xd0) = 0x3d5e780;
          *(long *)(puVar6 + -200) = lVar9;
          *(long **)(puVar6 + -0xc0) = plVar11;
          *(ulong *)(puVar6 + -0xb8) = uVar21;
          *(undefined1 **)(puVar6 + -0xb0) = puVar6 + -0x80;
          *(undefined **)(puVar6 + -0xa8) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((uVar22 != 0) && (*(char *)(uVar22 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar22,auVar29._8_8_,cVar1 != '\0',0);
          }
          return uVar22;
        }
        uVar16 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar9,0);
      }
      *(undefined8 *)(uVar21 + 200) = uVar16;
    }
    *(long **)(uVar21 + 0x48) = plVar11;
  }
  return uVar21;
}



// ============================================================
// RVA: 0x14fbd14 | Atlas.UI.Screens.SingleplayerOverviewScreen.SetupLeagueBadgeRepresentation
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fc650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x014fc654) */
/* WARNING: Removing unreachable block (ram,0x014fc664) */
/* WARNING: Removing unreachable block (ram,0x014fc66c) */
/* WARNING: Removing unreachable block (ram,0x014fc674) */
/* WARNING: Removing unreachable block (ram,0x014fc6ac) */
/* WARNING: Removing unreachable block (ram,0x014fc6b0) */
/* WARNING: Removing unreachable block (ram,0x014fc6d8) */
/* WARNING: Removing unreachable block (ram,0x014fc704) */
/* WARNING: Removing unreachable block (ram,0x014fc744) */
/* WARNING: Removing unreachable block (ram,0x014fc770) */
/* WARNING: Removing unreachable block (ram,0x01cb5944) */
/* WARNING: Removing unreachable block (ram,0x01cb5968) */
/* WARNING: Removing unreachable block (ram,0x01cb5950) */
/* WARNING: Removing unreachable block (ram,0x014fc6e0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_SingleplayerOverviewScreen__SetupLeagueBadgeRepresentation
                (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
                undefined8 param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int extraout_w1;
  uint uVar21;
  int iVar22;
  long lVar23;
  undefined8 uVar24;
  long *unaff_x24;
  undefined1 *puVar25;
  undefined *puVar26;
  float extraout_s0;
  float fVar27;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_60 [12];
  undefined4 uStack_54;
  
  puVar25 = &stack0xfffffffffffffff0;
  uVar24 = 0x3eb4000;
  lVar11 = 0x3d23990;
  if ((bRam0000000003eb4cc9 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d572c8);
    func_0x00f78a20(0x3d22e58);
    func_0x00f78a20(0x3d22ea0);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41320);
    bRam0000000003eb4cc9 = 1;
  }
  uStack_54 = 0;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar9 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(param_5,0,0);
  if ((uVar9 & 1) != 0) {
    return uVar9;
  }
  lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41320);
  if (lVar10 != 0) {
    uVar24 = *(undefined8 *)(lVar10 + 0x48);
    lVar11 = func_0x00f78aec(/*Atlas.League.LeaguePlayerSave_TypeInfo*/ uRam0000000003d22ea0);
    /*Atlas.League.LeaguePlayerSave$$.ctor*/ func_0x0147e760(lVar11,uVar24,0);
    if (lVar11 != 0) {
      uVar24 = /*Atlas.League.LeaguePlayerSave$$get_PlayerLeague*/ func_0x0147e78c(lVar11,0);
      lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41320);
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0xe8) != 0)) {
        lVar11 = /*Atlas.League.LeagueManager$$CheckForDemotion*/ func_0x015f4690(*(long *)(lVar10 + 0xe8),&uStack_54,0);
        uVar7 = uStack_54;
        if ((int)lVar11 != 2) {
          uVar7 = (undefined4)uVar24;
        }
        uVar24 = /*Atlas.League.LeagueModeHelper$$GetLeagueDefinitionID*/ func_0x0147a640(uVar7,0);
        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41320);
        if ((lVar10 != 0) && (*(long *)(lVar10 + 0x20) != 0)) {
          unaff_x24 = *(long **)(*(long *)(lVar10 + 0x20) + 0x10);
          if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar12 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar24,0);
          if (unaff_x24 != (long *)0x0) {
            uVar24 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(unaff_x24,uVar12,uRam0000000003d572c8);
            lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41320);
            if (lVar10 != 0) {
              unaff_x24 = *(long **)(lVar10 + 0x88);
              lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41320);
              if (lVar10 != 0) {
                uVar12 = *(undefined8 *)(lVar10 + 0xe8);
                param_4 = func_0x00f78aec(/*LeagueBadgeData_TypeInfo*/ uRam0000000003d22e58);
                /*LeagueBadgeData$$.ctor*/ func_0x015ed228(param_4,uVar24,unaff_x24,uVar12,param_6,0);
                if ((int)lVar11 == 2) {
                  if (param_4 == 0) goto LAB_014fbf6c;
                  /*LeagueBadgeData$$DisablePlacementDisplay*/ func_0x015ed520(param_4,0);
                }
                if ((param_5 != 0) && (plVar13 = *(long **)(param_5 + 0x18), plVar13 != (long *)0x0)
                   ) {
                  uVar9 = (**(code **)(*plVar13 + 0x188))
                                    (plVar13,param_4,*(undefined8 *)(*plVar13 + 400));
                  return uVar9;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_014fbf6c:
  puVar26 = &Atlas_UI_Screens_SingleplayerOverviewScreen__SetLockedMaterial;
  auVar28 = func_0x00f78af4();
  puVar5 = auStack_60;
  while( true ) {
    lVar10 = auVar28._8_8_;
    puVar14 = auVar28._0_8_;
    *(long *)(puVar5 + -0x30) = lVar11;
    *(long *)(puVar5 + -0x28) = param_4;
    *(undefined8 *)(puVar5 + -0x20) = param_6;
    *(long *)(puVar5 + -0x18) = param_5;
    *(undefined1 **)(puVar5 + -0x10) = puVar25;
    *(undefined **)(puVar5 + -8) = puVar26;
    uVar12 = 0x3d41310;
    if ((bRam0000000003eb4cc5 & 1) == 0) {
      func_0x00f78a20(0x3d329c8);
      func_0x00f78a20(0x3d329d0);
      func_0x00f78a20(0x3d329d8);
      func_0x00f78a20(0x3d3b180);
      func_0x00f78a20(0x3d23298);
      func_0x00f78a20(0x3d41310);
      bRam0000000003eb4cc5 = 1;
    }
    *(undefined8 *)(puVar5 + -0x48) = 0;
    *(undefined8 *)(puVar5 + -0x40) = 0;
    *(undefined8 *)(puVar5 + -0x38) = 0;
    lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar14,uRam0000000003d41310);
    if (lVar11 != 0) {
      uVar12 = *(undefined8 *)(lVar11 + 0x70);
      puVar14 = (undefined8 *)func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(puVar14,uVar12,0);
      if (lVar10 != 0) {
        *(undefined8 **)(lVar10 + 0x90) = puVar14;
        if (*(long *)(lVar10 + 0x88) != 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(puVar5 + -0x48,*(long *)(lVar10 + 0x88),uRam0000000003d3b180);
          while( true ) {
            uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(puVar5 + -0x48,uRam0000000003d329d0);
            if ((uVar9 & 1) == 0) {
              uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar5 + -0x48,uRam0000000003d329c8);
              return uVar9;
            }
            plVar13 = *(long **)(puVar5 + -0x38);
            if (plVar13 == (long *)0x0) break;
            (**(code **)(*plVar13 + 0x348))
                      (plVar13,*(undefined8 *)(lVar10 + 0x90),*(undefined8 *)(*plVar13 + 0x350));
          }
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x14fc0b8);
          (*pcVar4)();
        }
      }
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar13 = (long *)___cxa_begin_catch();
      lVar10 = *plVar13;
      ___cxa_end_catch();
      uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(puVar5 + -0x48,*puVar14);
      if (lVar10 == 0) {
        return uVar9;
      }
      func_0x00f78ac0(lVar10,0);
    }
    auVar28 = __Unwind_Resume();
    lVar15 = auVar28._8_8_;
    *(long **)(puVar5 + -0x90) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x88) = uVar24;
    *(undefined8 *)(puVar5 + -0x80) = 0x3eb4000;
    *(undefined8 *)(puVar5 + -0x78) = uVar12;
    *(undefined8 **)(puVar5 + -0x70) = puVar14;
    *(long *)(puVar5 + -0x68) = lVar10;
    *(undefined1 **)(puVar5 + -0x60) = puVar5 + -0x10;
    *(undefined **)(puVar5 + -0x58) = &Atlas_UI_Screens_SingleplayerOverviewScreen__LockButton;
    lVar11 = 0x3eb4000;
    if ((bRam0000000003eb4cc6 & 1) == 0) {
      func_0x00f78a20(0x3d534e8);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d25578);
      func_0x00f78a20(0x3d41310);
      bRam0000000003eb4cc6 = 1;
    }
    lVar10 = 0x3eb4000;
    if (lVar15 == 0) break;
    lVar23 = *(long *)(lVar15 + 0x18);
    if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar11 = 0;
    lVar10 = 0x3d25578;
    if (lVar23 == 0) break;
    uVar24 = 0x3d41000;
    /*Atlas.UI.UIAtlasButton$$PlayAnimation*/ func_0x01515608(lVar23,*(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 4),0);
    lVar11 = *(long *)(lVar15 + 0x30);
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(auVar28._0_8_,uRam0000000003d41310);
    if (lVar23 == 0) break;
    param_2 = *(float *)(lVar23 + 0x8c);
    param_3 = *(float *)(lVar23 + 0x90);
    uVar7 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)(lVar23 + 0x88),param_2,param_3,
                            *(undefined4 *)(lVar23 + 0x94),0);
    lVar10 = 0x3d25578;
    if (lVar11 == 0) break;
    lVar10 = 0x3d53000;
    uVar24 = 0x3d23000;
    /*TMPro.TMP_Text$$set_outlineColor*/ func_0x031af2f4(lVar11,uVar7,0);
    lVar11 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar15,uRam0000000003d534e8);
    Atlas_UI_Screens_SingleplayerOverviewScreen__SetupLeagueBadgeRepresentation
              (auVar28._0_8_,lVar11,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0,0);
    if (iVar8 != 0) {
      if (((lVar11 == 0) || (*(long *)(lVar11 + 0x20) == 0)) ||
         (lVar15 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(*(long *)(lVar11 + 0x20),0), lVar15 == 0)) break;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar15,0,0);
    }
    puVar25 = *(undefined1 **)(puVar5 + -0x60);
    puVar26 = *(undefined **)(puVar5 + -0x58);
    param_6 = *(undefined8 *)(puVar5 + -0x70);
    param_5 = *(long *)(puVar5 + -0x68);
    lVar11 = *(long *)(puVar5 + -0x80);
    param_4 = *(long *)(puVar5 + -0x78);
    unaff_x24 = *(long **)(puVar5 + -0x90);
    uVar24 = *(undefined8 *)(puVar5 + -0x88);
    puVar5 = puVar5 + -0x50;
  }
  uVar16 = func_0x00f78af4();
  *(undefined8 *)(puVar5 + -0xe0) = unaff_d9;
  *(undefined8 *)(puVar5 + -0xd8) = unaff_d8;
  *(long **)(puVar5 + -0xd0) = unaff_x24;
  *(undefined8 *)(puVar5 + -200) = uVar24;
  *(long *)(puVar5 + -0xc0) = lVar10;
  *(long *)(puVar5 + -0xb8) = lVar11;
  *(undefined1 (*) [16])(puVar5 + -0xb0) = auVar28;
  *(undefined1 **)(puVar5 + -0xa0) = puVar5 + -0x60;
  *(undefined **)(puVar5 + -0x98) = &Atlas_UI_Screens_SingleplayerOverviewScreen__OnUpdate;
  lVar15 = 0x3eb4000;
  uVar9 = uVar16;
  if ((bRam0000000003eb4cc4 & 1) == 0) {
    func_0x00f78a20(0x3d3d9c0);
    func_0x00f78a20(0x3d3d9d0);
    func_0x00f78a20(0x3d3d9d8);
    func_0x00f78a20(0x3d3e178);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d24a88);
    func_0x00f78a20(0x3d41310);
    func_0x00f78a20(0x3d41320);
    uVar9 = func_0x00f78a20(0x3d25608);
    bRam0000000003eb4cc4 = 1;
  }
  if (*(long *)(uVar16 + 0x70) != 0) {
    if (*(int *)(*(long *)(uVar16 + 0x70) + 0x18) < 1) {
      return uVar9;
    }
    lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar16,uRam0000000003d41320);
    if ((lVar23 != 0) && (*(long *)(lVar23 + 0x98) != 0)) {
      uVar9 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar23 + 0x98),uRam0000000003d3e178);
      if ((uVar9 & 1) != 0) {
        return uVar9;
      }
      if (*(int *)(uVar16 + 0x4c) != 2) {
        return uVar9;
      }
      fVar27 = *(float *)(uVar16 + 0x6c) - extraout_s0;
      *(float *)(uVar16 + 0x6c) = fVar27;
      if (0.0 < fVar27) {
        return uVar9;
      }
      if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined4 *)(uVar16 + 0x6c) = *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xb8) + 8);
      lVar23 = *(long *)(uVar16 + 0x70);
      lVar15 = 0;
      if (lVar23 != 0) {
        iVar8 = *(int *)(lVar23 + 0x18);
        if (iVar8 == 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar11 = *(long *)(lVar23 + 0x10) + (long)(iVar8 + -1) * 0x18;
        lVar15 = *(long *)(lVar11 + 0x28);
        lVar11 = *(long *)(lVar11 + 0x30);
        lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar16,uRam0000000003d41310);
        uVar24 = 0x3d41310;
        if (lVar23 != 0) {
          lVar10 = *(long *)(lVar23 + 0xb0);
          lVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar16,uRam0000000003d41310);
          if (((lVar23 != 0) && (uVar24 = 0x3d41310, *(long *)(lVar23 + 0xb0) != 0)) &&
             (lVar15 != 0)) {
            uVar24 = *(undefined8 *)(*(long *)(lVar23 + 0xb0) + 0x18);
            lVar23 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar15,0);
            if (lVar23 != 0) {
              unaff_x24 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar23,0);
              if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (unaff_x24 == (long *)0x0) {
                plVar13 = (long *)0x0;
              }
              else {
                plVar13 = unaff_x24;
                if (*unaff_x24 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                  plVar13 = (long *)0x0;
                }
              }
              /*Core.UI2.UIUtils$$ScrollTargetNormalizedPosition*/ func_0x02f91280(uVar24,plVar13,0,0);
              if (lVar10 != 0) {
                /*Atlas.UI.PaginationDotController$$ScrollToTarget*/ func_0x014b600c(lVar10,0);
                /*Atlas.UI.UIAtlasButton$$PlayAnimation*/ func_0x01515608(lVar15,lVar11,0);
                uVar9 = *(ulong *)(uVar16 + 0x70);
                if (uVar9 != 0) {
                  iVar8 = *(int *)(uVar9 + 0x18);
                  uVar2 = iVar8 - 1;
                  uVar24 = *(undefined8 *)(puVar5 + -0xc0);
                  uVar12 = *(undefined8 *)(puVar5 + -0xb8);
                  *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0xb0);
                  *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(puVar5 + -0xa8);
                  *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(puVar5 + -0xa0);
                  *(undefined8 *)(puVar5 + -0x98) = *(undefined8 *)(puVar5 + -0x98);
                  uVar21 = *(uint *)(uVar9 + 0x18);
                  uVar16 = uVar9;
                  uVar18 = uRam0000000003d3d9c0;
                  if (uVar21 <= uVar2) {
                    uVar16 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    uVar21 = *(uint *)(uVar9 + 0x18);
                  }
                  uVar21 = uVar21 - 1;
                  *(uint *)(uVar9 + 0x18) = uVar21;
                  if (uVar21 - uVar2 != 0 && (int)uVar2 <= (int)uVar21) {
                    uVar18 = *(undefined8 *)(uVar9 + 0x10);
                    uVar16 = /*System.Array$$Copy*/ func_0x0292b4cc(uVar18,iVar8,uVar18,(ulong)uVar2,uVar21 - uVar2,0);
                    uVar21 = *(uint *)(uVar9 + 0x18);
                  }
                  lVar11 = *(long *)(uVar9 + 0x10);
                  if (lVar11 == 0) {
                    func_0x00f78af4();
                  }
                  else if (uVar21 < *(uint *)(lVar11 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)uVar21 * 0x18;
                    *(undefined8 *)(lVar11 + 0x20) = 0;
                    *(undefined8 *)(lVar11 + 0x28) = 0;
                    *(undefined8 *)(lVar11 + 0x30) = 0;
                    *(int *)(uVar9 + 0x1c) = *(int *)(uVar9 + 0x1c) + 1;
                    return uVar16;
                  }
                  uVar19 = func_0x00f78b24();
                  auVar28 = func_0x00f78ac0(uVar19,0);
                  uVar16 = auVar28._0_8_;
                  *(undefined8 *)(puVar5 + -0xe0) = uVar24;
                  *(undefined8 *)(puVar5 + -0xd8) = uVar12;
                  *(ulong *)(puVar5 + -0xd0) = (ulong)uVar2;
                  *(ulong *)(puVar5 + -200) = uVar9;
                  *(undefined1 **)(puVar5 + -0xc0) = puVar5 + -0xa0;
                  *(undefined **)(puVar5 + -0xb8) =
                       &
                       System_Collections_Generic_List_SingleplayerOverviewScreen_QueuedAnim___RemoveRange
                  ;
                  iVar8 = auVar28._8_4_;
                  iVar22 = (int)uVar18;
                  uVar9 = uVar16;
                  if (iVar8 < 0) {
                    uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
                  }
                  if (iVar22 < 0) {
                    uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
                  }
                  if (*(int *)(uVar16 + 0x18) - iVar8 < iVar22) {
                    uVar9 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
                  }
                  if (0 < iVar22) {
                    iVar3 = *(int *)(uVar16 + 0x18) - iVar22;
                    *(int *)(uVar16 + 0x18) = iVar3;
                    if (iVar3 - iVar8 != 0 && iVar8 <= iVar3) {
                      /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(uVar16 + 0x10),iVar22 + iVar8,
                                      *(undefined8 *)(uVar16 + 0x10),auVar28._8_8_,iVar3 - iVar8,0);
                      iVar3 = *(int *)(uVar16 + 0x18);
                    }
                    uVar9 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar16 + 0x10),iVar3,uVar18,0);
                    *(int *)(uVar16 + 0x1c) = *(int *)(uVar16 + 0x1c) + 1;
                  }
                  return uVar9;
                }
              }
            }
          }
        }
      }
    }
  }
  auVar28 = func_0x00f78af4();
  *(long *)(puVar5 + -0x110) = lVar10;
  *(long *)(puVar5 + -0x108) = lVar11;
  *(long *)(puVar5 + -0x100) = lVar15;
  *(ulong *)(puVar5 + -0xf8) = uVar16;
  *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0xa0;
  *(undefined **)(puVar5 + -0xe8) = &Atlas_UI_Screens_SingleplayerOverviewScreen__ButtonPressed;
  if ((bRam0000000003eb4cc7 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d41318);
    func_0x00f78a20(0x3d79010);
    bRam0000000003eb4cc7 = 1;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(auVar28._0_8_,uRam0000000003d41318);
  if (lVar11 == 0) {
    auVar29 = func_0x00f78af4();
    puVar6 = puVar5 + -0x150;
    *(long **)(puVar5 + -0x150) = unaff_x24;
    *(undefined8 *)(puVar5 + -0x148) = uVar24;
    *(undefined8 *)(puVar5 + -0x140) = 0x3d41318;
    *(undefined8 *)(puVar5 + -0x138) = 0x3eb4000;
    *(undefined1 (*) [16])(puVar5 + -0x130) = auVar28;
    *(undefined1 **)(puVar5 + -0x120) = puVar5 + -0xf0;
    *(undefined **)(puVar5 + -0x118) =
         &Atlas_UI_Screens_SingleplayerOverviewScreen__LockedButtonPressed;
    puVar25 = puVar5 + -0x120;
    uVar12 = 0x3eb4000;
    uVar24 = 0x3d41320;
    if ((bRam0000000003eb4cc8 & 1) == 0) {
      func_0x00f78a20(0x3d57260);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d29328);
      func_0x00f78a20(0x3d41320);
      func_0x00f78a20(0x3d79018);
      bRam0000000003eb4cc8 = 1;
    }
    puVar26 = &UNK_014fc654;
    uVar9 = /*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x10);
    if (lVar11 != 0) {
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Atlas.UI.Screens.SingleplayerOverviewScreen.ContinueSelected$$Invoke*/ func_0x0156a934(lVar11,auVar28._8_8_,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
    }
    puVar25 = *(undefined1 **)(puVar5 + -0xf0);
    puVar26 = *(undefined **)(puVar5 + -0xe8);
    auVar29._8_8_ = *(undefined8 *)(puVar5 + -0x100);
    auVar29._0_8_ = *(undefined8 *)(puVar5 + -0xf8);
    puVar6 = puVar5 + -0xe0;
    uVar24 = *(undefined8 *)(puVar5 + -0x110);
    uVar12 = *(undefined8 *)(puVar5 + -0x108);
    uVar9 = /*STR('event:/UI/Front_End/GeneralButton2')*/ uRam0000000003d79010;
  }
  *(undefined8 *)(puVar6 + -0x30) = uVar24;
  *(undefined8 *)(puVar6 + -0x28) = uVar12;
  *(long *)(puVar6 + -0x20) = auVar29._8_8_;
  *(long *)(puVar6 + -0x18) = auVar29._0_8_;
  *(undefined1 **)(puVar6 + -0x10) = puVar25;
  *(undefined **)(puVar6 + -8) = puVar26;
  uVar12 = 0x3eb4000;
  uVar16 = uVar9;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    uVar16 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar16;
  }
  lVar11 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar11 != 0) {
    uVar16 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar11,uVar9,uRam0000000003d2faf8);
    if ((int)uVar16 == 0) {
      return uVar16;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar11 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar11 != 0)) &&
       (uVar16 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar11,uVar9,uRam0000000003d2fb00), uVar16 != 0)) {
      *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)(puVar6 + -0x20);
      *(undefined8 *)(puVar6 + -0x18) = *(undefined8 *)(puVar6 + -0x18);
      *(undefined8 *)(puVar6 + -0x10) = *(undefined8 *)(puVar6 + -0x10);
      *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar16,0,0);
      return uVar16;
    }
  }
  plVar13 = (long *)func_0x00f78af4();
  *(undefined8 *)(puVar6 + -0x70) = unaff_d9;
  *(ulong *)(puVar6 + -0x68) = (ulong)(uint)extraout_s0;
  *(undefined8 *)(puVar6 + -0x60) = uVar24;
  *(undefined8 *)(puVar6 + -0x58) = 0x3eb4000;
  *(undefined8 *)(puVar6 + -0x50) = 0x3d25580;
  *(ulong *)(puVar6 + -0x48) = uVar9;
  *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
  *(undefined **)(puVar6 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar17 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar13,0);
  if ((plVar17 != (long *)0x0) && (*plVar17 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar19 = func_0x00f78e5c(plVar17);
    *(long **)(puVar6 + -0x90) = plVar17;
    *(long **)(puVar6 + -0x88) = plVar13;
    *(undefined1 **)(puVar6 + -0x80) = puVar6 + -0x40;
    *(undefined **)(puVar6 + -0x78) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
    lVar11 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    uVar18 = *(undefined8 *)(puVar6 + -0x90);
    *(undefined8 *)(puVar6 + -0xa0) = uVar24;
    *(undefined8 *)(puVar6 + -0x98) = 0x3eb4000;
    *(undefined8 *)(puVar6 + -0x90) = uVar18;
    *(undefined8 *)(puVar6 + -0x88) = *(undefined8 *)(puVar6 + -0x88);
    *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x80);
    *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x78);
    if (lVar11 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar20 = func_0x00f78aec();
      uVar19 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar20,uVar19,0);
    }
    else {
      uVar12 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar9 = (*pcRam0000000003ec01d0)(uVar19);
      if ((uVar9 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (*pcRam0000000003ec01e0)(uVar19,lVar11);
        return uVar9;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar20 = func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar20,uVar18,0);
      uVar18 = uVar19;
    }
    uVar19 = func_0x00f78a24(0x3d5a8a8);
    auVar28 = func_0x00f78ac0(uVar20,uVar19);
    *(undefined8 *)(puVar6 + -0xd0) = uVar24;
    *(undefined8 *)(puVar6 + -200) = uVar12;
    *(undefined8 *)(puVar6 + -0xc0) = uVar18;
    *(undefined8 *)(puVar6 + -0xb8) = uVar20;
    *(undefined1 **)(puVar6 + -0xb0) = puVar6 + -0x80;
    *(undefined **)(puVar6 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*pcRam0000000003ec01e0)(auVar28._0_8_,auVar28._8_8_);
    return uVar9;
  }
  fVar27 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar24 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar27 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                           plVar17,4,0);
  uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar24,uRam0000000003d5e780);
  *(undefined8 *)(puVar6 + -0xa0) = 0x3d5e780;
  *(undefined8 *)(puVar6 + -0x98) = 0x3d5e868;
  *(long **)(puVar6 + -0x90) = plVar17;
  *(long **)(puVar6 + -0x88) = plVar13;
  *(undefined1 **)(puVar6 + -0x80) = puVar6 + -0x40;
  *(undefined **)(puVar6 + -0x78) = &UNK_01513b44;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar13,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((uVar9 != 0) && (*(char *)(uVar9 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar8 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar8 != 0) {
      lVar11 = func_0x00f78adc(plVar13,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar16 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar11,0,0);
      if ((uVar16 & 1) == 0) {
        if (plVar13 == (long *)0x0) goto code_r0x018eef34;
        uVar24 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
      }
      else {
        if (lVar11 == 0) {
code_r0x018eef34:
          auVar28 = func_0x00f78af4();
          uVar16 = auVar28._0_8_;
          *(undefined8 *)(puVar6 + -0xd0) = 0x3d5e780;
          *(long *)(puVar6 + -200) = lVar11;
          *(long **)(puVar6 + -0xc0) = plVar13;
          *(ulong *)(puVar6 + -0xb8) = uVar9;
          *(undefined1 **)(puVar6 + -0xb0) = puVar6 + -0x80;
          *(undefined **)(puVar6 + -0xa8) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((uVar16 != 0) && (*(char *)(uVar16 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar16,auVar28._8_8_,cVar1 != '\0',0);
          }
          return uVar16;
        }
        uVar24 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar11,0);
      }
      *(undefined8 *)(uVar9 + 200) = uVar24;
    }
    *(long **)(uVar9 + 0x48) = plVar13;
  }
  return uVar9;
}



// ============================================================
// RVA: 0x14fbf70 | Atlas.UI.Screens.SingleplayerOverviewScreen.SetLockedMaterial
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fc650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x014fc654) */
/* WARNING: Removing unreachable block (ram,0x014fc664) */
/* WARNING: Removing unreachable block (ram,0x014fc66c) */
/* WARNING: Removing unreachable block (ram,0x014fc674) */
/* WARNING: Removing unreachable block (ram,0x014fc6ac) */
/* WARNING: Removing unreachable block (ram,0x014fc6b0) */
/* WARNING: Removing unreachable block (ram,0x014fc6d8) */
/* WARNING: Removing unreachable block (ram,0x014fc704) */
/* WARNING: Removing unreachable block (ram,0x014fc744) */
/* WARNING: Removing unreachable block (ram,0x014fc770) */
/* WARNING: Removing unreachable block (ram,0x01cb5944) */
/* WARNING: Removing unreachable block (ram,0x01cb5968) */
/* WARNING: Removing unreachable block (ram,0x01cb5950) */
/* WARNING: Removing unreachable block (ram,0x014fc6e0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_SingleplayerOverviewScreen__SetLockedMaterial
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  int iVar7;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int extraout_w1;
  uint uVar17;
  undefined8 unaff_x19;
  long lVar18;
  int iVar19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 unaff_x22;
  long lVar23;
  undefined8 unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x29;
  undefined1 *puVar24;
  undefined8 unaff_x30;
  undefined *puVar25;
  float extraout_s0;
  float fVar26;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  auVar27._8_8_ = param_5;
  auVar27._0_8_ = param_4;
  while( true ) {
    lVar18 = auVar27._8_8_;
    puVar9 = auVar27._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar20 = 0x3d41310;
    if ((bRam0000000003eb4cc5 & 1) == 0) {
      func_0x00f78a20(0x3d329c8);
      func_0x00f78a20(0x3d329d0);
      func_0x00f78a20(0x3d329d8);
      func_0x00f78a20(0x3d3b180);
      func_0x00f78a20(0x3d23298);
      func_0x00f78a20(0x3d41310);
      bRam0000000003eb4cc5 = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar9,uRam0000000003d41310);
    if (lVar8 != 0) {
      uVar20 = *(undefined8 *)(lVar8 + 0x70);
      puVar9 = (undefined8 *)func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(puVar9,uVar20,0);
      if (lVar18 != 0) {
        *(undefined8 **)(lVar18 + 0x90) = puVar9;
        if (*(long *)(lVar18 + 0x88) != 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)register0x00000008 + -0x48),*(long *)(lVar18 + 0x88),
                          uRam0000000003d3b180);
          while( true ) {
            uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)register0x00000008 + -0x48),
                                     uRam0000000003d329d0);
            if ((uVar10 & 1) == 0) {
              uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)register0x00000008 + -0x48),
                                       uRam0000000003d329c8);
              return uVar10;
            }
            plVar11 = *(long **)((long)register0x00000008 + -0x38);
            if (plVar11 == (long *)0x0) break;
            (**(code **)(*plVar11 + 0x348))
                      (plVar11,*(undefined8 *)(lVar18 + 0x90),*(undefined8 *)(*plVar11 + 0x350));
          }
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x14fc0b8);
          (*pcVar4)();
        }
      }
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar11 = (long *)___cxa_begin_catch();
      lVar18 = *plVar11;
      ___cxa_end_catch();
      uVar10 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)register0x00000008 + -0x48),*puVar9);
      if (lVar18 == 0) {
        return uVar10;
      }
      func_0x00f78ac0(lVar18,0);
    }
    auVar27 = __Unwind_Resume();
    lVar8 = auVar27._8_8_;
    *(long **)((long)register0x00000008 + -0x90) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x78) = uVar20;
    *(undefined8 **)((long)register0x00000008 + -0x70) = puVar9;
    *(long *)((long)register0x00000008 + -0x68) = lVar18;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x58) =
         &Atlas_UI_Screens_SingleplayerOverviewScreen__LockButton;
    lVar18 = 0x3eb4000;
    if ((bRam0000000003eb4cc6 & 1) == 0) {
      func_0x00f78a20(0x3d534e8);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d25578);
      func_0x00f78a20(0x3d41310);
      bRam0000000003eb4cc6 = 1;
    }
    lVar23 = 0x3eb4000;
    if (lVar8 == 0) break;
    lVar21 = *(long *)(lVar8 + 0x18);
    if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar18 = 0;
    lVar23 = 0x3d25578;
    if (lVar21 == 0) break;
    unaff_x23 = 0x3d41000;
    /*Atlas.UI.UIAtlasButton$$PlayAnimation*/ func_0x01515608(lVar21,*(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 4),0);
    lVar18 = *(long *)(lVar8 + 0x30);
    lVar21 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(auVar27._0_8_,uRam0000000003d41310);
    if (lVar21 == 0) break;
    param_2 = *(float *)(lVar21 + 0x8c);
    param_3 = *(float *)(lVar21 + 0x90);
    uVar6 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)(lVar21 + 0x88),param_2,param_3,
                            *(undefined4 *)(lVar21 + 0x94),0);
    lVar23 = 0x3d25578;
    if (lVar18 == 0) break;
    lVar23 = 0x3d53000;
    unaff_x23 = 0x3d23000;
    /*TMPro.TMP_Text$$set_outlineColor*/ func_0x031af2f4(lVar18,uVar6,0);
    lVar18 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar8,uRam0000000003d534e8);
    Atlas_UI_Screens_SingleplayerOverviewScreen__SetupLeagueBadgeRepresentation
              (auVar27._0_8_,lVar18,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar18,0,0);
    if (iVar7 != 0) {
      if (((lVar18 == 0) || (*(long *)(lVar18 + 0x20) == 0)) ||
         (lVar8 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(*(long *)(lVar18 + 0x20),0), lVar8 == 0)) break;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,0,0);
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x24 = *(long **)((long)register0x00000008 + -0x90);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
  }
  uVar12 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = unaff_d8;
  *(long **)((long)register0x00000008 + -0xd0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -200) = unaff_x23;
  *(long *)((long)register0x00000008 + -0xc0) = lVar23;
  *(long *)((long)register0x00000008 + -0xb8) = lVar18;
  *(undefined1 (*) [16])((long)register0x00000008 + -0xb0) = auVar27;
  *(undefined1 **)((long)register0x00000008 + -0xa0) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined **)((long)register0x00000008 + -0x98) =
       &Atlas_UI_Screens_SingleplayerOverviewScreen__OnUpdate;
  lVar8 = 0x3eb4000;
  uVar10 = uVar12;
  if ((bRam0000000003eb4cc4 & 1) == 0) {
    func_0x00f78a20(0x3d3d9c0);
    func_0x00f78a20(0x3d3d9d0);
    func_0x00f78a20(0x3d3d9d8);
    func_0x00f78a20(0x3d3e178);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d24a88);
    func_0x00f78a20(0x3d41310);
    func_0x00f78a20(0x3d41320);
    uVar10 = func_0x00f78a20(0x3d25608);
    bRam0000000003eb4cc4 = 1;
  }
  if (*(long *)(uVar12 + 0x70) != 0) {
    if (*(int *)(*(long *)(uVar12 + 0x70) + 0x18) < 1) {
      return uVar10;
    }
    lVar21 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar12,uRam0000000003d41320);
    if ((lVar21 != 0) && (*(long *)(lVar21 + 0x98) != 0)) {
      uVar10 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar21 + 0x98),uRam0000000003d3e178);
      if ((uVar10 & 1) != 0) {
        return uVar10;
      }
      if (*(int *)(uVar12 + 0x4c) != 2) {
        return uVar10;
      }
      fVar26 = *(float *)(uVar12 + 0x6c) - extraout_s0;
      *(float *)(uVar12 + 0x6c) = fVar26;
      if (0.0 < fVar26) {
        return uVar10;
      }
      if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined4 *)(uVar12 + 0x6c) = *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xb8) + 8);
      lVar21 = *(long *)(uVar12 + 0x70);
      lVar8 = 0;
      if (lVar21 != 0) {
        iVar7 = *(int *)(lVar21 + 0x18);
        if (iVar7 == 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar18 = *(long *)(lVar21 + 0x10) + (long)(iVar7 + -1) * 0x18;
        lVar8 = *(long *)(lVar18 + 0x28);
        lVar18 = *(long *)(lVar18 + 0x30);
        lVar21 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar12,uRam0000000003d41310);
        unaff_x23 = 0x3d41310;
        if (lVar21 != 0) {
          lVar23 = *(long *)(lVar21 + 0xb0);
          lVar21 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar12,uRam0000000003d41310);
          if (((lVar21 != 0) && (unaff_x23 = 0x3d41310, *(long *)(lVar21 + 0xb0) != 0)) &&
             (lVar8 != 0)) {
            unaff_x23 = *(undefined8 *)(*(long *)(lVar21 + 0xb0) + 0x18);
            lVar21 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0);
            if (lVar21 != 0) {
              unaff_x24 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar21,0);
              if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (unaff_x24 == (long *)0x0) {
                plVar11 = (long *)0x0;
              }
              else {
                plVar11 = unaff_x24;
                if (*unaff_x24 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                  plVar11 = (long *)0x0;
                }
              }
              /*Core.UI2.UIUtils$$ScrollTargetNormalizedPosition*/ func_0x02f91280(unaff_x23,plVar11,0,0);
              if (lVar23 != 0) {
                /*Atlas.UI.PaginationDotController$$ScrollToTarget*/ func_0x014b600c(lVar23,0);
                /*Atlas.UI.UIAtlasButton$$PlayAnimation*/ func_0x01515608(lVar8,lVar18,0);
                uVar10 = *(ulong *)(uVar12 + 0x70);
                if (uVar10 != 0) {
                  iVar7 = *(int *)(uVar10 + 0x18);
                  uVar2 = iVar7 - 1;
                  uVar20 = *(undefined8 *)((long)register0x00000008 + -0xc0);
                  uVar22 = *(undefined8 *)((long)register0x00000008 + -0xb8);
                  *(undefined8 *)((long)register0x00000008 + -0xb0) =
                       *(undefined8 *)((long)register0x00000008 + -0xb0);
                  *(undefined8 *)((long)register0x00000008 + -0xa8) =
                       *(undefined8 *)((long)register0x00000008 + -0xa8);
                  *(undefined8 *)((long)register0x00000008 + -0xa0) =
                       *(undefined8 *)((long)register0x00000008 + -0xa0);
                  *(undefined8 *)((long)register0x00000008 + -0x98) =
                       *(undefined8 *)((long)register0x00000008 + -0x98);
                  uVar17 = *(uint *)(uVar10 + 0x18);
                  uVar12 = uVar10;
                  uVar14 = uRam0000000003d3d9c0;
                  if (uVar17 <= uVar2) {
                    uVar12 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    uVar17 = *(uint *)(uVar10 + 0x18);
                  }
                  uVar17 = uVar17 - 1;
                  *(uint *)(uVar10 + 0x18) = uVar17;
                  if (uVar17 - uVar2 != 0 && (int)uVar2 <= (int)uVar17) {
                    uVar14 = *(undefined8 *)(uVar10 + 0x10);
                    uVar12 = /*System.Array$$Copy*/ func_0x0292b4cc(uVar14,iVar7,uVar14,(ulong)uVar2,uVar17 - uVar2,0);
                    uVar17 = *(uint *)(uVar10 + 0x18);
                  }
                  lVar18 = *(long *)(uVar10 + 0x10);
                  if (lVar18 == 0) {
                    func_0x00f78af4();
                  }
                  else if (uVar17 < *(uint *)(lVar18 + 0x18)) {
                    lVar18 = lVar18 + (long)(int)uVar17 * 0x18;
                    *(undefined8 *)(lVar18 + 0x20) = 0;
                    *(undefined8 *)(lVar18 + 0x28) = 0;
                    *(undefined8 *)(lVar18 + 0x30) = 0;
                    *(int *)(uVar10 + 0x1c) = *(int *)(uVar10 + 0x1c) + 1;
                    return uVar12;
                  }
                  uVar15 = func_0x00f78b24();
                  auVar27 = func_0x00f78ac0(uVar15,0);
                  uVar12 = auVar27._0_8_;
                  *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar20;
                  *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar22;
                  *(ulong *)((long)register0x00000008 + -0xd0) = (ulong)uVar2;
                  *(ulong *)((long)register0x00000008 + -200) = uVar10;
                  *(undefined1 **)((long)register0x00000008 + -0xc0) =
                       (undefined1 *)((long)register0x00000008 + -0xa0);
                  *(undefined **)((long)register0x00000008 + -0xb8) =
                       &
                       System_Collections_Generic_List_SingleplayerOverviewScreen_QueuedAnim___RemoveRange
                  ;
                  iVar7 = auVar27._8_4_;
                  iVar19 = (int)uVar14;
                  uVar10 = uVar12;
                  if (iVar7 < 0) {
                    uVar10 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
                  }
                  if (iVar19 < 0) {
                    uVar10 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
                  }
                  if (*(int *)(uVar12 + 0x18) - iVar7 < iVar19) {
                    uVar10 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
                  }
                  if (0 < iVar19) {
                    iVar3 = *(int *)(uVar12 + 0x18) - iVar19;
                    *(int *)(uVar12 + 0x18) = iVar3;
                    if (iVar3 - iVar7 != 0 && iVar7 <= iVar3) {
                      /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(uVar12 + 0x10),iVar19 + iVar7,
                                      *(undefined8 *)(uVar12 + 0x10),auVar27._8_8_,iVar3 - iVar7,0);
                      iVar3 = *(int *)(uVar12 + 0x18);
                    }
                    uVar10 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar12 + 0x10),iVar3,uVar14,0);
                    *(int *)(uVar12 + 0x1c) = *(int *)(uVar12 + 0x1c) + 1;
                  }
                  return uVar10;
                }
              }
            }
          }
        }
      }
    }
  }
  auVar27 = func_0x00f78af4();
  *(long *)((long)register0x00000008 + -0x110) = lVar23;
  *(long *)((long)register0x00000008 + -0x108) = lVar18;
  *(long *)((long)register0x00000008 + -0x100) = lVar8;
  *(ulong *)((long)register0x00000008 + -0xf8) = uVar12;
  *(undefined1 **)((long)register0x00000008 + -0xf0) =
       (undefined1 *)((long)register0x00000008 + -0xa0);
  *(undefined **)((long)register0x00000008 + -0xe8) =
       &Atlas_UI_Screens_SingleplayerOverviewScreen__ButtonPressed;
  if ((bRam0000000003eb4cc7 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d41318);
    func_0x00f78a20(0x3d79010);
    bRam0000000003eb4cc7 = 1;
  }
  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(auVar27._0_8_,uRam0000000003d41318);
  if (lVar18 == 0) {
    auVar28 = func_0x00f78af4();
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x150);
    *(long **)((long)register0x00000008 + -0x150) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x148) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x140) = 0x3d41318;
    *(undefined8 *)((long)register0x00000008 + -0x138) = 0x3eb4000;
    *(undefined1 (*) [16])((long)register0x00000008 + -0x130) = auVar27;
    *(undefined1 **)((long)register0x00000008 + -0x120) =
         (undefined1 *)((long)register0x00000008 + -0xf0);
    *(undefined **)((long)register0x00000008 + -0x118) =
         &Atlas_UI_Screens_SingleplayerOverviewScreen__LockedButtonPressed;
    puVar24 = (undefined1 *)((long)register0x00000008 + -0x120);
    uVar22 = 0x3eb4000;
    uVar20 = 0x3d41320;
    if ((bRam0000000003eb4cc8 & 1) == 0) {
      func_0x00f78a20(0x3d57260);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d29328);
      func_0x00f78a20(0x3d41320);
      func_0x00f78a20(0x3d79018);
      bRam0000000003eb4cc8 = 1;
    }
    puVar25 = &UNK_014fc654;
    uVar10 = /*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018;
  }
  else {
    lVar18 = *(long *)(lVar18 + 0x10);
    if (lVar18 != 0) {
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Atlas.UI.Screens.SingleplayerOverviewScreen.ContinueSelected$$Invoke*/ func_0x0156a934(lVar18,auVar27._8_8_,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
    }
    puVar24 = *(undefined1 **)((long)register0x00000008 + -0xf0);
    puVar25 = *(undefined **)((long)register0x00000008 + -0xe8);
    auVar28._8_8_ = *(undefined8 *)((long)register0x00000008 + -0x100);
    auVar28._0_8_ = *(undefined8 *)((long)register0x00000008 + -0xf8);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0xe0);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x110);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0x108);
    uVar10 = /*STR('event:/UI/Front_End/GeneralButton2')*/ uRam0000000003d79010;
  }
  *(undefined8 *)(puVar5 + -0x30) = uVar20;
  *(undefined8 *)(puVar5 + -0x28) = uVar22;
  *(long *)(puVar5 + -0x20) = auVar28._8_8_;
  *(long *)(puVar5 + -0x18) = auVar28._0_8_;
  *(undefined1 **)(puVar5 + -0x10) = puVar24;
  *(undefined **)(puVar5 + -8) = puVar25;
  uVar22 = 0x3eb4000;
  uVar12 = uVar10;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    uVar12 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar12;
  }
  lVar18 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar18 != 0) {
    uVar12 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar18,uVar10,uRam0000000003d2faf8);
    if ((int)uVar12 == 0) {
      return uVar12;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar18 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar18 != 0)) &&
       (uVar12 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar18,uVar10,uRam0000000003d2fb00), uVar12 != 0)) {
      *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
      *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
      *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar12,0,0);
      return uVar12;
    }
  }
  plVar11 = (long *)func_0x00f78af4();
  *(undefined8 *)(puVar5 + -0x70) = unaff_d9;
  *(ulong *)(puVar5 + -0x68) = (ulong)(uint)extraout_s0;
  *(undefined8 *)(puVar5 + -0x60) = uVar20;
  *(undefined8 *)(puVar5 + -0x58) = 0x3eb4000;
  *(undefined8 *)(puVar5 + -0x50) = 0x3d25580;
  *(ulong *)(puVar5 + -0x48) = uVar10;
  *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar13 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar11,0);
  if ((plVar13 != (long *)0x0) && (*plVar13 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar15 = func_0x00f78e5c(plVar13);
    *(long **)(puVar5 + -0x90) = plVar13;
    *(long **)(puVar5 + -0x88) = plVar11;
    *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x40;
    *(undefined **)(puVar5 + -0x78) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
    lVar18 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    uVar14 = *(undefined8 *)(puVar5 + -0x90);
    *(undefined8 *)(puVar5 + -0xa0) = uVar20;
    *(undefined8 *)(puVar5 + -0x98) = 0x3eb4000;
    *(undefined8 *)(puVar5 + -0x90) = uVar14;
    *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(puVar5 + -0x88);
    *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x80);
    *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x78);
    if (lVar18 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar16 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar16,uVar15,0);
    }
    else {
      uVar22 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar10 = (*pcRam0000000003ec01d0)(uVar15);
      if ((uVar10 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (*pcRam0000000003ec01e0)(uVar15,lVar18);
        return uVar10;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar16 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar16,uVar14,0);
      uVar14 = uVar15;
    }
    uVar15 = func_0x00f78a24(0x3d5a8a8);
    auVar27 = func_0x00f78ac0(uVar16,uVar15);
    *(undefined8 *)(puVar5 + -0xd0) = uVar20;
    *(undefined8 *)(puVar5 + -200) = uVar22;
    *(undefined8 *)(puVar5 + -0xc0) = uVar14;
    *(undefined8 *)(puVar5 + -0xb8) = uVar16;
    *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0x80;
    *(undefined **)(puVar5 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar10 = (*pcRam0000000003ec01e0)(auVar27._0_8_,auVar27._8_8_);
    return uVar10;
  }
  fVar26 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar20 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar26 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                           plVar13,4,0);
  uVar10 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar20,uRam0000000003d5e780);
  *(undefined8 *)(puVar5 + -0xa0) = 0x3d5e780;
  *(undefined8 *)(puVar5 + -0x98) = 0x3d5e868;
  *(long **)(puVar5 + -0x90) = plVar13;
  *(long **)(puVar5 + -0x88) = plVar11;
  *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x40;
  *(undefined **)(puVar5 + -0x78) = &UNK_01513b44;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar11,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((uVar10 != 0) && (*(char *)(uVar10 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar7 != 0) {
      lVar18 = func_0x00f78adc(plVar11,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar12 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar18,0,0);
      if ((uVar12 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto code_r0x018eef34;
        uVar20 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      }
      else {
        if (lVar18 == 0) {
code_r0x018eef34:
          auVar27 = func_0x00f78af4();
          uVar12 = auVar27._0_8_;
          *(undefined8 *)(puVar5 + -0xd0) = 0x3d5e780;
          *(long *)(puVar5 + -200) = lVar18;
          *(long **)(puVar5 + -0xc0) = plVar11;
          *(ulong *)(puVar5 + -0xb8) = uVar10;
          *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0x80;
          *(undefined **)(puVar5 + -0xa8) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((uVar12 != 0) && (*(char *)(uVar12 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar12,auVar27._8_8_,cVar1 != '\0',0);
          }
          return uVar12;
        }
        uVar20 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar18,0);
      }
      *(undefined8 *)(uVar10 + 200) = uVar20;
    }
    *(long **)(uVar10 + 0x48) = plVar11;
  }
  return uVar10;
}



// ============================================================
// RVA: 0x14fc0f8 | Atlas.UI.Screens.SingleplayerOverviewScreen.LockButton
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fc650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x014fc654) */
/* WARNING: Removing unreachable block (ram,0x014fc664) */
/* WARNING: Removing unreachable block (ram,0x014fc66c) */
/* WARNING: Removing unreachable block (ram,0x014fc674) */
/* WARNING: Removing unreachable block (ram,0x014fc6ac) */
/* WARNING: Removing unreachable block (ram,0x014fc6b0) */
/* WARNING: Removing unreachable block (ram,0x014fc6d8) */
/* WARNING: Removing unreachable block (ram,0x014fc704) */
/* WARNING: Removing unreachable block (ram,0x014fc744) */
/* WARNING: Removing unreachable block (ram,0x014fc770) */
/* WARNING: Removing unreachable block (ram,0x01cb5944) */
/* WARNING: Removing unreachable block (ram,0x01cb5968) */
/* WARNING: Removing unreachable block (ram,0x01cb5950) */
/* WARNING: Removing unreachable block (ram,0x014fc6e0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_SingleplayerOverviewScreen__LockButton
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  int iVar7;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int extraout_w1;
  uint uVar17;
  long lVar18;
  long unaff_x19;
  int iVar19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar23;
  code *unaff_x30;
  undefined *puVar24;
  float extraout_s0;
  float fVar25;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  auVar26._8_8_ = param_5;
  auVar26._0_8_ = param_4;
  while( true ) {
    lVar18 = auVar26._8_8_;
    puVar8 = auVar26._0_8_;
    *(long **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar20 = 0x3eb4000;
    if ((bRam0000000003eb4cc6 & 1) == 0) {
      func_0x00f78a20(0x3d534e8);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d25578);
      func_0x00f78a20(0x3d41310);
      bRam0000000003eb4cc6 = 1;
    }
    if (lVar18 == 0) break;
    lVar21 = *(long *)(lVar18 + 0x18);
    if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar20 = 0;
    unaff_x22 = 0x3d25578;
    if (lVar21 == 0) break;
    unaff_x23 = 0x3d41000;
    /*Atlas.UI.UIAtlasButton$$PlayAnimation*/ func_0x01515608(lVar21,*(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 4),0);
    lVar20 = *(long *)(lVar18 + 0x30);
    lVar21 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41310);
    if (lVar21 == 0) break;
    param_2 = *(float *)(lVar21 + 0x8c);
    param_3 = *(float *)(lVar21 + 0x90);
    uVar6 = /*UnityEngine.Color32$$op_Implicit*/ func_0x03223758(*(undefined4 *)(lVar21 + 0x88),param_2,param_3,
                            *(undefined4 *)(lVar21 + 0x94),0);
    unaff_x22 = 0x3d25578;
    if (lVar20 == 0) break;
    unaff_x22 = 0x3d53000;
    unaff_x23 = 0x3d23000;
    /*TMPro.TMP_Text$$set_outlineColor*/ func_0x031af2f4(lVar20,uVar6,0);
    lVar20 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(lVar18,uRam0000000003d534e8);
    Atlas_UI_Screens_SingleplayerOverviewScreen__SetupLeagueBadgeRepresentation(puVar8,lVar20,0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar20,0,0);
    if (iVar7 != 0) {
      if (((lVar20 == 0) || (*(long *)(lVar20 + 0x20) == 0)) ||
         (lVar21 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(*(long *)(lVar20 + 0x20),0), lVar21 == 0)) break;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar21,0,0);
    }
    unaff_x24 = *(long **)((long)register0x00000008 + -0x40);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0x38);
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
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x22 = 0x3eb4000;
    unaff_x21 = 0x3d41310;
    if ((bRam0000000003eb4cc5 & 1) == 0) {
      func_0x00f78a20(0x3d329c8);
      func_0x00f78a20(0x3d329d0);
      func_0x00f78a20(0x3d329d8);
      func_0x00f78a20(0x3d3b180);
      func_0x00f78a20(0x3d23298);
      func_0x00f78a20(0x3d41310);
      bRam0000000003eb4cc5 = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
    lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(puVar8,uRam0000000003d41310);
    if (lVar20 != 0) {
      unaff_x21 = *(undefined8 *)(lVar20 + 0x70);
      puVar8 = (undefined8 *)func_0x00f78aec(/*UnityEngine.Material_TypeInfo*/ uRam0000000003d23298);
      /*UnityEngine.Material$$.ctor*/ func_0x03237ba4(puVar8,unaff_x21,0);
      if (lVar18 != 0) {
        *(undefined8 **)(lVar18 + 0x90) = puVar8;
        if (*(long *)(lVar18 + 0x88) != 0) {
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)((long)register0x00000008 + -0x48),*(long *)(lVar18 + 0x88),
                          uRam0000000003d3b180);
          while( true ) {
            uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)((long)register0x00000008 + -0x48),
                                    uRam0000000003d329d0);
            if ((uVar9 & 1) == 0) {
              uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)register0x00000008 + -0x48),
                                      uRam0000000003d329c8);
              return uVar9;
            }
            plVar10 = *(long **)((long)register0x00000008 + -0x38);
            if (plVar10 == (long *)0x0) break;
            (**(code **)(*plVar10 + 0x348))
                      (plVar10,*(undefined8 *)(lVar18 + 0x90),*(undefined8 *)(*plVar10 + 0x350));
          }
          func_0x00f78af4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x14fc0b8);
          (*pcVar4)();
        }
      }
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar10 = (long *)___cxa_begin_catch();
      lVar18 = *plVar10;
      ___cxa_end_catch();
      uVar9 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)register0x00000008 + -0x48),*puVar8);
      if (lVar18 == 0) {
        return uVar9;
      }
      func_0x00f78ac0(lVar18,0);
    }
    unaff_x30 = Atlas_UI_Screens_SingleplayerOverviewScreen__LockButton;
    auVar26 = __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    unaff_x19 = lVar18;
    unaff_x20 = puVar8;
  }
  uVar11 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x88) = unaff_d8;
  *(long **)((long)register0x00000008 + -0x80) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x78) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x70) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x68) = lVar20;
  *(undefined1 (*) [16])((long)register0x00000008 + -0x60) = auVar26;
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x48) =
       &Atlas_UI_Screens_SingleplayerOverviewScreen__OnUpdate;
  lVar18 = 0x3eb4000;
  uVar9 = uVar11;
  if ((bRam0000000003eb4cc4 & 1) == 0) {
    func_0x00f78a20(0x3d3d9c0);
    func_0x00f78a20(0x3d3d9d0);
    func_0x00f78a20(0x3d3d9d8);
    func_0x00f78a20(0x3d3e178);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d24a88);
    func_0x00f78a20(0x3d41310);
    func_0x00f78a20(0x3d41320);
    uVar9 = func_0x00f78a20(0x3d25608);
    bRam0000000003eb4cc4 = 1;
  }
  if (*(long *)(uVar11 + 0x70) != 0) {
    if (*(int *)(*(long *)(uVar11 + 0x70) + 0x18) < 1) {
      return uVar9;
    }
    lVar21 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar11,uRam0000000003d41320);
    if ((lVar21 != 0) && (*(long *)(lVar21 + 0x98) != 0)) {
      uVar9 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar21 + 0x98),uRam0000000003d3e178);
      if ((uVar9 & 1) != 0) {
        return uVar9;
      }
      if (*(int *)(uVar11 + 0x4c) != 2) {
        return uVar9;
      }
      fVar25 = *(float *)(uVar11 + 0x6c) - extraout_s0;
      *(float *)(uVar11 + 0x6c) = fVar25;
      if (0.0 < fVar25) {
        return uVar9;
      }
      if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined4 *)(uVar11 + 0x6c) = *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xb8) + 8);
      lVar21 = *(long *)(uVar11 + 0x70);
      lVar18 = 0;
      if (lVar21 != 0) {
        iVar7 = *(int *)(lVar21 + 0x18);
        if (iVar7 == 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar20 = *(long *)(lVar21 + 0x10) + (long)(iVar7 + -1) * 0x18;
        lVar18 = *(long *)(lVar20 + 0x28);
        lVar20 = *(long *)(lVar20 + 0x30);
        lVar21 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d41310);
        unaff_x23 = 0x3d41310;
        if (lVar21 != 0) {
          unaff_x22 = *(long *)(lVar21 + 0xb0);
          lVar21 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar11,uRam0000000003d41310);
          if (((lVar21 != 0) && (unaff_x23 = 0x3d41310, *(long *)(lVar21 + 0xb0) != 0)) &&
             (lVar18 != 0)) {
            unaff_x23 = *(undefined8 *)(*(long *)(lVar21 + 0xb0) + 0x18);
            lVar21 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar18,0);
            if (lVar21 != 0) {
              unaff_x24 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar21,0);
              if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (unaff_x24 == (long *)0x0) {
                plVar10 = (long *)0x0;
              }
              else {
                plVar10 = unaff_x24;
                if (*unaff_x24 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                  plVar10 = (long *)0x0;
                }
              }
              /*Core.UI2.UIUtils$$ScrollTargetNormalizedPosition*/ func_0x02f91280(unaff_x23,plVar10,0,0);
              if (unaff_x22 != 0) {
                /*Atlas.UI.PaginationDotController$$ScrollToTarget*/ func_0x014b600c(unaff_x22,0);
                /*Atlas.UI.UIAtlasButton$$PlayAnimation*/ func_0x01515608(lVar18,lVar20,0);
                uVar9 = *(ulong *)(uVar11 + 0x70);
                if (uVar9 != 0) {
                  iVar7 = *(int *)(uVar9 + 0x18);
                  uVar2 = iVar7 - 1;
                  uVar13 = *(undefined8 *)((long)register0x00000008 + -0x70);
                  uVar22 = *(undefined8 *)((long)register0x00000008 + -0x68);
                  *(undefined8 *)((long)register0x00000008 + -0x60) =
                       *(undefined8 *)((long)register0x00000008 + -0x60);
                  *(undefined8 *)((long)register0x00000008 + -0x58) =
                       *(undefined8 *)((long)register0x00000008 + -0x58);
                  *(undefined8 *)((long)register0x00000008 + -0x50) =
                       *(undefined8 *)((long)register0x00000008 + -0x50);
                  *(undefined8 *)((long)register0x00000008 + -0x48) =
                       *(undefined8 *)((long)register0x00000008 + -0x48);
                  uVar17 = *(uint *)(uVar9 + 0x18);
                  uVar11 = uVar9;
                  uVar14 = uRam0000000003d3d9c0;
                  if (uVar17 <= uVar2) {
                    uVar11 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    uVar17 = *(uint *)(uVar9 + 0x18);
                  }
                  uVar17 = uVar17 - 1;
                  *(uint *)(uVar9 + 0x18) = uVar17;
                  if (uVar17 - uVar2 != 0 && (int)uVar2 <= (int)uVar17) {
                    uVar14 = *(undefined8 *)(uVar9 + 0x10);
                    uVar11 = /*System.Array$$Copy*/ func_0x0292b4cc(uVar14,iVar7,uVar14,(ulong)uVar2,uVar17 - uVar2,0);
                    uVar17 = *(uint *)(uVar9 + 0x18);
                  }
                  lVar20 = *(long *)(uVar9 + 0x10);
                  if (lVar20 == 0) {
                    func_0x00f78af4();
                  }
                  else if (uVar17 < *(uint *)(lVar20 + 0x18)) {
                    lVar20 = lVar20 + (long)(int)uVar17 * 0x18;
                    *(undefined8 *)(lVar20 + 0x20) = 0;
                    *(undefined8 *)(lVar20 + 0x28) = 0;
                    *(undefined8 *)(lVar20 + 0x30) = 0;
                    *(int *)(uVar9 + 0x1c) = *(int *)(uVar9 + 0x1c) + 1;
                    return uVar11;
                  }
                  uVar15 = func_0x00f78b24();
                  auVar26 = func_0x00f78ac0(uVar15,0);
                  uVar11 = auVar26._0_8_;
                  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar13;
                  *(undefined8 *)((long)register0x00000008 + -0x88) = uVar22;
                  *(ulong *)((long)register0x00000008 + -0x80) = (ulong)uVar2;
                  *(ulong *)((long)register0x00000008 + -0x78) = uVar9;
                  *(undefined1 **)((long)register0x00000008 + -0x70) =
                       (undefined1 *)((long)register0x00000008 + -0x50);
                  *(undefined **)((long)register0x00000008 + -0x68) =
                       &
                       System_Collections_Generic_List_SingleplayerOverviewScreen_QueuedAnim___RemoveRange
                  ;
                  iVar7 = auVar26._8_4_;
                  iVar19 = (int)uVar14;
                  uVar9 = uVar11;
                  if (iVar7 < 0) {
                    uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
                  }
                  if (iVar19 < 0) {
                    uVar9 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
                  }
                  if (*(int *)(uVar11 + 0x18) - iVar7 < iVar19) {
                    uVar9 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
                  }
                  if (0 < iVar19) {
                    iVar3 = *(int *)(uVar11 + 0x18) - iVar19;
                    *(int *)(uVar11 + 0x18) = iVar3;
                    if (iVar3 - iVar7 != 0 && iVar7 <= iVar3) {
                      /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(uVar11 + 0x10),iVar19 + iVar7,
                                      *(undefined8 *)(uVar11 + 0x10),auVar26._8_8_,iVar3 - iVar7,0);
                      iVar3 = *(int *)(uVar11 + 0x18);
                    }
                    uVar9 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar11 + 0x10),iVar3,uVar14,0);
                    *(int *)(uVar11 + 0x1c) = *(int *)(uVar11 + 0x1c) + 1;
                  }
                  return uVar9;
                }
              }
            }
          }
        }
      }
    }
  }
  auVar26 = func_0x00f78af4();
  *(long *)((long)register0x00000008 + -0xc0) = unaff_x22;
  *(long *)((long)register0x00000008 + -0xb8) = lVar20;
  *(long *)((long)register0x00000008 + -0xb0) = lVar18;
  *(ulong *)((long)register0x00000008 + -0xa8) = uVar11;
  *(undefined1 **)((long)register0x00000008 + -0xa0) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined **)((long)register0x00000008 + -0x98) =
       &Atlas_UI_Screens_SingleplayerOverviewScreen__ButtonPressed;
  if ((bRam0000000003eb4cc7 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d41318);
    func_0x00f78a20(0x3d79010);
    bRam0000000003eb4cc7 = 1;
  }
  lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(auVar26._0_8_,uRam0000000003d41318);
  if (lVar20 == 0) {
    auVar27 = func_0x00f78af4();
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x100);
    *(long **)((long)register0x00000008 + -0x100) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0x3d41318;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = 0x3eb4000;
    *(undefined1 (*) [16])((long)register0x00000008 + -0xe0) = auVar26;
    *(undefined1 **)((long)register0x00000008 + -0xd0) =
         (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined **)((long)register0x00000008 + -200) =
         &Atlas_UI_Screens_SingleplayerOverviewScreen__LockedButtonPressed;
    puVar23 = (undefined1 *)((long)register0x00000008 + -0xd0);
    uVar22 = 0x3eb4000;
    uVar13 = 0x3d41320;
    if ((bRam0000000003eb4cc8 & 1) == 0) {
      func_0x00f78a20(0x3d57260);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d29328);
      func_0x00f78a20(0x3d41320);
      func_0x00f78a20(0x3d79018);
      bRam0000000003eb4cc8 = 1;
    }
    puVar24 = &UNK_014fc654;
    uVar9 = /*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018;
  }
  else {
    lVar20 = *(long *)(lVar20 + 0x10);
    if (lVar20 != 0) {
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Atlas.UI.Screens.SingleplayerOverviewScreen.ContinueSelected$$Invoke*/ func_0x0156a934(lVar20,auVar26._8_8_,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
    }
    puVar23 = *(undefined1 **)((long)register0x00000008 + -0xa0);
    puVar24 = *(undefined **)((long)register0x00000008 + -0x98);
    auVar27._8_8_ = *(undefined8 *)((long)register0x00000008 + -0xb0);
    auVar27._0_8_ = *(undefined8 *)((long)register0x00000008 + -0xa8);
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x90);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    uVar22 = *(undefined8 *)((long)register0x00000008 + -0xb8);
    uVar9 = /*STR('event:/UI/Front_End/GeneralButton2')*/ uRam0000000003d79010;
  }
  *(undefined8 *)(puVar5 + -0x30) = uVar13;
  *(undefined8 *)(puVar5 + -0x28) = uVar22;
  *(long *)(puVar5 + -0x20) = auVar27._8_8_;
  *(long *)(puVar5 + -0x18) = auVar27._0_8_;
  *(undefined1 **)(puVar5 + -0x10) = puVar23;
  *(undefined **)(puVar5 + -8) = puVar24;
  uVar22 = 0x3eb4000;
  uVar11 = uVar9;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    uVar11 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar11;
  }
  lVar20 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar20 != 0) {
    uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar20,uVar9,uRam0000000003d2faf8);
    if ((int)uVar11 == 0) {
      return uVar11;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar20 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar20 != 0)) &&
       (uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar20,uVar9,uRam0000000003d2fb00), uVar11 != 0)) {
      *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
      *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
      *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar11,0,0);
      return uVar11;
    }
  }
  plVar10 = (long *)func_0x00f78af4();
  *(undefined8 *)(puVar5 + -0x70) = unaff_d9;
  *(ulong *)(puVar5 + -0x68) = (ulong)(uint)extraout_s0;
  *(undefined8 *)(puVar5 + -0x60) = uVar13;
  *(undefined8 *)(puVar5 + -0x58) = 0x3eb4000;
  *(undefined8 *)(puVar5 + -0x50) = 0x3d25580;
  *(ulong *)(puVar5 + -0x48) = uVar9;
  *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar12 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar10,0);
  if ((plVar12 != (long *)0x0) && (*plVar12 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar15 = func_0x00f78e5c(plVar12);
    *(long **)(puVar5 + -0x90) = plVar12;
    *(long **)(puVar5 + -0x88) = plVar10;
    *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x40;
    *(undefined **)(puVar5 + -0x78) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
    lVar20 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    uVar14 = *(undefined8 *)(puVar5 + -0x90);
    *(undefined8 *)(puVar5 + -0xa0) = uVar13;
    *(undefined8 *)(puVar5 + -0x98) = 0x3eb4000;
    *(undefined8 *)(puVar5 + -0x90) = uVar14;
    *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(puVar5 + -0x88);
    *(undefined8 *)(puVar5 + -0x80) = *(undefined8 *)(puVar5 + -0x80);
    *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x78);
    if (lVar20 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar16 = func_0x00f78aec();
      uVar15 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar16,uVar15,0);
    }
    else {
      uVar22 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar9 = (*pcRam0000000003ec01d0)(uVar15);
      if ((uVar9 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar9 = (*pcRam0000000003ec01e0)(uVar15,lVar20);
        return uVar9;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar16 = func_0x00f78aec();
      uVar14 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar16,uVar14,0);
      uVar14 = uVar15;
    }
    uVar15 = func_0x00f78a24(0x3d5a8a8);
    auVar26 = func_0x00f78ac0(uVar16,uVar15);
    *(undefined8 *)(puVar5 + -0xd0) = uVar13;
    *(undefined8 *)(puVar5 + -200) = uVar22;
    *(undefined8 *)(puVar5 + -0xc0) = uVar14;
    *(undefined8 *)(puVar5 + -0xb8) = uVar16;
    *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0x80;
    *(undefined **)(puVar5 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (*pcRam0000000003ec01e0)(auVar26._0_8_,auVar26._8_8_);
    return uVar9;
  }
  fVar25 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar13 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar25 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                           plVar12,4,0);
  uVar9 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar13,uRam0000000003d5e780);
  *(undefined8 *)(puVar5 + -0xa0) = 0x3d5e780;
  *(undefined8 *)(puVar5 + -0x98) = 0x3d5e868;
  *(long **)(puVar5 + -0x90) = plVar12;
  *(long **)(puVar5 + -0x88) = plVar10;
  *(undefined1 **)(puVar5 + -0x80) = puVar5 + -0x40;
  *(undefined **)(puVar5 + -0x78) = &UNK_01513b44;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar10,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((uVar9 != 0) && (*(char *)(uVar9 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar7 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar7 != 0) {
      lVar20 = func_0x00f78adc(plVar10,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar20,0,0);
      if ((uVar11 & 1) == 0) {
        if (plVar10 == (long *)0x0) goto code_r0x018eef34;
        uVar13 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
      }
      else {
        if (lVar20 == 0) {
code_r0x018eef34:
          auVar26 = func_0x00f78af4();
          uVar11 = auVar26._0_8_;
          *(undefined8 *)(puVar5 + -0xd0) = 0x3d5e780;
          *(long *)(puVar5 + -200) = lVar20;
          *(long **)(puVar5 + -0xc0) = plVar10;
          *(ulong *)(puVar5 + -0xb8) = uVar9;
          *(undefined1 **)(puVar5 + -0xb0) = puVar5 + -0x80;
          *(undefined **)(puVar5 + -0xa8) = &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((uVar11 != 0) && (*(char *)(uVar11 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar11,auVar26._8_8_,cVar1 != '\0',0);
          }
          return uVar11;
        }
        uVar13 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar20,0);
      }
      *(undefined8 *)(uVar9 + 200) = uVar13;
    }
    *(long **)(uVar9 + 0x48) = plVar10;
  }
  return uVar9;
}



// ============================================================
// RVA: 0x14fc27c | Atlas.UI.Screens.SingleplayerOverviewScreen.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fc650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x014fc654) */
/* WARNING: Removing unreachable block (ram,0x014fc664) */
/* WARNING: Removing unreachable block (ram,0x014fc66c) */
/* WARNING: Removing unreachable block (ram,0x014fc674) */
/* WARNING: Removing unreachable block (ram,0x014fc6ac) */
/* WARNING: Removing unreachable block (ram,0x014fc6b0) */
/* WARNING: Removing unreachable block (ram,0x014fc6d8) */
/* WARNING: Removing unreachable block (ram,0x014fc704) */
/* WARNING: Removing unreachable block (ram,0x014fc744) */
/* WARNING: Removing unreachable block (ram,0x014fc770) */
/* WARNING: Removing unreachable block (ram,0x01cb5944) */
/* WARNING: Removing unreachable block (ram,0x01cb5968) */
/* WARNING: Removing unreachable block (ram,0x01cb5950) */
/* WARNING: Removing unreachable block (ram,0x014fc6e0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_SingleplayerOverviewScreen__OnUpdate
                (float param_1,float param_2,float param_3,ulong param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long **pplVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x24;
  undefined8 ******ppppppuVar18;
  undefined *puVar19;
  float fVar20;
  undefined8 unaff_d9;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 *****pppppuStack_60;
  undefined *puStack_58;
  
  lVar17 = 0x3eb4000;
  uVar6 = param_4;
  if ((bRam0000000003eb4cc4 & 1) == 0) {
    func_0x00f78a20(0x3d3d9c0);
    func_0x00f78a20(0x3d3d9d0);
    func_0x00f78a20(0x3d3d9d8);
    func_0x00f78a20(0x3d3e178);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d24a88);
    func_0x00f78a20(0x3d41310);
    func_0x00f78a20(0x3d41320);
    uVar6 = func_0x00f78a20(0x3d25608);
    bRam0000000003eb4cc4 = 1;
  }
  if (*(long *)(param_4 + 0x70) != 0) {
    if (*(int *)(*(long *)(param_4 + 0x70) + 0x18) < 1) {
      return uVar6;
    }
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41320);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x98) != 0)) {
      uVar6 = /*Atlas.UI.ModalManager<ToolTipScreen, ToolTipScreenBehaviour>$$IsModalQueuedOrShowing*/ func_0x025dfe70(*(long *)(lVar7 + 0x98),uRam0000000003d3e178);
      if ((uVar6 & 1) != 0) {
        return uVar6;
      }
      if (*(int *)(param_4 + 0x4c) != 2) {
        return uVar6;
      }
      fVar20 = *(float *)(param_4 + 0x6c) - param_1;
      *(float *)(param_4 + 0x6c) = fVar20;
      if (0.0 < fVar20) {
        return uVar6;
      }
      if (((*(ushort *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      *(undefined4 *)(param_4 + 0x6c) = *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xb8) + 8);
      lVar7 = *(long *)(param_4 + 0x70);
      lVar17 = 0;
      if (lVar7 != 0) {
        iVar5 = *(int *)(lVar7 + 0x18);
        if (iVar5 == 0) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar7 = *(long *)(lVar7 + 0x10) + (long)(iVar5 + -1) * 0x18;
        lVar17 = *(long *)(lVar7 + 0x28);
        unaff_x21 = *(undefined8 *)(lVar7 + 0x30);
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41310);
        unaff_x23 = 0x3d41310;
        if (lVar7 != 0) {
          unaff_x22 = *(long *)(lVar7 + 0xb0);
          lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41310);
          if (((lVar7 != 0) && (unaff_x23 = 0x3d41310, *(long *)(lVar7 + 0xb0) != 0)) &&
             (lVar17 != 0)) {
            unaff_x23 = *(undefined8 *)(*(long *)(lVar7 + 0xb0) + 0x18);
            lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar17,0);
            if (lVar7 != 0) {
              unaff_x24 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar7,0);
              if (((*(ushort *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.UI2.UIUtils_TypeInfo*/ lRam0000000003d25608 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              if (unaff_x24 == (long *)0x0) {
                plVar8 = (long *)0x0;
              }
              else {
                plVar8 = unaff_x24;
                if (*unaff_x24 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                  plVar8 = (long *)0x0;
                }
              }
              /*Core.UI2.UIUtils$$ScrollTargetNormalizedPosition*/ func_0x02f91280(unaff_x23,plVar8,0,0);
              if (unaff_x22 != 0) {
                /*Atlas.UI.PaginationDotController$$ScrollToTarget*/ func_0x014b600c(unaff_x22,0);
                /*Atlas.UI.UIAtlasButton$$PlayAnimation*/ func_0x01515608(lVar17,unaff_x21,0);
                uVar6 = *(ulong *)(param_4 + 0x70);
                if (uVar6 != 0) {
                  iVar5 = *(int *)(uVar6 + 0x18);
                  uVar2 = iVar5 - 1;
                  uVar15 = *(uint *)(uVar6 + 0x18);
                  uVar11 = uVar6;
                  uVar12 = uRam0000000003d3d9c0;
                  if (uVar15 <= uVar2) {
                    uVar11 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                    uVar15 = *(uint *)(uVar6 + 0x18);
                  }
                  uVar15 = uVar15 - 1;
                  *(uint *)(uVar6 + 0x18) = uVar15;
                  if (uVar15 - uVar2 != 0 && (int)uVar2 <= (int)uVar15) {
                    uVar12 = *(undefined8 *)(uVar6 + 0x10);
                    uVar11 = /*System.Array$$Copy*/ func_0x0292b4cc(uVar12,iVar5,uVar12,uVar2,uVar15 - uVar2,0);
                    uVar15 = *(uint *)(uVar6 + 0x18);
                  }
                  lVar17 = *(long *)(uVar6 + 0x10);
                  if (lVar17 == 0) {
                    func_0x00f78af4();
                  }
                  else if (uVar15 < *(uint *)(lVar17 + 0x18)) {
                    lVar17 = lVar17 + (long)(int)uVar15 * 0x18;
                    *(undefined8 *)(lVar17 + 0x20) = 0;
                    *(undefined8 *)(lVar17 + 0x28) = 0;
                    *(undefined8 *)(lVar17 + 0x30) = 0;
                    *(int *)(uVar6 + 0x1c) = *(int *)(uVar6 + 0x1c) + 1;
                    return uVar11;
                  }
                  uVar13 = func_0x00f78b24();
                  auVar22 = func_0x00f78ac0(uVar13,0);
                  uVar11 = auVar22._0_8_;
                  iVar5 = auVar22._8_4_;
                  iVar16 = (int)uVar12;
                  uVar6 = uVar11;
                  if (iVar5 < 0) {
                    uVar6 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0xd,4,0);
                  }
                  if (iVar16 < 0) {
                    uVar6 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa78(0x10,4,0);
                  }
                  if (*(int *)(uVar11 + 0x18) - iVar5 < iVar16) {
                    uVar6 = /*System.ThrowHelper$$ThrowArgumentException*/ func_0x029efc38(0x17,0);
                  }
                  if (0 < iVar16) {
                    iVar3 = *(int *)(uVar11 + 0x18) - iVar16;
                    *(int *)(uVar11 + 0x18) = iVar3;
                    if (iVar3 - iVar5 != 0 && iVar5 <= iVar3) {
                      /*System.Array$$Copy*/ func_0x0292b4cc(*(undefined8 *)(uVar11 + 0x10),iVar16 + iVar5,
                                      *(undefined8 *)(uVar11 + 0x10),auVar22._8_8_,iVar3 - iVar5,0);
                      iVar3 = *(int *)(uVar11 + 0x18);
                    }
                    uVar6 = /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(uVar11 + 0x10),iVar3,uVar12,0);
                    *(int *)(uVar11 + 0x1c) = *(int *)(uVar11 + 0x1c) + 1;
                  }
                  return uVar6;
                }
              }
            }
          }
        }
      }
    }
  }
  auVar22 = func_0x00f78af4();
  puStack_58 = &Atlas_UI_Screens_SingleplayerOverviewScreen__ButtonPressed;
  lStack_80 = unaff_x22;
  uStack_78 = unaff_x21;
  lStack_70 = lVar17;
  uStack_68 = param_4;
  pppppuStack_60 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4cc7 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d41318);
    func_0x00f78a20(0x3d79010);
    bRam0000000003eb4cc7 = 1;
  }
  lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(auVar22._0_8_,uRam0000000003d41318);
  if (lVar17 == 0) {
    auVar21 = func_0x00f78af4();
    pplVar4 = &plStack_c0;
    uStack_b0 = 0x3d41318;
    uStack_a8 = 0x3eb4000;
    puStack_88 = &Atlas_UI_Screens_SingleplayerOverviewScreen__LockedButtonPressed;
    ppppppuVar18 = &pppppuStack_90;
    uVar12 = 0x3eb4000;
    lVar17 = 0x3d41320;
    plStack_c0 = unaff_x24;
    uStack_b8 = unaff_x23;
    pppppuStack_90 = &pppppuStack_60;
    auStack_a0 = auVar22;
    if ((bRam0000000003eb4cc8 & 1) == 0) {
      func_0x00f78a20(0x3d57260);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d29328);
      func_0x00f78a20(0x3d41320);
      func_0x00f78a20(0x3d79018);
      bRam0000000003eb4cc8 = 1;
    }
    puVar19 = &UNK_014fc654;
    uVar6 = /*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018;
  }
  else {
    lVar17 = *(long *)(lVar17 + 0x10);
    if (lVar17 != 0) {
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Atlas.UI.Screens.SingleplayerOverviewScreen.ContinueSelected$$Invoke*/ func_0x0156a934(lVar17,auVar22._8_8_,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
    }
    auVar21._8_8_ = lStack_70;
    auVar21._0_8_ = uStack_68;
    pplVar4 = (long **)&stack0xffffffffffffffb0;
    uVar6 = /*STR('event:/UI/Front_End/GeneralButton2')*/ uRam0000000003d79010;
    uVar12 = uStack_78;
    lVar17 = lStack_80;
    ppppppuVar18 = (undefined8 ******)pppppuStack_60;
    puVar19 = puStack_58;
  }
  *(long *)((long)pplVar4 + -0x30) = lVar17;
  *(undefined8 *)((long)pplVar4 + -0x28) = uVar12;
  *(long *)((long)pplVar4 + -0x20) = auVar21._8_8_;
  *(long *)((long)pplVar4 + -0x18) = auVar21._0_8_;
  *(undefined8 *******)((long)pplVar4 + -0x10) = ppppppuVar18;
  *(undefined **)((long)pplVar4 + -8) = puVar19;
  uVar12 = 0x3eb4000;
  uVar11 = uVar6;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    uVar11 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return uVar11;
  }
  lVar7 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar7 != 0) {
    uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar7,uVar6,uRam0000000003d2faf8);
    if ((int)uVar11 == 0) {
      return uVar11;
    }
    if ((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
       (lVar7 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar7 != 0)) {
      uVar11 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar7,uVar6,uRam0000000003d2fb00);
      if (uVar11 != 0) {
        *(undefined8 *)((long)pplVar4 + -0x20) = *(undefined8 *)((long)pplVar4 + -0x20);
        *(undefined8 *)((long)pplVar4 + -0x18) = *(undefined8 *)((long)pplVar4 + -0x18);
        *(undefined8 *)((long)pplVar4 + -0x10) = *(undefined8 *)((long)pplVar4 + -0x10);
        *(undefined8 *)((long)pplVar4 + -8) = *(undefined8 *)((long)pplVar4 + -8);
        /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,uVar11,0,0);
        return uVar11;
      }
    }
  }
  plVar8 = (long *)func_0x00f78af4();
  *(undefined8 *)((long)pplVar4 + -0x70) = unaff_d9;
  *(ulong *)((long)pplVar4 + -0x68) = (ulong)(uint)param_1;
  *(long *)((long)pplVar4 + -0x60) = lVar17;
  *(undefined8 *)((long)pplVar4 + -0x58) = 0x3eb4000;
  *(undefined8 *)((long)pplVar4 + -0x50) = 0x3d25580;
  *(ulong *)((long)pplVar4 + -0x48) = uVar6;
  *(undefined1 **)((long)pplVar4 + -0x40) = (undefined1 *)((long)pplVar4 + -0x10);
  *(undefined **)((long)pplVar4 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar9 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar8,0);
  if ((plVar9 != (long *)0x0) && (*plVar9 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar10 = func_0x00f78e5c(plVar9);
    *(long **)((long)pplVar4 + -0x90) = plVar9;
    *(long **)((long)pplVar4 + -0x88) = plVar8;
    *(undefined1 **)((long)pplVar4 + -0x80) = (undefined1 *)((long)pplVar4 + -0x40);
    *(undefined **)((long)pplVar4 + -0x78) = &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
    lVar7 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    uVar13 = *(undefined8 *)((long)pplVar4 + -0x90);
    *(long *)((long)pplVar4 + -0xa0) = lVar17;
    *(undefined8 *)((long)pplVar4 + -0x98) = 0x3eb4000;
    *(undefined8 *)((long)pplVar4 + -0x90) = uVar13;
    *(undefined8 *)((long)pplVar4 + -0x88) = *(undefined8 *)((long)pplVar4 + -0x88);
    *(undefined8 *)((long)pplVar4 + -0x80) = *(undefined8 *)((long)pplVar4 + -0x80);
    *(undefined8 *)((long)pplVar4 + -0x78) = *(undefined8 *)((long)pplVar4 + -0x78);
    if (lVar7 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar14 = func_0x00f78aec();
      uVar10 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar14,uVar10,0);
    }
    else {
      uVar12 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar6 = (*pcRam0000000003ec01d0)(uVar10);
      if ((uVar6 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*pcRam0000000003ec01e0)(uVar10,lVar7);
        return uVar6;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar14 = func_0x00f78aec();
      uVar13 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar14,uVar13,0);
      uVar13 = uVar10;
    }
    uVar10 = func_0x00f78a24(0x3d5a8a8);
    auVar22 = func_0x00f78ac0(uVar14,uVar10);
    *(long *)((long)pplVar4 + -0xd0) = lVar17;
    *(undefined8 *)((long)pplVar4 + -200) = uVar12;
    *(undefined8 *)((long)pplVar4 + -0xc0) = uVar13;
    *(undefined8 *)((long)pplVar4 + -0xb8) = uVar14;
    *(undefined1 **)((long)pplVar4 + -0xb0) = (undefined1 *)((long)pplVar4 + -0x80);
    *(undefined **)((long)pplVar4 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*pcRam0000000003ec01e0)(auVar22._0_8_,auVar22._8_8_);
    return uVar6;
  }
  fVar20 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar12 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar20 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                           plVar9,4,0);
  uVar6 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar12,uRam0000000003d5e780);
  *(undefined8 *)((long)pplVar4 + -0xa0) = 0x3d5e780;
  *(undefined8 *)((long)pplVar4 + -0x98) = 0x3d5e868;
  *(long **)((long)pplVar4 + -0x90) = plVar9;
  *(long **)((long)pplVar4 + -0x88) = plVar8;
  *(undefined1 **)((long)pplVar4 + -0x80) = (undefined1 *)((long)pplVar4 + -0x40);
  *(undefined **)((long)pplVar4 + -0x78) = &UNK_01513b44;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar8,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((uVar6 != 0) && (*(char *)(uVar6 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar5 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar5 != 0) {
      lVar17 = func_0x00f78adc(plVar8,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar17,0,0);
      if ((uVar11 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto code_r0x018eef34;
        uVar12 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      }
      else {
        if (lVar17 == 0) {
code_r0x018eef34:
          auVar22 = func_0x00f78af4();
          uVar11 = auVar22._0_8_;
          *(undefined8 *)((long)pplVar4 + -0xd0) = 0x3d5e780;
          *(long *)((long)pplVar4 + -200) = lVar17;
          *(long **)((long)pplVar4 + -0xc0) = plVar8;
          *(ulong *)((long)pplVar4 + -0xb8) = uVar6;
          *(undefined1 **)((long)pplVar4 + -0xb0) = (undefined1 *)((long)pplVar4 + -0x80);
          *(undefined **)((long)pplVar4 + -0xa8) =
               &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((uVar11 != 0) && (*(char *)(uVar11 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(uVar11,auVar22._8_8_,cVar1 != '\0',0);
          }
          return uVar11;
        }
        uVar12 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar17,0);
      }
      *(undefined8 *)(uVar6 + 200) = uVar12;
    }
    *(long **)(uVar6 + 0x48) = plVar8;
  }
  return uVar6;
}



// ============================================================
// RVA: 0x14fc4fc | Atlas.UI.Screens.SingleplayerOverviewScreen.ButtonPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014fc650: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x014fc654) */
/* WARNING: Removing unreachable block (ram,0x014fc664) */
/* WARNING: Removing unreachable block (ram,0x014fc66c) */
/* WARNING: Removing unreachable block (ram,0x014fc674) */
/* WARNING: Removing unreachable block (ram,0x014fc6ac) */
/* WARNING: Removing unreachable block (ram,0x014fc6b0) */
/* WARNING: Removing unreachable block (ram,0x014fc6d8) */
/* WARNING: Removing unreachable block (ram,0x014fc704) */
/* WARNING: Removing unreachable block (ram,0x014fc744) */
/* WARNING: Removing unreachable block (ram,0x014fc770) */
/* WARNING: Removing unreachable block (ram,0x01cb5944) */
/* WARNING: Removing unreachable block (ram,0x01cb5968) */
/* WARNING: Removing unreachable block (ram,0x01cb5950) */
/* WARNING: Removing unreachable block (ram,0x014fc6e0) */
/* WARNING: Removing unreachable block (ram,0x025dfbac) */
/* WARNING: Removing unreachable block (ram,0x025dfbd4) */
/* WARNING: Removing unreachable block (ram,0x025dfc00) */
/* WARNING: Removing unreachable block (ram,0x025dfc04) */
/* WARNING: Removing unreachable block (ram,0x025dfc30) */
/* WARNING: Removing unreachable block (ram,0x025dfc54) */
/* WARNING: Removing unreachable block (ram,0x025dfc70) */
/* WARNING: Removing unreachable block (ram,0x025dfc80) */
/* WARNING: Removing unreachable block (ram,0x025dfcfc) */
/* WARNING: Removing unreachable block (ram,0x025dfd14) */
/* WARNING: Removing unreachable block (ram,0x025dfd88) */
/* WARNING: Removing unreachable block (ram,0x025dfdb8) */
/* WARNING: Removing unreachable block (ram,0x025dfdd8) */
/* WARNING: Removing unreachable block (ram,0x025dfde0) */
/* WARNING: Removing unreachable block (ram,0x025dfdec) */
/* WARNING: Removing unreachable block (ram,0x025dfdf8) */
/* WARNING: Removing unreachable block (ram,0x025dfe04) */
/* WARNING: Removing unreachable block (ram,0x025dfe0c) */
/* WARNING: Removing unreachable block (ram,0x025dfe1c) */
/* WARNING: Removing unreachable block (ram,0x025dfe24) */
/* WARNING: Removing unreachable block (ram,0x025dfe30) */
/* WARNING: Removing unreachable block (ram,0x025dfe34) */
/* WARNING: Removing unreachable block (ram,0x025dfe44) */
/* WARNING: Removing unreachable block (ram,0x025dfe48) */
/* WARNING: Removing unreachable block (ram,0x025dfe4c) */
/* WARNING: Removing unreachable block (ram,0x025dfd34) */
/* WARNING: Removing unreachable block (ram,0x025dfd58) */
/* WARNING: Removing unreachable block (ram,0x025dfd74) */
/* WARNING: Removing unreachable block (ram,0x025dfc88) */
/* WARNING: Removing unreachable block (ram,0x025dfcb4) */
/* WARNING: Removing unreachable block (ram,0x025dfce0) */
/* WARNING: Removing unreachable block (ram,0x025dfcd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_SingleplayerOverviewScreen__ButtonPressed
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
               undefined8 param_5)

{
  char cVar1;
  undefined1 auVar2 [16];
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar12;
  undefined8 unaff_x21;
  undefined8 uVar13;
  undefined8 unaff_x22;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  float fVar14;
  undefined4 unaff_s8;
  undefined4 unaff_00005104;
  undefined8 unaff_d9;
  undefined1 auVar15 [16];
  undefined1 *puStack_40;
  undefined *puStack_38;
  long lVar9;
  
  auVar2._8_8_ = unaff_x20;
  auVar2._0_8_ = unaff_x19;
  auVar15._8_8_ = unaff_x20;
  auVar15._0_8_ = unaff_x19;
  if ((bRam0000000003eb4cc7 & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d41318);
    func_0x00f78a20(0x3d79010);
    bRam0000000003eb4cc7 = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_4,uRam0000000003d41318);
  if (lVar4 == 0) {
    auVar15 = func_0x00f78af4();
    puStack_38 = &Atlas_UI_Screens_SingleplayerOverviewScreen__LockedButtonPressed;
    unaff_x29 = &puStack_40;
    unaff_x21 = 0x3eb4000;
    unaff_x22 = 0x3d41320;
    puStack_40 = &stack0xfffffffffffffff0;
    if ((bRam0000000003eb4cc8 & 1) == 0) {
      func_0x00f78a20(0x3d57260);
      func_0x00f78a20(0x3d3e188);
      func_0x00f78a20(0x3d29328);
      func_0x00f78a20(0x3d41320);
      func_0x00f78a20(0x3d79018);
      bRam0000000003eb4cc8 = 1;
    }
    unaff_x30 = &UNK_014fc654;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff90;
    lVar4 = /*STR('event:/UI/Front_End/GeneralButton3')*/ lRam0000000003d79018;
  }
  else {
    lVar12 = *(long *)(lVar4 + 0x10);
    lVar4 = /*STR('event:/UI/Front_End/GeneralButton2')*/ lRam0000000003d79010;
    if (lVar12 != 0) {
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Atlas.UI.Screens.SingleplayerOverviewScreen.ContinueSelected$$Invoke*/ func_0x0156a934(lVar12,param_5,**(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8),0);
      lVar4 = /*STR('event:/UI/Front_End/GeneralButton2')*/ lRam0000000003d79010;
      auVar15 = auVar2;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = auVar15._8_8_;
  *(long *)((long)register0x00000008 + -0x18) = auVar15._0_8_;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar13 = 0x3eb4000;
  lVar12 = lVar4;
  if ((bRam0000000003eb4db6 & 1) == 0) {
    func_0x00f78a20(0x3d2faf8,0);
    func_0x00f78a20(0x3d2fb00);
    lVar12 = func_0x00f78a20(0x3d25580);
    bRam0000000003eb4db6 = 1;
  }
  if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
    return lVar12;
  }
  lVar12 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
  if (lVar12 != 0) {
    lVar12 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar12,lVar4,uRam0000000003d2faf8);
    if ((int)lVar12 == 0) {
      return lVar12;
    }
    if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
        (lVar12 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar12 != 0)) &&
       (lVar12 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar12,lVar4,uRam0000000003d2fb00), lVar12 != 0)) {
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar12,0,0);
      return lVar12;
    }
  }
  plVar5 = (long *)func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x68) = CONCAT44(unaff_00005104,unaff_s8);
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0x3d25580;
  *(long *)((long)register0x00000008 + -0x48) = lVar4;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
  if ((bRam0000000003eb4d8b & 1) == 0) {
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d5e780);
    func_0x00f78a20(0x3d5e868);
    bRam0000000003eb4d8b = 1;
  }
  plVar6 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar5,0);
  if ((plVar6 != (long *)0x0) && (*plVar6 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
    uVar7 = func_0x00f78e5c(plVar6);
    *(long **)((long)register0x00000008 + -0x90) = plVar6;
    *(long **)((long)register0x00000008 + -0x88) = plVar5;
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x78) =
         &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
    lVar4 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar11;
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)((long)register0x00000008 + -0x88);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    if (lVar4 == 0) {
      func_0x00f78a24(0x3d23938,0,0);
      uVar10 = func_0x00f78aec();
      uVar7 = func_0x00f78a24(0x3d7b500);
      /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar10,uVar7,0);
    }
    else {
      uVar13 = 0x3ec0000;
      if (pcRam0000000003ec01d0 == (code *)0x0) {
        pcRam0000000003ec01d0 =
             (code *)func_0x00f789d4(
                                    "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                    );
      }
      uVar8 = (*pcRam0000000003ec01d0)(uVar7);
      if ((uVar8 & 1) != 0) {
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar4 = (*pcRam0000000003ec01e0)(uVar7,lVar4);
        return lVar4;
      }
      func_0x00f78a24(0x3d1fce8);
      uVar10 = func_0x00f78aec();
      uVar11 = func_0x00f78a24(0x3d6af80);
      /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar11,0);
      uVar11 = uVar7;
    }
    uVar7 = func_0x00f78a24(0x3d5a8a8);
    auVar15 = func_0x00f78ac0(uVar10,uVar7);
    *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -200) = uVar13;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar11;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar10;
    *(undefined1 **)((long)register0x00000008 + -0xb0) =
         (undefined1 *)((long)register0x00000008 + -0x80);
    *(undefined **)((long)register0x00000008 + -0xa8) =
         &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
    if (pcRam0000000003ec01e0 == (code *)0x0) {
      pcRam0000000003ec01e0 =
           (code *)func_0x00f789d4(
                                  "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                  );
    }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar4 = (*pcRam0000000003ec01e0)(auVar15._0_8_,auVar15._8_8_);
    return lVar4;
  }
  fVar14 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
  uVar13 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar14 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                           plVar6,4,0);
  lVar4 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar13,uRam0000000003d5e780);
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3d5e780;
  *(undefined8 *)((long)register0x00000008 + -0x98) = 0x3d5e868;
  *(long **)((long)register0x00000008 + -0x90) = plVar6;
  *(long **)((long)register0x00000008 + -0x88) = plVar5;
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x78) = &UNK_01513b44;
  if ((bRam0000000003eb66c1 & 1) == 0) {
    func_0x00f78a20(0x3d208f0,plVar5,uRam0000000003d5e868);
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb66c1 = 1;
  }
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
    if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    iVar3 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
    if (iVar3 != 0) {
      lVar12 = func_0x00f78adc(plVar5,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar12,0,0);
      if ((uVar8 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto code_r0x018eef34;
        uVar13 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      }
      else {
        if (lVar12 == 0) {
code_r0x018eef34:
          auVar15 = func_0x00f78af4();
          lVar9 = auVar15._0_8_;
          *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x3d5e780;
          *(long *)((long)register0x00000008 + -200) = lVar12;
          *(long **)((long)register0x00000008 + -0xc0) = plVar5;
          *(long *)((long)register0x00000008 + -0xb8) = lVar4;
          *(undefined1 **)((long)register0x00000008 + -0xb0) =
               (undefined1 *)((long)register0x00000008 + -0x80);
          *(undefined **)((long)register0x00000008 + -0xa8) =
               &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
          if ((bRam0000000003eb66c2 & 1) == 0) {
            func_0x00f78a20(0x3d20bc0);
            func_0x00f78a20(0x3d25440);
            bRam0000000003eb66c2 = 1;
          }
          if ((lVar9 != 0) && (*(char *)(lVar9 + 0xe8) != '\0')) {
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
            if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar9,auVar15._8_8_,cVar1 != '\0',0);
          }
          return lVar9;
        }
        uVar13 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar12,0);
      }
      *(undefined8 *)(lVar4 + 200) = uVar13;
    }
    *(long **)(lVar4 + 0x48) = plVar5;
  }
  return lVar4;
}



// ============================================================
// RVA: 0x14fc5cc | Atlas.UI.Screens.SingleplayerOverviewScreen.LockedButtonPressed
// ============================================================

undefined8 *
Atlas_UI_Screens_SingleplayerOverviewScreen__LockedButtonPressed
          (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  
  if ((bRam0000000003eb4cc8 & 1) == 0) {
    func_0x00f78a20(0x3d57260);
    func_0x00f78a20(0x3d3e188);
    func_0x00f78a20(0x3d29328);
    func_0x00f78a20(0x3d41320);
    func_0x00f78a20(0x3d79018);
    bRam0000000003eb4cc8 = 1;
  }
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/GeneralButton3')*/ uRam0000000003d79018,0);
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41320);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x20) == 0)) ||
     (lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + 0x10), lVar3 == 0)) {
LAB_014fc704:
    lVar3 = func_0x00f78af4();
    if ((bRam0000000003eb4cca & 1) == 0) {
      func_0x00f78a20(0x3d2c968);
      func_0x00f78a20(0x3d3d9b0);
      func_0x00f78a20(0x3d1e308);
      bRam0000000003eb4cca = 1;
    }
    uVar6 = func_0x00f78aec(/*System.Collections.Generic.List<SingleplayerOverviewScreen.QueuedAnim>_TypeInfo*/ uRam0000000003d1e308);
    /*System.Collections.Generic.List<SingleplayerOverviewScreen.QueuedAnim>$$.ctor*/ func_0x0259950c(uVar6,uRam0000000003d3d9b0);
    *(undefined8 *)(lVar3 + 0x70) = uVar6;
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar7 = (undefined8 *)
               (*(code *)**(undefined8 **)
                           (*(long *)(*(long *)(lRam0000000003d2c968 + 0x18) + 0xc0) + 0x38))();
      return puVar7;
    }
    auVar14 = func_0x00f78af4();
    puVar8 = auVar14._8_8_;
    puVar7 = auVar14._0_8_;
    uVar13 = puVar8[1];
    uVar6 = *puVar8;
    puVar7[2] = puVar8[2];
    puVar7[1] = uVar13;
    *puVar7 = uVar6;
    return puVar7;
  }
  lVar3 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar3,param_2,uRam0000000003d57260);
  plVar4 = (long *)func_0x00f78aec(/*Atlas.UI.ToolTipManager.ToolTipData_TypeInfo*/ uRam0000000003d29328);
  /*Atlas.UI.ToolTipManager.ToolTipData$$.ctor*/ func_0x0156b580(plVar4,0);
  if ((lVar3 == 0) || (plVar4 == (long *)0x0)) goto LAB_014fc704;
  plVar4[5] = *(long *)(lVar3 + 0x70);
  *(undefined4 *)(plVar4 + 7) = 4;
  *(undefined1 *)((long)plVar4 + 0x3c) = 1;
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41320);
  puVar7 = puRam0000000003d3e188;
  if ((lVar3 == 0) || (plVar5 = *(long **)(lVar3 + 0x98), plVar5 == (long *)0x0)) goto LAB_014fc704;
  puVar8 = puRam0000000003d3e188;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar4 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
    puVar8 = (undefined8 *)0x0;
    uVar6 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar6);
    if (plVar5 != (long *)0x0) {
      puVar8 = *(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 8);
      (*(code *)*puVar8)(plVar5,uVar6);
      if (plVar5[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar5[7],plVar4,uRam0000000003d3b330);
        puVar8 = (undefined8 *)plVar5[8];
        if ((puVar8 == (undefined8 *)0x0) || ((int)plVar4[2] <= *(int *)(puVar8 + 2))) {
code_r0x025dfcb4:
          puVar7 = (undefined8 *)
                   (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x30))(plVar5);
          if (((ulong)puVar7 & 1) != 0) {
            return puVar7;
          }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar7 = (undefined8 *)
                   (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
          return puVar7;
        }
        if (plVar5[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar5[7],0,puVar8,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(puVar7[3] + 0xc0) + 0x60))(plVar5);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar14 = func_0x00f78af4();
  plVar4 = auVar14._8_8_;
  lVar3 = auVar14._0_8_;
  if (plVar4 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
    if (lVar3 != 0) {
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x70))(lVar3,uVar6);
      if ((uVar2 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(puVar8[3] + 0xc0) + 0x78))(lVar3,plVar4);
      }
      return (undefined8 *)(ulong)(uVar2 ^ 1);
    }
  }
  auVar14 = func_0x00f78af4();
  iVar9 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar3 = *(long *)(auVar14._0_8_ + 0x38);
  if (lVar3 != 0) {
    iVar9 = *(int *)(lVar3 + 0x18);
    if (iVar9 < 1) goto code_r0x025dfe48;
    uVar2 = 0;
    iVar12 = -0x80000000;
    uVar10 = 0;
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
      if (lVar3 == 0) break;
      iVar1 = *(int *)(lVar3 + 0x10);
      uVar11 = uVar2;
      if (iVar1 <= iVar12) {
        uVar11 = uVar10;
      }
      if (iVar9 - 1U == uVar2) goto code_r0x025dfe4c;
      if (iVar1 <= iVar12) {
        iVar1 = iVar12;
      }
      lVar3 = *(long *)(auVar14._0_8_ + 0x38);
      uVar2 = uVar2 + 1;
      iVar12 = iVar1;
      uVar10 = uVar11;
    } while (lVar3 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar11 = 0;
code_r0x025dfe4c:
  *auVar14._8_8_ = uVar11;
  return (undefined8 *)(ulong)(0 < iVar9);
}



// ============================================================
// RVA: 0x14fc708 | Atlas.UI.Screens.SingleplayerOverviewScreen..ctor
// ============================================================

void Atlas_UI_Screens_SingleplayerOverviewScreen___ctor(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4cca & 1) == 0) {
    func_0x00f78a20(0x3d2c968);
    func_0x00f78a20(0x3d3d9b0);
    func_0x00f78a20(0x3d1e308);
    bRam0000000003eb4cca = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<SingleplayerOverviewScreen.QueuedAnim>_TypeInfo*/ uRam0000000003d1e308);
  /*System.Collections.Generic.List<SingleplayerOverviewScreen.QueuedAnim>$$.ctor*/ func_0x0259950c(uVar1,uRam0000000003d3d9b0);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c968 + 0x18) + 0xc0) + 0x38))();
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
// RVA: 0x14fc7a4 | Atlas.UI.Screens.SingleplayerOverviewScreen..cctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_SingleplayerOverviewScreen___cctor(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  
  if ((bRam0000000003eb4ccb & 1) == 0) {
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2ecb8);
    func_0x00f78a20(0x3d2eca8);
    func_0x00f78a20(0x3d1c380);
    func_0x00f78a20(0x3d24a88);
    func_0x00f78a20(0x3d25578);
    func_0x00f78a20(0x3d6cb28);
    bRam0000000003eb4ccb = 1;
  }
  if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar1 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(/*STR('FTUEStage_14_UnlockingTheGame')*/ uRam0000000003d6cb28,0);
  **(undefined8 **)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xb8) = uVar1;
  *(undefined4 *)(*(long *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xb8) + 8) = 0x40000000;
  lVar2 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<int, uint>_TypeInfo*/ uRam0000000003d1c380);
  /*System.Collections.Generic.Dictionary<int, uint>$$.ctor*/ func_0x01e91e64(lVar2,uRam0000000003d2eca8);
  if (((*(ushort *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if (lVar2 != 0) {
    /*System.Collections.Generic.Dictionary<int, uint>$$Add*/ func_0x01e92394(lVar2,*(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 0x10),0,
                    uRam0000000003d2ecb8);
    /*System.Collections.Generic.Dictionary<int, uint>$$Add*/ func_0x01e92394(lVar2,*(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 0xc),1,
                    uRam0000000003d2ecb8);
    /*System.Collections.Generic.Dictionary<int, uint>$$Add*/ func_0x01e92394(lVar2,*(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 8),2,
                    uRam0000000003d2ecb8);
    /*System.Collections.Generic.Dictionary<int, uint>$$Add*/ func_0x01e92394(lVar2,*(undefined4 *)(*(long *)(/*Atlas.UI.UIAtlasButton_TypeInfo*/ lRam0000000003d25578 + 0xb8) + 0x14),3,
                    uRam0000000003d2ecb8);
    *(long *)(*(long *)(/*Atlas.UI.Screens.SingleplayerOverviewScreen_TypeInfo*/ lRam0000000003d24a88 + 0xb8) + 0x10) = lVar2;
    auVar3._4_4_ = extraout_var;
    auVar3._0_4_ = extraout_s0;
    auVar3._8_8_ = extraout_var_00;
    return auVar3;
  }
  lVar2 = func_0x00f78af4();
  return ZEXT416(*(uint *)(lVar2 + 0x88));
}



