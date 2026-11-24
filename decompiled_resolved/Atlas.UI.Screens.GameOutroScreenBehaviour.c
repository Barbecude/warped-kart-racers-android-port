// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.GameOutroScreenBehaviour

// ============================================================
// RVA: 0x15b01e8 | Atlas.UI.Screens.GameOutroScreenBehaviour.SetTournamentresult
// ============================================================

/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0164aba4) */
/* WARNING: Removing unreachable block (ram,0x0164abbc) */
/* WARNING: Removing unreachable block (ram,0x0164abcc) */
/* WARNING: Removing unreachable block (ram,0x0164a1b8) */
/* WARNING: Removing unreachable block (ram,0x0164a1e0) */
/* WARNING: Removing unreachable block (ram,0x0164a20c) */
/* WARNING: Removing unreachable block (ram,0x0164a228) */
/* WARNING: Removing unreachable block (ram,0x0164a230) */
/* WARNING: Removing unreachable block (ram,0x0164a234) */
/* WARNING: Removing unreachable block (ram,0x0164a24c) */
/* WARNING: Removing unreachable block (ram,0x0164a254) */
/* WARNING: Removing unreachable block (ram,0x0164a264) */
/* WARNING: Removing unreachable block (ram,0x0164a274) */
/* WARNING: Removing unreachable block (ram,0x0164a28c) */
/* WARNING: Removing unreachable block (ram,0x0164a2a8) */
/* WARNING: Removing unreachable block (ram,0x0164a2b0) */
/* WARNING: Removing unreachable block (ram,0x0164a2b4) */
/* WARNING: Removing unreachable block (ram,0x0164a2c4) */
/* WARNING: Removing unreachable block (ram,0x0164a2d0) */
/* WARNING: Removing unreachable block (ram,0x0164a2d4) */
/* WARNING: Removing unreachable block (ram,0x0164a308) */
/* WARNING: Removing unreachable block (ram,0x0164a30c) */
/* WARNING: Removing unreachable block (ram,0x0164a2f4) */
/* WARNING: Removing unreachable block (ram,0x0164a2f8) */
/* WARNING: Removing unreachable block (ram,0x0164ad0c) */
/* WARNING: Removing unreachable block (ram,0x0164ad68) */
/* WARNING: Removing unreachable block (ram,0x0164ad10) */
/* WARNING: Removing unreachable block (ram,0x0164ad1c) */
/* WARNING: Removing unreachable block (ram,0x0164ad24) */
/* WARNING: Removing unreachable block (ram,0x0164ad28) */
/* WARNING: Removing unreachable block (ram,0x0164ad78) */
/* WARNING: Removing unreachable block (ram,0x0164ad9c) */
/* WARNING: Removing unreachable block (ram,0x0164adb0) */
/* WARNING: Removing unreachable block (ram,0x0164add0) */
/* WARNING: Removing unreachable block (ram,0x0164adc0) */
/* WARNING: Removing unreachable block (ram,0x0164add4) */
/* WARNING: Removing unreachable block (ram,0x0164ad34) */
/* WARNING: Removing unreachable block (ram,0x0164ad44) */
/* WARNING: Removing unreachable block (ram,0x0164ad4c) */
/* WARNING: Removing unreachable block (ram,0x0164ad50) */

ulong Atlas_UI_Screens_GameOutroScreenBehaviour__SetTournamentresult
                (long param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  ulong *puVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined8 ****ppppuVar18;
  undefined *puVar19;
  float extraout_s0;
  float fVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 ***pppuStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 ***pppuStack_2c0;
  undefined *puStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long lStack_288;
  undefined8 ***pppuStack_280;
  code *pcStack_278;
  ulong uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  undefined4 *puStack_250;
  long lStack_248;
  undefined1 ***pppuStack_240;
  code *pcStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 auStack_1f8 [6];
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  byte bStack_1a4;
  ulong uStack_1a3;
  undefined7 uStack_19b;
  undefined4 uStack_194;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  uint uStack_170;
  char cStack_16c;
  undefined8 uStack_16b;
  undefined7 uStack_163;
  undefined4 uStack_15c;
  ulong auStack_158 [4];
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_120;
  undefined7 uStack_118;
  undefined4 uStack_111;
  undefined5 uStack_10d;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined4 uStack_f1;
  long lStack_e8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined4 uStack_24;
  
  uStack_24 = param_3;
  if ((*(long *)(param_1 + 0xf0) != 0) &&
     (lVar9 = /*UnityEngine.GameObject$$get_gameObject*/ func_0x0322f780(*(long *)(param_1 + 0xf0),0), lVar9 != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar9,param_2,0);
    plVar2 = *(long **)(param_1 + 0xf8);
    uVar11 = *(undefined8 *)(param_1 + 0x100);
    uVar10 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&uStack_24,0);
    uVar11 = /*System.String$$Concat*/ func_0x029bdb88(uVar11,uVar10,0);
    if (plVar2 != (long *)0x0) {
      uVar12 = (**(code **)(*plVar2 + 0x558))(plVar2,uVar11,*(undefined8 *)(*plVar2 + 0x560));
      return uVar12;
    }
  }
  lVar9 = func_0x00f78af4();
  pcStack_38 = Atlas_UI_Screens_GameOutroScreen__OnExitOutroState;
  uVar12 = 0x3d57ac0;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb5254 & 1) == 0) {
    func_0x00f78a20(0x3d29f38);
    func_0x00f78a20(0x3d1b3b8);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d57ac0);
    func_0x00f78a20(0x3d57ac8);
    func_0x00f78a20(0x3d57ad0);
    func_0x00f78a20(0x3d410b0);
    func_0x00f78a20(0x3d410c0);
    bRam0000000003eb5254 = 1;
  }
  uVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d410b0);
  /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(uVar11,0,0);
  lVar15 = *(long *)(lVar9 + 0x70);
  uVar13 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(uVar13,lVar9,uRam0000000003d57ac0,0);
  uVar11 = 0x3d1fa78;
  if (lVar15 != 0) {
    /*Core.StateManagement.State$$remove_OnPreEnterCallback*/ func_0x02b94208(lVar15,uVar13,0);
    if (*(long *)(lVar9 + 0xa8) != 0) {
      uVar12 = 0x3d57000;
      /*Atlas.UI.UIChallengeController$$TearDownChallenges*/ func_0x01518f4c(*(long *)(lVar9 + 0xa8),0);
      lVar15 = *(long *)(lVar9 + 0x78);
      uVar13 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
      /*System.Action$$.ctor*/ func_0x02924c80(uVar13,lVar9,uRam0000000003d57ad0,0);
      uVar11 = 0x3d1fa78;
      if (lVar15 != 0) {
        /*Core.StateManagement.State$$remove_OnPreEnterCallback*/ func_0x02b94208(lVar15,uVar13,0);
        if (*(long *)(lVar9 + 0x78) != 0) {
          uVar11 = 0x3d410c0;
          *(undefined8 *)(*(long *)(lVar9 + 0x78) + 0x78) = 0;
          lVar15 = *(long *)(lVar9 + 0xa0);
          if (lVar15 != 0) {
            uVar13 = func_0x00f78aec(/*System.Action<ReadOnlyCollection<NetworkResultsStanding>>_TypeInfo*/ uRam0000000003d1b3b8);
            /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar13,lVar9,uRam0000000003d57ac8,uRam0000000003d29f38);
            /*Atlas.Gameplay.NetworkResultsUpdater$$remove_ResultsUpdated*/ func_0x014adbe8(lVar15,uVar13,0);
          }
          uVar12 = 0x3d57000;
          /*Core.Input.InputManager$$UnregisterListener*/ func_0x016482b4(lVar9,0);
          lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d410c0);
          if ((lVar15 != 0) && (*(long *)(lVar15 + 0xb8) != 0)) {
            /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar15 + 0xb8),6,0,0);
            lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d410b0);
            if ((lVar15 != 0) && (*(long *)(lVar15 + 0x68) != 0)) {
              /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar15 + 0x68),0,0);
              lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d410b0);
              if ((lVar15 != 0) && (*(long *)(lVar15 + 0xc0) != 0)) {
                /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar15 + 0xc0),0,0);
                lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d410b0);
                if ((lVar15 != 0) &&
                   ((*(long *)(lVar15 + 0xd8) != 0 &&
                    (lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar15 + 0xd8),0), lVar15 != 0)))) {
                  /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar15,0,0);
                  lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d410b0);
                  if ((lVar15 != 0) && (lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar15,0), lVar15 != 0)) {
                    uVar12 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar15,0,0);
                    *(undefined2 *)(lVar9 + 200) = 0;
                    return uVar12;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar9 = func_0x00f78af4();
  pcStack_88 = Atlas_UI_Screens_GameOutroScreen__OnUpdate;
  lStack_e8 = *(long *)PTR_03a5d648;
  puVar16 = (undefined4 *)0x3eb5000;
  ppuStack_90 = &puStack_40;
  if ((bRam0000000003eb5255 & 1) == 0) {
    func_0x00f78a20(0x3d57a90);
    func_0x00f78a20(0x3d237b8);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d410b0);
    func_0x00f78a20(0x3d410c0);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d791b0);
    bRam0000000003eb5255 = 1;
  }
  auStack_158[0] = 0;
  auStack_158[1] = 0;
  auStack_158[2] = 0;
  lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d410b0);
  if (lVar15 == 0) goto LAB_015b0a50;
  uVar14 = /*UnityEngine.Behaviour$$get_isActiveAndEnabled*/ func_0x0321a980(lVar15,0);
  if ((int)uVar14 == 0) {
LAB_015b0a18:
    if (*(long *)PTR_03a5d648 == lStack_e8) {
      return uVar14;
    }
  }
  else {
    if (((*(char *)(lVar9 + 0xcb) != '\0') && (*(char *)(lVar9 + 0xd0) == '\0')) &&
       (fVar20 = *(float *)(lVar9 + 0xcc) - extraout_s0, *(float *)(lVar9 + 0xcc) = fVar20,
       fVar20 <= 0.0)) {
      *(undefined1 *)(lVar9 + 0xd0) = 1;
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d410b0);
      if (lVar15 == 0) goto LAB_015b0a50;
      puVar16 = *(undefined4 **)(lVar15 + 0x78);
      uVar13 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
      /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar13,lVar9,uRam0000000003d57a90,0);
      if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('exit')*/ uRam0000000003d791b0,puVar16,0,uVar13,0,0);
    }
    if (*(long *)(lVar9 + 0x98) == 0) goto LAB_015b0a50;
    lVar15 = *(long *)(*(long *)(lVar9 + 0x98) + 0x20);
    uVar14 = 0;
    if (lVar15 == 0) goto LAB_015b0a18;
    /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(&uStack_120,lVar15,0);
    uStack_138 = CONCAT17((undefined1)uStack_111,uStack_118);
    auStack_158[3] = uStack_120;
    uStack_130 = CONCAT53(uStack_10d,uStack_111._1_3_);
    if ((*(long *)(lVar9 + 0x98) != 0) &&
       (lVar15 = *(long *)(*(long *)(lVar9 + 0x98) + 0x20), lVar15 != 0)) {
      puVar16 = &uStack_1a8;
      uVar8 = *(uint *)(lVar15 + 0x128);
      uVar13 = (ulong)uVar8;
      cVar4 = *(char *)(lVar15 + 300);
      uStack_100 = *(undefined8 *)(lVar15 + 0x12d);
      uStack_f8 = (undefined7)*(undefined8 *)(lVar15 + 0x135);
      uStack_f1 = *(undefined4 *)(lVar15 + 0x13c);
      uVar10 = 0x3d410c0;
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d410c0);
      uVar11 = 0x3d410c0;
      if ((lVar15 != 0) && (*(long *)(lVar15 + 0x30) != 0)) {
        bVar5 = *(byte *)(*(long *)(lVar15 + 0x30) + 0x50);
        uVar12 = (ulong)bVar5;
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d410c0);
        uVar11 = uVar10;
        if (((lVar15 != 0) && (*(long *)(lVar15 + 0x30) != 0)) &&
           (lVar15 = *(long *)(*(long *)(lVar15 + 0x30) + 0x28), lVar15 != 0)) {
          uVar1 = 0;
          if (bVar5 != 0) {
            uVar1 = *(byte *)(lVar15 + 0x99) ^ 1;
          }
          uVar12 = (ulong)uVar1;
          if (cVar4 == '\0') {
LAB_015b07f0:
            uVar13 = 0;
          }
          else {
            if (((*(ushort *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uStack_163 = uStack_f8;
            uStack_16b = uStack_100;
            uStack_15c = uStack_f1;
            uStack_188 = uStack_138;
            uStack_190 = auStack_158[3];
            uStack_180 = uStack_130;
            uStack_170 = uVar8;
            cStack_16c = cVar4;
            /*Core.Networking.NetworkSessionTime$$op_Subtraction*/ func_0x01660558(&uStack_120,&uStack_170,&uStack_190,0);
            iVar7 = (int)uStack_120;
            uVar13 = uStack_120 & 0xffffffff;
            if ((int)uStack_120 < 1) goto LAB_015b07f0;
            if ((int)uStack_120 < *(int *)(lVar9 + 0xd4)) {
              lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d410b0);
              if ((lVar15 == 0) || (*(long *)(lVar15 + 200) == 0)) goto LAB_015b0a50;
              /*Atlas.UI.UITimer$$SetTimeLeft*/ func_0x0151cccc((float)(iVar7 + 7000) / 1000.0,*(long *)(lVar15 + 200),0);
              *(int *)(lVar9 + 0xd4) = iVar7;
            }
            uVar13 = 1;
          }
          uVar8 = (uint)uVar13;
          if (((((uVar8 ^ 1) & uVar1) != 0) && (*(char *)(lVar9 + 0xd1) != '\0')) &&
             (*(char *)(lVar9 + 0xd3) != '\x01')) {
            lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d410c0);
            if ((lVar15 == 0) || (*(long *)(lVar15 + 0xb8) == 0)) goto LAB_015b0a50;
            /*Atlas.UI.TopBarManager$$RequestButtonVisible*/ func_0x0150b9fc(*(long *)(lVar15 + 0xb8),6,1,1,0);
            *(undefined1 *)(lVar9 + 0xd3) = 1;
          }
          uVar11 = 0;
          if ((uVar1 == 0) && (uVar8 == 0)) {
            *(undefined1 *)(lVar9 + 0x82) = 1;
            lVar15 = *(long *)(lVar9 + 0xa0);
            if (lVar15 == 0) goto LAB_015b0a50;
            uVar11 = 0;
            if (*(char *)(lVar9 + 0xd2) != '\0') {
              bVar5 = *(byte *)(lVar15 + 0x3c);
              uVar12 = (ulong)bVar5;
              if (bVar5 != 0) {
                uVar3 = *(undefined4 *)(lVar15 + 0x38);
                uStack_120 = *(ulong *)(lVar15 + 0x3d);
                uStack_118 = (undefined7)*(undefined8 *)(lVar15 + 0x45);
                uStack_111 = *(undefined4 *)(lVar15 + 0x4c);
                uVar11 = 0x3d237b8;
                if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uStack_19b = uStack_118;
                uStack_1a3 = uStack_120;
                uStack_194 = uStack_111;
                uStack_1a8 = uVar3;
                bStack_1a4 = bVar5;
                /*Core.Networking.NetworkSessionTime$$op_Addition*/ func_0x0165f11c(auStack_158,&uStack_1a8,&UNK_00001b58,0);
                if (*(char *)(lVar9 + 0x83) == '\0') {
                  uStack_118 = (undefined7)auStack_158[1];
                  uStack_111._0_1_ = (undefined1)(auStack_158[1] >> 0x38);
                  uStack_120 = auStack_158[0];
                  uStack_111._1_3_ = (undefined3)auStack_158[2];
                  uStack_10d = (undefined5)(auStack_158[2] >> 0x18);
                  if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
                    func_0x00f78ad0();
                  }
                  uStack_1b8 = uStack_138;
                  uStack_1c0 = auStack_158[3];
                  uStack_1b0 = uStack_130;
                  uStack_1d8 = CONCAT17((undefined1)uStack_111,uStack_118);
                  uStack_1e0 = uStack_120;
                  uStack_1d0 = CONCAT53(uStack_10d,uStack_111._1_3_);
                  iVar7 = /*Core.Networking.NetworkSessionTime$$op_GreaterThanOrEqual*/ func_0x0165e314(&uStack_1c0,&uStack_1e0,0);
                  if (iVar7 != 0) {
                    *(undefined1 *)(lVar9 + 0x83) = 1;
                    Atlas_UI_Screens_GameOutroScreen__EndGame(lVar9);
                  }
                }
                uStack_118 = (undefined7)auStack_158[1];
                uStack_111._0_1_ = (undefined1)(auStack_158[1] >> 0x38);
                uStack_120 = auStack_158[0];
                uStack_111._1_3_ = (undefined3)auStack_158[2];
                uStack_10d = (undefined5)(auStack_158[2] >> 0x18);
                if (((*(byte *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(/*Core.Networking.NetworkSessionTime_TypeInfo*/ lRam0000000003d237b8 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uStack_208 = CONCAT17((undefined1)uStack_111,uStack_118);
                uStack_210 = uStack_120;
                uStack_200 = CONCAT53(uStack_10d,uStack_111._1_3_);
                uStack_228 = uStack_138;
                uStack_230 = auStack_158[3];
                uStack_220 = uStack_130;
                /*Core.Networking.NetworkSessionTime$$op_Subtraction*/ func_0x01660558(auStack_1f8,&uStack_210,&uStack_230,0);
                puVar16 = (undefined4 *)/*UnityEngine.Mathf$$Max*/ func_0x0323cd04(auStack_1f8[0],0,0);
                lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d410b0);
                if ((lVar15 == 0) || (*(long *)(lVar15 + 200) == 0)) goto LAB_015b0a50;
                /*Atlas.UI.UITimer$$SetTimeLeft*/ func_0x0151cccc((float)(int)puVar16 / 1000.0,*(long *)(lVar15 + 200),0);
                uVar11 = 1;
              }
            }
          }
          lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d410b0);
          if ((lVar15 != 0) && (*(long *)(lVar15 + 0xd0) != 0)) {
            uVar14 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar15 + 0xd0),(uint)uVar11 | uVar8,0);
            goto LAB_015b0a18;
          }
        }
      }
    }
LAB_015b0a50:
    func_0x00f78af4();
  }
  lVar15 = ___stack_chk_fail();
  uStack_260 = 0x3d410b0;
  pcStack_238 = Atlas_UI_Screens_GameOutroScreen__EndGame;
  uVar10 = 0x3d410c0;
  uStack_270 = uVar12;
  uStack_268 = uVar11;
  uStack_258 = uVar13;
  puStack_250 = puVar16;
  lStack_248 = lVar9;
  pppuStack_240 = &ppuStack_90;
  if ((bRam0000000003eb5263 & 1) == 0) {
    func_0x00f78a20(0x3d57ab8);
    func_0x00f78a20(0x3d5d9c8);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d410b0);
    func_0x00f78a20(0x3d410c0);
    func_0x00f78a20(0x3d25600);
    func_0x00f78a20(0x3d791b0);
    bRam0000000003eb5263 = 1;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar15,uRam0000000003d410c0);
  uVar17 = 0x3d410c0;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0xb8) != 0)) {
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(*(long *)(lVar9 + 0xb8),6,0,0);
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar15,uRam0000000003d410c0);
    uVar17 = uVar10;
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0xb8) != 0)) {
      /*Atlas.UI.TopBarManager$$HideAll*/ func_0x0150bd40(*(long *)(lVar9 + 0xb8),0);
      if (((*(long *)(lVar15 + 0xb0) != 0) &&
          (lVar9 = *(long *)(*(long *)(lVar15 + 0xb0) + 0x10), lVar9 != 0)) &&
         (lVar9 = *(long *)(lVar9 + 200), lVar9 != 0)) {
        uVar17 = 0x3d41000;
        /*Core.StateManagement.StateMachine$$TryRequestState<OutroSequenceShowPlacementsState>*/ func_0x018e16a8(lVar9,0,0,uRam0000000003d5d9c8);
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar15,uRam0000000003d410b0);
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0xd8) != 0)) {
          uVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar9 + 0xd8),0);
          uVar10 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
          /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar10,lVar15,uRam0000000003d57ab8,0);
          if (((*(ushort *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.UI2.UITweener_TypeInfo*/ lRam0000000003d25600 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          /*Core.UI2.UITweener$$RunTweenAnimationInGroups*/ func_0x02f8a9a8(/*STR('exit')*/ uRam0000000003d791b0,uVar11,0,uVar10,0,0);
          return 1;
        }
      }
    }
  }
  auVar21 = func_0x00f78af4();
  pcStack_278 = Atlas_UI_Screens_GameOutroScreen__OnInputFamilyChanged;
  uStack_290 = uVar17;
  lStack_288 = lVar15;
  pppuStack_280 = &pppuStack_240;
  uVar13 = /*Core.Input.InputManagerExtensions$$IsControllerOrKeyboard*/ func_0x0164bbd0(auVar21._8_8_,0);
  if ((int)uVar13 == 0) {
    return uVar13;
  }
  uVar8 = *(uint *)(auVar21._0_8_ + 0x48);
  uVar13 = (ulong)uVar8;
  puVar6 = &uStack_2b0;
  uStack_2a0 = 0x3d410b0;
  uStack_298 = 0x3eb5000;
  ppppuVar18 = &pppuStack_280;
  uVar10 = 1;
  uVar17 = 0;
  uStack_2b0 = uVar12;
  uStack_2a8 = uVar11;
  if ((bRam0000000003eb578a & 1) == 0) {
    func_0x00f78a20(0x3d216c0,0,1,0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb578a = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (lVar9 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar9 == 0)) {
code_r0x0164abe0:
    func_0x00f78af4();
  }
  else if (uVar8 < *(uint *)(lVar9 + 0x18)) {
    *(undefined8 *)(lVar9 + (long)(int)uVar8 * 0x10 + 0x20) = 0;
    uVar12 = /*Core.Input.InputManager$$IsScreenLayerInputActive*/ func_0x01648f2c(uVar13);
    if ((int)uVar12 == 0) {
      return uVar12;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
      *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar9 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      if (lVar9 != 0) {
        /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar9,0,0);
        if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
          *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar19 = &UNK_0164aba4;
          goto code_r0x032365f8;
        }
      }
    }
    goto code_r0x0164abe0;
  }
  uVar11 = func_0x00f78b24();
  uVar11 = func_0x00f78ac0(uVar11,0);
  uStack_2e0 = 0x3d22848;
  uStack_2d0 = 1;
  uStack_2c8 = 0;
  puStack_2b8 = &Core_Input_InputManager__GetSelectedObject;
  uStack_2d8 = uVar13;
  pppuStack_2c0 = ppppuVar18;
  if ((bRam0000000003eb578b & 1) == 0) {
    func_0x00f78a20(0x3d22848);
    bRam0000000003eb578b = 1;
  }
  if ((**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) == 0) ||
     (lVar9 = *(long *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x38), lVar9 == 0)) {
    func_0x00f78af4();
  }
  else if ((uint)uVar11 < *(uint *)(lVar9 + 0x18)) {
    return *(ulong *)(lVar9 + (long)(int)(uint)uVar11 * 0x10 + 0x20);
  }
  uVar10 = func_0x00f78b24();
  func_0x00f78ac0(uVar10,0);
  puVar6 = &uStack_310;
  uStack_310 = 0x3d22848;
  uStack_308 = 0x3d22848;
  uStack_300 = 0x3eb5000;
  puStack_2e8 = &Core_Input_InputManager__IsAnythingSelected;
  ppppuVar18 = &pppuStack_2f0;
  uVar13 = 0x3d216c0;
  uStack_2f8 = uVar11;
  pppuStack_2f0 = &pppuStack_2c0;
  if ((bRam0000000003eb578c & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb578c = 1;
  }
  uVar10 = 0x3d23990;
  if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar17 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  puVar19 = &UNK_0164ad0c;
code_r0x032365f8:
  *(undefined8 *)((long)puVar6 + -0x30) = 0x3d22848;
  *(ulong *)((long)puVar6 + -0x28) = uVar13;
  *(undefined8 *)((long)puVar6 + -0x20) = uVar10;
  *(undefined8 *)((long)puVar6 + -0x18) = uVar17;
  *(undefined8 *****)((long)puVar6 + -0x10) = ppppuVar18;
  *(undefined **)((long)puVar6 + -8) = puVar19;
  if ((bRam0000000003ec021a & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ec021a = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*UnityEngine.Object$$CompareBaseObjects*/ func_0x03248740(uVar17,0);
  return (ulong)(uVar8 ^ 1);
}



// ============================================================
// RVA: 0x15b28e0 | Atlas.UI.Screens.GameOutroScreenBehaviour.SetPlayerInfoCrown
// ============================================================

/* WARNING: Possible PIC construction at 0x032c2428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01518b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151ffa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01520090: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0151ffa4) */
/* WARNING: Removing unreachable block (ram,0x0151ffac) */
/* WARNING: Removing unreachable block (ram,0x0151ffb0) */
/* WARNING: Removing unreachable block (ram,0x01520000) */
/* WARNING: Removing unreachable block (ram,0x01520028) */
/* WARNING: Removing unreachable block (ram,0x01520054) */
/* WARNING: Removing unreachable block (ram,0x0152005c) */
/* WARNING: Removing unreachable block (ram,0x0152007c) */
/* WARNING: Removing unreachable block (ram,0x01520084) */
/* WARNING: Removing unreachable block (ram,0x01520088) */
/* WARNING: Removing unreachable block (ram,0x0151ffb8) */
/* WARNING: Removing unreachable block (ram,0x0151ffe8) */
/* WARNING: Removing unreachable block (ram,0x0151ffc4) */
/* WARNING: Removing unreachable block (ram,0x0151ffd0) */
/* WARNING: Removing unreachable block (ram,0x0151ffd8) */
/* WARNING: Removing unreachable block (ram,0x0151ffec) */
/* WARNING: Removing unreachable block (ram,0x01518b0c) */
/* WARNING: Removing unreachable block (ram,0x01518b24) */
/* WARNING: Removing unreachable block (ram,0x01518b2c) */
/* WARNING: Removing unreachable block (ram,0x01518b30) */
/* WARNING: Removing unreachable block (ram,0x01518b50) */
/* WARNING: Removing unreachable block (ram,0x01518b68) */
/* WARNING: Removing unreachable block (ram,0x01518b7c) */
/* WARNING: Removing unreachable block (ram,0x01518b84) */
/* WARNING: Removing unreachable block (ram,0x01518b8c) */
/* WARNING: Removing unreachable block (ram,0x01518bbc) */
/* WARNING: Removing unreachable block (ram,0x01518bd4) */
/* WARNING: Removing unreachable block (ram,0x01518be8) */
/* WARNING: Removing unreachable block (ram,0x01518bf0) */
/* WARNING: Removing unreachable block (ram,0x01518bfc) */
/* WARNING: Removing unreachable block (ram,0x01518c2c) */
/* WARNING: Removing unreachable block (ram,0x01518c44) */
/* WARNING: Removing unreachable block (ram,0x01518c58) */
/* WARNING: Removing unreachable block (ram,0x01518c60) */
/* WARNING: Removing unreachable block (ram,0x01518c6c) */
/* WARNING: Removing unreachable block (ram,0x01520094) */
/* WARNING: Removing unreachable block (ram,0x0152009c) */
/* WARNING: Removing unreachable block (ram,0x015200a8) */
/* WARNING: Removing unreachable block (ram,0x015200b4) */
/* WARNING: Removing unreachable block (ram,0x015200bc) */
/* WARNING: Removing unreachable block (ram,0x01520108) */
/* WARNING: Removing unreachable block (ram,0x015200c8) */
/* WARNING: Removing unreachable block (ram,0x015200d0) */
/* WARNING: Removing unreachable block (ram,0x015200dc) */
/* WARNING: Removing unreachable block (ram,0x01520120) */
/* WARNING: Removing unreachable block (ram,0x015200e4) */
/* WARNING: Removing unreachable block (ram,0x015200f0) */
/* WARNING: Removing unreachable block (ram,0x015200f8) */
/* WARNING: Removing unreachable block (ram,0x0152010c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
Atlas_UI_Screens_GameOutroScreenBehaviour__SetPlayerInfoCrown
          (undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4,long param_5)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint extraout_w1;
  long lVar13;
  long lVar14;
  int *piVar15;
  code *pcVar16;
  undefined8 uVar17;
  long lVar18;
  undefined1 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined8 uStack_98;
  
  if ((*(long *)(param_3 + 0xb8) != 0) &&
     (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(param_3 + 0xb8),0), lVar7 != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar7,param_4,0);
    plVar8 = *(long **)(param_3 + 0xb8);
    if (plVar8 != (long *)0x0) {
      if ((bRam0000000003ec2cc2 & 1) == 0) {
        func_0x00f78a20(0x3d23990,param_5,0);
        bRam0000000003ec2cc2 = 1;
      }
      lVar7 = plVar8[0x1a];
      if (((*(byte *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar6 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,0,0);
      if (iVar6 == 0) {
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar10 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(param_5,0,0);
        if ((int)puVar10 == 0) {
          return puVar10;
        }
        if (param_5 != 0) {
          /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(param_5,0);
          fVar20 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&stack0xffffffffffffffa0,0);
          fVar22 = param_2;
          fVar21 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
          *(bool *)(plVar8 + 6) =
               (fVar20 - fVar21) * (fVar20 - fVar21) + (param_2 - fVar22) * (param_2 - fVar22) <
               _UNK_033f8490;
          uVar12 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(param_5,0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar17 = 0;
code_r0x032c2400:
          uVar2 = /*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,uVar17,0);
          *(undefined1 *)((long)plVar8 + 0x31) = uVar2;
          plVar8[0x1a] = param_5;
          (**(code **)(*plVar8 + 0x2d8))(plVar8,*(undefined8 *)(*plVar8 + 0x2e0));
          goto code_r0x032c244c;
        }
      }
      else {
        lVar7 = plVar8[0x1a];
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar10 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar7,param_5,0);
        if ((int)puVar10 == 0) {
          return puVar10;
        }
        if (plVar8[0x1a] != 0) {
          /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(plVar8[0x1a],0);
          fVar20 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&stack0xffffffffffffffa0,0);
          fVar22 = param_2;
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar11 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_5,0);
          if ((uVar11 & 1) == 0) {
            fVar21 = (float)/*UnityEngine.Vector2$$get_zero*/ func_0x0326918c(0);
          }
          else {
            if (param_5 == 0) goto code_r0x032c2448;
            /*UnityEngine.Sprite$$get_rect*/ func_0x03268c20(param_5,0);
            fVar21 = (float)/*UnityEngine.Rect$$get_size*/ func_0x03253584(&stack0xffffffffffffffa0,0);
          }
          *(bool *)(plVar8 + 6) = fVar20 == fVar21 && param_2 == fVar22;
          if (plVar8[0x1a] != 0) {
            uVar12 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(plVar8[0x1a],0);
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            iVar6 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(param_5,0);
            uVar17 = 0;
            if (iVar6 != 0) {
              if (param_5 == 0) goto code_r0x032c2448;
              uVar17 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(param_5,0);
            }
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            goto code_r0x032c2400;
          }
        }
      }
code_r0x032c2448:
      plVar8 = (long *)func_0x00f78af4();
code_r0x032c244c:
      if ((bRam0000000003ec2cd5 & 1) == 0) {
        func_0x00f78a20(0x3d226e8);
        func_0x00f78a20(0x3d23990);
        bRam0000000003ec2cd5 = 1;
      }
      uVar12 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar8);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar10 = (undefined8 *)/*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar12,0,0);
      if ((int)puVar10 != 0) {
        lVar7 = /*UnityEngine.UI.Image$$get_activeSprite*/ func_0x032c2560(plVar8);
        if (lVar7 == 0) {
          puVar10 = (undefined8 *)func_0x00f78af4();
          *(undefined2 *)(puVar10 + 6) = 0;
          return puVar10;
        }
        uVar12 = /*UnityEngine.Sprite$$get_texture*/ func_0x03268d78(lVar7,0);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar10 = (undefined8 *)/*UnityEngine.Object$$op_Equality*/ func_0x032441e0(uVar12,0,0);
        if ((int)puVar10 != 0) {
          if (((*(ushort *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.UI.Image_TypeInfo*/ lRam0000000003d226e8 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar10 = (undefined8 *)/*UnityEngine.UI.Image$$TrackImage*/ func_0x032c605c(plVar8);
          *(undefined1 *)((long)plVar8 + 0xfc) = 1;
        }
      }
      return puVar10;
    }
  }
  lVar7 = func_0x00f78af4();
  if ((*(long *)(lVar7 + 0xb0) != 0) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar7 + 0xb0) + 0x40), puVar10 != (undefined8 *)0x0)) {
    uVar12 = 0;
    lVar7 = puVar10[0xd];
    if (lVar7 == 0) {
      puVar19 = &stack0xffffffffffffff78;
      lVar18 = 1;
    }
    else {
      lVar18 = *(long *)(lVar7 + 0x18);
      if (lVar18 == 0) {
        return puVar10;
      }
      puVar19 = (undefined1 *)(lVar7 + 0x20);
    }
    lVar7 = 0;
    do {
      lVar13 = *(long *)(puVar19 + lVar7 * 8);
      pcVar16 = *(code **)(lVar13 + 0x10);
      plVar8 = *(long **)(lVar13 + 0x20);
      lVar13 = *(long *)(lVar13 + 0x28);
      if (*(short *)(lVar13 + 0x48) == -1) {
        func_0x00f78ad8(lVar13,uVar12);
      }
      iVar6 = func_0x00f78a4c(lVar13);
      if (iVar6 == 0) {
        if ((((plVar8 == (long *)0x0) || (*(short *)(lVar13 + 0x48) == -1)) ||
            ((*(byte *)(*plVar8 + 0x115) & 1) != 0)) || (puVar10[3] == 0)) goto code_r0x02924d98;
        iVar6 = func_0x00f78a44(lVar13);
        iVar5 = func_0x00f78ec0(lVar13);
        if (iVar6 == 0) {
          uVar1 = *(ushort *)(lVar13 + 0x48);
          if (iVar5 == 0) {
            lVar13 = *plVar8 + (ulong)uVar1 * 0x10;
            auVar23 = (**(code **)(lVar13 + 0x138))(plVar8,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x02924da4;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar14 = *plVar8;
          uVar11 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar11 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == lVar13) {
                puVar9 = (undefined8 *)(lVar14 + (long)(int)(*piVar15 + (uint)uVar1) * 0x10 + 0x138)
                ;
                goto code_r0x02924e68;
              }
              piVar15 = piVar15 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)func_0x00fac1f0(plVar8,lVar13,(ulong)uVar1);
code_r0x02924e68:
          pcVar16 = (code *)*puVar9;
          puVar9 = (undefined8 *)puVar9[1];
        }
        else {
          if (iVar5 == 0) {
            uVar12 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar14 = *plVar8;
            uVar11 = (ulong)*(ushort *)(lVar14 + 0x12a);
            if (uVar11 != 0) {
              piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar14 = lVar14 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x02924e40;
                }
                piVar15 = piVar15 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            lVar14 = func_0x00fac1f0(plVar8);
code_r0x02924e40:
            uVar12 = *(undefined8 *)(lVar14 + 8);
          }
          puVar9 = (undefined8 *)func_0x00f78acc(uVar12,lVar13);
          pcVar16 = (code *)*puVar9;
        }
        auVar23 = (*pcVar16)(plVar8,puVar9);
      }
      else if (*(char *)(lVar13 + 0x4a) == '\0') {
        auVar23 = (*pcVar16)(lVar13);
      }
      else {
code_r0x02924d98:
        auVar23 = (*pcVar16)(plVar8,lVar13);
      }
code_r0x02924da4:
      uVar12 = auVar23._8_8_;
      lVar7 = lVar7 + 1;
      if (lVar7 == lVar18) {
        return auVar23._0_8_;
      }
    } while( true );
  }
  lVar7 = func_0x00f78af4();
  lVar7 = *(long *)(lVar7 + 0xa8);
  if (lVar7 == 0) {
    lVar7 = func_0x00f78af4();
    if ((bRam0000000003eb5264 & 1) == 0) {
      func_0x00f78a20(0x3d2c730);
      func_0x00f78a20(0x3d3af10);
      func_0x00f78a20(0x3d1db30);
      bRam0000000003eb5264 = 1;
    }
    uVar12 = func_0x00f78aec(/*System.Collections.Generic.List<LeaderboardEntryBehaviour>_TypeInfo*/ uRam0000000003d1db30);
    /*System.Collections.Generic.List<StringHelper.ThreadSafeEncoding>$$.ctor*/ func_0x024265d8(uVar12,0xc,uRam0000000003d3af10);
    *(undefined8 *)(lVar7 + 0xb8) = uVar12;
    *(undefined4 *)(lVar7 + 0xd4) = 0x7fffffff;
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar10 = (undefined8 *)
                (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(lRam0000000003d2c730 + 0x18) + 0xc0) + 0x38))();
      return puVar10;
    }
    auVar23 = func_0x00f78af4();
    puVar9 = auVar23._8_8_;
    puVar10 = auVar23._0_8_;
    uVar17 = puVar9[1];
    uVar12 = *puVar9;
    puVar10[2] = puVar9[2];
    puVar10[1] = uVar17;
    *puVar10 = uVar12;
    return puVar10;
  }
  if ((bRam0000000003eb4dca & 1) == 0) {
    func_0x00f78a20(0x3d57278,0,0);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4dca = 1;
  }
  uStack_98 = 0;
  *(undefined4 *)(lVar7 + 0x4a) = 0;
  iVar6 = /*Core.Definitions.DefinitionID$$get_IsValid*/ func_0x0164526c(lVar7 + 0x10,0);
  if (iVar6 == 0) {
code_r0x01518ca8:
    if ((*(long *)(lVar7 + 0x40) != 0) &&
       (lVar18 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(lVar7 + 0x40),0), lVar18 != 0)) {
      puVar10 = (undefined8 *)/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar18,*(undefined1 *)(lVar7 + 0x49),0);
      return puVar10;
    }
  }
  else if (*(long *)(lVar7 + 0x28) != 0) {
    lVar18 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(*(long *)(lVar7 + 0x28),*(undefined8 *)(lVar7 + 0x10),
                             uRam0000000003d57278);
    *(long *)(lVar7 + 0x18) = lVar18;
    if (lVar18 != 0) {
      iVar6 = /*Atlas.Definitions.EventDefinition$$ChallengesExist*/ func_0x01583758(lVar18,0);
      if (iVar6 == 0) goto code_r0x01518ca8;
      if (*(long *)(lVar7 + 0x18) != 0) {
        lVar13 = *(long *)(lVar7 + 0x20);
        lVar18 = /*Atlas.Definitions.EventDefinition$$get_Challenge1*/ func_0x015836d4(*(long *)(lVar7 + 0x18),0);
        if (lVar13 != 0) {
          uVar3 = /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar13,*(undefined8 *)(lVar18 + 0x20),&stack0xffffffffffffff78,0);
          if (*(long *)(lVar7 + 0x18) != 0) {
            lVar13 = *(long *)(lVar7 + 0x20);
            lVar18 = /*Atlas.Definitions.EventDefinition$$get_Challenge2*/ func_0x015836dc(*(long *)(lVar7 + 0x18),0);
            if (lVar13 != 0) {
              uVar4 = /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar13,*(undefined8 *)(lVar18 + 0x20),&stack0xffffffffffffff70
                                      ,0);
              if (*(long *)(lVar7 + 0x18) != 0) {
                lVar13 = *(long *)(lVar7 + 0x20);
                lVar18 = /*Atlas.Definitions.EventDefinition$$get_Challenge3*/ func_0x015836e4(*(long *)(lVar7 + 0x18),0);
                if (lVar13 != 0) {
                  iVar6 = /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(lVar13,*(undefined8 *)(lVar18 + 0x20),&uStack_98,0);
                  if (((uVar3 & uVar4) != 1) || (iVar6 == 0)) goto code_r0x01518ca8;
                  *(undefined1 *)(lVar7 + 0x4a) = 1;
                  if (*(long *)(lVar7 + 0x18) != 0) {
                    lVar18 = /*Atlas.Definitions.EventDefinition$$get_Challenge1*/ func_0x015836d4(*(long *)(lVar7 + 0x18),0);
                    if (*(long *)(lVar18 + 0x28) == 0) goto code_r0x01518a3c;
                    if (*(long *)(lVar7 + 0x18) != 0) {
                      lVar18 = /*Atlas.Definitions.EventDefinition$$get_Challenge1*/ func_0x015836d4(*(long *)(lVar7 + 0x18),0);
                      if (*(long *)(lVar18 + 0x28) != 0) {
                        if (*(long *)(*(long *)(lVar18 + 0x28) + 0x18) != 0) {
                          if (*(long *)(lVar7 + 0x18) == 0) goto code_r0x01518ce0;
                          lVar18 = /*Atlas.Definitions.EventDefinition$$get_Challenge1*/ func_0x015836d4(*(long *)(lVar7 + 0x18),0);
                          /*System.String$$Format*/ func_0x029cf564(0,*(undefined8 *)(lVar18 + 0x28),0);
                        }
code_r0x01518a3c:
                        if (*(long *)(lVar7 + 0x18) != 0) {
                          lVar18 = /*Atlas.Definitions.EventDefinition$$get_Challenge2*/ func_0x015836dc(*(long *)(lVar7 + 0x18),0);
                          if (*(long *)(lVar18 + 0x28) == 0) goto code_r0x01518a9c;
                          if (*(long *)(lVar7 + 0x18) != 0) {
                            lVar18 = /*Atlas.Definitions.EventDefinition$$get_Challenge2*/ func_0x015836dc(*(long *)(lVar7 + 0x18),0);
                            if (*(long *)(lVar18 + 0x28) != 0) {
                              if (*(long *)(*(long *)(lVar18 + 0x28) + 0x18) != 0) {
                                if (*(long *)(lVar7 + 0x18) == 0) goto code_r0x01518ce0;
                                lVar18 = /*Atlas.Definitions.EventDefinition$$get_Challenge2*/ func_0x015836dc(*(long *)(lVar7 + 0x18),0);
                                /*System.String$$Format*/ func_0x029cf564(0,*(undefined8 *)(lVar18 + 0x28),0);
                              }
code_r0x01518a9c:
                              if (*(long *)(lVar7 + 0x18) != 0) {
                                lVar18 = /*Atlas.Definitions.EventDefinition$$get_Challenge3*/ func_0x015836e4(*(long *)(lVar7 + 0x18),0);
                                if (*(long *)(lVar18 + 0x28) == 0) goto code_r0x01518afc;
                                if (*(long *)(lVar7 + 0x18) != 0) {
                                  lVar18 = /*Atlas.Definitions.EventDefinition$$get_Challenge3*/ func_0x015836e4(*(long *)(lVar7 + 0x18),0);
                                  uVar12 = uStack_98;
                                  if (*(long *)(lVar18 + 0x28) != 0) {
                                    if (*(long *)(*(long *)(lVar18 + 0x28) + 0x18) != 0) {
                                      if (*(long *)(lVar7 + 0x18) == 0) goto code_r0x01518ce0;
                                      lVar18 = /*Atlas.Definitions.EventDefinition$$get_Challenge3*/ func_0x015836e4(*(long *)(lVar7 + 0x18),0);
                                      uStack_98 = /*System.String$$Format*/ func_0x029cf564(uVar12,*(undefined8 *)
                                                                          (lVar18 + 0x28),0);
                                    }
code_r0x01518afc:
                                    if (*(long *)(lVar7 + 0x38) != 0) {
                                      auVar23._8_8_ = *(undefined8 *)(lVar7 + 0x10);
                                      auVar23._0_8_ = *(long *)(lVar7 + 0x38);
                                      goto code_r0x01518cf0;
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
code_r0x01518ce0:
  func_0x00f78af4();
  uVar12 = func_0x00f78b24();
  auVar23 = func_0x00f78ac0(uVar12,0);
code_r0x01518cf0:
  if ((bRam0000000003eb4e0f & 1) == 0) {
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e0f = 1;
  }
  lVar7 = *(long *)(auVar23._0_8_ + 0x20);
  if (lVar7 == 0) {
    uVar3 = func_0x00f78af4();
    return (undefined8 *)(ulong)((extraout_w1 & (uVar3 ^ 0xffffffff)) == 0);
  }
  lVar7 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(lVar7,0);
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4e11 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    func_0x00f78a20(0x3d257d8);
    bRam0000000003eb4e11 = 1;
  }
  if (((*(ushort *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.Stats.UnlockManager_TypeInfo*/ lRam0000000003d257d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb4e46 & 1) == 0) {
    func_0x00f78a20(0x3d3d8d0);
    func_0x00f78a20(0x3d3d8d8);
    bRam0000000003eb4e46 = 1;
  }
  if ((lVar7 != 0) && (lVar18 = *(long *)(lVar7 + 0x58), lVar18 != 0)) {
    iVar6 = *(int *)(lVar18 + 0x18);
    if (iVar6 < 1) {
      return (undefined8 *)0xffffffff;
    }
    puVar10 = (undefined8 *)0x0;
    do {
      uVar3 = (uint)puVar10;
      if (*(uint *)(lVar18 + 0x18) <= uVar3) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar18 = *(long *)(*(long *)(lVar18 + 0x10) + (long)(int)uVar3 * 0x10 + 0x20);
      if (lVar18 == 0) break;
      uVar11 = /*System.String$$Equals*/ func_0x029caa48(lVar18,auVar23._8_8_,4,0);
      if ((uVar11 & 1) != 0) {
        return puVar10;
      }
      if (iVar6 - 1U == uVar3) {
        return (undefined8 *)0xffffffff;
      }
      lVar18 = *(long *)(lVar7 + 0x58);
      puVar10 = (undefined8 *)(ulong)(uVar3 + 1);
    } while (lVar18 != 0);
  }
  func_0x00f78af4();
  return (undefined8 *)0xffffffff;
}



// ============================================================
// RVA: 0x15b2a34 | Atlas.UI.Screens.GameOutroScreenBehaviour.get_FinishCameraHoldTime
// ============================================================

undefined4 Atlas_UI_Screens_GameOutroScreenBehaviour__get_FinishCameraHoldTime(long param_1)

{
  return *(undefined4 *)(param_1 + 0x118);
}



// ============================================================
// RVA: 0x15b2a3c | Atlas.UI.Screens.GameOutroScreenBehaviour.get_AutoDriveCameraChangeDelay
// ============================================================

undefined4 Atlas_UI_Screens_GameOutroScreenBehaviour__get_AutoDriveCameraChangeDelay(long param_1)

{
  return *(undefined4 *)(param_1 + 0x11c);
}



// ============================================================
// RVA: 0x15b2a44 | Atlas.UI.Screens.GameOutroScreenBehaviour.get_AutoDriveCameraChangeIntervalMin
// ============================================================

undefined4
Atlas_UI_Screens_GameOutroScreenBehaviour__get_AutoDriveCameraChangeIntervalMin(long param_1)

{
  return *(undefined4 *)(param_1 + 0x120);
}



// ============================================================
// RVA: 0x15b2a4c | Atlas.UI.Screens.GameOutroScreenBehaviour.get_AutoDriveCameraChangeIntervalMax
// ============================================================

undefined4
Atlas_UI_Screens_GameOutroScreenBehaviour__get_AutoDriveCameraChangeIntervalMax(long param_1)

{
  return *(undefined4 *)(param_1 + 0x124);
}



// ============================================================
// RVA: 0x15b2a54 | Atlas.UI.Screens.GameOutroScreenBehaviour.get_ResultsContainer
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_ResultsContainer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x15b2a5c | Atlas.UI.Screens.GameOutroScreenBehaviour.get_PositionContainer
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_PositionContainer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// ============================================================
// RVA: 0x15b2a64 | Atlas.UI.Screens.GameOutroScreenBehaviour.get_PlayerInfoRoot
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_PlayerInfoRoot(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x15b2a6c | Atlas.UI.Screens.GameOutroScreenBehaviour.get_PositionText
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_PositionText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x15b2a74 | Atlas.UI.Screens.GameOutroScreenBehaviour.get_ScoreContainer
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_ScoreContainer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x15b2a7c | Atlas.UI.Screens.GameOutroScreenBehaviour.get_NumberOfPointsNumber
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_NumberOfPointsNumber(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// ============================================================
// RVA: 0x15b2a84 | Atlas.UI.Screens.GameOutroScreenBehaviour.get_NumberOfPointsPoints
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_NumberOfPointsPoints(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x15b2a8c | Atlas.UI.Screens.GameOutroScreenBehaviour.get_TimerContainer
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_TimerContainer(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



// ============================================================
// RVA: 0x15b2a94 | Atlas.UI.Screens.GameOutroScreenBehaviour.get_TimerText
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_TimerText(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



// ============================================================
// RVA: 0x15b2a9c | Atlas.UI.Screens.GameOutroScreenBehaviour.get_CentiSecondSizePercentage
// ============================================================

undefined4 Atlas_UI_Screens_GameOutroScreenBehaviour__get_CentiSecondSizePercentage(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



// ============================================================
// RVA: 0x15b2aa4 | Atlas.UI.Screens.GameOutroScreenBehaviour.get_ButtonsContainer
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_ButtonsContainer(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



// ============================================================
// RVA: 0x15b2aac | Atlas.UI.Screens.GameOutroScreenBehaviour.get_EndGameTimer
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_EndGameTimer(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



// ============================================================
// RVA: 0x15b2ab4 | Atlas.UI.Screens.GameOutroScreenBehaviour.get_EndGameTimerGameObject
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_EndGameTimerGameObject(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



// ============================================================
// RVA: 0x15b2abc | Atlas.UI.Screens.GameOutroScreenBehaviour.get_LeaderboardList
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_LeaderboardList(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



// ============================================================
// RVA: 0x15b2ac4 | Atlas.UI.Screens.GameOutroScreenBehaviour.get_PlayerEntry
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_PlayerEntry(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



// ============================================================
// RVA: 0x15b2acc | Atlas.UI.Screens.GameOutroScreenBehaviour.get_ChallengeProgressBehaviourContainer
// ============================================================

undefined8
Atlas_UI_Screens_GameOutroScreenBehaviour__get_ChallengeProgressBehaviourContainer(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



// ============================================================
// RVA: 0x15b2ad4 | Atlas.UI.Screens.GameOutroScreenBehaviour.get_PointLocKey
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_PointLocKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



// ============================================================
// RVA: 0x15b2adc | Atlas.UI.Screens.GameOutroScreenBehaviour.get_PointsLocKey
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_PointsLocKey(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



// ============================================================
// RVA: 0x15b2ae4 | Atlas.UI.Screens.GameOutroScreenBehaviour.get_FirstPlaceIcon
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_FirstPlaceIcon(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



// ============================================================
// RVA: 0x15b2aec | Atlas.UI.Screens.GameOutroScreenBehaviour.get_SecondPlaceIcon
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_SecondPlaceIcon(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



// ============================================================
// RVA: 0x15b2af4 | Atlas.UI.Screens.GameOutroScreenBehaviour.get_ThirdPlaceIcon
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_ThirdPlaceIcon(long param_1)

{
  return *(undefined8 *)(param_1 + 0x138);
}



// ============================================================
// RVA: 0x15b2afc | Atlas.UI.Screens.GameOutroScreenBehaviour.get_ExitAnimationStartDelay
// ============================================================

undefined4 Atlas_UI_Screens_GameOutroScreenBehaviour__get_ExitAnimationStartDelay(long param_1)

{
  return *(undefined4 *)(param_1 + 0x148);
}



// ============================================================
// RVA: 0x15b2b04 | Atlas.UI.Screens.GameOutroScreenBehaviour.get_TournamentResultRoot
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_TournamentResultRoot(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



// ============================================================
// RVA: 0x15b2b0c | Atlas.UI.Screens.GameOutroScreenBehaviour.get_TournamentResultText
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_TournamentResultText(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf8);
}



// ============================================================
// RVA: 0x15b2b14 | Atlas.UI.Screens.GameOutroScreenBehaviour.get_LeaderboardTweenGroup
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__get_LeaderboardTweenGroup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



// ============================================================
// RVA: 0x15b2b1c | Atlas.UI.Screens.GameOutroScreenBehaviour.OnBeforeDestroyed
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01696338) */
/* WARNING: Removing unreachable block (ram,0x0169634c) */
/* WARNING: Removing unreachable block (ram,0x01696354) */
/* WARNING: Removing unreachable block (ram,0x01696358) */

undefined4 Atlas_UI_Screens_GameOutroScreenBehaviour__OnBeforeDestroyed(long param_1)

{
  undefined4 uVar1;
  undefined8 in_x7;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if ((bRam0000000003eb5c29 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    bRam0000000003eb5c29 = 1;
  }
  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003eb5af0 & 1) == 0) {
    func_0x00f78a20(0x3d20bc0,0,0);
    func_0x00f78a20(0x3d25440);
    bRam0000000003eb5af0 = 1;
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar1 = /*DG.Tweening.Core.TweenManager$$FilteredOperation*/ func_0x016c1874(0,1,1,param_1,0,0,0,0,in_x7,unaff_x22,unaff_x21,unaff_x20,unaff_x19,
                            unaff_x29,unaff_x30);
  }
  return uVar1;
}



// ============================================================
// RVA: 0x15b2b28 | Atlas.UI.Screens.GameOutroScreenBehaviour.PlayTweensOnStart
// ============================================================

undefined8 Atlas_UI_Screens_GameOutroScreenBehaviour__PlayTweensOnStart(void)

{
  return 0;
}



// ============================================================
// RVA: 0x15b2b30 | Atlas.UI.Screens.GameOutroScreenBehaviour..ctor
// ============================================================

undefined1  [16] Atlas_UI_Screens_GameOutroScreenBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4872 & 1) == 0) {
    func_0x00f78a20(0x3d3dc88,0);
    func_0x00f78a20(0x3d1e380);
    func_0x00f78a20(0x3d255d8);
    bRam0000000003eb4872 = 1;
  }
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<TopBarManager.TopBarButton>_TypeInfo*/ uRam0000000003d1e380);
  /*System.Collections.Generic.List<TopBarManager.TopBarButton>$$.ctor*/ func_0x023dda88(uVar1,uRam0000000003d3dc88);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 100) = 1;
  if (((*(ushort *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Core.UI2.UIScreenBehaviour_TypeInfo*/ lRam0000000003d255d8 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}



