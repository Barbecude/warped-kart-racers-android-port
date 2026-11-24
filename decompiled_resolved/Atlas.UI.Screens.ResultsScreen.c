// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.ResultsScreen

// ============================================================
// RVA: 0x14e0b00 | Atlas.UI.Screens.ResultsScreen.OnBeforeEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x014e0bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e14dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e156c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e14e0) */
/* WARNING: Removing unreachable block (ram,0x014e0bdc) */
/* WARNING: Removing unreachable block (ram,0x014e0bec) */
/* WARNING: Removing unreachable block (ram,0x014e0c20) */
/* WARNING: Removing unreachable block (ram,0x014e0c44) */
/* WARNING: Removing unreachable block (ram,0x014e0c4c) */
/* WARNING: Removing unreachable block (ram,0x014e0c6c) */
/* WARNING: Removing unreachable block (ram,0x014e0c8c) */
/* WARNING: Removing unreachable block (ram,0x014e0cc4) */
/* WARNING: Removing unreachable block (ram,0x014e0cf4) */
/* WARNING: Removing unreachable block (ram,0x014e0cfc) */
/* WARNING: Removing unreachable block (ram,0x014e0d18) */
/* WARNING: Removing unreachable block (ram,0x014e0d20) */
/* WARNING: Removing unreachable block (ram,0x014e0d30) */
/* WARNING: Removing unreachable block (ram,0x014e0d38) */
/* WARNING: Removing unreachable block (ram,0x014e0d4c) */
/* WARNING: Removing unreachable block (ram,0x014e0d54) */
/* WARNING: Removing unreachable block (ram,0x014e0d58) */
/* WARNING: Removing unreachable block (ram,0x014e0d68) */
/* WARNING: Removing unreachable block (ram,0x014e0d94) */
/* WARNING: Removing unreachable block (ram,0x014e0d98) */
/* WARNING: Removing unreachable block (ram,0x014e0e00) */
/* WARNING: Removing unreachable block (ram,0x014e0dd0) */
/* WARNING: Removing unreachable block (ram,0x014e1570) */
/* WARNING: Removing unreachable block (ram,0x014e1574) */
/* WARNING: Removing unreachable block (ram,0x014e158c) */
/* WARNING: Removing unreachable block (ram,0x014e1594) */
/* WARNING: Removing unreachable block (ram,0x014e15a4) */
/* WARNING: Removing unreachable block (ram,0x014e15bc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * Atlas_UI_Screens_ResultsScreen__OnBeforeEnter(undefined8 param_1)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long unaff_x23;
  undefined8 ******unaff_x24;
  undefined8 ******ppppppuVar18;
  undefined8 ******ppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined *puVar21;
  float extraout_s0;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined8 *******pppppppuStack_1e0;
  code *pcStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  ulong *puStack_190;
  long lStack_188;
  undefined8 ******ppppppuStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 ***pppuStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4bdc & 1) == 0) {
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d53980);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d2dc40);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d223e0);
    func_0x00f78a20(0x3d3d810);
    func_0x00f78a20(0x3d5c778);
    func_0x00f78a20(0x3d41268);
    func_0x00f78a20(0x3d41270);
    func_0x00f78a20(0x3d41278);
    func_0x00f78a20(0x3d25a68);
    func_0x00f78a20(0x3d6d050);
    bRam0000000003eb4bdc = 1;
  }
  uStack_80 = 0x3d41278;
  uStack_58 = 0x14e0bdc;
  pppuStack_60 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4be0 & 1) == 0) {
    func_0x00f78a20(0x3d41268);
    bRam0000000003eb4be0 = 1;
  }
  puVar3 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41268);
  if ((puVar3 != (undefined8 *)0x0) && (lVar12 = puVar3[0xd], lVar12 != 0)) {
    uVar15 = *(uint *)(lVar12 + 0x18);
    if (0 < (int)uVar15) {
      uVar13 = 0;
      do {
        if (uVar15 <= uVar13) {
          uVar6 = func_0x00f78b24();
          func_0x00f78ac0(uVar6,0);
          goto code_r0x014e0eb4;
        }
        lVar4 = *(long *)(lVar12 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar4 == 0) goto code_r0x014e0eb4;
        puVar3 = (undefined8 *)/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
        uVar13 = uVar13 + 1;
        uVar15 = *(uint *)(lVar12 + 0x18);
      } while ((int)uVar13 < (int)uVar15);
    }
    return puVar3;
  }
code_r0x014e0eb4:
  lVar4 = func_0x00f78af4();
  puStack_88 = &Atlas_UI_Screens_ResultsScreen__OnUpdate;
  lVar12 = 0x3d23990;
  lVar17 = 0x3d23990;
  pppppuStack_90 = (undefined8 *****)&pppuStack_60;
  if ((bRam0000000003eb4bdd & 1) == 0) {
    func_0x00f78a20(0x3d2c8c0);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d56dc0);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d808);
    func_0x00f78a20(0x3d3d810);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41268);
    func_0x00f78a20(0x3d41270);
    func_0x00f78a20(0x3d41278);
    func_0x00f78a20(0x3d79090);
    func_0x00f78a20(0x3d78f50);
    bRam0000000003eb4bdd = 1;
  }
  puVar14 = (ulong *)(lVar4 + 0x78);
  uVar16 = *puVar14;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar3 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar16,0);
  lVar8 = lVar12;
  if (((ulong)puVar3 & 1) == 0) {
    lVar8 = lVar17;
    if (*(long *)(lVar4 + 0x70) == 0) goto code_r0x014e1370;
    puVar3 = (undefined8 *)
             Atlas_FrontEnd_FrontEndScene__TryGetSubsceneBehaviour_FrontEndSubsceneBehaviourBase_
                       (*(long *)(lVar4 + 0x70),puVar14,uRam0000000003d56dc0);
    if ((int)puVar3 == 0) {
      return puVar3;
    }
    ppppppuVar19 = (undefined8 ******)0x3d41270;
    unaff_x24 = (undefined8 ******)0x3d41270;
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
    if (lVar5 == 0) goto code_r0x014e1370;
    lVar8 = lVar12;
    if (*(long *)(lVar5 + 0x10) != 0) {
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
      lVar8 = lVar17;
      if (lVar5 != 0) {
        lVar17 = 0;
        uVar16 = 0;
        lVar8 = lVar12;
        while (*(long *)(lVar5 + 0x10) != 0) {
          if ((long)*(int *)(*(long *)(lVar5 + 0x10) + 0x18) <= (long)uVar16) goto code_r0x014e1244;
          lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
          if ((lVar12 == 0) || (lVar8 = *(long *)(lVar12 + 0x10), lVar8 == 0)) break;
          if (*(uint *)(lVar8 + 0x18) <= uVar16) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar12 = *(long *)(lVar8 + 0x10) + lVar17;
          lVar8 = *(long *)(lVar12 + 0x28);
          uStack_128 = *(undefined8 *)(lVar12 + 0x38);
          uStack_130 = *(undefined8 *)(lVar12 + 0x30);
          uStack_118 = *(undefined8 *)(lVar12 + 0x48);
          uStack_120 = *(undefined8 *)(lVar12 + 0x40);
          uStack_108 = *(undefined8 *)(lVar12 + 0x58);
          uStack_110 = *(undefined8 *)(lVar12 + 0x50);
          uStack_100 = *(undefined8 *)(lVar12 + 0x60);
          unaff_x23 = *(long *)(lVar12 + 0x68);
          if (*(long *)(lVar4 + 0x70) == 0) break;
          lStack_170 = lVar8;
          uStack_168 = uStack_130;
          uStack_160 = uStack_128;
          uStack_158 = uStack_120;
          uStack_150 = uStack_118;
          uStack_148 = uStack_110;
          uStack_140 = uStack_108;
          uStack_138 = uStack_100;
          Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                    (*(long *)(lVar4 + 0x70),uVar16,&lStack_170,0);
          lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d41268);
          if ((lVar12 == 0) || (*(long *)(lVar12 + 0x70) == 0)) break;
          if ((long)uVar16 < (long)*(int *)(*(long *)(lVar12 + 0x70) + 0x18)) {
            iVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(unaff_x23,0);
            if (iVar2 != 0) {
              lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41278);
              if ((lVar12 == 0) || (*(long *)(lVar12 + 0x20) == 0)) break;
              unaff_x23 = *(long *)(*(long *)(lVar12 + 0x20) + 0x10);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar8,0);
              if ((unaff_x23 == 0) ||
                 (lVar12 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(unaff_x23,uVar6,uRam0000000003d57270), lVar12 == 0))
              break;
              unaff_x23 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(lVar12,0);
              lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41278);
              lVar8 = lVar12;
              lVar7 = lVar5;
              if ((int)unaff_x23 != 0) {
                if (((lVar5 == 0) || (*(long *)(lVar5 + 0x20) == 0)) ||
                   (lVar5 = *(long *)(*(long *)(lVar5 + 0x20) + 0x10), lVar5 == 0)) break;
                lVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,*(undefined8 *)(lVar12 + 0x70),uRam0000000003d57270);
                lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41278);
                lVar7 = lVar8;
                if (lVar5 == 0) break;
              }
              if ((lVar7 == 0) || (*(long *)(lVar5 + 0x88) == 0)) break;
              unaff_x23 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar5 + 0x88),*(undefined8 *)(lVar8 + 0x30),0);
            }
            lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d41268);
            if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x70), lVar12 == 0)) break;
            if (*(uint *)(lVar12 + 0x18) <= uVar16) {
              uVar6 = func_0x00f78b24();
              puVar21 = &Atlas_UI_Screens_ResultsScreen__OnCameraFlyThruComplete;
              lVar12 = func_0x00f78ac0(uVar6,0);
              goto code_r0x014e1518;
            }
            /*Atlas.UI.GameCenterTextFormatter$$SetTextAsGameCenterName*/ func_0x01598280(*(undefined8 *)(lVar12 + uVar16 * 8 + 0x20),unaff_x23,0);
          }
          uVar16 = uVar16 + 1;
          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
          lVar17 = lVar17 + 0x50;
          if (lVar5 == 0) break;
        }
      }
      goto code_r0x014e1370;
    }
code_r0x014e1244:
    *(undefined1 *)(lVar4 + 0xa0) = 1;
  }
  else {
    ppppppuVar19 = unaff_x24;
    if (*(char *)(lVar4 + 0xa0) == '\0') goto code_r0x014e1428;
  }
  unaff_x24 = ppppppuVar19;
  if (*(long *)(lVar4 + 0x70) != 0) {
    puVar3 = (undefined8 *)
             Atlas_FrontEnd_FrontEndScene__AreAllRequestPartsLoadedAndInstantiated
                       (*(long *)(lVar4 + 0x70),0);
    if ((int)puVar3 == 0) goto code_r0x014e1428;
    ppppppuVar19 = (undefined8 ******)0x3d41270;
    ppppppuVar18 = (undefined8 ******)0x3d41270;
    puVar3 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
    unaff_x24 = ppppppuVar19;
    if (puVar3 != (undefined8 *)0x0) {
      if ((*(char *)(puVar3 + 4) != '\0') && (*(int *)(lVar4 + 0x84) < 3)) {
        *(int *)(lVar4 + 0x84) = *(int *)(lVar4 + 0x84) + 1;
        return puVar3;
      }
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
      if (lVar12 != 0) {
        uVar16 = 0;
        while (unaff_x24 = ppppppuVar18, *(long *)(lVar12 + 0x10) != 0) {
          uVar9 = *puVar14;
          uVar15 = (uint)uVar16;
          if (*(int *)(*(long *)(lVar12 + 0x10) + 0x18) <= (int)uVar15) goto code_r0x014e1374;
          if (uVar9 == 0) break;
          lVar8 = Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__GetKartLocator(uVar9,uVar16,0);
          if (((*(long *)(lVar4 + 0x70) == 0) ||
              (lVar12 = Atlas_FrontEnd_FrontEndScene__GetKartTransform
                                  (*(long *)(lVar4 + 0x70),uVar16,0), lVar8 == 0)) ||
             (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0), unaff_x23 = lVar12, lVar12 == 0)) break;
          /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar12,0);
          /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar8,0);
          /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar12,0);
          /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar8,0);
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar12,0);
          if ((*(long *)(lVar4 + 0x70) == 0) ||
             (lVar12 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator
                                 (*(long *)(lVar4 + 0x70),uVar16,0), lVar12 == 0)) break;
          Atlas_Gameplay_Kart_KartFEAnimator__PlayCeremonyScreen(lVar12,2 < uVar15,0);
          uVar16 = (ulong)(uVar15 + 1);
          lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
          if (lVar12 == 0) break;
        }
      }
    }
  }
code_r0x014e1370:
  do {
    do {
      uVar9 = func_0x00f78af4();
      ppppppuVar19 = unaff_x24;
code_r0x014e1374:
      unaff_x24 = ppppppuVar19;
    } while ((uVar9 == 0) || (*(long *)(uVar9 + 0x48) == 0));
    /*UnityEngine.Playables.PlayableDirector$$Play*/ func_0x03282920(*(long *)(uVar9 + 0x48),0);
    *(undefined8 *)(lVar4 + 0xa4) = _UNK_033f8590;
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,*ppppppuVar19);
  } while (lVar12 == 0);
  if (*(char *)(lVar12 + 0x20) == '\0') {
    Atlas_UI_Screens_AtlasScreen_LeaguePodiumScreenBehaviour__LeaguePodiumScreen_TransitionData___ReadyToHideLoadingScreenAfterInit
              (lVar4,uRam0000000003d2c8c0);
  }
  else {
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41278);
    if ((lVar12 == 0) || (*(long *)(lVar12 + 0x78) == 0)) goto code_r0x014e1370;
    /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar12 + 0x78),1,0,0,0);
  }
  puVar3 = (undefined8 *)/*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/ResultHooray')*/ uRam0000000003d79090,0);
  *(undefined1 *)(lVar4 + 0x80) = 1;
  *(undefined1 *)(lVar4 + 0xa0) = 0;
  *(undefined4 *)(lVar4 + 0x84) = 0;
code_r0x014e1428:
  if ((0.0 < *(float *)(lVar4 + 0xa4)) &&
     (fVar22 = *(float *)(lVar4 + 0xa4) - extraout_s0, *(float *)(lVar4 + 0xa4) = fVar22,
     fVar22 <= 0.0)) {
    puVar3 = (undefined8 *)/*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/Gameplay_SFX/FireJets2D')*/ uRam0000000003d78f50,0);
  }
  unaff_x24 = ppppppuVar19;
  if ((0.0 < *(float *)(lVar4 + 0xa8)) &&
     (fVar22 = *(float *)(lVar4 + 0xa8) - extraout_s0, *(float *)(lVar4 + 0xa8) = fVar22,
     fVar22 <= 0.0)) {
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41278);
    if ((lVar12 == 0) || (*(long *)(lVar12 + 0xb8) == 0)) goto code_r0x014e1370;
    puVar3 = (undefined8 *)/*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar12 + 0xb8),6,1,1,0);
  }
  if (*(char *)(lVar4 + 0x80) == '\0') {
    return puVar3;
  }
  if (*(char *)(lVar4 + 0x81) != '\0') {
    return puVar3;
  }
  if ((*puVar14 == 0) || (lVar12 = *(long *)(*puVar14 + 0x48), lVar12 == 0)) goto code_r0x014e1370;
  puVar3 = (undefined8 *)/*UnityEngine.Playables.PlayableDirector$$get_state*/ func_0x032821bc(lVar12,0);
  if ((int)puVar3 == 1) {
    return puVar3;
  }
  puVar21 = &UNK_014e14e0;
  lVar12 = lVar4;
code_r0x014e1518:
  pppppppuVar1 = (undefined8 *******)&lStack_1a0;
  lStack_1a0 = lVar8;
  uStack_198 = uVar16;
  puStack_190 = puVar14;
  lStack_188 = lVar4;
  ppppppuStack_180 = &pppppuStack_90;
  puStack_178 = puVar21;
  if ((bRam0000000003eb4bdf & 1) == 0) {
    func_0x00f78a20(0x3d41278);
    bRam0000000003eb4bdf = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar12,uRam0000000003d41278);
  if (lVar4 == 0) {
    lVar4 = func_0x00f78af4();
    pppppppuVar1 = &pppppppuStack_1e0;
    uStack_1c8 = 0x3d41278;
    uStack_1c0 = 0x3eb4000;
    puStack_1a8 = &Atlas_UI_Screens_ResultsScreen__OnAfterExit;
    pppppppuVar20 = &pppppppuStack_1b0;
    uVar16 = 0x3eb4000;
    pppppppuStack_1e0 = (undefined8 *******)ppppppuVar19;
    pcStack_1d8 = (code *)unaff_x23;
    lStack_1d0 = lVar8;
    lStack_1b8 = lVar12;
    pppppppuStack_1b0 = &ppppppuStack_180;
    if ((bRam0000000003eb4bde & 1) == 0) {
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d3d808);
      func_0x00f78a20(0x3d41268);
      func_0x00f78a20(0x3d41270);
      func_0x00f78a20(0x3d41278);
      func_0x00f78a20(0x3d79090);
      func_0x00f78a20(0x3d78f50);
      bRam0000000003eb4bde = 1;
    }
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41278);
    if ((lVar12 != 0) && (*(long *)(lVar12 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar12 + 0xb8),6,0,0);
      if ((*(long *)(lVar4 + 0x70) != 0) &&
         (lVar12 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(lVar4 + 0x70),0,0),
         lVar12 != 0)) {
        uVar16 = 0x3d79000;
        lVar17 = 0x3d41270;
        Atlas_Gameplay_Kart_KartFEAnimator__ExitFEScreen(lVar12,0);
        /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/UI/Front_End/ResultHooray')*/ uRam0000000003d79090,0);
        /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/Gameplay_SFX/FireJets2D')*/ uRam0000000003d78f50,0);
        lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
        lVar8 = 0x3d41270;
        if (lVar12 != 0) {
          if (*(long *)(lVar12 + 0x10) == 0) {
code_r0x014e173c:
            uVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d41268);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            puVar3 = (undefined8 *)/*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(uVar16,0,0);
            if (*(long *)(lVar4 + 0x98) == 0) {
              return puVar3;
            }
            lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41278);
            lVar8 = 0x3d20000;
            if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x80), lVar12 != 0)) {
              lVar4 = *(long *)(lVar4 + 0x98);
              if ((bRam0000000003eb5670 & 1) == 0) {
                func_0x00f78a20(0x3d23990,lVar4,0);
                bRam0000000003eb5670 = 1;
              }
              uVar6 = *(undefined8 *)(lVar12 + 0x18);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              puVar3 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
              if ((int)puVar3 == 0) {
                return puVar3;
              }
              lVar12 = *(long *)(lVar12 + 0x18);
              if (lVar12 == 0) {
                auVar24 = func_0x00f78af4();
                pcStack_1d8 = Core_Application_CoroutineRunner__Runner_d__13___ctor;
                pppppppuStack_1e0 = &pppppppuStack_1b0;
                puVar3 = (undefined8 *)/*System.Object$$.ctor*/ func_0x0294d018(auVar24._0_8_,0);
                *(int *)(auVar24._0_8_ + 0x10) = auVar24._8_4_;
                return puVar3;
              }
              if (lVar4 == 0) {
                func_0x00f78a24(0x3d23938,0,0);
                uVar10 = func_0x00f78aec();
                uVar6 = func_0x00f78a24(0x3d7b500);
                /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar10,uVar6,0);
              }
              else {
                if (pcRam0000000003ec01d0 == (code *)0x0) {
                  pcRam0000000003ec01d0 =
                       (code *)func_0x00f789d4(
                                              "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                              );
                }
                uVar16 = (*pcRam0000000003ec01d0)(lVar12);
                if ((uVar16 & 1) != 0) {
                  if (pcRam0000000003ec01e8 == (code *)0x0) {
                    pcRam0000000003ec01e8 =
                         (code *)func_0x00f789d4(
                                                "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                                );
                  }
                    /* WARNING: Could not recover jumptable at 0x03248188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  puVar3 = (undefined8 *)(*pcRam0000000003ec01e8)(lVar12,lVar4);
                  return puVar3;
                }
                func_0x00f78a24(0x3d1fce8);
                uVar10 = func_0x00f78aec();
                uVar6 = func_0x00f78a24(0x3d6af80);
                /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar6,0);
              }
              uVar6 = func_0x00f78a24(0x3d5a8b8);
              auVar23 = func_0x00f78ac0(uVar10,uVar6);
              pcStack_1d8 = (code *)&UnityEngine_MonoBehaviour__StopCoroutineManaged;
              pppppppuStack_1e0 = &pppppppuStack_1b0;
              if (pcRam0000000003ec01e8 == (code *)0x0) {
                pcRam0000000003ec01e8 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                            );
              }
                    /* WARNING: Could not recover jumptable at 0x03248254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar3 = (undefined8 *)(*pcRam0000000003ec01e8)(auVar23._0_8_,auVar23._8_8_);
              return puVar3;
            }
          }
          else {
            lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
            if (lVar12 != 0) {
              uVar16 = 1;
              do {
                lVar8 = lVar17;
                if (*(long *)(lVar12 + 0x10) == 0) break;
                if (*(int *)(*(long *)(lVar12 + 0x10) + 0x18) <= (int)uVar16) goto code_r0x014e173c;
                if (*(long *)(lVar4 + 0x70) == 0) break;
                Atlas_FrontEnd_FrontEndScene__SetKartHidden(*(long *)(lVar4 + 0x70),uVar16,0);
                uVar16 = (ulong)((int)uVar16 + 1);
                lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
              } while (lVar12 != 0);
            }
          }
        }
      }
    }
    puVar21 = &Atlas_UI_Screens_ResultsScreen__AnimateUIInRoutine;
    lVar12 = func_0x00f78af4();
  }
  else {
    uVar16 = *(ulong *)(lVar4 + 0x80);
    puVar21 = &UNK_014e1570;
    lVar4 = lVar12;
    pppppppuVar20 = &ppppppuStack_180;
  }
  *(long *)((long)pppppppuVar1 + -0x30) = lVar8;
  *(undefined8 *)((long)pppppppuVar1 + -0x28) = 0x3d41278;
  *(ulong *)((long)pppppppuVar1 + -0x20) = uVar16;
  *(long *)((long)pppppppuVar1 + -0x18) = lVar4;
  *(undefined8 ********)((long)pppppppuVar1 + -0x10) = pppppppuVar20;
  *(undefined **)((long)pppppppuVar1 + -8) = puVar21;
  if ((bRam0000000003eb4be1 & 1) == 0) {
    func_0x00f78a20(0x3d28980);
    bRam0000000003eb4be1 = 1;
  }
  puVar3 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.ResultsScreen.<AnimateUIInRoutine>d__23_TypeInfo*/ uRam0000000003d28980);
  /*Atlas.UI.Screens.ResultsScreen.<AnimateUIInRoutine>d__23$$.ctor*/ func_0x01564b04(puVar3,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[4] = lVar12;
    return puVar3;
  }
  uVar6 = func_0x00f78af4();
  *(long *)((long)pppppppuVar1 + -0x60) = lVar8;
  *(undefined8 *)((long)pppppppuVar1 + -0x58) = 0x3d28980;
  *(undefined8 *)((long)pppppppuVar1 + -0x50) = 0;
  *(long *)((long)pppppppuVar1 + -0x48) = lVar12;
  *(undefined1 **)((long)pppppppuVar1 + -0x40) = (undefined1 *)((long)pppppppuVar1 + -0x10);
  *(undefined **)((long)pppppppuVar1 + -0x38) = &Atlas_UI_Screens_ResultsScreen__ContinuePressed;
  if ((bRam0000000003eb4be2 & 1) == 0) {
    func_0x00f78a20(0x3d41270);
    func_0x00f78a20(0x3d79008);
    bRam0000000003eb4be2 = 1;
  }
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/GeneralButton')*/ uRam0000000003d79008,0);
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar6,uRam0000000003d41270);
  if (lVar12 != 0) {
    if (*(long *)(lVar12 + 0x18) != 0) {
      /*Atlas.UI.Screens.ResultsScreen.ContinueSelected$$Invoke*/ func_0x01564df4(*(long *)(lVar12 + 0x18),0);
    }
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  lVar12 = func_0x00f78af4();
  *(undefined8 *)((long)pppppppuVar1 + -0x90) = 0x3d79008;
  *(undefined8 *)((long)pppppppuVar1 + -0x88) = 0x3eb4000;
  *(undefined8 *)((long)pppppppuVar1 + -0x80) = 0x3d41270;
  *(undefined8 *)((long)pppppppuVar1 + -0x78) = uVar6;
  *(undefined1 **)((long)pppppppuVar1 + -0x70) = (undefined1 *)((long)pppppppuVar1 + -0x40);
  *(undefined **)((long)pppppppuVar1 + -0x68) = &Atlas_UI_Screens_ResultsScreen___ctor;
  if ((bRam0000000003eb4be3 & 1) == 0) {
    func_0x00f78a20(0x3d2c8b8);
    bRam0000000003eb4be3 = 1;
  }
  *(undefined8 *)((long)pppppppuVar1 + -0x70) = *(undefined8 *)((long)pppppppuVar1 + -0x70);
  *(undefined8 *)((long)pppppppuVar1 + -0x68) = *(undefined8 *)((long)pppppppuVar1 + -0x68);
  if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar3 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c8b8 + 0x18) + 0xc0) + 0x38))();
    return puVar3;
  }
  auVar23 = func_0x00f78af4();
  puVar11 = auVar23._8_8_;
  puVar3 = auVar23._0_8_;
  uVar10 = puVar11[1];
  uVar6 = *puVar11;
  puVar3[2] = puVar11[2];
  puVar3[1] = uVar10;
  *puVar3 = uVar6;
  return puVar3;
}



// ============================================================
// RVA: 0x14e0e04 | Atlas.UI.Screens.ResultsScreen.HideAllUI
// ============================================================

/* WARNING: Possible PIC construction at 0x014e14dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e156c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e14e0) */
/* WARNING: Removing unreachable block (ram,0x014e1570) */
/* WARNING: Removing unreachable block (ram,0x014e1574) */
/* WARNING: Removing unreachable block (ram,0x014e158c) */
/* WARNING: Removing unreachable block (ram,0x014e1594) */
/* WARNING: Removing unreachable block (ram,0x014e15a4) */
/* WARNING: Removing unreachable block (ram,0x014e15bc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * Atlas_UI_Screens_ResultsScreen__HideAllUI(undefined8 param_1)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long unaff_x23;
  undefined8 ******unaff_x24;
  undefined8 ******ppppppuVar18;
  undefined8 ******ppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined *puVar21;
  float extraout_s0;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined8 *******pppppppuStack_190;
  code *pcStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 *******pppppppuStack_160;
  undefined *puStack_158;
  long lStack_150;
  ulong uStack_148;
  ulong *puStack_140;
  long lStack_138;
  undefined8 ******ppppppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
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
  undefined8 uStack_b0;
  undefined8 *****pppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4be0 & 1) == 0) {
    func_0x00f78a20(0x3d41268);
    bRam0000000003eb4be0 = 1;
  }
  puVar3 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41268);
  if ((puVar3 != (undefined8 *)0x0) && (lVar12 = puVar3[0xd], lVar12 != 0)) {
    uVar15 = *(uint *)(lVar12 + 0x18);
    if (0 < (int)uVar15) {
      uVar13 = 0;
      do {
        if (uVar15 <= uVar13) {
          uVar6 = func_0x00f78b24();
          func_0x00f78ac0(uVar6,0);
          goto LAB_014e0eb4;
        }
        lVar4 = *(long *)(lVar12 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_014e0eb4;
        puVar3 = (undefined8 *)/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar4,0,0);
        uVar13 = uVar13 + 1;
        uVar15 = *(uint *)(lVar12 + 0x18);
      } while ((int)uVar13 < (int)uVar15);
    }
    return puVar3;
  }
LAB_014e0eb4:
  lVar4 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_Screens_ResultsScreen__OnUpdate;
  lVar12 = 0x3d23990;
  lVar17 = 0x3d23990;
  pppppuStack_40 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4bdd & 1) == 0) {
    func_0x00f78a20(0x3d2c8c0);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d56dc0);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d808);
    func_0x00f78a20(0x3d3d810);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41268);
    func_0x00f78a20(0x3d41270);
    func_0x00f78a20(0x3d41278);
    func_0x00f78a20(0x3d79090);
    func_0x00f78a20(0x3d78f50);
    bRam0000000003eb4bdd = 1;
  }
  puVar14 = (ulong *)(lVar4 + 0x78);
  uVar16 = *puVar14;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar3 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar16,0);
  lVar8 = lVar12;
  if (((ulong)puVar3 & 1) == 0) {
    lVar8 = lVar17;
    if (*(long *)(lVar4 + 0x70) == 0) goto code_r0x014e1370;
    puVar3 = (undefined8 *)
             Atlas_FrontEnd_FrontEndScene__TryGetSubsceneBehaviour_FrontEndSubsceneBehaviourBase_
                       (*(long *)(lVar4 + 0x70),puVar14,uRam0000000003d56dc0);
    if ((int)puVar3 == 0) {
      return puVar3;
    }
    ppppppuVar19 = (undefined8 ******)0x3d41270;
    unaff_x24 = (undefined8 ******)0x3d41270;
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
    if (lVar5 == 0) goto code_r0x014e1370;
    lVar8 = lVar12;
    if (*(long *)(lVar5 + 0x10) != 0) {
      lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
      lVar8 = lVar17;
      if (lVar5 != 0) {
        lVar17 = 0;
        uVar16 = 0;
        lVar8 = lVar12;
        while (*(long *)(lVar5 + 0x10) != 0) {
          if ((long)*(int *)(*(long *)(lVar5 + 0x10) + 0x18) <= (long)uVar16) goto code_r0x014e1244;
          lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
          if ((lVar12 == 0) || (lVar8 = *(long *)(lVar12 + 0x10), lVar8 == 0)) break;
          if (*(uint *)(lVar8 + 0x18) <= uVar16) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar12 = *(long *)(lVar8 + 0x10) + lVar17;
          lVar8 = *(long *)(lVar12 + 0x28);
          uStack_d8 = *(undefined8 *)(lVar12 + 0x38);
          uStack_e0 = *(undefined8 *)(lVar12 + 0x30);
          uStack_c8 = *(undefined8 *)(lVar12 + 0x48);
          uStack_d0 = *(undefined8 *)(lVar12 + 0x40);
          uStack_b8 = *(undefined8 *)(lVar12 + 0x58);
          uStack_c0 = *(undefined8 *)(lVar12 + 0x50);
          uStack_b0 = *(undefined8 *)(lVar12 + 0x60);
          unaff_x23 = *(long *)(lVar12 + 0x68);
          if (*(long *)(lVar4 + 0x70) == 0) break;
          lStack_120 = lVar8;
          uStack_118 = uStack_e0;
          uStack_110 = uStack_d8;
          uStack_108 = uStack_d0;
          uStack_100 = uStack_c8;
          uStack_f8 = uStack_c0;
          uStack_f0 = uStack_b8;
          uStack_e8 = uStack_b0;
          Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                    (*(long *)(lVar4 + 0x70),uVar16,&lStack_120,0);
          lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d41268);
          if ((lVar12 == 0) || (*(long *)(lVar12 + 0x70) == 0)) break;
          if ((long)uVar16 < (long)*(int *)(*(long *)(lVar12 + 0x70) + 0x18)) {
            iVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(unaff_x23,0);
            if (iVar2 != 0) {
              lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41278);
              if ((lVar12 == 0) || (*(long *)(lVar12 + 0x20) == 0)) break;
              unaff_x23 = *(long *)(*(long *)(lVar12 + 0x20) + 0x10);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar6 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar8,0);
              if ((unaff_x23 == 0) ||
                 (lVar12 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(unaff_x23,uVar6,uRam0000000003d57270), lVar12 == 0))
              break;
              unaff_x23 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(lVar12,0);
              lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41278);
              lVar8 = lVar12;
              lVar7 = lVar5;
              if ((int)unaff_x23 != 0) {
                if (((lVar5 == 0) || (*(long *)(lVar5 + 0x20) == 0)) ||
                   (lVar5 = *(long *)(*(long *)(lVar5 + 0x20) + 0x10), lVar5 == 0)) break;
                lVar8 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar5,*(undefined8 *)(lVar12 + 0x70),uRam0000000003d57270);
                lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41278);
                lVar7 = lVar8;
                if (lVar5 == 0) break;
              }
              if ((lVar7 == 0) || (*(long *)(lVar5 + 0x88) == 0)) break;
              unaff_x23 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar5 + 0x88),*(undefined8 *)(lVar8 + 0x30),0);
            }
            lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d41268);
            if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x70), lVar12 == 0)) break;
            if (*(uint *)(lVar12 + 0x18) <= uVar16) {
              uVar6 = func_0x00f78b24();
              puVar21 = &Atlas_UI_Screens_ResultsScreen__OnCameraFlyThruComplete;
              lVar12 = func_0x00f78ac0(uVar6,0);
              goto code_r0x014e1518;
            }
            /*Atlas.UI.GameCenterTextFormatter$$SetTextAsGameCenterName*/ func_0x01598280(*(undefined8 *)(lVar12 + uVar16 * 8 + 0x20),unaff_x23,0);
          }
          uVar16 = uVar16 + 1;
          lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
          lVar17 = lVar17 + 0x50;
          if (lVar5 == 0) break;
        }
      }
      goto code_r0x014e1370;
    }
code_r0x014e1244:
    *(undefined1 *)(lVar4 + 0xa0) = 1;
  }
  else {
    ppppppuVar19 = unaff_x24;
    if (*(char *)(lVar4 + 0xa0) == '\0') goto code_r0x014e1428;
  }
  unaff_x24 = ppppppuVar19;
  if (*(long *)(lVar4 + 0x70) != 0) {
    puVar3 = (undefined8 *)
             Atlas_FrontEnd_FrontEndScene__AreAllRequestPartsLoadedAndInstantiated
                       (*(long *)(lVar4 + 0x70),0);
    if ((int)puVar3 == 0) goto code_r0x014e1428;
    ppppppuVar19 = (undefined8 ******)0x3d41270;
    ppppppuVar18 = (undefined8 ******)0x3d41270;
    puVar3 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
    unaff_x24 = ppppppuVar19;
    if (puVar3 != (undefined8 *)0x0) {
      if ((*(char *)(puVar3 + 4) != '\0') && (*(int *)(lVar4 + 0x84) < 3)) {
        *(int *)(lVar4 + 0x84) = *(int *)(lVar4 + 0x84) + 1;
        return puVar3;
      }
      lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
      if (lVar12 != 0) {
        uVar16 = 0;
        while (unaff_x24 = ppppppuVar18, *(long *)(lVar12 + 0x10) != 0) {
          uVar9 = *puVar14;
          uVar15 = (uint)uVar16;
          if (*(int *)(*(long *)(lVar12 + 0x10) + 0x18) <= (int)uVar15) goto code_r0x014e1374;
          if (uVar9 == 0) break;
          lVar8 = Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__GetKartLocator(uVar9,uVar16,0);
          if (((*(long *)(lVar4 + 0x70) == 0) ||
              (lVar12 = Atlas_FrontEnd_FrontEndScene__GetKartTransform
                                  (*(long *)(lVar4 + 0x70),uVar16,0), lVar8 == 0)) ||
             (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar8,0), unaff_x23 = lVar12, lVar12 == 0)) break;
          /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar12,0);
          /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar8,0);
          /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar12,0);
          /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar8,0);
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar12,0);
          if ((*(long *)(lVar4 + 0x70) == 0) ||
             (lVar12 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator
                                 (*(long *)(lVar4 + 0x70),uVar16,0), lVar12 == 0)) break;
          Atlas_Gameplay_Kart_KartFEAnimator__PlayCeremonyScreen(lVar12,2 < uVar15,0);
          uVar16 = (ulong)(uVar15 + 1);
          lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
          if (lVar12 == 0) break;
        }
      }
    }
  }
code_r0x014e1370:
  do {
    do {
      uVar9 = func_0x00f78af4();
      ppppppuVar19 = unaff_x24;
code_r0x014e1374:
      unaff_x24 = ppppppuVar19;
    } while ((uVar9 == 0) || (*(long *)(uVar9 + 0x48) == 0));
    /*UnityEngine.Playables.PlayableDirector$$Play*/ func_0x03282920(*(long *)(uVar9 + 0x48),0);
    *(undefined8 *)(lVar4 + 0xa4) = _UNK_033f8590;
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,*ppppppuVar19);
  } while (lVar12 == 0);
  if (*(char *)(lVar12 + 0x20) == '\0') {
    Atlas_UI_Screens_AtlasScreen_LeaguePodiumScreenBehaviour__LeaguePodiumScreen_TransitionData___ReadyToHideLoadingScreenAfterInit
              (lVar4,uRam0000000003d2c8c0);
  }
  else {
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41278);
    if ((lVar12 == 0) || (*(long *)(lVar12 + 0x78) == 0)) goto code_r0x014e1370;
    /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar12 + 0x78),1,0,0,0);
  }
  puVar3 = (undefined8 *)/*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/ResultHooray')*/ uRam0000000003d79090,0);
  *(undefined1 *)(lVar4 + 0x80) = 1;
  *(undefined1 *)(lVar4 + 0xa0) = 0;
  *(undefined4 *)(lVar4 + 0x84) = 0;
code_r0x014e1428:
  if ((0.0 < *(float *)(lVar4 + 0xa4)) &&
     (fVar22 = *(float *)(lVar4 + 0xa4) - extraout_s0, *(float *)(lVar4 + 0xa4) = fVar22,
     fVar22 <= 0.0)) {
    puVar3 = (undefined8 *)/*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/Gameplay_SFX/FireJets2D')*/ uRam0000000003d78f50,0);
  }
  unaff_x24 = ppppppuVar19;
  if ((0.0 < *(float *)(lVar4 + 0xa8)) &&
     (fVar22 = *(float *)(lVar4 + 0xa8) - extraout_s0, *(float *)(lVar4 + 0xa8) = fVar22,
     fVar22 <= 0.0)) {
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41278);
    if ((lVar12 == 0) || (*(long *)(lVar12 + 0xb8) == 0)) goto code_r0x014e1370;
    puVar3 = (undefined8 *)/*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar12 + 0xb8),6,1,1,0);
  }
  if (*(char *)(lVar4 + 0x80) == '\0') {
    return puVar3;
  }
  if (*(char *)(lVar4 + 0x81) != '\0') {
    return puVar3;
  }
  if ((*puVar14 == 0) || (lVar12 = *(long *)(*puVar14 + 0x48), lVar12 == 0)) goto code_r0x014e1370;
  puVar3 = (undefined8 *)/*UnityEngine.Playables.PlayableDirector$$get_state*/ func_0x032821bc(lVar12,0);
  if ((int)puVar3 == 1) {
    return puVar3;
  }
  puVar21 = &UNK_014e14e0;
  lVar12 = lVar4;
code_r0x014e1518:
  pppppppuVar1 = (undefined8 *******)&lStack_150;
  lStack_150 = lVar8;
  uStack_148 = uVar16;
  puStack_140 = puVar14;
  lStack_138 = lVar4;
  ppppppuStack_130 = &pppppuStack_40;
  puStack_128 = puVar21;
  if ((bRam0000000003eb4bdf & 1) == 0) {
    func_0x00f78a20(0x3d41278);
    bRam0000000003eb4bdf = 1;
  }
  lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar12,uRam0000000003d41278);
  if (lVar4 == 0) {
    lVar4 = func_0x00f78af4();
    pppppppuVar1 = &pppppppuStack_190;
    uStack_178 = 0x3d41278;
    uStack_170 = 0x3eb4000;
    puStack_158 = &Atlas_UI_Screens_ResultsScreen__OnAfterExit;
    pppppppuVar20 = &pppppppuStack_160;
    uVar16 = 0x3eb4000;
    pppppppuStack_190 = (undefined8 *******)ppppppuVar19;
    pcStack_188 = (code *)unaff_x23;
    lStack_180 = lVar8;
    lStack_168 = lVar12;
    pppppppuStack_160 = &ppppppuStack_130;
    if ((bRam0000000003eb4bde & 1) == 0) {
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d3d808);
      func_0x00f78a20(0x3d41268);
      func_0x00f78a20(0x3d41270);
      func_0x00f78a20(0x3d41278);
      func_0x00f78a20(0x3d79090);
      func_0x00f78a20(0x3d78f50);
      bRam0000000003eb4bde = 1;
    }
    lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41278);
    if ((lVar12 != 0) && (*(long *)(lVar12 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar12 + 0xb8),6,0,0);
      if ((*(long *)(lVar4 + 0x70) != 0) &&
         (lVar12 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(lVar4 + 0x70),0,0),
         lVar12 != 0)) {
        uVar16 = 0x3d79000;
        lVar17 = 0x3d41270;
        Atlas_Gameplay_Kart_KartFEAnimator__ExitFEScreen(lVar12,0);
        /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/UI/Front_End/ResultHooray')*/ uRam0000000003d79090,0);
        /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/Gameplay_SFX/FireJets2D')*/ uRam0000000003d78f50,0);
        lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
        lVar8 = 0x3d41270;
        if (lVar12 != 0) {
          if (*(long *)(lVar12 + 0x10) == 0) {
code_r0x014e173c:
            uVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar4,uRam0000000003d41268);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            puVar3 = (undefined8 *)/*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(uVar16,0,0);
            if (*(long *)(lVar4 + 0x98) == 0) {
              return puVar3;
            }
            lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar4,uRam0000000003d41278);
            lVar8 = 0x3d20000;
            if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x80), lVar12 != 0)) {
              lVar4 = *(long *)(lVar4 + 0x98);
              if ((bRam0000000003eb5670 & 1) == 0) {
                func_0x00f78a20(0x3d23990,lVar4,0);
                bRam0000000003eb5670 = 1;
              }
              uVar6 = *(undefined8 *)(lVar12 + 0x18);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              puVar3 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar6,0,0);
              if ((int)puVar3 == 0) {
                return puVar3;
              }
              lVar12 = *(long *)(lVar12 + 0x18);
              if (lVar12 == 0) {
                auVar24 = func_0x00f78af4();
                pcStack_188 = Core_Application_CoroutineRunner__Runner_d__13___ctor;
                pppppppuStack_190 = &pppppppuStack_160;
                puVar3 = (undefined8 *)/*System.Object$$.ctor*/ func_0x0294d018(auVar24._0_8_,0);
                *(int *)(auVar24._0_8_ + 0x10) = auVar24._8_4_;
                return puVar3;
              }
              if (lVar4 == 0) {
                func_0x00f78a24(0x3d23938,0,0);
                uVar10 = func_0x00f78aec();
                uVar6 = func_0x00f78a24(0x3d7b500);
                /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar10,uVar6,0);
              }
              else {
                if (pcRam0000000003ec01d0 == (code *)0x0) {
                  pcRam0000000003ec01d0 =
                       (code *)func_0x00f789d4(
                                              "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                              );
                }
                uVar16 = (*pcRam0000000003ec01d0)(lVar12);
                if ((uVar16 & 1) != 0) {
                  if (pcRam0000000003ec01e8 == (code *)0x0) {
                    pcRam0000000003ec01e8 =
                         (code *)func_0x00f789d4(
                                                "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                                );
                  }
                    /* WARNING: Could not recover jumptable at 0x03248188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  puVar3 = (undefined8 *)(*pcRam0000000003ec01e8)(lVar12,lVar4);
                  return puVar3;
                }
                func_0x00f78a24(0x3d1fce8);
                uVar10 = func_0x00f78aec();
                uVar6 = func_0x00f78a24(0x3d6af80);
                /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar6,0);
              }
              uVar6 = func_0x00f78a24(0x3d5a8b8);
              auVar23 = func_0x00f78ac0(uVar10,uVar6);
              pcStack_188 = (code *)&UnityEngine_MonoBehaviour__StopCoroutineManaged;
              pppppppuStack_190 = &pppppppuStack_160;
              if (pcRam0000000003ec01e8 == (code *)0x0) {
                pcRam0000000003ec01e8 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                            );
              }
                    /* WARNING: Could not recover jumptable at 0x03248254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar3 = (undefined8 *)(*pcRam0000000003ec01e8)(auVar23._0_8_,auVar23._8_8_);
              return puVar3;
            }
          }
          else {
            lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
            if (lVar12 != 0) {
              uVar16 = 1;
              do {
                lVar8 = lVar17;
                if (*(long *)(lVar12 + 0x10) == 0) break;
                if (*(int *)(*(long *)(lVar12 + 0x10) + 0x18) <= (int)uVar16) goto code_r0x014e173c;
                if (*(long *)(lVar4 + 0x70) == 0) break;
                Atlas_FrontEnd_FrontEndScene__SetKartHidden(*(long *)(lVar4 + 0x70),uVar16,0);
                uVar16 = (ulong)((int)uVar16 + 1);
                lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar4,uRam0000000003d41270);
              } while (lVar12 != 0);
            }
          }
        }
      }
    }
    puVar21 = &Atlas_UI_Screens_ResultsScreen__AnimateUIInRoutine;
    lVar12 = func_0x00f78af4();
  }
  else {
    uVar16 = *(ulong *)(lVar4 + 0x80);
    puVar21 = &UNK_014e1570;
    lVar4 = lVar12;
    pppppppuVar20 = &ppppppuStack_130;
  }
  *(long *)((long)pppppppuVar1 + -0x30) = lVar8;
  *(undefined8 *)((long)pppppppuVar1 + -0x28) = 0x3d41278;
  *(ulong *)((long)pppppppuVar1 + -0x20) = uVar16;
  *(long *)((long)pppppppuVar1 + -0x18) = lVar4;
  *(undefined8 ********)((long)pppppppuVar1 + -0x10) = pppppppuVar20;
  *(undefined **)((long)pppppppuVar1 + -8) = puVar21;
  if ((bRam0000000003eb4be1 & 1) == 0) {
    func_0x00f78a20(0x3d28980);
    bRam0000000003eb4be1 = 1;
  }
  puVar3 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.ResultsScreen.<AnimateUIInRoutine>d__23_TypeInfo*/ uRam0000000003d28980);
  /*Atlas.UI.Screens.ResultsScreen.<AnimateUIInRoutine>d__23$$.ctor*/ func_0x01564b04(puVar3,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[4] = lVar12;
    return puVar3;
  }
  uVar6 = func_0x00f78af4();
  *(long *)((long)pppppppuVar1 + -0x60) = lVar8;
  *(undefined8 *)((long)pppppppuVar1 + -0x58) = 0x3d28980;
  *(undefined8 *)((long)pppppppuVar1 + -0x50) = 0;
  *(long *)((long)pppppppuVar1 + -0x48) = lVar12;
  *(undefined1 **)((long)pppppppuVar1 + -0x40) = (undefined1 *)((long)pppppppuVar1 + -0x10);
  *(undefined **)((long)pppppppuVar1 + -0x38) = &Atlas_UI_Screens_ResultsScreen__ContinuePressed;
  if ((bRam0000000003eb4be2 & 1) == 0) {
    func_0x00f78a20(0x3d41270);
    func_0x00f78a20(0x3d79008);
    bRam0000000003eb4be2 = 1;
  }
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/GeneralButton')*/ uRam0000000003d79008,0);
  lVar12 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar6,uRam0000000003d41270);
  if (lVar12 != 0) {
    if (*(long *)(lVar12 + 0x18) != 0) {
      /*Atlas.UI.Screens.ResultsScreen.ContinueSelected$$Invoke*/ func_0x01564df4(*(long *)(lVar12 + 0x18),0);
    }
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  lVar12 = func_0x00f78af4();
  *(undefined8 *)((long)pppppppuVar1 + -0x90) = 0x3d79008;
  *(undefined8 *)((long)pppppppuVar1 + -0x88) = 0x3eb4000;
  *(undefined8 *)((long)pppppppuVar1 + -0x80) = 0x3d41270;
  *(undefined8 *)((long)pppppppuVar1 + -0x78) = uVar6;
  *(undefined1 **)((long)pppppppuVar1 + -0x70) = (undefined1 *)((long)pppppppuVar1 + -0x40);
  *(undefined **)((long)pppppppuVar1 + -0x68) = &Atlas_UI_Screens_ResultsScreen___ctor;
  if ((bRam0000000003eb4be3 & 1) == 0) {
    func_0x00f78a20(0x3d2c8b8);
    bRam0000000003eb4be3 = 1;
  }
  *(undefined8 *)((long)pppppppuVar1 + -0x70) = *(undefined8 *)((long)pppppppuVar1 + -0x70);
  *(undefined8 *)((long)pppppppuVar1 + -0x68) = *(undefined8 *)((long)pppppppuVar1 + -0x68);
  if (lVar12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar3 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c8b8 + 0x18) + 0xc0) + 0x38))();
    return puVar3;
  }
  auVar23 = func_0x00f78af4();
  puVar11 = auVar23._8_8_;
  puVar3 = auVar23._0_8_;
  uVar10 = puVar11[1];
  uVar6 = *puVar11;
  puVar3[2] = puVar11[2];
  puVar3[1] = uVar10;
  *puVar3 = uVar6;
  return puVar3;
}



// ============================================================
// RVA: 0x14e0eb8 | Atlas.UI.Screens.ResultsScreen.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x014e14dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014e156c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e14e0) */
/* WARNING: Removing unreachable block (ram,0x014e1570) */
/* WARNING: Removing unreachable block (ram,0x014e1574) */
/* WARNING: Removing unreachable block (ram,0x014e158c) */
/* WARNING: Removing unreachable block (ram,0x014e1594) */
/* WARNING: Removing unreachable block (ram,0x014e15a4) */
/* WARNING: Removing unreachable block (ram,0x014e15bc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * Atlas_UI_Screens_ResultsScreen__OnUpdate(float param_1,long param_2)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x23;
  undefined8 ******unaff_x24;
  undefined8 ******ppppppuVar16;
  undefined8 ******ppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined *puVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined8 *******pppppppuStack_160;
  code *pcStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 *******pppppppuStack_130;
  undefined *puStack_128;
  long lStack_120;
  ulong uStack_118;
  ulong *puStack_110;
  long lStack_108;
  undefined8 ******ppppppuStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar9 = 0x3d23990;
  lVar15 = 0x3d23990;
  if ((bRam0000000003eb4bdd & 1) == 0) {
    func_0x00f78a20(0x3d2c8c0);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d56dc0);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d808);
    func_0x00f78a20(0x3d3d810);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d41268);
    func_0x00f78a20(0x3d41270);
    func_0x00f78a20(0x3d41278);
    func_0x00f78a20(0x3d79090);
    func_0x00f78a20(0x3d78f50);
    bRam0000000003eb4bdd = 1;
  }
  puVar12 = (ulong *)(param_2 + 0x78);
  uVar14 = *puVar12;
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar3 = (undefined8 *)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar14,0);
  lVar7 = lVar9;
  if (((ulong)puVar3 & 1) == 0) {
    lVar7 = lVar15;
    if (*(long *)(param_2 + 0x70) == 0) goto code_r0x014e1370;
    puVar3 = (undefined8 *)
             Atlas_FrontEnd_FrontEndScene__TryGetSubsceneBehaviour_FrontEndSubsceneBehaviourBase_
                       (*(long *)(param_2 + 0x70),puVar12,uRam0000000003d56dc0);
    if ((int)puVar3 == 0) {
      return puVar3;
    }
    ppppppuVar17 = (undefined8 ******)0x3d41270;
    unaff_x24 = (undefined8 ******)0x3d41270;
    lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41270);
    if (lVar4 == 0) goto code_r0x014e1370;
    lVar7 = lVar9;
    if (*(long *)(lVar4 + 0x10) != 0) {
      lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41270);
      lVar7 = lVar15;
      if (lVar4 != 0) {
        lVar15 = 0;
        uVar14 = 0;
        lVar7 = lVar9;
        while (*(long *)(lVar4 + 0x10) != 0) {
          if ((long)*(int *)(*(long *)(lVar4 + 0x10) + 0x18) <= (long)uVar14) goto code_r0x014e1244;
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41270);
          if ((lVar9 == 0) || (lVar7 = *(long *)(lVar9 + 0x10), lVar7 == 0)) break;
          if (*(uint *)(lVar7 + 0x18) <= uVar14) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar9 = *(long *)(lVar7 + 0x10) + lVar15;
          lVar7 = *(long *)(lVar9 + 0x28);
          uStack_a8 = *(undefined8 *)(lVar9 + 0x38);
          uStack_b0 = *(undefined8 *)(lVar9 + 0x30);
          uStack_98 = *(undefined8 *)(lVar9 + 0x48);
          uStack_a0 = *(undefined8 *)(lVar9 + 0x40);
          uStack_88 = *(undefined8 *)(lVar9 + 0x58);
          uStack_90 = *(undefined8 *)(lVar9 + 0x50);
          uStack_80 = *(undefined8 *)(lVar9 + 0x60);
          unaff_x23 = *(long *)(lVar9 + 0x68);
          if (*(long *)(param_2 + 0x70) == 0) break;
          lStack_f0 = lVar7;
          uStack_e8 = uStack_b0;
          uStack_e0 = uStack_a8;
          uStack_d8 = uStack_a0;
          uStack_d0 = uStack_98;
          uStack_c8 = uStack_90;
          uStack_c0 = uStack_88;
          uStack_b8 = uStack_80;
          Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                    (*(long *)(param_2 + 0x70),uVar14,&lStack_f0,0);
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41268);
          if ((lVar9 == 0) || (*(long *)(lVar9 + 0x70) == 0)) break;
          if ((long)uVar14 < (long)*(int *)(*(long *)(lVar9 + 0x70) + 0x18)) {
            iVar2 = /*System.String$$IsNullOrEmpty*/ func_0x029cb0f8(unaff_x23,0);
            if (iVar2 != 0) {
              lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_2,uRam0000000003d41278);
              if ((lVar9 == 0) || (*(long *)(lVar9 + 0x20) == 0)) break;
              unaff_x23 = *(long *)(*(long *)(lVar9 + 0x20) + 0x10);
              if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              uVar5 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(lVar7,0);
              if ((unaff_x23 == 0) ||
                 (lVar9 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(unaff_x23,uVar5,uRam0000000003d57270), lVar9 == 0)) break;
              unaff_x23 = /*Atlas.Definitions.CharacterDefinition$$IsSkin*/ func_0x0154112c(lVar9,0);
              lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_2,uRam0000000003d41278);
              lVar7 = lVar9;
              lVar6 = lVar4;
              if ((int)unaff_x23 != 0) {
                if (((lVar4 == 0) || (*(long *)(lVar4 + 0x20) == 0)) ||
                   (lVar4 = *(long *)(*(long *)(lVar4 + 0x20) + 0x10), lVar4 == 0)) break;
                lVar7 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar4,*(undefined8 *)(lVar9 + 0x70),uRam0000000003d57270);
                lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_2,uRam0000000003d41278);
                lVar6 = lVar7;
                if (lVar4 == 0) break;
              }
              if ((lVar6 == 0) || (*(long *)(lVar4 + 0x88) == 0)) break;
              unaff_x23 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar4 + 0x88),*(undefined8 *)(lVar7 + 0x30),0);
            }
            lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41268);
            if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x70), lVar9 == 0)) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar14) {
              uVar5 = func_0x00f78b24();
              puVar19 = &Atlas_UI_Screens_ResultsScreen__OnCameraFlyThruComplete;
              lVar9 = func_0x00f78ac0(uVar5,0);
              goto code_r0x014e1518;
            }
            /*Atlas.UI.GameCenterTextFormatter$$SetTextAsGameCenterName*/ func_0x01598280(*(undefined8 *)(lVar9 + uVar14 * 8 + 0x20),unaff_x23,0);
          }
          uVar14 = uVar14 + 1;
          lVar4 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41270);
          lVar15 = lVar15 + 0x50;
          if (lVar4 == 0) break;
        }
      }
      goto code_r0x014e1370;
    }
code_r0x014e1244:
    *(undefined1 *)(param_2 + 0xa0) = 1;
  }
  else {
    ppppppuVar17 = unaff_x24;
    if (*(char *)(param_2 + 0xa0) == '\0') goto LAB_014e1428;
  }
  unaff_x24 = ppppppuVar17;
  if (*(long *)(param_2 + 0x70) != 0) {
    puVar3 = (undefined8 *)
             Atlas_FrontEnd_FrontEndScene__AreAllRequestPartsLoadedAndInstantiated
                       (*(long *)(param_2 + 0x70),0);
    if ((int)puVar3 == 0) goto LAB_014e1428;
    ppppppuVar17 = (undefined8 ******)0x3d41270;
    ppppppuVar16 = (undefined8 ******)0x3d41270;
    puVar3 = (undefined8 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41270);
    unaff_x24 = ppppppuVar17;
    if (puVar3 != (undefined8 *)0x0) {
      if ((*(char *)(puVar3 + 4) != '\0') && (*(int *)(param_2 + 0x84) < 3)) {
        *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + 1;
        return puVar3;
      }
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41270);
      if (lVar9 != 0) {
        uVar14 = 0;
        while (unaff_x24 = ppppppuVar16, *(long *)(lVar9 + 0x10) != 0) {
          uVar8 = *puVar12;
          uVar13 = (uint)uVar14;
          if (*(int *)(*(long *)(lVar9 + 0x10) + 0x18) <= (int)uVar13) goto code_r0x014e1374;
          if (uVar8 == 0) break;
          lVar7 = Atlas_FrontEnd_FrontEndSubsceneBehaviourBase__GetKartLocator(uVar8,uVar14,0);
          if (((*(long *)(param_2 + 0x70) == 0) ||
              (lVar9 = Atlas_FrontEnd_FrontEndScene__GetKartTransform
                                 (*(long *)(param_2 + 0x70),uVar14,0), lVar7 == 0)) ||
             (/*UnityEngine.Transform$$get_position*/ func_0x03274f20(lVar7,0), unaff_x23 = lVar9, lVar9 == 0)) break;
          /*UnityEngine.Transform$$set_position*/ func_0x03274fd0(lVar9,0);
          /*UnityEngine.Transform$$get_rotation*/ func_0x03275430(lVar7,0);
          /*UnityEngine.Transform$$set_rotation*/ func_0x032754b4(lVar9,0);
          /*UnityEngine.Transform$$get_localScale*/ func_0x03275b40(lVar7,0);
          /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(lVar9,0);
          if ((*(long *)(param_2 + 0x70) == 0) ||
             (lVar9 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator
                                (*(long *)(param_2 + 0x70),uVar14,0), lVar9 == 0)) break;
          Atlas_Gameplay_Kart_KartFEAnimator__PlayCeremonyScreen(lVar9,2 < uVar13,0);
          uVar14 = (ulong)(uVar13 + 1);
          lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,uRam0000000003d41270);
          if (lVar9 == 0) break;
        }
      }
    }
  }
code_r0x014e1370:
  do {
    do {
      uVar8 = func_0x00f78af4();
      ppppppuVar17 = unaff_x24;
code_r0x014e1374:
      unaff_x24 = ppppppuVar17;
    } while ((uVar8 == 0) || (*(long *)(uVar8 + 0x48) == 0));
    /*UnityEngine.Playables.PlayableDirector$$Play*/ func_0x03282920(*(long *)(uVar8 + 0x48),0);
    *(undefined8 *)(param_2 + 0xa4) = _UNK_033f8590;
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_2,*ppppppuVar17);
  } while (lVar9 == 0);
  if (*(char *)(lVar9 + 0x20) == '\0') {
    Atlas_UI_Screens_AtlasScreen_LeaguePodiumScreenBehaviour__LeaguePodiumScreen_TransitionData___ReadyToHideLoadingScreenAfterInit
              (param_2,uRam0000000003d2c8c0);
  }
  else {
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_2,uRam0000000003d41278);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x78) == 0)) goto code_r0x014e1370;
    /*Atlas.UI.TransitionManager$$EndTransitionSequence*/ func_0x01511e3c(*(long *)(lVar9 + 0x78),1,0,0,0);
  }
  puVar3 = (undefined8 *)/*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/ResultHooray')*/ uRam0000000003d79090,0);
  *(undefined1 *)(param_2 + 0x80) = 1;
  *(undefined1 *)(param_2 + 0xa0) = 0;
  *(undefined4 *)(param_2 + 0x84) = 0;
LAB_014e1428:
  if ((0.0 < *(float *)(param_2 + 0xa4)) &&
     (fVar20 = *(float *)(param_2 + 0xa4) - param_1, *(float *)(param_2 + 0xa4) = fVar20,
     fVar20 <= 0.0)) {
    puVar3 = (undefined8 *)/*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/Gameplay_SFX/FireJets2D')*/ uRam0000000003d78f50,0);
  }
  unaff_x24 = ppppppuVar17;
  if ((0.0 < *(float *)(param_2 + 0xa8)) &&
     (fVar20 = *(float *)(param_2 + 0xa8) - param_1, *(float *)(param_2 + 0xa8) = fVar20,
     fVar20 <= 0.0)) {
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_2,uRam0000000003d41278);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0xb8) == 0)) goto code_r0x014e1370;
    puVar3 = (undefined8 *)/*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar9 + 0xb8),6,1,1,0);
  }
  if (*(char *)(param_2 + 0x80) == '\0') {
    return puVar3;
  }
  if (*(char *)(param_2 + 0x81) != '\0') {
    return puVar3;
  }
  if ((*puVar12 == 0) || (lVar9 = *(long *)(*puVar12 + 0x48), lVar9 == 0)) goto code_r0x014e1370;
  puVar3 = (undefined8 *)/*UnityEngine.Playables.PlayableDirector$$get_state*/ func_0x032821bc(lVar9,0);
  if ((int)puVar3 == 1) {
    return puVar3;
  }
  puVar19 = &UNK_014e14e0;
  lVar9 = param_2;
code_r0x014e1518:
  pppppppuVar1 = (undefined8 *******)&lStack_120;
  lStack_120 = lVar7;
  uStack_118 = uVar14;
  puStack_110 = puVar12;
  lStack_108 = param_2;
  ppppppuStack_100 = (undefined8 ******)&stack0xfffffffffffffff0;
  puStack_f8 = puVar19;
  if ((bRam0000000003eb4bdf & 1) == 0) {
    func_0x00f78a20(0x3d41278);
    bRam0000000003eb4bdf = 1;
  }
  lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d41278);
  if (lVar15 == 0) {
    lVar15 = func_0x00f78af4();
    pppppppuVar1 = &pppppppuStack_160;
    uStack_148 = 0x3d41278;
    uStack_140 = 0x3eb4000;
    puStack_128 = &Atlas_UI_Screens_ResultsScreen__OnAfterExit;
    pppppppuVar18 = &pppppppuStack_130;
    uVar14 = 0x3eb4000;
    pppppppuStack_160 = (undefined8 *******)ppppppuVar17;
    pcStack_158 = (code *)unaff_x23;
    lStack_150 = lVar7;
    lStack_138 = lVar9;
    pppppppuStack_130 = &ppppppuStack_100;
    if ((bRam0000000003eb4bde & 1) == 0) {
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d3d808);
      func_0x00f78a20(0x3d41268);
      func_0x00f78a20(0x3d41270);
      func_0x00f78a20(0x3d41278);
      func_0x00f78a20(0x3d79090);
      func_0x00f78a20(0x3d78f50);
      bRam0000000003eb4bde = 1;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar15,uRam0000000003d41278);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar9 + 0xb8),6,0,0);
      if ((*(long *)(lVar15 + 0x70) != 0) &&
         (lVar9 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(lVar15 + 0x70),0,0),
         lVar9 != 0)) {
        uVar14 = 0x3d79000;
        lVar4 = 0x3d41270;
        Atlas_Gameplay_Kart_KartFEAnimator__ExitFEScreen(lVar9,0);
        /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/UI/Front_End/ResultHooray')*/ uRam0000000003d79090,0);
        /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/Gameplay_SFX/FireJets2D')*/ uRam0000000003d78f50,0);
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar15,uRam0000000003d41270);
        lVar7 = 0x3d41270;
        if (lVar9 != 0) {
          if (*(long *)(lVar9 + 0x10) == 0) {
code_r0x014e173c:
            uVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar15,uRam0000000003d41268);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            puVar3 = (undefined8 *)/*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(uVar14,0,0);
            if (*(long *)(lVar15 + 0x98) == 0) {
              return puVar3;
            }
            lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar15,uRam0000000003d41278);
            lVar7 = 0x3d20000;
            if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x80), lVar9 != 0)) {
              lVar15 = *(long *)(lVar15 + 0x98);
              if ((bRam0000000003eb5670 & 1) == 0) {
                func_0x00f78a20(0x3d23990,lVar15,0);
                bRam0000000003eb5670 = 1;
              }
              uVar5 = *(undefined8 *)(lVar9 + 0x18);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              puVar3 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar5,0,0);
              if ((int)puVar3 == 0) {
                return puVar3;
              }
              lVar9 = *(long *)(lVar9 + 0x18);
              if (lVar9 == 0) {
                auVar22 = func_0x00f78af4();
                pcStack_158 = Core_Application_CoroutineRunner__Runner_d__13___ctor;
                pppppppuStack_160 = &pppppppuStack_130;
                puVar3 = (undefined8 *)/*System.Object$$.ctor*/ func_0x0294d018(auVar22._0_8_,0);
                *(int *)(auVar22._0_8_ + 0x10) = auVar22._8_4_;
                return puVar3;
              }
              if (lVar15 == 0) {
                func_0x00f78a24(0x3d23938,0,0);
                uVar10 = func_0x00f78aec();
                uVar5 = func_0x00f78a24(0x3d7b500);
                /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar10,uVar5,0);
              }
              else {
                if (pcRam0000000003ec01d0 == (code *)0x0) {
                  pcRam0000000003ec01d0 =
                       (code *)func_0x00f789d4(
                                              "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                              );
                }
                uVar14 = (*pcRam0000000003ec01d0)(lVar9);
                if ((uVar14 & 1) != 0) {
                  if (pcRam0000000003ec01e8 == (code *)0x0) {
                    pcRam0000000003ec01e8 =
                         (code *)func_0x00f789d4(
                                                "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                                );
                  }
                    /* WARNING: Could not recover jumptable at 0x03248188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  puVar3 = (undefined8 *)(*pcRam0000000003ec01e8)(lVar9,lVar15);
                  return puVar3;
                }
                func_0x00f78a24(0x3d1fce8);
                uVar10 = func_0x00f78aec();
                uVar5 = func_0x00f78a24(0x3d6af80);
                /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar10,uVar5,0);
              }
              uVar5 = func_0x00f78a24(0x3d5a8b8);
              auVar21 = func_0x00f78ac0(uVar10,uVar5);
              pcStack_158 = (code *)&UnityEngine_MonoBehaviour__StopCoroutineManaged;
              pppppppuStack_160 = &pppppppuStack_130;
              if (pcRam0000000003ec01e8 == (code *)0x0) {
                pcRam0000000003ec01e8 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                            );
              }
                    /* WARNING: Could not recover jumptable at 0x03248254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar3 = (undefined8 *)(*pcRam0000000003ec01e8)(auVar21._0_8_,auVar21._8_8_);
              return puVar3;
            }
          }
          else {
            lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar15,uRam0000000003d41270);
            if (lVar9 != 0) {
              uVar14 = 1;
              do {
                lVar7 = lVar4;
                if (*(long *)(lVar9 + 0x10) == 0) break;
                if (*(int *)(*(long *)(lVar9 + 0x10) + 0x18) <= (int)uVar14) goto code_r0x014e173c;
                if (*(long *)(lVar15 + 0x70) == 0) break;
                Atlas_FrontEnd_FrontEndScene__SetKartHidden(*(long *)(lVar15 + 0x70),uVar14,0);
                uVar14 = (ulong)((int)uVar14 + 1);
                lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar15,uRam0000000003d41270);
              } while (lVar9 != 0);
            }
          }
        }
      }
    }
    puVar19 = &Atlas_UI_Screens_ResultsScreen__AnimateUIInRoutine;
    lVar9 = func_0x00f78af4();
  }
  else {
    uVar14 = *(ulong *)(lVar15 + 0x80);
    puVar19 = &UNK_014e1570;
    lVar15 = lVar9;
    pppppppuVar18 = &ppppppuStack_100;
  }
  *(long *)((long)pppppppuVar1 + -0x30) = lVar7;
  *(undefined8 *)((long)pppppppuVar1 + -0x28) = 0x3d41278;
  *(ulong *)((long)pppppppuVar1 + -0x20) = uVar14;
  *(long *)((long)pppppppuVar1 + -0x18) = lVar15;
  *(undefined8 ********)((long)pppppppuVar1 + -0x10) = pppppppuVar18;
  *(undefined **)((long)pppppppuVar1 + -8) = puVar19;
  if ((bRam0000000003eb4be1 & 1) == 0) {
    func_0x00f78a20(0x3d28980);
    bRam0000000003eb4be1 = 1;
  }
  puVar3 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.ResultsScreen.<AnimateUIInRoutine>d__23_TypeInfo*/ uRam0000000003d28980);
  /*Atlas.UI.Screens.ResultsScreen.<AnimateUIInRoutine>d__23$$.ctor*/ func_0x01564b04(puVar3,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[4] = lVar9;
    return puVar3;
  }
  uVar5 = func_0x00f78af4();
  *(long *)((long)pppppppuVar1 + -0x60) = lVar7;
  *(undefined8 *)((long)pppppppuVar1 + -0x58) = 0x3d28980;
  *(undefined8 *)((long)pppppppuVar1 + -0x50) = 0;
  *(long *)((long)pppppppuVar1 + -0x48) = lVar9;
  *(undefined1 **)((long)pppppppuVar1 + -0x40) = (undefined1 *)((long)pppppppuVar1 + -0x10);
  *(undefined **)((long)pppppppuVar1 + -0x38) = &Atlas_UI_Screens_ResultsScreen__ContinuePressed;
  if ((bRam0000000003eb4be2 & 1) == 0) {
    func_0x00f78a20(0x3d41270);
    func_0x00f78a20(0x3d79008);
    bRam0000000003eb4be2 = 1;
  }
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/GeneralButton')*/ uRam0000000003d79008,0);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar5,uRam0000000003d41270);
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 0x18) != 0) {
      /*Atlas.UI.Screens.ResultsScreen.ContinueSelected$$Invoke*/ func_0x01564df4(*(long *)(lVar9 + 0x18),0);
    }
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  lVar9 = func_0x00f78af4();
  *(undefined8 *)((long)pppppppuVar1 + -0x90) = 0x3d79008;
  *(undefined8 *)((long)pppppppuVar1 + -0x88) = 0x3eb4000;
  *(undefined8 *)((long)pppppppuVar1 + -0x80) = 0x3d41270;
  *(undefined8 *)((long)pppppppuVar1 + -0x78) = uVar5;
  *(undefined1 **)((long)pppppppuVar1 + -0x70) = (undefined1 *)((long)pppppppuVar1 + -0x40);
  *(undefined **)((long)pppppppuVar1 + -0x68) = &Atlas_UI_Screens_ResultsScreen___ctor;
  if ((bRam0000000003eb4be3 & 1) == 0) {
    func_0x00f78a20(0x3d2c8b8);
    bRam0000000003eb4be3 = 1;
  }
  *(undefined8 *)((long)pppppppuVar1 + -0x70) = *(undefined8 *)((long)pppppppuVar1 + -0x70);
  *(undefined8 *)((long)pppppppuVar1 + -0x68) = *(undefined8 *)((long)pppppppuVar1 + -0x68);
  if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar3 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c8b8 + 0x18) + 0xc0) + 0x38))();
    return puVar3;
  }
  auVar21 = func_0x00f78af4();
  puVar11 = auVar21._8_8_;
  puVar3 = auVar21._0_8_;
  uVar10 = puVar11[1];
  uVar5 = *puVar11;
  puVar3[2] = puVar11[2];
  puVar3[1] = uVar10;
  *puVar3 = uVar5;
  return puVar3;
}



// ============================================================
// RVA: 0x14e1518 | Atlas.UI.Screens.ResultsScreen.OnCameraFlyThruComplete
// ============================================================

/* WARNING: Possible PIC construction at 0x014e156c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x014e1570) */
/* WARNING: Removing unreachable block (ram,0x014e1574) */
/* WARNING: Removing unreachable block (ram,0x014e158c) */
/* WARNING: Removing unreachable block (ram,0x014e1594) */
/* WARNING: Removing unreachable block (ram,0x014e15a4) */
/* WARNING: Removing unreachable block (ram,0x014e15bc) */

undefined8 * Atlas_UI_Screens_ResultsScreen__OnCameraFlyThruComplete(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 unaff_x22;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined8 ***pppuStack_40;
  undefined *puStack_38;
  
  puVar1 = &stack0xffffffffffffffd0;
  if ((bRam0000000003eb4bdf & 1) == 0) {
    func_0x00f78a20(0x3d41278);
    bRam0000000003eb4bdf = 1;
  }
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41278);
  if (lVar2 == 0) {
    lVar2 = func_0x00f78af4();
    puVar1 = &stack0xffffffffffffff90;
    puStack_38 = &Atlas_UI_Screens_ResultsScreen__OnAfterExit;
    ppppuVar9 = &pppuStack_40;
    uVar7 = 0x3eb4000;
    pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4bde & 1) == 0) {
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d3d808);
      func_0x00f78a20(0x3d41268);
      func_0x00f78a20(0x3d41270);
      func_0x00f78a20(0x3d41278);
      func_0x00f78a20(0x3d79090);
      func_0x00f78a20(0x3d78f50);
      bRam0000000003eb4bde = 1;
    }
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar2,uRam0000000003d41278);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar3 + 0xb8),6,0,0);
      if ((*(long *)(lVar2 + 0x70) != 0) &&
         (lVar3 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(lVar2 + 0x70),0,0),
         lVar3 != 0)) {
        uVar7 = 0x3d79000;
        uVar8 = 0x3d41270;
        Atlas_Gameplay_Kart_KartFEAnimator__ExitFEScreen(lVar3,0);
        /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/UI/Front_End/ResultHooray')*/ uRam0000000003d79090,0);
        /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/Gameplay_SFX/FireJets2D')*/ uRam0000000003d78f50,0);
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar2,uRam0000000003d41270);
        unaff_x22 = 0x3d41270;
        if (lVar3 != 0) {
          if (*(long *)(lVar3 + 0x10) == 0) {
code_r0x014e173c:
            uVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar2,uRam0000000003d41268);
            if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            puVar4 = (undefined8 *)/*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(uVar7,0,0);
            if (*(long *)(lVar2 + 0x98) == 0) {
              return puVar4;
            }
            lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar2,uRam0000000003d41278);
            unaff_x22 = 0x3d20000;
            if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x80), lVar3 != 0)) {
              lVar2 = *(long *)(lVar2 + 0x98);
              if ((bRam0000000003eb5670 & 1) == 0) {
                func_0x00f78a20(0x3d23990,lVar2,0);
                bRam0000000003eb5670 = 1;
              }
              uVar8 = *(undefined8 *)(lVar3 + 0x18);
              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                func_0x00f78ad0();
              }
              puVar4 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar8,0,0);
              if ((int)puVar4 == 0) {
                return puVar4;
              }
              lVar3 = *(long *)(lVar3 + 0x18);
              if (lVar3 == 0) {
                auVar12 = func_0x00f78af4();
                puVar4 = (undefined8 *)/*System.Object$$.ctor*/ func_0x0294d018(auVar12._0_8_,0);
                *(int *)(auVar12._0_8_ + 0x10) = auVar12._8_4_;
                return puVar4;
              }
              if (lVar2 == 0) {
                func_0x00f78a24(0x3d23938,0,0);
                uVar5 = func_0x00f78aec();
                uVar8 = func_0x00f78a24(0x3d7b500);
                /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar5,uVar8,0);
              }
              else {
                if (pcRam0000000003ec01d0 == (code *)0x0) {
                  pcRam0000000003ec01d0 =
                       (code *)func_0x00f789d4(
                                              "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                              );
                }
                uVar7 = (*pcRam0000000003ec01d0)(lVar3);
                if ((uVar7 & 1) != 0) {
                  if (pcRam0000000003ec01e8 == (code *)0x0) {
                    pcRam0000000003ec01e8 =
                         (code *)func_0x00f789d4(
                                                "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                                );
                  }
                    /* WARNING: Could not recover jumptable at 0x03248188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  puVar4 = (undefined8 *)(*pcRam0000000003ec01e8)(lVar3,lVar2);
                  return puVar4;
                }
                func_0x00f78a24(0x3d1fce8);
                uVar5 = func_0x00f78aec();
                uVar8 = func_0x00f78a24(0x3d6af80);
                /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar5,uVar8,0);
              }
              uVar8 = func_0x00f78a24(0x3d5a8b8);
              auVar11 = func_0x00f78ac0(uVar5,uVar8);
              if (pcRam0000000003ec01e8 == (code *)0x0) {
                pcRam0000000003ec01e8 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                            );
              }
                    /* WARNING: Could not recover jumptable at 0x03248254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              puVar4 = (undefined8 *)(*pcRam0000000003ec01e8)(auVar11._0_8_,auVar11._8_8_);
              return puVar4;
            }
          }
          else {
            lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar2,uRam0000000003d41270);
            if (lVar3 != 0) {
              uVar7 = 1;
              do {
                unaff_x22 = uVar8;
                if (*(long *)(lVar3 + 0x10) == 0) break;
                if (*(int *)(*(long *)(lVar3 + 0x10) + 0x18) <= (int)uVar7) goto code_r0x014e173c;
                if (*(long *)(lVar2 + 0x70) == 0) break;
                Atlas_FrontEnd_FrontEndScene__SetKartHidden(*(long *)(lVar2 + 0x70),uVar7,0);
                uVar7 = (ulong)((int)uVar7 + 1);
                lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(lVar2,uRam0000000003d41270);
              } while (lVar3 != 0);
            }
          }
        }
      }
    }
    puVar10 = &Atlas_UI_Screens_ResultsScreen__AnimateUIInRoutine;
    param_1 = func_0x00f78af4();
  }
  else {
    uVar7 = *(ulong *)(lVar2 + 0x80);
    puVar10 = (undefined *)0x14e1570;
    lVar2 = param_1;
    ppppuVar9 = (undefined8 ****)&stack0xfffffffffffffff0;
  }
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = 0x3d41278;
  *(ulong *)(puVar1 + -0x20) = uVar7;
  *(long *)(puVar1 + -0x18) = lVar2;
  *(undefined8 *****)(puVar1 + -0x10) = ppppuVar9;
  *(undefined **)(puVar1 + -8) = puVar10;
  if ((bRam0000000003eb4be1 & 1) == 0) {
    func_0x00f78a20(0x3d28980);
    bRam0000000003eb4be1 = 1;
  }
  puVar4 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.ResultsScreen.<AnimateUIInRoutine>d__23_TypeInfo*/ uRam0000000003d28980);
  /*Atlas.UI.Screens.ResultsScreen.<AnimateUIInRoutine>d__23$$.ctor*/ func_0x01564b04(puVar4,0,0);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[4] = param_1;
    return puVar4;
  }
  uVar8 = func_0x00f78af4();
  *(undefined8 *)(puVar1 + -0x60) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x58) = 0x3d28980;
  *(undefined8 *)(puVar1 + -0x50) = 0;
  *(long *)(puVar1 + -0x48) = param_1;
  *(undefined1 **)(puVar1 + -0x40) = puVar1 + -0x10;
  *(undefined **)(puVar1 + -0x38) = &Atlas_UI_Screens_ResultsScreen__ContinuePressed;
  if ((bRam0000000003eb4be2 & 1) == 0) {
    func_0x00f78a20(0x3d41270);
    func_0x00f78a20(0x3d79008);
    bRam0000000003eb4be2 = 1;
  }
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/GeneralButton')*/ uRam0000000003d79008,0);
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41270);
  if (lVar2 == 0) {
    lVar2 = func_0x00f78af4();
    *(undefined8 *)(puVar1 + -0x90) = 0x3d79008;
    *(undefined8 *)(puVar1 + -0x88) = 0x3eb4000;
    *(undefined8 *)(puVar1 + -0x80) = 0x3d41270;
    *(undefined8 *)(puVar1 + -0x78) = uVar8;
    *(undefined1 **)(puVar1 + -0x70) = puVar1 + -0x40;
    *(undefined **)(puVar1 + -0x68) = &Atlas_UI_Screens_ResultsScreen___ctor;
    if ((bRam0000000003eb4be3 & 1) == 0) {
      func_0x00f78a20(0x3d2c8b8);
      bRam0000000003eb4be3 = 1;
    }
    *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)(puVar1 + -0x70);
    *(undefined8 *)(puVar1 + -0x68) = *(undefined8 *)(puVar1 + -0x68);
    if (lVar2 == 0) {
      auVar11 = func_0x00f78af4();
      puVar6 = auVar11._8_8_;
      puVar4 = auVar11._0_8_;
      uVar5 = puVar6[1];
      uVar8 = *puVar6;
      puVar4[2] = puVar6[2];
      puVar4[1] = uVar5;
      *puVar4 = uVar8;
      return puVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c8b8 + 0x18) + 0xc0) + 0x38))();
    return puVar4;
  }
  if (*(long *)(lVar2 + 0x18) != 0) {
    /*Atlas.UI.Screens.ResultsScreen.ContinueSelected$$Invoke*/ func_0x01564df4(*(long *)(lVar2 + 0x18),0);
  }
  return (undefined8 *)((long)&MACH_HEADER.magic + 1);
}



// ============================================================
// RVA: 0x14e15d0 | Atlas.UI.Screens.ResultsScreen.OnAfterExit
// ============================================================

undefined8 * Atlas_UI_Screens_ResultsScreen__OnAfterExit(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  
  if ((bRam0000000003eb4bde & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d3d808);
    func_0x00f78a20(0x3d41268);
    func_0x00f78a20(0x3d41270);
    func_0x00f78a20(0x3d41278);
    func_0x00f78a20(0x3d79090);
    func_0x00f78a20(0x3d78f50);
    bRam0000000003eb4bde = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41278);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0xb8) != 0)) {
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar1 + 0xb8),6,0,0);
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (lVar1 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(param_1 + 0x70),0,0),
       lVar1 != 0)) {
      Atlas_Gameplay_Kart_KartFEAnimator__ExitFEScreen(lVar1,0);
      /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/UI/Front_End/ResultHooray')*/ uRam0000000003d79090,0);
      /*Atlas.Audio.UIAudio$$Stop*/ func_0x01516abc(/*STR('event:/Gameplay_SFX/FireJets2D')*/ uRam0000000003d78f50,0);
      lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41270);
      if (lVar1 != 0) {
        if (*(long *)(lVar1 + 0x10) == 0) {
LAB_014e173c:
          uVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41268);
          if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar3 = (undefined8 *)/*DG.Tweening.DOTween$$Kill*/ func_0x016962e4(uVar2,0,0);
          if (*(long *)(param_1 + 0x98) == 0) {
            return puVar3;
          }
          lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41278);
          if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x80), lVar1 != 0)) {
            lVar6 = *(long *)(param_1 + 0x98);
            if ((bRam0000000003eb5670 & 1) == 0) {
              func_0x00f78a20(0x3d23990,lVar6,0);
              bRam0000000003eb5670 = 1;
            }
            uVar2 = *(undefined8 *)(lVar1 + 0x18);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            puVar3 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
            if ((int)puVar3 == 0) {
              return puVar3;
            }
            lVar1 = *(long *)(lVar1 + 0x18);
            if (lVar1 == 0) {
              auVar10 = func_0x00f78af4();
              puVar3 = (undefined8 *)/*System.Object$$.ctor*/ func_0x0294d018(auVar10._0_8_,0);
              *(int *)(auVar10._0_8_ + 0x10) = auVar10._8_4_;
              return puVar3;
            }
            if (lVar6 == 0) {
              func_0x00f78a24(0x3d23938,0,0);
              uVar5 = func_0x00f78aec();
              uVar2 = func_0x00f78a24(0x3d7b500);
              /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar5,uVar2,0);
            }
            else {
              if (pcRam0000000003ec01d0 == (code *)0x0) {
                pcRam0000000003ec01d0 =
                     (code *)func_0x00f789d4(
                                            "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                            );
              }
              uVar4 = (*pcRam0000000003ec01d0)(lVar1);
              if ((uVar4 & 1) != 0) {
                if (pcRam0000000003ec01e8 == (code *)0x0) {
                  pcRam0000000003ec01e8 =
                       (code *)func_0x00f789d4(
                                              "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                              );
                }
                    /* WARNING: Could not recover jumptable at 0x03248188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                puVar3 = (undefined8 *)(*pcRam0000000003ec01e8)(lVar1,lVar6);
                return puVar3;
              }
              func_0x00f78a24(0x3d1fce8);
              uVar5 = func_0x00f78aec();
              uVar2 = func_0x00f78a24(0x3d6af80);
              /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar5,uVar2,0);
            }
            uVar2 = func_0x00f78a24(0x3d5a8b8);
            auVar9 = func_0x00f78ac0(uVar5,uVar2);
            if (pcRam0000000003ec01e8 == (code *)0x0) {
              pcRam0000000003ec01e8 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03248254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            puVar3 = (undefined8 *)(*pcRam0000000003ec01e8)(auVar9._0_8_,auVar9._8_8_);
            return puVar3;
          }
        }
        else {
          lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41270);
          if (lVar1 != 0) {
            iVar8 = 1;
            do {
              if (*(long *)(lVar1 + 0x10) == 0) break;
              if (*(int *)(*(long *)(lVar1 + 0x10) + 0x18) <= iVar8) goto LAB_014e173c;
              if (*(long *)(param_1 + 0x70) == 0) break;
              Atlas_FrontEnd_FrontEndScene__SetKartHidden(*(long *)(param_1 + 0x70),iVar8,0);
              iVar8 = iVar8 + 1;
              lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41270);
            } while (lVar1 != 0);
          }
        }
      }
    }
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4be1 & 1) == 0) {
    func_0x00f78a20(0x3d28980);
    bRam0000000003eb4be1 = 1;
  }
  puVar3 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.ResultsScreen.<AnimateUIInRoutine>d__23_TypeInfo*/ uRam0000000003d28980);
  /*Atlas.UI.Screens.ResultsScreen.<AnimateUIInRoutine>d__23$$.ctor*/ func_0x01564b04(puVar3,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[4] = uVar2;
    return puVar3;
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4be2 & 1) == 0) {
    func_0x00f78a20(0x3d41270);
    func_0x00f78a20(0x3d79008);
    bRam0000000003eb4be2 = 1;
  }
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/GeneralButton')*/ uRam0000000003d79008,0);
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar2,uRam0000000003d41270);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x18) != 0) {
      /*Atlas.UI.Screens.ResultsScreen.ContinueSelected$$Invoke*/ func_0x01564df4(*(long *)(lVar1 + 0x18),0);
    }
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4be3 & 1) == 0) {
    func_0x00f78a20(0x3d2c8b8);
    bRam0000000003eb4be3 = 1;
  }
  if (lVar1 == 0) {
    auVar9 = func_0x00f78af4();
    puVar7 = auVar9._8_8_;
    puVar3 = auVar9._0_8_;
    uVar5 = puVar7[1];
    uVar2 = *puVar7;
    puVar3[2] = puVar7[2];
    puVar3[1] = uVar5;
    *puVar3 = uVar2;
    return puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (undefined8 *)
           (*(code *)**(undefined8 **)
                       (*(long *)(*(long *)(lRam0000000003d2c8b8 + 0x18) + 0xc0) + 0x38))();
  return puVar3;
}



// ============================================================
// RVA: 0x14e17d8 | Atlas.UI.Screens.ResultsScreen.AnimateUIInRoutine
// ============================================================

undefined8 * Atlas_UI_Screens_ResultsScreen__AnimateUIInRoutine(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4be1 & 1) == 0) {
    func_0x00f78a20(0x3d28980);
    bRam0000000003eb4be1 = 1;
  }
  puVar1 = (undefined8 *)func_0x00f78aec(/*Atlas.UI.Screens.ResultsScreen.<AnimateUIInRoutine>d__23_TypeInfo*/ uRam0000000003d28980);
  /*Atlas.UI.Screens.ResultsScreen.<AnimateUIInRoutine>d__23$$.ctor*/ func_0x01564b04(puVar1,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = param_1;
    return puVar1;
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4be2 & 1) == 0) {
    func_0x00f78a20(0x3d41270);
    func_0x00f78a20(0x3d79008);
    bRam0000000003eb4be2 = 1;
  }
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/GeneralButton')*/ uRam0000000003d79008,0);
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar2,uRam0000000003d41270);
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x18) != 0) {
      /*Atlas.UI.Screens.ResultsScreen.ContinueSelected$$Invoke*/ func_0x01564df4(*(long *)(lVar3 + 0x18),0);
    }
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  lVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4be3 & 1) == 0) {
    func_0x00f78a20(0x3d2c8b8);
    bRam0000000003eb4be3 = 1;
  }
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c8b8 + 0x18) + 0xc0) + 0x38))();
    return puVar1;
  }
  auVar6 = func_0x00f78af4();
  puVar4 = auVar6._8_8_;
  puVar1 = auVar6._0_8_;
  uVar5 = puVar4[1];
  uVar2 = *puVar4;
  puVar1[2] = puVar4[2];
  puVar1[1] = uVar5;
  *puVar1 = uVar2;
  return puVar1;
}



// ============================================================
// RVA: 0x14e184c | Atlas.UI.Screens.ResultsScreen.ContinuePressed
// ============================================================

undefined8 * Atlas_UI_Screens_ResultsScreen__ContinuePressed(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000003eb4be2 & 1) == 0) {
    func_0x00f78a20(0x3d41270);
    func_0x00f78a20(0x3d79008);
    bRam0000000003eb4be2 = 1;
  }
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/Front_End/GeneralButton')*/ uRam0000000003d79008,0);
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41270);
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x18) != 0) {
      /*Atlas.UI.Screens.ResultsScreen.ContinueSelected$$Invoke*/ func_0x01564df4(*(long *)(lVar1 + 0x18),0);
    }
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4be3 & 1) == 0) {
    func_0x00f78a20(0x3d2c8b8);
    bRam0000000003eb4be3 = 1;
  }
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined8 *)
             (*(code *)**(undefined8 **)
                         (*(long *)(*(long *)(lRam0000000003d2c8b8 + 0x18) + 0xc0) + 0x38))();
    return puVar2;
  }
  auVar6 = func_0x00f78af4();
  puVar3 = auVar6._8_8_;
  puVar2 = auVar6._0_8_;
  uVar5 = puVar3[1];
  uVar4 = *puVar3;
  puVar2[2] = puVar3[2];
  puVar2[1] = uVar5;
  *puVar2 = uVar4;
  return puVar2;
}



// ============================================================
// RVA: 0x14e18e0 | Atlas.UI.Screens.ResultsScreen..ctor
// ============================================================

void Atlas_UI_Screens_ResultsScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4be3 & 1) == 0) {
    func_0x00f78a20(0x3d2c8b8);
    bRam0000000003eb4be3 = 1;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c8b8 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar5 = func_0x00f78af4();
  puVar2 = auVar5._8_8_;
  puVar1 = auVar5._0_8_;
  uVar4 = puVar2[1];
  uVar3 = *puVar2;
  puVar1[2] = puVar2[2];
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  return;
}



