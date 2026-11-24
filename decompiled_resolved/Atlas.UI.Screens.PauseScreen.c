// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.PauseScreen

// ============================================================
// RVA: 0x14b6e28 | Atlas.UI.Screens.PauseScreen.OnBeforeEnter
// ============================================================

/* WARNING: Possible PIC construction at 0x014b726c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b733c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b7390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x014b7410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x014b7414) */
/* WARNING: Removing unreachable block (ram,0x014b7424) */
/* WARNING: Removing unreachable block (ram,0x014b742c) */
/* WARNING: Removing unreachable block (ram,0x014b7394) */
/* WARNING: Removing unreachable block (ram,0x014b73a4) */
/* WARNING: Removing unreachable block (ram,0x014b73ac) */
/* WARNING: Removing unreachable block (ram,0x014b73d4) */
/* WARNING: Removing unreachable block (ram,0x014b73f8) */
/* WARNING: Removing unreachable block (ram,0x014b7400) */
/* WARNING: Removing unreachable block (ram,0x0150b9fc) */
/* WARNING: Removing unreachable block (ram,0x0150ba14) */
/* WARNING: Removing unreachable block (ram,0x0150ba34) */
/* WARNING: Removing unreachable block (ram,0x0150ba20) */
/* WARNING: Removing unreachable block (ram,0x0150ba38) */
/* WARNING: Removing unreachable block (ram,0x0150ba50) */
/* WARNING: Removing unreachable block (ram,0x0150ba58) */
/* WARNING: Removing unreachable block (ram,0x0150ba78) */
/* WARNING: Removing unreachable block (ram,0x0150ba80) */
/* WARNING: Removing unreachable block (ram,0x0150ba70) */
/* WARNING: Removing unreachable block (ram,0x0150ba90) */
/* WARNING: Removing unreachable block (ram,0x0150ba98) */
/* WARNING: Removing unreachable block (ram,0x0150bab4) */
/* WARNING: Removing unreachable block (ram,0x0150bb24) */
/* WARNING: Removing unreachable block (ram,0x0150bb30) */
/* WARNING: Removing unreachable block (ram,0x0150bb4c) */
/* WARNING: Removing unreachable block (ram,0x0150bb44) */
/* WARNING: Removing unreachable block (ram,0x0150bb50) */
/* WARNING: Removing unreachable block (ram,0x0150bb74) */
/* WARNING: Removing unreachable block (ram,0x0150bb64) */
/* WARNING: Removing unreachable block (ram,0x0150bb78) */
/* WARNING: Removing unreachable block (ram,0x0150bb9c) */
/* WARNING: Removing unreachable block (ram,0x0150bb7c) */
/* WARNING: Removing unreachable block (ram,0x0150bba0) */
/* WARNING: Removing unreachable block (ram,0x0150bbc8) */
/* WARNING: Removing unreachable block (ram,0x0150bbe4) */
/* WARNING: Removing unreachable block (ram,0x0150bbbc) */
/* WARNING: Removing unreachable block (ram,0x0150bb88) */
/* WARNING: Removing unreachable block (ram,0x0150babc) */
/* WARNING: Removing unreachable block (ram,0x0150baa8) */
/* WARNING: Removing unreachable block (ram,0x0150bad0) */
/* WARNING: Removing unreachable block (ram,0x0150bad4) */
/* WARNING: Removing unreachable block (ram,0x0150bab0) */
/* WARNING: Removing unreachable block (ram,0x0150bae4) */
/* WARNING: Removing unreachable block (ram,0x0150bb14) */
/* WARNING: Removing unreachable block (ram,0x0150baf4) */
/* WARNING: Removing unreachable block (ram,0x014b7340) */
/* WARNING: Removing unreachable block (ram,0x014b7350) */
/* WARNING: Removing unreachable block (ram,0x014b7358) */
/* WARNING: Removing unreachable block (ram,0x014b7378) */
/* WARNING: Removing unreachable block (ram,0x014b7380) */
/* WARNING: Removing unreachable block (ram,0x014b7270) */
/* WARNING: Removing unreachable block (ram,0x014b7280) */
/* WARNING: Removing unreachable block (ram,0x014b7288) */
/* WARNING: Removing unreachable block (ram,0x014b72a8) */
/* WARNING: Removing unreachable block (ram,0x014b72b0) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc44) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Removing unreachable block (ram,0x0150bc48) */
/* WARNING: Removing unreachable block (ram,0x0150bcb4) */
/* WARNING: Removing unreachable block (ram,0x0150bc5c) */
/* WARNING: Removing unreachable block (ram,0x0150bcc0) */
/* WARNING: Removing unreachable block (ram,0x0150bc68) */
/* WARNING: Removing unreachable block (ram,0x0150bcc4) */
/* WARNING: Removing unreachable block (ram,0x0150bce8) */
/* WARNING: Removing unreachable block (ram,0x0150bce0) */
/* WARNING: Removing unreachable block (ram,0x0150bcec) */
/* WARNING: Removing unreachable block (ram,0x0150bc78) */
/* WARNING: Removing unreachable block (ram,0x0150bc80) */
/* WARNING: Removing unreachable block (ram,0x0150bc94) */
/* WARNING: Removing unreachable block (ram,0x0150bca0) */
/* WARNING: Removing unreachable block (ram,0x0150c5a8) */
/* WARNING: Removing unreachable block (ram,0x0150c5dc) */
/* WARNING: Removing unreachable block (ram,0x0150c5fc) */
/* WARNING: Removing unreachable block (ram,0x0150c604) */
/* WARNING: Removing unreachable block (ram,0x0150c610) */
/* WARNING: Removing unreachable block (ram,0x0150c644) */
/* WARNING: Removing unreachable block (ram,0x0150c6c0) */
/* WARNING: Removing unreachable block (ram,0x0150c6d4) */
/* WARNING: Removing unreachable block (ram,0x0150c6d8) */
/* WARNING: Removing unreachable block (ram,0x0150c6c4) */
/* WARNING: Removing unreachable block (ram,0x0150c64c) */
/* WARNING: Removing unreachable block (ram,0x0150c650) */
/* WARNING: Removing unreachable block (ram,0x0150c6cc) */
/* WARNING: Removing unreachable block (ram,0x0150c658) */
/* WARNING: Removing unreachable block (ram,0x0150c65c) */
/* WARNING: Removing unreachable block (ram,0x0150c66c) */
/* WARNING: Removing unreachable block (ram,0x0150c67c) */
/* WARNING: Removing unreachable block (ram,0x0150c724) */
/* WARNING: Removing unreachable block (ram,0x0150c72c) */
/* WARNING: Removing unreachable block (ram,0x0150c734) */
/* WARNING: Removing unreachable block (ram,0x0150c740) */
/* WARNING: Removing unreachable block (ram,0x0150c768) */
/* WARNING: Removing unreachable block (ram,0x0150c77c) */
/* WARNING: Removing unreachable block (ram,0x0150c784) */
/* WARNING: Removing unreachable block (ram,0x0150c788) */
/* WARNING: Removing unreachable block (ram,0x0150c79c) */
/* WARNING: Removing unreachable block (ram,0x0150c7d4) */
/* WARNING: Removing unreachable block (ram,0x0150c7d8) */
/* WARNING: Removing unreachable block (ram,0x0150c838) */
/* WARNING: Removing unreachable block (ram,0x0150c87c) */
/* WARNING: Removing unreachable block (ram,0x018eea6c) */
/* WARNING: Removing unreachable block (ram,0x018eea70) */
/* WARNING: Removing unreachable block (ram,0x018eea78) */
/* WARNING: Removing unreachable block (ram,0x018eea7c) */
/* WARNING: Removing unreachable block (ram,0x0150c7a0) */
/* WARNING: Removing unreachable block (ram,0x0150c7b4) */
/* WARNING: Removing unreachable block (ram,0x0164b13c) */

void Atlas_UI_Screens_PauseScreen__OnBeforeEnter(undefined8 param_1)

{
  long *plVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  undefined8 unaff_x21;
  code *pcVar17;
  long lVar18;
  undefined8 ******ppppppuVar19;
  undefined *puVar20;
  undefined1 auVar21 [12];
  long lStack_d8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *****pppppuStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 *****pppppuStack_60;
  undefined *puStack_58;
  
  puVar4 = (undefined8 *)&stack0xffffffffffffffb0;
  ppppppuVar19 = (undefined8 ******)&stack0xfffffffffffffff0;
  lVar16 = 0x3eb4000;
  if ((bRam0000000003eb4ac4 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d2c870);
    func_0x00f78a20(0x3d29bc0);
    func_0x00f78a20(0x3d5b508);
    func_0x00f78a20(0x3d5b510);
    func_0x00f78a20(0x3d5b518);
    func_0x00f78a20(0x3d5b520);
    func_0x00f78a20(0x3d5b528);
    func_0x00f78a20(0x3d5b530);
    func_0x00f78a20(0x3d41208);
    func_0x00f78a20(0x3d41210);
    func_0x00f78a20(0x3d41218);
    bRam0000000003eb4ac4 = 1;
  }
  lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
  if (lVar8 == 0) {
LAB_014b72d0:
    uVar10 = func_0x00f78af4();
    uStack_80 = 0x3d41208;
    puStack_58 = &Atlas_UI_Screens_PauseScreen__OnAfterExit;
    uStack_78 = unaff_x21;
    lStack_70 = lVar16;
    uStack_68 = param_1;
    pppppuStack_60 = ppppppuVar19;
    if ((bRam0000000003eb4ac5 & 1) == 0) {
      func_0x00f78a20(0x3d41208);
      func_0x00f78a20(0x3d41218);
      bRam0000000003eb4ac5 = 1;
    }
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar10,uRam0000000003d41218);
    uStack_98 = uVar10;
    pppppuStack_90 = &pppppuStack_60;
    if ((lVar16 == 0) || (*(long *)(lVar16 + 0xa8) == 0)) {
      uVar10 = func_0x00f78af4();
      uStack_b0 = 0x3d41208;
      uStack_a8 = 0x3d41218;
      uStack_a0 = 0x3eb4000;
      puStack_88 = &Atlas_UI_Screens_PauseScreen__ResumePressed;
      if ((bRam0000000003eb4ac6 & 1) == 0) {
        func_0x00f78a20(0x3d41210);
        bRam0000000003eb4ac6 = 1;
      }
      lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar10,uRam0000000003d41210);
      if ((lVar16 == 0) || (lVar16 = *(long *)(lVar16 + 0x10), lVar16 == 0)) {
        return;
      }
      uVar10 = 0;
      lStack_d8 = lVar16;
      lVar8 = *(long *)(lVar16 + 0x68);
      if (lVar8 == 0) {
        plVar11 = &lStack_d8;
        lVar18 = 1;
      }
      else {
        lVar18 = *(long *)(lVar8 + 0x18);
        if (lVar18 == 0) {
          return;
        }
        plVar11 = (long *)(lVar8 + 0x20);
      }
      lVar8 = 0;
      do {
        lVar12 = plVar11[lVar8];
        pcVar17 = *(code **)(lVar12 + 0x10);
        plVar1 = *(long **)(lVar12 + 0x20);
        lVar12 = *(long *)(lVar12 + 0x28);
        if (*(short *)(lVar12 + 0x48) == -1) {
          func_0x00f78ad8(lVar12,uVar10);
        }
        iVar5 = func_0x00f78a4c(lVar12);
        if (iVar5 == 0) {
          if ((((plVar1 == (long *)0x0) || (*(short *)(lVar12 + 0x48) == -1)) ||
              ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar16 + 0x18) == 0))
          goto code_r0x015619e4;
          iVar5 = func_0x00f78a44(lVar12);
          iVar6 = func_0x00f78ec0(lVar12);
          if (iVar5 == 0) {
            uVar3 = *(ushort *)(lVar12 + 0x48);
            if (iVar6 == 0) {
              lVar12 = *plVar1 + (ulong)uVar3 * 0x10;
              (**(code **)(lVar12 + 0x138))(plVar1,*(undefined8 *)(lVar12 + 0x140));
              uVar10 = extraout_x1_01;
              goto code_r0x015619f0;
            }
            lVar12 = func_0x00f78a48(lVar12);
            lVar13 = *plVar1;
            uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
            if (uVar14 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == lVar12) {
                  puVar9 = (undefined8 *)
                           (lVar13 + (long)(int)(*piVar15 + (uint)uVar3) * 0x10 + 0x138);
                  goto code_r0x01561ab4;
                }
                piVar15 = piVar15 + 4;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            puVar9 = (undefined8 *)func_0x00fac1f0(plVar1,lVar12,(ulong)uVar3);
code_r0x01561ab4:
            pcVar17 = (code *)*puVar9;
            puVar9 = (undefined8 *)puVar9[1];
          }
          else {
            if (iVar6 == 0) {
              uVar10 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar12 + 0x48) * 0x10 + 0x140);
            }
            else {
              lVar13 = *plVar1;
              uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
              if (uVar14 != 0) {
                piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == *(long *)(lVar12 + 0x18)) {
                    lVar13 = lVar13 + (long)(int)(*piVar15 + (uint)*(ushort *)(lVar12 + 0x48)) *
                                      0x10 + 0x138;
                    goto code_r0x01561a8c;
                  }
                  piVar15 = piVar15 + 4;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              lVar13 = func_0x00fac1f0(plVar1);
code_r0x01561a8c:
              uVar10 = *(undefined8 *)(lVar13 + 8);
            }
            puVar9 = (undefined8 *)func_0x00f78acc(uVar10,lVar12);
            pcVar17 = (code *)*puVar9;
          }
          (*pcVar17)(plVar1,puVar9);
          uVar10 = extraout_x1_02;
        }
        else if (*(char *)(lVar12 + 0x4a) == '\0') {
          (*pcVar17)(lVar12);
          uVar10 = extraout_x1;
        }
        else {
code_r0x015619e4:
          (*pcVar17)(plVar1,lVar12);
          uVar10 = extraout_x1_00;
        }
code_r0x015619f0:
        lVar8 = lVar8 + 1;
        if (lVar8 == lVar18) {
          return;
        }
      } while( true );
    }
    puVar4 = &uStack_b0;
    uStack_b0 = 0x3d41208;
    uStack_a8 = 0x3d41218;
    uStack_a0 = 0x3eb4000;
    puStack_88 = &UNK_014b7340;
    ppppppuVar19 = &pppppuStack_90;
    param_1 = 1;
    lVar16 = 0x3eb5000;
    unaff_x21 = 0x3d216c0;
    if ((bRam0000000003eb5795 & 1) == 0) {
      func_0x00f78a20(0x3d216c0,1,0);
      func_0x00f78a20(0x3d22880);
      bRam0000000003eb5795 = 1;
    }
    if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar8 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
    if (lVar8 == 0) {
code_r0x0164b158:
      func_0x00f78af4();
    }
    else {
      plVar11 = *(long **)(lVar8 + 0x20);
      if (plVar11 == (long *)0x0) {
code_r0x0164b140:
        if (plVar11 != (long *)0x0) {
          *(undefined4 *)((long)plVar11 + 0xbc) = 0;
          return;
        }
        goto code_r0x0164b158;
      }
      if ((*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) <= *(byte *)(*plVar11 + 300)) &&
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(/*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880 + 300) * 8 +
                   -8) == /*UnityEngine.InputSystem.UI.InputSystemUIInputModule_TypeInfo*/ lRam0000000003d22880)) goto code_r0x0164b140;
    }
    puVar20 = &Core_Input_InputManager__SetActiveLayer;
    auVar21 = func_0x00f78e5c();
  }
  else {
    lVar16 = *(long *)(lVar8 + 0x68);
    unaff_x21 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,param_1,uRam0000000003d5b518,0);
    if (lVar16 == 0) goto LAB_014b72d0;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar16,unaff_x21,0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
    if (lVar8 == 0) goto LAB_014b72d0;
    lVar16 = *(long *)(lVar8 + 0x80);
    unaff_x21 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,param_1,uRam0000000003d5b508,0);
    if (lVar16 == 0) goto LAB_014b72d0;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar16,unaff_x21,0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
    if (lVar8 == 0) goto LAB_014b72d0;
    lVar16 = *(long *)(lVar8 + 0x70);
    unaff_x21 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,param_1,uRam0000000003d5b510,0);
    if (lVar16 == 0) goto LAB_014b72d0;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar16,unaff_x21,0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
    if (lVar8 == 0) goto LAB_014b72d0;
    lVar16 = *(long *)(lVar8 + 0x78);
    unaff_x21 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,param_1,uRam0000000003d5b528,0);
    if (lVar16 == 0) goto LAB_014b72d0;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar16,unaff_x21,0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41210);
    if (lVar8 == 0) goto LAB_014b72d0;
    if (*(long *)(lVar8 + 0x20) == 0) {
      lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
      if ((((lVar8 == 0) || (*(long *)(lVar8 + 0x70) == 0)) ||
          (lVar8 = /*UnityEngine.Component$$get_transform*/ func_0x032279b4(*(long *)(lVar8 + 0x70),0), lVar8 == 0)) ||
         ((lVar8 = /*UnityEngine.Transform$$get_parent*/ func_0x03275c98(lVar8,0), lVar8 == 0 ||
          (lVar8 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(lVar8,0), lVar8 == 0)))) goto LAB_014b72d0;
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar8,0,0);
    }
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
    if (lVar8 == 0) goto LAB_014b72d0;
    lVar16 = *(long *)(lVar8 + 0xa0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41218);
    if (lVar8 == 0) goto LAB_014b72d0;
    unaff_x21 = *(undefined8 *)(lVar8 + 0x90);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41218);
    if ((lVar8 == 0) || (lVar16 == 0)) goto LAB_014b72d0;
    Atlas_UI_Screens_GameSettingsPanelBehaviour__Init
              (lVar16,unaff_x21,*(undefined8 *)(lVar8 + 0x48),0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
    if ((lVar8 == 0) || (*(long *)(lVar8 + 0xa0) == 0)) goto LAB_014b72d0;
    lVar8 = *(long *)(*(long *)(lVar8 + 0xa0) + 0x30);
    unaff_x21 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,param_1,uRam0000000003d5b520,0);
    lVar16 = 0;
    if (lVar8 == 0) goto LAB_014b72d0;
    /*Atlas.UI.UIAtlasButton$$add_Pressed*/ func_0x01514430(lVar8,unaff_x21,0);
    lVar16 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41218);
    if (lVar8 == 0) goto LAB_014b72d0;
    Atlas_UI_Screens_AtlasGameCenterExtensions__SetGameCenterButtonShownInTopBar
              (lVar16,1,*(undefined8 *)(lVar8 + 0x28),0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
    if (lVar8 == 0) goto LAB_014b72d0;
    Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
              (param_1,*(undefined8 *)(lVar8 + 0x68),uRam0000000003d2c870);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41218);
    if (lVar8 == 0) goto LAB_014b72d0;
    lVar16 = *(long *)(lVar8 + 0xb8);
    unaff_x21 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
    /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(unaff_x21,param_1,uRam0000000003d5b530,0);
    if (lVar16 == 0) goto LAB_014b72d0;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar16,2,unaff_x21,0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41218);
    if (lVar8 == 0) goto LAB_014b72d0;
    lVar16 = *(long *)(lVar8 + 0xb8);
    unaff_x21 = func_0x00f78aec(/*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed_TypeInfo*/ uRam0000000003d29bc0);
    /*Atlas.UI.TopBarManager.TopBarDelegate.ButtonPressed$$.ctor*/ func_0x0155d3d8(unaff_x21,param_1,uRam0000000003d5b530,0);
    if (lVar16 == 0) goto LAB_014b72d0;
    /*Atlas.UI.TopBarManager$$SetButtonFunc*/ func_0x0150b4c8(lVar16,5,unaff_x21,0);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41218);
    if (lVar8 == 0) goto LAB_014b72d0;
    lVar16 = *(long *)(lVar8 + 0xa8);
    lVar8 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
    if ((lVar8 == 0) || (lVar16 == 0)) goto LAB_014b72d0;
    auVar21._8_4_ = *(undefined4 *)(lVar8 + 0x30);
    auVar21._0_8_ = lVar16;
    puVar20 = (undefined *)0x14b7270;
  }
  lVar8 = auVar21._0_8_;
  *(int *)(lVar8 + 0x40) = auVar21._8_4_;
  *(undefined8 *)((long)puVar4 + -0x30) = 0x3d41208;
  *(undefined8 *)((long)puVar4 + -0x28) = unaff_x21;
  *(long *)((long)puVar4 + -0x20) = lVar16;
  *(undefined8 *)((long)puVar4 + -0x18) = param_1;
  *(undefined8 *******)((long)puVar4 + -0x10) = ppppppuVar19;
  *(undefined **)((long)puVar4 + -8) = puVar20;
  if ((bRam0000000003eb5797 & 1) == 0) {
    func_0x00f78a20(0x3d216c0);
    func_0x00f78a20(0x3d22848);
    func_0x00f78a20(0x3d232c0);
    bRam0000000003eb5797 = 1;
  }
  uVar2 = *(undefined4 *)(lVar8 + 0x40);
  uVar10 = /*Core.Input.InputManager$$FindTopmostExclusiveLayer*/ func_0x0164a6a0(lVar8);
  if (((*(ushort *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*System.Math_TypeInfo*/ lRam0000000003d232c0 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*System.Math$$Max*/ func_0x02b01f40(uVar2,uVar10,0);
  if (uVar7 == 0xffffffff) {
    return;
  }
  lVar16 = *(long *)(lVar8 + 0x38);
  if (lVar16 != 0) {
    if (*(uint *)(lVar16 + 0x18) <= uVar7) goto code_r0x0164a30c;
    if (*(char *)(lVar16 + (long)(int)uVar7 * 0x10 + 0x28) != '\0') {
      return;
    }
    if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
      *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 1;
      if (((*(ushort *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.EventSystems.EventSystem_TypeInfo*/ lRam0000000003d216c0 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      lVar16 = /*UnityEngine.EventSystems.EventSystem$$get_current*/ func_0x032b78c8(0);
      lVar8 = *(long *)(lVar8 + 0x38);
      if (lVar8 != 0) {
        if (*(uint *)(lVar8 + 0x18) <= uVar7) goto code_r0x0164a30c;
        if (lVar16 != 0) {
          /*UnityEngine.EventSystems.EventSystem$$SetSelectedGameObject*/ func_0x032b7cb0(lVar16,*(undefined8 *)(lVar8 + (long)(int)uVar7 * 0x10 + 0x20),0);
          if (**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) != 0) {
            *(undefined1 *)(**(long **)(/*Core.Input.InputManager_TypeInfo*/ lRam0000000003d22848 + 0xb8) + 0x29) = 0;
            return;
          }
        }
      }
    }
  }
  func_0x00f78af4();
code_r0x0164a30c:
  uVar10 = func_0x00f78b24();
  func_0x00f78ac0(uVar10,0);
  return;
}



// ============================================================
// RVA: 0x14b72d4 | Atlas.UI.Screens.PauseScreen.OnAfterExit
// ============================================================

/* WARNING: Possible PIC construction at 0x014b7410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0150bc20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0150bbf4) */
/* WARNING: Removing unreachable block (ram,0x0150bbfc) */
/* WARNING: Removing unreachable block (ram,0x0150bc14) */
/* WARNING: Removing unreachable block (ram,0x0150bd10) */
/* WARNING: Removing unreachable block (ram,0x014b7414) */
/* WARNING: Removing unreachable block (ram,0x014b7424) */
/* WARNING: Removing unreachable block (ram,0x014b742c) */
/* WARNING: Removing unreachable block (ram,0x0150bc24) */
/* WARNING: Removing unreachable block (ram,0x0150bc2c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_Screens_PauseScreen__OnAfterExit(ulong param_1)

{
  long *plVar1;
  ushort uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 extraout_w1;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  int *piVar22;
  ulong uVar23;
  ulong uVar24;
  long unaff_x22;
  code *pcVar25;
  long unaff_x23;
  long unaff_x24;
  ulong *puVar26;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar27;
  undefined1 *puVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  ulong uStack_88;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 *******pppppppuStack_40;
  undefined *puStack_38;
  
  uVar23 = 0x3eb4000;
  uVar24 = 0x3d41218;
  if ((bRam0000000003eb4ac5 & 1) == 0) {
    func_0x00f78a20(0x3d41208);
    func_0x00f78a20(0x3d41218);
    bRam0000000003eb4ac5 = 1;
  }
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41218);
  uStack_48 = param_1;
  pppppppuStack_40 = (undefined8 *******)&stack0xfffffffffffffff0;
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0xa8) == 0)) {
LAB_014b744c:
    uVar18 = func_0x00f78af4();
    puStack_38 = &Atlas_UI_Screens_PauseScreen__ResumePressed;
    uStack_50 = uVar23;
    if ((bRam0000000003eb4ac6 & 1) == 0) {
      func_0x00f78a20(0x3d41210);
      bRam0000000003eb4ac6 = 1;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar18,uRam0000000003d41210);
    if ((lVar9 == 0) || (uVar23 = *(ulong *)(lVar9 + 0x10), uVar23 == 0)) {
      return 0;
    }
    uVar18 = 0;
    uStack_88 = uVar23;
    lVar9 = *(long *)(uVar23 + 0x68);
    if (lVar9 == 0) {
      puVar26 = &uStack_88;
      lVar19 = 1;
    }
    else {
      lVar19 = *(long *)(lVar9 + 0x18);
      if (lVar19 == 0) {
        return uVar23;
      }
      puVar26 = (ulong *)(lVar9 + 0x20);
    }
    lVar9 = 0;
    do {
      uVar24 = puVar26[lVar9];
      pcVar25 = *(code **)(uVar24 + 0x10);
      plVar1 = *(long **)(uVar24 + 0x20);
      lVar13 = *(long *)(uVar24 + 0x28);
      if (*(short *)(lVar13 + 0x48) == -1) {
        func_0x00f78ad8(lVar13,uVar18);
      }
      iVar7 = func_0x00f78a4c(lVar13);
      if (iVar7 == 0) {
        if ((((plVar1 == (long *)0x0) || (*(short *)(lVar13 + 0x48) == -1)) ||
            ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(uVar23 + 0x18) == 0))
        goto code_r0x015619e4;
        iVar7 = func_0x00f78a44(lVar13);
        iVar8 = func_0x00f78ec0(lVar13);
        if (iVar7 == 0) {
          uVar2 = *(ushort *)(lVar13 + 0x48);
          if (iVar8 == 0) {
            lVar13 = *plVar1 + (ulong)uVar2 * 0x10;
            auVar36 = (**(code **)(lVar13 + 0x138))(plVar1,*(undefined8 *)(lVar13 + 0x140));
            goto code_r0x015619f0;
          }
          lVar13 = func_0x00f78a48(lVar13);
          lVar20 = *plVar1;
          uVar24 = (ulong)*(ushort *)(lVar20 + 0x12a);
          if (uVar24 != 0) {
            piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar22 + -2) == lVar13) {
                puVar14 = (undefined8 *)
                          (lVar20 + (long)(int)(*piVar22 + (uint)uVar2) * 0x10 + 0x138);
                goto code_r0x01561ab4;
              }
              piVar22 = piVar22 + 4;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          puVar14 = (undefined8 *)func_0x00fac1f0(plVar1,lVar13,(ulong)uVar2);
code_r0x01561ab4:
          pcVar25 = (code *)*puVar14;
          puVar14 = (undefined8 *)puVar14[1];
        }
        else {
          if (iVar8 == 0) {
            uVar18 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
          }
          else {
            lVar20 = *plVar1;
            uVar24 = (ulong)*(ushort *)(lVar20 + 0x12a);
            if (uVar24 != 0) {
              piVar22 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)(lVar13 + 0x18)) {
                  lVar20 = lVar20 + (long)(int)(*piVar22 + (uint)*(ushort *)(lVar13 + 0x48)) * 0x10
                           + 0x138;
                  goto code_r0x01561a8c;
                }
                piVar22 = piVar22 + 4;
                uVar24 = uVar24 - 1;
              } while (uVar24 != 0);
            }
            lVar20 = func_0x00fac1f0(plVar1);
code_r0x01561a8c:
            uVar18 = *(undefined8 *)(lVar20 + 8);
          }
          puVar14 = (undefined8 *)func_0x00f78acc(uVar18,lVar13);
          pcVar25 = (code *)*puVar14;
        }
        auVar36 = (*pcVar25)(plVar1,puVar14);
      }
      else if (*(char *)(lVar13 + 0x4a) == '\0') {
        auVar36 = (*pcVar25)(lVar13);
      }
      else {
code_r0x015619e4:
        auVar36 = (*pcVar25)(plVar1,lVar13);
      }
code_r0x015619f0:
      uVar18 = auVar36._8_8_;
      lVar9 = lVar9 + 1;
      if (lVar9 == lVar19) {
        return auVar36._0_8_;
      }
    } while( true );
  }
  /*Core.Input.InputManager$$SetMultiTouchEnabled*/ func_0x0164b088(*(long *)(lVar9 + 0xa8),1,0);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41218);
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0xa8) == 0)) goto LAB_014b744c;
  /*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(lVar9 + 0xa8),2,0,0);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41218);
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0xa8) == 0)) goto LAB_014b744c;
  uVar23 = 0x3d41208;
  /*Core.Input.InputManager$$SetActiveLayer*/ func_0x0164b160(*(long *)(lVar9 + 0xa8),0,0);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0xa0) == 0)) goto LAB_014b744c;
  Atlas_UI_Screens_GameSettingsPanelBehaviour__DeInit(*(long *)(lVar9 + 0xa0),0);
  uVar23 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41218);
  if (lVar9 == 0) goto LAB_014b744c;
  Atlas_UI_Screens_AtlasGameCenterExtensions__SetGameCenterButtonShownInTopBar
            (uVar23,0,*(undefined8 *)(lVar9 + 0x28),0);
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41218);
  if ((lVar9 == 0) || (uVar10 = *(ulong *)(lVar9 + 0xb8), uVar10 == 0)) goto LAB_014b744c;
  uVar16 = 0;
  uVar18 = 0;
  puVar3 = &uStack_50;
  puStack_38 = (undefined *)0x14b7414;
  pppppppuVar27 = &pppppppuStack_40;
  uStack_50 = uVar23;
  if (*(long *)(uVar10 + 0x28) == 0) {
code_r0x0150ba34:
    puVar29 = &Atlas_UI_Screens_TopBarScreen__ShowBackingPanelsIfRequired;
    auVar36 = func_0x00f78af4();
  }
  else {
    /*Atlas.UI.Screens.TopBarScreen$$RequestButtonVisible*/ func_0x0150b5b8(*(long *)(uVar10 + 0x28),2,0,0,0);
    if (*(ulong *)(uVar10 + 0x28) == 0) goto code_r0x0150ba34;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = *(ulong *)(uVar10 + 0x28);
    uVar16 = 0;
    puVar3 = (ulong *)&stack0xffffffffffffffd0;
    uVar10 = uStack_48;
    uVar23 = uStack_50;
    pppppppuVar27 = pppppppuStack_40;
    puVar29 = puStack_38;
  }
  uVar12 = auVar36._0_8_;
  *(long *)((long)puVar3 + -0x30) = unaff_x22;
  *(undefined8 *)((long)puVar3 + -0x28) = 0x3d41218;
  *(ulong *)((long)puVar3 + -0x20) = uVar23;
  *(ulong *)((long)puVar3 + -0x18) = uVar10;
  *(undefined8 ********)((long)puVar3 + -0x10) = pppppppuVar27;
  *(undefined **)((long)puVar3 + -8) = puVar29;
  puVar28 = (undefined1 *)((long)puVar3 + -0x10);
  lVar9 = *(long *)(uVar12 + 0x70);
  uVar17 = uVar16;
  if (lVar9 != 0) {
    uVar15 = *(uint *)(lVar9 + 0x18);
    if (uVar15 != 0) {
      uVar10 = uVar12;
      uVar23 = uVar16;
      if (*(int *)(lVar9 + 0x5c) - 1U < 2) {
        uVar17 = 1;
      }
      else {
        if (uVar15 < 2) goto code_r0x0150bb24;
        uVar17 = (ulong)(*(int *)(lVar9 + 0xbc) - 1U < 2);
      }
      if (4 < uVar15) {
        if (*(int *)(lVar9 + 0x1dc) - 1U < 2) {
          uVar24 = 1;
        }
        else {
          if (uVar15 < 6) goto code_r0x0150bb24;
          uVar24 = (ulong)(*(int *)(lVar9 + 0x23c) - 1U < 2);
        }
        if (((int)uVar17 == 0) || ((auVar36._8_8_ & 1) != 0)) {
          if (((uint)uVar24 & ((uint)uVar16 ^ 1)) != 1) {
            return uVar12;
          }
          auVar34._8_8_ = 7;
          auVar34._0_8_ = uVar12;
          uVar17 = 1;
          puVar28 = *(undefined1 **)((long)puVar3 + -0x10);
          puVar29 = *(undefined **)((long)puVar3 + -8);
          auVar35._8_8_ = 1;
          auVar35._0_8_ = *(undefined8 *)((long)puVar3 + -0x20);
          uVar12 = *(ulong *)((long)puVar3 + -0x18);
          unaff_x22 = *(long *)((long)puVar3 + -0x30);
          puVar5 = (undefined1 *)puVar3;
          uVar24 = *(ulong *)((long)puVar3 + -0x28);
        }
        else {
          auVar34._8_8_ = 6;
          auVar34._0_8_ = uVar12;
          auVar35._8_8_ = 1;
          auVar35._0_8_ = uVar16;
          puVar29 = &UNK_0150bae4;
          puVar5 = (undefined1 *)((long)puVar3 + -0x30);
        }
        goto code_r0x0150bc48;
      }
    }
code_r0x0150bb24:
    uVar11 = func_0x00f78b24();
    func_0x00f78ac0(uVar11,0);
  }
  auVar37 = func_0x00f78af4();
  puVar4 = (undefined1 *)((long)puVar3 + -0x40);
  puVar5 = (undefined1 *)((long)puVar3 + -0x40);
  *(undefined1 **)((long)puVar3 + -0x40) = puVar28;
  *(undefined **)((long)puVar3 + -0x38) = &Atlas_UI_TopBarManager__GetButtonElementState;
  lVar9 = *(long *)(auVar37._0_8_ + 0x28);
  auVar37._8_4_ = auVar37._8_4_;
  auVar37._0_8_ = lVar9;
  if (lVar9 == 0) {
    puVar29 = &Atlas_UI_Screens_TopBarScreen__GetElementState;
    auVar37 = func_0x00f78af4();
  }
  else {
    puVar4 = (undefined1 *)((long)puVar3 + -0x30);
    puVar5 = *(undefined1 **)((long)puVar3 + -0x40);
    puVar29 = *(undefined **)((long)puVar3 + -0x38);
  }
  *(undefined1 **)(puVar4 + -0x10) = puVar5;
  *(undefined **)(puVar4 + -8) = puVar29;
  lVar9 = *(long *)(auVar37._0_8_ + 0x70);
  if (auVar37._8_4_ < 9) {
    uVar15 = *(uint *)(&UNK_033f869c + (long)(int)auVar37._8_4_ * 4);
  }
  else {
    uVar15 = 0xffffffff;
  }
  if (lVar9 == 0) {
    func_0x00f78af4();
  }
  else if (uVar15 < *(uint *)(lVar9 + 0x18)) {
    return (ulong)*(uint *)(lVar9 + (ulong)uVar15 * 0x60 + 0x58);
  }
  uVar11 = func_0x00f78b24();
  uVar16 = func_0x00f78ac0(uVar11,0);
  *(undefined1 **)(puVar4 + -0x20) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x18) = &Atlas_UI_TopBarManager__SetNextPanelEnabledVisuals;
  if (*(long *)(uVar16 + 0x28) != 0) {
    *(undefined1 *)(*(long *)(uVar16 + 0x28) + 0x80) = extraout_w1;
    return uVar16;
  }
  uVar12 = func_0x00f78af4();
  puVar5 = puVar4 + -0x40;
  *(ulong *)(puVar4 + -0x40) = uVar23;
  *(ulong *)(puVar4 + -0x38) = uVar10;
  *(undefined1 **)(puVar4 + -0x30) = puVar4 + -0x20;
  *(undefined **)(puVar4 + -0x28) = &Atlas_UI_TopBarManager__RequestHideBackAndNextAndPanels;
  puVar28 = puVar4 + -0x30;
  if (*(ulong *)(uVar12 + 0x28) == 0) {
    puVar29 = &Atlas_UI_Screens_TopBarScreen__RequestElementVisible;
    auVar34 = func_0x00f78af4();
    auVar35._8_8_ = uVar18;
    auVar35._0_8_ = uVar23;
  }
  else {
    auVar34._8_8_ = 0;
    auVar34._0_8_ = *(ulong *)(uVar12 + 0x28);
    uVar17 = 0;
    auVar35._8_8_ = 1;
    auVar35._0_8_ = uVar23;
    puVar29 = &UNK_0150bbf4;
    puVar5 = puVar4 + -0x40;
    uVar24 = 0x3d41218;
  }
code_r0x0150bc48:
  do {
    uVar23 = auVar34._0_8_;
    *(long *)(puVar5 + -0x20) = auVar35._0_8_;
    *(ulong *)(puVar5 + -0x18) = uVar12;
    *(undefined1 **)(puVar5 + -0x10) = puVar28;
    *(undefined **)(puVar5 + -8) = puVar29;
    uVar15 = auVar34._8_4_;
    if (uVar15 == 0xffffffff) {
      return uVar23;
    }
    lVar9 = *(long *)(uVar23 + 0x70);
    if (lVar9 == 0) {
      func_0x00f78af4();
      uVar10 = uVar12;
    }
    else {
      uVar10 = auVar34._8_8_;
      if (uVar15 < *(uint *)(lVar9 + 0x18)) {
        uVar21 = 2;
        if ((int)uVar17 == 0) {
          uVar21 = 0;
        }
        *(undefined4 *)(lVar9 + (long)(int)uVar15 * 0x60 + 0x5c) = uVar21;
        if ((auVar35._8_8_ & 1) == 0) {
          /*Atlas.UI.Screens.TopBarScreen$$ForceButtonState*/ func_0x0150c3bc(uVar23,auVar34._8_8_);
        }
        *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
        *(long *)(puVar5 + -0x48) = unaff_x25;
        *(long *)(puVar5 + -0x40) = unaff_x24;
        *(long *)(puVar5 + -0x38) = unaff_x23;
        *(long *)(puVar5 + -0x30) = unaff_x22;
        *(ulong *)(puVar5 + -0x28) = uVar24;
        *(undefined8 *)(puVar5 + -0x20) = *(undefined8 *)(puVar5 + -0x20);
        *(undefined8 *)(puVar5 + -0x18) = *(undefined8 *)(puVar5 + -0x18);
        *(undefined8 *)(puVar5 + -0x10) = *(undefined8 *)(puVar5 + -0x10);
        *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
        lVar9 = 0x3eb4000;
        if ((bRam0000000003eb4d5b & 1) == 0) {
          func_0x00f78a20(0x3d2a408);
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb4d5b = 1;
        }
        lVar19 = *(long *)(uVar23 + 0x70);
        if (lVar19 == 0) goto code_r0x0150c7d4;
        if (*(uint *)(lVar19 + 0x18) <= uVar15) goto code_r0x0150c7d8;
        unaff_x25 = (long)(int)uVar15;
        lVar19 = lVar19 + unaff_x25 * 0x60;
        unaff_x26 = *(undefined8 *)(lVar19 + 0x20);
        unaff_x22 = *(long *)(lVar19 + 0x28);
        uVar18 = *(undefined8 *)(lVar19 + 0x30);
        uVar30 = *(undefined8 *)(lVar19 + 0x48);
        uVar11 = *(undefined8 *)(lVar19 + 0x40);
        *(undefined8 *)(puVar5 + -0xe8) = *(undefined8 *)(lVar19 + 0x38);
        *(undefined8 *)(puVar5 + -0xf0) = uVar18;
        *(undefined8 *)(puVar5 + -0xd8) = uVar30;
        *(undefined8 *)(puVar5 + -0xe0) = uVar11;
        lVar9 = *(long *)(lVar19 + 0x50);
        iVar7 = *(int *)(lVar19 + 0x58);
        iVar8 = *(int *)(lVar19 + 0x5c);
        unaff_x23 = *(long *)(lVar19 + 0x60);
        unaff_x24 = *(long *)(lVar19 + 0x68);
        uVar18 = *(undefined8 *)(lVar19 + 0x70);
        *(undefined8 *)(puVar5 + -0xf8) = *(undefined8 *)(lVar19 + 0x78);
        *(undefined8 *)(puVar5 + -0x100) = uVar18;
        if (iVar8 == iVar7) {
code_r0x0150c768:
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar23 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(lVar9,0,0);
          if ((int)uVar23 == 0) {
            return uVar23;
          }
          if (lVar9 != 0) {
            uVar23 = /*UnityEngine.UI.Selectable$$set_interactable*/ func_0x032e3be8(lVar9,iVar7 == 2,0);
            return uVar23;
          }
        }
        else if (iVar7 == 2) {
          if (iVar8 == 0) {
            if (unaff_x24 == 0) goto code_r0x0150c7d4;
            uVar11 = *(undefined8 *)(lVar19 + 0x38);
            uVar18 = *(undefined8 *)(lVar19 + 0x30);
            uVar31 = *(undefined8 *)(lVar19 + 0x48);
            uVar30 = *(undefined8 *)(lVar19 + 0x40);
            *(undefined8 *)(puVar5 + -0x118) = uVar11;
            *(undefined8 *)(puVar5 + -0x120) = uVar18;
            *(undefined8 *)(puVar5 + -0x108) = uVar31;
            *(undefined8 *)(puVar5 + -0x110) = uVar30;
            uVar33 = *(undefined8 *)(lVar19 + 0x78);
            uVar32 = *(undefined8 *)(lVar19 + 0x70);
            *(undefined8 *)(puVar5 + -0x128) = uVar33;
            *(undefined8 *)(puVar5 + -0x130) = uVar32;
            *(undefined8 *)(puVar5 + -200) = unaff_x26;
            *(long *)(puVar5 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar5 + -0xb0) = uVar11;
            *(undefined8 *)(puVar5 + -0xb8) = uVar18;
            *(undefined8 *)(puVar5 + -0xa0) = uVar31;
            *(undefined8 *)(puVar5 + -0xa8) = uVar30;
            *(long *)(puVar5 + -0x98) = lVar9;
            *(undefined8 *)(puVar5 + -0x90) = _UNK_033f8620;
            *(long *)(puVar5 + -0x88) = unaff_x23;
            *(long *)(puVar5 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar5 + -0x70) = uVar33;
            *(undefined8 *)(puVar5 + -0x78) = uVar32;
            lVar19 = unaff_x24;
code_r0x0150c724:
            /*System.Action<TopBarScreen.Element>$$Invoke*/ func_0x01e65264(lVar19,puVar5 + -200,uRam0000000003d2a408);
            iVar7 = 1;
          }
          else {
            iVar7 = 2;
          }
code_r0x0150c72c:
          lVar19 = *(long *)(uVar23 + 0x70);
          if (lVar19 != 0) {
            if (*(uint *)(lVar19 + 0x18) <= uVar15) goto code_r0x0150c7d8;
            lVar19 = lVar19 + unaff_x25 * 0x60;
            *(undefined8 *)(lVar19 + 0x20) = unaff_x26;
            *(long *)(lVar19 + 0x28) = unaff_x22;
            uVar18 = *(undefined8 *)(puVar5 + -0xf0);
            uVar30 = *(undefined8 *)(puVar5 + -0xd8);
            uVar11 = *(undefined8 *)(puVar5 + -0xe0);
            *(undefined8 *)(lVar19 + 0x38) = *(undefined8 *)(puVar5 + -0xe8);
            *(undefined8 *)(lVar19 + 0x30) = uVar18;
            *(undefined8 *)(lVar19 + 0x48) = uVar30;
            *(undefined8 *)(lVar19 + 0x40) = uVar11;
            *(long *)(lVar19 + 0x50) = lVar9;
            *(int *)(lVar19 + 0x58) = iVar7;
            *(int *)(lVar19 + 0x5c) = iVar8;
            *(long *)(lVar19 + 0x60) = unaff_x23;
            *(long *)(lVar19 + 0x68) = unaff_x24;
            uVar18 = *(undefined8 *)(puVar5 + -0x100);
            *(undefined8 *)(lVar19 + 0x78) = *(undefined8 *)(puVar5 + -0xf8);
            *(undefined8 *)(lVar19 + 0x70) = uVar18;
            goto code_r0x0150c768;
          }
        }
        else {
          if (iVar7 != 0) goto code_r0x0150c72c;
          if (iVar8 != 2) {
            iVar7 = 0;
            goto code_r0x0150c72c;
          }
          if (((unaff_x22 != 0) && (lVar19 = /*UnityEngine.Component$$get_gameObject*/ func_0x032279f4(unaff_x22,0), lVar19 != 0)) &&
             (/*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(lVar19,1,0), unaff_x23 != 0)) {
            *(undefined8 *)(puVar5 + -200) = unaff_x26;
            *(long *)(puVar5 + -0xc0) = unaff_x22;
            *(undefined8 *)(puVar5 + -0xb0) = *(undefined8 *)(puVar5 + -0xe8);
            *(undefined8 *)(puVar5 + -0xb8) = *(undefined8 *)(puVar5 + -0xf0);
            *(undefined8 *)(puVar5 + -0xa0) = *(undefined8 *)(puVar5 + -0xd8);
            *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(puVar5 + -0xe0);
            *(long *)(puVar5 + -0x98) = lVar9;
            *(undefined8 *)(puVar5 + -0x90) = _UNK_033f8628;
            *(long *)(puVar5 + -0x88) = unaff_x23;
            *(long *)(puVar5 + -0x80) = unaff_x24;
            *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)(puVar5 + -0xf8);
            *(undefined8 *)(puVar5 + -0x78) = *(undefined8 *)(puVar5 + -0x100);
            lVar19 = unaff_x23;
            goto code_r0x0150c724;
          }
        }
code_r0x0150c7d4:
        func_0x00f78af4();
code_r0x0150c7d8:
        uVar18 = func_0x00f78b24();
        auVar36 = func_0x00f78ac0(uVar18,0);
        lVar19 = auVar36._8_8_;
        *(undefined8 *)(puVar5 + -0x180) = unaff_x26;
        *(long *)(puVar5 + -0x178) = unaff_x25;
        *(long *)(puVar5 + -0x170) = unaff_x24;
        *(long *)(puVar5 + -0x168) = unaff_x23;
        *(long *)(puVar5 + -0x160) = unaff_x22;
        *(undefined1 (*) [16])(puVar5 + -0x158) = auVar34;
        *(long *)(puVar5 + -0x148) = lVar9;
        *(undefined1 **)(puVar5 + -0x140) = puVar5 + -0x10;
        *(undefined **)(puVar5 + -0x138) = &Atlas_UI_Screens_TopBarScreen__AnimateInSlash;
        if ((bRam0000000003eb4d55 & 1) == 0) {
          func_0x00f78a20(0x3d5e6e0);
          func_0x00f78a20(0x3d5e7a8);
          func_0x00f78a20(0x3d5e7d0);
          func_0x00f78a20(0x3d5e850);
          func_0x00f78a20(0x3d5e888);
          bRam0000000003eb4d55 = 1;
        }
        uVar18 = /*DG.Tweening.ShortcutExtensions$$DOLocalMove*/ func_0x016b2e88(*(undefined4 *)(lVar19 + 0x18),*(undefined4 *)(lVar19 + 0x1c),
                                 *(undefined4 *)(lVar19 + 0x20),_UNK_033f8144,
                                 *(undefined8 *)(lVar19 + 0x10),0,0);
        uVar18 = /*DG.Tweening.TweenSettingsExtensions$$SetEase<Tweener>*/ func_0x018ee81c(uVar18,10,uRam0000000003d5e7a8);
        uVar18 = /*DG.Tweening.TweenSettingsExtensions$$OnComplete<Tweener>*/ func_0x018ee2bc(uVar18,*(undefined8 *)(lVar19 + 0x58),uRam0000000003d5e6e0);
        uVar18 = /*DG.Tweening.TweenSettingsExtensions$$SetUpdate<Tweener>*/ func_0x018ef000(uVar18,1,uRam0000000003d5e888);
        uVar23 = /*DG.Tweening.TweenSettingsExtensions$$SetTarget<Tweener>*/ func_0x018eee1c(uVar18,auVar36._0_8_,uRam0000000003d5e850);
        if ((uVar23 != 0) && (*(char *)(uVar23 + 0xe8) != '\0')) {
          *(undefined8 *)(uVar23 + 0x30) = *(undefined8 *)(lVar19 + 0x10);
        }
        return uVar23;
      }
    }
    uVar18 = func_0x00f78b24();
    auVar36 = func_0x00f78ac0(uVar18,0);
    puVar6 = puVar5 + -0x30;
    puVar28 = puVar5 + -0x30;
    *(undefined1 **)(puVar5 + -0x30) = puVar5 + -0x10;
    *(undefined **)(puVar5 + -0x28) = &Atlas_UI_TopBarManager__HideNextPanel;
    lVar9 = *(long *)(auVar36._0_8_ + 0x28);
    auVar35._8_8_ = auVar36._8_8_;
    auVar35._0_8_ = lVar9;
    if (lVar9 == 0) {
      puVar29 = &Atlas_UI_Screens_TopBarScreen__HideNextPanel;
      auVar35 = func_0x00f78af4();
    }
    else {
      puVar6 = puVar5 + -0x20;
      puVar28 = *(undefined1 **)(puVar5 + -0x30);
      puVar29 = *(undefined **)(puVar5 + -0x28);
    }
    uVar12 = auVar35._8_8_;
    *(ulong *)(puVar6 + -0x20) = uVar23;
    *(ulong *)(puVar6 + -0x18) = uVar10;
    *(undefined1 **)(puVar6 + -0x10) = puVar28;
    *(undefined **)(puVar6 + -8) = puVar29;
    puVar28 = puVar6 + -0x10;
    auVar34._8_8_ = 4;
    auVar34._0_8_ = auVar35._0_8_;
    uVar17 = 0;
    puVar29 = &UNK_0150bd10;
    puVar5 = puVar6 + -0x20;
  } while( true );
}



// ============================================================
// RVA: 0x14b7450 | Atlas.UI.Screens.PauseScreen.ResumePressed
// ============================================================

void Atlas_UI_Screens_PauseScreen__ResumePressed(undefined8 param_1)

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
  
  if ((bRam0000000003eb4ac6 & 1) == 0) {
    func_0x00f78a20(0x3d41210);
    bRam0000000003eb4ac6 = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41210);
  if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x10), lVar5 == 0)) {
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
      goto code_r0x015619e4;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
          uVar7 = extraout_x1_01;
          goto code_r0x015619f0;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar6 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x01561ab4;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x01561ab4:
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
                goto code_r0x01561a8c;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x01561a8c:
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
code_r0x015619e4:
      (*pcVar13)(plVar1,lVar9);
      uVar7 = extraout_x1_00;
    }
code_r0x015619f0:
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar14) {
      return;
    }
  } while( true );
}



// ============================================================
// RVA: 0x14b74c8 | Atlas.UI.Screens.PauseScreen.QuitPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x01cb55a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb55e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cb570c) */
/* WARNING: Removing unreachable block (ram,0x01cb56a8) */
/* WARNING: Removing unreachable block (ram,0x01cb56ac) */
/* WARNING: Removing unreachable block (ram,0x01cb56e0) */
/* WARNING: Removing unreachable block (ram,0x01cb571c) */
/* WARNING: Removing unreachable block (ram,0x01cb5770) */
/* WARNING: Removing unreachable block (ram,0x01cb5798) */
/* WARNING: Removing unreachable block (ram,0x01cb57ac) */
/* WARNING: Removing unreachable block (ram,0x01cb5834) */
/* WARNING: Removing unreachable block (ram,0x01cb5854) */
/* WARNING: Removing unreachable block (ram,0x01cb5880) */
/* WARNING: Removing unreachable block (ram,0x01cb5894) */
/* WARNING: Removing unreachable block (ram,0x01cb591c) */
/* WARNING: Removing unreachable block (ram,0x01cb5898) */
/* WARNING: Removing unreachable block (ram,0x01cb590c) */
/* WARNING: Removing unreachable block (ram,0x01cb58b4) */
/* WARNING: Removing unreachable block (ram,0x01cb58e4) */
/* WARNING: Removing unreachable block (ram,0x01cb58ec) */
/* WARNING: Removing unreachable block (ram,0x01cb58f0) */
/* WARNING: Removing unreachable block (ram,0x01cb5844) */
/* WARNING: Removing unreachable block (ram,0x01cb57b0) */
/* WARNING: Removing unreachable block (ram,0x01cb5824) */
/* WARNING: Removing unreachable block (ram,0x01cb57cc) */
/* WARNING: Removing unreachable block (ram,0x01cb57fc) */
/* WARNING: Removing unreachable block (ram,0x01cb5804) */
/* WARNING: Removing unreachable block (ram,0x01cb5808) */
/* WARNING: Removing unreachable block (ram,0x03249a9c) */
/* WARNING: Removing unreachable block (ram,0x03249ac8) */
/* WARNING: Removing unreachable block (ram,0x03249adc) */
/* WARNING: Removing unreachable block (ram,0x03249ae8) */
/* WARNING: Removing unreachable block (ram,0x03249af0) */
/* WARNING: Removing unreachable block (ram,0x03249af4) */
/* WARNING: Removing unreachable block (ram,0x01cb5730) */
/* WARNING: Removing unreachable block (ram,0x01cb5760) */
/* WARNING: Removing unreachable block (ram,0x01cb574c) */
/* WARNING: Removing unreachable block (ram,0x01cb56f4) */
/* WARNING: Removing unreachable block (ram,0x01cb56b0) */
/* WARNING: Removing unreachable block (ram,0x03236658) */
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
/* WARNING: Removing unreachable block (ram,0x01cb55ec) */
/* WARNING: Removing unreachable block (ram,0x01cb55a4) */
/* WARNING: Removing unreachable block (ram,0x01cb55a8) */
/* WARNING: Removing unreachable block (ram,0x01cb55f0) */
/* WARNING: Removing unreachable block (ram,0x01cb55f4) */
/* WARNING: Removing unreachable block (ram,0x01cb55c4) */
/* WARNING: Removing unreachable block (ram,0x01cb5618) */
/* WARNING: Removing unreachable block (ram,0x01cb563c) */
/* WARNING: Removing unreachable block (ram,0x01cb566c) */
/* WARNING: Removing unreachable block (ram,0x01cb5680) */
/* WARNING: Removing unreachable block (ram,0x01cb568c) */
/* WARNING: Removing unreachable block (ram,0x01cb5694) */
/* WARNING: Removing unreachable block (ram,0x01cb5698) */
/* WARNING: Removing unreachable block (ram,0x01cb5628) */
/* WARNING: Removing unreachable block (ram,0x01cb55c8) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164abf0) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x032365f8) */
/* WARNING: Removing unreachable block (ram,0x03236620) */
/* WARNING: Removing unreachable block (ram,0x03236634) */
/* WARNING: Removing unreachable block (ram,0x03236640) */
/* WARNING: Removing unreachable block (ram,0x03236648) */
/* WARNING: Removing unreachable block (ram,0x0323664c) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */

undefined8 * Atlas_UI_Screens_PauseScreen__QuitPressed(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 unaff_x19;
  long *unaff_x20;
  int iVar18;
  long unaff_x21;
  uint uVar19;
  uint uVar20;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 uVar21;
  undefined8 unaff_x24;
  int iVar22;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 ***unaff_x29;
  undefined8 ****ppppuVar23;
  undefined *unaff_x30;
  undefined1 auVar24 [16];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 **ppuStack_50;
  undefined *puStack_48;
  
  if ((bRam0000000003eb4ac7 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d2c868);
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d5b4f8);
    func_0x00f78a20(0x3d41218);
    func_0x00f78a20(0x3d70e20);
    func_0x00f78a20(0x3d6d128);
    func_0x00f78a20(0x3d6d108);
    func_0x00f78a20(0x3d70e18);
    bRam0000000003eb4ac7 = 1;
  }
  uVar5 = /*Core.Input.InputManager$$get_CurrentInputFamily*/ func_0x01649514(0);
  uVar6 = /*Core.Input.InputManagerExtensions$$IsControllerOrKeyboard*/ func_0x0164bbd0(uVar5,0);
  if ((uVar6 & 1) == 0) {
    Atlas_UI_Screens_AtlasScreen_PauseScreenBehaviour__PauseScreen_TransitionData___ClearSelected
              (param_1,uRam0000000003d2c868);
  }
  plVar7 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
  /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar7,0);
  lVar9 = /*STR('PAUSE_SCREEN_QUIT_BODY')*/ lRam0000000003d70e18;
  lVar8 = unaff_x21;
  uVar5 = unaff_x22;
  uVar13 = unaff_x23;
  if (plVar7 == (long *)0x0) {
LAB_014b7660:
    unaff_x23 = uVar13;
    unaff_x22 = uVar5;
    unaff_x21 = lVar8;
    uVar5 = func_0x00f78af4();
    puStack_48 = &Atlas_UI_Screens_PauseScreen__RestartPressed;
    ppuStack_50 = (undefined8 **)&stack0xfffffffffffffff0;
    if ((bRam0000000003eb4ac8 & 1) == 0) {
      func_0x00f78a20(0x3d1fa78);
      func_0x00f78a20(0x3d2c868);
      func_0x00f78a20(0x3d280d0);
      func_0x00f78a20(0x3d3e0e8);
      func_0x00f78a20(0x3d5b500);
      func_0x00f78a20(0x3d41218);
      func_0x00f78a20(0x3d70e28);
      func_0x00f78a20(0x3d6d128);
      func_0x00f78a20(0x3d6d108);
      func_0x00f78a20(0x3d70e30);
      bRam0000000003eb4ac8 = 1;
    }
    uVar13 = /*Core.Input.InputManager$$get_CurrentInputFamily*/ func_0x01649514(0);
    uVar6 = /*Core.Input.InputManagerExtensions$$IsControllerOrKeyboard*/ func_0x0164bbd0(uVar13,0);
    if ((uVar6 & 1) == 0) {
      Atlas_UI_Screens_AtlasScreen_PauseScreenBehaviour__PauseScreen_TransitionData___ClearSelected
                (uVar5,uRam0000000003d2c868);
    }
    plVar11 = (long *)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
    /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(plVar11,0);
    lVar9 = /*STR('PAUSE_SCREEN_RESTART_BODY')*/ lRam0000000003d70e28;
    lVar8 = unaff_x21;
    uVar13 = unaff_x22;
    uVar21 = unaff_x23;
    if (plVar11 != (long *)0x0) {
      uVar13 = 0x3d5b000;
      uVar21 = 0x3d41000;
      plVar11[5] = /*STR('PAUSE_SCREEN_RESTART_TITLE')*/ lRam0000000003d70e30;
      plVar11[6] = lVar9;
      lVar9 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
      plVar11[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
      plVar11[8] = lVar9;
      lVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
      /*System.Action$$.ctor*/ func_0x02924c80(lVar8,uVar5,uRam0000000003d5b500,0);
      plVar11[10] = lVar8;
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar5,uRam0000000003d41218);
      if ((lVar9 != 0) && (plVar10 = *(long **)(lVar9 + 0xa0), plVar10 != (long *)0x0)) {
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        unaff_x19 = param_1;
        unaff_x20 = plVar7;
        unaff_x29 = (undefined8 ***)ppuStack_50;
        unaff_x30 = puStack_48;
        goto Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal;
      }
    }
    uVar12 = func_0x00f78af4();
    puStack_88 = &Atlas_UI_Screens_PauseScreen__SettingsPressed;
    uStack_b0 = uVar13;
    lStack_a8 = lVar8;
    plStack_a0 = plVar11;
    uStack_98 = uVar5;
    pppuStack_90 = &ppuStack_50;
    if ((bRam0000000003eb4ac9 & 1) == 0) {
      func_0x00f78a20(0x3d2c870);
      func_0x00f78a20(0x3d41208);
      bRam0000000003eb4ac9 = 1;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar12,uRam0000000003d41208);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x88) != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar9 + 0x88),0,0);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar12,uRam0000000003d41208);
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0x90) != 0)) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar9 + 0x90),1,0);
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar12,uRam0000000003d41208);
        if ((lVar9 != 0) && (*(long *)(lVar9 + 0xa0) != 0)) {
          lVar8 = *(long *)(*(long *)(lVar9 + 0xa0) + 0x18);
          puVar3 = (undefined8 *)&stack0xffffffffffffff80;
          uVar5 = uStack_98;
          plVar7 = plStack_a0;
          lVar9 = lStack_a8;
          uVar13 = uStack_b0;
          ppppuVar23 = (undefined8 ****)pppuStack_90;
          puStack_e8 = puStack_88;
          goto 
          Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
          ;
        }
      }
    }
    uVar5 = func_0x00f78af4();
    uStack_d8 = 0x3eb4000;
    uStack_d0 = 0x3d41208;
    puStack_b8 = &Atlas_UI_Screens_PauseScreen__ShowGameCenterOverlay;
    ppppuVar23 = &pppuStack_c0;
    uStack_e0 = uVar13;
    uStack_c8 = uVar12;
    pppuStack_c0 = &pppuStack_90;
    if ((bRam0000000003eb4aca & 1) == 0) {
      func_0x00f78a20(0x3d41218);
      bRam0000000003eb4aca = 1;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(uVar5,uRam0000000003d41218);
    if (((lVar9 != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
       (plVar7 = *(long **)(*(long *)(lVar9 + 0x28) + 0x30), plVar7 != (long *)0x0)) {
      (**(code **)(*plVar7 + 0x6e8))(plVar7,*(undefined8 *)(*plVar7 + 0x6f0));
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    uVar12 = func_0x00f78af4();
    puStack_e8 = &Atlas_UI_Screens_PauseScreen__SettingsExit;
    if ((bRam0000000003eb4acb & 1) == 0) {
      func_0x00f78a20(0x3d2c870);
      func_0x00f78a20(0x3d41208);
      bRam0000000003eb4acb = 1;
    }
    lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar12,uRam0000000003d41208);
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x88) != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar9 + 0x88),1,0);
      lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar12,uRam0000000003d41208);
      if ((lVar9 != 0) && (*(long *)(lVar9 + 0x90) != 0)) {
        /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar9 + 0x90),0,0);
        lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar12,uRam0000000003d41208);
        if (lVar9 != 0) {
          lVar8 = *(long *)(lVar9 + 0x78);
          plVar7 = (long *)0x3eb4000;
          puVar3 = &uStack_e0;
          lVar9 = 0x3d41218;

          Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
          :
          uVar2 = uRam0000000003d2c870;
          *(undefined8 *)((long)puVar3 + -0x40) = unaff_x24;
          *(undefined8 *)((long)puVar3 + -0x38) = uVar21;
          *(undefined8 *)((long)puVar3 + -0x30) = uVar13;
          *(long *)((long)puVar3 + -0x28) = lVar9;
          *(long **)((long)puVar3 + -0x20) = plVar7;
          *(undefined8 *)((long)puVar3 + -0x18) = uVar5;
          *(undefined8 *****)((long)puVar3 + -0x10) = ppppuVar23;
          *(undefined **)((long)puVar3 + -8) = puStack_e8;
          if ((bRam0000000003eb70f7 & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003eb70f7 = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          *(undefined8 *)((long)puVar3 + -0x70) = 0x3eb7000;
          *(undefined8 *)((long)puVar3 + -0x68) = uVar2;
          *(long *)((long)puVar3 + -0x60) = lVar8;
          *(undefined8 *)((long)puVar3 + -0x58) = uVar12;
          *(undefined1 **)((long)puVar3 + -0x50) = (undefined1 *)((long)puVar3 + -0x10);
          *(undefined8 *)((long)puVar3 + -0x48) = 0x1cb55a4;
          if ((bRam0000000003ec027b & 1) == 0) {
            func_0x00f78a20(0x3d23990,0,0);
            bRam0000000003ec027b = 1;
          }
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          *(undefined8 *)((long)puVar3 + -0x70) = *(undefined8 *)((long)puVar3 + -0x70);
          *(undefined8 *)((long)puVar3 + -0x68) = *(undefined8 *)((long)puVar3 + -0x68);
          *(undefined8 *)((long)puVar3 + -0x60) = *(undefined8 *)((long)puVar3 + -0x60);
          *(undefined8 *)((long)puVar3 + -0x58) = *(undefined8 *)((long)puVar3 + -0x58);
          *(undefined8 *)((long)puVar3 + -0x50) = *(undefined8 *)((long)puVar3 + -0x50);
          *(undefined8 *)((long)puVar3 + -0x48) = *(undefined8 *)((long)puVar3 + -0x48);
          if ((bRam0000000003ec021b & 1) == 0) {
            func_0x00f78a20(0x3d23990);
            bRam0000000003ec021b = 1;
          }
          if (lVar8 == 0) {
            puVar14 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
          }
          else {
            if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
               (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
              func_0x00f78ad0();
            }
            uVar4 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar8);
            puVar14 = (undefined8 *)(ulong)(uVar4 ^ 1);
          }
          return puVar14;
        }
      }
    }
    lVar9 = func_0x00f78af4();
    if ((bRam0000000003eb4acc & 1) == 0) {
      func_0x00f78a20(0x3d2c860);
      bRam0000000003eb4acc = 1;
    }
    if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar14 = (undefined8 *)
                (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(lRam0000000003d2c860 + 0x18) + 0xc0) + 0x38))();
      return puVar14;
    }
    auVar24 = func_0x00f78af4();
    puVar15 = auVar24._8_8_;
    puVar14 = auVar24._0_8_;
    uVar13 = puVar15[1];
    uVar5 = *puVar15;
    puVar14[2] = puVar15[2];
    puVar14[1] = uVar13;
    *puVar14 = uVar5;
    return puVar14;
  }
  plVar7[5] = /*STR('PAUSE_SCREEN_QUIT_TITLE')*/ lRam0000000003d70e20;
  plVar7[6] = lVar9;
  lVar9 = /*STR('GENERIC_NO')*/ lRam0000000003d6d108;
  plVar7[7] = /*STR('GENERIC_YES')*/ lRam0000000003d6d128;
  plVar7[8] = lVar9;
  lVar8 = func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
  /*System.Action$$.ctor*/ func_0x02924c80(lVar8,param_1,uRam0000000003d5b4f8,0);
  plVar7[10] = lVar8;
  lVar9 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41218);
  uVar5 = 0x3d5b000;
  uVar13 = 0x3d41000;
  if ((lVar9 == 0) || (plVar10 = *(long **)(lVar9 + 0xa0), plVar11 = plVar7, plVar10 == (long *)0x0)
     ) goto LAB_014b7660;
Atlas_UI_ModalManager_ToolTipScreen__ToolTipScreenBehaviour___QueueModal:
  plVar7 = plRam0000000003d3e0e8;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 ****)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  uVar5 = 0x3eb8000;
  plVar17 = plRam0000000003d3e0e8;
  if ((bRam0000000003eb832a & 1) == 0) {
    func_0x00f78a20(0x3d3b330);
    func_0x00f78a20(0x3d3b348);
    func_0x00f78a20(0x3d717e8);
    bRam0000000003eb832a = 1;
  }
  if (plVar11 != (long *)0x0) {
    uVar5 = 0x3d71000;
    uVar13 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
    plVar17 = (long *)0x0;
    uVar13 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar13);
    if (plVar10 != (long *)0x0) {
      plVar17 = *(long **)(*(long *)(plVar7[3] + 0xc0) + 8);
      (*(code *)*plVar17)(plVar10,uVar13);
      if (plVar10[7] != 0) {
        /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar10[7],plVar11,uRam0000000003d3b330);
        plVar17 = (long *)plVar10[8];
        if ((plVar17 == (long *)0x0) || ((int)plVar11[2] <= (int)plVar17[2])) {
code_r0x025dfcb4:
          puVar14 = (undefined8 *)
                    (*(code *)**(undefined8 **)(*(long *)(plVar7[3] + 0xc0) + 0x30))(plVar10);
          if (((ulong)puVar14 & 1) != 0) {
            return puVar14;
          }
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          puVar14 = (undefined8 *)
                    (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
          return puVar14;
        }
        if (plVar10[7] != 0) {
          /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar10[7],0,plVar17,uRam0000000003d3b348);
          (*(code *)**(undefined8 **)(*(long *)(plVar7[3] + 0xc0) + 0x60))(plVar10);
          goto code_r0x025dfcb4;
        }
      }
    }
  }
  auVar24 = func_0x00f78af4();
  plVar16 = auVar24._8_8_;
  lVar9 = auVar24._0_8_;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar5;
  *(long **)((long)register0x00000008 + -0x58) = plVar11;
  *(long **)((long)register0x00000008 + -0x50) = plVar7;
  *(long **)((long)register0x00000008 + -0x48) = plVar10;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &Atlas_UI_ModalManager_object__object___QueueModalIfNotAlready;
  if (plVar16 != (long *)0x0) {
    uVar13 = (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
    plVar7 = (long *)0x0;
    plVar10 = plVar16;
    plVar11 = plVar17;
    if (lVar9 != 0) {
      uVar4 = (*(code *)**(undefined8 **)(*(long *)(plVar17[3] + 0xc0) + 0x70))(lVar9,uVar13);
      if ((uVar4 & 1) == 0) {
        (*(code *)**(undefined8 **)(*(long *)(plVar17[3] + 0xc0) + 0x78))(lVar9,plVar16);
      }
      return (undefined8 *)(ulong)(uVar4 ^ 1);
    }
  }
  auVar24 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar5;
  *(long **)((long)register0x00000008 + -0x88) = plVar11;
  *(long **)((long)register0x00000008 + -0x80) = plVar7;
  *(long **)((long)register0x00000008 + -0x78) = plVar10;
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined **)((long)register0x00000008 + -0x68) =
       &Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex;
  iVar18 = 0x3eb8000;
  if ((bRam0000000003eb832b & 1) == 0) {
    func_0x00f78a20(0x3d3b358);
    func_0x00f78a20(0x3d3b360);
    bRam0000000003eb832b = 1;
  }
  lVar9 = *(long *)(auVar24._0_8_ + 0x38);
  if (lVar9 != 0) {
    iVar18 = *(int *)(lVar9 + 0x18);
    if (iVar18 < 1) goto code_r0x025dfe48;
    uVar4 = 0;
    iVar22 = -0x80000000;
    uVar19 = 0;
    do {
      if (*(uint *)(lVar9 + 0x18) <= uVar4) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + (long)(int)uVar4 * 8 + 0x20);
      if (lVar9 == 0) break;
      iVar1 = *(int *)(lVar9 + 0x10);
      uVar20 = uVar4;
      if (iVar1 <= iVar22) {
        uVar20 = uVar19;
      }
      if (iVar18 - 1U == uVar4) goto code_r0x025dfe4c;
      if (iVar1 <= iVar22) {
        iVar1 = iVar22;
      }
      lVar9 = *(long *)(auVar24._0_8_ + 0x38);
      uVar4 = uVar4 + 1;
      iVar22 = iVar1;
      uVar19 = uVar20;
    } while (lVar9 != 0);
  }
  func_0x00f78af4();
code_r0x025dfe48:
  uVar20 = 0;
code_r0x025dfe4c:
  *auVar24._8_8_ = uVar20;
  return (undefined8 *)(ulong)(0 < iVar18);
}



// ============================================================
// RVA: 0x14b7664 | Atlas.UI.Screens.PauseScreen.RestartPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x01cb55a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb55e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cb570c) */
/* WARNING: Removing unreachable block (ram,0x01cb56a8) */
/* WARNING: Removing unreachable block (ram,0x01cb56ac) */
/* WARNING: Removing unreachable block (ram,0x01cb56e0) */
/* WARNING: Removing unreachable block (ram,0x01cb571c) */
/* WARNING: Removing unreachable block (ram,0x01cb5770) */
/* WARNING: Removing unreachable block (ram,0x01cb5798) */
/* WARNING: Removing unreachable block (ram,0x01cb57ac) */
/* WARNING: Removing unreachable block (ram,0x01cb5834) */
/* WARNING: Removing unreachable block (ram,0x01cb5854) */
/* WARNING: Removing unreachable block (ram,0x01cb5880) */
/* WARNING: Removing unreachable block (ram,0x01cb5894) */
/* WARNING: Removing unreachable block (ram,0x01cb591c) */
/* WARNING: Removing unreachable block (ram,0x01cb5898) */
/* WARNING: Removing unreachable block (ram,0x01cb590c) */
/* WARNING: Removing unreachable block (ram,0x01cb58b4) */
/* WARNING: Removing unreachable block (ram,0x01cb58e4) */
/* WARNING: Removing unreachable block (ram,0x01cb58ec) */
/* WARNING: Removing unreachable block (ram,0x01cb58f0) */
/* WARNING: Removing unreachable block (ram,0x01cb5844) */
/* WARNING: Removing unreachable block (ram,0x01cb57b0) */
/* WARNING: Removing unreachable block (ram,0x01cb5824) */
/* WARNING: Removing unreachable block (ram,0x01cb57cc) */
/* WARNING: Removing unreachable block (ram,0x01cb57fc) */
/* WARNING: Removing unreachable block (ram,0x01cb5804) */
/* WARNING: Removing unreachable block (ram,0x01cb5808) */
/* WARNING: Removing unreachable block (ram,0x03249a9c) */
/* WARNING: Removing unreachable block (ram,0x03249ac8) */
/* WARNING: Removing unreachable block (ram,0x03249adc) */
/* WARNING: Removing unreachable block (ram,0x03249ae8) */
/* WARNING: Removing unreachable block (ram,0x03249af0) */
/* WARNING: Removing unreachable block (ram,0x03249af4) */
/* WARNING: Removing unreachable block (ram,0x01cb5730) */
/* WARNING: Removing unreachable block (ram,0x01cb5760) */
/* WARNING: Removing unreachable block (ram,0x01cb574c) */
/* WARNING: Removing unreachable block (ram,0x01cb56f4) */
/* WARNING: Removing unreachable block (ram,0x01cb56b0) */
/* WARNING: Removing unreachable block (ram,0x03236658) */
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
/* WARNING: Removing unreachable block (ram,0x01cb55ec) */
/* WARNING: Removing unreachable block (ram,0x01cb55a4) */
/* WARNING: Removing unreachable block (ram,0x01cb55a8) */
/* WARNING: Removing unreachable block (ram,0x01cb55f0) */
/* WARNING: Removing unreachable block (ram,0x01cb55f4) */
/* WARNING: Removing unreachable block (ram,0x01cb55c4) */
/* WARNING: Removing unreachable block (ram,0x01cb5618) */
/* WARNING: Removing unreachable block (ram,0x01cb563c) */
/* WARNING: Removing unreachable block (ram,0x01cb566c) */
/* WARNING: Removing unreachable block (ram,0x01cb5680) */
/* WARNING: Removing unreachable block (ram,0x01cb568c) */
/* WARNING: Removing unreachable block (ram,0x01cb5694) */
/* WARNING: Removing unreachable block (ram,0x01cb5698) */
/* WARNING: Removing unreachable block (ram,0x01cb5628) */
/* WARNING: Removing unreachable block (ram,0x01cb55c8) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164abf0) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x032365f8) */
/* WARNING: Removing unreachable block (ram,0x03236620) */
/* WARNING: Removing unreachable block (ram,0x03236634) */
/* WARNING: Removing unreachable block (ram,0x03236640) */
/* WARNING: Removing unreachable block (ram,0x03236648) */
/* WARNING: Removing unreachable block (ram,0x0323664c) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */

undefined8 * Atlas_UI_Screens_PauseScreen__RestartPressed(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *****ppppplVar6;
  long lVar7;
  long *plVar8;
  long ****pppplVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *****ppppplVar14;
  long *****ppppplVar15;
  int iVar16;
  long ****unaff_x21;
  long ****pppplVar17;
  uint uVar18;
  uint uVar19;
  undefined1 *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  int iVar20;
  long ******pppppplVar21;
  undefined1 auVar22 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long ****pppplStack_88;
  long *****ppppplStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  long ***ppplStack_68;
  long ****pppplStack_60;
  long ****pppplStack_58;
  long *****ppppplStack_50;
  long *plStack_48;
  
  if ((bRam0000000003eb4ac8 & 1) == 0) {
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d2c868);
    func_0x00f78a20(0x3d280d0);
    func_0x00f78a20(0x3d3e0e8);
    func_0x00f78a20(0x3d5b500);
    func_0x00f78a20(0x3d41218);
    func_0x00f78a20(0x3d70e28);
    func_0x00f78a20(0x3d6d128);
    func_0x00f78a20(0x3d6d108);
    func_0x00f78a20(0x3d70e30);
    bRam0000000003eb4ac8 = 1;
  }
  uVar4 = /*Core.Input.InputManager$$get_CurrentInputFamily*/ func_0x01649514(0);
  uVar5 = /*Core.Input.InputManagerExtensions$$IsControllerOrKeyboard*/ func_0x0164bbd0(uVar4,0);
  if ((uVar5 & 1) == 0) {
    Atlas_UI_Screens_AtlasScreen_PauseScreenBehaviour__PauseScreen_TransitionData___ClearSelected
              (param_1,uRam0000000003d2c868);
  }
  ppppplVar6 = (long *****)func_0x00f78aec(/*Atlas.UI.MessageBoxManager.MessageBoxData_TypeInfo*/ uRam0000000003d280d0);
  /*Atlas.UI.MessageBoxManager.MessageBoxData$$.ctor*/ func_0x0155f260(ppppplVar6,0);
  pppplVar9 = /*STR('PAUSE_SCREEN_RESTART_BODY')*/ pppplRam0000000003d70e28;
  if (ppppplVar6 != (long *****)0x0) {
    unaff_x22 = (undefined1 *)0x3d5b000;
    unaff_x23 = 0x3d41000;
    ppppplVar6[5] = /*STR('PAUSE_SCREEN_RESTART_TITLE')*/ pppplRam0000000003d70e30;
    ppppplVar6[6] = pppplVar9;
    pppplVar9 = /*STR('GENERIC_NO')*/ pppplRam0000000003d6d108;
    ppppplVar6[7] = /*STR('GENERIC_YES')*/ pppplRam0000000003d6d128;
    ppppplVar6[8] = pppplVar9;
    unaff_x21 = (long ****)func_0x00f78aec(/*System.Action_TypeInfo*/ uRam0000000003d1fa78);
    /*System.Action$$.ctor*/ func_0x02924c80(unaff_x21,param_1,uRam0000000003d5b500,0);
    ppppplVar6[10] = unaff_x21;
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41218);
    ppppplVar15 = ppppplRam0000000003d3e0e8;
    if ((lVar7 != 0) && (plVar8 = *(long **)(lVar7 + 0xa0), plVar8 != (long *)0x0)) {
      uVar4 = 0x3eb8000;
      ppppplVar14 = ppppplRam0000000003d3e0e8;
      if ((bRam0000000003eb832a & 1) == 0) {
        func_0x00f78a20(0x3d3b330);
        func_0x00f78a20(0x3d3b348);
        func_0x00f78a20(0x3d717e8);
        bRam0000000003eb832a = 1;
      }
      if (ppppplVar6 != (long *****)0x0) {
        uVar4 = 0x3d71000;
        uVar10 = (*(code *)(*ppppplVar6)[0x2f])(ppppplVar6,(*ppppplVar6)[0x30]);
        ppppplVar14 = (long *****)0x0;
        uVar10 = /*System.String$$Concat*/ func_0x029bdb88(/*STR('QueueModal ')*/ uRam0000000003d717e8,uVar10);
        if (plVar8 != (long *)0x0) {
          ppppplVar14 = (long *****)ppppplVar15[3][0x18][1];
          (*(code *)*ppppplVar14)(plVar8,uVar10);
          if (plVar8[7] != 0) {
            /*System.Collections.Generic.List<WeaponAudioManager.GraveyardInfo>$$Add*/ func_0x02427110(plVar8[7],ppppplVar6,uRam0000000003d3b330);
            ppppplVar14 = (long *****)plVar8[8];
            if ((ppppplVar14 == (long *****)0x0) ||
               (*(int *)(ppppplVar6 + 2) <= *(int *)(ppppplVar14 + 2))) {
code_r0x025dfcb4:
              puVar11 = (undefined8 *)(*(code *)*ppppplVar15[3][0x18][6])(plVar8);
              if (((ulong)puVar11 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x025dfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                puVar11 = (undefined8 *)
                          (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
                return puVar11;
              }
              return puVar11;
            }
            if (plVar8[7] != 0) {
              /*System.Collections.Generic.List<SpeechManager.SpeechEvent>$$Insert*/ func_0x02427ebc(plVar8[7],0,ppppplVar14,uRam0000000003d3b348);
              (*(code *)*ppppplVar15[3][0x18][0xc])(plVar8);
              goto code_r0x025dfcb4;
            }
          }
        }
      }
      auVar22 = func_0x00f78af4();
      plVar13 = auVar22._8_8_;
      lVar7 = auVar22._0_8_;
      ppppplStack_50 = ppppplVar15;
      pppplStack_60 = (long ****)uVar4;
      pppplStack_58 = (long ****)ppppplVar6;
      plStack_48 = plVar8;
      if ((plVar13 != (long *)0x0) &&
         (uVar10 = (**(code **)(*plVar13 + 0x178))(plVar13,*(undefined8 *)(*plVar13 + 0x180)),
         ppppplVar15 = (long *****)0x0, plVar8 = plVar13, ppppplVar6 = ppppplVar14, lVar7 != 0)) {
        uVar3 = (*(code *)*ppppplVar14[3][0x18][0xe])(lVar7,uVar10);
        if ((uVar3 & 1) == 0) {
          (*(code *)*ppppplVar14[3][0x18][0xf])(lVar7,plVar13);
        }
        return (undefined8 *)(ulong)(uVar3 ^ 1);
      }
      auVar22 = func_0x00f78af4();
      ppplStack_68 = (long ***)&Atlas_UI_ModalManager_object__object___TryGetHighestPriortyDataIndex
      ;
      iVar16 = 0x3eb8000;
      uStack_90 = uVar4;
      pppplStack_88 = (long ****)ppppplVar6;
      ppppplStack_80 = ppppplVar15;
      plStack_78 = plVar8;
      puStack_70 = &stack0xffffffffffffffc0;
      if ((bRam0000000003eb832b & 1) == 0) {
        func_0x00f78a20(0x3d3b358);
        func_0x00f78a20(0x3d3b360);
        bRam0000000003eb832b = 1;
      }
      lVar7 = *(long *)(auVar22._0_8_ + 0x38);
      if (lVar7 != 0) {
        iVar16 = *(int *)(lVar7 + 0x18);
        if (iVar16 < 1) goto code_r0x025dfe48;
        uVar3 = 0;
        iVar20 = -0x80000000;
        uVar18 = 0;
        do {
          if (*(uint *)(lVar7 + 0x18) <= uVar3) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
          if (lVar7 == 0) break;
          iVar1 = *(int *)(lVar7 + 0x10);
          uVar19 = uVar3;
          if (iVar1 <= iVar20) {
            uVar19 = uVar18;
          }
          if (iVar16 - 1U == uVar3) goto code_r0x025dfe4c;
          if (iVar1 <= iVar20) {
            iVar1 = iVar20;
          }
          lVar7 = *(long *)(auVar22._0_8_ + 0x38);
          uVar3 = uVar3 + 1;
          iVar20 = iVar1;
          uVar18 = uVar19;
        } while (lVar7 != 0);
      }
      func_0x00f78af4();
code_r0x025dfe48:
      uVar19 = 0;
code_r0x025dfe4c:
      *auVar22._8_8_ = uVar19;
      return (undefined8 *)(ulong)(0 < iVar16);
    }
  }
  uVar4 = func_0x00f78af4();
  plStack_48 = (long *)&Atlas_UI_Screens_PauseScreen__SettingsPressed;
  puStack_70 = unaff_x22;
  ppplStack_68 = (long ***)unaff_x21;
  pppplStack_60 = (long ****)ppppplVar6;
  pppplStack_58 = (long ****)param_1;
  ppppplStack_50 = (long *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ac9 & 1) == 0) {
    func_0x00f78a20(0x3d2c870);
    func_0x00f78a20(0x3d41208);
    bRam0000000003eb4ac9 = 1;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar4,uRam0000000003d41208);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x88) != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar7 + 0x88),0,0);
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar4,uRam0000000003d41208);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x90) != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar7 + 0x90),1,0);
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar4,uRam0000000003d41208);
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0xa0) != 0)) {
        lVar7 = *(long *)(*(long *)(lVar7 + 0xa0) + 0x18);
        puVar2 = (undefined8 *)&stack0xffffffffffffffc0;
        pppplVar9 = pppplStack_58;
        ppppplVar6 = (long *****)pppplStack_60;
        pppplVar17 = (long ****)ppplStack_68;
        unaff_x22 = puStack_70;
        pppppplVar21 = (long ******)ppppplStack_50;
        plVar8 = plStack_48;
        goto 
        Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
        ;
      }
    }
  }
  pppplVar9 = (long ****)func_0x00f78af4();
  uStack_98 = 0x3eb4000;
  uStack_90 = 0x3d41208;
  plStack_78 = (long *)&Atlas_UI_Screens_PauseScreen__ShowGameCenterOverlay;
  pppppplVar21 = &ppppplStack_80;
  uStack_a0 = unaff_x22;
  pppplStack_88 = (long ****)uVar4;
  ppppplStack_80 = (long *****)&ppppplStack_50;
  if ((bRam0000000003eb4aca & 1) == 0) {
    func_0x00f78a20(0x3d41218);
    bRam0000000003eb4aca = 1;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(pppplVar9,uRam0000000003d41218);
  if (((lVar7 != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
     (plVar8 = *(long **)(*(long *)(lVar7 + 0x28) + 0x30), plVar8 != (long *)0x0)) {
    (**(code **)(*plVar8 + 0x6e8))(plVar8,*(undefined8 *)(*plVar8 + 0x6f0));
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  uVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4acb & 1) == 0) {
    func_0x00f78a20(0x3d2c870);
    func_0x00f78a20(0x3d41208);
    bRam0000000003eb4acb = 1;
  }
  lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar4,uRam0000000003d41208);
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x88) != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar7 + 0x88),1,0);
    lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar4,uRam0000000003d41208);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x90) != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar7 + 0x90),0,0);
      lVar7 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar4,uRam0000000003d41208);
      if (lVar7 != 0) {
        lVar7 = *(long *)(lVar7 + 0x78);
        plVar8 = (long *)&Atlas_UI_Screens_PauseScreen__SettingsExit;
        ppppplVar6 = (long *****)0x3eb4000;
        puVar2 = &uStack_a0;
        pppplVar17 = (long ****)0x3d41218;

        Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
        :
        uVar10 = uRam0000000003d2c870;
        *(undefined8 *)((long)puVar2 + -0x40) = unaff_x24;
        *(undefined8 *)((long)puVar2 + -0x38) = unaff_x23;
        *(undefined1 **)((long)puVar2 + -0x30) = unaff_x22;
        *(long *****)((long)puVar2 + -0x28) = pppplVar17;
        *(long ******)((long)puVar2 + -0x20) = ppppplVar6;
        *(long *****)((long)puVar2 + -0x18) = pppplVar9;
        *(long *******)((long)puVar2 + -0x10) = pppppplVar21;
        *(long **)((long)puVar2 + -8) = plVar8;
        if ((bRam0000000003eb70f7 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb70f7 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)((long)puVar2 + -0x70) = 0x3eb7000;
        *(undefined8 *)((long)puVar2 + -0x68) = uVar10;
        *(long *)((long)puVar2 + -0x60) = lVar7;
        *(undefined8 *)((long)puVar2 + -0x58) = uVar4;
        *(undefined1 **)((long)puVar2 + -0x50) = (undefined1 *)((long)puVar2 + -0x10);
        *(undefined8 *)((long)puVar2 + -0x48) = 0x1cb55a4;
        if ((bRam0000000003ec027b & 1) == 0) {
          func_0x00f78a20(0x3d23990,0,0);
          bRam0000000003ec027b = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)((long)puVar2 + -0x70) = *(undefined8 *)((long)puVar2 + -0x70);
        *(undefined8 *)((long)puVar2 + -0x68) = *(undefined8 *)((long)puVar2 + -0x68);
        *(undefined8 *)((long)puVar2 + -0x60) = *(undefined8 *)((long)puVar2 + -0x60);
        *(undefined8 *)((long)puVar2 + -0x58) = *(undefined8 *)((long)puVar2 + -0x58);
        *(undefined8 *)((long)puVar2 + -0x50) = *(undefined8 *)((long)puVar2 + -0x50);
        *(undefined8 *)((long)puVar2 + -0x48) = *(undefined8 *)((long)puVar2 + -0x48);
        if ((bRam0000000003ec021b & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003ec021b = 1;
        }
        if (lVar7 == 0) {
          puVar11 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        else {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar3 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar7);
          puVar11 = (undefined8 *)(ulong)(uVar3 ^ 1);
        }
        return puVar11;
      }
    }
  }
  lVar7 = func_0x00f78af4();
  if ((bRam0000000003eb4acc & 1) == 0) {
    func_0x00f78a20(0x3d2c860);
    bRam0000000003eb4acc = 1;
  }
  if (lVar7 == 0) {
    auVar22 = func_0x00f78af4();
    puVar12 = auVar22._8_8_;
    puVar11 = auVar22._0_8_;
    uVar10 = puVar12[1];
    uVar4 = *puVar12;
    puVar11[2] = puVar12[2];
    puVar11[1] = uVar10;
    *puVar11 = uVar4;
    return puVar11;
  }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar11 = (undefined8 *)
            (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(lRam0000000003d2c860 + 0x18) + 0xc0) + 0x38))();
  return puVar11;
}



// ============================================================
// RVA: 0x14b7800 | Atlas.UI.Screens.PauseScreen.SettingsPressed
// ============================================================

/* WARNING: Possible PIC construction at 0x01cb55a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb55e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cb570c) */
/* WARNING: Removing unreachable block (ram,0x01cb56a8) */
/* WARNING: Removing unreachable block (ram,0x01cb56ac) */
/* WARNING: Removing unreachable block (ram,0x01cb56e0) */
/* WARNING: Removing unreachable block (ram,0x01cb571c) */
/* WARNING: Removing unreachable block (ram,0x01cb5770) */
/* WARNING: Removing unreachable block (ram,0x01cb5798) */
/* WARNING: Removing unreachable block (ram,0x01cb57ac) */
/* WARNING: Removing unreachable block (ram,0x01cb5834) */
/* WARNING: Removing unreachable block (ram,0x01cb5854) */
/* WARNING: Removing unreachable block (ram,0x01cb5880) */
/* WARNING: Removing unreachable block (ram,0x01cb5894) */
/* WARNING: Removing unreachable block (ram,0x01cb591c) */
/* WARNING: Removing unreachable block (ram,0x01cb5898) */
/* WARNING: Removing unreachable block (ram,0x01cb590c) */
/* WARNING: Removing unreachable block (ram,0x01cb58b4) */
/* WARNING: Removing unreachable block (ram,0x01cb58e4) */
/* WARNING: Removing unreachable block (ram,0x01cb58ec) */
/* WARNING: Removing unreachable block (ram,0x01cb58f0) */
/* WARNING: Removing unreachable block (ram,0x01cb5844) */
/* WARNING: Removing unreachable block (ram,0x01cb57b0) */
/* WARNING: Removing unreachable block (ram,0x01cb5824) */
/* WARNING: Removing unreachable block (ram,0x01cb57cc) */
/* WARNING: Removing unreachable block (ram,0x01cb57fc) */
/* WARNING: Removing unreachable block (ram,0x01cb5804) */
/* WARNING: Removing unreachable block (ram,0x01cb5808) */
/* WARNING: Removing unreachable block (ram,0x03249a9c) */
/* WARNING: Removing unreachable block (ram,0x03249ac8) */
/* WARNING: Removing unreachable block (ram,0x03249adc) */
/* WARNING: Removing unreachable block (ram,0x03249ae8) */
/* WARNING: Removing unreachable block (ram,0x03249af0) */
/* WARNING: Removing unreachable block (ram,0x03249af4) */
/* WARNING: Removing unreachable block (ram,0x01cb5730) */
/* WARNING: Removing unreachable block (ram,0x01cb5760) */
/* WARNING: Removing unreachable block (ram,0x01cb574c) */
/* WARNING: Removing unreachable block (ram,0x01cb56f4) */
/* WARNING: Removing unreachable block (ram,0x01cb56b0) */
/* WARNING: Removing unreachable block (ram,0x03236658) */
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
/* WARNING: Removing unreachable block (ram,0x01cb55ec) */
/* WARNING: Removing unreachable block (ram,0x01cb55a4) */
/* WARNING: Removing unreachable block (ram,0x01cb55a8) */
/* WARNING: Removing unreachable block (ram,0x01cb55f0) */
/* WARNING: Removing unreachable block (ram,0x01cb55f4) */
/* WARNING: Removing unreachable block (ram,0x01cb55c4) */
/* WARNING: Removing unreachable block (ram,0x01cb5618) */
/* WARNING: Removing unreachable block (ram,0x01cb563c) */
/* WARNING: Removing unreachable block (ram,0x01cb566c) */
/* WARNING: Removing unreachable block (ram,0x01cb5680) */
/* WARNING: Removing unreachable block (ram,0x01cb568c) */
/* WARNING: Removing unreachable block (ram,0x01cb5694) */
/* WARNING: Removing unreachable block (ram,0x01cb5698) */
/* WARNING: Removing unreachable block (ram,0x01cb5628) */
/* WARNING: Removing unreachable block (ram,0x01cb55c8) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164abf0) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x032365f8) */
/* WARNING: Removing unreachable block (ram,0x03236620) */
/* WARNING: Removing unreachable block (ram,0x03236634) */
/* WARNING: Removing unreachable block (ram,0x03236640) */
/* WARNING: Removing unreachable block (ram,0x03236648) */
/* WARNING: Removing unreachable block (ram,0x0323664c) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */

undefined8 * Atlas_UI_Screens_PauseScreen__SettingsPressed(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 **unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined *puStack_68;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4ac9 & 1) == 0) {
    func_0x00f78a20(0x3d2c870);
    func_0x00f78a20(0x3d41208);
    bRam0000000003eb4ac9 = 1;
  }
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x88) != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x88),0,0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x90) != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x90),1,0);
      lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0xa0) != 0)) {
        lVar2 = *(long *)(*(long *)(lVar2 + 0xa0) + 0x18);
        goto 
        Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
        ;
      }
    }
  }
  unaff_x19 = func_0x00f78af4();
  puStack_38 = &Atlas_UI_Screens_PauseScreen__ShowGameCenterOverlay;
  unaff_x29 = &puStack_40;
  puStack_40 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4aca & 1) == 0) {
    func_0x00f78a20(0x3d41218);
    bRam0000000003eb4aca = 1;
  }
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(unaff_x19,uRam0000000003d41218);
  if (((lVar2 != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (plVar3 = *(long **)(*(long *)(lVar2 + 0x28) + 0x30), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x6e8))(plVar3,*(undefined8 *)(*plVar3 + 0x6f0));
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  param_1 = func_0x00f78af4();
  puStack_68 = &Atlas_UI_Screens_PauseScreen__SettingsExit;
  if ((bRam0000000003eb4acb & 1) == 0) {
    func_0x00f78a20(0x3d2c870);
    func_0x00f78a20(0x3d41208);
    bRam0000000003eb4acb = 1;
  }
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x88) != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x88),1,0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x90) != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x90),0,0);
      lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x78);
        unaff_x20 = 0x3eb4000;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        unaff_x21 = 0x3d41218;
        unaff_x30 = puStack_68;

        Atlas_UI_Screens_AtlasScreen_CharacterSelectScreenBehaviour__CharacterSelectScreen_TransitionData___SelectComponentIfGamepad
        :
        uVar6 = uRam0000000003d2c870;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
        if ((bRam0000000003eb70f7 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb70f7 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3eb7000;
        *(undefined8 *)((long)register0x00000008 + -0x68) = uVar6;
        *(long *)((long)register0x00000008 + -0x60) = lVar2;
        *(undefined8 *)((long)register0x00000008 + -0x58) = param_1;
        *(undefined1 **)((long)register0x00000008 + -0x50) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -0x48) = 0x1cb55a4;
        if ((bRam0000000003ec027b & 1) == 0) {
          func_0x00f78a20(0x3d23990,0,0);
          bRam0000000003ec027b = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined8 *)((long)register0x00000008 + -0x70) =
             *(undefined8 *)((long)register0x00000008 + -0x70);
        *(undefined8 *)((long)register0x00000008 + -0x68) =
             *(undefined8 *)((long)register0x00000008 + -0x68);
        *(undefined8 *)((long)register0x00000008 + -0x60) =
             *(undefined8 *)((long)register0x00000008 + -0x60);
        *(undefined8 *)((long)register0x00000008 + -0x58) =
             *(undefined8 *)((long)register0x00000008 + -0x58);
        *(undefined8 *)((long)register0x00000008 + -0x50) =
             *(undefined8 *)((long)register0x00000008 + -0x50);
        *(undefined8 *)((long)register0x00000008 + -0x48) =
             *(undefined8 *)((long)register0x00000008 + -0x48);
        if ((bRam0000000003ec021b & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003ec021b = 1;
        }
        if (lVar2 == 0) {
          puVar4 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        else {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar1 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar2);
          puVar4 = (undefined8 *)(ulong)(uVar1 ^ 1);
        }
        return puVar4;
      }
    }
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4acc & 1) == 0) {
    func_0x00f78a20(0x3d2c860);
    bRam0000000003eb4acc = 1;
  }
  if (lVar2 == 0) {
    auVar8 = func_0x00f78af4();
    puVar5 = auVar8._8_8_;
    puVar4 = auVar8._0_8_;
    uVar7 = puVar5[1];
    uVar6 = *puVar5;
    puVar4[2] = puVar5[2];
    puVar4[1] = uVar7;
    *puVar4 = uVar6;
    return puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar4 = (undefined8 *)
           (*(code *)**(undefined8 **)
                       (*(long *)(*(long *)(lRam0000000003d2c860 + 0x18) + 0xc0) + 0x38))();
  return puVar4;
}



// ============================================================
// RVA: 0x14b78d0 | Atlas.UI.Screens.PauseScreen.ShowGameCenterOverlay
// ============================================================

/* WARNING: Possible PIC construction at 0x01cb55a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb55e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cb570c) */
/* WARNING: Removing unreachable block (ram,0x01cb56a8) */
/* WARNING: Removing unreachable block (ram,0x01cb56ac) */
/* WARNING: Removing unreachable block (ram,0x01cb56e0) */
/* WARNING: Removing unreachable block (ram,0x01cb571c) */
/* WARNING: Removing unreachable block (ram,0x01cb5770) */
/* WARNING: Removing unreachable block (ram,0x01cb5798) */
/* WARNING: Removing unreachable block (ram,0x01cb57ac) */
/* WARNING: Removing unreachable block (ram,0x01cb5834) */
/* WARNING: Removing unreachable block (ram,0x01cb5854) */
/* WARNING: Removing unreachable block (ram,0x01cb5880) */
/* WARNING: Removing unreachable block (ram,0x01cb5894) */
/* WARNING: Removing unreachable block (ram,0x01cb591c) */
/* WARNING: Removing unreachable block (ram,0x01cb5898) */
/* WARNING: Removing unreachable block (ram,0x01cb590c) */
/* WARNING: Removing unreachable block (ram,0x01cb58b4) */
/* WARNING: Removing unreachable block (ram,0x01cb58e4) */
/* WARNING: Removing unreachable block (ram,0x01cb58ec) */
/* WARNING: Removing unreachable block (ram,0x01cb58f0) */
/* WARNING: Removing unreachable block (ram,0x01cb5844) */
/* WARNING: Removing unreachable block (ram,0x01cb57b0) */
/* WARNING: Removing unreachable block (ram,0x01cb5824) */
/* WARNING: Removing unreachable block (ram,0x01cb57cc) */
/* WARNING: Removing unreachable block (ram,0x01cb57fc) */
/* WARNING: Removing unreachable block (ram,0x01cb5804) */
/* WARNING: Removing unreachable block (ram,0x01cb5808) */
/* WARNING: Removing unreachable block (ram,0x03249a9c) */
/* WARNING: Removing unreachable block (ram,0x03249ac8) */
/* WARNING: Removing unreachable block (ram,0x03249adc) */
/* WARNING: Removing unreachable block (ram,0x03249ae8) */
/* WARNING: Removing unreachable block (ram,0x03249af0) */
/* WARNING: Removing unreachable block (ram,0x03249af4) */
/* WARNING: Removing unreachable block (ram,0x01cb5730) */
/* WARNING: Removing unreachable block (ram,0x01cb5760) */
/* WARNING: Removing unreachable block (ram,0x01cb574c) */
/* WARNING: Removing unreachable block (ram,0x01cb56f4) */
/* WARNING: Removing unreachable block (ram,0x01cb56b0) */
/* WARNING: Removing unreachable block (ram,0x03236658) */
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
/* WARNING: Removing unreachable block (ram,0x01cb55ec) */
/* WARNING: Removing unreachable block (ram,0x01cb55a4) */
/* WARNING: Removing unreachable block (ram,0x01cb55a8) */
/* WARNING: Removing unreachable block (ram,0x01cb55f0) */
/* WARNING: Removing unreachable block (ram,0x01cb55f4) */
/* WARNING: Removing unreachable block (ram,0x01cb55c4) */
/* WARNING: Removing unreachable block (ram,0x01cb5618) */
/* WARNING: Removing unreachable block (ram,0x01cb563c) */
/* WARNING: Removing unreachable block (ram,0x01cb566c) */
/* WARNING: Removing unreachable block (ram,0x01cb5680) */
/* WARNING: Removing unreachable block (ram,0x01cb568c) */
/* WARNING: Removing unreachable block (ram,0x01cb5694) */
/* WARNING: Removing unreachable block (ram,0x01cb5698) */
/* WARNING: Removing unreachable block (ram,0x01cb5628) */
/* WARNING: Removing unreachable block (ram,0x01cb55c8) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164abf0) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x032365f8) */
/* WARNING: Removing unreachable block (ram,0x03236620) */
/* WARNING: Removing unreachable block (ram,0x03236634) */
/* WARNING: Removing unreachable block (ram,0x03236640) */
/* WARNING: Removing unreachable block (ram,0x03236648) */
/* WARNING: Removing unreachable block (ram,0x0323664c) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */

undefined8 * Atlas_UI_Screens_PauseScreen__ShowGameCenterOverlay(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000003eb4aca & 1) == 0) {
    func_0x00f78a20(0x3d41218);
    bRam0000000003eb4aca = 1;
  }
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(param_1,uRam0000000003d41218);
  if (((lVar2 != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (plVar3 = *(long **)(*(long *)(lVar2 + 0x28) + 0x30), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x6e8))(plVar3,*(undefined8 *)(*plVar3 + 0x6f0));
    return (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  uVar4 = func_0x00f78af4();
  if ((bRam0000000003eb4acb & 1) == 0) {
    func_0x00f78a20(0x3d2c870);
    func_0x00f78a20(0x3d41208);
    bRam0000000003eb4acb = 1;
  }
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar4,uRam0000000003d41208);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x88) != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x88),1,0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar4,uRam0000000003d41208);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x90) != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x90),0,0);
      lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(uVar4,uRam0000000003d41208);
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x78);
        if ((bRam0000000003eb70f7 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb70f7 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((bRam0000000003ec027b & 1) == 0) {
          func_0x00f78a20(0x3d23990,0,0);
          bRam0000000003ec027b = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((bRam0000000003ec021b & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003ec021b = 1;
        }
        if (lVar2 == 0) {
          puVar5 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        else {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar1 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar2);
          puVar5 = (undefined8 *)(ulong)(uVar1 ^ 1);
        }
        return puVar5;
      }
    }
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4acc & 1) == 0) {
    func_0x00f78a20(0x3d2c860);
    bRam0000000003eb4acc = 1;
  }
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
                       (*(long *)(*(long *)(lRam0000000003d2c860 + 0x18) + 0xc0) + 0x38))();
  return puVar5;
}



// ============================================================
// RVA: 0x14b7954 | Atlas.UI.Screens.PauseScreen.SettingsExit
// ============================================================

/* WARNING: Possible PIC construction at 0x01cb55a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb55e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164aba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0164ad08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03236654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb56a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb5708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01cb575c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x03249afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01cb570c) */
/* WARNING: Removing unreachable block (ram,0x01cb56a8) */
/* WARNING: Removing unreachable block (ram,0x01cb56ac) */
/* WARNING: Removing unreachable block (ram,0x01cb56e0) */
/* WARNING: Removing unreachable block (ram,0x01cb571c) */
/* WARNING: Removing unreachable block (ram,0x01cb5770) */
/* WARNING: Removing unreachable block (ram,0x01cb5798) */
/* WARNING: Removing unreachable block (ram,0x01cb57ac) */
/* WARNING: Removing unreachable block (ram,0x01cb5834) */
/* WARNING: Removing unreachable block (ram,0x01cb5854) */
/* WARNING: Removing unreachable block (ram,0x01cb5880) */
/* WARNING: Removing unreachable block (ram,0x01cb5894) */
/* WARNING: Removing unreachable block (ram,0x01cb591c) */
/* WARNING: Removing unreachable block (ram,0x01cb5898) */
/* WARNING: Removing unreachable block (ram,0x01cb590c) */
/* WARNING: Removing unreachable block (ram,0x01cb58b4) */
/* WARNING: Removing unreachable block (ram,0x01cb58e4) */
/* WARNING: Removing unreachable block (ram,0x01cb58ec) */
/* WARNING: Removing unreachable block (ram,0x01cb58f0) */
/* WARNING: Removing unreachable block (ram,0x01cb5844) */
/* WARNING: Removing unreachable block (ram,0x01cb57b0) */
/* WARNING: Removing unreachable block (ram,0x01cb5824) */
/* WARNING: Removing unreachable block (ram,0x01cb57cc) */
/* WARNING: Removing unreachable block (ram,0x01cb57fc) */
/* WARNING: Removing unreachable block (ram,0x01cb5804) */
/* WARNING: Removing unreachable block (ram,0x01cb5808) */
/* WARNING: Removing unreachable block (ram,0x03249a9c) */
/* WARNING: Removing unreachable block (ram,0x03249ac8) */
/* WARNING: Removing unreachable block (ram,0x03249adc) */
/* WARNING: Removing unreachable block (ram,0x03249ae8) */
/* WARNING: Removing unreachable block (ram,0x03249af0) */
/* WARNING: Removing unreachable block (ram,0x03249af4) */
/* WARNING: Removing unreachable block (ram,0x01cb5730) */
/* WARNING: Removing unreachable block (ram,0x01cb5760) */
/* WARNING: Removing unreachable block (ram,0x01cb574c) */
/* WARNING: Removing unreachable block (ram,0x01cb56f4) */
/* WARNING: Removing unreachable block (ram,0x01cb56b0) */
/* WARNING: Removing unreachable block (ram,0x03236658) */
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
/* WARNING: Removing unreachable block (ram,0x01cb55ec) */
/* WARNING: Removing unreachable block (ram,0x01cb55a4) */
/* WARNING: Removing unreachable block (ram,0x01cb55a8) */
/* WARNING: Removing unreachable block (ram,0x01cb55f0) */
/* WARNING: Removing unreachable block (ram,0x01cb55f4) */
/* WARNING: Removing unreachable block (ram,0x01cb55c4) */
/* WARNING: Removing unreachable block (ram,0x01cb5618) */
/* WARNING: Removing unreachable block (ram,0x01cb563c) */
/* WARNING: Removing unreachable block (ram,0x01cb566c) */
/* WARNING: Removing unreachable block (ram,0x01cb5680) */
/* WARNING: Removing unreachable block (ram,0x01cb568c) */
/* WARNING: Removing unreachable block (ram,0x01cb5694) */
/* WARNING: Removing unreachable block (ram,0x01cb5698) */
/* WARNING: Removing unreachable block (ram,0x01cb5628) */
/* WARNING: Removing unreachable block (ram,0x01cb55c8) */
/* WARNING: Removing unreachable block (ram,0x0164aa78) */
/* WARNING: Removing unreachable block (ram,0x0164aaac) */
/* WARNING: Removing unreachable block (ram,0x0164aad8) */
/* WARNING: Removing unreachable block (ram,0x0164aae8) */
/* WARNING: Removing unreachable block (ram,0x0164aaf0) */
/* WARNING: Removing unreachable block (ram,0x0164aafc) */
/* WARNING: Removing unreachable block (ram,0x0164aba8) */
/* WARNING: Removing unreachable block (ram,0x0164ab10) */
/* WARNING: Removing unreachable block (ram,0x0164ab14) */
/* WARNING: Removing unreachable block (ram,0x0164ab24) */
/* WARNING: Removing unreachable block (ram,0x0164ab40) */
/* WARNING: Removing unreachable block (ram,0x0164ab48) */
/* WARNING: Removing unreachable block (ram,0x0164ab4c) */
/* WARNING: Removing unreachable block (ram,0x0164ab58) */
/* WARNING: Removing unreachable block (ram,0x0164abe0) */
/* WARNING: Removing unreachable block (ram,0x0164abe4) */
/* WARNING: Removing unreachable block (ram,0x0164abf0) */
/* WARNING: Removing unreachable block (ram,0x0164ac18) */
/* WARNING: Removing unreachable block (ram,0x0164ac2c) */
/* WARNING: Removing unreachable block (ram,0x0164ac3c) */
/* WARNING: Removing unreachable block (ram,0x0164ac68) */
/* WARNING: Removing unreachable block (ram,0x0164ac44) */
/* WARNING: Removing unreachable block (ram,0x0164ac6c) */
/* WARNING: Removing unreachable block (ram,0x0164ac9c) */
/* WARNING: Removing unreachable block (ram,0x0164acbc) */
/* WARNING: Removing unreachable block (ram,0x0164acd0) */
/* WARNING: Removing unreachable block (ram,0x0164acd8) */
/* WARNING: Removing unreachable block (ram,0x0164acdc) */
/* WARNING: Removing unreachable block (ram,0x0164acf4) */
/* WARNING: Removing unreachable block (ram,0x0164acfc) */
/* WARNING: Removing unreachable block (ram,0x0164ad00) */
/* WARNING: Removing unreachable block (ram,0x0164ac50) */
/* WARNING: Removing unreachable block (ram,0x0164ab74) */
/* WARNING: Removing unreachable block (ram,0x0164ab78) */
/* WARNING: Removing unreachable block (ram,0x0164ab8c) */
/* WARNING: Removing unreachable block (ram,0x0164ab94) */
/* WARNING: Removing unreachable block (ram,0x0164ab98) */
/* WARNING: Removing unreachable block (ram,0x032365f8) */
/* WARNING: Removing unreachable block (ram,0x03236620) */
/* WARNING: Removing unreachable block (ram,0x03236634) */
/* WARNING: Removing unreachable block (ram,0x03236640) */
/* WARNING: Removing unreachable block (ram,0x03236648) */
/* WARNING: Removing unreachable block (ram,0x0323664c) */
/* WARNING: Removing unreachable block (ram,0x03249b00) */
/* WARNING: Removing unreachable block (ram,0x0324878c) */
/* WARNING: Removing unreachable block (ram,0x03248790) */
/* WARNING: Removing unreachable block (ram,0x032487c4) */
/* WARNING: Removing unreachable block (ram,0x032487d8) */
/* WARNING: Removing unreachable block (ram,0x032487e0) */
/* WARNING: Removing unreachable block (ram,0x032487e4) */

undefined8 * Atlas_UI_Screens_PauseScreen__SettingsExit(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000003eb4acb & 1) == 0) {
    func_0x00f78a20(0x3d2c870);
    func_0x00f78a20(0x3d41208);
    bRam0000000003eb4acb = 1;
  }
  lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x88) != 0)) {
    /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x88),1,0);
    lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x90) != 0)) {
      /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(lVar2 + 0x90),0,0);
      lVar2 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(param_1,uRam0000000003d41208);
      if (lVar2 != 0) {
        lVar2 = *(long *)(lVar2 + 0x78);
        if ((bRam0000000003eb70f7 & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003eb70f7 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((bRam0000000003ec027b & 1) == 0) {
          func_0x00f78a20(0x3d23990,0,0);
          bRam0000000003ec027b = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        if ((bRam0000000003ec021b & 1) == 0) {
          func_0x00f78a20(0x3d23990);
          bRam0000000003ec021b = 1;
        }
        if (lVar2 == 0) {
          puVar3 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        else {
          if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
            func_0x00f78ad0();
          }
          uVar1 = /*UnityEngine.Object$$IsNativeObjectAlive*/ func_0x03248800(lVar2);
          puVar3 = (undefined8 *)(ulong)(uVar1 ^ 1);
        }
        return puVar3;
      }
    }
  }
  lVar2 = func_0x00f78af4();
  if ((bRam0000000003eb4acc & 1) == 0) {
    func_0x00f78a20(0x3d2c860);
    bRam0000000003eb4acc = 1;
  }
  if (lVar2 == 0) {
    auVar7 = func_0x00f78af4();
    puVar4 = auVar7._8_8_;
    puVar3 = auVar7._0_8_;
    uVar6 = puVar4[1];
    uVar5 = *puVar4;
    puVar3[2] = puVar4[2];
    puVar3[1] = uVar6;
    *puVar3 = uVar5;
    return puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (undefined8 *)
           (*(code *)**(undefined8 **)
                       (*(long *)(*(long *)(lRam0000000003d2c860 + 0x18) + 0xc0) + 0x38))();
  return puVar3;
}



// ============================================================
// RVA: 0x14b7a1c | Atlas.UI.Screens.PauseScreen..ctor
// ============================================================

void Atlas_UI_Screens_PauseScreen___ctor(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000003eb4acc & 1) == 0) {
    func_0x00f78a20(0x3d2c860);
    bRam0000000003eb4acc = 1;
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01cb5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lRam0000000003d2c860 + 0x18) + 0xc0) + 0x38))();
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



// ============================================================
// RVA: 0x14b7a70 | Atlas.UI.Screens.PauseScreen.<QuitPressed>b__5_0
// ============================================================

long Atlas_UI_Screens_PauseScreen___QuitPressed_b__5_0(undefined8 param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  code *pcVar13;
  undefined8 unaff_x23;
  long lVar14;
  undefined8 unaff_x24;
  undefined1 *puVar15;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar16 [16];
  
  puVar15 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4acd & 1) == 0) {
    func_0x00f78a20(0x3d41210);
    bRam0000000003eb4acd = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41210);
  if (lVar5 == 0) {
    return 0;
  }
  lVar5 = *(long *)(lVar5 + 0x18);
  if (lVar5 == 0) {
    uVar6 = func_0x00f78af4();
    if ((bRam0000000003eb4ace & 1) == 0) {
      func_0x00f78a20(0x3d41210);
      bRam0000000003eb4ace = 1;
    }
    lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(uVar6,uRam0000000003d41210);
    if (lVar5 == 0) {
      return 0;
    }
    lVar5 = *(long *)(lVar5 + 0x20);
    if (lVar5 == 0) {
      lVar5 = func_0x00f78af4();
      return *(long *)(lVar5 + 0x68);
    }
    unaff_x30 = &Atlas_UI_Screens_PauseScreen___RestartPressed_b__6_0;
    unaff_x20 = 0x3eb4000;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x21 = 0x3d41210;
    unaff_x19 = param_1;
    unaff_x29 = puVar15;
  }
  uVar6 = 0;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x58) = lVar5;
  lVar8 = *(long *)(lVar5 + 0x68);
  if (lVar8 == 0) {
    puVar15 = (undefined1 *)((long)register0x00000008 + -0x58);
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar8 + 0x18);
    if (lVar14 == 0) {
      return lVar5;
    }
    puVar15 = (undefined1 *)(lVar8 + 0x20);
  }
  lVar8 = 0;
  do {
    lVar9 = *(long *)(puVar15 + lVar8 * 8);
    pcVar13 = *(code **)(lVar9 + 0x10);
    plVar1 = *(long **)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar9 + 0x28);
    if (*(short *)(lVar9 + 0x48) == -1) {
      func_0x00f78ad8(lVar9,uVar6);
    }
    iVar3 = func_0x00f78a4c(lVar9);
    if (iVar3 == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar9 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar5 + 0x18) == 0))
      goto code_r0x015619e4;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          auVar16 = (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
          goto code_r0x015619f0;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar7 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x01561ab4;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x01561ab4:
        pcVar13 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if (iVar4 == 0) {
          uVar6 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar9 + 0x48) * 0x10 + 0x140);
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
                goto code_r0x01561a8c;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x01561a8c:
          uVar6 = *(undefined8 *)(lVar10 + 8);
        }
        puVar7 = (undefined8 *)func_0x00f78acc(uVar6,lVar9);
        pcVar13 = (code *)*puVar7;
      }
      auVar16 = (*pcVar13)(plVar1,puVar7);
    }
    else if (*(char *)(lVar9 + 0x4a) == '\0') {
      auVar16 = (*pcVar13)(lVar9);
    }
    else {
code_r0x015619e4:
      auVar16 = (*pcVar13)(plVar1,lVar9);
    }
code_r0x015619f0:
    uVar6 = auVar16._8_8_;
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar14) {
      return auVar16._0_8_;
    }
  } while( true );
}



// ============================================================
// RVA: 0x14b7aec | Atlas.UI.Screens.PauseScreen.<RestartPressed>b__6_0
// ============================================================

long Atlas_UI_Screens_PauseScreen___RestartPressed_b__6_0(undefined8 param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  long lStack_58;
  
  if ((bRam0000000003eb4ace & 1) == 0) {
    func_0x00f78a20(0x3d41210);
    bRam0000000003eb4ace = 1;
  }
  lVar5 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_ScreenParameters*/ func_0x028a63fc(param_1,uRam0000000003d41210);
  if (lVar5 == 0) {
    return 0;
  }
  lVar5 = *(long *)(lVar5 + 0x20);
  if (lVar5 == 0) {
    lVar5 = func_0x00f78af4();
    return *(long *)(lVar5 + 0x68);
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
      return lVar5;
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
      goto code_r0x015619e4;
      iVar3 = func_0x00f78a44(lVar9);
      iVar4 = func_0x00f78ec0(lVar9);
      if (iVar3 == 0) {
        uVar2 = *(ushort *)(lVar9 + 0x48);
        if (iVar4 == 0) {
          lVar9 = *plVar1 + (ulong)uVar2 * 0x10;
          auVar16 = (**(code **)(lVar9 + 0x138))(plVar1,*(undefined8 *)(lVar9 + 0x140));
          goto code_r0x015619f0;
        }
        lVar9 = func_0x00f78a48(lVar9);
        lVar10 = *plVar1;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12a);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar9) {
              puVar6 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto code_r0x01561ab4;
            }
            piVar12 = piVar12 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)func_0x00fac1f0(plVar1,lVar9,(ulong)uVar2);
code_r0x01561ab4:
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
                goto code_r0x01561a8c;
              }
              piVar12 = piVar12 + 4;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          lVar10 = func_0x00fac1f0(plVar1);
code_r0x01561a8c:
          uVar7 = *(undefined8 *)(lVar10 + 8);
        }
        puVar6 = (undefined8 *)func_0x00f78acc(uVar7,lVar9);
        pcVar13 = (code *)*puVar6;
      }
      auVar16 = (*pcVar13)(plVar1,puVar6);
    }
    else if (*(char *)(lVar9 + 0x4a) == '\0') {
      auVar16 = (*pcVar13)(lVar9);
    }
    else {
code_r0x015619e4:
      auVar16 = (*pcVar13)(plVar1,lVar9);
    }
code_r0x015619f0:
    uVar7 = auVar16._8_8_;
    lVar8 = lVar8 + 1;
    if (lVar8 == lVar14) {
      return auVar16._0_8_;
    }
  } while( true );
}



