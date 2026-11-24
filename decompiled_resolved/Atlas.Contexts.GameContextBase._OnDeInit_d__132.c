// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Contexts.GameContextBase.<OnDeInit>d__132

// ============================================================
// RVA: 0x15503c8 | Atlas.Contexts.GameContextBase.<OnDeInit>d__132..ctor
// ============================================================

void Atlas_Contexts_GameContextBase__OnDeInit_d__132___ctor(long param_1,undefined4 param_2)

{
  /*System.Object$$.ctor*/ func_0x0294d018(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ============================================================
// RVA: 0x15503f4 | Atlas.Contexts.GameContextBase.<OnDeInit>d__132.System.IDisposable.Dispose
// ============================================================

void Atlas_Contexts_GameContextBase__OnDeInit_d__132__System_IDisposable_Dispose(void)

{
  return;
}



// ============================================================
// RVA: 0x15503f8 | Atlas.Contexts.GameContextBase.<OnDeInit>d__132.MoveNext
// ============================================================

undefined8 Atlas_Contexts_GameContextBase__OnDeInit_d__132__MoveNext(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uStack_54;
  
  if ((bRam0000000003eb4f90 & 1) == 0) {
    func_0x00f78a20(0x3d2a320);
    func_0x00f78a20(0x3d1b598);
    func_0x00f78a20(0x3d1fa78);
    func_0x00f78a20(0x3d21270);
    func_0x00f78a20(0x3d570d8);
    func_0x00f78a20(0x3d570e0);
    func_0x00f78a20(0x3d570e8);
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb4f90 = 1;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  plVar8 = *(long **)(param_1 + 0x20);
  if (iVar3 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((plVar8 != (long *)0x0) && (plVar8[0x19] != 0)) {
      /*Atlas.Settings.AtlasQualitySettings$$EndSuspendDeviceSleep*/ func_0x0145ee1c(plVar8[0x19],0);
      /*Atlas.Assets.AtlasAssetBucketUtils$$PurgeContextBuckets*/ func_0x01458558(plVar8[0x11],1,0);
      plVar8[0x1c] = 0;
      plVar8[3] = 0;
      plVar8[0x42] = 0;
      plVar8[0x38] = 0;
      plVar8[0xc] = 0;
      plVar8[0xb] = 0;
      plVar8[0xe] = 0;
      plVar8[0xd] = 0;
      plVar8[0x10] = 0;
      plVar8[0xf] = 0;
      plVar8[0x12] = 0;
      plVar8[0x11] = 0;
      plVar8[0x14] = 0;
      plVar8[0x13] = 0;
      plVar8[0x16] = 0;
      plVar8[0x15] = 0;
      plVar8[0x18] = 0;
      plVar8[0x17] = 0;
      plVar8[0x19] = 0;
      plVar8[0x20] = 0;
      plVar8[0x21] = 0;
      plVar8[0x2a] = 0;
      plVar8[0x2b] = 0;
      plVar8[0x29] = 0;
      /*UnityEngine.Resources$$UnloadUnusedAssets*/ func_0x0325c728(0);
      return 0;
    }
  }
  else if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((plVar8 != (long *)0x0) && (plVar8[8] != 0)) &&
       (lVar7 = /*Atlas.Gameplay.Player.GameContextPlayerManager$$GetLocalHumanPlayer*/ func_0x0159aaf0(plVar8[8],0), lVar7 != 0)) {
      uVar9 = *(undefined4 *)(lVar7 + 0x7c);
      uVar4 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
      iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar4,/*STR('BattleGameContext')*/ uRam0000000003d69658,0);
      if (iVar3 == 0) {
        uStack_54 = *(undefined4 *)(lVar7 + 0x74);
        if (plVar8[0x46] != 0) goto code_r0x015505c0;
      }
      else if (plVar8[0x46] == 0) {
        uStack_54 = *(undefined4 *)(lVar7 + 0x74);
        uVar9 = *(undefined4 *)(lVar7 + 0x78);
      }
      else {
        uStack_54 = *(undefined4 *)(lVar7 + 0x74);
code_r0x015505c0:
        Atlas_Contexts_GameContextBase__DeInitArcade(plVar8,&uStack_54,0);
      }
      if (plVar8[0x25] != 0) {
        /*Atlas.UI.ToastManager$$DismissIfHeld*/ func_0x015094fc(plVar8[0x25],0);
        if (*(char *)((long)plVar8 + 0x24b) == '\0') {
          if (plVar8[0x2b] != 0) {
            lVar7 = plVar8[0x36];
            uVar4 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(plVar8[0x2b],0);
            if (lVar7 != 0) {
              /*Atlas.Analytics.AtlasAnalyticsManager$$CompareVolumeAndFireEventIfChanged*/ func_0x01457cb8(lVar7,uVar4,0);
              uVar2 = uStack_54;
              if ((plVar8[0x36] != 0) && (lVar7 = plVar8[0x38], lVar7 != 0)) {
                lVar11 = *(long *)(plVar8[0x36] + 0x48);
                uVar1 = *(undefined4 *)(lVar7 + 0x18);
                uVar4 = *(undefined8 *)(lVar7 + 0x10);
                if (((*(ushort *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0x132) >> 10 & 1) != 0) &&
                   (*(int *)(/*Core.Definitions.DefinitionID_TypeInfo*/ lRam0000000003d21270 + 0xe0) == 0)) {
                  func_0x00f78ad0();
                }
                uVar4 = /*Core.Definitions.DefinitionID$$op_Implicit*/ func_0x016452ec(uVar4,0);
                lVar7 = plVar8[0x38];
                if ((lVar7 != 0) && (lVar11 != 0)) {
                  /*Atlas.Analytics.AtlasAnalyticsEvents$$EndBaseLayerEvent*/ func_0x01456960(lVar11,uVar2,uVar9,uVar1,uVar4,*(undefined8 *)(lVar7 + 0x38),
                                  *(undefined8 *)(lVar7 + 0x50),*(undefined8 *)(lVar7 + 0x78),
                                  *(undefined8 *)(lVar7 + 0x80),*(undefined8 *)(lVar7 + 0x88),
                                  *(undefined8 *)(lVar7 + 0x98),*(undefined8 *)(lVar7 + 0x90),
                                  *(undefined8 *)(lVar7 + 0xa0),0);
                  if (plVar8[0x36] != 0) {
                    /*Atlas.Analytics.AtlasAnalyticsManager$$RequestSendNextBatchOfQueuedEvents*/ func_0x01457d6c(plVar8[0x36],0);
                    goto code_r0x015506c0;
                  }
                }
              }
            }
          }
        }
        else {
code_r0x015506c0:
          if (plVar8[0x38] != 0) {
            if (*(int *)(plVar8[0x38] + 0x18) == 2) {
              if ((plVar8[0x18] == 0) || (lVar7 = *(long *)(plVar8[0x18] + 0x20), lVar7 == 0))
              goto LAB_01550ae0;
              uVar4 = /*Core.Networking.NetworkSession$$IsLastRoundOfTournament*/ func_0x0165e580(lVar7,0);
            }
            else {
              uVar4 = 1;
            }
            if (plVar8[0x1d] != 0) {
              /*Atlas.Stats.DailyChallengeManager$$OnDeInitGameContext*/ func_0x0157452c(plVar8[0x1d],uVar4,0);
              if (plVar8[0x1c] != 0) {
                /*Atlas.Stats.AchievementManager$$OnDeInitGameContext*/ func_0x01446b58(plVar8[0x1c],0);
                lVar7 = plVar8[0x2d];
                if (lVar7 != 0) {
                  uVar10 = *(undefined8 *)(lVar7 + 0x10);
                  uVar4 = func_0x00f78aec(/*System.Action_TypeInfo*/ lRam0000000003d1fa78);
                  /*System.Action$$.ctor*/ func_0x02924c80(uVar4,plVar8,uRam0000000003d570e0,0);
                  plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,uVar4,0);
                  lVar11 = /*System.Action_TypeInfo*/ lRam0000000003d1fa78;
                  if ((plVar5 != (long *)0x0) && (*plVar5 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
                  goto code_r0x01550ae4;
                  *(long **)(lVar7 + 0x10) = plVar5;
                  lVar7 = plVar8[0x2d];
                  if (lVar7 != 0) {
                    uVar10 = *(undefined8 *)(lVar7 + 0x18);
                    uVar4 = func_0x00f78aec(lVar11);
                    /*System.Action$$.ctor*/ func_0x02924c80(uVar4,plVar8,uRam0000000003d570e8,0);
                    plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,uVar4,0);
                    if ((plVar5 != (long *)0x0) && (*plVar5 != /*System.Action_TypeInfo*/ lRam0000000003d1fa78))
                    goto code_r0x01550ae4;
                    *(long **)(lVar7 + 0x18) = plVar5;
                    if (plVar8[0x2e] != 0) {
                      /*Core.Input.InputManager$$SetMultiTouchEnabled*/ func_0x0164b088(plVar8[0x2e],0,0);
                      lVar7 = plVar8[3];
                      if (lVar7 != 0) {
                        *(undefined1 *)(lVar7 + 0x5d) = 0;
                        /*Atlas.Stats.AtlasStats$$EndGameContextKartTracking*/ func_0x0146eb4c(lVar7,0);
                        if ((plVar8[3] != 0) && (lVar7 = *(long *)(plVar8[3] + 0x10), lVar7 != 0)) {
                          /*Atlas.Stats.StatsManager$$EndAndResetTransaction*/ func_0x01504ecc(lVar7,0);
                          if (plVar8[0x2a] != 0) {
                            /*Atlas.Audio.AtlasAudioManager$$OnEndOfLevel*/ func_0x01459640(plVar8[0x2a],0);
                            plVar5 = (long *)plVar8[0x2f];
                            if (plVar5 != (long *)0x0) {
                              (**(code **)(*plVar5 + 0x188))(plVar5,*(undefined8 *)(*plVar5 + 400));
                              plVar8[0x2f] = 0;
                            }
                            if (plVar8[0xc] != 0) {
                              /*Core.Cameras.CameraManager$$SetNoActiveCamera*/ func_0x0163aa20(plVar8[0xc],0);
                              Atlas_Contexts_GameContextBase__DeInitStates(plVar8,0);
                              if (plVar8[0x28] != 0) {
                                /*Atlas.Maps.MapSequenceController$$DeInit*/ func_0x0148dec0(plVar8[0x28],0);
                                plVar8[0x28] = 0;
                                Atlas_Contexts_GameContextBase__DeInitPools(plVar8,0);
                                if (plVar8[0xd] != 0) {
                                  /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(plVar8[0xd],1,0);
                                  if (plVar8[0xd] != 0) {
                                    /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(plVar8[0xd],2,0);
                                    if (plVar8[0xd] != 0) {
                                      /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(plVar8[0xd],3,0);
                                      if (plVar8[0xd] != 0) {
                                        /*Atlas.UI.AtlasUIManager$$ClearLayer*/ func_0x014708e0(plVar8[0xd],9,0);
                                        Atlas_Contexts_GameContextBase__DeInitFollowCam(plVar8,0);
                                        Atlas_Contexts_GameContextBase__DeInitAtlasPlayers
                                                  (plVar8,plVar8[3],0);
                                        if (plVar8[0x3d] != 0) {
                                          /*Atlas.Gameplay.Pickups.PickupManager$$DestroyAndDeSpawnBoxes*/ func_0x014b9b14(plVar8[0x3d],0);
                                          if (plVar8[0x3d] != 0) {
                                            /*Atlas.Gameplay.Pickups.PickupManager$$DeInit*/ func_0x014b9844(plVar8[0x3d],0);
                                            plVar8[0x3d] = 0;
                                            if (plVar8[0x3e] != 0) {
                                              /*Atlas.Gameplay.InteractableManager$$DeInit*/ func_0x015b89ac(plVar8[0x3e],0);
                                              plVar8[0x3e] = 0;
                                              Atlas_Contexts_GameContextBase__DeInitBehaviours
                                                        (plVar8,0);
                                              lVar7 = plVar8[0x24];
                                              if (lVar7 != 0) {
                                                uVar10 = *(undefined8 *)(lVar7 + 0x48);
                                                uVar4 = func_0x00f78aec(/*System.Action<string>_TypeInfo*/ lRam0000000003d1b598);
                                                /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(uVar4,plVar8,uRam0000000003d570d8,
                                                                uRam0000000003d2a320);
                                                plVar5 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(uVar10,uVar4,0);
                                                if ((plVar5 != (long *)0x0) &&
                                                   (*plVar5 != /*System.Action<string>_TypeInfo*/ lRam0000000003d1b598))
                                                goto code_r0x01550ae4;
                                                *(long **)(lVar7 + 0x48) = plVar5;
                                                if (plVar8[0x32] != 0) {
                                                  /*NetworkCarUpdater$$DeInit*/ func_0x0149f184(plVar8[0x32],0);
                                                  plVar8[0x32] = 0;
                                                  if (plVar8[0x33] != 0) {
                                                    /*Atlas.Gameplay.NetworkResultsUpdater$$DeInit*/ func_0x014ae450(plVar8[0x33],0);
                                                    plVar8[0x33] = 0;
                                                    if (plVar8[0x31] != 0) {
                                                      /*Atlas.Networking.NetworkTimelineManager$$DeInit*/ func_0x014b07a4(plVar8[0x31],0);
                                                      plVar8[0x31] = 0;
                                                      if (plVar8[0x34] != 0) {
                                                        /*Atlas.Networking.NetworkMigrationUpdater$$DeInit*/ func_0x014ac8e4(plVar8[0x34],0);
                                                        plVar8[0x34] = 0;
                                                        if (plVar8[0x26] != 0) {
                                                          Atlas_Gameplay_Kart_KartManager__DeInit
                                                                    (plVar8[0x26],0);
                                                          plVar8[0x26] = 0;
                                                                                                                    
                                                  Atlas_Contexts_GameContextBase__DeInitLightWorld
                                                            (plVar8,0);
                                                  if (plVar8[0xc] != 0) {
                                                    /*Core.Cameras.CameraManager$$SetNoActiveCamera*/ func_0x0163aa20(plVar8[0xc],0);
                                                    plVar8[0xc] = 0;
                                                    if (plVar8[0x1b] != 0) {
                                                      /*Atlas.Rendering.PostProcessingManager$$UnRegisterAllVolumes*/ func_0x014cbd68(plVar8[0x1b],0,0);
                                                      if (*(char *)((long)plVar8 + 0x24a) == '\0') {
                                                        if (plVar8[0x38] != 0) {
                                                          if (*(int *)(plVar8[0x38] + 0x18) != 2) {
                                                            if (plVar8[0x23] == 0)
                                                            goto LAB_01550ae0;
                                                            uVar6 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(plVar8[0x23],0);
                                                            if ((uVar6 & 1) == 0)
                                                            goto code_r0x01550a2c;
                                                          }
code_r0x01550a68:
                                                          if (*(char *)((long)plVar8 + 0x24a) ==
                                                              '\0') {
code_r0x01550aa4:
                                                            if (plVar8[0x30] != 0) {
                                                              uVar4 = /*Core.Scenes.AddressablesSceneLoader$$UnloadScenesAndWait*/ func_0x01663660(plVar8[0x30],0
                                                                                     );
                                                              *(undefined8 *)(param_1 + 0x18) =
                                                                   uVar4;
                                                              *(undefined4 *)(param_1 + 0x10) = 2;
                                                              return 1;
                                                            }
                                                          }
                                                          else if (plVar8[0x23] != 0) {
                                                            iVar3 = /*Atlas.Networking.MatchMakingManager$$IsInGroup*/ func_0x01490454(plVar8[0x23],0);
                                                            if (iVar3 == 0) goto code_r0x01550aa4;
                                                            if (plVar8[0x23] != 0) {
                                                              /*Atlas.Networking.MatchMakingManager$$LeaveMatch*/ func_0x014904c4(plVar8[0x23],0);
                                                              if (plVar8[0x23] != 0) {
                                                                /*Atlas.Networking.MatchMakingManager$$LeaveGroup*/ func_0x014904fc(plVar8[0x23],0);
                                                                goto code_r0x01550aa4;
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                      else {
code_r0x01550a2c:
                                                        if (plVar8[0x18] != 0) {
                                                          /*Atlas.Networking.Network$$EndSession*/ func_0x01490e28(plVar8[0x18],0);
                                                          goto code_r0x01550a68;
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
  else {
    if (iVar3 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar8 != (long *)0x0) {
      uVar4 = Atlas_Contexts_GameContextBase____n__2(plVar8,0);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
LAB_01550ae0:
  func_0x00f78af4();
code_r0x01550ae4:
  lVar7 = func_0x00f78e5c();
  return *(undefined8 *)(lVar7 + 0x18);
}



// ============================================================
// RVA: 0x1550ae8 | Atlas.Contexts.GameContextBase.<OnDeInit>d__132.System.Collections.Generic.IEnumerator<System.Object>.get_Current
// ============================================================

undefined8
Atlas_Contexts_GameContextBase__OnDeInit_d__132__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// ============================================================
// RVA: 0x1550af0 | Atlas.Contexts.GameContextBase.<OnDeInit>d__132.System.Collections.IEnumerator.Reset
// ============================================================

undefined8
Atlas_Contexts_GameContextBase__OnDeInit_d__132__System_Collections_IEnumerator_Reset(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00f78a24(0x3d238d8);
  uVar1 = func_0x00f78aec();
  /*System.NotSupportedException$$.ctor*/ func_0x02950344(uVar1,0);
  uVar2 = func_0x00f78a24(0x3d62ea8);
  lVar3 = func_0x00f78ac0(uVar1,uVar2);
  return *(undefined8 *)(lVar3 + 0x18);
}



// ============================================================
// RVA: 0x1550b30 | Atlas.Contexts.GameContextBase.<OnDeInit>d__132.System.Collections.IEnumerator.get_Current
// ============================================================

undefined8
Atlas_Contexts_GameContextBase__OnDeInit_d__132__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



