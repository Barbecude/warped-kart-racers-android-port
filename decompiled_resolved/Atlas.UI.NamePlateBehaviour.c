// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.NamePlateBehaviour

// ============================================================
// RVA: 0x1499da8 | Atlas.UI.NamePlateBehaviour.SetPositionBasedOn3D
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong Atlas_UI_NamePlateBehaviour__SetPositionBasedOn3D
                (float param_1,float param_2,float param_3,ulong param_4,ulong param_5,ulong param_6
                ,long param_7)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  byte bVar5;
  undefined1 **ppuVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  int extraout_w1;
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  long lVar26;
  int *piVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  undefined8 unaff_x24;
  long *unaff_x25;
  code *pcVar31;
  int *unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  undefined4 uVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined4 uStack_5c8;
  undefined3 uStack_5c4;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  ulong uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 uStack_598;
  undefined4 uStack_597;
  undefined3 uStack_593;
  undefined8 *puStack_580;
  undefined8 uStack_578;
  int *piStack_570;
  long *plStack_568;
  undefined8 uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  undefined8 uStack_548;
  long lStack_540;
  ulong uStack_538;
  undefined1 **ppuStack_530;
  code *pcStack_528;
  uint uStack_514;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  ulong uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  ulong uStack_340;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b0;
  long *plStack_2a0;
  undefined8 uStack_298;
  int *piStack_290;
  long *plStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  undefined8 *puStack_270;
  long lStack_268;
  ulong uStack_260;
  ulong uStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  uint uStack_23c;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  int aiStack_1b0 [4];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
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
  ulong uStack_d8;
  undefined1 *puStack_80;
  code *pcStack_78;
  
  uVar30 = 0x3eb4000;
  if ((bRam0000000003eb4a1a & 1) == 0) {
    func_0x00f78a20(0x3d53528);
    bRam0000000003eb4a1a = 1;
  }
  if ((((param_5 != 0) && (uVar32 = /*UnityEngine.Transform$$get_position*/ func_0x03274f20(param_5,0), param_7 != 0)) &&
      (lVar11 = /*UnityEngine.Component$$GetComponent<UniversalAdditionalLightData>*/ func_0x01839034(param_7,uRam0000000003d53528), lVar11 != 0)) &&
     (/*UnityEngine.RectTransform$$get_sizeDelta*/ func_0x03254dac(lVar11,0), param_6 != 0)) {
    /*UnityEngine.Camera$$WorldToViewportPoint*/ func_0x0321fe94(uVar32,param_2 + param_1,param_3,param_6,0);
    fVar33 = (float)/*UnityEngine.Mathf$$Clamp01*/ func_0x0323d340((param_3 + -10.0) / 35.0,0);
    if (*(long *)(param_4 + 0x18) != 0) {
      fVar33 = (1.0 - fVar33) * _UNK_033f83ec + _UNK_033f82c4;
      /*UnityEngine.Transform$$set_localScale*/ func_0x03275bf0(fVar33,fVar33,0x3f800000,*(long *)(param_4 + 0x18),0);
      lVar11 = *(long *)(param_4 + 0x18);
      if (lVar11 != 0) {
        if (pcRam0000000003ec07e0 == (code *)0x0) {
          pcRam0000000003ec07e0 =
               (code *)func_0x00f789d4("UnityEngine.RectTransform::set_anchoredPosition_Injected(UnityEngine.Vector2&)"
                                       ,0);
        }
        uVar30 = (*pcRam0000000003ec07e0)(lVar11,&stack0xffffffffffffffd8);
        return uVar30;
      }
    }
  }
  auVar34 = func_0x00f78af4();
  pcStack_78 = Atlas_UI_Screens_MultiplayerLobbyScreen__SetConnecting;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb49ea & 1) == 0) {
    func_0x00f78a20(0x3d411d0);
    bRam0000000003eb49ea = 1;
  }
  lVar11 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_SharedScreenParameters*/ func_0x028a6490(auVar34._0_8_,uRam0000000003d411d0);
  if ((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) {
    uVar28 = *(uint *)(auVar34._0_8_ + 0x48);
    uVar30 = (ulong)uVar28;
    uVar21 = (ulong)(auVar34._8_4_ ^ 1);
    lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + 0x10);
    if (lVar11 == 0) {
      auVar34 = func_0x00f78af4();
      lVar11 = *(long *)(auVar34._0_8_ + 0x10);
      auVar34._8_8_ = auVar34._8_8_;
      auVar34._0_8_ = lVar11;
      if (lVar11 == 0) {
        uVar30 = func_0x00f78af4();
        if ((bRam0000000003eb4871 & 1) == 0) {
          func_0x00f78a20(0x3d2fb80);
          func_0x00f78a20(0x3d1c478);
          bRam0000000003eb4871 = 1;
        }
        uVar16 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<string, FrontEndScreen3DSceneDefinition>_TypeInfo*/ uRam0000000003d1c478);
        /*System.Collections.Generic.Dictionary<TabController.TabPanel, List<CharacterRepresentationViewBehaviour>>$$.ctor*/ func_0x01ed728c(uVar16,uRam0000000003d2fb80);
        *(undefined8 *)(uVar30 + 0x30) = uVar16;
        return uVar30;
      }
      ppuVar6 = &puStack_80;
      pcVar31 = Atlas_UI_AtlasUIManager__SetScreenVisible;
      uVar23 = uVar21;
    }
    else {
      ppuVar6 = (undefined1 **)&stack0xffffffffffffff50;
      param_5 = 0x3ebc000;
      uVar23 = uVar21;
      if ((bRam0000000003ebc651 & 1) == 0) {
        func_0x00f78a20(0x3d2a5c0,uVar30,uVar21,0);
        func_0x00f78a20(0x3d3ddc8);
        bRam0000000003ebc651 = 1;
      }
      if (*(long *)(lVar11 + 0x68) != 0) {
        uVar23 = auVar34._8_8_ & 0xffffffff;
        uVar18 = /*Core.Input.InputManager$$SetScreenLayerInputDisabled*/ func_0x0164b010(*(long *)(lVar11 + 0x68),uVar30,uVar23,0);
        lVar29 = *(long *)(lVar11 + 0x70);
        param_5 = 0;
        if (lVar29 != 0) {
          if (*(uint *)(lVar29 + 0x18) <= uVar28) {
            uVar18 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          if ((*(long *)(*(long *)(lVar29 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28) == 0) ||
             (param_5 = *(ulong *)(lVar11 + 0x30), param_5 == 0)) {
            return uVar18;
          }
          lVar29 = *(long *)(lVar11 + 0x70);
          lVar11 = 0;
          if (lVar29 != 0) {
            if (*(uint *)(lVar29 + 0x18) <= uVar28) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            plVar20 = *(long **)(*(long *)(lVar29 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28);
            uStack_d8 = param_5;
            lVar11 = *(long *)(param_5 + 0x68);
            if (lVar11 == 0) {
              puVar14 = &uStack_d8;
              lVar29 = 1;
            }
            else {
              lVar29 = *(long *)(lVar11 + 0x18);
              if (lVar29 == 0) {
                return param_5;
              }
              puVar14 = (ulong *)(lVar11 + 0x20);
            }
            lVar11 = 0;
            do {
              uVar23 = puVar14[lVar11];
              pcVar31 = *(code **)(uVar23 + 0x10);
              plVar1 = *(long **)(uVar23 + 0x20);
              lVar15 = *(long *)(uVar23 + 0x28);
              if (*(short *)(lVar15 + 0x48) == -1) {
                func_0x00f78ad8(lVar15);
              }
              iVar9 = func_0x00f78a4c(lVar15);
              bVar7 = *(char *)(lVar15 + 0x4a) == '\x03';
              if (iVar9 == 0) {
                if (bVar7) {
                  if (plVar1 == (long *)0x0) {
code_r0x01e71bbc:
                    uVar23 = (*pcVar31)(plVar20,uVar30,uVar21,lVar15);
                  }
                  else {
                    if (((*(short *)(lVar15 + 0x48) == -1) ||
                        ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(param_5 + 0x18) == 0)
                       ) goto code_r0x01e71aac;
                    iVar9 = func_0x00f78a44(lVar15);
                    iVar10 = func_0x00f78ec0(lVar15);
                    if (iVar9 == 0) {
                      uVar3 = *(ushort *)(lVar15 + 0x48);
                      if (iVar10 == 0) {
                        lVar15 = *plVar1 + (ulong)uVar3 * 0x10;
                        uVar23 = (**(code **)(lVar15 + 0x138))
                                           (plVar1,plVar20,uVar30,uVar21,
                                            *(undefined8 *)(lVar15 + 0x140));
                        goto code_r0x01e71bd0;
                      }
                      lVar15 = func_0x00f78a48(lVar15);
                      lVar26 = *plVar1;
                      uVar23 = (ulong)*(ushort *)(lVar26 + 0x12a);
                      if (uVar23 != 0) {
                        piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar27 + -2) == lVar15) {
                            puVar17 = (undefined8 *)
                                      (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                            goto code_r0x01e71d74;
                          }
                          piVar27 = piVar27 + 4;
                          uVar23 = uVar23 - 1;
                        } while (uVar23 != 0);
                      }
                      puVar17 = (undefined8 *)func_0x00fac1f0(plVar1,lVar15,(ulong)uVar3);
code_r0x01e71d74:
                      pcVar31 = (code *)*puVar17;
                      puVar17 = (undefined8 *)puVar17[1];
                    }
                    else {
                      if (iVar10 == 0) {
                        uVar16 = *(undefined8 *)
                                  (*plVar1 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
                      }
                      else {
                        lVar26 = *plVar1;
                        uVar23 = (ulong)*(ushort *)(lVar26 + 0x12a);
                        if (uVar23 != 0) {
                          piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar27 + -2) == *(long *)(lVar15 + 0x18)) {
                              lVar26 = lVar26 + (long)(int)(*piVar27 +
                                                           (uint)*(ushort *)(lVar15 + 0x48)) * 0x10
                                       + 0x138;
                              goto code_r0x01e71d4c;
                            }
                            piVar27 = piVar27 + 4;
                            uVar23 = uVar23 - 1;
                          } while (uVar23 != 0);
                        }
                        lVar26 = func_0x00fac1f0(plVar1);
code_r0x01e71d4c:
                        uVar16 = *(undefined8 *)(lVar26 + 8);
                      }
                      puVar17 = (undefined8 *)func_0x00f78acc(uVar16,lVar15);
                      pcVar31 = (code *)*puVar17;
                    }
                    uVar23 = (*pcVar31)(plVar1,plVar20,uVar30,uVar21,puVar17);
                  }
                }
                else {
                  if ((*(short *)(lVar15 + 0x48) == -1) || (*(long *)(param_5 + 0x18) == 0))
                  goto code_r0x01e71bbc;
                  iVar9 = func_0x00f78a44(lVar15);
                  iVar10 = func_0x00f78ec0(lVar15);
                  if (iVar9 == 0) {
                    uVar3 = *(ushort *)(lVar15 + 0x48);
                    if (iVar10 == 0) {
                      lVar15 = *plVar20 + (ulong)uVar3 * 0x10;
                      uVar23 = (**(code **)(lVar15 + 0x138))
                                         (plVar20,uVar30,uVar21,*(undefined8 *)(lVar15 + 0x140));
                      goto code_r0x01e71bd0;
                    }
                    lVar15 = func_0x00f78a48(lVar15);
                    lVar26 = *plVar20;
                    uVar23 = (ulong)*(ushort *)(lVar26 + 0x12a);
                    if (uVar23 != 0) {
                      piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar27 + -2) == lVar15) {
                          puVar17 = (undefined8 *)
                                    (lVar26 + (long)(int)(*piVar27 + (uint)uVar3) * 0x10 + 0x138);
                          goto code_r0x01e71d00;
                        }
                        piVar27 = piVar27 + 4;
                        uVar23 = uVar23 - 1;
                      } while (uVar23 != 0);
                    }
                    puVar17 = (undefined8 *)func_0x00fac1f0(plVar20,lVar15,(ulong)uVar3);
code_r0x01e71d00:
                    pcVar31 = (code *)*puVar17;
                    puVar17 = (undefined8 *)puVar17[1];
                  }
                  else {
                    if (iVar10 == 0) {
                      uVar16 = *(undefined8 *)
                                (*plVar20 + (ulong)*(ushort *)(lVar15 + 0x48) * 0x10 + 0x140);
                    }
                    else {
                      lVar26 = *plVar20;
                      uVar23 = (ulong)*(ushort *)(lVar26 + 0x12a);
                      if (uVar23 != 0) {
                        piVar27 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar27 + -2) == *(long *)(lVar15 + 0x18)) {
                            lVar26 = lVar26 + (long)(int)(*piVar27 +
                                                         (uint)*(ushort *)(lVar15 + 0x48)) * 0x10 +
                                     0x138;
                            goto code_r0x01e71cd8;
                          }
                          piVar27 = piVar27 + 4;
                          uVar23 = uVar23 - 1;
                        } while (uVar23 != 0);
                      }
                      lVar26 = func_0x00fac1f0(plVar20);
code_r0x01e71cd8:
                      uVar16 = *(undefined8 *)(lVar26 + 8);
                    }
                    puVar17 = (undefined8 *)func_0x00f78acc(uVar16,lVar15);
                    pcVar31 = (code *)*puVar17;
                  }
                  uVar23 = (*pcVar31)(plVar20,uVar30,uVar21,puVar17);
                }
              }
              else {
                if (bVar7) goto code_r0x01e71bbc;
code_r0x01e71aac:
                uVar23 = (*pcVar31)(plVar1,plVar20,uVar30,uVar21,lVar15);
              }
code_r0x01e71bd0:
              lVar11 = lVar11 + 1;
              if (lVar11 == lVar29) {
                return uVar23;
              }
            } while( true );
          }
        }
      }
      pcVar31 = (code *)&Core_UI2_UIManager__SetScreenVisible;
      auVar34 = func_0x00f78af4();
      param_4 = uVar21;
      param_6 = uVar30;
      param_7 = lVar11;
    }
    uVar21 = auVar34._0_8_;
    *(ulong *)((long)ppuVar6 + -0x30) = param_5;
    *(long *)((long)ppuVar6 + -0x28) = param_7;
    *(ulong *)((long)ppuVar6 + -0x20) = param_6;
    *(ulong *)((long)ppuVar6 + -0x18) = param_4;
    *(undefined1 ***)((long)ppuVar6 + -0x10) = &puStack_80;
    *(code **)((long)ppuVar6 + -8) = pcVar31;
    uVar30 = uVar21;
    if ((bRam0000000003ebc652 & 1) == 0) {
      uVar30 = func_0x00f78a20(0x3d3ddc8);
      bRam0000000003ebc652 = 1;
    }
    lVar11 = *(long *)(uVar21 + 0x70);
    if (lVar11 != 0) {
      uVar28 = auVar34._8_4_;
      if (*(uint *)(lVar11 + 0x18) <= uVar28) {
        uVar30 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      if (*(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28) == 0) {
        return uVar30;
      }
      lVar11 = *(long *)(uVar21 + 0x70);
      if (lVar11 != 0) {
        if (*(uint *)(lVar11 + 0x18) <= uVar28) {
          /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar28 * 0x28 + 0x28);
        if ((lVar11 != 0) && (plVar20 = *(long **)(lVar11 + 0x28), plVar20 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x02f88734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar30 = (**(code **)(*plVar20 + 0x178))(plVar20,uVar23,*(undefined8 *)(*plVar20 + 0x180))
          ;
          return uVar30;
        }
      }
    }
    auVar35 = func_0x00f78af4();
    uVar16 = auVar35._0_8_;
    *(long *)((long)ppuVar6 + -0x50) = auVar34._8_8_;
    *(ulong *)((long)ppuVar6 + -0x48) = uVar23;
    *(undefined1 **)((long)ppuVar6 + -0x40) = (undefined1 *)((long)ppuVar6 + -0x10);
    *(undefined **)((long)ppuVar6 + -0x38) = &Core_UI2_UIManager__RequestScreenAssetsAndPin;
    *(undefined8 *)((long)ppuVar6 + -0x68) = 0;
    *(undefined8 *)((long)ppuVar6 + -0x70) = 0;
    *(undefined8 *)((long)ppuVar6 + -0x58) = 0;
    *(undefined8 *)((long)ppuVar6 + -0x60) = 0;
    uVar30 = /*Core.UI2.UIManager$$TryGetScreenInfo*/ func_0x02f887a8(uVar16,auVar35._8_8_,(undefined1 *)((long)ppuVar6 + -0x70));
    if ((int)uVar30 != 0) {
      /*Core.UI2.UIManager$$RequestAsset*/ func_0x02f8894c(uVar16,*(undefined8 *)((long)ppuVar6 + -0x60),
                      *(undefined8 *)((long)ppuVar6 + -0x58));
      *(undefined8 *)((long)ppuVar6 + -0x88) = *(undefined8 *)((long)ppuVar6 + -0x68);
      *(undefined8 *)((long)ppuVar6 + -0x90) = *(undefined8 *)((long)ppuVar6 + -0x70);
      *(undefined8 *)((long)ppuVar6 + -0x78) = *(undefined8 *)((long)ppuVar6 + -0x58);
      *(undefined8 *)((long)ppuVar6 + -0x80) = *(undefined8 *)((long)ppuVar6 + -0x60);
      uVar30 = /*Core.UI2.UIManager$$SetPinnedAssetRequest*/ func_0x02f88aa8(uVar16,(undefined1 *)((long)ppuVar6 + -0x90),1);
    }
    return uVar30;
  }
  uVar18 = func_0x00f78af4();
  uStack_d8 = 0x3eb4000;
  uVar23 = 0x3eb4000;
  uVar21 = uVar18;
  if ((bRam0000000003eb49f0 & 1) == 0) {
    func_0x00f78a20(0x3d32b48);
    func_0x00f78a20(0x3d32b50);
    func_0x00f78a20(0x3d32b58);
    func_0x00f78a20(0x3d3b4c0);
    func_0x00f78a20(0x3d3b090);
    func_0x00f78a20(0x3d3b098);
    uVar21 = func_0x00f78a20(0x3d5c478);
    bRam0000000003eb49f0 = 1;
  }
  uStack_120 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  aiStack_1b0[2] = 0;
  lVar11 = *(long *)(uVar18 + 0xa0);
  if (lVar11 != 0) {
    unaff_x28 = (long *)0x0;
    unaff_x25 = (long *)0x0;
    uStack_23c = 0;
    uVar23 = 0;
    uVar16 = 0x3d32b50;
    unaff_x27 = 0x18;
    unaff_x26 = aiStack_1b0;
    do {
      uVar28 = (uint)uVar23;
      if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar28) {
        if ((uStack_23c & 1) != 0) {
          uVar21 = Atlas_UI_Screens_MultiplayerLobbyScreen__ClearLobby(uVar18,1);
        }
        return uVar21;
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar28) {
        /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
      }
      unaff_x24 = 0x3d32b50;
      if (*(long *)(uVar18 + 0x70) == 0) break;
      uVar2 = *(uint *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar28 * 0x18 + 0x20);
      uVar30 = (ulong)uVar2;
      uVar21 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(*(long *)(uVar18 + 0x70) + 0x40,0);
      if ((uint)uVar21 != uVar2) {
        if (((*(long *)(uVar18 + 0x70) == 0) ||
            (lVar29 = *(long *)(*(long *)(uVar18 + 0x70) + 0x28), unaff_x24 = uVar16, lVar29 == 0))
           || (lVar29 = *(long *)(lVar29 + 0xd0), lVar29 == 0)) break;
        /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_238,lVar29,uRam0000000003d3b4c0);
        uStack_138 = uStack_1d0;
        uStack_140 = uStack_1d8;
        uStack_128 = uStack_1c0;
        uStack_130 = uStack_1c8;
        uStack_120 = uStack_1b8;
        uStack_178 = uStack_210;
        uStack_180 = uStack_218;
        uStack_168 = uStack_200;
        uStack_170 = uStack_208;
        uStack_158 = uStack_1f0;
        uStack_160 = uStack_1f8;
        uStack_148 = uStack_1e0;
        uStack_150 = uStack_1e8;
        uStack_198 = uStack_230;
        uStack_1a0 = uStack_238;
        uStack_188 = uStack_220;
        uStack_190 = uStack_228;
        do {
          uVar8 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_1a0,uRam0000000003d32b50);
        } while (uVar8 != 0 && uStack_178._4_4_ != uVar2);
        unaff_x26[(int)unaff_x25] = 0x7a;
        iVar9 = aiStack_1b0[2];
        uVar2 = aiStack_1b0[2] + 1;
        aiStack_1b0[2] = uVar2;
        uVar21 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_1a0,uRam0000000003d32b48);
        unaff_x25 = (long *)(ulong)uVar2;
        if ((uVar2 != 0) && (unaff_x26[iVar9] == 0x7a)) {
          unaff_x25 = (long *)(ulong)(uint)iVar9;
          aiStack_1b0[2] = iVar9;
        }
        unaff_x28 = unaff_x25;
        if ((uVar8 & 1) == 0) {
          uVar21 = /*Core.Containers.ReorderListExtension$$ReorderRemoveAt<LobbyPlayer>*/ func_0x018db2a4(*(undefined8 *)(uVar18 + 0xa0),uVar23,uRam0000000003d5c478);
          uStack_23c = 1;
          uVar23 = (ulong)(uVar28 - 1);
        }
      }
      uVar23 = (ulong)((int)uVar23 + 1);
      lVar11 = *(long *)(uVar18 + 0xa0);
      unaff_x24 = uVar16;
    } while (lVar11 != 0);
  }
  func_0x00f78af4();
  auVar36 = __Unwind_Resume();
  uStack_514 = auVar36._8_4_;
  lVar29 = auVar36._0_8_;
  pcStack_248 = Atlas_UI_Screens_MultiplayerLobbyScreen__UpdateAllLobbyPlayers;
  lStack_2b0 = *(long *)PTR_03a5d648;
  uVar21 = 0x3eb4000;
  plStack_2a0 = unaff_x28;
  uStack_298 = unaff_x27;
  piStack_290 = unaff_x26;
  plStack_288 = unaff_x25;
  uStack_280 = unaff_x24;
  uStack_278 = uVar30;
  puStack_270 = &uStack_1a0;
  lStack_268 = lVar11;
  uStack_260 = uVar23;
  uStack_258 = uVar18;
  puStack_250 = &stack0xffffffffffffff50;
  if ((bRam0000000003eb49ef & 1) == 0) {
    func_0x00f78a20(0x3d32b48);
    func_0x00f78a20(0x3d32b50);
    func_0x00f78a20(0x3d32b58);
    func_0x00f78a20(0x3d3b4c0);
    bRam0000000003eb49ef = 1;
  }
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  uStack_478 = 0;
  uStack_480 = 0;
  if (*(long *)(lVar29 + 0x88) != 0) {
    uVar16 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454();
    if ((*(long *)(lVar29 + 0x78) != 0) &&
       (plVar20 = *(long **)(*(long *)(lVar29 + 0x78) + 0x30), plVar20 != (long *)0x0)) {
      uVar30 = (**(code **)(*plVar20 + 0x658))(plVar20,*(undefined8 *)(*plVar20 + 0x660));
      if ((*(long *)(lVar29 + 0x78) != 0) &&
         (plVar20 = *(long **)(*(long *)(lVar29 + 0x78) + 0x30), plVar20 != (long *)0x0)) {
        (**(code **)(*plVar20 + 0x348))(plVar20,*(undefined8 *)(*plVar20 + 0x350));
        if ((int)uVar16 == 0) {
          uVar23 = 0;
        }
        else {
          if ((*(long *)(lVar29 + 0x78) == 0) ||
             (plVar20 = *(long **)(*(long *)(lVar29 + 0x78) + 0x30), plVar20 == (long *)0x0))
          goto LAB_0149a53c;
          uVar23 = (**(code **)(*plVar20 + 0x858))(plVar20,*(undefined8 *)(*plVar20 + 0x860));
        }
        if (*(long *)(lVar29 + 0x70) != 0) {
          uVar12 = /*Core.Services.Player$$get_SyncId*/ func_0x0167e4d8(*(long *)(lVar29 + 0x70) + 0x40,0);
          if ((*(long *)(lVar29 + 0x70) != 0) &&
             (lVar11 = *(long *)(*(long *)(lVar29 + 0x70) + 0x28), lVar11 != 0)) {
            uVar22 = *(undefined8 *)(lVar11 + 0xf8);
            uStack_4a8 = *(undefined8 *)(lVar11 + 0x130);
            uStack_4b0 = *(undefined8 *)(lVar11 + 0x128);
            uStack_498 = *(undefined8 *)(lVar11 + 0x140);
            uStack_4a0 = *(undefined8 *)(lVar11 + 0x138);
            uStack_4c8 = *(undefined8 *)(lVar11 + 0x110);
            uStack_4d0 = *(undefined8 *)(lVar11 + 0x108);
            uStack_4b8 = *(undefined8 *)(lVar11 + 0x120);
            uStack_4c0 = *(undefined8 *)(lVar11 + 0x118);
            uStack_2c0 = *(undefined8 *)(lVar11 + 0x148);
            uStack_328 = *(undefined8 *)(lVar11 + 0xe0);
            uStack_330 = *(undefined8 *)(lVar11 + 0xd8);
            uStack_318 = *(undefined8 *)(lVar11 + 0xf0);
            uStack_320 = *(undefined8 *)(lVar11 + 0xe8);
            uStack_308 = *(ulong *)(lVar11 + 0x100);
            uStack_310 = *(undefined8 *)(lVar11 + 0xf8);
            puVar17 = &uStack_4d0;
            uVar24 = 1;
            uVar25 = 0;
            uVar18 = uVar23;
            uStack_300 = uStack_4d0;
            uStack_2f8 = uStack_4c8;
            uStack_2f0 = uStack_4c0;
            uStack_2e8 = uStack_4b8;
            uStack_2e0 = uStack_4b0;
            uStack_2d8 = uStack_4a8;
            uStack_2d0 = uStack_4a0;
            uStack_2c8 = uStack_498;
            Atlas_UI_Screens_MultiplayerLobbyScreen__AddOrUpdateLobbyPlayer(lVar29,uVar12);
            if ((*(long *)(lVar29 + 0x70) != 0) &&
               ((lVar11 = *(long *)(*(long *)(lVar29 + 0x70) + 0x28), lVar11 != 0 &&
                (lVar11 = *(long *)(lVar11 + 0xd0), lVar11 != 0)))) {
              /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_3c0,lVar11,uRam0000000003d3b4c0);
              uStack_3e8 = uStack_358;
              uStack_3f0 = uStack_360;
              uStack_3d8 = uStack_348;
              uStack_3e0 = uStack_350;
              uStack_3d0 = uStack_340;
              uStack_428 = uStack_398;
              uStack_430 = uStack_3a0;
              uStack_418 = uStack_388;
              uStack_420 = uStack_390;
              uStack_408 = uStack_378;
              uStack_410 = uStack_380;
              uStack_3f8 = uStack_368;
              uStack_400 = uStack_370;
              uStack_448 = uStack_3b8;
              uStack_450 = uStack_3c0;
              uStack_438 = uStack_3a8;
              uStack_440 = uStack_3b0;
              while (uVar13 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_450,uRam0000000003d32b50), uVar12 = uStack_420
                    , (uVar13 & 1) != 0) {
                uVar23 = uStack_428 >> 0x20;
                uStack_488 = uStack_408;
                uStack_490 = uStack_410;
                uStack_478 = uStack_3f8;
                uStack_480 = uStack_400;
                uStack_468 = uStack_3e8;
                uStack_470 = uStack_3f0;
                uStack_458 = uStack_3d8;
                uStack_460 = uStack_3e0;
                if ((int)uVar16 == 0) {
                  uVar18 = 0;
code_r0x0149a4ac:
                  uVar28 = 1;
                }
                else {
                  if (*(long *)(lVar29 + 0x78) == 0) {
                    func_0x00f78af4(uStack_430);
                    goto code_r0x0149a544;
                  }
                  cVar4 = (char)uStack_3d0;
                  unaff_x26 = (int *)(uStack_3d0 & 0xff);
                  bVar5 = uStack_3d0._2_1_;
                  uVar21 = (ulong)uStack_3d0._2_1_;
                  unaff_x25 = *(long **)(*(long *)(lVar29 + 0x78) + 0x30);
                  /*Unity.Collections.FixedString64Bytes$$op_Implicit*/ func_0x02fd8c8c(&uStack_3c0,uStack_430,0);
                  uStack_328 = uStack_3b8;
                  uStack_330 = uStack_3c0;
                  uStack_318 = uStack_3a8;
                  uStack_320 = uStack_3b0;
                  uStack_308 = uStack_398;
                  uStack_310 = uStack_3a0;
                  uStack_2f8 = uStack_388;
                  uStack_300 = uStack_390;
                  if (unaff_x25 == (long *)0x0) {
                    func_0x00f78af4();
                    goto code_r0x0149a544;
                  }
                  uVar18 = (**(code **)(*unaff_x25 + 0x868))
                                     (unaff_x25,&uStack_3c0,*(undefined8 *)(*unaff_x25 + 0x870));
                  if (((uVar30 & 1) != 0) || (*(char *)(lVar29 + 0xb1) != '\0'))
                  goto code_r0x0149a4ac;
                  if (*(long *)(lVar29 + 0x88) == 0) goto code_r0x0149a540;
                  uVar28 = (bVar5 == 0 && cVar4 != '\0') | uStack_514;
                }
                uStack_508 = uStack_488;
                uStack_510 = uStack_490;
                uStack_4f8 = uStack_478;
                uStack_500 = uStack_480;
                uStack_4e8 = uStack_468;
                uStack_4f0 = uStack_470;
                uStack_4d8 = uStack_458;
                uStack_4e0 = uStack_460;
                uVar25 = (ulong)(uVar28 ^ 1);
                puVar17 = &uStack_510;
                uVar24 = 0;
                uVar22 = uVar12;
                Atlas_UI_Screens_MultiplayerLobbyScreen__AddOrUpdateLobbyPlayer(lVar29,uVar23);
                unaff_x24 = uVar12;
              }
              uVar13 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_450,uRam0000000003d32b48);
              do {
                if (*(long *)PTR_03a5d648 == lStack_2b0) {
                  return uVar13;
                }
                ___stack_chk_fail();
                if (extraout_w1 != 1) goto code_r0x0149a59c;
                puVar14 = (ulong *)___cxa_begin_catch();
                uVar21 = *puVar14;
                ___cxa_end_catch();
                uVar13 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_450,uRam0000000003d32b48);
              } while (uVar21 == 0);
              func_0x00f78ac0(uVar21,0);
code_r0x0149a59c:
              auVar34 = __Unwind_Resume();
              uVar19 = auVar34._8_8_;
              lVar11 = auVar34._0_8_;
              uStack_578 = 0x3d32b50;
              pcStack_528 = Atlas_UI_Screens_MultiplayerLobbyScreen__AddOrUpdateLobbyPlayer;
              uVar13 = 0x3eb4000;
              puStack_580 = &uStack_410;
              piStack_570 = unaff_x26;
              plStack_568 = unaff_x25;
              uStack_560 = unaff_x24;
              uStack_558 = uVar23;
              uStack_550 = uVar30;
              uStack_548 = uVar16;
              lStack_540 = lVar29;
              uStack_538 = uVar21;
              ppuStack_530 = &puStack_250;
              if ((bRam0000000003eb49ed & 1) == 0) {
                func_0x00f78a20(0x3d33108);
                func_0x00f78a20(0x3d33110);
                func_0x00f78a20(0x3d33118);
                func_0x00f78a20(0x3d3b078);
                func_0x00f78a20(0x3d3c6c0);
                func_0x00f78a20(0x3d3c6d0);
                func_0x00f78a20(0x3d3b090);
                func_0x00f78a20(0x3d3b098);
                func_0x00f78a20(0x3d3b0a0);
                func_0x00f78a20(0x3d411c0);
                bRam0000000003eb49ed = 1;
              }
              uStack_5c0 = 0;
              uStack_5b8 = 0;
              uStack_5b0 = 0;
              uVar30 = Atlas_UI_Screens_MultiplayerLobbyScreen__GetLobbyPlayerIndex(lVar11,uVar19);
              lVar29 = *(long *)(lVar11 + 0xa0);
              if ((int)(uint)uVar30 < 0) {
                if (lVar29 == 0) goto LAB_0149a8d4;
                uStack_5a8 = uVar19 & 0xffffffff;
                uStack_597 = 0;
                uStack_593 = 0;
                uStack_5a0 = uVar22;
                uStack_598 = (char)uVar24;
                uVar16 = /*System.Collections.Generic.List<LobbyPlayer>$$Add*/ func_0x023f47d8(lVar29,&uStack_5a8,uRam0000000003d3b078);
                if (*(long *)(lVar11 + 0xa0) == 0) goto LAB_0149a8d4;
                uVar30 = (ulong)(*(int *)(*(long *)(lVar11 + 0xa0) + 0x18) - 1);
              }
              else {
                if (lVar29 == 0) goto LAB_0149a8d4;
                lVar15 = lVar29;
                if (*(uint *)(lVar29 + 0x18) <= (uint)uVar30) {
                  /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                  lVar15 = *(long *)(lVar11 + 0xa0);
                }
                uVar13 = uVar30;
                if (lVar15 == 0) goto LAB_0149a8d4;
                lVar29 = *(long *)(lVar29 + 0x10) + (uVar30 & 0xffffffff) * 0x18;
                uStack_5a8 = *(ulong *)(lVar29 + 0x20);
                uStack_5c4 = (undefined3)((uint)*(undefined4 *)(lVar29 + 0x34) >> 8);
                uStack_5c8 = *(undefined4 *)(lVar29 + 0x31);
                uStack_593 = uStack_5c4;
                uStack_5a0 = uVar22;
                uStack_598 = (char)uVar24;
                uStack_597 = uStack_5c8;
                uVar16 = /*System.Collections.Generic.List<LobbyPlayer>$$set_Item*/ func_0x023f4450(lVar15,uVar30,&uStack_5a8,uRam0000000003d3b0a0);
              }
              uStack_608 = puVar17[1];
              uStack_610 = *puVar17;
              uStack_5f8 = puVar17[3];
              uStack_600 = puVar17[2];
              uStack_5e8 = puVar17[5];
              uStack_5f0 = puVar17[4];
              uStack_5d8 = puVar17[7];
              uStack_5e0 = puVar17[6];
              iVar9 = Atlas_UI_Screens_MultiplayerLobbyScreen__IsLoadoutValid(uVar16,&uStack_610);
              uVar13 = uVar30;
              if (iVar9 != 0) {
                if (*(long *)(lVar11 + 0xc0) == 0) goto LAB_0149a8d4;
                uVar21 = Atlas_FrontEnd_FrontEndScene__GetKartVisible
                                   (*(long *)(lVar11 + 0xc0),uVar30,0);
                if ((uVar21 & 1) == 0) {
                  if (*(long *)(lVar11 + 0xc0) == 0) goto LAB_0149a8d4;
                  Atlas_FrontEnd_FrontEndScene__ResetKart(*(long *)(lVar11 + 0xc0),uVar30,0);
                }
                if (*(long *)(lVar11 + 0xc0) == 0) goto LAB_0149a8d4;
                uStack_648 = puVar17[1];
                uStack_650 = *puVar17;
                uStack_638 = puVar17[3];
                uStack_640 = puVar17[2];
                uStack_628 = puVar17[5];
                uStack_630 = puVar17[4];
                uStack_618 = puVar17[7];
                uStack_620 = puVar17[6];
                Atlas_FrontEnd_FrontEndScene__SetVisibleAndRequestLoadout
                          (*(long *)(lVar11 + 0xc0),uVar30,&uStack_650,0);
                if (*(long *)(lVar11 + 0xa8) == 0) goto LAB_0149a8d4;
                /*System.Collections.Generic.List<uint>$$GetEnumerator*/ func_0x0247f2dc(&uStack_5c0,*(long *)(lVar11 + 0xa8),uRam0000000003d3c6d0);
                do {
                  uVar30 = /*System.Collections.Generic.List.Enumerator<uint>$$MoveNext*/ func_0x01f759ec(&uStack_5c0,uRam0000000003d33110);
                  if ((uVar30 & 1) == 0) {
                    /*System.Collections.Generic.List.Enumerator<uint>$$Dispose*/ func_0x01f759e8(&uStack_5c0,uRam0000000003d33108);
                    goto code_r0x0149a828;
                  }
                } while ((int)uStack_5b0 != auVar34._8_4_);
                /*System.Collections.Generic.List.Enumerator<uint>$$Dispose*/ func_0x01f759e8(&uStack_5c0,uRam0000000003d33108);
                if ((uVar30 & 1) == 0) goto code_r0x0149a828;
              }
              do {
                lVar29 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar11,uRam0000000003d411c0);
                if ((lVar29 != 0) && (lVar29 = *(long *)(lVar29 + 0xb0), lVar29 != 0)) {
                  if (*(uint *)(lVar29 + 0x18) <= (uint)uVar13) goto code_r0x0149a8d8;
                  lVar29 = *(long *)(lVar29 + (long)(int)(uint)uVar13 * 8 + 0x20);
                  if (lVar29 != 0) {
                    uVar30 = /*Atlas.UI.NamePlateBehaviour$$Set*/ func_0x0149aa20(lVar29,uVar22,0,uVar18,uVar25);
                    return uVar30;
                  }
                }
LAB_0149a8d4:
                do {
                  do {
                    func_0x00f78af4();
code_r0x0149a8d8:
                    uVar16 = func_0x00f78b24();
                    auVar34 = func_0x00f78ac0(uVar16,0);
                    if (auVar34._8_4_ != 1) {
                      auVar36 = __Unwind_Resume();
                      if ((bRam0000000003eb49f2 & 1) == 0) {
                        func_0x00f78a20(0x3d3b090);
                        func_0x00f78a20(0x3d3b098);
                        bRam0000000003eb49f2 = 1;
                      }
                      lVar11 = *(long *)(auVar36._0_8_ + 0xa0);
                      if (lVar11 != 0) {
                        iVar9 = *(int *)(lVar11 + 0x18);
                        if (iVar9 < 1) {
                          return 0xffffffff;
                        }
                        uVar30 = 0;
                        do {
                          uVar28 = (uint)uVar30;
                          if (*(uint *)(lVar11 + 0x18) <= uVar28) {
                            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                          }
                          if (*(int *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar28 * 0x18 + 0x20)
                              == auVar36._8_4_) {
                            return uVar30;
                          }
                          if (iVar9 - 1U == uVar28) {
                            return 0xffffffff;
                          }
                          lVar11 = *(long *)(auVar36._0_8_ + 0xa0);
                          uVar30 = (ulong)(uVar28 + 1);
                        } while (lVar11 != 0);
                      }
                      func_0x00f78af4();
                      return 0xffffffff;
                    }
                    func_0x032fef00(auVar34._0_8_,auVar34._8_8_,&uStack_5c0);
code_r0x0149a828:
                  } while ((*(long *)(lVar11 + 0xc0) == 0) ||
                          (lVar29 = Atlas_FrontEnd_FrontEndScene__GetKartFEAnimator
                                              (*(long *)(lVar11 + 0xc0),uVar13,0), lVar29 == 0));
                  Atlas_Gameplay_Kart_KartFEAnimator__TriggerFELobbyScreen(lVar29,uVar24,0);
                } while (*(long *)(lVar11 + 0xa8) == 0);
                /*System.Collections.Generic.List<uint>$$Add*/ func_0x0247e820(*(long *)(lVar11 + 0xa8),uVar19,uRam0000000003d3c6c0);
              } while( true );
            }
          }
        }
      }
    }
  }
LAB_0149a53c:
  func_0x00f78af4();
code_r0x0149a540:
  func_0x00f78af4();
code_r0x0149a544:
                    /* WARNING: Does not return */
  pcVar31 = (code *)SoftwareBreakpoint(1,0x149a548);
  (*pcVar31)();
}



// ============================================================
// RVA: 0x149aa20 | Atlas.UI.NamePlateBehaviour.Set
// ============================================================

/* WARNING: Possible PIC construction at 0x0167e558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167e570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0167e55c) */
/* WARNING: Removing unreachable block (ram,0x0167e574) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Atlas_UI_NamePlateBehaviour__Set
                (undefined *param_1,undefined8 param_2,undefined8 param_3,undefined1 **param_4,
                undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 ***pppuVar6;
  undefined1 *****pppppuVar7;
  undefined8 *puVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  int *piVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  uint uVar23;
  undefined *puVar24;
  undefined1 **ppuVar25;
  long lVar26;
  int iVar27;
  undefined1 *puVar28;
  undefined1 **unaff_x22;
  undefined1 **ppuVar29;
  ulong uVar30;
  undefined1 ****ppppuVar31;
  undefined *puVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  ulong auStack_1c0 [4];
  undefined1 auStack_1a0 [12];
  int iStack_194;
  undefined1 **ppuStack_190;
  undefined *puStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined1 ****ppppuStack_170;
  undefined *puStack_168;
  undefined1 *puStack_130;
  int *piStack_128;
  undefined1 ***pppuStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  int *piStack_f8;
  undefined1 ****ppppuStack_f0;
  undefined *puStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  int *piStack_c8;
  undefined1 ***pppuStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  long lStack_a8;
  undefined1 **ppuStack_a0;
  undefined *puStack_98;
  undefined4 uStack_8c;
  undefined *puStack_88;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  ppuVar25 = param_4;
  if (*(long *)(param_1 + 0x20) != 0) {
    ppuVar25 = (undefined1 **)0x0;
    /*TMPro.TMP_Text$$SetText*/ func_0x031b3d44(*(long *)(param_1 + 0x20),param_2,1);
    if (*(long *)(param_1 + 0x28) != 0) {
      /*UnityEngine.Behaviour$$set_enabled*/ func_0x0321a930(*(long *)(param_1 + 0x28),1,0);
      param_1[0x44] = param_5;
      lVar15 = *(long *)(param_1 + 0x38);
      if (lVar15 != 0) {
        if (pcRam0000000003ebf4c0 == (code *)0x0) {
          pcRam0000000003ebf4c0 =
               (code *)func_0x00f789d4("UnityEngine.GameObject::SetActive(System.Boolean)");
        }
                    /* WARNING: Could not recover jumptable at 0x0322ef68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar22 = (*pcRam0000000003ebf4c0)(lVar15,param_4);
        return uVar22;
      }
    }
  }
  auVar33 = func_0x00f78af4();
  pcStack_38 = Atlas_UI_Screens_MultiplayerLobbyScreenBehaviour__SetStatusText;
  plVar16 = *(long **)(auVar33._0_8_ + 0x70);
  puStack_40 = &stack0xfffffffffffffff0;
  if (plVar16 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0149aaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar22 = (**(code **)(*plVar16 + 0x558))
                       (plVar16,auVar33._8_8_,*(undefined8 *)(*plVar16 + 0x560));
    return uVar22;
  }
  lVar15 = func_0x00f78af4();
  pcStack_48 = Atlas_UI_Screens_MultiplayerLobbyScreen__SetPlayerCountText;
  puVar28 = (undefined1 *)0x3eb4000;
  puStack_50 = (undefined1 *)&puStack_40;
  if ((bRam0000000003eb49f9 & 1) == 0) {
    puStack_50 = (undefined1 *)&puStack_40;
    func_0x00f78a20(0x3d2c818);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d3b090);
    func_0x00f78a20(0x3d411c0);
    func_0x00f78a20(0x3d70ed0);
    bRam0000000003eb49f9 = 1;
  }
  puStack_88 = (undefined *)0x0;
  if ((*(long *)(lVar15 + 0xa0) != 0) && (*(long *)(lVar15 + 0x80) != 0)) {
    uVar12 = *(undefined4 *)(*(long *)(lVar15 + 0xa0) + 0x18);
    ppuVar25 = (undefined1 **)0x0;
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(lVar15 + 0x80),/*STR('PLAY_FRIENDS_ROOM_PLAYERCOUNT')*/ uRam0000000003d70ed0,&puStack_88);
    puVar28 = (undefined1 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar15,uRam0000000003d411c0);
    param_1 = puStack_88;
    uStack_8c = uVar12;
    uVar17 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_8c);
    uVar17 = /*System.String$$Format*/ func_0x029bc688(param_1,uVar17,0);
    unaff_x22 = (undefined1 **)0x3d411c0;
    if ((puVar28 != (undefined1 *)0x0) &&
       (plVar16 = *(long **)(puVar28 + 0x70), plVar16 != (long *)0x0)) {
      (**(code **)(*plVar16 + 0x558))(plVar16,uVar17,*(undefined8 *)(*plVar16 + 0x560));
      lVar18 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar15,uRam0000000003d411c0);
      unaff_x22 = (undefined1 **)0x3d411c0;
      if (lVar18 != 0) {
        uVar22 = Atlas_UI_Screens_AtlasScreen_ArcadeModeSelectScreenBehaviour__ArcadeModeSelectScreen_TransitionData___ReLayoutLayoutAndContentSizeFitters
                           (lVar15,*(undefined8 *)(lVar18 + 0x68),uRam0000000003d2c818);
        return uVar22;
      }
    }
  }
  lVar18 = func_0x00f78af4();
  piVar19 = (int *)(lVar18 + 0x40);
  puStack_98 = &Atlas_Networking_Network__get_LocalPlayerSyncId;
  puVar24 = (undefined *)0x0;
  puStack_b0 = puVar28;
  lStack_a8 = lVar15;
  ppuStack_a0 = &puStack_50;
  uVar22 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar19,8);
  if ((int)uVar22 == 0) {
    return uVar22;
  }
  if (*(long *)(lVar18 + 0x48) != 0) {
    uVar22 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar18 + 0x48),*piVar19 + (int)uVar22,4);
    return uVar22;
  }
  auVar33 = func_0x00f78af4();
  lVar15 = auVar33._0_8_;
  pppuVar6 = &ppuStack_e0;
  puStack_b8 = &Core_Services_Player__CreatePlayer;
  ppppuVar31 = &pppuStack_c0;
  ppuStack_e0 = unaff_x22;
  puStack_d8 = param_1;
  puStack_d0 = puVar28;
  piStack_c8 = piVar19;
  pppuStack_c0 = &ppuStack_a0;
  if (lVar15 != 0) {
    puVar32 = &UNK_0167e55c;
    ppuVar29 = ppuVar25;
code_r0x016ce2a4:
    piVar19 = auVar33._0_8_;
    uVar17 = 0;
    *(undefined1 ***)((long)pppuVar6 + -0x30) = ppuVar29;
    *(undefined **)((long)pppuVar6 + -0x28) = puVar24;
    *(long *)((long)pppuVar6 + -0x20) = auVar33._8_8_;
    *(long *)((long)pppuVar6 + -0x18) = lVar15;
    *(undefined1 *****)((long)pppuVar6 + -0x10) = ppppuVar31;
    *(undefined **)((long)pppuVar6 + -8) = puVar32;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar19);
    if (*(long *)(piVar19 + 10) != 0) {
      if (*(int *)(*(long *)(piVar19 + 10) + 0x18) < 3) {
        uVar17 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
        *(undefined8 *)(piVar19 + 10) = uVar17;
      }
      piVar19[0xc] = 3;
      uVar22 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar19);
      piVar19[0xd] = (int)uVar22;
      return uVar22;
    }
    auVar34 = func_0x00f78af4();
    pppppuVar7 = (undefined1 *****)((long)pppuVar6 + -0x30);
    puVar28 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
    param_1 = (undefined *)0x3eb5000;
    unaff_x22 = ppuVar29;
    ppppuVar31 = (undefined1 ****)((long)pppuVar6 + -0x10);
    puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar33 = func_0x00f78af4();
  uVar22 = auVar33._0_8_;
  ppppuStack_f0 = ppppuVar31;
  if (uVar22 != 0) {
    ppuVar25 = (undefined1 **)0x0;
    puStack_e8 = &Core_Services_Player__AddSyncId;
    if ((auVar33._8_4_ == 0) && (*(char *)(uVar22 + 0x48) == '\0')) {
      return uVar22;
    }
    uVar17 = 0;
    ppuStack_110 = unaff_x22;
    puStack_108 = param_1;
    puStack_100 = puVar28;
    piStack_f8 = piVar19;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar22,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar22,auVar33._8_8_);
    auVar34._8_8_ = 2;
    auVar34._0_8_ = uVar22;
    pppppuVar7 = (undefined1 *****)&ppuStack_e0;
    piVar19 = piStack_f8;
    puVar28 = puStack_100;
    param_1 = puStack_108;
    unaff_x22 = ppuStack_110;
    ppppuVar31 = ppppuStack_f0;
    puVar24 = puStack_e8;
    goto code_r0x016ce380;
  }
  pppppuVar7 = &ppppuStack_f0;
  puStack_e8 = &Core_Services_Player__AddSyncId;
  puVar24 = &Core_Services_Player__AddId;
  auVar33 = func_0x00f78af4();
  if (auVar33._0_8_ == 0) {
    pppppuVar7 = (undefined1 *****)&puStack_100;
    piStack_f8 = (int *)&Core_Services_Player__AddId;
    puVar24 = &Core_Services_Player__AddDisplayName;
    puStack_100 = (undefined1 *)&ppppuStack_f0;
    auVar33 = func_0x00f78af4();
    if (auVar33._0_8_ == 0) {
      puStack_108 = &Core_Services_Player__AddDisplayName;
      ppuStack_110 = &puStack_100;
      lVar15 = func_0x00f78af4();
      pppuVar6 = (undefined1 ***)&puStack_130;
      puStack_118 = &Core_Services_Player__EndPlayer;
      ppppuVar31 = &pppuStack_120;
      puStack_130 = puVar28;
      piStack_128 = piVar19;
      pppuStack_120 = &ppuStack_110;
      if ((bRam0000000003eb59e8 & 1) == 0) {
        pppuStack_120 = &ppuStack_110;
        func_0x00f78a20(0x3d3f1c0);
        bRam0000000003eb59e8 = 1;
      }
      if (lVar15 == 0) {
        puVar32 = &Core_Services_Player__StartPlayer;
        lVar15 = func_0x00f78af4();
        auVar33._8_8_ = 0x3eb5000;
        auVar33._0_8_ = lVar15;
        if (lVar15 == 0) {
          lVar15 = func_0x00f78af4();
          return *(ulong *)(lVar15 + 8);
        }
        lVar15 = 0;
        puVar24 = param_1;
        ppuVar29 = unaff_x22;
        goto code_r0x016ce2a4;
      }
      uVar22 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar15 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar15,0);
        uVar22 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
        param_1 = (undefined *)(ulong)*(uint *)(lVar15 + 0x30);
        uVar23 = *(uint *)(lVar15 + 0x30) - 1;
        if (-2 < (int)uVar23) {
          uVar23 = 0xffffffff;
        }
        unaff_x22 = (undefined1 **)(ulong)uVar23;
        do {
          uVar5 = (int)param_1 - 1;
          param_1 = (undefined *)(ulong)uVar5;
          iVar27 = (int)uVar22;
          if ((int)uVar5 < 0) goto code_r0x016ceb30;
          lVar18 = *(long *)(lVar15 + 0x28);
          if (lVar18 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar18 + 0x18) <= uVar5) goto code_r0x016ced88;
        } while (*(int *)(lVar18 + (ulong)uVar5 * 4 + 0x20) == 0);
        unaff_x22 = (undefined1 **)(param_1 + 8);
        do {
          ppuVar25 = unaff_x22 + -1;
          if ((undefined1 **)(ulong)*(uint *)(lVar18 + 0x18) <= ppuVar25) goto code_r0x016ced88;
          iVar13 = *(int *)(lVar18 + (long)unaff_x22 * 4);
          sVar9 = 0;
          if (iVar13 != 0) {
            sVar9 = (short)uVar22 - (short)iVar13;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)sVar9);
          lVar18 = *(long *)(lVar15 + 0x28);
          if (lVar18 == 0) goto code_r0x016ced84;
          if ((undefined1 **)(ulong)*(uint *)(lVar18 + 0x18) <= ppuVar25) goto code_r0x016ced88;
          *(undefined4 *)(lVar18 + (long)unaff_x22 * 4) = 0;
          unaff_x22 = (undefined1 **)((long)unaff_x22 + -1);
          uVar23 = uVar5;
        } while (0 < (long)ppuVar25);
code_r0x016ceb30:
        uVar12 = *(undefined4 *)(lVar15 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)(short)((short)uVar22 - (short)uVar12));
        uVar23 = uVar23 * 2 + 6;
        param_1 = (undefined *)(ulong)uVar23;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar15,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar15,(int)(short)uVar23);
        unaff_x22 = (undefined1 **)(ulong)*(uint *)(lVar15 + 0x40);
        if (0 < (int)*(uint *)(lVar15 + 0x40)) {
          uVar30 = 0;
          do {
            lVar18 = *(long *)(lVar15 + 0x18);
            if (((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) ||
               (lVar26 = *(long *)(lVar15 + 0x38), lVar26 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar26 + 0x18) <= uVar30) goto code_r0x016ced88;
            uVar5 = *(int *)(*(long *)(lVar18 + 0x10) + 0x18) - *(int *)(lVar26 + uVar30 * 4 + 0x20)
            ;
            param_1 = (undefined *)(ulong)uVar5;
            uVar23 = *(uint *)(lVar15 + 0x10);
            unaff_x22 = (undefined1 **)(ulong)uVar23;
            sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar18,param_1,2);
            if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
            sVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),unaff_x22,2);
            if (sVar9 == sVar10) {
              if (sVar9 < 3) {
code_r0x016cec64:
                param_1 = *(undefined **)(lVar15 + 0x38);
                if (param_1 == (undefined *)0x0) goto code_r0x016ced84;
                if (*(uint *)(param_1 + 0x18) <= (uint)uVar30) goto code_r0x016ced88;
                iVar13 = *(int *)(param_1 + uVar30 * 4 + 0x20);
                if (iVar13 == 0) {
                  unaff_x22 = (undefined1 **)(ulong)*(uint *)(lVar15 + 0x40);
                  goto code_r0x016cecac;
                }
                param_1 = *(undefined **)(lVar15 + 0x18);
                if ((param_1 == (undefined *)0x0) || (*(long *)(param_1 + 0x10) == 0))
                goto code_r0x016ced84;
                iVar14 = *(int *)(*(long *)(param_1 + 0x10) + 0x18) - iVar27;
                *(int *)(lVar15 + 0x10) = iVar14;
                iVar13 = iVar13 - iVar27;
                goto code_r0x016ced3c;
              }
              iVar13 = 2;
              while( true ) {
                if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
                sVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),uVar5 + iVar13,2);
                if (*(long *)(lVar15 + 0x18) == 0) goto code_r0x016ced84;
                sVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar15 + 0x18),uVar23 + iVar13,2);
                if (sVar10 != sVar11) break;
                iVar13 = iVar13 + 2;
                if (sVar9 <= iVar13) goto code_r0x016cec64;
              }
            }
            uVar30 = uVar30 + 1;
            unaff_x22 = (undefined1 **)(long)*(int *)(lVar15 + 0x40);
          } while ((long)uVar30 < (long)unaff_x22);
        }
        param_1 = *(undefined **)(lVar15 + 0x38);
        if (param_1 == (undefined *)0x0) {
code_r0x016ced84:
          func_0x00f78af4();
        }
        else {
code_r0x016cecac:
          if ((int)unaff_x22 == *(int *)(param_1 + 0x18)) {
            param_1 = (undefined *)func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
            lVar18 = *(long *)(lVar15 + 0x38);
            if (lVar18 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar18,param_1,*(undefined4 *)(lVar18 + 0x18),0);
            *(undefined **)(lVar15 + 0x38) = param_1;
            unaff_x22 = (undefined1 **)(ulong)*(uint *)(lVar15 + 0x40);
          }
          uVar23 = (uint)unaff_x22;
          *(uint *)(lVar15 + 0x40) = uVar23 + 1;
          uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
          if (param_1 == (undefined *)0x0) goto code_r0x016ced84;
          if (uVar23 < *(uint *)(param_1 + 0x18)) {
            *(undefined4 *)(param_1 + (long)(int)uVar23 * 4 + 0x20) = uVar12;
            param_1 = *(undefined **)(lVar15 + 0x18);
            if ((param_1 != (undefined *)0x0) && (*(long *)(param_1 + 0x10) != 0)) {
              iVar14 = *(int *)(*(long *)(param_1 + 0x10) + 0x18);
              iVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar15);
              iVar14 = iVar14 - iVar27;
              iVar13 = iVar13 - iVar27;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(param_1,iVar14,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(param_1,iVar14,4,(long)iVar13);
              *(undefined4 *)(lVar15 + 0x30) = 0xffffffff;
              return uVar22;
            }
            goto code_r0x016ced84;
          }
        }
code_r0x016ced88:
        uVar17 = func_0x00f78b24();
        func_0x00f78ac0(uVar17,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar17 = func_0x00f78aec();
      uVar20 = func_0x00f78a24(0x3d6cea8);
      iVar27 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar17,uVar20);
      uVar20 = func_0x00f78a24(0x3d56a30);
      auVar35 = func_0x00f78ac0(uVar17,uVar20);
      puStack_168 = &FlatBuffers_FlatBufferBuilder__Required;
      pppppuVar7 = &ppppuStack_170;
      lVar15 = *(long *)(auVar35._0_8_ + 0x18);
      iStack_194 = iVar27;
      ppuStack_190 = unaff_x22;
      puStack_188 = param_1;
      uStack_180 = uVar22;
      uStack_178 = uVar17;
      ppppuStack_170 = &pppuStack_120;
      if ((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) {
        iVar13 = *(int *)(*(long *)(lVar15 + 0x10) + 0x18) - auVar35._8_4_;
        iVar14 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,iVar13,4);
        lVar15 = *(long *)(auVar35._0_8_ + 0x18);
        if (lVar15 != 0) {
          uVar22 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar15,(iVar13 - iVar14) + iVar27,2);
          if ((uVar22 & 0xffff) != 0) {
            return uVar22;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar17 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_194,0);
      uVar20 = func_0x00f78a24(0x3d6ce88);
      uVar21 = func_0x00f78a24(0x3d66338);
      lVar15 = /*System.String$$Concat*/ func_0x029be39c(uVar20,uVar17,uVar21,0);
      func_0x00f78a24(0x3d22a38);
      uVar22 = func_0x00f78aec();
      uVar20 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar22,lVar15);
      uVar17 = func_0x00f78a24(0x3d56a50);
      puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar33 = func_0x00f78ac0(uVar22,uVar17);
      puVar28 = auStack_1a0;
      do {
        uVar30 = auVar33._8_8_;
        lVar18 = auVar33._0_8_;
        *(ulong *)(puVar28 + -0x20) = uVar22;
        *(long *)(puVar28 + -0x18) = lVar15;
        *(undefined1 ******)(puVar28 + -0x10) = pppppuVar7;
        *(undefined **)(puVar28 + -8) = puVar24;
        pppppuVar7 = (undefined1 *****)(puVar28 + -0x10);
        if ((int)uVar20 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),4);
          uVar22 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar30);
code_r0x016cef70:
          if (*(long *)(lVar18 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar18 + 0x18) + 0x18) = *(undefined4 *)(lVar18 + 0x10);
            return uVar22;
          }
        }
        else if (lVar18 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,*(undefined4 *)(lVar18 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar18,uVar30);
          if ((*(long *)(lVar18 + 0x18) != 0) &&
             (lVar15 = *(long *)(*(long *)(lVar18 + 0x18) + 0x10), lVar15 != 0)) {
            uVar30 = (ulong)(uint)(*(int *)(lVar15 + 0x18) - *(int *)(lVar18 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar18,4,0);
            uVar22 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar18,uVar30);
            goto code_r0x016cef70;
          }
        }
        puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar33 = func_0x00f78af4();
        uVar20 = 0;
        puVar28 = puVar28 + -0x20;
        lVar15 = lVar18;
        uVar22 = uVar30;
      } while( true );
    }
    uVar20 = 0;
  }
  else {
    uVar20 = 1;
  }
  uVar17 = auVar33._8_8_;
  uVar22 = auVar33._0_8_;
  auVar34._8_8_ = uVar20;
  auVar34._0_8_ = uVar22;
  ppuVar25 = (undefined1 **)0x0;
  *(undefined1 **)((long)pppppuVar7 + -0x20) = puVar28;
  *(int **)((long)pppppuVar7 + -0x18) = piVar19;
  *(undefined1 ******)((long)pppppuVar7 + -0x10) = pppppuVar7;
  *(undefined **)((long)pppppuVar7 + -8) = puVar24;
  if ((auVar33._8_4_ == 0) && (*(char *)(uVar22 + 0x48) == '\0')) {
    return uVar22;
  }
  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar22,uVar17,uVar17,0,0);
  ppppuVar31 = *(undefined1 *****)((long)pppppuVar7 + -0x10);
  puVar24 = *(undefined **)((long)pppppuVar7 + -8);
  puVar28 = *(undefined1 **)((long)pppppuVar7 + -0x20);
  piVar19 = *(int **)((long)pppppuVar7 + -0x18);
code_r0x016ce380:
  do {
    uVar20 = auVar34._8_8_;
    *(undefined1 **)((long)pppppuVar7 + -0x20) = puVar28;
    *(int **)((long)pppppuVar7 + -0x18) = piVar19;
    *(undefined1 *****)((long)pppppuVar7 + -0x10) = ppppuVar31;
    *(undefined **)((long)pppppuVar7 + -8) = puVar24;
    uVar23 = auVar34._8_4_;
    if ((int)uVar23 < *(int *)(auVar34._0_8_ + 0x30)) {
      puVar28 = *(undefined1 **)(auVar34._0_8_ + 0x28);
      uVar22 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar21 = uVar17;
      if (puVar28 == (undefined1 *)0x0) goto code_r0x016ce410;
      if (uVar23 < *(uint *)(puVar28 + 0x18)) {
        *(int *)(puVar28 + (long)(int)uVar23 * 4 + 0x20) = (int)uVar22;
        return uVar22;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar20 = func_0x00f78aec();
      uVar17 = func_0x00f78a24(0x3d6ceb8);
      uVar21 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar20,uVar17);
      uVar17 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar20,uVar17);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar17 = func_0x00f78b24();
    auVar34 = func_0x00f78ac0(uVar17,0);
    uVar22 = auVar34._0_8_;
    puVar8 = (undefined8 *)((long)pppppuVar7 + -0x50);
    *(undefined1 ***)((long)pppppuVar7 + -0x50) = unaff_x22;
    *(undefined **)((long)pppppuVar7 + -0x48) = param_1;
    *(undefined1 **)((long)pppppuVar7 + -0x40) = puVar28;
    *(undefined8 *)((long)pppppuVar7 + -0x38) = uVar20;
    *(undefined1 **)((long)pppppuVar7 + -0x30) = (undefined1 *)((long)pppppuVar7 + -0x10);
    *(undefined **)((long)pppppuVar7 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar21 == (int)ppuVar25) && (*(char *)(uVar22 + 0x48) == '\0')) {
      return uVar22;
    }
    uVar17 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar22,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar22,uVar21);
    plVar16 = (long *)((long)pppppuVar7 + -0x30);
    puVar2 = (undefined8 *)((long)pppppuVar7 + -0x28);
    puVar1 = (undefined8 *)((long)pppppuVar7 + -0x40);
    puVar3 = (undefined8 *)((long)pppppuVar7 + -0x38);
    puVar4 = (undefined8 *)((long)pppppuVar7 + -0x48);
    pppppuVar7 = (undefined1 *****)((long)pppppuVar7 + -0x20);
    piVar19 = (int *)*puVar3;
    puVar28 = (undefined1 *)*puVar1;
    param_1 = (undefined *)*puVar4;
    unaff_x22 = (undefined1 **)*puVar8;
    ppppuVar31 = (undefined1 ****)*plVar16;
    puVar24 = (undefined *)*puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x149d87c | Atlas.UI.NamePlateBehaviour.get_PedestalText
// ============================================================

undefined8 Atlas_UI_NamePlateBehaviour__get_PedestalText(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// ============================================================
// RVA: 0x149d884 | Atlas.UI.NamePlateBehaviour.get_AwayIndicator
// ============================================================

undefined8 Atlas_UI_NamePlateBehaviour__get_AwayIndicator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// ============================================================
// RVA: 0x149d88c | Atlas.UI.NamePlateBehaviour.get_HostIndicator
// ============================================================

undefined8 Atlas_UI_NamePlateBehaviour__get_HostIndicator(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// ============================================================
// RVA: 0x149d894 | Atlas.UI.NamePlateBehaviour.Update
// ============================================================

long Atlas_UI_NamePlateBehaviour__Update(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  if ((bRam0000000003eb4a1b & 1) == 0) {
    func_0x00f78a20(0x3d23638);
    func_0x00f78a20(0x3d23990);
    bRam0000000003eb4a1b = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  lVar1 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar2,0,0);
  if ((int)lVar1 != 0) {
    fVar4 = *(float *)(param_1 + 0x40);
    fVar3 = (float)/*UnityEngine.Time$$get_deltaTime*/ func_0x03272ba4(0);
    fVar4 = fVar4 + fVar3;
    *(float *)(param_1 + 0x40) = fVar4;
    if (((*(ushort *)(/*Atlas.UI.NamePlateBehaviour_TypeInfo*/ lRam0000000003d23638 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*Atlas.UI.NamePlateBehaviour_TypeInfo*/ lRam0000000003d23638 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    lVar1 = /*Atlas.UI.NamePlateBehaviour_TypeInfo*/ lRam0000000003d23638;
    if (**(float **)(/*Atlas.UI.NamePlateBehaviour_TypeInfo*/ lRam0000000003d23638 + 0xb8) <= fVar4) {
      if (*(long *)(param_1 + 0x30) == 0) {
        lVar1 = func_0x00f78af4();
        if ((bRam0000000003eb4a1c & 1) == 0) {
          func_0x00f78a20(0x3d23638);
          bRam0000000003eb4a1c = 1;
        }
        if (((*(ushort *)(/*Atlas.UI.NamePlateBehaviour_TypeInfo*/ lRam0000000003d23638 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*Atlas.UI.NamePlateBehaviour_TypeInfo*/ lRam0000000003d23638 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        *(undefined4 *)(lVar1 + 0x40) = **(undefined4 **)(/*Atlas.UI.NamePlateBehaviour_TypeInfo*/ lRam0000000003d23638 + 0xb8);
        if ((bRam0000000003ebf1b8 & 1) == 0) {
          func_0x00f78a20(0x3d23990,0);
          bRam0000000003ebf1b8 = 1;
        }
        if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
          func_0x00f78ad0();
        }
        return lVar1;
      }
      lVar1 = /*UnityEngine.GameObject$$SetActive*/ func_0x0322ef1c(*(long *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x44),0);
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  return lVar1;
}



// ============================================================
// RVA: 0x149d988 | Atlas.UI.NamePlateBehaviour..ctor
// ============================================================

long Atlas_UI_NamePlateBehaviour___ctor(long param_1)

{
  if ((bRam0000000003eb4a1c & 1) == 0) {
    func_0x00f78a20(0x3d23638);
    bRam0000000003eb4a1c = 1;
  }
  if (((*(ushort *)(/*Atlas.UI.NamePlateBehaviour_TypeInfo*/ lRam0000000003d23638 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*Atlas.UI.NamePlateBehaviour_TypeInfo*/ lRam0000000003d23638 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  *(undefined4 *)(param_1 + 0x40) = **(undefined4 **)(/*Atlas.UI.NamePlateBehaviour_TypeInfo*/ lRam0000000003d23638 + 0xb8);
  if ((bRam0000000003ebf1b8 & 1) == 0) {
    func_0x00f78a20(0x3d23990,0);
    bRam0000000003ebf1b8 = 1;
  }
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  return param_1;
}



// ============================================================
// RVA: 0x149da04 | Atlas.UI.NamePlateBehaviour..cctor
// ============================================================

void Atlas_UI_NamePlateBehaviour___cctor(void)

{
  if ((bRam0000000003eb4a1d & 1) == 0) {
    func_0x00f78a20(0x3d23638);
    bRam0000000003eb4a1d = 1;
  }
  **(undefined4 **)(/*Atlas.UI.NamePlateBehaviour_TypeInfo*/ lRam0000000003d23638 + 0xb8) = 0x3f400000;
  return;
}



