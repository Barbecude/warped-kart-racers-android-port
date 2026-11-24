// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LicenseScreen

// ============================================================
// RVA: 0x1483cd0 | Atlas.UI.Screens.LicenseScreen.OnBeforeEnter
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_LicenseScreen__OnBeforeEnter(long param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 unaff_x22;
  undefined8 uVar9;
  undefined4 extraout_s0;
  float fVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  code *pcStack_48;
  
  lVar7 = 0x3eb4000;
  uVar8 = 0x3d41160;
  if ((bRam0000000003eb492e & 1) == 0) {
    func_0x00f78a20(0x3d2c7b8);
    func_0x00f78a20(0x3d41158);
    func_0x00f78a20(0x3d41160);
    func_0x00f78a20(0x3d255e0);
    bRam0000000003eb492e = 1;
  }
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41160);
  if (lVar3 != 0) {
    uVar9 = 0x3d41158;
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar3 + 0x10);
    Atlas_UI_Screens_AtlasScreen_ArcadeMapSelectBehaviour__ArcadeMapSelectScreen_TransitionData___ClearSelectedIfGamepad
              (param_1,uRam0000000003d2c7b8);
    lVar7 = func_0x00f78aec(/*Atlas.UI.Screens.UIScroller_TypeInfo*/ uRam0000000003d255e0);
    /*Atlas.UI.Screens.UIScroller$$.ctor*/ func_0x0151d77c(lVar7,0);
    *(long *)(param_1 + 0x78) = lVar7;
    lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41158);
    unaff_x22 = 0x3d41158;
    if (lVar3 != 0) {
      uVar8 = *(ulong *)(lVar3 + 0x68);
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41158);
      if (lVar3 != 0) {
        uVar12 = *(undefined4 *)(lVar3 + 0x7c);
        lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41158);
        unaff_x22 = uVar9;
        if (lVar3 != 0) {
          uVar14 = *(undefined4 *)(lVar3 + 0x80);
          lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41158);
          if ((lVar3 != 0) && (lVar7 != 0)) {
            /*Atlas.UI.Screens.UIScroller$$Init*/ func_0x0151d5d0(uVar12,uVar14,*(undefined4 *)(lVar3 + 0x78),lVar7,uVar8,0);
            lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41158);
            if ((lVar3 != 0) && (*(long *)(lVar3 + 0x70) != 0)) {
              /*UnityEngine.CanvasGroup$$set_alpha*/ func_0x032f44fc(0,*(long *)(lVar3 + 0x70),0);
              if ((*(long *)(param_1 + 0x70) != 0) &&
                 (lVar3 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator
                                    (*(long *)(param_1 + 0x70),0,0), lVar3 != 0)) {
                puVar2 = &stack0xffffffffffffffd0;
                if ((bRam0000000003eb5325 & 1) == 0) {
                  func_0x00f78a20(0x3d22c88,0);
                  bRam0000000003eb5325 = 1;
                }
                if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar1 = *(uint *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x48);
                uVar8 = (ulong)uVar1;
                lVar7 = 0;
                unaff_x22 = 0x3eb5000;
                if ((bRam0000000003eb5314 & 1) == 0) {
                  func_0x00f78a20(0x3d3b7f8);
                  bRam0000000003eb5314 = 1;
                }
                *(uint *)(lVar3 + 0x20) = uVar1;
                *(undefined1 *)(lVar3 + 0x28) = 0;
                *(undefined4 *)(lVar3 + 0x3c) = 0xffffffff;
                lVar4 = *(long *)(lVar3 + 0x40);
                if (lVar4 != 0) {
                  if (0 < *(int *)(lVar4 + 0x18)) {
                    /*System.Array$$Clear*/ func_0x02920164(*(undefined8 *)(lVar4 + 0x10),0,*(int *)(lVar4 + 0x18),0);
                    *(undefined4 *)(lVar4 + 0x18) = 0;
                  }
                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                  return;
                }
                pcStack_48 = Atlas_Gameplay_Kart_KartFEAnimator__SetTrigger;
                auVar16 = func_0x00f78af4();
                param_1 = lVar3;
                goto code_r0x015c9ff4;
              }
            }
          }
        }
      }
    }
  }
  lVar3 = func_0x00f78af4();
  pcStack_48 = (code *)&Atlas_UI_Screens_LicenseScreen__OnAfterExit;
  if (*(long *)(lVar3 + 0x78) != 0) {
    /*Atlas.UI.Screens.UIScroller$$DeInit*/ func_0x0151d61c(*(long *)(lVar3 + 0x78),0);
    *(undefined8 *)(lVar3 + 0x78) = 0;
    if ((*(long *)(lVar3 + 0x70) != 0) &&
       (lVar3 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(lVar3 + 0x70),0,0),
       lVar3 != 0)) {
      if ((bRam0000000003eb5326 & 1) == 0) {
        func_0x00f78a20(0x3d22c88,0);
        bRam0000000003eb5326 = 1;
      }
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      auVar16._8_4_ = *(undefined4 *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c);
      auVar16._0_8_ = lVar3;
      puVar2 = &stack0xffffffffffffffc0;
code_r0x015c9ff4:
      *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
      *(ulong *)(puVar2 + -0x28) = uVar8;
      *(long *)(puVar2 + -0x20) = lVar7;
      *(long *)(puVar2 + -0x18) = param_1;
      *(undefined1 **)(puVar2 + -0x10) = &stack0xfffffffffffffff0;
      *(code **)(puVar2 + -8) = pcStack_48;
      if ((bRam0000000003eb5315 & 1) == 0) {
        func_0x00f78a20(0x3d22c88);
        bRam0000000003eb5315 = 1;
      }
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != auVar16._8_4_) ||
         (*(int *)(auVar16._0_8_ + 0x24) == -1)) {
        *(int *)(auVar16._0_8_ + 0x24) = auVar16._8_4_;
      }
      return;
    }
  }
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb492f & 1) == 0) {
    func_0x00f78a20(0x3d41158);
    bRam0000000003eb492f = 1;
  }
  lVar4 = *(long *)(lVar7 + 0x78);
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d41158);
  if ((lVar3 != 0) && (lVar4 != 0)) {
    *(undefined1 *)(lVar4 + 0x40) = *(undefined1 *)(lVar3 + 0x84);
    if (*(long *)(lVar7 + 0x78) != 0) {
      /*Atlas.UI.Screens.UIScroller$$Update*/ func_0x0151d624(extraout_s0,*(long *)(lVar7 + 0x78),0);
      uVar12 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((*(float *)(lVar7 + 0x80) + _UNK_033f83c4) * 4.0,0);
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar7,uRam0000000003d41158);
      if ((lVar3 != 0) && (*(long *)(lVar3 + 0x70) != 0)) {
        /*UnityEngine.CanvasGroup$$set_alpha*/ func_0x032f44fc(uVar12,*(long *)(lVar3 + 0x70),0);
        fVar13 = *(float *)(lVar7 + 0x80);
        fVar10 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
        *(float *)(lVar7 + 0x80) = fVar13 + fVar10;
        return;
      }
    }
  }
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb4930 & 1) == 0) {
    func_0x00f78a20(0x3d2c7b0);
    bRam0000000003eb4930 = 1;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c7b0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar15 = func_0x00f78af4();
  puVar6 = auVar15._8_8_;
  puVar5 = auVar15._0_8_;
  uVar11 = puVar6[1];
  uVar9 = *puVar6;
  puVar5[2] = puVar6[2];
  puVar5[1] = uVar11;
  *puVar5 = uVar9;
  return;
}



// ============================================================
// RVA: 0x1483e4c | Atlas.UI.Screens.LicenseScreen.OnAfterExit
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_LicenseScreen__OnAfterExit(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 extraout_s0;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  if (*(long *)(param_1 + 0x78) != 0) {
    /*Atlas.UI.Screens.UIScroller$$DeInit*/ func_0x0151d61c(*(long *)(param_1 + 0x78),0);
    *(undefined8 *)(param_1 + 0x78) = 0;
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (lVar2 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator(*(long *)(param_1 + 0x70),0,0),
       lVar2 != 0)) {
      if ((bRam0000000003eb5326 & 1) == 0) {
        func_0x00f78a20(0x3d22c88,0);
        bRam0000000003eb5326 = 1;
      }
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      iVar1 = *(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c);
      if ((bRam0000000003eb5315 & 1) == 0) {
        func_0x00f78a20(0x3d22c88);
        bRam0000000003eb5315 = 1;
      }
      if (((*(ushort *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if ((*(int *)(*(long *)(/*Atlas.Gameplay.Kart.KartFEAnimator_TypeInfo*/ lRam0000000003d22c88 + 0xb8) + 0x4c) != iVar1) ||
         (*(int *)(lVar2 + 0x24) == -1)) {
        *(int *)(lVar2 + 0x24) = iVar1;
      }
      return;
    }
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb492f & 1) == 0) {
    func_0x00f78a20(0x3d41158);
    bRam0000000003eb492f = 1;
  }
  lVar6 = *(long *)(lVar2 + 0x78);
  lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar2,uRam0000000003d41158);
  if ((lVar3 != 0) && (lVar6 != 0)) {
    *(undefined1 *)(lVar6 + 0x40) = *(undefined1 *)(lVar3 + 0x84);
    if (*(long *)(lVar2 + 0x78) != 0) {
      /*Atlas.UI.Screens.UIScroller$$Update*/ func_0x0151d624(extraout_s0,*(long *)(lVar2 + 0x78),0);
      uVar7 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((*(float *)(lVar2 + 0x80) + _UNK_033f83c4) * 4.0,0);
      lVar3 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar2,uRam0000000003d41158);
      if ((lVar3 != 0) && (*(long *)(lVar3 + 0x70) != 0)) {
        /*UnityEngine.CanvasGroup$$set_alpha*/ func_0x032f44fc(uVar7,*(long *)(lVar3 + 0x70),0);
        fVar11 = *(float *)(lVar2 + 0x80);
        fVar8 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
        *(float *)(lVar2 + 0x80) = fVar11 + fVar8;
        return;
      }
    }
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4930 & 1) == 0) {
    func_0x00f78a20(0x3d2c7b0);
    bRam0000000003eb4930 = 1;
  }
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c7b0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar12 = func_0x00f78af4();
  puVar5 = auVar12._8_8_;
  puVar4 = auVar12._0_8_;
  uVar10 = puVar5[1];
  uVar9 = *puVar5;
  puVar4[2] = puVar5[2];
  puVar4[1] = uVar10;
  *puVar4 = uVar9;
  return;
}



// ============================================================
// RVA: 0x1483e9c | Atlas.UI.Screens.LicenseScreen.OnUpdate
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_LicenseScreen__OnUpdate(undefined4 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  
  if ((bRam0000000003eb492f & 1) == 0) {
    func_0x00f78a20(0x3d41158);
    bRam0000000003eb492f = 1;
  }
  lVar4 = *(long *)(param_2 + 0x78);
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41158);
  if ((lVar1 != 0) && (lVar4 != 0)) {
    *(undefined1 *)(lVar4 + 0x40) = *(undefined1 *)(lVar1 + 0x84);
    if (*(long *)(param_2 + 0x78) != 0) {
      /*Atlas.UI.Screens.UIScroller$$Update*/ func_0x0151d624(param_1,*(long *)(param_2 + 0x78),0);
      uVar5 = /*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((*(float *)(param_2 + 0x80) + _UNK_033f83c4) * 4.0,0);
      lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_2,uRam0000000003d41158);
      if ((lVar1 != 0) && (*(long *)(lVar1 + 0x70) != 0)) {
        /*UnityEngine.CanvasGroup$$set_alpha*/ func_0x032f44fc(uVar5,*(long *)(lVar1 + 0x70),0);
        fVar9 = *(float *)(param_2 + 0x80);
        fVar6 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
        *(float *)(param_2 + 0x80) = fVar9 + fVar6;
        return;
      }
    }
  }
  lVar1 = func_0x00f78af4();
  if ((bRam0000000003eb4930 & 1) == 0) {
    func_0x00f78a20(0x3d2c7b0);
    bRam0000000003eb4930 = 1;
  }
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c7b0 + 0x18) + 0xc0) + 0x38))();
    return;
  }
  auVar10 = func_0x00f78af4();
  puVar3 = auVar10._8_8_;
  puVar2 = auVar10._0_8_;
  uVar8 = puVar3[1];
  uVar7 = *puVar3;
  puVar2[2] = puVar3[2];
  puVar2[1] = uVar8;
  *puVar2 = uVar7;
  return;
}



// ============================================================
// RVA: 0x1483f88 | Atlas.UI.Screens.LicenseScreen..ctor
// ============================================================

void Atlas_UI_Screens_LicenseScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4930 & 1) == 0) {
    func_0x00f78a20(0x3d2c7b0);
    bRam0000000003eb4930 = 1;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c7b0 + 0x18) + 0xc0) + 0x38))();
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



