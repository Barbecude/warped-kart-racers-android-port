// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.VotingScreen

// ============================================================
// RVA: 0x152c658 | Atlas.UI.Screens.VotingScreen.OnBeforeEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x0152c938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152c974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x0152c978) */
/* WARNING: Removing unreachable block (ram,0x0152c97c) */
/* WARNING: Removing unreachable block (ram,0x0152c9a4) */
/* WARNING: Removing unreachable block (ram,0x0152c9ac) */
/* WARNING: Removing unreachable block (ram,0x0151ced0) */
/* WARNING: Removing unreachable block (ram,0x0151cef4) */
/* WARNING: Removing unreachable block (ram,0x0151cf1c) */
/* WARNING: Removing unreachable block (ram,0x0151cf40) */
/* WARNING: Removing unreachable block (ram,0x0151cf54) */
/* WARNING: Removing unreachable block (ram,0x0151cf5c) */
/* WARNING: Removing unreachable block (ram,0x0151cf64) */
/* WARNING: Removing unreachable block (ram,0x0151cf6c) */
/* WARNING: Removing unreachable block (ram,0x0151cfb0) */
/* WARNING: Removing unreachable block (ram,0x0151cf80) */
/* WARNING: Removing unreachable block (ram,0x0151cf88) */
/* WARNING: Removing unreachable block (ram,0x0151cf90) */
/* WARNING: Removing unreachable block (ram,0x0151d010) */
/* WARNING: Removing unreachable block (ram,0x0151d03c) */
/* WARNING: Removing unreachable block (ram,0x0151d050) */
/* WARNING: Removing unreachable block (ram,0x03248424) */
/* WARNING: Removing unreachable block (ram,0x0321a9c0) */
/* WARNING: Removing unreachable block (ram,0x0321a9c4) */
/* WARNING: Removing unreachable block (ram,0x0321a9ec) */
/* WARNING: Removing unreachable block (ram,0x0321aa00) */
/* WARNING: Removing unreachable block (ram,0x0321aa0c) */
/* WARNING: Removing unreachable block (ram,0x0321aa14) */
/* WARNING: Removing unreachable block (ram,0x0321aa18) */
/* WARNING: Removing unreachable block (ram,0x032343d4) */
/* WARNING: Removing unreachable block (ram,0x0294d018) */
/* WARNING: Removing unreachable block (ram,0x0151cf98) */
/* WARNING: Removing unreachable block (ram,0x0151cfb4) */
/* WARNING: Removing unreachable block (ram,0x0151cfcc) */
/* WARNING: Removing unreachable block (ram,0x0151cfd4) */
/* WARNING: Removing unreachable block (ram,0x0151cfd8) */
/* WARNING: Removing unreachable block (ram,0x0151d000) */
/* WARNING: Removing unreachable block (ram,0x0151cfec) */
/* WARNING: Removing unreachable block (ram,0x0151398c) */
/* WARNING: Removing unreachable block (ram,0x015139b4) */
/* WARNING: Removing unreachable block (ram,0x015139e0) */
/* WARNING: Removing unreachable block (ram,0x015139f0) */
/* WARNING: Removing unreachable block (ram,0x015139f8) */
/* WARNING: Removing unreachable block (ram,0x01513a54) */
/* WARNING: Removing unreachable block (ram,0x01513a10) */
/* WARNING: Removing unreachable block (ram,0x01513a20) */
/* WARNING: Removing unreachable block (ram,0x01513a28) */
/* WARNING: Removing unreachable block (ram,0x01513a64) */
/* WARNING: Removing unreachable block (ram,0x01513a8c) */
/* WARNING: Removing unreachable block (ram,0x01513ab8) */
/* WARNING: Removing unreachable block (ram,0x01513acc) */
/* WARNING: Removing unreachable block (ram,0x01513bdc) */
/* WARNING: Removing unreachable block (ram,0x03247e70) */
/* WARNING: Removing unreachable block (ram,0x03247ef0) */
/* WARNING: Removing unreachable block (ram,0x03247e84) */
/* WARNING: Removing unreachable block (ram,0x03247e98) */
/* WARNING: Removing unreachable block (ram,0x03247eac) */
/* WARNING: Removing unreachable block (ram,0x03247f24) */
/* WARNING: Removing unreachable block (ram,0x03247f54) */
/* WARNING: Removing unreachable block (ram,0x03247f90) */
/* WARNING: Removing unreachable block (ram,0x03247fa4) */
/* WARNING: Removing unreachable block (ram,0x03247eb8) */
/* WARNING: Removing unreachable block (ram,0x03247ec4) */
/* WARNING: Removing unreachable block (ram,0x03247ed8) */
/* WARNING: Removing unreachable block (ram,0x01513ae4) */
/* WARNING: Removing unreachable block (ram,0x01513a40) */
/* WARNING: Removing unreachable block (ram,0x01638af0) */
/* WARNING: Removing unreachable block (ram,0x0151cf0c) */
/* WARNING: Removing unreachable block (ram,0x0151cee4) */
/* WARNING: Removing unreachable block (ram,0x0322ef1c) */
/* WARNING: Removing unreachable block (ram,0x0322ef40) */
/* WARNING: Removing unreachable block (ram,0x0322ef54) */
/* WARNING: Removing unreachable block (ram,0x0152c93c) */
/* WARNING: Removing unreachable block (ram,0x0152c94c) */
/* WARNING: Removing unreachable block (ram,0x0152c970) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Removing unreachable block (ram,0x018eee1c) */
/* WARNING: Removing unreachable block (ram,0x018eee40) */
/* WARNING: Removing unreachable block (ram,0x018eee6c) */
/* WARNING: Removing unreachable block (ram,0x018eee70) */
/* WARNING: Removing unreachable block (ram,0x018eee78) */
/* WARNING: Removing unreachable block (ram,0x018eee8c) */
/* WARNING: Removing unreachable block (ram,0x018eee94) */
/* WARNING: Removing unreachable block (ram,0x018eee98) */
/* WARNING: Removing unreachable block (ram,0x018eeea4) */
/* WARNING: Removing unreachable block (ram,0x018eeed0) */
/* WARNING: Removing unreachable block (ram,0x018eeed8) */
/* WARNING: Removing unreachable block (ram,0x018eeedc) */
/* WARNING: Removing unreachable block (ram,0x018eef04) */
/* WARNING: Removing unreachable block (ram,0x018eef08) */
/* WARNING: Removing unreachable block (ram,0x018eeef0) */
/* WARNING: Removing unreachable block (ram,0x018eef34) */
/* WARNING: Removing unreachable block (ram,0x018eef5c) */
/* WARNING: Removing unreachable block (ram,0x018eef7c) */
/* WARNING: Removing unreachable block (ram,0x018eef80) */
/* WARNING: Removing unreachable block (ram,0x018eef88) */
/* WARNING: Removing unreachable block (ram,0x018eef9c) */
/* WARNING: Removing unreachable block (ram,0x018eefa4) */
/* WARNING: Removing unreachable block (ram,0x018eefac) */
/* WARNING: Removing unreachable block (ram,0x018eefc8) */
/* WARNING: Removing unreachable block (ram,0x018eefd0) */
/* WARNING: Removing unreachable block (ram,0x018eefd4) */
/* WARNING: Removing unreachable block (ram,0x018eefec) */
/* WARNING: Removing unreachable block (ram,0x018eeef4) */
/* WARNING: Removing unreachable block (ram,0x018eef18) */
/* WARNING: Removing unreachable block (ram,0x018eef1c) */
/* WARNING: Removing unreachable block (ram,0x018eef20) */

long Atlas_UI_Screens_VotingScreen__OnBeforeEnter(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  
  if ((bRam0000000003eb4e81 & 1) == 0) {
    func_0x00f78a20(0x3d29fa0);
    func_0x00f78a20(0x3d2a248);
    func_0x00f78a20(0x3d1b520);
    func_0x00f78a20(0x3d1b3d8);
    func_0x00f78a20(0x3d2c9c0);
    func_0x00f78a20(0x3d29730);
    func_0x00f78a20(0x3d41350);
    func_0x00f78a20(0x3d41358);
    func_0x00f78a20(0x3d41360);
    func_0x00f78a20(0x3d60128);
    func_0x00f78a20(0x3d60138);
    func_0x00f78a20(0x3d60140);
    bRam0000000003eb4e81 = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41360);
  if (lVar1 == 0) {
LAB_0152c9c8:
    func_0x00f78af4();
  }
  else {
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar1 + 0x38);
    lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41360);
    if (lVar1 == 0) goto LAB_0152c9c8;
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar1 + 0x20);
    lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41360);
    if (lVar1 == 0) goto LAB_0152c9c8;
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x80);
    lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41358);
    if (lVar1 == 0) goto LAB_0152c9c8;
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(lVar1 + 0x28);
    lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41360);
    if (lVar1 == 0) goto LAB_0152c9c8;
    lVar1 = *(long *)(lVar1 + 0x30);
    *(long *)(param_1 + 0x98) = lVar1;
    lVar5 = *(long *)(param_1 + 0x90);
    if (lVar5 != 0) {
      uVar4 = *(undefined8 *)(lVar5 + 0xf0);
      uVar2 = func_0x00f78aec(/*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730);
      /*Atlas.UI.VotingManager.OnVoteStageChanged$$.ctor*/ func_0x0156d908(uVar2,param_1,uRam0000000003d60138,0);
      plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,uVar2,0);
      if ((plVar3 == (long *)0x0) || (*plVar3 == /*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730)) {
        *(long **)(lVar5 + 0xf0) = plVar3;
        lVar1 = *(long *)(param_1 + 0x98);
        goto LAB_0152c804;
      }
      goto LAB_0152c9cc;
    }
LAB_0152c804:
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x20) == 0)) {
LAB_0152c8f0:
      lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41360);
      if (lVar1 != 0) {
        lVar5 = *(long *)(lVar1 + 0x88);
        lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
        if ((lVar1 != 0) && (lVar5 != 0)) {
          uVar2 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar5,*(undefined8 *)(lVar1 + 0xd0),0);
          goto code_r0x0152c9d0;
        }
      }
      goto LAB_0152c9c8;
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0x20) + 0x10);
    if (lVar1 == 0) goto LAB_0152c9c8;
    uVar4 = *(undefined8 *)(lVar1 + 0x48);
    uVar2 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520);
    /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar2,param_1,uRam0000000003d60140,uRam0000000003d2a248);
    plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,uVar2,0);
    if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520)) {
      *(long **)(lVar1 + 0x48) = plVar3;
      if ((*(long *)(param_1 + 0x98) == 0) ||
         ((lVar1 = *(long *)(*(long *)(param_1 + 0x98) + 0x20), lVar1 == 0 ||
          (lVar1 = *(long *)(lVar1 + 0x10), lVar1 == 0)))) goto LAB_0152c9c8;
      uVar4 = *(undefined8 *)(lVar1 + 0x90);
      uVar2 = func_0x00f78aec(/*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8);
      /*System.Action<bool>$$.ctor*/ func_0x01b42d40(uVar2,param_1,uRam0000000003d60128,uRam0000000003d29fa0);
      plVar3 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(uVar4,uVar2,0);
      if ((plVar3 == (long *)0x0) || (*plVar3 == /*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8)) {
        *(long **)(lVar1 + 0x90) = plVar3;
        goto LAB_0152c8f0;
      }
    }
  }
LAB_0152c9cc:
  auVar6 = func_0x00f78e5c();
  uVar2 = auVar6._8_8_;
  param_1 = auVar6._0_8_;
code_r0x0152c9d0:
  if ((bRam0000000003eb4e8d & 1) == 0) {
    func_0x00f78a20(0x3d41350);
    bRam0000000003eb4e8d = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
  if ((lVar1 != 0) && (plVar3 = *(long **)(lVar1 + 0x68), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x558))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x560));
    lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
    if ((lVar1 != 0) && (plVar3 = *(long **)(lVar1 + 0x70), plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0152ca70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(*plVar3 + 0x558))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x560));
      return lVar1;
    }
  }
  uVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4e83 & 1) == 0) {
    func_0x00f78a20(0x3d29778);
    bRam0000000003eb4e83 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.<SetupData>d__18_TypeInfo*/ uRam0000000003d29778);
  /*Atlas.UI.Screens.VotingScreen.<SetupData>d__18$$.ctor*/ func_0x0156e0f4(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    return lVar1;
  }
  auVar7 = func_0x00f78af4();
  lVar1 = *(long *)(auVar7._0_8_ + 0x78);
  if (lVar1 == 0) {
    func_0x00f78af4();
  }
  else if (auVar7._8_4_ < *(uint *)(lVar1 + 0x18)) {
    return *(long *)(lVar1 + (long)(int)auVar7._8_4_ * 8 + 0x20);
  }
  uVar2 = func_0x00f78b24();
  lVar1 = func_0x00f78ac0(uVar2,0);
  return lVar1;
}



// ============================================================
// RVA: 0x152c9d0 | Atlas.UI.Screens.VotingScreen.SetTitleText
// ============================================================

long Atlas_UI_Screens_VotingScreen__SetTitleText(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auVar4 [12];
  
  if ((bRam0000000003eb4e8d & 1) == 0) {
    func_0x00f78a20(0x3d41350);
    bRam0000000003eb4e8d = 1;
  }
  lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
  if ((lVar1 != 0) && (plVar2 = *(long **)(lVar1 + 0x68), plVar2 != (long *)0x0)) {
    (**(code **)(*plVar2 + 0x558))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x560));
    lVar1 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
    if ((lVar1 != 0) && (plVar2 = *(long **)(lVar1 + 0x70), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0152ca70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar1 = (**(code **)(*plVar2 + 0x558))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x560));
      return lVar1;
    }
  }
  uVar3 = func_0x00f78af4();
  if ((bRam0000000003eb4e83 & 1) == 0) {
    func_0x00f78a20(0x3d29778);
    bRam0000000003eb4e83 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.<SetupData>d__18_TypeInfo*/ uRam0000000003d29778);
  /*Atlas.UI.Screens.VotingScreen.<SetupData>d__18$$.ctor*/ func_0x0156e0f4(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    return lVar1;
  }
  auVar4 = func_0x00f78af4();
  lVar1 = *(long *)(auVar4._0_8_ + 0x78);
  if (lVar1 == 0) {
    func_0x00f78af4();
  }
  else if (auVar4._8_4_ < *(uint *)(lVar1 + 0x18)) {
    return *(long *)(lVar1 + (long)(int)auVar4._8_4_ * 8 + 0x20);
  }
  uVar3 = func_0x00f78b24();
  lVar1 = func_0x00f78ac0(uVar3,0);
  return lVar1;
}



// ============================================================
// RVA: 0x152ca78 | Atlas.UI.Screens.VotingScreen.SetupData
// ============================================================

long Atlas_UI_Screens_VotingScreen__SetupData(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [12];
  
  if ((bRam0000000003eb4e83 & 1) == 0) {
    func_0x00f78a20(0x3d29778);
    bRam0000000003eb4e83 = 1;
  }
  lVar1 = func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.<SetupData>d__18_TypeInfo*/ uRam0000000003d29778);
  /*Atlas.UI.Screens.VotingScreen.<SetupData>d__18$$.ctor*/ func_0x0156e0f4(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    return lVar1;
  }
  auVar3 = func_0x00f78af4();
  lVar1 = *(long *)(auVar3._0_8_ + 0x78);
  if (lVar1 == 0) {
    func_0x00f78af4();
  }
  else if (auVar3._8_4_ < *(uint *)(lVar1 + 0x18)) {
    return *(long *)(lVar1 + (long)(int)auVar3._8_4_ * 8 + 0x20);
  }
  uVar2 = func_0x00f78b24();
  lVar1 = func_0x00f78ac0(uVar2,0);
  return lVar1;
}



// ============================================================
// RVA: 0x152cb28 | Atlas.UI.Screens.VotingScreen.OnAfterEnter
// ============================================================

void Atlas_UI_Screens_VotingScreen__OnAfterEnter(void)

{
  return;
}



// ============================================================
// RVA: 0x152cb2c | Atlas.UI.Screens.VotingScreen.SetMapData
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x152cd38 | Atlas.UI.Screens.VotingScreen.VoteMade
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x152d0bc | Atlas.UI.Screens.VotingScreen.HideInput
// ============================================================

/* WARNING: Possible PIC construction at 0x0152d208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152d384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151cd74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152dc50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x0152d388) */
/* WARNING: Removing unreachable block (ram,0x0152d20c) */
/* WARNING: Removing unreachable block (ram,0x0152d21c) */
/* WARNING: Removing unreachable block (ram,0x0152d224) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *******
Atlas_UI_Screens_VotingScreen__HideInput
          (undefined1 param_1 [16],float param_2,float param_3,ulong param_4)

{
  undefined8 ****ppppuVar1;
  char cVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  bool bVar9;
  uint uVar10;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *******pppppppuVar19;
  long lVar20;
  undefined8 ****ppppuVar21;
  undefined8 ******ppppppuVar22;
  undefined8 *puVar23;
  undefined8 **ppuVar24;
  undefined8 **ppuVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 uVar28;
  long *plVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 ******ppppppuVar32;
  undefined8 *****pppppuVar33;
  undefined8 ***pppuVar34;
  code *pcVar35;
  ulong uVar36;
  int *piVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined8 *******pppppppuVar41;
  undefined *unaff_x23;
  undefined *puVar42;
  undefined8 *******unaff_x24;
  undefined8 *******pppppppuVar43;
  long unaff_x25;
  undefined8 ****ppppuVar44;
  undefined8 unaff_x26;
  undefined8 *****pppppuVar45;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *****pppppuVar46;
  undefined1 *puVar47;
  float fVar48;
  double dVar49;
  double dVar50;
  undefined *unaff_d8;
  undefined8 *******unaff_d9;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *******pppppppuStack_120;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined8 *******pppppppuStack_f0;
  undefined *puStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined *puStack_b8;
  undefined8 *******pppppppuStack_90;
  undefined *puStack_88;
  undefined8 *******pppppppuStack_60;
  ulong uStack_50;
  undefined8 *******pppppppuStack_40;
  undefined *puStack_38;
  
  puVar5 = &stack0xffffffffffffffd0;
  puVar38 = (undefined *)0x3eb4000;
  pppppppuStack_120 = (undefined8 *******)0x3d2c9b8;
  pppppppuVar41 = (undefined8 *******)0x3d2c9b8;
  uStack_50 = 0x3d41350;
  if ((bRam0000000003eb4e85 & 1) == 0) {
    func_0x00f78a20(0x3d2c9b8);
    func_0x00f78a20(0x3d41350);
    func_0x00f78a20(0x3d41360);
    bRam0000000003eb4e85 = 1;
  }
  Atlas_UI_Screens_AtlasScreen_PauseScreenBehaviour__PauseScreen_TransitionData___ClearSelected
            (param_4,uRam0000000003d2c9b8);
  lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41350);
  if (((lVar16 != 0) && (lVar16 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar16,0), lVar16 != 0)) &&
     (*(long *)(lVar16 + 0x10) != 0)) {
    /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(*(long *)(lVar16 + 0x10),0);
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41350);
    if (((lVar16 != 0) && (lVar16 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar16,1), lVar16 != 0)) &&
       (*(long *)(lVar16 + 0x10) != 0)) {
      /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(*(long *)(lVar16 + 0x10),0);
      lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41350);
      if (((lVar16 != 0) && (lVar16 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar16,0), lVar16 != 0)) &&
         (*(long *)(lVar16 + 0x50) != 0)) {
        /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar16 + 0x50),0,0);
        lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41350);
        if (((lVar16 != 0) && (lVar16 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar16,1), lVar16 != 0)) &&
           (*(long *)(lVar16 + 0x50) != 0)) {
          puVar38 = (undefined *)0x3d41000;
          /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(lVar16 + 0x50),0,0);
          lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41360);
          if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x10), lVar16 != 0)) {
            uVar27 = (ulong)*(uint *)(param_4 + 0x48);
            uVar30 = 0;
            pppppppuStack_60 = pppppppuStack_120;
            pppppppuVar41 = (undefined8 *******)&stack0xfffffffffffffff0;
            puVar39 = (undefined *)0x152d20c;
            goto code_r0x01470960;
          }
        }
      }
    }
  }
  lVar17 = func_0x00f78af4();
  pppppppuVar8 = (undefined8 *******)&stack0xffffffffffffff80;
  pppppppuStack_60 = (undefined8 *******)0x3d2c9b8;
  uStack_50 = 0x3d41350;
  puStack_38 = &Atlas_UI_Screens_VotingScreen__OnHostMigrationStarted;
  pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e86 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d64938);
    func_0x00f78a20(0x3d64940);
    func_0x00f78a20(0x3d29760);
    func_0x00f78a20(0x3d41350);
    func_0x00f78a20(0x3d41360);
    func_0x00f78a20(0x3d25a40);
    bRam0000000003eb4e86 = 1;
  }
  lVar16 = func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.<>c__DisplayClass21_0_TypeInfo*/ uRam0000000003d29760);
  auVar52._8_8_ = lVar17;
  auVar52._0_8_ = lVar16;
  /*Atlas.UI.Screens.VotingScreen.<>c__DisplayClass21_0$$.ctor*/ func_0x0156debc(lVar16,0);
  puVar39 = (undefined *)0x3d29760;
  puVar42 = unaff_x23;
  pppppppuVar43 = unaff_x24;
  if (lVar16 == 0) {
code_r0x0152d4dc:
    func_0x00f78af4();
  }
  else {
    *(long *)(lVar16 + 0x10) = lVar17;
    puVar39 = *(undefined **)(lVar17 + 0xa0);
    if (puVar39 == (undefined *)0x0) goto code_r0x0152d4dc;
    if (*(int *)(puVar39 + 0x18) < 1) {
      puVar40 = (undefined *)0x3d41350;
      lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41350);
      puVar39 = (undefined *)0x3d41350;
      pppppppuStack_120 = pppppppuVar41;
      if (lVar18 != 0) {
        uVar28 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar18,0);
        *(undefined8 *)(lVar16 + 0x18) = uVar28;
        lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d41350);
        puVar39 = puVar40;
        if (lVar18 != 0) {
          uVar28 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar18,1);
          *(undefined8 *)(lVar16 + 0x20) = uVar28;
          if ((*(long *)(lVar16 + 0x18) != 0) &&
             (lVar18 = *(long *)(*(long *)(lVar16 + 0x18) + 0x10), lVar18 != 0)) {
            /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(lVar18,0);
            if ((*(long *)(lVar16 + 0x20) != 0) &&
               (lVar18 = *(long *)(*(long *)(lVar16 + 0x20) + 0x10), lVar18 != 0)) {
              /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(lVar18,0);
              if (*(long *)(lVar16 + 0x18) != 0) {
                puVar42 = (undefined *)0x3d1fa78;
                pppppppuVar43 = (undefined8 *******)0x3d64000;
                puVar39 = *(undefined **)(*(long *)(lVar16 + 0x18) + 0x10);
                pppppppuStack_120 = (undefined8 *******)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                /*System.Action$$.ctor*/ func_0x02924c80(pppppppuStack_120,lVar16,uRam0000000003d64938,0);
                if (puVar39 != (undefined *)0x0) {
                  /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(puVar39,pppppppuStack_120,0);
                  if (*(long *)(lVar16 + 0x20) != 0) {
                    pppppppuVar43 = (undefined8 *******)0x3d64000;
                    puVar39 = *(undefined **)(*(long *)(lVar16 + 0x20) + 0x10);
                    pppppppuStack_120 = (undefined8 *******)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                    /*System.Action$$.ctor*/ func_0x02924c80(pppppppuStack_120,lVar16,uRam0000000003d64940,0);
                    if (puVar39 != (undefined *)0x0) {
                      /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(puVar39,pppppppuStack_120,0);
                      lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar17,uRam0000000003d41360);
                      if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x10), lVar16 != 0)) {
                        uVar27 = (ulong)*(uint *)(lVar17 + 0x48);
                        uVar30 = 1;
                        puVar5 = &stack0xffffffffffffffd0;
                        pppppppuVar41 = pppppppuStack_40;
                        puVar39 = puStack_38;
                        goto code_r0x01470960;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto code_r0x0152d4dc;
    }
    pppppppuStack_120 = (undefined8 *******)0x0;
    puVar42 = (undefined *)0x3d25a40;
    pppppppuVar43 = (undefined8 *******)0x3d24dd0;
    if (*(int *)(puVar39 + 0x18) != 0) {
      unaff_x25 = *(long *)(puVar39 + 0x20);
      if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (unaff_x25 != 0) {
        *(undefined4 *)(unaff_x25 + 0x10) = **(undefined4 **)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xb8);
        *(undefined8 *)(unaff_x25 + 0x18) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        if ((*(long *)(unaff_x25 + 0x20) != 0) &&
           (lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(*(long *)(unaff_x25 + 0x20),0),
           puVar42 = (undefined *)0x3d25a40, pppppppuVar43 = (undefined8 *******)0x3d24dd0,
           lVar16 != 0)) {
          uVar28 = 0;
          pppppppuVar41 = &pppppppuStack_40;
          puVar38 = &UNK_0152d388;
          goto code_r0x0322ef1c;
        }
      }
      goto code_r0x0152d4dc;
    }
  }
  uVar28 = func_0x00f78b24();
  uVar27 = func_0x00f78ac0(uVar28,0);
  puStack_88 = &Atlas_UI_Screens_VotingScreen__OnUpdate;
  pppppppuStack_90 = &pppppppuStack_40;
  if ((bRam0000000003eb4e87 & 1) == 0) {
    func_0x00f78a20(0x3d41350);
    bRam0000000003eb4e87 = 1;
  }
  if (*(undefined8 ********)(uVar27 + 0x90) == (undefined8 *******)0x0) {
    return (undefined8 *******)0x0;
  }
  if (*(long *)(uVar27 + 0x98) != 0) {
    if (*(long *)(*(long *)(uVar27 + 0x98) + 0x20) == 0) {
      return *(undefined8 ********)(uVar27 + 0x90);
    }
    fVar48 = (float)/*Atlas.UI.VotingManager$$GetSecondsLeftToVote*/ func_0x01529384();
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar27,uRam0000000003d41350);
    if ((lVar16 != 0) && (lVar17 = *(long *)(lVar16 + 0x80), lVar17 != 0)) {
      pppppppuVar7 = (undefined8 *******)&uStack_d0;
      pppppppuVar8 = (undefined8 *******)&uStack_d0;
      pppppppuStack_c0 = unaff_d9;
      puStack_b8 = unaff_d8;
      if ((bRam0000000003eb4e03 & 1) == 0) {
        func_0x00f78a20(0x3d22910,0);
        func_0x00f78a20(0x3d230e0);
        func_0x00f78a20(0x3d7cca8);
        func_0x00f78a20(0x3d6d120);
        func_0x00f78a20(0x3d78fa8);
        bRam0000000003eb4e03 = 1;
      }
      uVar28 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(fVar48,0);
      iVar12 = (int)uVar28;
      if ((*(int *)(lVar17 + 0x24) < 1 || *(int *)(lVar17 + 0x24) < iVar12) ||
         (iVar12 == *(int *)(lVar17 + 0x28))) {
        pppppppuStack_120 = (undefined8 *******)0x3d22910;
        *(int *)(lVar17 + 0x28) = iVar12;
        if (*(char *)(lVar17 + 0x20) == '\0') {
          dVar50 = -(double)fVar48;
          param_3 = INFINITY;
          dVar49 = dVar50;
          if (fVar48 != INFINITY) {
            dVar49 = (double)fVar48;
          }
          uVar10 = (int)dVar49 % 0x3c;
          if ((int)uVar10 < 1) {
            uVar10 = 0;
          }
          puVar39 = (undefined *)(ulong)uVar10;
          plVar29 = *(long **)(lVar17 + 0x18);
          uStack_c8 = CONCAT44(uStack_c8._4_4_,(int)dVar49 / 0x3c);
          uVar28 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_c8);
          param_2 = SUB84(dVar50,0);
          uStack_d0 = CONCAT44(uVar10,(undefined4)uStack_d0);
          uVar15 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_d0 + 4);
          uVar15 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0:D2}:{1:D2}')*/ uRam0000000003d7cca8,uVar28,uVar15,0);
joined_r0x0151cec8:
          lVar17 = 0;
          if (plVar29 != (long *)0x0) {
            pppppppuVar41 =
                 (undefined8 *******)
                 (**(code **)(*plVar29 + 0x558))(plVar29,uVar15,*(undefined8 *)(*plVar29 + 0x560));
            return pppppppuVar41;
          }
        }
        else {
          puVar39 = (undefined *)0x3d230e0;
          uVar28 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(fVar48,0);
          if (((*(ushort *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8) != 0) {
            puVar39 = (undefined *)
                      /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8),/*STR('GENERIC_TIME_SECS')*/ uRam0000000003d6d120,
                                      0);
            plVar29 = *(long **)(lVar17 + 0x18);
            uStack_c8 = CONCAT44((int)uVar28,(undefined4)uStack_c8);
            uVar15 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_c8 + 4);
            uVar15 = /*System.String$$Format*/ func_0x029bc688(puVar39,uVar15,0);
            goto joined_r0x0151cec8;
          }
        }
        auVar52._8_8_ = lVar17;
        auVar52._0_8_ = uVar28;
        auVar4._8_8_ = lVar17;
        auVar4._0_8_ = uVar28;
        uVar15 = func_0x00f78af4();
        puStack_d8 = &Atlas_UI_UITimer__Show;
        pppppppuStack_e0 = &pppppppuStack_90;
        lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar15,0);
        if (lVar16 != 0) {
          uVar28 = 1;
          pppppppuVar41 = pppppppuStack_e0;
          puVar38 = puStack_d8;
          auVar52 = auVar4;
code_r0x0322ef1c:
          *(undefined8 ********)((long)pppppppuVar8 + -0x30) = pppppppuStack_120;
          *(undefined **)((long)pppppppuVar8 + -0x28) = puVar39;
          *(undefined1 (*) [16])((long)pppppppuVar8 + -0x20) = auVar52;
          *(undefined8 ********)((long)pppppppuVar8 + -0x10) = pppppppuVar41;
          *(undefined **)((long)pppppppuVar8 + -8) = puVar38;
          if (pcRam0000000003ebf4c0 == (code *)0x0) {
            pcRam0000000003ebf4c0 =
                 (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
          }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pppppppuVar41 = (undefined8 *******)(*pcRam0000000003ebf4c0)(lVar16,uVar28);
          return pppppppuVar41;
        }
        uVar15 = func_0x00f78af4();
        puStack_e8 = &Atlas_UI_UITimer__Hide;
        pppppppuStack_f0 = &pppppppuStack_e0;
        lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar15,0);
        if (lVar16 != 0) {
          uVar28 = 0;
          pppppppuVar8 = &pppppppuStack_e0;
          pppppppuVar41 = pppppppuStack_f0;
          puVar38 = puStack_e8;
          goto code_r0x0322ef1c;
        }
        lVar16 = func_0x00f78af4();
        pppppppuStack_120 = (undefined8 *******)0x3d22910;
        puStack_f8 = &Atlas_UI_UILobbyInfoPanelBehaviour__OnGroupLeaderChangedJoined;
        pppppppuStack_100 = &pppppppuStack_f0;
        if ((bRam0000000003eb4dfd & 1) == 0) {
          pppppppuStack_100 = &pppppppuStack_f0;
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4dfd = 1;
        }
        if (((*(long *)(lVar16 + 0x68) == 0) ||
            (lVar18 = *(long *)(*(long *)(lVar16 + 0x68) + 0x28), lVar18 == 0)) ||
           (plVar29 = *(long **)(lVar18 + 0x30), plVar29 == (long *)0x0)) {
code_r0x0151d010:
          pppppppuVar41 = (undefined8 *******)func_0x00f78af4();
          if ((bRam0000000003eb4dfe & 1) == 0) {
            func_0x00f78a20(0x3d79000);
            bRam0000000003eb4dfe = 1;
          }
          pppppppuVar41[0xc] = /*STR('event:/UI/Front_End/GameCentre')*/ ppppppuRam0000000003d79000;
          *(undefined4 *)(pppppppuVar41 + 0xe) = 0xffffffff;
          if ((bRam0000000003ebf1b8 & 1) == 0) {
            func_0x00f78a20(0x3d23990,0);
            bRam0000000003ebf1b8 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          return pppppppuVar41;
        }
        iVar12 = (**(code **)(*plVar29 + 0x848))(plVar29,*(undefined8 *)(*plVar29 + 0x850));
        if (iVar12 == 0) {
          uVar10 = 0;
        }
        else {
          if (((*(long *)(lVar16 + 0x68) == 0) ||
              (lVar18 = *(long *)(*(long *)(lVar16 + 0x68) + 0x28), lVar18 == 0)) ||
             (plVar29 = *(long **)(lVar18 + 0x30), plVar29 == (long *)0x0)) goto code_r0x0151d010;
          uVar10 = (**(code **)(*plVar29 + 0x858))(plVar29,*(undefined8 *)(*plVar29 + 0x860));
        }
        uVar15 = *(undefined8 *)(lVar16 + 0x58);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pppppppuVar41 = (undefined8 *******)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar15,0);
        if ((uVar10 & (uint)pppppppuVar41) == 0) {
          return pppppppuVar41;
        }
        pppppppuVar41 = *(undefined8 ********)(lVar16 + 0x60);
        pppppppuVar7 = &pppppppuStack_f0;
        pppppppuVar43 = pppppppuStack_100;
        puVar38 = puStack_f8;
      }
      else {
        pppppppuVar41 = /*STR('event:/UI/Front_End/ClockTick')*/ pppppppuRam0000000003d78fa8;
        pppppppuVar43 = &pppppppuStack_90;
        puVar38 = &UNK_0151cd78;
      }
      *(undefined8 ********)((long)pppppppuVar7 + -0x30) = pppppppuStack_120;
      *(undefined **)((long)pppppppuVar7 + -0x28) = puVar39;
      *(undefined8 *)((long)pppppppuVar7 + -0x20) = uVar28;
      *(long *)((long)pppppppuVar7 + -0x18) = lVar17;
      *(undefined8 ********)((long)pppppppuVar7 + -0x10) = pppppppuVar43;
      *(undefined **)((long)pppppppuVar7 + -8) = puVar38;
      uVar28 = 0x3eb4000;
      pppppppuVar43 = pppppppuVar41;
      if ((bRam0000000003eb4db6 & 1) == 0) {
        func_0x00f78a20(0x3d2faf8);
        func_0x00f78a20(0x3d2fb00);
        pppppppuVar43 = (undefined8 *******)func_0x00f78a20(0x3d25580);
        bRam0000000003eb4db6 = 1;
      }
      if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
        return pppppppuVar43;
      }
      lVar16 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
      if (lVar16 != 0) {
        pppppppuVar43 =
             (undefined8 *******)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar16,pppppppuVar41,uRam0000000003d2faf8);
        if ((int)pppppppuVar43 == 0) {
          return pppppppuVar43;
        }
        if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
            (lVar16 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar16 != 0)) &&
           (pppppppuVar43 =
                 (undefined8 *******)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar16,pppppppuVar41,uRam0000000003d2fb00),
           pppppppuVar43 != (undefined8 *******)0x0)) {
          *(undefined8 *)((long)pppppppuVar7 + -0x20) = *(undefined8 *)((long)pppppppuVar7 + -0x20);
          *(undefined8 *)((long)pppppppuVar7 + -0x18) = *(undefined8 *)((long)pppppppuVar7 + -0x18);
          *(undefined8 *)((long)pppppppuVar7 + -0x10) = *(undefined8 *)((long)pppppppuVar7 + -0x10);
          *(undefined8 *)((long)pppppppuVar7 + -8) = *(undefined8 *)((long)pppppppuVar7 + -8);
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,pppppppuVar43,0,0);
          return pppppppuVar43;
        }
      }
      ppppppuVar32 = (undefined8 ******)func_0x00f78af4();
      *(undefined8 ********)((long)pppppppuVar7 + -0x70) = unaff_d9;
      *(ulong *)((long)pppppppuVar7 + -0x68) = (ulong)(uint)fVar48;
      *(undefined8 ********)((long)pppppppuVar7 + -0x60) = pppppppuStack_120;
      *(undefined8 *)((long)pppppppuVar7 + -0x58) = 0x3eb4000;
      *(undefined8 *)((long)pppppppuVar7 + -0x50) = 0x3d25580;
      *(undefined8 ********)((long)pppppppuVar7 + -0x48) = pppppppuVar41;
      *(undefined1 **)((long)pppppppuVar7 + -0x40) = (undefined1 *)((long)pppppppuVar7 + -0x10);
      *(undefined **)((long)pppppppuVar7 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
      if ((bRam0000000003eb4d8b & 1) == 0) {
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb4d8b = 1;
      }
      plVar29 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(ppppppuVar32,0);
      if ((plVar29 != (long *)0x0) && (*plVar29 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
        uVar14 = func_0x00f78e5c(plVar29);
        *(long **)((long)pppppppuVar7 + -0x90) = plVar29;
        *(undefined8 *******)((long)pppppppuVar7 + -0x88) = ppppppuVar32;
        *(undefined1 **)((long)pppppppuVar7 + -0x80) = (undefined1 *)((long)pppppppuVar7 + -0x40);
        *(undefined **)((long)pppppppuVar7 + -0x78) =
             &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
        lVar16 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
        uVar15 = *(undefined8 *)((long)pppppppuVar7 + -0x90);
        *(undefined8 ********)((long)pppppppuVar7 + -0xa0) = pppppppuStack_120;
        *(undefined8 *)((long)pppppppuVar7 + -0x98) = 0x3eb4000;
        *(undefined8 *)((long)pppppppuVar7 + -0x90) = uVar15;
        *(undefined8 *)((long)pppppppuVar7 + -0x88) = *(undefined8 *)((long)pppppppuVar7 + -0x88);
        *(undefined8 *)((long)pppppppuVar7 + -0x80) = *(undefined8 *)((long)pppppppuVar7 + -0x80);
        *(undefined8 *)((long)pppppppuVar7 + -0x78) = *(undefined8 *)((long)pppppppuVar7 + -0x78);
        if (lVar16 == 0) {
          func_0x00f78a24(0x3d23938,0,0);
          uVar26 = func_0x00f78aec();
          uVar14 = func_0x00f78a24(0x3d7b500);
          /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar26,uVar14,0);
        }
        else {
          uVar28 = 0x3ec0000;
          if (pcRam0000000003ec01d0 == (code *)0x0) {
            pcRam0000000003ec01d0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                        );
          }
          uVar27 = (*pcRam0000000003ec01d0)(uVar14);
          if ((uVar27 & 1) != 0) {
            if (pcRam0000000003ec01e0 == (code *)0x0) {
              pcRam0000000003ec01e0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pppppppuVar41 = (undefined8 *******)(*pcRam0000000003ec01e0)(uVar14,lVar16);
            return pppppppuVar41;
          }
          func_0x00f78a24(0x3d1fce8);
          uVar26 = func_0x00f78aec();
          uVar15 = func_0x00f78a24(0x3d6af80);
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar26,uVar15,0);
          uVar15 = uVar14;
        }
        uVar14 = func_0x00f78a24(0x3d5a8a8);
        auVar52 = func_0x00f78ac0(uVar26,uVar14);
        *(undefined8 ********)((long)pppppppuVar7 + -0xd0) = pppppppuStack_120;
        *(undefined8 *)((long)pppppppuVar7 + -200) = uVar28;
        *(undefined8 *)((long)pppppppuVar7 + -0xc0) = uVar15;
        *(undefined8 *)((long)pppppppuVar7 + -0xb8) = uVar26;
        *(undefined1 **)((long)pppppppuVar7 + -0xb0) = (undefined1 *)((long)pppppppuVar7 + -0x80);
        *(undefined **)((long)pppppppuVar7 + -0xa8) =
             &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pppppppuVar41 = (undefined8 *******)(*pcRam0000000003ec01e0)(auVar52._0_8_,auVar52._8_8_);
        return pppppppuVar41;
      }
      fVar48 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar28 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar48 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                               plVar29,4,0);
      pppppppuVar41 = (undefined8 *******)/*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar28,uRam0000000003d5e780);
      *(undefined8 *)((long)pppppppuVar7 + -0xa0) = 0x3d5e780;
      *(undefined8 *)((long)pppppppuVar7 + -0x98) = 0x3d5e868;
      *(long **)((long)pppppppuVar7 + -0x90) = plVar29;
      *(undefined8 *******)((long)pppppppuVar7 + -0x88) = ppppppuVar32;
      *(undefined1 **)((long)pppppppuVar7 + -0x80) = (undefined1 *)((long)pppppppuVar7 + -0x40);
      *(undefined **)((long)pppppppuVar7 + -0x78) = &UNK_01513b44;
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,ppppppuVar32,uRam0000000003d5e868);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((pppppppuVar41 != (undefined8 *******)0x0) && (*(char *)(pppppppuVar41 + 0x1d) != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar12 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar12 != 0) {
          lVar16 = func_0x00f78adc(ppppppuVar32,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar27 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar16,0,0);
          if ((uVar27 & 1) == 0) {
            if (ppppppuVar32 == (undefined8 ******)0x0) goto code_r0x018eef34;
            ppppppuVar22 = (undefined8 ******)
                           (*(code *)(*ppppppuVar32)[0x2d])(ppppppuVar32,(*ppppppuVar32)[0x2e]);
          }
          else {
            if (lVar16 == 0) {
code_r0x018eef34:
              auVar52 = func_0x00f78af4();
              pppppppuVar43 = auVar52._0_8_;
              *(undefined8 *)((long)pppppppuVar7 + -0xd0) = 0x3d5e780;
              *(long *)((long)pppppppuVar7 + -200) = lVar16;
              *(undefined8 *******)((long)pppppppuVar7 + -0xc0) = ppppppuVar32;
              *(undefined8 ********)((long)pppppppuVar7 + -0xb8) = pppppppuVar41;
              *(undefined1 **)((long)pppppppuVar7 + -0xb0) =
                   (undefined1 *)((long)pppppppuVar7 + -0x80);
              *(undefined **)((long)pppppppuVar7 + -0xa8) =
                   &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((pppppppuVar43 != (undefined8 *******)0x0) &&
                 (*(char *)(pppppppuVar43 + 0x1d) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(pppppppuVar43,auVar52._8_8_,cVar2 != '\0',0);
              }
              return pppppppuVar43;
            }
            ppppppuVar22 = (undefined8 ******)/*UnityEngine.Object$$get_name*/ func_0x03244608(lVar16,0);
          }
          pppppppuVar41[0x19] = ppppppuVar22;
        }
        pppppppuVar41[9] = ppppppuVar32;
      }
      return pppppppuVar41;
    }
  }
  lVar17 = func_0x00f78af4();
  uStack_d0 = 0x3eb4000;
  puStack_b8 = &Atlas_UI_Screens_VotingScreen__OnAfterExit;
  pppppppuStack_f0 = pppppppuVar43;
  puStack_e8 = puVar42;
  pppppppuStack_e0 = pppppppuStack_120;
  puStack_d8 = puVar39;
  uStack_c8 = uVar27;
  pppppppuStack_c0 = &pppppppuStack_90;
  if ((bRam0000000003eb4e88 & 1) == 0) {
    func_0x00f78a20(0x3d29fa0);
    func_0x00f78a20(0x3d2a248);
    func_0x00f78a20(0x3d1b520);
    func_0x00f78a20(0x3d1b3d8);
    func_0x00f78a20(0x3d29730);
    func_0x00f78a20(0x3d41360);
    func_0x00f78a20(0x3d60128);
    func_0x00f78a20(0x3d60138);
    func_0x00f78a20(0x3d60140);
    bRam0000000003eb4e88 = 1;
  }
  uVar27 = *(ulong *)(lVar17 + 0x90);
  if (uVar27 != 0) {
    uVar15 = *(undefined8 *)(uVar27 + 0xf0);
    uVar28 = func_0x00f78aec(/*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730);
    /*Atlas.UI.VotingManager.OnVoteStageChanged$$.ctor*/ func_0x0156d908(uVar28,lVar17,uRam0000000003d60138,0);
    plVar29 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar15,uVar28,0);
    if ((plVar29 != (long *)0x0) && (*plVar29 != /*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730)) goto code_r0x0152d7d0;
    *(long **)(uVar27 + 0xf0) = plVar29;
  }
  if ((*(long *)(lVar17 + 0x98) == 0) ||
     (lVar16 = *(long *)(*(long *)(lVar17 + 0x98) + 0x20), lVar16 == 0)) {
code_r0x0152d774:
    if (*(long *)(lVar17 + 0x88) != 0) {
      if (*(long *)(lVar17 + 0x78) == 0) goto code_r0x0152d7cc;
      Core_Application_CoroutineRunner__StopCoroutine
                (*(long *)(lVar17 + 0x78),*(long *)(lVar17 + 0x88),0);
    }
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar17,uRam0000000003d41360);
    if ((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x10), lVar16 != 0)) {
      uVar27 = (ulong)*(uint *)(lVar17 + 0x48);
      uVar30 = 1;
      puVar5 = &stack0xffffffffffffff50;
      param_4 = uStack_c8;
      uStack_50 = uStack_d0;
      puVar38 = puStack_d8;
      pppppppuStack_60 = pppppppuStack_e0;
      unaff_x23 = puStack_e8;
      unaff_x24 = pppppppuStack_f0;
      pppppppuVar41 = pppppppuStack_c0;
      puVar39 = puStack_b8;
code_r0x01470960:
      *(undefined8 ********)(puVar5 + -0x10) = pppppppuVar41;
      *(undefined **)(puVar5 + -8) = puVar39;
      puVar39 = *(undefined **)(lVar16 + 0x10);
      if (puVar39 == (undefined *)0x0) {
        auVar52 = func_0x00f78af4();
        *(undefined1 **)(puVar5 + -0x20) = puVar5 + -0x10;
        *(undefined **)(puVar5 + -0x18) = &Atlas_UI_AtlasUIManager__SetScreenVisible;
        lVar16 = *(long *)(auVar52._0_8_ + 0x10);
        auVar51._8_8_ = auVar52._8_8_;
        auVar51._0_8_ = lVar16;
        if (lVar16 == 0) {
          pppppppuVar41 = (undefined8 *******)func_0x00f78af4();
          *(undefined8 ********)(puVar5 + -0x50) = pppppppuStack_60;
          *(undefined **)(puVar5 + -0x48) = puVar38;
          *(ulong *)(puVar5 + -0x40) = uStack_50;
          *(ulong *)(puVar5 + -0x38) = param_4;
          *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x20;
          *(undefined **)(puVar5 + -0x28) = &Atlas_UI_AtlasUIManager___ctor;
          if ((bRam0000000003eb4871 & 1) == 0) {
            func_0x00f78a20(0x3d2fb80);
            func_0x00f78a20(0x3d1c478);
            bRam0000000003eb4871 = 1;
          }
          ppppppuVar32 = (undefined8 ******)func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
          /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(ppppppuVar32,uRam0000000003d2fb80);
          pppppppuVar41[6] = ppppppuVar32;
          return pppppppuVar41;
        }
        puVar6 = puVar5 + -0x10;
        puVar47 = *(undefined1 **)(puVar5 + -0x20);
        puVar42 = *(undefined **)(puVar5 + -0x18);
        uVar31 = uVar30;
      }
      else {
        puVar6 = puVar5 + -0x40;
        *(undefined8 ********)(puVar5 + -0x40) = unaff_x24;
        *(undefined **)(puVar5 + -0x38) = unaff_x23;
        *(undefined8 ********)(puVar5 + -0x30) = pppppppuStack_60;
        *(undefined **)(puVar5 + -0x28) = puVar38;
        *(ulong *)(puVar5 + -0x20) = uStack_50;
        *(ulong *)(puVar5 + -0x18) = param_4;
        *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
        *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
        puVar47 = puVar5 + -0x10;
        pppppppuStack_60 = (undefined8 *******)0x3ebc000;
        uVar31 = uVar30;
        if ((bRam0000000003ebc651 & 1) == 0) {
          func_0x00f78a20(0x3d2a5c0,uVar27,uVar30,0);
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc651 = 1;
        }
        if (*(long *)(puVar39 + 0x68) != 0) {
          uVar31 = (ulong)((uint)uVar30 ^ 1);
          pppppppuVar41 =
               (undefined8 *******)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(puVar39 + 0x68),uVar27,uVar31,0);
          lVar16 = *(long *)(puVar39 + 0x70);
          pppppppuStack_60 = (undefined8 *******)0x0;
          if (lVar16 != 0) {
            uVar10 = (uint)uVar27;
            if (*(uint *)(lVar16 + 0x18) <= uVar10) {
              pppppppuVar41 = (undefined8 *******)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if ((*(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar10 * 0x28 + 0x28) == 0) ||
               (pppppppuStack_60 = *(undefined8 ********)(puVar39 + 0x30),
               pppppppuStack_60 == (undefined8 *******)0x0)) {
              return pppppppuVar41;
            }
            lVar16 = *(long *)(puVar39 + 0x70);
            puVar39 = (undefined *)0x0;
            if (lVar16 != 0) {
              if (*(uint *)(lVar16 + 0x18) <= uVar10) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar29 = *(long **)(*(long *)(lVar16 + 0x10) + (long)(int)uVar10 * 0x28 + 0x28);
              *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
              *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
              *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
              *(long *)(puVar5 + -0x48) = unaff_x25;
              *(undefined8 *)(puVar5 + -0x40) = *(undefined8 *)(puVar5 + -0x40);
              *(undefined8 *)(puVar5 + -0x38) = *(undefined8 *)(puVar5 + -0x38);
              *(undefined8 *)(puVar5 + -0x30) = *(undefined8 *)(puVar5 + -0x30);
              *(undefined8 *)(puVar5 + -0x28) = *(undefined8 *)(puVar5 + -0x28);
              *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
              *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
              *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
              *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
              *(undefined8 ********)(puVar5 + -0x68) = pppppppuStack_60;
              ppppppuVar32 = pppppppuStack_60[0xd];
              if (ppppppuVar32 == (undefined8 ******)0x0) {
                ppppppuVar32 = (undefined8 ******)(puVar5 + -0x68);
                pppppuVar45 = (undefined8 *****)0x1;
              }
              else {
                pppppuVar45 = ppppppuVar32[3];
                if (pppppuVar45 == (undefined8 *****)0x0) {
                  return pppppppuStack_60;
                }
                ppppppuVar32 = ppppppuVar32 + 4;
              }
              pppppuVar46 = (undefined8 *****)0x0;
              do {
                pppppuVar33 = ppppppuVar32[(long)pppppuVar46];
                ppppuVar44 = pppppuVar33[2];
                ppppuVar21 = pppppuVar33[4];
                ppppuVar1 = pppppuVar33[5];
                if (*(short *)(ppppuVar1 + 9) == -1) {
                  func_0x00f78ad8(ppppuVar1);
                }
                iVar12 = func_0x00f78a4c(ppppuVar1);
                bVar9 = *(char *)((long)ppppuVar1 + 0x4a) == '\x03';
                if (iVar12 == 0) {
                  if (bVar9) {
                    if (ppppuVar21 == (undefined8 ****)0x0) {
code_r0x01e71bbc:
                      pppppppuVar41 =
                           (undefined8 *******)
                           (*(code *)ppppuVar44)(plVar29,uVar27,uVar30,ppppuVar1);
                    }
                    else {
                      if (((*(short *)(ppppuVar1 + 9) == -1) ||
                          ((*(byte *)((long)*ppppuVar21 + 0x115) & 1) != 0)) ||
                         (pppppppuStack_60[3] == (undefined8 ******)0x0)) goto code_r0x01e71aac;
                      iVar12 = func_0x00f78a44(ppppuVar1);
                      iVar13 = func_0x00f78ec0(ppppuVar1);
                      if (iVar12 == 0) {
                        uVar3 = *(ushort *)(ppppuVar1 + 9);
                        uVar31 = (ulong)uVar3;
                        if (iVar13 == 0) {
                          pppppppuVar41 =
                               (undefined8 *******)
                               (*(code *)(*ppppuVar21)[uVar31 * 2 + 0x27])
                                         (ppppuVar21,plVar29,uVar27,uVar30,
                                          (*ppppuVar21)[uVar31 * 2 + 0x28]);
                          goto code_r0x01e71bd0;
                        }
                        puVar23 = (undefined8 *)func_0x00f78a48(ppppuVar1);
                        pppuVar34 = *ppppuVar21;
                        uVar36 = (ulong)*(ushort *)((long)pppuVar34 + 0x12a);
                        if (uVar36 != 0) {
                          ppuVar24 = pppuVar34[0x16] + 1;
                          do {
                            if (ppuVar24[0xffffffffffffffff] == puVar23) {
                              pppuVar34 = pppuVar34 +
                                          (long)(int)(*(int *)ppuVar24 + (uint)uVar3) * 2 + 0x27;
                              goto code_r0x01e71d74;
                            }
                            ppuVar24 = ppuVar24 + 2;
                            uVar36 = uVar36 - 1;
                          } while (uVar36 != 0);
                        }
                        pppuVar34 = (undefined8 ***)func_0x00fac1f0(ppppuVar21,puVar23,uVar31);
code_r0x01e71d74:
                        ppuVar24 = *pppuVar34;
                        ppuVar25 = pppuVar34[1];
                      }
                      else {
                        if (iVar13 == 0) {
                          ppuVar24 = (*ppppuVar21)[(ulong)*(ushort *)(ppppuVar1 + 9) * 2 + 0x28];
                        }
                        else {
                          pppuVar34 = *ppppuVar21;
                          uVar31 = (ulong)*(ushort *)((long)pppuVar34 + 0x12a);
                          if (uVar31 != 0) {
                            ppuVar24 = pppuVar34[0x16] + 1;
                            do {
                              if ((undefined8 ***)ppuVar24[0xffffffffffffffff] == ppppuVar1[3]) {
                                pppuVar34 = pppuVar34 +
                                            (long)(int)(*(int *)ppuVar24 +
                                                       (uint)*(ushort *)(ppppuVar1 + 9)) * 2 + 0x27;
                                goto code_r0x01e71d4c;
                              }
                              ppuVar24 = ppuVar24 + 2;
                              uVar31 = uVar31 - 1;
                            } while (uVar31 != 0);
                          }
                          pppuVar34 = (undefined8 ***)func_0x00fac1f0(ppppuVar21);
code_r0x01e71d4c:
                          ppuVar24 = pppuVar34[1];
                        }
                        ppuVar25 = (undefined8 **)func_0x00f78acc(ppuVar24,ppppuVar1);
                        ppuVar24 = (undefined8 **)*ppuVar25;
                      }
                      pppppppuVar41 =
                           (undefined8 *******)
                           (*(code *)ppuVar24)(ppppuVar21,plVar29,uVar27,uVar30,ppuVar25);
                    }
                  }
                  else {
                    if ((*(short *)(ppppuVar1 + 9) == -1) ||
                       (pppppppuStack_60[3] == (undefined8 ******)0x0)) goto code_r0x01e71bbc;
                    iVar12 = func_0x00f78a44(ppppuVar1);
                    iVar13 = func_0x00f78ec0(ppppuVar1);
                    if (iVar12 == 0) {
                      uVar3 = *(ushort *)(ppppuVar1 + 9);
                      if (iVar13 == 0) {
                        lVar16 = *plVar29 + (ulong)uVar3 * 0x10;
                        pppppppuVar41 =
                             (undefined8 *******)
                             (**(code **)(lVar16 + 0x138))
                                       (plVar29,uVar27,uVar30,*(undefined8 *)(lVar16 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar16 = func_0x00f78a48(ppppuVar1);
                      lVar17 = *plVar29;
                      uVar31 = (ulong)*(ushort *)(lVar17 + 0x12a);
                      if (uVar31 != 0) {
                        piVar37 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar37 + -2) == lVar16) {
                            puVar23 = (undefined8 *)
                                      (lVar17 + (long)(int)(*piVar37 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e71d00;
                          }
                          piVar37 = piVar37 + 4;
                          uVar31 = uVar31 - 1;
                        } while (uVar31 != 0);
                      }
                      puVar23 = (undefined8 *)func_0x00fac1f0(plVar29,lVar16,(ulong)uVar3);
code_r0x01e71d00:
                      pcVar35 = (code *)*puVar23;
                      puVar23 = (undefined8 *)puVar23[1];
                    }
                    else {
                      if (iVar13 == 0) {
                        uVar28 = *(undefined8 *)
                                  (*plVar29 + (ulong)*(ushort *)(ppppuVar1 + 9) * 0x10 + 0x140);
                      }
                      else {
                        lVar16 = *plVar29;
                        uVar31 = (ulong)*(ushort *)(lVar16 + 0x12a);
                        if (uVar31 != 0) {
                          piVar37 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                          do {
                            if (*(undefined8 ****)(piVar37 + -2) == ppppuVar1[3]) {
                              lVar16 = lVar16 + (long)(int)(*piVar37 +
                                                           (uint)*(ushort *)(ppppuVar1 + 9)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71cd8;
                            }
                            piVar37 = piVar37 + 4;
                            uVar31 = uVar31 - 1;
                          } while (uVar31 != 0);
                        }
                        lVar16 = func_0x00fac1f0(plVar29);
code_r0x01e71cd8:
                        uVar28 = *(undefined8 *)(lVar16 + 8);
                      }
                      puVar23 = (undefined8 *)func_0x00f78acc(uVar28,ppppuVar1);
                      pcVar35 = (code *)*puVar23;
                    }
                    pppppppuVar41 = (undefined8 *******)(*pcVar35)(plVar29,uVar27,uVar30,puVar23);
                  }
                }
                else {
                  if (bVar9) goto code_r0x01e71bbc;
code_r0x01e71aac:
                  pppppppuVar41 =
                       (undefined8 *******)
                       (*(code *)ppppuVar44)(ppppuVar21,plVar29,uVar27,uVar30,ppppuVar1);
                }
code_r0x01e71bd0:
                pppppuVar46 = (undefined8 *****)((long)pppppuVar46 + 1);
                if (pppppuVar46 == pppppuVar45) {
                  return pppppppuVar41;
                }
              } while( true );
            }
          }
        }
        puVar42 = &Core_UI2_UIManager__SetScreenVisible;
        auVar51 = func_0x00f78af4();
        param_4 = uVar30;
        uStack_50 = uVar27;
        puVar38 = puVar39;
      }
      pppppppuVar43 = auVar51._0_8_;
      *(undefined8 ********)(puVar6 + -0x30) = pppppppuStack_60;
      *(undefined **)(puVar6 + -0x28) = puVar38;
      *(ulong *)(puVar6 + -0x20) = uStack_50;
      *(ulong *)(puVar6 + -0x18) = param_4;
      *(undefined1 **)(puVar6 + -0x10) = puVar47;
      *(undefined **)(puVar6 + -8) = puVar42;
      pppppppuVar41 = pppppppuVar43;
      if ((bRam0000000003ebc652 & 1) == 0) {
        pppppppuVar41 = (undefined8 *******)func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc652 = 1;
      }
      ppppppuVar32 = pppppppuVar43[0xe];
      if (ppppppuVar32 != (undefined8 ******)0x0) {
        uVar10 = auVar51._8_4_;
        if (*(uint *)(ppppppuVar32 + 3) <= uVar10) {
          pppppppuVar41 = (undefined8 *******)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (ppppppuVar32[2][(long)(int)uVar10 * 5 + 5] == (undefined8 ****)0x0) {
          return pppppppuVar41;
        }
        ppppppuVar32 = pppppppuVar43[0xe];
        if (ppppppuVar32 != (undefined8 ******)0x0) {
          if (*(uint *)(ppppppuVar32 + 3) <= uVar10) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if ((ppppppuVar32[2][(long)(int)uVar10 * 5 + 5] != (undefined8 ****)0x0) &&
             (pppuVar34 = ppppppuVar32[2][(long)(int)uVar10 * 5 + 5][5],
             pppuVar34 != (undefined8 ***)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pppppppuVar41 =
                 (undefined8 *******)
                 (*(code *)(*pppuVar34)[0x2f])(pppuVar34,uVar31,(*pppuVar34)[0x30]);
            return pppppppuVar41;
          }
        }
      }
      auVar52 = func_0x00f78af4();
      uVar28 = auVar52._0_8_;
      *(long *)(puVar6 + -0x50) = auVar51._8_8_;
      *(ulong *)(puVar6 + -0x48) = uVar31;
      *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
      *(undefined **)(puVar6 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
      *(undefined8 *)(puVar6 + -0x68) = 0;
      *(undefined8 *)(puVar6 + -0x70) = 0;
      *(undefined8 *)(puVar6 + -0x58) = 0;
      *(undefined8 *)(puVar6 + -0x60) = 0;
      pppppppuVar41 = (undefined8 *******)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar28,auVar52._8_8_,puVar6 + -0x70);
      if ((int)pppppppuVar41 != 0) {
        /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar28,*(undefined8 *)(puVar6 + -0x60),*(undefined8 *)(puVar6 + -0x58));
        *(undefined8 *)(puVar6 + -0x88) = *(undefined8 *)(puVar6 + -0x68);
        *(undefined8 *)(puVar6 + -0x90) = *(undefined8 *)(puVar6 + -0x70);
        *(undefined8 *)(puVar6 + -0x78) = *(undefined8 *)(puVar6 + -0x58);
        *(undefined8 *)(puVar6 + -0x80) = *(undefined8 *)(puVar6 + -0x60);
        pppppppuVar41 = (undefined8 *******)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar28,puVar6 + -0x90,1);
      }
      return pppppppuVar41;
    }
  }
  else {
    uVar27 = *(ulong *)(lVar16 + 0x10);
    if (uVar27 != 0) {
      uVar15 = *(undefined8 *)(uVar27 + 0x48);
      uVar28 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar28,lVar17,uRam0000000003d60140,uRam0000000003d2a248);
      plVar29 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar15,uVar28,0);
      if ((plVar29 != (long *)0x0) && (*plVar29 != /*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520)) goto code_r0x0152d7d0;
      *(long **)(uVar27 + 0x48) = plVar29;
      if ((*(long *)(lVar17 + 0x98) != 0) &&
         ((lVar16 = *(long *)(*(long *)(lVar17 + 0x98) + 0x20), lVar16 != 0 &&
          (uVar27 = *(ulong *)(lVar16 + 0x10), uVar27 != 0)))) {
        uVar15 = *(undefined8 *)(uVar27 + 0x90);
        uVar28 = func_0x00f78aec(/*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8);
        /*System.Action<bool>$$.ctor*/ func_0x01b42d40(uVar28,lVar17,uRam0000000003d60128,uRam0000000003d29fa0);
        plVar29 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar15,uVar28,0);
        if ((plVar29 != (long *)0x0) && (*plVar29 != /*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8)) goto code_r0x0152d7d0;
        *(long **)(uVar27 + 0x90) = plVar29;
        goto code_r0x0152d774;
      }
    }
  }
code_r0x0152d7cc:
  func_0x00f78af4();
code_r0x0152d7d0:
  auVar52 = func_0x00f78e5c();
  lVar16 = auVar52._8_8_;
  pppppppuVar19 = auVar52._0_8_;
  pppppppuVar8 = (undefined8 *******)&uStack_160;
  puStack_f8 = &Atlas_UI_Screens_VotingScreen__OnVoteUpdate;
  pppppppuVar41 = &pppppppuStack_100;
  pppppppuVar43 = pppppppuVar19;
  pppppppuStack_100 = &pppppppuStack_c0;
  if ((bRam0000000003eb4e89 & 1) == 0) {
    func_0x00f78a20(0x3d3b688);
    func_0x00f78a20(0x3d3b690);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25a40);
    func_0x00f78a20(0x3d70ba8);
    func_0x00f78a20(0x3d65ed8);
    pppppppuVar43 = (undefined8 *******)func_0x00f78a20(0x3d662b0);
    bRam0000000003eb4e89 = 1;
  }
  uStack_160 = 0;
  uStack_158 = 0;
  if ((lVar16 != 0) && (lVar17 = *(long *)(lVar16 + 0x10), lVar17 != 0)) {
    uVar30 = (ulong)*(uint *)(lVar17 + 0x18);
    if (0 < (int)*(uint *)(lVar17 + 0x18)) {
      lVar18 = 0;
      uVar31 = 0;
      do {
        if ((uVar30 & 0xffffffff) <= uVar31) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar11 = /*Atlas.UI.Screens.VotingScreen$$GetVoteInfoIndex*/ func_0x0152dc98(pppppppuVar19,
                                 *(undefined4 *)(*(long *)(lVar17 + 0x10) + lVar18 + 0x20));
        uStack_158 = CONCAT44(uVar11,(undefined4)uStack_158);
        ppppppuVar32 = pppppppuVar19[0x12];
        plVar29 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,6);
        if (plVar29 == (long *)0x0) goto code_r0x0152dc60;
        if ((/*STR('OnVoteUpdate ')*/ lRam0000000003d70ba8 != 0) &&
           (lVar17 = func_0x00f78adc(/*STR('OnVoteUpdate ')*/ lRam0000000003d70ba8,*(undefined8 *)(*plVar29 + 0x40)),
           lVar17 == 0)) goto code_r0x0152dc90;
        if ((int)plVar29[3] == 0) {
code_r0x0152dc84:
          uVar28 = func_0x00f78b24();
          do {
            func_0x00f78ac0(uVar28,0);
code_r0x0152dc90:
            uVar28 = func_0x00f78b14();
          } while( true );
        }
        plVar29[4] = /*STR('OnVoteUpdate ')*/ lRam0000000003d70ba8;
        lVar17 = *(long *)(lVar16 + 0x10);
        if (lVar17 == 0) goto code_r0x0152dc60;
        if (*(uint *)(lVar17 + 0x18) <= uVar31) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar17 = *(long *)(lVar17 + 0x10) + lVar18;
        uStack_160 = *(undefined8 *)(lVar17 + 0x20);
        uStack_158 = CONCAT44(uStack_158._4_4_,*(undefined4 *)(lVar17 + 0x28));
        lVar17 = /*System.UInt32$$ToString*/ func_0x02a0b3d0(&uStack_160,0);
        if ((lVar17 != 0) &&
           (lVar20 = func_0x00f78adc(lVar17,*(undefined8 *)(*plVar29 + 0x40)), lVar20 == 0))
        goto code_r0x0152dc90;
        uVar10 = (uint)plVar29[3];
        if ((plVar29[3] & 0xfffffffeU) == 0) goto code_r0x0152dc84;
        plVar29[5] = lVar17;
        if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
          lVar17 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar29 + 0x40));
          if (lVar17 == 0) goto code_r0x0152dc90;
          uVar10 = (uint)plVar29[3];
        }
        if (uVar10 < 3) goto code_r0x0152dc84;
        plVar29[6] = /*STR(' ')*/ lRam0000000003d65ed8;
        lVar17 = *(long *)(lVar16 + 0x10);
        if (lVar17 == 0) goto code_r0x0152dc60;
        if (*(uint *)(lVar17 + 0x18) <= uVar31) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar17 = *(long *)(lVar17 + 0x10) + lVar18;
        uStack_160 = *(undefined8 *)(lVar17 + 0x20);
        uStack_158 = CONCAT44(uStack_158._4_4_,*(undefined4 *)(lVar17 + 0x28));
        lVar17 = /*System.Int16$$ToString*/ func_0x02ae8e6c((ulong)&uStack_160 | 4,0);
        if ((lVar17 != 0) &&
           (lVar20 = func_0x00f78adc(lVar17,*(undefined8 *)(*plVar29 + 0x40)), lVar20 == 0))
        goto code_r0x0152dc90;
        uVar10 = (uint)plVar29[3];
        if ((plVar29[3] & 0xfffffffcU) == 0) goto code_r0x0152dc84;
        plVar29[7] = lVar17;
        if (/*STR(' index ')*/ lRam0000000003d662b0 != 0) {
          lVar17 = func_0x00f78adc(/*STR(' index ')*/ lRam0000000003d662b0,*(undefined8 *)(*plVar29 + 0x40));
          if (lVar17 == 0) goto code_r0x0152dc90;
          uVar10 = (uint)plVar29[3];
        }
        if (uVar10 < 5) goto code_r0x0152dc84;
        plVar29[8] = /*STR(' index ')*/ lRam0000000003d662b0;
        lVar17 = /*System.Int32$$ToString*/ func_0x02ae9b8c((long)&uStack_158 + 4,0);
        if ((lVar17 != 0) &&
           (lVar20 = func_0x00f78adc(lVar17,*(undefined8 *)(*plVar29 + 0x40)), lVar20 == 0))
        goto code_r0x0152dc90;
        if (*(uint *)(plVar29 + 3) < 6) goto code_r0x0152dc84;
        plVar29[9] = lVar17;
        pppppppuVar43 = (undefined8 *******)/*System.String$$Concat*/ func_0x029cfadc(plVar29,0);
        if (ppppppuVar32 == (undefined8 ******)0x0) goto code_r0x0152dc60;
        if (uStack_158._4_4_ == -1) {
          lVar17 = *(long *)(lVar16 + 0x10);
          if (lVar17 == 0) goto code_r0x0152dc60;
          if (*(uint *)(lVar17 + 0x18) <= uVar31) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar17 = *(long *)(lVar17 + 0x10) + lVar18;
          uVar27 = uVar27 & 0xffffffff00000000 | (ulong)*(uint *)(lVar17 + 0x28);
          pppppppuVar43 =
               (undefined8 *******)
               /*Atlas.UI.Screens.VotingScreen$$SetNewVote*/ func_0x0152dd08(pppppppuVar19,*(undefined8 *)(lVar17 + 0x20),uVar27);
        }
        lVar17 = *(long *)(lVar16 + 0x10);
        if (lVar17 == 0) goto code_r0x0152dc60;
        uVar31 = uVar31 + 1;
        uVar30 = (ulong)*(int *)(lVar17 + 0x18);
        lVar18 = lVar18 + 0xc;
      } while ((long)uVar31 < (long)uVar30);
    }
    ppppppuVar32 = pppppppuVar19[0x14];
    if (ppppppuVar32 != (undefined8 ******)0x0) {
      puVar39 = (undefined *)0x0;
      pppppppuStack_120 = (undefined8 *******)0x3d25a40;
      while( true ) {
        if ((long)*(int *)(ppppppuVar32 + 3) <= (long)puVar39) {
          return pppppppuVar43;
        }
        lVar17 = *(long *)(lVar16 + 0x10);
        if (lVar17 == 0) break;
        uVar10 = 0;
        lVar18 = 0x20;
        while( true ) {
          ppppppuVar32 = pppppppuVar19[0x14];
          if ((int)*(uint *)(lVar17 + 0x18) <= (int)uVar10) {
            if (ppppppuVar32 == (undefined8 ******)0x0) goto code_r0x0152dc60;
            if ((undefined *)(ulong)*(uint *)(ppppppuVar32 + 3) <= puVar39) goto code_r0x0152dc84;
            pppppuVar45 = ppppppuVar32[(long)(puVar39 + 4)];
            if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (pppppuVar45 == (undefined8 *****)0x0) goto code_r0x0152dc60;
            *(undefined4 *)(pppppuVar45 + 2) = **(undefined4 **)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xb8);
            ppppppuVar32 = pppppppuVar19[0x14];
            if (ppppppuVar32 == (undefined8 ******)0x0) goto code_r0x0152dc60;
            if ((undefined *)(ulong)*(uint *)(ppppppuVar32 + 3) <= puVar39) goto code_r0x0152dc84;
            pppppuVar45 = ppppppuVar32[(long)(puVar39 + 4)];
            if (pppppuVar45 == (undefined8 *****)0x0) goto code_r0x0152dc60;
            pppppuVar45[3] = (undefined8 ****)**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            pppppuVar45 = ppppppuVar32[(long)(puVar39 + 4)];
            if (((pppppuVar45 == (undefined8 *****)0x0) ||
                (ppppuVar21 = pppppuVar45[4], ppppuVar21 == (undefined8 ****)0x0)) ||
               (lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(ppppuVar21,0), lVar16 == 0)) goto code_r0x0152dc60;
            uVar28 = 0;
            puVar38 = &UNK_0152dc54;
            goto code_r0x0322ef1c;
          }
          if (ppppppuVar32 == (undefined8 ******)0x0) goto code_r0x0152dc60;
          if ((undefined *)(ulong)*(uint *)(ppppppuVar32 + 3) <= puVar39) goto code_r0x0152dc84;
          if (ppppppuVar32[(long)(puVar39 + 4)] == (undefined8 *****)0x0) goto code_r0x0152dc60;
          iVar12 = *(int *)(ppppppuVar32[(long)(puVar39 + 4)] + 2);
          if (*(uint *)(lVar17 + 0x18) <= uVar10) {
            pppppppuVar43 = (undefined8 *******)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (iVar12 == *(int *)(*(long *)(lVar17 + 0x10) + lVar18)) break;
          uVar10 = uVar10 + 1;
          lVar17 = *(long *)(lVar16 + 0x10);
          lVar18 = lVar18 + 0xc;
          if (lVar17 == 0) goto code_r0x0152dc60;
        }
        puVar39 = puVar39 + 1;
        ppppppuVar32 = pppppppuVar19[0x14];
        if (ppppppuVar32 == (undefined8 ******)0x0) break;
      }
    }
  }
code_r0x0152dc60:
  pppppppuVar41 = (undefined8 *******)func_0x00f78af4();
  return pppppppuVar41;
}



// ============================================================
// RVA: 0x152d240 | Atlas.UI.Screens.VotingScreen.OnHostMigrationStarted
// ============================================================

/* WARNING: Possible PIC construction at 0x0152d384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0151cd74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152dc50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x0152d388) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *******
Atlas_UI_Screens_VotingScreen__OnHostMigrationStarted
          (undefined1 param_1 [16],float param_2,float param_3,undefined8 ******param_4)

{
  undefined8 ****ppppuVar1;
  char cVar2;
  ushort uVar3;
  undefined1 *puVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar12;
  long *plVar13;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined8 *******pppppppuVar14;
  long lVar15;
  undefined8 ******ppppppuVar16;
  long lVar17;
  undefined8 *******pppppppuVar18;
  long lVar19;
  undefined8 ******ppppppuVar20;
  undefined8 *puVar21;
  undefined8 **ppuVar22;
  undefined8 **ppuVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 **ppuVar28;
  undefined8 ***pppuVar29;
  code *pcVar30;
  ulong uVar31;
  ulong uVar32;
  int *piVar33;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 *****unaff_x21;
  undefined8 *****pppppuVar34;
  undefined8 *****pppppuVar35;
  undefined8 *******unaff_x22;
  undefined8 ****ppppuVar36;
  undefined8 *****unaff_x23;
  undefined8 *****pppppuVar37;
  undefined8 *******unaff_x24;
  undefined8 *******pppppppuVar38;
  undefined8 ****unaff_x25;
  undefined8 ****ppppuVar39;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******unaff_x29;
  undefined1 *puVar40;
  undefined *unaff_x30;
  undefined *puVar41;
  float fVar42;
  double dVar43;
  double dVar44;
  undefined *unaff_d8;
  undefined8 *******unaff_d9;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *******pppppppuStack_f0;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined8 *****pppppuStack_b8;
  undefined8 *******pppppppuStack_b0;
  undefined8 *****pppppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *******pppppppuStack_90;
  undefined *puStack_88;
  undefined8 *******pppppppuStack_60;
  undefined *puStack_58;
  
  pppppppuVar6 = (undefined8 *******)&stack0xffffffffffffffb0;
  if ((bRam0000000003eb4e86 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d64938);
    func_0x00f78a20(0x3d64940);
    func_0x00f78a20(0x3d29760);
    func_0x00f78a20(0x3d41350);
    func_0x00f78a20(0x3d41360);
    func_0x00f78a20(0x3d25a40);
    bRam0000000003eb4e86 = 1;
  }
  pppppppuVar14 = (undefined8 *******)func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.<>c__DisplayClass21_0_TypeInfo*/ uRam0000000003d29760);
  /*Atlas.UI.Screens.VotingScreen.<>c__DisplayClass21_0$$.ctor*/ func_0x0156debc(pppppppuVar14,0);
  pppppuVar34 = (undefined8 *****)0x3d29760;
  pppppppuStack_f0 = unaff_x22;
  pppppuVar37 = unaff_x23;
  pppppppuVar38 = unaff_x24;
  if (pppppppuVar14 == (undefined8 *******)0x0) {
LAB_0152d4dc:
    func_0x00f78af4();
  }
  else {
    pppppppuVar14[2] = param_4;
    pppppuVar34 = param_4[0x14];
    if (pppppuVar34 == (undefined8 *****)0x0) goto LAB_0152d4dc;
    if (*(int *)(pppppuVar34 + 3) < 1) {
      pppppuVar35 = (undefined8 *****)0x3d41350;
      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41350);
      pppppuVar34 = (undefined8 *****)0x3d41350;
      if (lVar15 != 0) {
        ppppppuVar16 = (undefined8 ******)/*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar15,0);
        pppppppuVar14[3] = ppppppuVar16;
        lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41350);
        pppppuVar34 = pppppuVar35;
        if (lVar15 != 0) {
          ppppppuVar16 = (undefined8 ******)/*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar15,1);
          pppppppuVar14[4] = ppppppuVar16;
          if ((pppppppuVar14[3] != (undefined8 ******)0x0) &&
             (pppppuVar35 = pppppppuVar14[3][2], pppppuVar35 != (undefined8 *****)0x0)) {
            /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(pppppuVar35,0);
            if ((pppppppuVar14[4] != (undefined8 ******)0x0) &&
               (pppppuVar35 = pppppppuVar14[4][2], pppppuVar35 != (undefined8 *****)0x0)) {
              /*Atlas.UI.UIAtlasButton$$RemoveAllEventListeners*/ func_0x01514dc4(pppppuVar35,0);
              if (pppppppuVar14[3] != (undefined8 ******)0x0) {
                pppppuVar37 = (undefined8 *****)0x3d1fa78;
                pppppppuVar38 = (undefined8 *******)0x3d64000;
                pppppuVar34 = pppppppuVar14[3][2];
                pppppppuStack_f0 = (undefined8 *******)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                /*System.Action$$.ctor*/ func_0x02924c80(pppppppuStack_f0,pppppppuVar14,uRam0000000003d64938,0);
                if (pppppuVar34 != (undefined8 *****)0x0) {
                  /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(pppppuVar34,pppppppuStack_f0,0);
                  if (pppppppuVar14[4] != (undefined8 ******)0x0) {
                    pppppppuVar38 = (undefined8 *******)0x3d64000;
                    pppppuVar34 = pppppppuVar14[4][2];
                    pppppppuStack_f0 = (undefined8 *******)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                    /*System.Action$$.ctor*/ func_0x02924c80(pppppppuStack_f0,pppppppuVar14,uRam0000000003d64940,0);
                    if (pppppuVar34 != (undefined8 *****)0x0) {
                      /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(pppppuVar34,pppppppuStack_f0,0);
                      lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_4,uRam0000000003d41360);
                      if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x10), lVar15 != 0)) {
                        uVar8 = *(uint *)(param_4 + 9);
                        goto Atlas_UI_AtlasUIManager__EnableInput;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0152d4dc;
    }
    pppppppuStack_f0 = (undefined8 *******)0x0;
    pppppuVar37 = (undefined8 *****)0x3d25a40;
    pppppppuVar38 = (undefined8 *******)0x3d24dd0;
    if (*(int *)(pppppuVar34 + 3) != 0) {
      unaff_x25 = pppppuVar34[4];
      if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      if (unaff_x25 != (undefined8 ****)0x0) {
        *(undefined4 *)(unaff_x25 + 2) = **(undefined4 **)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xb8);
        unaff_x25[3] = (undefined8 ***)**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        if ((unaff_x25[4] != (undefined8 ***)0x0) &&
           (lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x25[4],0), pppppuVar37 = (undefined8 *****)0x3d25a40,
           pppppppuVar38 = (undefined8 *******)0x3d24dd0, lVar15 != 0)) {
          uVar26 = 0;
          pppppppuVar38 = (undefined8 *******)&stack0xfffffffffffffff0;
          pppppuVar37 = (undefined8 *****)0x152d388;
          goto code_r0x0322ef1c;
        }
      }
      goto LAB_0152d4dc;
    }
  }
  uVar26 = func_0x00f78b24();
  lVar15 = func_0x00f78ac0(uVar26,0);
  puStack_58 = &Atlas_UI_Screens_VotingScreen__OnUpdate;
  pppppppuStack_60 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e87 & 1) == 0) {
    func_0x00f78a20(0x3d41350);
    bRam0000000003eb4e87 = 1;
  }
  if (*(undefined8 ********)(lVar15 + 0x90) == (undefined8 *******)0x0) {
    return (undefined8 *******)0x0;
  }
  if (*(long *)(lVar15 + 0x98) != 0) {
    if (*(long *)(*(long *)(lVar15 + 0x98) + 0x20) == 0) {
      return *(undefined8 ********)(lVar15 + 0x90);
    }
    fVar42 = (float)/*Atlas.UI.VotingManager$$GetSecondsLeftToVote*/ func_0x01529384();
    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar15,uRam0000000003d41350);
    if ((lVar17 != 0) &&
       (param_4 = *(undefined8 *******)(lVar17 + 0x80), param_4 != (undefined8 ******)0x0)) {
      pppppppuVar5 = (undefined8 *******)&uStack_a0;
      pppppppuVar6 = (undefined8 *******)&uStack_a0;
      pppppppuStack_90 = unaff_d9;
      puStack_88 = unaff_d8;
      if ((bRam0000000003eb4e03 & 1) == 0) {
        func_0x00f78a20(0x3d22910,0);
        func_0x00f78a20(0x3d230e0);
        func_0x00f78a20(0x3d7cca8);
        func_0x00f78a20(0x3d6d120);
        func_0x00f78a20(0x3d78fa8);
        bRam0000000003eb4e03 = 1;
      }
      pppppppuVar14 = (undefined8 *******)/*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(fVar42,0);
      iVar10 = (int)pppppppuVar14;
      if ((*(int *)((long)param_4 + 0x24) < 1 || *(int *)((long)param_4 + 0x24) < iVar10) ||
         (iVar10 == *(int *)(param_4 + 5))) {
        pppppppuStack_f0 = (undefined8 *******)0x3d22910;
        *(int *)(param_4 + 5) = iVar10;
        if (*(char *)(param_4 + 4) == '\0') {
          dVar44 = -(double)fVar42;
          param_3 = INFINITY;
          dVar43 = dVar44;
          if (fVar42 != INFINITY) {
            dVar43 = (double)fVar42;
          }
          uVar8 = (int)dVar43 % 0x3c;
          if ((int)uVar8 < 1) {
            uVar8 = 0;
          }
          pppppuVar34 = (undefined8 *****)(ulong)uVar8;
          pppppuVar37 = param_4[3];
          uStack_98 = CONCAT44(uStack_98._4_4_,(int)dVar43 / 0x3c);
          pppppppuVar14 = (undefined8 *******)func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_98);
          param_2 = SUB84(dVar44,0);
          uStack_a0 = CONCAT44(uVar8,(undefined4)uStack_a0);
          uVar26 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_a0 + 4);
          uVar26 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0:D2}:{1:D2}')*/ uRam0000000003d7cca8,pppppppuVar14,uVar26,0);
joined_r0x0151cec8:
          param_4 = (undefined8 ******)0x0;
          if (pppppuVar37 != (undefined8 *****)0x0) {
            pppppppuVar38 =
                 (undefined8 *******)
                 (*(code *)(*pppppuVar37)[0xab])(pppppuVar37,uVar26,(*pppppuVar37)[0xac]);
            return pppppppuVar38;
          }
        }
        else {
          pppppuVar34 = (undefined8 *****)0x3d230e0;
          pppppppuVar14 = (undefined8 *******)/*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(fVar42,0);
          if (((*(ushort *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8) != 0) {
            pppppuVar34 = (undefined8 *****)
                          /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8),
                                          /*STR('GENERIC_TIME_SECS')*/ uRam0000000003d6d120,0);
            pppppuVar37 = param_4[3];
            uStack_98 = CONCAT44((int)pppppppuVar14,(undefined4)uStack_98);
            uVar26 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_98 + 4);
            uVar26 = /*System.String$$Format*/ func_0x029bc688(pppppuVar34,uVar26,0);
            goto joined_r0x0151cec8;
          }
        }
        uVar26 = func_0x00f78af4();
        pppppuStack_a8 = (undefined8 *****)&Atlas_UI_UITimer__Show;
        pppppppuStack_b0 = &pppppppuStack_60;
        lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar26,0);
        if (lVar15 != 0) {
          uVar26 = 1;
          pppppppuVar38 = pppppppuStack_b0;
          pppppuVar37 = pppppuStack_a8;
code_r0x0322ef1c:
          *(undefined8 ********)((long)pppppppuVar6 + -0x30) = pppppppuStack_f0;
          *(undefined8 ******)((long)pppppppuVar6 + -0x28) = pppppuVar34;
          *(undefined8 ********)((long)pppppppuVar6 + -0x20) = pppppppuVar14;
          *(undefined8 *******)((long)pppppppuVar6 + -0x18) = param_4;
          *(undefined8 ********)((long)pppppppuVar6 + -0x10) = pppppppuVar38;
          *(undefined8 ******)((long)pppppppuVar6 + -8) = pppppuVar37;
          if (pcRam0000000003ebf4c0 == (code *)0x0) {
            pcRam0000000003ebf4c0 =
                 (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
          }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pppppppuVar38 = (undefined8 *******)(*pcRam0000000003ebf4c0)(lVar15,uVar26);
          return pppppppuVar38;
        }
        uVar26 = func_0x00f78af4();
        pppppuStack_b8 = (undefined8 *****)&Atlas_UI_UITimer__Hide;
        pppppppuStack_c0 = &pppppppuStack_b0;
        lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar26,0);
        if (lVar15 != 0) {
          uVar26 = 0;
          pppppppuVar6 = &pppppppuStack_b0;
          pppppppuVar38 = pppppppuStack_c0;
          pppppuVar37 = pppppuStack_b8;
          goto code_r0x0322ef1c;
        }
        lVar15 = func_0x00f78af4();
        pppppppuStack_f0 = (undefined8 *******)0x3d22910;
        puStack_c8 = &Atlas_UI_UILobbyInfoPanelBehaviour__OnGroupLeaderChangedJoined;
        pppppppuStack_d0 = &pppppppuStack_c0;
        if ((bRam0000000003eb4dfd & 1) == 0) {
          pppppppuStack_d0 = &pppppppuStack_c0;
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4dfd = 1;
        }
        if (((*(long *)(lVar15 + 0x68) == 0) ||
            (lVar17 = *(long *)(*(long *)(lVar15 + 0x68) + 0x28), lVar17 == 0)) ||
           (plVar13 = *(long **)(lVar17 + 0x30), plVar13 == (long *)0x0)) {
code_r0x0151d010:
          pppppppuVar38 = (undefined8 *******)func_0x00f78af4();
          if ((bRam0000000003eb4dfe & 1) == 0) {
            func_0x00f78a20(0x3d79000);
            bRam0000000003eb4dfe = 1;
          }
          pppppppuVar38[0xc] = /*STR('event:/UI/Front_End/GameCentre')*/ ppppppuRam0000000003d79000;
          *(undefined4 *)(pppppppuVar38 + 0xe) = 0xffffffff;
          if ((bRam0000000003ebf1b8 & 1) == 0) {
            func_0x00f78a20(0x3d23990,0);
            bRam0000000003ebf1b8 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          return pppppppuVar38;
        }
        iVar10 = (**(code **)(*plVar13 + 0x848))(plVar13,*(undefined8 *)(*plVar13 + 0x850));
        if (iVar10 == 0) {
          uVar8 = 0;
        }
        else {
          if (((*(long *)(lVar15 + 0x68) == 0) ||
              (lVar17 = *(long *)(*(long *)(lVar15 + 0x68) + 0x28), lVar17 == 0)) ||
             (plVar13 = *(long **)(lVar17 + 0x30), plVar13 == (long *)0x0)) goto code_r0x0151d010;
          uVar8 = (**(code **)(*plVar13 + 0x858))(plVar13,*(undefined8 *)(*plVar13 + 0x860));
        }
        uVar26 = *(undefined8 *)(lVar15 + 0x58);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        pppppppuVar38 = (undefined8 *******)/*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar26,0);
        if ((uVar8 & (uint)pppppppuVar38) == 0) {
          return pppppppuVar38;
        }
        pppppppuVar38 = *(undefined8 ********)(lVar15 + 0x60);
        pppppppuVar5 = &pppppppuStack_c0;
        pppppppuVar18 = pppppppuStack_d0;
        puVar41 = puStack_c8;
      }
      else {
        pppppppuVar38 = /*STR('event:/UI/Front_End/ClockTick')*/ pppppppuRam0000000003d78fa8;
        pppppppuVar18 = &pppppppuStack_60;
        puVar41 = &UNK_0151cd78;
      }
      *(undefined8 ********)((long)pppppppuVar5 + -0x30) = pppppppuStack_f0;
      *(undefined8 ******)((long)pppppppuVar5 + -0x28) = pppppuVar34;
      *(undefined8 ********)((long)pppppppuVar5 + -0x20) = pppppppuVar14;
      *(undefined8 *******)((long)pppppppuVar5 + -0x18) = param_4;
      *(undefined8 ********)((long)pppppppuVar5 + -0x10) = pppppppuVar18;
      *(undefined **)((long)pppppppuVar5 + -8) = puVar41;
      uVar26 = 0x3eb4000;
      pppppppuVar14 = pppppppuVar38;
      if ((bRam0000000003eb4db6 & 1) == 0) {
        func_0x00f78a20(0x3d2faf8);
        func_0x00f78a20(0x3d2fb00);
        pppppppuVar14 = (undefined8 *******)func_0x00f78a20(0x3d25580);
        bRam0000000003eb4db6 = 1;
      }
      if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
        return pppppppuVar14;
      }
      lVar15 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
      if (lVar15 != 0) {
        pppppppuVar14 =
             (undefined8 *******)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar15,pppppppuVar38,uRam0000000003d2faf8);
        if ((int)pppppppuVar14 == 0) {
          return pppppppuVar14;
        }
        if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
            (lVar15 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar15 != 0)) &&
           (pppppppuVar14 =
                 (undefined8 *******)/*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar15,pppppppuVar38,uRam0000000003d2fb00),
           pppppppuVar14 != (undefined8 *******)0x0)) {
          *(undefined8 *)((long)pppppppuVar5 + -0x20) = *(undefined8 *)((long)pppppppuVar5 + -0x20);
          *(undefined8 *)((long)pppppppuVar5 + -0x18) = *(undefined8 *)((long)pppppppuVar5 + -0x18);
          *(undefined8 *)((long)pppppppuVar5 + -0x10) = *(undefined8 *)((long)pppppppuVar5 + -0x10);
          *(undefined8 *)((long)pppppppuVar5 + -8) = *(undefined8 *)((long)pppppppuVar5 + -8);
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,pppppppuVar14,0,0);
          return pppppppuVar14;
        }
      }
      ppppppuVar16 = (undefined8 ******)func_0x00f78af4();
      *(undefined8 ********)((long)pppppppuVar5 + -0x70) = unaff_d9;
      *(ulong *)((long)pppppppuVar5 + -0x68) = (ulong)(uint)fVar42;
      *(undefined8 ********)((long)pppppppuVar5 + -0x60) = pppppppuStack_f0;
      *(undefined8 *)((long)pppppppuVar5 + -0x58) = 0x3eb4000;
      *(undefined8 *)((long)pppppppuVar5 + -0x50) = 0x3d25580;
      *(undefined8 ********)((long)pppppppuVar5 + -0x48) = pppppppuVar38;
      *(undefined1 **)((long)pppppppuVar5 + -0x40) = (undefined1 *)((long)pppppppuVar5 + -0x10);
      *(undefined **)((long)pppppppuVar5 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
      if ((bRam0000000003eb4d8b & 1) == 0) {
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb4d8b = 1;
      }
      plVar13 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(ppppppuVar16,0);
      if ((plVar13 != (long *)0x0) && (*plVar13 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
        uVar12 = func_0x00f78e5c(plVar13);
        *(long **)((long)pppppppuVar5 + -0x90) = plVar13;
        *(undefined8 *******)((long)pppppppuVar5 + -0x88) = ppppppuVar16;
        *(undefined1 **)((long)pppppppuVar5 + -0x80) = (undefined1 *)((long)pppppppuVar5 + -0x40);
        *(undefined **)((long)pppppppuVar5 + -0x78) =
             &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
        lVar15 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
        uVar25 = *(undefined8 *)((long)pppppppuVar5 + -0x90);
        *(undefined8 ********)((long)pppppppuVar5 + -0xa0) = pppppppuStack_f0;
        *(undefined8 *)((long)pppppppuVar5 + -0x98) = 0x3eb4000;
        *(undefined8 *)((long)pppppppuVar5 + -0x90) = uVar25;
        *(undefined8 *)((long)pppppppuVar5 + -0x88) = *(undefined8 *)((long)pppppppuVar5 + -0x88);
        *(undefined8 *)((long)pppppppuVar5 + -0x80) = *(undefined8 *)((long)pppppppuVar5 + -0x80);
        *(undefined8 *)((long)pppppppuVar5 + -0x78) = *(undefined8 *)((long)pppppppuVar5 + -0x78);
        if (lVar15 == 0) {
          func_0x00f78a24(0x3d23938,0,0);
          uVar24 = func_0x00f78aec();
          uVar12 = func_0x00f78a24(0x3d7b500);
          /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar24,uVar12,0);
        }
        else {
          uVar26 = 0x3ec0000;
          if (pcRam0000000003ec01d0 == (code *)0x0) {
            pcRam0000000003ec01d0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                        );
          }
          uVar27 = (*pcRam0000000003ec01d0)(uVar12);
          if ((uVar27 & 1) != 0) {
            if (pcRam0000000003ec01e0 == (code *)0x0) {
              pcRam0000000003ec01e0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pppppppuVar38 = (undefined8 *******)(*pcRam0000000003ec01e0)(uVar12,lVar15);
            return pppppppuVar38;
          }
          func_0x00f78a24(0x3d1fce8);
          uVar24 = func_0x00f78aec();
          uVar25 = func_0x00f78a24(0x3d6af80);
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar24,uVar25,0);
          uVar25 = uVar12;
        }
        uVar12 = func_0x00f78a24(0x3d5a8a8);
        auVar45 = func_0x00f78ac0(uVar24,uVar12);
        *(undefined8 ********)((long)pppppppuVar5 + -0xd0) = pppppppuStack_f0;
        *(undefined8 *)((long)pppppppuVar5 + -200) = uVar26;
        *(undefined8 *)((long)pppppppuVar5 + -0xc0) = uVar25;
        *(undefined8 *)((long)pppppppuVar5 + -0xb8) = uVar24;
        *(undefined1 **)((long)pppppppuVar5 + -0xb0) = (undefined1 *)((long)pppppppuVar5 + -0x80);
        *(undefined **)((long)pppppppuVar5 + -0xa8) =
             &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pppppppuVar38 = (undefined8 *******)(*pcRam0000000003ec01e0)(auVar45._0_8_,auVar45._8_8_);
        return pppppppuVar38;
      }
      fVar42 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar26 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar42 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                               plVar13,4,0);
      pppppppuVar38 = (undefined8 *******)/*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar26,uRam0000000003d5e780);
      *(undefined8 *)((long)pppppppuVar5 + -0xa0) = 0x3d5e780;
      *(undefined8 *)((long)pppppppuVar5 + -0x98) = 0x3d5e868;
      *(long **)((long)pppppppuVar5 + -0x90) = plVar13;
      *(undefined8 *******)((long)pppppppuVar5 + -0x88) = ppppppuVar16;
      *(undefined1 **)((long)pppppppuVar5 + -0x80) = (undefined1 *)((long)pppppppuVar5 + -0x40);
      *(undefined **)((long)pppppppuVar5 + -0x78) = &UNK_01513b44;
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,ppppppuVar16,uRam0000000003d5e868);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((pppppppuVar38 != (undefined8 *******)0x0) && (*(char *)(pppppppuVar38 + 0x1d) != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar10 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar10 != 0) {
          lVar15 = func_0x00f78adc(ppppppuVar16,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar27 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar15,0,0);
          if ((uVar27 & 1) == 0) {
            if (ppppppuVar16 == (undefined8 ******)0x0) goto code_r0x018eef34;
            ppppppuVar20 = (undefined8 ******)
                           (*(code *)(*ppppppuVar16)[0x2d])(ppppppuVar16,(*ppppppuVar16)[0x2e]);
          }
          else {
            if (lVar15 == 0) {
code_r0x018eef34:
              auVar45 = func_0x00f78af4();
              pppppppuVar14 = auVar45._0_8_;
              *(undefined8 *)((long)pppppppuVar5 + -0xd0) = 0x3d5e780;
              *(long *)((long)pppppppuVar5 + -200) = lVar15;
              *(undefined8 *******)((long)pppppppuVar5 + -0xc0) = ppppppuVar16;
              *(undefined8 ********)((long)pppppppuVar5 + -0xb8) = pppppppuVar38;
              *(undefined1 **)((long)pppppppuVar5 + -0xb0) =
                   (undefined1 *)((long)pppppppuVar5 + -0x80);
              *(undefined **)((long)pppppppuVar5 + -0xa8) =
                   &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((pppppppuVar14 != (undefined8 *******)0x0) &&
                 (*(char *)(pppppppuVar14 + 0x1d) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar2 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(pppppppuVar14,auVar45._8_8_,cVar2 != '\0',0);
              }
              return pppppppuVar14;
            }
            ppppppuVar20 = (undefined8 ******)/*UnityEngine.Object$$get_name*/ func_0x03244608(lVar15,0);
          }
          pppppppuVar38[0x19] = ppppppuVar20;
        }
        pppppppuVar38[9] = ppppppuVar16;
      }
      return pppppppuVar38;
    }
  }
  lVar17 = func_0x00f78af4();
  uStack_a0 = 0x3eb4000;
  puStack_88 = &Atlas_UI_Screens_VotingScreen__OnAfterExit;
  pppppppuStack_c0 = pppppppuVar38;
  pppppuStack_b8 = pppppuVar37;
  pppppppuStack_b0 = pppppppuStack_f0;
  pppppuStack_a8 = pppppuVar34;
  uStack_98 = lVar15;
  pppppppuStack_90 = &pppppppuStack_60;
  if ((bRam0000000003eb4e88 & 1) == 0) {
    func_0x00f78a20(0x3d29fa0);
    func_0x00f78a20(0x3d2a248);
    func_0x00f78a20(0x3d1b520);
    func_0x00f78a20(0x3d1b3d8);
    func_0x00f78a20(0x3d29730);
    func_0x00f78a20(0x3d41360);
    func_0x00f78a20(0x3d60128);
    func_0x00f78a20(0x3d60138);
    func_0x00f78a20(0x3d60140);
    bRam0000000003eb4e88 = 1;
  }
  uVar27 = *(ulong *)(lVar17 + 0x90);
  if (uVar27 != 0) {
    uVar25 = *(undefined8 *)(uVar27 + 0xf0);
    uVar26 = func_0x00f78aec(/*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730);
    /*Atlas.UI.VotingManager.OnVoteStageChanged$$.ctor*/ func_0x0156d908(uVar26,lVar17,uRam0000000003d60138,0);
    plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar25,uVar26,0);
    if ((plVar13 != (long *)0x0) && (*plVar13 != /*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730)) goto code_r0x0152d7d0;
    *(long **)(uVar27 + 0xf0) = plVar13;
  }
  if ((*(long *)(lVar17 + 0x98) == 0) ||
     (lVar15 = *(long *)(*(long *)(lVar17 + 0x98) + 0x20), lVar15 == 0)) {
code_r0x0152d774:
    if (*(long *)(lVar17 + 0x88) != 0) {
      if (*(long *)(lVar17 + 0x78) == 0) goto code_r0x0152d7cc;
      Core_Application_CoroutineRunner__StopCoroutine
                (*(long *)(lVar17 + 0x78),*(long *)(lVar17 + 0x88),0);
    }
    lVar15 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar17,uRam0000000003d41360);
    if ((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x10), lVar15 != 0)) {
      uVar8 = *(uint *)(lVar17 + 0x48);
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffff80;
      unaff_x19 = uStack_98;
      unaff_x20 = uStack_a0;
      unaff_x21 = pppppuStack_a8;
      unaff_x22 = pppppppuStack_b0;
      unaff_x23 = pppppuStack_b8;
      unaff_x24 = pppppppuStack_c0;
      unaff_x29 = pppppppuStack_90;
      unaff_x30 = puStack_88;
Atlas_UI_AtlasUIManager__EnableInput:
      uVar26 = 1;
      uVar27 = (ulong)uVar8;
      *(undefined8 ********)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      pppppuVar34 = *(undefined8 ******)(lVar15 + 0x10);
      if (pppppuVar34 == (undefined8 *****)0x0) {
        auVar45 = func_0x00f78af4();
        *(undefined1 **)((long)register0x00000008 + -0x20) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)register0x00000008 + -0x18) =
             &Atlas_UI_AtlasUIManager__SetScreenVisible;
        lVar15 = *(long *)(auVar45._0_8_ + 0x10);
        auVar45._8_8_ = auVar45._8_8_;
        auVar45._0_8_ = lVar15;
        if (lVar15 == 0) {
          pppppppuVar38 = (undefined8 *******)func_0x00f78af4();
          *(undefined8 ********)((long)register0x00000008 + -0x50) = unaff_x22;
          *(undefined8 ******)((long)register0x00000008 + -0x48) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0x40) = unaff_x20;
          *(long *)((long)register0x00000008 + -0x38) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x30) =
               (undefined1 *)((long)register0x00000008 + -0x20);
          *(undefined **)((long)register0x00000008 + -0x28) = &Atlas_UI_AtlasUIManager___ctor;
          if ((bRam0000000003eb4871 & 1) == 0) {
            func_0x00f78a20(0x3d2fb80);
            func_0x00f78a20(0x3d1c478);
            bRam0000000003eb4871 = 1;
          }
          ppppppuVar16 = (undefined8 ******)func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
          /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(ppppppuVar16,uRam0000000003d2fb80);
          pppppppuVar38[6] = ppppppuVar16;
          return pppppppuVar38;
        }
        puVar4 = (undefined1 *)((long)register0x00000008 + -0x10);
        puVar40 = *(undefined1 **)((long)register0x00000008 + -0x20);
        puVar41 = *(undefined **)((long)register0x00000008 + -0x18);
      }
      else {
        puVar4 = (undefined1 *)((long)register0x00000008 + -0x40);
        *(undefined8 ********)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 ******)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 ********)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 ******)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        puVar40 = (undefined1 *)((long)register0x00000008 + -0x10);
        unaff_x19 = 1;
        unaff_x22 = (undefined8 *******)0x3ebc000;
        if ((bRam0000000003ebc651 & 1) == 0) {
          func_0x00f78a20(0x3d2a5c0,uVar27,1,0);
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc651 = 1;
        }
        if (pppppuVar34[0xd] != (undefined8 ****)0x0) {
          uVar26 = 0;
          pppppppuVar38 = (undefined8 *******)/*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(pppppuVar34[0xd],uVar27,0,0);
          ppppuVar36 = pppppuVar34[0xe];
          unaff_x22 = (undefined8 *******)0x0;
          if (ppppuVar36 != (undefined8 ****)0x0) {
            if (*(uint *)(ppppuVar36 + 3) <= uVar8) {
              pppppppuVar38 = (undefined8 *******)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if ((ppppuVar36[2][(long)(int)uVar8 * 5 + 5] == (undefined8 **)0x0) ||
               (unaff_x22 = (undefined8 *******)pppppuVar34[6], unaff_x22 == (undefined8 *******)0x0
               )) {
              return pppppppuVar38;
            }
            ppppuVar36 = pppppuVar34[0xe];
            pppppuVar34 = (undefined8 *****)0x0;
            if (ppppuVar36 != (undefined8 ****)0x0) {
              if (*(uint *)(ppppuVar36 + 3) <= uVar8) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              ppuVar28 = ppppuVar36[2][(long)(int)uVar8 * 5 + 5];
              *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
              *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
              *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
              *(undefined8 *****)((long)register0x00000008 + -0x48) = unaff_x25;
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
              *(undefined8 *)((long)register0x00000008 + -8) =
                   *(undefined8 *)((long)register0x00000008 + -8);
              *(undefined8 ********)((long)register0x00000008 + -0x68) = unaff_x22;
              ppppppuVar16 = unaff_x22[0xd];
              if (ppppppuVar16 == (undefined8 ******)0x0) {
                ppppppuVar16 = (undefined8 ******)((long)register0x00000008 + -0x68);
                pppppuVar34 = (undefined8 *****)0x1;
              }
              else {
                pppppuVar34 = ppppppuVar16[3];
                if (pppppuVar34 == (undefined8 *****)0x0) {
                  return unaff_x22;
                }
                ppppppuVar16 = ppppppuVar16 + 4;
              }
              pppppuVar37 = (undefined8 *****)0x0;
              do {
                pppppuVar35 = ppppppuVar16[(long)pppppuVar37];
                ppppuVar39 = pppppuVar35[2];
                ppppuVar36 = pppppuVar35[4];
                ppppuVar1 = pppppuVar35[5];
                if (*(short *)(ppppuVar1 + 9) == -1) {
                  func_0x00f78ad8(ppppuVar1);
                }
                iVar10 = func_0x00f78a4c(ppppuVar1);
                bVar7 = *(char *)((long)ppppuVar1 + 0x4a) == '\x03';
                if (iVar10 == 0) {
                  if (bVar7) {
                    if (ppppuVar36 == (undefined8 ****)0x0) {
code_r0x01e71bbc:
                      pppppppuVar38 =
                           (undefined8 *******)(*(code *)ppppuVar39)(ppuVar28,uVar27,1,ppppuVar1);
                    }
                    else {
                      if (((*(short *)(ppppuVar1 + 9) == -1) ||
                          ((*(byte *)((long)*ppppuVar36 + 0x115) & 1) != 0)) ||
                         (unaff_x22[3] == (undefined8 ******)0x0)) goto code_r0x01e71aac;
                      iVar10 = func_0x00f78a44(ppppuVar1);
                      iVar11 = func_0x00f78ec0(ppppuVar1);
                      if (iVar10 == 0) {
                        uVar3 = *(ushort *)(ppppuVar1 + 9);
                        uVar31 = (ulong)uVar3;
                        if (iVar11 == 0) {
                          pppppppuVar38 =
                               (undefined8 *******)
                               (*(code *)(*ppppuVar36)[uVar31 * 2 + 0x27])
                                         (ppppuVar36,ppuVar28,uVar27,1,
                                          (*ppppuVar36)[uVar31 * 2 + 0x28]);
                          goto code_r0x01e71bd0;
                        }
                        puVar21 = (undefined8 *)func_0x00f78a48(ppppuVar1);
                        pppuVar29 = *ppppuVar36;
                        uVar32 = (ulong)*(ushort *)((long)pppuVar29 + 0x12a);
                        if (uVar32 != 0) {
                          ppuVar22 = pppuVar29[0x16] + 1;
                          do {
                            if (ppuVar22[0xffffffffffffffff] == puVar21) {
                              pppuVar29 = pppuVar29 +
                                          (long)(int)(*(int *)ppuVar22 + (uint)uVar3) * 2 + 0x27;
                              goto code_r0x01e71d74;
                            }
                            ppuVar22 = ppuVar22 + 2;
                            uVar32 = uVar32 - 1;
                          } while (uVar32 != 0);
                        }
                        pppuVar29 = (undefined8 ***)func_0x00fac1f0(ppppuVar36,puVar21,uVar31);
code_r0x01e71d74:
                        ppuVar22 = *pppuVar29;
                        ppuVar23 = pppuVar29[1];
                      }
                      else {
                        if (iVar11 == 0) {
                          ppuVar22 = (*ppppuVar36)[(ulong)*(ushort *)(ppppuVar1 + 9) * 2 + 0x28];
                        }
                        else {
                          pppuVar29 = *ppppuVar36;
                          uVar31 = (ulong)*(ushort *)((long)pppuVar29 + 0x12a);
                          if (uVar31 != 0) {
                            ppuVar22 = pppuVar29[0x16] + 1;
                            do {
                              if ((undefined8 ***)ppuVar22[0xffffffffffffffff] == ppppuVar1[3]) {
                                pppuVar29 = pppuVar29 +
                                            (long)(int)(*(int *)ppuVar22 +
                                                       (uint)*(ushort *)(ppppuVar1 + 9)) * 2 + 0x27;
                                goto code_r0x01e71d4c;
                              }
                              ppuVar22 = ppuVar22 + 2;
                              uVar31 = uVar31 - 1;
                            } while (uVar31 != 0);
                          }
                          pppuVar29 = (undefined8 ***)func_0x00fac1f0(ppppuVar36);
code_r0x01e71d4c:
                          ppuVar22 = pppuVar29[1];
                        }
                        ppuVar23 = (undefined8 **)func_0x00f78acc(ppuVar22,ppppuVar1);
                        ppuVar22 = (undefined8 **)*ppuVar23;
                      }
                      pppppppuVar38 =
                           (undefined8 *******)
                           (*(code *)ppuVar22)(ppppuVar36,ppuVar28,uVar27,1,ppuVar23);
                    }
                  }
                  else {
                    if ((*(short *)(ppppuVar1 + 9) == -1) ||
                       (unaff_x22[3] == (undefined8 ******)0x0)) goto code_r0x01e71bbc;
                    iVar10 = func_0x00f78a44(ppppuVar1);
                    iVar11 = func_0x00f78ec0(ppppuVar1);
                    if (iVar10 == 0) {
                      uVar3 = *(ushort *)(ppppuVar1 + 9);
                      uVar31 = (ulong)uVar3;
                      if (iVar11 == 0) {
                        pppppppuVar38 =
                             (undefined8 *******)
                             (*(code *)(*ppuVar28)[uVar31 * 2 + 0x27])
                                       (ppuVar28,uVar27,1,(*ppuVar28)[uVar31 * 2 + 0x28]);
                        goto code_r0x01e71bd0;
                      }
                      lVar15 = func_0x00f78a48(ppppuVar1);
                      puVar21 = *ppuVar28;
                      uVar32 = (ulong)*(ushort *)((long)puVar21 + 0x12a);
                      if (uVar32 != 0) {
                        piVar33 = (int *)(puVar21[0x16] + 8);
                        do {
                          if (*(long *)(piVar33 + -2) == lVar15) {
                            puVar21 = puVar21 + (long)(int)(*piVar33 + (uint)uVar3) * 2U + 0x27;
                            goto code_r0x01e71d00;
                          }
                          piVar33 = piVar33 + 4;
                          uVar32 = uVar32 - 1;
                        } while (uVar32 != 0);
                      }
                      puVar21 = (undefined8 *)func_0x00fac1f0(ppuVar28,lVar15,uVar31);
code_r0x01e71d00:
                      pcVar30 = (code *)*puVar21;
                      puVar21 = (undefined8 *)puVar21[1];
                    }
                    else {
                      if (iVar11 == 0) {
                        uVar26 = (*ppuVar28)[(ulong)*(ushort *)(ppppuVar1 + 9) * 2 + 0x28];
                      }
                      else {
                        puVar21 = *ppuVar28;
                        uVar31 = (ulong)*(ushort *)((long)puVar21 + 0x12a);
                        if (uVar31 != 0) {
                          piVar33 = (int *)(puVar21[0x16] + 8);
                          do {
                            if (*(undefined8 ****)(piVar33 + -2) == ppppuVar1[3]) {
                              puVar21 = puVar21 + (long)(int)(*piVar33 +
                                                             (uint)*(ushort *)(ppppuVar1 + 9)) * 2U
                                                  + 0x27;
                              goto code_r0x01e71cd8;
                            }
                            piVar33 = piVar33 + 4;
                            uVar31 = uVar31 - 1;
                          } while (uVar31 != 0);
                        }
                        puVar21 = (undefined8 *)func_0x00fac1f0(ppuVar28);
code_r0x01e71cd8:
                        uVar26 = puVar21[1];
                      }
                      puVar21 = (undefined8 *)func_0x00f78acc(uVar26,ppppuVar1);
                      pcVar30 = (code *)*puVar21;
                    }
                    pppppppuVar38 = (undefined8 *******)(*pcVar30)(ppuVar28,uVar27,1,puVar21);
                  }
                }
                else {
                  if (bVar7) goto code_r0x01e71bbc;
code_r0x01e71aac:
                  pppppppuVar38 =
                       (undefined8 *******)
                       (*(code *)ppppuVar39)(ppppuVar36,ppuVar28,uVar27,1,ppppuVar1);
                }
code_r0x01e71bd0:
                pppppuVar37 = (undefined8 *****)((long)pppppuVar37 + 1);
                if (pppppuVar37 == pppppuVar34) {
                  return pppppppuVar38;
                }
              } while( true );
            }
          }
        }
        puVar41 = &Core_UI2_UIManager__SetScreenVisible;
        auVar45 = func_0x00f78af4();
        unaff_x20 = uVar27;
        unaff_x21 = pppppuVar34;
      }
      pppppppuVar14 = auVar45._0_8_;
      *(undefined8 ********)(puVar4 + -0x30) = unaff_x22;
      *(undefined8 ******)(puVar4 + -0x28) = unaff_x21;
      *(ulong *)(puVar4 + -0x20) = unaff_x20;
      *(long *)(puVar4 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar4 + -0x10) = puVar40;
      *(undefined **)(puVar4 + -8) = puVar41;
      pppppppuVar38 = pppppppuVar14;
      if ((bRam0000000003ebc652 & 1) == 0) {
        pppppppuVar38 = (undefined8 *******)func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc652 = 1;
      }
      ppppppuVar16 = pppppppuVar14[0xe];
      if (ppppppuVar16 != (undefined8 ******)0x0) {
        uVar8 = auVar45._8_4_;
        if (*(uint *)(ppppppuVar16 + 3) <= uVar8) {
          pppppppuVar38 = (undefined8 *******)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (ppppppuVar16[2][(long)(int)uVar8 * 5 + 5] == (undefined8 ****)0x0) {
          return pppppppuVar38;
        }
        ppppppuVar16 = pppppppuVar14[0xe];
        if (ppppppuVar16 != (undefined8 ******)0x0) {
          if (*(uint *)(ppppppuVar16 + 3) <= uVar8) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if ((ppppppuVar16[2][(long)(int)uVar8 * 5 + 5] != (undefined8 ****)0x0) &&
             (pppuVar29 = ppppppuVar16[2][(long)(int)uVar8 * 5 + 5][5],
             pppuVar29 != (undefined8 ***)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pppppppuVar38 =
                 (undefined8 *******)
                 (*(code *)(*pppuVar29)[0x2f])(pppuVar29,uVar26,(*pppuVar29)[0x30]);
            return pppppppuVar38;
          }
        }
      }
      auVar46 = func_0x00f78af4();
      uVar25 = auVar46._0_8_;
      *(long *)(puVar4 + -0x50) = auVar45._8_8_;
      *(undefined8 *)(puVar4 + -0x48) = uVar26;
      *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
      *(undefined **)(puVar4 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
      *(undefined8 *)(puVar4 + -0x68) = 0;
      *(undefined8 *)(puVar4 + -0x70) = 0;
      *(undefined8 *)(puVar4 + -0x58) = 0;
      *(undefined8 *)(puVar4 + -0x60) = 0;
      pppppppuVar38 = (undefined8 *******)/*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar25,auVar46._8_8_,puVar4 + -0x70);
      if ((int)pppppppuVar38 != 0) {
        /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar25,*(undefined8 *)(puVar4 + -0x60),*(undefined8 *)(puVar4 + -0x58));
        *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(puVar4 + -0x68);
        *(undefined8 *)(puVar4 + -0x90) = *(undefined8 *)(puVar4 + -0x70);
        *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x58);
        *(undefined8 *)(puVar4 + -0x80) = *(undefined8 *)(puVar4 + -0x60);
        pppppppuVar38 = (undefined8 *******)/*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar25,puVar4 + -0x90,1);
      }
      return pppppppuVar38;
    }
  }
  else {
    uVar27 = *(ulong *)(lVar15 + 0x10);
    if (uVar27 != 0) {
      uVar25 = *(undefined8 *)(uVar27 + 0x48);
      uVar26 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar26,lVar17,uRam0000000003d60140,uRam0000000003d2a248);
      plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar25,uVar26,0);
      if ((plVar13 != (long *)0x0) && (*plVar13 != /*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520)) goto code_r0x0152d7d0;
      *(long **)(uVar27 + 0x48) = plVar13;
      if ((*(long *)(lVar17 + 0x98) != 0) &&
         ((lVar15 = *(long *)(*(long *)(lVar17 + 0x98) + 0x20), lVar15 != 0 &&
          (uVar27 = *(ulong *)(lVar15 + 0x10), uVar27 != 0)))) {
        uVar25 = *(undefined8 *)(uVar27 + 0x90);
        uVar26 = func_0x00f78aec(/*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8);
        /*System.Action<bool>$$.ctor*/ func_0x01b42d40(uVar26,lVar17,uRam0000000003d60128,uRam0000000003d29fa0);
        plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar25,uVar26,0);
        if ((plVar13 != (long *)0x0) && (*plVar13 != /*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8)) goto code_r0x0152d7d0;
        *(long **)(uVar27 + 0x90) = plVar13;
        goto code_r0x0152d774;
      }
    }
  }
code_r0x0152d7cc:
  func_0x00f78af4();
code_r0x0152d7d0:
  auVar45 = func_0x00f78e5c();
  param_4 = auVar45._8_8_;
  pppppppuVar14 = auVar45._0_8_;
  pppppppuVar6 = (undefined8 *******)&uStack_130;
  puStack_c8 = &Atlas_UI_Screens_VotingScreen__OnVoteUpdate;
  pppppppuVar38 = &pppppppuStack_d0;
  pppppppuVar18 = pppppppuVar14;
  pppppppuStack_d0 = &pppppppuStack_90;
  if ((bRam0000000003eb4e89 & 1) == 0) {
    func_0x00f78a20(0x3d3b688);
    func_0x00f78a20(0x3d3b690);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25a40);
    func_0x00f78a20(0x3d70ba8);
    func_0x00f78a20(0x3d65ed8);
    pppppppuVar18 = (undefined8 *******)func_0x00f78a20(0x3d662b0);
    bRam0000000003eb4e89 = 1;
  }
  uStack_130 = 0;
  uStack_128 = 0;
  if ((param_4 != (undefined8 ******)0x0) &&
     (pppppuVar34 = param_4[2], pppppuVar34 != (undefined8 *****)0x0)) {
    uVar31 = (ulong)*(uint *)(pppppuVar34 + 3);
    if (0 < (int)*(uint *)(pppppuVar34 + 3)) {
      lVar15 = 0;
      uVar32 = 0;
      do {
        if ((uVar31 & 0xffffffff) <= uVar32) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar9 = /*Atlas.UI.Screens.VotingScreen$$GetVoteInfoIndex*/ func_0x0152dc98(pppppppuVar14,*(undefined4 *)((long)pppppuVar34[2] + lVar15 + 0x20))
        ;
        uStack_128 = CONCAT44(uVar9,(undefined4)uStack_128);
        ppppppuVar16 = pppppppuVar14[0x12];
        plVar13 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,6);
        if (plVar13 == (long *)0x0) goto code_r0x0152dc60;
        if ((/*STR('OnVoteUpdate ')*/ lRam0000000003d70ba8 != 0) &&
           (lVar17 = func_0x00f78adc(/*STR('OnVoteUpdate ')*/ lRam0000000003d70ba8,*(undefined8 *)(*plVar13 + 0x40)),
           lVar17 == 0)) goto code_r0x0152dc90;
        if ((int)plVar13[3] == 0) {
code_r0x0152dc84:
          uVar26 = func_0x00f78b24();
          do {
            func_0x00f78ac0(uVar26,0);
code_r0x0152dc90:
            uVar26 = func_0x00f78b14();
          } while( true );
        }
        plVar13[4] = /*STR('OnVoteUpdate ')*/ lRam0000000003d70ba8;
        pppppuVar34 = param_4[2];
        if (pppppuVar34 == (undefined8 *****)0x0) goto code_r0x0152dc60;
        if (*(uint *)(pppppuVar34 + 3) <= uVar32) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uStack_130 = *(undefined8 *)((long)pppppuVar34[2] + lVar15 + 0x20);
        uStack_128 = CONCAT44(uStack_128._4_4_,*(undefined4 *)((long)pppppuVar34[2] + lVar15 + 0x28)
                             );
        lVar17 = /*System.UInt32$$ToString*/ func_0x02a0b3d0(&uStack_130,0);
        if ((lVar17 != 0) &&
           (lVar19 = func_0x00f78adc(lVar17,*(undefined8 *)(*plVar13 + 0x40)), lVar19 == 0))
        goto code_r0x0152dc90;
        uVar8 = (uint)plVar13[3];
        if ((plVar13[3] & 0xfffffffeU) == 0) goto code_r0x0152dc84;
        plVar13[5] = lVar17;
        if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
          lVar17 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar17 == 0) goto code_r0x0152dc90;
          uVar8 = (uint)plVar13[3];
        }
        if (uVar8 < 3) goto code_r0x0152dc84;
        plVar13[6] = /*STR(' ')*/ lRam0000000003d65ed8;
        pppppuVar34 = param_4[2];
        if (pppppuVar34 == (undefined8 *****)0x0) goto code_r0x0152dc60;
        if (*(uint *)(pppppuVar34 + 3) <= uVar32) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uStack_130 = *(undefined8 *)((long)pppppuVar34[2] + lVar15 + 0x20);
        uStack_128 = CONCAT44(uStack_128._4_4_,*(undefined4 *)((long)pppppuVar34[2] + lVar15 + 0x28)
                             );
        lVar17 = /*System.Int16$$ToString*/ func_0x02ae8e6c((ulong)&uStack_130 | 4,0);
        if ((lVar17 != 0) &&
           (lVar19 = func_0x00f78adc(lVar17,*(undefined8 *)(*plVar13 + 0x40)), lVar19 == 0))
        goto code_r0x0152dc90;
        uVar8 = (uint)plVar13[3];
        if ((plVar13[3] & 0xfffffffcU) == 0) goto code_r0x0152dc84;
        plVar13[7] = lVar17;
        if (/*STR(' index ')*/ lRam0000000003d662b0 != 0) {
          lVar17 = func_0x00f78adc(/*STR(' index ')*/ lRam0000000003d662b0,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar17 == 0) goto code_r0x0152dc90;
          uVar8 = (uint)plVar13[3];
        }
        if (uVar8 < 5) goto code_r0x0152dc84;
        plVar13[8] = /*STR(' index ')*/ lRam0000000003d662b0;
        lVar17 = /*System.Int32$$ToString*/ func_0x02ae9b8c((long)&uStack_128 + 4,0);
        if ((lVar17 != 0) &&
           (lVar19 = func_0x00f78adc(lVar17,*(undefined8 *)(*plVar13 + 0x40)), lVar19 == 0))
        goto code_r0x0152dc90;
        if (*(uint *)(plVar13 + 3) < 6) goto code_r0x0152dc84;
        plVar13[9] = lVar17;
        pppppppuVar18 = (undefined8 *******)/*System.String$$Concat*/ func_0x029cfadc(plVar13,0);
        if (ppppppuVar16 == (undefined8 ******)0x0) goto code_r0x0152dc60;
        if (uStack_128._4_4_ == -1) {
          pppppuVar34 = param_4[2];
          if (pppppuVar34 == (undefined8 *****)0x0) goto code_r0x0152dc60;
          if (*(uint *)(pppppuVar34 + 3) <= uVar32) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          uVar27 = uVar27 & 0xffffffff00000000 |
                   (ulong)*(uint *)((long)pppppuVar34[2] + lVar15 + 0x28);
          pppppppuVar18 =
               (undefined8 *******)
               /*Atlas.UI.Screens.VotingScreen$$SetNewVote*/ func_0x0152dd08(pppppppuVar14,*(undefined8 *)((long)pppppuVar34[2] + lVar15 + 0x20),
                               uVar27);
        }
        pppppuVar34 = param_4[2];
        if (pppppuVar34 == (undefined8 *****)0x0) goto code_r0x0152dc60;
        uVar32 = uVar32 + 1;
        uVar31 = (ulong)*(int *)(pppppuVar34 + 3);
        lVar15 = lVar15 + 0xc;
      } while ((long)uVar32 < (long)uVar31);
    }
    ppppppuVar16 = pppppppuVar14[0x14];
    if (ppppppuVar16 != (undefined8 ******)0x0) {
      pppppuVar34 = (undefined8 *****)0x0;
      pppppppuStack_f0 = (undefined8 *******)0x3d25a40;
      while( true ) {
        if ((long)*(int *)(ppppppuVar16 + 3) <= (long)pppppuVar34) {
          return pppppppuVar18;
        }
        pppppuVar37 = param_4[2];
        if (pppppuVar37 == (undefined8 *****)0x0) break;
        uVar8 = 0;
        lVar15 = 0x20;
        while( true ) {
          ppppppuVar16 = pppppppuVar14[0x14];
          if ((int)*(uint *)(pppppuVar37 + 3) <= (int)uVar8) {
            if (ppppppuVar16 == (undefined8 ******)0x0) goto code_r0x0152dc60;
            if ((undefined8 *****)(ulong)*(uint *)(ppppppuVar16 + 3) <= pppppuVar34)
            goto code_r0x0152dc84;
            pppppuVar37 = ppppppuVar16[(long)((long)pppppuVar34 + 4)];
            if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (pppppuVar37 == (undefined8 *****)0x0) goto code_r0x0152dc60;
            *(undefined4 *)(pppppuVar37 + 2) = **(undefined4 **)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xb8);
            ppppppuVar16 = pppppppuVar14[0x14];
            if (ppppppuVar16 == (undefined8 ******)0x0) goto code_r0x0152dc60;
            if ((undefined8 *****)(ulong)*(uint *)(ppppppuVar16 + 3) <= pppppuVar34)
            goto code_r0x0152dc84;
            pppppuVar37 = ppppppuVar16[(long)((long)pppppuVar34 + 4)];
            if (pppppuVar37 == (undefined8 *****)0x0) goto code_r0x0152dc60;
            pppppuVar37[3] = (undefined8 ****)**(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            pppppuVar37 = ppppppuVar16[(long)((long)pppppuVar34 + 4)];
            if (((pppppuVar37 == (undefined8 *****)0x0) ||
                (ppppuVar36 = pppppuVar37[4], ppppuVar36 == (undefined8 ****)0x0)) ||
               (lVar15 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(ppppuVar36,0), lVar15 == 0)) goto code_r0x0152dc60;
            uVar26 = 0;
            pppppuVar37 = (undefined8 *****)&UNK_0152dc54;
            goto code_r0x0322ef1c;
          }
          if (ppppppuVar16 == (undefined8 ******)0x0) goto code_r0x0152dc60;
          if ((undefined8 *****)(ulong)*(uint *)(ppppppuVar16 + 3) <= pppppuVar34)
          goto code_r0x0152dc84;
          if (ppppppuVar16[(long)((long)pppppuVar34 + 4)] == (undefined8 *****)0x0)
          goto code_r0x0152dc60;
          iVar10 = *(int *)(ppppppuVar16[(long)((long)pppppuVar34 + 4)] + 2);
          if (*(uint *)(pppppuVar37 + 3) <= uVar8) {
            pppppppuVar18 = (undefined8 *******)/*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (iVar10 == *(int *)((long)pppppuVar37[2] + lVar15)) break;
          uVar8 = uVar8 + 1;
          pppppuVar37 = param_4[2];
          lVar15 = lVar15 + 0xc;
          if (pppppuVar37 == (undefined8 *****)0x0) goto code_r0x0152dc60;
        }
        pppppuVar34 = (undefined8 *****)((long)pppppuVar34 + 1);
        ppppppuVar16 = pppppppuVar14[0x14];
        if (ppppppuVar16 == (undefined8 ******)0x0) break;
      }
    }
  }
code_r0x0152dc60:
  pppppppuVar38 = (undefined8 *******)func_0x00f78af4();
  return pppppppuVar38;
}



// ============================================================
// RVA: 0x152d4ec | Atlas.UI.Screens.VotingScreen.OnUpdate
// ============================================================

/* WARNING: Possible PIC construction at 0x0151cd74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01513b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0152dc50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01513b44) */
/* WARNING: Removing unreachable block (ram,0x01513b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Atlas_UI_Screens_VotingScreen__OnUpdate
               (undefined1 param_1 [16],float param_2,float param_3,undefined *param_4)

{
  char cVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long *plVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 uVar10;
  long lVar17;
  long lVar18;
  int iVar11;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  long *plVar25;
  undefined1 *puVar26;
  undefined8 uVar27;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar28;
  long lVar29;
  code *pcVar30;
  ulong uVar31;
  ulong *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  undefined *unaff_d8;
  undefined1 *unaff_d9;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4e87 & 1) == 0) {
    func_0x00f78a20(0x3d41350);
    bRam0000000003eb4e87 = 1;
  }
  if (*(long *)(param_4 + 0x90) == 0) {
    return 0;
  }
  if (*(long *)(param_4 + 0x98) != 0) {
    if (*(long *)(*(long *)(param_4 + 0x98) + 0x20) == 0) {
      return *(long *)(param_4 + 0x90);
    }
    fVar35 = (float)/*Atlas.UI.VotingManager$$GetSecondsLeftToVote*/ func_0x01529384();
    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_4,uRam0000000003d41350);
    if ((lVar17 != 0) && (lVar17 = *(long *)(lVar17 + 0x80), lVar17 != 0)) {
      puVar4 = &uStack_50;
      puVar6 = &uStack_50;
      puVar21 = &stack0xfffffffffffffff0;
      puStack_40 = unaff_d9;
      puStack_38 = unaff_d8;
      if ((bRam0000000003eb4e03 & 1) == 0) {
        func_0x00f78a20(0x3d22910,0);
        func_0x00f78a20(0x3d230e0);
        func_0x00f78a20(0x3d7cca8);
        func_0x00f78a20(0x3d6d120);
        func_0x00f78a20(0x3d78fa8);
        bRam0000000003eb4e03 = 1;
      }
      uVar13 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(fVar35,0);
      iVar8 = (int)uVar13;
      if ((*(int *)(lVar17 + 0x24) < 1 || *(int *)(lVar17 + 0x24) < iVar8) ||
         (iVar8 == *(int *)(lVar17 + 0x28))) {
        uVar27 = 0x3d22910;
        *(int *)(lVar17 + 0x28) = iVar8;
        if (*(char *)(lVar17 + 0x20) == '\0') {
          dVar37 = -(double)fVar35;
          param_3 = INFINITY;
          dVar36 = dVar37;
          if (fVar35 != INFINITY) {
            dVar36 = (double)fVar35;
          }
          uVar9 = (int)dVar36 % 0x3c;
          if ((int)uVar9 < 1) {
            uVar9 = 0;
          }
          uVar14 = (ulong)uVar9;
          plVar25 = *(long **)(lVar17 + 0x18);
          uStack_48 = (undefined *)CONCAT44(uStack_48._4_4_,(int)dVar36 / 0x3c);
          uVar13 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_48);
          param_2 = SUB84(dVar37,0);
          uStack_50 = (undefined1 **)CONCAT44(uVar9,(undefined4)uStack_50);
          uVar15 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_50 + 4);
          uVar15 = /*System.String$$Format*/ func_0x029bcac4(/*STR('{0:D2}:{1:D2}')*/ uRam0000000003d7cca8,uVar13,uVar15,0);
joined_r0x0151cec8:
          lVar17 = 0;
          if (plVar25 != (long *)0x0) {
            lVar17 = (**(code **)(*plVar25 + 0x558))
                               (plVar25,uVar15,*(undefined8 *)(*plVar25 + 0x560));
            return lVar17;
          }
        }
        else {
          uVar14 = 0x3d230e0;
          uVar13 = /*UnityEngine.Mathf$$FloorToInt*/ func_0x0323d18c(fVar35,0);
          if (((*(ushort *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          if (**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8) != 0) {
            uVar14 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(**(long **)(/*Core.Localisation.LocaliseFontBehaviour_TypeInfo*/ lRam0000000003d230e0 + 0xb8),/*STR('GENERIC_TIME_SECS')*/ uRam0000000003d6d120,0
                                    );
            plVar25 = *(long **)(lVar17 + 0x18);
            uStack_48 = (undefined *)CONCAT44((int)uVar13,(undefined4)uStack_48);
            uVar15 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,(long)&uStack_48 + 4);
            uVar15 = /*System.String$$Format*/ func_0x029bc688(uVar14,uVar15,0);
            goto joined_r0x0151cec8;
          }
        }
        auVar39._8_8_ = lVar17;
        auVar39._0_8_ = uVar13;
        auVar3._8_8_ = lVar17;
        auVar3._0_8_ = uVar13;
        uVar15 = func_0x00f78af4();
        puVar26 = &stack0xffffffffffffffa0;
        lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar15,0);
        if (lVar16 != 0) {
          uVar13 = 1;
          puVar33 = &Atlas_UI_UITimer__Show;
          puVar26 = puVar21;
          auVar39 = auVar3;
code_r0x0322ef1c:
          *(undefined8 *)((long)puVar6 + -0x30) = uVar27;
          *(ulong *)((long)puVar6 + -0x28) = uVar14;
          *(undefined1 (*) [16])((long)puVar6 + -0x20) = auVar39;
          *(undefined1 **)((long)puVar6 + -0x10) = puVar26;
          *(undefined **)((long)puVar6 + -8) = puVar33;
          if (pcRam0000000003ebf4c0 == (code *)0x0) {
            pcRam0000000003ebf4c0 =
                 (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
          }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          lVar17 = (*pcRam0000000003ebf4c0)(lVar16,uVar13);
          return lVar17;
        }
        uVar15 = func_0x00f78af4();
        puVar21 = &stack0xffffffffffffff90;
        lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(uVar15,0);
        if (lVar16 != 0) {
          uVar13 = 0;
          puVar6 = (undefined8 *)&stack0xffffffffffffffa0;
          puVar33 = &Atlas_UI_UITimer__Hide;
          goto code_r0x0322ef1c;
        }
        lVar16 = func_0x00f78af4();
        uStack_a0 = 0x3d22910;
        puVar33 = &Atlas_UI_UILobbyInfoPanelBehaviour__OnGroupLeaderChangedJoined;
        uStack_98 = uVar14;
        if ((bRam0000000003eb4dfd & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4dfd = 1;
        }
        if (((*(long *)(lVar16 + 0x68) == 0) ||
            (lVar22 = *(long *)(*(long *)(lVar16 + 0x68) + 0x28), lVar22 == 0)) ||
           (plVar25 = *(long **)(lVar22 + 0x30), plVar25 == (long *)0x0)) {
code_r0x0151d010:
          lVar17 = func_0x00f78af4();
          if ((bRam0000000003eb4dfe & 1) == 0) {
            func_0x00f78a20(0x3d79000);
            bRam0000000003eb4dfe = 1;
          }
          *(undefined8 *)(lVar17 + 0x60) = /*STR('event:/UI/Front_End/GameCentre')*/ uRam0000000003d79000;
          *(undefined4 *)(lVar17 + 0x70) = 0xffffffff;
          if ((bRam0000000003ebf1b8 & 1) == 0) {
            func_0x00f78a20(0x3d23990,0);
            bRam0000000003ebf1b8 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          return lVar17;
        }
        iVar8 = (**(code **)(*plVar25 + 0x848))(plVar25,*(undefined8 *)(*plVar25 + 0x850));
        if (iVar8 == 0) {
          uVar9 = 0;
        }
        else {
          if (((*(long *)(lVar16 + 0x68) == 0) ||
              (lVar22 = *(long *)(*(long *)(lVar16 + 0x68) + 0x28), lVar22 == 0)) ||
             (plVar25 = *(long **)(lVar22 + 0x30), plVar25 == (long *)0x0)) goto code_r0x0151d010;
          uVar9 = (**(code **)(*plVar25 + 0x858))(plVar25,*(undefined8 *)(*plVar25 + 0x860));
        }
        uVar27 = *(undefined8 *)(lVar16 + 0x58);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        lVar22 = /*UnityEngine.Object$$op_Implicit*/ func_0x032365f8(uVar27,0);
        if ((uVar9 & (uint)lVar22) == 0) {
          return lVar22;
        }
        lVar16 = *(long *)(lVar16 + 0x60);
        puVar4 = (undefined8 *)&stack0xffffffffffffff90;
        unaff_x21 = uStack_98;
        unaff_x22 = uStack_a0;
      }
      else {
        puVar33 = &UNK_0151cd78;
        lVar16 = /*STR('event:/UI/Front_End/ClockTick')*/ lRam0000000003d78fa8;
      }
      *(ulong *)((long)puVar4 + -0x30) = unaff_x22;
      *(ulong *)((long)puVar4 + -0x28) = unaff_x21;
      *(undefined8 *)((long)puVar4 + -0x20) = uVar13;
      *(long *)((long)puVar4 + -0x18) = lVar17;
      *(undefined1 **)((long)puVar4 + -0x10) = puVar21;
      *(undefined **)((long)puVar4 + -8) = puVar33;
      uVar27 = 0x3eb4000;
      lVar17 = lVar16;
      if ((bRam0000000003eb4db6 & 1) == 0) {
        func_0x00f78a20(0x3d2faf8);
        func_0x00f78a20(0x3d2fb00);
        lVar17 = func_0x00f78a20(0x3d25580);
        bRam0000000003eb4db6 = 1;
      }
      if (**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) == 0) {
        return lVar17;
      }
      lVar17 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20);
      if (lVar17 != 0) {
        lVar17 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$ContainsKey*/ func_0x01ed7a44(lVar17,lVar16,uRam0000000003d2faf8);
        if ((int)lVar17 == 0) {
          return lVar17;
        }
        if (((**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) != 0) &&
            (lVar17 = *(long *)(**(long **)(/*Atlas.Audio.UIAudio_TypeInfo*/ lRam0000000003d25580 + 0xb8) + 0x20), lVar17 != 0)) &&
           (lVar17 = /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$get_Item*/ func_0x01ed76f8(lVar17,lVar16,uRam0000000003d2fb00), lVar17 != 0)) {
          *(undefined8 *)((long)puVar4 + -0x20) = *(undefined8 *)((long)puVar4 + -0x20);
          *(undefined8 *)((long)puVar4 + -0x18) = *(undefined8 *)((long)puVar4 + -0x18);
          *(undefined8 *)((long)puVar4 + -0x10) = *(undefined8 *)((long)puVar4 + -0x10);
          *(undefined8 *)((long)puVar4 + -8) = *(undefined8 *)((long)puVar4 + -8);
          /*Core.Audio.AudioEvent$$PlayInternal*/ func_0x01638b20(0,lVar17,0,0);
          return lVar17;
        }
      }
      plVar25 = (long *)func_0x00f78af4();
      *(undefined1 **)((long)puVar4 + -0x70) = unaff_d9;
      *(ulong *)((long)puVar4 + -0x68) = (ulong)(uint)fVar35;
      *(ulong *)((long)puVar4 + -0x60) = unaff_x22;
      *(undefined8 *)((long)puVar4 + -0x58) = 0x3eb4000;
      *(undefined8 *)((long)puVar4 + -0x50) = 0x3d25580;
      *(long *)((long)puVar4 + -0x48) = lVar16;
      *(undefined1 **)((long)puVar4 + -0x40) = (undefined1 *)((long)puVar4 + -0x10);
      *(undefined **)((long)puVar4 + -0x38) = &Atlas_UI_UIArcadeRewardBehaviour__Wiggle;
      if ((bRam0000000003eb4d8b & 1) == 0) {
        func_0x00f78a20(0x3d24188);
        func_0x00f78a20(0x3d5e780);
        func_0x00f78a20(0x3d5e868);
        bRam0000000003eb4d8b = 1;
      }
      plVar12 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(plVar25,0);
      if ((plVar12 != (long *)0x0) && (*plVar12 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
        uVar15 = func_0x00f78e5c(plVar12);
        *(long **)((long)puVar4 + -0x90) = plVar12;
        *(long **)((long)puVar4 + -0x88) = plVar25;
        *(undefined1 **)((long)puVar4 + -0x80) = (undefined1 *)((long)puVar4 + -0x40);
        *(undefined **)((long)puVar4 + -0x78) =
             &Atlas_UI_UIArcadeRewardBehaviour__PlayStarsAnimation;
        lVar17 = /*Atlas.UI.UIArcadeRewardBehaviour$$AnimateStars*/ func_0x01513c10();
        uVar13 = *(undefined8 *)((long)puVar4 + -0x90);
        *(ulong *)((long)puVar4 + -0xa0) = unaff_x22;
        *(undefined8 *)((long)puVar4 + -0x98) = 0x3eb4000;
        *(undefined8 *)((long)puVar4 + -0x90) = uVar13;
        *(undefined8 *)((long)puVar4 + -0x88) = *(undefined8 *)((long)puVar4 + -0x88);
        *(undefined8 *)((long)puVar4 + -0x80) = *(undefined8 *)((long)puVar4 + -0x80);
        *(undefined8 *)((long)puVar4 + -0x78) = *(undefined8 *)((long)puVar4 + -0x78);
        if (lVar17 == 0) {
          func_0x00f78a24(0x3d23938,0,0);
          uVar20 = func_0x00f78aec();
          uVar15 = func_0x00f78a24(0x3d7b500);
          /*System.NullReferenceException$$.ctor*/ func_0x02950598(uVar20,uVar15,0);
        }
        else {
          uVar27 = 0x3ec0000;
          if (pcRam0000000003ec01d0 == (code *)0x0) {
            pcRam0000000003ec01d0 =
                 (code *)func_0x00f789d4(
                                        "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)"
                                        );
          }
          uVar14 = (*pcRam0000000003ec01d0)(uVar15);
          if ((uVar14 & 1) != 0) {
            if (pcRam0000000003ec01e0 == (code *)0x0) {
              pcRam0000000003ec01e0 =
                   (code *)func_0x00f789d4(
                                          "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                          );
            }
                    /* WARNING: Could not recover jumptable at 0x03247eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar17 = (*pcRam0000000003ec01e0)(uVar15,lVar17);
            return lVar17;
          }
          func_0x00f78a24(0x3d1fce8);
          uVar20 = func_0x00f78aec();
          uVar13 = func_0x00f78a24(0x3d6af80);
          /*System.ArgumentException$$.ctor*/ func_0x02922078(uVar20,uVar13,0);
          uVar13 = uVar15;
        }
        uVar15 = func_0x00f78a24(0x3d5a8a8);
        auVar38 = func_0x00f78ac0(uVar20,uVar15);
        *(ulong *)((long)puVar4 + -0xd0) = unaff_x22;
        *(undefined8 *)((long)puVar4 + -200) = uVar27;
        *(undefined8 *)((long)puVar4 + -0xc0) = uVar13;
        *(undefined8 *)((long)puVar4 + -0xb8) = uVar20;
        *(undefined1 **)((long)puVar4 + -0xb0) = (undefined1 *)((long)puVar4 + -0x80);
        *(undefined **)((long)puVar4 + -0xa8) = &UnityEngine_MonoBehaviour__StartCoroutineManaged2;
        if (pcRam0000000003ec01e0 == (code *)0x0) {
          pcRam0000000003ec01e0 =
               (code *)func_0x00f789d4(
                                      "UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)"
                                      );
        }
                    /* WARNING: Could not recover jumptable at 0x03247fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar17 = (*pcRam0000000003ec01e0)(auVar38._0_8_,auVar38._8_8_);
        return lVar17;
      }
      fVar35 = (float)/*UnityEngine.Vector3$$get_one*/ func_0x0327c058(0);
      uVar27 = /*DG.Tweening.ShortcutExtensions$$DOPunchScale*/ func_0x016b4b7c(fVar35 * 0.25,param_2 * 0.25,param_3 * 0.25,_UNK_033f82c4,0x40a00000,
                               plVar12,4,0);
      lVar17 = /*DG.Tweening.TweenSettingsExtensions$$SetDelay<Tweener>*/ func_0x018ee6cc(0,uVar27,uRam0000000003d5e780);
      *(undefined8 *)((long)puVar4 + -0xa0) = 0x3d5e780;
      *(undefined8 *)((long)puVar4 + -0x98) = 0x3d5e868;
      *(long **)((long)puVar4 + -0x90) = plVar12;
      *(long **)((long)puVar4 + -0x88) = plVar25;
      *(undefined1 **)((long)puVar4 + -0x80) = (undefined1 *)((long)puVar4 + -0x40);
      *(undefined **)((long)puVar4 + -0x78) = &UNK_01513b44;
      if ((bRam0000000003eb66c1 & 1) == 0) {
        func_0x00f78a20(0x3d208f0,plVar25,uRam0000000003d5e868);
        func_0x00f78a20(0x3d20bc0);
        func_0x00f78a20(0x3d23990);
        bRam0000000003eb66c1 = 1;
      }
      if ((lVar17 != 0) && (*(char *)(lVar17 + 0xe8) != '\0')) {
        if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar8 = /*DG.Tweening.DOTween$$get_debugStoreTargetId*/ func_0x01692b98(0);
        if (iVar8 != 0) {
          lVar16 = func_0x00f78adc(plVar25,/*UnityEngine.Component_TypeInfo*/ uRam0000000003d208f0);
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar16,0,0);
          if ((uVar14 & 1) == 0) {
            if (plVar25 == (long *)0x0) goto code_r0x018eef34;
            uVar27 = (**(code **)(*plVar25 + 0x168))(plVar25,*(undefined8 *)(*plVar25 + 0x170));
          }
          else {
            if (lVar16 == 0) {
code_r0x018eef34:
              auVar38 = func_0x00f78af4();
              lVar22 = auVar38._0_8_;
              *(undefined8 *)((long)puVar4 + -0xd0) = 0x3d5e780;
              *(long *)((long)puVar4 + -200) = lVar16;
              *(long **)((long)puVar4 + -0xc0) = plVar25;
              *(long *)((long)puVar4 + -0xb8) = lVar17;
              *(undefined1 **)((long)puVar4 + -0xb0) = (undefined1 *)((long)puVar4 + -0x80);
              *(undefined **)((long)puVar4 + -0xa8) =
                   &DG_Tweening_TweenSettingsExtensions__SetUpdate_object_;
              if ((bRam0000000003eb66c2 & 1) == 0) {
                func_0x00f78a20(0x3d20bc0);
                func_0x00f78a20(0x3d25440);
                bRam0000000003eb66c2 = 1;
              }
              if ((lVar22 != 0) && (*(char *)(lVar22 + 0xe8) != '\0')) {
                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                cVar1 = *(char *)(*(long *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xb8) + 0x38);
                if (((*(ushort *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*DG.Tweening.Core.TweenManager_TypeInfo*/ lRam0000000003d25440 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                /*DG.Tweening.Core.TweenManager$$SetUpdateType*/ func_0x016bfab0(lVar22,auVar38._8_8_,cVar1 != '\0',0);
              }
              return lVar22;
            }
            uVar27 = /*UnityEngine.Object$$get_name*/ func_0x03244608(lVar16,0);
          }
          *(undefined8 *)(lVar17 + 200) = uVar27;
        }
        *(long **)(lVar17 + 0x48) = plVar25;
      }
      return lVar17;
    }
  }
  lVar17 = func_0x00f78af4();
  ppuVar5 = (undefined1 **)&stack0xffffffffffffff90;
  uStack_50 = (undefined1 **)0x3eb4000;
  puStack_38 = &Atlas_UI_Screens_VotingScreen__OnAfterExit;
  uStack_48 = param_4;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4e88 & 1) == 0) {
    func_0x00f78a20(0x3d29fa0);
    func_0x00f78a20(0x3d2a248);
    func_0x00f78a20(0x3d1b520);
    func_0x00f78a20(0x3d1b3d8);
    func_0x00f78a20(0x3d29730);
    func_0x00f78a20(0x3d41360);
    func_0x00f78a20(0x3d60128);
    func_0x00f78a20(0x3d60138);
    func_0x00f78a20(0x3d60140);
    bRam0000000003eb4e88 = 1;
  }
  uVar28 = *(ulong *)(lVar17 + 0x90);
  uVar14 = unaff_x21;
  if (uVar28 != 0) {
    uVar27 = *(undefined8 *)(uVar28 + 0xf0);
    uVar14 = func_0x00f78aec(/*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730);
    /*Atlas.UI.VotingManager.OnVoteStageChanged$$.ctor*/ func_0x0156d908(uVar14,lVar17,uRam0000000003d60138,0);
    plVar25 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar27,uVar14,0);
    if ((plVar25 != (long *)0x0) && (*plVar25 != /*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730)) goto code_r0x0152d7d0;
    *(long **)(uVar28 + 0xf0) = plVar25;
  }
  if ((*(long *)(lVar17 + 0x98) == 0) ||
     (lVar16 = *(long *)(*(long *)(lVar17 + 0x98) + 0x20), lVar16 == 0)) {
code_r0x0152d774:
    if (*(long *)(lVar17 + 0x88) != 0) {
      if (*(long *)(lVar17 + 0x78) == 0) goto code_r0x0152d7cc;
      Core_Application_CoroutineRunner__StopCoroutine
                (*(long *)(lVar17 + 0x78),*(long *)(lVar17 + 0x88),0);
    }
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar17,uRam0000000003d41360);
    puVar33 = uStack_48;
    puVar26 = (undefined1 *)uStack_50;
    if ((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) {
      uVar9 = *(uint *)(lVar17 + 0x48);
      puVar21 = (undefined1 *)(ulong)uVar9;
      uVar27 = 1;
      uVar14 = *(ulong *)(*(long *)(lVar16 + 0x10) + 0x10);
      if (uVar14 == 0) {
        auVar38 = func_0x00f78af4();
        uStack_48 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
        lVar17 = *(long *)(auVar38._0_8_ + 0x10);
        auVar38._8_8_ = auVar38._8_8_;
        auVar38._0_8_ = lVar17;
        if (lVar17 == 0) {
          uStack_50 = &puStack_40;
          lVar17 = func_0x00f78af4();
          if ((bRam0000000003eb4871 & 1) == 0) {
            func_0x00f78a20(0x3d2fb80);
            func_0x00f78a20(0x3d1c478);
            bRam0000000003eb4871 = 1;
          }
          uVar27 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
          /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar27,uRam0000000003d2fb80);
          *(undefined8 *)(lVar17 + 0x30) = uVar27;
          return lVar17;
        }
        ppuVar5 = &puStack_40;
        puVar34 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
        uStack_50 = &puStack_40;
      }
      else {
        puVar33 = (undefined *)0x1;
        unaff_x22 = 0x3ebc000;
        if ((bRam0000000003ebc651 & 1) == 0) {
          func_0x00f78a20(0x3d2a5c0,puVar21,1,0);
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc651 = 1;
        }
        if (*(long *)(uVar14 + 0x68) != 0) {
          uVar27 = 0;
          lVar17 = /*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(uVar14 + 0x68),puVar21,0,0);
          lVar16 = *(long *)(uVar14 + 0x70);
          unaff_x22 = 0;
          if (lVar16 != 0) {
            if (*(uint *)(lVar16 + 0x18) <= uVar9) {
              lVar17 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if ((*(long *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar9 * 0x28 + 0x28) == 0) ||
               (unaff_x22 = *(ulong *)(uVar14 + 0x30), unaff_x22 == 0)) {
              return lVar17;
            }
            lVar17 = *(long *)(uVar14 + 0x70);
            uVar14 = 0;
            if (lVar17 != 0) {
              if (*(uint *)(lVar17 + 0x18) <= uVar9) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar25 = *(long **)(*(long *)(lVar17 + 0x10) + (long)(int)uVar9 * 0x28 + 0x28);
              uStack_98 = unaff_x22;
              lVar17 = *(long *)(unaff_x22 + 0x68);
              if (lVar17 == 0) {
                puVar32 = &uStack_98;
                lVar16 = 1;
              }
              else {
                lVar16 = *(long *)(lVar17 + 0x18);
                if (lVar16 == 0) {
                  return unaff_x22;
                }
                puVar32 = (ulong *)(lVar17 + 0x20);
              }
              lVar17 = 0;
              do {
                uVar14 = puVar32[lVar17];
                pcVar30 = *(code **)(uVar14 + 0x10);
                plVar12 = *(long **)(uVar14 + 0x20);
                lVar22 = *(long *)(uVar14 + 0x28);
                if (*(short *)(lVar22 + 0x48) == -1) {
                  func_0x00f78ad8(lVar22);
                }
                iVar8 = func_0x00f78a4c(lVar22);
                bVar7 = *(char *)(lVar22 + 0x4a) == '\x03';
                if (iVar8 == 0) {
                  if (bVar7) {
                    if (plVar12 == (long *)0x0) {
code_r0x01e71bbc:
                      lVar22 = (*pcVar30)(plVar25,puVar21,1,lVar22);
                    }
                    else {
                      if (((*(short *)(lVar22 + 0x48) == -1) ||
                          ((*(byte *)(*plVar12 + 0x115) & 1) != 0)) ||
                         (*(long *)(unaff_x22 + 0x18) == 0)) goto code_r0x01e71aac;
                      iVar8 = func_0x00f78a44(lVar22);
                      iVar11 = func_0x00f78ec0(lVar22);
                      if (iVar8 == 0) {
                        uVar2 = *(ushort *)(lVar22 + 0x48);
                        if (iVar11 == 0) {
                          lVar22 = *plVar12 + (ulong)uVar2 * 0x10;
                          lVar22 = (**(code **)(lVar22 + 0x138))
                                             (plVar12,plVar25,puVar21,1,
                                              *(undefined8 *)(lVar22 + 0x140));
                          goto code_r0x01e71bd0;
                        }
                        lVar22 = func_0x00f78a48(lVar22);
                        lVar23 = *plVar12;
                        uVar14 = (ulong)*(ushort *)(lVar23 + 0x12a);
                        if (uVar14 != 0) {
                          piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar24 + -2) == lVar22) {
                              puVar19 = (undefined8 *)
                                        (lVar23 + (long)(int)(*piVar24 + (uint)uVar2) * 0x10 + 0x138
                                        );
                              goto code_r0x01e71d74;
                            }
                            piVar24 = piVar24 + 4;
                            uVar14 = uVar14 - 1;
                          } while (uVar14 != 0);
                        }
                        puVar19 = (undefined8 *)func_0x00fac1f0(plVar12,lVar22,(ulong)uVar2);
code_r0x01e71d74:
                        pcVar30 = (code *)*puVar19;
                        puVar19 = (undefined8 *)puVar19[1];
                      }
                      else {
                        if (iVar11 == 0) {
                          uVar27 = *(undefined8 *)
                                    (*plVar12 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar23 = *plVar12;
                          uVar14 = (ulong)*(ushort *)(lVar23 + 0x12a);
                          if (uVar14 != 0) {
                            piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar24 + -2) == *(long *)(lVar22 + 0x18)) {
                                lVar23 = lVar23 + (long)(int)(*piVar24 +
                                                             (uint)*(ushort *)(lVar22 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e71d4c;
                              }
                              piVar24 = piVar24 + 4;
                              uVar14 = uVar14 - 1;
                            } while (uVar14 != 0);
                          }
                          lVar23 = func_0x00fac1f0(plVar12);
code_r0x01e71d4c:
                          uVar27 = *(undefined8 *)(lVar23 + 8);
                        }
                        puVar19 = (undefined8 *)func_0x00f78acc(uVar27,lVar22);
                        pcVar30 = (code *)*puVar19;
                      }
                      lVar22 = (*pcVar30)(plVar12,plVar25,puVar21,1,puVar19);
                    }
                  }
                  else {
                    if ((*(short *)(lVar22 + 0x48) == -1) || (*(long *)(unaff_x22 + 0x18) == 0))
                    goto code_r0x01e71bbc;
                    iVar8 = func_0x00f78a44(lVar22);
                    iVar11 = func_0x00f78ec0(lVar22);
                    if (iVar8 == 0) {
                      uVar2 = *(ushort *)(lVar22 + 0x48);
                      if (iVar11 == 0) {
                        lVar22 = *plVar25 + (ulong)uVar2 * 0x10;
                        lVar22 = (**(code **)(lVar22 + 0x138))
                                           (plVar25,puVar21,1,*(undefined8 *)(lVar22 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar22 = func_0x00f78a48(lVar22);
                      lVar23 = *plVar25;
                      uVar14 = (ulong)*(ushort *)(lVar23 + 0x12a);
                      if (uVar14 != 0) {
                        piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar24 + -2) == lVar22) {
                            puVar19 = (undefined8 *)
                                      (lVar23 + (long)(int)(*piVar24 + (uint)uVar2) * 0x10 + 0x138);
                            goto code_r0x01e71d00;
                          }
                          piVar24 = piVar24 + 4;
                          uVar14 = uVar14 - 1;
                        } while (uVar14 != 0);
                      }
                      puVar19 = (undefined8 *)func_0x00fac1f0(plVar25,lVar22,(ulong)uVar2);
code_r0x01e71d00:
                      pcVar30 = (code *)*puVar19;
                      puVar19 = (undefined8 *)puVar19[1];
                    }
                    else {
                      if (iVar11 == 0) {
                        uVar27 = *(undefined8 *)
                                  (*plVar25 + (ulong)*(ushort *)(lVar22 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar23 = *plVar25;
                        uVar14 = (ulong)*(ushort *)(lVar23 + 0x12a);
                        if (uVar14 != 0) {
                          piVar24 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar24 + -2) == *(long *)(lVar22 + 0x18)) {
                              lVar23 = lVar23 + (long)(int)(*piVar24 +
                                                           (uint)*(ushort *)(lVar22 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71cd8;
                            }
                            piVar24 = piVar24 + 4;
                            uVar14 = uVar14 - 1;
                          } while (uVar14 != 0);
                        }
                        lVar23 = func_0x00fac1f0(plVar25);
code_r0x01e71cd8:
                        uVar27 = *(undefined8 *)(lVar23 + 8);
                      }
                      puVar19 = (undefined8 *)func_0x00f78acc(uVar27,lVar22);
                      pcVar30 = (code *)*puVar19;
                    }
                    lVar22 = (*pcVar30)(plVar25,puVar21,1,puVar19);
                  }
                }
                else {
                  if (bVar7) goto code_r0x01e71bbc;
code_r0x01e71aac:
                  lVar22 = (*pcVar30)(plVar12,plVar25,puVar21,1,lVar22);
                }
code_r0x01e71bd0:
                lVar17 = lVar17 + 1;
                if (lVar17 == lVar16) {
                  return lVar22;
                }
              } while( true );
            }
          }
        }
        puVar34 = &Core_UI2_UIManager__SetScreenVisible;
        auVar38 = func_0x00f78af4();
        puVar26 = puVar21;
        unaff_x21 = uVar14;
      }
      lVar16 = auVar38._0_8_;
      *(ulong *)((long)ppuVar5 + -0x30) = unaff_x22;
      *(ulong *)((long)ppuVar5 + -0x28) = unaff_x21;
      *(undefined1 **)((long)ppuVar5 + -0x20) = puVar26;
      *(undefined **)((long)ppuVar5 + -0x18) = puVar33;
      *(undefined1 ***)((long)ppuVar5 + -0x10) = &puStack_40;
      *(undefined **)((long)ppuVar5 + -8) = puVar34;
      lVar17 = lVar16;
      if ((bRam0000000003ebc652 & 1) == 0) {
        lVar17 = func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc652 = 1;
      }
      lVar22 = *(long *)(lVar16 + 0x70);
      if (lVar22 != 0) {
        uVar9 = auVar38._8_4_;
        if (*(uint *)(lVar22 + 0x18) <= uVar9) {
          lVar17 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(*(long *)(lVar22 + 0x10) + (long)(int)uVar9 * 0x28 + 0x28) == 0) {
          return lVar17;
        }
        lVar17 = *(long *)(lVar16 + 0x70);
        if (lVar17 != 0) {
          if (*(uint *)(lVar17 + 0x18) <= uVar9) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + (long)(int)uVar9 * 0x28 + 0x28);
          if ((lVar17 != 0) && (plVar25 = *(long **)(lVar17 + 0x28), plVar25 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar17 = (**(code **)(*plVar25 + 0x178))
                               (plVar25,uVar27,*(undefined8 *)(*plVar25 + 0x180));
            return lVar17;
          }
        }
      }
      auVar39 = func_0x00f78af4();
      uVar13 = auVar39._0_8_;
      *(long *)((long)ppuVar5 + -0x50) = auVar38._8_8_;
      *(undefined8 *)((long)ppuVar5 + -0x48) = uVar27;
      *(undefined1 **)((long)ppuVar5 + -0x40) = (undefined1 *)((long)ppuVar5 + -0x10);
      *(undefined **)((long)ppuVar5 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
      *(undefined8 *)((long)ppuVar5 + -0x68) = 0;
      *(undefined8 *)((long)ppuVar5 + -0x70) = 0;
      *(undefined8 *)((long)ppuVar5 + -0x58) = 0;
      *(undefined8 *)((long)ppuVar5 + -0x60) = 0;
      lVar17 = /*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar13,auVar39._8_8_,(undefined1 *)((long)ppuVar5 + -0x70));
      if ((int)lVar17 != 0) {
        /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar13,*(undefined8 *)((long)ppuVar5 + -0x60),
                        *(undefined8 *)((long)ppuVar5 + -0x58));
        *(undefined8 *)((long)ppuVar5 + -0x88) = *(undefined8 *)((long)ppuVar5 + -0x68);
        *(undefined8 *)((long)ppuVar5 + -0x90) = *(undefined8 *)((long)ppuVar5 + -0x70);
        *(undefined8 *)((long)ppuVar5 + -0x78) = *(undefined8 *)((long)ppuVar5 + -0x58);
        *(undefined8 *)((long)ppuVar5 + -0x80) = *(undefined8 *)((long)ppuVar5 + -0x60);
        lVar17 = /*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar13,(undefined1 *)((long)ppuVar5 + -0x90),1);
      }
      return lVar17;
    }
  }
  else {
    uVar28 = *(ulong *)(lVar16 + 0x10);
    if (uVar28 != 0) {
      uVar27 = *(undefined8 *)(uVar28 + 0x48);
      uVar14 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar14,lVar17,uRam0000000003d60140,uRam0000000003d2a248);
      plVar25 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar27,uVar14,0);
      if ((plVar25 != (long *)0x0) && (*plVar25 != /*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520)) goto code_r0x0152d7d0;
      *(long **)(uVar28 + 0x48) = plVar25;
      if ((*(long *)(lVar17 + 0x98) != 0) &&
         ((lVar16 = *(long *)(*(long *)(lVar17 + 0x98) + 0x20), lVar16 != 0 &&
          (uVar28 = *(ulong *)(lVar16 + 0x10), uVar28 != 0)))) {
        uVar27 = *(undefined8 *)(uVar28 + 0x90);
        uVar14 = func_0x00f78aec(/*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8);
        /*System.Action<bool>$$.ctor*/ func_0x01b42d40(uVar14,lVar17,uRam0000000003d60128,uRam0000000003d29fa0);
        plVar25 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar27,uVar14,0);
        if ((plVar25 != (long *)0x0) && (*plVar25 != /*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8)) goto code_r0x0152d7d0;
        *(long **)(uVar28 + 0x90) = plVar25;
        goto code_r0x0152d774;
      }
    }
  }
code_r0x0152d7cc:
  func_0x00f78af4();
code_r0x0152d7d0:
  auVar39 = func_0x00f78e5c();
  lVar22 = auVar39._8_8_;
  lVar16 = auVar39._0_8_;
  puVar6 = &uStack_e0;
  puVar26 = &stack0xffffffffffffff80;
  lVar17 = lVar16;
  uStack_98 = uVar14;
  if ((bRam0000000003eb4e89 & 1) == 0) {
    func_0x00f78a20(0x3d3b688);
    func_0x00f78a20(0x3d3b690);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25a40);
    func_0x00f78a20(0x3d70ba8);
    func_0x00f78a20(0x3d65ed8);
    lVar17 = func_0x00f78a20(0x3d662b0);
    bRam0000000003eb4e89 = 1;
  }
  uStack_e0 = 0;
  uStack_d8 = 0;
  if ((lVar22 != 0) && (lVar23 = *(long *)(lVar22 + 0x10), lVar23 != 0)) {
    uVar14 = (ulong)*(uint *)(lVar23 + 0x18);
    if (0 < (int)*(uint *)(lVar23 + 0x18)) {
      lVar29 = 0;
      uVar31 = 0;
      do {
        if ((uVar14 & 0xffffffff) <= uVar31) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar10 = /*Atlas.UI.Screens.VotingScreen$$GetVoteInfoIndex*/ func_0x0152dc98(lVar16,*(undefined4 *)(*(long *)(lVar23 + 0x10) + lVar29 + 0x20));
        uStack_d8 = CONCAT44(uVar10,(undefined4)uStack_d8);
        lVar23 = *(long *)(lVar16 + 0x90);
        plVar25 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,6);
        if (plVar25 == (long *)0x0) goto code_r0x0152dc60;
        if ((/*STR('OnVoteUpdate ')*/ lRam0000000003d70ba8 != 0) &&
           (lVar17 = func_0x00f78adc(/*STR('OnVoteUpdate ')*/ lRam0000000003d70ba8,*(undefined8 *)(*plVar25 + 0x40)),
           lVar17 == 0)) goto code_r0x0152dc90;
        if ((int)plVar25[3] == 0) {
code_r0x0152dc84:
          uVar27 = func_0x00f78b24();
          do {
            func_0x00f78ac0(uVar27,0);
code_r0x0152dc90:
            uVar27 = func_0x00f78b14();
          } while( true );
        }
        plVar25[4] = /*STR('OnVoteUpdate ')*/ lRam0000000003d70ba8;
        lVar17 = *(long *)(lVar22 + 0x10);
        if (lVar17 == 0) goto code_r0x0152dc60;
        if (*(uint *)(lVar17 + 0x18) <= uVar31) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar17 = *(long *)(lVar17 + 0x10) + lVar29;
        uStack_e0 = *(undefined8 *)(lVar17 + 0x20);
        uStack_d8 = CONCAT44(uStack_d8._4_4_,*(undefined4 *)(lVar17 + 0x28));
        lVar17 = /*System.UInt32$$ToString*/ func_0x02a0b3d0(&uStack_e0,0);
        if ((lVar17 != 0) &&
           (lVar18 = func_0x00f78adc(lVar17,*(undefined8 *)(*plVar25 + 0x40)), lVar18 == 0))
        goto code_r0x0152dc90;
        uVar9 = (uint)plVar25[3];
        if ((plVar25[3] & 0xfffffffeU) == 0) goto code_r0x0152dc84;
        plVar25[5] = lVar17;
        if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
          lVar17 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar25 + 0x40));
          if (lVar17 == 0) goto code_r0x0152dc90;
          uVar9 = (uint)plVar25[3];
        }
        if (uVar9 < 3) goto code_r0x0152dc84;
        plVar25[6] = /*STR(' ')*/ lRam0000000003d65ed8;
        lVar17 = *(long *)(lVar22 + 0x10);
        if (lVar17 == 0) goto code_r0x0152dc60;
        if (*(uint *)(lVar17 + 0x18) <= uVar31) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar17 = *(long *)(lVar17 + 0x10) + lVar29;
        uStack_e0 = *(undefined8 *)(lVar17 + 0x20);
        uStack_d8 = CONCAT44(uStack_d8._4_4_,*(undefined4 *)(lVar17 + 0x28));
        lVar17 = /*System.Int16$$ToString*/ func_0x02ae8e6c((ulong)&uStack_e0 | 4,0);
        if ((lVar17 != 0) &&
           (lVar18 = func_0x00f78adc(lVar17,*(undefined8 *)(*plVar25 + 0x40)), lVar18 == 0))
        goto code_r0x0152dc90;
        uVar9 = (uint)plVar25[3];
        if ((plVar25[3] & 0xfffffffcU) == 0) goto code_r0x0152dc84;
        plVar25[7] = lVar17;
        if (/*STR(' index ')*/ lRam0000000003d662b0 != 0) {
          lVar17 = func_0x00f78adc(/*STR(' index ')*/ lRam0000000003d662b0,*(undefined8 *)(*plVar25 + 0x40));
          if (lVar17 == 0) goto code_r0x0152dc90;
          uVar9 = (uint)plVar25[3];
        }
        if (uVar9 < 5) goto code_r0x0152dc84;
        plVar25[8] = /*STR(' index ')*/ lRam0000000003d662b0;
        lVar17 = /*System.Int32$$ToString*/ func_0x02ae9b8c((long)&uStack_d8 + 4,0);
        if ((lVar17 != 0) &&
           (lVar18 = func_0x00f78adc(lVar17,*(undefined8 *)(*plVar25 + 0x40)), lVar18 == 0))
        goto code_r0x0152dc90;
        if (*(uint *)(plVar25 + 3) < 6) goto code_r0x0152dc84;
        plVar25[9] = lVar17;
        lVar17 = /*System.String$$Concat*/ func_0x029cfadc(plVar25,0);
        if (lVar23 == 0) goto code_r0x0152dc60;
        if (uStack_d8._4_4_ == -1) {
          lVar17 = *(long *)(lVar22 + 0x10);
          if (lVar17 == 0) goto code_r0x0152dc60;
          if (*(uint *)(lVar17 + 0x18) <= uVar31) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar17 = *(long *)(lVar17 + 0x10) + lVar29;
          uVar28 = uVar28 & 0xffffffff00000000 | (ulong)*(uint *)(lVar17 + 0x28);
          lVar17 = /*Atlas.UI.Screens.VotingScreen$$SetNewVote*/ func_0x0152dd08(lVar16,*(undefined8 *)(lVar17 + 0x20),uVar28);
        }
        lVar23 = *(long *)(lVar22 + 0x10);
        if (lVar23 == 0) goto code_r0x0152dc60;
        uVar31 = uVar31 + 1;
        uVar14 = (ulong)*(int *)(lVar23 + 0x18);
        lVar29 = lVar29 + 0xc;
      } while ((long)uVar31 < (long)uVar14);
    }
    lVar23 = *(long *)(lVar16 + 0xa0);
    if (lVar23 != 0) {
      uVar14 = 0;
      uVar27 = 0x3d25a40;
      while( true ) {
        if ((long)*(int *)(lVar23 + 0x18) <= (long)uVar14) {
          return lVar17;
        }
        lVar23 = *(long *)(lVar22 + 0x10);
        if (lVar23 == 0) break;
        uVar9 = 0;
        lVar29 = 0x20;
        while( true ) {
          lVar18 = *(long *)(lVar16 + 0xa0);
          if ((int)*(uint *)(lVar23 + 0x18) <= (int)uVar9) {
            if (lVar18 == 0) goto code_r0x0152dc60;
            if (*(uint *)(lVar18 + 0x18) <= uVar14) goto code_r0x0152dc84;
            lVar17 = *(long *)(lVar18 + uVar14 * 8 + 0x20);
            if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            if (lVar17 == 0) goto code_r0x0152dc60;
            *(undefined4 *)(lVar17 + 0x10) = **(undefined4 **)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xb8);
            lVar17 = *(long *)(lVar16 + 0xa0);
            if (lVar17 == 0) goto code_r0x0152dc60;
            if (*(uint *)(lVar17 + 0x18) <= uVar14) goto code_r0x0152dc84;
            plVar25 = (long *)(lVar17 + uVar14 * 8 + 0x20);
            lVar17 = *plVar25;
            if (lVar17 == 0) goto code_r0x0152dc60;
            *(undefined8 *)(lVar17 + 0x18) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
            lVar17 = *plVar25;
            if (((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x20), lVar17 == 0)) ||
               (lVar16 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar17,0), lVar16 == 0)) goto code_r0x0152dc60;
            uVar13 = 0;
            puVar33 = &UNK_0152dc54;
            goto code_r0x0322ef1c;
          }
          if (lVar18 == 0) goto code_r0x0152dc60;
          if (*(uint *)(lVar18 + 0x18) <= uVar14) goto code_r0x0152dc84;
          lVar18 = *(long *)(lVar18 + uVar14 * 8 + 0x20);
          if (lVar18 == 0) goto code_r0x0152dc60;
          iVar8 = *(int *)(lVar18 + 0x10);
          if (*(uint *)(lVar23 + 0x18) <= uVar9) {
            lVar17 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (iVar8 == *(int *)(*(long *)(lVar23 + 0x10) + lVar29)) break;
          uVar9 = uVar9 + 1;
          lVar23 = *(long *)(lVar22 + 0x10);
          lVar29 = lVar29 + 0xc;
          if (lVar23 == 0) goto code_r0x0152dc60;
        }
        uVar14 = uVar14 + 1;
        lVar23 = *(long *)(lVar16 + 0xa0);
        if (lVar23 == 0) break;
      }
    }
  }
code_r0x0152dc60:
  lVar17 = func_0x00f78af4();
  return lVar17;
}



// ============================================================
// RVA: 0x152d58c | Atlas.UI.Screens.VotingScreen.OnAfterExit
// ============================================================

long Atlas_UI_Screens_VotingScreen__OnAfterExit(long param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 unaff_x19;
  uint uVar17;
  ulong unaff_x20;
  undefined8 uVar18;
  long unaff_x21;
  long unaff_x22;
  ulong uVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  ulong uVar23;
  long *plVar24;
  undefined *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_68;
  
  puVar3 = &stack0xffffffffffffffc0;
  if ((bRam0000000003eb4e88 & 1) == 0) {
    func_0x00f78a20(0x3d29fa0);
    func_0x00f78a20(0x3d2a248);
    func_0x00f78a20(0x3d1b520);
    func_0x00f78a20(0x3d1b3d8);
    func_0x00f78a20(0x3d29730);
    func_0x00f78a20(0x3d41360);
    func_0x00f78a20(0x3d60128);
    func_0x00f78a20(0x3d60138);
    func_0x00f78a20(0x3d60140);
    bRam0000000003eb4e88 = 1;
  }
  uVar19 = *(ulong *)(param_1 + 0x90);
  lVar8 = unaff_x21;
  if (uVar19 != 0) {
    uVar18 = *(undefined8 *)(uVar19 + 0xf0);
    lVar8 = func_0x00f78aec(/*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730);
    /*Atlas.UI.VotingManager.OnVoteStageChanged$$.ctor*/ func_0x0156d908(lVar8,param_1,uRam0000000003d60138,0);
    plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar18,lVar8,0);
    if ((plVar9 != (long *)0x0) && (*plVar9 != /*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730)) goto LAB_0152d7d0;
    *(long **)(uVar19 + 0xf0) = plVar9;
  }
  if ((*(long *)(param_1 + 0x98) == 0) ||
     (lVar13 = *(long *)(*(long *)(param_1 + 0x98) + 0x20), lVar13 == 0)) {
LAB_0152d774:
    if (*(long *)(param_1 + 0x88) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_0152d7cc;
      Core_Application_CoroutineRunner__StopCoroutine
                (*(long *)(param_1 + 0x78),*(long *)(param_1 + 0x88),0);
    }
    lVar13 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41360);
    if ((lVar13 != 0) && (*(long *)(lVar13 + 0x10) != 0)) {
      uVar17 = *(uint *)(param_1 + 0x48);
      uVar19 = (ulong)uVar17;
      uVar18 = 1;
      lVar8 = *(long *)(*(long *)(lVar13 + 0x10) + 0x10);
      if (lVar8 == 0) {
        auVar26 = func_0x00f78af4();
        lVar8 = *(long *)(auVar26._0_8_ + 0x10);
        auVar26._8_8_ = auVar26._8_8_;
        auVar26._0_8_ = lVar8;
        if (lVar8 == 0) {
          lVar8 = func_0x00f78af4();
          if ((bRam0000000003eb4871 & 1) == 0) {
            func_0x00f78a20(0x3d2fb80);
            func_0x00f78a20(0x3d1c478);
            bRam0000000003eb4871 = 1;
          }
          uVar18 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
          /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar18,uRam0000000003d2fb80);
          *(undefined8 *)(lVar8 + 0x30) = uVar18;
          return lVar8;
        }
        puVar3 = &stack0xfffffffffffffff0;
        puVar25 = &Atlas_UI_AtlasUIManager__SetScreenVisible;
      }
      else {
        unaff_x19 = 1;
        unaff_x22 = 0x3ebc000;
        if ((bRam0000000003ebc651 & 1) == 0) {
          func_0x00f78a20(0x3d2a5c0,uVar19,1,0);
          func_0x00f78a20(0x3d3ddc8);
          bRam0000000003ebc651 = 1;
        }
        if (*(long *)(lVar8 + 0x68) != 0) {
          uVar18 = 0;
          lVar13 = /*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(lVar8 + 0x68),uVar19,0,0);
          lVar20 = *(long *)(lVar8 + 0x70);
          unaff_x22 = 0;
          if (lVar20 != 0) {
            if (*(uint *)(lVar20 + 0x18) <= uVar17) {
              lVar13 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if ((*(long *)(*(long *)(lVar20 + 0x10) + (long)(int)uVar17 * 0x28 + 0x28) == 0) ||
               (unaff_x22 = *(long *)(lVar8 + 0x30), unaff_x22 == 0)) {
              return lVar13;
            }
            lVar13 = *(long *)(lVar8 + 0x70);
            lVar8 = 0;
            if (lVar13 != 0) {
              if (*(uint *)(lVar13 + 0x18) <= uVar17) {
                /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
              }
              plVar9 = *(long **)(*(long *)(lVar13 + 0x10) + (long)(int)uVar17 * 0x28 + 0x28);
              lStack_68 = unaff_x22;
              lVar8 = *(long *)(unaff_x22 + 0x68);
              if (lVar8 == 0) {
                plVar24 = &lStack_68;
                lVar13 = 1;
              }
              else {
                lVar13 = *(long *)(lVar8 + 0x18);
                if (lVar13 == 0) {
                  return unaff_x22;
                }
                plVar24 = (long *)(lVar8 + 0x20);
              }
              lVar8 = 0;
              do {
                lVar20 = plVar24[lVar8];
                pcVar22 = *(code **)(lVar20 + 0x10);
                plVar1 = *(long **)(lVar20 + 0x20);
                lVar20 = *(long *)(lVar20 + 0x28);
                if (*(short *)(lVar20 + 0x48) == -1) {
                  func_0x00f78ad8(lVar20);
                }
                iVar6 = func_0x00f78a4c(lVar20);
                bVar4 = *(char *)(lVar20 + 0x4a) == '\x03';
                if (iVar6 == 0) {
                  if (bVar4) {
                    if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                      lVar20 = (*pcVar22)(plVar9,uVar19,1,lVar20);
                    }
                    else {
                      if (((*(short *)(lVar20 + 0x48) == -1) ||
                          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) ||
                         (*(long *)(unaff_x22 + 0x18) == 0)) goto code_r0x01e71aac;
                      iVar6 = func_0x00f78a44(lVar20);
                      iVar7 = func_0x00f78ec0(lVar20);
                      if (iVar6 == 0) {
                        uVar2 = *(ushort *)(lVar20 + 0x48);
                        if (iVar7 == 0) {
                          lVar20 = *plVar1 + (ulong)uVar2 * 0x10;
                          lVar20 = (**(code **)(lVar20 + 0x138))
                                             (plVar1,plVar9,uVar19,1,*(undefined8 *)(lVar20 + 0x140)
                                             );
                          goto code_r0x01e71bd0;
                        }
                        lVar20 = func_0x00f78a48(lVar20);
                        lVar14 = *plVar1;
                        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                        if (uVar15 != 0) {
                          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar16 + -2) == lVar20) {
                              puVar11 = (undefined8 *)
                                        (lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138
                                        );
                              goto code_r0x01e71d74;
                            }
                            piVar16 = piVar16 + 4;
                            uVar15 = uVar15 - 1;
                          } while (uVar15 != 0);
                        }
                        puVar11 = (undefined8 *)func_0x00fac1f0(plVar1,lVar20,(ulong)uVar2);
code_r0x01e71d74:
                        pcVar22 = (code *)*puVar11;
                        puVar11 = (undefined8 *)puVar11[1];
                      }
                      else {
                        if (iVar7 == 0) {
                          uVar18 = *(undefined8 *)
                                    (*plVar1 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                        }
                        else {
                          lVar14 = *plVar1;
                          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                          if (uVar15 != 0) {
                            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar16 + -2) == *(long *)(lVar20 + 0x18)) {
                                lVar14 = lVar14 + (long)(int)(*piVar16 +
                                                             (uint)*(ushort *)(lVar20 + 0x48)) *
                                                  0x10 + 0x138;
                                goto code_r0x01e71d4c;
                              }
                              piVar16 = piVar16 + 4;
                              uVar15 = uVar15 - 1;
                            } while (uVar15 != 0);
                          }
                          lVar14 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                          uVar18 = *(undefined8 *)(lVar14 + 8);
                        }
                        puVar11 = (undefined8 *)func_0x00f78acc(uVar18,lVar20);
                        pcVar22 = (code *)*puVar11;
                      }
                      lVar20 = (*pcVar22)(plVar1,plVar9,uVar19,1,puVar11);
                    }
                  }
                  else {
                    if ((*(short *)(lVar20 + 0x48) == -1) || (*(long *)(unaff_x22 + 0x18) == 0))
                    goto code_r0x01e71bbc;
                    iVar6 = func_0x00f78a44(lVar20);
                    iVar7 = func_0x00f78ec0(lVar20);
                    if (iVar6 == 0) {
                      uVar2 = *(ushort *)(lVar20 + 0x48);
                      if (iVar7 == 0) {
                        lVar20 = *plVar9 + (ulong)uVar2 * 0x10;
                        lVar20 = (**(code **)(lVar20 + 0x138))
                                           (plVar9,uVar19,1,*(undefined8 *)(lVar20 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar20 = func_0x00f78a48(lVar20);
                      lVar14 = *plVar9;
                      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                      if (uVar15 != 0) {
                        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar16 + -2) == lVar20) {
                            puVar11 = (undefined8 *)
                                      (lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                            goto code_r0x01e71d00;
                          }
                          piVar16 = piVar16 + 4;
                          uVar15 = uVar15 - 1;
                        } while (uVar15 != 0);
                      }
                      puVar11 = (undefined8 *)func_0x00fac1f0(plVar9,lVar20,(ulong)uVar2);
code_r0x01e71d00:
                      pcVar22 = (code *)*puVar11;
                      puVar11 = (undefined8 *)puVar11[1];
                    }
                    else {
                      if (iVar7 == 0) {
                        uVar18 = *(undefined8 *)
                                  (*plVar9 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar14 = *plVar9;
                        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
                        if (uVar15 != 0) {
                          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar16 + -2) == *(long *)(lVar20 + 0x18)) {
                              lVar14 = lVar14 + (long)(int)(*piVar16 +
                                                           (uint)*(ushort *)(lVar20 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71cd8;
                            }
                            piVar16 = piVar16 + 4;
                            uVar15 = uVar15 - 1;
                          } while (uVar15 != 0);
                        }
                        lVar14 = func_0x00fac1f0(plVar9);
code_r0x01e71cd8:
                        uVar18 = *(undefined8 *)(lVar14 + 8);
                      }
                      puVar11 = (undefined8 *)func_0x00f78acc(uVar18,lVar20);
                      pcVar22 = (code *)*puVar11;
                    }
                    lVar20 = (*pcVar22)(plVar9,uVar19,1,puVar11);
                  }
                }
                else {
                  if (bVar4) goto code_r0x01e71bbc;
code_r0x01e71aac:
                  lVar20 = (*pcVar22)(plVar1,plVar9,uVar19,1,lVar20);
                }
code_r0x01e71bd0:
                lVar8 = lVar8 + 1;
                if (lVar8 == lVar13) {
                  return lVar20;
                }
              } while( true );
            }
          }
        }
        puVar25 = &Core_UI2_UIManager__SetScreenVisible;
        auVar26 = func_0x00f78af4();
        unaff_x20 = uVar19;
        unaff_x21 = lVar8;
      }
      lVar13 = auVar26._0_8_;
      *(long *)(puVar3 + -0x30) = unaff_x22;
      *(long *)(puVar3 + -0x28) = unaff_x21;
      *(ulong *)(puVar3 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x10) = &stack0xfffffffffffffff0;
      *(undefined **)(puVar3 + -8) = puVar25;
      lVar8 = lVar13;
      if ((bRam0000000003ebc652 & 1) == 0) {
        lVar8 = func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc652 = 1;
      }
      lVar20 = *(long *)(lVar13 + 0x70);
      if (lVar20 != 0) {
        uVar17 = auVar26._8_4_;
        if (*(uint *)(lVar20 + 0x18) <= uVar17) {
          lVar8 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        if (*(long *)(*(long *)(lVar20 + 0x10) + (long)(int)uVar17 * 0x28 + 0x28) == 0) {
          return lVar8;
        }
        lVar8 = *(long *)(lVar13 + 0x70);
        if (lVar8 != 0) {
          if (*(uint *)(lVar8 + 0x18) <= uVar17) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar17 * 0x28 + 0x28);
          if ((lVar8 != 0) && (plVar9 = *(long **)(lVar8 + 0x28), plVar9 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            lVar8 = (**(code **)(*plVar9 + 0x178))(plVar9,uVar18,*(undefined8 *)(*plVar9 + 0x180));
            return lVar8;
          }
        }
      }
      auVar27 = func_0x00f78af4();
      uVar12 = auVar27._0_8_;
      *(long *)(puVar3 + -0x50) = auVar26._8_8_;
      *(undefined8 *)(puVar3 + -0x48) = uVar18;
      *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
      *(undefined **)(puVar3 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
      *(undefined8 *)(puVar3 + -0x68) = 0;
      *(undefined8 *)(puVar3 + -0x70) = 0;
      *(undefined8 *)(puVar3 + -0x58) = 0;
      *(undefined8 *)(puVar3 + -0x60) = 0;
      lVar8 = /*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar12,auVar27._8_8_,puVar3 + -0x70);
      if ((int)lVar8 != 0) {
        /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar12,*(undefined8 *)(puVar3 + -0x60),*(undefined8 *)(puVar3 + -0x58));
        *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x68);
        *(undefined8 *)(puVar3 + -0x90) = *(undefined8 *)(puVar3 + -0x70);
        *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x58);
        *(undefined8 *)(puVar3 + -0x80) = *(undefined8 *)(puVar3 + -0x60);
        lVar8 = /*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar12,puVar3 + -0x90,1);
      }
      return lVar8;
    }
  }
  else {
    uVar19 = *(ulong *)(lVar13 + 0x10);
    if (uVar19 != 0) {
      uVar18 = *(undefined8 *)(uVar19 + 0x48);
      lVar8 = func_0x00f78aec(/*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520);
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar8,param_1,uRam0000000003d60140,uRam0000000003d2a248);
      plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar18,lVar8,0);
      if ((plVar9 != (long *)0x0) && (*plVar9 != /*System.Action<NetworkVoteUpdate>_TypeInfo*/ lRam0000000003d1b520)) goto LAB_0152d7d0;
      *(long **)(uVar19 + 0x48) = plVar9;
      if ((*(long *)(param_1 + 0x98) != 0) &&
         ((lVar13 = *(long *)(*(long *)(param_1 + 0x98) + 0x20), lVar13 != 0 &&
          (uVar19 = *(ulong *)(lVar13 + 0x10), uVar19 != 0)))) {
        uVar18 = *(undefined8 *)(uVar19 + 0x90);
        lVar8 = func_0x00f78aec(/*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8);
        /*System.Action<bool>$$.ctor*/ func_0x01b42d40(lVar8,param_1,uRam0000000003d60128,uRam0000000003d29fa0);
        plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar18,lVar8,0);
        if ((plVar9 != (long *)0x0) && (*plVar9 != /*System.Action<bool>_TypeInfo*/ lRam0000000003d1b3d8)) goto LAB_0152d7d0;
        *(long **)(uVar19 + 0x90) = plVar9;
        goto LAB_0152d774;
      }
    }
  }
LAB_0152d7cc:
  func_0x00f78af4();
LAB_0152d7d0:
  auVar26 = func_0x00f78e5c();
  lVar14 = auVar26._8_8_;
  lVar20 = auVar26._0_8_;
  lVar13 = lVar20;
  lStack_68 = lVar8;
  if ((bRam0000000003eb4e89 & 1) == 0) {
    func_0x00f78a20(0x3d3b688);
    func_0x00f78a20(0x3d3b690);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25a40);
    func_0x00f78a20(0x3d70ba8);
    func_0x00f78a20(0x3d65ed8);
    lVar13 = func_0x00f78a20(0x3d662b0);
    bRam0000000003eb4e89 = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  if ((lVar14 != 0) && (lVar8 = *(long *)(lVar14 + 0x10), lVar8 != 0)) {
    uVar15 = (ulong)*(uint *)(lVar8 + 0x18);
    if (0 < (int)*(uint *)(lVar8 + 0x18)) {
      lVar21 = 0;
      uVar23 = 0;
      do {
        if ((uVar15 & 0xffffffff) <= uVar23) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar5 = /*Atlas.UI.Screens.VotingScreen$$GetVoteInfoIndex*/ func_0x0152dc98(lVar20,*(undefined4 *)(*(long *)(lVar8 + 0x10) + lVar21 + 0x20));
        uStack_a8 = CONCAT44(uVar5,(undefined4)uStack_a8);
        lVar8 = *(long *)(lVar20 + 0x90);
        plVar9 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,6);
        if (plVar9 == (long *)0x0) goto code_r0x0152dc60;
        if ((/*STR('OnVoteUpdate ')*/ lRam0000000003d70ba8 != 0) &&
           (lVar13 = func_0x00f78adc(/*STR('OnVoteUpdate ')*/ lRam0000000003d70ba8,*(undefined8 *)(*plVar9 + 0x40)),
           lVar13 == 0)) goto code_r0x0152dc90;
        if ((int)plVar9[3] == 0) goto code_r0x0152dc84;
        plVar9[4] = /*STR('OnVoteUpdate ')*/ lRam0000000003d70ba8;
        lVar13 = *(long *)(lVar14 + 0x10);
        if (lVar13 == 0) goto code_r0x0152dc60;
        if (*(uint *)(lVar13 + 0x18) <= uVar23) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar13 = *(long *)(lVar13 + 0x10) + lVar21;
        uStack_b0 = *(undefined8 *)(lVar13 + 0x20);
        uStack_a8 = CONCAT44(uStack_a8._4_4_,*(undefined4 *)(lVar13 + 0x28));
        lVar13 = /*System.UInt32$$ToString*/ func_0x02a0b3d0(&uStack_b0,0);
        if ((lVar13 != 0) &&
           (lVar10 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
        goto code_r0x0152dc90;
        uVar17 = (uint)plVar9[3];
        if ((plVar9[3] & 0xfffffffeU) == 0) goto code_r0x0152dc84;
        plVar9[5] = lVar13;
        if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
          lVar13 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar13 == 0) goto code_r0x0152dc90;
          uVar17 = (uint)plVar9[3];
        }
        if (uVar17 < 3) goto code_r0x0152dc84;
        plVar9[6] = /*STR(' ')*/ lRam0000000003d65ed8;
        lVar13 = *(long *)(lVar14 + 0x10);
        if (lVar13 == 0) goto code_r0x0152dc60;
        if (*(uint *)(lVar13 + 0x18) <= uVar23) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar13 = *(long *)(lVar13 + 0x10) + lVar21;
        uStack_b0 = *(undefined8 *)(lVar13 + 0x20);
        uStack_a8 = CONCAT44(uStack_a8._4_4_,*(undefined4 *)(lVar13 + 0x28));
        lVar13 = /*System.Int16$$ToString*/ func_0x02ae8e6c((ulong)&uStack_b0 | 4,0);
        if ((lVar13 != 0) &&
           (lVar10 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
        goto code_r0x0152dc90;
        uVar17 = (uint)plVar9[3];
        if ((plVar9[3] & 0xfffffffcU) == 0) goto code_r0x0152dc84;
        plVar9[7] = lVar13;
        if (/*STR(' index ')*/ lRam0000000003d662b0 != 0) {
          lVar13 = func_0x00f78adc(/*STR(' index ')*/ lRam0000000003d662b0,*(undefined8 *)(*plVar9 + 0x40));
          if (lVar13 == 0) goto code_r0x0152dc90;
          uVar17 = (uint)plVar9[3];
        }
        if (uVar17 < 5) goto code_r0x0152dc84;
        plVar9[8] = /*STR(' index ')*/ lRam0000000003d662b0;
        lVar13 = /*System.Int32$$ToString*/ func_0x02ae9b8c((long)&uStack_a8 + 4,0);
        if ((lVar13 != 0) &&
           (lVar10 = func_0x00f78adc(lVar13,*(undefined8 *)(*plVar9 + 0x40)), lVar10 == 0))
        goto code_r0x0152dc90;
        if (*(uint *)(plVar9 + 3) < 6) goto code_r0x0152dc84;
        plVar9[9] = lVar13;
        lVar13 = /*System.String$$Concat*/ func_0x029cfadc(plVar9,0);
        if (lVar8 == 0) goto code_r0x0152dc60;
        if (uStack_a8._4_4_ == -1) {
          lVar8 = *(long *)(lVar14 + 0x10);
          if (lVar8 == 0) goto code_r0x0152dc60;
          if (*(uint *)(lVar8 + 0x18) <= uVar23) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar8 = *(long *)(lVar8 + 0x10) + lVar21;
          uVar19 = uVar19 & 0xffffffff00000000 | (ulong)*(uint *)(lVar8 + 0x28);
          lVar13 = /*Atlas.UI.Screens.VotingScreen$$SetNewVote*/ func_0x0152dd08(lVar20,*(undefined8 *)(lVar8 + 0x20),uVar19);
        }
        lVar8 = *(long *)(lVar14 + 0x10);
        if (lVar8 == 0) goto code_r0x0152dc60;
        uVar23 = uVar23 + 1;
        uVar15 = (ulong)*(int *)(lVar8 + 0x18);
        lVar21 = lVar21 + 0xc;
      } while ((long)uVar23 < (long)uVar15);
    }
    lVar8 = *(long *)(lVar20 + 0xa0);
    if (lVar8 != 0) {
      uVar19 = 0;
      while( true ) {
        if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar19) {
          return lVar13;
        }
        lVar8 = *(long *)(lVar14 + 0x10);
        if (lVar8 == 0) break;
        uVar17 = 0;
        lVar21 = 0x20;
        while( true ) {
          lVar10 = *(long *)(lVar20 + 0xa0);
          if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar17) break;
          if (lVar10 == 0) goto code_r0x0152dc60;
          if (*(uint *)(lVar10 + 0x18) <= uVar19) goto code_r0x0152dc84;
          lVar10 = *(long *)(lVar10 + uVar19 * 8 + 0x20);
          if (lVar10 == 0) goto code_r0x0152dc60;
          iVar6 = *(int *)(lVar10 + 0x10);
          if (*(uint *)(lVar8 + 0x18) <= uVar17) {
            lVar13 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (iVar6 == *(int *)(*(long *)(lVar8 + 0x10) + lVar21)) goto code_r0x0152dc54;
          uVar17 = uVar17 + 1;
          lVar8 = *(long *)(lVar14 + 0x10);
          lVar21 = lVar21 + 0xc;
          if (lVar8 == 0) goto code_r0x0152dc60;
        }
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar19) {
code_r0x0152dc84:
          uVar18 = func_0x00f78b24();
          do {
            func_0x00f78ac0(uVar18,0);
code_r0x0152dc90:
            uVar18 = func_0x00f78b14();
          } while( true );
        }
        lVar8 = *(long *)(lVar10 + uVar19 * 8 + 0x20);
        if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar8 == 0) break;
        *(undefined4 *)(lVar8 + 0x10) = **(undefined4 **)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xb8);
        lVar8 = *(long *)(lVar20 + 0xa0);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar19) goto code_r0x0152dc84;
        plVar9 = (long *)(lVar8 + uVar19 * 8 + 0x20);
        lVar8 = *plVar9;
        if (lVar8 == 0) break;
        *(undefined8 *)(lVar8 + 0x18) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        lVar8 = *plVar9;
        if (((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x20), lVar8 == 0)) ||
           (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0), lVar8 == 0)) break;
        lVar13 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,0,0);
code_r0x0152dc54:
        uVar19 = uVar19 + 1;
        lVar8 = *(long *)(lVar20 + 0xa0);
        if (lVar8 == 0) break;
      }
    }
  }
code_r0x0152dc60:
  lVar8 = func_0x00f78af4();
  return lVar8;
}



// ============================================================
// RVA: 0x152d7d4 | Atlas.UI.Screens.VotingScreen.OnVoteUpdate
// ============================================================

void Atlas_UI_Screens_VotingScreen__OnVoteUpdate(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong unaff_x22;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000003eb4e89 & 1) == 0) {
    func_0x00f78a20(0x3d3b688);
    func_0x00f78a20(0x3d3b690);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d24dd0);
    func_0x00f78a20(0x3d25a40);
    func_0x00f78a20(0x3d70ba8);
    func_0x00f78a20(0x3d65ed8);
    func_0x00f78a20(0x3d662b0);
    bRam0000000003eb4e89 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  if ((param_2 != 0) && (lVar8 = *(long *)(param_2 + 0x10), lVar8 != 0)) {
    uVar7 = (ulong)*(uint *)(lVar8 + 0x18);
    if (0 < (int)*(uint *)(lVar8 + 0x18)) {
      lVar10 = 0;
      uVar11 = 0;
      do {
        if ((uVar7 & 0xffffffff) <= uVar11) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        uVar2 = /*Atlas.UI.Screens.VotingScreen$$GetVoteInfoIndex*/ func_0x0152dc98(param_1,*(undefined4 *)(*(long *)(lVar8 + 0x10) + lVar10 + 0x20));
        uStack_68 = CONCAT44(uVar2,(undefined4)uStack_68);
        lVar8 = *(long *)(param_1 + 0x90);
        plVar3 = (long *)func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,6);
        if (plVar3 == (long *)0x0) goto LAB_0152dc60;
        if ((/*STR('OnVoteUpdate ')*/ lRam0000000003d70ba8 != 0) &&
           (lVar4 = func_0x00f78adc(/*STR('OnVoteUpdate ')*/ lRam0000000003d70ba8,*(undefined8 *)(*plVar3 + 0x40)),
           lVar4 == 0)) goto LAB_0152dc90;
        if ((int)plVar3[3] == 0) goto LAB_0152dc84;
        plVar3[4] = /*STR('OnVoteUpdate ')*/ lRam0000000003d70ba8;
        lVar4 = *(long *)(param_2 + 0x10);
        if (lVar4 == 0) goto LAB_0152dc60;
        if (*(uint *)(lVar4 + 0x18) <= uVar11) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar4 = *(long *)(lVar4 + 0x10) + lVar10;
        uStack_70 = *(undefined8 *)(lVar4 + 0x20);
        uStack_68 = CONCAT44(uStack_68._4_4_,*(undefined4 *)(lVar4 + 0x28));
        lVar4 = /*System.UInt32$$ToString*/ func_0x02a0b3d0(&uStack_70,0);
        if ((lVar4 != 0) &&
           (lVar5 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_0152dc90;
        uVar9 = (uint)plVar3[3];
        if ((plVar3[3] & 0xfffffffeU) == 0) goto LAB_0152dc84;
        plVar3[5] = lVar4;
        if (/*STR(' ')*/ lRam0000000003d65ed8 != 0) {
          lVar4 = func_0x00f78adc(/*STR(' ')*/ lRam0000000003d65ed8,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar4 == 0) goto LAB_0152dc90;
          uVar9 = (uint)plVar3[3];
        }
        if (uVar9 < 3) goto LAB_0152dc84;
        plVar3[6] = /*STR(' ')*/ lRam0000000003d65ed8;
        lVar4 = *(long *)(param_2 + 0x10);
        if (lVar4 == 0) goto LAB_0152dc60;
        if (*(uint *)(lVar4 + 0x18) <= uVar11) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar4 = *(long *)(lVar4 + 0x10) + lVar10;
        uStack_70 = *(undefined8 *)(lVar4 + 0x20);
        uStack_68 = CONCAT44(uStack_68._4_4_,*(undefined4 *)(lVar4 + 0x28));
        lVar4 = /*System.Int16$$ToString*/ func_0x02ae8e6c((ulong)&uStack_70 | 4,0);
        if ((lVar4 != 0) &&
           (lVar5 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_0152dc90;
        uVar9 = (uint)plVar3[3];
        if ((plVar3[3] & 0xfffffffcU) == 0) goto LAB_0152dc84;
        plVar3[7] = lVar4;
        if (/*STR(' index ')*/ lRam0000000003d662b0 != 0) {
          lVar4 = func_0x00f78adc(/*STR(' index ')*/ lRam0000000003d662b0,*(undefined8 *)(*plVar3 + 0x40));
          if (lVar4 == 0) goto LAB_0152dc90;
          uVar9 = (uint)plVar3[3];
        }
        if (uVar9 < 5) goto LAB_0152dc84;
        plVar3[8] = /*STR(' index ')*/ lRam0000000003d662b0;
        lVar4 = /*System.Int32$$ToString*/ func_0x02ae9b8c((long)&uStack_68 + 4,0);
        if ((lVar4 != 0) &&
           (lVar5 = func_0x00f78adc(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_0152dc90;
        if (*(uint *)(plVar3 + 3) < 6) goto LAB_0152dc84;
        plVar3[9] = lVar4;
        /*System.String$$Concat*/ func_0x029cfadc(plVar3,0);
        if (lVar8 == 0) goto LAB_0152dc60;
        if (uStack_68._4_4_ == -1) {
          lVar8 = *(long *)(param_2 + 0x10);
          if (lVar8 == 0) goto LAB_0152dc60;
          if (*(uint *)(lVar8 + 0x18) <= uVar11) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar8 = *(long *)(lVar8 + 0x10) + lVar10;
          unaff_x22 = unaff_x22 & 0xffffffff00000000 | (ulong)*(uint *)(lVar8 + 0x28);
          /*Atlas.UI.Screens.VotingScreen$$SetNewVote*/ func_0x0152dd08(param_1,*(undefined8 *)(lVar8 + 0x20),unaff_x22);
        }
        lVar8 = *(long *)(param_2 + 0x10);
        if (lVar8 == 0) goto LAB_0152dc60;
        uVar11 = uVar11 + 1;
        uVar7 = (ulong)*(int *)(lVar8 + 0x18);
        lVar10 = lVar10 + 0xc;
      } while ((long)uVar11 < (long)uVar7);
    }
    lVar8 = *(long *)(param_1 + 0xa0);
    if (lVar8 != 0) {
      uVar7 = 0;
      while( true ) {
        if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar7) {
          return;
        }
        lVar8 = *(long *)(param_2 + 0x10);
        if (lVar8 == 0) break;
        uVar9 = 0;
        lVar10 = 0x20;
        while( true ) {
          lVar4 = *(long *)(param_1 + 0xa0);
          if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar9) break;
          if (lVar4 == 0) goto LAB_0152dc60;
          if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_0152dc84;
          lVar4 = *(long *)(lVar4 + uVar7 * 8 + 0x20);
          if (lVar4 == 0) goto LAB_0152dc60;
          iVar1 = *(int *)(lVar4 + 0x10);
          if (*(uint *)(lVar8 + 0x18) <= uVar9) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if (iVar1 == *(int *)(*(long *)(lVar8 + 0x10) + lVar10)) goto LAB_0152dc54;
          uVar9 = uVar9 + 1;
          lVar8 = *(long *)(param_2 + 0x10);
          lVar10 = lVar10 + 0xc;
          if (lVar8 == 0) goto LAB_0152dc60;
        }
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) {
LAB_0152dc84:
          uVar6 = func_0x00f78b24();
          do {
            func_0x00f78ac0(uVar6,0);
LAB_0152dc90:
            uVar6 = func_0x00f78b14();
          } while( true );
        }
        lVar8 = *(long *)(lVar4 + uVar7 * 8 + 0x20);
        if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if (lVar8 == 0) break;
        *(undefined4 *)(lVar8 + 0x10) = **(undefined4 **)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xb8);
        lVar8 = *(long *)(param_1 + 0xa0);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_0152dc84;
        plVar3 = (long *)(lVar8 + uVar7 * 8 + 0x20);
        lVar8 = *plVar3;
        if (lVar8 == 0) break;
        *(undefined8 *)(lVar8 + 0x18) = **(undefined8 **)(/*string_TypeInfo*/ lRam0000000003d24dd0 + 0xb8);
        lVar8 = *plVar3;
        if (((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x20), lVar8 == 0)) ||
           (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0), lVar8 == 0)) break;
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,0,0);
LAB_0152dc54:
        uVar7 = uVar7 + 1;
        lVar8 = *(long *)(param_1 + 0xa0);
        if (lVar8 == 0) break;
      }
    }
  }
LAB_0152dc60:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x152dc98 | Atlas.UI.Screens.VotingScreen.GetVoteInfoIndex
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_VotingScreen__GetVoteInfoIndex(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  ulong uVar39;
  long *plVar40;
  undefined8 uVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long *plVar45;
  undefined4 *puVar46;
  long *plVar47;
  long *plVar48;
  undefined8 extraout_x1;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  uint uVar55;
  long unaff_x22;
  long unaff_x25;
  long unaff_x26;
  long unaff_x28;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long alStack_f8 [8];
  undefined1 auStack_b8 [32];
  long *plStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  
  lVar49 = *(long *)(param_1 + 0xa0);
  if (lVar49 != 0) {
    uVar55 = *(uint *)(lVar49 + 0x18);
    if (0 < (int)uVar55) {
      uVar39 = 0;
      do {
        uVar38 = (uint)uVar39;
        if (uVar55 == uVar38) {
          uVar41 = func_0x00f78b24();
          func_0x00f78ac0(uVar41,0);
          goto LAB_0152dd04;
        }
        lVar54 = *(long *)(lVar49 + (long)(int)uVar38 * 8 + 0x20);
        if (lVar54 == 0) goto LAB_0152dd04;
        if (*(int *)(lVar54 + 0x10) == param_2) {
          return uVar39;
        }
        uVar39 = (ulong)(uVar38 + 1);
      } while (uVar55 != uVar38 + 1);
    }
    return 0xffffffff;
  }
LAB_0152dd04:
  auVar56 = func_0x00f78af4();
  uStack_90 = auVar56._8_8_;
  lVar54 = auVar56._0_8_;
  lVar49 = 0x3eb4000;
  uStack_88 = param_3;
  if ((bRam0000000003eb4e8a & 1) == 0) {
    func_0x00f78a20(0x3d20658);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d57360);
    func_0x00f78a20(0x3d3b528);
    func_0x00f78a20(0x3d282d0);
    func_0x00f78a20(0x3d3f438);
    func_0x00f78a20(0x3d1e5a8);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d64948);
    func_0x00f78a20(0x3d29768);
    func_0x00f78a20(0x3d41350);
    func_0x00f78a20(0x3d41360);
    func_0x00f78a20(0x3d25a40);
    func_0x00f78a20(0x3d66340);
    func_0x00f78a20(0x3d65ed8);
    func_0x00f78a20(0x3d79100);
    func_0x00f78a20(0x3d662f8);
    func_0x00f78a20(0x3d72798);
    func_0x00f78a20(0x3d727a0);
    bRam0000000003eb4e8a = 1;
  }
  plStack_98 = (long *)0x0;
  auVar57 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar54,uRam0000000003d41350);
  auVar58._8_8_ = 0;
  auVar58._0_8_ = auVar57._8_8_;
  plVar40 = (long *)0x3d41350;
  auVar56 = auVar58 << 0x40;
  if (auVar57._0_8_ != 0) {
    unaff_x28 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(auVar57._0_8_,0);
    auVar58 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar54,uRam0000000003d41350);
    auVar57._8_8_ = 0;
    auVar57._0_8_ = auVar58._8_8_;
    auVar56 = auVar57 << 0x40;
    if (auVar58._0_8_ != 0) {
      auVar56 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(auVar58._0_8_,1);
      lVar52 = auVar56._0_8_;
      plVar40 = (long *)0x3d41350;
      if ((*(long *)(lVar54 + 0x98) != 0) &&
         (lVar50 = *(long *)(*(long *)(lVar54 + 0x98) + 0x20), lVar50 != 0)) {
        lVar49 = 0x3d72000;
        unaff_x22 = 0x3d65000;
        unaff_x26 = *(long *)(lVar50 + 400);
        lVar50 = *(long *)(lVar54 + 0x90);
        plVar40 = (long *)/*System.UInt32$$ToString*/ func_0x02a0b3d0(&uStack_90,0);
        uVar41 = /*System.Int16$$ToString*/ func_0x02ae8e6c((ulong)&uStack_90 | 4,0);
        auVar56 = /*System.String$$Concat*/ func_0x029be818(/*STR('SetNewVote1 ')*/ uRam0000000003d72798,plVar40,/*STR(' ')*/ uRam0000000003d65ed8,uVar41,0);
        unaff_x25 = lVar52;
        if ((lVar50 != 0) && (lVar50 = *(long *)(lVar54 + 0xa0), lVar50 != 0)) {
          plVar40 = alStack_f8;
          lVar49 = 4;
          do {
            uVar41 = auVar56._8_8_;
            unaff_x22 = lVar49 + -4;
            if ((int)*(uint *)(lVar50 + 0x18) <= (int)(uint)unaff_x22) {
              return auVar56._0_8_;
            }
            if (*(uint *)(lVar50 + 0x18) <= (uint)unaff_x22) goto code_r0x0152e65c;
            lVar50 = *(long *)(lVar50 + lVar49 * 8);
            if (lVar50 == 0) break;
            iVar1 = *(int *)(lVar50 + 0x10);
            if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xe0) == 0)) {
              func_0x00f78ad0();
              uVar41 = extraout_x1;
            }
            auVar56._8_8_ = uVar41;
            auVar56._0_8_ = /*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40;
            lVar50 = unaff_x26;
            lVar53 = unaff_x28;
            if (iVar1 == **(int **)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xb8)) goto code_r0x0152df58;
            lVar50 = *(long *)(lVar54 + 0xa0);
            lVar49 = lVar49 + 1;
          } while (lVar50 != 0);
        }
      }
    }
  }
code_r0x0152df54:
  do {
    do {
      do {
        do {
          do {
            do {
              do {
                do {
                  do {
                    do {
                      do {
                        do {
                          do {
                            do {
                              do {
                                do {
                                  do {
                                    do {
                                      do {
                                        do {
                                          do {
                                            func_0x00f78af4(auVar56._0_8_,auVar56._8_8_);
                                            lVar52 = unaff_x25;
                                            lVar50 = unaff_x26;
                                            lVar53 = unaff_x28;
code_r0x0152df58:
                                            lVar42 = func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.<>c__DisplayClass25_0_TypeInfo*/ uRam0000000003d29768);
                                            auVar56 = /*Atlas.UI.Screens.VotingScreen.<>c__DisplayClass25_0$$.ctor*/ func_0x0156df14(lVar42,0);
                                            unaff_x25 = lVar52;
                                            unaff_x26 = lVar50;
                                            unaff_x28 = lVar53;
                                          } while (*(long *)(lVar54 + 0x98) == 0);
                                          lVar43 = *(long *)(*(long *)(lVar54 + 0x98) + 0x20);
                                          auVar5._8_8_ = 0;
                                          auVar5._0_8_ = auVar56._8_8_;
                                          auVar56 = auVar5 << 0x40;
                                        } while (lVar43 == 0);
                                        auVar56 = /*Core.Networking.NetworkSession$$GetPlayer*/ func_0x0165eab8(auStack_b8,lVar43,
                                                                  uStack_90 & 0xffffffff,0);
                                      } while (lVar42 == 0);
                                      lVar44 = plVar40[8];
                                      lVar51 = plVar40[0xb];
                                      lVar43 = plVar40[10];
                                      *(long *)(lVar42 + 0x18) = plVar40[9];
                                      *(long *)(lVar42 + 0x10) = lVar44;
                                      *(long *)(lVar42 + 0x28) = lVar51;
                                      *(long *)(lVar42 + 0x20) = lVar43;
                                    } while (*(long *)(lVar54 + 0x98) == 0);
                                    lVar43 = *(long *)(*(long *)(lVar54 + 0x98) + 0x28);
                                    auVar6._8_8_ = 0;
                                    auVar6._0_8_ = auVar56._8_8_;
                                    auVar56 = auVar6 << 0x40;
                                  } while (lVar43 == 0);
                                  /*Atlas.Networking.NetworkLobby$$GetLoadoutFromSyncId*/ func_0x014a98b8(alStack_f8,lVar43,*(undefined4 *)(lVar42 + 0x1c),0
                                                 );
                                  lStack_178 = plVar40[1];
                                  lStack_180 = *plVar40;
                                  lStack_168 = plVar40[3];
                                  lStack_170 = plVar40[2];
                                  lStack_158 = plVar40[5];
                                  lStack_160 = plVar40[4];
                                  lStack_148 = plVar40[7];
                                  lStack_150 = plVar40[6];
                                  auVar56 = Atlas_Gameplay_KartLoadout__FromNetworkLoadOut
                                                      (&plStack_140,&lStack_180,0);
                                  plVar48 = plStack_140;
                                } while (*(long *)(lVar54 + 0x80) == 0);
                                lVar43 = *(long *)(*(long *)(lVar54 + 0x80) + 0x10);
                                auVar7._8_8_ = 0;
                                auVar7._0_8_ = auVar56._8_8_;
                                auVar56 = auVar7 << 0x40;
                              } while (lVar43 == 0);
                              auVar58 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar43,plStack_140,uRam0000000003d57270);
                              plVar40 = plVar48;
                              auVar56 = auVar58;
                            } while (*(long *)(lVar54 + 0x80) == 0);
                            lVar43 = *(long *)(*(long *)(lVar54 + 0x80) + 0x10);
                            auVar8._8_8_ = 0;
                            auVar8._0_8_ = auVar58._8_8_;
                            auVar56 = auVar8 << 0x40;
                          } while (lVar43 == 0);
                          auVar56 = /*Core.Definitions.GameDefinitions$$GetFirstDefinition<object>*/ func_0x0185c7fc(lVar43,uRam0000000003d57360);
                          lVar43 = auVar56._0_8_;
                          lVar51 = *(long *)(lVar54 + 0xa0);
                        } while (lVar51 == 0);
                        uVar55 = (uint)unaff_x22;
                        if (*(uint *)(lVar51 + 0x18) <= uVar55) goto code_r0x0152e65c;
                        lVar51 = *(long *)(lVar51 + lVar49 * 8);
                      } while (lVar51 == 0);
                      *(undefined4 *)(lVar51 + 0x10) = (undefined4)uStack_90;
                      uStack_138 = *(undefined8 *)(lVar42 + 0x18);
                      plStack_140 = *(long **)(lVar42 + 0x10);
                      uStack_128 = *(undefined8 *)(lVar42 + 0x28);
                      uStack_130 = *(undefined8 *)(lVar42 + 0x20);
                      auVar57 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar54,uRam0000000003d41360);
                      auVar9._8_8_ = 0;
                      auVar9._0_8_ = auVar57._8_8_;
                      auVar56 = auVar9 << 0x40;
                    } while (auVar57._0_8_ == 0);
                    unaff_x28 = *(long *)(auVar57._0_8_ + 0x50);
                    auVar56 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar54,uRam0000000003d41360);
                  } while ((auVar56._0_8_ == 0) ||
                          (lVar51 = *(long *)(auVar56._0_8_ + 0x20), lVar51 == 0));
                  plVar40 = *(long **)(lVar51 + 0x10);
                  auVar57 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar54,uRam0000000003d41360);
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = auVar57._8_8_;
                  auVar56 = auVar10 << 0x40;
                } while (auVar57._0_8_ == 0);
                uVar41 = *(undefined8 *)(auVar57._0_8_ + 0x88);
                unaff_x25 = func_0x00f78aec(/*Atlas.UI.CharacterMetagameData_TypeInfo*/ uRam0000000003d20658);
                uStack_198 = uStack_138;
                plStack_1a0 = plStack_140;
                uStack_188 = uStack_128;
                uStack_190 = uStack_130;
                /*Atlas.UI.CharacterMetagameData$$.ctor*/ func_0x015412cc(unaff_x25,auVar58._0_8_,&plStack_1a0,unaff_x28,plVar40,uVar41,0);
                unaff_x26 = *(long *)(lVar54 + 0x90);
                auVar58 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,6);
                plVar47 = auVar58._0_8_;
                auVar11._8_8_ = 0;
                auVar11._0_8_ = auVar58._8_8_;
                auVar56 = auVar11 << 0x40;
              } while (plVar47 == (long *)0x0);
              auVar37._8_8_ = 0;
              auVar37._0_8_ = auVar58._8_8_;
              auVar56 = auVar37 << 0x40;
              if ((/*STR('SetNewVote2 networkPlayer.DisplayName ')*/ lRam0000000003d727a0 != 0) &&
                 (auVar56 = func_0x00f78adc(/*STR('SetNewVote2 networkPlayer.DisplayName ')*/ lRam0000000003d727a0,*(undefined8 *)(*plVar47 + 0x40)),
                 auVar56._0_8_ == 0)) goto code_r0x0152e668;
              if ((int)plVar47[3] == 0) goto code_r0x0152e65c;
              plVar47[4] = /*STR('SetNewVote2 networkPlayer.DisplayName ')*/ lRam0000000003d727a0;
              plVar40 = (long *)0x3d727a0;
            } while (unaff_x25 == 0);
            lVar51 = /*Atlas.UI.CharacterMetagameData$$PlayerName*/ func_0x01541480(unaff_x25,0);
            if ((lVar51 != 0) &&
               (lVar44 = func_0x00f78adc(lVar51,*(undefined8 *)(*plVar47 + 0x40)), lVar44 == 0))
            goto code_r0x0152e668;
            uVar38 = (uint)plVar47[3];
            if ((plVar47[3] & 0xfffffffeU) == 0) goto code_r0x0152e65c;
            plVar47[5] = lVar51;
            if (/*STR(' networkPlayer.Type ')*/ lRam0000000003d66340 != 0) {
              lVar51 = func_0x00f78adc(/*STR(' networkPlayer.Type ')*/ lRam0000000003d66340,*(undefined8 *)(*plVar47 + 0x40));
              if (lVar51 == 0) goto code_r0x0152e668;
              uVar38 = (uint)plVar47[3];
            }
            if (uVar38 < 3) goto code_r0x0152e65c;
            plVar47[6] = /*STR(' networkPlayer.Type ')*/ lRam0000000003d66340;
            plVar40 = (long *)(lVar42 + 0x18);
            auVar56 = func_0x00f78ae0(/*Core.Networking.NetworkPlayer.NetworkPlayerType_TypeInfo*/ uRam0000000003d282d0,plVar40);
            plVar45 = auVar56._0_8_;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = auVar56._8_8_;
            auVar56 = auVar12 << 0x40;
          } while (plVar45 == (long *)0x0);
          unaff_x28 = (**(code **)(*plVar45 + 0x168))(plVar45,*(undefined8 *)(*plVar45 + 0x170));
          puVar46 = (undefined4 *)func_0x00f78ae4(plVar45);
          *(undefined4 *)plVar40 = *puVar46;
          if ((unaff_x28 != 0) &&
             (lVar51 = func_0x00f78adc(unaff_x28,*(undefined8 *)(*plVar47 + 0x40)), lVar51 == 0))
          goto code_r0x0152e668;
          uVar38 = (uint)plVar47[3];
          if ((plVar47[3] & 0xfffffffcU) == 0) {
code_r0x0152e65c:
            uVar41 = func_0x00f78b24();
            do {
              func_0x00f78ac0(uVar41,0);
code_r0x0152e668:
              uVar41 = func_0x00f78b14();
            } while( true );
          }
          plVar47[7] = unaff_x28;
          if (/*STR(' loadout.Character ')*/ lRam0000000003d662f8 != 0) {
            lVar51 = func_0x00f78adc(/*STR(' loadout.Character ')*/ lRam0000000003d662f8,*(undefined8 *)(*plVar47 + 0x40));
            if (lVar51 == 0) goto code_r0x0152e668;
            uVar38 = (uint)plVar47[3];
          }
          if (uVar38 < 5) goto code_r0x0152e65c;
          plVar47[8] = /*STR(' loadout.Character ')*/ lRam0000000003d662f8;
          if (plVar48 != (long *)0x0) {
            lVar51 = func_0x00f78adc(plVar48,*(undefined8 *)(*plVar47 + 0x40));
            if (lVar51 == 0) goto code_r0x0152e668;
            uVar38 = *(uint *)(plVar47 + 3);
          }
          if (uVar38 < 6) goto code_r0x0152e65c;
          plVar47[9] = (long)plVar48;
          auVar56 = /*System.String$$Concat*/ func_0x029cfadc(plVar47,0);
          plVar40 = plVar48;
        } while ((unaff_x26 == 0) ||
                (lVar51 = *(long *)(lVar54 + 0xa0), unaff_x26 = lVar50, lVar51 == 0));
        if (*(uint *)(lVar51 + 0x18) <= uVar55) goto code_r0x0152e65c;
        lVar51 = *(long *)(lVar51 + lVar49 * 8);
      } while (lVar51 == 0);
      plVar47 = *(long **)(lVar51 + 0x20);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = auVar56._8_8_;
      auVar56 = auVar13 << 0x40;
    } while (plVar47 == (long *)0x0);
    (**(code **)(*plVar47 + 0x188))(plVar47,unaff_x25,*(undefined8 *)(*plVar47 + 400));
    plVar40 = (long *)func_0x00f78aec(/*System.Predicate<NetworkPlayer>_TypeInfo*/ uRam0000000003d1e5a8);
    auVar56 = /*System.Predicate<NetworkPlayer>$$.ctor*/ func_0x02708ba0(plVar40,lVar42,uRam0000000003d64948,uRam0000000003d3f438);
  } while (lVar50 == 0);
  auVar56 = /*System.Collections.Generic.List<NetworkPlayer>$$FindIndex*/ func_0x0241436c(lVar50,plVar40,uRam0000000003d3b528);
  uVar41 = auVar56._0_8_;
  auVar4._8_8_ = uVar41;
  auVar4._0_8_ = lVar43;
  auVar3._8_8_ = uVar41;
  auVar3._0_8_ = lVar43;
  auVar2._8_8_ = uVar41;
  auVar2._0_8_ = lVar43;
  if (auVar56._0_4_ < 0xc) {
    lVar42 = *(long *)(lVar54 + 0xa0);
    if (lVar42 == 0) goto code_r0x0152df54;
    if (*(uint *)(lVar42 + 0x18) <= uVar55) goto code_r0x0152e65c;
    lVar42 = *(long *)(lVar42 + lVar49 * 8);
    auVar56 = auVar2;
    if (((lVar42 == 0) || (lVar42 = *(long *)(lVar42 + 0x20), auVar56 = auVar3, lVar42 == 0)) ||
       (auVar56 = auVar4, lVar43 == 0)) goto code_r0x0152df54;
    plVar40 = *(long **)(lVar42 + 0x98);
    auVar56 = /*Atlas.Definitions.MetagameDefinition$$PlayerColor*/ func_0x01494880(lVar43,uVar41,0);
    if (plVar40 == (long *)0x0) goto code_r0x0152df54;
    (**(code **)(*plVar40 + 0x2a8))(plVar40,*(undefined8 *)(*plVar40 + 0x2b0));
  }
  /*Atlas.UI.CharacterMetagameData$$IsLocalHuman*/ func_0x015414d8(unaff_x25,0);
  auVar56 = /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/PopAnimMulti')*/ uRam0000000003d79100,0);
  lVar42 = *(long *)(lVar54 + 0xa0);
  if (lVar42 != 0) {
    if (*(uint *)(lVar42 + 0x18) <= uVar55) goto code_r0x0152e65c;
    lVar42 = *(long *)(lVar42 + lVar49 * 8);
    if (lVar42 != 0) {
      lVar42 = *(long *)(lVar42 + 0x20);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = auVar56._8_8_;
      auVar56 = auVar14 << 0x40;
      if (lVar42 != 0) {
        auVar58 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar42,0);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = auVar58._8_8_;
        auVar56 = auVar15 << 0x40;
        if (auVar58._0_8_ != 0) {
          plVar48 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(auVar58._0_8_,0);
          if ((plVar48 != (long *)0x0) && (*plVar48 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
            plVar48 = (long *)0x0;
          }
          auVar56 = /*Atlas.UI.AtlasTweenAnimations$$SpinZoom*/ func_0x0146f82c(0,_UNK_033f8500,0,_UNK_033f813c,plVar48,0,0,0,0);
          if (*(long *)(lVar54 + 0x90) != 0) {
            lVar42 = *(long *)(*(long *)(lVar54 + 0x90) + 0x28);
            auVar16._8_8_ = 0;
            auVar16._0_8_ = auVar56._8_8_;
            auVar56 = auVar16 << 0x40;
            if (lVar42 != 0) {
              auVar56 = /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(lVar42,(int)uStack_90._4_2_,&plStack_98,0);
              plVar48 = plStack_98;
              if (lVar53 != 0) {
                plVar47 = *(long **)(lVar53 + 0x20);
                auVar17._8_8_ = 0;
                auVar17._0_8_ = auVar56._8_8_;
                auVar56 = auVar17 << 0x40;
                if (plVar47 != (long *)0x0) {
                  auVar56 = (**(code **)(*plVar47 + 0x178))
                                      (plVar47,*(undefined8 *)(*plVar47 + 0x180));
                  plVar47 = auVar56._0_8_;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = auVar56._8_8_;
                  auVar56 = auVar18 << 0x40;
                  plVar40 = plVar48;
                  if (plVar47 != (long *)0x0) {
                    uVar41 = (**(code **)(*plVar47 + 0x178))
                                       (plVar47,*(undefined8 *)(*plVar47 + 0x180));
                    auVar56 = /*System.String$$op_Equality*/ func_0x029bdf2c(plVar48,uVar41,0);
                    plVar47 = plStack_98;
                    if (auVar56._0_4_ == 0) {
                      if (lVar52 == 0) goto code_r0x0152df54;
                      plVar48 = *(long **)(lVar52 + 0x20);
                      auVar24._8_8_ = 0;
                      auVar24._0_8_ = auVar56._8_8_;
                      auVar56 = auVar24 << 0x40;
                      if (plVar48 == (long *)0x0) goto code_r0x0152df54;
                      auVar56 = (**(code **)(*plVar48 + 0x178))
                                          (plVar48,*(undefined8 *)(*plVar48 + 0x180));
                      plVar48 = auVar56._0_8_;
                      auVar25._8_8_ = 0;
                      auVar25._0_8_ = auVar56._8_8_;
                      auVar56 = auVar25 << 0x40;
                      plVar40 = plVar47;
                      if (plVar48 == (long *)0x0) goto code_r0x0152df54;
                      uVar41 = (**(code **)(*plVar48 + 0x178))
                                         (plVar48,*(undefined8 *)(*plVar48 + 0x180));
                      auVar56 = /*System.String$$op_Equality*/ func_0x029bdf2c(plVar47,uVar41,0);
                      if (auVar56._0_4_ == 0) {
                        return auVar56._0_8_;
                      }
                      auVar26._8_8_ = 0;
                      auVar26._0_8_ = auVar56._8_8_;
                      auVar56 = auVar26 << 0x40;
                      if (*(long *)(lVar52 + 0x28) == 0) goto code_r0x0152df54;
                      auVar58 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar52 + 0x28),0);
                      auVar27._8_8_ = 0;
                      auVar27._0_8_ = auVar58._8_8_;
                      auVar56 = auVar27 << 0x40;
                      if (auVar58._0_8_ == 0) goto code_r0x0152df54;
                      auVar56 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(auVar58._0_8_,0);
                      lVar53 = *(long *)(lVar54 + 0xa0);
                      if (auVar56._0_4_ < 6) {
                        if (lVar53 == 0) goto code_r0x0152df54;
                        if (*(uint *)(lVar53 + 0x18) <= uVar55) goto code_r0x0152e65c;
                        lVar53 = *(long *)(lVar53 + lVar49 * 8);
                        if (lVar53 == 0) goto code_r0x0152df54;
                        lVar53 = *(long *)(lVar53 + 0x20);
                        auVar34._8_8_ = 0;
                        auVar34._0_8_ = auVar56._8_8_;
                        auVar56 = auVar34 << 0x40;
                        if (lVar53 == 0) goto code_r0x0152df54;
                        auVar58 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar53,0);
                        auVar35._8_8_ = 0;
                        auVar35._0_8_ = auVar58._8_8_;
                        auVar56 = auVar35 << 0x40;
                        if (auVar58._0_8_ == 0) goto code_r0x0152df54;
                        auVar56 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(auVar58._0_8_,0);
                        lVar54 = auVar56._0_8_;
                        lVar52 = *(long *)(lVar52 + 0x28);
                        auVar36._8_8_ = 0;
                        auVar36._0_8_ = auVar56._8_8_;
                        auVar56 = auVar36 << 0x40;
                        if (lVar52 == 0) goto code_r0x0152df54;
                      }
                      else {
                        if (lVar53 == 0) goto code_r0x0152df54;
                        if (*(uint *)(lVar53 + 0x18) <= uVar55) goto code_r0x0152e65c;
                        lVar53 = *(long *)(lVar53 + lVar49 * 8);
                        if (lVar53 == 0) goto code_r0x0152df54;
                        lVar53 = *(long *)(lVar53 + 0x20);
                        auVar28._8_8_ = 0;
                        auVar28._0_8_ = auVar56._8_8_;
                        auVar56 = auVar28 << 0x40;
                        if (lVar53 == 0) goto code_r0x0152df54;
                        auVar58 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar53,0);
                        auVar29._8_8_ = 0;
                        auVar29._0_8_ = auVar58._8_8_;
                        auVar56 = auVar29 << 0x40;
                        if (auVar58._0_8_ == 0) goto code_r0x0152df54;
                        auVar56 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(auVar58._0_8_,0);
                        lVar54 = auVar56._0_8_;
                        lVar52 = *(long *)(lVar52 + 0x30);
                        if (lVar52 == 0) {
                          auVar30._8_8_ = 0;
                          auVar30._0_8_ = auVar56._8_8_;
                          auVar56 = auVar30 << 0x40;
                          goto code_r0x0152df54;
                        }
                      }
                    }
                    else {
                      auVar19._8_8_ = 0;
                      auVar19._0_8_ = auVar56._8_8_;
                      auVar56 = auVar19 << 0x40;
                      if (*(long *)(lVar53 + 0x28) == 0) goto code_r0x0152df54;
                      auVar58 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar53 + 0x28),0);
                      auVar20._8_8_ = 0;
                      auVar20._0_8_ = auVar58._8_8_;
                      auVar56 = auVar20 << 0x40;
                      if (auVar58._0_8_ == 0) goto code_r0x0152df54;
                      auVar56 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(auVar58._0_8_,0);
                      lVar52 = *(long *)(lVar54 + 0xa0);
                      plVar47 = plVar48;
                      if (auVar56._0_4_ < 6) {
                        if (lVar52 == 0) goto code_r0x0152df54;
                        if (*(uint *)(lVar52 + 0x18) <= uVar55) goto code_r0x0152e65c;
                        lVar52 = *(long *)(lVar52 + lVar49 * 8);
                        if (lVar52 == 0) goto code_r0x0152df54;
                        lVar52 = *(long *)(lVar52 + 0x20);
                        auVar31._8_8_ = 0;
                        auVar31._0_8_ = auVar56._8_8_;
                        auVar56 = auVar31 << 0x40;
                        if (lVar52 == 0) goto code_r0x0152df54;
                        auVar58 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar52,0);
                        auVar32._8_8_ = 0;
                        auVar32._0_8_ = auVar58._8_8_;
                        auVar56 = auVar32 << 0x40;
                        if (auVar58._0_8_ == 0) goto code_r0x0152df54;
                        auVar56 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(auVar58._0_8_,0);
                        lVar54 = auVar56._0_8_;
                        lVar52 = *(long *)(lVar53 + 0x28);
                        if (lVar52 == 0) {
                          auVar33._8_8_ = 0;
                          auVar33._0_8_ = auVar56._8_8_;
                          auVar56 = auVar33 << 0x40;
                          goto code_r0x0152df54;
                        }
                      }
                      else {
                        if (lVar52 == 0) goto code_r0x0152df54;
                        if (*(uint *)(lVar52 + 0x18) <= uVar55) goto code_r0x0152e65c;
                        lVar52 = *(long *)(lVar52 + lVar49 * 8);
                        if (lVar52 == 0) goto code_r0x0152df54;
                        lVar52 = *(long *)(lVar52 + 0x20);
                        auVar21._8_8_ = 0;
                        auVar21._0_8_ = auVar56._8_8_;
                        auVar56 = auVar21 << 0x40;
                        if (lVar52 == 0) goto code_r0x0152df54;
                        auVar58 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar52,0);
                        auVar22._8_8_ = 0;
                        auVar22._0_8_ = auVar58._8_8_;
                        auVar56 = auVar22 << 0x40;
                        if (auVar58._0_8_ == 0) goto code_r0x0152df54;
                        auVar56 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(auVar58._0_8_,0);
                        lVar54 = auVar56._0_8_;
                        lVar52 = *(long *)(lVar53 + 0x30);
                        if (lVar52 == 0) {
                          auVar23._8_8_ = 0;
                          auVar23._0_8_ = auVar56._8_8_;
                          auVar56 = auVar23 << 0x40;
                          goto code_r0x0152df54;
                        }
                      }
                    }
                    auVar56 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar52,0);
                    plVar40 = plVar47;
                    if (lVar54 != 0) {
                      uVar39 = /*UnityEngine.Transform$$SetParent*/ func_0x03275e8c(lVar54,auVar56._0_8_,0);
                      return uVar39;
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
  goto code_r0x0152df54;
}



// ============================================================
// RVA: 0x152dd08 | Atlas.UI.Screens.VotingScreen.SetNewVote
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_VotingScreen__SetNewVote(long param_1,ulong param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar37;
  long *plVar38;
  undefined8 uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long *plVar43;
  undefined4 *puVar44;
  long *plVar45;
  long *plVar46;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  uint uVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  uint uVar53;
  long unaff_x22;
  long unaff_x25;
  long unaff_x26;
  long unaff_x28;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long alStack_e8 [8];
  undefined1 auStack_a8 [32];
  long *plStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  lVar52 = 0x3eb4000;
  uStack_80 = param_2;
  uStack_78 = param_3;
  if ((bRam0000000003eb4e8a & 1) == 0) {
    func_0x00f78a20(0x3d20658);
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d57360);
    func_0x00f78a20(0x3d3b528);
    func_0x00f78a20(0x3d282d0);
    func_0x00f78a20(0x3d3f438);
    func_0x00f78a20(0x3d1e5a8);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d1f498);
    func_0x00f78a20(0x3d64948);
    func_0x00f78a20(0x3d29768);
    func_0x00f78a20(0x3d41350);
    func_0x00f78a20(0x3d41360);
    func_0x00f78a20(0x3d25a40);
    func_0x00f78a20(0x3d66340);
    func_0x00f78a20(0x3d65ed8);
    func_0x00f78a20(0x3d79100);
    func_0x00f78a20(0x3d662f8);
    func_0x00f78a20(0x3d72798);
    func_0x00f78a20(0x3d727a0);
    bRam0000000003eb4e8a = 1;
  }
  plStack_88 = (long *)0x0;
  auVar54 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
  auVar55._8_8_ = 0;
  auVar55._0_8_ = auVar54._8_8_;
  plVar38 = (long *)0x3d41350;
  auVar56 = auVar55 << 0x40;
  if (auVar54._0_8_ != 0) {
    unaff_x28 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(auVar54._0_8_,0);
    auVar55 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
    auVar54._8_8_ = 0;
    auVar54._0_8_ = auVar55._8_8_;
    auVar56 = auVar54 << 0x40;
    if (auVar55._0_8_ != 0) {
      auVar56 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(auVar55._0_8_,1);
      lVar50 = auVar56._0_8_;
      plVar38 = (long *)0x3d41350;
      if ((*(long *)(param_1 + 0x98) != 0) &&
         (lVar48 = *(long *)(*(long *)(param_1 + 0x98) + 0x20), lVar48 != 0)) {
        lVar52 = 0x3d72000;
        unaff_x22 = 0x3d65000;
        unaff_x26 = *(long *)(lVar48 + 400);
        lVar48 = *(long *)(param_1 + 0x90);
        plVar38 = (long *)/*System.UInt32$$ToString*/ func_0x02a0b3d0(&uStack_80,0);
        uVar39 = /*System.Int16$$ToString*/ func_0x02ae8e6c((ulong)&uStack_80 | 4,0);
        auVar56 = /*System.String$$Concat*/ func_0x029be818(/*STR('SetNewVote1 ')*/ uRam0000000003d72798,plVar38,/*STR(' ')*/ uRam0000000003d65ed8,uVar39,0);
        unaff_x25 = lVar50;
        if ((lVar48 != 0) && (lVar48 = *(long *)(param_1 + 0xa0), lVar48 != 0)) {
          plVar38 = alStack_e8;
          lVar52 = 4;
          do {
            uVar39 = auVar56._8_8_;
            unaff_x22 = lVar52 + -4;
            if ((int)*(uint *)(lVar48 + 0x18) <= (int)(uint)unaff_x22) {
              return;
            }
            if (*(uint *)(lVar48 + 0x18) <= (uint)unaff_x22) goto LAB_0152e65c;
            lVar48 = *(long *)(lVar48 + lVar52 * 8);
            if (lVar48 == 0) break;
            iVar37 = *(int *)(lVar48 + 0x10);
            if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xe0) == 0)) {
              func_0x00f78ad0();
              uVar39 = extraout_x1;
            }
            auVar56._8_8_ = uVar39;
            auVar56._0_8_ = /*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40;
            lVar48 = unaff_x26;
            lVar51 = unaff_x28;
            if (iVar37 == **(int **)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xb8)) goto LAB_0152df58;
            lVar48 = *(long *)(param_1 + 0xa0);
            lVar52 = lVar52 + 1;
          } while (lVar48 != 0);
        }
      }
    }
  }
LAB_0152df54:
  do {
    do {
      do {
        do {
          do {
            do {
              do {
                do {
                  do {
                    do {
                      do {
                        do {
                          do {
                            do {
                              do {
                                do {
                                  do {
                                    do {
                                      do {
                                        do {
                                          do {
                                            func_0x00f78af4(auVar56._0_8_,auVar56._8_8_);
                                            lVar50 = unaff_x25;
                                            lVar48 = unaff_x26;
                                            lVar51 = unaff_x28;
LAB_0152df58:
                                            lVar40 = func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.<>c__DisplayClass25_0_TypeInfo*/ uRam0000000003d29768);
                                            auVar56 = /*Atlas.UI.Screens.VotingScreen.<>c__DisplayClass25_0$$.ctor*/ func_0x0156df14(lVar40,0);
                                            unaff_x25 = lVar50;
                                            unaff_x26 = lVar48;
                                            unaff_x28 = lVar51;
                                          } while (*(long *)(param_1 + 0x98) == 0);
                                          lVar41 = *(long *)(*(long *)(param_1 + 0x98) + 0x20);
                                          auVar4._8_8_ = 0;
                                          auVar4._0_8_ = auVar56._8_8_;
                                          auVar56 = auVar4 << 0x40;
                                        } while (lVar41 == 0);
                                        auVar56 = /*Core.Networking.NetworkSession$$GetPlayer*/ func_0x0165eab8(auStack_a8,lVar41,
                                                                  uStack_80 & 0xffffffff,0);
                                      } while (lVar40 == 0);
                                      lVar42 = plVar38[8];
                                      lVar49 = plVar38[0xb];
                                      lVar41 = plVar38[10];
                                      *(long *)(lVar40 + 0x18) = plVar38[9];
                                      *(long *)(lVar40 + 0x10) = lVar42;
                                      *(long *)(lVar40 + 0x28) = lVar49;
                                      *(long *)(lVar40 + 0x20) = lVar41;
                                    } while (*(long *)(param_1 + 0x98) == 0);
                                    lVar41 = *(long *)(*(long *)(param_1 + 0x98) + 0x28);
                                    auVar5._8_8_ = 0;
                                    auVar5._0_8_ = auVar56._8_8_;
                                    auVar56 = auVar5 << 0x40;
                                  } while (lVar41 == 0);
                                  /*Atlas.Networking.NetworkLobby$$GetLoadoutFromSyncId*/ func_0x014a98b8(alStack_e8,lVar41,*(undefined4 *)(lVar40 + 0x1c),0
                                                 );
                                  lStack_168 = plVar38[1];
                                  lStack_170 = *plVar38;
                                  lStack_158 = plVar38[3];
                                  lStack_160 = plVar38[2];
                                  lStack_148 = plVar38[5];
                                  lStack_150 = plVar38[4];
                                  lStack_138 = plVar38[7];
                                  lStack_140 = plVar38[6];
                                  auVar56 = Atlas_Gameplay_KartLoadout__FromNetworkLoadOut
                                                      (&plStack_130,&lStack_170,0);
                                  plVar46 = plStack_130;
                                } while (*(long *)(param_1 + 0x80) == 0);
                                lVar41 = *(long *)(*(long *)(param_1 + 0x80) + 0x10);
                                auVar6._8_8_ = 0;
                                auVar6._0_8_ = auVar56._8_8_;
                                auVar56 = auVar6 << 0x40;
                              } while (lVar41 == 0);
                              auVar55 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar41,plStack_130,uRam0000000003d57270);
                              plVar38 = plVar46;
                              auVar56 = auVar55;
                            } while (*(long *)(param_1 + 0x80) == 0);
                            lVar41 = *(long *)(*(long *)(param_1 + 0x80) + 0x10);
                            auVar7._8_8_ = 0;
                            auVar7._0_8_ = auVar55._8_8_;
                            auVar56 = auVar7 << 0x40;
                          } while (lVar41 == 0);
                          auVar56 = /*Core.Definitions.GameDefinitions$$GetFirstDefinition<object>*/ func_0x0185c7fc(lVar41,uRam0000000003d57360);
                          lVar41 = auVar56._0_8_;
                          lVar49 = *(long *)(param_1 + 0xa0);
                        } while (lVar49 == 0);
                        uVar53 = (uint)unaff_x22;
                        if (*(uint *)(lVar49 + 0x18) <= uVar53) goto LAB_0152e65c;
                        lVar49 = *(long *)(lVar49 + lVar52 * 8);
                      } while (lVar49 == 0);
                      *(undefined4 *)(lVar49 + 0x10) = (undefined4)uStack_80;
                      uStack_128 = *(undefined8 *)(lVar40 + 0x18);
                      plStack_130 = *(long **)(lVar40 + 0x10);
                      uStack_118 = *(undefined8 *)(lVar40 + 0x28);
                      uStack_120 = *(undefined8 *)(lVar40 + 0x20);
                      auVar54 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41360);
                      auVar8._8_8_ = 0;
                      auVar8._0_8_ = auVar54._8_8_;
                      auVar56 = auVar8 << 0x40;
                    } while (auVar54._0_8_ == 0);
                    unaff_x28 = *(long *)(auVar54._0_8_ + 0x50);
                    auVar56 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41360);
                  } while ((auVar56._0_8_ == 0) ||
                          (lVar49 = *(long *)(auVar56._0_8_ + 0x20), lVar49 == 0));
                  plVar38 = *(long **)(lVar49 + 0x10);
                  auVar54 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41360);
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = auVar54._8_8_;
                  auVar56 = auVar9 << 0x40;
                } while (auVar54._0_8_ == 0);
                uVar39 = *(undefined8 *)(auVar54._0_8_ + 0x88);
                unaff_x25 = func_0x00f78aec(/*Atlas.UI.CharacterMetagameData_TypeInfo*/ uRam0000000003d20658);
                uStack_188 = uStack_128;
                plStack_190 = plStack_130;
                uStack_178 = uStack_118;
                uStack_180 = uStack_120;
                /*Atlas.UI.CharacterMetagameData$$.ctor*/ func_0x015412cc(unaff_x25,auVar55._0_8_,&plStack_190,unaff_x28,plVar38,uVar39,0);
                unaff_x26 = *(long *)(param_1 + 0x90);
                auVar55 = func_0x00f78a34(/*string[]_TypeInfo*/ uRam0000000003d1f498,6);
                plVar45 = auVar55._0_8_;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = auVar55._8_8_;
                auVar56 = auVar10 << 0x40;
              } while (plVar45 == (long *)0x0);
              auVar36._8_8_ = 0;
              auVar36._0_8_ = auVar55._8_8_;
              auVar56 = auVar36 << 0x40;
              if ((/*STR('SetNewVote2 networkPlayer.DisplayName ')*/ lRam0000000003d727a0 != 0) &&
                 (auVar56 = func_0x00f78adc(/*STR('SetNewVote2 networkPlayer.DisplayName ')*/ lRam0000000003d727a0,*(undefined8 *)(*plVar45 + 0x40)),
                 auVar56._0_8_ == 0)) goto LAB_0152e668;
              if ((int)plVar45[3] == 0) goto LAB_0152e65c;
              plVar45[4] = /*STR('SetNewVote2 networkPlayer.DisplayName ')*/ lRam0000000003d727a0;
              plVar38 = (long *)0x3d727a0;
            } while (unaff_x25 == 0);
            lVar49 = /*Atlas.UI.CharacterMetagameData$$PlayerName*/ func_0x01541480(unaff_x25,0);
            if ((lVar49 != 0) &&
               (lVar42 = func_0x00f78adc(lVar49,*(undefined8 *)(*plVar45 + 0x40)), lVar42 == 0))
            goto LAB_0152e668;
            uVar47 = (uint)plVar45[3];
            if ((plVar45[3] & 0xfffffffeU) == 0) goto LAB_0152e65c;
            plVar45[5] = lVar49;
            if (/*STR(' networkPlayer.Type ')*/ lRam0000000003d66340 != 0) {
              lVar49 = func_0x00f78adc(/*STR(' networkPlayer.Type ')*/ lRam0000000003d66340,*(undefined8 *)(*plVar45 + 0x40));
              if (lVar49 == 0) goto LAB_0152e668;
              uVar47 = (uint)plVar45[3];
            }
            if (uVar47 < 3) goto LAB_0152e65c;
            plVar45[6] = /*STR(' networkPlayer.Type ')*/ lRam0000000003d66340;
            plVar38 = (long *)(lVar40 + 0x18);
            auVar56 = func_0x00f78ae0(/*Core.Networking.NetworkPlayer.NetworkPlayerType_TypeInfo*/ uRam0000000003d282d0,plVar38);
            plVar43 = auVar56._0_8_;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = auVar56._8_8_;
            auVar56 = auVar11 << 0x40;
          } while (plVar43 == (long *)0x0);
          unaff_x28 = (**(code **)(*plVar43 + 0x168))(plVar43,*(undefined8 *)(*plVar43 + 0x170));
          puVar44 = (undefined4 *)func_0x00f78ae4(plVar43);
          *(undefined4 *)plVar38 = *puVar44;
          if ((unaff_x28 != 0) &&
             (lVar49 = func_0x00f78adc(unaff_x28,*(undefined8 *)(*plVar45 + 0x40)), lVar49 == 0))
          goto LAB_0152e668;
          uVar47 = (uint)plVar45[3];
          if ((plVar45[3] & 0xfffffffcU) == 0) {
LAB_0152e65c:
            uVar39 = func_0x00f78b24();
            do {
              func_0x00f78ac0(uVar39,0);
LAB_0152e668:
              uVar39 = func_0x00f78b14();
            } while( true );
          }
          plVar45[7] = unaff_x28;
          if (/*STR(' loadout.Character ')*/ lRam0000000003d662f8 != 0) {
            lVar49 = func_0x00f78adc(/*STR(' loadout.Character ')*/ lRam0000000003d662f8,*(undefined8 *)(*plVar45 + 0x40));
            if (lVar49 == 0) goto LAB_0152e668;
            uVar47 = (uint)plVar45[3];
          }
          if (uVar47 < 5) goto LAB_0152e65c;
          plVar45[8] = /*STR(' loadout.Character ')*/ lRam0000000003d662f8;
          if (plVar46 != (long *)0x0) {
            lVar49 = func_0x00f78adc(plVar46,*(undefined8 *)(*plVar45 + 0x40));
            if (lVar49 == 0) goto LAB_0152e668;
            uVar47 = *(uint *)(plVar45 + 3);
          }
          if (uVar47 < 6) goto LAB_0152e65c;
          plVar45[9] = (long)plVar46;
          auVar56 = /*System.String$$Concat*/ func_0x029cfadc(plVar45,0);
          plVar38 = plVar46;
        } while ((unaff_x26 == 0) ||
                (lVar49 = *(long *)(param_1 + 0xa0), unaff_x26 = lVar48, lVar49 == 0));
        if (*(uint *)(lVar49 + 0x18) <= uVar53) goto LAB_0152e65c;
        lVar49 = *(long *)(lVar49 + lVar52 * 8);
      } while (lVar49 == 0);
      plVar45 = *(long **)(lVar49 + 0x20);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = auVar56._8_8_;
      auVar56 = auVar12 << 0x40;
    } while (plVar45 == (long *)0x0);
    (**(code **)(*plVar45 + 0x188))(plVar45,unaff_x25,*(undefined8 *)(*plVar45 + 400));
    plVar38 = (long *)func_0x00f78aec(/*System.Predicate<NetworkPlayer>_TypeInfo*/ uRam0000000003d1e5a8);
    auVar56 = /*System.Predicate<NetworkPlayer>$$.ctor*/ func_0x02708ba0(plVar38,lVar40,uRam0000000003d64948,uRam0000000003d3f438);
  } while (lVar48 == 0);
  auVar56 = /*System.Collections.Generic.List<NetworkPlayer>$$FindIndex*/ func_0x0241436c(lVar48,plVar38,uRam0000000003d3b528);
  uVar39 = auVar56._0_8_;
  auVar3._8_8_ = uVar39;
  auVar3._0_8_ = lVar41;
  auVar2._8_8_ = uVar39;
  auVar2._0_8_ = lVar41;
  auVar1._8_8_ = uVar39;
  auVar1._0_8_ = lVar41;
  if (auVar56._0_4_ < 0xc) {
    lVar40 = *(long *)(param_1 + 0xa0);
    if (lVar40 == 0) goto LAB_0152df54;
    if (*(uint *)(lVar40 + 0x18) <= uVar53) goto LAB_0152e65c;
    lVar40 = *(long *)(lVar40 + lVar52 * 8);
    auVar56 = auVar1;
    if (((lVar40 == 0) || (lVar40 = *(long *)(lVar40 + 0x20), auVar56 = auVar2, lVar40 == 0)) ||
       (auVar56 = auVar3, lVar41 == 0)) goto LAB_0152df54;
    plVar38 = *(long **)(lVar40 + 0x98);
    auVar56 = /*Atlas.Definitions.MetagameDefinition$$PlayerColor*/ func_0x01494880(lVar41,uVar39,0);
    if (plVar38 == (long *)0x0) goto LAB_0152df54;
    (**(code **)(*plVar38 + 0x2a8))(plVar38,*(undefined8 *)(*plVar38 + 0x2b0));
  }
  /*Atlas.UI.CharacterMetagameData$$IsLocalHuman*/ func_0x015414d8(unaff_x25,0);
  auVar56 = /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/PopAnimMulti')*/ uRam0000000003d79100,0);
  lVar40 = *(long *)(param_1 + 0xa0);
  if (lVar40 != 0) {
    if (*(uint *)(lVar40 + 0x18) <= uVar53) goto LAB_0152e65c;
    lVar40 = *(long *)(lVar40 + lVar52 * 8);
    if (lVar40 != 0) {
      lVar40 = *(long *)(lVar40 + 0x20);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = auVar56._8_8_;
      auVar56 = auVar13 << 0x40;
      if (lVar40 != 0) {
        auVar55 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar40,0);
        auVar14._8_8_ = 0;
        auVar14._0_8_ = auVar55._8_8_;
        auVar56 = auVar14 << 0x40;
        if (auVar55._0_8_ != 0) {
          plVar46 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(auVar55._0_8_,0);
          if ((plVar46 != (long *)0x0) && (*plVar46 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
            plVar46 = (long *)0x0;
          }
          auVar56 = /*Atlas.UI.AtlasTweenAnimations$$SpinZoom*/ func_0x0146f82c(0,_UNK_033f8500,0,_UNK_033f813c,plVar46,0,0,0,0);
          if (*(long *)(param_1 + 0x90) != 0) {
            lVar40 = *(long *)(*(long *)(param_1 + 0x90) + 0x28);
            auVar15._8_8_ = 0;
            auVar15._0_8_ = auVar56._8_8_;
            auVar56 = auVar15 << 0x40;
            if (lVar40 != 0) {
              auVar56 = /*Atlas.Networking.NetworkIdentifiers$$TryGetIdentifierFromKey*/ func_0x014a7750(lVar40,(int)uStack_80._4_2_,&plStack_88,0);
              plVar46 = plStack_88;
              if (lVar51 != 0) {
                plVar45 = *(long **)(lVar51 + 0x20);
                auVar16._8_8_ = 0;
                auVar16._0_8_ = auVar56._8_8_;
                auVar56 = auVar16 << 0x40;
                if (plVar45 != (long *)0x0) {
                  auVar56 = (**(code **)(*plVar45 + 0x178))
                                      (plVar45,*(undefined8 *)(*plVar45 + 0x180));
                  plVar45 = auVar56._0_8_;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = auVar56._8_8_;
                  auVar56 = auVar17 << 0x40;
                  plVar38 = plVar46;
                  if (plVar45 != (long *)0x0) {
                    uVar39 = (**(code **)(*plVar45 + 0x178))
                                       (plVar45,*(undefined8 *)(*plVar45 + 0x180));
                    auVar56 = /*System.String$$op_Equality*/ func_0x029bdf2c(plVar46,uVar39,0);
                    plVar45 = plStack_88;
                    if (auVar56._0_4_ == 0) {
                      if (lVar50 == 0) goto LAB_0152df54;
                      plVar46 = *(long **)(lVar50 + 0x20);
                      auVar23._8_8_ = 0;
                      auVar23._0_8_ = auVar56._8_8_;
                      auVar56 = auVar23 << 0x40;
                      if (plVar46 == (long *)0x0) goto LAB_0152df54;
                      auVar56 = (**(code **)(*plVar46 + 0x178))
                                          (plVar46,*(undefined8 *)(*plVar46 + 0x180));
                      plVar46 = auVar56._0_8_;
                      auVar24._8_8_ = 0;
                      auVar24._0_8_ = auVar56._8_8_;
                      auVar56 = auVar24 << 0x40;
                      plVar38 = plVar45;
                      if (plVar46 == (long *)0x0) goto LAB_0152df54;
                      uVar39 = (**(code **)(*plVar46 + 0x178))
                                         (plVar46,*(undefined8 *)(*plVar46 + 0x180));
                      iVar37 = /*System.String$$op_Equality*/ func_0x029bdf2c(plVar45,uVar39,0);
                      if (iVar37 == 0) {
                        return;
                      }
                      auVar25._8_8_ = 0;
                      auVar25._0_8_ = extraout_x1_00;
                      auVar56 = auVar25 << 0x40;
                      if (*(long *)(lVar50 + 0x28) == 0) goto LAB_0152df54;
                      auVar55 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar50 + 0x28),0);
                      auVar26._8_8_ = 0;
                      auVar26._0_8_ = auVar55._8_8_;
                      auVar56 = auVar26 << 0x40;
                      if (auVar55._0_8_ == 0) goto LAB_0152df54;
                      auVar56 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(auVar55._0_8_,0);
                      lVar51 = *(long *)(param_1 + 0xa0);
                      if (auVar56._0_4_ < 6) {
                        if (lVar51 == 0) goto LAB_0152df54;
                        if (*(uint *)(lVar51 + 0x18) <= uVar53) goto LAB_0152e65c;
                        lVar51 = *(long *)(lVar51 + lVar52 * 8);
                        if (lVar51 == 0) goto LAB_0152df54;
                        lVar51 = *(long *)(lVar51 + 0x20);
                        auVar33._8_8_ = 0;
                        auVar33._0_8_ = auVar56._8_8_;
                        auVar56 = auVar33 << 0x40;
                        if (lVar51 == 0) goto LAB_0152df54;
                        auVar55 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar51,0);
                        auVar34._8_8_ = 0;
                        auVar34._0_8_ = auVar55._8_8_;
                        auVar56 = auVar34 << 0x40;
                        if (auVar55._0_8_ == 0) goto LAB_0152df54;
                        auVar56 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(auVar55._0_8_,0);
                        param_1 = auVar56._0_8_;
                        lVar50 = *(long *)(lVar50 + 0x28);
                        auVar35._8_8_ = 0;
                        auVar35._0_8_ = auVar56._8_8_;
                        auVar56 = auVar35 << 0x40;
                        if (lVar50 == 0) goto LAB_0152df54;
                      }
                      else {
                        if (lVar51 == 0) goto LAB_0152df54;
                        if (*(uint *)(lVar51 + 0x18) <= uVar53) goto LAB_0152e65c;
                        lVar51 = *(long *)(lVar51 + lVar52 * 8);
                        if (lVar51 == 0) goto LAB_0152df54;
                        lVar51 = *(long *)(lVar51 + 0x20);
                        auVar27._8_8_ = 0;
                        auVar27._0_8_ = auVar56._8_8_;
                        auVar56 = auVar27 << 0x40;
                        if (lVar51 == 0) goto LAB_0152df54;
                        auVar55 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar51,0);
                        auVar28._8_8_ = 0;
                        auVar28._0_8_ = auVar55._8_8_;
                        auVar56 = auVar28 << 0x40;
                        if (auVar55._0_8_ == 0) goto LAB_0152df54;
                        auVar56 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(auVar55._0_8_,0);
                        param_1 = auVar56._0_8_;
                        lVar50 = *(long *)(lVar50 + 0x30);
                        if (lVar50 == 0) {
                          auVar29._8_8_ = 0;
                          auVar29._0_8_ = auVar56._8_8_;
                          auVar56 = auVar29 << 0x40;
                          goto LAB_0152df54;
                        }
                      }
                    }
                    else {
                      auVar18._8_8_ = 0;
                      auVar18._0_8_ = auVar56._8_8_;
                      auVar56 = auVar18 << 0x40;
                      if (*(long *)(lVar51 + 0x28) == 0) goto LAB_0152df54;
                      auVar55 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar51 + 0x28),0);
                      auVar19._8_8_ = 0;
                      auVar19._0_8_ = auVar55._8_8_;
                      auVar56 = auVar19 << 0x40;
                      if (auVar55._0_8_ == 0) goto LAB_0152df54;
                      auVar56 = /*UnityEngine.Transform$$get_childCount*/ func_0x03276f9c(auVar55._0_8_,0);
                      lVar50 = *(long *)(param_1 + 0xa0);
                      plVar45 = plVar46;
                      if (auVar56._0_4_ < 6) {
                        if (lVar50 == 0) goto LAB_0152df54;
                        if (*(uint *)(lVar50 + 0x18) <= uVar53) goto LAB_0152e65c;
                        lVar50 = *(long *)(lVar50 + lVar52 * 8);
                        if (lVar50 == 0) goto LAB_0152df54;
                        lVar50 = *(long *)(lVar50 + 0x20);
                        auVar30._8_8_ = 0;
                        auVar30._0_8_ = auVar56._8_8_;
                        auVar56 = auVar30 << 0x40;
                        if (lVar50 == 0) goto LAB_0152df54;
                        auVar55 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar50,0);
                        auVar31._8_8_ = 0;
                        auVar31._0_8_ = auVar55._8_8_;
                        auVar56 = auVar31 << 0x40;
                        if (auVar55._0_8_ == 0) goto LAB_0152df54;
                        auVar56 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(auVar55._0_8_,0);
                        param_1 = auVar56._0_8_;
                        lVar50 = *(long *)(lVar51 + 0x28);
                        if (lVar50 == 0) {
                          auVar32._8_8_ = 0;
                          auVar32._0_8_ = auVar56._8_8_;
                          auVar56 = auVar32 << 0x40;
                          goto LAB_0152df54;
                        }
                      }
                      else {
                        if (lVar50 == 0) goto LAB_0152df54;
                        if (*(uint *)(lVar50 + 0x18) <= uVar53) goto LAB_0152e65c;
                        lVar50 = *(long *)(lVar50 + lVar52 * 8);
                        if (lVar50 == 0) goto LAB_0152df54;
                        lVar50 = *(long *)(lVar50 + 0x20);
                        auVar20._8_8_ = 0;
                        auVar20._0_8_ = auVar56._8_8_;
                        auVar56 = auVar20 << 0x40;
                        if (lVar50 == 0) goto LAB_0152df54;
                        auVar55 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar50,0);
                        auVar21._8_8_ = 0;
                        auVar21._0_8_ = auVar55._8_8_;
                        auVar56 = auVar21 << 0x40;
                        if (auVar55._0_8_ == 0) goto LAB_0152df54;
                        auVar56 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(auVar55._0_8_,0);
                        param_1 = auVar56._0_8_;
                        lVar50 = *(long *)(lVar51 + 0x30);
                        if (lVar50 == 0) {
                          auVar22._8_8_ = 0;
                          auVar22._0_8_ = auVar56._8_8_;
                          auVar56 = auVar22 << 0x40;
                          goto LAB_0152df54;
                        }
                      }
                    }
                    auVar56 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(lVar50,0);
                    plVar38 = plVar45;
                    if (param_1 != 0) {
                      /*UnityEngine.Transform$$SetParent*/ func_0x03275e8c(param_1,auVar56._0_8_,0);
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
  goto LAB_0152df54;
}



// ============================================================
// RVA: 0x152e670 | Atlas.UI.Screens.VotingScreen.OnVoteStageChanged
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_VotingScreen__OnVoteStageChanged(long param_1,int param_2)

{
  ushort uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long unaff_x20;
  long lVar17;
  undefined8 unaff_x21;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 unaff_x22;
  long lVar20;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined4 uVar21;
  uint uVar22;
  ulong unaff_d8;
  undefined4 uVar23;
  uint uVar24;
  ulong unaff_d9;
  undefined4 uVar25;
  uint uVar26;
  ulong unaff_d10;
  undefined4 uVar27;
  uint uVar28;
  ulong unaff_d11;
  undefined1 auVar29 [16];
  
  if (param_2 != 2) {
    return;
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    unaff_x30 = &Atlas_UI_Screens_VotingScreen__ShowTie;
    lVar9 = func_0x00f78af4();
    puVar3 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
code_r0x0152e6b0:
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x60);
    *(ulong *)(puVar3 + -0x60) = unaff_d11;
    *(ulong *)(puVar3 + -0x58) = unaff_d10;
    *(ulong *)(puVar3 + -0x50) = unaff_d9;
    *(ulong *)(puVar3 + -0x48) = unaff_d8;
    *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
    *(long *)(puVar3 + -0x20) = unaff_x20;
    *(long *)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
    *(undefined **)(puVar3 + -8) = unaff_x30;
    unaff_x29 = puVar3 + -0x10;
    if ((bRam0000000003eb4e8b & 1) == 0) {
      func_0x00f78a20(0x3d20bc0);
      func_0x00f78a20(0x3d24188);
      func_0x00f78a20(0x3d25428);
      func_0x00f78a20(0x3d5e6f0);
      func_0x00f78a20(0x3d41350);
      func_0x00f78a20(0x3d41360);
      func_0x00f78a20(0x3d60120);
      func_0x00f78a20(0x3d79120);
      bRam0000000003eb4e8b = 1;
    }
    Atlas_UI_Screens_VotingScreen__HideInput(lVar9);
    /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/TiedVote')*/ uRam0000000003d79120,0);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar9,uRam0000000003d41360);
    if (lVar6 != 0) {
      lVar17 = *(long *)(lVar6 + 0x88);
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41350);
      if ((lVar6 != 0) && (lVar17 != 0)) {
        uVar7 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar17,*(undefined8 *)(lVar6 + 0xe0),0);
        Atlas_UI_Screens_VotingScreen__SetTitleText(lVar9,uVar7);
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41350);
        if ((lVar6 != 0) && (*(long *)(lVar6 + 0x68) != 0)) {
          uVar7 = /*TMPro.TMP_Text$$get_rectTransform*/ func_0x031adac0(*(long *)(lVar6 + 0x68),0);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41350);
          if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
            uVar21 = *(undefined4 *)(*(long *)(lVar6 + 0xa0) + 0x10);
            lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41350);
            if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
              uVar23 = *(undefined4 *)(*(long *)(lVar6 + 0xa0) + 0x14);
              lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41350);
              if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
                uVar25 = *(undefined4 *)(*(long *)(lVar6 + 0xa0) + 0x18);
                lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41350);
                if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
                  uVar27 = *(undefined4 *)(*(long *)(lVar6 + 0xa0) + 0x1c);
                  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41350);
                  if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
                    /*Atlas.UI.AtlasTweenAnimations$$SpinZoom*/ func_0x0146f82c(uVar21,uVar23,uVar25,uVar27,uVar7,0,
                                    *(undefined1 *)(*(long *)(lVar6 + 0xa0) + 0x20),0,0);
                    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41350);
                    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x70) != 0)) {
                      uVar7 = /*TMPro.TMP_Text$$get_rectTransform*/ func_0x031adac0(*(long *)(lVar6 + 0x70),0);
                      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41350);
                      if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
                        uVar22 = *(uint *)(*(long *)(lVar6 + 0xa0) + 0x10);
                        unaff_d8 = (ulong)uVar22;
                        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41350);
                        if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
                          uVar24 = *(uint *)(*(long *)(lVar6 + 0xa0) + 0x14);
                          unaff_d9 = (ulong)uVar24;
                          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41350);
                          if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
                            uVar26 = *(uint *)(*(long *)(lVar6 + 0xa0) + 0x18);
                            unaff_d10 = (ulong)uVar26;
                            lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41350);
                            if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
                              uVar28 = *(uint *)(*(long *)(lVar6 + 0xa0) + 0x1c);
                              unaff_d11 = (ulong)uVar28;
                              lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41350);
                              if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
                                /*Atlas.UI.AtlasTweenAnimations$$SpinZoom*/ func_0x0146f82c(uVar22,uVar24,uVar26,uVar28,uVar7,0,
                                                *(undefined1 *)(*(long *)(lVar6 + 0xa0) + 0x20),0,0)
                                ;
                                if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                                   (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                                  func_0x00f78ad0();
                                }
                                uVar7 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
                                lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41350);
                                if (lVar6 != 0) {
                                  uVar18 = *(undefined8 *)(lVar6 + 0x68);
                                  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar9,uRam0000000003d41350);
                                  if (lVar6 != 0) {
                                    unaff_x22 = 0x3d25000;
                                    unaff_x23 = 0x3d60000;
                                    unaff_x24 = 0x3d5e000;
                                    uVar18 = /*DG.Tweening.DOTweenModuleUI$$DOColor*/ func_0x016a58bc(*(undefined4 *)(lVar6 + 0xe8),
                                                             *(undefined4 *)(lVar6 + 0xec),
                                                             *(undefined4 *)(lVar6 + 0xf0),
                                                             *(undefined4 *)(lVar6 + 0xf4),
                                                             _UNK_033f813c,uVar18,0);
                                    uVar7 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar7,uVar18,0);
                                    uVar7 = /*DG.Tweening.TweenSettingsExtensions$$AppendInterval*/ func_0x016c3110(0x40000000,uVar7,0);
                                    uVar18 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                                    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar18,lVar9,uRam0000000003d60120,0);
                                    /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar7,uVar18,uRam0000000003d5e6f0);
                                    lVar6 = *(long *)(lVar9 + 0xa0);
                                    if (lVar6 != 0) {
                                      unaff_x20 = 0;
                                      unaff_x21 = 0x3d24188;
                                      do {
                                        if ((int)*(uint *)(lVar6 + 0x18) <= (int)(uint)unaff_x20) {
                                          return;
                                        }
                                        if (*(uint *)(lVar6 + 0x18) <= (uint)unaff_x20) {
                                          uVar7 = func_0x00f78b24();
                                          unaff_x30 = &Atlas_UI_Screens_VotingScreen__ShowWinner;
                                          param_1 = func_0x00f78ac0(uVar7,0);
                                          unaff_x19 = lVar9;
                                          goto code_r0x0152ead8;
                                        }
                                        lVar6 = *(long *)(lVar6 + unaff_x20 * 8 + 0x20);
                                        if ((lVar6 == 0) ||
                                           (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0)) break;
                                        plVar8 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0);
                                        if ((plVar8 != (long *)0x0) &&
                                           (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
                                          plVar8 = (long *)0x0;
                                        }
                                        /*DG.Tweening.ShortcutExtensions$$DOShakeRotation*/ func_0x016b5578(0x40200000,0x41a00000,0x41f00000,plVar8,10,0
                                                        ,0);
                                        lVar6 = *(long *)(lVar9 + 0xa0);
                                        unaff_x20 = unaff_x20 + 1;
                                      } while (lVar6 != 0);
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
    return;
  }
  puVar3 = (undefined1 *)register0x00000008;
  lVar9 = param_1;
  if (*(int *)(*(long *)(param_1 + 0x90) + 0xa8) == 1) goto code_r0x0152e6b0;
code_r0x0152ead8:
  *(ulong *)((long)register0x00000008 + -0x70) = unaff_d9;
  *(ulong *)((long)register0x00000008 + -0x68) = unaff_d8;
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  if ((bRam0000000003eb4e8c & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d32230);
    func_0x00f78a20(0x3d32238);
    func_0x00f78a20(0x3d32240);
    func_0x00f78a20(0x3d57288);
    func_0x00f78a20(0x3d39f38);
    func_0x00f78a20(0x3d39f40);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d29730);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6f0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d64950);
    func_0x00f78a20(0x3d29770);
    func_0x00f78a20(0x3d41350);
    func_0x00f78a20(0x3d41360);
    func_0x00f78a20(0x3d60138);
    bRam0000000003eb4e8c = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  lVar9 = func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.<>c__DisplayClass29_0_TypeInfo*/ uRam0000000003d29770);
  /*Atlas.UI.Screens.VotingScreen.<>c__DisplayClass29_0$$.ctor*/ func_0x0156df30(lVar9,0);
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x18) = param_1;
    lVar6 = *(long *)(param_1 + 0x90);
    if (lVar6 != 0) {
      puVar19 = *(undefined8 **)(lVar6 + 0xf0);
      plVar10 = (long *)func_0x00f78aec(/*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730);
      /*Atlas.UI.VotingManager.OnVoteStageChanged$$.ctor*/ func_0x0156d908(plVar10,param_1,uRam0000000003d60138,0);
      plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(puVar19,plVar10,0);
      if ((plVar8 != (long *)0x0) && (*plVar8 != /*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730)) {
        func_0x00f78e5c();
        if (extraout_w1 == 1) {
          plVar8 = (long *)___cxa_begin_catch();
          param_1 = *plVar8;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)((long)register0x00000008 + -0x88),*puVar19);
          if (param_1 == 0) {
            return;
          }
          func_0x00f78ac0(param_1,0);
        }
        uVar7 = __Unwind_Resume();
        *(long **)((long)register0x00000008 + -0xc0) = plVar10;
        *(undefined8 **)((long)register0x00000008 + -0xb8) = puVar19;
        *(long *)((long)register0x00000008 + -0xb0) = lVar9;
        *(long *)((long)register0x00000008 + -0xa8) = param_1;
        *(undefined1 **)((long)register0x00000008 + -0xa0) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)register0x00000008 + -0x98) =
             &Atlas_UI_Screens_VotingScreen__OnTweenComplete;
        lVar9 = 0x3d41358;
        if ((bRam0000000003eb4e8e & 1) == 0) {
          func_0x00f78a20(0x3d41358);
          bRam0000000003eb4e8e = 1;
        }
        lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar7,uRam0000000003d41358);
        if (lVar17 == 0) {
          lVar17 = func_0x00f78af4();
          *(ulong *)((long)register0x00000008 + -0x140) = unaff_d11;
          *(ulong *)((long)register0x00000008 + -0x138) = unaff_d10;
          *(ulong *)((long)register0x00000008 + -0x130) = unaff_d9;
          *(ulong *)((long)register0x00000008 + -0x128) = unaff_d8;
          *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x28;
          *(undefined8 *)((long)register0x00000008 + -0x118) = unaff_x27;
          *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_x26;
          *(undefined8 *)((long)register0x00000008 + -0x108) = 0x3d60000;
          *(undefined8 *)((long)register0x00000008 + -0x100) = 0x3d29730;
          *(long *)((long)register0x00000008 + -0xf8) = lVar6;
          *(long **)((long)register0x00000008 + -0xf0) = plVar10;
          *(undefined8 *)((long)register0x00000008 + -0xe8) = 0x3d41358;
          *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x3eb4000;
          *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar7;
          *(undefined1 **)((long)register0x00000008 + -0xd0) =
               (undefined1 *)((long)register0x00000008 + -0xa0);
          *(undefined **)((long)register0x00000008 + -200) =
               &Atlas_UI_Screens_VotingScreen__PopOffVotes;
          plVar8 = (long *)0x3eb4000;
          if ((bRam0000000003eb4e8f & 1) == 0) {
            func_0x00f78a20(0x3d1fa78);
            func_0x00f78a20(0x3d24188);
            func_0x00f78a20(0x3d64928);
            func_0x00f78a20(0x3d29750);
            bRam0000000003eb4e8f = 1;
          }
          uVar23 = _UNK_033f8754;
          uVar21 = _UNK_033f8140;
          lVar6 = *(long *)(lVar17 + 0xa0);
          if (lVar6 != 0) {
            uVar12 = 0;
            do {
              uVar22 = (uint)uVar12;
              if ((int)*(uint *)(lVar6 + 0x18) <= (int)uVar22) {
                return;
              }
              if (*(uint *)(lVar6 + 0x18) <= uVar22) {
code_r0x0152f454:
                uVar7 = func_0x00f78b24();
                lVar6 = func_0x00f78ac0(uVar7,0);
                *(undefined8 *)((long)register0x00000008 + -0x180) = 0x3d29750;
                *(ulong *)((long)register0x00000008 + -0x178) = uVar12;
                *(long **)((long)register0x00000008 + -0x170) = plVar10;
                *(long *)((long)register0x00000008 + -0x168) = lVar9;
                *(long **)((long)register0x00000008 + -0x160) = plVar8;
                *(long *)((long)register0x00000008 + -0x158) = lVar17;
                *(undefined1 **)((long)register0x00000008 + -0x150) =
                     (undefined1 *)((long)register0x00000008 + -0xd0);
                *(undefined **)((long)register0x00000008 + -0x148) =
                     &Atlas_UI_Screens_VotingScreen___ctor;
                if ((bRam0000000003eb4e90 & 1) == 0) {
                  func_0x00f78a20(0x3d2c9b0);
                  func_0x00f78a20(0x3d39f30);
                  func_0x00f78a20(0x3d1d828);
                  func_0x00f78a20(0x3d1f918);
                  bRam0000000003eb4e90 = 1;
                }
                uVar7 = func_0x00f78a34(/*Atlas.UI.Screens.VotingScreen.VotingPlayerInfo[]_TypeInfo*/ uRam0000000003d1f918,0xc);
                *(undefined8 *)(lVar6 + 0xa0) = uVar7;
                uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<CanvasGroup>_TypeInfo*/ uRam0000000003d1d828);
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar7,uRam0000000003d39f30);
                *(undefined8 *)(lVar6 + 0xb8) = uVar7;
                *(undefined8 *)((long)register0x00000008 + -0x150) =
                     *(undefined8 *)((long)register0x00000008 + -0x150);
                *(undefined8 *)((long)register0x00000008 + -0x148) =
                     *(undefined8 *)((long)register0x00000008 + -0x148);
                if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)**(undefined8 **)
                              (*(long *)(*(long *)(lRam0000000003d2c9b0 + 0x18) + 0xc0) + 0x38))();
                  return;
                }
                auVar29 = func_0x00f78af4();
                puVar13 = auVar29._8_8_;
                puVar19 = auVar29._0_8_;
                uVar18 = puVar13[1];
                uVar7 = *puVar13;
                puVar19[2] = puVar13[2];
                puVar19[1] = uVar18;
                *puVar19 = uVar7;
                return;
              }
              plVar8 = (long *)(long)(int)uVar22;
              lVar6 = *(long *)(lVar6 + (long)plVar8 * 8 + 0x20);
              if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0)) ||
                 (lVar6 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar6,0), lVar6 == 0)) break;
              iVar4 = /*UnityEngine.GameObject$$get_activeInHierarchy*/ func_0x0322efac(lVar6,0);
              if (iVar4 != 0) {
                uVar25 = /*UnityEngine.Random$$Range*/ func_0x03252854(0,0x3f000000,0);
                lVar6 = *(long *)(lVar17 + 0xa0);
                if (lVar6 == 0) break;
                if (*(uint *)(lVar6 + 0x18) <= uVar22) goto code_r0x0152f454;
                lVar9 = *(long *)(lVar6 + (long)plVar8 * 8 + 0x20);
                if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x20), lVar9 == 0)) break;
                plVar10 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
                if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                plVar14 = *(long **)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8);
                lVar9 = plVar14[1];
                if (plVar10 == (long *)0x0) {
                  plVar8 = (long *)0x0;
                  if (lVar9 == 0) {
                    plVar8 = (long *)0x0;
                    goto code_r0x0152f3ac;
                  }
                }
                else {
                  plVar8 = plVar10;
                  if (*plVar10 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                    plVar8 = (long *)0x0;
                  }
                  if (lVar9 == 0) {
code_r0x0152f3ac:
                    if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                      plVar14 = *(long **)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8);
                    }
                    plVar10 = (long *)*plVar14;
                    lVar9 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                    /*System.Action$$.ctor*/ func_0x02924c80(lVar9,plVar10,uRam0000000003d64928,0);
                    *(long *)(*(long *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8) + 8) = lVar9;
                  }
                  else {
                    plVar8 = plVar10;
                    if (*plVar10 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                      plVar8 = (long *)0x0;
                    }
                  }
                }
                /*Atlas.UI.AtlasTweenAnimations$$JumpZoom*/ func_0x0146f84c(uVar23,0,0x41200000,uVar21,uVar25,0,plVar8,0,lVar9,0);
              }
              uVar12 = (ulong)(uVar22 + 1);
              lVar6 = *(long *)(lVar17 + 0xa0);
            } while (lVar6 != 0);
          }
          func_0x00f78af4();
          return;
        }
        lVar9 = *(long *)(lVar17 + 0x18);
        if (lVar9 == 0) {
          return;
        }
        uVar7 = 0;
        *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0xd8) = 0x3d60000;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = 0x3d29730;
        *(long *)((long)register0x00000008 + -200) = lVar6;
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
        *(long *)((long)register0x00000008 + -0xe8) = lVar9;
        lVar6 = *(long *)(lVar9 + 0x68);
        if (lVar6 == 0) {
          puVar3 = (undefined1 *)((long)register0x00000008 + -0xe8);
          lVar17 = 1;
        }
        else {
          lVar17 = *(long *)(lVar6 + 0x18);
          if (lVar17 == 0) {
            return;
          }
          puVar3 = (undefined1 *)(lVar6 + 0x20);
        }
        lVar6 = 0;
        do {
          lVar20 = *(long *)(puVar3 + lVar6 * 8);
          pcVar2 = *(code **)(lVar20 + 0x10);
          plVar8 = *(long **)(lVar20 + 0x20);
          lVar20 = *(long *)(lVar20 + 0x28);
          if (*(short *)(lVar20 + 0x48) == -1) {
            func_0x00f78ad8(lVar20,uVar7);
          }
          iVar4 = func_0x00f78a4c(lVar20);
          if (iVar4 == 0) {
            if ((((plVar8 == (long *)0x0) || (*(short *)(lVar20 + 0x48) == -1)) ||
                ((*(byte *)(*plVar8 + 0x115) & 1) != 0)) || (*(long *)(lVar9 + 0x18) == 0))
            goto code_r0x0156e6ac;
            iVar4 = func_0x00f78a44(lVar20);
            iVar5 = func_0x00f78ec0(lVar20);
            if (iVar4 == 0) {
              uVar1 = *(ushort *)(lVar20 + 0x48);
              if (iVar5 == 0) {
                lVar20 = *plVar8 + (ulong)uVar1 * 0x10;
                (**(code **)(lVar20 + 0x138))(plVar8,*(undefined8 *)(lVar20 + 0x140));
                uVar7 = extraout_x1_01;
                goto code_r0x0156e6b8;
              }
              lVar20 = func_0x00f78a48(lVar20);
              lVar15 = *plVar8;
              uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar12 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar20) {
                    puVar19 = (undefined8 *)
                              (lVar15 + (long)(int)(*piVar16 + (uint)uVar1) * 0x10 + 0x138);
                    goto code_r0x0156e77c;
                  }
                  piVar16 = piVar16 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              puVar19 = (undefined8 *)func_0x00fac1f0(plVar8,lVar20,(ulong)uVar1);
code_r0x0156e77c:
              pcVar2 = (code *)*puVar19;
              puVar19 = (undefined8 *)puVar19[1];
            }
            else {
              if (iVar5 == 0) {
                uVar7 = *(undefined8 *)(*plVar8 + (ulong)*(ushort *)(lVar20 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar15 = *plVar8;
                uVar12 = (ulong)*(ushort *)(lVar15 + 0x12a);
                if (uVar12 != 0) {
                  piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)(lVar20 + 0x18)) {
                      lVar15 = lVar15 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar20 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0156e754;
                    }
                    piVar16 = piVar16 + 4;
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                lVar15 = func_0x00fac1f0(plVar8);
code_r0x0156e754:
                uVar7 = *(undefined8 *)(lVar15 + 8);
              }
              puVar19 = (undefined8 *)func_0x00f78acc(uVar7,lVar20);
              pcVar2 = (code *)*puVar19;
            }
            (*pcVar2)(plVar8,puVar19);
            uVar7 = extraout_x1_02;
          }
          else if (*(char *)(lVar20 + 0x4a) == '\0') {
            (*pcVar2)(lVar20);
            uVar7 = extraout_x1;
          }
          else {
code_r0x0156e6ac:
            (*pcVar2)(plVar8,lVar20);
            uVar7 = extraout_x1_00;
          }
code_r0x0156e6b8:
          lVar6 = lVar6 + 1;
          if (lVar6 == lVar17) {
            return;
          }
        } while( true );
      }
      *(long **)(lVar6 + 0xf0) = plVar8;
      Atlas_UI_Screens_VotingScreen__HideInput(param_1);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar6 = *(long *)(param_1 + 0x90);
      if (lVar6 == 0) {
        uVar7 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
        uVar18 = uVar7;
      }
      else {
        uVar7 = *(undefined8 *)(lVar6 + 0x98);
        uVar18 = *(undefined8 *)(lVar6 + 0xa0);
      }
      if ((*(long *)(param_1 + 0x80) != 0) &&
         (lVar6 = *(long *)(*(long *)(param_1 + 0x80) + 0x10), lVar6 != 0)) {
        lVar6 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar6,uVar7,uRam0000000003d57288);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar6,0,0);
        if (iVar4 == 0) {
code_r0x0152edb0:
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
          if (((lVar6 != 0) && (lVar6 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar6,0), lVar6 != 0)) &&
             ((plVar8 = *(long **)(lVar6 + 0x20), plVar8 != (long *)0x0 &&
              (plVar8 = (long *)(**(code **)(*plVar8 + 0x178))
                                          (plVar8,*(undefined8 *)(*plVar8 + 0x180)),
              plVar8 != (long *)0x0)))) {
            uVar7 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
            iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar7,uVar18,0);
            lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
            if (iVar4 == 0) {
              if (lVar6 != 0) {
                lVar6 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar6,1);
                lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                if (lVar17 != 0) {
                  uVar7 = 0;
                  goto code_r0x0152ee5c;
                }
              }
            }
            else if (lVar6 != 0) {
              lVar6 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar6,0);
              lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
              if (lVar17 != 0) {
                uVar7 = 1;
code_r0x0152ee5c:
                lVar17 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar17,uVar7);
                if ((lVar17 != 0) && (*(long *)(param_1 + 0xb8) != 0)) {
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0xb8),*(undefined8 *)(lVar17 + 0x40),
                                  uRam0000000003d39f38);
                  if (*(long *)(param_1 + 0xb8) != 0) {
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0xb8),*(undefined8 *)(lVar17 + 0x48),
                                    uRam0000000003d39f38);
                    lVar20 = *(long *)(param_1 + 0xb8);
                    lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                    if ((((lVar17 != 0) && (lVar20 != 0)) &&
                        (/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar20,*(undefined8 *)(lVar17 + 0x88),uRam0000000003d39f38)
                        , lVar6 != 0)) && (*(long *)(lVar6 + 0x38) != 0)) {
                      plVar8 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar6 + 0x38),0);
                      if (plVar8 == (long *)0x0) {
                        plVar8 = (long *)0x0;
                      }
                      else if (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                        plVar8 = (long *)0x0;
                      }
                      *(long **)(lVar9 + 0x10) = plVar8;
                      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar7 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
                      if (((*(long *)(lVar6 + 0x38) != 0) &&
                          (lVar17 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar6 + 0x38),0), lVar17 != 0)) &&
                         (lVar17 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar17,0), lVar17 != 0)) {
                        uVar18 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar17,0);
                        /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(uVar18,0,0);
                        lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                        if (lVar17 != 0) {
                          uVar18 = *(undefined8 *)(lVar17 + 0x68);
                          lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                          if (lVar17 != 0) {
                            uVar18 = /*DG.Tweening.DOTweenModuleUI$$DOColor*/ func_0x016a58bc(*(undefined4 *)(lVar17 + 0xf8),
                                                     *(undefined4 *)(lVar17 + 0xfc),
                                                     *(undefined4 *)(lVar17 + 0x100),
                                                     *(undefined4 *)(lVar17 + 0x104),_UNK_033f813c,
                                                     uVar18,0);
                            uVar18 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar7,uVar18,0);
                            if (((*(long *)(lVar6 + 0x38) != 0) &&
                                (lVar6 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar6 + 0x38),0), lVar6 != 0)) &&
                               (lVar6 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar6,0), lVar6 != 0)) {
                              uVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0);
                              lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                              if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa8) != 0)) {
                                uVar21 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar6 + 0xa8),0);
                                lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                                if (lVar6 != 0) {
                                  uVar11 = /*DG.Tweening.ShortcutExtensions$$DOMoveX*/ func_0x016b28e8(uVar21,*(undefined4 *)(lVar6 + 0xb0),
                                                           uVar11,0,0);
                                  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                                  if (lVar6 != 0) {
                                    uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar11,*(undefined4 *)(lVar6 + 0xb4),
                                                             uRam0000000003d5e7a8);
                                    /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar18,uVar11,0);
                                    uVar18 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                                    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar18,lVar9,uRam0000000003d64950,0);
                                    /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar7,uVar18,uRam0000000003d5e6f0);
                                    if (*(long *)(param_1 + 0xb8) != 0) {
                                      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08((undefined1 *)
                                                      ((long)register0x00000008 + -0x88),
                                                      *(long *)(param_1 + 0xb8),uRam0000000003d39f40
                                                     );
                                      while( true ) {
                                        uVar12 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec((undefined1 *)
                                                                 ((long)register0x00000008 + -0x88),
                                                                 uRam0000000003d32238);
                                        if ((uVar12 & 1) == 0) {
                                          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8((undefined1 *)
                                                          ((long)register0x00000008 + -0x88),
                                                          uRam0000000003d32230);
                                          return;
                                        }
                                        uVar7 = *(undefined8 *)((long)register0x00000008 + -0x78);
                                        /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(uVar7,0,0);
                                        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                                        if (lVar9 == 0) break;
                                        /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,*(undefined4 *)(lVar9 + 0xb8),uVar7,0);
                                      }
                                      goto code_r0x0152f158;
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
        else {
          lVar17 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41360);
          if (((lVar17 != 0) && (lVar6 != 0)) && (*(long *)(lVar17 + 0x88) != 0)) {
            uVar7 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar17 + 0x88),*(undefined8 *)(lVar6 + 0x28),0);
            lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41360);
            if (lVar6 != 0) {
              lVar17 = *(long *)(lVar6 + 0x88);
              lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
              if ((lVar6 != 0) && (lVar17 != 0)) {
                uVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar17,*(undefined8 *)(lVar6 + 0xd8),0);
                uVar7 = /*System.String$$Format*/ func_0x029bc688(uVar11,uVar7,0);
                Atlas_UI_Screens_VotingScreen__SetTitleText(param_1,uVar7);
                goto code_r0x0152edb0;
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x0152f158:
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x152f160);
  (*pcVar2)();
}



// ============================================================
// RVA: 0x152e6b0 | Atlas.UI.Screens.VotingScreen.ShowTie
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_VotingScreen__ShowTie(long param_1)

{
  long *plVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 *puVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  long lStack_148;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  
  if ((bRam0000000003eb4e8b & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6f0);
    func_0x00f78a20(0x3d41350);
    func_0x00f78a20(0x3d41360);
    func_0x00f78a20(0x3d60120);
    func_0x00f78a20(0x3d79120);
    bRam0000000003eb4e8b = 1;
  }
  Atlas_UI_Screens_VotingScreen__HideInput(param_1);
  /*Atlas.Audio.UIAudio$$Play*/ func_0x0151398c(/*STR('event:/UI/TiedVote')*/ uRam0000000003d79120,0);
  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41360);
  if (lVar6 != 0) {
    lVar14 = *(long *)(lVar6 + 0x88);
    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
    if ((lVar6 != 0) && (lVar14 != 0)) {
      uVar7 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar14,*(undefined8 *)(lVar6 + 0xe0),0);
      Atlas_UI_Screens_VotingScreen__SetTitleText(param_1,uVar7);
      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
      if ((lVar6 != 0) && (*(long *)(lVar6 + 0x68) != 0)) {
        uVar7 = /*TMPro.TMP_Text$$get_rectTransform*/ func_0x031adac0(*(long *)(lVar6 + 0x68),0);
        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
        if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
          uVar19 = *(undefined4 *)(*(long *)(lVar6 + 0xa0) + 0x10);
          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
          if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
            uVar21 = *(undefined4 *)(*(long *)(lVar6 + 0xa0) + 0x14);
            lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
            if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
              uVar23 = *(undefined4 *)(*(long *)(lVar6 + 0xa0) + 0x18);
              lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
              if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
                uVar24 = *(undefined4 *)(*(long *)(lVar6 + 0xa0) + 0x1c);
                lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
                  /*Atlas.UI.AtlasTweenAnimations$$SpinZoom*/ func_0x0146f82c(uVar19,uVar21,uVar23,uVar24,uVar7,0,
                                  *(undefined1 *)(*(long *)(lVar6 + 0xa0) + 0x20),0,0);
                  lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x70) != 0)) {
                    uVar7 = /*TMPro.TMP_Text$$get_rectTransform*/ func_0x031adac0(*(long *)(lVar6 + 0x70),0);
                    lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                    if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
                      uVar20 = *(uint *)(*(long *)(lVar6 + 0xa0) + 0x10);
                      lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                      if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
                        uVar22 = *(uint *)(*(long *)(lVar6 + 0xa0) + 0x14);
                        lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                        if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
                          uVar19 = *(undefined4 *)(*(long *)(lVar6 + 0xa0) + 0x18);
                          lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                          if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
                            uVar21 = *(undefined4 *)(*(long *)(lVar6 + 0xa0) + 0x1c);
                            lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                            if ((lVar6 != 0) && (*(long *)(lVar6 + 0xa0) != 0)) {
                              /*Atlas.UI.AtlasTweenAnimations$$SpinZoom*/ func_0x0146f82c(uVar20,uVar22,uVar19,uVar21,uVar7,0,
                                              *(undefined1 *)(*(long *)(lVar6 + 0xa0) + 0x20),0,0);
                              if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                                 (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                                func_0x00f78ad0();
                              }
                              uVar7 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
                              lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                              if (lVar6 != 0) {
                                uVar15 = *(undefined8 *)(lVar6 + 0x68);
                                lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                                if (lVar6 != 0) {
                                  uVar15 = /*DG.Tweening.DOTweenModuleUI$$DOColor*/ func_0x016a58bc(*(undefined4 *)(lVar6 + 0xe8),
                                                           *(undefined4 *)(lVar6 + 0xec),
                                                           *(undefined4 *)(lVar6 + 0xf0),
                                                           *(undefined4 *)(lVar6 + 0xf4),
                                                           _UNK_033f813c,uVar15,0);
                                  uVar7 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar7,uVar15,0);
                                  uVar7 = /*DG.Tweening.TweenSettingsExtensions$$AppendInterval*/ func_0x016c3110(0x40000000,uVar7,0);
                                  uVar15 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                                  /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar15,param_1,uRam0000000003d60120,0);
                                  /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar7,uVar15,uRam0000000003d5e6f0);
                                  lVar6 = *(long *)(param_1 + 0xa0);
                                  if (lVar6 != 0) {
                                    lVar14 = 0;
                                    do {
                                      if ((int)*(uint *)(lVar6 + 0x18) <= (int)(uint)lVar14) {
                                        return;
                                      }
                                      if (*(uint *)(lVar6 + 0x18) <= (uint)lVar14) {
                                        uVar7 = func_0x00f78b24();
                                        lVar6 = func_0x00f78ac0(uVar7,0);
                                        uStack_d0 = (ulong)uVar22;
                                        uStack_c8 = (ulong)uVar20;
                                        if ((bRam0000000003eb4e8c & 1) == 0) {
                                          func_0x00f78a20(0x3d20bc0);
                                          func_0x00f78a20(0x3d21270);
                                          func_0x00f78a20(0x3d32230);
                                          func_0x00f78a20(0x3d32238);
                                          func_0x00f78a20(0x3d32240);
                                          func_0x00f78a20(0x3d57288);
                                          func_0x00f78a20(0x3d39f38);
                                          func_0x00f78a20(0x3d39f40);
                                          func_0x00f78a20(0x3d23990);
                                          func_0x00f78a20(0x3d29730);
                                          func_0x00f78a20(0x3d24188);
                                          func_0x00f78a20(0x3d25428);
                                          func_0x00f78a20(0x3d5e6f0);
                                          func_0x00f78a20(0x3d5e7a8);
                                          func_0x00f78a20(0x3d64950);
                                          func_0x00f78a20(0x3d29770);
                                          func_0x00f78a20(0x3d41350);
                                          func_0x00f78a20(0x3d41360);
                                          func_0x00f78a20(0x3d60138);
                                          bRam0000000003eb4e8c = 1;
                                        }
                                        uStack_e8 = 0;
                                        uStack_e0 = 0;
                                        uStack_d8 = 0;
                                        lVar14 = func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.<>c__DisplayClass29_0_TypeInfo*/ uRam0000000003d29770);
                                        /*Atlas.UI.Screens.VotingScreen.<>c__DisplayClass29_0$$.ctor*/ func_0x0156df30(lVar14,0);
                                        if (lVar14 != 0) {
                                          *(long *)(lVar14 + 0x18) = lVar6;
                                          lVar18 = *(long *)(lVar6 + 0x90);
                                          if (lVar18 != 0) {
                                            puVar16 = *(undefined8 **)(lVar18 + 0xf0);
                                            uVar7 = func_0x00f78aec(/*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730);
                                            /*Atlas.UI.VotingManager.OnVoteStageChanged$$.ctor*/ func_0x0156d908(uVar7,lVar6,uRam0000000003d60138,0);
                                            plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(puVar16,uVar7,0);
                                            if ((plVar8 != (long *)0x0) &&
                                               (*plVar8 != /*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730)) {
                                              func_0x00f78e5c();
                                              if (extraout_w1 == 1) {
                                                plVar8 = (long *)___cxa_begin_catch();
                                                lVar6 = *plVar8;
                                                ___cxa_end_catch();
                                                /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e8,*puVar16);
                                                if (lVar6 == 0) {
                                                  return;
                                                }
                                                func_0x00f78ac0(lVar6,0);
                                              }
                                              uVar7 = __Unwind_Resume();
                                              if ((bRam0000000003eb4e8e & 1) == 0) {
                                                func_0x00f78a20(0x3d41358);
                                                bRam0000000003eb4e8e = 1;
                                              }
                                              lVar6 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar7,uRam0000000003d41358);
                                              if (lVar6 == 0) {
                                                lVar6 = func_0x00f78af4();
                                                lStack_148 = 0x3d41358;
                                                if ((bRam0000000003eb4e8f & 1) == 0) {
                                                  func_0x00f78a20(0x3d1fa78);
                                                  func_0x00f78a20(0x3d24188);
                                                  func_0x00f78a20(0x3d64928);
                                                  func_0x00f78a20(0x3d29750);
                                                  bRam0000000003eb4e8f = 1;
                                                }
                                                uVar21 = _UNK_033f8754;
                                                uVar19 = _UNK_033f8140;
                                                lVar14 = *(long *)(lVar6 + 0xa0);
                                                if (lVar14 == 0) goto code_r0x0152f42c;
                                                uVar20 = 0;
                                                goto code_r0x0152f2cc;
                                              }
                                              lVar6 = *(long *)(lVar6 + 0x18);
                                              if (lVar6 == 0) {
                                                return;
                                              }
                                              uVar7 = 0;
                                              lStack_148 = lVar6;
                                              lVar14 = *(long *)(lVar6 + 0x68);
                                              if (lVar14 == 0) {
                                                plVar8 = &lStack_148;
                                                lVar18 = 1;
                                              }
                                              else {
                                                lVar18 = *(long *)(lVar14 + 0x18);
                                                if (lVar18 == 0) {
                                                  return;
                                                }
                                                plVar8 = (long *)(lVar14 + 0x20);
                                              }
                                              lVar14 = 0;
                                              goto code_r0x0156e5ec;
                                            }
                                            *(long **)(lVar18 + 0xf0) = plVar8;
                                            Atlas_UI_Screens_VotingScreen__HideInput(lVar6);
                                            if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 &
                                                 1) != 0) &&
                                               (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                                              func_0x00f78ad0();
                                            }
                                            lVar18 = *(long *)(lVar6 + 0x90);
                                            if (lVar18 == 0) {
                                              uVar7 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8)
                                              ;
                                              uVar15 = uVar7;
                                            }
                                            else {
                                              uVar7 = *(undefined8 *)(lVar18 + 0x98);
                                              uVar15 = *(undefined8 *)(lVar18 + 0xa0);
                                            }
                                            if ((*(long *)(lVar6 + 0x80) != 0) &&
                                               (lVar18 = *(long *)(*(long *)(lVar6 + 0x80) + 0x10),
                                               lVar18 != 0)) {
                                              lVar18 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar18,uVar7,
                                                                       uRam0000000003d57288);
                                              if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10
                                                   & 1) != 0) &&
                                                 (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
                                                func_0x00f78ad0();
                                              }
                                              iVar4 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar18,0,0);
                                              if (iVar4 == 0) {
code_r0x0152edb0:
                                                lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,uRam0000000003d41350)
                                                ;
                                                if (((lVar18 != 0) &&
                                                    (lVar18 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar18,0), lVar18 != 0
                                                    )) && ((plVar8 = *(long **)(lVar18 + 0x20),
                                                           plVar8 != (long *)0x0 &&
                                                           (plVar8 = (long *)(**(code **)(*plVar8 +
                                                                                         0x178))(
                                                  plVar8,*(undefined8 *)(*plVar8 + 0x180)),
                                                  plVar8 != (long *)0x0)))) {
                                                  uVar7 = (**(code **)(*plVar8 + 0x178))
                                                                    (plVar8,*(undefined8 *)
                                                                             (*plVar8 + 0x180));
                                                  iVar4 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar7,uVar15,0);
                                                  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,
                                                  uRam0000000003d41350);
                                                  if (iVar4 == 0) {
                                                    if (lVar18 != 0) {
                                                      lVar18 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar18,1);
                                                      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,
                                                  uRam0000000003d41350);
                                                  if (lVar9 != 0) {
                                                    uVar7 = 0;
                                                    goto code_r0x0152ee5c;
                                                  }
                                                  }
                                                  }
                                                  else if (lVar18 != 0) {
                                                    lVar18 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar18,0);
                                                    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,
                                                  uRam0000000003d41350);
                                                  if (lVar9 != 0) {
                                                    uVar7 = 1;
code_r0x0152ee5c:
                                                    lVar9 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar9,uVar7);
                                                    if ((lVar9 != 0) &&
                                                       (*(long *)(lVar6 + 0xb8) != 0)) {
                                                      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar6 + 0xb8),
                                                                      *(undefined8 *)(lVar9 + 0x40),
                                                                      uRam0000000003d39f38);
                                                      if (*(long *)(lVar6 + 0xb8) != 0) {
                                                        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(lVar6 + 0xb8),
                                                                        *(undefined8 *)
                                                                         (lVar9 + 0x48),
                                                                        uRam0000000003d39f38);
                                                        lVar17 = *(long *)(lVar6 + 0xb8);
                                                        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,
                                                  uRam0000000003d41350);
                                                  if ((((lVar9 != 0) && (lVar17 != 0)) &&
                                                      (/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar17,*(undefined8 *)
                                                                               (lVar9 + 0x88),
                                                                       uRam0000000003d39f38),
                                                      lVar18 != 0)) &&
                                                     (*(long *)(lVar18 + 0x38) != 0)) {
                                                    plVar8 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(
                                                  lVar18 + 0x38),0);
                                                  if (plVar8 == (long *)0x0) {
                                                    plVar8 = (long *)0x0;
                                                  }
                                                  else if (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                                                    plVar8 = (long *)0x0;
                                                  }
                                                  *(long **)(lVar14 + 0x10) = plVar8;
                                                  if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >>
                                                        10 & 1) != 0) &&
                                                     (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                                                    func_0x00f78ad0();
                                                  }
                                                  uVar7 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
                                                  if (((*(long *)(lVar18 + 0x38) != 0) &&
                                                      (lVar9 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar18 + 
                                                  0x38),0), lVar9 != 0)) &&
                                                  (lVar9 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar9,0), lVar9 != 0)) {
                                                    uVar15 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar9,0);
                                                    /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(uVar15,0,0);
                                                    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,
                                                  uRam0000000003d41350);
                                                  if (lVar9 != 0) {
                                                    uVar15 = *(undefined8 *)(lVar9 + 0x68);
                                                    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,
                                                  uRam0000000003d41350);
                                                  if (lVar9 != 0) {
                                                    uVar15 = /*DG.Tweening.DOTweenModuleUI$$DOColor*/ func_0x016a58bc(*(undefined4 *)
                                                                              (lVar9 + 0xf8),
                                                                             *(undefined4 *)
                                                                              (lVar9 + 0xfc),
                                                                             *(undefined4 *)
                                                                              (lVar9 + 0x100),
                                                                             *(undefined4 *)
                                                                              (lVar9 + 0x104),
                                                                             _UNK_033f813c,uVar15,0)
                                                    ;
                                                    uVar15 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar7,uVar15,0);
                                                    if (((*(long *)(lVar18 + 0x38) != 0) &&
                                                        (lVar18 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar18 +
                                                                                           0x38),0),
                                                        lVar18 != 0)) &&
                                                       (lVar18 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar18,0),
                                                       lVar18 != 0)) {
                                                      uVar10 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar18,0);
                                                      lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,
                                                  uRam0000000003d41350);
                                                  if ((lVar18 != 0) &&
                                                     (*(long *)(lVar18 + 0xa8) != 0)) {
                                                    uVar19 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar18 + 0xa8
                                                                                      ),0);
                                                    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,
                                                  uRam0000000003d41350);
                                                  if (lVar18 != 0) {
                                                    uVar10 = /*DG.Tweening.ShortcutExtensions$$DOMoveX*/ func_0x016b28e8(uVar19,*(undefined4 *)
                                                                                     (lVar18 + 0xb0)
                                                                             ,uVar10,0,0);
                                                    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,
                                                  uRam0000000003d41350);
                                                  if (lVar18 != 0) {
                                                    uVar10 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar10,*(undefined4 *)
                                                                                     (lVar18 + 0xb4)
                                                                             ,uRam0000000003d5e7a8);
                                                    /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar15,uVar10,0);
                                                    uVar15 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                                                    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar15,lVar14,
                                                                    uRam0000000003d64950,0);
                                                    /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar7,uVar15,
                                                                    uRam0000000003d5e6f0);
                                                    if (*(long *)(lVar6 + 0xb8) != 0) {
                                                      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_e8,
                                                                      *(long *)(lVar6 + 0xb8),
                                                                      uRam0000000003d39f40);
                                                      while( true ) {
                                                        uVar11 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_e8,
                                                                                                                                                                  
                                                  uRam0000000003d32238);
                                                  uVar7 = uStack_d8;
                                                  if ((uVar11 & 1) == 0) {
                                                    /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_e8,uRam0000000003d32230)
                                                    ;
                                                    return;
                                                  }
                                                  /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(uStack_d8,0,0);
                                                  lVar14 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,
                                                  uRam0000000003d41350);
                                                  if (lVar14 == 0) break;
                                                  /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,*(undefined4 *)(lVar14 + 0xb8),
                                                                  uVar7,0);
                                                  }
code_r0x0152f158:
                                                  func_0x00f78af4();
                    /* WARNING: Does not return */
                                                  pcVar3 = (code *)SoftwareBreakpoint(1,0x152f160);
                                                  (*pcVar3)();
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
                                              else {
                                                lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,uRam0000000003d41360);
                                                if (((lVar9 != 0) && (lVar18 != 0)) &&
                                                   (*(long *)(lVar9 + 0x88) != 0)) {
                                                  uVar7 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar9 + 0x88),
                                                                          *(undefined8 *)
                                                                           (lVar18 + 0x28),0);
                                                  lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(lVar6,
                                                  uRam0000000003d41360);
                                                  if (lVar18 != 0) {
                                                    lVar9 = *(long *)(lVar18 + 0x88);
                                                    lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar6,
                                                  uRam0000000003d41350);
                                                  if ((lVar18 != 0) && (lVar9 != 0)) {
                                                    uVar10 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar9,*(undefined8 *)
                                                                                    (lVar18 + 0xd8),
                                                                             0);
                                                    uVar7 = /*System.String$$Format*/ func_0x029bc688(uVar10,uVar7,0);
                                                    Atlas_UI_Screens_VotingScreen__SetTitleText
                                                              (lVar6,uVar7);
                                                    goto code_r0x0152edb0;
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        func_0x00f78af4();
                                        goto code_r0x0152f158;
                                      }
                                      lVar6 = *(long *)(lVar6 + lVar14 * 8 + 0x20);
                                      if ((lVar6 == 0) ||
                                         (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0)) break;
                                      plVar8 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar6,0);
                                      if ((plVar8 != (long *)0x0) &&
                                         (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188)) {
                                        plVar8 = (long *)0x0;
                                      }
                                      /*DG.Tweening.ShortcutExtensions$$DOShakeRotation*/ func_0x016b5578(0x40200000,0x41a00000,0x41f00000,plVar8,10,0,0
                                                     );
                                      lVar6 = *(long *)(param_1 + 0xa0);
                                      lVar14 = lVar14 + 1;
                                    } while (lVar6 != 0);
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
  return;
code_r0x0156e5ec:
  lVar9 = plVar8[lVar14];
  pcVar3 = *(code **)(lVar9 + 0x10);
  plVar1 = *(long **)(lVar9 + 0x20);
  lVar9 = *(long *)(lVar9 + 0x28);
  if (*(short *)(lVar9 + 0x48) == -1) {
    func_0x00f78ad8(lVar9,uVar7);
  }
  iVar4 = func_0x00f78a4c(lVar9);
  if (iVar4 == 0) {
    if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
        ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar6 + 0x18) == 0))
    goto code_r0x0156e6ac;
    iVar4 = func_0x00f78a44(lVar9);
    iVar5 = func_0x00f78ec0(lVar9);
    if (iVar4 == 0) {
      uVar2 = *(ushort *)(lVar9 + 0x48);
      if (iVar5 == 0) {
        lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
        (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
        uVar7 = extraout_x1_01;
        goto code_r0x0156e6b8;
      }
      lVar9 = func_0x00f78a48(lVar9);
      lVar17 = *plVar1;
      uVar11 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar9) {
            puVar16 = (undefined8 *)(lVar17 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
            goto code_r0x0156e77c;
          }
          piVar13 = piVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      puVar16 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x0156e77c:
      pcVar3 = (code *)*puVar16;
      puVar16 = (undefined8 *)puVar16[1];
    }
    else {
      if (iVar5 == 0) {
        uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
      }
      else {
        lVar17 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)(lVar9 + 0x18)) {
              lVar17 = lVar17 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                       0x138;
              goto code_r0x0156e754;
            }
            piVar13 = piVar13 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        lVar17 = func_0x00fac1f0(plVar1);
code_r0x0156e754:
        uVar7 = *(undefined8 *)(lVar17 + 8);
      }
      puVar16 = (undefined8 *)func_0x00f78acc(uVar7,lVar9);
      pcVar3 = (code *)*puVar16;
    }
    (*pcVar3)(plVar1,puVar16);
    uVar7 = extraout_x1_02;
  }
  else if (*(char *)(lVar9 + 0x4a) == '\0') {
    (*pcVar3)(lVar9);
    uVar7 = extraout_x1;
  }
  else {
code_r0x0156e6ac:
    (*pcVar3)(plVar1,lVar9);
    uVar7 = extraout_x1_00;
  }
code_r0x0156e6b8:
  lVar14 = lVar14 + 1;
  if (lVar14 == lVar18) {
    return;
  }
  goto code_r0x0156e5ec;
  while( true ) {
    uVar20 = uVar20 + 1;
    lVar14 = *(long *)(lVar6 + 0xa0);
    if (lVar14 == 0) break;
code_r0x0152f2cc:
    if ((int)*(uint *)(lVar14 + 0x18) <= (int)uVar20) {
      return;
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar20) {
code_r0x0152f454:
      uVar7 = func_0x00f78b24();
      lVar6 = func_0x00f78ac0(uVar7,0);
      if ((bRam0000000003eb4e90 & 1) == 0) {
        func_0x00f78a20(0x3d2c9b0);
        func_0x00f78a20(0x3d39f30);
        func_0x00f78a20(0x3d1d828);
        func_0x00f78a20(0x3d1f918);
        bRam0000000003eb4e90 = 1;
      }
      uVar7 = func_0x00f78a34(/*Atlas.UI.Screens.VotingScreen.VotingPlayerInfo[]_TypeInfo*/ uRam0000000003d1f918,0xc);
      *(undefined8 *)(lVar6 + 0xa0) = uVar7;
      uVar7 = func_0x00f78aec(/*System.Collections.Generic.List<CanvasGroup>_TypeInfo*/ uRam0000000003d1d828);
      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar7,uRam0000000003d39f30);
      *(undefined8 *)(lVar6 + 0xb8) = uVar7;
      if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c9b0 + 0x18) + 0xc0) + 0x38)
        )();
        return;
      }
      auVar25 = func_0x00f78af4();
      puVar12 = auVar25._8_8_;
      puVar16 = auVar25._0_8_;
      uVar15 = puVar12[1];
      uVar7 = *puVar12;
      puVar16[2] = puVar12[2];
      puVar16[1] = uVar15;
      *puVar16 = uVar7;
      return;
    }
    lVar14 = *(long *)(lVar14 + (long)(int)uVar20 * 8 + 0x20);
    if (((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x20), lVar14 == 0)) ||
       (lVar14 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar14,0), lVar14 == 0)) break;
    iVar4 = /*UnityEngine.GameObject$$get_activeInHierarchy*/ func_0x0322efac(lVar14,0);
    if (iVar4 != 0) {
      uVar23 = /*UnityEngine.Random$$Range*/ func_0x03252854(0,0x3f000000,0);
      lVar14 = *(long *)(lVar6 + 0xa0);
      if (lVar14 == 0) break;
      if (*(uint *)(lVar14 + 0x18) <= uVar20) goto code_r0x0152f454;
      lVar14 = *(long *)(lVar14 + (long)(int)uVar20 * 8 + 0x20);
      if ((lVar14 == 0) || (lVar14 = *(long *)(lVar14 + 0x20), lVar14 == 0)) break;
      plVar8 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar14,0);
      if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      puVar16 = *(undefined8 **)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8);
      lVar14 = puVar16[1];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        if (lVar14 == 0) {
          plVar1 = (long *)0x0;
          goto code_r0x0152f3ac;
        }
      }
      else {
        plVar1 = plVar8;
        if (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
          plVar1 = (long *)0x0;
        }
        if (lVar14 == 0) {
code_r0x0152f3ac:
          plVar8 = plVar1;
          if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xe0) == 0)) {
            func_0x00f78ad0();
            puVar16 = *(undefined8 **)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8);
          }
          uVar7 = *puVar16;
          lVar14 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
          /*System.Action$$.ctor*/ func_0x02924c80(lVar14,uVar7,uRam0000000003d64928,0);
          *(long *)(*(long *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8) + 8) = lVar14;
        }
        else if (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
          plVar8 = (long *)0x0;
        }
      }
      /*Atlas.UI.AtlasTweenAnimations$$JumpZoom*/ func_0x0146f84c(uVar21,0,0x41200000,uVar19,uVar23,0,plVar8,0,lVar14,0);
    }
  }
code_r0x0152f42c:
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x152ead8 | Atlas.UI.Screens.VotingScreen.ShowWinner
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_VotingScreen__ShowWinner(long param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 *puVar14;
  long lVar15;
  int *piVar16;
  undefined8 *puVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  long lStack_e8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000003eb4e8c & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d32230);
    func_0x00f78a20(0x3d32238);
    func_0x00f78a20(0x3d32240);
    func_0x00f78a20(0x3d57288);
    func_0x00f78a20(0x3d39f38);
    func_0x00f78a20(0x3d39f40);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d29730);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6f0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d64950);
    func_0x00f78a20(0x3d29770);
    func_0x00f78a20(0x3d41350);
    func_0x00f78a20(0x3d41360);
    func_0x00f78a20(0x3d60138);
    bRam0000000003eb4e8c = 1;
  }
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  lVar7 = func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.<>c__DisplayClass29_0_TypeInfo*/ uRam0000000003d29770);
  /*Atlas.UI.Screens.VotingScreen.<>c__DisplayClass29_0$$.ctor*/ func_0x0156df30(lVar7,0);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x18) = param_1;
    lVar20 = *(long *)(param_1 + 0x90);
    if (lVar20 != 0) {
      puVar17 = *(undefined8 **)(lVar20 + 0xf0);
      uVar8 = func_0x00f78aec(/*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730);
      /*Atlas.UI.VotingManager.OnVoteStageChanged$$.ctor*/ func_0x0156d908(uVar8,param_1,uRam0000000003d60138,0);
      plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(puVar17,uVar8,0);
      if ((plVar9 != (long *)0x0) && (*plVar9 != /*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730)) {
        func_0x00f78e5c();
        if (extraout_w1 == 1) {
          plVar9 = (long *)___cxa_begin_catch();
          lVar7 = *plVar9;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,*puVar17);
          if (lVar7 == 0) {
            return;
          }
          func_0x00f78ac0(lVar7,0);
        }
        uVar8 = __Unwind_Resume();
        if ((bRam0000000003eb4e8e & 1) == 0) {
          func_0x00f78a20(0x3d41358);
          bRam0000000003eb4e8e = 1;
        }
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41358);
        if (lVar7 == 0) {
          lVar7 = func_0x00f78af4();
          lStack_e8 = 0x3d41358;
          if ((bRam0000000003eb4e8f & 1) == 0) {
            func_0x00f78a20(0x3d1fa78);
            func_0x00f78a20(0x3d24188);
            func_0x00f78a20(0x3d64928);
            func_0x00f78a20(0x3d29750);
            bRam0000000003eb4e8f = 1;
          }
          uVar3 = _UNK_033f8754;
          uVar21 = _UNK_033f8140;
          lVar20 = *(long *)(lVar7 + 0xa0);
          if (lVar20 != 0) {
            uVar19 = 0;
            do {
              if ((int)*(uint *)(lVar20 + 0x18) <= (int)uVar19) {
                return;
              }
              if (*(uint *)(lVar20 + 0x18) <= uVar19) {
code_r0x0152f454:
                uVar8 = func_0x00f78b24();
                lVar7 = func_0x00f78ac0(uVar8,0);
                if ((bRam0000000003eb4e90 & 1) == 0) {
                  func_0x00f78a20(0x3d2c9b0);
                  func_0x00f78a20(0x3d39f30);
                  func_0x00f78a20(0x3d1d828);
                  func_0x00f78a20(0x3d1f918);
                  bRam0000000003eb4e90 = 1;
                }
                uVar8 = func_0x00f78a34(/*Atlas.UI.Screens.VotingScreen.VotingPlayerInfo[]_TypeInfo*/ uRam0000000003d1f918,0xc);
                *(undefined8 *)(lVar7 + 0xa0) = uVar8;
                uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<CanvasGroup>_TypeInfo*/ uRam0000000003d1d828);
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d39f30);
                *(undefined8 *)(lVar7 + 0xb8) = uVar8;
                if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)**(undefined8 **)
                              (*(long *)(*(long *)(lRam0000000003d2c9b0 + 0x18) + 0xc0) + 0x38))();
                  return;
                }
                auVar23 = func_0x00f78af4();
                puVar14 = auVar23._8_8_;
                puVar17 = auVar23._0_8_;
                uVar12 = puVar14[1];
                uVar8 = *puVar14;
                puVar17[2] = puVar14[2];
                puVar17[1] = uVar12;
                *puVar17 = uVar8;
                return;
              }
              lVar20 = *(long *)(lVar20 + (long)(int)uVar19 * 8 + 0x20);
              if (((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x20), lVar20 == 0)) ||
                 (lVar20 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar20,0), lVar20 == 0)) break;
              iVar5 = /*UnityEngine.GameObject$$get_activeInHierarchy*/ func_0x0322efac(lVar20,0);
              if (iVar5 != 0) {
                uVar22 = /*UnityEngine.Random$$Range*/ func_0x03252854(0,0x3f000000,0);
                lVar20 = *(long *)(lVar7 + 0xa0);
                if (lVar20 == 0) break;
                if (*(uint *)(lVar20 + 0x18) <= uVar19) goto code_r0x0152f454;
                lVar20 = *(long *)(lVar20 + (long)(int)uVar19 * 8 + 0x20);
                if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x20), lVar20 == 0)) break;
                plVar9 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar20,0);
                if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                puVar17 = *(undefined8 **)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8);
                lVar20 = puVar17[1];
                if (plVar9 == (long *)0x0) {
                  plVar9 = (long *)0x0;
                  if (lVar20 == 0) {
                    plVar1 = (long *)0x0;
                    goto code_r0x0152f3ac;
                  }
                }
                else {
                  plVar1 = plVar9;
                  if (*plVar9 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                    plVar1 = (long *)0x0;
                  }
                  if (lVar20 == 0) {
code_r0x0152f3ac:
                    plVar9 = plVar1;
                    if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                      puVar17 = *(undefined8 **)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8);
                    }
                    uVar8 = *puVar17;
                    lVar20 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                    /*System.Action$$.ctor*/ func_0x02924c80(lVar20,uVar8,uRam0000000003d64928,0);
                    *(long *)(*(long *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8) + 8) = lVar20;
                  }
                  else if (*plVar9 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                    plVar9 = (long *)0x0;
                  }
                }
                /*Atlas.UI.AtlasTweenAnimations$$JumpZoom*/ func_0x0146f84c(uVar3,0,0x41200000,uVar21,uVar22,0,plVar9,0,lVar20,0);
              }
              uVar19 = uVar19 + 1;
              lVar20 = *(long *)(lVar7 + 0xa0);
            } while (lVar20 != 0);
          }
          func_0x00f78af4();
          return;
        }
        lVar7 = *(long *)(lVar7 + 0x18);
        if (lVar7 == 0) {
          return;
        }
        uVar8 = 0;
        lStack_e8 = lVar7;
        lVar20 = *(long *)(lVar7 + 0x68);
        if (lVar20 == 0) {
          plVar9 = &lStack_e8;
          lVar10 = 1;
        }
        else {
          lVar10 = *(long *)(lVar20 + 0x18);
          if (lVar10 == 0) {
            return;
          }
          plVar9 = (long *)(lVar20 + 0x20);
        }
        lVar20 = 0;
        do {
          lVar18 = plVar9[lVar20];
          pcVar4 = *(code **)(lVar18 + 0x10);
          plVar1 = *(long **)(lVar18 + 0x20);
          lVar18 = *(long *)(lVar18 + 0x28);
          if (*(short *)(lVar18 + 0x48) == -1) {
            func_0x00f78ad8(lVar18,uVar8);
          }
          iVar5 = func_0x00f78a4c(lVar18);
          if (iVar5 == 0) {
            if ((((plVar1 == (long *)0x0) || (*(short *)(lVar18 + 0x48) == -1)) ||
                ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar7 + 0x18) == 0))
            goto code_r0x0156e6ac;
            iVar5 = func_0x00f78a44(lVar18);
            iVar6 = func_0x00f78ec0(lVar18);
            if (iVar5 == 0) {
              uVar2 = *(ushort *)(lVar18 + 0x48);
              if (iVar6 == 0) {
                lVar18 = *plVar1 + (ulong)uVar2 * 0x10;
                (**(code **)(lVar18 + 0x138))(plVar1,*(undefined8 *)(lVar18 + 0x140));
                uVar8 = extraout_x1_01;
                goto code_r0x0156e6b8;
              }
              lVar18 = func_0x00f78a48(lVar18);
              lVar15 = *plVar1;
              uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar13 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar18) {
                    puVar17 = (undefined8 *)
                              (lVar15 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x0156e77c;
                  }
                  piVar16 = piVar16 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              puVar17 = (undefined8 *)func_0x00fac1f0(plVar1,lVar18,(ulong)uVar2);
code_r0x0156e77c:
              pcVar4 = (code *)*puVar17;
              puVar17 = (undefined8 *)puVar17[1];
            }
            else {
              if (iVar6 == 0) {
                uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar15 = *plVar1;
                uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
                if (uVar13 != 0) {
                  piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)(lVar18 + 0x18)) {
                      lVar15 = lVar15 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar18 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0156e754;
                    }
                    piVar16 = piVar16 + 4;
                    uVar13 = uVar13 - 1;
                  } while (uVar13 != 0);
                }
                lVar15 = func_0x00fac1f0(plVar1);
code_r0x0156e754:
                uVar8 = *(undefined8 *)(lVar15 + 8);
              }
              puVar17 = (undefined8 *)func_0x00f78acc(uVar8,lVar18);
              pcVar4 = (code *)*puVar17;
            }
            (*pcVar4)(plVar1,puVar17);
            uVar8 = extraout_x1_02;
          }
          else if (*(char *)(lVar18 + 0x4a) == '\0') {
            (*pcVar4)(lVar18);
            uVar8 = extraout_x1;
          }
          else {
code_r0x0156e6ac:
            (*pcVar4)(plVar1,lVar18);
            uVar8 = extraout_x1_00;
          }
code_r0x0156e6b8:
          lVar20 = lVar20 + 1;
          if (lVar20 == lVar10) {
            return;
          }
        } while( true );
      }
      *(long **)(lVar20 + 0xf0) = plVar9;
      Atlas_UI_Screens_VotingScreen__HideInput(param_1);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar20 = *(long *)(param_1 + 0x90);
      if (lVar20 == 0) {
        uVar8 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
        uVar12 = uVar8;
      }
      else {
        uVar8 = *(undefined8 *)(lVar20 + 0x98);
        uVar12 = *(undefined8 *)(lVar20 + 0xa0);
      }
      if ((*(long *)(param_1 + 0x80) != 0) &&
         (lVar20 = *(long *)(*(long *)(param_1 + 0x80) + 0x10), lVar20 != 0)) {
        lVar20 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar20,uVar8,uRam0000000003d57288);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar20,0,0);
        if (iVar5 == 0) {
code_r0x0152edb0:
          lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
          if (((lVar20 != 0) && (lVar20 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar20,0), lVar20 != 0)) &&
             ((plVar9 = *(long **)(lVar20 + 0x20), plVar9 != (long *)0x0 &&
              (plVar9 = (long *)(**(code **)(*plVar9 + 0x178))
                                          (plVar9,*(undefined8 *)(*plVar9 + 0x180)),
              plVar9 != (long *)0x0)))) {
            uVar8 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
            iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar8,uVar12,0);
            lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
            if (iVar5 == 0) {
              if (lVar20 != 0) {
                lVar20 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar20,1);
                lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                if (lVar10 != 0) {
                  uVar8 = 0;
                  goto code_r0x0152ee5c;
                }
              }
            }
            else if (lVar20 != 0) {
              lVar20 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar20,0);
              lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
              if (lVar10 != 0) {
                uVar8 = 1;
code_r0x0152ee5c:
                lVar10 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar10,uVar8);
                if ((lVar10 != 0) && (*(long *)(param_1 + 0xb8) != 0)) {
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0xb8),*(undefined8 *)(lVar10 + 0x40),
                                  uRam0000000003d39f38);
                  if (*(long *)(param_1 + 0xb8) != 0) {
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0xb8),*(undefined8 *)(lVar10 + 0x48),
                                    uRam0000000003d39f38);
                    lVar18 = *(long *)(param_1 + 0xb8);
                    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                    if ((((lVar10 != 0) && (lVar18 != 0)) &&
                        (/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar18,*(undefined8 *)(lVar10 + 0x88),uRam0000000003d39f38)
                        , lVar20 != 0)) && (*(long *)(lVar20 + 0x38) != 0)) {
                      plVar9 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar20 + 0x38),0);
                      if (plVar9 == (long *)0x0) {
                        plVar9 = (long *)0x0;
                      }
                      else if (*plVar9 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                        plVar9 = (long *)0x0;
                      }
                      *(long **)(lVar7 + 0x10) = plVar9;
                      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar8 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
                      if (((*(long *)(lVar20 + 0x38) != 0) &&
                          (lVar10 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar20 + 0x38),0), lVar10 != 0)) &&
                         (lVar10 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar10,0), lVar10 != 0)) {
                        uVar12 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0);
                        /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(uVar12,0,0);
                        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                        if (lVar10 != 0) {
                          uVar12 = *(undefined8 *)(lVar10 + 0x68);
                          lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                          if (lVar10 != 0) {
                            uVar12 = /*DG.Tweening.DOTweenModuleUI$$DOColor*/ func_0x016a58bc(*(undefined4 *)(lVar10 + 0xf8),
                                                     *(undefined4 *)(lVar10 + 0xfc),
                                                     *(undefined4 *)(lVar10 + 0x100),
                                                     *(undefined4 *)(lVar10 + 0x104),_UNK_033f813c,
                                                     uVar12,0);
                            uVar12 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar8,uVar12,0);
                            if (((*(long *)(lVar20 + 0x38) != 0) &&
                                (lVar20 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar20 + 0x38),0), lVar20 != 0))
                               && (lVar20 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar20,0), lVar20 != 0)) {
                              uVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar20,0);
                              lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                              if ((lVar20 != 0) && (*(long *)(lVar20 + 0xa8) != 0)) {
                                uVar21 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar20 + 0xa8),0);
                                lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                                if (lVar20 != 0) {
                                  uVar11 = /*DG.Tweening.ShortcutExtensions$$DOMoveX*/ func_0x016b28e8(uVar21,*(undefined4 *)(lVar20 + 0xb0),
                                                           uVar11,0,0);
                                  lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                                  if (lVar20 != 0) {
                                    uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar11,*(undefined4 *)(lVar20 + 0xb4),
                                                             uRam0000000003d5e7a8);
                                    /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar12,uVar11,0);
                                    uVar12 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                                    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar12,lVar7,uRam0000000003d64950,0);
                                    /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar8,uVar12,uRam0000000003d5e6f0);
                                    if (*(long *)(param_1 + 0xb8) != 0) {
                                      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_88,*(long *)(param_1 + 0xb8),
                                                      uRam0000000003d39f40);
                                      while( true ) {
                                        uVar13 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_88,uRam0000000003d32238);
                                        uVar8 = uStack_78;
                                        if ((uVar13 & 1) == 0) {
                                          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,uRam0000000003d32230);
                                          return;
                                        }
                                        /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(uStack_78,0,0);
                                        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                                        if (lVar7 == 0) break;
                                        /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,*(undefined4 *)(lVar7 + 0xb8),uVar8,0);
                                      }
                                      goto code_r0x0152f158;
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
        else {
          lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41360);
          if (((lVar10 != 0) && (lVar20 != 0)) && (*(long *)(lVar10 + 0x88) != 0)) {
            uVar8 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar10 + 0x88),*(undefined8 *)(lVar20 + 0x28),0);
            lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41360);
            if (lVar20 != 0) {
              lVar10 = *(long *)(lVar20 + 0x88);
              lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
              if ((lVar20 != 0) && (lVar10 != 0)) {
                uVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar10,*(undefined8 *)(lVar20 + 0xd8),0);
                uVar8 = /*System.String$$Format*/ func_0x029bc688(uVar11,uVar8,0);
                Atlas_UI_Screens_VotingScreen__SetTitleText(param_1,uVar8);
                goto code_r0x0152edb0;
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x0152f158:
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x152f160);
  (*pcVar4)();
}



// ============================================================
// RVA: 0x152f1a8 | Atlas.UI.Screens.VotingScreen.OnTweenComplete
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_VotingScreen__OnTweenComplete(undefined8 param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  code *pcVar17;
  uint uVar18;
  long lVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  long lStack_58;
  
  if ((bRam0000000003eb4e8e & 1) == 0) {
    func_0x00f78a20(0x3d41358);
    bRam0000000003eb4e8e = 1;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41358);
  if (lVar7 == 0) {
    lVar7 = func_0x00f78af4();
    lStack_58 = 0x3d41358;
    if ((bRam0000000003eb4e8f & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d24188);
      func_0x00f78a20(0x3d64928);
      func_0x00f78a20(0x3d29750);
      bRam0000000003eb4e8f = 1;
    }
    uVar4 = _UNK_033f8754;
    uVar3 = _UNK_033f8140;
    lVar12 = *(long *)(lVar7 + 0xa0);
    if (lVar12 != 0) {
      uVar18 = 0;
      do {
        if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar18) {
          return;
        }
        if (*(uint *)(lVar12 + 0x18) <= uVar18) {
code_r0x0152f454:
          uVar10 = func_0x00f78b24();
          lVar7 = func_0x00f78ac0(uVar10,0);
          if ((bRam0000000003eb4e90 & 1) == 0) {
            func_0x00f78a20(0x3d2c9b0);
            func_0x00f78a20(0x3d39f30);
            func_0x00f78a20(0x3d1d828);
            func_0x00f78a20(0x3d1f918);
            bRam0000000003eb4e90 = 1;
          }
          uVar10 = func_0x00f78a34(/*Atlas.UI.Screens.VotingScreen.VotingPlayerInfo[]_TypeInfo*/ uRam0000000003d1f918,0xc);
          *(undefined8 *)(lVar7 + 0xa0) = uVar10;
          uVar10 = func_0x00f78aec(/*System.Collections.Generic.List<CanvasGroup>_TypeInfo*/ uRam0000000003d1d828);
          /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar10,uRam0000000003d39f30);
          *(undefined8 *)(lVar7 + 0xb8) = uVar10;
          if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(lRam0000000003d2c9b0 + 0x18) + 0xc0) + 0x38))();
            return;
          }
          auVar22 = func_0x00f78af4();
          puVar11 = auVar22._8_8_;
          puVar9 = auVar22._0_8_;
          uVar21 = puVar11[1];
          uVar10 = *puVar11;
          puVar9[2] = puVar11[2];
          puVar9[1] = uVar21;
          *puVar9 = uVar10;
          return;
        }
        lVar12 = *(long *)(lVar12 + (long)(int)uVar18 * 8 + 0x20);
        if (((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x20), lVar12 == 0)) ||
           (lVar12 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar12,0), lVar12 == 0)) break;
        iVar5 = /*UnityEngine.GameObject$$get_activeInHierarchy*/ func_0x0322efac(lVar12,0);
        if (iVar5 != 0) {
          uVar20 = /*UnityEngine.Random$$Range*/ func_0x03252854(0,0x3f000000,0);
          lVar12 = *(long *)(lVar7 + 0xa0);
          if (lVar12 == 0) break;
          if (*(uint *)(lVar12 + 0x18) <= uVar18) goto code_r0x0152f454;
          lVar12 = *(long *)(lVar12 + (long)(int)uVar18 * 8 + 0x20);
          if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x20), lVar12 == 0)) break;
          plVar8 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar12,0);
          if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          puVar9 = *(undefined8 **)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8);
          lVar12 = puVar9[1];
          if (plVar8 == (long *)0x0) {
            plVar8 = (long *)0x0;
            if (lVar12 == 0) {
              plVar1 = (long *)0x0;
              goto code_r0x0152f3ac;
            }
          }
          else {
            plVar1 = plVar8;
            if (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
              plVar1 = (long *)0x0;
            }
            if (lVar12 == 0) {
code_r0x0152f3ac:
              plVar8 = plVar1;
              if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0x132) >> 10 & 1) != 0) &&
                 (*(int *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xe0) == 0)) {
                func_0x00f78ad0();
                puVar9 = *(undefined8 **)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8);
              }
              uVar10 = *puVar9;
              lVar12 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
              /*System.Action$$.ctor*/ func_0x02924c80(lVar12,uVar10,uRam0000000003d64928,0);
              *(long *)(*(long *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8) + 8) = lVar12;
            }
            else if (*plVar8 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
              plVar8 = (long *)0x0;
            }
          }
          /*Atlas.UI.AtlasTweenAnimations$$JumpZoom*/ func_0x0146f84c(uVar4,0,0x41200000,uVar3,uVar20,0,plVar8,0,lVar12,0);
        }
        uVar18 = uVar18 + 1;
        lVar12 = *(long *)(lVar7 + 0xa0);
      } while (lVar12 != 0);
    }
    func_0x00f78af4();
    return;
  }
  lVar7 = *(long *)(lVar7 + 0x18);
  if (lVar7 == 0) {
    return;
  }
  uVar10 = 0;
  lStack_58 = lVar7;
  lVar12 = *(long *)(lVar7 + 0x68);
  if (lVar12 == 0) {
    plVar8 = &lStack_58;
    lVar19 = 1;
  }
  else {
    lVar19 = *(long *)(lVar12 + 0x18);
    if (lVar19 == 0) {
      return;
    }
    plVar8 = (long *)(lVar12 + 0x20);
  }
  lVar12 = 0;
  do {
    lVar13 = plVar8[lVar12];
    pcVar17 = *(code **)(lVar13 + 0x10);
    plVar1 = *(long **)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    if (*(short *)(lVar13 + 0x48) == -1) {
      func_0x00f78ad8(lVar13,uVar10);
    }
    iVar5 = func_0x00f78a4c(lVar13);
    if (iVar5 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar13 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar7 + 0x18) == 0))
      goto code_r0x0156e6ac;
      iVar5 = func_0x00f78a44(lVar13);
      iVar6 = func_0x00f78ec0(lVar13);
      if (iVar5 == 0) {
        uVar2 = *(ushort *)(lVar13 + 0x48);
        if (iVar6 == 0) {
          lVar13 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar13 + 0x138))(plVar1,*(undefined8 *)(lVar13 + 0x140));
          uVar10 = extraout_x1_01;
          goto code_r0x0156e6b8;
        }
        lVar13 = func_0x00f78a48(lVar13);
        lVar14 = *plVar1;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar13) {
              puVar9 = (undefined8 *)(lVar14 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x0156e77c;
            }
            piVar16 = piVar16 + 4;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar13,(ulong)uVar2);
code_r0x0156e77c:
        pcVar17 = (code *)*puVar9;
        puVar9 = (undefined8 *)puVar9[1];
      }
      else {
        if (iVar6 == 0) {
          uVar10 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar14 = *plVar1;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)(lVar13 + 0x18)) {
                lVar14 = lVar14 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10 +
                         0x138;
                goto code_r0x0156e754;
              }
              piVar16 = piVar16 + 4;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          lVar14 = func_0x00fac1f0(plVar1);
code_r0x0156e754:
          uVar10 = *(undefined8 *)(lVar14 + 8);
        }
        puVar9 = (undefined8 *)func_0x00f78acc(uVar10,lVar13);
        pcVar17 = (code *)*puVar9;
      }
      (*pcVar17)(plVar1,puVar9);
      uVar10 = extraout_x1_02;
    }
    else if (*(char *)(lVar13 + 0x4a) == '\0') {
      (*pcVar17)(lVar13);
      uVar10 = extraout_x1;
    }
    else {
code_r0x0156e6ac:
      (*pcVar17)(plVar1,lVar13);
      uVar10 = extraout_x1_00;
    }
code_r0x0156e6b8:
    lVar12 = lVar12 + 1;
    if (lVar12 == lVar19) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x152f224 | Atlas.UI.Screens.VotingScreen.PopOffVotes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_VotingScreen__PopOffVotes(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  if ((bRam0000000003eb4e8f & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d64928);
    func_0x00f78a20(0x3d29750);
    bRam0000000003eb4e8f = 1;
  }
  uVar3 = _UNK_033f8754;
  uVar2 = _UNK_033f8140;
  lVar7 = *(long *)(param_1 + 0xa0);
  if (lVar7 != 0) {
    uVar10 = 0;
    do {
      if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar10) {
        return;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar10) {
LAB_0152f454:
        uVar9 = func_0x00f78b24();
        lVar7 = func_0x00f78ac0(uVar9,0);
        if ((bRam0000000003eb4e90 & 1) == 0) {
          func_0x00f78a20(0x3d2c9b0);
          func_0x00f78a20(0x3d39f30);
          func_0x00f78a20(0x3d1d828);
          func_0x00f78a20(0x3d1f918);
          bRam0000000003eb4e90 = 1;
        }
        uVar9 = func_0x00f78a34(/*Atlas.UI.Screens.VotingScreen.VotingPlayerInfo[]_TypeInfo*/ uRam0000000003d1f918,0xc);
        *(undefined8 *)(lVar7 + 0xa0) = uVar9;
        uVar9 = func_0x00f78aec(/*System.Collections.Generic.List<CanvasGroup>_TypeInfo*/ uRam0000000003d1d828);
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar9,uRam0000000003d39f30);
        *(undefined8 *)(lVar7 + 0xb8) = uVar9;
        if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)**(undefined8 **)
                      (*(long *)(*(long *)(lRam0000000003d2c9b0 + 0x18) + 0xc0) + 0x38))();
          return;
        }
        auVar13 = func_0x00f78af4();
        puVar6 = auVar13._8_8_;
        puVar8 = auVar13._0_8_;
        uVar12 = puVar6[1];
        uVar9 = *puVar6;
        puVar8[2] = puVar6[2];
        puVar8[1] = uVar12;
        *puVar8 = uVar9;
        return;
      }
      lVar7 = *(long *)(lVar7 + (long)(int)uVar10 * 8 + 0x20);
      if (((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x20), lVar7 == 0)) ||
         (lVar7 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar7,0), lVar7 == 0)) break;
      iVar4 = /*UnityEngine.GameObject$$get_activeInHierarchy*/ func_0x0322efac(lVar7,0);
      if (iVar4 != 0) {
        uVar11 = /*UnityEngine.Random$$Range*/ func_0x03252854(0,0x3f000000,0);
        lVar7 = *(long *)(param_1 + 0xa0);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_0152f454;
        lVar7 = *(long *)(lVar7 + (long)(int)uVar10 * 8 + 0x20);
        if ((lVar7 == 0) || (lVar7 = *(long *)(lVar7 + 0x20), lVar7 == 0)) break;
        plVar5 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar7,0);
        if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        puVar8 = *(undefined8 **)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8);
        lVar7 = puVar8[1];
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)0x0;
          if (lVar7 == 0) {
            plVar1 = (long *)0x0;
            goto LAB_0152f3ac;
          }
        }
        else {
          plVar1 = plVar5;
          if (*plVar5 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
            plVar1 = (long *)0x0;
          }
          if (lVar7 == 0) {
LAB_0152f3ac:
            plVar5 = plVar1;
            if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xe0) == 0)) {
              func_0x00f78ad0();
              puVar8 = *(undefined8 **)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8);
            }
            uVar9 = *puVar8;
            lVar7 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
            /*System.Action$$.ctor*/ func_0x02924c80(lVar7,uVar9,uRam0000000003d64928,0);
            *(long *)(*(long *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8) + 8) = lVar7;
          }
          else if (*plVar5 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
            plVar5 = (long *)0x0;
          }
        }
        /*Atlas.UI.AtlasTweenAnimations$$JumpZoom*/ func_0x0146f84c(uVar3,0,0x41200000,uVar2,uVar11,0,plVar5,0,lVar7,0);
      }
      uVar10 = uVar10 + 1;
      lVar7 = *(long *)(param_1 + 0xa0);
    } while (lVar7 != 0);
  }
  func_0x00f78af4();
  return;
}



// ============================================================
// RVA: 0x152f460 | Atlas.UI.Screens.VotingScreen..ctor
// ============================================================

void Atlas_UI_Screens_VotingScreen___ctor(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4e90 & 1) == 0) {
    func_0x00f78a20(0x3d2c9b0);
    func_0x00f78a20(0x3d39f30);
    func_0x00f78a20(0x3d1d828);
    func_0x00f78a20(0x3d1f918);
    bRam0000000003eb4e90 = 1;
  }
  uVar1 = func_0x00f78a34(/*Atlas.UI.Screens.VotingScreen.VotingPlayerInfo[]_TypeInfo*/ uRam0000000003d1f918,0xc);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  uVar1 = func_0x00f78aec(/*System.Collections.Generic.List<CanvasGroup>_TypeInfo*/ uRam0000000003d1d828);
  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar1,uRam0000000003d39f30);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c9b0 + 0x18) + 0xc0) + 0x38))();
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
// RVA: 0x152f520 | Atlas.UI.Screens.VotingScreen..cctor
// ============================================================

void Atlas_UI_Screens_VotingScreen___cctor(void)

{
  if ((bRam0000000003eb4e91 & 1) == 0) {
    func_0x00f78a20(0x3d25a40);
    bRam0000000003eb4e91 = 1;
  }
  **(undefined4 **)(/*Atlas.UI.Screens.VotingScreen_TypeInfo*/ lRam0000000003d25a40 + 0xb8) = 99;
  return;
}



// ============================================================
// RVA: 0x152f570 | Atlas.UI.Screens.VotingScreen.<ShowTie>b__28_0
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Atlas_UI_Screens_VotingScreen___ShowTie_b__28_0(long param_1)

{
  long *plVar1;
  ushort uVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  int extraout_w1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 *puVar14;
  long lVar15;
  int *piVar16;
  undefined8 *puVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  long lStack_e8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam0000000003eb4e8c & 1) == 0) {
    func_0x00f78a20(0x3d20bc0);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d32230);
    func_0x00f78a20(0x3d32238);
    func_0x00f78a20(0x3d32240);
    func_0x00f78a20(0x3d57288);
    func_0x00f78a20(0x3d39f38);
    func_0x00f78a20(0x3d39f40);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d29730);
    func_0x00f78a20(0x3d24188);
    func_0x00f78a20(0x3d25428);
    func_0x00f78a20(0x3d5e6f0);
    func_0x00f78a20(0x3d5e7a8);
    func_0x00f78a20(0x3d64950);
    func_0x00f78a20(0x3d29770);
    func_0x00f78a20(0x3d41350);
    func_0x00f78a20(0x3d41360);
    func_0x00f78a20(0x3d60138);
    bRam0000000003eb4e8c = 1;
  }
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  lVar7 = func_0x00f78aec(/*Atlas.UI.Screens.VotingScreen.<>c__DisplayClass29_0_TypeInfo*/ uRam0000000003d29770);
  /*Atlas.UI.Screens.VotingScreen.<>c__DisplayClass29_0$$.ctor*/ func_0x0156df30(lVar7,0);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x18) = param_1;
    lVar20 = *(long *)(param_1 + 0x90);
    if (lVar20 != 0) {
      puVar17 = *(undefined8 **)(lVar20 + 0xf0);
      uVar8 = func_0x00f78aec(/*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730);
      /*Atlas.UI.VotingManager.OnVoteStageChanged$$.ctor*/ func_0x0156d908(uVar8,param_1,uRam0000000003d60138,0);
      plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(puVar17,uVar8,0);
      if ((plVar9 != (long *)0x0) && (*plVar9 != /*Atlas.UI.VotingManager.OnVoteStageChanged_TypeInfo*/ lRam0000000003d29730)) {
        func_0x00f78e5c();
        if (extraout_w1 == 1) {
          plVar9 = (long *)___cxa_begin_catch();
          lVar7 = *plVar9;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,*puVar17);
          if (lVar7 == 0) {
            return;
          }
          func_0x00f78ac0(lVar7,0);
        }
        uVar8 = __Unwind_Resume();
        if ((bRam0000000003eb4e8e & 1) == 0) {
          func_0x00f78a20(0x3d41358);
          bRam0000000003eb4e8e = 1;
        }
        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar8,uRam0000000003d41358);
        if (lVar7 == 0) {
          lVar7 = func_0x00f78af4();
          lStack_e8 = 0x3d41358;
          if ((bRam0000000003eb4e8f & 1) == 0) {
            func_0x00f78a20(0x3d1fa78);
            func_0x00f78a20(0x3d24188);
            func_0x00f78a20(0x3d64928);
            func_0x00f78a20(0x3d29750);
            bRam0000000003eb4e8f = 1;
          }
          uVar3 = _UNK_033f8754;
          uVar21 = _UNK_033f8140;
          lVar20 = *(long *)(lVar7 + 0xa0);
          if (lVar20 != 0) {
            uVar19 = 0;
            do {
              if ((int)*(uint *)(lVar20 + 0x18) <= (int)uVar19) {
                return;
              }
              if (*(uint *)(lVar20 + 0x18) <= uVar19) {
LAB_0152f454:
                uVar8 = func_0x00f78b24();
                lVar7 = func_0x00f78ac0(uVar8,0);
                if ((bRam0000000003eb4e90 & 1) == 0) {
                  func_0x00f78a20(0x3d2c9b0);
                  func_0x00f78a20(0x3d39f30);
                  func_0x00f78a20(0x3d1d828);
                  func_0x00f78a20(0x3d1f918);
                  bRam0000000003eb4e90 = 1;
                }
                uVar8 = func_0x00f78a34(/*Atlas.UI.Screens.VotingScreen.VotingPlayerInfo[]_TypeInfo*/ uRam0000000003d1f918,0xc);
                *(undefined8 *)(lVar7 + 0xa0) = uVar8;
                uVar8 = func_0x00f78aec(/*System.Collections.Generic.List<CanvasGroup>_TypeInfo*/ uRam0000000003d1d828);
                /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$.ctor*/ func_0x0242650c(uVar8,uRam0000000003d39f30);
                *(undefined8 *)(lVar7 + 0xb8) = uVar8;
                if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)**(undefined8 **)
                              (*(long *)(*(long *)(lRam0000000003d2c9b0 + 0x18) + 0xc0) + 0x38))();
                  return;
                }
                auVar23 = func_0x00f78af4();
                puVar14 = auVar23._8_8_;
                puVar17 = auVar23._0_8_;
                uVar12 = puVar14[1];
                uVar8 = *puVar14;
                puVar17[2] = puVar14[2];
                puVar17[1] = uVar12;
                *puVar17 = uVar8;
                return;
              }
              lVar20 = *(long *)(lVar20 + (long)(int)uVar19 * 8 + 0x20);
              if (((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x20), lVar20 == 0)) ||
                 (lVar20 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar20,0), lVar20 == 0)) break;
              iVar5 = /*UnityEngine.GameObject$$get_activeInHierarchy*/ func_0x0322efac(lVar20,0);
              if (iVar5 != 0) {
                uVar22 = /*UnityEngine.Random$$Range*/ func_0x03252854(0,0x3f000000,0);
                lVar20 = *(long *)(lVar7 + 0xa0);
                if (lVar20 == 0) break;
                if (*(uint *)(lVar20 + 0x18) <= uVar19) goto LAB_0152f454;
                lVar20 = *(long *)(lVar20 + (long)(int)uVar19 * 8 + 0x20);
                if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x20), lVar20 == 0)) break;
                plVar9 = (long *)/*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar20,0);
                if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                puVar17 = *(undefined8 **)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8);
                lVar20 = puVar17[1];
                if (plVar9 == (long *)0x0) {
                  plVar9 = (long *)0x0;
                  if (lVar20 == 0) {
                    plVar1 = (long *)0x0;
                    goto LAB_0152f3ac;
                  }
                }
                else {
                  plVar1 = plVar9;
                  if (*plVar9 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                    plVar1 = (long *)0x0;
                  }
                  if (lVar20 == 0) {
LAB_0152f3ac:
                    plVar9 = plVar1;
                    if (((*(ushort *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0x132) >> 10 & 1) != 0) &&
                       (*(int *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xe0) == 0)) {
                      func_0x00f78ad0();
                      puVar17 = *(undefined8 **)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8);
                    }
                    uVar8 = *puVar17;
                    lVar20 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
                    /*System.Action$$.ctor*/ func_0x02924c80(lVar20,uVar8,uRam0000000003d64928,0);
                    *(long *)(*(long *)(/*Atlas.UI.Screens.VotingScreen.<>c_TypeInfo*/ lRam0000000003d29750 + 0xb8) + 8) = lVar20;
                  }
                  else if (*plVar9 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                    plVar9 = (long *)0x0;
                  }
                }
                /*Atlas.UI.AtlasTweenAnimations$$JumpZoom*/ func_0x0146f84c(uVar3,0,0x41200000,uVar21,uVar22,0,plVar9,0,lVar20,0);
              }
              uVar19 = uVar19 + 1;
              lVar20 = *(long *)(lVar7 + 0xa0);
            } while (lVar20 != 0);
          }
          func_0x00f78af4();
          return;
        }
        lVar7 = *(long *)(lVar7 + 0x18);
        if (lVar7 == 0) {
          return;
        }
        uVar8 = 0;
        lStack_e8 = lVar7;
        lVar20 = *(long *)(lVar7 + 0x68);
        if (lVar20 == 0) {
          plVar9 = &lStack_e8;
          lVar10 = 1;
        }
        else {
          lVar10 = *(long *)(lVar20 + 0x18);
          if (lVar10 == 0) {
            return;
          }
          plVar9 = (long *)(lVar20 + 0x20);
        }
        lVar20 = 0;
        do {
          lVar18 = plVar9[lVar20];
          pcVar4 = *(code **)(lVar18 + 0x10);
          plVar1 = *(long **)(lVar18 + 0x20);
          lVar18 = *(long *)(lVar18 + 0x28);
          if (*(short *)(lVar18 + 0x48) == -1) {
            func_0x00f78ad8(lVar18,uVar8);
          }
          iVar5 = func_0x00f78a4c(lVar18);
          if (iVar5 == 0) {
            if ((((plVar1 == (long *)0x0) || (*(short *)(lVar18 + 0x48) == -1)) ||
                ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar7 + 0x18) == 0))
            goto code_r0x0156e6ac;
            iVar5 = func_0x00f78a44(lVar18);
            iVar6 = func_0x00f78ec0(lVar18);
            if (iVar5 == 0) {
              uVar2 = *(ushort *)(lVar18 + 0x48);
              if (iVar6 == 0) {
                lVar18 = *plVar1 + (ulong)uVar2 * 0x10;
                (**(code **)(lVar18 + 0x138))(plVar1,*(undefined8 *)(lVar18 + 0x140));
                uVar8 = extraout_x1_01;
                goto code_r0x0156e6b8;
              }
              lVar18 = func_0x00f78a48(lVar18);
              lVar15 = *plVar1;
              uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar13 != 0) {
                piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar16 + -2) == lVar18) {
                    puVar17 = (undefined8 *)
                              (lVar15 + (long)(int)(*piVar16 + (uint)uVar2) * 0x10 + 0x138);
                    goto code_r0x0156e77c;
                  }
                  piVar16 = piVar16 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              puVar17 = (undefined8 *)func_0x00fac1f0(plVar1,lVar18,(ulong)uVar2);
code_r0x0156e77c:
              pcVar4 = (code *)*puVar17;
              puVar17 = (undefined8 *)puVar17[1];
            }
            else {
              if (iVar6 == 0) {
                uVar8 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar18 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar15 = *plVar1;
                uVar13 = (ulong)*(ushort *)(lVar15 + 0x12a);
                if (uVar13 != 0) {
                  piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar16 + -2) == *(long *)(lVar18 + 0x18)) {
                      lVar15 = lVar15 + (long)(int)(*piVar16 + (uint)*(ushort *)(lVar18 + 0x48)) *
                                        0x10 + 0x138;
                      goto code_r0x0156e754;
                    }
                    piVar16 = piVar16 + 4;
                    uVar13 = uVar13 - 1;
                  } while (uVar13 != 0);
                }
                lVar15 = func_0x00fac1f0(plVar1);
code_r0x0156e754:
                uVar8 = *(undefined8 *)(lVar15 + 8);
              }
              puVar17 = (undefined8 *)func_0x00f78acc(uVar8,lVar18);
              pcVar4 = (code *)*puVar17;
            }
            (*pcVar4)(plVar1,puVar17);
            uVar8 = extraout_x1_02;
          }
          else if (*(char *)(lVar18 + 0x4a) == '\0') {
            (*pcVar4)(lVar18);
            uVar8 = extraout_x1;
          }
          else {
code_r0x0156e6ac:
            (*pcVar4)(plVar1,lVar18);
            uVar8 = extraout_x1_00;
          }
code_r0x0156e6b8:
          lVar20 = lVar20 + 1;
          if (lVar20 == lVar10) {
            return;
          }
        } while( true );
      }
      *(long **)(lVar20 + 0xf0) = plVar9;
      Atlas_UI_Screens_VotingScreen__HideInput(param_1);
      if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar20 = *(long *)(param_1 + 0x90);
      if (lVar20 == 0) {
        uVar8 = **(undefined8 **)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xb8);
        uVar12 = uVar8;
      }
      else {
        uVar8 = *(undefined8 *)(lVar20 + 0x98);
        uVar12 = *(undefined8 *)(lVar20 + 0xa0);
      }
      if ((*(long *)(param_1 + 0x80) != 0) &&
         (lVar20 = *(long *)(*(long *)(param_1 + 0x80) + 0x10), lVar20 != 0)) {
        lVar20 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(lVar20,uVar8,uRam0000000003d57288);
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        iVar5 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar20,0,0);
        if (iVar5 == 0) {
code_r0x0152edb0:
          lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
          if (((lVar20 != 0) && (lVar20 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar20,0), lVar20 != 0)) &&
             ((plVar9 = *(long **)(lVar20 + 0x20), plVar9 != (long *)0x0 &&
              (plVar9 = (long *)(**(code **)(*plVar9 + 0x178))
                                          (plVar9,*(undefined8 *)(*plVar9 + 0x180)),
              plVar9 != (long *)0x0)))) {
            uVar8 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
            iVar5 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar8,uVar12,0);
            lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
            if (iVar5 == 0) {
              if (lVar20 != 0) {
                lVar20 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar20,1);
                lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                if (lVar10 != 0) {
                  uVar8 = 0;
                  goto code_r0x0152ee5c;
                }
              }
            }
            else if (lVar20 != 0) {
              lVar20 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar20,0);
              lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
              if (lVar10 != 0) {
                uVar8 = 1;
code_r0x0152ee5c:
                lVar10 = /*Atlas.UI.Screens.VotingScreenBehaviour$$GetVoteChoice*/ func_0x0152caec(lVar10,uVar8);
                if ((lVar10 != 0) && (*(long *)(param_1 + 0xb8) != 0)) {
                  /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0xb8),*(undefined8 *)(lVar10 + 0x40),
                                  uRam0000000003d39f38);
                  if (*(long *)(param_1 + 0xb8) != 0) {
                    /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(*(long *)(param_1 + 0xb8),*(undefined8 *)(lVar10 + 0x48),
                                    uRam0000000003d39f38);
                    lVar18 = *(long *)(param_1 + 0xb8);
                    lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                    if ((((lVar10 != 0) && (lVar18 != 0)) &&
                        (/*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(lVar18,*(undefined8 *)(lVar10 + 0x88),uRam0000000003d39f38)
                        , lVar20 != 0)) && (*(long *)(lVar20 + 0x38) != 0)) {
                      plVar9 = (long *)/*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar20 + 0x38),0);
                      if (plVar9 == (long *)0x0) {
                        plVar9 = (long *)0x0;
                      }
                      else if (*plVar9 != /*UnityEngine.RectTransform_TypeInfo*/ lRam0000000003d24188) {
                        plVar9 = (long *)0x0;
                      }
                      *(long **)(lVar7 + 0x10) = plVar9;
                      if (((*(ushort *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0x132) >> 10 & 1) != 0) &&
                         (*(int *)(/*DG.Tweening.DOTween_TypeInfo*/ lRam0000000003d20bc0 + 0xe0) == 0)) {
                        func_0x00f78ad0();
                      }
                      uVar8 = /*DG.Tweening.DOTween$$Sequence*/ func_0x01695a64(0);
                      if (((*(long *)(lVar20 + 0x38) != 0) &&
                          (lVar10 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar20 + 0x38),0), lVar10 != 0)) &&
                         (lVar10 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar10,0), lVar10 != 0)) {
                        uVar12 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar10,0);
                        /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(uVar12,0,0);
                        lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                        if (lVar10 != 0) {
                          uVar12 = *(undefined8 *)(lVar10 + 0x68);
                          lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                          if (lVar10 != 0) {
                            uVar12 = /*DG.Tweening.DOTweenModuleUI$$DOColor*/ func_0x016a58bc(*(undefined4 *)(lVar10 + 0xf8),
                                                     *(undefined4 *)(lVar10 + 0xfc),
                                                     *(undefined4 *)(lVar10 + 0x100),
                                                     *(undefined4 *)(lVar10 + 0x104),_UNK_033f813c,
                                                     uVar12,0);
                            uVar12 = /*DG.Tweening.TweenSettingsExtensions$$Append*/ func_0x016b6590(uVar8,uVar12,0);
                            if (((*(long *)(lVar20 + 0x38) != 0) &&
                                (lVar20 = /*UnityEngine.GameObject$$get_transform*/ func_0x0322edbc(*(long *)(lVar20 + 0x38),0), lVar20 != 0))
                               && (lVar20 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar20,0), lVar20 != 0)) {
                              uVar11 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(lVar20,0);
                              lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                              if ((lVar20 != 0) && (*(long *)(lVar20 + 0xa8) != 0)) {
                                uVar21 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(*(long *)(lVar20 + 0xa8),0);
                                lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                                if (lVar20 != 0) {
                                  uVar11 = /*DG.Tweening.ShortcutExtensions$$DOMoveX*/ func_0x016b28e8(uVar21,*(undefined4 *)(lVar20 + 0xb0),
                                                           uVar11,0,0);
                                  lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                                  if (lVar20 != 0) {
                                    uVar11 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar11,*(undefined4 *)(lVar20 + 0xb4),
                                                             uRam0000000003d5e7a8);
                                    /*DG.Tweening.TweenSettingsExtensions$$Join*/ func_0x016b65e8(uVar12,uVar11,0);
                                    uVar12 = func_0x00f78aec(/*DG.Tweening.TweenCallback_TypeInfo*/ uRam0000000003d25428);
                                    /*DG.Tweening.TweenCallback$$.ctor*/ func_0x016b6580(uVar12,lVar7,uRam0000000003d64950,0);
                                    /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar8,uVar12,uRam0000000003d5e6f0);
                                    if (*(long *)(param_1 + 0xb8) != 0) {
                                      /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$GetEnumerator*/ func_0x02427c08(&uStack_88,*(long *)(param_1 + 0xb8),
                                                      uRam0000000003d39f40);
                                      while( true ) {
                                        uVar13 = /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$MoveNext*/ func_0x01f6f2ec(&uStack_88,uRam0000000003d32238);
                                        uVar8 = uStack_78;
                                        if ((uVar13 & 1) == 0) {
                                          /*System.Collections.Generic.List.Enumerator<WeaponAudioManager.GraveyardInfo>$$Dispose*/ func_0x01f6f2e8(&uStack_88,uRam0000000003d32230);
                                          return;
                                        }
                                        /*DG.Tweening.ShortcutExtensions$$DOKill*/ func_0x016b8cd4(uStack_78,0,0);
                                        lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
                                        if (lVar7 == 0) break;
                                        /*DG.Tweening.DOTweenModuleUI$$DOFade*/ func_0x016a5704(0,*(undefined4 *)(lVar7 + 0xb8),uVar8,0);
                                      }
                                      goto code_r0x0152f158;
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
        else {
          lVar10 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41360);
          if (((lVar10 != 0) && (lVar20 != 0)) && (*(long *)(lVar10 + 0x88) != 0)) {
            uVar8 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(*(long *)(lVar10 + 0x88),*(undefined8 *)(lVar20 + 0x28),0);
            lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41360);
            if (lVar20 != 0) {
              lVar10 = *(long *)(lVar20 + 0x88);
              lVar20 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41350);
              if ((lVar20 != 0) && (lVar10 != 0)) {
                uVar11 = /*Core.Localisation.LocalisationManager$$GetLocalisedString*/ func_0x0164feb4(lVar10,*(undefined8 *)(lVar20 + 0xd8),0);
                uVar8 = /*System.String$$Format*/ func_0x029bc688(uVar11,uVar8,0);
                Atlas_UI_Screens_VotingScreen__SetTitleText(param_1,uVar8);
                goto code_r0x0152edb0;
              }
            }
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x0152f158:
  func_0x00f78af4();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x152f160);
  (*pcVar4)();
}



