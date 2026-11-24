// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Gameplay.FTUE.BaseLayerFTUEUsables

// ============================================================
// RVA: 0x15350e8 | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.get_FtueUsablesDefinition
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1535164 | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.Init
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1535518 | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.DeInit
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1535530 | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.OnEnterInProgressScreen
// ============================================================

/* WARNING: Possible PIC construction at 0x01535794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535cfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01535aa8) */
/* WARNING: Removing unreachable block (ram,0x01535a64) */
/* WARNING: Removing unreachable block (ram,0x01535a6c) */
/* WARNING: Removing unreachable block (ram,0x01535a98) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x01535798) */
/* WARNING: Removing unreachable block (ram,0x015357cc) */
/* WARNING: Removing unreachable block (ram,0x01535c74) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterInProgressScreen
               (long param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined8 *extraout_x8;
  ulong uVar25;
  int *piVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  undefined8 uVar30;
  uint uVar31;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar32;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar33;
  undefined8 ******ppppppuVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [12];
  long lStack_70;
  long lStack_68;
  undefined8 ******ppppppuStack_60;
  undefined *puStack_58;
  undefined8 *****pppppuStack_30;
  undefined *puStack_28;
  
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__OnEnterInProgressScreen(param_1,param_2,0);
  if (*(long *)(param_1 + 0x58) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x100) = 0;
    return;
  }
  auVar41 = func_0x00f78af4();
  lVar19 = auVar41._0_8_;
  puStack_28 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterPickupUsableStartTrigger;
  pppppuStack_30 = (undefined8 *****)&stack0xfffffffffffffff0;
  if ((bRam0000000003eb4ebe & 1) == 0) {
    func_0x00f78a20(0x3d527e0);
    func_0x00f78a20(0x3d527f8);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ebe = 1;
  }
  iVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision(lVar19,auVar41._8_8_,0);
  if (iVar10 == 0) {
    return;
  }
  uVar30 = 0x3d52000;
  *(undefined4 *)(lVar19 + 0xe8) = 1;
  lVar27 = *(long *)(lVar19 + 0xc0);
  lVar12 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(lVar12,lVar19,uRam0000000003d527e0,0);
  if (lVar27 != 0) {
    /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar27,lVar12,0);
    if (*(long *)(lVar19 + 0x10) != 0) {
      lVar28 = *(long *)(*(long *)(lVar19 + 0x10) + 0x40);
      lVar13 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
      uVar22 = 0;
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(lVar13,lVar19,uRam0000000003d527f8,0);
      lVar27 = 0;
      lVar12 = lVar13;
      if (lVar28 != 0) {
        puVar8 = &stack0xffffffffffffffb0;
        ppppppuVar34 = &pppppuStack_30;
        if ((bRam0000000003eb51ef & 1) == 0) {
          func_0x00f78a20(0x3d27718,lVar13,0);
          bRam0000000003eb51ef = 1;
        }
        uVar30 = 0x3d27718;
        plVar29 = (long *)(lVar28 + 0x70);
        lVar12 = *plVar29;
        while ((plVar18 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar12,lVar13,0), plVar18 == (long *)0x0 ||
               (*plVar18 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
          lVar19 = func_0x00ff0f44(plVar29,plVar18,lVar12);
          bVar9 = lVar12 == lVar19;
          lVar12 = lVar19;
          if (bVar9) {
            return;
          }
        }
        puVar35 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableAttached;
        auVar41 = func_0x00f78e5c(plVar18);
        goto code_r0x015a5cc8;
      }
    }
  }
  auVar41 = func_0x00f78af4();
  lVar28 = auVar41._0_8_;
  plVar18 = &lStack_70;
  puStack_58 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterPickupUsableEndTrigger;
  pppppppuVar33 = &ppppppuStack_60;
  lStack_70 = lVar27;
  lStack_68 = lVar19;
  ppppppuStack_60 = &pppppuStack_30;
  iVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision(lVar28,auVar41._8_8_,0);
  if (iVar10 == 0) {
    return;
  }
  if ((*(long *)(lVar28 + 0x38) == 0) ||
     (lVar19 = *(long *)(*(long *)(lVar28 + 0x38) + 0x38), lVar19 == 0)) {
    puVar35 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnFailPickupUsable;
    lVar13 = func_0x00f78af4();
  }
  else {
    uVar25 = Atlas_Gameplay_Kart_KartUsableManager__get_IsShuffling(lVar19,0);
    if ((uVar25 & 1) != 0) {
      return;
    }
    plVar18 = (long *)&stack0xffffffffffffffb0;
    lVar13 = lVar28;
    lVar28 = lStack_68;
    lVar27 = lStack_70;
    pppppppuVar33 = (undefined8 *******)ppppppuStack_60;
    puVar35 = puStack_58;
  }
  puVar8 = (undefined1 *)((long)plVar18 + -0x30);
  *(undefined8 *)((long)plVar18 + -0x30) = 0x3d52000;
  *(long *)((long)plVar18 + -0x28) = lVar12;
  *(long *)((long)plVar18 + -0x20) = lVar27;
  *(long *)((long)plVar18 + -0x18) = lVar28;
  *(undefined8 ********)((long)plVar18 + -0x10) = pppppppuVar33;
  *(undefined **)((long)plVar18 + -8) = puVar35;
  ppppppuVar34 = (undefined8 ******)((long)plVar18 + -0x10);
  lVar19 = 0x3eb4000;
  if ((bRam0000000003eb4ebf & 1) == 0) {
    func_0x00f78a20(0x3d527e0);
    func_0x00f78a20(0x3d527f8);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ebf = 1;
  }
  uVar25 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar13,0);
  if ((uVar25 & 1) == 0) {
    ppppppuVar34 = *(undefined8 *******)((long)plVar18 + -0x10);
    puVar35 = *(undefined **)((long)plVar18 + -8);
    lVar19 = *(long *)((long)plVar18 + -0x20);
    lVar27 = *(long *)((long)plVar18 + -0x18);
    uVar30 = *(undefined8 *)((long)plVar18 + -0x30);
    lVar12 = *(long *)((long)plVar18 + -0x28);
    lVar28 = lVar13;
  }
  else {
    if (*(long *)(lVar13 + 0x10) != 0) {
      plVar29 = *(long **)(*(long *)(lVar13 + 0x10) + 0x40);
      lVar12 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
      auVar41._8_8_ = lVar12;
      auVar41._0_8_ = plVar29;
      uVar22 = 0;
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(lVar12,lVar13,uRam0000000003d527f8,0);
      lVar19 = 0;
      if (plVar29 != (long *)0x0) {
        puVar35 = &UNK_01535798;
code_r0x015a5cc8:
        *(undefined8 *)(puVar8 + -0x30) = uVar30;
        *(long *)(puVar8 + -0x28) = lVar12;
        *(long **)(puVar8 + -0x20) = plVar29;
        *(long *)(puVar8 + -0x18) = lVar13;
        *(undefined8 *******)(puVar8 + -0x10) = ppppppuVar34;
        *(undefined **)(puVar8 + -8) = puVar35;
        if ((bRam0000000003eb51f0 & 1) == 0) {
          func_0x00f78a20(0x3d27718);
          bRam0000000003eb51f0 = 1;
        }
        plVar29 = (long *)(auVar41._0_8_ + 0x70);
        lVar19 = *plVar29;
        while( true ) {
          uVar30 = 0;
          plVar18 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar19,auVar41._8_8_,0);
          if ((plVar18 != (long *)0x0) && (*plVar18 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718)) break;
          lVar12 = func_0x00ff0f44(plVar29,plVar18,lVar19);
          bVar9 = lVar19 == lVar12;
          lVar19 = lVar12;
          if (bVar9) {
            return;
          }
        }
        auVar44 = func_0x00f78e5c(plVar18);
        plVar18 = auVar44._8_8_;
        lVar12 = *(long *)(auVar44._0_8_ + 0x70);
        if (lVar12 == 0) {
          return;
        }
        *(undefined8 *)(puVar8 + -0x90) = unaff_x28;
        *(undefined8 *)(puVar8 + -0x88) = unaff_x27;
        *(undefined8 *)(puVar8 + -0x80) = unaff_x26;
        *(undefined8 *)(puVar8 + -0x78) = unaff_x25;
        *(undefined8 *)(puVar8 + -0x70) = unaff_x24;
        *(undefined8 **)(puVar8 + -0x68) = unaff_x23;
        *(undefined8 *)(puVar8 + -0x60) = 0x3d27718;
        *(long *)(puVar8 + -0x58) = lVar19;
        *(long **)(puVar8 + -0x50) = plVar29;
        *(long *)(puVar8 + -0x48) = auVar41._8_8_;
        *(undefined1 **)(puVar8 + -0x40) = puVar8 + -0x10;
        *(undefined **)(puVar8 + -0x38) =
             &Atlas_Gameplay_Player_GameContextPlayerManager__FireOnUsableAttached;
        *(long *)(puVar8 + -0x98) = lVar12;
        lVar19 = *(long *)(lVar12 + 0x68);
        if (lVar19 == 0) {
          puVar3 = puVar8 + -0x98;
          lVar27 = 1;
        }
        else {
          lVar27 = *(long *)(lVar19 + 0x18);
          if (lVar27 == 0) {
            return;
          }
          puVar3 = (undefined1 *)(lVar19 + 0x20);
        }
        lVar19 = 0;
        do {
          lVar13 = *(long *)(puVar3 + lVar19 * 8);
          pcVar32 = *(code **)(lVar13 + 0x10);
          plVar29 = *(long **)(lVar13 + 0x20);
          lVar13 = *(long *)(lVar13 + 0x28);
          if (*(short *)(lVar13 + 0x48) == -1) {
            func_0x00f78ad8(lVar13);
          }
          iVar10 = func_0x00f78a4c(lVar13);
          bVar9 = *(char *)(lVar13 + 0x4a) == '\x03';
          if (iVar10 == 0) {
            if (bVar9) {
              if (plVar29 == (long *)0x0) {
code_r0x01553104:
                (*pcVar32)(plVar18,uVar30,uVar22,lVar13);
              }
              else {
                if (((*(short *)(lVar13 + 0x48) == -1) || ((*(byte *)(*plVar29 + 0x115) & 1) != 0))
                   || (*(long *)(lVar12 + 0x18) == 0)) goto code_r0x01552ff4;
                iVar10 = func_0x00f78a44(lVar13);
                iVar11 = func_0x00f78ec0(lVar13);
                if (iVar10 == 0) {
                  uVar1 = *(ushort *)(lVar13 + 0x48);
                  if (iVar11 == 0) {
                    lVar13 = *plVar29 + (ulong)uVar1 * 0x10;
                    (**(code **)(lVar13 + 0x138))
                              (plVar29,plVar18,uVar30,uVar22,*(undefined8 *)(lVar13 + 0x140));
                    goto code_r0x01553118;
                  }
                  lVar13 = func_0x00f78a48(lVar13);
                  lVar28 = *plVar29;
                  uVar25 = (ulong)*(ushort *)(lVar28 + 0x12a);
                  if (uVar25 != 0) {
                    piVar26 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == lVar13) {
                        puVar16 = (undefined8 *)
                                  (lVar28 + (long)(int)(*piVar26 + (uint)uVar1) * 0x10 + 0x138);
                        goto code_r0x015532bc;
                      }
                      piVar26 = piVar26 + 4;
                      uVar25 = uVar25 - 1;
                    } while (uVar25 != 0);
                  }
                  puVar16 = (undefined8 *)func_0x00fac1f0(plVar29,lVar13,(ulong)uVar1);
code_r0x015532bc:
                  pcVar32 = (code *)*puVar16;
                  puVar16 = (undefined8 *)puVar16[1];
                }
                else {
                  if (iVar11 == 0) {
                    uVar15 = *(undefined8 *)
                              (*plVar29 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar28 = *plVar29;
                    uVar25 = (ulong)*(ushort *)(lVar28 + 0x12a);
                    if (uVar25 != 0) {
                      piVar26 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar26 + -2) == *(long *)(lVar13 + 0x18)) {
                          lVar28 = lVar28 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar13 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01553294;
                        }
                        piVar26 = piVar26 + 4;
                        uVar25 = uVar25 - 1;
                      } while (uVar25 != 0);
                    }
                    lVar28 = func_0x00fac1f0(plVar29);
code_r0x01553294:
                    uVar15 = *(undefined8 *)(lVar28 + 8);
                  }
                  puVar16 = (undefined8 *)func_0x00f78acc(uVar15,lVar13);
                  pcVar32 = (code *)*puVar16;
                }
                (*pcVar32)(plVar29,plVar18,uVar30,uVar22,puVar16);
              }
            }
            else {
              if ((*(short *)(lVar13 + 0x48) == -1) || (*(long *)(lVar12 + 0x18) == 0))
              goto code_r0x01553104;
              iVar10 = func_0x00f78a44(lVar13);
              iVar11 = func_0x00f78ec0(lVar13);
              if (iVar10 == 0) {
                uVar1 = *(ushort *)(lVar13 + 0x48);
                if (iVar11 == 0) {
                  lVar13 = *plVar18 + (ulong)uVar1 * 0x10;
                  (**(code **)(lVar13 + 0x138))
                            (plVar18,uVar30,uVar22,*(undefined8 *)(lVar13 + 0x140));
                  goto code_r0x01553118;
                }
                lVar13 = func_0x00f78a48(lVar13);
                lVar28 = *plVar18;
                uVar25 = (ulong)*(ushort *)(lVar28 + 0x12a);
                if (uVar25 != 0) {
                  piVar26 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar26 + -2) == lVar13) {
                      puVar16 = (undefined8 *)
                                (lVar28 + (long)(int)(*piVar26 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x01553248;
                    }
                    piVar26 = piVar26 + 4;
                    uVar25 = uVar25 - 1;
                  } while (uVar25 != 0);
                }
                puVar16 = (undefined8 *)func_0x00fac1f0(plVar18,lVar13,(ulong)uVar1);
code_r0x01553248:
                pcVar32 = (code *)*puVar16;
                puVar16 = (undefined8 *)puVar16[1];
              }
              else {
                if (iVar11 == 0) {
                  uVar15 = *(undefined8 *)
                            (*plVar18 + (ulong)*(ushort *)(lVar13 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar28 = *plVar18;
                  uVar25 = (ulong)*(ushort *)(lVar28 + 0x12a);
                  if (uVar25 != 0) {
                    piVar26 = (int *)(*(long *)(lVar28 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar26 + -2) == *(long *)(lVar13 + 0x18)) {
                        lVar28 = lVar28 + (long)(int)(*piVar26 + (uint)*(ushort *)(lVar13 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01553220;
                      }
                      piVar26 = piVar26 + 4;
                      uVar25 = uVar25 - 1;
                    } while (uVar25 != 0);
                  }
                  lVar28 = func_0x00fac1f0(plVar18);
code_r0x01553220:
                  uVar15 = *(undefined8 *)(lVar28 + 8);
                }
                puVar16 = (undefined8 *)func_0x00f78acc(uVar15,lVar13);
                pcVar32 = (code *)*puVar16;
              }
              (*pcVar32)(plVar18,uVar30,uVar22,puVar16);
            }
          }
          else {
            if (bVar9) goto code_r0x01553104;
code_r0x01552ff4:
            (*pcVar32)(plVar29,plVar18,uVar30,uVar22,lVar13);
          }
code_r0x01553118:
          lVar19 = lVar19 + 1;
          if (lVar19 == lVar27) {
            return;
          }
        } while( true );
      }
    }
    puVar35 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompletePickupCondition;
    lVar28 = func_0x00f78af4();
    plVar18 = (long *)((long)plVar18 + -0x30);
    lVar27 = lVar13;
  }
code_r0x0153580c:
  *(undefined8 *)((long)plVar18 + -0x30) = uVar30;
  *(long *)((long)plVar18 + -0x28) = lVar12;
  *(long *)((long)plVar18 + -0x20) = lVar19;
  *(long *)((long)plVar18 + -0x18) = lVar27;
  *(undefined8 *******)((long)plVar18 + -0x10) = ppppppuVar34;
  *(undefined **)((long)plVar18 + -8) = puVar35;
  uVar30 = 0x3d527d8;
  if ((bRam0000000003eb4ec0 & 1) == 0) {
    func_0x00f78a20(0x3d527d8);
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb4ec0 = 1;
  }
  lVar19 = *(long *)(lVar28 + 200);
  lVar12 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(lVar12,lVar28,uRam0000000003d527d8,0);
  if (lVar19 != 0) {
    uVar25 = 0;
    /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar19,lVar12);
    ppppppuVar34 = *(undefined8 *******)((long)plVar18 + -0x10);
    puVar35 = *(undefined **)((long)plVar18 + -8);
    lVar19 = *(long *)((long)plVar18 + -0x20);
    lVar13 = *(long *)((long)plVar18 + -0x18);
    uVar30 = *(undefined8 *)((long)plVar18 + -0x30);
    lVar12 = *(long *)((long)plVar18 + -0x28);
    puVar3 = (undefined1 *)plVar18;
    goto code_r0x01535d14;
  }
  auVar41 = func_0x00f78af4();
  lVar19 = auVar41._0_8_;
  *(undefined8 *)((long)plVar18 + -0x50) = 0;
  *(long *)((long)plVar18 + -0x48) = lVar28;
  *(undefined1 **)((long)plVar18 + -0x40) = (undefined1 *)((long)plVar18 + -0x10);
  *(undefined **)((long)plVar18 + -0x38) =
       &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterUseUsableEndTrigger;
  iVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision(lVar19,auVar41._8_8_,0);
  if ((iVar10 == 0) || (*(int *)(lVar19 + 0xe8) != 2)) {
    return;
  }
  *(undefined8 *)((long)plVar18 + -0x50) = *(undefined8 *)((long)plVar18 + -0x50);
  *(undefined8 *)((long)plVar18 + -0x48) = *(undefined8 *)((long)plVar18 + -0x48);
  *(undefined8 *)((long)plVar18 + -0x40) = *(undefined8 *)((long)plVar18 + -0x40);
  *(undefined8 *)((long)plVar18 + -0x38) = *(undefined8 *)((long)plVar18 + -0x38);
  uVar25 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar19,0);
  if ((uVar25 & 1) == 0) {
    uVar15 = *(undefined8 *)((long)plVar18 + -0x40);
    uVar36 = *(undefined8 *)((long)plVar18 + -0x38);
    puVar4 = (undefined1 *)((long)plVar18 + -0x30);
    uVar22 = *(undefined8 *)((long)plVar18 + -0x50);
    lVar28 = *(long *)((long)plVar18 + -0x48);
    lVar13 = lVar19;
Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteUseUsableCondition:
    puVar8 = puVar4 + -0x70;
    puVar5 = puVar4 + -0x70;
    puVar2 = puVar4 + -0x70;
    *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
    *(undefined8 **)(puVar4 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar4 + -0x30) = uVar30;
    *(long *)(puVar4 + -0x28) = lVar12;
    *(undefined8 *)(puVar4 + -0x20) = uVar22;
    *(long *)(puVar4 + -0x18) = lVar28;
    *(undefined8 *)(puVar4 + -0x10) = uVar15;
    *(undefined8 *)(puVar4 + -8) = uVar36;
    ppppppuVar34 = (undefined8 ******)(puVar4 + -0x10);
    lVar27 = 0x3eb4000;
    if ((bRam0000000003eb4ec2 & 1) == 0) {
      func_0x00f78a20(0x3d527e8);
      func_0x00f78a20(0x3d527f8);
      func_0x00f78a20(0x3d52800);
      func_0x00f78a20(0x3d278d8);
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb4ec2 = 1;
    }
    if (*(long *)(lVar13 + 0x58) != 0) {
      *(undefined1 *)(*(long *)(lVar13 + 0x58) + 0x100) = 1;
      lVar19 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar13);
      if (lVar19 != 0) {
        uVar30 = 0x3d52000;
        uVar22 = *(undefined8 *)(lVar19 + 0x70);
        uVar36 = *(undefined8 *)(lVar19 + 0x88);
        uVar15 = *(undefined8 *)(lVar19 + 0x80);
        *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)(lVar19 + 0x78);
        *(undefined8 *)(puVar4 + -0x70) = uVar22;
        *(undefined8 *)(puVar4 + -0x58) = uVar36;
        *(undefined8 *)(puVar4 + -0x60) = uVar15;
        uVar22 = *(undefined8 *)(lVar19 + 0x90);
        *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)(lVar19 + 0x98);
        *(undefined8 *)(puVar4 + -0x50) = uVar22;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar13,puVar4 + -0x70,0);
        lVar27 = *(long *)(lVar13 + 0xd0);
        lVar12 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
        /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(lVar12,lVar13,uRam0000000003d527e8,0);
        if (lVar27 != 0) {
          /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar27,lVar12,0);
          if (*(long *)(lVar13 + 0x10) != 0) {
            uVar30 = 0x3d27718;
            unaff_x23 = (undefined8 *)0x3d52000;
            plVar29 = *(long **)(*(long *)(lVar13 + 0x10) + 0x40);
            lVar12 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
            auVar41._8_8_ = lVar12;
            auVar41._0_8_ = plVar29;
            uVar22 = 0;
            /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(lVar12,lVar13,uRam0000000003d527f8,0);
            lVar27 = 0;
            if (plVar29 != (long *)0x0) {
              puVar35 = &UNK_01535a64;
              goto code_r0x015a5cc8;
            }
          }
        }
      }
    }
    lVar19 = func_0x00f78af4();
    *(long *)(puVar4 + -0x90) = lVar27;
    *(long *)(puVar4 + -0x88) = lVar13;
    *(undefined8 *******)(puVar4 + -0x80) = ppppppuVar34;
    *(undefined **)(puVar4 + -0x78) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterHitPlayerEndTrigger;
    uVar25 = 0;
    iVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
    if (iVar10 == 0) {
      return;
    }
    uVar22 = *(undefined8 *)(puVar4 + -0x90);
    *(undefined8 *)(puVar4 + -0x90) = uVar22;
    *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(puVar4 + -0x88);
    *(undefined8 *)(puVar4 + -0x80) = *(undefined8 *)(puVar4 + -0x80);
    *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x78);
    puVar6 = puVar4 + -0x80;
    uVar14 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar19,0);
    if ((uVar14 & 1) == 0) {
      puVar6 = *(undefined1 **)(puVar4 + -0x80);
      puVar35 = *(undefined **)(puVar4 + -0x78);
      uVar22 = *(undefined8 *)(puVar4 + -0x90);
      lVar27 = *(long *)(puVar4 + -0x88);
      lVar13 = lVar19;
    }
    else {
      if (*(long *)(lVar19 + 0xb8) != 0) {
        Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsedUsables(*(long *)(lVar19 + 0xb8),0);
        uVar22 = *(undefined8 *)(puVar4 + -0x80);
        uVar36 = *(undefined8 *)(puVar4 + -0x78);
        uVar15 = *(undefined8 *)(puVar4 + -0x90);
        uVar37 = *(undefined8 *)(puVar4 + -0x88);
        goto Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RetrySection;
      }
      puVar35 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteHitPlayerCondition;
      lVar13 = func_0x00f78af4();
      puVar5 = puVar4 + -0x90;
      lVar27 = lVar19;
    }
code_r0x01535b58:
    puVar7 = puVar5 + -0x60;
    *(undefined8 *)(puVar5 + -0x30) = uVar30;
    *(long *)(puVar5 + -0x28) = lVar12;
    *(undefined8 *)(puVar5 + -0x20) = uVar22;
    *(long *)(puVar5 + -0x18) = lVar27;
    *(undefined1 **)(puVar5 + -0x10) = puVar6;
    *(undefined **)(puVar5 + -8) = puVar35;
    puVar6 = puVar5 + -0x10;
    lVar19 = 0x3eb4000;
    if ((bRam0000000003eb4ec4 & 1) == 0) {
      func_0x00f78a20(0x3d527d0);
      func_0x00f78a20(0x3d527f0);
      func_0x00f78a20(0x3d278d8);
      func_0x00f78a20(0x3d27728);
      bRam0000000003eb4ec4 = 1;
    }
    lVar27 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar13);
    if (lVar27 != 0) {
      uVar30 = 0x3d52000;
      uVar22 = *(undefined8 *)(lVar27 + 0xa0);
      uVar36 = *(undefined8 *)(lVar27 + 0xb8);
      uVar15 = *(undefined8 *)(lVar27 + 0xb0);
      *(undefined8 *)(puVar5 + -0x58) = *(undefined8 *)(lVar27 + 0xa8);
      *(undefined8 *)(puVar5 + -0x60) = uVar22;
      *(undefined8 *)(puVar5 + -0x48) = uVar36;
      *(undefined8 *)(puVar5 + -0x50) = uVar15;
      uVar22 = *(undefined8 *)(lVar27 + 0xc0);
      *(undefined8 *)(puVar5 + -0x38) = *(undefined8 *)(lVar27 + 200);
      *(undefined8 *)(puVar5 + -0x40) = uVar22;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar13,puVar5 + -0x60,0);
      *(undefined4 *)(lVar13 + 0xe8) = 0;
      lVar19 = *(long *)(lVar13 + 0xd8);
      lVar12 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      uVar25 = uRam0000000003d527d0;
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(lVar12,lVar13,uRam0000000003d527d0,0);
      if (lVar19 != 0) {
        uVar25 = 0;
        /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar19,lVar12);
        if (*(long *)(lVar13 + 0x10) != 0) {
          uVar30 = 0x3d52000;
          plVar29 = *(long **)(*(long *)(lVar13 + 0x10) + 0x40);
          lVar12 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
          auVar44._8_8_ = lVar12;
          auVar44._0_8_ = plVar29;
          uVar22 = 0;
          uVar25 = uRam0000000003d527f0;
          /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(lVar12,lVar13,uRam0000000003d527f0,0);
          lVar19 = 0;
          if (plVar29 != (long *)0x0) {
            puVar35 = &UNK_01535c74;
            goto code_r0x0159d844;
          }
        }
      }
    }
    auVar41 = func_0x00f78af4();
    lVar27 = auVar41._0_8_;
    plVar18 = (long *)(puVar5 + -0xb0);
    puVar3 = puVar5 + -0xb0;
    *(long *)(puVar5 + -0x80) = lVar19;
    *(long *)(puVar5 + -0x78) = lVar13;
    *(undefined1 **)(puVar5 + -0x70) = puVar6;
    *(undefined **)(puVar5 + -0x68) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnPickup;
    ppppppuVar34 = (undefined8 ******)(puVar5 + -0x70);
    if (auVar41._8_8_ != 0) {
      if (*(long *)(auVar41._8_8_ + 0x10) != *(long *)(lVar27 + 0x38)) {
        return;
      }
      lVar28 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar27);
      lVar13 = lVar27;
      if (lVar28 != 0) {
        uVar22 = *(undefined8 *)(lVar28 + 0x40);
        uVar36 = *(undefined8 *)(lVar28 + 0x58);
        uVar15 = *(undefined8 *)(lVar28 + 0x50);
        *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(lVar28 + 0x48);
        *(undefined8 *)(puVar5 + -0xb0) = uVar22;
        *(undefined8 *)(puVar5 + -0x98) = uVar36;
        *(undefined8 *)(puVar5 + -0xa0) = uVar15;
        uVar22 = *(undefined8 *)(lVar28 + 0x60);
        *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(lVar28 + 0x68);
        *(undefined8 *)(puVar5 + -0x90) = uVar22;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar27,puVar5 + -0xb0,0);
        if (*(int *)(lVar27 + 0xe8) != 1) {
          return;
        }
        puVar35 = &UNK_01535d00;
        lVar28 = lVar27;
        goto code_r0x0153580c;
      }
    }
    puVar35 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartUseUsableSection;
    lVar28 = func_0x00f78af4();
code_r0x01535d14:
    *(undefined8 *)(puVar3 + -0x30) = uVar30;
    *(long *)(puVar3 + -0x28) = lVar12;
    *(long *)(puVar3 + -0x20) = lVar19;
    *(long *)(puVar3 + -0x18) = lVar13;
    *(undefined8 *******)(puVar3 + -0x10) = ppppppuVar34;
    *(undefined **)(puVar3 + -8) = puVar35;
    uVar22 = 0x3eb4000;
    if ((bRam0000000003eb4ec1 & 1) == 0) {
      func_0x00f78a20(0x3d52800);
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb4ec1 = 1;
    }
    *(undefined4 *)(lVar28 + 0xe8) = 2;
    lVar19 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar28);
    if (lVar19 != 0) {
      uVar25 = (ulong)*(uint *)(lVar19 + 0x14c);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                (lVar28,*(undefined8 *)(lVar19 + 0x130),uVar25,*(char *)(lVar19 + 0x148) != '\0',0);
      if (*(long *)(lVar28 + 0x10) != 0) {
        uVar30 = 0x3d52000;
        lVar19 = *(long *)(*(long *)(lVar28 + 0x10) + 0x40);
        lVar12 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
        auVar42._8_8_ = lVar12;
        auVar42._0_8_ = lVar19;
        uVar25 = uRam0000000003d52800;
        /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(lVar12,lVar28,uRam0000000003d52800,0);
        uVar22 = 0;
        if (lVar19 != 0) {
          puVar5 = *(undefined1 **)(puVar3 + -0x10);
          puVar35 = *(undefined **)(puVar3 + -8);
          plVar29 = *(long **)(puVar3 + -0x20);
          uVar22 = *(undefined8 *)(puVar3 + -0x18);
          uVar30 = *(undefined8 *)(puVar3 + -0x30);
          lVar19 = *(long *)(puVar3 + -0x28);
          puVar6 = puVar3;
          goto code_r0x0159d188;
        }
      }
    }
    auVar41 = func_0x00f78af4();
    *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x38) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnUse;
    if (auVar41._8_8_ != 0) goto code_r0x01535df4;
    lVar27 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x70) = uVar30;
    *(long *)(puVar3 + -0x68) = lVar12;
    *(undefined8 *)(puVar3 + -0x60) = uVar22;
    *(long *)(puVar3 + -0x58) = lVar28;
    *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x40;
    *(undefined **)(puVar3 + -0x48) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartHitPlayerSection;
    uVar22 = 0x3eb4000;
    if ((bRam0000000003eb4ec3 & 1) == 0) {
      func_0x00f78a20(0x3d527f0);
      func_0x00f78a20(0x3d27728);
      bRam0000000003eb4ec3 = 1;
    }
    lVar19 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar27);
    if (lVar19 == 0) {
code_r0x01535ee8:
      lVar13 = func_0x00f78af4();
      *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x50;
      *(undefined **)(puVar3 + -0x78) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnHit;
      if (uVar25 == 0) {
        func_0x00f78af4();
        return;
      }
      if (*(long *)(uVar25 + 0x10) != *(long *)(lVar13 + 0x38)) {
        return;
      }
      puVar5 = puVar3 + -0x70;
      puVar6 = *(undefined1 **)(puVar3 + -0x80);
      puVar35 = *(undefined **)(puVar3 + -0x78);
      goto code_r0x01535b58;
    }
    uVar25 = (ulong)*(uint *)(lVar19 + 0x1ac);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
              (lVar27,*(undefined8 *)(lVar19 + 400),uVar25,*(char *)(lVar19 + 0x1a8) != '\0',0);
    *(undefined4 *)(lVar27 + 0xe8) = 3;
    if (*(long *)(lVar27 + 0x10) == 0) goto code_r0x01535ee8;
    uVar30 = 0x3d52000;
    lVar19 = *(long *)(*(long *)(lVar27 + 0x10) + 0x40);
    lVar12 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
    uVar25 = uRam0000000003d527f0;
    /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(lVar12,lVar27,uRam0000000003d527f0,0);
    uVar22 = 0;
    if (lVar19 == 0) goto code_r0x01535ee8;
    *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0x70);
    *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)(puVar3 + -0x68);
    *(undefined8 *)(puVar3 + -0x60) = *(undefined8 *)(puVar3 + -0x60);
    *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(puVar3 + -0x58);
    *(undefined8 *)(puVar3 + -0x50) = *(undefined8 *)(puVar3 + -0x50);
    *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(puVar3 + -0x48);
    if ((bRam0000000003eb51f9 & 1) == 0) {
      func_0x00f78a20(0x3d27728,lVar12,0);
      bRam0000000003eb51f9 = 1;
    }
    plVar29 = (long *)(lVar19 + 0x98);
    lVar19 = *plVar29;
    while ((plVar18 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar19,lVar12,0), plVar18 == (long *)0x0 ||
           (*plVar18 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
      lVar27 = func_0x00ff0f44(plVar29,plVar18,lVar19);
      bVar9 = lVar19 == lVar27;
      lVar19 = lVar27;
      if (bVar9) {
        return;
      }
    }
    auVar41 = func_0x00f78e5c(plVar18);
    uVar22 = auVar41._8_8_;
    puVar6 = puVar3 + -0xa0;
    *(undefined8 *)(puVar3 + -0xa0) = 0x3d27728;
    *(long *)(puVar3 + -0x98) = lVar19;
    *(long **)(puVar3 + -0x90) = plVar29;
    *(long *)(puVar3 + -0x88) = lVar12;
    *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x50;
    *(undefined **)(puVar3 + -0x78) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
    puVar5 = puVar3 + -0x80;
    if ((bRam0000000003eb51fb & 1) == 0) {
      func_0x00f78a20(0x3d27730);
      bRam0000000003eb51fb = 1;
    }
    uVar30 = 0x3d27730;
    plVar29 = (long *)(auVar41._0_8_ + 0xa0);
    lVar19 = *plVar29;
    while ((plVar18 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar19,uVar22,0), plVar18 == (long *)0x0 ||
           (*plVar18 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
      lVar12 = func_0x00ff0f44(plVar29,plVar18,lVar19);
      bVar9 = lVar19 == lVar12;
      lVar19 = lVar12;
      if (bVar9) {
        return;
      }
    }
    puVar35 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
    auVar42 = func_0x00f78e5c(plVar18);
code_r0x0159d188:
    *(undefined8 *)(puVar6 + -0x30) = uVar30;
    *(long *)(puVar6 + -0x28) = lVar19;
    *(long **)(puVar6 + -0x20) = plVar29;
    *(undefined8 *)(puVar6 + -0x18) = uVar22;
    *(undefined1 **)(puVar6 + -0x10) = puVar5;
    *(undefined **)(puVar6 + -8) = puVar35;
    if ((bRam0000000003eb51f3 & 1) == 0) {
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb51f3 = 1;
    }
    plVar29 = (long *)(auVar42._0_8_ + 0x80);
    lVar19 = *plVar29;
    while ((plVar18 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar19,auVar42._8_8_,0), plVar18 == (long *)0x0 ||
           (*plVar18 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
      lVar12 = func_0x00ff0f44(plVar29,plVar18,lVar19);
      bVar9 = lVar19 == lVar12;
      lVar19 = lVar12;
      if (bVar9) {
        return;
      }
    }
    auVar41 = func_0x00f78e5c(plVar18);
    *(undefined8 *)(puVar6 + -0x60) = 0x3d27718;
    *(long *)(puVar6 + -0x58) = lVar19;
    *(long **)(puVar6 + -0x50) = plVar29;
    *(long *)(puVar6 + -0x48) = auVar42._8_8_;
    *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0x38) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
    if ((bRam0000000003eb51fd & 1) == 0) {
      func_0x00f78a20(0x3d27738);
      bRam0000000003eb51fd = 1;
    }
    plVar29 = (long *)(auVar41._0_8_ + 0xa8);
    lVar19 = *plVar29;
    while ((plVar18 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar19,auVar41._8_8_,0), plVar18 == (long *)0x0 ||
           (*plVar18 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
      lVar12 = func_0x00ff0f44(plVar29,plVar18,lVar19);
      bVar9 = lVar19 == lVar12;
      lVar19 = lVar12;
      if (bVar9) {
        return;
      }
    }
    auVar44 = func_0x00f78e5c(plVar18);
    *(undefined8 *)(puVar6 + -0x90) = 0x3d27738;
    *(long *)(puVar6 + -0x88) = lVar19;
    *(long **)(puVar6 + -0x80) = plVar29;
    *(long *)(puVar6 + -0x78) = auVar41._8_8_;
    *(undefined1 **)(puVar6 + -0x70) = puVar6 + -0x40;
    *(undefined **)(puVar6 + -0x68) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
    if ((bRam0000000003eb51f5 & 1) == 0) {
      func_0x00f78a20(0x3d27700);
      bRam0000000003eb51f5 = 1;
    }
    plVar29 = (long *)(auVar44._0_8_ + 0x88);
    lVar19 = *plVar29;
    while ((plVar18 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar19,auVar44._8_8_,0), plVar18 == (long *)0x0 ||
           (*plVar18 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
      lVar12 = func_0x00ff0f44(plVar29,plVar18,lVar19);
      bVar9 = lVar19 == lVar12;
      lVar19 = lVar12;
      if (bVar9) {
        return;
      }
    }
    auVar41 = func_0x00f78e5c(plVar18);
    lVar12 = auVar41._0_8_;
    *(undefined8 *)(puVar6 + -0xe0) = unaff_x26;
    *(undefined8 *)(puVar6 + -0xd8) = unaff_x25;
    *(undefined8 *)(puVar6 + -0xd0) = unaff_x24;
    *(undefined8 **)(puVar6 + -200) = unaff_x23;
    *(undefined8 *)(puVar6 + -0xc0) = 0x3d27700;
    *(long *)(puVar6 + -0xb8) = lVar19;
    *(long **)(puVar6 + -0xb0) = plVar29;
    *(long *)(puVar6 + -0xa8) = auVar44._8_8_;
    *(undefined1 **)(puVar6 + -0xa0) = puVar6 + -0x70;
    *(code **)(puVar6 + -0x98) = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
    unaff_x23 = (undefined8 *)0x3d27718;
    unaff_x24 = 0x3d570f0;
    if ((bRam0000000003eb51b7 & 1) == 0) {
      func_0x00f78a20(0x3d524e0);
      func_0x00f78a20(0x3d524e8);
      func_0x00f78a20(0x3d524f0);
      func_0x00f78a20(0x3d524f8);
      func_0x00f78a20(0x3d570d0);
      func_0x00f78a20(0x3d570f0);
      func_0x00f78a20(0x3d27700);
      func_0x00f78a20(0x3d27718);
      func_0x00f78a20(0x3d27728);
      func_0x00f78a20(0x3d27730);
      func_0x00f78a20(0x3d27738);
      bRam0000000003eb51b7 = 1;
    }
    lVar19 = *(long *)(lVar12 + 0x40);
    uVar30 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
    auVar43._8_8_ = uVar30;
    auVar43._0_8_ = lVar19;
    uVar22 = 0;
    /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(uVar30,lVar12,uRam0000000003d570f0,0);
    if (lVar19 == 0) {
      puVar35 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
      auVar43 = func_0x00f78af4();
    }
    else {
      unaff_x24 = 0x3d27000;
      unaff_x25 = 0x3d52000;
      puVar35 = (undefined *)0x159d470;
    }
    *(undefined8 *)(puVar6 + -0x110) = uVar30;
    *(long *)(puVar6 + -0x108) = lVar19;
    *(long *)(puVar6 + -0x100) = auVar41._8_8_;
    *(long *)(puVar6 + -0xf8) = lVar12;
    *(undefined1 **)(puVar6 + -0xf0) = puVar6 + -0xa0;
    *(undefined **)(puVar6 + -0xe8) = puVar35;
    if ((bRam0000000003eb51f4 & 1) == 0) {
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb51f4 = 1;
    }
    plVar29 = (long *)(auVar43._0_8_ + 0x80);
    lVar19 = *plVar29;
    while ((plVar18 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar19,auVar43._8_8_,0), plVar18 == (long *)0x0 ||
           (*plVar18 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
      lVar12 = func_0x00ff0f44(plVar29,plVar18,lVar19);
      bVar9 = lVar19 == lVar12;
      lVar19 = lVar12;
      if (bVar9) {
        return;
      }
    }
    auVar41 = func_0x00f78e5c(plVar18);
    *(undefined8 *)(puVar6 + -0x140) = 0x3d27718;
    *(long *)(puVar6 + -0x138) = lVar19;
    *(long **)(puVar6 + -0x130) = plVar29;
    *(long *)(puVar6 + -0x128) = auVar43._8_8_;
    *(undefined1 **)(puVar6 + -0x120) = puVar6 + -0xf0;
    *(undefined **)(puVar6 + -0x118) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
    if ((bRam0000000003eb51f6 & 1) == 0) {
      func_0x00f78a20(0x3d27700);
      bRam0000000003eb51f6 = 1;
    }
    plVar29 = (long *)(auVar41._0_8_ + 0x88);
    lVar19 = *plVar29;
    while ((plVar18 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar19,auVar41._8_8_,0), plVar18 == (long *)0x0 ||
           (*plVar18 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
      lVar12 = func_0x00ff0f44(plVar29,plVar18,lVar19);
      bVar9 = lVar19 == lVar12;
      lVar19 = lVar12;
      if (bVar9) {
        return;
      }
    }
    auVar44 = func_0x00f78e5c(plVar18);
    *(undefined8 *)(puVar6 + -0x170) = 0x3d27700;
    *(long *)(puVar6 + -0x168) = lVar19;
    *(long **)(puVar6 + -0x160) = plVar29;
    *(long *)(puVar6 + -0x158) = auVar41._8_8_;
    *(undefined1 **)(puVar6 + -0x150) = puVar6 + -0x120;
    *(undefined **)(puVar6 + -0x148) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
    if ((bRam0000000003eb51fe & 1) == 0) {
      func_0x00f78a20(0x3d27738);
      bRam0000000003eb51fe = 1;
    }
    plVar29 = (long *)(auVar44._0_8_ + 0xa8);
    lVar19 = *plVar29;
    while ((plVar18 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar19,auVar44._8_8_,0), plVar18 == (long *)0x0 ||
           (*plVar18 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
      lVar12 = func_0x00ff0f44(plVar29,plVar18,lVar19);
      bVar9 = lVar19 == lVar12;
      lVar19 = lVar12;
      if (bVar9) {
        return;
      }
    }
    auVar41 = func_0x00f78e5c(plVar18);
    lVar13 = auVar41._8_8_;
    puVar7 = puVar6 + -0x1a0;
    *(undefined8 *)(puVar6 + -0x1a0) = 0x3d27738;
    *(long *)(puVar6 + -0x198) = lVar19;
    *(long **)(puVar6 + -400) = plVar29;
    *(long *)(puVar6 + -0x188) = auVar44._8_8_;
    *(undefined1 **)(puVar6 + -0x180) = puVar6 + -0x150;
    *(undefined **)(puVar6 + -0x178) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
    puVar6 = puVar6 + -0x180;
    if ((bRam0000000003eb51fc & 1) == 0) {
      func_0x00f78a20(0x3d27730);
      bRam0000000003eb51fc = 1;
    }
    uVar30 = 0x3d27730;
    plVar29 = (long *)(auVar41._0_8_ + 0xa0);
    lVar12 = *plVar29;
    while ((plVar18 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar12,lVar13,0), plVar18 == (long *)0x0 ||
           (*plVar18 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
      lVar19 = func_0x00ff0f44(plVar29,plVar18,lVar12);
      bVar9 = lVar12 == lVar19;
      lVar12 = lVar19;
      if (bVar9) {
        return;
      }
    }
    puVar35 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
    auVar44 = func_0x00f78e5c(plVar18);
code_r0x0159d844:
    *(undefined8 *)(puVar7 + -0x30) = uVar30;
    *(long *)(puVar7 + -0x28) = lVar12;
    *(long **)(puVar7 + -0x20) = plVar29;
    *(long *)(puVar7 + -0x18) = lVar13;
    *(undefined1 **)(puVar7 + -0x10) = puVar6;
    *(undefined **)(puVar7 + -8) = puVar35;
    if ((bRam0000000003eb51fa & 1) == 0) {
      func_0x00f78a20(0x3d27728);
      bRam0000000003eb51fa = 1;
    }
    plVar29 = (long *)0x3d27728;
    plVar18 = (long *)(auVar44._0_8_ + 0x98);
    lVar19 = *plVar18;
    while( true ) {
      puVar16 = (undefined8 *)0x0;
      plVar17 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar19,auVar44._8_8_);
      if ((plVar17 != (long *)0x0) && (*plVar17 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
      lVar12 = func_0x00ff0f44(plVar18,plVar17,lVar19);
      bVar9 = lVar19 == lVar12;
      lVar19 = lVar12;
      if (bVar9) {
        return;
      }
    }
    lVar12 = func_0x00f78e5c(plVar17);
    *(undefined8 *)(puVar7 + -0x80) = unaff_x26;
    *(undefined8 *)(puVar7 + -0x78) = unaff_x25;
    *(undefined8 *)(puVar7 + -0x70) = unaff_x24;
    *(undefined8 **)(puVar7 + -0x68) = unaff_x23;
    *(undefined8 *)(puVar7 + -0x60) = 0x3d27728;
    *(long *)(puVar7 + -0x58) = lVar19;
    *(long **)(puVar7 + -0x50) = plVar18;
    *(long *)(puVar7 + -0x48) = auVar44._8_8_;
    *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x38) = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
    lVar19 = 0x3eb5000;
    if ((bRam0000000003eb5204 & 1) == 0) {
      func_0x00f78a20(0x3d29f28);
      func_0x00f78a20(0x3d2a1d8);
      func_0x00f78a20(0x3d2a1c8);
      func_0x00f78a20(0x3d1b4e0);
      func_0x00f78a20(0x3d1b4e8);
      func_0x00f78a20(0x3d1b3b0);
      func_0x00f78a20(0x3d43378);
      func_0x00f78a20(0x3d57230);
      func_0x00f78a20(0x3d57238);
      func_0x00f78a20(0x3d57240);
      bRam0000000003eb5204 = 1;
    }
    lVar27 = *(long *)(lVar12 + 0x28);
    if (lVar27 != 0) {
      plVar29 = (long *)(lVar12 + 0x10);
      uVar24 = *(uint *)(lVar27 + 0x18);
      if ((int)uVar24 < 1) {
code_r0x0159d9f0:
        if (((*(long *)(lVar12 + 0x20) == 0) ||
            (lVar13 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20), lVar13 == 0)) ||
           (unaff_x23 = *(undefined8 **)(lVar13 + 0x10), unaff_x23 == (undefined8 *)0x0))
        goto code_r0x0159db7c;
        uVar30 = 0x3d1b4e8;
        unaff_x24 = 0x3d1b4e8;
        lVar19 = unaff_x23[3];
        lVar27 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
        uVar22 = uRam0000000003d2a1d8;
        /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar27,lVar12,uRam0000000003d57238,uRam0000000003d2a1d8);
        puVar16 = (undefined8 *)0x0;
        plVar18 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar19,lVar27);
        if ((plVar18 == (long *)0x0) || (*plVar18 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
          unaff_x23[3] = plVar18;
          if ((*(long *)(lVar12 + 0x20) == 0) ||
             ((lVar13 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20), lVar13 == 0 ||
              (unaff_x23 = *(undefined8 **)(lVar13 + 0x10), unaff_x23 == (undefined8 *)0x0))))
          goto code_r0x0159db7c;
          uVar30 = 0x3d1b3b0;
          unaff_x24 = 0x3d1b3b0;
          lVar19 = unaff_x23[0xe];
          lVar27 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
          uVar22 = uRam0000000003d29f28;
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar27,lVar12,uRam0000000003d57240,uRam0000000003d29f28);
          puVar16 = (undefined8 *)0x0;
          plVar18 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar19,lVar27);
          if ((plVar18 == (long *)0x0) || (*plVar18 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
            unaff_x23[0xe] = plVar18;
            if (((*(long *)(lVar12 + 0x20) == 0) ||
                (lVar13 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20), lVar13 == 0)) ||
               (unaff_x23 = *(undefined8 **)(lVar13 + 0x10), unaff_x23 == (undefined8 *)0x0))
            goto code_r0x0159db7c;
            uVar30 = 0x3d1b4e0;
            lVar19 = unaff_x23[5];
            lVar27 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
            uVar22 = uRam0000000003d2a1c8;
            /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar27,lVar12,uRam0000000003d57230,uRam0000000003d2a1c8);
            puVar16 = (undefined8 *)0x0;
            plVar18 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar19,lVar27);
            if ((plVar18 == (long *)0x0) || (*plVar18 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
              unaff_x23[5] = plVar18;
              *(undefined1 *)(lVar12 + 0x50) = 0;
              *(undefined8 *)(lVar12 + 0x18) = 0;
              *plVar29 = 0;
              *(undefined8 *)(lVar12 + 0x28) = 0;
              *(undefined8 *)(lVar12 + 0x20) = 0;
              return;
            }
          }
        }
        goto code_r0x0159db8c;
      }
      unaff_x23 = (undefined8 *)0x0;
      unaff_x24 = 0x3d43378;
      while( true ) {
        uVar31 = (uint)unaff_x23;
        uVar30 = unaff_x24;
        if (uVar24 <= uVar31) goto code_r0x0159db80;
        if (*plVar29 == 0) break;
        lVar19 = *(long *)(lVar27 + (long)(int)uVar31 * 8 + 0x20);
        puVar16 = puRam0000000003d43378;
        /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar29,lVar19);
        if (lVar19 == 0) break;
        /*Atlas.Gameplay.Player.GameContextPlayer$$DeInit*/ func_0x015a5404(lVar19);
        unaff_x23 = (undefined8 *)(ulong)(uVar31 + 1);
        uVar24 = *(uint *)(lVar27 + 0x18);
        if ((int)uVar24 <= (int)(uVar31 + 1)) goto code_r0x0159d9f0;
      }
    }
code_r0x0159db7c:
    func_0x00f78af4();
    uVar30 = unaff_x24;
code_r0x0159db80:
    uVar15 = func_0x00f78b24();
    func_0x00f78ac0(uVar15,0);
code_r0x0159db8c:
    auVar41 = func_0x00f78e5c();
    puVar20 = auVar41._8_8_;
    plVar18 = auVar41._0_8_;
    *(undefined8 *)(puVar7 + -0xc0) = uVar30;
    *(undefined8 **)(puVar7 + -0xb8) = unaff_x23;
    *(long **)(puVar7 + -0xb0) = plVar29;
    *(long *)(puVar7 + -0xa8) = lVar27;
    *(long *)(puVar7 + -0xa0) = lVar19;
    *(long *)(puVar7 + -0x98) = lVar12;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x40;
    *(code **)(puVar7 + -0x88) = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
    puVar21 = puVar16;
    if ((bRam0000000003eb51b8 & 1) == 0) {
      func_0x00f78a20(0x3d69658);
      bRam0000000003eb51b8 = 1;
    }
    if (((plVar18[3] != 0) &&
        (puVar21 = puVar16, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar18[3],puVar20,puVar16,uVar22,0),
        puVar16 != (undefined8 *)0x0)) && (lVar19 = puVar16[2], lVar19 != 0)) {
      uVar30 = *(undefined8 *)(lVar19 + 0x48);
      uVar36 = *(undefined8 *)(lVar19 + 0x60);
      uVar15 = *(undefined8 *)(lVar19 + 0x58);
      *(undefined8 *)(puVar7 + -0xd8) = *(undefined8 *)(lVar19 + 0x50);
      *(undefined8 *)(puVar7 + -0xe0) = uVar30;
      *(undefined8 *)(puVar7 + -200) = uVar36;
      *(undefined8 *)(puVar7 + -0xd0) = uVar15;
      iVar10 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar7 + -0xe0,0);
      if ((iVar10 == 0) || (puVar16 == puVar20)) {
        return;
      }
      iVar10 = (**(code **)(*plVar18 + 0x2a8))(plVar18,*(undefined8 *)(*plVar18 + 0x2b0));
      if ((plVar18[0x18] != 0) && (lVar19 = *(long *)(plVar18[0x18] + 0x20), lVar19 != 0)) {
        /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar7 + -0xf8,lVar19,0);
        *(int *)(puVar16 + 0xf) = *(int *)(puVar16 + 0xf) + iVar10;
        uVar30 = *(undefined8 *)(puVar7 + -0xf8);
        puVar16[0x11] = *(undefined8 *)(puVar7 + -0xf0);
        puVar16[0x10] = uVar30;
        puVar16[0x12] = *(undefined8 *)(puVar7 + -0xe8);
        if (puVar16[2] != 0) {
          if (*(int *)(puVar16[2] + 0x50) == 0) {
            uVar30 = (**(code **)(*plVar18 + 0x208))(plVar18,*(undefined8 *)(*plVar18 + 0x210));
            puVar21 = (undefined8 *)0x0;
            iVar10 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar30,/*STR('BattleGameContext')*/ uRam0000000003d69658);
            if (iVar10 != 0) {
              if (plVar18[3] == 0) goto LAB_0159dcf8;
              /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar18[3],*(undefined4 *)(puVar16 + 0xf),0);
            }
          }
          if (plVar18[0x46] == 0) {
            return;
          }
          /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar18[0x46],puVar20,puVar16,uVar22,0);
          return;
        }
      }
    }
LAB_0159dcf8:
    auVar45 = func_0x00f78af4();
    lVar19 = auVar45._0_8_;
    iVar10 = *(int *)(lVar19 + 0x78);
    uVar15 = puVar21[1];
    uVar22 = *puVar21;
    *(undefined8 *)(puVar7 + -0x118) = uVar15;
    *(undefined8 *)(puVar7 + -0x120) = uVar22;
    uVar30 = puVar21[2];
    *(undefined8 *)(puVar7 + -0x110) = uVar30;
    *(int *)(lVar19 + 0x78) = iVar10 + auVar45._8_4_;
    *(undefined8 *)(lVar19 + 0x88) = uVar15;
    *(undefined8 *)(lVar19 + 0x80) = uVar22;
    *(undefined8 *)(lVar19 + 0x90) = uVar30;
    return;
  }
  uVar22 = *(undefined8 *)((long)plVar18 + -0x40);
  uVar36 = *(undefined8 *)((long)plVar18 + -0x38);
  puVar2 = (undefined1 *)((long)plVar18 + -0x30);
  uVar15 = *(undefined8 *)((long)plVar18 + -0x50);
  uVar37 = *(undefined8 *)((long)plVar18 + -0x48);
Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RetrySection:
  *(undefined8 *)(puVar2 + -0x30) = uVar30;
  *(long *)(puVar2 + -0x28) = lVar12;
  *(undefined8 *)(puVar2 + -0x20) = uVar15;
  *(undefined8 *)(puVar2 + -0x18) = uVar37;
  *(undefined8 *)(puVar2 + -0x10) = uVar22;
  *(undefined8 *)(puVar2 + -8) = uVar36;
  *(int *)(lVar19 + 0x8c) = *(int *)(lVar19 + 0x8c) + 1;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
            (puVar2 + -0x90,lVar19,*(undefined8 *)(lVar19 + 0xa8));
  *(undefined8 *)(puVar2 + -0xd8) = *(undefined8 *)(puVar2 + -0x88);
  *(undefined8 *)(puVar2 + -0xe0) = *(undefined8 *)(puVar2 + -0x90);
  *(undefined8 *)(puVar2 + -200) = *(undefined8 *)(puVar2 + -0x78);
  *(undefined8 *)(puVar2 + -0xd0) = *(undefined8 *)(puVar2 + -0x80);
  uVar38 = *(undefined8 *)(puVar2 + -0x58);
  uVar37 = *(undefined8 *)(puVar2 + -0x60);
  uVar36 = *(undefined8 *)(puVar2 + -0x48);
  uVar15 = *(undefined8 *)(puVar2 + -0x50);
  *(undefined8 *)(puVar2 + -0xa8) = uVar38;
  *(undefined8 *)(puVar2 + -0xb0) = uVar37;
  *(undefined8 *)(puVar2 + -0x98) = uVar36;
  *(undefined8 *)(puVar2 + -0xa0) = uVar15;
  uVar40 = *(undefined8 *)(puVar2 + -0x68);
  uVar39 = *(undefined8 *)(puVar2 + -0x70);
  *(undefined8 *)(puVar2 + -0xb8) = uVar40;
  *(undefined8 *)(puVar2 + -0xc0) = uVar39;
  uVar30 = *(undefined8 *)(puVar2 + -0x40);
  uVar22 = *(undefined8 *)(puVar2 + -0x38);
  *(undefined8 *)(puVar2 + -0x68) = uVar40;
  *(undefined8 *)(puVar2 + -0x70) = uVar39;
  *(undefined8 *)(puVar2 + -0x58) = uVar38;
  *(undefined8 *)(puVar2 + -0x60) = uVar37;
  *(undefined8 *)(puVar2 + -0x48) = uVar36;
  *(undefined8 *)(puVar2 + -0x50) = uVar15;
  *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(puVar2 + -0x88);
  *(undefined8 *)(puVar2 + -0x90) = *(undefined8 *)(puVar2 + -0x90);
  *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x78);
  *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0x80);
  *(undefined8 *)(puVar2 + -0xf8) = uVar38;
  *(undefined8 *)(puVar2 + -0x100) = uVar37;
  *(undefined8 *)(puVar2 + -0xe8) = uVar36;
  *(undefined8 *)(puVar2 + -0xf0) = uVar15;
  *(undefined8 *)(puVar2 + -0x108) = uVar40;
  *(undefined8 *)(puVar2 + -0x110) = uVar39;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar19,puVar2 + -0x110);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnHumanPlayerAtLocator(lVar19,uVar30);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnAIsAtLocators(lVar19,uVar22);
  uVar30 = *(undefined8 *)(lVar19 + 0xa8);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection(lVar19);
  plVar29 = *(long **)(puVar2 + -0x30);
  *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar2 + -0x38) = unaff_x23;
  *(long **)(puVar2 + -0x30) = plVar29;
  *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
  *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
  *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
  *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  *(undefined8 *)(puVar2 + -0x70) = uVar30;
  if ((bRam0000000003eb48a2 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d62270);
    func_0x00f78a20(0x3d26ac8);
    bRam0000000003eb48a2 = 1;
  }
  *(undefined8 *)(puVar2 + -0x80) = 0;
  *(undefined8 *)(puVar2 + -0x98) = 0;
  *(undefined8 *)(puVar2 + -0xa0) = 0;
  *(undefined8 *)(puVar2 + -0x88) = 0;
  *(undefined8 *)(puVar2 + -0x90) = 0;
  *(undefined8 *)(puVar2 + -0xb8) = 0;
  *(undefined8 *)(puVar2 + -0xc0) = 0;
  *(undefined8 *)(puVar2 + -0xa8) = 0;
  *(undefined8 *)(puVar2 + -0xb0) = 0;
  *(undefined8 *)(puVar2 + -200) = 0;
  *(undefined8 *)(lVar19 + 0xa8) = uVar30;
  if ((*(long *)(lVar19 + 0x40) != 0) &&
     (lVar12 = *(long *)(*(long *)(lVar19 + 0x40) + 0x30), lVar12 != 0)) {
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(puVar2 + -0x110,lVar12,uRam0000000003d3cd70);
    *(undefined8 *)(puVar2 + -0x98) = *(undefined8 *)(puVar2 + -0xe8);
    *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xf0);
    *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(puVar2 + -0xd8);
    *(undefined8 *)(puVar2 + -0x90) = *(undefined8 *)(puVar2 + -0xe0);
    *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0xd0);
    *(undefined8 *)(puVar2 + -0xb8) = *(undefined8 *)(puVar2 + -0x108);
    *(undefined8 *)(puVar2 + -0xc0) = *(undefined8 *)(puVar2 + -0x110);
    *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0xf8);
    *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0x100);
LAB_01478328:
    do {
      uVar25 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(puVar2 + -0xc0,uRam0000000003d33320);
      if ((uVar25 & 1) == 0) {
LAB_01478494:
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0xc0,uRam0000000003d33318);
        return;
      }
      lVar12 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___ctor(lVar12,0);
      if (lVar12 == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(long *)(lVar12 + 0x50) = lVar19;
      uVar36 = *(undefined8 *)(puVar2 + -0x98);
      uVar15 = *(undefined8 *)(puVar2 + -0xa0);
      uVar22 = *(undefined8 *)(puVar2 + -0x88);
      uVar30 = *(undefined8 *)(puVar2 + -0x90);
      uVar38 = *(undefined8 *)(puVar2 + -0xa8);
      uVar37 = *(undefined8 *)(puVar2 + -0xb0);
      *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(puVar2 + -0x80);
      *(undefined8 *)(lVar12 + 0x28) = uVar36;
      *(undefined8 *)(lVar12 + 0x20) = uVar15;
      *(undefined8 *)(lVar12 + 0x38) = uVar22;
      *(undefined8 *)(lVar12 + 0x30) = uVar30;
      *(undefined8 *)(lVar12 + 0x18) = uVar38;
      *(undefined8 *)(lVar12 + 0x10) = uVar37;
      *(undefined8 *)(puVar2 + -0x110) = *(undefined8 *)(lVar12 + 0x18);
      uVar30 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,puVar2 + -0x110);
      uVar25 = /*Atlas.StringID$$Equals*/ func_0x015057f8(puVar2 + -0x70,uVar30,0);
    } while ((uVar25 & 1) == 0);
    if (*(long *)(lVar19 + 0x60) == 0) {
      func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
      pcVar32 = (code *)SoftwareBreakpoint(1,0x14784e0);
      (*pcVar32)();
    }
    puVar16 = (undefined8 *)(lVar12 + 0x10);
    puVar21 = (undefined8 *)(lVar12 + 0x48);
    uVar25 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar19 + 0x60),*puVar16,puVar21,0);
    if ((uVar25 & 1) == 0) goto LAB_01478494;
    uVar30 = *(undefined8 *)(lVar19 + 0xa0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar25 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar30,0,0);
    if ((uVar25 & 1) != 0) {
      if (*(long *)(lVar19 + 0xa0) == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(undefined8 *)(puVar2 + -200) = *(undefined8 *)(*(long *)(lVar19 + 0xa0) + 0x18);
      *(undefined8 *)(puVar2 + -0x110) = *puVar16;
      uVar30 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,puVar2 + -0x110);
      uVar25 = /*Atlas.StringID$$Equals*/ func_0x015057f8(puVar2 + -200,uVar30,0);
      if ((uVar25 & 1) != 0) {
        uVar30 = *(undefined8 *)(lVar19 + 0x38);
        uVar22 = *puVar16;
        uVar36 = *(undefined8 *)(lVar12 + 0x28);
        uVar15 = *(undefined8 *)(lVar12 + 0x20);
        *(undefined8 *)(puVar2 + -0x148) = *(undefined8 *)(lVar12 + 0x18);
        *(undefined8 *)(puVar2 + -0x150) = uVar22;
        *(undefined8 *)(puVar2 + -0x138) = uVar36;
        *(undefined8 *)(puVar2 + -0x140) = uVar15;
        uVar22 = *(undefined8 *)(lVar12 + 0x30);
        *(undefined8 *)(puVar2 + -0x128) = *(undefined8 *)(lVar12 + 0x38);
        *(undefined8 *)(puVar2 + -0x130) = uVar22;
        *(undefined8 *)(puVar2 + -0x120) = *(undefined8 *)(lVar12 + 0x40);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar19,uVar30,puVar2 + -0x150);
        goto LAB_01478328;
      }
    }
    uVar22 = *puVar21;
    uVar30 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar30,lVar12,uRam0000000003d62270,0);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AddBaseListener(lVar19,uVar22,uVar30,*puVar21);
    goto LAB_01478328;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar18 = (long *)___cxa_begin_catch();
    lVar19 = *plVar18;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0xc0,uRam0000000003d33318);
    if (lVar19 == 0) {
      return;
    }
    func_0x00f78ac0(lVar19,0);
  }
  lVar12 = __Unwind_Resume();
  *(undefined8 *)(puVar2 + -400) = unaff_x24;
  *(undefined8 **)(puVar2 + -0x188) = unaff_x23;
  *(long **)(puVar2 + -0x180) = plVar29;
  *(undefined8 *)(puVar2 + -0x178) = 0x3eb4000;
  *(undefined8 *)(puVar2 + -0x170) = uVar30;
  *(long *)(puVar2 + -0x168) = lVar19;
  *(undefined1 **)(puVar2 + -0x160) = puVar2 + -0x10;
  *(code **)(puVar2 + -0x158) = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
  lVar19 = 0x3eb4000;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  *(undefined8 *)(puVar2 + -0x1e8) = 0;
  *(undefined4 *)(puVar2 + -0x1f0) = 0;
  if ((*(long *)(lVar12 + 0x40) != 0) &&
     (lVar27 = *(long *)(*(long *)(lVar12 + 0x40) + 0x30), lVar27 != 0)) {
    plVar29 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(puVar2 + -0x240,lVar27,uRam0000000003d3cd70);
    *(undefined8 *)(puVar2 + -0x1b8) = *(undefined8 *)(puVar2 + -0x218);
    *(undefined8 *)(puVar2 + -0x1c0) = *(undefined8 *)(puVar2 + -0x220);
    *(undefined8 *)(puVar2 + -0x1a8) = *(undefined8 *)(puVar2 + -0x208);
    *(undefined8 *)(puVar2 + -0x1b0) = *(undefined8 *)(puVar2 + -0x210);
    *(undefined8 *)(puVar2 + -0x1a0) = *(undefined8 *)(puVar2 + -0x200);
    *(undefined8 *)(puVar2 + -0x1d8) = *(undefined8 *)(puVar2 + -0x238);
    *(undefined8 *)(puVar2 + -0x1e0) = *(undefined8 *)(puVar2 + -0x240);
    *(undefined8 *)(puVar2 + -0x1c8) = *(undefined8 *)(puVar2 + -0x228);
    *(undefined8 *)(puVar2 + -0x1d0) = *(undefined8 *)(puVar2 + -0x230);
LAB_01478624:
    do {
      uVar25 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(puVar2 + -0x1e0,uRam0000000003d33320);
      if ((uVar25 & 1) == 0) goto LAB_01478690;
      uVar30 = *(undefined8 *)(puVar2 + -0x1d0);
      *(undefined8 *)(puVar2 + -0x240) = *(undefined8 *)(puVar2 + -0x1c8);
      uVar22 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,puVar2 + -0x240);
      uVar25 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar12 + 0xa8,uVar22,0);
      if ((uVar25 & 1) != 0) {
        if (*(long *)(lVar12 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar25 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar12 + 0x60),uVar30,puVar2 + -0x1e8,0);
          if ((uVar25 & 1) == 0) {
            uVar23 = 0x86;
            goto code_r0x0147869c;
          }
          if (*(long *)(puVar2 + -0x1e8) != 0) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                      (lVar12,*(undefined8 *)(*(long *)(puVar2 + -0x1e8) + 0x18));
            goto LAB_01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar32 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar32)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar18 = (long *)___cxa_begin_catch();
    lVar19 = *plVar18;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0x1e0,*unaff_x23);
    if (lVar19 == 0) goto code_r0x014786b8;
    func_0x00f78ac0(lVar19,0);
  }
  lVar27 = __Unwind_Resume();
  *(long *)(puVar2 + -0x260) = lVar19;
  *(long *)(puVar2 + -600) = lVar12;
  *(undefined1 **)(puVar2 + -0x250) = puVar2 + -0x160;
  *(code **)(puVar2 + -0x248) = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
            (puVar2 + -0x2c0,lVar27,*(undefined8 *)(lVar27 + 0xa8));
  uVar30 = *(undefined8 *)(puVar2 + -0x2a0);
  uVar15 = *(undefined8 *)(puVar2 + -0x288);
  uVar22 = *(undefined8 *)(puVar2 + -0x290);
  extraout_x8[5] = *(undefined8 *)(puVar2 + -0x298);
  extraout_x8[4] = uVar30;
  extraout_x8[7] = uVar15;
  extraout_x8[6] = uVar22;
  uVar30 = *(undefined8 *)(puVar2 + -0x280);
  uVar15 = *(undefined8 *)(puVar2 + -0x268);
  uVar22 = *(undefined8 *)(puVar2 + -0x270);
  extraout_x8[9] = *(undefined8 *)(puVar2 + -0x278);
  extraout_x8[8] = uVar30;
  extraout_x8[0xb] = uVar15;
  extraout_x8[10] = uVar22;
  uVar30 = *(undefined8 *)(puVar2 + -0x2c0);
  uVar15 = *(undefined8 *)(puVar2 + -0x2a8);
  uVar22 = *(undefined8 *)(puVar2 + -0x2b0);
  extraout_x8[1] = *(undefined8 *)(puVar2 + -0x2b8);
  *extraout_x8 = uVar30;
  extraout_x8[3] = uVar15;
  extraout_x8[2] = uVar22;
  return;
code_r0x01535df4:
  if (*(long *)(auVar41._8_8_ + 0x10) != *(long *)(auVar41._0_8_ + 0x38)) {
    return;
  }
  puVar4 = puVar3 + -0x30;
  uVar15 = *(undefined8 *)(puVar3 + -0x40);
  uVar36 = *(undefined8 *)(puVar3 + -0x38);
  lVar13 = auVar41._0_8_;
  goto Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteUseUsableCondition;
LAB_01478690:
  uVar23 = 0x7b;
code_r0x0147869c:
  *(undefined4 *)(puVar2 + -0x1f8) = uVar23;
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0x1e0,uRam0000000003d33318);
  if (*(int *)(puVar2 + -0x1f8) == 0x86) {
    return;
  }
code_r0x014786b8:
  lVar19 = *plVar29;
  if (((*(ushort *)(lVar19 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar19 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar19 = *plVar29;
  }
  *(undefined8 *)(lVar12 + 0xa8) = **(undefined8 **)(lVar19 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x1535564 | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.OnEnterPickupUsableStartTrigger
// ============================================================

/* WARNING: Possible PIC construction at 0x01535794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535cfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01535aa8) */
/* WARNING: Removing unreachable block (ram,0x01535a64) */
/* WARNING: Removing unreachable block (ram,0x01535a6c) */
/* WARNING: Removing unreachable block (ram,0x01535a98) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x01535798) */
/* WARNING: Removing unreachable block (ram,0x015357cc) */
/* WARNING: Removing unreachable block (ram,0x01535c74) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterPickupUsableStartTrigger
               (long param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined8 *extraout_x8;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  undefined8 uVar29;
  uint uVar30;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  code *pcVar31;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined1 *puVar32;
  undefined8 unaff_x28;
  undefined8 *******pppppppuVar33;
  undefined *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [12];
  long lStack_50;
  long lStack_48;
  undefined8 ******ppppppuStack_40;
  undefined *puStack_38;
  
  if ((bRam0000000003eb4ebe & 1) == 0) {
    func_0x00f78a20(0x3d527e0);
    func_0x00f78a20(0x3d527f8);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ebe = 1;
  }
  iVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision(param_1,param_2,0);
  if (iVar9 == 0) {
    return;
  }
  uVar29 = 0x3d52000;
  *(undefined4 *)(param_1 + 0xe8) = 1;
  lVar26 = *(long *)(param_1 + 0xc0);
  lVar11 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(lVar11,param_1,uRam0000000003d527e0,0);
  if (lVar26 != 0) {
    /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar26,lVar11,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar27 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
      lVar12 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
      uVar20 = 0;
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(lVar12,param_1,uRam0000000003d527f8,0);
      lVar26 = 0;
      lVar11 = lVar12;
      if (lVar27 != 0) {
        puVar7 = &stack0xffffffffffffffd0;
        puVar32 = &stack0xfffffffffffffff0;
        if ((bRam0000000003eb51ef & 1) == 0) {
          func_0x00f78a20(0x3d27718,lVar12,0);
          bRam0000000003eb51ef = 1;
        }
        uVar29 = 0x3d27718;
        plVar28 = (long *)(lVar27 + 0x70);
        lVar11 = *plVar28;
        while ((plVar17 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,lVar12,0), plVar17 == (long *)0x0 ||
               (*plVar17 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
          lVar26 = func_0x00ff0f44(plVar28,plVar17,lVar11);
          bVar8 = lVar11 == lVar26;
          lVar11 = lVar26;
          if (bVar8) {
            return;
          }
        }
        puVar34 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableAttached;
        auVar42 = func_0x00f78e5c(plVar17);
        goto code_r0x015a5cc8;
      }
    }
  }
  auVar42 = func_0x00f78af4();
  lVar27 = auVar42._0_8_;
  plVar17 = &lStack_50;
  puStack_38 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterPickupUsableEndTrigger;
  pppppppuVar33 = &ppppppuStack_40;
  lStack_50 = lVar26;
  lStack_48 = param_1;
  ppppppuStack_40 = (undefined8 ******)&stack0xfffffffffffffff0;
  iVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision(lVar27,auVar42._8_8_,0);
  if (iVar9 == 0) {
    return;
  }
  if ((*(long *)(lVar27 + 0x38) == 0) ||
     (lVar12 = *(long *)(*(long *)(lVar27 + 0x38) + 0x38), lVar12 == 0)) {
    puVar34 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnFailPickupUsable;
    lVar12 = func_0x00f78af4();
  }
  else {
    uVar24 = Atlas_Gameplay_Kart_KartUsableManager__get_IsShuffling(lVar12,0);
    if ((uVar24 & 1) != 0) {
      return;
    }
    plVar17 = (long *)&stack0xffffffffffffffd0;
    lVar12 = lVar27;
    lVar27 = lStack_48;
    lVar26 = lStack_50;
    pppppppuVar33 = (undefined8 *******)ppppppuStack_40;
    puVar34 = puStack_38;
  }
  puVar7 = (undefined1 *)((long)plVar17 + -0x30);
  *(undefined8 *)((long)plVar17 + -0x30) = 0x3d52000;
  *(long *)((long)plVar17 + -0x28) = lVar11;
  *(long *)((long)plVar17 + -0x20) = lVar26;
  *(long *)((long)plVar17 + -0x18) = lVar27;
  *(undefined8 ********)((long)plVar17 + -0x10) = pppppppuVar33;
  *(undefined **)((long)plVar17 + -8) = puVar34;
  puVar32 = (undefined1 *)((long)plVar17 + -0x10);
  lVar26 = 0x3eb4000;
  if ((bRam0000000003eb4ebf & 1) == 0) {
    func_0x00f78a20(0x3d527e0);
    func_0x00f78a20(0x3d527f8);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ebf = 1;
  }
  uVar24 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar12,0);
  if ((uVar24 & 1) == 0) {
    puVar32 = *(undefined1 **)((long)plVar17 + -0x10);
    puVar34 = *(undefined **)((long)plVar17 + -8);
    lVar26 = *(long *)((long)plVar17 + -0x20);
    lVar27 = *(long *)((long)plVar17 + -0x18);
    uVar29 = *(undefined8 *)((long)plVar17 + -0x30);
    lVar11 = *(long *)((long)plVar17 + -0x28);
    lVar23 = lVar12;
  }
  else {
    if (*(long *)(lVar12 + 0x10) != 0) {
      plVar28 = *(long **)(*(long *)(lVar12 + 0x10) + 0x40);
      lVar11 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
      auVar42._8_8_ = lVar11;
      auVar42._0_8_ = plVar28;
      uVar20 = 0;
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(lVar11,lVar12,uRam0000000003d527f8,0);
      lVar26 = 0;
      if (plVar28 != (long *)0x0) {
        puVar34 = &UNK_01535798;
code_r0x015a5cc8:
        *(undefined8 *)(puVar7 + -0x30) = uVar29;
        *(long *)(puVar7 + -0x28) = lVar11;
        *(long **)(puVar7 + -0x20) = plVar28;
        *(long *)(puVar7 + -0x18) = lVar12;
        *(undefined1 **)(puVar7 + -0x10) = puVar32;
        *(undefined **)(puVar7 + -8) = puVar34;
        if ((bRam0000000003eb51f0 & 1) == 0) {
          func_0x00f78a20(0x3d27718);
          bRam0000000003eb51f0 = 1;
        }
        plVar28 = (long *)(auVar42._0_8_ + 0x70);
        lVar11 = *plVar28;
        while( true ) {
          uVar29 = 0;
          plVar17 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar42._8_8_,0);
          if ((plVar17 != (long *)0x0) && (*plVar17 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718)) break;
          lVar26 = func_0x00ff0f44(plVar28,plVar17,lVar11);
          bVar8 = lVar11 == lVar26;
          lVar11 = lVar26;
          if (bVar8) {
            return;
          }
        }
        auVar43 = func_0x00f78e5c(plVar17);
        plVar17 = auVar43._8_8_;
        lVar26 = *(long *)(auVar43._0_8_ + 0x70);
        if (lVar26 == 0) {
          return;
        }
        *(undefined8 *)(puVar7 + -0x90) = unaff_x28;
        *(undefined8 *)(puVar7 + -0x88) = unaff_x27;
        *(undefined8 *)(puVar7 + -0x80) = unaff_x26;
        *(undefined8 *)(puVar7 + -0x78) = unaff_x25;
        *(undefined8 *)(puVar7 + -0x70) = unaff_x24;
        *(undefined8 **)(puVar7 + -0x68) = unaff_x23;
        *(undefined8 *)(puVar7 + -0x60) = 0x3d27718;
        *(long *)(puVar7 + -0x58) = lVar11;
        *(long **)(puVar7 + -0x50) = plVar28;
        *(long *)(puVar7 + -0x48) = auVar42._8_8_;
        *(undefined1 **)(puVar7 + -0x40) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x38) =
             &Atlas_Gameplay_Player_GameContextPlayerManager__FireOnUsableAttached;
        *(long *)(puVar7 + -0x98) = lVar26;
        lVar11 = *(long *)(lVar26 + 0x68);
        if (lVar11 == 0) {
          puVar32 = puVar7 + -0x98;
          lVar12 = 1;
        }
        else {
          lVar12 = *(long *)(lVar11 + 0x18);
          if (lVar12 == 0) {
            return;
          }
          puVar32 = (undefined1 *)(lVar11 + 0x20);
        }
        lVar11 = 0;
        do {
          lVar27 = *(long *)(puVar32 + lVar11 * 8);
          pcVar31 = *(code **)(lVar27 + 0x10);
          plVar28 = *(long **)(lVar27 + 0x20);
          lVar27 = *(long *)(lVar27 + 0x28);
          if (*(short *)(lVar27 + 0x48) == -1) {
            func_0x00f78ad8(lVar27);
          }
          iVar9 = func_0x00f78a4c(lVar27);
          bVar8 = *(char *)(lVar27 + 0x4a) == '\x03';
          if (iVar9 == 0) {
            if (bVar8) {
              if (plVar28 == (long *)0x0) {
code_r0x01553104:
                (*pcVar31)(plVar17,uVar29,uVar20,lVar27);
              }
              else {
                if (((*(short *)(lVar27 + 0x48) == -1) || ((*(byte *)(*plVar28 + 0x115) & 1) != 0))
                   || (*(long *)(lVar26 + 0x18) == 0)) goto code_r0x01552ff4;
                iVar9 = func_0x00f78a44(lVar27);
                iVar10 = func_0x00f78ec0(lVar27);
                if (iVar9 == 0) {
                  uVar1 = *(ushort *)(lVar27 + 0x48);
                  if (iVar10 == 0) {
                    lVar27 = *plVar28 + (ulong)uVar1 * 0x10;
                    (**(code **)(lVar27 + 0x138))
                              (plVar28,plVar17,uVar29,uVar20,*(undefined8 *)(lVar27 + 0x140));
                    goto code_r0x01553118;
                  }
                  lVar27 = func_0x00f78a48(lVar27);
                  lVar23 = *plVar28;
                  uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
                  if (uVar24 != 0) {
                    piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == lVar27) {
                        puVar15 = (undefined8 *)
                                  (lVar23 + (long)(int)(*piVar25 + (uint)uVar1) * 0x10 + 0x138);
                        goto code_r0x015532bc;
                      }
                      piVar25 = piVar25 + 4;
                      uVar24 = uVar24 - 1;
                    } while (uVar24 != 0);
                  }
                  puVar15 = (undefined8 *)func_0x00fac1f0(plVar28,lVar27,(ulong)uVar1);
code_r0x015532bc:
                  pcVar31 = (code *)*puVar15;
                  puVar15 = (undefined8 *)puVar15[1];
                }
                else {
                  if (iVar10 == 0) {
                    uVar14 = *(undefined8 *)
                              (*plVar28 + (ulong)*(ushort *)(lVar27 + 0x48) * 0x10 + 0x140);
                  }
                  else {
                    lVar23 = *plVar28;
                    uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
                    if (uVar24 != 0) {
                      piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar25 + -2) == *(long *)(lVar27 + 0x18)) {
                          lVar23 = lVar23 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar27 + 0x48))
                                            * 0x10 + 0x138;
                          goto code_r0x01553294;
                        }
                        piVar25 = piVar25 + 4;
                        uVar24 = uVar24 - 1;
                      } while (uVar24 != 0);
                    }
                    lVar23 = func_0x00fac1f0(plVar28);
code_r0x01553294:
                    uVar14 = *(undefined8 *)(lVar23 + 8);
                  }
                  puVar15 = (undefined8 *)func_0x00f78acc(uVar14,lVar27);
                  pcVar31 = (code *)*puVar15;
                }
                (*pcVar31)(plVar28,plVar17,uVar29,uVar20,puVar15);
              }
            }
            else {
              if ((*(short *)(lVar27 + 0x48) == -1) || (*(long *)(lVar26 + 0x18) == 0))
              goto code_r0x01553104;
              iVar9 = func_0x00f78a44(lVar27);
              iVar10 = func_0x00f78ec0(lVar27);
              if (iVar9 == 0) {
                uVar1 = *(ushort *)(lVar27 + 0x48);
                if (iVar10 == 0) {
                  lVar27 = *plVar17 + (ulong)uVar1 * 0x10;
                  (**(code **)(lVar27 + 0x138))
                            (plVar17,uVar29,uVar20,*(undefined8 *)(lVar27 + 0x140));
                  goto code_r0x01553118;
                }
                lVar27 = func_0x00f78a48(lVar27);
                lVar23 = *plVar17;
                uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
                if (uVar24 != 0) {
                  piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar25 + -2) == lVar27) {
                      puVar15 = (undefined8 *)
                                (lVar23 + (long)(int)(*piVar25 + (uint)uVar1) * 0x10 + 0x138);
                      goto code_r0x01553248;
                    }
                    piVar25 = piVar25 + 4;
                    uVar24 = uVar24 - 1;
                  } while (uVar24 != 0);
                }
                puVar15 = (undefined8 *)func_0x00fac1f0(plVar17,lVar27,(ulong)uVar1);
code_r0x01553248:
                pcVar31 = (code *)*puVar15;
                puVar15 = (undefined8 *)puVar15[1];
              }
              else {
                if (iVar10 == 0) {
                  uVar14 = *(undefined8 *)
                            (*plVar17 + (ulong)*(ushort *)(lVar27 + 0x48) * 0x10 + 0x140);
                }
                else {
                  lVar23 = *plVar17;
                  uVar24 = (ulong)*(ushort *)(lVar23 + 0x12a);
                  if (uVar24 != 0) {
                    piVar25 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar25 + -2) == *(long *)(lVar27 + 0x18)) {
                        lVar23 = lVar23 + (long)(int)(*piVar25 + (uint)*(ushort *)(lVar27 + 0x48)) *
                                          0x10 + 0x138;
                        goto code_r0x01553220;
                      }
                      piVar25 = piVar25 + 4;
                      uVar24 = uVar24 - 1;
                    } while (uVar24 != 0);
                  }
                  lVar23 = func_0x00fac1f0(plVar17);
code_r0x01553220:
                  uVar14 = *(undefined8 *)(lVar23 + 8);
                }
                puVar15 = (undefined8 *)func_0x00f78acc(uVar14,lVar27);
                pcVar31 = (code *)*puVar15;
              }
              (*pcVar31)(plVar17,uVar29,uVar20,puVar15);
            }
          }
          else {
            if (bVar8) goto code_r0x01553104;
code_r0x01552ff4:
            (*pcVar31)(plVar28,plVar17,uVar29,uVar20,lVar27);
          }
code_r0x01553118:
          lVar11 = lVar11 + 1;
          if (lVar11 == lVar12) {
            return;
          }
        } while( true );
      }
    }
    puVar34 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompletePickupCondition;
    lVar23 = func_0x00f78af4();
    plVar17 = (long *)((long)plVar17 + -0x30);
    lVar27 = lVar12;
  }
code_r0x0153580c:
  *(undefined8 *)((long)plVar17 + -0x30) = uVar29;
  *(long *)((long)plVar17 + -0x28) = lVar11;
  *(long *)((long)plVar17 + -0x20) = lVar26;
  *(long *)((long)plVar17 + -0x18) = lVar27;
  *(undefined1 **)((long)plVar17 + -0x10) = puVar32;
  *(undefined **)((long)plVar17 + -8) = puVar34;
  uVar29 = 0x3d527d8;
  if ((bRam0000000003eb4ec0 & 1) == 0) {
    func_0x00f78a20(0x3d527d8);
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb4ec0 = 1;
  }
  lVar26 = *(long *)(lVar23 + 200);
  lVar11 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(lVar11,lVar23,uRam0000000003d527d8,0);
  if (lVar26 != 0) {
    uVar24 = 0;
    /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar26,lVar11);
    puVar32 = *(undefined1 **)((long)plVar17 + -0x10);
    puVar34 = *(undefined **)((long)plVar17 + -8);
    lVar26 = *(long *)((long)plVar17 + -0x20);
    lVar12 = *(long *)((long)plVar17 + -0x18);
    uVar29 = *(undefined8 *)((long)plVar17 + -0x30);
    lVar11 = *(long *)((long)plVar17 + -0x28);
    puVar3 = (undefined1 *)plVar17;
    goto code_r0x01535d14;
  }
  auVar42 = func_0x00f78af4();
  lVar26 = auVar42._0_8_;
  *(undefined8 *)((long)plVar17 + -0x50) = 0;
  *(long *)((long)plVar17 + -0x48) = lVar23;
  *(undefined1 **)((long)plVar17 + -0x40) = (undefined1 *)((long)plVar17 + -0x10);
  *(undefined **)((long)plVar17 + -0x38) =
       &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterUseUsableEndTrigger;
  iVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision(lVar26,auVar42._8_8_,0);
  if ((iVar9 == 0) || (*(int *)(lVar26 + 0xe8) != 2)) {
    return;
  }
  *(undefined8 *)((long)plVar17 + -0x50) = *(undefined8 *)((long)plVar17 + -0x50);
  *(undefined8 *)((long)plVar17 + -0x48) = *(undefined8 *)((long)plVar17 + -0x48);
  *(undefined8 *)((long)plVar17 + -0x40) = *(undefined8 *)((long)plVar17 + -0x40);
  *(undefined8 *)((long)plVar17 + -0x38) = *(undefined8 *)((long)plVar17 + -0x38);
  uVar24 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar26,0);
  if ((uVar24 & 1) == 0) {
    uVar14 = *(undefined8 *)((long)plVar17 + -0x40);
    uVar35 = *(undefined8 *)((long)plVar17 + -0x38);
    puVar4 = (undefined1 *)((long)plVar17 + -0x30);
    uVar20 = *(undefined8 *)((long)plVar17 + -0x50);
    lVar23 = *(long *)((long)plVar17 + -0x48);
    lVar12 = lVar26;
Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteUseUsableCondition:
    puVar7 = puVar4 + -0x70;
    puVar5 = puVar4 + -0x70;
    puVar2 = puVar4 + -0x70;
    *(undefined8 *)(puVar4 + -0x40) = unaff_x24;
    *(undefined8 **)(puVar4 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar4 + -0x30) = uVar29;
    *(long *)(puVar4 + -0x28) = lVar11;
    *(undefined8 *)(puVar4 + -0x20) = uVar20;
    *(long *)(puVar4 + -0x18) = lVar23;
    *(undefined8 *)(puVar4 + -0x10) = uVar14;
    *(undefined8 *)(puVar4 + -8) = uVar35;
    puVar32 = puVar4 + -0x10;
    lVar27 = 0x3eb4000;
    if ((bRam0000000003eb4ec2 & 1) == 0) {
      func_0x00f78a20(0x3d527e8);
      func_0x00f78a20(0x3d527f8);
      func_0x00f78a20(0x3d52800);
      func_0x00f78a20(0x3d278d8);
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb4ec2 = 1;
    }
    if (*(long *)(lVar12 + 0x58) != 0) {
      *(undefined1 *)(*(long *)(lVar12 + 0x58) + 0x100) = 1;
      lVar26 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar12);
      if (lVar26 != 0) {
        uVar29 = 0x3d52000;
        uVar20 = *(undefined8 *)(lVar26 + 0x70);
        uVar35 = *(undefined8 *)(lVar26 + 0x88);
        uVar14 = *(undefined8 *)(lVar26 + 0x80);
        *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)(lVar26 + 0x78);
        *(undefined8 *)(puVar4 + -0x70) = uVar20;
        *(undefined8 *)(puVar4 + -0x58) = uVar35;
        *(undefined8 *)(puVar4 + -0x60) = uVar14;
        uVar20 = *(undefined8 *)(lVar26 + 0x90);
        *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)(lVar26 + 0x98);
        *(undefined8 *)(puVar4 + -0x50) = uVar20;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar12,puVar4 + -0x70,0);
        lVar27 = *(long *)(lVar12 + 0xd0);
        lVar11 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
        /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(lVar11,lVar12,uRam0000000003d527e8,0);
        if (lVar27 != 0) {
          /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar27,lVar11,0);
          if (*(long *)(lVar12 + 0x10) != 0) {
            uVar29 = 0x3d27718;
            unaff_x23 = (undefined8 *)0x3d52000;
            plVar28 = *(long **)(*(long *)(lVar12 + 0x10) + 0x40);
            lVar11 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
            auVar42._8_8_ = lVar11;
            auVar42._0_8_ = plVar28;
            uVar20 = 0;
            /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(lVar11,lVar12,uRam0000000003d527f8,0);
            lVar27 = 0;
            if (plVar28 != (long *)0x0) {
              puVar34 = &UNK_01535a64;
              goto code_r0x015a5cc8;
            }
          }
        }
      }
    }
    lVar26 = func_0x00f78af4();
    *(long *)(puVar4 + -0x90) = lVar27;
    *(long *)(puVar4 + -0x88) = lVar12;
    *(undefined1 **)(puVar4 + -0x80) = puVar32;
    *(undefined **)(puVar4 + -0x78) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterHitPlayerEndTrigger;
    uVar24 = 0;
    iVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
    if (iVar9 == 0) {
      return;
    }
    uVar20 = *(undefined8 *)(puVar4 + -0x90);
    *(undefined8 *)(puVar4 + -0x90) = uVar20;
    *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(puVar4 + -0x88);
    *(undefined8 *)(puVar4 + -0x80) = *(undefined8 *)(puVar4 + -0x80);
    *(undefined8 *)(puVar4 + -0x78) = *(undefined8 *)(puVar4 + -0x78);
    puVar32 = puVar4 + -0x80;
    uVar13 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar26,0);
    if ((uVar13 & 1) == 0) {
      puVar32 = *(undefined1 **)(puVar4 + -0x80);
      puVar34 = *(undefined **)(puVar4 + -0x78);
      uVar20 = *(undefined8 *)(puVar4 + -0x90);
      lVar27 = *(long *)(puVar4 + -0x88);
      lVar12 = lVar26;
    }
    else {
      if (*(long *)(lVar26 + 0xb8) != 0) {
        Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsedUsables(*(long *)(lVar26 + 0xb8),0);
        uVar20 = *(undefined8 *)(puVar4 + -0x80);
        uVar35 = *(undefined8 *)(puVar4 + -0x78);
        uVar14 = *(undefined8 *)(puVar4 + -0x90);
        uVar36 = *(undefined8 *)(puVar4 + -0x88);
        goto Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RetrySection;
      }
      puVar34 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteHitPlayerCondition;
      lVar12 = func_0x00f78af4();
      puVar5 = puVar4 + -0x90;
      lVar27 = lVar26;
    }
code_r0x01535b58:
    puVar6 = puVar5 + -0x60;
    *(undefined8 *)(puVar5 + -0x30) = uVar29;
    *(long *)(puVar5 + -0x28) = lVar11;
    *(undefined8 *)(puVar5 + -0x20) = uVar20;
    *(long *)(puVar5 + -0x18) = lVar27;
    *(undefined1 **)(puVar5 + -0x10) = puVar32;
    *(undefined **)(puVar5 + -8) = puVar34;
    puVar32 = puVar5 + -0x10;
    lVar26 = 0x3eb4000;
    if ((bRam0000000003eb4ec4 & 1) == 0) {
      func_0x00f78a20(0x3d527d0);
      func_0x00f78a20(0x3d527f0);
      func_0x00f78a20(0x3d278d8);
      func_0x00f78a20(0x3d27728);
      bRam0000000003eb4ec4 = 1;
    }
    lVar27 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar12);
    if (lVar27 != 0) {
      uVar29 = 0x3d52000;
      uVar20 = *(undefined8 *)(lVar27 + 0xa0);
      uVar35 = *(undefined8 *)(lVar27 + 0xb8);
      uVar14 = *(undefined8 *)(lVar27 + 0xb0);
      *(undefined8 *)(puVar5 + -0x58) = *(undefined8 *)(lVar27 + 0xa8);
      *(undefined8 *)(puVar5 + -0x60) = uVar20;
      *(undefined8 *)(puVar5 + -0x48) = uVar35;
      *(undefined8 *)(puVar5 + -0x50) = uVar14;
      uVar20 = *(undefined8 *)(lVar27 + 0xc0);
      *(undefined8 *)(puVar5 + -0x38) = *(undefined8 *)(lVar27 + 200);
      *(undefined8 *)(puVar5 + -0x40) = uVar20;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar12,puVar5 + -0x60,0);
      *(undefined4 *)(lVar12 + 0xe8) = 0;
      lVar26 = *(long *)(lVar12 + 0xd8);
      lVar11 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      uVar24 = uRam0000000003d527d0;
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(lVar11,lVar12,uRam0000000003d527d0,0);
      if (lVar26 != 0) {
        uVar24 = 0;
        /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar26,lVar11);
        if (*(long *)(lVar12 + 0x10) != 0) {
          uVar29 = 0x3d52000;
          plVar28 = *(long **)(*(long *)(lVar12 + 0x10) + 0x40);
          lVar11 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
          auVar43._8_8_ = lVar11;
          auVar43._0_8_ = plVar28;
          uVar20 = 0;
          uVar24 = uRam0000000003d527f0;
          /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(lVar11,lVar12,uRam0000000003d527f0,0);
          lVar26 = 0;
          if (plVar28 != (long *)0x0) {
            puVar34 = &UNK_01535c74;
            goto code_r0x0159d844;
          }
        }
      }
    }
    auVar42 = func_0x00f78af4();
    lVar27 = auVar42._0_8_;
    plVar17 = (long *)(puVar5 + -0xb0);
    puVar3 = puVar5 + -0xb0;
    *(long *)(puVar5 + -0x80) = lVar26;
    *(long *)(puVar5 + -0x78) = lVar12;
    *(undefined1 **)(puVar5 + -0x70) = puVar32;
    *(undefined **)(puVar5 + -0x68) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnPickup;
    puVar32 = puVar5 + -0x70;
    if (auVar42._8_8_ != 0) {
      if (*(long *)(auVar42._8_8_ + 0x10) != *(long *)(lVar27 + 0x38)) {
        return;
      }
      lVar23 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar27);
      lVar12 = lVar27;
      if (lVar23 != 0) {
        uVar20 = *(undefined8 *)(lVar23 + 0x40);
        uVar35 = *(undefined8 *)(lVar23 + 0x58);
        uVar14 = *(undefined8 *)(lVar23 + 0x50);
        *(undefined8 *)(puVar5 + -0xa8) = *(undefined8 *)(lVar23 + 0x48);
        *(undefined8 *)(puVar5 + -0xb0) = uVar20;
        *(undefined8 *)(puVar5 + -0x98) = uVar35;
        *(undefined8 *)(puVar5 + -0xa0) = uVar14;
        uVar20 = *(undefined8 *)(lVar23 + 0x60);
        *(undefined8 *)(puVar5 + -0x88) = *(undefined8 *)(lVar23 + 0x68);
        *(undefined8 *)(puVar5 + -0x90) = uVar20;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar27,puVar5 + -0xb0,0);
        if (*(int *)(lVar27 + 0xe8) != 1) {
          return;
        }
        puVar34 = &UNK_01535d00;
        lVar23 = lVar27;
        goto code_r0x0153580c;
      }
    }
    puVar34 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartUseUsableSection;
    lVar23 = func_0x00f78af4();
code_r0x01535d14:
    *(undefined8 *)(puVar3 + -0x30) = uVar29;
    *(long *)(puVar3 + -0x28) = lVar11;
    *(long *)(puVar3 + -0x20) = lVar26;
    *(long *)(puVar3 + -0x18) = lVar12;
    *(undefined1 **)(puVar3 + -0x10) = puVar32;
    *(undefined **)(puVar3 + -8) = puVar34;
    uVar20 = 0x3eb4000;
    if ((bRam0000000003eb4ec1 & 1) == 0) {
      func_0x00f78a20(0x3d52800);
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb4ec1 = 1;
    }
    *(undefined4 *)(lVar23 + 0xe8) = 2;
    lVar26 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar23);
    if (lVar26 != 0) {
      uVar24 = (ulong)*(uint *)(lVar26 + 0x14c);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                (lVar23,*(undefined8 *)(lVar26 + 0x130),uVar24,*(char *)(lVar26 + 0x148) != '\0',0);
      if (*(long *)(lVar23 + 0x10) != 0) {
        uVar29 = 0x3d52000;
        lVar26 = *(long *)(*(long *)(lVar23 + 0x10) + 0x40);
        lVar11 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
        auVar40._8_8_ = lVar11;
        auVar40._0_8_ = lVar26;
        uVar24 = uRam0000000003d52800;
        /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(lVar11,lVar23,uRam0000000003d52800,0);
        uVar20 = 0;
        if (lVar26 != 0) {
          puVar32 = *(undefined1 **)(puVar3 + -0x10);
          puVar34 = *(undefined **)(puVar3 + -8);
          plVar28 = *(long **)(puVar3 + -0x20);
          uVar20 = *(undefined8 *)(puVar3 + -0x18);
          uVar29 = *(undefined8 *)(puVar3 + -0x30);
          lVar11 = *(long *)(puVar3 + -0x28);
          puVar5 = puVar3;
          goto code_r0x0159d188;
        }
      }
    }
    auVar42 = func_0x00f78af4();
    *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x38) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnUse;
    if (auVar42._8_8_ != 0) goto code_r0x01535df4;
    lVar27 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0x70) = uVar29;
    *(long *)(puVar3 + -0x68) = lVar11;
    *(undefined8 *)(puVar3 + -0x60) = uVar20;
    *(long *)(puVar3 + -0x58) = lVar23;
    *(undefined1 **)(puVar3 + -0x50) = puVar3 + -0x40;
    *(undefined **)(puVar3 + -0x48) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartHitPlayerSection;
    uVar20 = 0x3eb4000;
    if ((bRam0000000003eb4ec3 & 1) == 0) {
      func_0x00f78a20(0x3d527f0);
      func_0x00f78a20(0x3d27728);
      bRam0000000003eb4ec3 = 1;
    }
    lVar26 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar27);
    if (lVar26 == 0) {
code_r0x01535ee8:
      lVar12 = func_0x00f78af4();
      *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x50;
      *(undefined **)(puVar3 + -0x78) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnHit;
      if (uVar24 == 0) {
        func_0x00f78af4();
        return;
      }
      if (*(long *)(uVar24 + 0x10) != *(long *)(lVar12 + 0x38)) {
        return;
      }
      puVar5 = puVar3 + -0x70;
      puVar32 = *(undefined1 **)(puVar3 + -0x80);
      puVar34 = *(undefined **)(puVar3 + -0x78);
      goto code_r0x01535b58;
    }
    uVar24 = (ulong)*(uint *)(lVar26 + 0x1ac);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
              (lVar27,*(undefined8 *)(lVar26 + 400),uVar24,*(char *)(lVar26 + 0x1a8) != '\0',0);
    *(undefined4 *)(lVar27 + 0xe8) = 3;
    if (*(long *)(lVar27 + 0x10) == 0) goto code_r0x01535ee8;
    uVar29 = 0x3d52000;
    lVar26 = *(long *)(*(long *)(lVar27 + 0x10) + 0x40);
    lVar11 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
    uVar24 = uRam0000000003d527f0;
    /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(lVar11,lVar27,uRam0000000003d527f0,0);
    uVar20 = 0;
    if (lVar26 == 0) goto code_r0x01535ee8;
    *(undefined8 *)(puVar3 + -0x70) = *(undefined8 *)(puVar3 + -0x70);
    *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)(puVar3 + -0x68);
    *(undefined8 *)(puVar3 + -0x60) = *(undefined8 *)(puVar3 + -0x60);
    *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(puVar3 + -0x58);
    *(undefined8 *)(puVar3 + -0x50) = *(undefined8 *)(puVar3 + -0x50);
    *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(puVar3 + -0x48);
    if ((bRam0000000003eb51f9 & 1) == 0) {
      func_0x00f78a20(0x3d27728,lVar11,0);
      bRam0000000003eb51f9 = 1;
    }
    plVar28 = (long *)(lVar26 + 0x98);
    lVar26 = *plVar28;
    while ((plVar17 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar26,lVar11,0), plVar17 == (long *)0x0 ||
           (*plVar17 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
      lVar12 = func_0x00ff0f44(plVar28,plVar17,lVar26);
      bVar8 = lVar26 == lVar12;
      lVar26 = lVar12;
      if (bVar8) {
        return;
      }
    }
    auVar42 = func_0x00f78e5c(plVar17);
    uVar20 = auVar42._8_8_;
    puVar5 = puVar3 + -0xa0;
    *(undefined8 *)(puVar3 + -0xa0) = 0x3d27728;
    *(long *)(puVar3 + -0x98) = lVar26;
    *(long **)(puVar3 + -0x90) = plVar28;
    *(long *)(puVar3 + -0x88) = lVar11;
    *(undefined1 **)(puVar3 + -0x80) = puVar3 + -0x50;
    *(undefined **)(puVar3 + -0x78) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
    puVar32 = puVar3 + -0x80;
    if ((bRam0000000003eb51fb & 1) == 0) {
      func_0x00f78a20(0x3d27730);
      bRam0000000003eb51fb = 1;
    }
    uVar29 = 0x3d27730;
    plVar28 = (long *)(auVar42._0_8_ + 0xa0);
    lVar11 = *plVar28;
    while ((plVar17 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,uVar20,0), plVar17 == (long *)0x0 ||
           (*plVar17 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
      lVar26 = func_0x00ff0f44(plVar28,plVar17,lVar11);
      bVar8 = lVar11 == lVar26;
      lVar11 = lVar26;
      if (bVar8) {
        return;
      }
    }
    puVar34 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
    auVar40 = func_0x00f78e5c(plVar17);
code_r0x0159d188:
    *(undefined8 *)(puVar5 + -0x30) = uVar29;
    *(long *)(puVar5 + -0x28) = lVar11;
    *(long **)(puVar5 + -0x20) = plVar28;
    *(undefined8 *)(puVar5 + -0x18) = uVar20;
    *(undefined1 **)(puVar5 + -0x10) = puVar32;
    *(undefined **)(puVar5 + -8) = puVar34;
    if ((bRam0000000003eb51f3 & 1) == 0) {
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb51f3 = 1;
    }
    plVar28 = (long *)(auVar40._0_8_ + 0x80);
    lVar11 = *plVar28;
    while ((plVar17 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,auVar40._8_8_,0), plVar17 == (long *)0x0 ||
           (*plVar17 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
      lVar26 = func_0x00ff0f44(plVar28,plVar17,lVar11);
      bVar8 = lVar11 == lVar26;
      lVar11 = lVar26;
      if (bVar8) {
        return;
      }
    }
    auVar42 = func_0x00f78e5c(plVar17);
    *(undefined8 *)(puVar5 + -0x60) = 0x3d27718;
    *(long *)(puVar5 + -0x58) = lVar11;
    *(long **)(puVar5 + -0x50) = plVar28;
    *(long *)(puVar5 + -0x48) = auVar40._8_8_;
    *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
    *(undefined **)(puVar5 + -0x38) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
    if ((bRam0000000003eb51fd & 1) == 0) {
      func_0x00f78a20(0x3d27738);
      bRam0000000003eb51fd = 1;
    }
    plVar28 = (long *)(auVar42._0_8_ + 0xa8);
    lVar11 = *plVar28;
    while ((plVar17 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,auVar42._8_8_,0), plVar17 == (long *)0x0 ||
           (*plVar17 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
      lVar26 = func_0x00ff0f44(plVar28,plVar17,lVar11);
      bVar8 = lVar11 == lVar26;
      lVar11 = lVar26;
      if (bVar8) {
        return;
      }
    }
    auVar43 = func_0x00f78e5c(plVar17);
    *(undefined8 *)(puVar5 + -0x90) = 0x3d27738;
    *(long *)(puVar5 + -0x88) = lVar11;
    *(long **)(puVar5 + -0x80) = plVar28;
    *(long *)(puVar5 + -0x78) = auVar42._8_8_;
    *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x40;
    *(undefined **)(puVar5 + -0x68) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
    if ((bRam0000000003eb51f5 & 1) == 0) {
      func_0x00f78a20(0x3d27700);
      bRam0000000003eb51f5 = 1;
    }
    plVar28 = (long *)(auVar43._0_8_ + 0x88);
    lVar11 = *plVar28;
    while ((plVar17 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar11,auVar43._8_8_,0), plVar17 == (long *)0x0 ||
           (*plVar17 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
      lVar26 = func_0x00ff0f44(plVar28,plVar17,lVar11);
      bVar8 = lVar11 == lVar26;
      lVar11 = lVar26;
      if (bVar8) {
        return;
      }
    }
    auVar42 = func_0x00f78e5c(plVar17);
    lVar26 = auVar42._0_8_;
    *(undefined8 *)(puVar5 + -0xe0) = unaff_x26;
    *(undefined8 *)(puVar5 + -0xd8) = unaff_x25;
    *(undefined8 *)(puVar5 + -0xd0) = unaff_x24;
    *(undefined8 **)(puVar5 + -200) = unaff_x23;
    *(undefined8 *)(puVar5 + -0xc0) = 0x3d27700;
    *(long *)(puVar5 + -0xb8) = lVar11;
    *(long **)(puVar5 + -0xb0) = plVar28;
    *(long *)(puVar5 + -0xa8) = auVar43._8_8_;
    *(undefined1 **)(puVar5 + -0xa0) = puVar5 + -0x70;
    *(code **)(puVar5 + -0x98) = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
    unaff_x23 = (undefined8 *)0x3d27718;
    unaff_x24 = 0x3d570f0;
    if ((bRam0000000003eb51b7 & 1) == 0) {
      func_0x00f78a20(0x3d524e0);
      func_0x00f78a20(0x3d524e8);
      func_0x00f78a20(0x3d524f0);
      func_0x00f78a20(0x3d524f8);
      func_0x00f78a20(0x3d570d0);
      func_0x00f78a20(0x3d570f0);
      func_0x00f78a20(0x3d27700);
      func_0x00f78a20(0x3d27718);
      func_0x00f78a20(0x3d27728);
      func_0x00f78a20(0x3d27730);
      func_0x00f78a20(0x3d27738);
      bRam0000000003eb51b7 = 1;
    }
    lVar11 = *(long *)(lVar26 + 0x40);
    uVar29 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
    auVar41._8_8_ = uVar29;
    auVar41._0_8_ = lVar11;
    uVar20 = 0;
    /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(uVar29,lVar26,uRam0000000003d570f0,0);
    if (lVar11 == 0) {
      puVar34 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
      auVar41 = func_0x00f78af4();
    }
    else {
      unaff_x24 = 0x3d27000;
      unaff_x25 = 0x3d52000;
      puVar34 = (undefined *)0x159d470;
    }
    *(undefined8 *)(puVar5 + -0x110) = uVar29;
    *(long *)(puVar5 + -0x108) = lVar11;
    *(long *)(puVar5 + -0x100) = auVar42._8_8_;
    *(long *)(puVar5 + -0xf8) = lVar26;
    *(undefined1 **)(puVar5 + -0xf0) = puVar5 + -0xa0;
    *(undefined **)(puVar5 + -0xe8) = puVar34;
    if ((bRam0000000003eb51f4 & 1) == 0) {
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb51f4 = 1;
    }
    plVar28 = (long *)(auVar41._0_8_ + 0x80);
    lVar11 = *plVar28;
    while ((plVar17 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar41._8_8_,0), plVar17 == (long *)0x0 ||
           (*plVar17 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
      lVar26 = func_0x00ff0f44(plVar28,plVar17,lVar11);
      bVar8 = lVar11 == lVar26;
      lVar11 = lVar26;
      if (bVar8) {
        return;
      }
    }
    auVar42 = func_0x00f78e5c(plVar17);
    *(undefined8 *)(puVar5 + -0x140) = 0x3d27718;
    *(long *)(puVar5 + -0x138) = lVar11;
    *(long **)(puVar5 + -0x130) = plVar28;
    *(long *)(puVar5 + -0x128) = auVar41._8_8_;
    *(undefined1 **)(puVar5 + -0x120) = puVar5 + -0xf0;
    *(undefined **)(puVar5 + -0x118) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
    if ((bRam0000000003eb51f6 & 1) == 0) {
      func_0x00f78a20(0x3d27700);
      bRam0000000003eb51f6 = 1;
    }
    plVar28 = (long *)(auVar42._0_8_ + 0x88);
    lVar11 = *plVar28;
    while ((plVar17 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar42._8_8_,0), plVar17 == (long *)0x0 ||
           (*plVar17 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
      lVar26 = func_0x00ff0f44(plVar28,plVar17,lVar11);
      bVar8 = lVar11 == lVar26;
      lVar11 = lVar26;
      if (bVar8) {
        return;
      }
    }
    auVar43 = func_0x00f78e5c(plVar17);
    *(undefined8 *)(puVar5 + -0x170) = 0x3d27700;
    *(long *)(puVar5 + -0x168) = lVar11;
    *(long **)(puVar5 + -0x160) = plVar28;
    *(long *)(puVar5 + -0x158) = auVar42._8_8_;
    *(undefined1 **)(puVar5 + -0x150) = puVar5 + -0x120;
    *(undefined **)(puVar5 + -0x148) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
    if ((bRam0000000003eb51fe & 1) == 0) {
      func_0x00f78a20(0x3d27738);
      bRam0000000003eb51fe = 1;
    }
    plVar28 = (long *)(auVar43._0_8_ + 0xa8);
    lVar11 = *plVar28;
    while ((plVar17 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar43._8_8_,0), plVar17 == (long *)0x0 ||
           (*plVar17 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
      lVar26 = func_0x00ff0f44(plVar28,plVar17,lVar11);
      bVar8 = lVar11 == lVar26;
      lVar11 = lVar26;
      if (bVar8) {
        return;
      }
    }
    auVar42 = func_0x00f78e5c(plVar17);
    lVar12 = auVar42._8_8_;
    puVar6 = puVar5 + -0x1a0;
    *(undefined8 *)(puVar5 + -0x1a0) = 0x3d27738;
    *(long *)(puVar5 + -0x198) = lVar11;
    *(long **)(puVar5 + -400) = plVar28;
    *(long *)(puVar5 + -0x188) = auVar43._8_8_;
    *(undefined1 **)(puVar5 + -0x180) = puVar5 + -0x150;
    *(undefined **)(puVar5 + -0x178) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
    puVar32 = puVar5 + -0x180;
    if ((bRam0000000003eb51fc & 1) == 0) {
      func_0x00f78a20(0x3d27730);
      bRam0000000003eb51fc = 1;
    }
    uVar29 = 0x3d27730;
    plVar28 = (long *)(auVar42._0_8_ + 0xa0);
    lVar11 = *plVar28;
    while ((plVar17 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,lVar12,0), plVar17 == (long *)0x0 ||
           (*plVar17 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
      lVar26 = func_0x00ff0f44(plVar28,plVar17,lVar11);
      bVar8 = lVar11 == lVar26;
      lVar11 = lVar26;
      if (bVar8) {
        return;
      }
    }
    puVar34 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
    auVar43 = func_0x00f78e5c(plVar17);
code_r0x0159d844:
    *(undefined8 *)(puVar6 + -0x30) = uVar29;
    *(long *)(puVar6 + -0x28) = lVar11;
    *(long **)(puVar6 + -0x20) = plVar28;
    *(long *)(puVar6 + -0x18) = lVar12;
    *(undefined1 **)(puVar6 + -0x10) = puVar32;
    *(undefined **)(puVar6 + -8) = puVar34;
    if ((bRam0000000003eb51fa & 1) == 0) {
      func_0x00f78a20(0x3d27728);
      bRam0000000003eb51fa = 1;
    }
    plVar28 = (long *)0x3d27728;
    plVar17 = (long *)(auVar43._0_8_ + 0x98);
    lVar11 = *plVar17;
    while( true ) {
      puVar15 = (undefined8 *)0x0;
      plVar16 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar43._8_8_);
      if ((plVar16 != (long *)0x0) && (*plVar16 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
      lVar26 = func_0x00ff0f44(plVar17,plVar16,lVar11);
      bVar8 = lVar11 == lVar26;
      lVar11 = lVar26;
      if (bVar8) {
        return;
      }
    }
    lVar26 = func_0x00f78e5c(plVar16);
    *(undefined8 *)(puVar6 + -0x80) = unaff_x26;
    *(undefined8 *)(puVar6 + -0x78) = unaff_x25;
    *(undefined8 *)(puVar6 + -0x70) = unaff_x24;
    *(undefined8 **)(puVar6 + -0x68) = unaff_x23;
    *(undefined8 *)(puVar6 + -0x60) = 0x3d27728;
    *(long *)(puVar6 + -0x58) = lVar11;
    *(long **)(puVar6 + -0x50) = plVar17;
    *(long *)(puVar6 + -0x48) = auVar43._8_8_;
    *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
    *(undefined **)(puVar6 + -0x38) = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
    lVar11 = 0x3eb5000;
    if ((bRam0000000003eb5204 & 1) == 0) {
      func_0x00f78a20(0x3d29f28);
      func_0x00f78a20(0x3d2a1d8);
      func_0x00f78a20(0x3d2a1c8);
      func_0x00f78a20(0x3d1b4e0);
      func_0x00f78a20(0x3d1b4e8);
      func_0x00f78a20(0x3d1b3b0);
      func_0x00f78a20(0x3d43378);
      func_0x00f78a20(0x3d57230);
      func_0x00f78a20(0x3d57238);
      func_0x00f78a20(0x3d57240);
      bRam0000000003eb5204 = 1;
    }
    lVar12 = *(long *)(lVar26 + 0x28);
    if (lVar12 != 0) {
      plVar28 = (long *)(lVar26 + 0x10);
      uVar22 = *(uint *)(lVar12 + 0x18);
      if ((int)uVar22 < 1) {
code_r0x0159d9f0:
        if (((*(long *)(lVar26 + 0x20) == 0) ||
            (lVar27 = *(long *)(*(long *)(lVar26 + 0x20) + 0x20), lVar27 == 0)) ||
           (unaff_x23 = *(undefined8 **)(lVar27 + 0x10), unaff_x23 == (undefined8 *)0x0))
        goto code_r0x0159db7c;
        uVar29 = 0x3d1b4e8;
        unaff_x24 = 0x3d1b4e8;
        lVar11 = unaff_x23[3];
        lVar12 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
        uVar20 = uRam0000000003d2a1d8;
        /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar12,lVar26,uRam0000000003d57238,uRam0000000003d2a1d8);
        puVar15 = (undefined8 *)0x0;
        plVar17 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,lVar12);
        if ((plVar17 == (long *)0x0) || (*plVar17 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
          unaff_x23[3] = plVar17;
          if ((*(long *)(lVar26 + 0x20) == 0) ||
             ((lVar27 = *(long *)(*(long *)(lVar26 + 0x20) + 0x20), lVar27 == 0 ||
              (unaff_x23 = *(undefined8 **)(lVar27 + 0x10), unaff_x23 == (undefined8 *)0x0))))
          goto code_r0x0159db7c;
          uVar29 = 0x3d1b3b0;
          unaff_x24 = 0x3d1b3b0;
          lVar11 = unaff_x23[0xe];
          lVar12 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
          uVar20 = uRam0000000003d29f28;
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar12,lVar26,uRam0000000003d57240,uRam0000000003d29f28);
          puVar15 = (undefined8 *)0x0;
          plVar17 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,lVar12);
          if ((plVar17 == (long *)0x0) || (*plVar17 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
            unaff_x23[0xe] = plVar17;
            if (((*(long *)(lVar26 + 0x20) == 0) ||
                (lVar27 = *(long *)(*(long *)(lVar26 + 0x20) + 0x20), lVar27 == 0)) ||
               (unaff_x23 = *(undefined8 **)(lVar27 + 0x10), unaff_x23 == (undefined8 *)0x0))
            goto code_r0x0159db7c;
            uVar29 = 0x3d1b4e0;
            lVar11 = unaff_x23[5];
            lVar12 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
            uVar20 = uRam0000000003d2a1c8;
            /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar12,lVar26,uRam0000000003d57230,uRam0000000003d2a1c8);
            puVar15 = (undefined8 *)0x0;
            plVar17 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,lVar12);
            if ((plVar17 == (long *)0x0) || (*plVar17 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
              unaff_x23[5] = plVar17;
              *(undefined1 *)(lVar26 + 0x50) = 0;
              *(undefined8 *)(lVar26 + 0x18) = 0;
              *plVar28 = 0;
              *(undefined8 *)(lVar26 + 0x28) = 0;
              *(undefined8 *)(lVar26 + 0x20) = 0;
              return;
            }
          }
        }
        goto code_r0x0159db8c;
      }
      unaff_x23 = (undefined8 *)0x0;
      unaff_x24 = 0x3d43378;
      while( true ) {
        uVar30 = (uint)unaff_x23;
        uVar29 = unaff_x24;
        if (uVar22 <= uVar30) goto code_r0x0159db80;
        if (*plVar28 == 0) break;
        lVar11 = *(long *)(lVar12 + (long)(int)uVar30 * 8 + 0x20);
        puVar15 = puRam0000000003d43378;
        /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar28,lVar11);
        if (lVar11 == 0) break;
        /*Atlas.Gameplay.Player.GameContextPlayer$$DeInit*/ func_0x015a5404(lVar11);
        unaff_x23 = (undefined8 *)(ulong)(uVar30 + 1);
        uVar22 = *(uint *)(lVar12 + 0x18);
        if ((int)uVar22 <= (int)(uVar30 + 1)) goto code_r0x0159d9f0;
      }
    }
code_r0x0159db7c:
    func_0x00f78af4();
    uVar29 = unaff_x24;
code_r0x0159db80:
    uVar14 = func_0x00f78b24();
    func_0x00f78ac0(uVar14,0);
code_r0x0159db8c:
    auVar42 = func_0x00f78e5c();
    puVar18 = auVar42._8_8_;
    plVar17 = auVar42._0_8_;
    *(undefined8 *)(puVar6 + -0xc0) = uVar29;
    *(undefined8 **)(puVar6 + -0xb8) = unaff_x23;
    *(long **)(puVar6 + -0xb0) = plVar28;
    *(long *)(puVar6 + -0xa8) = lVar12;
    *(long *)(puVar6 + -0xa0) = lVar11;
    *(long *)(puVar6 + -0x98) = lVar26;
    *(undefined1 **)(puVar6 + -0x90) = puVar6 + -0x40;
    *(code **)(puVar6 + -0x88) = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
    puVar19 = puVar15;
    if ((bRam0000000003eb51b8 & 1) == 0) {
      func_0x00f78a20(0x3d69658);
      bRam0000000003eb51b8 = 1;
    }
    if (((plVar17[3] != 0) &&
        (puVar19 = puVar15, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar17[3],puVar18,puVar15,uVar20,0),
        puVar15 != (undefined8 *)0x0)) && (lVar11 = puVar15[2], lVar11 != 0)) {
      uVar29 = *(undefined8 *)(lVar11 + 0x48);
      uVar35 = *(undefined8 *)(lVar11 + 0x60);
      uVar14 = *(undefined8 *)(lVar11 + 0x58);
      *(undefined8 *)(puVar6 + -0xd8) = *(undefined8 *)(lVar11 + 0x50);
      *(undefined8 *)(puVar6 + -0xe0) = uVar29;
      *(undefined8 *)(puVar6 + -200) = uVar35;
      *(undefined8 *)(puVar6 + -0xd0) = uVar14;
      iVar9 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar6 + -0xe0,0);
      if ((iVar9 == 0) || (puVar15 == puVar18)) {
        return;
      }
      iVar9 = (**(code **)(*plVar17 + 0x2a8))(plVar17,*(undefined8 *)(*plVar17 + 0x2b0));
      if ((plVar17[0x18] != 0) && (lVar11 = *(long *)(plVar17[0x18] + 0x20), lVar11 != 0)) {
        /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar6 + -0xf8,lVar11,0);
        *(int *)(puVar15 + 0xf) = *(int *)(puVar15 + 0xf) + iVar9;
        uVar29 = *(undefined8 *)(puVar6 + -0xf8);
        puVar15[0x11] = *(undefined8 *)(puVar6 + -0xf0);
        puVar15[0x10] = uVar29;
        puVar15[0x12] = *(undefined8 *)(puVar6 + -0xe8);
        if (puVar15[2] != 0) {
          if (*(int *)(puVar15[2] + 0x50) == 0) {
            uVar29 = (**(code **)(*plVar17 + 0x208))(plVar17,*(undefined8 *)(*plVar17 + 0x210));
            puVar19 = (undefined8 *)0x0;
            iVar9 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar29,/*STR('BattleGameContext')*/ uRam0000000003d69658);
            if (iVar9 != 0) {
              if (plVar17[3] == 0) goto LAB_0159dcf8;
              /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar17[3],*(undefined4 *)(puVar15 + 0xf),0);
            }
          }
          if (plVar17[0x46] == 0) {
            return;
          }
          /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar17[0x46],puVar18,puVar15,uVar20,0);
          return;
        }
      }
    }
LAB_0159dcf8:
    auVar44 = func_0x00f78af4();
    lVar11 = auVar44._0_8_;
    iVar9 = *(int *)(lVar11 + 0x78);
    uVar14 = puVar19[1];
    uVar20 = *puVar19;
    *(undefined8 *)(puVar6 + -0x118) = uVar14;
    *(undefined8 *)(puVar6 + -0x120) = uVar20;
    uVar29 = puVar19[2];
    *(undefined8 *)(puVar6 + -0x110) = uVar29;
    *(int *)(lVar11 + 0x78) = iVar9 + auVar44._8_4_;
    *(undefined8 *)(lVar11 + 0x88) = uVar14;
    *(undefined8 *)(lVar11 + 0x80) = uVar20;
    *(undefined8 *)(lVar11 + 0x90) = uVar29;
    return;
  }
  uVar20 = *(undefined8 *)((long)plVar17 + -0x40);
  uVar35 = *(undefined8 *)((long)plVar17 + -0x38);
  puVar2 = (undefined1 *)((long)plVar17 + -0x30);
  uVar14 = *(undefined8 *)((long)plVar17 + -0x50);
  uVar36 = *(undefined8 *)((long)plVar17 + -0x48);
Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RetrySection:
  *(undefined8 *)(puVar2 + -0x30) = uVar29;
  *(long *)(puVar2 + -0x28) = lVar11;
  *(undefined8 *)(puVar2 + -0x20) = uVar14;
  *(undefined8 *)(puVar2 + -0x18) = uVar36;
  *(undefined8 *)(puVar2 + -0x10) = uVar20;
  *(undefined8 *)(puVar2 + -8) = uVar35;
  *(int *)(lVar26 + 0x8c) = *(int *)(lVar26 + 0x8c) + 1;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
            (puVar2 + -0x90,lVar26,*(undefined8 *)(lVar26 + 0xa8));
  *(undefined8 *)(puVar2 + -0xd8) = *(undefined8 *)(puVar2 + -0x88);
  *(undefined8 *)(puVar2 + -0xe0) = *(undefined8 *)(puVar2 + -0x90);
  *(undefined8 *)(puVar2 + -200) = *(undefined8 *)(puVar2 + -0x78);
  *(undefined8 *)(puVar2 + -0xd0) = *(undefined8 *)(puVar2 + -0x80);
  uVar37 = *(undefined8 *)(puVar2 + -0x58);
  uVar36 = *(undefined8 *)(puVar2 + -0x60);
  uVar35 = *(undefined8 *)(puVar2 + -0x48);
  uVar14 = *(undefined8 *)(puVar2 + -0x50);
  *(undefined8 *)(puVar2 + -0xa8) = uVar37;
  *(undefined8 *)(puVar2 + -0xb0) = uVar36;
  *(undefined8 *)(puVar2 + -0x98) = uVar35;
  *(undefined8 *)(puVar2 + -0xa0) = uVar14;
  uVar39 = *(undefined8 *)(puVar2 + -0x68);
  uVar38 = *(undefined8 *)(puVar2 + -0x70);
  *(undefined8 *)(puVar2 + -0xb8) = uVar39;
  *(undefined8 *)(puVar2 + -0xc0) = uVar38;
  uVar29 = *(undefined8 *)(puVar2 + -0x40);
  uVar20 = *(undefined8 *)(puVar2 + -0x38);
  *(undefined8 *)(puVar2 + -0x68) = uVar39;
  *(undefined8 *)(puVar2 + -0x70) = uVar38;
  *(undefined8 *)(puVar2 + -0x58) = uVar37;
  *(undefined8 *)(puVar2 + -0x60) = uVar36;
  *(undefined8 *)(puVar2 + -0x48) = uVar35;
  *(undefined8 *)(puVar2 + -0x50) = uVar14;
  *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(puVar2 + -0x88);
  *(undefined8 *)(puVar2 + -0x90) = *(undefined8 *)(puVar2 + -0x90);
  *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x78);
  *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0x80);
  *(undefined8 *)(puVar2 + -0xf8) = uVar37;
  *(undefined8 *)(puVar2 + -0x100) = uVar36;
  *(undefined8 *)(puVar2 + -0xe8) = uVar35;
  *(undefined8 *)(puVar2 + -0xf0) = uVar14;
  *(undefined8 *)(puVar2 + -0x108) = uVar39;
  *(undefined8 *)(puVar2 + -0x110) = uVar38;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar26,puVar2 + -0x110);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnHumanPlayerAtLocator(lVar26,uVar29);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnAIsAtLocators(lVar26,uVar20);
  uVar29 = *(undefined8 *)(lVar26 + 0xa8);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection(lVar26);
  plVar28 = *(long **)(puVar2 + -0x30);
  *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
  *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
  *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar2 + -0x38) = unaff_x23;
  *(long **)(puVar2 + -0x30) = plVar28;
  *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
  *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
  *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
  *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  *(undefined8 *)(puVar2 + -0x70) = uVar29;
  if ((bRam0000000003eb48a2 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d62270);
    func_0x00f78a20(0x3d26ac8);
    bRam0000000003eb48a2 = 1;
  }
  *(undefined8 *)(puVar2 + -0x80) = 0;
  *(undefined8 *)(puVar2 + -0x98) = 0;
  *(undefined8 *)(puVar2 + -0xa0) = 0;
  *(undefined8 *)(puVar2 + -0x88) = 0;
  *(undefined8 *)(puVar2 + -0x90) = 0;
  *(undefined8 *)(puVar2 + -0xb8) = 0;
  *(undefined8 *)(puVar2 + -0xc0) = 0;
  *(undefined8 *)(puVar2 + -0xa8) = 0;
  *(undefined8 *)(puVar2 + -0xb0) = 0;
  *(undefined8 *)(puVar2 + -200) = 0;
  *(undefined8 *)(lVar26 + 0xa8) = uVar29;
  if ((*(long *)(lVar26 + 0x40) != 0) &&
     (lVar11 = *(long *)(*(long *)(lVar26 + 0x40) + 0x30), lVar11 != 0)) {
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(puVar2 + -0x110,lVar11,uRam0000000003d3cd70);
    *(undefined8 *)(puVar2 + -0x98) = *(undefined8 *)(puVar2 + -0xe8);
    *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xf0);
    *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(puVar2 + -0xd8);
    *(undefined8 *)(puVar2 + -0x90) = *(undefined8 *)(puVar2 + -0xe0);
    *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0xd0);
    *(undefined8 *)(puVar2 + -0xb8) = *(undefined8 *)(puVar2 + -0x108);
    *(undefined8 *)(puVar2 + -0xc0) = *(undefined8 *)(puVar2 + -0x110);
    *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0xf8);
    *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0x100);
LAB_01478328:
    do {
      uVar24 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(puVar2 + -0xc0,uRam0000000003d33320);
      if ((uVar24 & 1) == 0) {
LAB_01478494:
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0xc0,uRam0000000003d33318);
        return;
      }
      lVar11 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___ctor(lVar11,0);
      if (lVar11 == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(long *)(lVar11 + 0x50) = lVar26;
      uVar35 = *(undefined8 *)(puVar2 + -0x98);
      uVar14 = *(undefined8 *)(puVar2 + -0xa0);
      uVar20 = *(undefined8 *)(puVar2 + -0x88);
      uVar29 = *(undefined8 *)(puVar2 + -0x90);
      uVar37 = *(undefined8 *)(puVar2 + -0xa8);
      uVar36 = *(undefined8 *)(puVar2 + -0xb0);
      *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)(puVar2 + -0x80);
      *(undefined8 *)(lVar11 + 0x28) = uVar35;
      *(undefined8 *)(lVar11 + 0x20) = uVar14;
      *(undefined8 *)(lVar11 + 0x38) = uVar20;
      *(undefined8 *)(lVar11 + 0x30) = uVar29;
      *(undefined8 *)(lVar11 + 0x18) = uVar37;
      *(undefined8 *)(lVar11 + 0x10) = uVar36;
      *(undefined8 *)(puVar2 + -0x110) = *(undefined8 *)(lVar11 + 0x18);
      uVar29 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,puVar2 + -0x110);
      uVar24 = /*Atlas.StringID$$Equals*/ func_0x015057f8(puVar2 + -0x70,uVar29,0);
    } while ((uVar24 & 1) == 0);
    if (*(long *)(lVar26 + 0x60) == 0) {
      func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
      pcVar31 = (code *)SoftwareBreakpoint(1,0x14784e0);
      (*pcVar31)();
    }
    puVar15 = (undefined8 *)(lVar11 + 0x10);
    puVar19 = (undefined8 *)(lVar11 + 0x48);
    uVar24 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar26 + 0x60),*puVar15,puVar19,0);
    if ((uVar24 & 1) == 0) goto LAB_01478494;
    uVar29 = *(undefined8 *)(lVar26 + 0xa0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar24 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar29,0,0);
    if ((uVar24 & 1) != 0) {
      if (*(long *)(lVar26 + 0xa0) == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(undefined8 *)(puVar2 + -200) = *(undefined8 *)(*(long *)(lVar26 + 0xa0) + 0x18);
      *(undefined8 *)(puVar2 + -0x110) = *puVar15;
      uVar29 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,puVar2 + -0x110);
      uVar24 = /*Atlas.StringID$$Equals*/ func_0x015057f8(puVar2 + -200,uVar29,0);
      if ((uVar24 & 1) != 0) {
        uVar29 = *(undefined8 *)(lVar26 + 0x38);
        uVar20 = *puVar15;
        uVar35 = *(undefined8 *)(lVar11 + 0x28);
        uVar14 = *(undefined8 *)(lVar11 + 0x20);
        *(undefined8 *)(puVar2 + -0x148) = *(undefined8 *)(lVar11 + 0x18);
        *(undefined8 *)(puVar2 + -0x150) = uVar20;
        *(undefined8 *)(puVar2 + -0x138) = uVar35;
        *(undefined8 *)(puVar2 + -0x140) = uVar14;
        uVar20 = *(undefined8 *)(lVar11 + 0x30);
        *(undefined8 *)(puVar2 + -0x128) = *(undefined8 *)(lVar11 + 0x38);
        *(undefined8 *)(puVar2 + -0x130) = uVar20;
        *(undefined8 *)(puVar2 + -0x120) = *(undefined8 *)(lVar11 + 0x40);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar26,uVar29,puVar2 + -0x150);
        goto LAB_01478328;
      }
    }
    uVar20 = *puVar19;
    uVar29 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar29,lVar11,uRam0000000003d62270,0);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AddBaseListener(lVar26,uVar20,uVar29,*puVar19);
    goto LAB_01478328;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar17 = (long *)___cxa_begin_catch();
    lVar26 = *plVar17;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0xc0,uRam0000000003d33318);
    if (lVar26 == 0) {
      return;
    }
    func_0x00f78ac0(lVar26,0);
  }
  lVar11 = __Unwind_Resume();
  *(undefined8 *)(puVar2 + -400) = unaff_x24;
  *(undefined8 **)(puVar2 + -0x188) = unaff_x23;
  *(long **)(puVar2 + -0x180) = plVar28;
  *(undefined8 *)(puVar2 + -0x178) = 0x3eb4000;
  *(undefined8 *)(puVar2 + -0x170) = uVar29;
  *(long *)(puVar2 + -0x168) = lVar26;
  *(undefined1 **)(puVar2 + -0x160) = puVar2 + -0x10;
  *(code **)(puVar2 + -0x158) = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
  lVar26 = 0x3eb4000;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  *(undefined8 *)(puVar2 + -0x1e8) = 0;
  *(undefined4 *)(puVar2 + -0x1f0) = 0;
  if ((*(long *)(lVar11 + 0x40) != 0) &&
     (lVar12 = *(long *)(*(long *)(lVar11 + 0x40) + 0x30), lVar12 != 0)) {
    plVar28 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(puVar2 + -0x240,lVar12,uRam0000000003d3cd70);
    *(undefined8 *)(puVar2 + -0x1b8) = *(undefined8 *)(puVar2 + -0x218);
    *(undefined8 *)(puVar2 + -0x1c0) = *(undefined8 *)(puVar2 + -0x220);
    *(undefined8 *)(puVar2 + -0x1a8) = *(undefined8 *)(puVar2 + -0x208);
    *(undefined8 *)(puVar2 + -0x1b0) = *(undefined8 *)(puVar2 + -0x210);
    *(undefined8 *)(puVar2 + -0x1a0) = *(undefined8 *)(puVar2 + -0x200);
    *(undefined8 *)(puVar2 + -0x1d8) = *(undefined8 *)(puVar2 + -0x238);
    *(undefined8 *)(puVar2 + -0x1e0) = *(undefined8 *)(puVar2 + -0x240);
    *(undefined8 *)(puVar2 + -0x1c8) = *(undefined8 *)(puVar2 + -0x228);
    *(undefined8 *)(puVar2 + -0x1d0) = *(undefined8 *)(puVar2 + -0x230);
LAB_01478624:
    do {
      uVar24 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(puVar2 + -0x1e0,uRam0000000003d33320);
      if ((uVar24 & 1) == 0) goto LAB_01478690;
      uVar29 = *(undefined8 *)(puVar2 + -0x1d0);
      *(undefined8 *)(puVar2 + -0x240) = *(undefined8 *)(puVar2 + -0x1c8);
      uVar20 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,puVar2 + -0x240);
      uVar24 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar11 + 0xa8,uVar20,0);
      if ((uVar24 & 1) != 0) {
        if (*(long *)(lVar11 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar24 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar11 + 0x60),uVar29,puVar2 + -0x1e8,0);
          if ((uVar24 & 1) == 0) {
            uVar21 = 0x86;
            goto code_r0x0147869c;
          }
          if (*(long *)(puVar2 + -0x1e8) != 0) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                      (lVar11,*(undefined8 *)(*(long *)(puVar2 + -0x1e8) + 0x18));
            goto LAB_01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar31 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar31)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar17 = (long *)___cxa_begin_catch();
    lVar26 = *plVar17;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0x1e0,*unaff_x23);
    if (lVar26 == 0) goto code_r0x014786b8;
    func_0x00f78ac0(lVar26,0);
  }
  lVar12 = __Unwind_Resume();
  *(long *)(puVar2 + -0x260) = lVar26;
  *(long *)(puVar2 + -600) = lVar11;
  *(undefined1 **)(puVar2 + -0x250) = puVar2 + -0x160;
  *(code **)(puVar2 + -0x248) = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
            (puVar2 + -0x2c0,lVar12,*(undefined8 *)(lVar12 + 0xa8));
  uVar29 = *(undefined8 *)(puVar2 + -0x2a0);
  uVar14 = *(undefined8 *)(puVar2 + -0x288);
  uVar20 = *(undefined8 *)(puVar2 + -0x290);
  extraout_x8[5] = *(undefined8 *)(puVar2 + -0x298);
  extraout_x8[4] = uVar29;
  extraout_x8[7] = uVar14;
  extraout_x8[6] = uVar20;
  uVar29 = *(undefined8 *)(puVar2 + -0x280);
  uVar14 = *(undefined8 *)(puVar2 + -0x268);
  uVar20 = *(undefined8 *)(puVar2 + -0x270);
  extraout_x8[9] = *(undefined8 *)(puVar2 + -0x278);
  extraout_x8[8] = uVar29;
  extraout_x8[0xb] = uVar14;
  extraout_x8[10] = uVar20;
  uVar29 = *(undefined8 *)(puVar2 + -0x2c0);
  uVar14 = *(undefined8 *)(puVar2 + -0x2a8);
  uVar20 = *(undefined8 *)(puVar2 + -0x2b0);
  extraout_x8[1] = *(undefined8 *)(puVar2 + -0x2b8);
  *extraout_x8 = uVar29;
  extraout_x8[3] = uVar14;
  extraout_x8[2] = uVar20;
  return;
code_r0x01535df4:
  if (*(long *)(auVar42._8_8_ + 0x10) != *(long *)(auVar42._0_8_ + 0x38)) {
    return;
  }
  puVar4 = puVar3 + -0x30;
  uVar14 = *(undefined8 *)(puVar3 + -0x40);
  uVar35 = *(undefined8 *)(puVar3 + -0x38);
  lVar12 = auVar42._0_8_;
  goto Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteUseUsableCondition;
LAB_01478690:
  uVar21 = 0x7b;
code_r0x0147869c:
  *(undefined4 *)(puVar2 + -0x1f8) = uVar21;
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0x1e0,uRam0000000003d33318);
  if (*(int *)(puVar2 + -0x1f8) == 0x86) {
    return;
  }
code_r0x014786b8:
  lVar26 = *plVar28;
  if (((*(ushort *)(lVar26 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar26 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar26 = *plVar28;
  }
  *(undefined8 *)(lVar11 + 0xa8) = **(undefined8 **)(lVar26 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x153568c | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.OnEnterPickupUsableEndTrigger
// ============================================================

/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535cfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01535aa8) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x01535c74) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterPickupUsableEndTrigger
               (long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined8 *extraout_x8;
  long unaff_x19;
  undefined8 uVar21;
  undefined8 unaff_x20;
  long lVar22;
  long lVar23;
  long *plVar24;
  long unaff_x21;
  undefined8 uVar25;
  undefined8 unaff_x22;
  uint uVar26;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar27;
  undefined *unaff_x30;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  
  puVar27 = &stack0xfffffffffffffff0;
  iVar7 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision(param_1,param_2,0);
  if (iVar7 == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x38) == 0) ||
     (lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 0x38), lVar9 == 0)) {
    unaff_x30 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnFailPickupUsable;
    lVar9 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar27;
  }
  else {
    uVar10 = Atlas_Gameplay_Kart_KartUsableManager__get_IsShuffling(lVar9,0);
    lVar9 = param_1;
    if ((uVar10 & 1) != 0) {
      return;
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar27 = (undefined1 *)((long)register0x00000008 + -0x10);
  lVar22 = 0x3eb4000;
  if ((bRam0000000003eb4ebf & 1) == 0) {
    func_0x00f78a20(0x3d527e0);
    func_0x00f78a20(0x3d527f8);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ebf = 1;
  }
  uVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar9,0);
  if ((uVar10 & 1) == 0) {
    puVar27 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar28 = *(undefined **)((long)register0x00000008 + -8);
    lVar22 = *(long *)((long)register0x00000008 + -0x20);
    lVar23 = *(long *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(long *)((long)register0x00000008 + -0x28);
    puVar4 = (undefined1 *)register0x00000008;
    lVar11 = lVar9;
code_r0x0153580c:
    *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
    *(long *)(puVar4 + -0x28) = unaff_x21;
    *(long *)(puVar4 + -0x20) = lVar22;
    *(long *)(puVar4 + -0x18) = lVar23;
    *(undefined1 **)(puVar4 + -0x10) = puVar27;
    *(undefined **)(puVar4 + -8) = puVar28;
    unaff_x22 = 0x3d527d8;
    if ((bRam0000000003eb4ec0 & 1) == 0) {
      func_0x00f78a20(0x3d527d8);
      func_0x00f78a20(0x3d278d8);
      bRam0000000003eb4ec0 = 1;
    }
    lVar9 = *(long *)(lVar11 + 200);
    unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar11,uRam0000000003d527d8,0);
    if (lVar9 != 0) {
      uVar10 = 0;
      /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar9,unaff_x21);
      puVar27 = *(undefined1 **)(puVar4 + -0x10);
      puVar28 = *(undefined **)(puVar4 + -8);
      lVar22 = *(long *)(puVar4 + -0x20);
      lVar13 = *(long *)(puVar4 + -0x18);
      unaff_x22 = *(undefined8 *)(puVar4 + -0x30);
      unaff_x21 = *(long *)(puVar4 + -0x28);
      goto code_r0x01535d14;
    }
    auVar35 = func_0x00f78af4();
    lVar9 = auVar35._0_8_;
    *(undefined8 *)(puVar4 + -0x50) = 0;
    *(long *)(puVar4 + -0x48) = lVar11;
    *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x38) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterUseUsableEndTrigger;
    iVar7 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision(lVar9,auVar35._8_8_,0);
    if ((iVar7 == 0) || (*(int *)(lVar9 + 0xe8) != 2)) {
      return;
    }
    *(undefined8 *)(puVar4 + -0x50) = *(undefined8 *)(puVar4 + -0x50);
    *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)(puVar4 + -0x48);
    *(undefined8 *)(puVar4 + -0x40) = *(undefined8 *)(puVar4 + -0x40);
    *(undefined8 *)(puVar4 + -0x38) = *(undefined8 *)(puVar4 + -0x38);
    uVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar9,0);
    if ((uVar10 & 1) == 0) {
      uVar25 = *(undefined8 *)(puVar4 + -0x40);
      uVar15 = *(undefined8 *)(puVar4 + -0x38);
      puVar2 = puVar4 + -0x30;
      uVar21 = *(undefined8 *)(puVar4 + -0x50);
      lVar11 = *(long *)(puVar4 + -0x48);
      lVar22 = lVar9;
Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteUseUsableCondition:
      puVar4 = puVar2 + -0x70;
      puVar3 = puVar2 + -0x70;
      register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x70);
      *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
      *(undefined8 **)(puVar2 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
      *(long *)(puVar2 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x20) = uVar21;
      *(long *)(puVar2 + -0x18) = lVar11;
      *(undefined8 *)(puVar2 + -0x10) = uVar25;
      *(undefined8 *)(puVar2 + -8) = uVar15;
      puVar27 = puVar2 + -0x10;
      lVar23 = 0x3eb4000;
      if ((bRam0000000003eb4ec2 & 1) == 0) {
        func_0x00f78a20(0x3d527e8);
        func_0x00f78a20(0x3d527f8);
        func_0x00f78a20(0x3d52800);
        func_0x00f78a20(0x3d278d8);
        func_0x00f78a20(0x3d27718);
        bRam0000000003eb4ec2 = 1;
      }
      if (*(long *)(lVar22 + 0x58) == 0) {
code_r0x01535ac8:
        lVar9 = func_0x00f78af4();
        *(long *)(puVar2 + -0x90) = lVar23;
        *(long *)(puVar2 + -0x88) = lVar22;
        *(undefined1 **)(puVar2 + -0x80) = puVar27;
        *(undefined **)(puVar2 + -0x78) =
             &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterHitPlayerEndTrigger;
        uVar10 = 0;
        iVar7 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
        if (iVar7 == 0) {
          return;
        }
        uVar21 = *(undefined8 *)(puVar2 + -0x90);
        *(undefined8 *)(puVar2 + -0x90) = uVar21;
        *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(puVar2 + -0x88);
        *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0x80);
        *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x78);
        puVar27 = puVar2 + -0x80;
        uVar12 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar9,0);
        if ((uVar12 & 1) == 0) {
          puVar27 = *(undefined1 **)(puVar2 + -0x80);
          puVar28 = *(undefined **)(puVar2 + -0x78);
          uVar21 = *(undefined8 *)(puVar2 + -0x90);
          lVar22 = *(long *)(puVar2 + -0x88);
          lVar13 = lVar9;
        }
        else {
          if (*(long *)(lVar9 + 0xb8) != 0) {
            Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsedUsables(*(long *)(lVar9 + 0xb8),0);
            uVar21 = *(undefined8 *)(puVar2 + -0x80);
            uVar15 = *(undefined8 *)(puVar2 + -0x78);
            uVar25 = *(undefined8 *)(puVar2 + -0x90);
            uVar29 = *(undefined8 *)(puVar2 + -0x88);
            goto Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RetrySection;
          }
          puVar28 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteHitPlayerCondition;
          lVar13 = func_0x00f78af4();
          puVar3 = puVar2 + -0x90;
          lVar22 = lVar9;
        }
code_r0x01535b58:
        puVar5 = puVar3 + -0x60;
        *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
        *(long *)(puVar3 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar3 + -0x20) = uVar21;
        *(long *)(puVar3 + -0x18) = lVar22;
        *(undefined1 **)(puVar3 + -0x10) = puVar27;
        *(undefined **)(puVar3 + -8) = puVar28;
        puVar27 = puVar3 + -0x10;
        lVar22 = 0x3eb4000;
        if ((bRam0000000003eb4ec4 & 1) == 0) {
          func_0x00f78a20(0x3d527d0);
          func_0x00f78a20(0x3d527f0);
          func_0x00f78a20(0x3d278d8);
          func_0x00f78a20(0x3d27728);
          bRam0000000003eb4ec4 = 1;
        }
        lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar13);
        if (lVar9 != 0) {
          unaff_x22 = 0x3d52000;
          uVar21 = *(undefined8 *)(lVar9 + 0xa0);
          uVar15 = *(undefined8 *)(lVar9 + 0xb8);
          uVar25 = *(undefined8 *)(lVar9 + 0xb0);
          *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(lVar9 + 0xa8);
          *(undefined8 *)(puVar3 + -0x60) = uVar21;
          *(undefined8 *)(puVar3 + -0x48) = uVar15;
          *(undefined8 *)(puVar3 + -0x50) = uVar25;
          uVar21 = *(undefined8 *)(lVar9 + 0xc0);
          *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(lVar9 + 200);
          *(undefined8 *)(puVar3 + -0x40) = uVar21;
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar13,puVar3 + -0x60,0);
          *(undefined4 *)(lVar13 + 0xe8) = 0;
          lVar22 = *(long *)(lVar13 + 0xd8);
          unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
          uVar10 = uRam0000000003d527d0;
          /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar13,uRam0000000003d527d0,0);
          if (lVar22 != 0) {
            uVar10 = 0;
            /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar22,unaff_x21);
            if (*(long *)(lVar13 + 0x10) != 0) {
              unaff_x22 = 0x3d52000;
              plVar24 = *(long **)(*(long *)(lVar13 + 0x10) + 0x40);
              unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
              auVar37._8_8_ = unaff_x21;
              auVar37._0_8_ = plVar24;
              uVar25 = 0;
              uVar10 = uRam0000000003d527f0;
              /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar13,uRam0000000003d527f0,0);
              lVar22 = 0;
              if (plVar24 != (long *)0x0) {
                puVar28 = &UNK_01535c74;
                goto code_r0x0159d844;
              }
            }
          }
        }
        auVar35 = func_0x00f78af4();
        lVar23 = auVar35._0_8_;
        puVar4 = puVar3 + -0xb0;
        *(long *)(puVar3 + -0x80) = lVar22;
        *(long *)(puVar3 + -0x78) = lVar13;
        *(undefined1 **)(puVar3 + -0x70) = puVar27;
        *(undefined **)(puVar3 + -0x68) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnPickup;
        puVar27 = puVar3 + -0x70;
        if (auVar35._8_8_ != 0) {
          if (*(long *)(auVar35._8_8_ + 0x10) != *(long *)(lVar23 + 0x38)) {
            return;
          }
          lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar23);
          lVar13 = lVar23;
          if (lVar9 != 0) {
            uVar21 = *(undefined8 *)(lVar9 + 0x40);
            uVar15 = *(undefined8 *)(lVar9 + 0x58);
            uVar25 = *(undefined8 *)(lVar9 + 0x50);
            *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(lVar9 + 0x48);
            *(undefined8 *)(puVar3 + -0xb0) = uVar21;
            *(undefined8 *)(puVar3 + -0x98) = uVar15;
            *(undefined8 *)(puVar3 + -0xa0) = uVar25;
            uVar21 = *(undefined8 *)(lVar9 + 0x60);
            *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(lVar9 + 0x68);
            *(undefined8 *)(puVar3 + -0x90) = uVar21;
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar23,puVar3 + -0xb0,0);
            if (*(int *)(lVar23 + 0xe8) != 1) {
              return;
            }
            puVar28 = &UNK_01535d00;
            puVar4 = puVar3 + -0xb0;
            lVar11 = lVar23;
            goto code_r0x0153580c;
          }
        }
        puVar28 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartUseUsableSection;
        lVar11 = func_0x00f78af4();
code_r0x01535d14:
        *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
        *(long *)(puVar4 + -0x28) = unaff_x21;
        *(long *)(puVar4 + -0x20) = lVar22;
        *(long *)(puVar4 + -0x18) = lVar13;
        *(undefined1 **)(puVar4 + -0x10) = puVar27;
        *(undefined **)(puVar4 + -8) = puVar28;
        uVar21 = 0x3eb4000;
        if ((bRam0000000003eb4ec1 & 1) == 0) {
          func_0x00f78a20(0x3d52800);
          func_0x00f78a20(0x3d27718);
          bRam0000000003eb4ec1 = 1;
        }
        *(undefined4 *)(lVar11 + 0xe8) = 2;
        lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar11);
        if (lVar9 != 0) {
          uVar10 = (ulong)*(uint *)(lVar9 + 0x14c);
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                    (lVar11,*(undefined8 *)(lVar9 + 0x130),uVar10,*(char *)(lVar9 + 0x148) != '\0',0
                    );
          if (*(long *)(lVar11 + 0x10) != 0) {
            unaff_x22 = 0x3d52000;
            lVar9 = *(long *)(*(long *)(lVar11 + 0x10) + 0x40);
            unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
            auVar34._8_8_ = unaff_x21;
            auVar34._0_8_ = lVar9;
            uVar10 = uRam0000000003d52800;
            /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar11,uRam0000000003d52800,0);
            uVar21 = 0;
            if (lVar9 != 0) {
              puVar27 = *(undefined1 **)(puVar4 + -0x10);
              puVar28 = *(undefined **)(puVar4 + -8);
              plVar24 = *(long **)(puVar4 + -0x20);
              uVar25 = *(undefined8 *)(puVar4 + -0x18);
              uVar21 = *(undefined8 *)(puVar4 + -0x30);
              lVar9 = *(long *)(puVar4 + -0x28);
              puVar3 = puVar4;
              goto code_r0x0159d188;
            }
          }
        }
        auVar35 = func_0x00f78af4();
        *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
        *(undefined **)(puVar4 + -0x38) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnUse;
        if (auVar35._8_8_ == 0) {
          lVar22 = func_0x00f78af4();
          *(undefined8 *)(puVar4 + -0x70) = unaff_x22;
          *(long *)(puVar4 + -0x68) = unaff_x21;
          *(undefined8 *)(puVar4 + -0x60) = uVar21;
          *(long *)(puVar4 + -0x58) = lVar11;
          *(undefined1 **)(puVar4 + -0x50) = puVar4 + -0x40;
          *(undefined **)(puVar4 + -0x48) =
               &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartHitPlayerSection;
          uVar21 = 0x3eb4000;
          if ((bRam0000000003eb4ec3 & 1) == 0) {
            func_0x00f78a20(0x3d527f0);
            func_0x00f78a20(0x3d27728);
            bRam0000000003eb4ec3 = 1;
          }
          lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar22);
          if (lVar9 == 0) goto code_r0x01535ee8;
          uVar10 = (ulong)*(uint *)(lVar9 + 0x1ac);
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                    (lVar22,*(undefined8 *)(lVar9 + 400),uVar10,*(char *)(lVar9 + 0x1a8) != '\0',0);
          *(undefined4 *)(lVar22 + 0xe8) = 3;
          if (*(long *)(lVar22 + 0x10) == 0) goto code_r0x01535ee8;
          unaff_x22 = 0x3d52000;
          lVar9 = *(long *)(*(long *)(lVar22 + 0x10) + 0x40);
          unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
          uVar10 = uRam0000000003d527f0;
          /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar22,uRam0000000003d527f0,0);
          uVar21 = 0;
          if (lVar9 == 0) goto code_r0x01535ee8;
          *(undefined8 *)(puVar4 + -0x70) = *(undefined8 *)(puVar4 + -0x70);
          *(undefined8 *)(puVar4 + -0x68) = *(undefined8 *)(puVar4 + -0x68);
          *(undefined8 *)(puVar4 + -0x60) = *(undefined8 *)(puVar4 + -0x60);
          *(undefined8 *)(puVar4 + -0x58) = *(undefined8 *)(puVar4 + -0x58);
          *(undefined8 *)(puVar4 + -0x50) = *(undefined8 *)(puVar4 + -0x50);
          *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)(puVar4 + -0x48);
          if ((bRam0000000003eb51f9 & 1) == 0) {
            func_0x00f78a20(0x3d27728,unaff_x21,0);
            bRam0000000003eb51f9 = 1;
          }
          plVar24 = (long *)(lVar9 + 0x98);
          lVar9 = *plVar24;
          while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,unaff_x21,0), plVar8 == (long *)0x0 ||
                 (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
            lVar22 = func_0x00ff0f44(plVar24,plVar8,lVar9);
            bVar6 = lVar9 == lVar22;
            lVar9 = lVar22;
            if (bVar6) {
              return;
            }
          }
          auVar35 = func_0x00f78e5c(plVar8);
          uVar25 = auVar35._8_8_;
          puVar3 = puVar4 + -0xa0;
          *(undefined8 *)(puVar4 + -0xa0) = 0x3d27728;
          *(long *)(puVar4 + -0x98) = lVar9;
          *(long **)(puVar4 + -0x90) = plVar24;
          *(long *)(puVar4 + -0x88) = unaff_x21;
          *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x50;
          *(undefined **)(puVar4 + -0x78) =
               &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
          puVar27 = puVar4 + -0x80;
          if ((bRam0000000003eb51fb & 1) == 0) {
            func_0x00f78a20(0x3d27730);
            bRam0000000003eb51fb = 1;
          }
          uVar21 = 0x3d27730;
          plVar24 = (long *)(auVar35._0_8_ + 0xa0);
          lVar9 = *plVar24;
          while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,uVar25,0), plVar8 == (long *)0x0 ||
                 (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
            lVar22 = func_0x00ff0f44(plVar24,plVar8,lVar9);
            bVar6 = lVar9 == lVar22;
            lVar9 = lVar22;
            if (bVar6) {
              return;
            }
          }
          puVar28 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
          auVar34 = func_0x00f78e5c(plVar8);
code_r0x0159d188:
          *(undefined8 *)(puVar3 + -0x30) = uVar21;
          *(long *)(puVar3 + -0x28) = lVar9;
          *(long **)(puVar3 + -0x20) = plVar24;
          *(undefined8 *)(puVar3 + -0x18) = uVar25;
          *(undefined1 **)(puVar3 + -0x10) = puVar27;
          *(undefined **)(puVar3 + -8) = puVar28;
          if ((bRam0000000003eb51f3 & 1) == 0) {
            func_0x00f78a20(0x3d27718);
            bRam0000000003eb51f3 = 1;
          }
          plVar24 = (long *)(auVar34._0_8_ + 0x80);
          lVar9 = *plVar24;
          while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,auVar34._8_8_,0), plVar8 == (long *)0x0 ||
                 (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
            lVar22 = func_0x00ff0f44(plVar24,plVar8,lVar9);
            bVar6 = lVar9 == lVar22;
            lVar9 = lVar22;
            if (bVar6) {
              return;
            }
          }
          auVar35 = func_0x00f78e5c(plVar8);
          *(undefined8 *)(puVar3 + -0x60) = 0x3d27718;
          *(long *)(puVar3 + -0x58) = lVar9;
          *(long **)(puVar3 + -0x50) = plVar24;
          *(long *)(puVar3 + -0x48) = auVar34._8_8_;
          *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x38) =
               &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
          if ((bRam0000000003eb51fd & 1) == 0) {
            func_0x00f78a20(0x3d27738);
            bRam0000000003eb51fd = 1;
          }
          plVar24 = (long *)(auVar35._0_8_ + 0xa8);
          lVar9 = *plVar24;
          while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,auVar35._8_8_,0), plVar8 == (long *)0x0 ||
                 (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
            lVar22 = func_0x00ff0f44(plVar24,plVar8,lVar9);
            bVar6 = lVar9 == lVar22;
            lVar9 = lVar22;
            if (bVar6) {
              return;
            }
          }
          auVar36 = func_0x00f78e5c(plVar8);
          *(undefined8 *)(puVar3 + -0x90) = 0x3d27738;
          *(long *)(puVar3 + -0x88) = lVar9;
          *(long **)(puVar3 + -0x80) = plVar24;
          *(long *)(puVar3 + -0x78) = auVar35._8_8_;
          *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
          *(undefined **)(puVar3 + -0x68) =
               &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
          if ((bRam0000000003eb51f5 & 1) == 0) {
            func_0x00f78a20(0x3d27700);
            bRam0000000003eb51f5 = 1;
          }
          plVar24 = (long *)(auVar36._0_8_ + 0x88);
          lVar9 = *plVar24;
          while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,auVar36._8_8_,0), plVar8 == (long *)0x0 ||
                 (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
            lVar22 = func_0x00ff0f44(plVar24,plVar8,lVar9);
            bVar6 = lVar9 == lVar22;
            lVar9 = lVar22;
            if (bVar6) {
              return;
            }
          }
          auVar35 = func_0x00f78e5c(plVar8);
          puVar4 = puVar3 + -0xe0;
          *(undefined8 *)(puVar3 + -0xe0) = unaff_x26;
          *(undefined8 *)(puVar3 + -0xd8) = unaff_x25;
          *(undefined8 *)(puVar3 + -0xd0) = unaff_x24;
          *(undefined8 **)(puVar3 + -200) = unaff_x23;
          *(undefined8 *)(puVar3 + -0xc0) = 0x3d27700;
          *(long *)(puVar3 + -0xb8) = lVar9;
          *(long **)(puVar3 + -0xb0) = plVar24;
          *(long *)(puVar3 + -0xa8) = auVar36._8_8_;
          *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x70;
          *(code **)(puVar3 + -0x98) = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
          puVar27 = puVar3 + -0xa0;
          unaff_x23 = (undefined8 *)0x3d27718;
          unaff_x24 = 0x3d570f0;
          if ((bRam0000000003eb51b7 & 1) == 0) {
            func_0x00f78a20(0x3d524e0);
            func_0x00f78a20(0x3d524e8);
            func_0x00f78a20(0x3d524f0);
            func_0x00f78a20(0x3d524f8);
            func_0x00f78a20(0x3d570d0);
            func_0x00f78a20(0x3d570f0);
            func_0x00f78a20(0x3d27700);
            func_0x00f78a20(0x3d27718);
            func_0x00f78a20(0x3d27728);
            func_0x00f78a20(0x3d27730);
            func_0x00f78a20(0x3d27738);
            bRam0000000003eb51b7 = 1;
          }
          unaff_x21 = *(long *)(auVar35._0_8_ + 0x40);
          uVar21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
          auVar36._8_8_ = uVar21;
          auVar36._0_8_ = unaff_x21;
          uVar25 = 0;
          /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(uVar21,auVar35._0_8_,uRam0000000003d570f0,0);
          if (unaff_x21 == 0) {
            puVar28 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
            auVar36 = func_0x00f78af4();
          }
          else {
            unaff_x24 = 0x3d27000;
            unaff_x25 = 0x3d52000;
            puVar28 = (undefined *)0x159d470;
            puVar4 = puVar3 + -0xe0;
          }
          goto code_r0x0159d5c4;
        }
        if (*(long *)(auVar35._8_8_ + 0x10) != *(long *)(auVar35._0_8_ + 0x38)) {
          return;
        }
        puVar2 = puVar4 + -0x30;
        uVar25 = *(undefined8 *)(puVar4 + -0x40);
        uVar15 = *(undefined8 *)(puVar4 + -0x38);
        lVar22 = auVar35._0_8_;
        goto Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteUseUsableCondition;
      }
      *(undefined1 *)(*(long *)(lVar22 + 0x58) + 0x100) = 1;
      lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar22);
      if (lVar9 == 0) goto code_r0x01535ac8;
      uVar21 = *(undefined8 *)(lVar9 + 0x70);
      uVar15 = *(undefined8 *)(lVar9 + 0x88);
      uVar25 = *(undefined8 *)(lVar9 + 0x80);
      *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(lVar9 + 0x78);
      *(undefined8 *)(puVar2 + -0x70) = uVar21;
      *(undefined8 *)(puVar2 + -0x58) = uVar15;
      *(undefined8 *)(puVar2 + -0x60) = uVar25;
      uVar21 = *(undefined8 *)(lVar9 + 0x90);
      *(undefined8 *)(puVar2 + -0x48) = *(undefined8 *)(lVar9 + 0x98);
      *(undefined8 *)(puVar2 + -0x50) = uVar21;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar22,puVar2 + -0x70,0);
      lVar23 = *(long *)(lVar22 + 0xd0);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar22,uRam0000000003d527e8,0);
      unaff_x22 = 0x3d52000;
      if (lVar23 == 0) goto code_r0x01535ac8;
      /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar23,unaff_x21,0);
      if (*(long *)(lVar22 + 0x10) == 0) goto code_r0x01535ac8;
      uVar21 = 0x3d27718;
      unaff_x23 = (undefined8 *)0x3d52000;
      lVar23 = *(long *)(*(long *)(lVar22 + 0x10) + 0x40);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar22,uRam0000000003d527f8,0);
      unaff_x22 = 0x3d27718;
      if (lVar23 == 0) goto code_r0x01535ac8;
      /*Atlas.Gameplay.Player.GameContextPlayerManager$$remove_OnUsableAttached*/ func_0x015a5cc8(lVar23,unaff_x21,0);
      if (*(long *)(lVar22 + 0x10) == 0) goto code_r0x01535ac8;
      unaff_x23 = (undefined8 *)0x3d52000;
      lVar9 = *(long *)(*(long *)(lVar22 + 0x10) + 0x40);
      auVar35._8_8_ = lVar9;
      auVar35._0_8_ = lVar22;
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
      auVar36._8_8_ = unaff_x21;
      auVar36._0_8_ = lVar9;
      uVar25 = 0;
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar22,uRam0000000003d52800,0);
      lVar23 = 0;
      unaff_x22 = uVar21;
      if (lVar9 == 0) goto code_r0x01535ac8;
      puVar28 = &UNK_01535aa8;
code_r0x0159d5c4:
      *(undefined8 *)(puVar4 + -0x30) = uVar21;
      *(long *)(puVar4 + -0x28) = unaff_x21;
      *(long *)(puVar4 + -0x20) = auVar35._8_8_;
      *(long *)(puVar4 + -0x18) = auVar35._0_8_;
      *(undefined1 **)(puVar4 + -0x10) = puVar27;
      *(undefined **)(puVar4 + -8) = puVar28;
      if ((bRam0000000003eb51f4 & 1) == 0) {
        func_0x00f78a20(0x3d27718);
        bRam0000000003eb51f4 = 1;
      }
      plVar24 = (long *)(auVar36._0_8_ + 0x80);
      lVar9 = *plVar24;
      while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,auVar36._8_8_,0), plVar8 == (long *)0x0 ||
             (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
        lVar22 = func_0x00ff0f44(plVar24,plVar8,lVar9);
        bVar6 = lVar9 == lVar22;
        lVar9 = lVar22;
        if (bVar6) {
          return;
        }
      }
      auVar35 = func_0x00f78e5c(plVar8);
      *(undefined8 *)(puVar4 + -0x60) = 0x3d27718;
      *(long *)(puVar4 + -0x58) = lVar9;
      *(long **)(puVar4 + -0x50) = plVar24;
      *(long *)(puVar4 + -0x48) = auVar36._8_8_;
      *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
      *(undefined **)(puVar4 + -0x38) =
           &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
      if ((bRam0000000003eb51f6 & 1) == 0) {
        func_0x00f78a20(0x3d27700);
        bRam0000000003eb51f6 = 1;
      }
      plVar24 = (long *)(auVar35._0_8_ + 0x88);
      lVar9 = *plVar24;
      while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,auVar35._8_8_,0), plVar8 == (long *)0x0 ||
             (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
        lVar22 = func_0x00ff0f44(plVar24,plVar8,lVar9);
        bVar6 = lVar9 == lVar22;
        lVar9 = lVar22;
        if (bVar6) {
          return;
        }
      }
      auVar36 = func_0x00f78e5c(plVar8);
      *(undefined8 *)(puVar4 + -0x90) = 0x3d27700;
      *(long *)(puVar4 + -0x88) = lVar9;
      *(long **)(puVar4 + -0x80) = plVar24;
      *(long *)(puVar4 + -0x78) = auVar35._8_8_;
      *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
      *(undefined **)(puVar4 + -0x68) =
           &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
      if ((bRam0000000003eb51fe & 1) == 0) {
        func_0x00f78a20(0x3d27738);
        bRam0000000003eb51fe = 1;
      }
      plVar24 = (long *)(auVar36._0_8_ + 0xa8);
      lVar9 = *plVar24;
      while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,auVar36._8_8_,0), plVar8 == (long *)0x0 ||
             (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
        lVar22 = func_0x00ff0f44(plVar24,plVar8,lVar9);
        bVar6 = lVar9 == lVar22;
        lVar9 = lVar22;
        if (bVar6) {
          return;
        }
      }
      auVar35 = func_0x00f78e5c(plVar8);
      lVar13 = auVar35._8_8_;
      puVar5 = puVar4 + -0xc0;
      *(undefined8 *)(puVar4 + -0xc0) = 0x3d27738;
      *(long *)(puVar4 + -0xb8) = lVar9;
      *(long **)(puVar4 + -0xb0) = plVar24;
      *(long *)(puVar4 + -0xa8) = auVar36._8_8_;
      *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x70;
      *(undefined **)(puVar4 + -0x98) =
           &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
      puVar27 = puVar4 + -0xa0;
      if ((bRam0000000003eb51fc & 1) == 0) {
        func_0x00f78a20(0x3d27730);
        bRam0000000003eb51fc = 1;
      }
      unaff_x22 = 0x3d27730;
      plVar24 = (long *)(auVar35._0_8_ + 0xa0);
      unaff_x21 = *plVar24;
      while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x21,lVar13,0), plVar8 == (long *)0x0 ||
             (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
        lVar9 = func_0x00ff0f44(plVar24,plVar8,unaff_x21);
        bVar6 = unaff_x21 == lVar9;
        unaff_x21 = lVar9;
        if (bVar6) {
          return;
        }
      }
      puVar28 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
      auVar37 = func_0x00f78e5c(plVar8);
code_r0x0159d844:
      *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
      *(long *)(puVar5 + -0x28) = unaff_x21;
      *(long **)(puVar5 + -0x20) = plVar24;
      *(long *)(puVar5 + -0x18) = lVar13;
      *(undefined1 **)(puVar5 + -0x10) = puVar27;
      *(undefined **)(puVar5 + -8) = puVar28;
      if ((bRam0000000003eb51fa & 1) == 0) {
        func_0x00f78a20(0x3d27728);
        bRam0000000003eb51fa = 1;
      }
      plVar24 = (long *)0x3d27728;
      plVar8 = (long *)(auVar37._0_8_ + 0x98);
      lVar9 = *plVar8;
      while( true ) {
        puVar17 = (undefined8 *)0x0;
        plVar14 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,auVar37._8_8_);
        if ((plVar14 != (long *)0x0) && (*plVar14 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
        lVar22 = func_0x00ff0f44(plVar8,plVar14,lVar9);
        bVar6 = lVar9 == lVar22;
        lVar9 = lVar22;
        if (bVar6) {
          return;
        }
      }
      lVar22 = func_0x00f78e5c(plVar14);
      *(undefined8 *)(puVar5 + -0x80) = unaff_x26;
      *(undefined8 *)(puVar5 + -0x78) = unaff_x25;
      *(undefined8 *)(puVar5 + -0x70) = unaff_x24;
      *(undefined8 **)(puVar5 + -0x68) = unaff_x23;
      *(undefined8 *)(puVar5 + -0x60) = 0x3d27728;
      *(long *)(puVar5 + -0x58) = lVar9;
      *(long **)(puVar5 + -0x50) = plVar8;
      *(long *)(puVar5 + -0x48) = auVar37._8_8_;
      *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
      *(undefined **)(puVar5 + -0x38) = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
      lVar9 = 0x3eb5000;
      if ((bRam0000000003eb5204 & 1) == 0) {
        func_0x00f78a20(0x3d29f28);
        func_0x00f78a20(0x3d2a1d8);
        func_0x00f78a20(0x3d2a1c8);
        func_0x00f78a20(0x3d1b4e0);
        func_0x00f78a20(0x3d1b4e8);
        func_0x00f78a20(0x3d1b3b0);
        func_0x00f78a20(0x3d43378);
        func_0x00f78a20(0x3d57230);
        func_0x00f78a20(0x3d57238);
        func_0x00f78a20(0x3d57240);
        bRam0000000003eb5204 = 1;
      }
      lVar23 = *(long *)(lVar22 + 0x28);
      if (lVar23 != 0) {
        plVar24 = (long *)(lVar22 + 0x10);
        uVar20 = *(uint *)(lVar23 + 0x18);
        if ((int)uVar20 < 1) {
code_r0x0159d9f0:
          if (((*(long *)(lVar22 + 0x20) == 0) ||
              (lVar11 = *(long *)(*(long *)(lVar22 + 0x20) + 0x20), lVar11 == 0)) ||
             (unaff_x23 = *(undefined8 **)(lVar11 + 0x10), unaff_x23 == (undefined8 *)0x0))
          goto code_r0x0159db7c;
          uVar21 = 0x3d1b4e8;
          unaff_x24 = 0x3d1b4e8;
          lVar9 = unaff_x23[3];
          lVar23 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
          uVar25 = uRam0000000003d2a1d8;
          /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar23,lVar22,uRam0000000003d57238,uRam0000000003d2a1d8);
          puVar17 = (undefined8 *)0x0;
          plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,lVar23);
          if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
            unaff_x23[3] = plVar8;
            if ((*(long *)(lVar22 + 0x20) == 0) ||
               ((lVar11 = *(long *)(*(long *)(lVar22 + 0x20) + 0x20), lVar11 == 0 ||
                (unaff_x23 = *(undefined8 **)(lVar11 + 0x10), unaff_x23 == (undefined8 *)0x0))))
            goto code_r0x0159db7c;
            uVar21 = 0x3d1b3b0;
            unaff_x24 = 0x3d1b3b0;
            lVar9 = unaff_x23[0xe];
            lVar23 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
            uVar25 = uRam0000000003d29f28;
            /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar23,lVar22,uRam0000000003d57240,uRam0000000003d29f28);
            puVar17 = (undefined8 *)0x0;
            plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,lVar23);
            if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
              unaff_x23[0xe] = plVar8;
              if (((*(long *)(lVar22 + 0x20) == 0) ||
                  (lVar11 = *(long *)(*(long *)(lVar22 + 0x20) + 0x20), lVar11 == 0)) ||
                 (unaff_x23 = *(undefined8 **)(lVar11 + 0x10), unaff_x23 == (undefined8 *)0x0))
              goto code_r0x0159db7c;
              uVar21 = 0x3d1b4e0;
              lVar9 = unaff_x23[5];
              lVar23 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
              uVar25 = uRam0000000003d2a1c8;
              /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar23,lVar22,uRam0000000003d57230,uRam0000000003d2a1c8);
              puVar17 = (undefined8 *)0x0;
              plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,lVar23);
              if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
                unaff_x23[5] = plVar8;
                *(undefined1 *)(lVar22 + 0x50) = 0;
                *(undefined8 *)(lVar22 + 0x18) = 0;
                *plVar24 = 0;
                *(undefined8 *)(lVar22 + 0x28) = 0;
                *(undefined8 *)(lVar22 + 0x20) = 0;
                return;
              }
            }
          }
          goto code_r0x0159db8c;
        }
        unaff_x23 = (undefined8 *)0x0;
        unaff_x24 = 0x3d43378;
        while( true ) {
          uVar26 = (uint)unaff_x23;
          uVar21 = unaff_x24;
          if (uVar20 <= uVar26) goto code_r0x0159db80;
          if (*plVar24 == 0) break;
          lVar9 = *(long *)(lVar23 + (long)(int)uVar26 * 8 + 0x20);
          puVar17 = puRam0000000003d43378;
          /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar24,lVar9);
          if (lVar9 == 0) break;
          /*Atlas.Gameplay.Player.GameContextPlayer$$DeInit*/ func_0x015a5404(lVar9);
          unaff_x23 = (undefined8 *)(ulong)(uVar26 + 1);
          uVar20 = *(uint *)(lVar23 + 0x18);
          if ((int)uVar20 <= (int)(uVar26 + 1)) goto code_r0x0159d9f0;
        }
      }
code_r0x0159db7c:
      func_0x00f78af4();
      uVar21 = unaff_x24;
code_r0x0159db80:
      uVar15 = func_0x00f78b24();
      func_0x00f78ac0(uVar15,0);
code_r0x0159db8c:
      auVar35 = func_0x00f78e5c();
      puVar16 = auVar35._8_8_;
      plVar8 = auVar35._0_8_;
      *(undefined8 *)(puVar5 + -0xc0) = uVar21;
      *(undefined8 **)(puVar5 + -0xb8) = unaff_x23;
      *(long **)(puVar5 + -0xb0) = plVar24;
      *(long *)(puVar5 + -0xa8) = lVar23;
      *(long *)(puVar5 + -0xa0) = lVar9;
      *(long *)(puVar5 + -0x98) = lVar22;
      *(undefined1 **)(puVar5 + -0x90) = puVar5 + -0x40;
      *(code **)(puVar5 + -0x88) = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
      puVar18 = puVar17;
      if ((bRam0000000003eb51b8 & 1) == 0) {
        func_0x00f78a20(0x3d69658);
        bRam0000000003eb51b8 = 1;
      }
      if (((plVar8[3] != 0) &&
          (puVar18 = puVar17, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar8[3],puVar16,puVar17,uVar25,0),
          puVar17 != (undefined8 *)0x0)) && (lVar9 = puVar17[2], lVar9 != 0)) {
        uVar21 = *(undefined8 *)(lVar9 + 0x48);
        uVar29 = *(undefined8 *)(lVar9 + 0x60);
        uVar15 = *(undefined8 *)(lVar9 + 0x58);
        *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(lVar9 + 0x50);
        *(undefined8 *)(puVar5 + -0xe0) = uVar21;
        *(undefined8 *)(puVar5 + -200) = uVar29;
        *(undefined8 *)(puVar5 + -0xd0) = uVar15;
        iVar7 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar5 + -0xe0,0);
        if ((iVar7 == 0) || (puVar17 == puVar16)) {
          return;
        }
        iVar7 = (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
        if ((plVar8[0x18] != 0) && (lVar9 = *(long *)(plVar8[0x18] + 0x20), lVar9 != 0)) {
          /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar5 + -0xf8,lVar9,0);
          *(int *)(puVar17 + 0xf) = *(int *)(puVar17 + 0xf) + iVar7;
          uVar21 = *(undefined8 *)(puVar5 + -0xf8);
          puVar17[0x11] = *(undefined8 *)(puVar5 + -0xf0);
          puVar17[0x10] = uVar21;
          puVar17[0x12] = *(undefined8 *)(puVar5 + -0xe8);
          if (puVar17[2] != 0) {
            if (*(int *)(puVar17[2] + 0x50) == 0) {
              uVar21 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
              puVar18 = (undefined8 *)0x0;
              iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar21,/*STR('BattleGameContext')*/ uRam0000000003d69658);
              if (iVar7 != 0) {
                if (plVar8[3] == 0) goto LAB_0159dcf8;
                /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar8[3],*(undefined4 *)(puVar17 + 0xf),0);
              }
            }
            if (plVar8[0x46] == 0) {
              return;
            }
            /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar8[0x46],puVar16,puVar17,uVar25,0);
            return;
          }
        }
      }
LAB_0159dcf8:
      auVar38 = func_0x00f78af4();
      lVar9 = auVar38._0_8_;
      iVar7 = *(int *)(lVar9 + 0x78);
      uVar15 = puVar18[1];
      uVar25 = *puVar18;
      *(undefined8 *)(puVar5 + -0x118) = uVar15;
      *(undefined8 *)(puVar5 + -0x120) = uVar25;
      uVar21 = puVar18[2];
      *(undefined8 *)(puVar5 + -0x110) = uVar21;
      *(int *)(lVar9 + 0x78) = iVar7 + auVar38._8_4_;
      *(undefined8 *)(lVar9 + 0x88) = uVar15;
      *(undefined8 *)(lVar9 + 0x80) = uVar25;
      *(undefined8 *)(lVar9 + 0x90) = uVar21;
      return;
    }
    uVar21 = *(undefined8 *)(puVar4 + -0x40);
    uVar15 = *(undefined8 *)(puVar4 + -0x38);
    register0x00000008 = (BADSPACEBASE *)(puVar4 + -0x30);
    uVar25 = *(undefined8 *)(puVar4 + -0x50);
    uVar29 = *(undefined8 *)(puVar4 + -0x48);
  }
  else {
    if (*(long *)(lVar9 + 0x10) == 0) {
code_r0x01535808:
      puVar28 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompletePickupCondition;
      lVar11 = func_0x00f78af4();
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x30);
      lVar23 = lVar9;
      goto code_r0x0153580c;
    }
    lVar23 = *(long *)(*(long *)(lVar9 + 0x10) + 0x40);
    unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
    /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar9,uRam0000000003d527f8,0);
    lVar22 = 0;
    if (lVar23 == 0) goto code_r0x01535808;
    /*Atlas.Gameplay.Player.GameContextPlayerManager$$remove_OnUsableAttached*/ func_0x015a5cc8(lVar23,unaff_x21,0);
    lVar23 = *(long *)(lVar9 + 0xc0);
    unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar9,uRam0000000003d527e0,0);
    lVar22 = 0;
    if (lVar23 == 0) goto code_r0x01535808;
    /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnEnter*/ func_0x015b49e0(lVar23,unaff_x21,0);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar15 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar25 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x18);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x30);
    unaff_x21 = *(long *)((long)register0x00000008 + -0x28);
  }
Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RetrySection:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = uVar25;
  *(undefined8 *)((long)register0x00000008 + -0x18) = uVar29;
  *(undefined8 *)((long)register0x00000008 + -0x10) = uVar21;
  *(undefined8 *)((long)register0x00000008 + -8) = uVar15;
  *(int *)(lVar9 + 0x8c) = *(int *)(lVar9 + 0x8c) + 1;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
            ((undefined1 *)((long)register0x00000008 + -0x90),lVar9,*(undefined8 *)(lVar9 + 0xa8));
  *(undefined8 *)((long)register0x00000008 + -0xd8) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  *(undefined8 *)((long)register0x00000008 + -0xe0) =
       *(undefined8 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -200) =
       *(undefined8 *)((long)register0x00000008 + -0x78);
  *(undefined8 *)((long)register0x00000008 + -0xd0) =
       *(undefined8 *)((long)register0x00000008 + -0x80);
  uVar31 = *(undefined8 *)((long)register0x00000008 + -0x58);
  uVar30 = *(undefined8 *)((long)register0x00000008 + -0x60);
  uVar29 = *(undefined8 *)((long)register0x00000008 + -0x48);
  uVar15 = *(undefined8 *)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar31;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar30;
  *(undefined8 *)((long)register0x00000008 + -0x98) = uVar29;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar15;
  uVar33 = *(undefined8 *)((long)register0x00000008 + -0x68);
  uVar32 = *(undefined8 *)((long)register0x00000008 + -0x70);
  *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar33;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar32;
  uVar21 = *(undefined8 *)((long)register0x00000008 + -0x40);
  uVar25 = *(undefined8 *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x68) = uVar33;
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar32;
  *(undefined8 *)((long)register0x00000008 + -0x58) = uVar31;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar30;
  *(undefined8 *)((long)register0x00000008 + -0x48) = uVar29;
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x88) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  *(undefined8 *)((long)register0x00000008 + -0x90) =
       *(undefined8 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -0x78) =
       *(undefined8 *)((long)register0x00000008 + -0x78);
  *(undefined8 *)((long)register0x00000008 + -0x80) =
       *(undefined8 *)((long)register0x00000008 + -0x80);
  *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar31;
  *(undefined8 *)((long)register0x00000008 + -0x100) = uVar30;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar29;
  *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x108) = uVar33;
  *(undefined8 *)((long)register0x00000008 + -0x110) = uVar32;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
            (lVar9,(undefined1 *)((long)register0x00000008 + -0x110));
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnHumanPlayerAtLocator(lVar9,uVar21);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnAIsAtLocators(lVar9,uVar25);
  uVar21 = *(undefined8 *)(lVar9 + 0xa8);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection(lVar9);
  plVar24 = *(long **)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = plVar24;
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar21;
  if ((bRam0000000003eb48a2 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d62270);
    func_0x00f78a20(0x3d26ac8);
    bRam0000000003eb48a2 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
  *(undefined8 *)((long)register0x00000008 + -200) = 0;
  *(undefined8 *)(lVar9 + 0xa8) = uVar21;
  if ((*(long *)(lVar9 + 0x40) != 0) &&
     (lVar22 = *(long *)(*(long *)(lVar9 + 0x40) + 0x30), lVar22 != 0)) {
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x110),lVar22,uRam0000000003d3cd70);
    *(undefined8 *)((long)register0x00000008 + -0x98) =
         *(undefined8 *)((long)register0x00000008 + -0xe8);
    *(undefined8 *)((long)register0x00000008 + -0xa0) =
         *(undefined8 *)((long)register0x00000008 + -0xf0);
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)((long)register0x00000008 + -0xd8);
    *(undefined8 *)((long)register0x00000008 + -0x90) =
         *(undefined8 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)((long)register0x00000008 + -0xd0);
    *(undefined8 *)((long)register0x00000008 + -0xb8) =
         *(undefined8 *)((long)register0x00000008 + -0x108);
    *(undefined8 *)((long)register0x00000008 + -0xc0) =
         *(undefined8 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0xa8) =
         *(undefined8 *)((long)register0x00000008 + -0xf8);
    *(undefined8 *)((long)register0x00000008 + -0xb0) =
         *(undefined8 *)((long)register0x00000008 + -0x100);
LAB_01478328:
    do {
      uVar10 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0xc0),uRam0000000003d33320
                              );
      if ((uVar10 & 1) == 0) {
LAB_01478494:
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0xc0),uRam0000000003d33318);
        return;
      }
      lVar22 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___ctor(lVar22,0);
      if (lVar22 == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(long *)(lVar22 + 0x50) = lVar9;
      uVar29 = *(undefined8 *)((long)register0x00000008 + -0x98);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0xa0);
      uVar25 = *(undefined8 *)((long)register0x00000008 + -0x88);
      uVar21 = *(undefined8 *)((long)register0x00000008 + -0x90);
      uVar31 = *(undefined8 *)((long)register0x00000008 + -0xa8);
      uVar30 = *(undefined8 *)((long)register0x00000008 + -0xb0);
      *(undefined8 *)(lVar22 + 0x40) = *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)(lVar22 + 0x28) = uVar29;
      *(undefined8 *)(lVar22 + 0x20) = uVar15;
      *(undefined8 *)(lVar22 + 0x38) = uVar25;
      *(undefined8 *)(lVar22 + 0x30) = uVar21;
      *(undefined8 *)(lVar22 + 0x18) = uVar31;
      *(undefined8 *)(lVar22 + 0x10) = uVar30;
      *(undefined8 *)((long)register0x00000008 + -0x110) = *(undefined8 *)(lVar22 + 0x18);
      uVar21 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,
                               (undefined1 *)((long)register0x00000008 + -0x110));
      uVar10 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -0x70),uVar21,0);
    } while ((uVar10 & 1) == 0);
    if (*(long *)(lVar9 + 0x60) == 0) {
      func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14784e0);
      (*pcVar1)();
    }
    puVar17 = (undefined8 *)(lVar22 + 0x10);
    puVar18 = (undefined8 *)(lVar22 + 0x48);
    uVar10 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar9 + 0x60),*puVar17,puVar18,0);
    if ((uVar10 & 1) == 0) goto LAB_01478494;
    uVar21 = *(undefined8 *)(lVar9 + 0xa0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar21,0,0);
    if ((uVar10 & 1) != 0) {
      if (*(long *)(lVar9 + 0xa0) == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)(*(long *)(lVar9 + 0xa0) + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0x110) = *puVar17;
      uVar21 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,
                               (undefined1 *)((long)register0x00000008 + -0x110));
      uVar10 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -200),uVar21,0);
      if ((uVar10 & 1) != 0) {
        uVar21 = *(undefined8 *)(lVar9 + 0x38);
        uVar25 = *puVar17;
        uVar29 = *(undefined8 *)(lVar22 + 0x28);
        uVar15 = *(undefined8 *)(lVar22 + 0x20);
        *(undefined8 *)((long)register0x00000008 + -0x148) = *(undefined8 *)(lVar22 + 0x18);
        *(undefined8 *)((long)register0x00000008 + -0x150) = uVar25;
        *(undefined8 *)((long)register0x00000008 + -0x138) = uVar29;
        *(undefined8 *)((long)register0x00000008 + -0x140) = uVar15;
        uVar25 = *(undefined8 *)(lVar22 + 0x30);
        *(undefined8 *)((long)register0x00000008 + -0x128) = *(undefined8 *)(lVar22 + 0x38);
        *(undefined8 *)((long)register0x00000008 + -0x130) = uVar25;
        *(undefined8 *)((long)register0x00000008 + -0x120) = *(undefined8 *)(lVar22 + 0x40);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                  (lVar9,uVar21,(undefined1 *)((long)register0x00000008 + -0x150));
        goto LAB_01478328;
      }
    }
    uVar25 = *puVar18;
    uVar21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar21,lVar22,uRam0000000003d62270,0);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AddBaseListener(lVar9,uVar25,uVar21,*puVar18);
    goto LAB_01478328;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar8 = (long *)___cxa_begin_catch();
    lVar9 = *plVar8;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0xc0),uRam0000000003d33318);
    if (lVar9 == 0) {
      return;
    }
    func_0x00f78ac0(lVar9,0);
  }
  lVar22 = __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -400) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x188) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x180) = plVar24;
  *(undefined8 *)((long)register0x00000008 + -0x178) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x170) = uVar21;
  *(long *)((long)register0x00000008 + -0x168) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x160) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x158) =
       Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
  lVar9 = 0x3eb4000;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
  *(undefined4 *)((long)register0x00000008 + -0x1f0) = 0;
  if ((*(long *)(lVar22 + 0x40) != 0) &&
     (lVar23 = *(long *)(*(long *)(lVar22 + 0x40) + 0x30), lVar23 != 0)) {
    plVar24 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x240),lVar23,uRam0000000003d3cd70);
    *(undefined8 *)((long)register0x00000008 + -0x1b8) =
         *(undefined8 *)((long)register0x00000008 + -0x218);
    *(undefined8 *)((long)register0x00000008 + -0x1c0) =
         *(undefined8 *)((long)register0x00000008 + -0x220);
    *(undefined8 *)((long)register0x00000008 + -0x1a8) =
         *(undefined8 *)((long)register0x00000008 + -0x208);
    *(undefined8 *)((long)register0x00000008 + -0x1b0) =
         *(undefined8 *)((long)register0x00000008 + -0x210);
    *(undefined8 *)((long)register0x00000008 + -0x1a0) =
         *(undefined8 *)((long)register0x00000008 + -0x200);
    *(undefined8 *)((long)register0x00000008 + -0x1d8) =
         *(undefined8 *)((long)register0x00000008 + -0x238);
    *(undefined8 *)((long)register0x00000008 + -0x1e0) =
         *(undefined8 *)((long)register0x00000008 + -0x240);
    *(undefined8 *)((long)register0x00000008 + -0x1c8) =
         *(undefined8 *)((long)register0x00000008 + -0x228);
    *(undefined8 *)((long)register0x00000008 + -0x1d0) =
         *(undefined8 *)((long)register0x00000008 + -0x230);
LAB_01478624:
    do {
      uVar10 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0x1e0),
                               uRam0000000003d33320);
      if ((uVar10 & 1) == 0) goto LAB_01478690;
      uVar21 = *(undefined8 *)((long)register0x00000008 + -0x1d0);
      *(undefined8 *)((long)register0x00000008 + -0x240) =
           *(undefined8 *)((long)register0x00000008 + -0x1c8);
      uVar25 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,
                               (undefined1 *)((long)register0x00000008 + -0x240));
      uVar10 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar22 + 0xa8,uVar25,0);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(lVar22 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar10 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar22 + 0x60),uVar21,
                                   (undefined1 *)((long)register0x00000008 + -0x1e8),0);
          if ((uVar10 & 1) == 0) {
            uVar19 = 0x86;
            goto code_r0x0147869c;
          }
          if (*(long *)((long)register0x00000008 + -0x1e8) != 0) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                      (lVar22,*(undefined8 *)(*(long *)((long)register0x00000008 + -0x1e8) + 0x18));
            goto LAB_01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar1)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar8 = (long *)___cxa_begin_catch();
    lVar9 = *plVar8;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x1e0),*unaff_x23);
    if (lVar9 == 0) {
code_r0x014786b8:
      lVar9 = *plVar24;
      if (((*(ushort *)(lVar9 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar9 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar9 = *plVar24;
      }
      *(undefined8 *)(lVar22 + 0xa8) = **(undefined8 **)(lVar9 + 0xb8);
      return;
    }
    func_0x00f78ac0(lVar9,0);
  }
  lVar23 = __Unwind_Resume();
  *(long *)((long)register0x00000008 + -0x260) = lVar9;
  *(long *)((long)register0x00000008 + -600) = lVar22;
  *(undefined1 **)((long)register0x00000008 + -0x250) =
       (undefined1 *)((long)register0x00000008 + -0x160);
  *(code **)((long)register0x00000008 + -0x248) =
       Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
            ((undefined1 *)((long)register0x00000008 + -0x2c0),lVar23,*(undefined8 *)(lVar23 + 0xa8)
            );
  uVar21 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
  uVar15 = *(undefined8 *)((long)register0x00000008 + -0x288);
  uVar25 = *(undefined8 *)((long)register0x00000008 + -0x290);
  extraout_x8[5] = *(undefined8 *)((long)register0x00000008 + -0x298);
  extraout_x8[4] = uVar21;
  extraout_x8[7] = uVar15;
  extraout_x8[6] = uVar25;
  uVar21 = *(undefined8 *)((long)register0x00000008 + -0x280);
  uVar15 = *(undefined8 *)((long)register0x00000008 + -0x268);
  uVar25 = *(undefined8 *)((long)register0x00000008 + -0x270);
  extraout_x8[9] = *(undefined8 *)((long)register0x00000008 + -0x278);
  extraout_x8[8] = uVar21;
  extraout_x8[0xb] = uVar15;
  extraout_x8[10] = uVar25;
  uVar21 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
  uVar15 = *(undefined8 *)((long)register0x00000008 + -0x2a8);
  uVar25 = *(undefined8 *)((long)register0x00000008 + -0x2b0);
  extraout_x8[1] = *(undefined8 *)((long)register0x00000008 + -0x2b8);
  *extraout_x8 = uVar21;
  extraout_x8[3] = uVar15;
  extraout_x8[2] = uVar25;
  return;
code_r0x01535ee8:
  lVar13 = func_0x00f78af4();
  *(undefined1 **)(puVar4 + -0x80) = puVar4 + -0x50;
  *(undefined **)(puVar4 + -0x78) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnHit;
  if (uVar10 == 0) {
    func_0x00f78af4();
    return;
  }
  if (*(long *)(uVar10 + 0x10) != *(long *)(lVar13 + 0x38)) {
    return;
  }
  puVar3 = puVar4 + -0x70;
  puVar27 = *(undefined1 **)(puVar4 + -0x80);
  puVar28 = *(undefined **)(puVar4 + -0x78);
  goto code_r0x01535b58;
LAB_01478690:
  uVar19 = 0x7b;
code_r0x0147869c:
  *(undefined4 *)((long)register0x00000008 + -0x1f8) = uVar19;
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x1e0),uRam0000000003d33318);
  if (*(int *)((long)register0x00000008 + -0x1f8) == 0x86) {
    return;
  }
  goto code_r0x014786b8;
}



// ============================================================
// RVA: 0x15356e4 | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.OnFailPickupUsable
// ============================================================

/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535cfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01535aa8) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x01535c74) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnFailPickupUsable(long param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined8 *extraout_x8;
  long lVar21;
  long unaff_x19;
  undefined8 uVar22;
  long unaff_x20;
  long lVar23;
  long *plVar24;
  long unaff_x21;
  undefined8 uVar25;
  undefined8 unaff_x22;
  uint uVar26;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  
  if ((bRam0000000003eb4ebf & 1) == 0) {
    func_0x00f78a20(0x3d527e0);
    func_0x00f78a20(0x3d527f8);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ebf = 1;
  }
  uVar11 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(param_1,0);
  puVar2 = (undefined1 *)register0x00000008;
  lVar9 = param_1;
  if ((uVar11 & 1) == 0) {
code_r0x0153580c:
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(long *)(puVar2 + -0x28) = unaff_x21;
    *(long *)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined **)(puVar2 + -8) = unaff_x30;
    unaff_x22 = 0x3d527d8;
    if ((bRam0000000003eb4ec0 & 1) == 0) {
      func_0x00f78a20(0x3d527d8);
      func_0x00f78a20(0x3d278d8);
      bRam0000000003eb4ec0 = 1;
    }
    lVar12 = *(long *)(lVar9 + 200);
    unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar9,uRam0000000003d527d8,0);
    if (lVar12 != 0) {
      uVar11 = 0;
      /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar12,unaff_x21);
      unaff_x29 = *(undefined1 **)(puVar2 + -0x10);
      puVar27 = *(undefined **)(puVar2 + -8);
      unaff_x20 = *(long *)(puVar2 + -0x20);
      lVar12 = *(long *)(puVar2 + -0x18);
      unaff_x22 = *(undefined8 *)(puVar2 + -0x30);
      unaff_x21 = *(long *)(puVar2 + -0x28);
      goto code_r0x01535d14;
    }
    auVar34 = func_0x00f78af4();
    param_1 = auVar34._0_8_;
    *(undefined8 *)(puVar2 + -0x50) = 0;
    *(long *)(puVar2 + -0x48) = lVar9;
    *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x38) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterUseUsableEndTrigger;
    iVar8 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision(param_1,auVar34._8_8_,0)
    ;
    if ((iVar8 == 0) || (*(int *)(param_1 + 0xe8) != 2)) {
      return;
    }
    *(undefined8 *)(puVar2 + -0x50) = *(undefined8 *)(puVar2 + -0x50);
    *(undefined8 *)(puVar2 + -0x48) = *(undefined8 *)(puVar2 + -0x48);
    *(undefined8 *)(puVar2 + -0x40) = *(undefined8 *)(puVar2 + -0x40);
    *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(puVar2 + -0x38);
    uVar11 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(param_1,0);
    if ((uVar11 & 1) == 0) {
      uVar25 = *(undefined8 *)(puVar2 + -0x40);
      uVar15 = *(undefined8 *)(puVar2 + -0x38);
      puVar3 = puVar2 + -0x30;
      uVar22 = *(undefined8 *)(puVar2 + -0x50);
      lVar9 = *(long *)(puVar2 + -0x48);
      lVar12 = param_1;
Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteUseUsableCondition:
      puVar5 = puVar3 + -0x70;
      puVar4 = puVar3 + -0x70;
      register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x70);
      *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
      *(undefined8 **)(puVar3 + -0x38) = unaff_x23;
      *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
      *(long *)(puVar3 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar3 + -0x20) = uVar22;
      *(long *)(puVar3 + -0x18) = lVar9;
      *(undefined8 *)(puVar3 + -0x10) = uVar25;
      *(undefined8 *)(puVar3 + -8) = uVar15;
      puVar2 = puVar3 + -0x10;
      lVar9 = 0x3eb4000;
      if ((bRam0000000003eb4ec2 & 1) == 0) {
        func_0x00f78a20(0x3d527e8);
        func_0x00f78a20(0x3d527f8);
        func_0x00f78a20(0x3d52800);
        func_0x00f78a20(0x3d278d8);
        func_0x00f78a20(0x3d27718);
        bRam0000000003eb4ec2 = 1;
      }
      if (*(long *)(lVar12 + 0x58) == 0) {
code_r0x01535ac8:
        param_1 = func_0x00f78af4();
        *(long *)(puVar3 + -0x90) = lVar9;
        *(long *)(puVar3 + -0x88) = lVar12;
        *(undefined1 **)(puVar3 + -0x80) = puVar2;
        *(undefined **)(puVar3 + -0x78) =
             &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterHitPlayerEndTrigger;
        uVar11 = 0;
        iVar8 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
        if (iVar8 == 0) {
          return;
        }
        uVar22 = *(undefined8 *)(puVar3 + -0x90);
        *(undefined8 *)(puVar3 + -0x90) = uVar22;
        *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x88);
        *(undefined8 *)(puVar3 + -0x80) = *(undefined8 *)(puVar3 + -0x80);
        *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x78);
        puVar5 = puVar3 + -0x80;
        uVar13 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(param_1,0);
        if ((uVar13 & 1) == 0) {
          puVar5 = *(undefined1 **)(puVar3 + -0x80);
          puVar27 = *(undefined **)(puVar3 + -0x78);
          uVar22 = *(undefined8 *)(puVar3 + -0x90);
          lVar23 = *(long *)(puVar3 + -0x88);
          lVar12 = param_1;
        }
        else {
          if (*(long *)(param_1 + 0xb8) != 0) {
            Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsedUsables(*(long *)(param_1 + 0xb8),0)
            ;
            unaff_x29 = *(undefined1 **)(puVar3 + -0x80);
            unaff_x30 = *(undefined **)(puVar3 + -0x78);
            unaff_x20 = *(long *)(puVar3 + -0x90);
            unaff_x19 = *(long *)(puVar3 + -0x88);
            goto Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RetrySection;
          }
          puVar27 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteHitPlayerCondition;
          lVar12 = func_0x00f78af4();
          puVar4 = puVar3 + -0x90;
          lVar23 = param_1;
        }
code_r0x01535b58:
        puVar6 = puVar4 + -0x60;
        *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
        *(long *)(puVar4 + -0x28) = unaff_x21;
        *(undefined8 *)(puVar4 + -0x20) = uVar22;
        *(long *)(puVar4 + -0x18) = lVar23;
        *(undefined1 **)(puVar4 + -0x10) = puVar5;
        *(undefined **)(puVar4 + -8) = puVar27;
        puVar5 = puVar4 + -0x10;
        unaff_x20 = 0x3eb4000;
        if ((bRam0000000003eb4ec4 & 1) == 0) {
          func_0x00f78a20(0x3d527d0);
          func_0x00f78a20(0x3d527f0);
          func_0x00f78a20(0x3d278d8);
          func_0x00f78a20(0x3d27728);
          bRam0000000003eb4ec4 = 1;
        }
        lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar12);
        if (lVar9 != 0) {
          unaff_x22 = 0x3d52000;
          uVar22 = *(undefined8 *)(lVar9 + 0xa0);
          uVar15 = *(undefined8 *)(lVar9 + 0xb8);
          uVar25 = *(undefined8 *)(lVar9 + 0xb0);
          *(undefined8 *)(puVar4 + -0x58) = *(undefined8 *)(lVar9 + 0xa8);
          *(undefined8 *)(puVar4 + -0x60) = uVar22;
          *(undefined8 *)(puVar4 + -0x48) = uVar15;
          *(undefined8 *)(puVar4 + -0x50) = uVar25;
          uVar22 = *(undefined8 *)(lVar9 + 0xc0);
          *(undefined8 *)(puVar4 + -0x38) = *(undefined8 *)(lVar9 + 200);
          *(undefined8 *)(puVar4 + -0x40) = uVar22;
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar12,puVar4 + -0x60,0);
          *(undefined4 *)(lVar12 + 0xe8) = 0;
          unaff_x20 = *(long *)(lVar12 + 0xd8);
          unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
          uVar11 = uRam0000000003d527d0;
          /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar12,uRam0000000003d527d0,0);
          if (unaff_x20 != 0) {
            uVar11 = 0;
            /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(unaff_x20,unaff_x21);
            if (*(long *)(lVar12 + 0x10) != 0) {
              unaff_x22 = 0x3d52000;
              plVar24 = *(long **)(*(long *)(lVar12 + 0x10) + 0x40);
              unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
              auVar36._8_8_ = unaff_x21;
              auVar36._0_8_ = plVar24;
              uVar25 = 0;
              uVar11 = uRam0000000003d527f0;
              /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar12,uRam0000000003d527f0,0);
              unaff_x20 = 0;
              if (plVar24 != (long *)0x0) {
                puVar27 = &UNK_01535c74;
                goto code_r0x0159d844;
              }
            }
          }
        }
        auVar34 = func_0x00f78af4();
        unaff_x19 = auVar34._0_8_;
        puVar2 = puVar4 + -0xb0;
        *(long *)(puVar4 + -0x80) = unaff_x20;
        *(long *)(puVar4 + -0x78) = lVar12;
        *(undefined1 **)(puVar4 + -0x70) = puVar5;
        *(undefined **)(puVar4 + -0x68) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnPickup;
        unaff_x29 = puVar4 + -0x70;
        if (auVar34._8_8_ != 0) {
          if (*(long *)(auVar34._8_8_ + 0x10) != *(long *)(unaff_x19 + 0x38)) {
            return;
          }
          lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(unaff_x19);
          lVar12 = unaff_x19;
          if (lVar9 != 0) {
            uVar22 = *(undefined8 *)(lVar9 + 0x40);
            uVar15 = *(undefined8 *)(lVar9 + 0x58);
            uVar25 = *(undefined8 *)(lVar9 + 0x50);
            *(undefined8 *)(puVar4 + -0xa8) = *(undefined8 *)(lVar9 + 0x48);
            *(undefined8 *)(puVar4 + -0xb0) = uVar22;
            *(undefined8 *)(puVar4 + -0x98) = uVar15;
            *(undefined8 *)(puVar4 + -0xa0) = uVar25;
            uVar22 = *(undefined8 *)(lVar9 + 0x60);
            *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(lVar9 + 0x68);
            *(undefined8 *)(puVar4 + -0x90) = uVar22;
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(unaff_x19,puVar4 + -0xb0,0);
            if (*(int *)(unaff_x19 + 0xe8) != 1) {
              return;
            }
            unaff_x30 = &UNK_01535d00;
            puVar2 = puVar4 + -0xb0;
            lVar9 = unaff_x19;
            goto code_r0x0153580c;
          }
        }
        puVar27 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartUseUsableSection;
        lVar9 = func_0x00f78af4();
code_r0x01535d14:
        *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
        *(long *)(puVar2 + -0x28) = unaff_x21;
        *(long *)(puVar2 + -0x20) = unaff_x20;
        *(long *)(puVar2 + -0x18) = lVar12;
        *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
        *(undefined **)(puVar2 + -8) = puVar27;
        uVar22 = 0x3eb4000;
        if ((bRam0000000003eb4ec1 & 1) == 0) {
          func_0x00f78a20(0x3d52800);
          func_0x00f78a20(0x3d27718);
          bRam0000000003eb4ec1 = 1;
        }
        *(undefined4 *)(lVar9 + 0xe8) = 2;
        lVar12 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar9);
        if (lVar12 != 0) {
          uVar11 = (ulong)*(uint *)(lVar12 + 0x14c);
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                    (lVar9,*(undefined8 *)(lVar12 + 0x130),uVar11,*(char *)(lVar12 + 0x148) != '\0',
                     0);
          if (*(long *)(lVar9 + 0x10) != 0) {
            unaff_x22 = 0x3d52000;
            lVar12 = *(long *)(*(long *)(lVar9 + 0x10) + 0x40);
            unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
            auVar33._8_8_ = unaff_x21;
            auVar33._0_8_ = lVar12;
            uVar11 = uRam0000000003d52800;
            /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar9,uRam0000000003d52800,0);
            uVar22 = 0;
            if (lVar12 != 0) {
              puVar5 = *(undefined1 **)(puVar2 + -0x10);
              puVar27 = *(undefined **)(puVar2 + -8);
              plVar24 = *(long **)(puVar2 + -0x20);
              uVar25 = *(undefined8 *)(puVar2 + -0x18);
              uVar22 = *(undefined8 *)(puVar2 + -0x30);
              lVar9 = *(long *)(puVar2 + -0x28);
              puVar4 = puVar2;
              goto code_r0x0159d188;
            }
          }
        }
        auVar34 = func_0x00f78af4();
        *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
        *(undefined **)(puVar2 + -0x38) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnUse;
        if (auVar34._8_8_ == 0) {
          lVar23 = func_0x00f78af4();
          *(undefined8 *)(puVar2 + -0x70) = unaff_x22;
          *(long *)(puVar2 + -0x68) = unaff_x21;
          *(undefined8 *)(puVar2 + -0x60) = uVar22;
          *(long *)(puVar2 + -0x58) = lVar9;
          *(undefined1 **)(puVar2 + -0x50) = puVar2 + -0x40;
          *(undefined **)(puVar2 + -0x48) =
               &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartHitPlayerSection;
          uVar22 = 0x3eb4000;
          if ((bRam0000000003eb4ec3 & 1) == 0) {
            func_0x00f78a20(0x3d527f0);
            func_0x00f78a20(0x3d27728);
            bRam0000000003eb4ec3 = 1;
          }
          lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar23);
          if (lVar9 == 0) goto code_r0x01535ee8;
          uVar11 = (ulong)*(uint *)(lVar9 + 0x1ac);
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                    (lVar23,*(undefined8 *)(lVar9 + 400),uVar11,*(char *)(lVar9 + 0x1a8) != '\0',0);
          *(undefined4 *)(lVar23 + 0xe8) = 3;
          if (*(long *)(lVar23 + 0x10) == 0) goto code_r0x01535ee8;
          unaff_x22 = 0x3d52000;
          lVar9 = *(long *)(*(long *)(lVar23 + 0x10) + 0x40);
          unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
          uVar11 = uRam0000000003d527f0;
          /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar23,uRam0000000003d527f0,0);
          uVar22 = 0;
          if (lVar9 == 0) goto code_r0x01535ee8;
          *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0x70);
          *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(puVar2 + -0x68);
          *(undefined8 *)(puVar2 + -0x60) = *(undefined8 *)(puVar2 + -0x60);
          *(undefined8 *)(puVar2 + -0x58) = *(undefined8 *)(puVar2 + -0x58);
          *(undefined8 *)(puVar2 + -0x50) = *(undefined8 *)(puVar2 + -0x50);
          *(undefined8 *)(puVar2 + -0x48) = *(undefined8 *)(puVar2 + -0x48);
          if ((bRam0000000003eb51f9 & 1) == 0) {
            func_0x00f78a20(0x3d27728,unaff_x21,0);
            bRam0000000003eb51f9 = 1;
          }
          plVar24 = (long *)(lVar9 + 0x98);
          lVar9 = *plVar24;
          while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,unaff_x21,0), plVar10 == (long *)0x0 ||
                 (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
            lVar12 = func_0x00ff0f44(plVar24,plVar10,lVar9);
            bVar7 = lVar9 == lVar12;
            lVar9 = lVar12;
            if (bVar7) {
              return;
            }
          }
          auVar34 = func_0x00f78e5c(plVar10);
          uVar25 = auVar34._8_8_;
          puVar4 = puVar2 + -0xa0;
          *(undefined8 *)(puVar2 + -0xa0) = 0x3d27728;
          *(long *)(puVar2 + -0x98) = lVar9;
          *(long **)(puVar2 + -0x90) = plVar24;
          *(long *)(puVar2 + -0x88) = unaff_x21;
          *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x50;
          *(undefined **)(puVar2 + -0x78) =
               &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
          puVar5 = puVar2 + -0x80;
          if ((bRam0000000003eb51fb & 1) == 0) {
            func_0x00f78a20(0x3d27730);
            bRam0000000003eb51fb = 1;
          }
          uVar22 = 0x3d27730;
          plVar24 = (long *)(auVar34._0_8_ + 0xa0);
          lVar9 = *plVar24;
          while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,uVar25,0), plVar10 == (long *)0x0 ||
                 (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
            lVar12 = func_0x00ff0f44(plVar24,plVar10,lVar9);
            bVar7 = lVar9 == lVar12;
            lVar9 = lVar12;
            if (bVar7) {
              return;
            }
          }
          puVar27 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
          auVar33 = func_0x00f78e5c(plVar10);
code_r0x0159d188:
          *(undefined8 *)(puVar4 + -0x30) = uVar22;
          *(long *)(puVar4 + -0x28) = lVar9;
          *(long **)(puVar4 + -0x20) = plVar24;
          *(undefined8 *)(puVar4 + -0x18) = uVar25;
          *(undefined1 **)(puVar4 + -0x10) = puVar5;
          *(undefined **)(puVar4 + -8) = puVar27;
          if ((bRam0000000003eb51f3 & 1) == 0) {
            func_0x00f78a20(0x3d27718);
            bRam0000000003eb51f3 = 1;
          }
          plVar24 = (long *)(auVar33._0_8_ + 0x80);
          lVar9 = *plVar24;
          while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,auVar33._8_8_,0), plVar10 == (long *)0x0
                 || (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
            lVar12 = func_0x00ff0f44(plVar24,plVar10,lVar9);
            bVar7 = lVar9 == lVar12;
            lVar9 = lVar12;
            if (bVar7) {
              return;
            }
          }
          auVar34 = func_0x00f78e5c(plVar10);
          *(undefined8 *)(puVar4 + -0x60) = 0x3d27718;
          *(long *)(puVar4 + -0x58) = lVar9;
          *(long **)(puVar4 + -0x50) = plVar24;
          *(long *)(puVar4 + -0x48) = auVar33._8_8_;
          *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
          *(undefined **)(puVar4 + -0x38) =
               &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
          if ((bRam0000000003eb51fd & 1) == 0) {
            func_0x00f78a20(0x3d27738);
            bRam0000000003eb51fd = 1;
          }
          plVar24 = (long *)(auVar34._0_8_ + 0xa8);
          lVar9 = *plVar24;
          while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,auVar34._8_8_,0), plVar10 == (long *)0x0
                 || (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
            lVar12 = func_0x00ff0f44(plVar24,plVar10,lVar9);
            bVar7 = lVar9 == lVar12;
            lVar9 = lVar12;
            if (bVar7) {
              return;
            }
          }
          auVar35 = func_0x00f78e5c(plVar10);
          *(undefined8 *)(puVar4 + -0x90) = 0x3d27738;
          *(long *)(puVar4 + -0x88) = lVar9;
          *(long **)(puVar4 + -0x80) = plVar24;
          *(long *)(puVar4 + -0x78) = auVar34._8_8_;
          *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
          *(undefined **)(puVar4 + -0x68) =
               &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
          if ((bRam0000000003eb51f5 & 1) == 0) {
            func_0x00f78a20(0x3d27700);
            bRam0000000003eb51f5 = 1;
          }
          plVar24 = (long *)(auVar35._0_8_ + 0x88);
          lVar9 = *plVar24;
          while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,auVar35._8_8_,0), plVar10 == (long *)0x0
                 || (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
            lVar12 = func_0x00ff0f44(plVar24,plVar10,lVar9);
            bVar7 = lVar9 == lVar12;
            lVar9 = lVar12;
            if (bVar7) {
              return;
            }
          }
          auVar34 = func_0x00f78e5c(plVar10);
          puVar5 = puVar4 + -0xe0;
          *(undefined8 *)(puVar4 + -0xe0) = unaff_x26;
          *(undefined8 *)(puVar4 + -0xd8) = unaff_x25;
          *(undefined8 *)(puVar4 + -0xd0) = unaff_x24;
          *(undefined8 **)(puVar4 + -200) = unaff_x23;
          *(undefined8 *)(puVar4 + -0xc0) = 0x3d27700;
          *(long *)(puVar4 + -0xb8) = lVar9;
          *(long **)(puVar4 + -0xb0) = plVar24;
          *(long *)(puVar4 + -0xa8) = auVar35._8_8_;
          *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x70;
          *(code **)(puVar4 + -0x98) = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
          puVar2 = puVar4 + -0xa0;
          unaff_x23 = (undefined8 *)0x3d27718;
          unaff_x24 = 0x3d570f0;
          if ((bRam0000000003eb51b7 & 1) == 0) {
            func_0x00f78a20(0x3d524e0);
            func_0x00f78a20(0x3d524e8);
            func_0x00f78a20(0x3d524f0);
            func_0x00f78a20(0x3d524f8);
            func_0x00f78a20(0x3d570d0);
            func_0x00f78a20(0x3d570f0);
            func_0x00f78a20(0x3d27700);
            func_0x00f78a20(0x3d27718);
            func_0x00f78a20(0x3d27728);
            func_0x00f78a20(0x3d27730);
            func_0x00f78a20(0x3d27738);
            bRam0000000003eb51b7 = 1;
          }
          unaff_x21 = *(long *)(auVar34._0_8_ + 0x40);
          uVar22 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
          auVar35._8_8_ = uVar22;
          auVar35._0_8_ = unaff_x21;
          uVar25 = 0;
          /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(uVar22,auVar34._0_8_,uRam0000000003d570f0,0);
          if (unaff_x21 == 0) {
            puVar27 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
            auVar35 = func_0x00f78af4();
          }
          else {
            unaff_x24 = 0x3d27000;
            unaff_x25 = 0x3d52000;
            puVar27 = (undefined *)0x159d470;
            puVar5 = puVar4 + -0xe0;
          }
          goto code_r0x0159d5c4;
        }
        if (*(long *)(auVar34._8_8_ + 0x10) != *(long *)(auVar34._0_8_ + 0x38)) {
          return;
        }
        puVar3 = puVar2 + -0x30;
        uVar25 = *(undefined8 *)(puVar2 + -0x40);
        uVar15 = *(undefined8 *)(puVar2 + -0x38);
        lVar12 = auVar34._0_8_;
        goto Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteUseUsableCondition;
      }
      *(undefined1 *)(*(long *)(lVar12 + 0x58) + 0x100) = 1;
      lVar23 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar12);
      if (lVar23 == 0) goto code_r0x01535ac8;
      uVar22 = *(undefined8 *)(lVar23 + 0x70);
      uVar15 = *(undefined8 *)(lVar23 + 0x88);
      uVar25 = *(undefined8 *)(lVar23 + 0x80);
      *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)(lVar23 + 0x78);
      *(undefined8 *)(puVar3 + -0x70) = uVar22;
      *(undefined8 *)(puVar3 + -0x58) = uVar15;
      *(undefined8 *)(puVar3 + -0x60) = uVar25;
      uVar22 = *(undefined8 *)(lVar23 + 0x90);
      *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(lVar23 + 0x98);
      *(undefined8 *)(puVar3 + -0x50) = uVar22;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar12,puVar3 + -0x70,0);
      lVar9 = *(long *)(lVar12 + 0xd0);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar12,uRam0000000003d527e8,0);
      unaff_x22 = 0x3d52000;
      if (lVar9 == 0) goto code_r0x01535ac8;
      /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar9,unaff_x21,0);
      if (*(long *)(lVar12 + 0x10) == 0) goto code_r0x01535ac8;
      uVar22 = 0x3d27718;
      unaff_x23 = (undefined8 *)0x3d52000;
      lVar9 = *(long *)(*(long *)(lVar12 + 0x10) + 0x40);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar12,uRam0000000003d527f8,0);
      unaff_x22 = 0x3d27718;
      if (lVar9 == 0) goto code_r0x01535ac8;
      /*Atlas.Gameplay.Player.GameContextPlayerManager$$remove_OnUsableAttached*/ func_0x015a5cc8(lVar9,unaff_x21,0);
      if (*(long *)(lVar12 + 0x10) == 0) goto code_r0x01535ac8;
      unaff_x23 = (undefined8 *)0x3d52000;
      lVar23 = *(long *)(*(long *)(lVar12 + 0x10) + 0x40);
      auVar34._8_8_ = lVar23;
      auVar34._0_8_ = lVar12;
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
      auVar35._8_8_ = unaff_x21;
      auVar35._0_8_ = lVar23;
      uVar25 = 0;
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar12,uRam0000000003d52800,0);
      lVar9 = 0;
      unaff_x22 = uVar22;
      if (lVar23 == 0) goto code_r0x01535ac8;
      puVar27 = &UNK_01535aa8;
code_r0x0159d5c4:
      *(undefined8 *)(puVar5 + -0x30) = uVar22;
      *(long *)(puVar5 + -0x28) = unaff_x21;
      *(long *)(puVar5 + -0x20) = auVar34._8_8_;
      *(long *)(puVar5 + -0x18) = auVar34._0_8_;
      *(undefined1 **)(puVar5 + -0x10) = puVar2;
      *(undefined **)(puVar5 + -8) = puVar27;
      if ((bRam0000000003eb51f4 & 1) == 0) {
        func_0x00f78a20(0x3d27718);
        bRam0000000003eb51f4 = 1;
      }
      plVar24 = (long *)(auVar35._0_8_ + 0x80);
      lVar9 = *plVar24;
      while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,auVar35._8_8_,0), plVar10 == (long *)0x0 ||
             (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
        lVar12 = func_0x00ff0f44(plVar24,plVar10,lVar9);
        bVar7 = lVar9 == lVar12;
        lVar9 = lVar12;
        if (bVar7) {
          return;
        }
      }
      auVar34 = func_0x00f78e5c(plVar10);
      *(undefined8 *)(puVar5 + -0x60) = 0x3d27718;
      *(long *)(puVar5 + -0x58) = lVar9;
      *(long **)(puVar5 + -0x50) = plVar24;
      *(long *)(puVar5 + -0x48) = auVar35._8_8_;
      *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
      *(undefined **)(puVar5 + -0x38) =
           &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
      if ((bRam0000000003eb51f6 & 1) == 0) {
        func_0x00f78a20(0x3d27700);
        bRam0000000003eb51f6 = 1;
      }
      plVar24 = (long *)(auVar34._0_8_ + 0x88);
      lVar9 = *plVar24;
      while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,auVar34._8_8_,0), plVar10 == (long *)0x0 ||
             (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
        lVar12 = func_0x00ff0f44(plVar24,plVar10,lVar9);
        bVar7 = lVar9 == lVar12;
        lVar9 = lVar12;
        if (bVar7) {
          return;
        }
      }
      auVar35 = func_0x00f78e5c(plVar10);
      *(undefined8 *)(puVar5 + -0x90) = 0x3d27700;
      *(long *)(puVar5 + -0x88) = lVar9;
      *(long **)(puVar5 + -0x80) = plVar24;
      *(long *)(puVar5 + -0x78) = auVar34._8_8_;
      *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x40;
      *(undefined **)(puVar5 + -0x68) =
           &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
      if ((bRam0000000003eb51fe & 1) == 0) {
        func_0x00f78a20(0x3d27738);
        bRam0000000003eb51fe = 1;
      }
      plVar24 = (long *)(auVar35._0_8_ + 0xa8);
      lVar9 = *plVar24;
      while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,auVar35._8_8_,0), plVar10 == (long *)0x0 ||
             (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
        lVar12 = func_0x00ff0f44(plVar24,plVar10,lVar9);
        bVar7 = lVar9 == lVar12;
        lVar9 = lVar12;
        if (bVar7) {
          return;
        }
      }
      auVar34 = func_0x00f78e5c(plVar10);
      lVar12 = auVar34._8_8_;
      puVar6 = puVar5 + -0xc0;
      *(undefined8 *)(puVar5 + -0xc0) = 0x3d27738;
      *(long *)(puVar5 + -0xb8) = lVar9;
      *(long **)(puVar5 + -0xb0) = plVar24;
      *(long *)(puVar5 + -0xa8) = auVar35._8_8_;
      *(undefined1 **)(puVar5 + -0xa0) = puVar5 + -0x70;
      *(undefined **)(puVar5 + -0x98) =
           &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
      puVar5 = puVar5 + -0xa0;
      if ((bRam0000000003eb51fc & 1) == 0) {
        func_0x00f78a20(0x3d27730);
        bRam0000000003eb51fc = 1;
      }
      unaff_x22 = 0x3d27730;
      plVar24 = (long *)(auVar34._0_8_ + 0xa0);
      unaff_x21 = *plVar24;
      while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x21,lVar12,0), plVar10 == (long *)0x0 ||
             (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
        lVar9 = func_0x00ff0f44(plVar24,plVar10,unaff_x21);
        bVar7 = unaff_x21 == lVar9;
        unaff_x21 = lVar9;
        if (bVar7) {
          return;
        }
      }
      puVar27 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
      auVar36 = func_0x00f78e5c(plVar10);
code_r0x0159d844:
      *(undefined8 *)(puVar6 + -0x30) = unaff_x22;
      *(long *)(puVar6 + -0x28) = unaff_x21;
      *(long **)(puVar6 + -0x20) = plVar24;
      *(long *)(puVar6 + -0x18) = lVar12;
      *(undefined1 **)(puVar6 + -0x10) = puVar5;
      *(undefined **)(puVar6 + -8) = puVar27;
      if ((bRam0000000003eb51fa & 1) == 0) {
        func_0x00f78a20(0x3d27728);
        bRam0000000003eb51fa = 1;
      }
      plVar24 = (long *)0x3d27728;
      plVar10 = (long *)(auVar36._0_8_ + 0x98);
      lVar9 = *plVar10;
      while( true ) {
        puVar17 = (undefined8 *)0x0;
        plVar14 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,auVar36._8_8_);
        if ((plVar14 != (long *)0x0) && (*plVar14 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
        lVar12 = func_0x00ff0f44(plVar10,plVar14,lVar9);
        bVar7 = lVar9 == lVar12;
        lVar9 = lVar12;
        if (bVar7) {
          return;
        }
      }
      lVar12 = func_0x00f78e5c(plVar14);
      *(undefined8 *)(puVar6 + -0x80) = unaff_x26;
      *(undefined8 *)(puVar6 + -0x78) = unaff_x25;
      *(undefined8 *)(puVar6 + -0x70) = unaff_x24;
      *(undefined8 **)(puVar6 + -0x68) = unaff_x23;
      *(undefined8 *)(puVar6 + -0x60) = 0x3d27728;
      *(long *)(puVar6 + -0x58) = lVar9;
      *(long **)(puVar6 + -0x50) = plVar10;
      *(long *)(puVar6 + -0x48) = auVar36._8_8_;
      *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
      *(undefined **)(puVar6 + -0x38) = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
      lVar9 = 0x3eb5000;
      if ((bRam0000000003eb5204 & 1) == 0) {
        func_0x00f78a20(0x3d29f28);
        func_0x00f78a20(0x3d2a1d8);
        func_0x00f78a20(0x3d2a1c8);
        func_0x00f78a20(0x3d1b4e0);
        func_0x00f78a20(0x3d1b4e8);
        func_0x00f78a20(0x3d1b3b0);
        func_0x00f78a20(0x3d43378);
        func_0x00f78a20(0x3d57230);
        func_0x00f78a20(0x3d57238);
        func_0x00f78a20(0x3d57240);
        bRam0000000003eb5204 = 1;
      }
      lVar23 = *(long *)(lVar12 + 0x28);
      if (lVar23 != 0) {
        plVar24 = (long *)(lVar12 + 0x10);
        uVar20 = *(uint *)(lVar23 + 0x18);
        if ((int)uVar20 < 1) {
code_r0x0159d9f0:
          if (((*(long *)(lVar12 + 0x20) == 0) ||
              (lVar21 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20), lVar21 == 0)) ||
             (unaff_x23 = *(undefined8 **)(lVar21 + 0x10), unaff_x23 == (undefined8 *)0x0))
          goto code_r0x0159db7c;
          uVar22 = 0x3d1b4e8;
          unaff_x24 = 0x3d1b4e8;
          lVar9 = unaff_x23[3];
          lVar23 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
          uVar25 = uRam0000000003d2a1d8;
          /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar23,lVar12,uRam0000000003d57238,uRam0000000003d2a1d8);
          puVar17 = (undefined8 *)0x0;
          plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,lVar23);
          if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
            unaff_x23[3] = plVar10;
            if ((*(long *)(lVar12 + 0x20) == 0) ||
               ((lVar21 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20), lVar21 == 0 ||
                (unaff_x23 = *(undefined8 **)(lVar21 + 0x10), unaff_x23 == (undefined8 *)0x0))))
            goto code_r0x0159db7c;
            uVar22 = 0x3d1b3b0;
            unaff_x24 = 0x3d1b3b0;
            lVar9 = unaff_x23[0xe];
            lVar23 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
            uVar25 = uRam0000000003d29f28;
            /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar23,lVar12,uRam0000000003d57240,uRam0000000003d29f28);
            puVar17 = (undefined8 *)0x0;
            plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,lVar23);
            if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
              unaff_x23[0xe] = plVar10;
              if (((*(long *)(lVar12 + 0x20) == 0) ||
                  (lVar21 = *(long *)(*(long *)(lVar12 + 0x20) + 0x20), lVar21 == 0)) ||
                 (unaff_x23 = *(undefined8 **)(lVar21 + 0x10), unaff_x23 == (undefined8 *)0x0))
              goto code_r0x0159db7c;
              uVar22 = 0x3d1b4e0;
              lVar9 = unaff_x23[5];
              lVar23 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
              uVar25 = uRam0000000003d2a1c8;
              /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar23,lVar12,uRam0000000003d57230,uRam0000000003d2a1c8);
              puVar17 = (undefined8 *)0x0;
              plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,lVar23);
              if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
                unaff_x23[5] = plVar10;
                *(undefined1 *)(lVar12 + 0x50) = 0;
                *(undefined8 *)(lVar12 + 0x18) = 0;
                *plVar24 = 0;
                *(undefined8 *)(lVar12 + 0x28) = 0;
                *(undefined8 *)(lVar12 + 0x20) = 0;
                return;
              }
            }
          }
          goto code_r0x0159db8c;
        }
        unaff_x23 = (undefined8 *)0x0;
        unaff_x24 = 0x3d43378;
        while( true ) {
          uVar26 = (uint)unaff_x23;
          uVar22 = unaff_x24;
          if (uVar20 <= uVar26) goto code_r0x0159db80;
          if (*plVar24 == 0) break;
          lVar9 = *(long *)(lVar23 + (long)(int)uVar26 * 8 + 0x20);
          puVar17 = puRam0000000003d43378;
          /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar24,lVar9);
          if (lVar9 == 0) break;
          /*Atlas.Gameplay.Player.GameContextPlayer$$DeInit*/ func_0x015a5404(lVar9);
          unaff_x23 = (undefined8 *)(ulong)(uVar26 + 1);
          uVar20 = *(uint *)(lVar23 + 0x18);
          if ((int)uVar20 <= (int)(uVar26 + 1)) goto code_r0x0159d9f0;
        }
      }
code_r0x0159db7c:
      func_0x00f78af4();
      uVar22 = unaff_x24;
code_r0x0159db80:
      uVar15 = func_0x00f78b24();
      func_0x00f78ac0(uVar15,0);
code_r0x0159db8c:
      auVar34 = func_0x00f78e5c();
      puVar16 = auVar34._8_8_;
      plVar10 = auVar34._0_8_;
      *(undefined8 *)(puVar6 + -0xc0) = uVar22;
      *(undefined8 **)(puVar6 + -0xb8) = unaff_x23;
      *(long **)(puVar6 + -0xb0) = plVar24;
      *(long *)(puVar6 + -0xa8) = lVar23;
      *(long *)(puVar6 + -0xa0) = lVar9;
      *(long *)(puVar6 + -0x98) = lVar12;
      *(undefined1 **)(puVar6 + -0x90) = puVar6 + -0x40;
      *(code **)(puVar6 + -0x88) = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
      puVar18 = puVar17;
      if ((bRam0000000003eb51b8 & 1) == 0) {
        func_0x00f78a20(0x3d69658);
        bRam0000000003eb51b8 = 1;
      }
      if (((plVar10[3] != 0) &&
          (puVar18 = puVar17, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar10[3],puVar16,puVar17,uVar25,0),
          puVar17 != (undefined8 *)0x0)) && (lVar9 = puVar17[2], lVar9 != 0)) {
        uVar22 = *(undefined8 *)(lVar9 + 0x48);
        uVar28 = *(undefined8 *)(lVar9 + 0x60);
        uVar15 = *(undefined8 *)(lVar9 + 0x58);
        *(undefined8 *)(puVar6 + -0xd8) = *(undefined8 *)(lVar9 + 0x50);
        *(undefined8 *)(puVar6 + -0xe0) = uVar22;
        *(undefined8 *)(puVar6 + -200) = uVar28;
        *(undefined8 *)(puVar6 + -0xd0) = uVar15;
        iVar8 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar6 + -0xe0,0);
        if ((iVar8 == 0) || (puVar17 == puVar16)) {
          return;
        }
        iVar8 = (**(code **)(*plVar10 + 0x2a8))(plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
        if ((plVar10[0x18] != 0) && (lVar9 = *(long *)(plVar10[0x18] + 0x20), lVar9 != 0)) {
          /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar6 + -0xf8,lVar9,0);
          *(int *)(puVar17 + 0xf) = *(int *)(puVar17 + 0xf) + iVar8;
          uVar22 = *(undefined8 *)(puVar6 + -0xf8);
          puVar17[0x11] = *(undefined8 *)(puVar6 + -0xf0);
          puVar17[0x10] = uVar22;
          puVar17[0x12] = *(undefined8 *)(puVar6 + -0xe8);
          if (puVar17[2] != 0) {
            if (*(int *)(puVar17[2] + 0x50) == 0) {
              uVar22 = (**(code **)(*plVar10 + 0x208))(plVar10,*(undefined8 *)(*plVar10 + 0x210));
              puVar18 = (undefined8 *)0x0;
              iVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar22,/*STR('BattleGameContext')*/ uRam0000000003d69658);
              if (iVar8 != 0) {
                if (plVar10[3] == 0) goto LAB_0159dcf8;
                /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar10[3],*(undefined4 *)(puVar17 + 0xf),0);
              }
            }
            if (plVar10[0x46] == 0) {
              return;
            }
            /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar10[0x46],puVar16,puVar17,uVar25,0);
            return;
          }
        }
      }
LAB_0159dcf8:
      auVar37 = func_0x00f78af4();
      lVar9 = auVar37._0_8_;
      iVar8 = *(int *)(lVar9 + 0x78);
      uVar15 = puVar18[1];
      uVar25 = *puVar18;
      *(undefined8 *)(puVar6 + -0x118) = uVar15;
      *(undefined8 *)(puVar6 + -0x120) = uVar25;
      uVar22 = puVar18[2];
      *(undefined8 *)(puVar6 + -0x110) = uVar22;
      *(int *)(lVar9 + 0x78) = iVar8 + auVar37._8_4_;
      *(undefined8 *)(lVar9 + 0x88) = uVar15;
      *(undefined8 *)(lVar9 + 0x80) = uVar25;
      *(undefined8 *)(lVar9 + 0x90) = uVar22;
      return;
    }
    unaff_x29 = *(undefined1 **)(puVar2 + -0x40);
    unaff_x30 = *(undefined **)(puVar2 + -0x38);
    register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x30);
    unaff_x20 = *(long *)(puVar2 + -0x50);
    unaff_x19 = *(long *)(puVar2 + -0x48);
  }
  else {
    lVar9 = 0x3eb4000;
    lVar12 = unaff_x21;
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_01535808:
      unaff_x21 = lVar12;
      unaff_x20 = lVar9;
      unaff_x30 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompletePickupCondition;
      lVar9 = func_0x00f78af4();
      puVar2 = &stack0xffffffffffffffd0;
      unaff_x19 = param_1;
      unaff_x29 = &stack0xfffffffffffffff0;
      goto code_r0x0153580c;
    }
    lVar23 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
    lVar12 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
    /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(lVar12,param_1,uRam0000000003d527f8,0);
    lVar9 = 0;
    if (lVar23 == 0) goto LAB_01535808;
    /*Atlas.Gameplay.Player.GameContextPlayerManager$$remove_OnUsableAttached*/ func_0x015a5cc8(lVar23,lVar12,0);
    lVar23 = *(long *)(param_1 + 0xc0);
    lVar12 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(lVar12,param_1,uRam0000000003d527e0,0);
    lVar9 = 0;
    if (lVar23 == 0) goto LAB_01535808;
    /*Atlas.Gameplay.HitVolumeBehaviour$$add_OnEnter*/ func_0x015b49e0(lVar23,lVar12,0);
  }
Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RetrySection:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
            ((undefined1 *)((long)register0x00000008 + -0x90),param_1,
             *(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)((long)register0x00000008 + -0xd8) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  *(undefined8 *)((long)register0x00000008 + -0xe0) =
       *(undefined8 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -200) =
       *(undefined8 *)((long)register0x00000008 + -0x78);
  *(undefined8 *)((long)register0x00000008 + -0xd0) =
       *(undefined8 *)((long)register0x00000008 + -0x80);
  uVar30 = *(undefined8 *)((long)register0x00000008 + -0x58);
  uVar29 = *(undefined8 *)((long)register0x00000008 + -0x60);
  uVar28 = *(undefined8 *)((long)register0x00000008 + -0x48);
  uVar15 = *(undefined8 *)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar30;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar29;
  *(undefined8 *)((long)register0x00000008 + -0x98) = uVar28;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar15;
  uVar32 = *(undefined8 *)((long)register0x00000008 + -0x68);
  uVar31 = *(undefined8 *)((long)register0x00000008 + -0x70);
  *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar32;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar31;
  uVar22 = *(undefined8 *)((long)register0x00000008 + -0x40);
  uVar25 = *(undefined8 *)((long)register0x00000008 + -0x38);
  *(undefined8 *)((long)register0x00000008 + -0x68) = uVar32;
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar31;
  *(undefined8 *)((long)register0x00000008 + -0x58) = uVar30;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar29;
  *(undefined8 *)((long)register0x00000008 + -0x48) = uVar28;
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x88) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  *(undefined8 *)((long)register0x00000008 + -0x90) =
       *(undefined8 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -0x78) =
       *(undefined8 *)((long)register0x00000008 + -0x78);
  *(undefined8 *)((long)register0x00000008 + -0x80) =
       *(undefined8 *)((long)register0x00000008 + -0x80);
  *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar30;
  *(undefined8 *)((long)register0x00000008 + -0x100) = uVar29;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar28;
  *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar15;
  *(undefined8 *)((long)register0x00000008 + -0x108) = uVar32;
  *(undefined8 *)((long)register0x00000008 + -0x110) = uVar31;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
            (param_1,(undefined1 *)((long)register0x00000008 + -0x110));
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnHumanPlayerAtLocator(param_1,uVar22);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnAIsAtLocators(param_1,uVar25);
  uVar22 = *(undefined8 *)(param_1 + 0xa8);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection(param_1);
  plVar24 = *(long **)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = plVar24;
  *(undefined8 *)((long)register0x00000008 + -0x28) =
       *(undefined8 *)((long)register0x00000008 + -0x28);
  *(undefined8 *)((long)register0x00000008 + -0x20) =
       *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar22;
  if ((bRam0000000003eb48a2 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d23990);
    func_0x00f78a20(0x3d24e08);
    func_0x00f78a20(0x3d62270);
    func_0x00f78a20(0x3d26ac8);
    bRam0000000003eb48a2 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
  *(undefined8 *)((long)register0x00000008 + -200) = 0;
  *(undefined8 *)(param_1 + 0xa8) = uVar22;
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar9 = *(long *)(*(long *)(param_1 + 0x40) + 0x30), lVar9 != 0)) {
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x110),lVar9,uRam0000000003d3cd70);
    *(undefined8 *)((long)register0x00000008 + -0x98) =
         *(undefined8 *)((long)register0x00000008 + -0xe8);
    *(undefined8 *)((long)register0x00000008 + -0xa0) =
         *(undefined8 *)((long)register0x00000008 + -0xf0);
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)((long)register0x00000008 + -0xd8);
    *(undefined8 *)((long)register0x00000008 + -0x90) =
         *(undefined8 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)((long)register0x00000008 + -0xd0);
    *(undefined8 *)((long)register0x00000008 + -0xb8) =
         *(undefined8 *)((long)register0x00000008 + -0x108);
    *(undefined8 *)((long)register0x00000008 + -0xc0) =
         *(undefined8 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0xa8) =
         *(undefined8 *)((long)register0x00000008 + -0xf8);
    *(undefined8 *)((long)register0x00000008 + -0xb0) =
         *(undefined8 *)((long)register0x00000008 + -0x100);
LAB_01478328:
    do {
      uVar11 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0xc0),uRam0000000003d33320
                              );
      if ((uVar11 & 1) == 0) {
LAB_01478494:
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0xc0),uRam0000000003d33318);
        return;
      }
      lVar9 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___ctor(lVar9,0);
      if (lVar9 == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(long *)(lVar9 + 0x50) = param_1;
      uVar28 = *(undefined8 *)((long)register0x00000008 + -0x98);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -0xa0);
      uVar25 = *(undefined8 *)((long)register0x00000008 + -0x88);
      uVar22 = *(undefined8 *)((long)register0x00000008 + -0x90);
      uVar30 = *(undefined8 *)((long)register0x00000008 + -0xa8);
      uVar29 = *(undefined8 *)((long)register0x00000008 + -0xb0);
      *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)(lVar9 + 0x28) = uVar28;
      *(undefined8 *)(lVar9 + 0x20) = uVar15;
      *(undefined8 *)(lVar9 + 0x38) = uVar25;
      *(undefined8 *)(lVar9 + 0x30) = uVar22;
      *(undefined8 *)(lVar9 + 0x18) = uVar30;
      *(undefined8 *)(lVar9 + 0x10) = uVar29;
      *(undefined8 *)((long)register0x00000008 + -0x110) = *(undefined8 *)(lVar9 + 0x18);
      uVar22 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,
                               (undefined1 *)((long)register0x00000008 + -0x110));
      uVar11 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -0x70),uVar22,0);
    } while ((uVar11 & 1) == 0);
    if (*(long *)(param_1 + 0x60) == 0) {
      func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x14784e0);
      (*pcVar1)();
    }
    puVar17 = (undefined8 *)(lVar9 + 0x10);
    puVar18 = (undefined8 *)(lVar9 + 0x48);
    uVar11 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(param_1 + 0x60),*puVar17,puVar18,0);
    if ((uVar11 & 1) == 0) goto LAB_01478494;
    uVar22 = *(undefined8 *)(param_1 + 0xa0);
    if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
      func_0x00f78ad0();
    }
    uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar22,0,0);
    if ((uVar11 & 1) != 0) {
      if (*(long *)(param_1 + 0xa0) == 0) {
        func_0x00f78af4();
        goto code_r0x014784dc;
      }
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0x110) = *puVar17;
      uVar22 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,
                               (undefined1 *)((long)register0x00000008 + -0x110));
      uVar11 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -200),uVar22,0);
      if ((uVar11 & 1) != 0) {
        uVar22 = *(undefined8 *)(param_1 + 0x38);
        uVar25 = *puVar17;
        uVar28 = *(undefined8 *)(lVar9 + 0x28);
        uVar15 = *(undefined8 *)(lVar9 + 0x20);
        *(undefined8 *)((long)register0x00000008 + -0x148) = *(undefined8 *)(lVar9 + 0x18);
        *(undefined8 *)((long)register0x00000008 + -0x150) = uVar25;
        *(undefined8 *)((long)register0x00000008 + -0x138) = uVar28;
        *(undefined8 *)((long)register0x00000008 + -0x140) = uVar15;
        uVar25 = *(undefined8 *)(lVar9 + 0x30);
        *(undefined8 *)((long)register0x00000008 + -0x128) = *(undefined8 *)(lVar9 + 0x38);
        *(undefined8 *)((long)register0x00000008 + -0x130) = uVar25;
        *(undefined8 *)((long)register0x00000008 + -0x120) = *(undefined8 *)(lVar9 + 0x40);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                  (param_1,uVar22,(undefined1 *)((long)register0x00000008 + -0x150));
        goto LAB_01478328;
      }
    }
    uVar25 = *puVar18;
    uVar22 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar22,lVar9,uRam0000000003d62270,0);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AddBaseListener(param_1,uVar25,uVar22,*puVar18);
    goto LAB_01478328;
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar10 = (long *)___cxa_begin_catch();
    param_1 = *plVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0xc0),uRam0000000003d33318);
    if (param_1 == 0) {
      return;
    }
    func_0x00f78ac0(param_1,0);
  }
  lVar9 = __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -400) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x188) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x180) = plVar24;
  *(undefined8 *)((long)register0x00000008 + -0x178) = 0x3eb4000;
  *(undefined8 *)((long)register0x00000008 + -0x170) = uVar22;
  *(long *)((long)register0x00000008 + -0x168) = param_1;
  *(undefined1 **)((long)register0x00000008 + -0x160) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x158) =
       Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
  lVar12 = 0x3eb4000;
  if ((bRam0000000003eb48a3 & 1) == 0) {
    func_0x00f78a20(0x3d33318);
    func_0x00f78a20(0x3d33320);
    func_0x00f78a20(0x3d33328);
    func_0x00f78a20(0x3d3cd70);
    func_0x00f78a20(0x3d24e08);
    bRam0000000003eb48a3 = 1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
  *(undefined4 *)((long)register0x00000008 + -0x1f0) = 0;
  if ((*(long *)(lVar9 + 0x40) != 0) &&
     (lVar23 = *(long *)(*(long *)(lVar9 + 0x40) + 0x30), lVar23 != 0)) {
    plVar24 = (long *)0x3d24e08;
    /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x240),lVar23,uRam0000000003d3cd70);
    *(undefined8 *)((long)register0x00000008 + -0x1b8) =
         *(undefined8 *)((long)register0x00000008 + -0x218);
    *(undefined8 *)((long)register0x00000008 + -0x1c0) =
         *(undefined8 *)((long)register0x00000008 + -0x220);
    *(undefined8 *)((long)register0x00000008 + -0x1a8) =
         *(undefined8 *)((long)register0x00000008 + -0x208);
    *(undefined8 *)((long)register0x00000008 + -0x1b0) =
         *(undefined8 *)((long)register0x00000008 + -0x210);
    *(undefined8 *)((long)register0x00000008 + -0x1a0) =
         *(undefined8 *)((long)register0x00000008 + -0x200);
    *(undefined8 *)((long)register0x00000008 + -0x1d8) =
         *(undefined8 *)((long)register0x00000008 + -0x238);
    *(undefined8 *)((long)register0x00000008 + -0x1e0) =
         *(undefined8 *)((long)register0x00000008 + -0x240);
    *(undefined8 *)((long)register0x00000008 + -0x1c8) =
         *(undefined8 *)((long)register0x00000008 + -0x228);
    *(undefined8 *)((long)register0x00000008 + -0x1d0) =
         *(undefined8 *)((long)register0x00000008 + -0x230);
LAB_01478624:
    do {
      uVar11 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0x1e0),
                               uRam0000000003d33320);
      if ((uVar11 & 1) == 0) goto LAB_01478690;
      uVar22 = *(undefined8 *)((long)register0x00000008 + -0x1d0);
      *(undefined8 *)((long)register0x00000008 + -0x240) =
           *(undefined8 *)((long)register0x00000008 + -0x1c8);
      uVar25 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,
                               (undefined1 *)((long)register0x00000008 + -0x240));
      uVar11 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar9 + 0xa8,uVar25,0);
      if ((uVar11 & 1) != 0) {
        if (*(long *)(lVar9 + 0x60) == 0) {
          func_0x00f78af4();
        }
        else {
          uVar11 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar9 + 0x60),uVar22,
                                   (undefined1 *)((long)register0x00000008 + -0x1e8),0);
          if ((uVar11 & 1) == 0) {
            uVar19 = 0x86;
            goto code_r0x0147869c;
          }
          if (*(long *)((long)register0x00000008 + -0x1e8) != 0) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                      (lVar9,*(undefined8 *)(*(long *)((long)register0x00000008 + -0x1e8) + 0x18));
            goto LAB_01478624;
          }
          func_0x00f78af4();
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1478708);
        (*pcVar1)();
      }
    } while( true );
  }
  func_0x00f78af4();
  if (extraout_w1_00 == 1) {
    plVar10 = (long *)___cxa_begin_catch();
    lVar12 = *plVar10;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x1e0),*unaff_x23);
    if (lVar12 == 0) {
code_r0x014786b8:
      lVar12 = *plVar24;
      if (((*(ushort *)(lVar12 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar12 = *plVar24;
      }
      *(undefined8 *)(lVar9 + 0xa8) = **(undefined8 **)(lVar12 + 0xb8);
      return;
    }
    func_0x00f78ac0(lVar12,0);
  }
  lVar23 = __Unwind_Resume();
  *(long *)((long)register0x00000008 + -0x260) = lVar12;
  *(long *)((long)register0x00000008 + -600) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x250) =
       (undefined1 *)((long)register0x00000008 + -0x160);
  *(code **)((long)register0x00000008 + -0x248) =
       Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
            ((undefined1 *)((long)register0x00000008 + -0x2c0),lVar23,*(undefined8 *)(lVar23 + 0xa8)
            );
  uVar22 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
  uVar15 = *(undefined8 *)((long)register0x00000008 + -0x288);
  uVar25 = *(undefined8 *)((long)register0x00000008 + -0x290);
  extraout_x8[5] = *(undefined8 *)((long)register0x00000008 + -0x298);
  extraout_x8[4] = uVar22;
  extraout_x8[7] = uVar15;
  extraout_x8[6] = uVar25;
  uVar22 = *(undefined8 *)((long)register0x00000008 + -0x280);
  uVar15 = *(undefined8 *)((long)register0x00000008 + -0x268);
  uVar25 = *(undefined8 *)((long)register0x00000008 + -0x270);
  extraout_x8[9] = *(undefined8 *)((long)register0x00000008 + -0x278);
  extraout_x8[8] = uVar22;
  extraout_x8[0xb] = uVar15;
  extraout_x8[10] = uVar25;
  uVar22 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
  uVar15 = *(undefined8 *)((long)register0x00000008 + -0x2a8);
  uVar25 = *(undefined8 *)((long)register0x00000008 + -0x2b0);
  extraout_x8[1] = *(undefined8 *)((long)register0x00000008 + -0x2b8);
  *extraout_x8 = uVar22;
  extraout_x8[3] = uVar15;
  extraout_x8[2] = uVar25;
  return;
code_r0x01535ee8:
  lVar12 = func_0x00f78af4();
  *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x50;
  *(undefined **)(puVar2 + -0x78) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnHit;
  if (uVar11 == 0) {
    func_0x00f78af4();
    return;
  }
  if (*(long *)(uVar11 + 0x10) != *(long *)(lVar12 + 0x38)) {
    return;
  }
  puVar4 = puVar2 + -0x70;
  puVar5 = *(undefined1 **)(puVar2 + -0x80);
  puVar27 = *(undefined **)(puVar2 + -0x78);
  goto code_r0x01535b58;
LAB_01478690:
  uVar19 = 0x7b;
code_r0x0147869c:
  *(undefined4 *)((long)register0x00000008 + -0x1f8) = uVar19;
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x1e0),uRam0000000003d33318);
  if (*(int *)((long)register0x00000008 + -0x1f8) == 0x86) {
    return;
  }
  goto code_r0x014786b8;
}



// ============================================================
// RVA: 0x153580c | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.CompletePickupCondition
// ============================================================

/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535c70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01535aa8) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x01535c74) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompletePickupCondition(long param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined8 *extraout_x8;
  long lVar20;
  long unaff_x19;
  long unaff_x20;
  long lVar21;
  undefined8 uVar22;
  long *plVar23;
  long unaff_x21;
  long lVar24;
  undefined8 unaff_x22;
  undefined8 uVar25;
  uint uVar26;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar27;
  undefined *unaff_x30;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  undefined *puStack_38;
  
  puVar27 = &stack0xfffffffffffffff0;
  uVar25 = 0x3d527d8;
  if ((bRam0000000003eb4ec0 & 1) == 0) {
    func_0x00f78a20(0x3d527d8);
    func_0x00f78a20(0x3d278d8);
    bRam0000000003eb4ec0 = 1;
  }
  lVar21 = *(long *)(param_1 + 200);
  lVar9 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(lVar9,param_1,uRam0000000003d527d8,0);
  if (lVar21 != 0) {
    uVar14 = 0;
    /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar21,lVar9);
    lVar9 = unaff_x21;
    uVar25 = unaff_x22;
    goto code_r0x01535d14;
  }
  auVar35 = func_0x00f78af4();
  lVar21 = auVar35._0_8_;
  iVar8 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision(lVar21,auVar35._8_8_,0);
  if ((iVar8 == 0) || (*(int *)(lVar21 + 0xe8) != 2)) {
    return;
  }
  puStack_38 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterUseUsableEndTrigger;
  uVar14 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar21,0);
  if ((uVar14 & 1) != 0) {
    puVar2 = &stack0xffffffffffffffd0;
    uVar22 = 0;
Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RetrySection:
    *(undefined8 *)(puVar2 + -0x30) = uVar25;
    *(long *)(puVar2 + -0x28) = lVar9;
    *(undefined8 *)(puVar2 + -0x20) = uVar22;
    *(long *)(puVar2 + -0x18) = param_1;
    *(undefined1 **)(puVar2 + -0x10) = puVar27;
    *(undefined **)(puVar2 + -8) = puStack_38;
    *(int *)(lVar21 + 0x8c) = *(int *)(lVar21 + 0x8c) + 1;
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
              (puVar2 + -0x90,lVar21,*(undefined8 *)(lVar21 + 0xa8));
    *(undefined8 *)(puVar2 + -0xd8) = *(undefined8 *)(puVar2 + -0x88);
    *(undefined8 *)(puVar2 + -0xe0) = *(undefined8 *)(puVar2 + -0x90);
    *(undefined8 *)(puVar2 + -200) = *(undefined8 *)(puVar2 + -0x78);
    *(undefined8 *)(puVar2 + -0xd0) = *(undefined8 *)(puVar2 + -0x80);
    uVar31 = *(undefined8 *)(puVar2 + -0x58);
    uVar30 = *(undefined8 *)(puVar2 + -0x60);
    uVar29 = *(undefined8 *)(puVar2 + -0x48);
    uVar17 = *(undefined8 *)(puVar2 + -0x50);
    *(undefined8 *)(puVar2 + -0xa8) = uVar31;
    *(undefined8 *)(puVar2 + -0xb0) = uVar30;
    *(undefined8 *)(puVar2 + -0x98) = uVar29;
    *(undefined8 *)(puVar2 + -0xa0) = uVar17;
    uVar33 = *(undefined8 *)(puVar2 + -0x68);
    uVar32 = *(undefined8 *)(puVar2 + -0x70);
    *(undefined8 *)(puVar2 + -0xb8) = uVar33;
    *(undefined8 *)(puVar2 + -0xc0) = uVar32;
    uVar25 = *(undefined8 *)(puVar2 + -0x40);
    uVar22 = *(undefined8 *)(puVar2 + -0x38);
    *(undefined8 *)(puVar2 + -0x68) = uVar33;
    *(undefined8 *)(puVar2 + -0x70) = uVar32;
    *(undefined8 *)(puVar2 + -0x58) = uVar31;
    *(undefined8 *)(puVar2 + -0x60) = uVar30;
    *(undefined8 *)(puVar2 + -0x48) = uVar29;
    *(undefined8 *)(puVar2 + -0x50) = uVar17;
    *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(puVar2 + -0x88);
    *(undefined8 *)(puVar2 + -0x90) = *(undefined8 *)(puVar2 + -0x90);
    *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0x78);
    *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0x80);
    *(undefined8 *)(puVar2 + -0xf8) = uVar31;
    *(undefined8 *)(puVar2 + -0x100) = uVar30;
    *(undefined8 *)(puVar2 + -0xe8) = uVar29;
    *(undefined8 *)(puVar2 + -0xf0) = uVar17;
    *(undefined8 *)(puVar2 + -0x108) = uVar33;
    *(undefined8 *)(puVar2 + -0x110) = uVar32;
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar21,puVar2 + -0x110);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnHumanPlayerAtLocator(lVar21,uVar25);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnAIsAtLocators(lVar21,uVar22);
    uVar25 = *(undefined8 *)(lVar21 + 0xa8);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection(lVar21);
    plVar23 = *(long **)(puVar2 + -0x30);
    *(undefined8 *)(puVar2 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 **)(puVar2 + -0x38) = unaff_x23;
    *(long **)(puVar2 + -0x30) = plVar23;
    *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
    *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
    *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
    *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    *(undefined8 *)(puVar2 + -0x70) = uVar25;
    if ((bRam0000000003eb48a2 & 1) == 0) {
      func_0x00f78a20(0x3d33318);
      func_0x00f78a20(0x3d33320);
      func_0x00f78a20(0x3d33328);
      func_0x00f78a20(0x3d278d8);
      func_0x00f78a20(0x3d3cd70);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d24e08);
      func_0x00f78a20(0x3d62270);
      func_0x00f78a20(0x3d26ac8);
      bRam0000000003eb48a2 = 1;
    }
    *(undefined8 *)(puVar2 + -0x80) = 0;
    *(undefined8 *)(puVar2 + -0x98) = 0;
    *(undefined8 *)(puVar2 + -0xa0) = 0;
    *(undefined8 *)(puVar2 + -0x88) = 0;
    *(undefined8 *)(puVar2 + -0x90) = 0;
    *(undefined8 *)(puVar2 + -0xb8) = 0;
    *(undefined8 *)(puVar2 + -0xc0) = 0;
    *(undefined8 *)(puVar2 + -0xa8) = 0;
    *(undefined8 *)(puVar2 + -0xb0) = 0;
    *(undefined8 *)(puVar2 + -200) = 0;
    *(undefined8 *)(lVar21 + 0xa8) = uVar25;
    if ((*(long *)(lVar21 + 0x40) != 0) &&
       (lVar9 = *(long *)(*(long *)(lVar21 + 0x40) + 0x30), lVar9 != 0)) {
      /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(puVar2 + -0x110,lVar9,uRam0000000003d3cd70);
      *(undefined8 *)(puVar2 + -0x98) = *(undefined8 *)(puVar2 + -0xe8);
      *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0xf0);
      *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(puVar2 + -0xd8);
      *(undefined8 *)(puVar2 + -0x90) = *(undefined8 *)(puVar2 + -0xe0);
      *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0xd0);
      *(undefined8 *)(puVar2 + -0xb8) = *(undefined8 *)(puVar2 + -0x108);
      *(undefined8 *)(puVar2 + -0xc0) = *(undefined8 *)(puVar2 + -0x110);
      *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0xf8);
      *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0x100);
LAB_01478328:
      do {
        uVar14 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(puVar2 + -0xc0,uRam0000000003d33320);
        if ((uVar14 & 1) == 0) {
LAB_01478494:
          /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0xc0,uRam0000000003d33318);
          return;
        }
        lVar9 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___ctor(lVar9,0);
        if (lVar9 == 0) {
          func_0x00f78af4();
          goto code_r0x014784dc;
        }
        *(long *)(lVar9 + 0x50) = lVar21;
        uVar29 = *(undefined8 *)(puVar2 + -0x98);
        uVar17 = *(undefined8 *)(puVar2 + -0xa0);
        uVar22 = *(undefined8 *)(puVar2 + -0x88);
        uVar25 = *(undefined8 *)(puVar2 + -0x90);
        uVar31 = *(undefined8 *)(puVar2 + -0xa8);
        uVar30 = *(undefined8 *)(puVar2 + -0xb0);
        *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)(puVar2 + -0x80);
        *(undefined8 *)(lVar9 + 0x28) = uVar29;
        *(undefined8 *)(lVar9 + 0x20) = uVar17;
        *(undefined8 *)(lVar9 + 0x38) = uVar22;
        *(undefined8 *)(lVar9 + 0x30) = uVar25;
        *(undefined8 *)(lVar9 + 0x18) = uVar31;
        *(undefined8 *)(lVar9 + 0x10) = uVar30;
        *(undefined8 *)(puVar2 + -0x110) = *(undefined8 *)(lVar9 + 0x18);
        uVar25 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,puVar2 + -0x110);
        uVar14 = /*Atlas.StringID$$Equals*/ func_0x015057f8(puVar2 + -0x70,uVar25,0);
      } while ((uVar14 & 1) == 0);
      if (*(long *)(lVar21 + 0x60) == 0) {
        func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x14784e0);
        (*pcVar1)();
      }
      puVar15 = (undefined8 *)(lVar9 + 0x10);
      puVar16 = (undefined8 *)(lVar9 + 0x48);
      uVar14 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar21 + 0x60),*puVar15,puVar16,0);
      if ((uVar14 & 1) == 0) goto LAB_01478494;
      uVar25 = *(undefined8 *)(lVar21 + 0xa0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar14 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar25,0,0);
      if ((uVar14 & 1) != 0) {
        if (*(long *)(lVar21 + 0xa0) == 0) {
          func_0x00f78af4();
          goto code_r0x014784dc;
        }
        *(undefined8 *)(puVar2 + -200) = *(undefined8 *)(*(long *)(lVar21 + 0xa0) + 0x18);
        *(undefined8 *)(puVar2 + -0x110) = *puVar15;
        uVar25 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,puVar2 + -0x110);
        uVar14 = /*Atlas.StringID$$Equals*/ func_0x015057f8(puVar2 + -200,uVar25,0);
        if ((uVar14 & 1) != 0) {
          uVar25 = *(undefined8 *)(lVar21 + 0x38);
          uVar22 = *puVar15;
          uVar29 = *(undefined8 *)(lVar9 + 0x28);
          uVar17 = *(undefined8 *)(lVar9 + 0x20);
          *(undefined8 *)(puVar2 + -0x148) = *(undefined8 *)(lVar9 + 0x18);
          *(undefined8 *)(puVar2 + -0x150) = uVar22;
          *(undefined8 *)(puVar2 + -0x138) = uVar29;
          *(undefined8 *)(puVar2 + -0x140) = uVar17;
          uVar22 = *(undefined8 *)(lVar9 + 0x30);
          *(undefined8 *)(puVar2 + -0x128) = *(undefined8 *)(lVar9 + 0x38);
          *(undefined8 *)(puVar2 + -0x130) = uVar22;
          *(undefined8 *)(puVar2 + -0x120) = *(undefined8 *)(lVar9 + 0x40);
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar21,uVar25,puVar2 + -0x150);
          goto LAB_01478328;
        }
      }
      uVar22 = *puVar16;
      uVar25 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar25,lVar9,uRam0000000003d62270,0);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AddBaseListener(lVar21,uVar22,uVar25,*puVar16);
      goto LAB_01478328;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar11 = (long *)___cxa_begin_catch();
      lVar21 = *plVar11;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0xc0,uRam0000000003d33318);
      if (lVar21 == 0) {
        return;
      }
      func_0x00f78ac0(lVar21,0);
    }
    lVar9 = __Unwind_Resume();
    *(undefined8 *)(puVar2 + -400) = unaff_x24;
    *(undefined8 **)(puVar2 + -0x188) = unaff_x23;
    *(long **)(puVar2 + -0x180) = plVar23;
    *(undefined8 *)(puVar2 + -0x178) = 0x3eb4000;
    *(undefined8 *)(puVar2 + -0x170) = uVar25;
    *(long *)(puVar2 + -0x168) = lVar21;
    *(undefined1 **)(puVar2 + -0x160) = puVar2 + -0x10;
    *(code **)(puVar2 + -0x158) = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
    lVar21 = 0x3eb4000;
    if ((bRam0000000003eb48a3 & 1) == 0) {
      func_0x00f78a20(0x3d33318);
      func_0x00f78a20(0x3d33320);
      func_0x00f78a20(0x3d33328);
      func_0x00f78a20(0x3d3cd70);
      func_0x00f78a20(0x3d24e08);
      bRam0000000003eb48a3 = 1;
    }
    *(undefined8 *)(puVar2 + -0x1e8) = 0;
    *(undefined4 *)(puVar2 + -0x1f0) = 0;
    if ((*(long *)(lVar9 + 0x40) != 0) &&
       (lVar24 = *(long *)(*(long *)(lVar9 + 0x40) + 0x30), lVar24 != 0)) {
      plVar23 = (long *)0x3d24e08;
      /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(puVar2 + -0x240,lVar24,uRam0000000003d3cd70);
      *(undefined8 *)(puVar2 + -0x1b8) = *(undefined8 *)(puVar2 + -0x218);
      *(undefined8 *)(puVar2 + -0x1c0) = *(undefined8 *)(puVar2 + -0x220);
      *(undefined8 *)(puVar2 + -0x1a8) = *(undefined8 *)(puVar2 + -0x208);
      *(undefined8 *)(puVar2 + -0x1b0) = *(undefined8 *)(puVar2 + -0x210);
      *(undefined8 *)(puVar2 + -0x1a0) = *(undefined8 *)(puVar2 + -0x200);
      *(undefined8 *)(puVar2 + -0x1d8) = *(undefined8 *)(puVar2 + -0x238);
      *(undefined8 *)(puVar2 + -0x1e0) = *(undefined8 *)(puVar2 + -0x240);
      *(undefined8 *)(puVar2 + -0x1c8) = *(undefined8 *)(puVar2 + -0x228);
      *(undefined8 *)(puVar2 + -0x1d0) = *(undefined8 *)(puVar2 + -0x230);
LAB_01478624:
      do {
        uVar14 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(puVar2 + -0x1e0,uRam0000000003d33320);
        if ((uVar14 & 1) == 0) goto LAB_01478690;
        uVar25 = *(undefined8 *)(puVar2 + -0x1d0);
        *(undefined8 *)(puVar2 + -0x240) = *(undefined8 *)(puVar2 + -0x1c8);
        uVar22 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,puVar2 + -0x240);
        uVar14 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar9 + 0xa8,uVar22,0);
        if ((uVar14 & 1) != 0) {
          if (*(long *)(lVar9 + 0x60) == 0) {
            func_0x00f78af4();
          }
          else {
            uVar14 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar9 + 0x60),uVar25,puVar2 + -0x1e8,0);
            if ((uVar14 & 1) == 0) {
              uVar18 = 0x86;
              goto code_r0x0147869c;
            }
            if (*(long *)(puVar2 + -0x1e8) != 0) {
              Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                        (lVar9,*(undefined8 *)(*(long *)(puVar2 + -0x1e8) + 0x18));
              goto LAB_01478624;
            }
            func_0x00f78af4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1478708);
          (*pcVar1)();
        }
      } while( true );
    }
    func_0x00f78af4();
    if (extraout_w1_00 == 1) {
      plVar11 = (long *)___cxa_begin_catch();
      lVar21 = *plVar11;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0x1e0,*unaff_x23);
      if (lVar21 == 0) goto code_r0x014786b8;
      func_0x00f78ac0(lVar21,0);
    }
    lVar24 = __Unwind_Resume();
    *(long *)(puVar2 + -0x260) = lVar21;
    *(long *)(puVar2 + -600) = lVar9;
    *(undefined1 **)(puVar2 + -0x250) = puVar2 + -0x160;
    *(code **)(puVar2 + -0x248) = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
              (puVar2 + -0x2c0,lVar24,*(undefined8 *)(lVar24 + 0xa8));
    uVar25 = *(undefined8 *)(puVar2 + -0x2a0);
    uVar17 = *(undefined8 *)(puVar2 + -0x288);
    uVar22 = *(undefined8 *)(puVar2 + -0x290);
    extraout_x8[5] = *(undefined8 *)(puVar2 + -0x298);
    extraout_x8[4] = uVar25;
    extraout_x8[7] = uVar17;
    extraout_x8[6] = uVar22;
    uVar25 = *(undefined8 *)(puVar2 + -0x280);
    uVar17 = *(undefined8 *)(puVar2 + -0x268);
    uVar22 = *(undefined8 *)(puVar2 + -0x270);
    extraout_x8[9] = *(undefined8 *)(puVar2 + -0x278);
    extraout_x8[8] = uVar25;
    extraout_x8[0xb] = uVar17;
    extraout_x8[10] = uVar22;
    uVar25 = *(undefined8 *)(puVar2 + -0x2c0);
    uVar17 = *(undefined8 *)(puVar2 + -0x2a8);
    uVar22 = *(undefined8 *)(puVar2 + -0x2b0);
    extraout_x8[1] = *(undefined8 *)(puVar2 + -0x2b8);
    *extraout_x8 = uVar25;
    extraout_x8[3] = uVar17;
    extraout_x8[2] = uVar22;
    return;
  }
  puVar28 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterUseUsableEndTrigger;
  puVar3 = &stack0xffffffffffffffd0;
  uVar22 = 0;
  lVar24 = lVar21;
Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteUseUsableCondition:
  puVar5 = puVar3 + -0x70;
  puVar4 = puVar3 + -0x70;
  puVar2 = puVar3 + -0x70;
  *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar3 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar3 + -0x30) = uVar25;
  *(long *)(puVar3 + -0x28) = lVar9;
  *(undefined8 *)(puVar3 + -0x20) = uVar22;
  *(long *)(puVar3 + -0x18) = param_1;
  *(undefined1 **)(puVar3 + -0x10) = puVar27;
  *(undefined **)(puVar3 + -8) = puVar28;
  puVar27 = puVar3 + -0x10;
  lVar20 = 0x3eb4000;
  if ((bRam0000000003eb4ec2 & 1) == 0) {
    func_0x00f78a20(0x3d527e8);
    func_0x00f78a20(0x3d527f8);
    func_0x00f78a20(0x3d52800);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ec2 = 1;
  }
  if (*(long *)(lVar24 + 0x58) == 0) {
code_r0x01535ac8:
    lVar21 = func_0x00f78af4();
    *(long *)(puVar3 + -0x90) = lVar20;
    *(long *)(puVar3 + -0x88) = lVar24;
    *(undefined1 **)(puVar3 + -0x80) = puVar27;
    *(undefined **)(puVar3 + -0x78) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterHitPlayerEndTrigger;
    uVar14 = 0;
    iVar8 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
    if (iVar8 == 0) {
      return;
    }
    uVar22 = *(undefined8 *)(puVar3 + -0x90);
    *(undefined8 *)(puVar3 + -0x90) = uVar22;
    *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(puVar3 + -0x88);
    *(undefined8 *)(puVar3 + -0x80) = *(undefined8 *)(puVar3 + -0x80);
    *(undefined8 *)(puVar3 + -0x78) = *(undefined8 *)(puVar3 + -0x78);
    puVar27 = puVar3 + -0x80;
    uVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar21,0);
    if ((uVar10 & 1) == 0) {
      puVar27 = *(undefined1 **)(puVar3 + -0x80);
      puVar28 = *(undefined **)(puVar3 + -0x78);
      uVar22 = *(undefined8 *)(puVar3 + -0x90);
      lVar24 = *(long *)(puVar3 + -0x88);
      unaff_x19 = lVar21;
    }
    else {
      if (*(long *)(lVar21 + 0xb8) != 0) {
        Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsedUsables(*(long *)(lVar21 + 0xb8),0);
        puVar27 = *(undefined1 **)(puVar3 + -0x80);
        puStack_38 = *(undefined **)(puVar3 + -0x78);
        uVar22 = *(undefined8 *)(puVar3 + -0x90);
        param_1 = *(long *)(puVar3 + -0x88);
        goto Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RetrySection;
      }
      puVar28 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteHitPlayerCondition;
      unaff_x19 = func_0x00f78af4();
      puVar4 = puVar3 + -0x90;
      lVar24 = lVar21;
    }
    while( true ) {
      puVar6 = puVar4 + -0x60;
      *(undefined8 *)(puVar4 + -0x30) = uVar25;
      *(long *)(puVar4 + -0x28) = lVar9;
      *(undefined8 *)(puVar4 + -0x20) = uVar22;
      *(long *)(puVar4 + -0x18) = lVar24;
      *(undefined1 **)(puVar4 + -0x10) = puVar27;
      *(undefined **)(puVar4 + -8) = puVar28;
      puVar27 = puVar4 + -0x10;
      unaff_x20 = 0x3eb4000;
      if ((bRam0000000003eb4ec4 & 1) == 0) {
        func_0x00f78a20(0x3d527d0);
        func_0x00f78a20(0x3d527f0);
        func_0x00f78a20(0x3d278d8);
        func_0x00f78a20(0x3d27728);
        bRam0000000003eb4ec4 = 1;
      }
      lVar21 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(unaff_x19);
      if (lVar21 != 0) {
        uVar25 = 0x3d52000;
        uVar22 = *(undefined8 *)(lVar21 + 0xa0);
        uVar29 = *(undefined8 *)(lVar21 + 0xb8);
        uVar17 = *(undefined8 *)(lVar21 + 0xb0);
        *(undefined8 *)(puVar4 + -0x58) = *(undefined8 *)(lVar21 + 0xa8);
        *(undefined8 *)(puVar4 + -0x60) = uVar22;
        *(undefined8 *)(puVar4 + -0x48) = uVar29;
        *(undefined8 *)(puVar4 + -0x50) = uVar17;
        uVar22 = *(undefined8 *)(lVar21 + 0xc0);
        *(undefined8 *)(puVar4 + -0x38) = *(undefined8 *)(lVar21 + 200);
        *(undefined8 *)(puVar4 + -0x40) = uVar22;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(unaff_x19,puVar4 + -0x60,0);
        *(undefined4 *)(unaff_x19 + 0xe8) = 0;
        unaff_x20 = *(long *)(unaff_x19 + 0xd8);
        lVar9 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
        uVar14 = uRam0000000003d527d0;
        /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(lVar9,unaff_x19,uRam0000000003d527d0,0);
        if (unaff_x20 != 0) {
          uVar14 = 0;
          /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(unaff_x20,lVar9);
          if (*(long *)(unaff_x19 + 0x10) != 0) {
            uVar25 = 0x3d52000;
            plVar23 = *(long **)(*(long *)(unaff_x19 + 0x10) + 0x40);
            lVar9 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
            auVar37._8_8_ = lVar9;
            auVar37._0_8_ = plVar23;
            uVar17 = 0;
            uVar14 = uRam0000000003d527f0;
            /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(lVar9,unaff_x19,uRam0000000003d527f0,0);
            unaff_x20 = 0;
            if (plVar23 != (long *)0x0) {
              puVar28 = &UNK_01535c74;
              goto code_r0x0159d844;
            }
          }
        }
      }
      auVar35 = func_0x00f78af4();
      lVar21 = auVar35._0_8_;
      register0x00000008 = (BADSPACEBASE *)(puVar4 + -0xb0);
      *(long *)(puVar4 + -0x80) = unaff_x20;
      *(long *)(puVar4 + -0x78) = unaff_x19;
      *(undefined1 **)(puVar4 + -0x70) = puVar27;
      *(undefined **)(puVar4 + -0x68) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnPickup;
      unaff_x29 = puVar4 + -0x70;
      if (auVar35._8_8_ != 0) {
        if (*(long *)(auVar35._8_8_ + 0x10) != *(long *)(lVar21 + 0x38)) {
          return;
        }
        lVar24 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar21);
        unaff_x19 = lVar21;
        if (lVar24 != 0) {
          uVar25 = *(undefined8 *)(lVar24 + 0x40);
          uVar17 = *(undefined8 *)(lVar24 + 0x58);
          uVar22 = *(undefined8 *)(lVar24 + 0x50);
          *(undefined8 *)(puVar4 + -0xa8) = *(undefined8 *)(lVar24 + 0x48);
          *(undefined8 *)(puVar4 + -0xb0) = uVar25;
          *(undefined8 *)(puVar4 + -0x98) = uVar17;
          *(undefined8 *)(puVar4 + -0xa0) = uVar22;
          uVar25 = *(undefined8 *)(lVar24 + 0x60);
          *(undefined8 *)(puVar4 + -0x88) = *(undefined8 *)(lVar24 + 0x68);
          *(undefined8 *)(puVar4 + -0x90) = uVar25;
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar21,puVar4 + -0xb0,0);
          if (*(int *)(lVar21 + 0xe8) == 1) {
            Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompletePickupCondition(lVar21);
          }
          return;
        }
      }
      unaff_x30 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartUseUsableSection;
      param_1 = func_0x00f78af4();
code_r0x01535d14:
      *(undefined8 *)((long)register0x00000008 + -0x30) = uVar25;
      *(long *)((long)register0x00000008 + -0x28) = lVar9;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
      uVar22 = 0x3eb4000;
      if ((bRam0000000003eb4ec1 & 1) == 0) {
        func_0x00f78a20(0x3d52800);
        func_0x00f78a20(0x3d27718);
        bRam0000000003eb4ec1 = 1;
      }
      *(undefined4 *)(param_1 + 0xe8) = 2;
      lVar21 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(param_1);
      if (lVar21 != 0) {
        uVar14 = (ulong)*(uint *)(lVar21 + 0x14c);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                  (param_1,*(undefined8 *)(lVar21 + 0x130),uVar14,*(char *)(lVar21 + 0x148) != '\0',
                   0);
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar25 = 0x3d52000;
          lVar21 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
          lVar9 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
          auVar34._8_8_ = lVar9;
          auVar34._0_8_ = lVar21;
          uVar14 = uRam0000000003d52800;
          /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(lVar9,param_1,uRam0000000003d52800,0);
          uVar22 = 0;
          if (lVar21 != 0) {
            puVar27 = *(undefined1 **)((long)register0x00000008 + -0x10);
            puVar28 = *(undefined **)((long)register0x00000008 + -8);
            plVar23 = *(long **)((long)register0x00000008 + -0x20);
            uVar22 = *(undefined8 *)((long)register0x00000008 + -0x18);
            uVar25 = *(undefined8 *)((long)register0x00000008 + -0x30);
            lVar9 = *(long *)((long)register0x00000008 + -0x28);
            puVar4 = (undefined1 *)register0x00000008;
            goto code_r0x0159d188;
          }
        }
      }
      auVar35 = func_0x00f78af4();
      *(undefined1 **)((long)register0x00000008 + -0x40) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined **)((long)register0x00000008 + -0x38) =
           &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnUse;
      if (auVar35._8_8_ != 0) break;
      lVar24 = func_0x00f78af4();
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar25;
      *(long *)((long)register0x00000008 + -0x68) = lVar9;
      *(undefined8 *)((long)register0x00000008 + -0x60) = uVar22;
      *(long *)((long)register0x00000008 + -0x58) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0x50) =
           (undefined1 *)((long)register0x00000008 + -0x40);
      *(undefined **)((long)register0x00000008 + -0x48) =
           &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartHitPlayerSection;
      uVar22 = 0x3eb4000;
      if ((bRam0000000003eb4ec3 & 1) == 0) {
        func_0x00f78a20(0x3d527f0);
        func_0x00f78a20(0x3d27728);
        bRam0000000003eb4ec3 = 1;
      }
      lVar21 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar24);
      if (lVar21 != 0) {
        uVar14 = (ulong)*(uint *)(lVar21 + 0x1ac);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                  (lVar24,*(undefined8 *)(lVar21 + 400),uVar14,*(char *)(lVar21 + 0x1a8) != '\0',0);
        *(undefined4 *)(lVar24 + 0xe8) = 3;
        if (*(long *)(lVar24 + 0x10) == 0) goto code_r0x01535ee8;
        uVar25 = 0x3d52000;
        lVar21 = *(long *)(*(long *)(lVar24 + 0x10) + 0x40);
        lVar9 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
        uVar14 = uRam0000000003d527f0;
        /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(lVar9,lVar24,uRam0000000003d527f0,0);
        uVar22 = 0;
        if (lVar21 == 0) goto code_r0x01535ee8;
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
        if ((bRam0000000003eb51f9 & 1) == 0) {
          func_0x00f78a20(0x3d27728,lVar9,0);
          bRam0000000003eb51f9 = 1;
        }
        plVar23 = (long *)(lVar21 + 0x98);
        lVar21 = *plVar23;
        while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar21,lVar9,0), plVar11 == (long *)0x0 ||
               (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
          lVar24 = func_0x00ff0f44(plVar23,plVar11,lVar21);
          bVar7 = lVar21 == lVar24;
          lVar21 = lVar24;
          if (bVar7) {
            return;
          }
        }
        auVar35 = func_0x00f78e5c(plVar11);
        uVar22 = auVar35._8_8_;
        puVar4 = (undefined1 *)((long)register0x00000008 + -0xa0);
        *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3d27728;
        *(long *)((long)register0x00000008 + -0x98) = lVar21;
        *(long **)((long)register0x00000008 + -0x90) = plVar23;
        *(long *)((long)register0x00000008 + -0x88) = lVar9;
        *(undefined1 **)((long)register0x00000008 + -0x80) =
             (undefined1 *)((long)register0x00000008 + -0x50);
        *(undefined **)((long)register0x00000008 + -0x78) =
             &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
        puVar27 = (undefined1 *)((long)register0x00000008 + -0x80);
        if ((bRam0000000003eb51fb & 1) == 0) {
          func_0x00f78a20(0x3d27730);
          bRam0000000003eb51fb = 1;
        }
        uVar25 = 0x3d27730;
        plVar23 = (long *)(auVar35._0_8_ + 0xa0);
        lVar9 = *plVar23;
        while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,uVar22,0), plVar11 == (long *)0x0 ||
               (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
          lVar21 = func_0x00ff0f44(plVar23,plVar11,lVar9);
          bVar7 = lVar9 == lVar21;
          lVar9 = lVar21;
          if (bVar7) {
            return;
          }
        }
        puVar28 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
        auVar34 = func_0x00f78e5c(plVar11);
code_r0x0159d188:
        *(undefined8 *)(puVar4 + -0x30) = uVar25;
        *(long *)(puVar4 + -0x28) = lVar9;
        *(long **)(puVar4 + -0x20) = plVar23;
        *(undefined8 *)(puVar4 + -0x18) = uVar22;
        *(undefined1 **)(puVar4 + -0x10) = puVar27;
        *(undefined **)(puVar4 + -8) = puVar28;
        if ((bRam0000000003eb51f3 & 1) == 0) {
          func_0x00f78a20(0x3d27718);
          bRam0000000003eb51f3 = 1;
        }
        plVar23 = (long *)(auVar34._0_8_ + 0x80);
        lVar9 = *plVar23;
        while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,auVar34._8_8_,0), plVar11 == (long *)0x0 ||
               (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
          lVar21 = func_0x00ff0f44(plVar23,plVar11,lVar9);
          bVar7 = lVar9 == lVar21;
          lVar9 = lVar21;
          if (bVar7) {
            return;
          }
        }
        auVar35 = func_0x00f78e5c(plVar11);
        *(undefined8 *)(puVar4 + -0x60) = 0x3d27718;
        *(long *)(puVar4 + -0x58) = lVar9;
        *(long **)(puVar4 + -0x50) = plVar23;
        *(long *)(puVar4 + -0x48) = auVar34._8_8_;
        *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
        *(undefined **)(puVar4 + -0x38) =
             &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
        if ((bRam0000000003eb51fd & 1) == 0) {
          func_0x00f78a20(0x3d27738);
          bRam0000000003eb51fd = 1;
        }
        plVar23 = (long *)(auVar35._0_8_ + 0xa8);
        lVar9 = *plVar23;
        while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,auVar35._8_8_,0), plVar11 == (long *)0x0 ||
               (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
          lVar21 = func_0x00ff0f44(plVar23,plVar11,lVar9);
          bVar7 = lVar9 == lVar21;
          lVar9 = lVar21;
          if (bVar7) {
            return;
          }
        }
        auVar36 = func_0x00f78e5c(plVar11);
        *(undefined8 *)(puVar4 + -0x90) = 0x3d27738;
        *(long *)(puVar4 + -0x88) = lVar9;
        *(long **)(puVar4 + -0x80) = plVar23;
        *(long *)(puVar4 + -0x78) = auVar35._8_8_;
        *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
        *(undefined **)(puVar4 + -0x68) =
             &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
        if ((bRam0000000003eb51f5 & 1) == 0) {
          func_0x00f78a20(0x3d27700);
          bRam0000000003eb51f5 = 1;
        }
        plVar23 = (long *)(auVar36._0_8_ + 0x88);
        lVar9 = *plVar23;
        while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,auVar36._8_8_,0), plVar11 == (long *)0x0 ||
               (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
          lVar21 = func_0x00ff0f44(plVar23,plVar11,lVar9);
          bVar7 = lVar9 == lVar21;
          lVar9 = lVar21;
          if (bVar7) {
            return;
          }
        }
        auVar35 = func_0x00f78e5c(plVar11);
        puVar5 = puVar4 + -0xe0;
        *(undefined8 *)(puVar4 + -0xe0) = unaff_x26;
        *(undefined8 *)(puVar4 + -0xd8) = unaff_x25;
        *(undefined8 *)(puVar4 + -0xd0) = unaff_x24;
        *(undefined8 **)(puVar4 + -200) = unaff_x23;
        *(undefined8 *)(puVar4 + -0xc0) = 0x3d27700;
        *(long *)(puVar4 + -0xb8) = lVar9;
        *(long **)(puVar4 + -0xb0) = plVar23;
        *(long *)(puVar4 + -0xa8) = auVar36._8_8_;
        *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x70;
        *(code **)(puVar4 + -0x98) = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
        puVar27 = puVar4 + -0xa0;
        unaff_x23 = (undefined8 *)0x3d27718;
        unaff_x24 = 0x3d570f0;
        if ((bRam0000000003eb51b7 & 1) == 0) {
          func_0x00f78a20(0x3d524e0);
          func_0x00f78a20(0x3d524e8);
          func_0x00f78a20(0x3d524f0);
          func_0x00f78a20(0x3d524f8);
          func_0x00f78a20(0x3d570d0);
          func_0x00f78a20(0x3d570f0);
          func_0x00f78a20(0x3d27700);
          func_0x00f78a20(0x3d27718);
          func_0x00f78a20(0x3d27728);
          func_0x00f78a20(0x3d27730);
          func_0x00f78a20(0x3d27738);
          bRam0000000003eb51b7 = 1;
        }
        lVar9 = *(long *)(auVar35._0_8_ + 0x40);
        uVar22 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
        auVar36._8_8_ = uVar22;
        auVar36._0_8_ = lVar9;
        uVar17 = 0;
        /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(uVar22,auVar35._0_8_,uRam0000000003d570f0,0);
        if (lVar9 == 0) {
          puVar28 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
          auVar36 = func_0x00f78af4();
        }
        else {
          unaff_x24 = 0x3d27000;
          unaff_x25 = 0x3d52000;
          puVar28 = (undefined *)0x159d470;
          puVar5 = puVar4 + -0xe0;
        }
        goto code_r0x0159d5c4;
      }
code_r0x01535ee8:
      unaff_x19 = func_0x00f78af4();
      *(undefined1 **)((long)register0x00000008 + -0x80) =
           (undefined1 *)((long)register0x00000008 + -0x50);
      *(undefined **)((long)register0x00000008 + -0x78) =
           &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnHit;
      if (uVar14 == 0) {
        func_0x00f78af4();
        return;
      }
      if (*(long *)(uVar14 + 0x10) != *(long *)(unaff_x19 + 0x38)) {
        return;
      }
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x70);
      puVar27 = *(undefined1 **)((long)register0x00000008 + -0x80);
      puVar28 = *(undefined **)((long)register0x00000008 + -0x78);
    }
    if (*(long *)(auVar35._8_8_ + 0x10) != *(long *)(auVar35._0_8_ + 0x38)) {
      return;
    }
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x30);
    puVar27 = *(undefined1 **)((long)register0x00000008 + -0x40);
    puVar28 = *(undefined **)((long)register0x00000008 + -0x38);
    lVar24 = auVar35._0_8_;
    goto Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteUseUsableCondition;
  }
  *(undefined1 *)(*(long *)(lVar24 + 0x58) + 0x100) = 1;
  lVar21 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar24);
  if (lVar21 == 0) goto code_r0x01535ac8;
  uVar25 = *(undefined8 *)(lVar21 + 0x70);
  uVar17 = *(undefined8 *)(lVar21 + 0x88);
  uVar22 = *(undefined8 *)(lVar21 + 0x80);
  *(undefined8 *)(puVar3 + -0x68) = *(undefined8 *)(lVar21 + 0x78);
  *(undefined8 *)(puVar3 + -0x70) = uVar25;
  *(undefined8 *)(puVar3 + -0x58) = uVar17;
  *(undefined8 *)(puVar3 + -0x60) = uVar22;
  uVar25 = *(undefined8 *)(lVar21 + 0x90);
  *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(lVar21 + 0x98);
  *(undefined8 *)(puVar3 + -0x50) = uVar25;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar24,puVar3 + -0x70,0);
  lVar20 = *(long *)(lVar24 + 0xd0);
  lVar9 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(lVar9,lVar24,uRam0000000003d527e8,0);
  uVar25 = 0x3d52000;
  if (lVar20 == 0) goto code_r0x01535ac8;
  /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar20,lVar9,0);
  if (*(long *)(lVar24 + 0x10) == 0) goto code_r0x01535ac8;
  uVar22 = 0x3d27718;
  unaff_x23 = (undefined8 *)0x3d52000;
  lVar20 = *(long *)(*(long *)(lVar24 + 0x10) + 0x40);
  lVar9 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(lVar9,lVar24,uRam0000000003d527f8,0);
  uVar25 = 0x3d27718;
  if (lVar20 == 0) goto code_r0x01535ac8;
  /*Atlas.Gameplay.Player.GameContextPlayerManager$$remove_OnUsableAttached*/ func_0x015a5cc8(lVar20,lVar9,0);
  if (*(long *)(lVar24 + 0x10) == 0) goto code_r0x01535ac8;
  unaff_x23 = (undefined8 *)0x3d52000;
  lVar21 = *(long *)(*(long *)(lVar24 + 0x10) + 0x40);
  auVar35._8_8_ = lVar21;
  auVar35._0_8_ = lVar24;
  lVar9 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar36._8_8_ = lVar9;
  auVar36._0_8_ = lVar21;
  uVar17 = 0;
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(lVar9,lVar24,uRam0000000003d52800,0);
  lVar20 = 0;
  uVar25 = uVar22;
  if (lVar21 == 0) goto code_r0x01535ac8;
  puVar28 = &UNK_01535aa8;
code_r0x0159d5c4:
  *(undefined8 *)(puVar5 + -0x30) = uVar22;
  *(long *)(puVar5 + -0x28) = lVar9;
  *(long *)(puVar5 + -0x20) = auVar35._8_8_;
  *(long *)(puVar5 + -0x18) = auVar35._0_8_;
  *(undefined1 **)(puVar5 + -0x10) = puVar27;
  *(undefined **)(puVar5 + -8) = puVar28;
  if ((bRam0000000003eb51f4 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f4 = 1;
  }
  plVar23 = (long *)(auVar36._0_8_ + 0x80);
  lVar9 = *plVar23;
  while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,auVar36._8_8_,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar21 = func_0x00ff0f44(plVar23,plVar11,lVar9);
    bVar7 = lVar9 == lVar21;
    lVar9 = lVar21;
    if (bVar7) {
      return;
    }
  }
  auVar35 = func_0x00f78e5c(plVar11);
  *(undefined8 *)(puVar5 + -0x60) = 0x3d27718;
  *(long *)(puVar5 + -0x58) = lVar9;
  *(long **)(puVar5 + -0x50) = plVar23;
  *(long *)(puVar5 + -0x48) = auVar36._8_8_;
  *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x38) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar23 = (long *)(auVar35._0_8_ + 0x88);
  lVar9 = *plVar23;
  while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,auVar35._8_8_,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar21 = func_0x00ff0f44(plVar23,plVar11,lVar9);
    bVar7 = lVar9 == lVar21;
    lVar9 = lVar21;
    if (bVar7) {
      return;
    }
  }
  auVar36 = func_0x00f78e5c(plVar11);
  *(undefined8 *)(puVar5 + -0x90) = 0x3d27700;
  *(long *)(puVar5 + -0x88) = lVar9;
  *(long **)(puVar5 + -0x80) = plVar23;
  *(long *)(puVar5 + -0x78) = auVar35._8_8_;
  *(undefined1 **)(puVar5 + -0x70) = puVar5 + -0x40;
  *(undefined **)(puVar5 + -0x68) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar23 = (long *)(auVar36._0_8_ + 0xa8);
  lVar9 = *plVar23;
  while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,auVar36._8_8_,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar21 = func_0x00ff0f44(plVar23,plVar11,lVar9);
    bVar7 = lVar9 == lVar21;
    lVar9 = lVar21;
    if (bVar7) {
      return;
    }
  }
  auVar35 = func_0x00f78e5c(plVar11);
  unaff_x19 = auVar35._8_8_;
  puVar6 = puVar5 + -0xc0;
  *(undefined8 *)(puVar5 + -0xc0) = 0x3d27738;
  *(long *)(puVar5 + -0xb8) = lVar9;
  *(long **)(puVar5 + -0xb0) = plVar23;
  *(long *)(puVar5 + -0xa8) = auVar36._8_8_;
  *(undefined1 **)(puVar5 + -0xa0) = puVar5 + -0x70;
  *(undefined **)(puVar5 + -0x98) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  puVar27 = puVar5 + -0xa0;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  uVar25 = 0x3d27730;
  plVar23 = (long *)(auVar35._0_8_ + 0xa0);
  lVar9 = *plVar23;
  while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,unaff_x19,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar21 = func_0x00ff0f44(plVar23,plVar11,lVar9);
    bVar7 = lVar9 == lVar21;
    lVar9 = lVar21;
    if (bVar7) {
      return;
    }
  }
  puVar28 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  auVar37 = func_0x00f78e5c(plVar11);
code_r0x0159d844:
  *(undefined8 *)(puVar6 + -0x30) = uVar25;
  *(long *)(puVar6 + -0x28) = lVar9;
  *(long **)(puVar6 + -0x20) = plVar23;
  *(long *)(puVar6 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar6 + -0x10) = puVar27;
  *(undefined **)(puVar6 + -8) = puVar28;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar23 = (long *)0x3d27728;
  plVar11 = (long *)(auVar37._0_8_ + 0x98);
  lVar9 = *plVar11;
  while( true ) {
    puVar15 = (undefined8 *)0x0;
    plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,auVar37._8_8_);
    if ((plVar12 != (long *)0x0) && (*plVar12 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar21 = func_0x00ff0f44(plVar11,plVar12,lVar9);
    bVar7 = lVar9 == lVar21;
    lVar9 = lVar21;
    if (bVar7) {
      return;
    }
  }
  lVar21 = func_0x00f78e5c(plVar12);
  *(undefined8 *)(puVar6 + -0x80) = unaff_x26;
  *(undefined8 *)(puVar6 + -0x78) = unaff_x25;
  *(undefined8 *)(puVar6 + -0x70) = unaff_x24;
  *(undefined8 **)(puVar6 + -0x68) = unaff_x23;
  *(undefined8 *)(puVar6 + -0x60) = 0x3d27728;
  *(long *)(puVar6 + -0x58) = lVar9;
  *(long **)(puVar6 + -0x50) = plVar11;
  *(long *)(puVar6 + -0x48) = auVar37._8_8_;
  *(undefined1 **)(puVar6 + -0x40) = puVar6 + -0x10;
  *(undefined **)(puVar6 + -0x38) = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar9 = 0x3eb5000;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar24 = *(long *)(lVar21 + 0x28);
  if (lVar24 != 0) {
    plVar23 = (long *)(lVar21 + 0x10);
    uVar19 = *(uint *)(lVar24 + 0x18);
    if ((int)uVar19 < 1) {
code_r0x0159d9f0:
      if (((*(long *)(lVar21 + 0x20) == 0) ||
          (lVar20 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar20 == 0)) ||
         (unaff_x23 = *(undefined8 **)(lVar20 + 0x10), unaff_x23 == (undefined8 *)0x0))
      goto code_r0x0159db7c;
      uVar25 = 0x3d1b4e8;
      unaff_x24 = 0x3d1b4e8;
      lVar9 = unaff_x23[3];
      lVar24 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
      uVar17 = uRam0000000003d2a1d8;
      /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar24,lVar21,uRam0000000003d57238,uRam0000000003d2a1d8);
      puVar15 = (undefined8 *)0x0;
      plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,lVar24);
      if ((plVar11 == (long *)0x0) || (*plVar11 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
        unaff_x23[3] = plVar11;
        if ((*(long *)(lVar21 + 0x20) == 0) ||
           ((lVar20 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar20 == 0 ||
            (unaff_x23 = *(undefined8 **)(lVar20 + 0x10), unaff_x23 == (undefined8 *)0x0))))
        goto code_r0x0159db7c;
        uVar25 = 0x3d1b3b0;
        unaff_x24 = 0x3d1b3b0;
        lVar9 = unaff_x23[0xe];
        lVar24 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
        uVar17 = uRam0000000003d29f28;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar24,lVar21,uRam0000000003d57240,uRam0000000003d29f28);
        puVar15 = (undefined8 *)0x0;
        plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,lVar24);
        if ((plVar11 == (long *)0x0) || (*plVar11 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
          unaff_x23[0xe] = plVar11;
          if (((*(long *)(lVar21 + 0x20) == 0) ||
              (lVar20 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar20 == 0)) ||
             (unaff_x23 = *(undefined8 **)(lVar20 + 0x10), unaff_x23 == (undefined8 *)0x0))
          goto code_r0x0159db7c;
          uVar25 = 0x3d1b4e0;
          lVar9 = unaff_x23[5];
          lVar24 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
          uVar17 = uRam0000000003d2a1c8;
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar24,lVar21,uRam0000000003d57230,uRam0000000003d2a1c8);
          puVar15 = (undefined8 *)0x0;
          plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,lVar24);
          if ((plVar11 == (long *)0x0) || (*plVar11 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
            unaff_x23[5] = plVar11;
            *(undefined1 *)(lVar21 + 0x50) = 0;
            *(undefined8 *)(lVar21 + 0x18) = 0;
            *plVar23 = 0;
            *(undefined8 *)(lVar21 + 0x28) = 0;
            *(undefined8 *)(lVar21 + 0x20) = 0;
            return;
          }
        }
      }
      goto code_r0x0159db8c;
    }
    unaff_x23 = (undefined8 *)0x0;
    unaff_x24 = 0x3d43378;
    while( true ) {
      uVar26 = (uint)unaff_x23;
      uVar25 = unaff_x24;
      if (uVar19 <= uVar26) goto code_r0x0159db80;
      if (*plVar23 == 0) break;
      lVar9 = *(long *)(lVar24 + (long)(int)uVar26 * 8 + 0x20);
      puVar15 = puRam0000000003d43378;
      /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar23,lVar9);
      if (lVar9 == 0) break;
      /*Atlas.Gameplay.Player.GameContextPlayer$$DeInit*/ func_0x015a5404(lVar9);
      unaff_x23 = (undefined8 *)(ulong)(uVar26 + 1);
      uVar19 = *(uint *)(lVar24 + 0x18);
      if ((int)uVar19 <= (int)(uVar26 + 1)) goto code_r0x0159d9f0;
    }
  }
code_r0x0159db7c:
  func_0x00f78af4();
  uVar25 = unaff_x24;
code_r0x0159db80:
  uVar22 = func_0x00f78b24();
  func_0x00f78ac0(uVar22,0);
code_r0x0159db8c:
  auVar35 = func_0x00f78e5c();
  puVar13 = auVar35._8_8_;
  plVar11 = auVar35._0_8_;
  *(undefined8 *)(puVar6 + -0xc0) = uVar25;
  *(undefined8 **)(puVar6 + -0xb8) = unaff_x23;
  *(long **)(puVar6 + -0xb0) = plVar23;
  *(long *)(puVar6 + -0xa8) = lVar24;
  *(long *)(puVar6 + -0xa0) = lVar9;
  *(long *)(puVar6 + -0x98) = lVar21;
  *(undefined1 **)(puVar6 + -0x90) = puVar6 + -0x40;
  *(code **)(puVar6 + -0x88) = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar16 = puVar15;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar11[3] != 0) &&
      (puVar16 = puVar15, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar11[3],puVar13,puVar15,uVar17,0),
      puVar15 != (undefined8 *)0x0)) && (lVar9 = puVar15[2], lVar9 != 0)) {
    uVar25 = *(undefined8 *)(lVar9 + 0x48);
    uVar29 = *(undefined8 *)(lVar9 + 0x60);
    uVar22 = *(undefined8 *)(lVar9 + 0x58);
    *(undefined8 *)(puVar6 + -0xd8) = *(undefined8 *)(lVar9 + 0x50);
    *(undefined8 *)(puVar6 + -0xe0) = uVar25;
    *(undefined8 *)(puVar6 + -200) = uVar29;
    *(undefined8 *)(puVar6 + -0xd0) = uVar22;
    iVar8 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar6 + -0xe0,0);
    if ((iVar8 == 0) || (puVar15 == puVar13)) {
      return;
    }
    iVar8 = (**(code **)(*plVar11 + 0x2a8))(plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
    if ((plVar11[0x18] != 0) && (lVar9 = *(long *)(plVar11[0x18] + 0x20), lVar9 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar6 + -0xf8,lVar9,0);
      *(int *)(puVar15 + 0xf) = *(int *)(puVar15 + 0xf) + iVar8;
      uVar25 = *(undefined8 *)(puVar6 + -0xf8);
      puVar15[0x11] = *(undefined8 *)(puVar6 + -0xf0);
      puVar15[0x10] = uVar25;
      puVar15[0x12] = *(undefined8 *)(puVar6 + -0xe8);
      if (puVar15[2] != 0) {
        if (*(int *)(puVar15[2] + 0x50) == 0) {
          uVar25 = (**(code **)(*plVar11 + 0x208))(plVar11,*(undefined8 *)(*plVar11 + 0x210));
          puVar16 = (undefined8 *)0x0;
          iVar8 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar25,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar8 != 0) {
            if (plVar11[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar11[3],*(undefined4 *)(puVar15 + 0xf),0);
          }
        }
        if (plVar11[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar11[0x46],puVar13,puVar15,uVar17,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar38 = func_0x00f78af4();
  lVar9 = auVar38._0_8_;
  iVar8 = *(int *)(lVar9 + 0x78);
  uVar17 = puVar16[1];
  uVar22 = *puVar16;
  *(undefined8 *)(puVar6 + -0x118) = uVar17;
  *(undefined8 *)(puVar6 + -0x120) = uVar22;
  uVar25 = puVar16[2];
  *(undefined8 *)(puVar6 + -0x110) = uVar25;
  *(int *)(lVar9 + 0x78) = iVar8 + auVar38._8_4_;
  *(undefined8 *)(lVar9 + 0x88) = uVar17;
  *(undefined8 *)(lVar9 + 0x80) = uVar22;
  *(undefined8 *)(lVar9 + 0x90) = uVar25;
  return;
LAB_01478690:
  uVar18 = 0x7b;
code_r0x0147869c:
  *(undefined4 *)(puVar2 + -0x1f8) = uVar18;
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0x1e0,uRam0000000003d33318);
  if (*(int *)(puVar2 + -0x1f8) == 0x86) {
    return;
  }
code_r0x014786b8:
  lVar21 = *plVar23;
  if (((*(ushort *)(lVar21 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar21 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar21 = *plVar23;
  }
  *(undefined8 *)(lVar9 + 0xa8) = **(undefined8 **)(lVar21 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x15358a8 | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.OnEnterUseUsableEndTrigger
// ============================================================

/* WARNING: Possible PIC construction at 0x01535aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x01535c74) */
/* WARNING: Removing unreachable block (ram,0x01535aa8) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterUseUsableEndTrigger
               (long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined8 *extraout_x8;
  long unaff_x19;
  undefined8 uVar20;
  long lVar21;
  undefined8 unaff_x20;
  long *plVar22;
  long unaff_x21;
  undefined8 uVar23;
  undefined8 unaff_x22;
  uint uVar24;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined1 *puVar25;
  undefined8 unaff_x30;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  
  iVar6 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision(param_1,param_2,0);
  if ((iVar6 == 0) || (*(int *)(param_1 + 0xe8) != 2)) {
    return;
  }
  uVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(param_1,0);
  if ((uVar10 & 1) != 0) {
Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RetrySection:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
              ((undefined1 *)((long)register0x00000008 + -0x90),param_1,
               *(undefined8 *)(param_1 + 0xa8));
    *(undefined8 *)((long)register0x00000008 + -0xd8) =
         *(undefined8 *)((long)register0x00000008 + -0x88);
    *(undefined8 *)((long)register0x00000008 + -0xe0) =
         *(undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -200) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    *(undefined8 *)((long)register0x00000008 + -0xd0) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x58);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x60);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar29;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar28;
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar27;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar14;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x68);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar31;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar30;
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x40);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)((long)register0x00000008 + -0x68) = uVar31;
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar30;
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar29;
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = uVar27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar14;
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)((long)register0x00000008 + -0x88);
    *(undefined8 *)((long)register0x00000008 + -0x90) =
         *(undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar29;
    *(undefined8 *)((long)register0x00000008 + -0x100) = uVar28;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar27;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar14;
    *(undefined8 *)((long)register0x00000008 + -0x108) = uVar31;
    *(undefined8 *)((long)register0x00000008 + -0x110) = uVar30;
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
              (param_1,(undefined1 *)((long)register0x00000008 + -0x110));
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnHumanPlayerAtLocator(param_1,uVar20);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnAIsAtLocators(param_1,uVar23);
    uVar20 = *(undefined8 *)(param_1 + 0xa8);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection(param_1);
    plVar22 = *(long **)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = plVar22;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar20;
    if ((bRam0000000003eb48a2 & 1) == 0) {
      func_0x00f78a20(0x3d33318);
      func_0x00f78a20(0x3d33320);
      func_0x00f78a20(0x3d33328);
      func_0x00f78a20(0x3d278d8);
      func_0x00f78a20(0x3d3cd70);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d24e08);
      func_0x00f78a20(0x3d62270);
      func_0x00f78a20(0x3d26ac8);
      bRam0000000003eb48a2 = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -200) = 0;
    *(undefined8 *)(param_1 + 0xa8) = uVar20;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x30), lVar7 != 0)) {
      /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x110),lVar7,uRam0000000003d3cd70);
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0xe8);
      *(undefined8 *)((long)register0x00000008 + -0xa0) =
           *(undefined8 *)((long)register0x00000008 + -0xf0);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0xd8);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0xe0);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)((long)register0x00000008 + -0xb8) =
           *(undefined8 *)((long)register0x00000008 + -0x108);
      *(undefined8 *)((long)register0x00000008 + -0xc0) =
           *(undefined8 *)((long)register0x00000008 + -0x110);
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0xf8);
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)((long)register0x00000008 + -0x100);
LAB_01478328:
      do {
        uVar10 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0xc0),
                                 uRam0000000003d33320);
        if ((uVar10 & 1) == 0) {
LAB_01478494:
          /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0xc0),uRam0000000003d33318);
          return;
        }
        lVar7 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___ctor(lVar7,0);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x014784dc;
        }
        *(long *)(lVar7 + 0x50) = param_1;
        uVar27 = *(undefined8 *)((long)register0x00000008 + -0x98);
        uVar14 = *(undefined8 *)((long)register0x00000008 + -0xa0);
        uVar23 = *(undefined8 *)((long)register0x00000008 + -0x88);
        uVar20 = *(undefined8 *)((long)register0x00000008 + -0x90);
        uVar29 = *(undefined8 *)((long)register0x00000008 + -0xa8);
        uVar28 = *(undefined8 *)((long)register0x00000008 + -0xb0);
        *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)((long)register0x00000008 + -0x80);
        *(undefined8 *)(lVar7 + 0x28) = uVar27;
        *(undefined8 *)(lVar7 + 0x20) = uVar14;
        *(undefined8 *)(lVar7 + 0x38) = uVar23;
        *(undefined8 *)(lVar7 + 0x30) = uVar20;
        *(undefined8 *)(lVar7 + 0x18) = uVar29;
        *(undefined8 *)(lVar7 + 0x10) = uVar28;
        *(undefined8 *)((long)register0x00000008 + -0x110) = *(undefined8 *)(lVar7 + 0x18);
        uVar20 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,
                                 (undefined1 *)((long)register0x00000008 + -0x110));
        uVar10 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -0x70),uVar20,0);
      } while ((uVar10 & 1) == 0);
      if (*(long *)(param_1 + 0x60) == 0) {
        func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x14784e0);
        (*pcVar1)();
      }
      puVar16 = (undefined8 *)(lVar7 + 0x10);
      puVar17 = (undefined8 *)(lVar7 + 0x48);
      uVar10 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(param_1 + 0x60),*puVar16,puVar17,0);
      if ((uVar10 & 1) == 0) goto LAB_01478494;
      uVar20 = *(undefined8 *)(param_1 + 0xa0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar20,0,0);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(param_1 + 0xa0) == 0) {
          func_0x00f78af4();
          goto code_r0x014784dc;
        }
        *(undefined8 *)((long)register0x00000008 + -200) =
             *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x18);
        *(undefined8 *)((long)register0x00000008 + -0x110) = *puVar16;
        uVar20 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,
                                 (undefined1 *)((long)register0x00000008 + -0x110));
        uVar10 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -200),uVar20,0);
        if ((uVar10 & 1) != 0) {
          uVar20 = *(undefined8 *)(param_1 + 0x38);
          uVar23 = *puVar16;
          uVar27 = *(undefined8 *)(lVar7 + 0x28);
          uVar14 = *(undefined8 *)(lVar7 + 0x20);
          *(undefined8 *)((long)register0x00000008 + -0x148) = *(undefined8 *)(lVar7 + 0x18);
          *(undefined8 *)((long)register0x00000008 + -0x150) = uVar23;
          *(undefined8 *)((long)register0x00000008 + -0x138) = uVar27;
          *(undefined8 *)((long)register0x00000008 + -0x140) = uVar14;
          uVar23 = *(undefined8 *)(lVar7 + 0x30);
          *(undefined8 *)((long)register0x00000008 + -0x128) = *(undefined8 *)(lVar7 + 0x38);
          *(undefined8 *)((long)register0x00000008 + -0x130) = uVar23;
          *(undefined8 *)((long)register0x00000008 + -0x120) = *(undefined8 *)(lVar7 + 0x40);
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                    (param_1,uVar20,(undefined1 *)((long)register0x00000008 + -0x150));
          goto LAB_01478328;
        }
      }
      uVar23 = *puVar17;
      uVar20 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar20,lVar7,uRam0000000003d62270,0);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AddBaseListener(param_1,uVar23,uVar20,*puVar17);
      goto LAB_01478328;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar8 = (long *)___cxa_begin_catch();
      param_1 = *plVar8;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0xc0),uRam0000000003d33318);
      if (param_1 == 0) {
        return;
      }
      func_0x00f78ac0(param_1,0);
    }
    lVar7 = __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -400) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x188) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x180) = plVar22;
    *(undefined8 *)((long)register0x00000008 + -0x178) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x170) = uVar20;
    *(long *)((long)register0x00000008 + -0x168) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x160) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x158) =
         Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
    lVar21 = 0x3eb4000;
    if ((bRam0000000003eb48a3 & 1) == 0) {
      func_0x00f78a20(0x3d33318);
      func_0x00f78a20(0x3d33320);
      func_0x00f78a20(0x3d33328);
      func_0x00f78a20(0x3d3cd70);
      func_0x00f78a20(0x3d24e08);
      bRam0000000003eb48a3 = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x1f0) = 0;
    if ((*(long *)(lVar7 + 0x40) != 0) &&
       (lVar9 = *(long *)(*(long *)(lVar7 + 0x40) + 0x30), lVar9 != 0)) {
      plVar22 = (long *)0x3d24e08;
      /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x240),lVar9,uRam0000000003d3cd70);
      *(undefined8 *)((long)register0x00000008 + -0x1b8) =
           *(undefined8 *)((long)register0x00000008 + -0x218);
      *(undefined8 *)((long)register0x00000008 + -0x1c0) =
           *(undefined8 *)((long)register0x00000008 + -0x220);
      *(undefined8 *)((long)register0x00000008 + -0x1a8) =
           *(undefined8 *)((long)register0x00000008 + -0x208);
      *(undefined8 *)((long)register0x00000008 + -0x1b0) =
           *(undefined8 *)((long)register0x00000008 + -0x210);
      *(undefined8 *)((long)register0x00000008 + -0x1a0) =
           *(undefined8 *)((long)register0x00000008 + -0x200);
      *(undefined8 *)((long)register0x00000008 + -0x1d8) =
           *(undefined8 *)((long)register0x00000008 + -0x238);
      *(undefined8 *)((long)register0x00000008 + -0x1e0) =
           *(undefined8 *)((long)register0x00000008 + -0x240);
      *(undefined8 *)((long)register0x00000008 + -0x1c8) =
           *(undefined8 *)((long)register0x00000008 + -0x228);
      *(undefined8 *)((long)register0x00000008 + -0x1d0) =
           *(undefined8 *)((long)register0x00000008 + -0x230);
LAB_01478624:
      do {
        uVar10 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0x1e0),
                                 uRam0000000003d33320);
        if ((uVar10 & 1) == 0) goto LAB_01478690;
        uVar20 = *(undefined8 *)((long)register0x00000008 + -0x1d0);
        *(undefined8 *)((long)register0x00000008 + -0x240) =
             *(undefined8 *)((long)register0x00000008 + -0x1c8);
        uVar23 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,
                                 (undefined1 *)((long)register0x00000008 + -0x240));
        uVar10 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar7 + 0xa8,uVar23,0);
        if ((uVar10 & 1) != 0) {
          if (*(long *)(lVar7 + 0x60) == 0) {
            func_0x00f78af4();
          }
          else {
            uVar10 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar7 + 0x60),uVar20,
                                     (undefined1 *)((long)register0x00000008 + -0x1e8),0);
            if ((uVar10 & 1) == 0) {
              uVar18 = 0x86;
              goto code_r0x0147869c;
            }
            if (*(long *)((long)register0x00000008 + -0x1e8) != 0) {
              Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                        (lVar7,*(undefined8 *)(*(long *)((long)register0x00000008 + -0x1e8) + 0x18))
              ;
              goto LAB_01478624;
            }
            func_0x00f78af4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1478708);
          (*pcVar1)();
        }
      } while( true );
    }
    func_0x00f78af4();
    if (extraout_w1_00 == 1) {
      plVar8 = (long *)___cxa_begin_catch();
      lVar21 = *plVar8;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x1e0),*unaff_x23);
      if (lVar21 == 0) goto code_r0x014786b8;
      func_0x00f78ac0(lVar21,0);
    }
    lVar9 = __Unwind_Resume();
    *(long *)((long)register0x00000008 + -0x260) = lVar21;
    *(long *)((long)register0x00000008 + -600) = lVar7;
    *(undefined1 **)((long)register0x00000008 + -0x250) =
         (undefined1 *)((long)register0x00000008 + -0x160);
    *(code **)((long)register0x00000008 + -0x248) =
         Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
              ((undefined1 *)((long)register0x00000008 + -0x2c0),lVar9,*(undefined8 *)(lVar9 + 0xa8)
              );
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x288);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x290);
    extraout_x8[5] = *(undefined8 *)((long)register0x00000008 + -0x298);
    extraout_x8[4] = uVar20;
    extraout_x8[7] = uVar14;
    extraout_x8[6] = uVar23;
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x280);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x268);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x270);
    extraout_x8[9] = *(undefined8 *)((long)register0x00000008 + -0x278);
    extraout_x8[8] = uVar20;
    extraout_x8[0xb] = uVar14;
    extraout_x8[10] = uVar23;
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x2a8);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x2b0);
    extraout_x8[1] = *(undefined8 *)((long)register0x00000008 + -0x2b8);
    *extraout_x8 = uVar20;
    extraout_x8[3] = uVar14;
    extraout_x8[2] = uVar23;
    return;
  }
Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteUseUsableCondition:
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar25 = (undefined1 *)((long)register0x00000008 + -0x10);
  lVar7 = 0x3eb4000;
  if ((bRam0000000003eb4ec2 & 1) == 0) {
    func_0x00f78a20(0x3d527e8);
    func_0x00f78a20(0x3d527f8);
    func_0x00f78a20(0x3d52800);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ec2 = 1;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
code_r0x01535ac8:
    lVar21 = func_0x00f78af4();
    *(long *)((long)register0x00000008 + -0x90) = lVar7;
    *(long *)((long)register0x00000008 + -0x88) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x80) = puVar25;
    *(undefined **)((long)register0x00000008 + -0x78) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterHitPlayerEndTrigger;
    uVar10 = 0;
    iVar6 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
    if (iVar6 == 0) {
      return;
    }
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar20;
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)((long)register0x00000008 + -0x88);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    puVar25 = (undefined1 *)((long)register0x00000008 + -0x80);
    uVar11 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar21,0);
    if ((uVar11 & 1) == 0) {
      puVar25 = *(undefined1 **)((long)register0x00000008 + -0x80);
      puVar26 = *(undefined **)((long)register0x00000008 + -0x78);
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x90);
      lVar7 = *(long *)((long)register0x00000008 + -0x88);
      lVar9 = lVar21;
    }
    else {
      if (*(long *)(lVar21 + 0xb8) != 0) {
        Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsedUsables(*(long *)(lVar21 + 0xb8),0);
        unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x80);
        unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x78);
        unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x90);
        unaff_x19 = *(long *)((long)register0x00000008 + -0x88);
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
        param_1 = lVar21;
        goto Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RetrySection;
      }
      puVar26 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteHitPlayerCondition;
      lVar9 = func_0x00f78af4();
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x90);
      lVar7 = lVar21;
    }
code_r0x01535b58:
    puVar4 = puVar3 + -0x60;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(long *)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = uVar20;
    *(long *)(puVar3 + -0x18) = lVar7;
    *(undefined1 **)(puVar3 + -0x10) = puVar25;
    *(undefined **)(puVar3 + -8) = puVar26;
    puVar25 = puVar3 + -0x10;
    lVar7 = 0x3eb4000;
    if ((bRam0000000003eb4ec4 & 1) == 0) {
      func_0x00f78a20(0x3d527d0);
      func_0x00f78a20(0x3d527f0);
      func_0x00f78a20(0x3d278d8);
      func_0x00f78a20(0x3d27728);
      bRam0000000003eb4ec4 = 1;
    }
    lVar21 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar9);
    if (lVar21 != 0) {
      unaff_x22 = 0x3d52000;
      uVar20 = *(undefined8 *)(lVar21 + 0xa0);
      uVar14 = *(undefined8 *)(lVar21 + 0xb8);
      uVar23 = *(undefined8 *)(lVar21 + 0xb0);
      *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(lVar21 + 0xa8);
      *(undefined8 *)(puVar3 + -0x60) = uVar20;
      *(undefined8 *)(puVar3 + -0x48) = uVar14;
      *(undefined8 *)(puVar3 + -0x50) = uVar23;
      uVar20 = *(undefined8 *)(lVar21 + 0xc0);
      *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(lVar21 + 200);
      *(undefined8 *)(puVar3 + -0x40) = uVar20;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar9,puVar3 + -0x60,0);
      *(undefined4 *)(lVar9 + 0xe8) = 0;
      lVar7 = *(long *)(lVar9 + 0xd8);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      uVar10 = uRam0000000003d527d0;
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar9,uRam0000000003d527d0,0);
      if (lVar7 != 0) {
        uVar10 = 0;
        /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar7,unaff_x21);
        if (*(long *)(lVar9 + 0x10) != 0) {
          unaff_x22 = 0x3d52000;
          plVar22 = *(long **)(*(long *)(lVar9 + 0x10) + 0x40);
          unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
          auVar35._8_8_ = unaff_x21;
          auVar35._0_8_ = plVar22;
          uVar23 = 0;
          uVar10 = uRam0000000003d527f0;
          /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar9,uRam0000000003d527f0,0);
          lVar7 = 0;
          if (plVar22 != (long *)0x0) {
            puVar26 = &UNK_01535c74;
            goto code_r0x0159d844;
          }
        }
      }
    }
    auVar32 = func_0x00f78af4();
    lVar21 = auVar32._0_8_;
    puVar2 = puVar3 + -0xb0;
    *(long *)(puVar3 + -0x80) = lVar7;
    *(long *)(puVar3 + -0x78) = lVar9;
    *(undefined1 **)(puVar3 + -0x70) = puVar25;
    *(undefined **)(puVar3 + -0x68) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnPickup;
    if (auVar32._8_8_ != 0) {
      if (*(long *)(auVar32._8_8_ + 0x10) != *(long *)(lVar21 + 0x38)) {
        return;
      }
      lVar12 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar21);
      lVar9 = lVar21;
      if (lVar12 != 0) {
        uVar20 = *(undefined8 *)(lVar12 + 0x40);
        uVar14 = *(undefined8 *)(lVar12 + 0x58);
        uVar23 = *(undefined8 *)(lVar12 + 0x50);
        *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(lVar12 + 0x48);
        *(undefined8 *)(puVar3 + -0xb0) = uVar20;
        *(undefined8 *)(puVar3 + -0x98) = uVar14;
        *(undefined8 *)(puVar3 + -0xa0) = uVar23;
        uVar20 = *(undefined8 *)(lVar12 + 0x60);
        *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(lVar12 + 0x68);
        *(undefined8 *)(puVar3 + -0x90) = uVar20;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar21,puVar3 + -0xb0,0);
        if (*(int *)(lVar21 + 0xe8) != 1) {
          return;
        }
        Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompletePickupCondition(lVar21);
        return;
      }
    }
    unaff_x19 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0xe0) = unaff_x22;
    *(long *)(puVar3 + -0xd8) = unaff_x21;
    *(long *)(puVar3 + -0xd0) = lVar7;
    *(long *)(puVar3 + -200) = lVar9;
    *(undefined1 **)(puVar3 + -0xc0) = puVar3 + -0x70;
    *(undefined **)(puVar3 + -0xb8) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartUseUsableSection;
    unaff_x20 = 0x3eb4000;
    if ((bRam0000000003eb4ec1 & 1) == 0) {
      func_0x00f78a20(0x3d52800);
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb4ec1 = 1;
    }
    *(undefined4 *)(unaff_x19 + 0xe8) = 2;
    lVar7 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(unaff_x19);
    if (lVar7 != 0) {
      uVar10 = (ulong)*(uint *)(lVar7 + 0x14c);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                (unaff_x19,*(undefined8 *)(lVar7 + 0x130),uVar10,*(char *)(lVar7 + 0x148) != '\0',0)
      ;
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        unaff_x22 = 0x3d52000;
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x40);
        unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
        auVar33._8_8_ = unaff_x21;
        auVar33._0_8_ = lVar7;
        uVar10 = uRam0000000003d52800;
        /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,unaff_x19,uRam0000000003d52800,0);
        unaff_x20 = 0;
        if (lVar7 != 0) {
          puVar25 = *(undefined1 **)(puVar3 + -0xc0);
          puVar26 = *(undefined **)(puVar3 + -0xb8);
          plVar22 = *(long **)(puVar3 + -0xd0);
          uVar23 = *(undefined8 *)(puVar3 + -200);
          uVar20 = *(undefined8 *)(puVar3 + -0xe0);
          lVar7 = *(long *)(puVar3 + -0xd8);
          goto code_r0x0159d188;
        }
      }
    }
    auVar32 = func_0x00f78af4();
    param_1 = auVar32._0_8_;
    *(undefined1 **)(puVar3 + -0xf0) = puVar3 + -0xc0;
    *(undefined **)(puVar3 + -0xe8) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnUse;
    if (auVar32._8_8_ == 0) {
      lVar7 = func_0x00f78af4();
      *(undefined8 *)(puVar3 + -0x120) = unaff_x22;
      *(long *)(puVar3 + -0x118) = unaff_x21;
      *(undefined8 *)(puVar3 + -0x110) = unaff_x20;
      *(long *)(puVar3 + -0x108) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x100) = puVar3 + -0xf0;
      *(undefined **)(puVar3 + -0xf8) =
           &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartHitPlayerSection;
      uVar20 = 0x3eb4000;
      if ((bRam0000000003eb4ec3 & 1) == 0) {
        func_0x00f78a20(0x3d527f0);
        func_0x00f78a20(0x3d27728);
        bRam0000000003eb4ec3 = 1;
      }
      lVar21 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar7);
      if (lVar21 == 0) goto code_r0x01535ee8;
      uVar10 = (ulong)*(uint *)(lVar21 + 0x1ac);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                (lVar7,*(undefined8 *)(lVar21 + 400),uVar10,*(char *)(lVar21 + 0x1a8) != '\0',0);
      *(undefined4 *)(lVar7 + 0xe8) = 3;
      if (*(long *)(lVar7 + 0x10) == 0) goto code_r0x01535ee8;
      unaff_x22 = 0x3d52000;
      lVar21 = *(long *)(*(long *)(lVar7 + 0x10) + 0x40);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
      uVar10 = uRam0000000003d527f0;
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar7,uRam0000000003d527f0,0);
      uVar20 = 0;
      if (lVar21 == 0) goto code_r0x01535ee8;
      *(undefined8 *)(puVar3 + -0x120) = *(undefined8 *)(puVar3 + -0x120);
      *(undefined8 *)(puVar3 + -0x118) = *(undefined8 *)(puVar3 + -0x118);
      *(undefined8 *)(puVar3 + -0x110) = *(undefined8 *)(puVar3 + -0x110);
      *(undefined8 *)(puVar3 + -0x108) = *(undefined8 *)(puVar3 + -0x108);
      *(undefined8 *)(puVar3 + -0x100) = *(undefined8 *)(puVar3 + -0x100);
      *(undefined8 *)(puVar3 + -0xf8) = *(undefined8 *)(puVar3 + -0xf8);
      if ((bRam0000000003eb51f9 & 1) == 0) {
        func_0x00f78a20(0x3d27728,unaff_x21,0);
        bRam0000000003eb51f9 = 1;
      }
      plVar22 = (long *)(lVar21 + 0x98);
      lVar7 = *plVar22;
      while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,unaff_x21,0), plVar8 == (long *)0x0 ||
             (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
        lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
        bVar5 = lVar7 == lVar21;
        lVar7 = lVar21;
        if (bVar5) {
          return;
        }
      }
      auVar32 = func_0x00f78e5c(plVar8);
      uVar23 = auVar32._8_8_;
      puVar2 = puVar3 + -0x150;
      *(undefined8 *)(puVar3 + -0x150) = 0x3d27728;
      *(long *)(puVar3 + -0x148) = lVar7;
      *(long **)(puVar3 + -0x140) = plVar22;
      *(long *)(puVar3 + -0x138) = unaff_x21;
      *(undefined1 **)(puVar3 + -0x130) = puVar3 + -0x100;
      *(undefined **)(puVar3 + -0x128) =
           &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
      puVar25 = puVar3 + -0x130;
      if ((bRam0000000003eb51fb & 1) == 0) {
        func_0x00f78a20(0x3d27730);
        bRam0000000003eb51fb = 1;
      }
      uVar20 = 0x3d27730;
      plVar22 = (long *)(auVar32._0_8_ + 0xa0);
      lVar7 = *plVar22;
      while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,uVar23,0), plVar8 == (long *)0x0 ||
             (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
        lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
        bVar5 = lVar7 == lVar21;
        lVar7 = lVar21;
        if (bVar5) {
          return;
        }
      }
      puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
      auVar33 = func_0x00f78e5c(plVar8);
code_r0x0159d188:
      *(undefined8 *)(puVar2 + -0x30) = uVar20;
      *(long *)(puVar2 + -0x28) = lVar7;
      *(long **)(puVar2 + -0x20) = plVar22;
      *(undefined8 *)(puVar2 + -0x18) = uVar23;
      *(undefined1 **)(puVar2 + -0x10) = puVar25;
      *(undefined **)(puVar2 + -8) = puVar26;
      if ((bRam0000000003eb51f3 & 1) == 0) {
        func_0x00f78a20(0x3d27718);
        bRam0000000003eb51f3 = 1;
      }
      plVar22 = (long *)(auVar33._0_8_ + 0x80);
      lVar7 = *plVar22;
      while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,auVar33._8_8_,0), plVar8 == (long *)0x0 ||
             (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
        lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
        bVar5 = lVar7 == lVar21;
        lVar7 = lVar21;
        if (bVar5) {
          return;
        }
      }
      auVar32 = func_0x00f78e5c(plVar8);
      *(undefined8 *)(puVar2 + -0x60) = 0x3d27718;
      *(long *)(puVar2 + -0x58) = lVar7;
      *(long **)(puVar2 + -0x50) = plVar22;
      *(long *)(puVar2 + -0x48) = auVar33._8_8_;
      *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x38) =
           &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
      if ((bRam0000000003eb51fd & 1) == 0) {
        func_0x00f78a20(0x3d27738);
        bRam0000000003eb51fd = 1;
      }
      plVar22 = (long *)(auVar32._0_8_ + 0xa8);
      lVar7 = *plVar22;
      while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,auVar32._8_8_,0), plVar8 == (long *)0x0 ||
             (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
        lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
        bVar5 = lVar7 == lVar21;
        lVar7 = lVar21;
        if (bVar5) {
          return;
        }
      }
      auVar34 = func_0x00f78e5c(plVar8);
      *(undefined8 *)(puVar2 + -0x90) = 0x3d27738;
      *(long *)(puVar2 + -0x88) = lVar7;
      *(long **)(puVar2 + -0x80) = plVar22;
      *(long *)(puVar2 + -0x78) = auVar32._8_8_;
      *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x40;
      *(undefined **)(puVar2 + -0x68) =
           &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
      if ((bRam0000000003eb51f5 & 1) == 0) {
        func_0x00f78a20(0x3d27700);
        bRam0000000003eb51f5 = 1;
      }
      plVar22 = (long *)(auVar34._0_8_ + 0x88);
      lVar7 = *plVar22;
      while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,auVar34._8_8_,0), plVar8 == (long *)0x0 ||
             (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
        lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
        bVar5 = lVar7 == lVar21;
        lVar7 = lVar21;
        if (bVar5) {
          return;
        }
      }
      auVar32 = func_0x00f78e5c(plVar8);
      puVar3 = puVar2 + -0xe0;
      *(undefined8 *)(puVar2 + -0xe0) = unaff_x26;
      *(undefined8 *)(puVar2 + -0xd8) = unaff_x25;
      *(undefined8 *)(puVar2 + -0xd0) = unaff_x24;
      *(undefined8 **)(puVar2 + -200) = unaff_x23;
      *(undefined8 *)(puVar2 + -0xc0) = 0x3d27700;
      *(long *)(puVar2 + -0xb8) = lVar7;
      *(long **)(puVar2 + -0xb0) = plVar22;
      *(long *)(puVar2 + -0xa8) = auVar34._8_8_;
      *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
      *(code **)(puVar2 + -0x98) = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
      puVar25 = puVar2 + -0xa0;
      unaff_x23 = (undefined8 *)0x3d27718;
      unaff_x24 = 0x3d570f0;
      if ((bRam0000000003eb51b7 & 1) == 0) {
        func_0x00f78a20(0x3d524e0);
        func_0x00f78a20(0x3d524e8);
        func_0x00f78a20(0x3d524f0);
        func_0x00f78a20(0x3d524f8);
        func_0x00f78a20(0x3d570d0);
        func_0x00f78a20(0x3d570f0);
        func_0x00f78a20(0x3d27700);
        func_0x00f78a20(0x3d27718);
        func_0x00f78a20(0x3d27728);
        func_0x00f78a20(0x3d27730);
        func_0x00f78a20(0x3d27738);
        bRam0000000003eb51b7 = 1;
      }
      unaff_x21 = *(long *)(auVar32._0_8_ + 0x40);
      uVar20 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
      auVar34._8_8_ = uVar20;
      auVar34._0_8_ = unaff_x21;
      uVar23 = 0;
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(uVar20,auVar32._0_8_,uRam0000000003d570f0,0);
      if (unaff_x21 == 0) {
        puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
        auVar34 = func_0x00f78af4();
      }
      else {
        unaff_x24 = 0x3d27000;
        unaff_x25 = 0x3d52000;
        puVar26 = (undefined *)0x159d470;
        puVar3 = puVar2 + -0xe0;
      }
      goto code_r0x0159d5c4;
    }
    if (*(long *)(auVar32._8_8_ + 0x10) != *(long *)(param_1 + 0x38)) {
      return;
    }
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0xe0);
    unaff_x29 = *(undefined8 *)(puVar3 + -0xf0);
    unaff_x30 = *(undefined8 *)(puVar3 + -0xe8);
    goto Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteUseUsableCondition;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x100) = 1;
  lVar21 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(param_1);
  if (lVar21 == 0) goto code_r0x01535ac8;
  uVar20 = *(undefined8 *)(lVar21 + 0x70);
  uVar14 = *(undefined8 *)(lVar21 + 0x88);
  uVar23 = *(undefined8 *)(lVar21 + 0x80);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)(lVar21 + 0x78);
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar20;
  *(undefined8 *)((long)register0x00000008 + -0x58) = uVar14;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar23;
  uVar20 = *(undefined8 *)(lVar21 + 0x90);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(lVar21 + 0x98);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar20;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
            (param_1,(undefined1 *)((long)register0x00000008 + -0x70),0);
  lVar7 = *(long *)(param_1 + 0xd0);
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,param_1,uRam0000000003d527e8,0);
  unaff_x22 = 0x3d52000;
  if (lVar7 == 0) goto code_r0x01535ac8;
  /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar7,unaff_x21,0);
  if (*(long *)(param_1 + 0x10) == 0) goto code_r0x01535ac8;
  uVar20 = 0x3d27718;
  unaff_x23 = (undefined8 *)0x3d52000;
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,param_1,uRam0000000003d527f8,0);
  unaff_x22 = uVar20;
  if (lVar7 == 0) goto code_r0x01535ac8;
  /*Atlas.Gameplay.Player.GameContextPlayerManager$$remove_OnUsableAttached*/ func_0x015a5cc8(lVar7,unaff_x21,0);
  if (*(long *)(param_1 + 0x10) == 0) goto code_r0x01535ac8;
  unaff_x23 = (undefined8 *)0x3d52000;
  lVar21 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
  auVar32._8_8_ = lVar21;
  auVar32._0_8_ = param_1;
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar34._8_8_ = unaff_x21;
  auVar34._0_8_ = lVar21;
  uVar23 = 0;
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,param_1,uRam0000000003d52800,0);
  lVar7 = 0;
  unaff_x22 = 0x3d27718;
  if (lVar21 == 0) goto code_r0x01535ac8;
  puVar26 = &UNK_01535aa8;
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x70);
code_r0x0159d5c4:
  *(undefined8 *)(puVar3 + -0x30) = uVar20;
  *(long *)(puVar3 + -0x28) = unaff_x21;
  *(long *)(puVar3 + -0x20) = auVar32._8_8_;
  *(long *)(puVar3 + -0x18) = auVar32._0_8_;
  *(undefined1 **)(puVar3 + -0x10) = puVar25;
  *(undefined **)(puVar3 + -8) = puVar26;
  if ((bRam0000000003eb51f4 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f4 = 1;
  }
  plVar22 = (long *)(auVar34._0_8_ + 0x80);
  lVar7 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar34._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar8);
  *(undefined8 *)(puVar3 + -0x60) = 0x3d27718;
  *(long *)(puVar3 + -0x58) = lVar7;
  *(long **)(puVar3 + -0x50) = plVar22;
  *(long *)(puVar3 + -0x48) = auVar34._8_8_;
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x38) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar22 = (long *)(auVar32._0_8_ + 0x88);
  lVar7 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar32._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  auVar34 = func_0x00f78e5c(plVar8);
  *(undefined8 *)(puVar3 + -0x90) = 0x3d27700;
  *(long *)(puVar3 + -0x88) = lVar7;
  *(long **)(puVar3 + -0x80) = plVar22;
  *(long *)(puVar3 + -0x78) = auVar32._8_8_;
  *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
  *(undefined **)(puVar3 + -0x68) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar22 = (long *)(auVar34._0_8_ + 0xa8);
  lVar7 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar34._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar8);
  lVar9 = auVar32._8_8_;
  puVar4 = puVar3 + -0xc0;
  *(undefined8 *)(puVar3 + -0xc0) = 0x3d27738;
  *(long *)(puVar3 + -0xb8) = lVar7;
  *(long **)(puVar3 + -0xb0) = plVar22;
  *(long *)(puVar3 + -0xa8) = auVar34._8_8_;
  *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x70;
  *(undefined **)(puVar3 + -0x98) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  puVar25 = puVar3 + -0xa0;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  unaff_x22 = 0x3d27730;
  plVar22 = (long *)(auVar32._0_8_ + 0xa0);
  unaff_x21 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x21,lVar9,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar7 = func_0x00ff0f44(plVar22,plVar8,unaff_x21);
    bVar5 = unaff_x21 == lVar7;
    unaff_x21 = lVar7;
    if (bVar5) {
      return;
    }
  }
  puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  auVar35 = func_0x00f78e5c(plVar8);
code_r0x0159d844:
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(long *)(puVar4 + -0x28) = unaff_x21;
  *(long **)(puVar4 + -0x20) = plVar22;
  *(long *)(puVar4 + -0x18) = lVar9;
  *(undefined1 **)(puVar4 + -0x10) = puVar25;
  *(undefined **)(puVar4 + -8) = puVar26;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar22 = (long *)0x3d27728;
  plVar8 = (long *)(auVar35._0_8_ + 0x98);
  lVar7 = *plVar8;
  while( true ) {
    puVar16 = (undefined8 *)0x0;
    plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar35._8_8_);
    if ((plVar13 != (long *)0x0) && (*plVar13 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar21 = func_0x00ff0f44(plVar8,plVar13,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  lVar21 = func_0x00f78e5c(plVar13);
  *(undefined8 *)(puVar4 + -0x80) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x78) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x70) = unaff_x24;
  *(undefined8 **)(puVar4 + -0x68) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x60) = 0x3d27728;
  *(long *)(puVar4 + -0x58) = lVar7;
  *(long **)(puVar4 + -0x50) = plVar8;
  *(long *)(puVar4 + -0x48) = auVar35._8_8_;
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x38) = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar7 = 0x3eb5000;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar9 = *(long *)(lVar21 + 0x28);
  if (lVar9 != 0) {
    plVar22 = (long *)(lVar21 + 0x10);
    uVar19 = *(uint *)(lVar9 + 0x18);
    if ((int)uVar19 < 1) {
code_r0x0159d9f0:
      if (((*(long *)(lVar21 + 0x20) == 0) ||
          (lVar12 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar12 == 0)) ||
         (unaff_x23 = *(undefined8 **)(lVar12 + 0x10), unaff_x23 == (undefined8 *)0x0))
      goto code_r0x0159db7c;
      uVar20 = 0x3d1b4e8;
      unaff_x24 = 0x3d1b4e8;
      lVar7 = unaff_x23[3];
      lVar9 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
      uVar23 = uRam0000000003d2a1d8;
      /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar9,lVar21,uRam0000000003d57238,uRam0000000003d2a1d8);
      puVar16 = (undefined8 *)0x0;
      plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,lVar9);
      if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
        unaff_x23[3] = plVar8;
        if ((*(long *)(lVar21 + 0x20) == 0) ||
           ((lVar12 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar12 == 0 ||
            (unaff_x23 = *(undefined8 **)(lVar12 + 0x10), unaff_x23 == (undefined8 *)0x0))))
        goto code_r0x0159db7c;
        uVar20 = 0x3d1b3b0;
        unaff_x24 = 0x3d1b3b0;
        lVar7 = unaff_x23[0xe];
        lVar9 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
        uVar23 = uRam0000000003d29f28;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar9,lVar21,uRam0000000003d57240,uRam0000000003d29f28);
        puVar16 = (undefined8 *)0x0;
        plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,lVar9);
        if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
          unaff_x23[0xe] = plVar8;
          if (((*(long *)(lVar21 + 0x20) == 0) ||
              (lVar12 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar12 == 0)) ||
             (unaff_x23 = *(undefined8 **)(lVar12 + 0x10), unaff_x23 == (undefined8 *)0x0))
          goto code_r0x0159db7c;
          uVar20 = 0x3d1b4e0;
          lVar7 = unaff_x23[5];
          lVar9 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
          uVar23 = uRam0000000003d2a1c8;
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar9,lVar21,uRam0000000003d57230,uRam0000000003d2a1c8);
          puVar16 = (undefined8 *)0x0;
          plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,lVar9);
          if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
            unaff_x23[5] = plVar8;
            *(undefined1 *)(lVar21 + 0x50) = 0;
            *(undefined8 *)(lVar21 + 0x18) = 0;
            *plVar22 = 0;
            *(undefined8 *)(lVar21 + 0x28) = 0;
            *(undefined8 *)(lVar21 + 0x20) = 0;
            return;
          }
        }
      }
      goto code_r0x0159db8c;
    }
    unaff_x23 = (undefined8 *)0x0;
    unaff_x24 = 0x3d43378;
    while( true ) {
      uVar24 = (uint)unaff_x23;
      uVar20 = unaff_x24;
      if (uVar19 <= uVar24) goto code_r0x0159db80;
      if (*plVar22 == 0) break;
      lVar7 = *(long *)(lVar9 + (long)(int)uVar24 * 8 + 0x20);
      puVar16 = puRam0000000003d43378;
      /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar22,lVar7);
      if (lVar7 == 0) break;
      /*Atlas.Gameplay.Player.GameContextPlayer$$DeInit*/ func_0x015a5404(lVar7);
      unaff_x23 = (undefined8 *)(ulong)(uVar24 + 1);
      uVar19 = *(uint *)(lVar9 + 0x18);
      if ((int)uVar19 <= (int)(uVar24 + 1)) goto code_r0x0159d9f0;
    }
  }
code_r0x0159db7c:
  func_0x00f78af4();
  uVar20 = unaff_x24;
code_r0x0159db80:
  uVar14 = func_0x00f78b24();
  func_0x00f78ac0(uVar14,0);
code_r0x0159db8c:
  auVar32 = func_0x00f78e5c();
  puVar15 = auVar32._8_8_;
  plVar8 = auVar32._0_8_;
  *(undefined8 *)(puVar4 + -0xc0) = uVar20;
  *(undefined8 **)(puVar4 + -0xb8) = unaff_x23;
  *(long **)(puVar4 + -0xb0) = plVar22;
  *(long *)(puVar4 + -0xa8) = lVar9;
  *(long *)(puVar4 + -0xa0) = lVar7;
  *(long *)(puVar4 + -0x98) = lVar21;
  *(undefined1 **)(puVar4 + -0x90) = puVar4 + -0x40;
  *(code **)(puVar4 + -0x88) = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar17 = puVar16;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar8[3] != 0) &&
      (puVar17 = puVar16, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar8[3],puVar15,puVar16,uVar23,0),
      puVar16 != (undefined8 *)0x0)) && (lVar7 = puVar16[2], lVar7 != 0)) {
    uVar20 = *(undefined8 *)(lVar7 + 0x48);
    uVar27 = *(undefined8 *)(lVar7 + 0x60);
    uVar14 = *(undefined8 *)(lVar7 + 0x58);
    *(undefined8 *)(puVar4 + -0xd8) = *(undefined8 *)(lVar7 + 0x50);
    *(undefined8 *)(puVar4 + -0xe0) = uVar20;
    *(undefined8 *)(puVar4 + -200) = uVar27;
    *(undefined8 *)(puVar4 + -0xd0) = uVar14;
    iVar6 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar4 + -0xe0,0);
    if ((iVar6 == 0) || (puVar16 == puVar15)) {
      return;
    }
    iVar6 = (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
    if ((plVar8[0x18] != 0) && (lVar7 = *(long *)(plVar8[0x18] + 0x20), lVar7 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar4 + -0xf8,lVar7,0);
      *(int *)(puVar16 + 0xf) = *(int *)(puVar16 + 0xf) + iVar6;
      uVar20 = *(undefined8 *)(puVar4 + -0xf8);
      puVar16[0x11] = *(undefined8 *)(puVar4 + -0xf0);
      puVar16[0x10] = uVar20;
      puVar16[0x12] = *(undefined8 *)(puVar4 + -0xe8);
      if (puVar16[2] != 0) {
        if (*(int *)(puVar16[2] + 0x50) == 0) {
          uVar20 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
          puVar17 = (undefined8 *)0x0;
          iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar20,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar6 != 0) {
            if (plVar8[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar8[3],*(undefined4 *)(puVar16 + 0xf),0);
          }
        }
        if (plVar8[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar8[0x46],puVar15,puVar16,uVar23,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar36 = func_0x00f78af4();
  lVar7 = auVar36._0_8_;
  iVar6 = *(int *)(lVar7 + 0x78);
  uVar14 = puVar17[1];
  uVar23 = *puVar17;
  *(undefined8 *)(puVar4 + -0x118) = uVar14;
  *(undefined8 *)(puVar4 + -0x120) = uVar23;
  uVar20 = puVar17[2];
  *(undefined8 *)(puVar4 + -0x110) = uVar20;
  *(int *)(lVar7 + 0x78) = iVar6 + auVar36._8_4_;
  *(undefined8 *)(lVar7 + 0x88) = uVar14;
  *(undefined8 *)(lVar7 + 0x80) = uVar23;
  *(undefined8 *)(lVar7 + 0x90) = uVar20;
  return;
code_r0x01535ee8:
  lVar9 = func_0x00f78af4();
  *(undefined1 **)(puVar3 + -0x130) = puVar3 + -0x100;
  *(undefined **)(puVar3 + -0x128) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnHit;
  if (uVar10 == 0) {
    func_0x00f78af4();
    return;
  }
  if (*(long *)(uVar10 + 0x10) != *(long *)(lVar9 + 0x38)) {
    return;
  }
  puVar25 = *(undefined1 **)(puVar3 + -0x130);
  puVar26 = *(undefined **)(puVar3 + -0x128);
  puVar3 = puVar3 + -0x120;
  goto code_r0x01535b58;
LAB_01478690:
  uVar18 = 0x7b;
code_r0x0147869c:
  *(undefined4 *)((long)register0x00000008 + -0x1f8) = uVar18;
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x1e0),uRam0000000003d33318);
  if (*(int *)((long)register0x00000008 + -0x1f8) == 0x86) {
    return;
  }
code_r0x014786b8:
  lVar21 = *plVar22;
  if (((*(ushort *)(lVar21 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar21 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar21 = *plVar22;
  }
  *(undefined8 *)(lVar7 + 0xa8) = **(undefined8 **)(lVar21 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x15358ec | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.OnFailedUseUsableSection
// ============================================================

/* WARNING: Possible PIC construction at 0x01535aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x01535c74) */
/* WARNING: Removing unreachable block (ram,0x01535aa8) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnFailedUseUsableSection(long param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined8 *extraout_x8;
  long unaff_x19;
  undefined8 uVar20;
  long lVar21;
  undefined8 unaff_x20;
  long *plVar22;
  long unaff_x21;
  undefined8 uVar23;
  undefined8 unaff_x22;
  uint uVar24;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined1 *puVar25;
  undefined8 unaff_x30;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  
  uVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(param_1,0);
  if ((uVar10 & 1) != 0) {
Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RetrySection:
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
              ((undefined1 *)((long)register0x00000008 + -0x90),param_1,
               *(undefined8 *)(param_1 + 0xa8));
    *(undefined8 *)((long)register0x00000008 + -0xd8) =
         *(undefined8 *)((long)register0x00000008 + -0x88);
    *(undefined8 *)((long)register0x00000008 + -0xe0) =
         *(undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -200) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    *(undefined8 *)((long)register0x00000008 + -0xd0) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x58);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x60);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x48);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x50);
    *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar29;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar28;
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar27;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar14;
    uVar31 = *(undefined8 *)((long)register0x00000008 + -0x68);
    uVar30 = *(undefined8 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar31;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar30;
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x40);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x38);
    *(undefined8 *)((long)register0x00000008 + -0x68) = uVar31;
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar30;
    *(undefined8 *)((long)register0x00000008 + -0x58) = uVar29;
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar28;
    *(undefined8 *)((long)register0x00000008 + -0x48) = uVar27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar14;
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)((long)register0x00000008 + -0x88);
    *(undefined8 *)((long)register0x00000008 + -0x90) =
         *(undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar29;
    *(undefined8 *)((long)register0x00000008 + -0x100) = uVar28;
    *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar27;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar14;
    *(undefined8 *)((long)register0x00000008 + -0x108) = uVar31;
    *(undefined8 *)((long)register0x00000008 + -0x110) = uVar30;
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
              (param_1,(undefined1 *)((long)register0x00000008 + -0x110));
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnHumanPlayerAtLocator(param_1,uVar20);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnAIsAtLocators(param_1,uVar23);
    uVar20 = *(undefined8 *)(param_1 + 0xa8);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection(param_1);
    plVar22 = *(long **)((long)register0x00000008 + -0x30);
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = plVar22;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar20;
    if ((bRam0000000003eb48a2 & 1) == 0) {
      func_0x00f78a20(0x3d33318);
      func_0x00f78a20(0x3d33320);
      func_0x00f78a20(0x3d33328);
      func_0x00f78a20(0x3d278d8);
      func_0x00f78a20(0x3d3cd70);
      func_0x00f78a20(0x3d23990);
      func_0x00f78a20(0x3d24e08);
      func_0x00f78a20(0x3d62270);
      func_0x00f78a20(0x3d26ac8);
      bRam0000000003eb48a2 = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000008 + -200) = 0;
    *(undefined8 *)(param_1 + 0xa8) = uVar20;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x30), lVar7 != 0)) {
      /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x110),lVar7,uRam0000000003d3cd70);
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0xe8);
      *(undefined8 *)((long)register0x00000008 + -0xa0) =
           *(undefined8 *)((long)register0x00000008 + -0xf0);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0xd8);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0xe0);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0xd0);
      *(undefined8 *)((long)register0x00000008 + -0xb8) =
           *(undefined8 *)((long)register0x00000008 + -0x108);
      *(undefined8 *)((long)register0x00000008 + -0xc0) =
           *(undefined8 *)((long)register0x00000008 + -0x110);
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0xf8);
      *(undefined8 *)((long)register0x00000008 + -0xb0) =
           *(undefined8 *)((long)register0x00000008 + -0x100);
LAB_01478328:
      do {
        uVar10 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0xc0),
                                 uRam0000000003d33320);
        if ((uVar10 & 1) == 0) {
LAB_01478494:
          /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0xc0),uRam0000000003d33318);
          return;
        }
        lVar7 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___ctor(lVar7,0);
        if (lVar7 == 0) {
          func_0x00f78af4();
          goto code_r0x014784dc;
        }
        *(long *)(lVar7 + 0x50) = param_1;
        uVar27 = *(undefined8 *)((long)register0x00000008 + -0x98);
        uVar14 = *(undefined8 *)((long)register0x00000008 + -0xa0);
        uVar23 = *(undefined8 *)((long)register0x00000008 + -0x88);
        uVar20 = *(undefined8 *)((long)register0x00000008 + -0x90);
        uVar29 = *(undefined8 *)((long)register0x00000008 + -0xa8);
        uVar28 = *(undefined8 *)((long)register0x00000008 + -0xb0);
        *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)((long)register0x00000008 + -0x80);
        *(undefined8 *)(lVar7 + 0x28) = uVar27;
        *(undefined8 *)(lVar7 + 0x20) = uVar14;
        *(undefined8 *)(lVar7 + 0x38) = uVar23;
        *(undefined8 *)(lVar7 + 0x30) = uVar20;
        *(undefined8 *)(lVar7 + 0x18) = uVar29;
        *(undefined8 *)(lVar7 + 0x10) = uVar28;
        *(undefined8 *)((long)register0x00000008 + -0x110) = *(undefined8 *)(lVar7 + 0x18);
        uVar20 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,
                                 (undefined1 *)((long)register0x00000008 + -0x110));
        uVar10 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -0x70),uVar20,0);
      } while ((uVar10 & 1) == 0);
      if (*(long *)(param_1 + 0x60) == 0) {
        func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x14784e0);
        (*pcVar1)();
      }
      puVar16 = (undefined8 *)(lVar7 + 0x10);
      puVar17 = (undefined8 *)(lVar7 + 0x48);
      uVar10 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(param_1 + 0x60),*puVar16,puVar17,0);
      if ((uVar10 & 1) == 0) goto LAB_01478494;
      uVar20 = *(undefined8 *)(param_1 + 0xa0);
      if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
        func_0x00f78ad0();
      }
      uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar20,0,0);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(param_1 + 0xa0) == 0) {
          func_0x00f78af4();
          goto code_r0x014784dc;
        }
        *(undefined8 *)((long)register0x00000008 + -200) =
             *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x18);
        *(undefined8 *)((long)register0x00000008 + -0x110) = *puVar16;
        uVar20 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,
                                 (undefined1 *)((long)register0x00000008 + -0x110));
        uVar10 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -200),uVar20,0);
        if ((uVar10 & 1) != 0) {
          uVar20 = *(undefined8 *)(param_1 + 0x38);
          uVar23 = *puVar16;
          uVar27 = *(undefined8 *)(lVar7 + 0x28);
          uVar14 = *(undefined8 *)(lVar7 + 0x20);
          *(undefined8 *)((long)register0x00000008 + -0x148) = *(undefined8 *)(lVar7 + 0x18);
          *(undefined8 *)((long)register0x00000008 + -0x150) = uVar23;
          *(undefined8 *)((long)register0x00000008 + -0x138) = uVar27;
          *(undefined8 *)((long)register0x00000008 + -0x140) = uVar14;
          uVar23 = *(undefined8 *)(lVar7 + 0x30);
          *(undefined8 *)((long)register0x00000008 + -0x128) = *(undefined8 *)(lVar7 + 0x38);
          *(undefined8 *)((long)register0x00000008 + -0x130) = uVar23;
          *(undefined8 *)((long)register0x00000008 + -0x120) = *(undefined8 *)(lVar7 + 0x40);
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                    (param_1,uVar20,(undefined1 *)((long)register0x00000008 + -0x150));
          goto LAB_01478328;
        }
      }
      uVar23 = *puVar17;
      uVar20 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar20,lVar7,uRam0000000003d62270,0);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AddBaseListener(param_1,uVar23,uVar20,*puVar17);
      goto LAB_01478328;
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar8 = (long *)___cxa_begin_catch();
      param_1 = *plVar8;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0xc0),uRam0000000003d33318);
      if (param_1 == 0) {
        return;
      }
      func_0x00f78ac0(param_1,0);
    }
    lVar7 = __Unwind_Resume();
    *(undefined8 *)((long)register0x00000008 + -400) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x188) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x180) = plVar22;
    *(undefined8 *)((long)register0x00000008 + -0x178) = 0x3eb4000;
    *(undefined8 *)((long)register0x00000008 + -0x170) = uVar20;
    *(long *)((long)register0x00000008 + -0x168) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x160) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x158) =
         Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
    lVar21 = 0x3eb4000;
    if ((bRam0000000003eb48a3 & 1) == 0) {
      func_0x00f78a20(0x3d33318);
      func_0x00f78a20(0x3d33320);
      func_0x00f78a20(0x3d33328);
      func_0x00f78a20(0x3d3cd70);
      func_0x00f78a20(0x3d24e08);
      bRam0000000003eb48a3 = 1;
    }
    *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
    *(undefined4 *)((long)register0x00000008 + -0x1f0) = 0;
    if ((*(long *)(lVar7 + 0x40) != 0) &&
       (lVar9 = *(long *)(*(long *)(lVar7 + 0x40) + 0x30), lVar9 != 0)) {
      plVar22 = (long *)0x3d24e08;
      /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x240),lVar9,uRam0000000003d3cd70);
      *(undefined8 *)((long)register0x00000008 + -0x1b8) =
           *(undefined8 *)((long)register0x00000008 + -0x218);
      *(undefined8 *)((long)register0x00000008 + -0x1c0) =
           *(undefined8 *)((long)register0x00000008 + -0x220);
      *(undefined8 *)((long)register0x00000008 + -0x1a8) =
           *(undefined8 *)((long)register0x00000008 + -0x208);
      *(undefined8 *)((long)register0x00000008 + -0x1b0) =
           *(undefined8 *)((long)register0x00000008 + -0x210);
      *(undefined8 *)((long)register0x00000008 + -0x1a0) =
           *(undefined8 *)((long)register0x00000008 + -0x200);
      *(undefined8 *)((long)register0x00000008 + -0x1d8) =
           *(undefined8 *)((long)register0x00000008 + -0x238);
      *(undefined8 *)((long)register0x00000008 + -0x1e0) =
           *(undefined8 *)((long)register0x00000008 + -0x240);
      *(undefined8 *)((long)register0x00000008 + -0x1c8) =
           *(undefined8 *)((long)register0x00000008 + -0x228);
      *(undefined8 *)((long)register0x00000008 + -0x1d0) =
           *(undefined8 *)((long)register0x00000008 + -0x230);
LAB_01478624:
      do {
        uVar10 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0x1e0),
                                 uRam0000000003d33320);
        if ((uVar10 & 1) == 0) goto LAB_01478690;
        uVar20 = *(undefined8 *)((long)register0x00000008 + -0x1d0);
        *(undefined8 *)((long)register0x00000008 + -0x240) =
             *(undefined8 *)((long)register0x00000008 + -0x1c8);
        uVar23 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,
                                 (undefined1 *)((long)register0x00000008 + -0x240));
        uVar10 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar7 + 0xa8,uVar23,0);
        if ((uVar10 & 1) != 0) {
          if (*(long *)(lVar7 + 0x60) == 0) {
            func_0x00f78af4();
          }
          else {
            uVar10 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar7 + 0x60),uVar20,
                                     (undefined1 *)((long)register0x00000008 + -0x1e8),0);
            if ((uVar10 & 1) == 0) {
              uVar18 = 0x86;
              goto code_r0x0147869c;
            }
            if (*(long *)((long)register0x00000008 + -0x1e8) != 0) {
              Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                        (lVar7,*(undefined8 *)(*(long *)((long)register0x00000008 + -0x1e8) + 0x18))
              ;
              goto LAB_01478624;
            }
            func_0x00f78af4();
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1478708);
          (*pcVar1)();
        }
      } while( true );
    }
    func_0x00f78af4();
    if (extraout_w1_00 == 1) {
      plVar8 = (long *)___cxa_begin_catch();
      lVar21 = *plVar8;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x1e0),*unaff_x23);
      if (lVar21 == 0) goto code_r0x014786b8;
      func_0x00f78ac0(lVar21,0);
    }
    lVar9 = __Unwind_Resume();
    *(long *)((long)register0x00000008 + -0x260) = lVar21;
    *(long *)((long)register0x00000008 + -600) = lVar7;
    *(undefined1 **)((long)register0x00000008 + -0x250) =
         (undefined1 *)((long)register0x00000008 + -0x160);
    *(code **)((long)register0x00000008 + -0x248) =
         Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
              ((undefined1 *)((long)register0x00000008 + -0x2c0),lVar9,*(undefined8 *)(lVar9 + 0xa8)
              );
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x288);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x290);
    extraout_x8[5] = *(undefined8 *)((long)register0x00000008 + -0x298);
    extraout_x8[4] = uVar20;
    extraout_x8[7] = uVar14;
    extraout_x8[6] = uVar23;
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x280);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x268);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x270);
    extraout_x8[9] = *(undefined8 *)((long)register0x00000008 + -0x278);
    extraout_x8[8] = uVar20;
    extraout_x8[0xb] = uVar14;
    extraout_x8[10] = uVar23;
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x2a8);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x2b0);
    extraout_x8[1] = *(undefined8 *)((long)register0x00000008 + -0x2b8);
    *extraout_x8 = uVar20;
    extraout_x8[3] = uVar14;
    extraout_x8[2] = uVar23;
    return;
  }
Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteUseUsableCondition:
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar25 = (undefined1 *)((long)register0x00000008 + -0x10);
  lVar7 = 0x3eb4000;
  if ((bRam0000000003eb4ec2 & 1) == 0) {
    func_0x00f78a20(0x3d527e8);
    func_0x00f78a20(0x3d527f8);
    func_0x00f78a20(0x3d52800);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ec2 = 1;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
code_r0x01535ac8:
    lVar21 = func_0x00f78af4();
    *(long *)((long)register0x00000008 + -0x90) = lVar7;
    *(long *)((long)register0x00000008 + -0x88) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x80) = puVar25;
    *(undefined **)((long)register0x00000008 + -0x78) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterHitPlayerEndTrigger;
    uVar10 = 0;
    iVar6 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
    if (iVar6 == 0) {
      return;
    }
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar20;
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)((long)register0x00000008 + -0x88);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    puVar25 = (undefined1 *)((long)register0x00000008 + -0x80);
    uVar11 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar21,0);
    if ((uVar11 & 1) == 0) {
      puVar25 = *(undefined1 **)((long)register0x00000008 + -0x80);
      puVar26 = *(undefined **)((long)register0x00000008 + -0x78);
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x90);
      lVar7 = *(long *)((long)register0x00000008 + -0x88);
      lVar9 = lVar21;
    }
    else {
      if (*(long *)(lVar21 + 0xb8) != 0) {
        Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsedUsables(*(long *)(lVar21 + 0xb8),0);
        unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x80);
        unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x78);
        unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x90);
        unaff_x19 = *(long *)((long)register0x00000008 + -0x88);
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
        param_1 = lVar21;
        goto Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RetrySection;
      }
      puVar26 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteHitPlayerCondition;
      lVar9 = func_0x00f78af4();
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x90);
      lVar7 = lVar21;
    }
code_r0x01535b58:
    puVar4 = puVar3 + -0x60;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(long *)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = uVar20;
    *(long *)(puVar3 + -0x18) = lVar7;
    *(undefined1 **)(puVar3 + -0x10) = puVar25;
    *(undefined **)(puVar3 + -8) = puVar26;
    puVar25 = puVar3 + -0x10;
    lVar7 = 0x3eb4000;
    if ((bRam0000000003eb4ec4 & 1) == 0) {
      func_0x00f78a20(0x3d527d0);
      func_0x00f78a20(0x3d527f0);
      func_0x00f78a20(0x3d278d8);
      func_0x00f78a20(0x3d27728);
      bRam0000000003eb4ec4 = 1;
    }
    lVar21 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar9);
    if (lVar21 != 0) {
      unaff_x22 = 0x3d52000;
      uVar20 = *(undefined8 *)(lVar21 + 0xa0);
      uVar14 = *(undefined8 *)(lVar21 + 0xb8);
      uVar23 = *(undefined8 *)(lVar21 + 0xb0);
      *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(lVar21 + 0xa8);
      *(undefined8 *)(puVar3 + -0x60) = uVar20;
      *(undefined8 *)(puVar3 + -0x48) = uVar14;
      *(undefined8 *)(puVar3 + -0x50) = uVar23;
      uVar20 = *(undefined8 *)(lVar21 + 0xc0);
      *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(lVar21 + 200);
      *(undefined8 *)(puVar3 + -0x40) = uVar20;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar9,puVar3 + -0x60,0);
      *(undefined4 *)(lVar9 + 0xe8) = 0;
      lVar7 = *(long *)(lVar9 + 0xd8);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      uVar10 = uRam0000000003d527d0;
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar9,uRam0000000003d527d0,0);
      if (lVar7 != 0) {
        uVar10 = 0;
        /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar7,unaff_x21);
        if (*(long *)(lVar9 + 0x10) != 0) {
          unaff_x22 = 0x3d52000;
          plVar22 = *(long **)(*(long *)(lVar9 + 0x10) + 0x40);
          unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
          auVar35._8_8_ = unaff_x21;
          auVar35._0_8_ = plVar22;
          uVar23 = 0;
          uVar10 = uRam0000000003d527f0;
          /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar9,uRam0000000003d527f0,0);
          lVar7 = 0;
          if (plVar22 != (long *)0x0) {
            puVar26 = &UNK_01535c74;
            goto code_r0x0159d844;
          }
        }
      }
    }
    auVar32 = func_0x00f78af4();
    lVar21 = auVar32._0_8_;
    puVar2 = puVar3 + -0xb0;
    *(long *)(puVar3 + -0x80) = lVar7;
    *(long *)(puVar3 + -0x78) = lVar9;
    *(undefined1 **)(puVar3 + -0x70) = puVar25;
    *(undefined **)(puVar3 + -0x68) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnPickup;
    if (auVar32._8_8_ != 0) {
      if (*(long *)(auVar32._8_8_ + 0x10) != *(long *)(lVar21 + 0x38)) {
        return;
      }
      lVar12 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar21);
      lVar9 = lVar21;
      if (lVar12 != 0) {
        uVar20 = *(undefined8 *)(lVar12 + 0x40);
        uVar14 = *(undefined8 *)(lVar12 + 0x58);
        uVar23 = *(undefined8 *)(lVar12 + 0x50);
        *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(lVar12 + 0x48);
        *(undefined8 *)(puVar3 + -0xb0) = uVar20;
        *(undefined8 *)(puVar3 + -0x98) = uVar14;
        *(undefined8 *)(puVar3 + -0xa0) = uVar23;
        uVar20 = *(undefined8 *)(lVar12 + 0x60);
        *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(lVar12 + 0x68);
        *(undefined8 *)(puVar3 + -0x90) = uVar20;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar21,puVar3 + -0xb0,0);
        if (*(int *)(lVar21 + 0xe8) != 1) {
          return;
        }
        Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompletePickupCondition(lVar21);
        return;
      }
    }
    unaff_x19 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0xe0) = unaff_x22;
    *(long *)(puVar3 + -0xd8) = unaff_x21;
    *(long *)(puVar3 + -0xd0) = lVar7;
    *(long *)(puVar3 + -200) = lVar9;
    *(undefined1 **)(puVar3 + -0xc0) = puVar3 + -0x70;
    *(undefined **)(puVar3 + -0xb8) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartUseUsableSection;
    unaff_x20 = 0x3eb4000;
    if ((bRam0000000003eb4ec1 & 1) == 0) {
      func_0x00f78a20(0x3d52800);
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb4ec1 = 1;
    }
    *(undefined4 *)(unaff_x19 + 0xe8) = 2;
    lVar7 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(unaff_x19);
    if (lVar7 != 0) {
      uVar10 = (ulong)*(uint *)(lVar7 + 0x14c);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                (unaff_x19,*(undefined8 *)(lVar7 + 0x130),uVar10,*(char *)(lVar7 + 0x148) != '\0',0)
      ;
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        unaff_x22 = 0x3d52000;
        lVar7 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x40);
        unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
        auVar33._8_8_ = unaff_x21;
        auVar33._0_8_ = lVar7;
        uVar10 = uRam0000000003d52800;
        /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,unaff_x19,uRam0000000003d52800,0);
        unaff_x20 = 0;
        if (lVar7 != 0) {
          puVar25 = *(undefined1 **)(puVar3 + -0xc0);
          puVar26 = *(undefined **)(puVar3 + -0xb8);
          plVar22 = *(long **)(puVar3 + -0xd0);
          uVar23 = *(undefined8 *)(puVar3 + -200);
          uVar20 = *(undefined8 *)(puVar3 + -0xe0);
          lVar7 = *(long *)(puVar3 + -0xd8);
          goto code_r0x0159d188;
        }
      }
    }
    auVar32 = func_0x00f78af4();
    param_1 = auVar32._0_8_;
    *(undefined1 **)(puVar3 + -0xf0) = puVar3 + -0xc0;
    *(undefined **)(puVar3 + -0xe8) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnUse;
    if (auVar32._8_8_ == 0) {
      lVar7 = func_0x00f78af4();
      *(undefined8 *)(puVar3 + -0x120) = unaff_x22;
      *(long *)(puVar3 + -0x118) = unaff_x21;
      *(undefined8 *)(puVar3 + -0x110) = unaff_x20;
      *(long *)(puVar3 + -0x108) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x100) = puVar3 + -0xf0;
      *(undefined **)(puVar3 + -0xf8) =
           &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartHitPlayerSection;
      uVar20 = 0x3eb4000;
      if ((bRam0000000003eb4ec3 & 1) == 0) {
        func_0x00f78a20(0x3d527f0);
        func_0x00f78a20(0x3d27728);
        bRam0000000003eb4ec3 = 1;
      }
      lVar21 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar7);
      if (lVar21 == 0) goto code_r0x01535ee8;
      uVar10 = (ulong)*(uint *)(lVar21 + 0x1ac);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                (lVar7,*(undefined8 *)(lVar21 + 400),uVar10,*(char *)(lVar21 + 0x1a8) != '\0',0);
      *(undefined4 *)(lVar7 + 0xe8) = 3;
      if (*(long *)(lVar7 + 0x10) == 0) goto code_r0x01535ee8;
      unaff_x22 = 0x3d52000;
      lVar21 = *(long *)(*(long *)(lVar7 + 0x10) + 0x40);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
      uVar10 = uRam0000000003d527f0;
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar7,uRam0000000003d527f0,0);
      uVar20 = 0;
      if (lVar21 == 0) goto code_r0x01535ee8;
      *(undefined8 *)(puVar3 + -0x120) = *(undefined8 *)(puVar3 + -0x120);
      *(undefined8 *)(puVar3 + -0x118) = *(undefined8 *)(puVar3 + -0x118);
      *(undefined8 *)(puVar3 + -0x110) = *(undefined8 *)(puVar3 + -0x110);
      *(undefined8 *)(puVar3 + -0x108) = *(undefined8 *)(puVar3 + -0x108);
      *(undefined8 *)(puVar3 + -0x100) = *(undefined8 *)(puVar3 + -0x100);
      *(undefined8 *)(puVar3 + -0xf8) = *(undefined8 *)(puVar3 + -0xf8);
      if ((bRam0000000003eb51f9 & 1) == 0) {
        func_0x00f78a20(0x3d27728,unaff_x21,0);
        bRam0000000003eb51f9 = 1;
      }
      plVar22 = (long *)(lVar21 + 0x98);
      lVar7 = *plVar22;
      while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,unaff_x21,0), plVar8 == (long *)0x0 ||
             (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
        lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
        bVar5 = lVar7 == lVar21;
        lVar7 = lVar21;
        if (bVar5) {
          return;
        }
      }
      auVar32 = func_0x00f78e5c(plVar8);
      uVar23 = auVar32._8_8_;
      puVar2 = puVar3 + -0x150;
      *(undefined8 *)(puVar3 + -0x150) = 0x3d27728;
      *(long *)(puVar3 + -0x148) = lVar7;
      *(long **)(puVar3 + -0x140) = plVar22;
      *(long *)(puVar3 + -0x138) = unaff_x21;
      *(undefined1 **)(puVar3 + -0x130) = puVar3 + -0x100;
      *(undefined **)(puVar3 + -0x128) =
           &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
      puVar25 = puVar3 + -0x130;
      if ((bRam0000000003eb51fb & 1) == 0) {
        func_0x00f78a20(0x3d27730);
        bRam0000000003eb51fb = 1;
      }
      uVar20 = 0x3d27730;
      plVar22 = (long *)(auVar32._0_8_ + 0xa0);
      lVar7 = *plVar22;
      while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,uVar23,0), plVar8 == (long *)0x0 ||
             (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
        lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
        bVar5 = lVar7 == lVar21;
        lVar7 = lVar21;
        if (bVar5) {
          return;
        }
      }
      puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
      auVar33 = func_0x00f78e5c(plVar8);
code_r0x0159d188:
      *(undefined8 *)(puVar2 + -0x30) = uVar20;
      *(long *)(puVar2 + -0x28) = lVar7;
      *(long **)(puVar2 + -0x20) = plVar22;
      *(undefined8 *)(puVar2 + -0x18) = uVar23;
      *(undefined1 **)(puVar2 + -0x10) = puVar25;
      *(undefined **)(puVar2 + -8) = puVar26;
      if ((bRam0000000003eb51f3 & 1) == 0) {
        func_0x00f78a20(0x3d27718);
        bRam0000000003eb51f3 = 1;
      }
      plVar22 = (long *)(auVar33._0_8_ + 0x80);
      lVar7 = *plVar22;
      while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,auVar33._8_8_,0), plVar8 == (long *)0x0 ||
             (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
        lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
        bVar5 = lVar7 == lVar21;
        lVar7 = lVar21;
        if (bVar5) {
          return;
        }
      }
      auVar32 = func_0x00f78e5c(plVar8);
      *(undefined8 *)(puVar2 + -0x60) = 0x3d27718;
      *(long *)(puVar2 + -0x58) = lVar7;
      *(long **)(puVar2 + -0x50) = plVar22;
      *(long *)(puVar2 + -0x48) = auVar33._8_8_;
      *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x38) =
           &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
      if ((bRam0000000003eb51fd & 1) == 0) {
        func_0x00f78a20(0x3d27738);
        bRam0000000003eb51fd = 1;
      }
      plVar22 = (long *)(auVar32._0_8_ + 0xa8);
      lVar7 = *plVar22;
      while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,auVar32._8_8_,0), plVar8 == (long *)0x0 ||
             (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
        lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
        bVar5 = lVar7 == lVar21;
        lVar7 = lVar21;
        if (bVar5) {
          return;
        }
      }
      auVar34 = func_0x00f78e5c(plVar8);
      *(undefined8 *)(puVar2 + -0x90) = 0x3d27738;
      *(long *)(puVar2 + -0x88) = lVar7;
      *(long **)(puVar2 + -0x80) = plVar22;
      *(long *)(puVar2 + -0x78) = auVar32._8_8_;
      *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x40;
      *(undefined **)(puVar2 + -0x68) =
           &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
      if ((bRam0000000003eb51f5 & 1) == 0) {
        func_0x00f78a20(0x3d27700);
        bRam0000000003eb51f5 = 1;
      }
      plVar22 = (long *)(auVar34._0_8_ + 0x88);
      lVar7 = *plVar22;
      while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,auVar34._8_8_,0), plVar8 == (long *)0x0 ||
             (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
        lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
        bVar5 = lVar7 == lVar21;
        lVar7 = lVar21;
        if (bVar5) {
          return;
        }
      }
      auVar32 = func_0x00f78e5c(plVar8);
      puVar3 = puVar2 + -0xe0;
      *(undefined8 *)(puVar2 + -0xe0) = unaff_x26;
      *(undefined8 *)(puVar2 + -0xd8) = unaff_x25;
      *(undefined8 *)(puVar2 + -0xd0) = unaff_x24;
      *(undefined8 **)(puVar2 + -200) = unaff_x23;
      *(undefined8 *)(puVar2 + -0xc0) = 0x3d27700;
      *(long *)(puVar2 + -0xb8) = lVar7;
      *(long **)(puVar2 + -0xb0) = plVar22;
      *(long *)(puVar2 + -0xa8) = auVar34._8_8_;
      *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
      *(code **)(puVar2 + -0x98) = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
      puVar25 = puVar2 + -0xa0;
      unaff_x23 = (undefined8 *)0x3d27718;
      unaff_x24 = 0x3d570f0;
      if ((bRam0000000003eb51b7 & 1) == 0) {
        func_0x00f78a20(0x3d524e0);
        func_0x00f78a20(0x3d524e8);
        func_0x00f78a20(0x3d524f0);
        func_0x00f78a20(0x3d524f8);
        func_0x00f78a20(0x3d570d0);
        func_0x00f78a20(0x3d570f0);
        func_0x00f78a20(0x3d27700);
        func_0x00f78a20(0x3d27718);
        func_0x00f78a20(0x3d27728);
        func_0x00f78a20(0x3d27730);
        func_0x00f78a20(0x3d27738);
        bRam0000000003eb51b7 = 1;
      }
      unaff_x21 = *(long *)(auVar32._0_8_ + 0x40);
      uVar20 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
      auVar34._8_8_ = uVar20;
      auVar34._0_8_ = unaff_x21;
      uVar23 = 0;
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(uVar20,auVar32._0_8_,uRam0000000003d570f0,0);
      if (unaff_x21 == 0) {
        puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
        auVar34 = func_0x00f78af4();
      }
      else {
        unaff_x24 = 0x3d27000;
        unaff_x25 = 0x3d52000;
        puVar26 = (undefined *)0x159d470;
        puVar3 = puVar2 + -0xe0;
      }
      goto code_r0x0159d5c4;
    }
    if (*(long *)(auVar32._8_8_ + 0x10) != *(long *)(param_1 + 0x38)) {
      return;
    }
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0xe0);
    unaff_x29 = *(undefined8 *)(puVar3 + -0xf0);
    unaff_x30 = *(undefined8 *)(puVar3 + -0xe8);
    goto Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteUseUsableCondition;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x100) = 1;
  lVar21 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(param_1);
  if (lVar21 == 0) goto code_r0x01535ac8;
  uVar20 = *(undefined8 *)(lVar21 + 0x70);
  uVar14 = *(undefined8 *)(lVar21 + 0x88);
  uVar23 = *(undefined8 *)(lVar21 + 0x80);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)(lVar21 + 0x78);
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar20;
  *(undefined8 *)((long)register0x00000008 + -0x58) = uVar14;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar23;
  uVar20 = *(undefined8 *)(lVar21 + 0x90);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(lVar21 + 0x98);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar20;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
            (param_1,(undefined1 *)((long)register0x00000008 + -0x70),0);
  lVar7 = *(long *)(param_1 + 0xd0);
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,param_1,uRam0000000003d527e8,0);
  unaff_x22 = 0x3d52000;
  if (lVar7 == 0) goto code_r0x01535ac8;
  /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar7,unaff_x21,0);
  if (*(long *)(param_1 + 0x10) == 0) goto code_r0x01535ac8;
  uVar20 = 0x3d27718;
  unaff_x23 = (undefined8 *)0x3d52000;
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,param_1,uRam0000000003d527f8,0);
  unaff_x22 = uVar20;
  if (lVar7 == 0) goto code_r0x01535ac8;
  /*Atlas.Gameplay.Player.GameContextPlayerManager$$remove_OnUsableAttached*/ func_0x015a5cc8(lVar7,unaff_x21,0);
  if (*(long *)(param_1 + 0x10) == 0) goto code_r0x01535ac8;
  unaff_x23 = (undefined8 *)0x3d52000;
  lVar21 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
  auVar32._8_8_ = lVar21;
  auVar32._0_8_ = param_1;
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar34._8_8_ = unaff_x21;
  auVar34._0_8_ = lVar21;
  uVar23 = 0;
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,param_1,uRam0000000003d52800,0);
  lVar7 = 0;
  unaff_x22 = 0x3d27718;
  if (lVar21 == 0) goto code_r0x01535ac8;
  puVar26 = &UNK_01535aa8;
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x70);
code_r0x0159d5c4:
  *(undefined8 *)(puVar3 + -0x30) = uVar20;
  *(long *)(puVar3 + -0x28) = unaff_x21;
  *(long *)(puVar3 + -0x20) = auVar32._8_8_;
  *(long *)(puVar3 + -0x18) = auVar32._0_8_;
  *(undefined1 **)(puVar3 + -0x10) = puVar25;
  *(undefined **)(puVar3 + -8) = puVar26;
  if ((bRam0000000003eb51f4 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f4 = 1;
  }
  plVar22 = (long *)(auVar34._0_8_ + 0x80);
  lVar7 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar34._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar8);
  *(undefined8 *)(puVar3 + -0x60) = 0x3d27718;
  *(long *)(puVar3 + -0x58) = lVar7;
  *(long **)(puVar3 + -0x50) = plVar22;
  *(long *)(puVar3 + -0x48) = auVar34._8_8_;
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x38) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar22 = (long *)(auVar32._0_8_ + 0x88);
  lVar7 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar32._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  auVar34 = func_0x00f78e5c(plVar8);
  *(undefined8 *)(puVar3 + -0x90) = 0x3d27700;
  *(long *)(puVar3 + -0x88) = lVar7;
  *(long **)(puVar3 + -0x80) = plVar22;
  *(long *)(puVar3 + -0x78) = auVar32._8_8_;
  *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
  *(undefined **)(puVar3 + -0x68) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar22 = (long *)(auVar34._0_8_ + 0xa8);
  lVar7 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar34._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar8);
  lVar9 = auVar32._8_8_;
  puVar4 = puVar3 + -0xc0;
  *(undefined8 *)(puVar3 + -0xc0) = 0x3d27738;
  *(long *)(puVar3 + -0xb8) = lVar7;
  *(long **)(puVar3 + -0xb0) = plVar22;
  *(long *)(puVar3 + -0xa8) = auVar34._8_8_;
  *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x70;
  *(undefined **)(puVar3 + -0x98) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  puVar25 = puVar3 + -0xa0;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  unaff_x22 = 0x3d27730;
  plVar22 = (long *)(auVar32._0_8_ + 0xa0);
  unaff_x21 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x21,lVar9,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar7 = func_0x00ff0f44(plVar22,plVar8,unaff_x21);
    bVar5 = unaff_x21 == lVar7;
    unaff_x21 = lVar7;
    if (bVar5) {
      return;
    }
  }
  puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  auVar35 = func_0x00f78e5c(plVar8);
code_r0x0159d844:
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(long *)(puVar4 + -0x28) = unaff_x21;
  *(long **)(puVar4 + -0x20) = plVar22;
  *(long *)(puVar4 + -0x18) = lVar9;
  *(undefined1 **)(puVar4 + -0x10) = puVar25;
  *(undefined **)(puVar4 + -8) = puVar26;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar22 = (long *)0x3d27728;
  plVar8 = (long *)(auVar35._0_8_ + 0x98);
  lVar7 = *plVar8;
  while( true ) {
    puVar16 = (undefined8 *)0x0;
    plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar35._8_8_);
    if ((plVar13 != (long *)0x0) && (*plVar13 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar21 = func_0x00ff0f44(plVar8,plVar13,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  lVar21 = func_0x00f78e5c(plVar13);
  *(undefined8 *)(puVar4 + -0x80) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x78) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x70) = unaff_x24;
  *(undefined8 **)(puVar4 + -0x68) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x60) = 0x3d27728;
  *(long *)(puVar4 + -0x58) = lVar7;
  *(long **)(puVar4 + -0x50) = plVar8;
  *(long *)(puVar4 + -0x48) = auVar35._8_8_;
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x38) = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar7 = 0x3eb5000;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar9 = *(long *)(lVar21 + 0x28);
  if (lVar9 != 0) {
    plVar22 = (long *)(lVar21 + 0x10);
    uVar19 = *(uint *)(lVar9 + 0x18);
    if ((int)uVar19 < 1) {
code_r0x0159d9f0:
      if (((*(long *)(lVar21 + 0x20) == 0) ||
          (lVar12 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar12 == 0)) ||
         (unaff_x23 = *(undefined8 **)(lVar12 + 0x10), unaff_x23 == (undefined8 *)0x0))
      goto code_r0x0159db7c;
      uVar20 = 0x3d1b4e8;
      unaff_x24 = 0x3d1b4e8;
      lVar7 = unaff_x23[3];
      lVar9 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
      uVar23 = uRam0000000003d2a1d8;
      /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar9,lVar21,uRam0000000003d57238,uRam0000000003d2a1d8);
      puVar16 = (undefined8 *)0x0;
      plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,lVar9);
      if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
        unaff_x23[3] = plVar8;
        if ((*(long *)(lVar21 + 0x20) == 0) ||
           ((lVar12 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar12 == 0 ||
            (unaff_x23 = *(undefined8 **)(lVar12 + 0x10), unaff_x23 == (undefined8 *)0x0))))
        goto code_r0x0159db7c;
        uVar20 = 0x3d1b3b0;
        unaff_x24 = 0x3d1b3b0;
        lVar7 = unaff_x23[0xe];
        lVar9 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
        uVar23 = uRam0000000003d29f28;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar9,lVar21,uRam0000000003d57240,uRam0000000003d29f28);
        puVar16 = (undefined8 *)0x0;
        plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,lVar9);
        if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
          unaff_x23[0xe] = plVar8;
          if (((*(long *)(lVar21 + 0x20) == 0) ||
              (lVar12 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar12 == 0)) ||
             (unaff_x23 = *(undefined8 **)(lVar12 + 0x10), unaff_x23 == (undefined8 *)0x0))
          goto code_r0x0159db7c;
          uVar20 = 0x3d1b4e0;
          lVar7 = unaff_x23[5];
          lVar9 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
          uVar23 = uRam0000000003d2a1c8;
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar9,lVar21,uRam0000000003d57230,uRam0000000003d2a1c8);
          puVar16 = (undefined8 *)0x0;
          plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,lVar9);
          if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
            unaff_x23[5] = plVar8;
            *(undefined1 *)(lVar21 + 0x50) = 0;
            *(undefined8 *)(lVar21 + 0x18) = 0;
            *plVar22 = 0;
            *(undefined8 *)(lVar21 + 0x28) = 0;
            *(undefined8 *)(lVar21 + 0x20) = 0;
            return;
          }
        }
      }
      goto code_r0x0159db8c;
    }
    unaff_x23 = (undefined8 *)0x0;
    unaff_x24 = 0x3d43378;
    while( true ) {
      uVar24 = (uint)unaff_x23;
      uVar20 = unaff_x24;
      if (uVar19 <= uVar24) goto code_r0x0159db80;
      if (*plVar22 == 0) break;
      lVar7 = *(long *)(lVar9 + (long)(int)uVar24 * 8 + 0x20);
      puVar16 = puRam0000000003d43378;
      /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar22,lVar7);
      if (lVar7 == 0) break;
      /*Atlas.Gameplay.Player.GameContextPlayer$$DeInit*/ func_0x015a5404(lVar7);
      unaff_x23 = (undefined8 *)(ulong)(uVar24 + 1);
      uVar19 = *(uint *)(lVar9 + 0x18);
      if ((int)uVar19 <= (int)(uVar24 + 1)) goto code_r0x0159d9f0;
    }
  }
code_r0x0159db7c:
  func_0x00f78af4();
  uVar20 = unaff_x24;
code_r0x0159db80:
  uVar14 = func_0x00f78b24();
  func_0x00f78ac0(uVar14,0);
code_r0x0159db8c:
  auVar32 = func_0x00f78e5c();
  puVar15 = auVar32._8_8_;
  plVar8 = auVar32._0_8_;
  *(undefined8 *)(puVar4 + -0xc0) = uVar20;
  *(undefined8 **)(puVar4 + -0xb8) = unaff_x23;
  *(long **)(puVar4 + -0xb0) = plVar22;
  *(long *)(puVar4 + -0xa8) = lVar9;
  *(long *)(puVar4 + -0xa0) = lVar7;
  *(long *)(puVar4 + -0x98) = lVar21;
  *(undefined1 **)(puVar4 + -0x90) = puVar4 + -0x40;
  *(code **)(puVar4 + -0x88) = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar17 = puVar16;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar8[3] != 0) &&
      (puVar17 = puVar16, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar8[3],puVar15,puVar16,uVar23,0),
      puVar16 != (undefined8 *)0x0)) && (lVar7 = puVar16[2], lVar7 != 0)) {
    uVar20 = *(undefined8 *)(lVar7 + 0x48);
    uVar27 = *(undefined8 *)(lVar7 + 0x60);
    uVar14 = *(undefined8 *)(lVar7 + 0x58);
    *(undefined8 *)(puVar4 + -0xd8) = *(undefined8 *)(lVar7 + 0x50);
    *(undefined8 *)(puVar4 + -0xe0) = uVar20;
    *(undefined8 *)(puVar4 + -200) = uVar27;
    *(undefined8 *)(puVar4 + -0xd0) = uVar14;
    iVar6 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar4 + -0xe0,0);
    if ((iVar6 == 0) || (puVar16 == puVar15)) {
      return;
    }
    iVar6 = (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
    if ((plVar8[0x18] != 0) && (lVar7 = *(long *)(plVar8[0x18] + 0x20), lVar7 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar4 + -0xf8,lVar7,0);
      *(int *)(puVar16 + 0xf) = *(int *)(puVar16 + 0xf) + iVar6;
      uVar20 = *(undefined8 *)(puVar4 + -0xf8);
      puVar16[0x11] = *(undefined8 *)(puVar4 + -0xf0);
      puVar16[0x10] = uVar20;
      puVar16[0x12] = *(undefined8 *)(puVar4 + -0xe8);
      if (puVar16[2] != 0) {
        if (*(int *)(puVar16[2] + 0x50) == 0) {
          uVar20 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
          puVar17 = (undefined8 *)0x0;
          iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar20,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar6 != 0) {
            if (plVar8[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar8[3],*(undefined4 *)(puVar16 + 0xf),0);
          }
        }
        if (plVar8[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar8[0x46],puVar15,puVar16,uVar23,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar36 = func_0x00f78af4();
  lVar7 = auVar36._0_8_;
  iVar6 = *(int *)(lVar7 + 0x78);
  uVar14 = puVar17[1];
  uVar23 = *puVar17;
  *(undefined8 *)(puVar4 + -0x118) = uVar14;
  *(undefined8 *)(puVar4 + -0x120) = uVar23;
  uVar20 = puVar17[2];
  *(undefined8 *)(puVar4 + -0x110) = uVar20;
  *(int *)(lVar7 + 0x78) = iVar6 + auVar36._8_4_;
  *(undefined8 *)(lVar7 + 0x88) = uVar14;
  *(undefined8 *)(lVar7 + 0x80) = uVar23;
  *(undefined8 *)(lVar7 + 0x90) = uVar20;
  return;
code_r0x01535ee8:
  lVar9 = func_0x00f78af4();
  *(undefined1 **)(puVar3 + -0x130) = puVar3 + -0x100;
  *(undefined **)(puVar3 + -0x128) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnHit;
  if (uVar10 == 0) {
    func_0x00f78af4();
    return;
  }
  if (*(long *)(uVar10 + 0x10) != *(long *)(lVar9 + 0x38)) {
    return;
  }
  puVar25 = *(undefined1 **)(puVar3 + -0x130);
  puVar26 = *(undefined **)(puVar3 + -0x128);
  puVar3 = puVar3 + -0x120;
  goto code_r0x01535b58;
LAB_01478690:
  uVar18 = 0x7b;
code_r0x0147869c:
  *(undefined4 *)((long)register0x00000008 + -0x1f8) = uVar18;
  /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x1e0),uRam0000000003d33318);
  if (*(int *)((long)register0x00000008 + -0x1f8) == 0x86) {
    return;
  }
code_r0x014786b8:
  lVar21 = *plVar22;
  if (((*(ushort *)(lVar21 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar21 + 0xe0) == 0)) {
    func_0x00f78ad0();
    lVar21 = *plVar22;
  }
  *(undefined8 *)(lVar7 + 0xa8) = **(undefined8 **)(lVar21 + 0xb8);
  return;
}



// ============================================================
// RVA: 0x153592c | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.CompleteUseUsableCondition
// ============================================================

/* WARNING: Possible PIC construction at 0x01535aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x01535c74) */
/* WARNING: Removing unreachable block (ram,0x01535aa8) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteUseUsableCondition(long param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined8 *extraout_x8;
  long unaff_x19;
  undefined8 uVar21;
  undefined8 unaff_x20;
  long lVar22;
  long *plVar23;
  long unaff_x21;
  undefined8 unaff_x22;
  uint uVar24;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined1 *puVar25;
  undefined8 unaff_x30;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  
code_r0x0153592c:
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar25 = (undefined1 *)((long)register0x00000008 + -0x10);
  lVar22 = 0x3eb4000;
  if ((bRam0000000003eb4ec2 & 1) == 0) {
    func_0x00f78a20(0x3d527e8);
    func_0x00f78a20(0x3d527f8);
    func_0x00f78a20(0x3d52800);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ec2 = 1;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
LAB_01535ac8:
    lVar9 = func_0x00f78af4();
    *(long *)((long)register0x00000008 + -0x90) = lVar22;
    *(long *)((long)register0x00000008 + -0x88) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x80) = puVar25;
    *(undefined **)((long)register0x00000008 + -0x78) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterHitPlayerEndTrigger;
    uVar15 = 0;
    iVar6 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
    if (iVar6 == 0) {
      return;
    }
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0x90) = uVar21;
    *(undefined8 *)((long)register0x00000008 + -0x88) =
         *(undefined8 *)((long)register0x00000008 + -0x88);
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    puVar25 = (undefined1 *)((long)register0x00000008 + -0x80);
    uVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar9,0);
    if ((uVar10 & 1) == 0) {
      puVar25 = *(undefined1 **)((long)register0x00000008 + -0x80);
      puVar26 = *(undefined **)((long)register0x00000008 + -0x78);
      uVar21 = *(undefined8 *)((long)register0x00000008 + -0x90);
      lVar22 = *(long *)((long)register0x00000008 + -0x88);
      lVar8 = lVar9;
    }
    else {
      if (*(long *)(lVar9 + 0xb8) != 0) {
        Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsedUsables(*(long *)(lVar9 + 0xb8),0);
        *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
        *(long *)((long)register0x00000008 + -0x98) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x90) =
             *(undefined8 *)((long)register0x00000008 + -0x90);
        *(undefined8 *)((long)register0x00000008 + -0x88) =
             *(undefined8 *)((long)register0x00000008 + -0x88);
        *(undefined8 *)((long)register0x00000008 + -0x80) =
             *(undefined8 *)((long)register0x00000008 + -0x80);
        *(undefined8 *)((long)register0x00000008 + -0x78) =
             *(undefined8 *)((long)register0x00000008 + -0x78);
        *(int *)(lVar9 + 0x8c) = *(int *)(lVar9 + 0x8c) + 1;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                  ((undefined1 *)((long)register0x00000008 + -0x100),lVar9,
                   *(undefined8 *)(lVar9 + 0xa8));
        *(undefined8 *)((long)register0x00000008 + -0x148) =
             *(undefined8 *)((long)register0x00000008 + -0xf8);
        *(undefined8 *)((long)register0x00000008 + -0x150) =
             *(undefined8 *)((long)register0x00000008 + -0x100);
        *(undefined8 *)((long)register0x00000008 + -0x138) =
             *(undefined8 *)((long)register0x00000008 + -0xe8);
        *(undefined8 *)((long)register0x00000008 + -0x140) =
             *(undefined8 *)((long)register0x00000008 + -0xf0);
        uVar29 = *(undefined8 *)((long)register0x00000008 + -200);
        uVar28 = *(undefined8 *)((long)register0x00000008 + -0xd0);
        uVar27 = *(undefined8 *)((long)register0x00000008 + -0xb8);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0xc0);
        *(undefined8 *)((long)register0x00000008 + -0x118) = uVar29;
        *(undefined8 *)((long)register0x00000008 + -0x120) = uVar28;
        *(undefined8 *)((long)register0x00000008 + -0x108) = uVar27;
        *(undefined8 *)((long)register0x00000008 + -0x110) = uVar13;
        uVar31 = *(undefined8 *)((long)register0x00000008 + -0xd8);
        uVar30 = *(undefined8 *)((long)register0x00000008 + -0xe0);
        *(undefined8 *)((long)register0x00000008 + -0x128) = uVar31;
        *(undefined8 *)((long)register0x00000008 + -0x130) = uVar30;
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0xb0);
        uVar18 = *(undefined8 *)((long)register0x00000008 + -0xa8);
        *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar31;
        *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar30;
        *(undefined8 *)((long)register0x00000008 + -200) = uVar29;
        *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar28;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar27;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar13;
        *(undefined8 *)((long)register0x00000008 + -0xf8) =
             *(undefined8 *)((long)register0x00000008 + -0xf8);
        *(undefined8 *)((long)register0x00000008 + -0x100) =
             *(undefined8 *)((long)register0x00000008 + -0x100);
        *(undefined8 *)((long)register0x00000008 + -0xe8) =
             *(undefined8 *)((long)register0x00000008 + -0xe8);
        *(undefined8 *)((long)register0x00000008 + -0xf0) =
             *(undefined8 *)((long)register0x00000008 + -0xf0);
        *(undefined8 *)((long)register0x00000008 + -0x168) = uVar29;
        *(undefined8 *)((long)register0x00000008 + -0x170) = uVar28;
        *(undefined8 *)((long)register0x00000008 + -0x158) = uVar27;
        *(undefined8 *)((long)register0x00000008 + -0x160) = uVar13;
        *(undefined8 *)((long)register0x00000008 + -0x178) = uVar31;
        *(undefined8 *)((long)register0x00000008 + -0x180) = uVar30;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                  (lVar9,(undefined1 *)((long)register0x00000008 + -0x180));
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnHumanPlayerAtLocator(lVar9,uVar21);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnAIsAtLocators(lVar9,uVar18);
        uVar21 = *(undefined8 *)(lVar9 + 0xa8);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection(lVar9);
        plVar23 = *(long **)((long)register0x00000008 + -0xa0);
        *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -200) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x24;
        *(undefined8 **)((long)register0x00000008 + -0xa8) = unaff_x23;
        *(long **)((long)register0x00000008 + -0xa0) = plVar23;
        *(undefined8 *)((long)register0x00000008 + -0x98) =
             *(undefined8 *)((long)register0x00000008 + -0x98);
        *(undefined8 *)((long)register0x00000008 + -0x90) =
             *(undefined8 *)((long)register0x00000008 + -0x90);
        *(undefined8 *)((long)register0x00000008 + -0x88) =
             *(undefined8 *)((long)register0x00000008 + -0x88);
        *(undefined8 *)((long)register0x00000008 + -0x80) =
             *(undefined8 *)((long)register0x00000008 + -0x80);
        *(undefined8 *)((long)register0x00000008 + -0x78) =
             *(undefined8 *)((long)register0x00000008 + -0x78);
        *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar21;
        if ((bRam0000000003eb48a2 & 1) == 0) {
          func_0x00f78a20(0x3d33318);
          func_0x00f78a20(0x3d33320);
          func_0x00f78a20(0x3d33328);
          func_0x00f78a20(0x3d278d8);
          func_0x00f78a20(0x3d3cd70);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d24e08);
          func_0x00f78a20(0x3d62270);
          func_0x00f78a20(0x3d26ac8);
          bRam0000000003eb48a2 = 1;
        }
        *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
        *(undefined8 *)(lVar9 + 0xa8) = uVar21;
        if ((*(long *)(lVar9 + 0x40) != 0) &&
           (lVar22 = *(long *)(*(long *)(lVar9 + 0x40) + 0x30), lVar22 != 0)) {
          /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x180),lVar22,
                          uRam0000000003d3cd70);
          *(undefined8 *)((long)register0x00000008 + -0x108) =
               *(undefined8 *)((long)register0x00000008 + -0x158);
          *(undefined8 *)((long)register0x00000008 + -0x110) =
               *(undefined8 *)((long)register0x00000008 + -0x160);
          *(undefined8 *)((long)register0x00000008 + -0xf8) =
               *(undefined8 *)((long)register0x00000008 + -0x148);
          *(undefined8 *)((long)register0x00000008 + -0x100) =
               *(undefined8 *)((long)register0x00000008 + -0x150);
          *(undefined8 *)((long)register0x00000008 + -0xf0) =
               *(undefined8 *)((long)register0x00000008 + -0x140);
          *(undefined8 *)((long)register0x00000008 + -0x128) =
               *(undefined8 *)((long)register0x00000008 + -0x178);
          *(undefined8 *)((long)register0x00000008 + -0x130) =
               *(undefined8 *)((long)register0x00000008 + -0x180);
          *(undefined8 *)((long)register0x00000008 + -0x118) =
               *(undefined8 *)((long)register0x00000008 + -0x168);
          *(undefined8 *)((long)register0x00000008 + -0x120) =
               *(undefined8 *)((long)register0x00000008 + -0x170);
          goto LAB_01478328;
        }
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar7 = (long *)___cxa_begin_catch();
          lVar9 = *plVar7;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x130),uRam0000000003d33318);
          if (lVar9 == 0) {
            return;
          }
          func_0x00f78ac0(lVar9,0);
        }
        lVar22 = __Unwind_Resume();
        *(undefined8 *)((long)register0x00000008 + -0x200) = unaff_x24;
        *(undefined8 **)((long)register0x00000008 + -0x1f8) = unaff_x23;
        *(long **)((long)register0x00000008 + -0x1f0) = plVar23;
        *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0x3eb4000;
        *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar21;
        *(long *)((long)register0x00000008 + -0x1d8) = lVar9;
        *(undefined1 **)((long)register0x00000008 + -0x1d0) =
             (undefined1 *)((long)register0x00000008 + -0x80);
        *(code **)((long)register0x00000008 + -0x1c8) =
             Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
        lVar9 = 0x3eb4000;
        if ((bRam0000000003eb48a3 & 1) == 0) {
          func_0x00f78a20(0x3d33318);
          func_0x00f78a20(0x3d33320);
          func_0x00f78a20(0x3d33328);
          func_0x00f78a20(0x3d3cd70);
          func_0x00f78a20(0x3d24e08);
          bRam0000000003eb48a3 = 1;
        }
        *(undefined8 *)((long)register0x00000008 + -600) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x260) = 0;
        if ((*(long *)(lVar22 + 0x40) != 0) &&
           (lVar8 = *(long *)(*(long *)(lVar22 + 0x40) + 0x30), lVar8 != 0)) {
          plVar23 = (long *)0x3d24e08;
          /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x2b0),lVar8,
                          uRam0000000003d3cd70);
          *(undefined8 *)((long)register0x00000008 + -0x228) =
               *(undefined8 *)((long)register0x00000008 + -0x288);
          *(undefined8 *)((long)register0x00000008 + -0x230) =
               *(undefined8 *)((long)register0x00000008 + -0x290);
          *(undefined8 *)((long)register0x00000008 + -0x218) =
               *(undefined8 *)((long)register0x00000008 + -0x278);
          *(undefined8 *)((long)register0x00000008 + -0x220) =
               *(undefined8 *)((long)register0x00000008 + -0x280);
          *(undefined8 *)((long)register0x00000008 + -0x210) =
               *(undefined8 *)((long)register0x00000008 + -0x270);
          *(undefined8 *)((long)register0x00000008 + -0x248) =
               *(undefined8 *)((long)register0x00000008 + -0x2a8);
          *(undefined8 *)((long)register0x00000008 + -0x250) =
               *(undefined8 *)((long)register0x00000008 + -0x2b0);
          *(undefined8 *)((long)register0x00000008 + -0x238) =
               *(undefined8 *)((long)register0x00000008 + -0x298);
          *(undefined8 *)((long)register0x00000008 + -0x240) =
               *(undefined8 *)((long)register0x00000008 + -0x2a0);
          goto LAB_01478624;
        }
        func_0x00f78af4();
        if (extraout_w1_00 == 1) {
          plVar7 = (long *)___cxa_begin_catch();
          lVar9 = *plVar7;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x250),*unaff_x23);
          if (lVar9 == 0) goto code_r0x014786b8;
          func_0x00f78ac0(lVar9,0);
        }
        lVar8 = __Unwind_Resume();
        *(long *)((long)register0x00000008 + -0x2d0) = lVar9;
        *(long *)((long)register0x00000008 + -0x2c8) = lVar22;
        *(undefined1 **)((long)register0x00000008 + -0x2c0) =
             (undefined1 *)((long)register0x00000008 + -0x1d0);
        *(code **)((long)register0x00000008 + -0x2b8) =
             Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                  ((undefined1 *)((long)register0x00000008 + -0x330),lVar8,
                   *(undefined8 *)(lVar8 + 0xa8));
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x310);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x2f8);
        uVar18 = *(undefined8 *)((long)register0x00000008 + -0x300);
        extraout_x8[5] = *(undefined8 *)((long)register0x00000008 + -0x308);
        extraout_x8[4] = uVar21;
        extraout_x8[7] = uVar13;
        extraout_x8[6] = uVar18;
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x2f0);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x2d8);
        uVar18 = *(undefined8 *)((long)register0x00000008 + -0x2e0);
        extraout_x8[9] = *(undefined8 *)((long)register0x00000008 + -0x2e8);
        extraout_x8[8] = uVar21;
        extraout_x8[0xb] = uVar13;
        extraout_x8[10] = uVar18;
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x330);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x318);
        uVar18 = *(undefined8 *)((long)register0x00000008 + -800);
        extraout_x8[1] = *(undefined8 *)((long)register0x00000008 + -0x328);
        *extraout_x8 = uVar21;
        extraout_x8[3] = uVar13;
        extraout_x8[2] = uVar18;
        return;
      }
      puVar26 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteHitPlayerCondition;
      lVar8 = func_0x00f78af4();
      puVar3 = (undefined1 *)((long)register0x00000008 + -0x90);
      lVar22 = lVar9;
    }
code_r0x01535b58:
    puVar4 = puVar3 + -0x60;
    *(undefined8 *)(puVar3 + -0x30) = unaff_x22;
    *(long *)(puVar3 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar3 + -0x20) = uVar21;
    *(long *)(puVar3 + -0x18) = lVar22;
    *(undefined1 **)(puVar3 + -0x10) = puVar25;
    *(undefined **)(puVar3 + -8) = puVar26;
    puVar25 = puVar3 + -0x10;
    lVar22 = 0x3eb4000;
    if ((bRam0000000003eb4ec4 & 1) == 0) {
      func_0x00f78a20(0x3d527d0);
      func_0x00f78a20(0x3d527f0);
      func_0x00f78a20(0x3d278d8);
      func_0x00f78a20(0x3d27728);
      bRam0000000003eb4ec4 = 1;
    }
    lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar8);
    if (lVar9 != 0) {
      unaff_x22 = 0x3d52000;
      uVar21 = *(undefined8 *)(lVar9 + 0xa0);
      uVar13 = *(undefined8 *)(lVar9 + 0xb8);
      uVar18 = *(undefined8 *)(lVar9 + 0xb0);
      *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(lVar9 + 0xa8);
      *(undefined8 *)(puVar3 + -0x60) = uVar21;
      *(undefined8 *)(puVar3 + -0x48) = uVar13;
      *(undefined8 *)(puVar3 + -0x50) = uVar18;
      uVar21 = *(undefined8 *)(lVar9 + 0xc0);
      *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(lVar9 + 200);
      *(undefined8 *)(puVar3 + -0x40) = uVar21;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar8,puVar3 + -0x60,0);
      *(undefined4 *)(lVar8 + 0xe8) = 0;
      lVar22 = *(long *)(lVar8 + 0xd8);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      uVar15 = uRam0000000003d527d0;
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar8,uRam0000000003d527d0,0);
      if (lVar22 != 0) {
        uVar15 = 0;
        /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar22,unaff_x21);
        if (*(long *)(lVar8 + 0x10) != 0) {
          unaff_x22 = 0x3d52000;
          plVar23 = *(long **)(*(long *)(lVar8 + 0x10) + 0x40);
          unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
          auVar35._8_8_ = unaff_x21;
          auVar35._0_8_ = plVar23;
          uVar18 = 0;
          uVar15 = uRam0000000003d527f0;
          /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar8,uRam0000000003d527f0,0);
          lVar22 = 0;
          if (plVar23 != (long *)0x0) {
            puVar26 = &UNK_01535c74;
            goto code_r0x0159d844;
          }
        }
      }
    }
    auVar32 = func_0x00f78af4();
    lVar9 = auVar32._0_8_;
    puVar2 = puVar3 + -0xb0;
    *(long *)(puVar3 + -0x80) = lVar22;
    *(long *)(puVar3 + -0x78) = lVar8;
    *(undefined1 **)(puVar3 + -0x70) = puVar25;
    *(undefined **)(puVar3 + -0x68) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnPickup;
    if (auVar32._8_8_ != 0) {
      if (*(long *)(auVar32._8_8_ + 0x10) != *(long *)(lVar9 + 0x38)) {
        return;
      }
      lVar11 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar9);
      lVar8 = lVar9;
      if (lVar11 != 0) {
        uVar21 = *(undefined8 *)(lVar11 + 0x40);
        uVar13 = *(undefined8 *)(lVar11 + 0x58);
        uVar18 = *(undefined8 *)(lVar11 + 0x50);
        *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(lVar11 + 0x48);
        *(undefined8 *)(puVar3 + -0xb0) = uVar21;
        *(undefined8 *)(puVar3 + -0x98) = uVar13;
        *(undefined8 *)(puVar3 + -0xa0) = uVar18;
        uVar21 = *(undefined8 *)(lVar11 + 0x60);
        *(undefined8 *)(puVar3 + -0x88) = *(undefined8 *)(lVar11 + 0x68);
        *(undefined8 *)(puVar3 + -0x90) = uVar21;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar9,puVar3 + -0xb0,0);
        if (*(int *)(lVar9 + 0xe8) != 1) {
          return;
        }
        Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompletePickupCondition(lVar9);
        return;
      }
    }
    unaff_x19 = func_0x00f78af4();
    *(undefined8 *)(puVar3 + -0xe0) = unaff_x22;
    *(long *)(puVar3 + -0xd8) = unaff_x21;
    *(long *)(puVar3 + -0xd0) = lVar22;
    *(long *)(puVar3 + -200) = lVar8;
    *(undefined1 **)(puVar3 + -0xc0) = puVar3 + -0x70;
    *(undefined **)(puVar3 + -0xb8) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartUseUsableSection;
    unaff_x20 = 0x3eb4000;
    if ((bRam0000000003eb4ec1 & 1) == 0) {
      func_0x00f78a20(0x3d52800);
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb4ec1 = 1;
    }
    *(undefined4 *)(unaff_x19 + 0xe8) = 2;
    lVar22 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(unaff_x19);
    if (lVar22 != 0) {
      uVar15 = (ulong)*(uint *)(lVar22 + 0x14c);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                (unaff_x19,*(undefined8 *)(lVar22 + 0x130),uVar15,*(char *)(lVar22 + 0x148) != '\0',
                 0);
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        unaff_x22 = 0x3d52000;
        lVar22 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x40);
        unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
        auVar33._8_8_ = unaff_x21;
        auVar33._0_8_ = lVar22;
        uVar15 = uRam0000000003d52800;
        /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,unaff_x19,uRam0000000003d52800,0);
        unaff_x20 = 0;
        if (lVar22 != 0) {
          puVar25 = *(undefined1 **)(puVar3 + -0xc0);
          puVar26 = *(undefined **)(puVar3 + -0xb8);
          plVar23 = *(long **)(puVar3 + -0xd0);
          uVar18 = *(undefined8 *)(puVar3 + -200);
          uVar21 = *(undefined8 *)(puVar3 + -0xe0);
          lVar22 = *(long *)(puVar3 + -0xd8);
          goto code_r0x0159d188;
        }
      }
    }
    auVar32 = func_0x00f78af4();
    param_1 = auVar32._0_8_;
    *(undefined1 **)(puVar3 + -0xf0) = puVar3 + -0xc0;
    *(undefined **)(puVar3 + -0xe8) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnUse;
    if (auVar32._8_8_ == 0) {
      lVar22 = func_0x00f78af4();
      *(undefined8 *)(puVar3 + -0x120) = unaff_x22;
      *(long *)(puVar3 + -0x118) = unaff_x21;
      *(undefined8 *)(puVar3 + -0x110) = unaff_x20;
      *(long *)(puVar3 + -0x108) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x100) = puVar3 + -0xf0;
      *(undefined **)(puVar3 + -0xf8) =
           &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartHitPlayerSection;
      uVar21 = 0x3eb4000;
      if ((bRam0000000003eb4ec3 & 1) == 0) {
        func_0x00f78a20(0x3d527f0);
        func_0x00f78a20(0x3d27728);
        bRam0000000003eb4ec3 = 1;
      }
      lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar22);
      if (lVar9 == 0) goto code_r0x01535ee8;
      uVar15 = (ulong)*(uint *)(lVar9 + 0x1ac);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                (lVar22,*(undefined8 *)(lVar9 + 400),uVar15,*(char *)(lVar9 + 0x1a8) != '\0',0);
      *(undefined4 *)(lVar22 + 0xe8) = 3;
      if (*(long *)(lVar22 + 0x10) == 0) goto code_r0x01535ee8;
      unaff_x22 = 0x3d52000;
      lVar9 = *(long *)(*(long *)(lVar22 + 0x10) + 0x40);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
      uVar15 = uRam0000000003d527f0;
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar22,uRam0000000003d527f0,0);
      uVar21 = 0;
      if (lVar9 == 0) goto code_r0x01535ee8;
      *(undefined8 *)(puVar3 + -0x120) = *(undefined8 *)(puVar3 + -0x120);
      *(undefined8 *)(puVar3 + -0x118) = *(undefined8 *)(puVar3 + -0x118);
      *(undefined8 *)(puVar3 + -0x110) = *(undefined8 *)(puVar3 + -0x110);
      *(undefined8 *)(puVar3 + -0x108) = *(undefined8 *)(puVar3 + -0x108);
      *(undefined8 *)(puVar3 + -0x100) = *(undefined8 *)(puVar3 + -0x100);
      *(undefined8 *)(puVar3 + -0xf8) = *(undefined8 *)(puVar3 + -0xf8);
      if ((bRam0000000003eb51f9 & 1) == 0) {
        func_0x00f78a20(0x3d27728,unaff_x21,0);
        bRam0000000003eb51f9 = 1;
      }
      plVar23 = (long *)(lVar9 + 0x98);
      lVar22 = *plVar23;
      while ((plVar7 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar22,unaff_x21,0), plVar7 == (long *)0x0 ||
             (*plVar7 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
        lVar9 = func_0x00ff0f44(plVar23,plVar7,lVar22);
        bVar5 = lVar22 == lVar9;
        lVar22 = lVar9;
        if (bVar5) {
          return;
        }
      }
      auVar32 = func_0x00f78e5c(plVar7);
      uVar18 = auVar32._8_8_;
      puVar2 = puVar3 + -0x150;
      *(undefined8 *)(puVar3 + -0x150) = 0x3d27728;
      *(long *)(puVar3 + -0x148) = lVar22;
      *(long **)(puVar3 + -0x140) = plVar23;
      *(long *)(puVar3 + -0x138) = unaff_x21;
      *(undefined1 **)(puVar3 + -0x130) = puVar3 + -0x100;
      *(undefined **)(puVar3 + -0x128) =
           &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
      puVar25 = puVar3 + -0x130;
      if ((bRam0000000003eb51fb & 1) == 0) {
        func_0x00f78a20(0x3d27730);
        bRam0000000003eb51fb = 1;
      }
      uVar21 = 0x3d27730;
      plVar23 = (long *)(auVar32._0_8_ + 0xa0);
      lVar22 = *plVar23;
      while ((plVar7 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar22,uVar18,0), plVar7 == (long *)0x0 ||
             (*plVar7 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
        lVar9 = func_0x00ff0f44(plVar23,plVar7,lVar22);
        bVar5 = lVar22 == lVar9;
        lVar22 = lVar9;
        if (bVar5) {
          return;
        }
      }
      puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
      auVar33 = func_0x00f78e5c(plVar7);
code_r0x0159d188:
      *(undefined8 *)(puVar2 + -0x30) = uVar21;
      *(long *)(puVar2 + -0x28) = lVar22;
      *(long **)(puVar2 + -0x20) = plVar23;
      *(undefined8 *)(puVar2 + -0x18) = uVar18;
      *(undefined1 **)(puVar2 + -0x10) = puVar25;
      *(undefined **)(puVar2 + -8) = puVar26;
      if ((bRam0000000003eb51f3 & 1) == 0) {
        func_0x00f78a20(0x3d27718);
        bRam0000000003eb51f3 = 1;
      }
      plVar23 = (long *)(auVar33._0_8_ + 0x80);
      lVar22 = *plVar23;
      while ((plVar7 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar22,auVar33._8_8_,0), plVar7 == (long *)0x0 ||
             (*plVar7 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
        lVar9 = func_0x00ff0f44(plVar23,plVar7,lVar22);
        bVar5 = lVar22 == lVar9;
        lVar22 = lVar9;
        if (bVar5) {
          return;
        }
      }
      auVar32 = func_0x00f78e5c(plVar7);
      *(undefined8 *)(puVar2 + -0x60) = 0x3d27718;
      *(long *)(puVar2 + -0x58) = lVar22;
      *(long **)(puVar2 + -0x50) = plVar23;
      *(long *)(puVar2 + -0x48) = auVar33._8_8_;
      *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x38) =
           &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
      if ((bRam0000000003eb51fd & 1) == 0) {
        func_0x00f78a20(0x3d27738);
        bRam0000000003eb51fd = 1;
      }
      plVar23 = (long *)(auVar32._0_8_ + 0xa8);
      lVar22 = *plVar23;
      while ((plVar7 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar22,auVar32._8_8_,0), plVar7 == (long *)0x0 ||
             (*plVar7 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
        lVar9 = func_0x00ff0f44(plVar23,plVar7,lVar22);
        bVar5 = lVar22 == lVar9;
        lVar22 = lVar9;
        if (bVar5) {
          return;
        }
      }
      auVar34 = func_0x00f78e5c(plVar7);
      *(undefined8 *)(puVar2 + -0x90) = 0x3d27738;
      *(long *)(puVar2 + -0x88) = lVar22;
      *(long **)(puVar2 + -0x80) = plVar23;
      *(long *)(puVar2 + -0x78) = auVar32._8_8_;
      *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x40;
      *(undefined **)(puVar2 + -0x68) =
           &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
      if ((bRam0000000003eb51f5 & 1) == 0) {
        func_0x00f78a20(0x3d27700);
        bRam0000000003eb51f5 = 1;
      }
      plVar23 = (long *)(auVar34._0_8_ + 0x88);
      lVar22 = *plVar23;
      while ((plVar7 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar22,auVar34._8_8_,0), plVar7 == (long *)0x0 ||
             (*plVar7 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
        lVar9 = func_0x00ff0f44(plVar23,plVar7,lVar22);
        bVar5 = lVar22 == lVar9;
        lVar22 = lVar9;
        if (bVar5) {
          return;
        }
      }
      auVar32 = func_0x00f78e5c(plVar7);
      puVar3 = puVar2 + -0xe0;
      *(undefined8 *)(puVar2 + -0xe0) = unaff_x26;
      *(undefined8 *)(puVar2 + -0xd8) = unaff_x25;
      *(undefined8 *)(puVar2 + -0xd0) = unaff_x24;
      *(undefined8 **)(puVar2 + -200) = unaff_x23;
      *(undefined8 *)(puVar2 + -0xc0) = 0x3d27700;
      *(long *)(puVar2 + -0xb8) = lVar22;
      *(long **)(puVar2 + -0xb0) = plVar23;
      *(long *)(puVar2 + -0xa8) = auVar34._8_8_;
      *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
      *(code **)(puVar2 + -0x98) = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
      puVar25 = puVar2 + -0xa0;
      unaff_x23 = (undefined8 *)0x3d27718;
      unaff_x24 = 0x3d570f0;
      if ((bRam0000000003eb51b7 & 1) == 0) {
        func_0x00f78a20(0x3d524e0);
        func_0x00f78a20(0x3d524e8);
        func_0x00f78a20(0x3d524f0);
        func_0x00f78a20(0x3d524f8);
        func_0x00f78a20(0x3d570d0);
        func_0x00f78a20(0x3d570f0);
        func_0x00f78a20(0x3d27700);
        func_0x00f78a20(0x3d27718);
        func_0x00f78a20(0x3d27728);
        func_0x00f78a20(0x3d27730);
        func_0x00f78a20(0x3d27738);
        bRam0000000003eb51b7 = 1;
      }
      unaff_x21 = *(long *)(auVar32._0_8_ + 0x40);
      uVar21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
      auVar34._8_8_ = uVar21;
      auVar34._0_8_ = unaff_x21;
      uVar18 = 0;
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(uVar21,auVar32._0_8_,uRam0000000003d570f0,0);
      if (unaff_x21 == 0) {
        puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
        auVar34 = func_0x00f78af4();
      }
      else {
        unaff_x24 = 0x3d27000;
        unaff_x25 = 0x3d52000;
        puVar26 = (undefined *)0x159d470;
        puVar3 = puVar2 + -0xe0;
      }
      goto code_r0x0159d5c4;
    }
    if (*(long *)(auVar32._8_8_ + 0x10) != *(long *)(param_1 + 0x38)) {
      return;
    }
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0xe0);
    unaff_x29 = *(undefined8 *)(puVar3 + -0xf0);
    unaff_x30 = *(undefined8 *)(puVar3 + -0xe8);
    goto code_r0x0153592c;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x100) = 1;
  lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(param_1);
  if (lVar9 == 0) goto LAB_01535ac8;
  uVar21 = *(undefined8 *)(lVar9 + 0x70);
  uVar13 = *(undefined8 *)(lVar9 + 0x88);
  uVar18 = *(undefined8 *)(lVar9 + 0x80);
  *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)(lVar9 + 0x78);
  *(undefined8 *)((long)register0x00000008 + -0x70) = uVar21;
  *(undefined8 *)((long)register0x00000008 + -0x58) = uVar13;
  *(undefined8 *)((long)register0x00000008 + -0x60) = uVar18;
  uVar21 = *(undefined8 *)(lVar9 + 0x90);
  *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(lVar9 + 0x98);
  *(undefined8 *)((long)register0x00000008 + -0x50) = uVar21;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
            (param_1,(undefined1 *)((long)register0x00000008 + -0x70),0);
  lVar22 = *(long *)(param_1 + 0xd0);
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,param_1,uRam0000000003d527e8,0);
  unaff_x22 = 0x3d52000;
  if (lVar22 == 0) goto LAB_01535ac8;
  /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar22,unaff_x21,0);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_01535ac8;
  uVar21 = 0x3d27718;
  unaff_x23 = (undefined8 *)0x3d52000;
  lVar22 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,param_1,uRam0000000003d527f8,0);
  unaff_x22 = uVar21;
  if (lVar22 == 0) goto LAB_01535ac8;
  /*Atlas.Gameplay.Player.GameContextPlayerManager$$remove_OnUsableAttached*/ func_0x015a5cc8(lVar22,unaff_x21,0);
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_01535ac8;
  unaff_x23 = (undefined8 *)0x3d52000;
  lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
  auVar32._8_8_ = lVar9;
  auVar32._0_8_ = param_1;
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar34._8_8_ = unaff_x21;
  auVar34._0_8_ = lVar9;
  uVar18 = 0;
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,param_1,uRam0000000003d52800,0);
  lVar22 = 0;
  unaff_x22 = 0x3d27718;
  if (lVar9 == 0) goto LAB_01535ac8;
  puVar26 = (undefined *)0x1535aa8;
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x70);
code_r0x0159d5c4:
  *(undefined8 *)(puVar3 + -0x30) = uVar21;
  *(long *)(puVar3 + -0x28) = unaff_x21;
  *(long *)(puVar3 + -0x20) = auVar32._8_8_;
  *(long *)(puVar3 + -0x18) = auVar32._0_8_;
  *(undefined1 **)(puVar3 + -0x10) = puVar25;
  *(undefined **)(puVar3 + -8) = puVar26;
  if ((bRam0000000003eb51f4 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f4 = 1;
  }
  plVar23 = (long *)(auVar34._0_8_ + 0x80);
  lVar22 = *plVar23;
  while ((plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar22,auVar34._8_8_,0), plVar7 == (long *)0x0 ||
         (*plVar7 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar9 = func_0x00ff0f44(plVar23,plVar7,lVar22);
    bVar5 = lVar22 == lVar9;
    lVar22 = lVar9;
    if (bVar5) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar7);
  *(undefined8 *)(puVar3 + -0x60) = 0x3d27718;
  *(long *)(puVar3 + -0x58) = lVar22;
  *(long **)(puVar3 + -0x50) = plVar23;
  *(long *)(puVar3 + -0x48) = auVar34._8_8_;
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x38) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar23 = (long *)(auVar32._0_8_ + 0x88);
  lVar22 = *plVar23;
  while ((plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar22,auVar32._8_8_,0), plVar7 == (long *)0x0 ||
         (*plVar7 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar9 = func_0x00ff0f44(plVar23,plVar7,lVar22);
    bVar5 = lVar22 == lVar9;
    lVar22 = lVar9;
    if (bVar5) {
      return;
    }
  }
  auVar34 = func_0x00f78e5c(plVar7);
  *(undefined8 *)(puVar3 + -0x90) = 0x3d27700;
  *(long *)(puVar3 + -0x88) = lVar22;
  *(long **)(puVar3 + -0x80) = plVar23;
  *(long *)(puVar3 + -0x78) = auVar32._8_8_;
  *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
  *(undefined **)(puVar3 + -0x68) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar23 = (long *)(auVar34._0_8_ + 0xa8);
  lVar22 = *plVar23;
  while ((plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar22,auVar34._8_8_,0), plVar7 == (long *)0x0 ||
         (*plVar7 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar9 = func_0x00ff0f44(plVar23,plVar7,lVar22);
    bVar5 = lVar22 == lVar9;
    lVar22 = lVar9;
    if (bVar5) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar7);
  lVar8 = auVar32._8_8_;
  puVar4 = puVar3 + -0xc0;
  *(undefined8 *)(puVar3 + -0xc0) = 0x3d27738;
  *(long *)(puVar3 + -0xb8) = lVar22;
  *(long **)(puVar3 + -0xb0) = plVar23;
  *(long *)(puVar3 + -0xa8) = auVar34._8_8_;
  *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x70;
  *(undefined **)(puVar3 + -0x98) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  puVar25 = puVar3 + -0xa0;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  unaff_x22 = 0x3d27730;
  plVar23 = (long *)(auVar32._0_8_ + 0xa0);
  unaff_x21 = *plVar23;
  while ((plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x21,lVar8,0), plVar7 == (long *)0x0 ||
         (*plVar7 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar22 = func_0x00ff0f44(plVar23,plVar7,unaff_x21);
    bVar5 = unaff_x21 == lVar22;
    unaff_x21 = lVar22;
    if (bVar5) {
      return;
    }
  }
  puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  auVar35 = func_0x00f78e5c(plVar7);
code_r0x0159d844:
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(long *)(puVar4 + -0x28) = unaff_x21;
  *(long **)(puVar4 + -0x20) = plVar23;
  *(long *)(puVar4 + -0x18) = lVar8;
  *(undefined1 **)(puVar4 + -0x10) = puVar25;
  *(undefined **)(puVar4 + -8) = puVar26;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar23 = (long *)0x3d27728;
  plVar7 = (long *)(auVar35._0_8_ + 0x98);
  lVar22 = *plVar7;
  while( true ) {
    puVar16 = (undefined8 *)0x0;
    plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar22,auVar35._8_8_);
    if ((plVar12 != (long *)0x0) && (*plVar12 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar9 = func_0x00ff0f44(plVar7,plVar12,lVar22);
    bVar5 = lVar22 == lVar9;
    lVar22 = lVar9;
    if (bVar5) {
      return;
    }
  }
  lVar9 = func_0x00f78e5c(plVar12);
  *(undefined8 *)(puVar4 + -0x80) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x78) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x70) = unaff_x24;
  *(undefined8 **)(puVar4 + -0x68) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x60) = 0x3d27728;
  *(long *)(puVar4 + -0x58) = lVar22;
  *(long **)(puVar4 + -0x50) = plVar7;
  *(long *)(puVar4 + -0x48) = auVar35._8_8_;
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x38) = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar22 = 0x3eb5000;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar8 = *(long *)(lVar9 + 0x28);
  if (lVar8 != 0) {
    plVar23 = (long *)(lVar9 + 0x10);
    uVar20 = *(uint *)(lVar8 + 0x18);
    if ((int)uVar20 < 1) {
code_r0x0159d9f0:
      if (((*(long *)(lVar9 + 0x20) == 0) ||
          (lVar11 = *(long *)(*(long *)(lVar9 + 0x20) + 0x20), lVar11 == 0)) ||
         (unaff_x23 = *(undefined8 **)(lVar11 + 0x10), unaff_x23 == (undefined8 *)0x0))
      goto code_r0x0159db7c;
      uVar21 = 0x3d1b4e8;
      unaff_x24 = 0x3d1b4e8;
      lVar22 = unaff_x23[3];
      lVar8 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
      uVar18 = uRam0000000003d2a1d8;
      /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar8,lVar9,uRam0000000003d57238,uRam0000000003d2a1d8);
      puVar16 = (undefined8 *)0x0;
      plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar22,lVar8);
      if ((plVar7 == (long *)0x0) || (*plVar7 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
        unaff_x23[3] = plVar7;
        if ((*(long *)(lVar9 + 0x20) == 0) ||
           ((lVar11 = *(long *)(*(long *)(lVar9 + 0x20) + 0x20), lVar11 == 0 ||
            (unaff_x23 = *(undefined8 **)(lVar11 + 0x10), unaff_x23 == (undefined8 *)0x0))))
        goto code_r0x0159db7c;
        uVar21 = 0x3d1b3b0;
        unaff_x24 = 0x3d1b3b0;
        lVar22 = unaff_x23[0xe];
        lVar8 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
        uVar18 = uRam0000000003d29f28;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar8,lVar9,uRam0000000003d57240,uRam0000000003d29f28);
        puVar16 = (undefined8 *)0x0;
        plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar22,lVar8);
        if ((plVar7 == (long *)0x0) || (*plVar7 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
          unaff_x23[0xe] = plVar7;
          if (((*(long *)(lVar9 + 0x20) == 0) ||
              (lVar11 = *(long *)(*(long *)(lVar9 + 0x20) + 0x20), lVar11 == 0)) ||
             (unaff_x23 = *(undefined8 **)(lVar11 + 0x10), unaff_x23 == (undefined8 *)0x0))
          goto code_r0x0159db7c;
          uVar21 = 0x3d1b4e0;
          lVar22 = unaff_x23[5];
          lVar8 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
          uVar18 = uRam0000000003d2a1c8;
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar8,lVar9,uRam0000000003d57230,uRam0000000003d2a1c8);
          puVar16 = (undefined8 *)0x0;
          plVar7 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar22,lVar8);
          if ((plVar7 == (long *)0x0) || (*plVar7 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
            unaff_x23[5] = plVar7;
            *(undefined1 *)(lVar9 + 0x50) = 0;
            *(undefined8 *)(lVar9 + 0x18) = 0;
            *plVar23 = 0;
            *(undefined8 *)(lVar9 + 0x28) = 0;
            *(undefined8 *)(lVar9 + 0x20) = 0;
            return;
          }
        }
      }
      goto code_r0x0159db8c;
    }
    unaff_x23 = (undefined8 *)0x0;
    unaff_x24 = 0x3d43378;
    while( true ) {
      uVar24 = (uint)unaff_x23;
      uVar21 = unaff_x24;
      if (uVar20 <= uVar24) goto code_r0x0159db80;
      if (*plVar23 == 0) break;
      lVar22 = *(long *)(lVar8 + (long)(int)uVar24 * 8 + 0x20);
      puVar16 = puRam0000000003d43378;
      /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar23,lVar22);
      if (lVar22 == 0) break;
      /*Atlas.Gameplay.Player.GameContextPlayer$$DeInit*/ func_0x015a5404(lVar22);
      unaff_x23 = (undefined8 *)(ulong)(uVar24 + 1);
      uVar20 = *(uint *)(lVar8 + 0x18);
      if ((int)uVar20 <= (int)(uVar24 + 1)) goto code_r0x0159d9f0;
    }
  }
code_r0x0159db7c:
  func_0x00f78af4();
  uVar21 = unaff_x24;
code_r0x0159db80:
  uVar13 = func_0x00f78b24();
  func_0x00f78ac0(uVar13,0);
code_r0x0159db8c:
  auVar32 = func_0x00f78e5c();
  puVar14 = auVar32._8_8_;
  plVar7 = auVar32._0_8_;
  *(undefined8 *)(puVar4 + -0xc0) = uVar21;
  *(undefined8 **)(puVar4 + -0xb8) = unaff_x23;
  *(long **)(puVar4 + -0xb0) = plVar23;
  *(long *)(puVar4 + -0xa8) = lVar8;
  *(long *)(puVar4 + -0xa0) = lVar22;
  *(long *)(puVar4 + -0x98) = lVar9;
  *(undefined1 **)(puVar4 + -0x90) = puVar4 + -0x40;
  *(code **)(puVar4 + -0x88) = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar17 = puVar16;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar7[3] != 0) &&
      (puVar17 = puVar16, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar7[3],puVar14,puVar16,uVar18,0),
      puVar16 != (undefined8 *)0x0)) && (lVar22 = puVar16[2], lVar22 != 0)) {
    uVar21 = *(undefined8 *)(lVar22 + 0x48);
    uVar27 = *(undefined8 *)(lVar22 + 0x60);
    uVar13 = *(undefined8 *)(lVar22 + 0x58);
    *(undefined8 *)(puVar4 + -0xd8) = *(undefined8 *)(lVar22 + 0x50);
    *(undefined8 *)(puVar4 + -0xe0) = uVar21;
    *(undefined8 *)(puVar4 + -200) = uVar27;
    *(undefined8 *)(puVar4 + -0xd0) = uVar13;
    iVar6 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar4 + -0xe0,0);
    if ((iVar6 == 0) || (puVar16 == puVar14)) {
      return;
    }
    iVar6 = (**(code **)(*plVar7 + 0x2a8))(plVar7,*(undefined8 *)(*plVar7 + 0x2b0));
    if ((plVar7[0x18] != 0) && (lVar22 = *(long *)(plVar7[0x18] + 0x20), lVar22 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar4 + -0xf8,lVar22,0);
      *(int *)(puVar16 + 0xf) = *(int *)(puVar16 + 0xf) + iVar6;
      uVar21 = *(undefined8 *)(puVar4 + -0xf8);
      puVar16[0x11] = *(undefined8 *)(puVar4 + -0xf0);
      puVar16[0x10] = uVar21;
      puVar16[0x12] = *(undefined8 *)(puVar4 + -0xe8);
      if (puVar16[2] != 0) {
        if (*(int *)(puVar16[2] + 0x50) == 0) {
          uVar21 = (**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
          puVar17 = (undefined8 *)0x0;
          iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar21,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar6 != 0) {
            if (plVar7[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar7[3],*(undefined4 *)(puVar16 + 0xf),0);
          }
        }
        if (plVar7[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar7[0x46],puVar14,puVar16,uVar18,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar36 = func_0x00f78af4();
  lVar22 = auVar36._0_8_;
  iVar6 = *(int *)(lVar22 + 0x78);
  uVar13 = puVar17[1];
  uVar18 = *puVar17;
  *(undefined8 *)(puVar4 + -0x118) = uVar13;
  *(undefined8 *)(puVar4 + -0x120) = uVar18;
  uVar21 = puVar17[2];
  *(undefined8 *)(puVar4 + -0x110) = uVar21;
  *(int *)(lVar22 + 0x78) = iVar6 + auVar36._8_4_;
  *(undefined8 *)(lVar22 + 0x88) = uVar13;
  *(undefined8 *)(lVar22 + 0x80) = uVar18;
  *(undefined8 *)(lVar22 + 0x90) = uVar21;
  return;
LAB_01478328:
  do {
    uVar15 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0x130),uRam0000000003d33320)
    ;
    if ((uVar15 & 1) == 0) {
LAB_01478494:
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x130),uRam0000000003d33318);
      return;
    }
    lVar22 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___ctor(lVar22,0);
    if (lVar22 == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(long *)(lVar22 + 0x50) = lVar9;
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x108);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x110);
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0xf8);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x100);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x118);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x120);
    *(undefined8 *)(lVar22 + 0x40) = *(undefined8 *)((long)register0x00000008 + -0xf0);
    *(undefined8 *)(lVar22 + 0x28) = uVar27;
    *(undefined8 *)(lVar22 + 0x20) = uVar13;
    *(undefined8 *)(lVar22 + 0x38) = uVar18;
    *(undefined8 *)(lVar22 + 0x30) = uVar21;
    *(undefined8 *)(lVar22 + 0x18) = uVar29;
    *(undefined8 *)(lVar22 + 0x10) = uVar28;
    *(undefined8 *)((long)register0x00000008 + -0x180) = *(undefined8 *)(lVar22 + 0x18);
    uVar21 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x180))
    ;
    uVar15 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -0xe0),uVar21,0);
  } while ((uVar15 & 1) == 0);
  if (*(long *)(lVar9 + 0x60) == 0) {
    func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x14784e0);
    (*pcVar1)();
  }
  puVar16 = (undefined8 *)(lVar22 + 0x10);
  puVar17 = (undefined8 *)(lVar22 + 0x48);
  uVar15 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar9 + 0x60),*puVar16,puVar17,0);
  if ((uVar15 & 1) == 0) goto LAB_01478494;
  uVar21 = *(undefined8 *)(lVar9 + 0xa0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar21,0,0);
  if ((uVar15 & 1) != 0) {
    if (*(long *)(lVar9 + 0xa0) == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(undefined8 *)((long)register0x00000008 + -0x138) =
         *(undefined8 *)(*(long *)(lVar9 + 0xa0) + 0x18);
    *(undefined8 *)((long)register0x00000008 + -0x180) = *puVar16;
    uVar21 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x180))
    ;
    uVar15 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -0x138),uVar21,0);
    if ((uVar15 & 1) != 0) {
      uVar21 = *(undefined8 *)(lVar9 + 0x38);
      uVar18 = *puVar16;
      uVar27 = *(undefined8 *)(lVar22 + 0x28);
      uVar13 = *(undefined8 *)(lVar22 + 0x20);
      *(undefined8 *)((long)register0x00000008 + -0x1b8) = *(undefined8 *)(lVar22 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar18;
      *(undefined8 *)((long)register0x00000008 + -0x1a8) = uVar27;
      *(undefined8 *)((long)register0x00000008 + -0x1b0) = uVar13;
      uVar18 = *(undefined8 *)(lVar22 + 0x30);
      *(undefined8 *)((long)register0x00000008 + -0x198) = *(undefined8 *)(lVar22 + 0x38);
      *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar18;
      *(undefined8 *)((long)register0x00000008 + -400) = *(undefined8 *)(lVar22 + 0x40);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                (lVar9,uVar21,(undefined1 *)((long)register0x00000008 + -0x1c0));
      goto LAB_01478328;
    }
  }
  uVar18 = *puVar17;
  uVar21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar21,lVar22,uRam0000000003d62270,0);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AddBaseListener(lVar9,uVar18,uVar21,*puVar17);
  goto LAB_01478328;
code_r0x01535ee8:
  lVar8 = func_0x00f78af4();
  *(undefined1 **)(puVar3 + -0x130) = puVar3 + -0x100;
  *(undefined **)(puVar3 + -0x128) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnHit;
  if (uVar15 == 0) {
    func_0x00f78af4();
    return;
  }
  if (*(long *)(uVar15 + 0x10) != *(long *)(lVar8 + 0x38)) {
    return;
  }
  puVar25 = *(undefined1 **)(puVar3 + -0x130);
  puVar26 = *(undefined **)(puVar3 + -0x128);
  puVar3 = puVar3 + -0x120;
  goto code_r0x01535b58;
LAB_01478624:
  do {
    uVar15 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0x250),uRam0000000003d33320)
    ;
    if ((uVar15 & 1) == 0) {
      uVar19 = 0x7b;
code_r0x0147869c:
      *(undefined4 *)((long)register0x00000008 + -0x268) = uVar19;
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x250),uRam0000000003d33318);
      if (*(int *)((long)register0x00000008 + -0x268) != 0x86) {
code_r0x014786b8:
        lVar9 = *plVar23;
        if (((*(ushort *)(lVar9 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar9 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar9 = *plVar23;
        }
        *(undefined8 *)(lVar22 + 0xa8) = **(undefined8 **)(lVar9 + 0xb8);
      }
      return;
    }
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x240);
    *(undefined8 *)((long)register0x00000008 + -0x2b0) =
         *(undefined8 *)((long)register0x00000008 + -0x238);
    uVar18 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x2b0))
    ;
    uVar15 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar22 + 0xa8,uVar18,0);
  } while ((uVar15 & 1) == 0);
  if (*(long *)(lVar22 + 0x60) == 0) {
    func_0x00f78af4();
  }
  else {
    uVar15 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar22 + 0x60),uVar21,
                             (undefined1 *)((long)register0x00000008 + -600),0);
    if ((uVar15 & 1) == 0) {
      uVar19 = 0x86;
      goto code_r0x0147869c;
    }
    if (*(long *)((long)register0x00000008 + -600) != 0) {
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                (lVar22,*(undefined8 *)(*(long *)((long)register0x00000008 + -600) + 0x18));
      goto LAB_01478624;
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1478708);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1535acc | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.OnEnterHitPlayerEndTrigger
// ============================================================

/* WARNING: Possible PIC construction at 0x01535c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535aa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x01535c74) */
/* WARNING: Removing unreachable block (ram,0x01535aa8) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterHitPlayerEndTrigger(long param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined8 *extraout_x8;
  long unaff_x19;
  undefined8 uVar20;
  long lVar21;
  long unaff_x20;
  long *plVar22;
  long unaff_x21;
  undefined8 uVar23;
  undefined8 unaff_x22;
  uint uVar24;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  
code_r0x01535acc:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  uVar15 = 0;
  iVar6 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
  if (iVar6 == 0) {
    return;
  }
  uVar20 = *(undefined8 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x20) = uVar20;
  *(undefined8 *)((long)register0x00000008 + -0x18) =
       *(undefined8 *)((long)register0x00000008 + -0x18);
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x10);
  uVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(param_1,0);
  if ((uVar10 & 1) == 0) {
    puVar3 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar25 = *(undefined **)((long)register0x00000008 + -8);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    lVar7 = *(long *)((long)register0x00000008 + -0x18);
    lVar21 = param_1;
  }
  else {
    if (*(long *)(param_1 + 0xb8) != 0) {
      Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsedUsables(*(long *)(param_1 + 0xb8),0);
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                ((undefined1 *)((long)register0x00000008 + -0x90),param_1,
                 *(undefined8 *)(param_1 + 0xa8));
      *(undefined8 *)((long)register0x00000008 + -0xd8) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0xe0) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      uVar28 = *(undefined8 *)((long)register0x00000008 + -0x58);
      uVar27 = *(undefined8 *)((long)register0x00000008 + -0x60);
      uVar26 = *(undefined8 *)((long)register0x00000008 + -0x48);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x50);
      *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar28;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar27;
      *(undefined8 *)((long)register0x00000008 + -0x98) = uVar26;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar13;
      uVar30 = *(undefined8 *)((long)register0x00000008 + -0x68);
      uVar29 = *(undefined8 *)((long)register0x00000008 + -0x70);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar30;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar29;
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x40);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0x38);
      *(undefined8 *)((long)register0x00000008 + -0x68) = uVar30;
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar29;
      *(undefined8 *)((long)register0x00000008 + -0x58) = uVar28;
      *(undefined8 *)((long)register0x00000008 + -0x60) = uVar27;
      *(undefined8 *)((long)register0x00000008 + -0x48) = uVar26;
      *(undefined8 *)((long)register0x00000008 + -0x50) = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar28;
      *(undefined8 *)((long)register0x00000008 + -0x100) = uVar27;
      *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar26;
      *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0x108) = uVar30;
      *(undefined8 *)((long)register0x00000008 + -0x110) = uVar29;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                (param_1,(undefined1 *)((long)register0x00000008 + -0x110));
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnHumanPlayerAtLocator(param_1,uVar20);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnAIsAtLocators(param_1,uVar23);
      uVar20 = *(undefined8 *)(param_1 + 0xa8);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection(param_1);
      plVar22 = *(long **)((long)register0x00000008 + -0x30);
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x30) = plVar22;
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
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar20;
      if ((bRam0000000003eb48a2 & 1) == 0) {
        func_0x00f78a20(0x3d33318);
        func_0x00f78a20(0x3d33320);
        func_0x00f78a20(0x3d33328);
        func_0x00f78a20(0x3d278d8);
        func_0x00f78a20(0x3d3cd70);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d24e08);
        func_0x00f78a20(0x3d62270);
        func_0x00f78a20(0x3d26ac8);
        bRam0000000003eb48a2 = 1;
      }
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      *(undefined8 *)((long)register0x00000008 + -200) = 0;
      *(undefined8 *)(param_1 + 0xa8) = uVar20;
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x30), lVar7 != 0)) {
        /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x110),lVar7,uRam0000000003d3cd70
                       );
        *(undefined8 *)((long)register0x00000008 + -0x98) =
             *(undefined8 *)((long)register0x00000008 + -0xe8);
        *(undefined8 *)((long)register0x00000008 + -0xa0) =
             *(undefined8 *)((long)register0x00000008 + -0xf0);
        *(undefined8 *)((long)register0x00000008 + -0x88) =
             *(undefined8 *)((long)register0x00000008 + -0xd8);
        *(undefined8 *)((long)register0x00000008 + -0x90) =
             *(undefined8 *)((long)register0x00000008 + -0xe0);
        *(undefined8 *)((long)register0x00000008 + -0x80) =
             *(undefined8 *)((long)register0x00000008 + -0xd0);
        *(undefined8 *)((long)register0x00000008 + -0xb8) =
             *(undefined8 *)((long)register0x00000008 + -0x108);
        *(undefined8 *)((long)register0x00000008 + -0xc0) =
             *(undefined8 *)((long)register0x00000008 + -0x110);
        *(undefined8 *)((long)register0x00000008 + -0xa8) =
             *(undefined8 *)((long)register0x00000008 + -0xf8);
        *(undefined8 *)((long)register0x00000008 + -0xb0) =
             *(undefined8 *)((long)register0x00000008 + -0x100);
        goto LAB_01478328;
      }
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar8 = (long *)___cxa_begin_catch();
        param_1 = *plVar8;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0xc0),uRam0000000003d33318);
        if (param_1 == 0) {
          return;
        }
        func_0x00f78ac0(param_1,0);
      }
      lVar7 = __Unwind_Resume();
      *(undefined8 *)((long)register0x00000008 + -400) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0x188) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x180) = plVar22;
      *(undefined8 *)((long)register0x00000008 + -0x178) = 0x3eb4000;
      *(undefined8 *)((long)register0x00000008 + -0x170) = uVar20;
      *(long *)((long)register0x00000008 + -0x168) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0x160) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0x158) =
           Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
      lVar21 = 0x3eb4000;
      if ((bRam0000000003eb48a3 & 1) == 0) {
        func_0x00f78a20(0x3d33318);
        func_0x00f78a20(0x3d33320);
        func_0x00f78a20(0x3d33328);
        func_0x00f78a20(0x3d3cd70);
        func_0x00f78a20(0x3d24e08);
        bRam0000000003eb48a3 = 1;
      }
      *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x1f0) = 0;
      if ((*(long *)(lVar7 + 0x40) != 0) &&
         (lVar9 = *(long *)(*(long *)(lVar7 + 0x40) + 0x30), lVar9 != 0)) {
        plVar22 = (long *)0x3d24e08;
        /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x240),lVar9,uRam0000000003d3cd70
                       );
        *(undefined8 *)((long)register0x00000008 + -0x1b8) =
             *(undefined8 *)((long)register0x00000008 + -0x218);
        *(undefined8 *)((long)register0x00000008 + -0x1c0) =
             *(undefined8 *)((long)register0x00000008 + -0x220);
        *(undefined8 *)((long)register0x00000008 + -0x1a8) =
             *(undefined8 *)((long)register0x00000008 + -0x208);
        *(undefined8 *)((long)register0x00000008 + -0x1b0) =
             *(undefined8 *)((long)register0x00000008 + -0x210);
        *(undefined8 *)((long)register0x00000008 + -0x1a0) =
             *(undefined8 *)((long)register0x00000008 + -0x200);
        *(undefined8 *)((long)register0x00000008 + -0x1d8) =
             *(undefined8 *)((long)register0x00000008 + -0x238);
        *(undefined8 *)((long)register0x00000008 + -0x1e0) =
             *(undefined8 *)((long)register0x00000008 + -0x240);
        *(undefined8 *)((long)register0x00000008 + -0x1c8) =
             *(undefined8 *)((long)register0x00000008 + -0x228);
        *(undefined8 *)((long)register0x00000008 + -0x1d0) =
             *(undefined8 *)((long)register0x00000008 + -0x230);
        goto LAB_01478624;
      }
      func_0x00f78af4();
      if (extraout_w1_00 == 1) {
        plVar8 = (long *)___cxa_begin_catch();
        lVar21 = *plVar8;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x1e0),*unaff_x23);
        if (lVar21 == 0) goto code_r0x014786b8;
        func_0x00f78ac0(lVar21,0);
      }
      lVar9 = __Unwind_Resume();
      *(long *)((long)register0x00000008 + -0x260) = lVar21;
      *(long *)((long)register0x00000008 + -600) = lVar7;
      *(undefined1 **)((long)register0x00000008 + -0x250) =
           (undefined1 *)((long)register0x00000008 + -0x160);
      *(code **)((long)register0x00000008 + -0x248) =
           Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                ((undefined1 *)((long)register0x00000008 + -0x2c0),lVar9,
                 *(undefined8 *)(lVar9 + 0xa8));
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x288);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0x290);
      extraout_x8[5] = *(undefined8 *)((long)register0x00000008 + -0x298);
      extraout_x8[4] = uVar20;
      extraout_x8[7] = uVar13;
      extraout_x8[6] = uVar23;
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x280);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x268);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0x270);
      extraout_x8[9] = *(undefined8 *)((long)register0x00000008 + -0x278);
      extraout_x8[8] = uVar20;
      extraout_x8[0xb] = uVar13;
      extraout_x8[10] = uVar23;
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x2a8);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0x2b0);
      extraout_x8[1] = *(undefined8 *)((long)register0x00000008 + -0x2b8);
      *extraout_x8 = uVar20;
      extraout_x8[3] = uVar13;
      extraout_x8[2] = uVar23;
      return;
    }
    puVar25 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteHitPlayerCondition;
    lVar21 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    lVar7 = param_1;
  }
code_r0x01535b58:
  puVar4 = (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = uVar20;
  *(long *)((long)register0x00000008 + -0x18) = lVar7;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar3;
  *(undefined **)((long)register0x00000008 + -8) = puVar25;
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x10);
  lVar7 = 0x3eb4000;
  if ((bRam0000000003eb4ec4 & 1) == 0) {
    func_0x00f78a20(0x3d527d0);
    func_0x00f78a20(0x3d527f0);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb4ec4 = 1;
  }
  lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar21);
  if (lVar9 != 0) {
    unaff_x22 = 0x3d52000;
    uVar20 = *(undefined8 *)(lVar9 + 0xa0);
    uVar13 = *(undefined8 *)(lVar9 + 0xb8);
    uVar23 = *(undefined8 *)(lVar9 + 0xb0);
    *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(lVar9 + 0xa8);
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar20;
    *(undefined8 *)((long)register0x00000008 + -0x48) = uVar13;
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar23;
    uVar20 = *(undefined8 *)(lVar9 + 0xc0);
    *(undefined8 *)((long)register0x00000008 + -0x38) = *(undefined8 *)(lVar9 + 200);
    *(undefined8 *)((long)register0x00000008 + -0x40) = uVar20;
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
              (lVar21,(undefined1 *)((long)register0x00000008 + -0x60),0);
    *(undefined4 *)(lVar21 + 0xe8) = 0;
    lVar7 = *(long *)(lVar21 + 0xd8);
    unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    uVar15 = uRam0000000003d527d0;
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar21,uRam0000000003d527d0,0);
    if (lVar7 != 0) {
      uVar15 = 0;
      /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar7,unaff_x21);
      if (*(long *)(lVar21 + 0x10) != 0) {
        unaff_x22 = 0x3d52000;
        plVar22 = *(long **)(*(long *)(lVar21 + 0x10) + 0x40);
        unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
        auVar31._8_8_ = unaff_x21;
        auVar31._0_8_ = plVar22;
        uVar20 = 0;
        uVar15 = uRam0000000003d527f0;
        /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar21,uRam0000000003d527f0,0);
        lVar7 = 0;
        if (plVar22 != (long *)0x0) {
          puVar25 = &UNK_01535c74;
          goto code_r0x0159d844;
        }
      }
    }
  }
  auVar31 = func_0x00f78af4();
  lVar9 = auVar31._0_8_;
  puVar2 = (undefined1 *)((long)register0x00000008 + -0xb0);
  *(long *)((long)register0x00000008 + -0x80) = lVar7;
  *(long *)((long)register0x00000008 + -0x78) = lVar21;
  *(undefined1 **)((long)register0x00000008 + -0x70) = puVar3;
  *(undefined **)((long)register0x00000008 + -0x68) =
       &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnPickup;
  if (auVar31._8_8_ != 0) {
    if (*(long *)(auVar31._8_8_ + 0x10) != *(long *)(lVar9 + 0x38)) {
      return;
    }
    lVar11 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar9);
    lVar21 = lVar9;
    if (lVar11 != 0) {
      uVar20 = *(undefined8 *)(lVar11 + 0x40);
      uVar13 = *(undefined8 *)(lVar11 + 0x58);
      uVar23 = *(undefined8 *)(lVar11 + 0x50);
      *(undefined8 *)((long)register0x00000008 + -0xa8) = *(undefined8 *)(lVar11 + 0x48);
      *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar20;
      *(undefined8 *)((long)register0x00000008 + -0x98) = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar23;
      uVar20 = *(undefined8 *)(lVar11 + 0x60);
      *(undefined8 *)((long)register0x00000008 + -0x88) = *(undefined8 *)(lVar11 + 0x68);
      *(undefined8 *)((long)register0x00000008 + -0x90) = uVar20;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                (lVar9,(undefined1 *)((long)register0x00000008 + -0xb0),0);
      if (*(int *)(lVar9 + 0xe8) != 1) {
        return;
      }
      Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompletePickupCondition(lVar9);
      return;
    }
  }
  lVar9 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x22;
  *(long *)((long)register0x00000008 + -0xd8) = unaff_x21;
  *(long *)((long)register0x00000008 + -0xd0) = lVar7;
  *(long *)((long)register0x00000008 + -200) = lVar21;
  *(undefined1 **)((long)register0x00000008 + -0xc0) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined **)((long)register0x00000008 + -0xb8) =
       &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartUseUsableSection;
  uVar20 = 0x3eb4000;
  if ((bRam0000000003eb4ec1 & 1) == 0) {
    func_0x00f78a20(0x3d52800);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ec1 = 1;
  }
  *(undefined4 *)(lVar9 + 0xe8) = 2;
  lVar7 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar9);
  if (lVar7 != 0) {
    uVar15 = (ulong)*(uint *)(lVar7 + 0x14c);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
              (lVar9,*(undefined8 *)(lVar7 + 0x130),uVar15,*(char *)(lVar7 + 0x148) != '\0',0);
    if (*(long *)(lVar9 + 0x10) != 0) {
      unaff_x22 = 0x3d52000;
      lVar7 = *(long *)(*(long *)(lVar9 + 0x10) + 0x40);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
      auVar32._8_8_ = unaff_x21;
      auVar32._0_8_ = lVar7;
      uVar15 = uRam0000000003d52800;
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar9,uRam0000000003d52800,0);
      uVar20 = 0;
      if (lVar7 != 0) {
        puVar3 = *(undefined1 **)((long)register0x00000008 + -0xc0);
        puVar25 = *(undefined **)((long)register0x00000008 + -0xb8);
        plVar22 = *(long **)((long)register0x00000008 + -0xd0);
        uVar23 = *(undefined8 *)((long)register0x00000008 + -200);
        uVar20 = *(undefined8 *)((long)register0x00000008 + -0xe0);
        lVar7 = *(long *)((long)register0x00000008 + -0xd8);
        goto code_r0x0159d188;
      }
    }
  }
  auVar31 = func_0x00f78af4();
  unaff_x19 = auVar31._0_8_;
  *(undefined1 **)((long)register0x00000008 + -0xf0) =
       (undefined1 *)((long)register0x00000008 + -0xc0);
  *(undefined **)((long)register0x00000008 + -0xe8) =
       &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnUse;
  if (auVar31._8_8_ == 0) {
    lVar7 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x118) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x110) = uVar20;
    *(long *)((long)register0x00000008 + -0x108) = lVar9;
    *(undefined1 **)((long)register0x00000008 + -0x100) =
         (undefined1 *)((long)register0x00000008 + -0xf0);
    *(undefined **)((long)register0x00000008 + -0xf8) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartHitPlayerSection;
    uVar20 = 0x3eb4000;
    if ((bRam0000000003eb4ec3 & 1) == 0) {
      func_0x00f78a20(0x3d527f0);
      func_0x00f78a20(0x3d27728);
      bRam0000000003eb4ec3 = 1;
    }
    lVar21 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar7);
    if (lVar21 == 0) goto code_r0x01535ee8;
    uVar15 = (ulong)*(uint *)(lVar21 + 0x1ac);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
              (lVar7,*(undefined8 *)(lVar21 + 400),uVar15,*(char *)(lVar21 + 0x1a8) != '\0',0);
    *(undefined4 *)(lVar7 + 0xe8) = 3;
    if (*(long *)(lVar7 + 0x10) == 0) goto code_r0x01535ee8;
    unaff_x22 = 0x3d52000;
    lVar21 = *(long *)(*(long *)(lVar7 + 0x10) + 0x40);
    unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
    uVar15 = uRam0000000003d527f0;
    /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar7,uRam0000000003d527f0,0);
    uVar20 = 0;
    if (lVar21 == 0) goto code_r0x01535ee8;
    *(undefined8 *)((long)register0x00000008 + -0x120) =
         *(undefined8 *)((long)register0x00000008 + -0x120);
    *(undefined8 *)((long)register0x00000008 + -0x118) =
         *(undefined8 *)((long)register0x00000008 + -0x118);
    *(undefined8 *)((long)register0x00000008 + -0x110) =
         *(undefined8 *)((long)register0x00000008 + -0x110);
    *(undefined8 *)((long)register0x00000008 + -0x108) =
         *(undefined8 *)((long)register0x00000008 + -0x108);
    *(undefined8 *)((long)register0x00000008 + -0x100) =
         *(undefined8 *)((long)register0x00000008 + -0x100);
    *(undefined8 *)((long)register0x00000008 + -0xf8) =
         *(undefined8 *)((long)register0x00000008 + -0xf8);
    if ((bRam0000000003eb51f9 & 1) == 0) {
      func_0x00f78a20(0x3d27728,unaff_x21,0);
      bRam0000000003eb51f9 = 1;
    }
    plVar22 = (long *)(lVar21 + 0x98);
    lVar7 = *plVar22;
    while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,unaff_x21,0), plVar8 == (long *)0x0 ||
           (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
      lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
      bVar5 = lVar7 == lVar21;
      lVar7 = lVar21;
      if (bVar5) {
        return;
      }
    }
    auVar31 = func_0x00f78e5c(plVar8);
    uVar23 = auVar31._8_8_;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x150);
    *(undefined8 *)((long)register0x00000008 + -0x150) = 0x3d27728;
    *(long *)((long)register0x00000008 + -0x148) = lVar7;
    *(long **)((long)register0x00000008 + -0x140) = plVar22;
    *(long *)((long)register0x00000008 + -0x138) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x130) =
         (undefined1 *)((long)register0x00000008 + -0x100);
    *(undefined **)((long)register0x00000008 + -0x128) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x130);
    if ((bRam0000000003eb51fb & 1) == 0) {
      func_0x00f78a20(0x3d27730);
      bRam0000000003eb51fb = 1;
    }
    uVar20 = 0x3d27730;
    plVar22 = (long *)(auVar31._0_8_ + 0xa0);
    lVar7 = *plVar22;
    while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,uVar23,0), plVar8 == (long *)0x0 ||
           (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
      lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
      bVar5 = lVar7 == lVar21;
      lVar7 = lVar21;
      if (bVar5) {
        return;
      }
    }
    puVar25 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
    auVar32 = func_0x00f78e5c(plVar8);
code_r0x0159d188:
    *(undefined8 *)(puVar2 + -0x30) = uVar20;
    *(long *)(puVar2 + -0x28) = lVar7;
    *(long **)(puVar2 + -0x20) = plVar22;
    *(undefined8 *)(puVar2 + -0x18) = uVar23;
    *(undefined1 **)(puVar2 + -0x10) = puVar3;
    *(undefined **)(puVar2 + -8) = puVar25;
    if ((bRam0000000003eb51f3 & 1) == 0) {
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb51f3 = 1;
    }
    plVar22 = (long *)(auVar32._0_8_ + 0x80);
    lVar7 = *plVar22;
    while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,auVar32._8_8_,0), plVar8 == (long *)0x0 ||
           (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
      lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
      bVar5 = lVar7 == lVar21;
      lVar7 = lVar21;
      if (bVar5) {
        return;
      }
    }
    auVar31 = func_0x00f78e5c(plVar8);
    *(undefined8 *)(puVar2 + -0x60) = 0x3d27718;
    *(long *)(puVar2 + -0x58) = lVar7;
    *(long **)(puVar2 + -0x50) = plVar22;
    *(long *)(puVar2 + -0x48) = auVar32._8_8_;
    *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
    *(undefined **)(puVar2 + -0x38) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
    if ((bRam0000000003eb51fd & 1) == 0) {
      func_0x00f78a20(0x3d27738);
      bRam0000000003eb51fd = 1;
    }
    plVar22 = (long *)(auVar31._0_8_ + 0xa8);
    lVar7 = *plVar22;
    while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,auVar31._8_8_,0), plVar8 == (long *)0x0 ||
           (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
      lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
      bVar5 = lVar7 == lVar21;
      lVar7 = lVar21;
      if (bVar5) {
        return;
      }
    }
    auVar32 = func_0x00f78e5c(plVar8);
    *(undefined8 *)(puVar2 + -0x90) = 0x3d27738;
    *(long *)(puVar2 + -0x88) = lVar7;
    *(long **)(puVar2 + -0x80) = plVar22;
    *(long *)(puVar2 + -0x78) = auVar31._8_8_;
    *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x40;
    *(undefined **)(puVar2 + -0x68) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
    if ((bRam0000000003eb51f5 & 1) == 0) {
      func_0x00f78a20(0x3d27700);
      bRam0000000003eb51f5 = 1;
    }
    plVar22 = (long *)(auVar32._0_8_ + 0x88);
    lVar7 = *plVar22;
    while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,auVar32._8_8_,0), plVar8 == (long *)0x0 ||
           (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
      lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
      bVar5 = lVar7 == lVar21;
      lVar7 = lVar21;
      if (bVar5) {
        return;
      }
    }
    auVar33 = func_0x00f78e5c(plVar8);
    puVar3 = puVar2 + -0xe0;
    *(undefined8 *)(puVar2 + -0xe0) = unaff_x26;
    *(undefined8 *)(puVar2 + -0xd8) = unaff_x25;
    *(undefined8 *)(puVar2 + -0xd0) = unaff_x24;
    *(undefined8 **)(puVar2 + -200) = unaff_x23;
    *(undefined8 *)(puVar2 + -0xc0) = 0x3d27700;
    *(long *)(puVar2 + -0xb8) = lVar7;
    *(long **)(puVar2 + -0xb0) = plVar22;
    *(long *)(puVar2 + -0xa8) = auVar32._8_8_;
    *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
    *(code **)(puVar2 + -0x98) = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
    unaff_x29 = puVar2 + -0xa0;
    unaff_x23 = (undefined8 *)0x3d27718;
    unaff_x24 = 0x3d570f0;
    if ((bRam0000000003eb51b7 & 1) == 0) {
      func_0x00f78a20(0x3d524e0);
      func_0x00f78a20(0x3d524e8);
      func_0x00f78a20(0x3d524f0);
      func_0x00f78a20(0x3d524f8);
      func_0x00f78a20(0x3d570d0);
      func_0x00f78a20(0x3d570f0);
      func_0x00f78a20(0x3d27700);
      func_0x00f78a20(0x3d27718);
      func_0x00f78a20(0x3d27728);
      func_0x00f78a20(0x3d27730);
      func_0x00f78a20(0x3d27738);
      bRam0000000003eb51b7 = 1;
    }
    unaff_x21 = *(long *)(auVar33._0_8_ + 0x40);
    uVar23 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
    auVar34._8_8_ = uVar23;
    auVar34._0_8_ = unaff_x21;
    uVar20 = 0;
    /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(uVar23,auVar33._0_8_,uRam0000000003d570f0,0);
    if (unaff_x21 == 0) {
      puVar25 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
      auVar34 = func_0x00f78af4();
    }
    else {
      unaff_x24 = 0x3d27000;
      unaff_x25 = 0x3d52000;
      puVar25 = (undefined *)0x159d470;
      puVar3 = puVar2 + -0xe0;
    }
    goto code_r0x0159d5c4;
  }
  if (*(long *)(auVar31._8_8_ + 0x10) != *(long *)(unaff_x19 + 0x38)) {
    return;
  }
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x150);
  *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x118) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x108) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x100) = uVar20;
  *(long *)((long)register0x00000008 + -0xf8) = lVar9;
  *(undefined8 *)((long)register0x00000008 + -0xf0) =
       *(undefined8 *)((long)register0x00000008 + -0xf0);
  *(undefined8 *)((long)register0x00000008 + -0xe8) =
       *(undefined8 *)((long)register0x00000008 + -0xe8);
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xf0);
  unaff_x20 = 0x3eb4000;
  if ((bRam0000000003eb4ec2 & 1) == 0) {
    func_0x00f78a20(0x3d527e8);
    func_0x00f78a20(0x3d527f8);
    func_0x00f78a20(0x3d52800);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ec2 = 1;
  }
  if (*(long *)(unaff_x19 + 0x58) == 0) {
LAB_01535ac8:
    unaff_x30 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterHitPlayerEndTrigger;
    param_1 = func_0x00f78af4();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x150);
    goto code_r0x01535acc;
  }
  *(undefined1 *)(*(long *)(unaff_x19 + 0x58) + 0x100) = 1;
  lVar7 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(unaff_x19);
  if (lVar7 == 0) goto LAB_01535ac8;
  uVar20 = *(undefined8 *)(lVar7 + 0x70);
  uVar13 = *(undefined8 *)(lVar7 + 0x88);
  uVar23 = *(undefined8 *)(lVar7 + 0x80);
  *(undefined8 *)((long)register0x00000008 + -0x148) = *(undefined8 *)(lVar7 + 0x78);
  *(undefined8 *)((long)register0x00000008 + -0x150) = uVar20;
  *(undefined8 *)((long)register0x00000008 + -0x138) = uVar13;
  *(undefined8 *)((long)register0x00000008 + -0x140) = uVar23;
  uVar20 = *(undefined8 *)(lVar7 + 0x90);
  *(undefined8 *)((long)register0x00000008 + -0x128) = *(undefined8 *)(lVar7 + 0x98);
  *(undefined8 *)((long)register0x00000008 + -0x130) = uVar20;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
            (unaff_x19,(undefined1 *)((long)register0x00000008 + -0x150),0);
  unaff_x20 = *(long *)(unaff_x19 + 0xd0);
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,unaff_x19,uRam0000000003d527e8,0);
  unaff_x22 = 0x3d52000;
  if (unaff_x20 == 0) goto LAB_01535ac8;
  /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(unaff_x20,unaff_x21,0);
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_01535ac8;
  uVar23 = 0x3d27718;
  unaff_x23 = (undefined8 *)0x3d52000;
  unaff_x20 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x40);
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,unaff_x19,uRam0000000003d527f8,0);
  unaff_x22 = 0x3d27718;
  if (unaff_x20 == 0) goto LAB_01535ac8;
  /*Atlas.Gameplay.Player.GameContextPlayerManager$$remove_OnUsableAttached*/ func_0x015a5cc8(unaff_x20,unaff_x21,0);
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_01535ac8;
  unaff_x23 = (undefined8 *)0x3d52000;
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x40);
  auVar33._8_8_ = lVar7;
  auVar33._0_8_ = unaff_x19;
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar34._8_8_ = unaff_x21;
  auVar34._0_8_ = lVar7;
  uVar20 = 0;
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,unaff_x19,uRam0000000003d52800,0);
  unaff_x20 = 0;
  unaff_x22 = uVar23;
  if (lVar7 == 0) goto LAB_01535ac8;
  puVar25 = (undefined *)0x1535aa8;
code_r0x0159d5c4:
  *(undefined8 *)(puVar3 + -0x30) = uVar23;
  *(long *)(puVar3 + -0x28) = unaff_x21;
  *(long *)(puVar3 + -0x20) = auVar33._8_8_;
  *(long *)(puVar3 + -0x18) = auVar33._0_8_;
  *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
  *(undefined **)(puVar3 + -8) = puVar25;
  if ((bRam0000000003eb51f4 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f4 = 1;
  }
  plVar22 = (long *)(auVar34._0_8_ + 0x80);
  lVar7 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar34._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  auVar31 = func_0x00f78e5c(plVar8);
  *(undefined8 *)(puVar3 + -0x60) = 0x3d27718;
  *(long *)(puVar3 + -0x58) = lVar7;
  *(long **)(puVar3 + -0x50) = plVar22;
  *(long *)(puVar3 + -0x48) = auVar34._8_8_;
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x38) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar22 = (long *)(auVar31._0_8_ + 0x88);
  lVar7 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar31._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar8);
  *(undefined8 *)(puVar3 + -0x90) = 0x3d27700;
  *(long *)(puVar3 + -0x88) = lVar7;
  *(long **)(puVar3 + -0x80) = plVar22;
  *(long *)(puVar3 + -0x78) = auVar31._8_8_;
  *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
  *(undefined **)(puVar3 + -0x68) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar22 = (long *)(auVar32._0_8_ + 0xa8);
  lVar7 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar32._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  auVar31 = func_0x00f78e5c(plVar8);
  lVar21 = auVar31._8_8_;
  puVar4 = puVar3 + -0xc0;
  *(undefined8 *)(puVar3 + -0xc0) = 0x3d27738;
  *(long *)(puVar3 + -0xb8) = lVar7;
  *(long **)(puVar3 + -0xb0) = plVar22;
  *(long *)(puVar3 + -0xa8) = auVar32._8_8_;
  *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x70;
  *(undefined **)(puVar3 + -0x98) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  puVar3 = puVar3 + -0xa0;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  unaff_x22 = 0x3d27730;
  plVar22 = (long *)(auVar31._0_8_ + 0xa0);
  unaff_x21 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x21,lVar21,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar7 = func_0x00ff0f44(plVar22,plVar8,unaff_x21);
    bVar5 = unaff_x21 == lVar7;
    unaff_x21 = lVar7;
    if (bVar5) {
      return;
    }
  }
  puVar25 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  auVar31 = func_0x00f78e5c(plVar8);
code_r0x0159d844:
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(long *)(puVar4 + -0x28) = unaff_x21;
  *(long **)(puVar4 + -0x20) = plVar22;
  *(long *)(puVar4 + -0x18) = lVar21;
  *(undefined1 **)(puVar4 + -0x10) = puVar3;
  *(undefined **)(puVar4 + -8) = puVar25;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar22 = (long *)0x3d27728;
  plVar8 = (long *)(auVar31._0_8_ + 0x98);
  lVar7 = *plVar8;
  while( true ) {
    puVar16 = (undefined8 *)0x0;
    plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar31._8_8_);
    if ((plVar12 != (long *)0x0) && (*plVar12 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar21 = func_0x00ff0f44(plVar8,plVar12,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  lVar21 = func_0x00f78e5c(plVar12);
  *(undefined8 *)(puVar4 + -0x80) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x78) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x70) = unaff_x24;
  *(undefined8 **)(puVar4 + -0x68) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x60) = 0x3d27728;
  *(long *)(puVar4 + -0x58) = lVar7;
  *(long **)(puVar4 + -0x50) = plVar8;
  *(long *)(puVar4 + -0x48) = auVar31._8_8_;
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x38) = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar7 = 0x3eb5000;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar9 = *(long *)(lVar21 + 0x28);
  if (lVar9 != 0) {
    plVar22 = (long *)(lVar21 + 0x10);
    uVar19 = *(uint *)(lVar9 + 0x18);
    if ((int)uVar19 < 1) {
code_r0x0159d9f0:
      if (((*(long *)(lVar21 + 0x20) == 0) ||
          (lVar11 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar11 == 0)) ||
         (unaff_x23 = *(undefined8 **)(lVar11 + 0x10), unaff_x23 == (undefined8 *)0x0))
      goto code_r0x0159db7c;
      uVar23 = 0x3d1b4e8;
      unaff_x24 = 0x3d1b4e8;
      lVar7 = unaff_x23[3];
      lVar9 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
      uVar20 = uRam0000000003d2a1d8;
      /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar9,lVar21,uRam0000000003d57238,uRam0000000003d2a1d8);
      puVar16 = (undefined8 *)0x0;
      plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,lVar9);
      if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
        unaff_x23[3] = plVar8;
        if ((*(long *)(lVar21 + 0x20) == 0) ||
           ((lVar11 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar11 == 0 ||
            (unaff_x23 = *(undefined8 **)(lVar11 + 0x10), unaff_x23 == (undefined8 *)0x0))))
        goto code_r0x0159db7c;
        uVar23 = 0x3d1b3b0;
        unaff_x24 = 0x3d1b3b0;
        lVar7 = unaff_x23[0xe];
        lVar9 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
        uVar20 = uRam0000000003d29f28;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar9,lVar21,uRam0000000003d57240,uRam0000000003d29f28);
        puVar16 = (undefined8 *)0x0;
        plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,lVar9);
        if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
          unaff_x23[0xe] = plVar8;
          if (((*(long *)(lVar21 + 0x20) == 0) ||
              (lVar11 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar11 == 0)) ||
             (unaff_x23 = *(undefined8 **)(lVar11 + 0x10), unaff_x23 == (undefined8 *)0x0))
          goto code_r0x0159db7c;
          uVar23 = 0x3d1b4e0;
          lVar7 = unaff_x23[5];
          lVar9 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
          uVar20 = uRam0000000003d2a1c8;
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar9,lVar21,uRam0000000003d57230,uRam0000000003d2a1c8);
          puVar16 = (undefined8 *)0x0;
          plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,lVar9);
          if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
            unaff_x23[5] = plVar8;
            *(undefined1 *)(lVar21 + 0x50) = 0;
            *(undefined8 *)(lVar21 + 0x18) = 0;
            *plVar22 = 0;
            *(undefined8 *)(lVar21 + 0x28) = 0;
            *(undefined8 *)(lVar21 + 0x20) = 0;
            return;
          }
        }
      }
      goto code_r0x0159db8c;
    }
    unaff_x23 = (undefined8 *)0x0;
    unaff_x24 = 0x3d43378;
    while( true ) {
      uVar24 = (uint)unaff_x23;
      uVar23 = unaff_x24;
      if (uVar19 <= uVar24) goto code_r0x0159db80;
      if (*plVar22 == 0) break;
      lVar7 = *(long *)(lVar9 + (long)(int)uVar24 * 8 + 0x20);
      puVar16 = puRam0000000003d43378;
      /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar22,lVar7);
      if (lVar7 == 0) break;
      /*Atlas.Gameplay.Player.GameContextPlayer$$DeInit*/ func_0x015a5404(lVar7);
      unaff_x23 = (undefined8 *)(ulong)(uVar24 + 1);
      uVar19 = *(uint *)(lVar9 + 0x18);
      if ((int)uVar19 <= (int)(uVar24 + 1)) goto code_r0x0159d9f0;
    }
  }
code_r0x0159db7c:
  func_0x00f78af4();
  uVar23 = unaff_x24;
code_r0x0159db80:
  uVar13 = func_0x00f78b24();
  func_0x00f78ac0(uVar13,0);
code_r0x0159db8c:
  auVar31 = func_0x00f78e5c();
  puVar14 = auVar31._8_8_;
  plVar8 = auVar31._0_8_;
  *(undefined8 *)(puVar4 + -0xc0) = uVar23;
  *(undefined8 **)(puVar4 + -0xb8) = unaff_x23;
  *(long **)(puVar4 + -0xb0) = plVar22;
  *(long *)(puVar4 + -0xa8) = lVar9;
  *(long *)(puVar4 + -0xa0) = lVar7;
  *(long *)(puVar4 + -0x98) = lVar21;
  *(undefined1 **)(puVar4 + -0x90) = puVar4 + -0x40;
  *(code **)(puVar4 + -0x88) = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar17 = puVar16;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar8[3] != 0) &&
      (puVar17 = puVar16, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar8[3],puVar14,puVar16,uVar20,0),
      puVar16 != (undefined8 *)0x0)) && (lVar7 = puVar16[2], lVar7 != 0)) {
    uVar23 = *(undefined8 *)(lVar7 + 0x48);
    uVar26 = *(undefined8 *)(lVar7 + 0x60);
    uVar13 = *(undefined8 *)(lVar7 + 0x58);
    *(undefined8 *)(puVar4 + -0xd8) = *(undefined8 *)(lVar7 + 0x50);
    *(undefined8 *)(puVar4 + -0xe0) = uVar23;
    *(undefined8 *)(puVar4 + -200) = uVar26;
    *(undefined8 *)(puVar4 + -0xd0) = uVar13;
    iVar6 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar4 + -0xe0,0);
    if ((iVar6 == 0) || (puVar16 == puVar14)) {
      return;
    }
    iVar6 = (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
    if ((plVar8[0x18] != 0) && (lVar7 = *(long *)(plVar8[0x18] + 0x20), lVar7 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar4 + -0xf8,lVar7,0);
      *(int *)(puVar16 + 0xf) = *(int *)(puVar16 + 0xf) + iVar6;
      uVar23 = *(undefined8 *)(puVar4 + -0xf8);
      puVar16[0x11] = *(undefined8 *)(puVar4 + -0xf0);
      puVar16[0x10] = uVar23;
      puVar16[0x12] = *(undefined8 *)(puVar4 + -0xe8);
      if (puVar16[2] != 0) {
        if (*(int *)(puVar16[2] + 0x50) == 0) {
          uVar23 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
          puVar17 = (undefined8 *)0x0;
          iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar23,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar6 != 0) {
            if (plVar8[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar8[3],*(undefined4 *)(puVar16 + 0xf),0);
          }
        }
        if (plVar8[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar8[0x46],puVar14,puVar16,uVar20,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar35 = func_0x00f78af4();
  lVar7 = auVar35._0_8_;
  iVar6 = *(int *)(lVar7 + 0x78);
  uVar13 = puVar17[1];
  uVar23 = *puVar17;
  *(undefined8 *)(puVar4 + -0x118) = uVar13;
  *(undefined8 *)(puVar4 + -0x120) = uVar23;
  uVar20 = puVar17[2];
  *(undefined8 *)(puVar4 + -0x110) = uVar20;
  *(int *)(lVar7 + 0x78) = iVar6 + auVar35._8_4_;
  *(undefined8 *)(lVar7 + 0x88) = uVar13;
  *(undefined8 *)(lVar7 + 0x80) = uVar23;
  *(undefined8 *)(lVar7 + 0x90) = uVar20;
  return;
LAB_01478328:
  do {
    uVar15 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0xc0),uRam0000000003d33320);
    if ((uVar15 & 1) == 0) {
LAB_01478494:
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0xc0),uRam0000000003d33318);
      return;
    }
    lVar7 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___ctor(lVar7,0);
    if (lVar7 == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(long *)(lVar7 + 0x50) = param_1;
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x98);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x88);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x90);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)(lVar7 + 0x28) = uVar26;
    *(undefined8 *)(lVar7 + 0x20) = uVar13;
    *(undefined8 *)(lVar7 + 0x38) = uVar23;
    *(undefined8 *)(lVar7 + 0x30) = uVar20;
    *(undefined8 *)(lVar7 + 0x18) = uVar28;
    *(undefined8 *)(lVar7 + 0x10) = uVar27;
    *(undefined8 *)((long)register0x00000008 + -0x110) = *(undefined8 *)(lVar7 + 0x18);
    uVar20 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x110))
    ;
    uVar15 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -0x70),uVar20,0);
  } while ((uVar15 & 1) == 0);
  if (*(long *)(param_1 + 0x60) == 0) {
    func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x14784e0);
    (*pcVar1)();
  }
  puVar16 = (undefined8 *)(lVar7 + 0x10);
  puVar17 = (undefined8 *)(lVar7 + 0x48);
  uVar15 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(param_1 + 0x60),*puVar16,puVar17,0);
  if ((uVar15 & 1) == 0) goto LAB_01478494;
  uVar20 = *(undefined8 *)(param_1 + 0xa0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar15 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar20,0,0);
  if ((uVar15 & 1) != 0) {
    if (*(long *)(param_1 + 0xa0) == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(undefined8 *)((long)register0x00000008 + -200) =
         *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x18);
    *(undefined8 *)((long)register0x00000008 + -0x110) = *puVar16;
    uVar20 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x110))
    ;
    uVar15 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -200),uVar20,0);
    if ((uVar15 & 1) != 0) {
      uVar20 = *(undefined8 *)(param_1 + 0x38);
      uVar23 = *puVar16;
      uVar26 = *(undefined8 *)(lVar7 + 0x28);
      uVar13 = *(undefined8 *)(lVar7 + 0x20);
      *(undefined8 *)((long)register0x00000008 + -0x148) = *(undefined8 *)(lVar7 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0x150) = uVar23;
      *(undefined8 *)((long)register0x00000008 + -0x138) = uVar26;
      *(undefined8 *)((long)register0x00000008 + -0x140) = uVar13;
      uVar23 = *(undefined8 *)(lVar7 + 0x30);
      *(undefined8 *)((long)register0x00000008 + -0x128) = *(undefined8 *)(lVar7 + 0x38);
      *(undefined8 *)((long)register0x00000008 + -0x130) = uVar23;
      *(undefined8 *)((long)register0x00000008 + -0x120) = *(undefined8 *)(lVar7 + 0x40);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                (param_1,uVar20,(undefined1 *)((long)register0x00000008 + -0x150));
      goto LAB_01478328;
    }
  }
  uVar23 = *puVar17;
  uVar20 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar20,lVar7,uRam0000000003d62270,0);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AddBaseListener(param_1,uVar23,uVar20,*puVar17);
  goto LAB_01478328;
code_r0x01535ee8:
  lVar21 = func_0x00f78af4();
  *(undefined1 **)((long)register0x00000008 + -0x130) =
       (undefined1 *)((long)register0x00000008 + -0x100);
  *(undefined **)((long)register0x00000008 + -0x128) =
       &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnHit;
  if (uVar15 == 0) {
    func_0x00f78af4();
    return;
  }
  if (*(long *)(uVar15 + 0x10) != *(long *)(lVar21 + 0x38)) {
    return;
  }
  puVar3 = *(undefined1 **)((long)register0x00000008 + -0x130);
  puVar25 = *(undefined **)((long)register0x00000008 + -0x128);
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x120);
  goto code_r0x01535b58;
LAB_01478624:
  do {
    uVar15 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0x1e0),uRam0000000003d33320)
    ;
    if ((uVar15 & 1) == 0) {
      uVar18 = 0x7b;
code_r0x0147869c:
      *(undefined4 *)((long)register0x00000008 + -0x1f8) = uVar18;
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x1e0),uRam0000000003d33318);
      if (*(int *)((long)register0x00000008 + -0x1f8) != 0x86) {
code_r0x014786b8:
        lVar21 = *plVar22;
        if (((*(ushort *)(lVar21 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar21 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar21 = *plVar22;
        }
        *(undefined8 *)(lVar7 + 0xa8) = **(undefined8 **)(lVar21 + 0xb8);
      }
      return;
    }
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x1d0);
    *(undefined8 *)((long)register0x00000008 + -0x240) =
         *(undefined8 *)((long)register0x00000008 + -0x1c8);
    uVar23 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x240))
    ;
    uVar15 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar7 + 0xa8,uVar23,0);
  } while ((uVar15 & 1) == 0);
  if (*(long *)(lVar7 + 0x60) == 0) {
    func_0x00f78af4();
  }
  else {
    uVar15 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar7 + 0x60),uVar20,
                             (undefined1 *)((long)register0x00000008 + -0x1e8),0);
    if ((uVar15 & 1) == 0) {
      uVar18 = 0x86;
      goto code_r0x0147869c;
    }
    if (*(long *)((long)register0x00000008 + -0x1e8) != 0) {
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                (lVar7,*(undefined8 *)(*(long *)((long)register0x00000008 + -0x1e8) + 0x18));
      goto LAB_01478624;
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1478708);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1535b04 | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.OnFailedHitPlayerSection
// ============================================================

/* WARNING: Possible PIC construction at 0x01535c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535aa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x01535c74) */
/* WARNING: Removing unreachable block (ram,0x01535aa8) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnFailedHitPlayerSection
               (long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined8 *extraout_x8;
  undefined8 unaff_x19;
  undefined8 uVar20;
  long lVar21;
  undefined8 unaff_x20;
  long *plVar22;
  long unaff_x21;
  undefined8 uVar23;
  undefined8 unaff_x22;
  uint uVar24;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined1 *puVar25;
  undefined8 unaff_x30;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  
code_r0x01535b04:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar25 = (undefined1 *)((long)register0x00000008 + -0x10);
  uVar11 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(param_1,0);
  if ((uVar11 & 1) == 0) {
    puVar25 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar26 = *(undefined **)((long)register0x00000008 + -8);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x20);
    lVar8 = *(long *)((long)register0x00000008 + -0x18);
    puVar2 = (undefined1 *)register0x00000008;
    lVar21 = param_1;
  }
  else {
    if (*(long *)(param_1 + 0xb8) != 0) {
      Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsedUsables(*(long *)(param_1 + 0xb8),0);
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                ((undefined1 *)((long)register0x00000008 + -0x90),param_1,
                 *(undefined8 *)(param_1 + 0xa8));
      *(undefined8 *)((long)register0x00000008 + -0xd8) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0xe0) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -200) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0xd0) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      uVar29 = *(undefined8 *)((long)register0x00000008 + -0x58);
      uVar28 = *(undefined8 *)((long)register0x00000008 + -0x60);
      uVar27 = *(undefined8 *)((long)register0x00000008 + -0x48);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -0x50);
      *(undefined8 *)((long)register0x00000008 + -0xa8) = uVar29;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar28;
      *(undefined8 *)((long)register0x00000008 + -0x98) = uVar27;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar14;
      uVar31 = *(undefined8 *)((long)register0x00000008 + -0x68);
      uVar30 = *(undefined8 *)((long)register0x00000008 + -0x70);
      *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar31;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar30;
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x40);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0x38);
      *(undefined8 *)((long)register0x00000008 + -0x68) = uVar31;
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar30;
      *(undefined8 *)((long)register0x00000008 + -0x58) = uVar29;
      *(undefined8 *)((long)register0x00000008 + -0x60) = uVar28;
      *(undefined8 *)((long)register0x00000008 + -0x48) = uVar27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = uVar14;
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar29;
      *(undefined8 *)((long)register0x00000008 + -0x100) = uVar28;
      *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar27;
      *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar14;
      *(undefined8 *)((long)register0x00000008 + -0x108) = uVar31;
      *(undefined8 *)((long)register0x00000008 + -0x110) = uVar30;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                (param_1,(undefined1 *)((long)register0x00000008 + -0x110));
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnHumanPlayerAtLocator(param_1,uVar20);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnAIsAtLocators(param_1,uVar23);
      uVar20 = *(undefined8 *)(param_1 + 0xa8);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection(param_1);
      plVar22 = *(long **)((long)register0x00000008 + -0x30);
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x30) = plVar22;
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
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar20;
      if ((bRam0000000003eb48a2 & 1) == 0) {
        func_0x00f78a20(0x3d33318);
        func_0x00f78a20(0x3d33320);
        func_0x00f78a20(0x3d33328);
        func_0x00f78a20(0x3d278d8);
        func_0x00f78a20(0x3d3cd70);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d24e08);
        func_0x00f78a20(0x3d62270);
        func_0x00f78a20(0x3d26ac8);
        bRam0000000003eb48a2 = 1;
      }
      *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
      *(undefined8 *)((long)register0x00000008 + -200) = 0;
      *(undefined8 *)(param_1 + 0xa8) = uVar20;
      if ((*(long *)(param_1 + 0x40) != 0) &&
         (lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 0x30), lVar8 != 0)) {
        /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x110),lVar8,uRam0000000003d3cd70
                       );
        *(undefined8 *)((long)register0x00000008 + -0x98) =
             *(undefined8 *)((long)register0x00000008 + -0xe8);
        *(undefined8 *)((long)register0x00000008 + -0xa0) =
             *(undefined8 *)((long)register0x00000008 + -0xf0);
        *(undefined8 *)((long)register0x00000008 + -0x88) =
             *(undefined8 *)((long)register0x00000008 + -0xd8);
        *(undefined8 *)((long)register0x00000008 + -0x90) =
             *(undefined8 *)((long)register0x00000008 + -0xe0);
        *(undefined8 *)((long)register0x00000008 + -0x80) =
             *(undefined8 *)((long)register0x00000008 + -0xd0);
        *(undefined8 *)((long)register0x00000008 + -0xb8) =
             *(undefined8 *)((long)register0x00000008 + -0x108);
        *(undefined8 *)((long)register0x00000008 + -0xc0) =
             *(undefined8 *)((long)register0x00000008 + -0x110);
        *(undefined8 *)((long)register0x00000008 + -0xa8) =
             *(undefined8 *)((long)register0x00000008 + -0xf8);
        *(undefined8 *)((long)register0x00000008 + -0xb0) =
             *(undefined8 *)((long)register0x00000008 + -0x100);
        goto LAB_01478328;
      }
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar9 = (long *)___cxa_begin_catch();
        param_1 = *plVar9;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0xc0),uRam0000000003d33318);
        if (param_1 == 0) {
          return;
        }
        func_0x00f78ac0(param_1,0);
      }
      lVar8 = __Unwind_Resume();
      *(undefined8 *)((long)register0x00000008 + -400) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0x188) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x180) = plVar22;
      *(undefined8 *)((long)register0x00000008 + -0x178) = 0x3eb4000;
      *(undefined8 *)((long)register0x00000008 + -0x170) = uVar20;
      *(long *)((long)register0x00000008 + -0x168) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0x160) =
           (undefined1 *)((long)register0x00000008 + -0x10);
      *(code **)((long)register0x00000008 + -0x158) =
           Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
      lVar21 = 0x3eb4000;
      if ((bRam0000000003eb48a3 & 1) == 0) {
        func_0x00f78a20(0x3d33318);
        func_0x00f78a20(0x3d33320);
        func_0x00f78a20(0x3d33328);
        func_0x00f78a20(0x3d3cd70);
        func_0x00f78a20(0x3d24e08);
        bRam0000000003eb48a3 = 1;
      }
      *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x1f0) = 0;
      if ((*(long *)(lVar8 + 0x40) != 0) &&
         (lVar10 = *(long *)(*(long *)(lVar8 + 0x40) + 0x30), lVar10 != 0)) {
        plVar22 = (long *)0x3d24e08;
        /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x240),lVar10,
                        uRam0000000003d3cd70);
        *(undefined8 *)((long)register0x00000008 + -0x1b8) =
             *(undefined8 *)((long)register0x00000008 + -0x218);
        *(undefined8 *)((long)register0x00000008 + -0x1c0) =
             *(undefined8 *)((long)register0x00000008 + -0x220);
        *(undefined8 *)((long)register0x00000008 + -0x1a8) =
             *(undefined8 *)((long)register0x00000008 + -0x208);
        *(undefined8 *)((long)register0x00000008 + -0x1b0) =
             *(undefined8 *)((long)register0x00000008 + -0x210);
        *(undefined8 *)((long)register0x00000008 + -0x1a0) =
             *(undefined8 *)((long)register0x00000008 + -0x200);
        *(undefined8 *)((long)register0x00000008 + -0x1d8) =
             *(undefined8 *)((long)register0x00000008 + -0x238);
        *(undefined8 *)((long)register0x00000008 + -0x1e0) =
             *(undefined8 *)((long)register0x00000008 + -0x240);
        *(undefined8 *)((long)register0x00000008 + -0x1c8) =
             *(undefined8 *)((long)register0x00000008 + -0x228);
        *(undefined8 *)((long)register0x00000008 + -0x1d0) =
             *(undefined8 *)((long)register0x00000008 + -0x230);
        goto LAB_01478624;
      }
      func_0x00f78af4();
      if (extraout_w1_00 == 1) {
        plVar9 = (long *)___cxa_begin_catch();
        lVar21 = *plVar9;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x1e0),*unaff_x23);
        if (lVar21 == 0) goto code_r0x014786b8;
        func_0x00f78ac0(lVar21,0);
      }
      lVar10 = __Unwind_Resume();
      *(long *)((long)register0x00000008 + -0x260) = lVar21;
      *(long *)((long)register0x00000008 + -600) = lVar8;
      *(undefined1 **)((long)register0x00000008 + -0x250) =
           (undefined1 *)((long)register0x00000008 + -0x160);
      *(code **)((long)register0x00000008 + -0x248) =
           Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                ((undefined1 *)((long)register0x00000008 + -0x2c0),lVar10,
                 *(undefined8 *)(lVar10 + 0xa8));
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x2a0);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -0x288);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0x290);
      extraout_x8[5] = *(undefined8 *)((long)register0x00000008 + -0x298);
      extraout_x8[4] = uVar20;
      extraout_x8[7] = uVar14;
      extraout_x8[6] = uVar23;
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x280);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -0x268);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0x270);
      extraout_x8[9] = *(undefined8 *)((long)register0x00000008 + -0x278);
      extraout_x8[8] = uVar20;
      extraout_x8[0xb] = uVar14;
      extraout_x8[10] = uVar23;
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -0x2a8);
      uVar23 = *(undefined8 *)((long)register0x00000008 + -0x2b0);
      extraout_x8[1] = *(undefined8 *)((long)register0x00000008 + -0x2b8);
      *extraout_x8 = uVar20;
      extraout_x8[3] = uVar14;
      extraout_x8[2] = uVar23;
      return;
    }
    puVar26 = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteHitPlayerCondition;
    lVar21 = func_0x00f78af4();
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x20);
    lVar8 = param_1;
  }
code_r0x01535b58:
  puVar5 = puVar2 + -0x60;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(long *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = lVar8;
  *(undefined1 **)(puVar2 + -0x10) = puVar25;
  *(undefined **)(puVar2 + -8) = puVar26;
  puVar25 = puVar2 + -0x10;
  lVar8 = 0x3eb4000;
  if ((bRam0000000003eb4ec4 & 1) == 0) {
    func_0x00f78a20(0x3d527d0);
    func_0x00f78a20(0x3d527f0);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb4ec4 = 1;
  }
  lVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar21);
  if (lVar10 != 0) {
    unaff_x22 = 0x3d52000;
    uVar20 = *(undefined8 *)(lVar10 + 0xa0);
    uVar14 = *(undefined8 *)(lVar10 + 0xb8);
    uVar23 = *(undefined8 *)(lVar10 + 0xb0);
    *(undefined8 *)(puVar2 + -0x58) = *(undefined8 *)(lVar10 + 0xa8);
    *(undefined8 *)(puVar2 + -0x60) = uVar20;
    *(undefined8 *)(puVar2 + -0x48) = uVar14;
    *(undefined8 *)(puVar2 + -0x50) = uVar23;
    uVar20 = *(undefined8 *)(lVar10 + 0xc0);
    *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(lVar10 + 200);
    *(undefined8 *)(puVar2 + -0x40) = uVar20;
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar21,puVar2 + -0x60,0);
    *(undefined4 *)(lVar21 + 0xe8) = 0;
    lVar8 = *(long *)(lVar21 + 0xd8);
    unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    param_3 = uRam0000000003d527d0;
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar21,uRam0000000003d527d0,0);
    if (lVar8 != 0) {
      param_3 = 0;
      /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar8,unaff_x21);
      if (*(long *)(lVar21 + 0x10) != 0) {
        unaff_x22 = 0x3d52000;
        plVar22 = *(long **)(*(long *)(lVar21 + 0x10) + 0x40);
        unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
        auVar32._8_8_ = unaff_x21;
        auVar32._0_8_ = plVar22;
        uVar20 = 0;
        param_3 = uRam0000000003d527f0;
        /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar21,uRam0000000003d527f0,0);
        lVar8 = 0;
        if (plVar22 != (long *)0x0) {
          puVar26 = &UNK_01535c74;
          goto code_r0x0159d844;
        }
      }
    }
  }
  auVar32 = func_0x00f78af4();
  lVar10 = auVar32._0_8_;
  puVar3 = puVar2 + -0xb0;
  *(long *)(puVar2 + -0x80) = lVar8;
  *(long *)(puVar2 + -0x78) = lVar21;
  *(undefined1 **)(puVar2 + -0x70) = puVar25;
  *(undefined **)(puVar2 + -0x68) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnPickup;
  if (auVar32._8_8_ != 0) {
    if (*(long *)(auVar32._8_8_ + 0x10) != *(long *)(lVar10 + 0x38)) {
      return;
    }
    lVar12 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar10);
    lVar21 = lVar10;
    if (lVar12 != 0) {
      uVar20 = *(undefined8 *)(lVar12 + 0x40);
      uVar14 = *(undefined8 *)(lVar12 + 0x58);
      uVar23 = *(undefined8 *)(lVar12 + 0x50);
      *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(lVar12 + 0x48);
      *(undefined8 *)(puVar2 + -0xb0) = uVar20;
      *(undefined8 *)(puVar2 + -0x98) = uVar14;
      *(undefined8 *)(puVar2 + -0xa0) = uVar23;
      uVar20 = *(undefined8 *)(lVar12 + 0x60);
      *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(lVar12 + 0x68);
      *(undefined8 *)(puVar2 + -0x90) = uVar20;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar10,puVar2 + -0xb0,0);
      if (*(int *)(lVar10 + 0xe8) != 1) {
        return;
      }
      Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompletePickupCondition(lVar10);
      return;
    }
  }
  lVar10 = func_0x00f78af4();
  *(undefined8 *)(puVar2 + -0xe0) = unaff_x22;
  *(long *)(puVar2 + -0xd8) = unaff_x21;
  *(long *)(puVar2 + -0xd0) = lVar8;
  *(long *)(puVar2 + -200) = lVar21;
  *(undefined1 **)(puVar2 + -0xc0) = puVar2 + -0x70;
  *(undefined **)(puVar2 + -0xb8) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartUseUsableSection
  ;
  uVar20 = 0x3eb4000;
  if ((bRam0000000003eb4ec1 & 1) == 0) {
    func_0x00f78a20(0x3d52800);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ec1 = 1;
  }
  *(undefined4 *)(lVar10 + 0xe8) = 2;
  lVar8 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar10);
  if (lVar8 != 0) {
    param_3 = (ulong)*(uint *)(lVar8 + 0x14c);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
              (lVar10,*(undefined8 *)(lVar8 + 0x130),param_3,*(char *)(lVar8 + 0x148) != '\0',0);
    if (*(long *)(lVar10 + 0x10) != 0) {
      unaff_x22 = 0x3d52000;
      lVar8 = *(long *)(*(long *)(lVar10 + 0x10) + 0x40);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
      auVar33._8_8_ = unaff_x21;
      auVar33._0_8_ = lVar8;
      param_3 = uRam0000000003d52800;
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar10,uRam0000000003d52800,0);
      uVar20 = 0;
      if (lVar8 != 0) {
        puVar25 = *(undefined1 **)(puVar2 + -0xc0);
        puVar26 = *(undefined **)(puVar2 + -0xb8);
        plVar22 = *(long **)(puVar2 + -0xd0);
        uVar23 = *(undefined8 *)(puVar2 + -200);
        uVar20 = *(undefined8 *)(puVar2 + -0xe0);
        lVar8 = *(long *)(puVar2 + -0xd8);
        goto code_r0x0159d188;
      }
    }
  }
  auVar32 = func_0x00f78af4();
  lVar8 = auVar32._0_8_;
  *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0xc0;
  *(undefined **)(puVar2 + -0xe8) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnUse;
  if (auVar32._8_8_ == 0) {
    lVar8 = func_0x00f78af4();
    *(undefined8 *)(puVar2 + -0x120) = unaff_x22;
    *(long *)(puVar2 + -0x118) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x110) = uVar20;
    *(long *)(puVar2 + -0x108) = lVar10;
    *(undefined1 **)(puVar2 + -0x100) = puVar2 + -0xf0;
    *(undefined **)(puVar2 + -0xf8) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartHitPlayerSection;
    unaff_x20 = 0x3eb4000;
    if ((bRam0000000003eb4ec3 & 1) == 0) {
      func_0x00f78a20(0x3d527f0);
      func_0x00f78a20(0x3d27728);
      bRam0000000003eb4ec3 = 1;
    }
    lVar21 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar8);
    if (lVar21 == 0) goto code_r0x01535ee8;
    param_3 = (ulong)*(uint *)(lVar21 + 0x1ac);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
              (lVar8,*(undefined8 *)(lVar21 + 400),param_3,*(char *)(lVar21 + 0x1a8) != '\0',0);
    *(undefined4 *)(lVar8 + 0xe8) = 3;
    if (*(long *)(lVar8 + 0x10) == 0) goto code_r0x01535ee8;
    unaff_x22 = 0x3d52000;
    lVar21 = *(long *)(*(long *)(lVar8 + 0x10) + 0x40);
    unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
    param_3 = uRam0000000003d527f0;
    /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar8,uRam0000000003d527f0,0);
    unaff_x20 = 0;
    if (lVar21 == 0) goto code_r0x01535ee8;
    *(undefined8 *)(puVar2 + -0x120) = *(undefined8 *)(puVar2 + -0x120);
    *(undefined8 *)(puVar2 + -0x118) = *(undefined8 *)(puVar2 + -0x118);
    *(undefined8 *)(puVar2 + -0x110) = *(undefined8 *)(puVar2 + -0x110);
    *(undefined8 *)(puVar2 + -0x108) = *(undefined8 *)(puVar2 + -0x108);
    *(undefined8 *)(puVar2 + -0x100) = *(undefined8 *)(puVar2 + -0x100);
    *(undefined8 *)(puVar2 + -0xf8) = *(undefined8 *)(puVar2 + -0xf8);
    if ((bRam0000000003eb51f9 & 1) == 0) {
      func_0x00f78a20(0x3d27728,unaff_x21,0);
      bRam0000000003eb51f9 = 1;
    }
    plVar22 = (long *)(lVar21 + 0x98);
    lVar8 = *plVar22;
    while ((plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar8,unaff_x21,0), plVar9 == (long *)0x0 ||
           (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
      lVar21 = func_0x00ff0f44(plVar22,plVar9,lVar8);
      bVar6 = lVar8 == lVar21;
      lVar8 = lVar21;
      if (bVar6) {
        return;
      }
    }
    auVar32 = func_0x00f78e5c(plVar9);
    uVar23 = auVar32._8_8_;
    puVar3 = puVar2 + -0x150;
    *(undefined8 *)(puVar2 + -0x150) = 0x3d27728;
    *(long *)(puVar2 + -0x148) = lVar8;
    *(long **)(puVar2 + -0x140) = plVar22;
    *(long *)(puVar2 + -0x138) = unaff_x21;
    *(undefined1 **)(puVar2 + -0x130) = puVar2 + -0x100;
    *(undefined **)(puVar2 + -0x128) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
    puVar25 = puVar2 + -0x130;
    if ((bRam0000000003eb51fb & 1) == 0) {
      func_0x00f78a20(0x3d27730);
      bRam0000000003eb51fb = 1;
    }
    uVar20 = 0x3d27730;
    plVar22 = (long *)(auVar32._0_8_ + 0xa0);
    lVar8 = *plVar22;
    while ((plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar8,uVar23,0), plVar9 == (long *)0x0 ||
           (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
      lVar21 = func_0x00ff0f44(plVar22,plVar9,lVar8);
      bVar6 = lVar8 == lVar21;
      lVar8 = lVar21;
      if (bVar6) {
        return;
      }
    }
    puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
    auVar33 = func_0x00f78e5c(plVar9);
code_r0x0159d188:
    *(undefined8 *)(puVar3 + -0x30) = uVar20;
    *(long *)(puVar3 + -0x28) = lVar8;
    *(long **)(puVar3 + -0x20) = plVar22;
    *(undefined8 *)(puVar3 + -0x18) = uVar23;
    *(undefined1 **)(puVar3 + -0x10) = puVar25;
    *(undefined **)(puVar3 + -8) = puVar26;
    if ((bRam0000000003eb51f3 & 1) == 0) {
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb51f3 = 1;
    }
    plVar22 = (long *)(auVar33._0_8_ + 0x80);
    lVar8 = *plVar22;
    while ((plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar8,auVar33._8_8_,0), plVar9 == (long *)0x0 ||
           (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
      lVar21 = func_0x00ff0f44(plVar22,plVar9,lVar8);
      bVar6 = lVar8 == lVar21;
      lVar8 = lVar21;
      if (bVar6) {
        return;
      }
    }
    auVar32 = func_0x00f78e5c(plVar9);
    *(undefined8 *)(puVar3 + -0x60) = 0x3d27718;
    *(long *)(puVar3 + -0x58) = lVar8;
    *(long **)(puVar3 + -0x50) = plVar22;
    *(long *)(puVar3 + -0x48) = auVar33._8_8_;
    *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x38) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
    if ((bRam0000000003eb51fd & 1) == 0) {
      func_0x00f78a20(0x3d27738);
      bRam0000000003eb51fd = 1;
    }
    plVar22 = (long *)(auVar32._0_8_ + 0xa8);
    lVar8 = *plVar22;
    while ((plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar8,auVar32._8_8_,0), plVar9 == (long *)0x0 ||
           (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
      lVar21 = func_0x00ff0f44(plVar22,plVar9,lVar8);
      bVar6 = lVar8 == lVar21;
      lVar8 = lVar21;
      if (bVar6) {
        return;
      }
    }
    auVar33 = func_0x00f78e5c(plVar9);
    *(undefined8 *)(puVar3 + -0x90) = 0x3d27738;
    *(long *)(puVar3 + -0x88) = lVar8;
    *(long **)(puVar3 + -0x80) = plVar22;
    *(long *)(puVar3 + -0x78) = auVar32._8_8_;
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
    *(undefined **)(puVar3 + -0x68) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
    if ((bRam0000000003eb51f5 & 1) == 0) {
      func_0x00f78a20(0x3d27700);
      bRam0000000003eb51f5 = 1;
    }
    plVar22 = (long *)(auVar33._0_8_ + 0x88);
    lVar8 = *plVar22;
    while ((plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar8,auVar33._8_8_,0), plVar9 == (long *)0x0 ||
           (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
      lVar21 = func_0x00ff0f44(plVar22,plVar9,lVar8);
      bVar6 = lVar8 == lVar21;
      lVar8 = lVar21;
      if (bVar6) {
        return;
      }
    }
    auVar34 = func_0x00f78e5c(plVar9);
    puVar4 = puVar3 + -0xe0;
    *(undefined8 *)(puVar3 + -0xe0) = unaff_x26;
    *(undefined8 *)(puVar3 + -0xd8) = unaff_x25;
    *(undefined8 *)(puVar3 + -0xd0) = unaff_x24;
    *(undefined8 **)(puVar3 + -200) = unaff_x23;
    *(undefined8 *)(puVar3 + -0xc0) = 0x3d27700;
    *(long *)(puVar3 + -0xb8) = lVar8;
    *(long **)(puVar3 + -0xb0) = plVar22;
    *(long *)(puVar3 + -0xa8) = auVar33._8_8_;
    *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x70;
    *(code **)(puVar3 + -0x98) = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
    puVar25 = puVar3 + -0xa0;
    unaff_x23 = (undefined8 *)0x3d27718;
    unaff_x24 = 0x3d570f0;
    if ((bRam0000000003eb51b7 & 1) == 0) {
      func_0x00f78a20(0x3d524e0);
      func_0x00f78a20(0x3d524e8);
      func_0x00f78a20(0x3d524f0);
      func_0x00f78a20(0x3d524f8);
      func_0x00f78a20(0x3d570d0);
      func_0x00f78a20(0x3d570f0);
      func_0x00f78a20(0x3d27700);
      func_0x00f78a20(0x3d27718);
      func_0x00f78a20(0x3d27728);
      func_0x00f78a20(0x3d27730);
      func_0x00f78a20(0x3d27738);
      bRam0000000003eb51b7 = 1;
    }
    unaff_x21 = *(long *)(auVar34._0_8_ + 0x40);
    uVar23 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
    auVar35._8_8_ = uVar23;
    auVar35._0_8_ = unaff_x21;
    uVar20 = 0;
    /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(uVar23,auVar34._0_8_,uRam0000000003d570f0,0);
    if (unaff_x21 == 0) {
      puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
      auVar35 = func_0x00f78af4();
    }
    else {
      unaff_x24 = 0x3d27000;
      unaff_x25 = 0x3d52000;
      puVar26 = (undefined *)0x159d470;
      puVar4 = puVar3 + -0xe0;
    }
    goto code_r0x0159d5c4;
  }
  if (*(long *)(auVar32._8_8_ + 0x10) != *(long *)(lVar8 + 0x38)) {
    return;
  }
  puVar4 = puVar2 + -0x150;
  register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x150);
  *(undefined8 *)(puVar2 + -0x120) = unaff_x24;
  *(undefined8 **)(puVar2 + -0x118) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x110) = unaff_x22;
  *(long *)(puVar2 + -0x108) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x100) = uVar20;
  *(long *)(puVar2 + -0xf8) = lVar10;
  *(undefined8 *)(puVar2 + -0xf0) = *(undefined8 *)(puVar2 + -0xf0);
  *(undefined8 *)(puVar2 + -0xe8) = *(undefined8 *)(puVar2 + -0xe8);
  puVar25 = puVar2 + -0xf0;
  lVar21 = 0x3eb4000;
  if ((bRam0000000003eb4ec2 & 1) == 0) {
    func_0x00f78a20(0x3d527e8);
    func_0x00f78a20(0x3d527f8);
    func_0x00f78a20(0x3d52800);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ec2 = 1;
  }
  if (*(long *)(lVar8 + 0x58) == 0) {
LAB_01535ac8:
    param_1 = func_0x00f78af4();
    *(long *)(puVar2 + -0x170) = lVar21;
    *(long *)(puVar2 + -0x168) = lVar8;
    *(undefined1 **)(puVar2 + -0x160) = puVar25;
    *(code **)(puVar2 + -0x158) =
         Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterHitPlayerEndTrigger;
    param_3 = 0;
    iVar7 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
    if (iVar7 == 0) {
      return;
    }
    unaff_x29 = *(undefined8 *)(puVar2 + -0x160);
    unaff_x30 = *(undefined8 *)(puVar2 + -0x158);
    unaff_x20 = *(undefined8 *)(puVar2 + -0x170);
    unaff_x19 = *(undefined8 *)(puVar2 + -0x168);
    goto code_r0x01535b04;
  }
  *(undefined1 *)(*(long *)(lVar8 + 0x58) + 0x100) = 1;
  lVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar8);
  if (lVar10 == 0) goto LAB_01535ac8;
  uVar20 = *(undefined8 *)(lVar10 + 0x70);
  uVar14 = *(undefined8 *)(lVar10 + 0x88);
  uVar23 = *(undefined8 *)(lVar10 + 0x80);
  *(undefined8 *)(puVar2 + -0x148) = *(undefined8 *)(lVar10 + 0x78);
  *(undefined8 *)(puVar2 + -0x150) = uVar20;
  *(undefined8 *)(puVar2 + -0x138) = uVar14;
  *(undefined8 *)(puVar2 + -0x140) = uVar23;
  uVar20 = *(undefined8 *)(lVar10 + 0x90);
  *(undefined8 *)(puVar2 + -0x128) = *(undefined8 *)(lVar10 + 0x98);
  *(undefined8 *)(puVar2 + -0x130) = uVar20;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar8,puVar2 + -0x150,0);
  lVar21 = *(long *)(lVar8 + 0xd0);
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar8,uRam0000000003d527e8,0);
  unaff_x22 = 0x3d52000;
  if (lVar21 == 0) goto LAB_01535ac8;
  /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar21,unaff_x21,0);
  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_01535ac8;
  uVar23 = 0x3d27718;
  unaff_x23 = (undefined8 *)0x3d52000;
  lVar21 = *(long *)(*(long *)(lVar8 + 0x10) + 0x40);
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar8,uRam0000000003d527f8,0);
  unaff_x22 = 0x3d27718;
  if (lVar21 == 0) goto LAB_01535ac8;
  /*Atlas.Gameplay.Player.GameContextPlayerManager$$remove_OnUsableAttached*/ func_0x015a5cc8(lVar21,unaff_x21,0);
  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_01535ac8;
  unaff_x23 = (undefined8 *)0x3d52000;
  lVar10 = *(long *)(*(long *)(lVar8 + 0x10) + 0x40);
  auVar34._8_8_ = lVar10;
  auVar34._0_8_ = lVar8;
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar35._8_8_ = unaff_x21;
  auVar35._0_8_ = lVar10;
  uVar20 = 0;
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar8,uRam0000000003d52800,0);
  lVar21 = 0;
  unaff_x22 = uVar23;
  if (lVar10 == 0) goto LAB_01535ac8;
  puVar26 = (undefined *)0x1535aa8;
code_r0x0159d5c4:
  *(undefined8 *)(puVar4 + -0x30) = uVar23;
  *(long *)(puVar4 + -0x28) = unaff_x21;
  *(long *)(puVar4 + -0x20) = auVar34._8_8_;
  *(long *)(puVar4 + -0x18) = auVar34._0_8_;
  *(undefined1 **)(puVar4 + -0x10) = puVar25;
  *(undefined **)(puVar4 + -8) = puVar26;
  if ((bRam0000000003eb51f4 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f4 = 1;
  }
  plVar22 = (long *)(auVar35._0_8_ + 0x80);
  lVar8 = *plVar22;
  while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,auVar35._8_8_,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar9,lVar8);
    bVar6 = lVar8 == lVar21;
    lVar8 = lVar21;
    if (bVar6) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar9);
  *(undefined8 *)(puVar4 + -0x60) = 0x3d27718;
  *(long *)(puVar4 + -0x58) = lVar8;
  *(long **)(puVar4 + -0x50) = plVar22;
  *(long *)(puVar4 + -0x48) = auVar35._8_8_;
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x38) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar22 = (long *)(auVar32._0_8_ + 0x88);
  lVar8 = *plVar22;
  while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,auVar32._8_8_,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar9,lVar8);
    bVar6 = lVar8 == lVar21;
    lVar8 = lVar21;
    if (bVar6) {
      return;
    }
  }
  auVar33 = func_0x00f78e5c(plVar9);
  *(undefined8 *)(puVar4 + -0x90) = 0x3d27700;
  *(long *)(puVar4 + -0x88) = lVar8;
  *(long **)(puVar4 + -0x80) = plVar22;
  *(long *)(puVar4 + -0x78) = auVar32._8_8_;
  *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
  *(undefined **)(puVar4 + -0x68) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar22 = (long *)(auVar33._0_8_ + 0xa8);
  lVar8 = *plVar22;
  while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,auVar33._8_8_,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar9,lVar8);
    bVar6 = lVar8 == lVar21;
    lVar8 = lVar21;
    if (bVar6) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar9);
  lVar21 = auVar32._8_8_;
  puVar5 = puVar4 + -0xc0;
  *(undefined8 *)(puVar4 + -0xc0) = 0x3d27738;
  *(long *)(puVar4 + -0xb8) = lVar8;
  *(long **)(puVar4 + -0xb0) = plVar22;
  *(long *)(puVar4 + -0xa8) = auVar33._8_8_;
  *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x70;
  *(undefined **)(puVar4 + -0x98) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  puVar25 = puVar4 + -0xa0;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  unaff_x22 = 0x3d27730;
  plVar22 = (long *)(auVar32._0_8_ + 0xa0);
  unaff_x21 = *plVar22;
  while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x21,lVar21,0), plVar9 == (long *)0x0 ||
         (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar8 = func_0x00ff0f44(plVar22,plVar9,unaff_x21);
    bVar6 = unaff_x21 == lVar8;
    unaff_x21 = lVar8;
    if (bVar6) {
      return;
    }
  }
  puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  auVar32 = func_0x00f78e5c(plVar9);
code_r0x0159d844:
  *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
  *(long *)(puVar5 + -0x28) = unaff_x21;
  *(long **)(puVar5 + -0x20) = plVar22;
  *(long *)(puVar5 + -0x18) = lVar21;
  *(undefined1 **)(puVar5 + -0x10) = puVar25;
  *(undefined **)(puVar5 + -8) = puVar26;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar22 = (long *)0x3d27728;
  plVar9 = (long *)(auVar32._0_8_ + 0x98);
  lVar8 = *plVar9;
  while( true ) {
    puVar16 = (undefined8 *)0x0;
    plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,auVar32._8_8_);
    if ((plVar13 != (long *)0x0) && (*plVar13 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar21 = func_0x00ff0f44(plVar9,plVar13,lVar8);
    bVar6 = lVar8 == lVar21;
    lVar8 = lVar21;
    if (bVar6) {
      return;
    }
  }
  lVar21 = func_0x00f78e5c(plVar13);
  *(undefined8 *)(puVar5 + -0x80) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x78) = unaff_x25;
  *(undefined8 *)(puVar5 + -0x70) = unaff_x24;
  *(undefined8 **)(puVar5 + -0x68) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x60) = 0x3d27728;
  *(long *)(puVar5 + -0x58) = lVar8;
  *(long **)(puVar5 + -0x50) = plVar9;
  *(long *)(puVar5 + -0x48) = auVar32._8_8_;
  *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x38) = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar8 = 0x3eb5000;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar10 = *(long *)(lVar21 + 0x28);
  if (lVar10 != 0) {
    plVar22 = (long *)(lVar21 + 0x10);
    uVar19 = *(uint *)(lVar10 + 0x18);
    if ((int)uVar19 < 1) {
code_r0x0159d9f0:
      if (((*(long *)(lVar21 + 0x20) == 0) ||
          (lVar12 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar12 == 0)) ||
         (unaff_x23 = *(undefined8 **)(lVar12 + 0x10), unaff_x23 == (undefined8 *)0x0))
      goto code_r0x0159db7c;
      uVar23 = 0x3d1b4e8;
      unaff_x24 = 0x3d1b4e8;
      lVar8 = unaff_x23[3];
      lVar10 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
      uVar20 = uRam0000000003d2a1d8;
      /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar10,lVar21,uRam0000000003d57238,uRam0000000003d2a1d8);
      puVar16 = (undefined8 *)0x0;
      plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,lVar10);
      if ((plVar9 == (long *)0x0) || (*plVar9 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
        unaff_x23[3] = plVar9;
        if ((*(long *)(lVar21 + 0x20) == 0) ||
           ((lVar12 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar12 == 0 ||
            (unaff_x23 = *(undefined8 **)(lVar12 + 0x10), unaff_x23 == (undefined8 *)0x0))))
        goto code_r0x0159db7c;
        uVar23 = 0x3d1b3b0;
        unaff_x24 = 0x3d1b3b0;
        lVar8 = unaff_x23[0xe];
        lVar10 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
        uVar20 = uRam0000000003d29f28;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar10,lVar21,uRam0000000003d57240,uRam0000000003d29f28);
        puVar16 = (undefined8 *)0x0;
        plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,lVar10);
        if ((plVar9 == (long *)0x0) || (*plVar9 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
          unaff_x23[0xe] = plVar9;
          if (((*(long *)(lVar21 + 0x20) == 0) ||
              (lVar12 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar12 == 0)) ||
             (unaff_x23 = *(undefined8 **)(lVar12 + 0x10), unaff_x23 == (undefined8 *)0x0))
          goto code_r0x0159db7c;
          uVar23 = 0x3d1b4e0;
          lVar8 = unaff_x23[5];
          lVar10 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
          uVar20 = uRam0000000003d2a1c8;
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar10,lVar21,uRam0000000003d57230,uRam0000000003d2a1c8);
          puVar16 = (undefined8 *)0x0;
          plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,lVar10);
          if ((plVar9 == (long *)0x0) || (*plVar9 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
            unaff_x23[5] = plVar9;
            *(undefined1 *)(lVar21 + 0x50) = 0;
            *(undefined8 *)(lVar21 + 0x18) = 0;
            *plVar22 = 0;
            *(undefined8 *)(lVar21 + 0x28) = 0;
            *(undefined8 *)(lVar21 + 0x20) = 0;
            return;
          }
        }
      }
      goto code_r0x0159db8c;
    }
    unaff_x23 = (undefined8 *)0x0;
    unaff_x24 = 0x3d43378;
    while( true ) {
      uVar24 = (uint)unaff_x23;
      uVar23 = unaff_x24;
      if (uVar19 <= uVar24) goto code_r0x0159db80;
      if (*plVar22 == 0) break;
      lVar8 = *(long *)(lVar10 + (long)(int)uVar24 * 8 + 0x20);
      puVar16 = puRam0000000003d43378;
      /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar22,lVar8);
      if (lVar8 == 0) break;
      /*Atlas.Gameplay.Player.GameContextPlayer$$DeInit*/ func_0x015a5404(lVar8);
      unaff_x23 = (undefined8 *)(ulong)(uVar24 + 1);
      uVar19 = *(uint *)(lVar10 + 0x18);
      if ((int)uVar19 <= (int)(uVar24 + 1)) goto code_r0x0159d9f0;
    }
  }
code_r0x0159db7c:
  func_0x00f78af4();
  uVar23 = unaff_x24;
code_r0x0159db80:
  uVar14 = func_0x00f78b24();
  func_0x00f78ac0(uVar14,0);
code_r0x0159db8c:
  auVar32 = func_0x00f78e5c();
  puVar15 = auVar32._8_8_;
  plVar9 = auVar32._0_8_;
  *(undefined8 *)(puVar5 + -0xc0) = uVar23;
  *(undefined8 **)(puVar5 + -0xb8) = unaff_x23;
  *(long **)(puVar5 + -0xb0) = plVar22;
  *(long *)(puVar5 + -0xa8) = lVar10;
  *(long *)(puVar5 + -0xa0) = lVar8;
  *(long *)(puVar5 + -0x98) = lVar21;
  *(undefined1 **)(puVar5 + -0x90) = puVar5 + -0x40;
  *(code **)(puVar5 + -0x88) = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar17 = puVar16;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar9[3] != 0) &&
      (puVar17 = puVar16, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar9[3],puVar15,puVar16,uVar20,0),
      puVar16 != (undefined8 *)0x0)) && (lVar8 = puVar16[2], lVar8 != 0)) {
    uVar23 = *(undefined8 *)(lVar8 + 0x48);
    uVar27 = *(undefined8 *)(lVar8 + 0x60);
    uVar14 = *(undefined8 *)(lVar8 + 0x58);
    *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(lVar8 + 0x50);
    *(undefined8 *)(puVar5 + -0xe0) = uVar23;
    *(undefined8 *)(puVar5 + -200) = uVar27;
    *(undefined8 *)(puVar5 + -0xd0) = uVar14;
    iVar7 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar5 + -0xe0,0);
    if ((iVar7 == 0) || (puVar16 == puVar15)) {
      return;
    }
    iVar7 = (**(code **)(*plVar9 + 0x2a8))(plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
    if ((plVar9[0x18] != 0) && (lVar8 = *(long *)(plVar9[0x18] + 0x20), lVar8 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar5 + -0xf8,lVar8,0);
      *(int *)(puVar16 + 0xf) = *(int *)(puVar16 + 0xf) + iVar7;
      uVar23 = *(undefined8 *)(puVar5 + -0xf8);
      puVar16[0x11] = *(undefined8 *)(puVar5 + -0xf0);
      puVar16[0x10] = uVar23;
      puVar16[0x12] = *(undefined8 *)(puVar5 + -0xe8);
      if (puVar16[2] != 0) {
        if (*(int *)(puVar16[2] + 0x50) == 0) {
          uVar23 = (**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210));
          puVar17 = (undefined8 *)0x0;
          iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar23,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar7 != 0) {
            if (plVar9[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar9[3],*(undefined4 *)(puVar16 + 0xf),0);
          }
        }
        if (plVar9[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar9[0x46],puVar15,puVar16,uVar20,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar36 = func_0x00f78af4();
  lVar8 = auVar36._0_8_;
  iVar7 = *(int *)(lVar8 + 0x78);
  uVar14 = puVar17[1];
  uVar23 = *puVar17;
  *(undefined8 *)(puVar5 + -0x118) = uVar14;
  *(undefined8 *)(puVar5 + -0x120) = uVar23;
  uVar20 = puVar17[2];
  *(undefined8 *)(puVar5 + -0x110) = uVar20;
  *(int *)(lVar8 + 0x78) = iVar7 + auVar36._8_4_;
  *(undefined8 *)(lVar8 + 0x88) = uVar14;
  *(undefined8 *)(lVar8 + 0x80) = uVar23;
  *(undefined8 *)(lVar8 + 0x90) = uVar20;
  return;
LAB_01478328:
  do {
    uVar11 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0xc0),uRam0000000003d33320);
    if ((uVar11 & 1) == 0) {
LAB_01478494:
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0xc0),uRam0000000003d33318);
      return;
    }
    lVar8 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___ctor(lVar8,0);
    if (lVar8 == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(long *)(lVar8 + 0x50) = param_1;
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x98);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    uVar23 = *(undefined8 *)((long)register0x00000008 + -0x88);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x90);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)(lVar8 + 0x28) = uVar27;
    *(undefined8 *)(lVar8 + 0x20) = uVar14;
    *(undefined8 *)(lVar8 + 0x38) = uVar23;
    *(undefined8 *)(lVar8 + 0x30) = uVar20;
    *(undefined8 *)(lVar8 + 0x18) = uVar29;
    *(undefined8 *)(lVar8 + 0x10) = uVar28;
    *(undefined8 *)((long)register0x00000008 + -0x110) = *(undefined8 *)(lVar8 + 0x18);
    uVar20 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x110))
    ;
    uVar11 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -0x70),uVar20,0);
  } while ((uVar11 & 1) == 0);
  if (*(long *)(param_1 + 0x60) == 0) {
    func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x14784e0);
    (*pcVar1)();
  }
  puVar16 = (undefined8 *)(lVar8 + 0x10);
  puVar17 = (undefined8 *)(lVar8 + 0x48);
  uVar11 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(param_1 + 0x60),*puVar16,puVar17,0);
  if ((uVar11 & 1) == 0) goto LAB_01478494;
  uVar20 = *(undefined8 *)(param_1 + 0xa0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar11 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar20,0,0);
  if ((uVar11 & 1) != 0) {
    if (*(long *)(param_1 + 0xa0) == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(undefined8 *)((long)register0x00000008 + -200) =
         *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x18);
    *(undefined8 *)((long)register0x00000008 + -0x110) = *puVar16;
    uVar20 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x110))
    ;
    uVar11 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -200),uVar20,0);
    if ((uVar11 & 1) != 0) {
      uVar20 = *(undefined8 *)(param_1 + 0x38);
      uVar23 = *puVar16;
      uVar27 = *(undefined8 *)(lVar8 + 0x28);
      uVar14 = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)((long)register0x00000008 + -0x148) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0x150) = uVar23;
      *(undefined8 *)((long)register0x00000008 + -0x138) = uVar27;
      *(undefined8 *)((long)register0x00000008 + -0x140) = uVar14;
      uVar23 = *(undefined8 *)(lVar8 + 0x30);
      *(undefined8 *)((long)register0x00000008 + -0x128) = *(undefined8 *)(lVar8 + 0x38);
      *(undefined8 *)((long)register0x00000008 + -0x130) = uVar23;
      *(undefined8 *)((long)register0x00000008 + -0x120) = *(undefined8 *)(lVar8 + 0x40);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                (param_1,uVar20,(undefined1 *)((long)register0x00000008 + -0x150));
      goto LAB_01478328;
    }
  }
  uVar23 = *puVar17;
  uVar20 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar20,lVar8,uRam0000000003d62270,0);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AddBaseListener(param_1,uVar23,uVar20,*puVar17);
  goto LAB_01478328;
code_r0x01535ee8:
  lVar21 = func_0x00f78af4();
  *(undefined1 **)(puVar2 + -0x130) = puVar2 + -0x100;
  *(undefined **)(puVar2 + -0x128) = &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnHit;
  if (param_3 == 0) {
    func_0x00f78af4();
    return;
  }
  if (*(long *)(param_3 + 0x10) != *(long *)(lVar21 + 0x38)) {
    return;
  }
  puVar25 = *(undefined1 **)(puVar2 + -0x130);
  puVar26 = *(undefined **)(puVar2 + -0x128);
  puVar2 = puVar2 + -0x120;
  goto code_r0x01535b58;
LAB_01478624:
  do {
    uVar11 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0x1e0),uRam0000000003d33320)
    ;
    if ((uVar11 & 1) == 0) {
      uVar18 = 0x7b;
code_r0x0147869c:
      *(undefined4 *)((long)register0x00000008 + -0x1f8) = uVar18;
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x1e0),uRam0000000003d33318);
      if (*(int *)((long)register0x00000008 + -0x1f8) != 0x86) {
code_r0x014786b8:
        lVar21 = *plVar22;
        if (((*(ushort *)(lVar21 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar21 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar21 = *plVar22;
        }
        *(undefined8 *)(lVar8 + 0xa8) = **(undefined8 **)(lVar21 + 0xb8);
      }
      return;
    }
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x1d0);
    *(undefined8 *)((long)register0x00000008 + -0x240) =
         *(undefined8 *)((long)register0x00000008 + -0x1c8);
    uVar23 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x240))
    ;
    uVar11 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar8 + 0xa8,uVar23,0);
  } while ((uVar11 & 1) == 0);
  if (*(long *)(lVar8 + 0x60) == 0) {
    func_0x00f78af4();
  }
  else {
    uVar11 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar8 + 0x60),uVar20,
                             (undefined1 *)((long)register0x00000008 + -0x1e8),0);
    if ((uVar11 & 1) == 0) {
      uVar18 = 0x86;
      goto code_r0x0147869c;
    }
    if (*(long *)((long)register0x00000008 + -0x1e8) != 0) {
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                (lVar8,*(undefined8 *)(*(long *)((long)register0x00000008 + -0x1e8) + 0x18));
      goto LAB_01478624;
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1478708);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1535b58 | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.CompleteHitPlayerCondition
// ============================================================

/* WARNING: Possible PIC construction at 0x01535c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535aa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x01535c74) */
/* WARNING: Removing unreachable block (ram,0x01535aa8) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteHitPlayerCondition
               (long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined8 *extraout_x8;
  long lVar20;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar21;
  long *plVar22;
  long unaff_x21;
  undefined8 unaff_x22;
  uint uVar23;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar24;
  code *unaff_x30;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  
code_r0x01535b58:
  while( true ) {
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar24 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar21 = 0x3eb4000;
    if ((bRam0000000003eb4ec4 & 1) == 0) {
      func_0x00f78a20(0x3d527d0);
      func_0x00f78a20(0x3d527f0);
      func_0x00f78a20(0x3d278d8);
      func_0x00f78a20(0x3d27728);
      bRam0000000003eb4ec4 = 1;
    }
    lVar8 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(param_1);
    if (lVar8 != 0) {
      unaff_x22 = 0x3d52000;
      uVar17 = *(undefined8 *)(lVar8 + 0xa0);
      uVar13 = *(undefined8 *)(lVar8 + 0xb8);
      uVar11 = *(undefined8 *)(lVar8 + 0xb0);
      *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(lVar8 + 0xa8);
      *(undefined8 *)((long)register0x00000008 + -0x60) = uVar17;
      *(undefined8 *)((long)register0x00000008 + -0x48) = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0x50) = uVar11;
      uVar17 = *(undefined8 *)(lVar8 + 0xc0);
      *(undefined8 *)((long)register0x00000008 + -0x38) = *(undefined8 *)(lVar8 + 200);
      *(undefined8 *)((long)register0x00000008 + -0x40) = uVar17;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                (param_1,(undefined1 *)((long)register0x00000008 + -0x60),0);
      *(undefined4 *)(param_1 + 0xe8) = 0;
      lVar21 = *(long *)(param_1 + 0xd8);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      param_3 = uRam0000000003d527d0;
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,param_1,uRam0000000003d527d0,0);
      if (lVar21 != 0) {
        param_3 = 0;
        /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar21,unaff_x21);
        if (*(long *)(param_1 + 0x10) != 0) {
          unaff_x22 = 0x3d52000;
          plVar22 = *(long **)(*(long *)(param_1 + 0x10) + 0x40);
          unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
          auVar31._8_8_ = unaff_x21;
          auVar31._0_8_ = plVar22;
          uVar17 = 0;
          param_3 = uRam0000000003d527f0;
          /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,param_1,uRam0000000003d527f0,0);
          lVar21 = 0;
          if (plVar22 != (long *)0x0) {
            puVar25 = (undefined *)0x1535c74;
            goto code_r0x0159d844;
          }
        }
      }
    }
    auVar31 = func_0x00f78af4();
    lVar8 = auVar31._0_8_;
    puVar2 = (undefined1 *)((long)register0x00000008 + -0xb0);
    *(long *)((long)register0x00000008 + -0x80) = lVar21;
    *(long *)((long)register0x00000008 + -0x78) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x70) = puVar24;
    *(undefined **)((long)register0x00000008 + -0x68) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnPickup;
    if (auVar31._8_8_ != 0) {
      if (*(long *)(auVar31._8_8_ + 0x10) != *(long *)(lVar8 + 0x38)) {
        return;
      }
      lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar8);
      param_1 = lVar8;
      if (lVar9 != 0) {
        uVar17 = *(undefined8 *)(lVar9 + 0x40);
        uVar13 = *(undefined8 *)(lVar9 + 0x58);
        uVar11 = *(undefined8 *)(lVar9 + 0x50);
        *(undefined8 *)((long)register0x00000008 + -0xa8) = *(undefined8 *)(lVar9 + 0x48);
        *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar17;
        *(undefined8 *)((long)register0x00000008 + -0x98) = uVar13;
        *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar11;
        uVar17 = *(undefined8 *)(lVar9 + 0x60);
        *(undefined8 *)((long)register0x00000008 + -0x88) = *(undefined8 *)(lVar9 + 0x68);
        *(undefined8 *)((long)register0x00000008 + -0x90) = uVar17;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                  (lVar8,(undefined1 *)((long)register0x00000008 + -0xb0),0);
        if (*(int *)(lVar8 + 0xe8) == 1) {
          Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompletePickupCondition(lVar8);
          return;
        }
        return;
      }
    }
    lVar8 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x22;
    *(long *)((long)register0x00000008 + -0xd8) = unaff_x21;
    *(long *)((long)register0x00000008 + -0xd0) = lVar21;
    *(long *)((long)register0x00000008 + -200) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0xc0) =
         (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined **)((long)register0x00000008 + -0xb8) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartUseUsableSection;
    uVar17 = 0x3eb4000;
    if ((bRam0000000003eb4ec1 & 1) == 0) {
      func_0x00f78a20(0x3d52800);
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb4ec1 = 1;
    }
    *(undefined4 *)(lVar8 + 0xe8) = 2;
    lVar21 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar8);
    if (lVar21 != 0) {
      param_3 = (ulong)*(uint *)(lVar21 + 0x14c);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                (lVar8,*(undefined8 *)(lVar21 + 0x130),param_3,*(char *)(lVar21 + 0x148) != '\0',0);
      if (*(long *)(lVar8 + 0x10) != 0) {
        unaff_x22 = 0x3d52000;
        lVar21 = *(long *)(*(long *)(lVar8 + 0x10) + 0x40);
        unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
        auVar32._8_8_ = unaff_x21;
        auVar32._0_8_ = lVar21;
        param_3 = uRam0000000003d52800;
        /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar8,uRam0000000003d52800,0);
        uVar17 = 0;
        if (lVar21 != 0) {
          puVar24 = *(undefined1 **)((long)register0x00000008 + -0xc0);
          puVar25 = *(undefined **)((long)register0x00000008 + -0xb8);
          plVar22 = *(long **)((long)register0x00000008 + -0xd0);
          uVar11 = *(undefined8 *)((long)register0x00000008 + -200);
          uVar17 = *(undefined8 *)((long)register0x00000008 + -0xe0);
          lVar21 = *(long *)((long)register0x00000008 + -0xd8);
          goto code_r0x0159d188;
        }
      }
    }
    auVar31 = func_0x00f78af4();
    lVar21 = auVar31._0_8_;
    *(undefined1 **)((long)register0x00000008 + -0xf0) =
         (undefined1 *)((long)register0x00000008 + -0xc0);
    *(undefined **)((long)register0x00000008 + -0xe8) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnUse;
    if (auVar31._8_8_ == 0) break;
    if (*(long *)(auVar31._8_8_ + 0x10) != *(long *)(lVar21 + 0x38)) {
      return;
    }
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x150);
    *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x118) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x110) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x108) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x100) = uVar17;
    *(long *)((long)register0x00000008 + -0xf8) = lVar8;
    *(undefined8 *)((long)register0x00000008 + -0xf0) =
         *(undefined8 *)((long)register0x00000008 + -0xf0);
    *(undefined8 *)((long)register0x00000008 + -0xe8) =
         *(undefined8 *)((long)register0x00000008 + -0xe8);
    puVar24 = (undefined1 *)((long)register0x00000008 + -0xf0);
    lVar8 = 0x3eb4000;
    if ((bRam0000000003eb4ec2 & 1) == 0) {
      func_0x00f78a20(0x3d527e8);
      func_0x00f78a20(0x3d527f8);
      func_0x00f78a20(0x3d52800);
      func_0x00f78a20(0x3d278d8);
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb4ec2 = 1;
    }
    if (*(long *)(lVar21 + 0x58) != 0) {
      *(undefined1 *)(*(long *)(lVar21 + 0x58) + 0x100) = 1;
      lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar21);
      if (lVar9 != 0) {
        uVar17 = *(undefined8 *)(lVar9 + 0x70);
        uVar13 = *(undefined8 *)(lVar9 + 0x88);
        uVar11 = *(undefined8 *)(lVar9 + 0x80);
        *(undefined8 *)((long)register0x00000008 + -0x148) = *(undefined8 *)(lVar9 + 0x78);
        *(undefined8 *)((long)register0x00000008 + -0x150) = uVar17;
        *(undefined8 *)((long)register0x00000008 + -0x138) = uVar13;
        *(undefined8 *)((long)register0x00000008 + -0x140) = uVar11;
        uVar17 = *(undefined8 *)(lVar9 + 0x90);
        *(undefined8 *)((long)register0x00000008 + -0x128) = *(undefined8 *)(lVar9 + 0x98);
        *(undefined8 *)((long)register0x00000008 + -0x130) = uVar17;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                  (lVar21,(undefined1 *)((long)register0x00000008 + -0x150),0);
        lVar8 = *(long *)(lVar21 + 0xd0);
        unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
        /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar21,uRam0000000003d527e8,0);
        unaff_x22 = 0x3d52000;
        if (lVar8 != 0) {
          /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar8,unaff_x21,0);
          if (*(long *)(lVar21 + 0x10) != 0) {
            uVar11 = 0x3d27718;
            unaff_x23 = (undefined8 *)0x3d52000;
            lVar8 = *(long *)(*(long *)(lVar21 + 0x10) + 0x40);
            unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
            /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar21,uRam0000000003d527f8,0);
            unaff_x22 = 0x3d27718;
            if (lVar8 != 0) {
              /*Atlas.Gameplay.Player.GameContextPlayerManager$$remove_OnUsableAttached*/ func_0x015a5cc8(lVar8,unaff_x21,0);
              if (*(long *)(lVar21 + 0x10) != 0) {
                unaff_x23 = (undefined8 *)0x3d52000;
                lVar9 = *(long *)(*(long *)(lVar21 + 0x10) + 0x40);
                auVar33._8_8_ = lVar9;
                auVar33._0_8_ = lVar21;
                unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
                auVar34._8_8_ = unaff_x21;
                auVar34._0_8_ = lVar9;
                uVar17 = 0;
                /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar21,uRam0000000003d52800,0);
                lVar8 = 0;
                unaff_x22 = uVar11;
                if (lVar9 != 0) {
                  puVar25 = (undefined *)0x1535aa8;
                  goto code_r0x0159d5c4;
                }
              }
            }
          }
        }
      }
    }
    lVar9 = func_0x00f78af4();
    *(long *)((long)register0x00000008 + -0x170) = lVar8;
    *(long *)((long)register0x00000008 + -0x168) = lVar21;
    *(undefined1 **)((long)register0x00000008 + -0x160) = puVar24;
    *(code **)((long)register0x00000008 + -0x158) =
         Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterHitPlayerEndTrigger;
    param_3 = 0;
    iVar6 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
    if (iVar6 == 0) {
      return;
    }
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x170);
    *(undefined8 *)((long)register0x00000008 + -0x170) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x168) =
         *(undefined8 *)((long)register0x00000008 + -0x168);
    *(undefined8 *)((long)register0x00000008 + -0x160) =
         *(undefined8 *)((long)register0x00000008 + -0x160);
    *(undefined8 *)((long)register0x00000008 + -0x158) =
         *(undefined8 *)((long)register0x00000008 + -0x158);
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x160);
    uVar7 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar9,0);
    if ((uVar7 & 1) == 0) {
      unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x160);
      unaff_x30 = *(code **)((long)register0x00000008 + -0x158);
      unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x170);
      unaff_x19 = *(long *)((long)register0x00000008 + -0x168);
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x150);
      param_1 = lVar9;
    }
    else {
      if (*(long *)(lVar9 + 0xb8) != 0) {
        Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsedUsables(*(long *)(lVar9 + 0xb8),0);
        *(undefined8 *)((long)register0x00000008 + -0x180) = unaff_x22;
        *(long *)((long)register0x00000008 + -0x178) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x170) =
             *(undefined8 *)((long)register0x00000008 + -0x170);
        *(undefined8 *)((long)register0x00000008 + -0x168) =
             *(undefined8 *)((long)register0x00000008 + -0x168);
        *(undefined8 *)((long)register0x00000008 + -0x160) =
             *(undefined8 *)((long)register0x00000008 + -0x160);
        *(undefined8 *)((long)register0x00000008 + -0x158) =
             *(undefined8 *)((long)register0x00000008 + -0x158);
        *(int *)(lVar9 + 0x8c) = *(int *)(lVar9 + 0x8c) + 1;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                  ((undefined1 *)((long)register0x00000008 + -0x1e0),lVar9,
                   *(undefined8 *)(lVar9 + 0xa8));
        *(undefined8 *)((long)register0x00000008 + -0x228) =
             *(undefined8 *)((long)register0x00000008 + -0x1d8);
        *(undefined8 *)((long)register0x00000008 + -0x230) =
             *(undefined8 *)((long)register0x00000008 + -0x1e0);
        *(undefined8 *)((long)register0x00000008 + -0x218) =
             *(undefined8 *)((long)register0x00000008 + -0x1c8);
        *(undefined8 *)((long)register0x00000008 + -0x220) =
             *(undefined8 *)((long)register0x00000008 + -0x1d0);
        uVar28 = *(undefined8 *)((long)register0x00000008 + -0x1a8);
        uVar27 = *(undefined8 *)((long)register0x00000008 + -0x1b0);
        uVar26 = *(undefined8 *)((long)register0x00000008 + -0x198);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x1a0);
        *(undefined8 *)((long)register0x00000008 + -0x1f8) = uVar28;
        *(undefined8 *)((long)register0x00000008 + -0x200) = uVar27;
        *(undefined8 *)((long)register0x00000008 + -0x1e8) = uVar26;
        *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar13;
        uVar30 = *(undefined8 *)((long)register0x00000008 + -0x1b8);
        uVar29 = *(undefined8 *)((long)register0x00000008 + -0x1c0);
        *(undefined8 *)((long)register0x00000008 + -0x208) = uVar30;
        *(undefined8 *)((long)register0x00000008 + -0x210) = uVar29;
        uVar17 = *(undefined8 *)((long)register0x00000008 + -400);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x188);
        *(undefined8 *)((long)register0x00000008 + -0x1b8) = uVar30;
        *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar29;
        *(undefined8 *)((long)register0x00000008 + -0x1a8) = uVar28;
        *(undefined8 *)((long)register0x00000008 + -0x1b0) = uVar27;
        *(undefined8 *)((long)register0x00000008 + -0x198) = uVar26;
        *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar13;
        *(undefined8 *)((long)register0x00000008 + -0x1d8) =
             *(undefined8 *)((long)register0x00000008 + -0x1d8);
        *(undefined8 *)((long)register0x00000008 + -0x1e0) =
             *(undefined8 *)((long)register0x00000008 + -0x1e0);
        *(undefined8 *)((long)register0x00000008 + -0x1c8) =
             *(undefined8 *)((long)register0x00000008 + -0x1c8);
        *(undefined8 *)((long)register0x00000008 + -0x1d0) =
             *(undefined8 *)((long)register0x00000008 + -0x1d0);
        *(undefined8 *)((long)register0x00000008 + -0x248) = uVar28;
        *(undefined8 *)((long)register0x00000008 + -0x250) = uVar27;
        *(undefined8 *)((long)register0x00000008 + -0x238) = uVar26;
        *(undefined8 *)((long)register0x00000008 + -0x240) = uVar13;
        *(undefined8 *)((long)register0x00000008 + -600) = uVar30;
        *(undefined8 *)((long)register0x00000008 + -0x260) = uVar29;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                  (lVar9,(undefined1 *)((long)register0x00000008 + -0x260));
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnHumanPlayerAtLocator(lVar9,uVar17);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnAIsAtLocators(lVar9,uVar11);
        uVar17 = *(undefined8 *)(lVar9 + 0xa8);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection(lVar9);
        plVar22 = *(long **)((long)register0x00000008 + -0x180);
        *(undefined8 *)((long)register0x00000008 + -0x1b0) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0x1a8) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0x1a0) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x198) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -400) = unaff_x24;
        *(undefined8 **)((long)register0x00000008 + -0x188) = unaff_x23;
        *(long **)((long)register0x00000008 + -0x180) = plVar22;
        *(undefined8 *)((long)register0x00000008 + -0x178) =
             *(undefined8 *)((long)register0x00000008 + -0x178);
        *(undefined8 *)((long)register0x00000008 + -0x170) =
             *(undefined8 *)((long)register0x00000008 + -0x170);
        *(undefined8 *)((long)register0x00000008 + -0x168) =
             *(undefined8 *)((long)register0x00000008 + -0x168);
        *(undefined8 *)((long)register0x00000008 + -0x160) =
             *(undefined8 *)((long)register0x00000008 + -0x160);
        *(undefined8 *)((long)register0x00000008 + -0x158) =
             *(undefined8 *)((long)register0x00000008 + -0x158);
        *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar17;
        if ((bRam0000000003eb48a2 & 1) == 0) {
          func_0x00f78a20(0x3d33318);
          func_0x00f78a20(0x3d33320);
          func_0x00f78a20(0x3d33328);
          func_0x00f78a20(0x3d278d8);
          func_0x00f78a20(0x3d3cd70);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d24e08);
          func_0x00f78a20(0x3d62270);
          func_0x00f78a20(0x3d26ac8);
          bRam0000000003eb48a2 = 1;
        }
        *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x208) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x210) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x1f8) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x200) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x218) = 0;
        *(undefined8 *)(lVar9 + 0xa8) = uVar17;
        if ((*(long *)(lVar9 + 0x40) != 0) &&
           (lVar21 = *(long *)(*(long *)(lVar9 + 0x40) + 0x30), lVar21 != 0)) {
          /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x260),lVar21,
                          uRam0000000003d3cd70);
          *(undefined8 *)((long)register0x00000008 + -0x1e8) =
               *(undefined8 *)((long)register0x00000008 + -0x238);
          *(undefined8 *)((long)register0x00000008 + -0x1f0) =
               *(undefined8 *)((long)register0x00000008 + -0x240);
          *(undefined8 *)((long)register0x00000008 + -0x1d8) =
               *(undefined8 *)((long)register0x00000008 + -0x228);
          *(undefined8 *)((long)register0x00000008 + -0x1e0) =
               *(undefined8 *)((long)register0x00000008 + -0x230);
          *(undefined8 *)((long)register0x00000008 + -0x1d0) =
               *(undefined8 *)((long)register0x00000008 + -0x220);
          *(undefined8 *)((long)register0x00000008 + -0x208) =
               *(undefined8 *)((long)register0x00000008 + -600);
          *(undefined8 *)((long)register0x00000008 + -0x210) =
               *(undefined8 *)((long)register0x00000008 + -0x260);
          *(undefined8 *)((long)register0x00000008 + -0x1f8) =
               *(undefined8 *)((long)register0x00000008 + -0x248);
          *(undefined8 *)((long)register0x00000008 + -0x200) =
               *(undefined8 *)((long)register0x00000008 + -0x250);
          goto LAB_01478328;
        }
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar10 = (long *)___cxa_begin_catch();
          lVar9 = *plVar10;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x210),uRam0000000003d33318);
          if (lVar9 == 0) {
            return;
          }
          func_0x00f78ac0(lVar9,0);
        }
        lVar21 = __Unwind_Resume();
        *(undefined8 *)((long)register0x00000008 + -0x2e0) = unaff_x24;
        *(undefined8 **)((long)register0x00000008 + -0x2d8) = unaff_x23;
        *(long **)((long)register0x00000008 + -0x2d0) = plVar22;
        *(undefined8 *)((long)register0x00000008 + -0x2c8) = 0x3eb4000;
        *(undefined8 *)((long)register0x00000008 + -0x2c0) = uVar17;
        *(long *)((long)register0x00000008 + -0x2b8) = lVar9;
        *(undefined1 **)((long)register0x00000008 + -0x2b0) =
             (undefined1 *)((long)register0x00000008 + -0x160);
        *(code **)((long)register0x00000008 + -0x2a8) =
             Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
        lVar8 = 0x3eb4000;
        if ((bRam0000000003eb48a3 & 1) == 0) {
          func_0x00f78a20(0x3d33318);
          func_0x00f78a20(0x3d33320);
          func_0x00f78a20(0x3d33328);
          func_0x00f78a20(0x3d3cd70);
          func_0x00f78a20(0x3d24e08);
          bRam0000000003eb48a3 = 1;
        }
        *(undefined8 *)((long)register0x00000008 + -0x338) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x340) = 0;
        if ((*(long *)(lVar21 + 0x40) != 0) &&
           (lVar9 = *(long *)(*(long *)(lVar21 + 0x40) + 0x30), lVar9 != 0)) {
          plVar22 = (long *)0x3d24e08;
          /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x390),lVar9,
                          uRam0000000003d3cd70);
          *(undefined8 *)((long)register0x00000008 + -0x308) =
               *(undefined8 *)((long)register0x00000008 + -0x368);
          *(undefined8 *)((long)register0x00000008 + -0x310) =
               *(undefined8 *)((long)register0x00000008 + -0x370);
          *(undefined8 *)((long)register0x00000008 + -0x2f8) =
               *(undefined8 *)((long)register0x00000008 + -0x358);
          *(undefined8 *)((long)register0x00000008 + -0x300) =
               *(undefined8 *)((long)register0x00000008 + -0x360);
          *(undefined8 *)((long)register0x00000008 + -0x2f0) =
               *(undefined8 *)((long)register0x00000008 + -0x350);
          *(undefined8 *)((long)register0x00000008 + -0x328) =
               *(undefined8 *)((long)register0x00000008 + -0x388);
          *(undefined8 *)((long)register0x00000008 + -0x330) =
               *(undefined8 *)((long)register0x00000008 + -0x390);
          *(undefined8 *)((long)register0x00000008 + -0x318) =
               *(undefined8 *)((long)register0x00000008 + -0x378);
          *(undefined8 *)((long)register0x00000008 + -800) =
               *(undefined8 *)((long)register0x00000008 + -0x380);
          goto LAB_01478624;
        }
        func_0x00f78af4();
        if (extraout_w1_00 == 1) {
          plVar10 = (long *)___cxa_begin_catch();
          lVar8 = *plVar10;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x330),*unaff_x23);
          if (lVar8 == 0) goto code_r0x014786b8;
          func_0x00f78ac0(lVar8,0);
        }
        lVar9 = __Unwind_Resume();
        *(long *)((long)register0x00000008 + -0x3b0) = lVar8;
        *(long *)((long)register0x00000008 + -0x3a8) = lVar21;
        *(undefined1 **)((long)register0x00000008 + -0x3a0) =
             (undefined1 *)((long)register0x00000008 + -0x2b0);
        *(code **)((long)register0x00000008 + -0x398) =
             Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                  ((undefined1 *)((long)register0x00000008 + -0x410),lVar9,
                   *(undefined8 *)(lVar9 + 0xa8));
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0x3f0);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x3d8);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x3e0);
        extraout_x8[5] = *(undefined8 *)((long)register0x00000008 + -1000);
        extraout_x8[4] = uVar17;
        extraout_x8[7] = uVar13;
        extraout_x8[6] = uVar11;
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0x3d0);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x3b8);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x3c0);
        extraout_x8[9] = *(undefined8 *)((long)register0x00000008 + -0x3c8);
        extraout_x8[8] = uVar17;
        extraout_x8[0xb] = uVar13;
        extraout_x8[10] = uVar11;
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0x410);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x3f8);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x400);
        extraout_x8[1] = *(undefined8 *)((long)register0x00000008 + -0x408);
        *extraout_x8 = uVar17;
        extraout_x8[3] = uVar13;
        extraout_x8[2] = uVar11;
        return;
      }
      unaff_x30 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteHitPlayerCondition;
      param_1 = func_0x00f78af4();
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x170);
      unaff_x19 = lVar9;
    }
  }
  unaff_x19 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x118) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x110) = uVar17;
  *(long *)((long)register0x00000008 + -0x108) = lVar8;
  *(undefined1 **)((long)register0x00000008 + -0x100) =
       (undefined1 *)((long)register0x00000008 + -0xf0);
  *(undefined **)((long)register0x00000008 + -0xf8) =
       &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartHitPlayerSection;
  unaff_x20 = 0x3eb4000;
  if ((bRam0000000003eb4ec3 & 1) == 0) {
    func_0x00f78a20(0x3d527f0);
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb4ec3 = 1;
  }
  lVar21 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(unaff_x19);
  if (lVar21 == 0) {
code_r0x01535ee8:
    param_1 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0x130) =
         (undefined1 *)((long)register0x00000008 + -0x100);
    *(undefined **)((long)register0x00000008 + -0x128) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnHit;
    if (param_3 == 0) {
      func_0x00f78af4();
      return;
    }
    if (*(long *)(param_3 + 0x10) != *(long *)(param_1 + 0x38)) {
      return;
    }
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x130);
    unaff_x30 = *(code **)((long)register0x00000008 + -0x128);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x120);
    goto code_r0x01535b58;
  }
  param_3 = (ulong)*(uint *)(lVar21 + 0x1ac);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
            (unaff_x19,*(undefined8 *)(lVar21 + 400),param_3,*(char *)(lVar21 + 0x1a8) != '\0',0);
  *(undefined4 *)(unaff_x19 + 0xe8) = 3;
  if (*(long *)(unaff_x19 + 0x10) == 0) goto code_r0x01535ee8;
  unaff_x22 = 0x3d52000;
  lVar21 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x40);
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
  param_3 = uRam0000000003d527f0;
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,unaff_x19,uRam0000000003d527f0,0);
  unaff_x20 = 0;
  if (lVar21 == 0) goto code_r0x01535ee8;
  *(undefined8 *)((long)register0x00000008 + -0x120) =
       *(undefined8 *)((long)register0x00000008 + -0x120);
  *(undefined8 *)((long)register0x00000008 + -0x118) =
       *(undefined8 *)((long)register0x00000008 + -0x118);
  *(undefined8 *)((long)register0x00000008 + -0x110) =
       *(undefined8 *)((long)register0x00000008 + -0x110);
  *(undefined8 *)((long)register0x00000008 + -0x108) =
       *(undefined8 *)((long)register0x00000008 + -0x108);
  *(undefined8 *)((long)register0x00000008 + -0x100) =
       *(undefined8 *)((long)register0x00000008 + -0x100);
  *(undefined8 *)((long)register0x00000008 + -0xf8) =
       *(undefined8 *)((long)register0x00000008 + -0xf8);
  if ((bRam0000000003eb51f9 & 1) == 0) {
    func_0x00f78a20(0x3d27728,unaff_x21,0);
    bRam0000000003eb51f9 = 1;
  }
  plVar22 = (long *)(lVar21 + 0x98);
  lVar21 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar21,unaff_x21,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
    lVar8 = func_0x00ff0f44(plVar22,plVar10,lVar21);
    bVar5 = lVar21 == lVar8;
    lVar21 = lVar8;
    if (bVar5) {
      return;
    }
  }
  auVar31 = func_0x00f78e5c(plVar10);
  uVar11 = auVar31._8_8_;
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x150);
  *(undefined8 *)((long)register0x00000008 + -0x150) = 0x3d27728;
  *(long *)((long)register0x00000008 + -0x148) = lVar21;
  *(long **)((long)register0x00000008 + -0x140) = plVar22;
  *(long *)((long)register0x00000008 + -0x138) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x130) =
       (undefined1 *)((long)register0x00000008 + -0x100);
  *(undefined **)((long)register0x00000008 + -0x128) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
  puVar24 = (undefined1 *)((long)register0x00000008 + -0x130);
  if ((bRam0000000003eb51fb & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fb = 1;
  }
  uVar17 = 0x3d27730;
  plVar22 = (long *)(auVar31._0_8_ + 0xa0);
  lVar21 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar21,uVar11,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar8 = func_0x00ff0f44(plVar22,plVar10,lVar21);
    bVar5 = lVar21 == lVar8;
    lVar21 = lVar8;
    if (bVar5) {
      return;
    }
  }
  puVar25 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
  auVar32 = func_0x00f78e5c(plVar10);
code_r0x0159d188:
  *(undefined8 *)(puVar2 + -0x30) = uVar17;
  *(long *)(puVar2 + -0x28) = lVar21;
  *(long **)(puVar2 + -0x20) = plVar22;
  *(undefined8 *)(puVar2 + -0x18) = uVar11;
  *(undefined1 **)(puVar2 + -0x10) = puVar24;
  *(undefined **)(puVar2 + -8) = puVar25;
  if ((bRam0000000003eb51f3 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f3 = 1;
  }
  plVar22 = (long *)(auVar32._0_8_ + 0x80);
  lVar21 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar21,auVar32._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar8 = func_0x00ff0f44(plVar22,plVar10,lVar21);
    bVar5 = lVar21 == lVar8;
    lVar21 = lVar8;
    if (bVar5) {
      return;
    }
  }
  auVar31 = func_0x00f78e5c(plVar10);
  *(undefined8 *)(puVar2 + -0x60) = 0x3d27718;
  *(long *)(puVar2 + -0x58) = lVar21;
  *(long **)(puVar2 + -0x50) = plVar22;
  *(long *)(puVar2 + -0x48) = auVar32._8_8_;
  *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x38) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
  if ((bRam0000000003eb51fd & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fd = 1;
  }
  plVar22 = (long *)(auVar31._0_8_ + 0xa8);
  lVar21 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar21,auVar31._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar8 = func_0x00ff0f44(plVar22,plVar10,lVar21);
    bVar5 = lVar21 == lVar8;
    lVar21 = lVar8;
    if (bVar5) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar10);
  *(undefined8 *)(puVar2 + -0x90) = 0x3d27738;
  *(long *)(puVar2 + -0x88) = lVar21;
  *(long **)(puVar2 + -0x80) = plVar22;
  *(long *)(puVar2 + -0x78) = auVar31._8_8_;
  *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x40;
  *(undefined **)(puVar2 + -0x68) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
  if ((bRam0000000003eb51f5 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f5 = 1;
  }
  plVar22 = (long *)(auVar32._0_8_ + 0x88);
  lVar21 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar21,auVar32._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar8 = func_0x00ff0f44(plVar22,plVar10,lVar21);
    bVar5 = lVar21 == lVar8;
    lVar21 = lVar8;
    if (bVar5) {
      return;
    }
  }
  auVar33 = func_0x00f78e5c(plVar10);
  puVar3 = puVar2 + -0xe0;
  *(undefined8 *)(puVar2 + -0xe0) = unaff_x26;
  *(undefined8 *)(puVar2 + -0xd8) = unaff_x25;
  *(undefined8 *)(puVar2 + -0xd0) = unaff_x24;
  *(undefined8 **)(puVar2 + -200) = unaff_x23;
  *(undefined8 *)(puVar2 + -0xc0) = 0x3d27700;
  *(long *)(puVar2 + -0xb8) = lVar21;
  *(long **)(puVar2 + -0xb0) = plVar22;
  *(long *)(puVar2 + -0xa8) = auVar32._8_8_;
  *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
  *(code **)(puVar2 + -0x98) = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
  puVar24 = puVar2 + -0xa0;
  unaff_x23 = (undefined8 *)0x3d27718;
  unaff_x24 = 0x3d570f0;
  if ((bRam0000000003eb51b7 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b7 = 1;
  }
  unaff_x21 = *(long *)(auVar33._0_8_ + 0x40);
  uVar11 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar34._8_8_ = uVar11;
  auVar34._0_8_ = unaff_x21;
  uVar17 = 0;
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(uVar11,auVar33._0_8_,uRam0000000003d570f0,0);
  if (unaff_x21 == 0) {
    puVar25 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
    auVar34 = func_0x00f78af4();
  }
  else {
    unaff_x24 = 0x3d27000;
    unaff_x25 = 0x3d52000;
    puVar25 = (undefined *)0x159d470;
    puVar3 = puVar2 + -0xe0;
  }
code_r0x0159d5c4:
  *(undefined8 *)(puVar3 + -0x30) = uVar11;
  *(long *)(puVar3 + -0x28) = unaff_x21;
  *(long *)(puVar3 + -0x20) = auVar33._8_8_;
  *(long *)(puVar3 + -0x18) = auVar33._0_8_;
  *(undefined1 **)(puVar3 + -0x10) = puVar24;
  *(undefined **)(puVar3 + -8) = puVar25;
  if ((bRam0000000003eb51f4 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f4 = 1;
  }
  plVar22 = (long *)(auVar34._0_8_ + 0x80);
  lVar21 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar21,auVar34._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar8 = func_0x00ff0f44(plVar22,plVar10,lVar21);
    bVar5 = lVar21 == lVar8;
    lVar21 = lVar8;
    if (bVar5) {
      return;
    }
  }
  auVar31 = func_0x00f78e5c(plVar10);
  *(undefined8 *)(puVar3 + -0x60) = 0x3d27718;
  *(long *)(puVar3 + -0x58) = lVar21;
  *(long **)(puVar3 + -0x50) = plVar22;
  *(long *)(puVar3 + -0x48) = auVar34._8_8_;
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x38) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar22 = (long *)(auVar31._0_8_ + 0x88);
  lVar21 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar21,auVar31._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar8 = func_0x00ff0f44(plVar22,plVar10,lVar21);
    bVar5 = lVar21 == lVar8;
    lVar21 = lVar8;
    if (bVar5) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar10);
  *(undefined8 *)(puVar3 + -0x90) = 0x3d27700;
  *(long *)(puVar3 + -0x88) = lVar21;
  *(long **)(puVar3 + -0x80) = plVar22;
  *(long *)(puVar3 + -0x78) = auVar31._8_8_;
  *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
  *(undefined **)(puVar3 + -0x68) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar22 = (long *)(auVar32._0_8_ + 0xa8);
  lVar21 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar21,auVar32._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar8 = func_0x00ff0f44(plVar22,plVar10,lVar21);
    bVar5 = lVar21 == lVar8;
    lVar21 = lVar8;
    if (bVar5) {
      return;
    }
  }
  auVar31 = func_0x00f78e5c(plVar10);
  param_1 = auVar31._8_8_;
  puVar4 = puVar3 + -0xc0;
  *(undefined8 *)(puVar3 + -0xc0) = 0x3d27738;
  *(long *)(puVar3 + -0xb8) = lVar21;
  *(long **)(puVar3 + -0xb0) = plVar22;
  *(long *)(puVar3 + -0xa8) = auVar32._8_8_;
  *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x70;
  *(undefined **)(puVar3 + -0x98) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  puVar24 = puVar3 + -0xa0;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  unaff_x22 = 0x3d27730;
  plVar22 = (long *)(auVar31._0_8_ + 0xa0);
  unaff_x21 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x21,param_1,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar10,unaff_x21);
    bVar5 = unaff_x21 == lVar21;
    unaff_x21 = lVar21;
    if (bVar5) {
      return;
    }
  }
  puVar25 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  auVar31 = func_0x00f78e5c(plVar10);
code_r0x0159d844:
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(long *)(puVar4 + -0x28) = unaff_x21;
  *(long **)(puVar4 + -0x20) = plVar22;
  *(long *)(puVar4 + -0x18) = param_1;
  *(undefined1 **)(puVar4 + -0x10) = puVar24;
  *(undefined **)(puVar4 + -8) = puVar25;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar22 = (long *)0x3d27728;
  plVar10 = (long *)(auVar31._0_8_ + 0x98);
  lVar21 = *plVar10;
  while( true ) {
    puVar15 = (undefined8 *)0x0;
    plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar21,auVar31._8_8_);
    if ((plVar12 != (long *)0x0) && (*plVar12 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar8 = func_0x00ff0f44(plVar10,plVar12,lVar21);
    bVar5 = lVar21 == lVar8;
    lVar21 = lVar8;
    if (bVar5) {
      return;
    }
  }
  lVar8 = func_0x00f78e5c(plVar12);
  *(undefined8 *)(puVar4 + -0x80) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x78) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x70) = unaff_x24;
  *(undefined8 **)(puVar4 + -0x68) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x60) = 0x3d27728;
  *(long *)(puVar4 + -0x58) = lVar21;
  *(long **)(puVar4 + -0x50) = plVar10;
  *(long *)(puVar4 + -0x48) = auVar31._8_8_;
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x38) = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar21 = 0x3eb5000;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar9 = *(long *)(lVar8 + 0x28);
  if (lVar9 != 0) {
    plVar22 = (long *)(lVar8 + 0x10);
    uVar19 = *(uint *)(lVar9 + 0x18);
    if ((int)uVar19 < 1) {
code_r0x0159d9f0:
      if (((*(long *)(lVar8 + 0x20) == 0) ||
          (lVar20 = *(long *)(*(long *)(lVar8 + 0x20) + 0x20), lVar20 == 0)) ||
         (unaff_x23 = *(undefined8 **)(lVar20 + 0x10), unaff_x23 == (undefined8 *)0x0))
      goto code_r0x0159db7c;
      uVar11 = 0x3d1b4e8;
      unaff_x24 = 0x3d1b4e8;
      lVar21 = unaff_x23[3];
      lVar9 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
      uVar17 = uRam0000000003d2a1d8;
      /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar9,lVar8,uRam0000000003d57238,uRam0000000003d2a1d8);
      puVar15 = (undefined8 *)0x0;
      plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar21,lVar9);
      if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
        unaff_x23[3] = plVar10;
        if ((*(long *)(lVar8 + 0x20) == 0) ||
           ((lVar20 = *(long *)(*(long *)(lVar8 + 0x20) + 0x20), lVar20 == 0 ||
            (unaff_x23 = *(undefined8 **)(lVar20 + 0x10), unaff_x23 == (undefined8 *)0x0))))
        goto code_r0x0159db7c;
        uVar11 = 0x3d1b3b0;
        unaff_x24 = 0x3d1b3b0;
        lVar21 = unaff_x23[0xe];
        lVar9 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
        uVar17 = uRam0000000003d29f28;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar9,lVar8,uRam0000000003d57240,uRam0000000003d29f28);
        puVar15 = (undefined8 *)0x0;
        plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar21,lVar9);
        if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
          unaff_x23[0xe] = plVar10;
          if (((*(long *)(lVar8 + 0x20) == 0) ||
              (lVar20 = *(long *)(*(long *)(lVar8 + 0x20) + 0x20), lVar20 == 0)) ||
             (unaff_x23 = *(undefined8 **)(lVar20 + 0x10), unaff_x23 == (undefined8 *)0x0))
          goto code_r0x0159db7c;
          uVar11 = 0x3d1b4e0;
          lVar21 = unaff_x23[5];
          lVar9 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
          uVar17 = uRam0000000003d2a1c8;
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar9,lVar8,uRam0000000003d57230,uRam0000000003d2a1c8);
          puVar15 = (undefined8 *)0x0;
          plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar21,lVar9);
          if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
            unaff_x23[5] = plVar10;
            *(undefined1 *)(lVar8 + 0x50) = 0;
            *(undefined8 *)(lVar8 + 0x18) = 0;
            *plVar22 = 0;
            *(undefined8 *)(lVar8 + 0x28) = 0;
            *(undefined8 *)(lVar8 + 0x20) = 0;
            return;
          }
        }
      }
      goto code_r0x0159db8c;
    }
    unaff_x23 = (undefined8 *)0x0;
    unaff_x24 = 0x3d43378;
    while( true ) {
      uVar23 = (uint)unaff_x23;
      uVar11 = unaff_x24;
      if (uVar19 <= uVar23) goto code_r0x0159db80;
      if (*plVar22 == 0) break;
      lVar21 = *(long *)(lVar9 + (long)(int)uVar23 * 8 + 0x20);
      puVar15 = puRam0000000003d43378;
      /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar22,lVar21);
      if (lVar21 == 0) break;
      /*Atlas.Gameplay.Player.GameContextPlayer$$DeInit*/ func_0x015a5404(lVar21);
      unaff_x23 = (undefined8 *)(ulong)(uVar23 + 1);
      uVar19 = *(uint *)(lVar9 + 0x18);
      if ((int)uVar19 <= (int)(uVar23 + 1)) goto code_r0x0159d9f0;
    }
  }
code_r0x0159db7c:
  func_0x00f78af4();
  uVar11 = unaff_x24;
code_r0x0159db80:
  uVar13 = func_0x00f78b24();
  func_0x00f78ac0(uVar13,0);
code_r0x0159db8c:
  auVar31 = func_0x00f78e5c();
  puVar14 = auVar31._8_8_;
  plVar10 = auVar31._0_8_;
  *(undefined8 *)(puVar4 + -0xc0) = uVar11;
  *(undefined8 **)(puVar4 + -0xb8) = unaff_x23;
  *(long **)(puVar4 + -0xb0) = plVar22;
  *(long *)(puVar4 + -0xa8) = lVar9;
  *(long *)(puVar4 + -0xa0) = lVar21;
  *(long *)(puVar4 + -0x98) = lVar8;
  *(undefined1 **)(puVar4 + -0x90) = puVar4 + -0x40;
  *(code **)(puVar4 + -0x88) = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar16 = puVar15;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar10[3] != 0) &&
      (puVar16 = puVar15, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar10[3],puVar14,puVar15,uVar17,0),
      puVar15 != (undefined8 *)0x0)) && (lVar21 = puVar15[2], lVar21 != 0)) {
    uVar11 = *(undefined8 *)(lVar21 + 0x48);
    uVar26 = *(undefined8 *)(lVar21 + 0x60);
    uVar13 = *(undefined8 *)(lVar21 + 0x58);
    *(undefined8 *)(puVar4 + -0xd8) = *(undefined8 *)(lVar21 + 0x50);
    *(undefined8 *)(puVar4 + -0xe0) = uVar11;
    *(undefined8 *)(puVar4 + -200) = uVar26;
    *(undefined8 *)(puVar4 + -0xd0) = uVar13;
    iVar6 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar4 + -0xe0,0);
    if ((iVar6 == 0) || (puVar15 == puVar14)) {
      return;
    }
    iVar6 = (**(code **)(*plVar10 + 0x2a8))(plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
    if ((plVar10[0x18] != 0) && (lVar21 = *(long *)(plVar10[0x18] + 0x20), lVar21 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar4 + -0xf8,lVar21,0);
      *(int *)(puVar15 + 0xf) = *(int *)(puVar15 + 0xf) + iVar6;
      uVar11 = *(undefined8 *)(puVar4 + -0xf8);
      puVar15[0x11] = *(undefined8 *)(puVar4 + -0xf0);
      puVar15[0x10] = uVar11;
      puVar15[0x12] = *(undefined8 *)(puVar4 + -0xe8);
      if (puVar15[2] != 0) {
        if (*(int *)(puVar15[2] + 0x50) == 0) {
          uVar11 = (**(code **)(*plVar10 + 0x208))(plVar10,*(undefined8 *)(*plVar10 + 0x210));
          puVar16 = (undefined8 *)0x0;
          iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar11,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar6 != 0) {
            if (plVar10[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar10[3],*(undefined4 *)(puVar15 + 0xf),0);
          }
        }
        if (plVar10[0x46] != 0) {
          /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar10[0x46],puVar14,puVar15,uVar17,0);
          return;
        }
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar35 = func_0x00f78af4();
  lVar21 = auVar35._0_8_;
  iVar6 = *(int *)(lVar21 + 0x78);
  uVar13 = puVar16[1];
  uVar11 = *puVar16;
  *(undefined8 *)(puVar4 + -0x118) = uVar13;
  *(undefined8 *)(puVar4 + -0x120) = uVar11;
  uVar17 = puVar16[2];
  *(undefined8 *)(puVar4 + -0x110) = uVar17;
  *(int *)(lVar21 + 0x78) = iVar6 + auVar35._8_4_;
  *(undefined8 *)(lVar21 + 0x88) = uVar13;
  *(undefined8 *)(lVar21 + 0x80) = uVar11;
  *(undefined8 *)(lVar21 + 0x90) = uVar17;
  return;
LAB_01478328:
  do {
    uVar7 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0x210),uRam0000000003d33320);
    if ((uVar7 & 1) == 0) {
LAB_01478494:
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x210),uRam0000000003d33318);
      return;
    }
    lVar21 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___ctor(lVar21,0);
    if (lVar21 == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(long *)(lVar21 + 0x50) = lVar9;
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x1e8);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x1f0);
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0x1d8);
    uVar17 = *(undefined8 *)((long)register0x00000008 + -0x1e0);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x1f8);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x200);
    *(undefined8 *)(lVar21 + 0x40) = *(undefined8 *)((long)register0x00000008 + -0x1d0);
    *(undefined8 *)(lVar21 + 0x28) = uVar26;
    *(undefined8 *)(lVar21 + 0x20) = uVar13;
    *(undefined8 *)(lVar21 + 0x38) = uVar11;
    *(undefined8 *)(lVar21 + 0x30) = uVar17;
    *(undefined8 *)(lVar21 + 0x18) = uVar28;
    *(undefined8 *)(lVar21 + 0x10) = uVar27;
    *(undefined8 *)((long)register0x00000008 + -0x260) = *(undefined8 *)(lVar21 + 0x18);
    uVar17 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x260))
    ;
    uVar7 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -0x1c0),uVar17,0);
  } while ((uVar7 & 1) == 0);
  if (*(long *)(lVar9 + 0x60) == 0) {
    func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x14784e0);
    (*pcVar1)();
  }
  puVar15 = (undefined8 *)(lVar21 + 0x10);
  puVar16 = (undefined8 *)(lVar21 + 0x48);
  uVar7 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar9 + 0x60),*puVar15,puVar16,0);
  if ((uVar7 & 1) == 0) goto LAB_01478494;
  uVar17 = *(undefined8 *)(lVar9 + 0xa0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar17,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(lVar9 + 0xa0) == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(undefined8 *)((long)register0x00000008 + -0x218) =
         *(undefined8 *)(*(long *)(lVar9 + 0xa0) + 0x18);
    *(undefined8 *)((long)register0x00000008 + -0x260) = *puVar15;
    uVar17 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x260))
    ;
    uVar7 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -0x218),uVar17,0);
    if ((uVar7 & 1) != 0) {
      uVar17 = *(undefined8 *)(lVar9 + 0x38);
      uVar11 = *puVar15;
      uVar26 = *(undefined8 *)(lVar21 + 0x28);
      uVar13 = *(undefined8 *)(lVar21 + 0x20);
      *(undefined8 *)((long)register0x00000008 + -0x298) = *(undefined8 *)(lVar21 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0x2a0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0x288) = uVar26;
      *(undefined8 *)((long)register0x00000008 + -0x290) = uVar13;
      uVar11 = *(undefined8 *)(lVar21 + 0x30);
      *(undefined8 *)((long)register0x00000008 + -0x278) = *(undefined8 *)(lVar21 + 0x38);
      *(undefined8 *)((long)register0x00000008 + -0x280) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0x270) = *(undefined8 *)(lVar21 + 0x40);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                (lVar9,uVar17,(undefined1 *)((long)register0x00000008 + -0x2a0));
      goto LAB_01478328;
    }
  }
  uVar11 = *puVar16;
  uVar17 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar17,lVar21,uRam0000000003d62270,0);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AddBaseListener(lVar9,uVar11,uVar17,*puVar16);
  goto LAB_01478328;
LAB_01478624:
  do {
    uVar7 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0x330),uRam0000000003d33320);
    if ((uVar7 & 1) == 0) {
      uVar18 = 0x7b;
code_r0x0147869c:
      *(undefined4 *)((long)register0x00000008 + -0x348) = uVar18;
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x330),uRam0000000003d33318);
      if (*(int *)((long)register0x00000008 + -0x348) == 0x86) {
        return;
      }
code_r0x014786b8:
      lVar8 = *plVar22;
      if (((*(ushort *)(lVar8 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar8 + 0xe0) == 0)) {
        func_0x00f78ad0();
        lVar8 = *plVar22;
      }
      *(undefined8 *)(lVar21 + 0xa8) = **(undefined8 **)(lVar8 + 0xb8);
      return;
    }
    uVar17 = *(undefined8 *)((long)register0x00000008 + -800);
    *(undefined8 *)((long)register0x00000008 + -0x390) =
         *(undefined8 *)((long)register0x00000008 + -0x318);
    uVar11 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x390))
    ;
    uVar7 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar21 + 0xa8,uVar11,0);
  } while ((uVar7 & 1) == 0);
  if (*(long *)(lVar21 + 0x60) == 0) {
    func_0x00f78af4();
  }
  else {
    uVar7 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar21 + 0x60),uVar17,
                            (undefined1 *)((long)register0x00000008 + -0x338),0);
    if ((uVar7 & 1) == 0) {
      uVar18 = 0x86;
      goto code_r0x0147869c;
    }
    if (*(long *)((long)register0x00000008 + -0x338) != 0) {
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                (lVar21,*(undefined8 *)(*(long *)((long)register0x00000008 + -0x338) + 0x18));
      goto LAB_01478624;
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1478708);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1535c98 | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.OnPickup
// ============================================================

/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535c70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01535aa8) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x01535c74) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnPickup
               (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined8 *extraout_x8;
  long lVar20;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar21;
  long *plVar22;
  long unaff_x21;
  long lVar23;
  undefined8 unaff_x22;
  uint uVar24;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar25;
  code *unaff_x30;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [12];
  
  auVar32._8_8_ = param_2;
  auVar32._0_8_ = param_1;
code_r0x01535c98:
  lVar10 = auVar32._0_8_;
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x50);
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  if (auVar32._8_8_ != 0) {
    if (*(long *)(auVar32._8_8_ + 0x10) != *(long *)(lVar10 + 0x38)) {
      return;
    }
    lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar10);
    unaff_x19 = lVar10;
    if (lVar9 != 0) {
      uVar21 = *(undefined8 *)(lVar9 + 0x40);
      uVar14 = *(undefined8 *)(lVar9 + 0x58);
      uVar12 = *(undefined8 *)(lVar9 + 0x50);
      *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(lVar9 + 0x48);
      *(undefined8 *)((long)register0x00000008 + -0x50) = uVar21;
      *(undefined8 *)((long)register0x00000008 + -0x38) = uVar14;
      *(undefined8 *)((long)register0x00000008 + -0x40) = uVar12;
      uVar21 = *(undefined8 *)(lVar9 + 0x60);
      *(undefined8 *)((long)register0x00000008 + -0x28) = *(undefined8 *)(lVar9 + 0x68);
      *(undefined8 *)((long)register0x00000008 + -0x30) = uVar21;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                (lVar10,(undefined1 *)((long)register0x00000008 + -0x50),0);
      if (*(int *)(lVar10 + 0xe8) != 1) {
        return;
      }
      Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompletePickupCondition(lVar10);
      return;
    }
  }
  lVar10 = func_0x00f78af4();
  *(undefined8 *)((long)register0x00000008 + -0x80) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x78) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x70) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x68) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x58) =
       &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartUseUsableSection;
  uVar21 = 0x3eb4000;
  if ((bRam0000000003eb4ec1 & 1) == 0) {
    func_0x00f78a20(0x3d52800);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ec1 = 1;
  }
  *(undefined4 *)(lVar10 + 0xe8) = 2;
  lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar10);
  if (lVar9 != 0) {
    param_3 = (ulong)*(uint *)(lVar9 + 0x14c);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
              (lVar10,*(undefined8 *)(lVar9 + 0x130),param_3,*(char *)(lVar9 + 0x148) != '\0',0);
    if (*(long *)(lVar10 + 0x10) != 0) {
      unaff_x22 = 0x3d52000;
      lVar9 = *(long *)(*(long *)(lVar10 + 0x10) + 0x40);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
      auVar33._8_8_ = unaff_x21;
      auVar33._0_8_ = lVar9;
      param_3 = uRam0000000003d52800;
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar10,uRam0000000003d52800,0);
      uVar21 = 0;
      if (lVar9 != 0) {
        puVar25 = *(undefined1 **)((long)register0x00000008 + -0x60);
        puVar26 = *(undefined **)((long)register0x00000008 + -0x58);
        plVar22 = *(long **)((long)register0x00000008 + -0x70);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -0x68);
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x80);
        lVar10 = *(long *)((long)register0x00000008 + -0x78);
        goto code_r0x0159d188;
      }
    }
  }
  auVar32 = func_0x00f78af4();
  lVar9 = auVar32._0_8_;
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined **)((long)register0x00000008 + -0x88) =
       &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnUse;
  if (auVar32._8_8_ == 0) {
    lVar9 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x22;
    *(long *)((long)register0x00000008 + -0xb8) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar21;
    *(long *)((long)register0x00000008 + -0xa8) = lVar10;
    *(undefined1 **)((long)register0x00000008 + -0xa0) =
         (undefined1 *)((long)register0x00000008 + -0x90);
    *(undefined **)((long)register0x00000008 + -0x98) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartHitPlayerSection;
    uVar21 = 0x3eb4000;
    if ((bRam0000000003eb4ec3 & 1) == 0) {
      func_0x00f78a20(0x3d527f0);
      func_0x00f78a20(0x3d27728);
      bRam0000000003eb4ec3 = 1;
    }
    lVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar9);
    if (lVar10 == 0) {
code_r0x01535ee8:
      unaff_x19 = func_0x00f78af4();
      *(undefined1 **)((long)register0x00000008 + -0xd0) =
           (undefined1 *)((long)register0x00000008 + -0xa0);
      *(undefined **)((long)register0x00000008 + -200) =
           &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnHit;
      if (param_3 == 0) {
        func_0x00f78af4();
        return;
      }
      if (*(long *)(param_3 + 0x10) != *(long *)(unaff_x19 + 0x38)) {
        return;
      }
      puVar2 = (undefined1 *)((long)register0x00000008 + -0xc0);
      puVar25 = *(undefined1 **)((long)register0x00000008 + -0xd0);
      pcVar1 = *(code **)((long)register0x00000008 + -200);
      goto code_r0x01535b58;
    }
    param_3 = (ulong)*(uint *)(lVar10 + 0x1ac);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
              (lVar9,*(undefined8 *)(lVar10 + 400),param_3,*(char *)(lVar10 + 0x1a8) != '\0',0);
    *(undefined4 *)(lVar9 + 0xe8) = 3;
    if (*(long *)(lVar9 + 0x10) == 0) goto code_r0x01535ee8;
    unaff_x22 = 0x3d52000;
    lVar10 = *(long *)(*(long *)(lVar9 + 0x10) + 0x40);
    unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
    param_3 = uRam0000000003d527f0;
    /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar9,uRam0000000003d527f0,0);
    uVar21 = 0;
    if (lVar10 == 0) goto code_r0x01535ee8;
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
    if ((bRam0000000003eb51f9 & 1) == 0) {
      func_0x00f78a20(0x3d27728,unaff_x21,0);
      bRam0000000003eb51f9 = 1;
    }
    plVar22 = (long *)(lVar10 + 0x98);
    lVar10 = *plVar22;
    while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar10,unaff_x21,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
      lVar9 = func_0x00ff0f44(plVar22,plVar11,lVar10);
      bVar6 = lVar10 == lVar9;
      lVar10 = lVar9;
      if (bVar6) {
        return;
      }
    }
    auVar32 = func_0x00f78e5c(plVar11);
    uVar12 = auVar32._8_8_;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0xf0);
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0x3d27728;
    *(long *)((long)register0x00000008 + -0xe8) = lVar10;
    *(long **)((long)register0x00000008 + -0xe0) = plVar22;
    *(long *)((long)register0x00000008 + -0xd8) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0xd0) =
         (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined **)((long)register0x00000008 + -200) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
    puVar25 = (undefined1 *)((long)register0x00000008 + -0xd0);
    if ((bRam0000000003eb51fb & 1) == 0) {
      func_0x00f78a20(0x3d27730);
      bRam0000000003eb51fb = 1;
    }
    uVar21 = 0x3d27730;
    plVar22 = (long *)(auVar32._0_8_ + 0xa0);
    lVar10 = *plVar22;
    while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar10,uVar12,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
      lVar9 = func_0x00ff0f44(plVar22,plVar11,lVar10);
      bVar6 = lVar10 == lVar9;
      lVar10 = lVar9;
      if (bVar6) {
        return;
      }
    }
    puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
    auVar33 = func_0x00f78e5c(plVar11);
code_r0x0159d188:
    *(undefined8 *)(puVar3 + -0x30) = uVar21;
    *(long *)(puVar3 + -0x28) = lVar10;
    *(long **)(puVar3 + -0x20) = plVar22;
    *(undefined8 *)(puVar3 + -0x18) = uVar12;
    *(undefined1 **)(puVar3 + -0x10) = puVar25;
    *(undefined **)(puVar3 + -8) = puVar26;
    if ((bRam0000000003eb51f3 & 1) == 0) {
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb51f3 = 1;
    }
    plVar22 = (long *)(auVar33._0_8_ + 0x80);
    lVar10 = *plVar22;
    while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar10,auVar33._8_8_,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
      lVar9 = func_0x00ff0f44(plVar22,plVar11,lVar10);
      bVar6 = lVar10 == lVar9;
      lVar10 = lVar9;
      if (bVar6) {
        return;
      }
    }
    auVar32 = func_0x00f78e5c(plVar11);
    *(undefined8 *)(puVar3 + -0x60) = 0x3d27718;
    *(long *)(puVar3 + -0x58) = lVar10;
    *(long **)(puVar3 + -0x50) = plVar22;
    *(long *)(puVar3 + -0x48) = auVar33._8_8_;
    *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
    *(undefined **)(puVar3 + -0x38) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
    if ((bRam0000000003eb51fd & 1) == 0) {
      func_0x00f78a20(0x3d27738);
      bRam0000000003eb51fd = 1;
    }
    plVar22 = (long *)(auVar32._0_8_ + 0xa8);
    lVar10 = *plVar22;
    while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar10,auVar32._8_8_,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
      lVar9 = func_0x00ff0f44(plVar22,plVar11,lVar10);
      bVar6 = lVar10 == lVar9;
      lVar10 = lVar9;
      if (bVar6) {
        return;
      }
    }
    auVar33 = func_0x00f78e5c(plVar11);
    *(undefined8 *)(puVar3 + -0x90) = 0x3d27738;
    *(long *)(puVar3 + -0x88) = lVar10;
    *(long **)(puVar3 + -0x80) = plVar22;
    *(long *)(puVar3 + -0x78) = auVar32._8_8_;
    *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
    *(undefined **)(puVar3 + -0x68) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
    if ((bRam0000000003eb51f5 & 1) == 0) {
      func_0x00f78a20(0x3d27700);
      bRam0000000003eb51f5 = 1;
    }
    plVar22 = (long *)(auVar33._0_8_ + 0x88);
    lVar10 = *plVar22;
    while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar10,auVar33._8_8_,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
      lVar9 = func_0x00ff0f44(plVar22,plVar11,lVar10);
      bVar6 = lVar10 == lVar9;
      lVar10 = lVar9;
      if (bVar6) {
        return;
      }
    }
    auVar34 = func_0x00f78e5c(plVar11);
    puVar4 = puVar3 + -0xe0;
    *(undefined8 *)(puVar3 + -0xe0) = unaff_x26;
    *(undefined8 *)(puVar3 + -0xd8) = unaff_x25;
    *(undefined8 *)(puVar3 + -0xd0) = unaff_x24;
    *(undefined8 **)(puVar3 + -200) = unaff_x23;
    *(undefined8 *)(puVar3 + -0xc0) = 0x3d27700;
    *(long *)(puVar3 + -0xb8) = lVar10;
    *(long **)(puVar3 + -0xb0) = plVar22;
    *(long *)(puVar3 + -0xa8) = auVar33._8_8_;
    *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x70;
    *(code **)(puVar3 + -0x98) = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
    puVar25 = puVar3 + -0xa0;
    unaff_x23 = (undefined8 *)0x3d27718;
    unaff_x24 = 0x3d570f0;
    if ((bRam0000000003eb51b7 & 1) == 0) {
      func_0x00f78a20(0x3d524e0);
      func_0x00f78a20(0x3d524e8);
      func_0x00f78a20(0x3d524f0);
      func_0x00f78a20(0x3d524f8);
      func_0x00f78a20(0x3d570d0);
      func_0x00f78a20(0x3d570f0);
      func_0x00f78a20(0x3d27700);
      func_0x00f78a20(0x3d27718);
      func_0x00f78a20(0x3d27728);
      func_0x00f78a20(0x3d27730);
      func_0x00f78a20(0x3d27738);
      bRam0000000003eb51b7 = 1;
    }
    unaff_x21 = *(long *)(auVar34._0_8_ + 0x40);
    uVar12 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
    auVar35._8_8_ = uVar12;
    auVar35._0_8_ = unaff_x21;
    uVar21 = 0;
    /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(uVar12,auVar34._0_8_,uRam0000000003d570f0,0);
    if (unaff_x21 == 0) {
      puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
      auVar35 = func_0x00f78af4();
    }
    else {
      unaff_x24 = 0x3d27000;
      unaff_x25 = 0x3d52000;
      puVar26 = (undefined *)0x159d470;
      puVar4 = puVar3 + -0xe0;
    }
code_r0x0159d5c4:
    *(undefined8 *)(puVar4 + -0x30) = uVar12;
    *(long *)(puVar4 + -0x28) = unaff_x21;
    *(long *)(puVar4 + -0x20) = auVar34._8_8_;
    *(long *)(puVar4 + -0x18) = auVar34._0_8_;
    *(undefined1 **)(puVar4 + -0x10) = puVar25;
    *(undefined **)(puVar4 + -8) = puVar26;
    if ((bRam0000000003eb51f4 & 1) == 0) {
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb51f4 = 1;
    }
    plVar22 = (long *)(auVar35._0_8_ + 0x80);
    lVar10 = *plVar22;
    while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,auVar35._8_8_,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
      lVar9 = func_0x00ff0f44(plVar22,plVar11,lVar10);
      bVar6 = lVar10 == lVar9;
      lVar10 = lVar9;
      if (bVar6) {
        return;
      }
    }
    auVar32 = func_0x00f78e5c(plVar11);
    *(undefined8 *)(puVar4 + -0x60) = 0x3d27718;
    *(long *)(puVar4 + -0x58) = lVar10;
    *(long **)(puVar4 + -0x50) = plVar22;
    *(long *)(puVar4 + -0x48) = auVar35._8_8_;
    *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
    *(undefined **)(puVar4 + -0x38) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
    if ((bRam0000000003eb51f6 & 1) == 0) {
      func_0x00f78a20(0x3d27700);
      bRam0000000003eb51f6 = 1;
    }
    plVar22 = (long *)(auVar32._0_8_ + 0x88);
    lVar10 = *plVar22;
    while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,auVar32._8_8_,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
      lVar9 = func_0x00ff0f44(plVar22,plVar11,lVar10);
      bVar6 = lVar10 == lVar9;
      lVar10 = lVar9;
      if (bVar6) {
        return;
      }
    }
    auVar33 = func_0x00f78e5c(plVar11);
    *(undefined8 *)(puVar4 + -0x90) = 0x3d27700;
    *(long *)(puVar4 + -0x88) = lVar10;
    *(long **)(puVar4 + -0x80) = plVar22;
    *(long *)(puVar4 + -0x78) = auVar32._8_8_;
    *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
    *(undefined **)(puVar4 + -0x68) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
    if ((bRam0000000003eb51fe & 1) == 0) {
      func_0x00f78a20(0x3d27738);
      bRam0000000003eb51fe = 1;
    }
    plVar22 = (long *)(auVar33._0_8_ + 0xa8);
    lVar10 = *plVar22;
    while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,auVar33._8_8_,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
      lVar9 = func_0x00ff0f44(plVar22,plVar11,lVar10);
      bVar6 = lVar10 == lVar9;
      lVar10 = lVar9;
      if (bVar6) {
        return;
      }
    }
    auVar32 = func_0x00f78e5c(plVar11);
    unaff_x19 = auVar32._8_8_;
    puVar5 = puVar4 + -0xc0;
    *(undefined8 *)(puVar4 + -0xc0) = 0x3d27738;
    *(long *)(puVar4 + -0xb8) = lVar10;
    *(long **)(puVar4 + -0xb0) = plVar22;
    *(long *)(puVar4 + -0xa8) = auVar33._8_8_;
    *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x70;
    *(undefined **)(puVar4 + -0x98) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
    unaff_x29 = puVar4 + -0xa0;
    if ((bRam0000000003eb51fc & 1) == 0) {
      func_0x00f78a20(0x3d27730);
      bRam0000000003eb51fc = 1;
    }
    unaff_x22 = 0x3d27730;
    plVar22 = (long *)(auVar32._0_8_ + 0xa0);
    unaff_x21 = *plVar22;
    while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x21,unaff_x19,0), plVar11 == (long *)0x0 ||
           (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
      lVar10 = func_0x00ff0f44(plVar22,plVar11,unaff_x21);
      bVar6 = unaff_x21 == lVar10;
      unaff_x21 = lVar10;
      if (bVar6) {
        return;
      }
    }
    puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
    auVar36 = func_0x00f78e5c(plVar11);
    goto code_r0x0159d844;
  }
  if (*(long *)(auVar32._8_8_ + 0x10) != *(long *)(lVar9 + 0x38)) {
    return;
  }
  puVar4 = (undefined1 *)((long)register0x00000008 + -0xf0);
  puVar2 = (undefined1 *)((long)register0x00000008 + -0xf0);
  *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0xb8) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x22;
  *(long *)((long)register0x00000008 + -0xa8) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar21;
  *(long *)((long)register0x00000008 + -0x98) = lVar10;
  *(undefined8 *)((long)register0x00000008 + -0x90) =
       *(undefined8 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -0x88) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  puVar25 = (undefined1 *)((long)register0x00000008 + -0x90);
  lVar10 = 0x3eb4000;
  if ((bRam0000000003eb4ec2 & 1) == 0) {
    func_0x00f78a20(0x3d527e8);
    func_0x00f78a20(0x3d527f8);
    func_0x00f78a20(0x3d52800);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ec2 = 1;
  }
  if (*(long *)(lVar9 + 0x58) != 0) {
    *(undefined1 *)(*(long *)(lVar9 + 0x58) + 0x100) = 1;
    lVar23 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar9);
    if (lVar23 != 0) {
      uVar21 = *(undefined8 *)(lVar23 + 0x70);
      uVar14 = *(undefined8 *)(lVar23 + 0x88);
      uVar12 = *(undefined8 *)(lVar23 + 0x80);
      *(undefined8 *)((long)register0x00000008 + -0xe8) = *(undefined8 *)(lVar23 + 0x78);
      *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar21;
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar14;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar12;
      uVar21 = *(undefined8 *)(lVar23 + 0x90);
      *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)(lVar23 + 0x98);
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar21;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                (lVar9,(undefined1 *)((long)register0x00000008 + -0xf0),0);
      lVar10 = *(long *)(lVar9 + 0xd0);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar9,uRam0000000003d527e8,0);
      unaff_x22 = 0x3d52000;
      if (lVar10 != 0) {
        /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar10,unaff_x21,0);
        if (*(long *)(lVar9 + 0x10) != 0) {
          uVar12 = 0x3d27718;
          unaff_x23 = (undefined8 *)0x3d52000;
          lVar10 = *(long *)(*(long *)(lVar9 + 0x10) + 0x40);
          unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
          /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar9,uRam0000000003d527f8,0);
          unaff_x22 = 0x3d27718;
          if (lVar10 != 0) {
            /*Atlas.Gameplay.Player.GameContextPlayerManager$$remove_OnUsableAttached*/ func_0x015a5cc8(lVar10,unaff_x21,0);
            if (*(long *)(lVar9 + 0x10) != 0) {
              unaff_x23 = (undefined8 *)0x3d52000;
              lVar23 = *(long *)(*(long *)(lVar9 + 0x10) + 0x40);
              auVar34._8_8_ = lVar23;
              auVar34._0_8_ = lVar9;
              unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
              auVar35._8_8_ = unaff_x21;
              auVar35._0_8_ = lVar23;
              uVar21 = 0;
              /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar9,uRam0000000003d52800,0);
              lVar10 = 0;
              unaff_x22 = uVar12;
              if (lVar23 != 0) {
                puVar26 = (undefined *)0x1535aa8;
                goto code_r0x0159d5c4;
              }
            }
          }
        }
      }
    }
  }
  lVar23 = func_0x00f78af4();
  *(long *)((long)register0x00000008 + -0x110) = lVar10;
  *(long *)((long)register0x00000008 + -0x108) = lVar9;
  *(undefined1 **)((long)register0x00000008 + -0x100) = puVar25;
  *(code **)((long)register0x00000008 + -0xf8) =
       Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterHitPlayerEndTrigger;
  param_3 = 0;
  iVar7 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
  if (iVar7 == 0) {
    return;
  }
  uVar21 = *(undefined8 *)((long)register0x00000008 + -0x110);
  *(undefined8 *)((long)register0x00000008 + -0x110) = uVar21;
  *(undefined8 *)((long)register0x00000008 + -0x108) =
       *(undefined8 *)((long)register0x00000008 + -0x108);
  *(undefined8 *)((long)register0x00000008 + -0x100) =
       *(undefined8 *)((long)register0x00000008 + -0x100);
  *(undefined8 *)((long)register0x00000008 + -0xf8) =
       *(undefined8 *)((long)register0x00000008 + -0xf8);
  puVar25 = (undefined1 *)((long)register0x00000008 + -0x100);
  uVar8 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar23,0);
  if ((uVar8 & 1) == 0) {
    puVar25 = *(undefined1 **)((long)register0x00000008 + -0x100);
    pcVar1 = *(code **)((long)register0x00000008 + -0xf8);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x110);
    lVar9 = *(long *)((long)register0x00000008 + -0x108);
    unaff_x19 = lVar23;
  }
  else {
    if (*(long *)(lVar23 + 0xb8) != 0) {
      Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsedUsables(*(long *)(lVar23 + 0xb8),0);
      *(undefined8 *)((long)register0x00000008 + -0x120) = unaff_x22;
      *(long *)((long)register0x00000008 + -0x118) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x110) =
           *(undefined8 *)((long)register0x00000008 + -0x110);
      *(undefined8 *)((long)register0x00000008 + -0x108) =
           *(undefined8 *)((long)register0x00000008 + -0x108);
      *(undefined8 *)((long)register0x00000008 + -0x100) =
           *(undefined8 *)((long)register0x00000008 + -0x100);
      *(undefined8 *)((long)register0x00000008 + -0xf8) =
           *(undefined8 *)((long)register0x00000008 + -0xf8);
      *(int *)(lVar23 + 0x8c) = *(int *)(lVar23 + 0x8c) + 1;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                ((undefined1 *)((long)register0x00000008 + -0x180),lVar23,
                 *(undefined8 *)(lVar23 + 0xa8));
      *(undefined8 *)((long)register0x00000008 + -0x1c8) =
           *(undefined8 *)((long)register0x00000008 + -0x178);
      *(undefined8 *)((long)register0x00000008 + -0x1d0) =
           *(undefined8 *)((long)register0x00000008 + -0x180);
      *(undefined8 *)((long)register0x00000008 + -0x1b8) =
           *(undefined8 *)((long)register0x00000008 + -0x168);
      *(undefined8 *)((long)register0x00000008 + -0x1c0) =
           *(undefined8 *)((long)register0x00000008 + -0x170);
      uVar29 = *(undefined8 *)((long)register0x00000008 + -0x148);
      uVar28 = *(undefined8 *)((long)register0x00000008 + -0x150);
      uVar27 = *(undefined8 *)((long)register0x00000008 + -0x138);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -0x140);
      *(undefined8 *)((long)register0x00000008 + -0x198) = uVar29;
      *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar28;
      *(undefined8 *)((long)register0x00000008 + -0x188) = uVar27;
      *(undefined8 *)((long)register0x00000008 + -400) = uVar14;
      uVar31 = *(undefined8 *)((long)register0x00000008 + -0x158);
      uVar30 = *(undefined8 *)((long)register0x00000008 + -0x160);
      *(undefined8 *)((long)register0x00000008 + -0x1a8) = uVar31;
      *(undefined8 *)((long)register0x00000008 + -0x1b0) = uVar30;
      uVar21 = *(undefined8 *)((long)register0x00000008 + -0x130);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x128);
      *(undefined8 *)((long)register0x00000008 + -0x158) = uVar31;
      *(undefined8 *)((long)register0x00000008 + -0x160) = uVar30;
      *(undefined8 *)((long)register0x00000008 + -0x148) = uVar29;
      *(undefined8 *)((long)register0x00000008 + -0x150) = uVar28;
      *(undefined8 *)((long)register0x00000008 + -0x138) = uVar27;
      *(undefined8 *)((long)register0x00000008 + -0x140) = uVar14;
      *(undefined8 *)((long)register0x00000008 + -0x178) =
           *(undefined8 *)((long)register0x00000008 + -0x178);
      *(undefined8 *)((long)register0x00000008 + -0x180) =
           *(undefined8 *)((long)register0x00000008 + -0x180);
      *(undefined8 *)((long)register0x00000008 + -0x168) =
           *(undefined8 *)((long)register0x00000008 + -0x168);
      *(undefined8 *)((long)register0x00000008 + -0x170) =
           *(undefined8 *)((long)register0x00000008 + -0x170);
      *(undefined8 *)((long)register0x00000008 + -0x1e8) = uVar29;
      *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar28;
      *(undefined8 *)((long)register0x00000008 + -0x1d8) = uVar27;
      *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar14;
      *(undefined8 *)((long)register0x00000008 + -0x1f8) = uVar31;
      *(undefined8 *)((long)register0x00000008 + -0x200) = uVar30;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                (lVar23,(undefined1 *)((long)register0x00000008 + -0x200));
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnHumanPlayerAtLocator(lVar23,uVar21);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnAIsAtLocators(lVar23,uVar12);
      uVar21 = *(undefined8 *)(lVar23 + 0xa8);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection(lVar23);
      plVar22 = *(long **)((long)register0x00000008 + -0x120);
      *(undefined8 *)((long)register0x00000008 + -0x150) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x148) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x140) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x138) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0x130) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0x128) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x120) = plVar22;
      *(undefined8 *)((long)register0x00000008 + -0x118) =
           *(undefined8 *)((long)register0x00000008 + -0x118);
      *(undefined8 *)((long)register0x00000008 + -0x110) =
           *(undefined8 *)((long)register0x00000008 + -0x110);
      *(undefined8 *)((long)register0x00000008 + -0x108) =
           *(undefined8 *)((long)register0x00000008 + -0x108);
      *(undefined8 *)((long)register0x00000008 + -0x100) =
           *(undefined8 *)((long)register0x00000008 + -0x100);
      *(undefined8 *)((long)register0x00000008 + -0xf8) =
           *(undefined8 *)((long)register0x00000008 + -0xf8);
      *(undefined8 *)((long)register0x00000008 + -0x160) = uVar21;
      if ((bRam0000000003eb48a2 & 1) == 0) {
        func_0x00f78a20(0x3d33318);
        func_0x00f78a20(0x3d33320);
        func_0x00f78a20(0x3d33328);
        func_0x00f78a20(0x3d278d8);
        func_0x00f78a20(0x3d3cd70);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d24e08);
        func_0x00f78a20(0x3d62270);
        func_0x00f78a20(0x3d26ac8);
        bRam0000000003eb48a2 = 1;
      }
      *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x188) = 0;
      *(undefined8 *)((long)register0x00000008 + -400) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
      *(undefined8 *)(lVar23 + 0xa8) = uVar21;
      if ((*(long *)(lVar23 + 0x40) != 0) &&
         (lVar10 = *(long *)(*(long *)(lVar23 + 0x40) + 0x30), lVar10 != 0)) {
        /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x200),lVar10,
                        uRam0000000003d3cd70);
        *(undefined8 *)((long)register0x00000008 + -0x188) =
             *(undefined8 *)((long)register0x00000008 + -0x1d8);
        *(undefined8 *)((long)register0x00000008 + -400) =
             *(undefined8 *)((long)register0x00000008 + -0x1e0);
        *(undefined8 *)((long)register0x00000008 + -0x178) =
             *(undefined8 *)((long)register0x00000008 + -0x1c8);
        *(undefined8 *)((long)register0x00000008 + -0x180) =
             *(undefined8 *)((long)register0x00000008 + -0x1d0);
        *(undefined8 *)((long)register0x00000008 + -0x170) =
             *(undefined8 *)((long)register0x00000008 + -0x1c0);
        *(undefined8 *)((long)register0x00000008 + -0x1a8) =
             *(undefined8 *)((long)register0x00000008 + -0x1f8);
        *(undefined8 *)((long)register0x00000008 + -0x1b0) =
             *(undefined8 *)((long)register0x00000008 + -0x200);
        *(undefined8 *)((long)register0x00000008 + -0x198) =
             *(undefined8 *)((long)register0x00000008 + -0x1e8);
        *(undefined8 *)((long)register0x00000008 + -0x1a0) =
             *(undefined8 *)((long)register0x00000008 + -0x1f0);
        goto LAB_01478328;
      }
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar11 = (long *)___cxa_begin_catch();
        lVar23 = *plVar11;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x1b0),uRam0000000003d33318);
        if (lVar23 == 0) {
          return;
        }
        func_0x00f78ac0(lVar23,0);
      }
      lVar10 = __Unwind_Resume();
      *(undefined8 *)((long)register0x00000008 + -0x280) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0x278) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x270) = plVar22;
      *(undefined8 *)((long)register0x00000008 + -0x268) = 0x3eb4000;
      *(undefined8 *)((long)register0x00000008 + -0x260) = uVar21;
      *(long *)((long)register0x00000008 + -600) = lVar23;
      *(undefined1 **)((long)register0x00000008 + -0x250) =
           (undefined1 *)((long)register0x00000008 + -0x100);
      *(code **)((long)register0x00000008 + -0x248) =
           Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
      lVar9 = 0x3eb4000;
      if ((bRam0000000003eb48a3 & 1) == 0) {
        func_0x00f78a20(0x3d33318);
        func_0x00f78a20(0x3d33320);
        func_0x00f78a20(0x3d33328);
        func_0x00f78a20(0x3d3cd70);
        func_0x00f78a20(0x3d24e08);
        bRam0000000003eb48a3 = 1;
      }
      *(undefined8 *)((long)register0x00000008 + -0x2d8) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x2e0) = 0;
      if ((*(long *)(lVar10 + 0x40) != 0) &&
         (lVar23 = *(long *)(*(long *)(lVar10 + 0x40) + 0x30), lVar23 != 0)) {
        plVar22 = (long *)0x3d24e08;
        /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x330),lVar23,
                        uRam0000000003d3cd70);
        *(undefined8 *)((long)register0x00000008 + -0x2a8) =
             *(undefined8 *)((long)register0x00000008 + -0x308);
        *(undefined8 *)((long)register0x00000008 + -0x2b0) =
             *(undefined8 *)((long)register0x00000008 + -0x310);
        *(undefined8 *)((long)register0x00000008 + -0x298) =
             *(undefined8 *)((long)register0x00000008 + -0x2f8);
        *(undefined8 *)((long)register0x00000008 + -0x2a0) =
             *(undefined8 *)((long)register0x00000008 + -0x300);
        *(undefined8 *)((long)register0x00000008 + -0x290) =
             *(undefined8 *)((long)register0x00000008 + -0x2f0);
        *(undefined8 *)((long)register0x00000008 + -0x2c8) =
             *(undefined8 *)((long)register0x00000008 + -0x328);
        *(undefined8 *)((long)register0x00000008 + -0x2d0) =
             *(undefined8 *)((long)register0x00000008 + -0x330);
        *(undefined8 *)((long)register0x00000008 + -0x2b8) =
             *(undefined8 *)((long)register0x00000008 + -0x318);
        *(undefined8 *)((long)register0x00000008 + -0x2c0) =
             *(undefined8 *)((long)register0x00000008 + -800);
        goto LAB_01478624;
      }
      func_0x00f78af4();
      if (extraout_w1_00 == 1) {
        plVar11 = (long *)___cxa_begin_catch();
        lVar9 = *plVar11;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x2d0),*unaff_x23);
        if (lVar9 == 0) goto code_r0x014786b8;
        func_0x00f78ac0(lVar9,0);
      }
      lVar23 = __Unwind_Resume();
      *(long *)((long)register0x00000008 + -0x350) = lVar9;
      *(long *)((long)register0x00000008 + -0x348) = lVar10;
      *(undefined1 **)((long)register0x00000008 + -0x340) =
           (undefined1 *)((long)register0x00000008 + -0x250);
      *(code **)((long)register0x00000008 + -0x338) =
           Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                ((undefined1 *)((long)register0x00000008 + -0x3b0),lVar23,
                 *(undefined8 *)(lVar23 + 0xa8));
      uVar21 = *(undefined8 *)((long)register0x00000008 + -0x390);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -0x378);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x380);
      extraout_x8[5] = *(undefined8 *)((long)register0x00000008 + -0x388);
      extraout_x8[4] = uVar21;
      extraout_x8[7] = uVar14;
      extraout_x8[6] = uVar12;
      uVar21 = *(undefined8 *)((long)register0x00000008 + -0x370);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -0x358);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x360);
      extraout_x8[9] = *(undefined8 *)((long)register0x00000008 + -0x368);
      extraout_x8[8] = uVar21;
      extraout_x8[0xb] = uVar14;
      extraout_x8[10] = uVar12;
      uVar21 = *(undefined8 *)((long)register0x00000008 + -0x3b0);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -0x398);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x3a0);
      extraout_x8[1] = *(undefined8 *)((long)register0x00000008 + -0x3a8);
      *extraout_x8 = uVar21;
      extraout_x8[3] = uVar14;
      extraout_x8[2] = uVar12;
      return;
    }
    pcVar1 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteHitPlayerCondition;
    unaff_x19 = func_0x00f78af4();
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x110);
    lVar9 = lVar23;
  }
code_r0x01535b58:
  puVar5 = puVar2 + -0x60;
  register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x60);
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(long *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = uVar21;
  *(long *)(puVar2 + -0x18) = lVar9;
  *(undefined1 **)(puVar2 + -0x10) = puVar25;
  *(code **)(puVar2 + -8) = pcVar1;
  unaff_x29 = puVar2 + -0x10;
  unaff_x20 = 0x3eb4000;
  if ((bRam0000000003eb4ec4 & 1) == 0) {
    func_0x00f78a20(0x3d527d0);
    func_0x00f78a20(0x3d527f0);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb4ec4 = 1;
  }
  lVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(unaff_x19);
  if (lVar10 == 0) {
LAB_01535c94:
    unaff_x30 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnPickup;
    auVar32 = func_0x00f78af4();
    goto code_r0x01535c98;
  }
  unaff_x22 = 0x3d52000;
  uVar21 = *(undefined8 *)(lVar10 + 0xa0);
  uVar14 = *(undefined8 *)(lVar10 + 0xb8);
  uVar12 = *(undefined8 *)(lVar10 + 0xb0);
  *(undefined8 *)(puVar2 + -0x58) = *(undefined8 *)(lVar10 + 0xa8);
  *(undefined8 *)(puVar2 + -0x60) = uVar21;
  *(undefined8 *)(puVar2 + -0x48) = uVar14;
  *(undefined8 *)(puVar2 + -0x50) = uVar12;
  uVar21 = *(undefined8 *)(lVar10 + 0xc0);
  *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(lVar10 + 200);
  *(undefined8 *)(puVar2 + -0x40) = uVar21;
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(unaff_x19,puVar2 + -0x60,0);
  *(undefined4 *)(unaff_x19 + 0xe8) = 0;
  unaff_x20 = *(long *)(unaff_x19 + 0xd8);
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  param_3 = uRam0000000003d527d0;
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,unaff_x19,uRam0000000003d527d0,0);
  if (unaff_x20 == 0) goto LAB_01535c94;
  param_3 = 0;
  /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(unaff_x20,unaff_x21);
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_01535c94;
  unaff_x22 = 0x3d52000;
  plVar22 = *(long **)(*(long *)(unaff_x19 + 0x10) + 0x40);
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
  auVar36._8_8_ = unaff_x21;
  auVar36._0_8_ = plVar22;
  uVar21 = 0;
  param_3 = uRam0000000003d527f0;
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,unaff_x19,uRam0000000003d527f0,0);
  unaff_x20 = 0;
  if (plVar22 == (long *)0x0) goto LAB_01535c94;
  puVar26 = (undefined *)0x1535c74;
code_r0x0159d844:
  *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
  *(long *)(puVar5 + -0x28) = unaff_x21;
  *(long **)(puVar5 + -0x20) = plVar22;
  *(long *)(puVar5 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
  *(undefined **)(puVar5 + -8) = puVar26;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar22 = (long *)0x3d27728;
  plVar11 = (long *)(auVar36._0_8_ + 0x98);
  lVar10 = *plVar11;
  while( true ) {
    puVar16 = (undefined8 *)0x0;
    plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,auVar36._8_8_);
    if ((plVar13 != (long *)0x0) && (*plVar13 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar9 = func_0x00ff0f44(plVar11,plVar13,lVar10);
    bVar6 = lVar10 == lVar9;
    lVar10 = lVar9;
    if (bVar6) {
      return;
    }
  }
  lVar9 = func_0x00f78e5c(plVar13);
  *(undefined8 *)(puVar5 + -0x80) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x78) = unaff_x25;
  *(undefined8 *)(puVar5 + -0x70) = unaff_x24;
  *(undefined8 **)(puVar5 + -0x68) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x60) = 0x3d27728;
  *(long *)(puVar5 + -0x58) = lVar10;
  *(long **)(puVar5 + -0x50) = plVar11;
  *(long *)(puVar5 + -0x48) = auVar36._8_8_;
  *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x38) = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar10 = 0x3eb5000;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar23 = *(long *)(lVar9 + 0x28);
  if (lVar23 == 0) {
code_r0x0159db7c:
    func_0x00f78af4();
    uVar12 = unaff_x24;
code_r0x0159db80:
    uVar14 = func_0x00f78b24();
    func_0x00f78ac0(uVar14,0);
  }
  else {
    plVar22 = (long *)(lVar9 + 0x10);
    uVar19 = *(uint *)(lVar23 + 0x18);
    if (0 < (int)uVar19) {
      unaff_x23 = (undefined8 *)0x0;
      unaff_x24 = 0x3d43378;
      do {
        uVar24 = (uint)unaff_x23;
        uVar12 = unaff_x24;
        if (uVar19 <= uVar24) goto code_r0x0159db80;
        if (*plVar22 == 0) goto code_r0x0159db7c;
        lVar10 = *(long *)(lVar23 + (long)(int)uVar24 * 8 + 0x20);
        puVar16 = puRam0000000003d43378;
        /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar22,lVar10);
        if (lVar10 == 0) goto code_r0x0159db7c;
        /*Atlas.Gameplay.Player.GameContextPlayer$$DeInit*/ func_0x015a5404(lVar10);
        unaff_x23 = (undefined8 *)(ulong)(uVar24 + 1);
        uVar19 = *(uint *)(lVar23 + 0x18);
      } while ((int)(uVar24 + 1) < (int)uVar19);
    }
    if (((*(long *)(lVar9 + 0x20) == 0) ||
        (lVar20 = *(long *)(*(long *)(lVar9 + 0x20) + 0x20), lVar20 == 0)) ||
       (unaff_x23 = *(undefined8 **)(lVar20 + 0x10), unaff_x23 == (undefined8 *)0x0))
    goto code_r0x0159db7c;
    uVar12 = 0x3d1b4e8;
    unaff_x24 = 0x3d1b4e8;
    lVar10 = unaff_x23[3];
    lVar23 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    uVar21 = uRam0000000003d2a1d8;
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar23,lVar9,uRam0000000003d57238,uRam0000000003d2a1d8);
    puVar16 = (undefined8 *)0x0;
    plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,lVar23);
    if ((plVar11 == (long *)0x0) || (*plVar11 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      unaff_x23[3] = plVar11;
      if ((*(long *)(lVar9 + 0x20) == 0) ||
         ((lVar20 = *(long *)(*(long *)(lVar9 + 0x20) + 0x20), lVar20 == 0 ||
          (unaff_x23 = *(undefined8 **)(lVar20 + 0x10), unaff_x23 == (undefined8 *)0x0))))
      goto code_r0x0159db7c;
      uVar12 = 0x3d1b3b0;
      unaff_x24 = 0x3d1b3b0;
      lVar10 = unaff_x23[0xe];
      lVar23 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
      uVar21 = uRam0000000003d29f28;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar23,lVar9,uRam0000000003d57240,uRam0000000003d29f28);
      puVar16 = (undefined8 *)0x0;
      plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,lVar23);
      if ((plVar11 == (long *)0x0) || (*plVar11 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
        unaff_x23[0xe] = plVar11;
        if (((*(long *)(lVar9 + 0x20) == 0) ||
            (lVar20 = *(long *)(*(long *)(lVar9 + 0x20) + 0x20), lVar20 == 0)) ||
           (unaff_x23 = *(undefined8 **)(lVar20 + 0x10), unaff_x23 == (undefined8 *)0x0))
        goto code_r0x0159db7c;
        uVar12 = 0x3d1b4e0;
        lVar10 = unaff_x23[5];
        lVar23 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
        uVar21 = uRam0000000003d2a1c8;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar23,lVar9,uRam0000000003d57230,uRam0000000003d2a1c8);
        puVar16 = (undefined8 *)0x0;
        plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar10,lVar23);
        if ((plVar11 == (long *)0x0) || (*plVar11 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
          unaff_x23[5] = plVar11;
          *(undefined1 *)(lVar9 + 0x50) = 0;
          *(undefined8 *)(lVar9 + 0x18) = 0;
          *plVar22 = 0;
          *(undefined8 *)(lVar9 + 0x28) = 0;
          *(undefined8 *)(lVar9 + 0x20) = 0;
          return;
        }
      }
    }
  }
  auVar32 = func_0x00f78e5c();
  puVar15 = auVar32._8_8_;
  plVar11 = auVar32._0_8_;
  *(undefined8 *)(puVar5 + -0xc0) = uVar12;
  *(undefined8 **)(puVar5 + -0xb8) = unaff_x23;
  *(long **)(puVar5 + -0xb0) = plVar22;
  *(long *)(puVar5 + -0xa8) = lVar23;
  *(long *)(puVar5 + -0xa0) = lVar10;
  *(long *)(puVar5 + -0x98) = lVar9;
  *(undefined1 **)(puVar5 + -0x90) = puVar5 + -0x40;
  *(code **)(puVar5 + -0x88) = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar17 = puVar16;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar11[3] != 0) &&
      (puVar17 = puVar16, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar11[3],puVar15,puVar16,uVar21,0),
      puVar16 != (undefined8 *)0x0)) && (lVar10 = puVar16[2], lVar10 != 0)) {
    uVar12 = *(undefined8 *)(lVar10 + 0x48);
    uVar27 = *(undefined8 *)(lVar10 + 0x60);
    uVar14 = *(undefined8 *)(lVar10 + 0x58);
    *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(lVar10 + 0x50);
    *(undefined8 *)(puVar5 + -0xe0) = uVar12;
    *(undefined8 *)(puVar5 + -200) = uVar27;
    *(undefined8 *)(puVar5 + -0xd0) = uVar14;
    iVar7 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar5 + -0xe0,0);
    if ((iVar7 == 0) || (puVar16 == puVar15)) {
      return;
    }
    iVar7 = (**(code **)(*plVar11 + 0x2a8))(plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
    if ((plVar11[0x18] != 0) && (lVar10 = *(long *)(plVar11[0x18] + 0x20), lVar10 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar5 + -0xf8,lVar10,0);
      *(int *)(puVar16 + 0xf) = *(int *)(puVar16 + 0xf) + iVar7;
      uVar12 = *(undefined8 *)(puVar5 + -0xf8);
      puVar16[0x11] = *(undefined8 *)(puVar5 + -0xf0);
      puVar16[0x10] = uVar12;
      puVar16[0x12] = *(undefined8 *)(puVar5 + -0xe8);
      if (puVar16[2] != 0) {
        if (*(int *)(puVar16[2] + 0x50) == 0) {
          uVar12 = (**(code **)(*plVar11 + 0x208))(plVar11,*(undefined8 *)(*plVar11 + 0x210));
          puVar17 = (undefined8 *)0x0;
          iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar12,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar7 != 0) {
            if (plVar11[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar11[3],*(undefined4 *)(puVar16 + 0xf),0);
          }
        }
        if (plVar11[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar11[0x46],puVar15,puVar16,uVar21,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar37 = func_0x00f78af4();
  lVar10 = auVar37._0_8_;
  iVar7 = *(int *)(lVar10 + 0x78);
  uVar14 = puVar17[1];
  uVar12 = *puVar17;
  *(undefined8 *)(puVar5 + -0x118) = uVar14;
  *(undefined8 *)(puVar5 + -0x120) = uVar12;
  uVar21 = puVar17[2];
  *(undefined8 *)(puVar5 + -0x110) = uVar21;
  *(int *)(lVar10 + 0x78) = iVar7 + auVar37._8_4_;
  *(undefined8 *)(lVar10 + 0x88) = uVar14;
  *(undefined8 *)(lVar10 + 0x80) = uVar12;
  *(undefined8 *)(lVar10 + 0x90) = uVar21;
  return;
LAB_01478328:
  do {
    uVar8 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0x1b0),uRam0000000003d33320);
    if ((uVar8 & 1) == 0) {
LAB_01478494:
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x1b0),uRam0000000003d33318);
      return;
    }
    lVar10 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___ctor(lVar10,0);
    if (lVar10 == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(long *)(lVar10 + 0x50) = lVar23;
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x188);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -400);
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x178);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x180);
    uVar29 = *(undefined8 *)((long)register0x00000008 + -0x198);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x1a0);
    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)((long)register0x00000008 + -0x170);
    *(undefined8 *)(lVar10 + 0x28) = uVar27;
    *(undefined8 *)(lVar10 + 0x20) = uVar14;
    *(undefined8 *)(lVar10 + 0x38) = uVar12;
    *(undefined8 *)(lVar10 + 0x30) = uVar21;
    *(undefined8 *)(lVar10 + 0x18) = uVar29;
    *(undefined8 *)(lVar10 + 0x10) = uVar28;
    *(undefined8 *)((long)register0x00000008 + -0x200) = *(undefined8 *)(lVar10 + 0x18);
    uVar21 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x200))
    ;
    uVar8 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -0x160),uVar21,0);
  } while ((uVar8 & 1) == 0);
  if (*(long *)(lVar23 + 0x60) == 0) {
    func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x14784e0);
    (*pcVar1)();
  }
  puVar16 = (undefined8 *)(lVar10 + 0x10);
  puVar17 = (undefined8 *)(lVar10 + 0x48);
  uVar8 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar23 + 0x60),*puVar16,puVar17,0);
  if ((uVar8 & 1) == 0) goto LAB_01478494;
  uVar21 = *(undefined8 *)(lVar23 + 0xa0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar21,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(lVar23 + 0xa0) == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(undefined8 *)((long)register0x00000008 + -0x1b8) =
         *(undefined8 *)(*(long *)(lVar23 + 0xa0) + 0x18);
    *(undefined8 *)((long)register0x00000008 + -0x200) = *puVar16;
    uVar21 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x200))
    ;
    uVar8 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -0x1b8),uVar21,0);
    if ((uVar8 & 1) != 0) {
      uVar21 = *(undefined8 *)(lVar23 + 0x38);
      uVar12 = *puVar16;
      uVar27 = *(undefined8 *)(lVar10 + 0x28);
      uVar14 = *(undefined8 *)(lVar10 + 0x20);
      *(undefined8 *)((long)register0x00000008 + -0x238) = *(undefined8 *)(lVar10 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0x240) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0x228) = uVar27;
      *(undefined8 *)((long)register0x00000008 + -0x230) = uVar14;
      uVar12 = *(undefined8 *)(lVar10 + 0x30);
      *(undefined8 *)((long)register0x00000008 + -0x218) = *(undefined8 *)(lVar10 + 0x38);
      *(undefined8 *)((long)register0x00000008 + -0x220) = uVar12;
      *(undefined8 *)((long)register0x00000008 + -0x210) = *(undefined8 *)(lVar10 + 0x40);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                (lVar23,uVar21,(undefined1 *)((long)register0x00000008 + -0x240));
      goto LAB_01478328;
    }
  }
  uVar12 = *puVar17;
  uVar21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar21,lVar10,uRam0000000003d62270,0);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AddBaseListener(lVar23,uVar12,uVar21,*puVar17);
  goto LAB_01478328;
LAB_01478624:
  do {
    uVar8 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0x2d0),uRam0000000003d33320);
    if ((uVar8 & 1) == 0) {
      uVar18 = 0x7b;
code_r0x0147869c:
      *(undefined4 *)((long)register0x00000008 + -0x2e8) = uVar18;
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x2d0),uRam0000000003d33318);
      if (*(int *)((long)register0x00000008 + -0x2e8) != 0x86) {
code_r0x014786b8:
        lVar9 = *plVar22;
        if (((*(ushort *)(lVar9 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar9 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar9 = *plVar22;
        }
        *(undefined8 *)(lVar10 + 0xa8) = **(undefined8 **)(lVar9 + 0xb8);
      }
      return;
    }
    uVar21 = *(undefined8 *)((long)register0x00000008 + -0x2c0);
    *(undefined8 *)((long)register0x00000008 + -0x330) =
         *(undefined8 *)((long)register0x00000008 + -0x2b8);
    uVar12 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x330))
    ;
    uVar8 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar10 + 0xa8,uVar12,0);
  } while ((uVar8 & 1) == 0);
  if (*(long *)(lVar10 + 0x60) == 0) {
    func_0x00f78af4();
  }
  else {
    uVar8 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar10 + 0x60),uVar21,
                            (undefined1 *)((long)register0x00000008 + -0x2d8),0);
    if ((uVar8 & 1) == 0) {
      uVar18 = 0x86;
      goto code_r0x0147869c;
    }
    if (*(long *)((long)register0x00000008 + -0x2d8) != 0) {
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                (lVar10,*(undefined8 *)(*(long *)((long)register0x00000008 + -0x2d8) + 0x18));
      goto LAB_01478624;
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1478708);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1535d14 | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.StartUseUsableSection
// ============================================================

/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535c70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01535aa8) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x01535c74) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartUseUsableSection
               (long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 uVar13;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined8 *extraout_x8;
  long lVar19;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar20;
  long *plVar21;
  long unaff_x21;
  long lVar22;
  undefined8 unaff_x22;
  uint uVar23;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar24;
  code *unaff_x30;
  undefined *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  
code_r0x01535d14:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  uVar20 = 0x3eb4000;
  if ((bRam0000000003eb4ec1 & 1) == 0) {
    func_0x00f78a20(0x3d52800);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ec1 = 1;
  }
  *(undefined4 *)(param_1 + 0xe8) = 2;
  lVar8 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(param_1);
  if (lVar8 != 0) {
    param_3 = (ulong)*(uint *)(lVar8 + 0x14c);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
              (param_1,*(undefined8 *)(lVar8 + 0x130),param_3,*(char *)(lVar8 + 0x148) != '\0',0);
    if (*(long *)(param_1 + 0x10) != 0) {
      unaff_x22 = 0x3d52000;
      lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
      auVar32._8_8_ = unaff_x21;
      auVar32._0_8_ = lVar8;
      param_3 = uRam0000000003d52800;
      /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,param_1,uRam0000000003d52800,0);
      uVar20 = 0;
      if (lVar8 != 0) {
        puVar24 = *(undefined1 **)((long)register0x00000008 + -0x10);
        puVar25 = *(undefined **)((long)register0x00000008 + -8);
        plVar21 = *(long **)((long)register0x00000008 + -0x20);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x18);
        uVar20 = *(undefined8 *)((long)register0x00000008 + -0x30);
        lVar8 = *(long *)((long)register0x00000008 + -0x28);
        puVar2 = (undefined1 *)register0x00000008;
        goto code_r0x0159d188;
      }
    }
  }
  auVar32 = func_0x00f78af4();
  lVar8 = auVar32._0_8_;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnUse;
  if (auVar32._8_8_ == 0) {
    lVar8 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x68) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar20;
    *(long *)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x48) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartHitPlayerSection;
    uVar20 = 0x3eb4000;
    if ((bRam0000000003eb4ec3 & 1) == 0) {
      func_0x00f78a20(0x3d527f0);
      func_0x00f78a20(0x3d27728);
      bRam0000000003eb4ec3 = 1;
    }
    lVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar8);
    if (lVar10 != 0) {
      param_3 = (ulong)*(uint *)(lVar10 + 0x1ac);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                (lVar8,*(undefined8 *)(lVar10 + 400),param_3,*(char *)(lVar10 + 0x1a8) != '\0',0);
      *(undefined4 *)(lVar8 + 0xe8) = 3;
      if (*(long *)(lVar8 + 0x10) != 0) {
        unaff_x22 = 0x3d52000;
        lVar10 = *(long *)(*(long *)(lVar8 + 0x10) + 0x40);
        unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
        param_3 = uRam0000000003d527f0;
        /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar8,uRam0000000003d527f0,0);
        uVar20 = 0;
        if (lVar10 != 0) {
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
          if ((bRam0000000003eb51f9 & 1) == 0) {
            func_0x00f78a20(0x3d27728,unaff_x21,0);
            bRam0000000003eb51f9 = 1;
          }
          plVar21 = (long *)(lVar10 + 0x98);
          lVar8 = *plVar21;
          while ((plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar8,unaff_x21,0), plVar9 == (long *)0x0 ||
                 (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
            lVar10 = func_0x00ff0f44(plVar21,plVar9,lVar8);
            bVar5 = lVar8 == lVar10;
            lVar8 = lVar10;
            if (bVar5) {
              return;
            }
          }
          auVar32 = func_0x00f78e5c(plVar9);
          uVar11 = auVar32._8_8_;
          puVar2 = (undefined1 *)((long)register0x00000008 + -0xa0);
          *(undefined8 *)((long)register0x00000008 + -0xa0) = 0x3d27728;
          *(long *)((long)register0x00000008 + -0x98) = lVar8;
          *(long **)((long)register0x00000008 + -0x90) = plVar21;
          *(long *)((long)register0x00000008 + -0x88) = unaff_x21;
          *(undefined1 **)((long)register0x00000008 + -0x80) =
               (undefined1 *)((long)register0x00000008 + -0x50);
          *(undefined **)((long)register0x00000008 + -0x78) =
               &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
          puVar24 = (undefined1 *)((long)register0x00000008 + -0x80);
          if ((bRam0000000003eb51fb & 1) == 0) {
            func_0x00f78a20(0x3d27730);
            bRam0000000003eb51fb = 1;
          }
          uVar20 = 0x3d27730;
          plVar21 = (long *)(auVar32._0_8_ + 0xa0);
          lVar8 = *plVar21;
          while ((plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar8,uVar11,0), plVar9 == (long *)0x0 ||
                 (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
            lVar10 = func_0x00ff0f44(plVar21,plVar9,lVar8);
            bVar5 = lVar8 == lVar10;
            lVar8 = lVar10;
            if (bVar5) {
              return;
            }
          }
          puVar25 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
          auVar32 = func_0x00f78e5c(plVar9);
code_r0x0159d188:
          *(undefined8 *)(puVar2 + -0x30) = uVar20;
          *(long *)(puVar2 + -0x28) = lVar8;
          *(long **)(puVar2 + -0x20) = plVar21;
          *(undefined8 *)(puVar2 + -0x18) = uVar11;
          *(undefined1 **)(puVar2 + -0x10) = puVar24;
          *(undefined **)(puVar2 + -8) = puVar25;
          if ((bRam0000000003eb51f3 & 1) == 0) {
            func_0x00f78a20(0x3d27718);
            bRam0000000003eb51f3 = 1;
          }
          plVar21 = (long *)(auVar32._0_8_ + 0x80);
          lVar8 = *plVar21;
          while ((plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar8,auVar32._8_8_,0), plVar9 == (long *)0x0 ||
                 (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
            lVar10 = func_0x00ff0f44(plVar21,plVar9,lVar8);
            bVar5 = lVar8 == lVar10;
            lVar8 = lVar10;
            if (bVar5) {
              return;
            }
          }
          auVar31 = func_0x00f78e5c(plVar9);
          *(undefined8 *)(puVar2 + -0x60) = 0x3d27718;
          *(long *)(puVar2 + -0x58) = lVar8;
          *(long **)(puVar2 + -0x50) = plVar21;
          *(long *)(puVar2 + -0x48) = auVar32._8_8_;
          *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
          *(undefined **)(puVar2 + -0x38) =
               &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
          if ((bRam0000000003eb51fd & 1) == 0) {
            func_0x00f78a20(0x3d27738);
            bRam0000000003eb51fd = 1;
          }
          plVar21 = (long *)(auVar31._0_8_ + 0xa8);
          lVar8 = *plVar21;
          while ((plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar8,auVar31._8_8_,0), plVar9 == (long *)0x0 ||
                 (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
            lVar10 = func_0x00ff0f44(plVar21,plVar9,lVar8);
            bVar5 = lVar8 == lVar10;
            lVar8 = lVar10;
            if (bVar5) {
              return;
            }
          }
          auVar32 = func_0x00f78e5c(plVar9);
          *(undefined8 *)(puVar2 + -0x90) = 0x3d27738;
          *(long *)(puVar2 + -0x88) = lVar8;
          *(long **)(puVar2 + -0x80) = plVar21;
          *(long *)(puVar2 + -0x78) = auVar31._8_8_;
          *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x40;
          *(undefined **)(puVar2 + -0x68) =
               &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
          if ((bRam0000000003eb51f5 & 1) == 0) {
            func_0x00f78a20(0x3d27700);
            bRam0000000003eb51f5 = 1;
          }
          plVar21 = (long *)(auVar32._0_8_ + 0x88);
          lVar8 = *plVar21;
          while ((plVar9 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar8,auVar32._8_8_,0), plVar9 == (long *)0x0 ||
                 (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
            lVar10 = func_0x00ff0f44(plVar21,plVar9,lVar8);
            bVar5 = lVar8 == lVar10;
            lVar8 = lVar10;
            if (bVar5) {
              return;
            }
          }
          auVar31 = func_0x00f78e5c(plVar9);
          puVar3 = puVar2 + -0xe0;
          *(undefined8 *)(puVar2 + -0xe0) = unaff_x26;
          *(undefined8 *)(puVar2 + -0xd8) = unaff_x25;
          *(undefined8 *)(puVar2 + -0xd0) = unaff_x24;
          *(undefined8 **)(puVar2 + -200) = unaff_x23;
          *(undefined8 *)(puVar2 + -0xc0) = 0x3d27700;
          *(long *)(puVar2 + -0xb8) = lVar8;
          *(long **)(puVar2 + -0xb0) = plVar21;
          *(long *)(puVar2 + -0xa8) = auVar32._8_8_;
          *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
          *(code **)(puVar2 + -0x98) = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
          puVar24 = puVar2 + -0xa0;
          unaff_x23 = (undefined8 *)0x3d27718;
          unaff_x24 = 0x3d570f0;
          if ((bRam0000000003eb51b7 & 1) == 0) {
            func_0x00f78a20(0x3d524e0);
            func_0x00f78a20(0x3d524e8);
            func_0x00f78a20(0x3d524f0);
            func_0x00f78a20(0x3d524f8);
            func_0x00f78a20(0x3d570d0);
            func_0x00f78a20(0x3d570f0);
            func_0x00f78a20(0x3d27700);
            func_0x00f78a20(0x3d27718);
            func_0x00f78a20(0x3d27728);
            func_0x00f78a20(0x3d27730);
            func_0x00f78a20(0x3d27738);
            bRam0000000003eb51b7 = 1;
          }
          unaff_x21 = *(long *)(auVar31._0_8_ + 0x40);
          uVar11 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
          auVar33._8_8_ = uVar11;
          auVar33._0_8_ = unaff_x21;
          uVar20 = 0;
          /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(uVar11,auVar31._0_8_,uRam0000000003d570f0,0);
          if (unaff_x21 == 0) {
            puVar25 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
            auVar33 = func_0x00f78af4();
          }
          else {
            unaff_x24 = 0x3d27000;
            unaff_x25 = 0x3d52000;
            puVar25 = (undefined *)0x159d470;
            puVar3 = puVar2 + -0xe0;
          }
code_r0x0159d5c4:
          *(undefined8 *)(puVar3 + -0x30) = uVar11;
          *(long *)(puVar3 + -0x28) = unaff_x21;
          *(long *)(puVar3 + -0x20) = auVar31._8_8_;
          *(long *)(puVar3 + -0x18) = auVar31._0_8_;
          *(undefined1 **)(puVar3 + -0x10) = puVar24;
          *(undefined **)(puVar3 + -8) = puVar25;
          if ((bRam0000000003eb51f4 & 1) == 0) {
            func_0x00f78a20(0x3d27718);
            bRam0000000003eb51f4 = 1;
          }
          plVar21 = (long *)(auVar33._0_8_ + 0x80);
          lVar8 = *plVar21;
          while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,auVar33._8_8_,0), plVar9 == (long *)0x0 ||
                 (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
            lVar10 = func_0x00ff0f44(plVar21,plVar9,lVar8);
            bVar5 = lVar8 == lVar10;
            lVar8 = lVar10;
            if (bVar5) {
              return;
            }
          }
          auVar32 = func_0x00f78e5c(plVar9);
          *(undefined8 *)(puVar3 + -0x60) = 0x3d27718;
          *(long *)(puVar3 + -0x58) = lVar8;
          *(long **)(puVar3 + -0x50) = plVar21;
          *(long *)(puVar3 + -0x48) = auVar33._8_8_;
          *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
          *(undefined **)(puVar3 + -0x38) =
               &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
          if ((bRam0000000003eb51f6 & 1) == 0) {
            func_0x00f78a20(0x3d27700);
            bRam0000000003eb51f6 = 1;
          }
          plVar21 = (long *)(auVar32._0_8_ + 0x88);
          lVar8 = *plVar21;
          while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,auVar32._8_8_,0), plVar9 == (long *)0x0 ||
                 (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
            lVar10 = func_0x00ff0f44(plVar21,plVar9,lVar8);
            bVar5 = lVar8 == lVar10;
            lVar8 = lVar10;
            if (bVar5) {
              return;
            }
          }
          auVar31 = func_0x00f78e5c(plVar9);
          *(undefined8 *)(puVar3 + -0x90) = 0x3d27700;
          *(long *)(puVar3 + -0x88) = lVar8;
          *(long **)(puVar3 + -0x80) = plVar21;
          *(long *)(puVar3 + -0x78) = auVar32._8_8_;
          *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
          *(undefined **)(puVar3 + -0x68) =
               &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
          if ((bRam0000000003eb51fe & 1) == 0) {
            func_0x00f78a20(0x3d27738);
            bRam0000000003eb51fe = 1;
          }
          plVar21 = (long *)(auVar31._0_8_ + 0xa8);
          lVar8 = *plVar21;
          while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,auVar31._8_8_,0), plVar9 == (long *)0x0 ||
                 (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
            lVar10 = func_0x00ff0f44(plVar21,plVar9,lVar8);
            bVar5 = lVar8 == lVar10;
            lVar8 = lVar10;
            if (bVar5) {
              return;
            }
          }
          auVar32 = func_0x00f78e5c(plVar9);
          unaff_x19 = auVar32._8_8_;
          puVar4 = puVar3 + -0xc0;
          *(undefined8 *)(puVar3 + -0xc0) = 0x3d27738;
          *(long *)(puVar3 + -0xb8) = lVar8;
          *(long **)(puVar3 + -0xb0) = plVar21;
          *(long *)(puVar3 + -0xa8) = auVar31._8_8_;
          *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x70;
          *(undefined **)(puVar3 + -0x98) =
               &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
          puVar24 = puVar3 + -0xa0;
          if ((bRam0000000003eb51fc & 1) == 0) {
            func_0x00f78a20(0x3d27730);
            bRam0000000003eb51fc = 1;
          }
          unaff_x22 = 0x3d27730;
          plVar21 = (long *)(auVar32._0_8_ + 0xa0);
          unaff_x21 = *plVar21;
          while ((plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x21,unaff_x19,0), plVar9 == (long *)0x0 ||
                 (*plVar9 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
            lVar8 = func_0x00ff0f44(plVar21,plVar9,unaff_x21);
            bVar5 = unaff_x21 == lVar8;
            unaff_x21 = lVar8;
            if (bVar5) {
              return;
            }
          }
          puVar25 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
          auVar34 = func_0x00f78e5c(plVar9);
code_r0x0159d844:
          *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
          *(long *)(puVar4 + -0x28) = unaff_x21;
          *(long **)(puVar4 + -0x20) = plVar21;
          *(long *)(puVar4 + -0x18) = unaff_x19;
          *(undefined1 **)(puVar4 + -0x10) = puVar24;
          *(undefined **)(puVar4 + -8) = puVar25;
          if ((bRam0000000003eb51fa & 1) == 0) {
            func_0x00f78a20(0x3d27728);
            bRam0000000003eb51fa = 1;
          }
          plVar21 = (long *)0x3d27728;
          plVar9 = (long *)(auVar34._0_8_ + 0x98);
          lVar8 = *plVar9;
          while( true ) {
            puVar15 = (undefined8 *)0x0;
            plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,auVar34._8_8_);
            if ((plVar12 != (long *)0x0) && (*plVar12 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
            lVar10 = func_0x00ff0f44(plVar9,plVar12,lVar8);
            bVar5 = lVar8 == lVar10;
            lVar8 = lVar10;
            if (bVar5) {
              return;
            }
          }
          lVar10 = func_0x00f78e5c(plVar12);
          *(undefined8 *)(puVar4 + -0x80) = unaff_x26;
          *(undefined8 *)(puVar4 + -0x78) = unaff_x25;
          *(undefined8 *)(puVar4 + -0x70) = unaff_x24;
          *(undefined8 **)(puVar4 + -0x68) = unaff_x23;
          *(undefined8 *)(puVar4 + -0x60) = 0x3d27728;
          *(long *)(puVar4 + -0x58) = lVar8;
          *(long **)(puVar4 + -0x50) = plVar9;
          *(long *)(puVar4 + -0x48) = auVar34._8_8_;
          *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
          *(undefined **)(puVar4 + -0x38) = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
          lVar8 = 0x3eb5000;
          if ((bRam0000000003eb5204 & 1) == 0) {
            func_0x00f78a20(0x3d29f28);
            func_0x00f78a20(0x3d2a1d8);
            func_0x00f78a20(0x3d2a1c8);
            func_0x00f78a20(0x3d1b4e0);
            func_0x00f78a20(0x3d1b4e8);
            func_0x00f78a20(0x3d1b3b0);
            func_0x00f78a20(0x3d43378);
            func_0x00f78a20(0x3d57230);
            func_0x00f78a20(0x3d57238);
            func_0x00f78a20(0x3d57240);
            bRam0000000003eb5204 = 1;
          }
          lVar22 = *(long *)(lVar10 + 0x28);
          if (lVar22 != 0) {
            plVar21 = (long *)(lVar10 + 0x10);
            uVar18 = *(uint *)(lVar22 + 0x18);
            if ((int)uVar18 < 1) {
code_r0x0159d9f0:
              if (((*(long *)(lVar10 + 0x20) == 0) ||
                  (lVar19 = *(long *)(*(long *)(lVar10 + 0x20) + 0x20), lVar19 == 0)) ||
                 (unaff_x23 = *(undefined8 **)(lVar19 + 0x10), unaff_x23 == (undefined8 *)0x0))
              goto code_r0x0159db7c;
              uVar11 = 0x3d1b4e8;
              unaff_x24 = 0x3d1b4e8;
              lVar8 = unaff_x23[3];
              lVar22 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
              uVar20 = uRam0000000003d2a1d8;
              /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar22,lVar10,uRam0000000003d57238,uRam0000000003d2a1d8);
              puVar15 = (undefined8 *)0x0;
              plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,lVar22);
              if ((plVar9 == (long *)0x0) || (*plVar9 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
                unaff_x23[3] = plVar9;
                if ((*(long *)(lVar10 + 0x20) == 0) ||
                   ((lVar19 = *(long *)(*(long *)(lVar10 + 0x20) + 0x20), lVar19 == 0 ||
                    (unaff_x23 = *(undefined8 **)(lVar19 + 0x10), unaff_x23 == (undefined8 *)0x0))))
                goto code_r0x0159db7c;
                uVar11 = 0x3d1b3b0;
                unaff_x24 = 0x3d1b3b0;
                lVar8 = unaff_x23[0xe];
                lVar22 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
                uVar20 = uRam0000000003d29f28;
                /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar22,lVar10,uRam0000000003d57240,uRam0000000003d29f28);
                puVar15 = (undefined8 *)0x0;
                plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,lVar22);
                if ((plVar9 == (long *)0x0) || (*plVar9 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
                  unaff_x23[0xe] = plVar9;
                  if (((*(long *)(lVar10 + 0x20) == 0) ||
                      (lVar19 = *(long *)(*(long *)(lVar10 + 0x20) + 0x20), lVar19 == 0)) ||
                     (unaff_x23 = *(undefined8 **)(lVar19 + 0x10), unaff_x23 == (undefined8 *)0x0))
                  goto code_r0x0159db7c;
                  uVar11 = 0x3d1b4e0;
                  lVar8 = unaff_x23[5];
                  lVar22 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
                  uVar20 = uRam0000000003d2a1c8;
                  /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar22,lVar10,uRam0000000003d57230,uRam0000000003d2a1c8);
                  puVar15 = (undefined8 *)0x0;
                  plVar9 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar8,lVar22);
                  if ((plVar9 == (long *)0x0) || (*plVar9 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
                    unaff_x23[5] = plVar9;
                    *(undefined1 *)(lVar10 + 0x50) = 0;
                    *(undefined8 *)(lVar10 + 0x18) = 0;
                    *plVar21 = 0;
                    *(undefined8 *)(lVar10 + 0x28) = 0;
                    *(undefined8 *)(lVar10 + 0x20) = 0;
                    return;
                  }
                }
              }
              goto code_r0x0159db8c;
            }
            unaff_x23 = (undefined8 *)0x0;
            unaff_x24 = 0x3d43378;
            while( true ) {
              uVar23 = (uint)unaff_x23;
              uVar11 = unaff_x24;
              if (uVar18 <= uVar23) goto code_r0x0159db80;
              if (*plVar21 == 0) break;
              lVar8 = *(long *)(lVar22 + (long)(int)uVar23 * 8 + 0x20);
              puVar15 = puRam0000000003d43378;
              /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar21,lVar8);
              if (lVar8 == 0) break;
              /*Atlas.Gameplay.Player.GameContextPlayer$$DeInit*/ func_0x015a5404(lVar8);
              unaff_x23 = (undefined8 *)(ulong)(uVar23 + 1);
              uVar18 = *(uint *)(lVar22 + 0x18);
              if ((int)uVar18 <= (int)(uVar23 + 1)) goto code_r0x0159d9f0;
            }
          }
code_r0x0159db7c:
          func_0x00f78af4();
          uVar11 = unaff_x24;
code_r0x0159db80:
          uVar13 = func_0x00f78b24();
          func_0x00f78ac0(uVar13,0);
code_r0x0159db8c:
          auVar32 = func_0x00f78e5c();
          puVar14 = auVar32._8_8_;
          plVar9 = auVar32._0_8_;
          *(undefined8 *)(puVar4 + -0xc0) = uVar11;
          *(undefined8 **)(puVar4 + -0xb8) = unaff_x23;
          *(long **)(puVar4 + -0xb0) = plVar21;
          *(long *)(puVar4 + -0xa8) = lVar22;
          *(long *)(puVar4 + -0xa0) = lVar8;
          *(long *)(puVar4 + -0x98) = lVar10;
          *(undefined1 **)(puVar4 + -0x90) = puVar4 + -0x40;
          *(code **)(puVar4 + -0x88) = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
          puVar16 = puVar15;
          if ((bRam0000000003eb51b8 & 1) == 0) {
            func_0x00f78a20(0x3d69658);
            bRam0000000003eb51b8 = 1;
          }
          if (((plVar9[3] != 0) &&
              (puVar16 = puVar15, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar9[3],puVar14,puVar15,uVar20,0),
              puVar15 != (undefined8 *)0x0)) && (lVar8 = puVar15[2], lVar8 != 0)) {
            uVar11 = *(undefined8 *)(lVar8 + 0x48);
            uVar26 = *(undefined8 *)(lVar8 + 0x60);
            uVar13 = *(undefined8 *)(lVar8 + 0x58);
            *(undefined8 *)(puVar4 + -0xd8) = *(undefined8 *)(lVar8 + 0x50);
            *(undefined8 *)(puVar4 + -0xe0) = uVar11;
            *(undefined8 *)(puVar4 + -200) = uVar26;
            *(undefined8 *)(puVar4 + -0xd0) = uVar13;
            iVar6 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar4 + -0xe0,0);
            if ((iVar6 == 0) || (puVar15 == puVar14)) {
              return;
            }
            iVar6 = (**(code **)(*plVar9 + 0x2a8))(plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
            if ((plVar9[0x18] != 0) && (lVar8 = *(long *)(plVar9[0x18] + 0x20), lVar8 != 0)) {
              /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar4 + -0xf8,lVar8,0);
              *(int *)(puVar15 + 0xf) = *(int *)(puVar15 + 0xf) + iVar6;
              uVar11 = *(undefined8 *)(puVar4 + -0xf8);
              puVar15[0x11] = *(undefined8 *)(puVar4 + -0xf0);
              puVar15[0x10] = uVar11;
              puVar15[0x12] = *(undefined8 *)(puVar4 + -0xe8);
              if (puVar15[2] != 0) {
                if (*(int *)(puVar15[2] + 0x50) == 0) {
                  uVar11 = (**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210));
                  puVar16 = (undefined8 *)0x0;
                  iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar11,/*STR('BattleGameContext')*/ uRam0000000003d69658);
                  if (iVar6 != 0) {
                    if (plVar9[3] == 0) goto LAB_0159dcf8;
                    /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar9[3],*(undefined4 *)(puVar15 + 0xf),0);
                  }
                }
                if (plVar9[0x46] == 0) {
                  return;
                }
                /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar9[0x46],puVar14,puVar15,uVar20,0);
                return;
              }
            }
          }
LAB_0159dcf8:
          auVar35 = func_0x00f78af4();
          lVar8 = auVar35._0_8_;
          iVar6 = *(int *)(lVar8 + 0x78);
          uVar13 = puVar16[1];
          uVar11 = *puVar16;
          *(undefined8 *)(puVar4 + -0x118) = uVar13;
          *(undefined8 *)(puVar4 + -0x120) = uVar11;
          uVar20 = puVar16[2];
          *(undefined8 *)(puVar4 + -0x110) = uVar20;
          *(int *)(lVar8 + 0x78) = iVar6 + auVar35._8_4_;
          *(undefined8 *)(lVar8 + 0x88) = uVar13;
          *(undefined8 *)(lVar8 + 0x80) = uVar11;
          *(undefined8 *)(lVar8 + 0x90) = uVar20;
          return;
        }
      }
    }
    unaff_x19 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0x80) =
         (undefined1 *)((long)register0x00000008 + -0x50);
    *(undefined **)((long)register0x00000008 + -0x78) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnHit;
    if (param_3 == 0) {
      func_0x00f78af4();
      return;
    }
    if (*(long *)(param_3 + 0x10) != *(long *)(unaff_x19 + 0x38)) {
      return;
    }
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x70);
    puVar24 = *(undefined1 **)((long)register0x00000008 + -0x80);
    pcVar1 = *(code **)((long)register0x00000008 + -0x78);
  }
  else {
    if (*(long *)(auVar32._8_8_ + 0x10) != *(long *)(lVar8 + 0x38)) {
      return;
    }
    puVar3 = (undefined1 *)((long)register0x00000008 + -0xa0);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0xa0);
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x24;
    *(undefined8 **)((long)register0x00000008 + -0x68) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x50) = uVar20;
    *(long *)((long)register0x00000008 + -0x48) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)((long)register0x00000008 + -0x38);
    puVar24 = (undefined1 *)((long)register0x00000008 + -0x40);
    lVar10 = 0x3eb4000;
    if ((bRam0000000003eb4ec2 & 1) == 0) {
      func_0x00f78a20(0x3d527e8);
      func_0x00f78a20(0x3d527f8);
      func_0x00f78a20(0x3d52800);
      func_0x00f78a20(0x3d278d8);
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb4ec2 = 1;
    }
    if (*(long *)(lVar8 + 0x58) != 0) {
      *(undefined1 *)(*(long *)(lVar8 + 0x58) + 0x100) = 1;
      lVar22 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar8);
      if (lVar22 != 0) {
        uVar20 = *(undefined8 *)(lVar22 + 0x70);
        uVar13 = *(undefined8 *)(lVar22 + 0x88);
        uVar11 = *(undefined8 *)(lVar22 + 0x80);
        *(undefined8 *)((long)register0x00000008 + -0x98) = *(undefined8 *)(lVar22 + 0x78);
        *(undefined8 *)((long)register0x00000008 + -0xa0) = uVar20;
        *(undefined8 *)((long)register0x00000008 + -0x88) = uVar13;
        *(undefined8 *)((long)register0x00000008 + -0x90) = uVar11;
        uVar20 = *(undefined8 *)(lVar22 + 0x90);
        *(undefined8 *)((long)register0x00000008 + -0x78) = *(undefined8 *)(lVar22 + 0x98);
        *(undefined8 *)((long)register0x00000008 + -0x80) = uVar20;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                  (lVar8,(undefined1 *)((long)register0x00000008 + -0xa0),0);
        lVar10 = *(long *)(lVar8 + 0xd0);
        unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
        /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar8,uRam0000000003d527e8,0);
        unaff_x22 = 0x3d52000;
        if (lVar10 != 0) {
          /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar10,unaff_x21,0);
          if (*(long *)(lVar8 + 0x10) != 0) {
            uVar11 = 0x3d27718;
            unaff_x23 = (undefined8 *)0x3d52000;
            lVar10 = *(long *)(*(long *)(lVar8 + 0x10) + 0x40);
            unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
            /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar8,uRam0000000003d527f8,0);
            unaff_x22 = 0x3d27718;
            if (lVar10 != 0) {
              /*Atlas.Gameplay.Player.GameContextPlayerManager$$remove_OnUsableAttached*/ func_0x015a5cc8(lVar10,unaff_x21,0);
              if (*(long *)(lVar8 + 0x10) != 0) {
                unaff_x23 = (undefined8 *)0x3d52000;
                lVar22 = *(long *)(*(long *)(lVar8 + 0x10) + 0x40);
                auVar31._8_8_ = lVar22;
                auVar31._0_8_ = lVar8;
                unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
                auVar33._8_8_ = unaff_x21;
                auVar33._0_8_ = lVar22;
                uVar20 = 0;
                /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar8,uRam0000000003d52800,0);
                lVar10 = 0;
                unaff_x22 = uVar11;
                if (lVar22 != 0) {
                  puVar25 = (undefined *)0x1535aa8;
                  goto code_r0x0159d5c4;
                }
              }
            }
          }
        }
      }
    }
    lVar22 = func_0x00f78af4();
    *(long *)((long)register0x00000008 + -0xc0) = lVar10;
    *(long *)((long)register0x00000008 + -0xb8) = lVar8;
    *(undefined1 **)((long)register0x00000008 + -0xb0) = puVar24;
    *(code **)((long)register0x00000008 + -0xa8) =
         Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterHitPlayerEndTrigger;
    param_3 = 0;
    iVar6 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
    if (iVar6 == 0) {
      return;
    }
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar20;
    *(undefined8 *)((long)register0x00000008 + -0xb8) =
         *(undefined8 *)((long)register0x00000008 + -0xb8);
    *(undefined8 *)((long)register0x00000008 + -0xb0) =
         *(undefined8 *)((long)register0x00000008 + -0xb0);
    *(undefined8 *)((long)register0x00000008 + -0xa8) =
         *(undefined8 *)((long)register0x00000008 + -0xa8);
    puVar24 = (undefined1 *)((long)register0x00000008 + -0xb0);
    uVar7 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar22,0);
    if ((uVar7 & 1) == 0) {
      puVar24 = *(undefined1 **)((long)register0x00000008 + -0xb0);
      pcVar1 = *(code **)((long)register0x00000008 + -0xa8);
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0xc0);
      lVar8 = *(long *)((long)register0x00000008 + -0xb8);
      unaff_x19 = lVar22;
    }
    else {
      if (*(long *)(lVar22 + 0xb8) != 0) {
        Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsedUsables(*(long *)(lVar22 + 0xb8),0);
        *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x22;
        *(long *)((long)register0x00000008 + -200) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0xc0) =
             *(undefined8 *)((long)register0x00000008 + -0xc0);
        *(undefined8 *)((long)register0x00000008 + -0xb8) =
             *(undefined8 *)((long)register0x00000008 + -0xb8);
        *(undefined8 *)((long)register0x00000008 + -0xb0) =
             *(undefined8 *)((long)register0x00000008 + -0xb0);
        *(undefined8 *)((long)register0x00000008 + -0xa8) =
             *(undefined8 *)((long)register0x00000008 + -0xa8);
        *(int *)(lVar22 + 0x8c) = *(int *)(lVar22 + 0x8c) + 1;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                  ((undefined1 *)((long)register0x00000008 + -0x130),lVar22,
                   *(undefined8 *)(lVar22 + 0xa8));
        *(undefined8 *)((long)register0x00000008 + -0x178) =
             *(undefined8 *)((long)register0x00000008 + -0x128);
        *(undefined8 *)((long)register0x00000008 + -0x180) =
             *(undefined8 *)((long)register0x00000008 + -0x130);
        *(undefined8 *)((long)register0x00000008 + -0x168) =
             *(undefined8 *)((long)register0x00000008 + -0x118);
        *(undefined8 *)((long)register0x00000008 + -0x170) =
             *(undefined8 *)((long)register0x00000008 + -0x120);
        uVar28 = *(undefined8 *)((long)register0x00000008 + -0xf8);
        uVar27 = *(undefined8 *)((long)register0x00000008 + -0x100);
        uVar26 = *(undefined8 *)((long)register0x00000008 + -0xe8);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0xf0);
        *(undefined8 *)((long)register0x00000008 + -0x148) = uVar28;
        *(undefined8 *)((long)register0x00000008 + -0x150) = uVar27;
        *(undefined8 *)((long)register0x00000008 + -0x138) = uVar26;
        *(undefined8 *)((long)register0x00000008 + -0x140) = uVar13;
        uVar30 = *(undefined8 *)((long)register0x00000008 + -0x108);
        uVar29 = *(undefined8 *)((long)register0x00000008 + -0x110);
        *(undefined8 *)((long)register0x00000008 + -0x158) = uVar30;
        *(undefined8 *)((long)register0x00000008 + -0x160) = uVar29;
        uVar20 = *(undefined8 *)((long)register0x00000008 + -0xe0);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0xd8);
        *(undefined8 *)((long)register0x00000008 + -0x108) = uVar30;
        *(undefined8 *)((long)register0x00000008 + -0x110) = uVar29;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = uVar28;
        *(undefined8 *)((long)register0x00000008 + -0x100) = uVar27;
        *(undefined8 *)((long)register0x00000008 + -0xe8) = uVar26;
        *(undefined8 *)((long)register0x00000008 + -0xf0) = uVar13;
        *(undefined8 *)((long)register0x00000008 + -0x128) =
             *(undefined8 *)((long)register0x00000008 + -0x128);
        *(undefined8 *)((long)register0x00000008 + -0x130) =
             *(undefined8 *)((long)register0x00000008 + -0x130);
        *(undefined8 *)((long)register0x00000008 + -0x118) =
             *(undefined8 *)((long)register0x00000008 + -0x118);
        *(undefined8 *)((long)register0x00000008 + -0x120) =
             *(undefined8 *)((long)register0x00000008 + -0x120);
        *(undefined8 *)((long)register0x00000008 + -0x198) = uVar28;
        *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar27;
        *(undefined8 *)((long)register0x00000008 + -0x188) = uVar26;
        *(undefined8 *)((long)register0x00000008 + -400) = uVar13;
        *(undefined8 *)((long)register0x00000008 + -0x1a8) = uVar30;
        *(undefined8 *)((long)register0x00000008 + -0x1b0) = uVar29;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                  (lVar22,(undefined1 *)((long)register0x00000008 + -0x1b0));
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnHumanPlayerAtLocator(lVar22,uVar20);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnAIsAtLocators(lVar22,uVar11);
        uVar20 = *(undefined8 *)(lVar22 + 0xa8);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection(lVar22);
        plVar21 = *(long **)((long)register0x00000008 + -0xd0);
        *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -0xf8) = unaff_x27;
        *(undefined8 *)((long)register0x00000008 + -0xf0) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0xe8) = unaff_x25;
        *(undefined8 *)((long)register0x00000008 + -0xe0) = unaff_x24;
        *(undefined8 **)((long)register0x00000008 + -0xd8) = unaff_x23;
        *(long **)((long)register0x00000008 + -0xd0) = plVar21;
        *(undefined8 *)((long)register0x00000008 + -200) =
             *(undefined8 *)((long)register0x00000008 + -200);
        *(undefined8 *)((long)register0x00000008 + -0xc0) =
             *(undefined8 *)((long)register0x00000008 + -0xc0);
        *(undefined8 *)((long)register0x00000008 + -0xb8) =
             *(undefined8 *)((long)register0x00000008 + -0xb8);
        *(undefined8 *)((long)register0x00000008 + -0xb0) =
             *(undefined8 *)((long)register0x00000008 + -0xb0);
        *(undefined8 *)((long)register0x00000008 + -0xa8) =
             *(undefined8 *)((long)register0x00000008 + -0xa8);
        *(undefined8 *)((long)register0x00000008 + -0x110) = uVar20;
        if ((bRam0000000003eb48a2 & 1) == 0) {
          func_0x00f78a20(0x3d33318);
          func_0x00f78a20(0x3d33320);
          func_0x00f78a20(0x3d33328);
          func_0x00f78a20(0x3d278d8);
          func_0x00f78a20(0x3d3cd70);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d24e08);
          func_0x00f78a20(0x3d62270);
          func_0x00f78a20(0x3d26ac8);
          bRam0000000003eb48a2 = 1;
        }
        *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
        *(undefined8 *)(lVar22 + 0xa8) = uVar20;
        if ((*(long *)(lVar22 + 0x40) != 0) &&
           (lVar8 = *(long *)(*(long *)(lVar22 + 0x40) + 0x30), lVar8 != 0)) {
          /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x1b0),lVar8,
                          uRam0000000003d3cd70);
          *(undefined8 *)((long)register0x00000008 + -0x138) =
               *(undefined8 *)((long)register0x00000008 + -0x188);
          *(undefined8 *)((long)register0x00000008 + -0x140) =
               *(undefined8 *)((long)register0x00000008 + -400);
          *(undefined8 *)((long)register0x00000008 + -0x128) =
               *(undefined8 *)((long)register0x00000008 + -0x178);
          *(undefined8 *)((long)register0x00000008 + -0x130) =
               *(undefined8 *)((long)register0x00000008 + -0x180);
          *(undefined8 *)((long)register0x00000008 + -0x120) =
               *(undefined8 *)((long)register0x00000008 + -0x170);
          *(undefined8 *)((long)register0x00000008 + -0x158) =
               *(undefined8 *)((long)register0x00000008 + -0x1a8);
          *(undefined8 *)((long)register0x00000008 + -0x160) =
               *(undefined8 *)((long)register0x00000008 + -0x1b0);
          *(undefined8 *)((long)register0x00000008 + -0x148) =
               *(undefined8 *)((long)register0x00000008 + -0x198);
          *(undefined8 *)((long)register0x00000008 + -0x150) =
               *(undefined8 *)((long)register0x00000008 + -0x1a0);
          goto LAB_01478328;
        }
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar9 = (long *)___cxa_begin_catch();
          lVar22 = *plVar9;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x160),uRam0000000003d33318);
          if (lVar22 == 0) {
            return;
          }
          func_0x00f78ac0(lVar22,0);
        }
        lVar8 = __Unwind_Resume();
        *(undefined8 *)((long)register0x00000008 + -0x230) = unaff_x24;
        *(undefined8 **)((long)register0x00000008 + -0x228) = unaff_x23;
        *(long **)((long)register0x00000008 + -0x220) = plVar21;
        *(undefined8 *)((long)register0x00000008 + -0x218) = 0x3eb4000;
        *(undefined8 *)((long)register0x00000008 + -0x210) = uVar20;
        *(long *)((long)register0x00000008 + -0x208) = lVar22;
        *(undefined1 **)((long)register0x00000008 + -0x200) =
             (undefined1 *)((long)register0x00000008 + -0xb0);
        *(code **)((long)register0x00000008 + -0x1f8) =
             Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
        lVar10 = 0x3eb4000;
        if ((bRam0000000003eb48a3 & 1) == 0) {
          func_0x00f78a20(0x3d33318);
          func_0x00f78a20(0x3d33320);
          func_0x00f78a20(0x3d33328);
          func_0x00f78a20(0x3d3cd70);
          func_0x00f78a20(0x3d24e08);
          bRam0000000003eb48a3 = 1;
        }
        *(undefined8 *)((long)register0x00000008 + -0x288) = 0;
        *(undefined4 *)((long)register0x00000008 + -0x290) = 0;
        if ((*(long *)(lVar8 + 0x40) != 0) &&
           (lVar22 = *(long *)(*(long *)(lVar8 + 0x40) + 0x30), lVar22 != 0)) {
          plVar21 = (long *)0x3d24e08;
          /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x2e0),lVar22,
                          uRam0000000003d3cd70);
          *(undefined8 *)((long)register0x00000008 + -600) =
               *(undefined8 *)((long)register0x00000008 + -0x2b8);
          *(undefined8 *)((long)register0x00000008 + -0x260) =
               *(undefined8 *)((long)register0x00000008 + -0x2c0);
          *(undefined8 *)((long)register0x00000008 + -0x248) =
               *(undefined8 *)((long)register0x00000008 + -0x2a8);
          *(undefined8 *)((long)register0x00000008 + -0x250) =
               *(undefined8 *)((long)register0x00000008 + -0x2b0);
          *(undefined8 *)((long)register0x00000008 + -0x240) =
               *(undefined8 *)((long)register0x00000008 + -0x2a0);
          *(undefined8 *)((long)register0x00000008 + -0x278) =
               *(undefined8 *)((long)register0x00000008 + -0x2d8);
          *(undefined8 *)((long)register0x00000008 + -0x280) =
               *(undefined8 *)((long)register0x00000008 + -0x2e0);
          *(undefined8 *)((long)register0x00000008 + -0x268) =
               *(undefined8 *)((long)register0x00000008 + -0x2c8);
          *(undefined8 *)((long)register0x00000008 + -0x270) =
               *(undefined8 *)((long)register0x00000008 + -0x2d0);
          goto LAB_01478624;
        }
        func_0x00f78af4();
        if (extraout_w1_00 == 1) {
          plVar9 = (long *)___cxa_begin_catch();
          lVar10 = *plVar9;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x280),*unaff_x23);
          if (lVar10 == 0) goto code_r0x014786b8;
          func_0x00f78ac0(lVar10,0);
        }
        lVar22 = __Unwind_Resume();
        *(long *)((long)register0x00000008 + -0x300) = lVar10;
        *(long *)((long)register0x00000008 + -0x2f8) = lVar8;
        *(undefined1 **)((long)register0x00000008 + -0x2f0) =
             (undefined1 *)((long)register0x00000008 + -0x200);
        *(code **)((long)register0x00000008 + -0x2e8) =
             Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                  ((undefined1 *)((long)register0x00000008 + -0x360),lVar22,
                   *(undefined8 *)(lVar22 + 0xa8));
        uVar20 = *(undefined8 *)((long)register0x00000008 + -0x340);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x328);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x330);
        extraout_x8[5] = *(undefined8 *)((long)register0x00000008 + -0x338);
        extraout_x8[4] = uVar20;
        extraout_x8[7] = uVar13;
        extraout_x8[6] = uVar11;
        uVar20 = *(undefined8 *)((long)register0x00000008 + -800);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x308);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x310);
        extraout_x8[9] = *(undefined8 *)((long)register0x00000008 + -0x318);
        extraout_x8[8] = uVar20;
        extraout_x8[0xb] = uVar13;
        extraout_x8[10] = uVar11;
        uVar20 = *(undefined8 *)((long)register0x00000008 + -0x360);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x348);
        uVar11 = *(undefined8 *)((long)register0x00000008 + -0x350);
        extraout_x8[1] = *(undefined8 *)((long)register0x00000008 + -0x358);
        *extraout_x8 = uVar20;
        extraout_x8[3] = uVar13;
        extraout_x8[2] = uVar11;
        return;
      }
      pcVar1 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteHitPlayerCondition;
      unaff_x19 = func_0x00f78af4();
      puVar2 = (undefined1 *)((long)register0x00000008 + -0xc0);
      lVar8 = lVar22;
    }
  }
  puVar4 = puVar2 + -0x60;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(long *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = uVar20;
  *(long *)(puVar2 + -0x18) = lVar8;
  *(undefined1 **)(puVar2 + -0x10) = puVar24;
  *(code **)(puVar2 + -8) = pcVar1;
  puVar24 = puVar2 + -0x10;
  unaff_x20 = 0x3eb4000;
  if ((bRam0000000003eb4ec4 & 1) == 0) {
    func_0x00f78a20(0x3d527d0);
    func_0x00f78a20(0x3d527f0);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb4ec4 = 1;
  }
  lVar8 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(unaff_x19);
  if (lVar8 != 0) {
    unaff_x22 = 0x3d52000;
    uVar20 = *(undefined8 *)(lVar8 + 0xa0);
    uVar13 = *(undefined8 *)(lVar8 + 0xb8);
    uVar11 = *(undefined8 *)(lVar8 + 0xb0);
    *(undefined8 *)(puVar2 + -0x58) = *(undefined8 *)(lVar8 + 0xa8);
    *(undefined8 *)(puVar2 + -0x60) = uVar20;
    *(undefined8 *)(puVar2 + -0x48) = uVar13;
    *(undefined8 *)(puVar2 + -0x50) = uVar11;
    uVar20 = *(undefined8 *)(lVar8 + 0xc0);
    *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(lVar8 + 200);
    *(undefined8 *)(puVar2 + -0x40) = uVar20;
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(unaff_x19,puVar2 + -0x60,0);
    *(undefined4 *)(unaff_x19 + 0xe8) = 0;
    unaff_x20 = *(long *)(unaff_x19 + 0xd8);
    unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    param_3 = uRam0000000003d527d0;
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,unaff_x19,uRam0000000003d527d0,0);
    if (unaff_x20 != 0) {
      param_3 = 0;
      /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(unaff_x20,unaff_x21);
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        unaff_x22 = 0x3d52000;
        plVar21 = *(long **)(*(long *)(unaff_x19 + 0x10) + 0x40);
        unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
        auVar34._8_8_ = unaff_x21;
        auVar34._0_8_ = plVar21;
        uVar20 = 0;
        param_3 = uRam0000000003d527f0;
        /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,unaff_x19,uRam0000000003d527f0,0);
        unaff_x20 = 0;
        if (plVar21 != (long *)0x0) {
          puVar25 = (undefined *)0x1535c74;
          goto code_r0x0159d844;
        }
      }
    }
  }
  auVar32 = func_0x00f78af4();
  lVar8 = auVar32._0_8_;
  register0x00000008 = (BADSPACEBASE *)(puVar2 + -0xb0);
  *(long *)(puVar2 + -0x80) = unaff_x20;
  *(long *)(puVar2 + -0x78) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x70) = puVar24;
  *(code **)(puVar2 + -0x68) = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnPickup;
  unaff_x29 = puVar2 + -0x70;
  if (auVar32._8_8_ != 0) {
    if (*(long *)(auVar32._8_8_ + 0x10) != *(long *)(lVar8 + 0x38)) {
      return;
    }
    lVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar8);
    unaff_x19 = lVar8;
    if (lVar10 != 0) {
      uVar20 = *(undefined8 *)(lVar10 + 0x40);
      uVar13 = *(undefined8 *)(lVar10 + 0x58);
      uVar11 = *(undefined8 *)(lVar10 + 0x50);
      *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(lVar10 + 0x48);
      *(undefined8 *)(puVar2 + -0xb0) = uVar20;
      *(undefined8 *)(puVar2 + -0x98) = uVar13;
      *(undefined8 *)(puVar2 + -0xa0) = uVar11;
      uVar20 = *(undefined8 *)(lVar10 + 0x60);
      *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(lVar10 + 0x68);
      *(undefined8 *)(puVar2 + -0x90) = uVar20;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar8,puVar2 + -0xb0,0);
      if (*(int *)(lVar8 + 0xe8) == 1) {
        Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompletePickupCondition(lVar8);
      }
      return;
    }
  }
  unaff_x30 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartUseUsableSection;
  param_1 = func_0x00f78af4();
  goto code_r0x01535d14;
LAB_01478328:
  do {
    uVar7 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0x160),uRam0000000003d33320);
    if ((uVar7 & 1) == 0) {
LAB_01478494:
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x160),uRam0000000003d33318);
      return;
    }
    lVar8 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___ctor(lVar8,0);
    if (lVar8 == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(long *)(lVar8 + 0x50) = lVar22;
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x138);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x140);
    uVar11 = *(undefined8 *)((long)register0x00000008 + -0x128);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x130);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x148);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x150);
    *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)((long)register0x00000008 + -0x120);
    *(undefined8 *)(lVar8 + 0x28) = uVar26;
    *(undefined8 *)(lVar8 + 0x20) = uVar13;
    *(undefined8 *)(lVar8 + 0x38) = uVar11;
    *(undefined8 *)(lVar8 + 0x30) = uVar20;
    *(undefined8 *)(lVar8 + 0x18) = uVar28;
    *(undefined8 *)(lVar8 + 0x10) = uVar27;
    *(undefined8 *)((long)register0x00000008 + -0x1b0) = *(undefined8 *)(lVar8 + 0x18);
    uVar20 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x1b0))
    ;
    uVar7 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -0x110),uVar20,0);
  } while ((uVar7 & 1) == 0);
  if (*(long *)(lVar22 + 0x60) == 0) {
    func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x14784e0);
    (*pcVar1)();
  }
  puVar15 = (undefined8 *)(lVar8 + 0x10);
  puVar16 = (undefined8 *)(lVar8 + 0x48);
  uVar7 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar22 + 0x60),*puVar15,puVar16,0);
  if ((uVar7 & 1) == 0) goto LAB_01478494;
  uVar20 = *(undefined8 *)(lVar22 + 0xa0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar7 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar20,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(long *)(lVar22 + 0xa0) == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(undefined8 *)((long)register0x00000008 + -0x168) =
         *(undefined8 *)(*(long *)(lVar22 + 0xa0) + 0x18);
    *(undefined8 *)((long)register0x00000008 + -0x1b0) = *puVar15;
    uVar20 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x1b0))
    ;
    uVar7 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -0x168),uVar20,0);
    if ((uVar7 & 1) != 0) {
      uVar20 = *(undefined8 *)(lVar22 + 0x38);
      uVar11 = *puVar15;
      uVar26 = *(undefined8 *)(lVar8 + 0x28);
      uVar13 = *(undefined8 *)(lVar8 + 0x20);
      *(undefined8 *)((long)register0x00000008 + -0x1e8) = *(undefined8 *)(lVar8 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0x1f0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0x1d8) = uVar26;
      *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar13;
      uVar11 = *(undefined8 *)(lVar8 + 0x30);
      *(undefined8 *)((long)register0x00000008 + -0x1c8) = *(undefined8 *)(lVar8 + 0x38);
      *(undefined8 *)((long)register0x00000008 + -0x1d0) = uVar11;
      *(undefined8 *)((long)register0x00000008 + -0x1c0) = *(undefined8 *)(lVar8 + 0x40);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                (lVar22,uVar20,(undefined1 *)((long)register0x00000008 + -0x1f0));
      goto LAB_01478328;
    }
  }
  uVar11 = *puVar16;
  uVar20 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar20,lVar8,uRam0000000003d62270,0);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AddBaseListener(lVar22,uVar11,uVar20,*puVar16);
  goto LAB_01478328;
LAB_01478624:
  do {
    uVar7 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0x280),uRam0000000003d33320);
    if ((uVar7 & 1) == 0) {
      uVar17 = 0x7b;
code_r0x0147869c:
      *(undefined4 *)((long)register0x00000008 + -0x298) = uVar17;
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x280),uRam0000000003d33318);
      if (*(int *)((long)register0x00000008 + -0x298) != 0x86) {
code_r0x014786b8:
        lVar10 = *plVar21;
        if (((*(ushort *)(lVar10 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar10 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar10 = *plVar21;
        }
        *(undefined8 *)(lVar8 + 0xa8) = **(undefined8 **)(lVar10 + 0xb8);
      }
      return;
    }
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x270);
    *(undefined8 *)((long)register0x00000008 + -0x2e0) =
         *(undefined8 *)((long)register0x00000008 + -0x268);
    uVar11 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x2e0))
    ;
    uVar7 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar8 + 0xa8,uVar11,0);
  } while ((uVar7 & 1) == 0);
  if (*(long *)(lVar8 + 0x60) == 0) {
    func_0x00f78af4();
  }
  else {
    uVar7 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar8 + 0x60),uVar20,
                            (undefined1 *)((long)register0x00000008 + -0x288),0);
    if ((uVar7 & 1) == 0) {
      uVar17 = 0x86;
      goto code_r0x0147869c;
    }
    if (*(long *)((long)register0x00000008 + -0x288) != 0) {
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                (lVar8,*(undefined8 *)(*(long *)((long)register0x00000008 + -0x288) + 0x18));
      goto LAB_01478624;
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1478708);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1535de8 | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.OnUse
// ============================================================

/* WARNING: Possible PIC construction at 0x01535aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x01535c74) */
/* WARNING: Removing unreachable block (ram,0x01535aa8) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnUse
               (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined8 *extraout_x8;
  long unaff_x19;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  uint uVar23;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar24;
  undefined *puVar25;
  code *unaff_x30;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  
  auVar31._8_8_ = param_2;
  auVar31._0_8_ = param_1;
code_r0x01535de8:
  lVar7 = auVar31._0_8_;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  if (auVar31._8_8_ == 0) {
    lVar7 = func_0x00f78af4();
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x20) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x18) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartHitPlayerSection;
    uVar20 = 0x3eb4000;
    if ((bRam0000000003eb4ec3 & 1) == 0) {
      func_0x00f78a20(0x3d527f0);
      func_0x00f78a20(0x3d27728);
      bRam0000000003eb4ec3 = 1;
    }
    lVar21 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar7);
    if (lVar21 == 0) {
code_r0x01535ee8:
      lVar21 = func_0x00f78af4();
      *(undefined1 **)((long)register0x00000008 + -0x50) =
           (undefined1 *)((long)register0x00000008 + -0x20);
      *(undefined **)((long)register0x00000008 + -0x48) =
           &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnHit;
      if (param_3 == 0) {
        func_0x00f78af4();
        return;
      }
      if (*(long *)(param_3 + 0x10) != *(long *)(lVar21 + 0x38)) {
        return;
      }
      puVar2 = (undefined1 *)((long)register0x00000008 + -0x40);
      puVar24 = *(undefined1 **)((long)register0x00000008 + -0x50);
      pcVar1 = *(code **)((long)register0x00000008 + -0x48);
      goto code_r0x01535b58;
    }
    param_3 = (ulong)*(uint *)(lVar21 + 0x1ac);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
              (lVar7,*(undefined8 *)(lVar21 + 400),param_3,*(char *)(lVar21 + 0x1a8) != '\0',0);
    *(undefined4 *)(lVar7 + 0xe8) = 3;
    if (*(long *)(lVar7 + 0x10) == 0) goto code_r0x01535ee8;
    unaff_x22 = 0x3d52000;
    lVar21 = *(long *)(*(long *)(lVar7 + 0x10) + 0x40);
    unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
    param_3 = uRam0000000003d527f0;
    /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar7,uRam0000000003d527f0,0);
    uVar20 = 0;
    if (lVar21 == 0) goto code_r0x01535ee8;
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
    if ((bRam0000000003eb51f9 & 1) == 0) {
      func_0x00f78a20(0x3d27728,unaff_x21,0);
      bRam0000000003eb51f9 = 1;
    }
    plVar22 = (long *)(lVar21 + 0x98);
    lVar7 = *plVar22;
    while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,unaff_x21,0), plVar8 == (long *)0x0 ||
           (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
      lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
      bVar5 = lVar7 == lVar21;
      lVar7 = lVar21;
      if (bVar5) {
        return;
      }
    }
    auVar31 = func_0x00f78e5c(plVar8);
    uVar20 = auVar31._8_8_;
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x70);
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0x3d27728;
    *(long *)((long)register0x00000008 + -0x68) = lVar7;
    *(long **)((long)register0x00000008 + -0x60) = plVar22;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x21;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x20);
    *(undefined **)((long)register0x00000008 + -0x48) =
         &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
    puVar24 = (undefined1 *)((long)register0x00000008 + -0x50);
    if ((bRam0000000003eb51fb & 1) == 0) {
      func_0x00f78a20(0x3d27730);
      bRam0000000003eb51fb = 1;
    }
    uVar17 = 0x3d27730;
    plVar22 = (long *)(auVar31._0_8_ + 0xa0);
    lVar7 = *plVar22;
    while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,uVar20,0), plVar8 == (long *)0x0 ||
           (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
      lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
      bVar5 = lVar7 == lVar21;
      lVar7 = lVar21;
      if (bVar5) {
        return;
      }
    }
    puVar25 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
    auVar32 = func_0x00f78e5c(plVar8);
    goto code_r0x0159d188;
  }
  if (*(long *)(auVar31._8_8_ + 0x10) != *(long *)(lVar7 + 0x38)) {
    return;
  }
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) =
       *(undefined8 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  puVar24 = (undefined1 *)((long)register0x00000008 + -0x10);
  lVar21 = 0x3eb4000;
  if ((bRam0000000003eb4ec2 & 1) == 0) {
    func_0x00f78a20(0x3d527e8);
    func_0x00f78a20(0x3d527f8);
    func_0x00f78a20(0x3d52800);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ec2 = 1;
  }
  if (*(long *)(lVar7 + 0x58) != 0) {
    *(undefined1 *)(*(long *)(lVar7 + 0x58) + 0x100) = 1;
    lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar7);
    if (lVar9 != 0) {
      uVar20 = *(undefined8 *)(lVar9 + 0x70);
      uVar13 = *(undefined8 *)(lVar9 + 0x88);
      uVar17 = *(undefined8 *)(lVar9 + 0x80);
      *(undefined8 *)((long)register0x00000008 + -0x68) = *(undefined8 *)(lVar9 + 0x78);
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar20;
      *(undefined8 *)((long)register0x00000008 + -0x58) = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0x60) = uVar17;
      uVar20 = *(undefined8 *)(lVar9 + 0x90);
      *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(lVar9 + 0x98);
      *(undefined8 *)((long)register0x00000008 + -0x50) = uVar20;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                (lVar7,(undefined1 *)((long)register0x00000008 + -0x70),0);
      lVar21 = *(long *)(lVar7 + 0xd0);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar7,uRam0000000003d527e8,0);
      unaff_x22 = 0x3d52000;
      if (lVar21 != 0) {
        /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar21,unaff_x21,0);
        if (*(long *)(lVar7 + 0x10) != 0) {
          uVar20 = 0x3d27718;
          unaff_x23 = (undefined8 *)0x3d52000;
          lVar21 = *(long *)(*(long *)(lVar7 + 0x10) + 0x40);
          unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
          /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar7,uRam0000000003d527f8,0);
          unaff_x22 = uVar20;
          if (lVar21 != 0) {
            /*Atlas.Gameplay.Player.GameContextPlayerManager$$remove_OnUsableAttached*/ func_0x015a5cc8(lVar21,unaff_x21,0);
            if (*(long *)(lVar7 + 0x10) != 0) {
              unaff_x23 = (undefined8 *)0x3d52000;
              lVar9 = *(long *)(*(long *)(lVar7 + 0x10) + 0x40);
              auVar33._8_8_ = lVar9;
              auVar33._0_8_ = lVar7;
              unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
              auVar34._8_8_ = unaff_x21;
              auVar34._0_8_ = lVar9;
              uVar17 = 0;
              /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar7,uRam0000000003d52800,0);
              lVar21 = 0;
              unaff_x22 = 0x3d27718;
              if (lVar9 != 0) {
                puVar25 = (undefined *)0x1535aa8;
                puVar2 = (undefined1 *)((long)register0x00000008 + -0x70);
                goto code_r0x0159d5c4;
              }
            }
          }
        }
      }
    }
  }
  lVar9 = func_0x00f78af4();
  *(long *)((long)register0x00000008 + -0x90) = lVar21;
  *(long *)((long)register0x00000008 + -0x88) = lVar7;
  *(undefined1 **)((long)register0x00000008 + -0x80) = puVar24;
  *(code **)((long)register0x00000008 + -0x78) =
       Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterHitPlayerEndTrigger;
  param_3 = 0;
  iVar6 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
  if (iVar6 == 0) {
    return;
  }
  uVar20 = *(undefined8 *)((long)register0x00000008 + -0x90);
  *(undefined8 *)((long)register0x00000008 + -0x90) = uVar20;
  *(undefined8 *)((long)register0x00000008 + -0x88) =
       *(undefined8 *)((long)register0x00000008 + -0x88);
  *(undefined8 *)((long)register0x00000008 + -0x80) =
       *(undefined8 *)((long)register0x00000008 + -0x80);
  *(undefined8 *)((long)register0x00000008 + -0x78) =
       *(undefined8 *)((long)register0x00000008 + -0x78);
  puVar24 = (undefined1 *)((long)register0x00000008 + -0x80);
  uVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar9,0);
  if ((uVar10 & 1) == 0) {
    puVar24 = *(undefined1 **)((long)register0x00000008 + -0x80);
    pcVar1 = *(code **)((long)register0x00000008 + -0x78);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x90);
    lVar7 = *(long *)((long)register0x00000008 + -0x88);
    lVar21 = lVar9;
  }
  else {
    if (*(long *)(lVar9 + 0xb8) != 0) {
      Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsedUsables(*(long *)(lVar9 + 0xb8),0);
      *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x22;
      *(long *)((long)register0x00000008 + -0x98) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(int *)(lVar9 + 0x8c) = *(int *)(lVar9 + 0x8c) + 1;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                ((undefined1 *)((long)register0x00000008 + -0x100),lVar9,
                 *(undefined8 *)(lVar9 + 0xa8));
      *(undefined8 *)((long)register0x00000008 + -0x148) =
           *(undefined8 *)((long)register0x00000008 + -0xf8);
      *(undefined8 *)((long)register0x00000008 + -0x150) =
           *(undefined8 *)((long)register0x00000008 + -0x100);
      *(undefined8 *)((long)register0x00000008 + -0x138) =
           *(undefined8 *)((long)register0x00000008 + -0xe8);
      *(undefined8 *)((long)register0x00000008 + -0x140) =
           *(undefined8 *)((long)register0x00000008 + -0xf0);
      uVar28 = *(undefined8 *)((long)register0x00000008 + -200);
      uVar27 = *(undefined8 *)((long)register0x00000008 + -0xd0);
      uVar26 = *(undefined8 *)((long)register0x00000008 + -0xb8);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0xc0);
      *(undefined8 *)((long)register0x00000008 + -0x118) = uVar28;
      *(undefined8 *)((long)register0x00000008 + -0x120) = uVar27;
      *(undefined8 *)((long)register0x00000008 + -0x108) = uVar26;
      *(undefined8 *)((long)register0x00000008 + -0x110) = uVar13;
      uVar30 = *(undefined8 *)((long)register0x00000008 + -0xd8);
      uVar29 = *(undefined8 *)((long)register0x00000008 + -0xe0);
      *(undefined8 *)((long)register0x00000008 + -0x128) = uVar30;
      *(undefined8 *)((long)register0x00000008 + -0x130) = uVar29;
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0xb0);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0xa8);
      *(undefined8 *)((long)register0x00000008 + -0xd8) = uVar30;
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar29;
      *(undefined8 *)((long)register0x00000008 + -200) = uVar28;
      *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar27;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = uVar26;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0xf8) =
           *(undefined8 *)((long)register0x00000008 + -0xf8);
      *(undefined8 *)((long)register0x00000008 + -0x100) =
           *(undefined8 *)((long)register0x00000008 + -0x100);
      *(undefined8 *)((long)register0x00000008 + -0xe8) =
           *(undefined8 *)((long)register0x00000008 + -0xe8);
      *(undefined8 *)((long)register0x00000008 + -0xf0) =
           *(undefined8 *)((long)register0x00000008 + -0xf0);
      *(undefined8 *)((long)register0x00000008 + -0x168) = uVar28;
      *(undefined8 *)((long)register0x00000008 + -0x170) = uVar27;
      *(undefined8 *)((long)register0x00000008 + -0x158) = uVar26;
      *(undefined8 *)((long)register0x00000008 + -0x160) = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0x178) = uVar30;
      *(undefined8 *)((long)register0x00000008 + -0x180) = uVar29;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                (lVar9,(undefined1 *)((long)register0x00000008 + -0x180));
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnHumanPlayerAtLocator(lVar9,uVar20);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnAIsAtLocators(lVar9,uVar17);
      uVar20 = *(undefined8 *)(lVar9 + 0xa8);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection(lVar9);
      plVar22 = *(long **)((long)register0x00000008 + -0xa0);
      *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -200) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0xc0) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0xb8) = unaff_x25;
      *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0xa8) = unaff_x23;
      *(long **)((long)register0x00000008 + -0xa0) = plVar22;
      *(undefined8 *)((long)register0x00000008 + -0x98) =
           *(undefined8 *)((long)register0x00000008 + -0x98);
      *(undefined8 *)((long)register0x00000008 + -0x90) =
           *(undefined8 *)((long)register0x00000008 + -0x90);
      *(undefined8 *)((long)register0x00000008 + -0x88) =
           *(undefined8 *)((long)register0x00000008 + -0x88);
      *(undefined8 *)((long)register0x00000008 + -0x80) =
           *(undefined8 *)((long)register0x00000008 + -0x80);
      *(undefined8 *)((long)register0x00000008 + -0x78) =
           *(undefined8 *)((long)register0x00000008 + -0x78);
      *(undefined8 *)((long)register0x00000008 + -0xe0) = uVar20;
      if ((bRam0000000003eb48a2 & 1) == 0) {
        func_0x00f78a20(0x3d33318);
        func_0x00f78a20(0x3d33320);
        func_0x00f78a20(0x3d33328);
        func_0x00f78a20(0x3d278d8);
        func_0x00f78a20(0x3d3cd70);
        func_0x00f78a20(0x3d23990);
        func_0x00f78a20(0x3d24e08);
        func_0x00f78a20(0x3d62270);
        func_0x00f78a20(0x3d26ac8);
        bRam0000000003eb48a2 = 1;
      }
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
      *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x118) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
      *(undefined8 *)(lVar9 + 0xa8) = uVar20;
      if ((*(long *)(lVar9 + 0x40) != 0) &&
         (lVar7 = *(long *)(*(long *)(lVar9 + 0x40) + 0x30), lVar7 != 0)) {
        /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x180),lVar7,uRam0000000003d3cd70
                       );
        *(undefined8 *)((long)register0x00000008 + -0x108) =
             *(undefined8 *)((long)register0x00000008 + -0x158);
        *(undefined8 *)((long)register0x00000008 + -0x110) =
             *(undefined8 *)((long)register0x00000008 + -0x160);
        *(undefined8 *)((long)register0x00000008 + -0xf8) =
             *(undefined8 *)((long)register0x00000008 + -0x148);
        *(undefined8 *)((long)register0x00000008 + -0x100) =
             *(undefined8 *)((long)register0x00000008 + -0x150);
        *(undefined8 *)((long)register0x00000008 + -0xf0) =
             *(undefined8 *)((long)register0x00000008 + -0x140);
        *(undefined8 *)((long)register0x00000008 + -0x128) =
             *(undefined8 *)((long)register0x00000008 + -0x178);
        *(undefined8 *)((long)register0x00000008 + -0x130) =
             *(undefined8 *)((long)register0x00000008 + -0x180);
        *(undefined8 *)((long)register0x00000008 + -0x118) =
             *(undefined8 *)((long)register0x00000008 + -0x168);
        *(undefined8 *)((long)register0x00000008 + -0x120) =
             *(undefined8 *)((long)register0x00000008 + -0x170);
        goto LAB_01478328;
      }
      func_0x00f78af4();
      if (extraout_w1 == 1) {
        plVar8 = (long *)___cxa_begin_catch();
        lVar9 = *plVar8;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x130),uRam0000000003d33318);
        if (lVar9 == 0) {
          return;
        }
        func_0x00f78ac0(lVar9,0);
      }
      lVar7 = __Unwind_Resume();
      *(undefined8 *)((long)register0x00000008 + -0x200) = unaff_x24;
      *(undefined8 **)((long)register0x00000008 + -0x1f8) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x1f0) = plVar22;
      *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0x3eb4000;
      *(undefined8 *)((long)register0x00000008 + -0x1e0) = uVar20;
      *(long *)((long)register0x00000008 + -0x1d8) = lVar9;
      *(undefined1 **)((long)register0x00000008 + -0x1d0) =
           (undefined1 *)((long)register0x00000008 + -0x80);
      *(code **)((long)register0x00000008 + -0x1c8) =
           Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
      lVar21 = 0x3eb4000;
      if ((bRam0000000003eb48a3 & 1) == 0) {
        func_0x00f78a20(0x3d33318);
        func_0x00f78a20(0x3d33320);
        func_0x00f78a20(0x3d33328);
        func_0x00f78a20(0x3d3cd70);
        func_0x00f78a20(0x3d24e08);
        bRam0000000003eb48a3 = 1;
      }
      *(undefined8 *)((long)register0x00000008 + -600) = 0;
      *(undefined4 *)((long)register0x00000008 + -0x260) = 0;
      if ((*(long *)(lVar7 + 0x40) != 0) &&
         (lVar9 = *(long *)(*(long *)(lVar7 + 0x40) + 0x30), lVar9 != 0)) {
        plVar22 = (long *)0x3d24e08;
        /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090((undefined1 *)((long)register0x00000008 + -0x2b0),lVar9,uRam0000000003d3cd70
                       );
        *(undefined8 *)((long)register0x00000008 + -0x228) =
             *(undefined8 *)((long)register0x00000008 + -0x288);
        *(undefined8 *)((long)register0x00000008 + -0x230) =
             *(undefined8 *)((long)register0x00000008 + -0x290);
        *(undefined8 *)((long)register0x00000008 + -0x218) =
             *(undefined8 *)((long)register0x00000008 + -0x278);
        *(undefined8 *)((long)register0x00000008 + -0x220) =
             *(undefined8 *)((long)register0x00000008 + -0x280);
        *(undefined8 *)((long)register0x00000008 + -0x210) =
             *(undefined8 *)((long)register0x00000008 + -0x270);
        *(undefined8 *)((long)register0x00000008 + -0x248) =
             *(undefined8 *)((long)register0x00000008 + -0x2a8);
        *(undefined8 *)((long)register0x00000008 + -0x250) =
             *(undefined8 *)((long)register0x00000008 + -0x2b0);
        *(undefined8 *)((long)register0x00000008 + -0x238) =
             *(undefined8 *)((long)register0x00000008 + -0x298);
        *(undefined8 *)((long)register0x00000008 + -0x240) =
             *(undefined8 *)((long)register0x00000008 + -0x2a0);
        goto LAB_01478624;
      }
      func_0x00f78af4();
      if (extraout_w1_00 == 1) {
        plVar8 = (long *)___cxa_begin_catch();
        lVar21 = *plVar8;
        ___cxa_end_catch();
        /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x250),*unaff_x23);
        if (lVar21 == 0) goto code_r0x014786b8;
        func_0x00f78ac0(lVar21,0);
      }
      lVar9 = __Unwind_Resume();
      *(long *)((long)register0x00000008 + -0x2d0) = lVar21;
      *(long *)((long)register0x00000008 + -0x2c8) = lVar7;
      *(undefined1 **)((long)register0x00000008 + -0x2c0) =
           (undefined1 *)((long)register0x00000008 + -0x1d0);
      *(code **)((long)register0x00000008 + -0x2b8) =
           Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                ((undefined1 *)((long)register0x00000008 + -0x330),lVar9,
                 *(undefined8 *)(lVar9 + 0xa8));
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x310);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x2f8);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x300);
      extraout_x8[5] = *(undefined8 *)((long)register0x00000008 + -0x308);
      extraout_x8[4] = uVar20;
      extraout_x8[7] = uVar13;
      extraout_x8[6] = uVar17;
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x2f0);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x2d8);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x2e0);
      extraout_x8[9] = *(undefined8 *)((long)register0x00000008 + -0x2e8);
      extraout_x8[8] = uVar20;
      extraout_x8[0xb] = uVar13;
      extraout_x8[10] = uVar17;
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x330);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x318);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -800);
      extraout_x8[1] = *(undefined8 *)((long)register0x00000008 + -0x328);
      *extraout_x8 = uVar20;
      extraout_x8[3] = uVar13;
      extraout_x8[2] = uVar17;
      return;
    }
    pcVar1 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteHitPlayerCondition;
    lVar21 = func_0x00f78af4();
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x90);
    lVar7 = lVar9;
  }
code_r0x01535b58:
  puVar4 = puVar2 + -0x60;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(long *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = uVar20;
  *(long *)(puVar2 + -0x18) = lVar7;
  *(undefined1 **)(puVar2 + -0x10) = puVar24;
  *(code **)(puVar2 + -8) = pcVar1;
  puVar24 = puVar2 + -0x10;
  lVar7 = 0x3eb4000;
  if ((bRam0000000003eb4ec4 & 1) == 0) {
    func_0x00f78a20(0x3d527d0);
    func_0x00f78a20(0x3d527f0);
    func_0x00f78a20(0x3d278d8);
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb4ec4 = 1;
  }
  lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar21);
  if (lVar9 != 0) {
    unaff_x22 = 0x3d52000;
    uVar20 = *(undefined8 *)(lVar9 + 0xa0);
    uVar13 = *(undefined8 *)(lVar9 + 0xb8);
    uVar17 = *(undefined8 *)(lVar9 + 0xb0);
    *(undefined8 *)(puVar2 + -0x58) = *(undefined8 *)(lVar9 + 0xa8);
    *(undefined8 *)(puVar2 + -0x60) = uVar20;
    *(undefined8 *)(puVar2 + -0x48) = uVar13;
    *(undefined8 *)(puVar2 + -0x50) = uVar17;
    uVar20 = *(undefined8 *)(lVar9 + 0xc0);
    *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(lVar9 + 200);
    *(undefined8 *)(puVar2 + -0x40) = uVar20;
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar21,puVar2 + -0x60,0);
    *(undefined4 *)(lVar21 + 0xe8) = 0;
    lVar7 = *(long *)(lVar21 + 0xd8);
    unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
    param_3 = uRam0000000003d527d0;
    /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar21,uRam0000000003d527d0,0);
    if (lVar7 != 0) {
      param_3 = 0;
      /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar7,unaff_x21);
      if (*(long *)(lVar21 + 0x10) != 0) {
        unaff_x22 = 0x3d52000;
        plVar22 = *(long **)(*(long *)(lVar21 + 0x10) + 0x40);
        unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
        auVar35._8_8_ = unaff_x21;
        auVar35._0_8_ = plVar22;
        uVar17 = 0;
        param_3 = uRam0000000003d527f0;
        /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar21,uRam0000000003d527f0,0);
        lVar7 = 0;
        if (plVar22 != (long *)0x0) {
          puVar25 = (undefined *)0x1535c74;
          goto code_r0x0159d844;
        }
      }
    }
  }
  auVar31 = func_0x00f78af4();
  lVar9 = auVar31._0_8_;
  puVar3 = puVar2 + -0xb0;
  *(long *)(puVar2 + -0x80) = lVar7;
  *(long *)(puVar2 + -0x78) = lVar21;
  *(undefined1 **)(puVar2 + -0x70) = puVar24;
  *(code **)(puVar2 + -0x68) = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnPickup;
  if (auVar31._8_8_ != 0) {
    if (*(long *)(auVar31._8_8_ + 0x10) != *(long *)(lVar9 + 0x38)) {
      return;
    }
    lVar11 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar9);
    lVar21 = lVar9;
    if (lVar11 != 0) {
      uVar20 = *(undefined8 *)(lVar11 + 0x40);
      uVar13 = *(undefined8 *)(lVar11 + 0x58);
      uVar17 = *(undefined8 *)(lVar11 + 0x50);
      *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(lVar11 + 0x48);
      *(undefined8 *)(puVar2 + -0xb0) = uVar20;
      *(undefined8 *)(puVar2 + -0x98) = uVar13;
      *(undefined8 *)(puVar2 + -0xa0) = uVar17;
      uVar20 = *(undefined8 *)(lVar11 + 0x60);
      *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(lVar11 + 0x68);
      *(undefined8 *)(puVar2 + -0x90) = uVar20;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar9,puVar2 + -0xb0,0);
      if (*(int *)(lVar9 + 0xe8) != 1) {
        return;
      }
      Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompletePickupCondition(lVar9);
      return;
    }
  }
  unaff_x19 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)(puVar2 + -0xe0);
  *(undefined8 *)(puVar2 + -0xe0) = unaff_x22;
  *(long *)(puVar2 + -0xd8) = unaff_x21;
  *(long *)(puVar2 + -0xd0) = lVar7;
  *(long *)(puVar2 + -200) = lVar21;
  *(undefined1 **)(puVar2 + -0xc0) = puVar2 + -0x70;
  *(code **)(puVar2 + -0xb8) = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartUseUsableSection;
  unaff_x29 = puVar2 + -0xc0;
  unaff_x20 = 0x3eb4000;
  if ((bRam0000000003eb4ec1 & 1) == 0) {
    func_0x00f78a20(0x3d52800);
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb4ec1 = 1;
  }
  *(undefined4 *)(unaff_x19 + 0xe8) = 2;
  lVar7 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(unaff_x19);
  if (lVar7 == 0) {
LAB_01535de4:
    unaff_x30 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnUse;
    auVar31 = func_0x00f78af4();
    goto code_r0x01535de8;
  }
  param_3 = (ulong)*(uint *)(lVar7 + 0x14c);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
            (unaff_x19,*(undefined8 *)(lVar7 + 0x130),param_3,*(char *)(lVar7 + 0x148) != '\0',0);
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_01535de4;
  unaff_x22 = 0x3d52000;
  lVar7 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x40);
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar32._8_8_ = unaff_x21;
  auVar32._0_8_ = lVar7;
  param_3 = uRam0000000003d52800;
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,unaff_x19,uRam0000000003d52800,0);
  unaff_x20 = 0;
  if (lVar7 == 0) goto LAB_01535de4;
  puVar24 = *(undefined1 **)(puVar2 + -0xc0);
  puVar25 = *(undefined **)(puVar2 + -0xb8);
  plVar22 = *(long **)(puVar2 + -0xd0);
  uVar20 = *(undefined8 *)(puVar2 + -200);
  uVar17 = *(undefined8 *)(puVar2 + -0xe0);
  lVar7 = *(long *)(puVar2 + -0xd8);
code_r0x0159d188:
  *(undefined8 *)(puVar3 + -0x30) = uVar17;
  *(long *)(puVar3 + -0x28) = lVar7;
  *(long **)(puVar3 + -0x20) = plVar22;
  *(undefined8 *)(puVar3 + -0x18) = uVar20;
  *(undefined1 **)(puVar3 + -0x10) = puVar24;
  *(undefined **)(puVar3 + -8) = puVar25;
  if ((bRam0000000003eb51f3 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f3 = 1;
  }
  plVar22 = (long *)(auVar32._0_8_ + 0x80);
  lVar7 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,auVar32._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  auVar31 = func_0x00f78e5c(plVar8);
  *(undefined8 *)(puVar3 + -0x60) = 0x3d27718;
  *(long *)(puVar3 + -0x58) = lVar7;
  *(long **)(puVar3 + -0x50) = plVar22;
  *(long *)(puVar3 + -0x48) = auVar32._8_8_;
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x38) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
  if ((bRam0000000003eb51fd & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fd = 1;
  }
  plVar22 = (long *)(auVar31._0_8_ + 0xa8);
  lVar7 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,auVar31._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar8);
  *(undefined8 *)(puVar3 + -0x90) = 0x3d27738;
  *(long *)(puVar3 + -0x88) = lVar7;
  *(long **)(puVar3 + -0x80) = plVar22;
  *(long *)(puVar3 + -0x78) = auVar31._8_8_;
  *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
  *(undefined **)(puVar3 + -0x68) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
  if ((bRam0000000003eb51f5 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f5 = 1;
  }
  plVar22 = (long *)(auVar32._0_8_ + 0x88);
  lVar7 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar7,auVar32._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  auVar33 = func_0x00f78e5c(plVar8);
  puVar2 = puVar3 + -0xe0;
  *(undefined8 *)(puVar3 + -0xe0) = unaff_x26;
  *(undefined8 *)(puVar3 + -0xd8) = unaff_x25;
  *(undefined8 *)(puVar3 + -0xd0) = unaff_x24;
  *(undefined8 **)(puVar3 + -200) = unaff_x23;
  *(undefined8 *)(puVar3 + -0xc0) = 0x3d27700;
  *(long *)(puVar3 + -0xb8) = lVar7;
  *(long **)(puVar3 + -0xb0) = plVar22;
  *(long *)(puVar3 + -0xa8) = auVar32._8_8_;
  *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x70;
  *(code **)(puVar3 + -0x98) = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
  puVar24 = puVar3 + -0xa0;
  unaff_x23 = (undefined8 *)0x3d27718;
  unaff_x24 = 0x3d570f0;
  if ((bRam0000000003eb51b7 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b7 = 1;
  }
  unaff_x21 = *(long *)(auVar33._0_8_ + 0x40);
  uVar20 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar34._8_8_ = uVar20;
  auVar34._0_8_ = unaff_x21;
  uVar17 = 0;
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(uVar20,auVar33._0_8_,uRam0000000003d570f0,0);
  if (unaff_x21 == 0) {
    puVar25 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
    auVar34 = func_0x00f78af4();
  }
  else {
    unaff_x24 = 0x3d27000;
    unaff_x25 = 0x3d52000;
    puVar25 = (undefined *)0x159d470;
    puVar2 = puVar3 + -0xe0;
  }
code_r0x0159d5c4:
  *(undefined8 *)(puVar2 + -0x30) = uVar20;
  *(long *)(puVar2 + -0x28) = unaff_x21;
  *(long *)(puVar2 + -0x20) = auVar33._8_8_;
  *(long *)(puVar2 + -0x18) = auVar33._0_8_;
  *(undefined1 **)(puVar2 + -0x10) = puVar24;
  *(undefined **)(puVar2 + -8) = puVar25;
  if ((bRam0000000003eb51f4 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f4 = 1;
  }
  plVar22 = (long *)(auVar34._0_8_ + 0x80);
  lVar7 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar34._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  auVar31 = func_0x00f78e5c(plVar8);
  *(undefined8 *)(puVar2 + -0x60) = 0x3d27718;
  *(long *)(puVar2 + -0x58) = lVar7;
  *(long **)(puVar2 + -0x50) = plVar22;
  *(long *)(puVar2 + -0x48) = auVar34._8_8_;
  *(undefined1 **)(puVar2 + -0x40) = puVar2 + -0x10;
  *(undefined **)(puVar2 + -0x38) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar22 = (long *)(auVar31._0_8_ + 0x88);
  lVar7 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar31._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar8);
  *(undefined8 *)(puVar2 + -0x90) = 0x3d27700;
  *(long *)(puVar2 + -0x88) = lVar7;
  *(long **)(puVar2 + -0x80) = plVar22;
  *(long *)(puVar2 + -0x78) = auVar31._8_8_;
  *(undefined1 **)(puVar2 + -0x70) = puVar2 + -0x40;
  *(undefined **)(puVar2 + -0x68) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar22 = (long *)(auVar32._0_8_ + 0xa8);
  lVar7 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar32._8_8_,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar21 = func_0x00ff0f44(plVar22,plVar8,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  auVar31 = func_0x00f78e5c(plVar8);
  lVar21 = auVar31._8_8_;
  puVar4 = puVar2 + -0xc0;
  *(undefined8 *)(puVar2 + -0xc0) = 0x3d27738;
  *(long *)(puVar2 + -0xb8) = lVar7;
  *(long **)(puVar2 + -0xb0) = plVar22;
  *(long *)(puVar2 + -0xa8) = auVar32._8_8_;
  *(undefined1 **)(puVar2 + -0xa0) = puVar2 + -0x70;
  *(undefined **)(puVar2 + -0x98) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  puVar24 = puVar2 + -0xa0;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  unaff_x22 = 0x3d27730;
  plVar22 = (long *)(auVar31._0_8_ + 0xa0);
  unaff_x21 = *plVar22;
  while ((plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x21,lVar21,0), plVar8 == (long *)0x0 ||
         (*plVar8 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar7 = func_0x00ff0f44(plVar22,plVar8,unaff_x21);
    bVar5 = unaff_x21 == lVar7;
    unaff_x21 = lVar7;
    if (bVar5) {
      return;
    }
  }
  puVar25 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  auVar35 = func_0x00f78e5c(plVar8);
code_r0x0159d844:
  *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
  *(long *)(puVar4 + -0x28) = unaff_x21;
  *(long **)(puVar4 + -0x20) = plVar22;
  *(long *)(puVar4 + -0x18) = lVar21;
  *(undefined1 **)(puVar4 + -0x10) = puVar24;
  *(undefined **)(puVar4 + -8) = puVar25;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar22 = (long *)0x3d27728;
  plVar8 = (long *)(auVar35._0_8_ + 0x98);
  lVar7 = *plVar8;
  while( true ) {
    puVar15 = (undefined8 *)0x0;
    plVar12 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,auVar35._8_8_);
    if ((plVar12 != (long *)0x0) && (*plVar12 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar21 = func_0x00ff0f44(plVar8,plVar12,lVar7);
    bVar5 = lVar7 == lVar21;
    lVar7 = lVar21;
    if (bVar5) {
      return;
    }
  }
  lVar21 = func_0x00f78e5c(plVar12);
  *(undefined8 *)(puVar4 + -0x80) = unaff_x26;
  *(undefined8 *)(puVar4 + -0x78) = unaff_x25;
  *(undefined8 *)(puVar4 + -0x70) = unaff_x24;
  *(undefined8 **)(puVar4 + -0x68) = unaff_x23;
  *(undefined8 *)(puVar4 + -0x60) = 0x3d27728;
  *(long *)(puVar4 + -0x58) = lVar7;
  *(long **)(puVar4 + -0x50) = plVar8;
  *(long *)(puVar4 + -0x48) = auVar35._8_8_;
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x38) = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar7 = 0x3eb5000;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar9 = *(long *)(lVar21 + 0x28);
  if (lVar9 == 0) {
code_r0x0159db7c:
    func_0x00f78af4();
    uVar20 = unaff_x24;
code_r0x0159db80:
    uVar13 = func_0x00f78b24();
    func_0x00f78ac0(uVar13,0);
  }
  else {
    plVar22 = (long *)(lVar21 + 0x10);
    uVar19 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar19) {
      unaff_x23 = (undefined8 *)0x0;
      unaff_x24 = 0x3d43378;
      do {
        uVar23 = (uint)unaff_x23;
        uVar20 = unaff_x24;
        if (uVar19 <= uVar23) goto code_r0x0159db80;
        if (*plVar22 == 0) goto code_r0x0159db7c;
        lVar7 = *(long *)(lVar9 + (long)(int)uVar23 * 8 + 0x20);
        puVar15 = puRam0000000003d43378;
        /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar22,lVar7);
        if (lVar7 == 0) goto code_r0x0159db7c;
        /*Atlas.Gameplay.Player.GameContextPlayer$$DeInit*/ func_0x015a5404(lVar7);
        unaff_x23 = (undefined8 *)(ulong)(uVar23 + 1);
        uVar19 = *(uint *)(lVar9 + 0x18);
      } while ((int)(uVar23 + 1) < (int)uVar19);
    }
    if (((*(long *)(lVar21 + 0x20) == 0) ||
        (lVar11 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar11 == 0)) ||
       (unaff_x23 = *(undefined8 **)(lVar11 + 0x10), unaff_x23 == (undefined8 *)0x0))
    goto code_r0x0159db7c;
    uVar20 = 0x3d1b4e8;
    unaff_x24 = 0x3d1b4e8;
    lVar7 = unaff_x23[3];
    lVar9 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
    uVar17 = uRam0000000003d2a1d8;
    /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar9,lVar21,uRam0000000003d57238,uRam0000000003d2a1d8);
    puVar15 = (undefined8 *)0x0;
    plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,lVar9);
    if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
      unaff_x23[3] = plVar8;
      if ((*(long *)(lVar21 + 0x20) == 0) ||
         ((lVar11 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar11 == 0 ||
          (unaff_x23 = *(undefined8 **)(lVar11 + 0x10), unaff_x23 == (undefined8 *)0x0))))
      goto code_r0x0159db7c;
      uVar20 = 0x3d1b3b0;
      unaff_x24 = 0x3d1b3b0;
      lVar7 = unaff_x23[0xe];
      lVar9 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
      uVar17 = uRam0000000003d29f28;
      /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar9,lVar21,uRam0000000003d57240,uRam0000000003d29f28);
      puVar15 = (undefined8 *)0x0;
      plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,lVar9);
      if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
        unaff_x23[0xe] = plVar8;
        if (((*(long *)(lVar21 + 0x20) == 0) ||
            (lVar11 = *(long *)(*(long *)(lVar21 + 0x20) + 0x20), lVar11 == 0)) ||
           (unaff_x23 = *(undefined8 **)(lVar11 + 0x10), unaff_x23 == (undefined8 *)0x0))
        goto code_r0x0159db7c;
        uVar20 = 0x3d1b4e0;
        lVar7 = unaff_x23[5];
        lVar9 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
        uVar17 = uRam0000000003d2a1c8;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar9,lVar21,uRam0000000003d57230,uRam0000000003d2a1c8);
        puVar15 = (undefined8 *)0x0;
        plVar8 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar7,lVar9);
        if ((plVar8 == (long *)0x0) || (*plVar8 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
          unaff_x23[5] = plVar8;
          *(undefined1 *)(lVar21 + 0x50) = 0;
          *(undefined8 *)(lVar21 + 0x18) = 0;
          *plVar22 = 0;
          *(undefined8 *)(lVar21 + 0x28) = 0;
          *(undefined8 *)(lVar21 + 0x20) = 0;
          return;
        }
      }
    }
  }
  auVar31 = func_0x00f78e5c();
  puVar14 = auVar31._8_8_;
  plVar8 = auVar31._0_8_;
  *(undefined8 *)(puVar4 + -0xc0) = uVar20;
  *(undefined8 **)(puVar4 + -0xb8) = unaff_x23;
  *(long **)(puVar4 + -0xb0) = plVar22;
  *(long *)(puVar4 + -0xa8) = lVar9;
  *(long *)(puVar4 + -0xa0) = lVar7;
  *(long *)(puVar4 + -0x98) = lVar21;
  *(undefined1 **)(puVar4 + -0x90) = puVar4 + -0x40;
  *(code **)(puVar4 + -0x88) = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar16 = puVar15;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar8[3] != 0) &&
      (puVar16 = puVar15, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar8[3],puVar14,puVar15,uVar17,0),
      puVar15 != (undefined8 *)0x0)) && (lVar7 = puVar15[2], lVar7 != 0)) {
    uVar20 = *(undefined8 *)(lVar7 + 0x48);
    uVar26 = *(undefined8 *)(lVar7 + 0x60);
    uVar13 = *(undefined8 *)(lVar7 + 0x58);
    *(undefined8 *)(puVar4 + -0xd8) = *(undefined8 *)(lVar7 + 0x50);
    *(undefined8 *)(puVar4 + -0xe0) = uVar20;
    *(undefined8 *)(puVar4 + -200) = uVar26;
    *(undefined8 *)(puVar4 + -0xd0) = uVar13;
    iVar6 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar4 + -0xe0,0);
    if ((iVar6 == 0) || (puVar15 == puVar14)) {
      return;
    }
    iVar6 = (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
    if ((plVar8[0x18] != 0) && (lVar7 = *(long *)(plVar8[0x18] + 0x20), lVar7 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar4 + -0xf8,lVar7,0);
      *(int *)(puVar15 + 0xf) = *(int *)(puVar15 + 0xf) + iVar6;
      uVar20 = *(undefined8 *)(puVar4 + -0xf8);
      puVar15[0x11] = *(undefined8 *)(puVar4 + -0xf0);
      puVar15[0x10] = uVar20;
      puVar15[0x12] = *(undefined8 *)(puVar4 + -0xe8);
      if (puVar15[2] != 0) {
        if (*(int *)(puVar15[2] + 0x50) == 0) {
          uVar20 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
          puVar16 = (undefined8 *)0x0;
          iVar6 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar20,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar6 != 0) {
            if (plVar8[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar8[3],*(undefined4 *)(puVar15 + 0xf),0);
          }
        }
        if (plVar8[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar8[0x46],puVar14,puVar15,uVar17,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar36 = func_0x00f78af4();
  lVar7 = auVar36._0_8_;
  iVar6 = *(int *)(lVar7 + 0x78);
  uVar13 = puVar16[1];
  uVar17 = *puVar16;
  *(undefined8 *)(puVar4 + -0x118) = uVar13;
  *(undefined8 *)(puVar4 + -0x120) = uVar17;
  uVar20 = puVar16[2];
  *(undefined8 *)(puVar4 + -0x110) = uVar20;
  *(int *)(lVar7 + 0x78) = iVar6 + auVar36._8_4_;
  *(undefined8 *)(lVar7 + 0x88) = uVar13;
  *(undefined8 *)(lVar7 + 0x80) = uVar17;
  *(undefined8 *)(lVar7 + 0x90) = uVar20;
  return;
LAB_01478328:
  do {
    uVar10 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0x130),uRam0000000003d33320)
    ;
    if ((uVar10 & 1) == 0) {
LAB_01478494:
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x130),uRam0000000003d33318);
      return;
    }
    lVar7 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___ctor(lVar7,0);
    if (lVar7 == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(long *)(lVar7 + 0x50) = lVar9;
    uVar26 = *(undefined8 *)((long)register0x00000008 + -0x108);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x110);
    uVar17 = *(undefined8 *)((long)register0x00000008 + -0xf8);
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x100);
    uVar28 = *(undefined8 *)((long)register0x00000008 + -0x118);
    uVar27 = *(undefined8 *)((long)register0x00000008 + -0x120);
    *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)((long)register0x00000008 + -0xf0);
    *(undefined8 *)(lVar7 + 0x28) = uVar26;
    *(undefined8 *)(lVar7 + 0x20) = uVar13;
    *(undefined8 *)(lVar7 + 0x38) = uVar17;
    *(undefined8 *)(lVar7 + 0x30) = uVar20;
    *(undefined8 *)(lVar7 + 0x18) = uVar28;
    *(undefined8 *)(lVar7 + 0x10) = uVar27;
    *(undefined8 *)((long)register0x00000008 + -0x180) = *(undefined8 *)(lVar7 + 0x18);
    uVar20 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x180))
    ;
    uVar10 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -0xe0),uVar20,0);
  } while ((uVar10 & 1) == 0);
  if (*(long *)(lVar9 + 0x60) == 0) {
    func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x14784e0);
    (*pcVar1)();
  }
  puVar15 = (undefined8 *)(lVar7 + 0x10);
  puVar16 = (undefined8 *)(lVar7 + 0x48);
  uVar10 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar9 + 0x60),*puVar15,puVar16,0);
  if ((uVar10 & 1) == 0) goto LAB_01478494;
  uVar20 = *(undefined8 *)(lVar9 + 0xa0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar10 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar20,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)(lVar9 + 0xa0) == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(undefined8 *)((long)register0x00000008 + -0x138) =
         *(undefined8 *)(*(long *)(lVar9 + 0xa0) + 0x18);
    *(undefined8 *)((long)register0x00000008 + -0x180) = *puVar15;
    uVar20 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x180))
    ;
    uVar10 = /*Atlas.StringID$$Equals*/ func_0x015057f8((undefined1 *)((long)register0x00000008 + -0x138),uVar20,0);
    if ((uVar10 & 1) != 0) {
      uVar20 = *(undefined8 *)(lVar9 + 0x38);
      uVar17 = *puVar15;
      uVar26 = *(undefined8 *)(lVar7 + 0x28);
      uVar13 = *(undefined8 *)(lVar7 + 0x20);
      *(undefined8 *)((long)register0x00000008 + -0x1b8) = *(undefined8 *)(lVar7 + 0x18);
      *(undefined8 *)((long)register0x00000008 + -0x1c0) = uVar17;
      *(undefined8 *)((long)register0x00000008 + -0x1a8) = uVar26;
      *(undefined8 *)((long)register0x00000008 + -0x1b0) = uVar13;
      uVar17 = *(undefined8 *)(lVar7 + 0x30);
      *(undefined8 *)((long)register0x00000008 + -0x198) = *(undefined8 *)(lVar7 + 0x38);
      *(undefined8 *)((long)register0x00000008 + -0x1a0) = uVar17;
      *(undefined8 *)((long)register0x00000008 + -400) = *(undefined8 *)(lVar7 + 0x40);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions
                (lVar9,uVar20,(undefined1 *)((long)register0x00000008 + -0x1c0));
      goto LAB_01478328;
    }
  }
  uVar17 = *puVar16;
  uVar20 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar20,lVar7,uRam0000000003d62270,0);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AddBaseListener(lVar9,uVar17,uVar20,*puVar16);
  goto LAB_01478328;
LAB_01478624:
  do {
    uVar10 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8((undefined1 *)((long)register0x00000008 + -0x250),uRam0000000003d33320)
    ;
    if ((uVar10 & 1) == 0) {
      uVar18 = 0x7b;
code_r0x0147869c:
      *(undefined4 *)((long)register0x00000008 + -0x268) = uVar18;
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4((undefined1 *)((long)register0x00000008 + -0x250),uRam0000000003d33318);
      if (*(int *)((long)register0x00000008 + -0x268) != 0x86) {
code_r0x014786b8:
        lVar21 = *plVar22;
        if (((*(ushort *)(lVar21 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar21 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar21 = *plVar22;
        }
        *(undefined8 *)(lVar7 + 0xa8) = **(undefined8 **)(lVar21 + 0xb8);
      }
      return;
    }
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x240);
    *(undefined8 *)((long)register0x00000008 + -0x2b0) =
         *(undefined8 *)((long)register0x00000008 + -0x238);
    uVar17 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,(undefined1 *)((long)register0x00000008 + -0x2b0))
    ;
    uVar10 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar7 + 0xa8,uVar17,0);
  } while ((uVar10 & 1) == 0);
  if (*(long *)(lVar7 + 0x60) == 0) {
    func_0x00f78af4();
  }
  else {
    uVar10 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar7 + 0x60),uVar20,
                             (undefined1 *)((long)register0x00000008 + -600),0);
    if ((uVar10 & 1) == 0) {
      uVar18 = 0x86;
      goto code_r0x0147869c;
    }
    if (*(long *)((long)register0x00000008 + -600) != 0) {
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                (lVar7,*(undefined8 *)(*(long *)((long)register0x00000008 + -600) + 0x18));
      goto LAB_01478624;
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1478708);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1535e18 | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.StartHitPlayerSection
// ============================================================

/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535aa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01535c74) */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x01535aa8) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartHitPlayerSection
               (long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined8 *extraout_x8;
  long lVar20;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar21;
  long *plVar22;
  long unaff_x21;
  long lVar23;
  undefined8 unaff_x22;
  uint uVar24;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar25;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  
code_r0x01535e18:
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  uVar21 = 0x3eb4000;
  if ((bRam0000000003eb4ec3 & 1) == 0) {
    func_0x00f78a20(0x3d527f0);
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb4ec3 = 1;
  }
  lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(param_1);
  if (lVar9 == 0) {
LAB_01535ee8:
    lVar9 = func_0x00f78af4();
    *(undefined1 **)((long)register0x00000008 + -0x40) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x38) =
         &Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnHit;
    if (param_3 == 0) {
      func_0x00f78af4();
      return;
    }
    if (*(long *)(param_3 + 0x10) != *(long *)(lVar9 + 0x38)) {
      return;
    }
    puVar25 = *(undefined1 **)((long)register0x00000008 + -0x40);
    pcVar1 = *(code **)((long)register0x00000008 + -0x38);
    puVar2 = (undefined1 *)((long)register0x00000008 + -0x30);
    while( true ) {
      puVar5 = puVar2 + -0x60;
      *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
      *(long *)(puVar2 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x20) = uVar21;
      *(long *)(puVar2 + -0x18) = param_1;
      *(undefined1 **)(puVar2 + -0x10) = puVar25;
      *(code **)(puVar2 + -8) = pcVar1;
      puVar25 = puVar2 + -0x10;
      lVar11 = 0x3eb4000;
      if ((bRam0000000003eb4ec4 & 1) == 0) {
        func_0x00f78a20(0x3d527d0);
        func_0x00f78a20(0x3d527f0);
        func_0x00f78a20(0x3d278d8);
        func_0x00f78a20(0x3d27728);
        bRam0000000003eb4ec4 = 1;
      }
      lVar23 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar9);
      if (lVar23 != 0) {
        unaff_x22 = 0x3d52000;
        uVar21 = *(undefined8 *)(lVar23 + 0xa0);
        uVar14 = *(undefined8 *)(lVar23 + 0xb8);
        uVar12 = *(undefined8 *)(lVar23 + 0xb0);
        *(undefined8 *)(puVar2 + -0x58) = *(undefined8 *)(lVar23 + 0xa8);
        *(undefined8 *)(puVar2 + -0x60) = uVar21;
        *(undefined8 *)(puVar2 + -0x48) = uVar14;
        *(undefined8 *)(puVar2 + -0x50) = uVar12;
        uVar21 = *(undefined8 *)(lVar23 + 0xc0);
        *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(lVar23 + 200);
        *(undefined8 *)(puVar2 + -0x40) = uVar21;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar9,puVar2 + -0x60,0);
        *(undefined4 *)(lVar9 + 0xe8) = 0;
        lVar11 = *(long *)(lVar9 + 0xd8);
        unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
        param_3 = uRam0000000003d527d0;
        /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar9,uRam0000000003d527d0,0);
        if (lVar11 != 0) {
          param_3 = 0;
          /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar11,unaff_x21);
          if (*(long *)(lVar9 + 0x10) != 0) {
            unaff_x22 = 0x3d52000;
            plVar22 = *(long **)(*(long *)(lVar9 + 0x10) + 0x40);
            unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
            auVar32._8_8_ = unaff_x21;
            auVar32._0_8_ = plVar22;
            uVar21 = 0;
            param_3 = uRam0000000003d527f0;
            /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,lVar9,uRam0000000003d527f0,0);
            lVar11 = 0;
            if (plVar22 != (long *)0x0) {
              puVar26 = (undefined *)0x1535c74;
              goto code_r0x0159d844;
            }
          }
        }
      }
      auVar32 = func_0x00f78af4();
      lVar23 = auVar32._0_8_;
      puVar3 = puVar2 + -0xb0;
      *(long *)(puVar2 + -0x80) = lVar11;
      *(long *)(puVar2 + -0x78) = lVar9;
      *(undefined1 **)(puVar2 + -0x70) = puVar25;
      *(code **)(puVar2 + -0x68) = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnPickup;
      if (auVar32._8_8_ != 0) {
        if (*(long *)(auVar32._8_8_ + 0x10) != *(long *)(lVar23 + 0x38)) {
          return;
        }
        lVar20 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar23);
        lVar9 = lVar23;
        if (lVar20 != 0) {
          uVar21 = *(undefined8 *)(lVar20 + 0x40);
          uVar14 = *(undefined8 *)(lVar20 + 0x58);
          uVar12 = *(undefined8 *)(lVar20 + 0x50);
          *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(lVar20 + 0x48);
          *(undefined8 *)(puVar2 + -0xb0) = uVar21;
          *(undefined8 *)(puVar2 + -0x98) = uVar14;
          *(undefined8 *)(puVar2 + -0xa0) = uVar12;
          uVar21 = *(undefined8 *)(lVar20 + 0x60);
          *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(lVar20 + 0x68);
          *(undefined8 *)(puVar2 + -0x90) = uVar21;
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar23,puVar2 + -0xb0,0);
          if (*(int *)(lVar23 + 0xe8) != 1) {
            return;
          }
          Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompletePickupCondition(lVar23);
          return;
        }
      }
      unaff_x19 = func_0x00f78af4();
      *(undefined8 *)(puVar2 + -0xe0) = unaff_x22;
      *(long *)(puVar2 + -0xd8) = unaff_x21;
      *(long *)(puVar2 + -0xd0) = lVar11;
      *(long *)(puVar2 + -200) = lVar9;
      *(undefined1 **)(puVar2 + -0xc0) = puVar2 + -0x70;
      *(code **)(puVar2 + -0xb8) = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartUseUsableSection;
      unaff_x20 = 0x3eb4000;
      if ((bRam0000000003eb4ec1 & 1) == 0) {
        func_0x00f78a20(0x3d52800);
        func_0x00f78a20(0x3d27718);
        bRam0000000003eb4ec1 = 1;
      }
      *(undefined4 *)(unaff_x19 + 0xe8) = 2;
      lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(unaff_x19);
      if (lVar9 != 0) {
        param_3 = (ulong)*(uint *)(lVar9 + 0x14c);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                  (unaff_x19,*(undefined8 *)(lVar9 + 0x130),param_3,*(char *)(lVar9 + 0x148) != '\0'
                   ,0);
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          unaff_x22 = 0x3d52000;
          lVar9 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x40);
          unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
          auVar33._8_8_ = unaff_x21;
          auVar33._0_8_ = lVar9;
          param_3 = uRam0000000003d52800;
          /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,unaff_x19,uRam0000000003d52800,0);
          unaff_x20 = 0;
          if (lVar9 != 0) {
            puVar25 = *(undefined1 **)(puVar2 + -0xc0);
            puVar26 = *(undefined **)(puVar2 + -0xb8);
            plVar22 = *(long **)(puVar2 + -0xd0);
            uVar12 = *(undefined8 *)(puVar2 + -200);
            uVar21 = *(undefined8 *)(puVar2 + -0xe0);
            lVar9 = *(long *)(puVar2 + -0xd8);
            goto code_r0x0159d188;
          }
        }
      }
      auVar32 = func_0x00f78af4();
      lVar9 = auVar32._0_8_;
      register0x00000008 = (BADSPACEBASE *)(puVar2 + -0xf0);
      unaff_x29 = puVar2 + -0xf0;
      *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0xc0;
      *(code **)(puVar2 + -0xe8) = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnUse;
      if (auVar32._8_8_ == 0) break;
      if (*(long *)(auVar32._8_8_ + 0x10) != *(long *)(lVar9 + 0x38)) {
        return;
      }
      puVar4 = puVar2 + -0x150;
      *(undefined8 *)(puVar2 + -0x120) = unaff_x24;
      *(undefined8 **)(puVar2 + -0x118) = unaff_x23;
      *(undefined8 *)(puVar2 + -0x110) = unaff_x22;
      *(long *)(puVar2 + -0x108) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x100) = unaff_x20;
      *(long *)(puVar2 + -0xf8) = unaff_x19;
      *(undefined8 *)(puVar2 + -0xf0) = *(undefined8 *)(puVar2 + -0xf0);
      *(undefined8 *)(puVar2 + -0xe8) = *(undefined8 *)(puVar2 + -0xe8);
      puVar25 = puVar2 + -0xf0;
      lVar11 = 0x3eb4000;
      if ((bRam0000000003eb4ec2 & 1) == 0) {
        func_0x00f78a20(0x3d527e8);
        func_0x00f78a20(0x3d527f8);
        func_0x00f78a20(0x3d52800);
        func_0x00f78a20(0x3d278d8);
        func_0x00f78a20(0x3d27718);
        bRam0000000003eb4ec2 = 1;
      }
      if (*(long *)(lVar9 + 0x58) != 0) {
        *(undefined1 *)(*(long *)(lVar9 + 0x58) + 0x100) = 1;
        lVar23 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar9);
        if (lVar23 != 0) {
          uVar21 = *(undefined8 *)(lVar23 + 0x70);
          uVar14 = *(undefined8 *)(lVar23 + 0x88);
          uVar12 = *(undefined8 *)(lVar23 + 0x80);
          *(undefined8 *)(puVar2 + -0x148) = *(undefined8 *)(lVar23 + 0x78);
          *(undefined8 *)(puVar2 + -0x150) = uVar21;
          *(undefined8 *)(puVar2 + -0x138) = uVar14;
          *(undefined8 *)(puVar2 + -0x140) = uVar12;
          uVar21 = *(undefined8 *)(lVar23 + 0x90);
          *(undefined8 *)(puVar2 + -0x128) = *(undefined8 *)(lVar23 + 0x98);
          *(undefined8 *)(puVar2 + -0x130) = uVar21;
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar9,puVar2 + -0x150,0);
          lVar11 = *(long *)(lVar9 + 0xd0);
          unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
          /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar9,uRam0000000003d527e8,0);
          unaff_x22 = 0x3d52000;
          if (lVar11 != 0) {
            /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar11,unaff_x21,0);
            if (*(long *)(lVar9 + 0x10) != 0) {
              uVar12 = 0x3d27718;
              unaff_x23 = (undefined8 *)0x3d52000;
              lVar11 = *(long *)(*(long *)(lVar9 + 0x10) + 0x40);
              unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
              /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar9,uRam0000000003d527f8,0);
              unaff_x22 = 0x3d27718;
              if (lVar11 != 0) {
                /*Atlas.Gameplay.Player.GameContextPlayerManager$$remove_OnUsableAttached*/ func_0x015a5cc8(lVar11,unaff_x21,0);
                if (*(long *)(lVar9 + 0x10) != 0) {
                  unaff_x23 = (undefined8 *)0x3d52000;
                  lVar23 = *(long *)(*(long *)(lVar9 + 0x10) + 0x40);
                  auVar34._8_8_ = lVar23;
                  auVar34._0_8_ = lVar9;
                  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
                  auVar35._8_8_ = unaff_x21;
                  auVar35._0_8_ = lVar23;
                  uVar21 = 0;
                  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar9,uRam0000000003d52800,0);
                  lVar11 = 0;
                  unaff_x22 = uVar12;
                  if (lVar23 != 0) {
                    puVar26 = (undefined *)0x1535aa8;
                    goto code_r0x0159d5c4;
                  }
                }
              }
            }
          }
        }
      }
      lVar23 = func_0x00f78af4();
      *(long *)(puVar2 + -0x170) = lVar11;
      *(long *)(puVar2 + -0x168) = lVar9;
      *(undefined1 **)(puVar2 + -0x160) = puVar25;
      *(code **)(puVar2 + -0x158) =
           Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterHitPlayerEndTrigger;
      param_3 = 0;
      iVar7 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
      if (iVar7 == 0) {
        return;
      }
      uVar21 = *(undefined8 *)(puVar2 + -0x170);
      *(undefined8 *)(puVar2 + -0x170) = uVar21;
      *(undefined8 *)(puVar2 + -0x168) = *(undefined8 *)(puVar2 + -0x168);
      *(undefined8 *)(puVar2 + -0x160) = *(undefined8 *)(puVar2 + -0x160);
      *(undefined8 *)(puVar2 + -0x158) = *(undefined8 *)(puVar2 + -0x158);
      puVar25 = puVar2 + -0x160;
      uVar8 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar23,0);
      if ((uVar8 & 1) == 0) {
        puVar25 = *(undefined1 **)(puVar2 + -0x160);
        pcVar1 = *(code **)(puVar2 + -0x158);
        uVar21 = *(undefined8 *)(puVar2 + -0x170);
        param_1 = *(long *)(puVar2 + -0x168);
        puVar2 = puVar2 + -0x150;
        lVar9 = lVar23;
      }
      else {
        if (*(long *)(lVar23 + 0xb8) != 0) {
          Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsedUsables(*(long *)(lVar23 + 0xb8),0);
          *(undefined8 *)(puVar2 + -0x180) = unaff_x22;
          *(long *)(puVar2 + -0x178) = unaff_x21;
          *(undefined8 *)(puVar2 + -0x170) = *(undefined8 *)(puVar2 + -0x170);
          *(undefined8 *)(puVar2 + -0x168) = *(undefined8 *)(puVar2 + -0x168);
          *(undefined8 *)(puVar2 + -0x160) = *(undefined8 *)(puVar2 + -0x160);
          *(undefined8 *)(puVar2 + -0x158) = *(undefined8 *)(puVar2 + -0x158);
          *(int *)(lVar23 + 0x8c) = *(int *)(lVar23 + 0x8c) + 1;
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                    (puVar2 + -0x1e0,lVar23,*(undefined8 *)(lVar23 + 0xa8));
          *(undefined8 *)(puVar2 + -0x228) = *(undefined8 *)(puVar2 + -0x1d8);
          *(undefined8 *)(puVar2 + -0x230) = *(undefined8 *)(puVar2 + -0x1e0);
          *(undefined8 *)(puVar2 + -0x218) = *(undefined8 *)(puVar2 + -0x1c8);
          *(undefined8 *)(puVar2 + -0x220) = *(undefined8 *)(puVar2 + -0x1d0);
          uVar29 = *(undefined8 *)(puVar2 + -0x1a8);
          uVar28 = *(undefined8 *)(puVar2 + -0x1b0);
          uVar27 = *(undefined8 *)(puVar2 + -0x198);
          uVar14 = *(undefined8 *)(puVar2 + -0x1a0);
          *(undefined8 *)(puVar2 + -0x1f8) = uVar29;
          *(undefined8 *)(puVar2 + -0x200) = uVar28;
          *(undefined8 *)(puVar2 + -0x1e8) = uVar27;
          *(undefined8 *)(puVar2 + -0x1f0) = uVar14;
          uVar31 = *(undefined8 *)(puVar2 + -0x1b8);
          uVar30 = *(undefined8 *)(puVar2 + -0x1c0);
          *(undefined8 *)(puVar2 + -0x208) = uVar31;
          *(undefined8 *)(puVar2 + -0x210) = uVar30;
          uVar21 = *(undefined8 *)(puVar2 + -400);
          uVar12 = *(undefined8 *)(puVar2 + -0x188);
          *(undefined8 *)(puVar2 + -0x1b8) = uVar31;
          *(undefined8 *)(puVar2 + -0x1c0) = uVar30;
          *(undefined8 *)(puVar2 + -0x1a8) = uVar29;
          *(undefined8 *)(puVar2 + -0x1b0) = uVar28;
          *(undefined8 *)(puVar2 + -0x198) = uVar27;
          *(undefined8 *)(puVar2 + -0x1a0) = uVar14;
          *(undefined8 *)(puVar2 + -0x1d8) = *(undefined8 *)(puVar2 + -0x1d8);
          *(undefined8 *)(puVar2 + -0x1e0) = *(undefined8 *)(puVar2 + -0x1e0);
          *(undefined8 *)(puVar2 + -0x1c8) = *(undefined8 *)(puVar2 + -0x1c8);
          *(undefined8 *)(puVar2 + -0x1d0) = *(undefined8 *)(puVar2 + -0x1d0);
          *(undefined8 *)(puVar2 + -0x248) = uVar29;
          *(undefined8 *)(puVar2 + -0x250) = uVar28;
          *(undefined8 *)(puVar2 + -0x238) = uVar27;
          *(undefined8 *)(puVar2 + -0x240) = uVar14;
          *(undefined8 *)(puVar2 + -600) = uVar31;
          *(undefined8 *)(puVar2 + -0x260) = uVar30;
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar23,puVar2 + -0x260);
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnHumanPlayerAtLocator(lVar23,uVar21);
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnAIsAtLocators(lVar23,uVar12);
          uVar21 = *(undefined8 *)(lVar23 + 0xa8);
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection(lVar23);
          plVar22 = *(long **)(puVar2 + -0x180);
          *(undefined8 *)(puVar2 + -0x1b0) = unaff_x28;
          *(undefined8 *)(puVar2 + -0x1a8) = unaff_x27;
          *(undefined8 *)(puVar2 + -0x1a0) = unaff_x26;
          *(undefined8 *)(puVar2 + -0x198) = unaff_x25;
          *(undefined8 *)(puVar2 + -400) = unaff_x24;
          *(undefined8 **)(puVar2 + -0x188) = unaff_x23;
          *(long **)(puVar2 + -0x180) = plVar22;
          *(undefined8 *)(puVar2 + -0x178) = *(undefined8 *)(puVar2 + -0x178);
          *(undefined8 *)(puVar2 + -0x170) = *(undefined8 *)(puVar2 + -0x170);
          *(undefined8 *)(puVar2 + -0x168) = *(undefined8 *)(puVar2 + -0x168);
          *(undefined8 *)(puVar2 + -0x160) = *(undefined8 *)(puVar2 + -0x160);
          *(undefined8 *)(puVar2 + -0x158) = *(undefined8 *)(puVar2 + -0x158);
          *(undefined8 *)(puVar2 + -0x1c0) = uVar21;
          if ((bRam0000000003eb48a2 & 1) == 0) {
            func_0x00f78a20(0x3d33318);
            func_0x00f78a20(0x3d33320);
            func_0x00f78a20(0x3d33328);
            func_0x00f78a20(0x3d278d8);
            func_0x00f78a20(0x3d3cd70);
            func_0x00f78a20(0x3d23990);
            func_0x00f78a20(0x3d24e08);
            func_0x00f78a20(0x3d62270);
            func_0x00f78a20(0x3d26ac8);
            bRam0000000003eb48a2 = 1;
          }
          *(undefined8 *)(puVar2 + -0x1d0) = 0;
          *(undefined8 *)(puVar2 + -0x1e8) = 0;
          *(undefined8 *)(puVar2 + -0x1f0) = 0;
          *(undefined8 *)(puVar2 + -0x1d8) = 0;
          *(undefined8 *)(puVar2 + -0x1e0) = 0;
          *(undefined8 *)(puVar2 + -0x208) = 0;
          *(undefined8 *)(puVar2 + -0x210) = 0;
          *(undefined8 *)(puVar2 + -0x1f8) = 0;
          *(undefined8 *)(puVar2 + -0x200) = 0;
          *(undefined8 *)(puVar2 + -0x218) = 0;
          *(undefined8 *)(lVar23 + 0xa8) = uVar21;
          if ((*(long *)(lVar23 + 0x40) != 0) &&
             (lVar9 = *(long *)(*(long *)(lVar23 + 0x40) + 0x30), lVar9 != 0)) {
            /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(puVar2 + -0x260,lVar9,uRam0000000003d3cd70);
            *(undefined8 *)(puVar2 + -0x1e8) = *(undefined8 *)(puVar2 + -0x238);
            *(undefined8 *)(puVar2 + -0x1f0) = *(undefined8 *)(puVar2 + -0x240);
            *(undefined8 *)(puVar2 + -0x1d8) = *(undefined8 *)(puVar2 + -0x228);
            *(undefined8 *)(puVar2 + -0x1e0) = *(undefined8 *)(puVar2 + -0x230);
            *(undefined8 *)(puVar2 + -0x1d0) = *(undefined8 *)(puVar2 + -0x220);
            *(undefined8 *)(puVar2 + -0x208) = *(undefined8 *)(puVar2 + -600);
            *(undefined8 *)(puVar2 + -0x210) = *(undefined8 *)(puVar2 + -0x260);
            *(undefined8 *)(puVar2 + -0x1f8) = *(undefined8 *)(puVar2 + -0x248);
            *(undefined8 *)(puVar2 + -0x200) = *(undefined8 *)(puVar2 + -0x250);
            goto LAB_01478328;
          }
          func_0x00f78af4();
          if (extraout_w1 == 1) {
            plVar10 = (long *)___cxa_begin_catch();
            lVar23 = *plVar10;
            ___cxa_end_catch();
            /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0x210,uRam0000000003d33318);
            if (lVar23 == 0) {
              return;
            }
            func_0x00f78ac0(lVar23,0);
          }
          lVar9 = __Unwind_Resume();
          *(undefined8 *)(puVar2 + -0x2e0) = unaff_x24;
          *(undefined8 **)(puVar2 + -0x2d8) = unaff_x23;
          *(long **)(puVar2 + -0x2d0) = plVar22;
          *(undefined8 *)(puVar2 + -0x2c8) = 0x3eb4000;
          *(undefined8 *)(puVar2 + -0x2c0) = uVar21;
          *(long *)(puVar2 + -0x2b8) = lVar23;
          *(undefined1 **)(puVar2 + -0x2b0) = puVar2 + -0x160;
          *(code **)(puVar2 + -0x2a8) = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
          lVar11 = 0x3eb4000;
          if ((bRam0000000003eb48a3 & 1) == 0) {
            func_0x00f78a20(0x3d33318);
            func_0x00f78a20(0x3d33320);
            func_0x00f78a20(0x3d33328);
            func_0x00f78a20(0x3d3cd70);
            func_0x00f78a20(0x3d24e08);
            bRam0000000003eb48a3 = 1;
          }
          *(undefined8 *)(puVar2 + -0x338) = 0;
          *(undefined4 *)(puVar2 + -0x340) = 0;
          if ((*(long *)(lVar9 + 0x40) != 0) &&
             (lVar23 = *(long *)(*(long *)(lVar9 + 0x40) + 0x30), lVar23 != 0)) {
            plVar22 = (long *)0x3d24e08;
            /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(puVar2 + -0x390,lVar23,uRam0000000003d3cd70);
            *(undefined8 *)(puVar2 + -0x308) = *(undefined8 *)(puVar2 + -0x368);
            *(undefined8 *)(puVar2 + -0x310) = *(undefined8 *)(puVar2 + -0x370);
            *(undefined8 *)(puVar2 + -0x2f8) = *(undefined8 *)(puVar2 + -0x358);
            *(undefined8 *)(puVar2 + -0x300) = *(undefined8 *)(puVar2 + -0x360);
            *(undefined8 *)(puVar2 + -0x2f0) = *(undefined8 *)(puVar2 + -0x350);
            *(undefined8 *)(puVar2 + -0x328) = *(undefined8 *)(puVar2 + -0x388);
            *(undefined8 *)(puVar2 + -0x330) = *(undefined8 *)(puVar2 + -0x390);
            *(undefined8 *)(puVar2 + -0x318) = *(undefined8 *)(puVar2 + -0x378);
            *(undefined8 *)(puVar2 + -800) = *(undefined8 *)(puVar2 + -0x380);
            goto LAB_01478624;
          }
          func_0x00f78af4();
          if (extraout_w1_00 == 1) {
            plVar10 = (long *)___cxa_begin_catch();
            lVar11 = *plVar10;
            ___cxa_end_catch();
            /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0x330,*unaff_x23);
            if (lVar11 == 0) goto code_r0x014786b8;
            func_0x00f78ac0(lVar11,0);
          }
          lVar23 = __Unwind_Resume();
          *(long *)(puVar2 + -0x3b0) = lVar11;
          *(long *)(puVar2 + -0x3a8) = lVar9;
          *(undefined1 **)(puVar2 + -0x3a0) = puVar2 + -0x2b0;
          *(code **)(puVar2 + -0x398) = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
          Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                    (puVar2 + -0x410,lVar23,*(undefined8 *)(lVar23 + 0xa8));
          uVar21 = *(undefined8 *)(puVar2 + -0x3f0);
          uVar14 = *(undefined8 *)(puVar2 + -0x3d8);
          uVar12 = *(undefined8 *)(puVar2 + -0x3e0);
          extraout_x8[5] = *(undefined8 *)(puVar2 + -1000);
          extraout_x8[4] = uVar21;
          extraout_x8[7] = uVar14;
          extraout_x8[6] = uVar12;
          uVar21 = *(undefined8 *)(puVar2 + -0x3d0);
          uVar14 = *(undefined8 *)(puVar2 + -0x3b8);
          uVar12 = *(undefined8 *)(puVar2 + -0x3c0);
          extraout_x8[9] = *(undefined8 *)(puVar2 + -0x3c8);
          extraout_x8[8] = uVar21;
          extraout_x8[0xb] = uVar14;
          extraout_x8[10] = uVar12;
          uVar21 = *(undefined8 *)(puVar2 + -0x410);
          uVar14 = *(undefined8 *)(puVar2 + -0x3f8);
          uVar12 = *(undefined8 *)(puVar2 + -0x400);
          extraout_x8[1] = *(undefined8 *)(puVar2 + -0x408);
          *extraout_x8 = uVar21;
          extraout_x8[3] = uVar14;
          extraout_x8[2] = uVar12;
          return;
        }
        pcVar1 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteHitPlayerCondition;
        lVar9 = func_0x00f78af4();
        puVar2 = puVar2 + -0x170;
        param_1 = lVar23;
      }
    }
    unaff_x30 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartHitPlayerSection;
    param_1 = func_0x00f78af4();
    goto code_r0x01535e18;
  }
  param_3 = (ulong)*(uint *)(lVar9 + 0x1ac);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
            (param_1,*(undefined8 *)(lVar9 + 400),param_3,*(char *)(lVar9 + 0x1a8) != '\0',0);
  *(undefined4 *)(param_1 + 0xe8) = 3;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_01535ee8;
  unaff_x22 = 0x3d52000;
  lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
  param_3 = uRam0000000003d527f0;
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,param_1,uRam0000000003d527f0,0);
  uVar21 = 0;
  if (lVar9 == 0) goto LAB_01535ee8;
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
  if ((bRam0000000003eb51f9 & 1) == 0) {
    func_0x00f78a20(0x3d27728,unaff_x21,0);
    bRam0000000003eb51f9 = 1;
  }
  plVar22 = (long *)(lVar9 + 0x98);
  lVar9 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,unaff_x21,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
    lVar11 = func_0x00ff0f44(plVar22,plVar10,lVar9);
    bVar6 = lVar9 == lVar11;
    lVar9 = lVar11;
    if (bVar6) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar10);
  uVar12 = auVar32._8_8_;
  puVar3 = (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0x3d27728;
  *(long *)((long)register0x00000008 + -0x58) = lVar9;
  *(long **)((long)register0x00000008 + -0x50) = plVar22;
  *(long *)((long)register0x00000008 + -0x48) = unaff_x21;
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0x38) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
  puVar25 = (undefined1 *)((long)register0x00000008 + -0x40);
  if ((bRam0000000003eb51fb & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fb = 1;
  }
  uVar21 = 0x3d27730;
  plVar22 = (long *)(auVar32._0_8_ + 0xa0);
  lVar9 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,uVar12,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar11 = func_0x00ff0f44(plVar22,plVar10,lVar9);
    bVar6 = lVar9 == lVar11;
    lVar9 = lVar11;
    if (bVar6) {
      return;
    }
  }
  puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
  auVar33 = func_0x00f78e5c(plVar10);
code_r0x0159d188:
  *(undefined8 *)(puVar3 + -0x30) = uVar21;
  *(long *)(puVar3 + -0x28) = lVar9;
  *(long **)(puVar3 + -0x20) = plVar22;
  *(undefined8 *)(puVar3 + -0x18) = uVar12;
  *(undefined1 **)(puVar3 + -0x10) = puVar25;
  *(undefined **)(puVar3 + -8) = puVar26;
  if ((bRam0000000003eb51f3 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f3 = 1;
  }
  plVar22 = (long *)(auVar33._0_8_ + 0x80);
  lVar9 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,auVar33._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar11 = func_0x00ff0f44(plVar22,plVar10,lVar9);
    bVar6 = lVar9 == lVar11;
    lVar9 = lVar11;
    if (bVar6) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar10);
  *(undefined8 *)(puVar3 + -0x60) = 0x3d27718;
  *(long *)(puVar3 + -0x58) = lVar9;
  *(long **)(puVar3 + -0x50) = plVar22;
  *(long *)(puVar3 + -0x48) = auVar33._8_8_;
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x38) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
  if ((bRam0000000003eb51fd & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fd = 1;
  }
  plVar22 = (long *)(auVar32._0_8_ + 0xa8);
  lVar9 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,auVar32._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar11 = func_0x00ff0f44(plVar22,plVar10,lVar9);
    bVar6 = lVar9 == lVar11;
    lVar9 = lVar11;
    if (bVar6) {
      return;
    }
  }
  auVar33 = func_0x00f78e5c(plVar10);
  *(undefined8 *)(puVar3 + -0x90) = 0x3d27738;
  *(long *)(puVar3 + -0x88) = lVar9;
  *(long **)(puVar3 + -0x80) = plVar22;
  *(long *)(puVar3 + -0x78) = auVar32._8_8_;
  *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
  *(undefined **)(puVar3 + -0x68) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
  if ((bRam0000000003eb51f5 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f5 = 1;
  }
  plVar22 = (long *)(auVar33._0_8_ + 0x88);
  lVar9 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar9,auVar33._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar11 = func_0x00ff0f44(plVar22,plVar10,lVar9);
    bVar6 = lVar9 == lVar11;
    lVar9 = lVar11;
    if (bVar6) {
      return;
    }
  }
  auVar34 = func_0x00f78e5c(plVar10);
  puVar4 = puVar3 + -0xe0;
  *(undefined8 *)(puVar3 + -0xe0) = unaff_x26;
  *(undefined8 *)(puVar3 + -0xd8) = unaff_x25;
  *(undefined8 *)(puVar3 + -0xd0) = unaff_x24;
  *(undefined8 **)(puVar3 + -200) = unaff_x23;
  *(undefined8 *)(puVar3 + -0xc0) = 0x3d27700;
  *(long *)(puVar3 + -0xb8) = lVar9;
  *(long **)(puVar3 + -0xb0) = plVar22;
  *(long *)(puVar3 + -0xa8) = auVar33._8_8_;
  *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x70;
  *(code **)(puVar3 + -0x98) = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
  puVar25 = puVar3 + -0xa0;
  unaff_x23 = (undefined8 *)0x3d27718;
  unaff_x24 = 0x3d570f0;
  if ((bRam0000000003eb51b7 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b7 = 1;
  }
  unaff_x21 = *(long *)(auVar34._0_8_ + 0x40);
  uVar12 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar35._8_8_ = uVar12;
  auVar35._0_8_ = unaff_x21;
  uVar21 = 0;
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(uVar12,auVar34._0_8_,uRam0000000003d570f0,0);
  if (unaff_x21 == 0) {
    puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
    auVar35 = func_0x00f78af4();
  }
  else {
    unaff_x24 = 0x3d27000;
    unaff_x25 = 0x3d52000;
    puVar26 = (undefined *)0x159d470;
    puVar4 = puVar3 + -0xe0;
  }
code_r0x0159d5c4:
  *(undefined8 *)(puVar4 + -0x30) = uVar12;
  *(long *)(puVar4 + -0x28) = unaff_x21;
  *(long *)(puVar4 + -0x20) = auVar34._8_8_;
  *(long *)(puVar4 + -0x18) = auVar34._0_8_;
  *(undefined1 **)(puVar4 + -0x10) = puVar25;
  *(undefined **)(puVar4 + -8) = puVar26;
  if ((bRam0000000003eb51f4 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f4 = 1;
  }
  plVar22 = (long *)(auVar35._0_8_ + 0x80);
  lVar9 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,auVar35._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar11 = func_0x00ff0f44(plVar22,plVar10,lVar9);
    bVar6 = lVar9 == lVar11;
    lVar9 = lVar11;
    if (bVar6) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar10);
  *(undefined8 *)(puVar4 + -0x60) = 0x3d27718;
  *(long *)(puVar4 + -0x58) = lVar9;
  *(long **)(puVar4 + -0x50) = plVar22;
  *(long *)(puVar4 + -0x48) = auVar35._8_8_;
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x38) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar22 = (long *)(auVar32._0_8_ + 0x88);
  lVar9 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,auVar32._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar11 = func_0x00ff0f44(plVar22,plVar10,lVar9);
    bVar6 = lVar9 == lVar11;
    lVar9 = lVar11;
    if (bVar6) {
      return;
    }
  }
  auVar33 = func_0x00f78e5c(plVar10);
  *(undefined8 *)(puVar4 + -0x90) = 0x3d27700;
  *(long *)(puVar4 + -0x88) = lVar9;
  *(long **)(puVar4 + -0x80) = plVar22;
  *(long *)(puVar4 + -0x78) = auVar32._8_8_;
  *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
  *(undefined **)(puVar4 + -0x68) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar22 = (long *)(auVar33._0_8_ + 0xa8);
  lVar11 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar11,auVar33._8_8_,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar9 = func_0x00ff0f44(plVar22,plVar10,lVar11);
    bVar6 = lVar11 == lVar9;
    lVar11 = lVar9;
    if (bVar6) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar10);
  lVar9 = auVar32._8_8_;
  puVar5 = puVar4 + -0xc0;
  *(undefined8 *)(puVar4 + -0xc0) = 0x3d27738;
  *(long *)(puVar4 + -0xb8) = lVar11;
  *(long **)(puVar4 + -0xb0) = plVar22;
  *(long *)(puVar4 + -0xa8) = auVar33._8_8_;
  *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x70;
  *(undefined **)(puVar4 + -0x98) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  puVar25 = puVar4 + -0xa0;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  unaff_x22 = 0x3d27730;
  plVar22 = (long *)(auVar32._0_8_ + 0xa0);
  unaff_x21 = *plVar22;
  while ((plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x21,lVar9,0), plVar10 == (long *)0x0 ||
         (*plVar10 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar11 = func_0x00ff0f44(plVar22,plVar10,unaff_x21);
    bVar6 = unaff_x21 == lVar11;
    unaff_x21 = lVar11;
    if (bVar6) {
      return;
    }
  }
  puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  auVar32 = func_0x00f78e5c(plVar10);
code_r0x0159d844:
  *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
  *(long *)(puVar5 + -0x28) = unaff_x21;
  *(long **)(puVar5 + -0x20) = plVar22;
  *(long *)(puVar5 + -0x18) = lVar9;
  *(undefined1 **)(puVar5 + -0x10) = puVar25;
  *(undefined **)(puVar5 + -8) = puVar26;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar22 = (long *)0x3d27728;
  plVar10 = (long *)(auVar32._0_8_ + 0x98);
  lVar9 = *plVar10;
  while( true ) {
    puVar16 = (undefined8 *)0x0;
    plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,auVar32._8_8_);
    if ((plVar13 != (long *)0x0) && (*plVar13 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar11 = func_0x00ff0f44(plVar10,plVar13,lVar9);
    bVar6 = lVar9 == lVar11;
    lVar9 = lVar11;
    if (bVar6) {
      return;
    }
  }
  lVar11 = func_0x00f78e5c(plVar13);
  *(undefined8 *)(puVar5 + -0x80) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x78) = unaff_x25;
  *(undefined8 *)(puVar5 + -0x70) = unaff_x24;
  *(undefined8 **)(puVar5 + -0x68) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x60) = 0x3d27728;
  *(long *)(puVar5 + -0x58) = lVar9;
  *(long **)(puVar5 + -0x50) = plVar10;
  *(long *)(puVar5 + -0x48) = auVar32._8_8_;
  *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x38) = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar9 = 0x3eb5000;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar23 = *(long *)(lVar11 + 0x28);
  if (lVar23 != 0) {
    plVar22 = (long *)(lVar11 + 0x10);
    uVar19 = *(uint *)(lVar23 + 0x18);
    if ((int)uVar19 < 1) {
code_r0x0159d9f0:
      if (((*(long *)(lVar11 + 0x20) == 0) ||
          (lVar20 = *(long *)(*(long *)(lVar11 + 0x20) + 0x20), lVar20 == 0)) ||
         (unaff_x23 = *(undefined8 **)(lVar20 + 0x10), unaff_x23 == (undefined8 *)0x0))
      goto code_r0x0159db7c;
      uVar12 = 0x3d1b4e8;
      unaff_x24 = 0x3d1b4e8;
      lVar9 = unaff_x23[3];
      lVar23 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
      uVar21 = uRam0000000003d2a1d8;
      /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar23,lVar11,uRam0000000003d57238,uRam0000000003d2a1d8);
      puVar16 = (undefined8 *)0x0;
      plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,lVar23);
      if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
        unaff_x23[3] = plVar10;
        if ((*(long *)(lVar11 + 0x20) == 0) ||
           ((lVar20 = *(long *)(*(long *)(lVar11 + 0x20) + 0x20), lVar20 == 0 ||
            (unaff_x23 = *(undefined8 **)(lVar20 + 0x10), unaff_x23 == (undefined8 *)0x0))))
        goto code_r0x0159db7c;
        uVar12 = 0x3d1b3b0;
        unaff_x24 = 0x3d1b3b0;
        lVar9 = unaff_x23[0xe];
        lVar23 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
        uVar21 = uRam0000000003d29f28;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar23,lVar11,uRam0000000003d57240,uRam0000000003d29f28);
        puVar16 = (undefined8 *)0x0;
        plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,lVar23);
        if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
          unaff_x23[0xe] = plVar10;
          if (((*(long *)(lVar11 + 0x20) == 0) ||
              (lVar20 = *(long *)(*(long *)(lVar11 + 0x20) + 0x20), lVar20 == 0)) ||
             (unaff_x23 = *(undefined8 **)(lVar20 + 0x10), unaff_x23 == (undefined8 *)0x0))
          goto code_r0x0159db7c;
          uVar12 = 0x3d1b4e0;
          lVar9 = unaff_x23[5];
          lVar23 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
          uVar21 = uRam0000000003d2a1c8;
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar23,lVar11,uRam0000000003d57230,uRam0000000003d2a1c8);
          puVar16 = (undefined8 *)0x0;
          plVar10 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar9,lVar23);
          if ((plVar10 == (long *)0x0) || (*plVar10 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
            unaff_x23[5] = plVar10;
            *(undefined1 *)(lVar11 + 0x50) = 0;
            *(undefined8 *)(lVar11 + 0x18) = 0;
            *plVar22 = 0;
            *(undefined8 *)(lVar11 + 0x28) = 0;
            *(undefined8 *)(lVar11 + 0x20) = 0;
            return;
          }
        }
      }
      goto code_r0x0159db8c;
    }
    unaff_x23 = (undefined8 *)0x0;
    unaff_x24 = 0x3d43378;
    while( true ) {
      uVar24 = (uint)unaff_x23;
      uVar12 = unaff_x24;
      if (uVar19 <= uVar24) goto code_r0x0159db80;
      if (*plVar22 == 0) break;
      lVar9 = *(long *)(lVar23 + (long)(int)uVar24 * 8 + 0x20);
      puVar16 = puRam0000000003d43378;
      /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar22,lVar9);
      if (lVar9 == 0) break;
      /*Atlas.Gameplay.Player.GameContextPlayer$$DeInit*/ func_0x015a5404(lVar9);
      unaff_x23 = (undefined8 *)(ulong)(uVar24 + 1);
      uVar19 = *(uint *)(lVar23 + 0x18);
      if ((int)uVar19 <= (int)(uVar24 + 1)) goto code_r0x0159d9f0;
    }
  }
code_r0x0159db7c:
  func_0x00f78af4();
  uVar12 = unaff_x24;
code_r0x0159db80:
  uVar14 = func_0x00f78b24();
  func_0x00f78ac0(uVar14,0);
code_r0x0159db8c:
  auVar32 = func_0x00f78e5c();
  puVar15 = auVar32._8_8_;
  plVar10 = auVar32._0_8_;
  *(undefined8 *)(puVar5 + -0xc0) = uVar12;
  *(undefined8 **)(puVar5 + -0xb8) = unaff_x23;
  *(long **)(puVar5 + -0xb0) = plVar22;
  *(long *)(puVar5 + -0xa8) = lVar23;
  *(long *)(puVar5 + -0xa0) = lVar9;
  *(long *)(puVar5 + -0x98) = lVar11;
  *(undefined1 **)(puVar5 + -0x90) = puVar5 + -0x40;
  *(code **)(puVar5 + -0x88) = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar17 = puVar16;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar10[3] != 0) &&
      (puVar17 = puVar16, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar10[3],puVar15,puVar16,uVar21,0),
      puVar16 != (undefined8 *)0x0)) && (lVar9 = puVar16[2], lVar9 != 0)) {
    uVar12 = *(undefined8 *)(lVar9 + 0x48);
    uVar27 = *(undefined8 *)(lVar9 + 0x60);
    uVar14 = *(undefined8 *)(lVar9 + 0x58);
    *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(lVar9 + 0x50);
    *(undefined8 *)(puVar5 + -0xe0) = uVar12;
    *(undefined8 *)(puVar5 + -200) = uVar27;
    *(undefined8 *)(puVar5 + -0xd0) = uVar14;
    iVar7 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar5 + -0xe0,0);
    if ((iVar7 == 0) || (puVar16 == puVar15)) {
      return;
    }
    iVar7 = (**(code **)(*plVar10 + 0x2a8))(plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
    if ((plVar10[0x18] != 0) && (lVar9 = *(long *)(plVar10[0x18] + 0x20), lVar9 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar5 + -0xf8,lVar9,0);
      *(int *)(puVar16 + 0xf) = *(int *)(puVar16 + 0xf) + iVar7;
      uVar12 = *(undefined8 *)(puVar5 + -0xf8);
      puVar16[0x11] = *(undefined8 *)(puVar5 + -0xf0);
      puVar16[0x10] = uVar12;
      puVar16[0x12] = *(undefined8 *)(puVar5 + -0xe8);
      if (puVar16[2] != 0) {
        if (*(int *)(puVar16[2] + 0x50) == 0) {
          uVar12 = (**(code **)(*plVar10 + 0x208))(plVar10,*(undefined8 *)(*plVar10 + 0x210));
          puVar17 = (undefined8 *)0x0;
          iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar12,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar7 != 0) {
            if (plVar10[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar10[3],*(undefined4 *)(puVar16 + 0xf),0);
          }
        }
        if (plVar10[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar10[0x46],puVar15,puVar16,uVar21,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar36 = func_0x00f78af4();
  lVar9 = auVar36._0_8_;
  iVar7 = *(int *)(lVar9 + 0x78);
  uVar14 = puVar17[1];
  uVar12 = *puVar17;
  *(undefined8 *)(puVar5 + -0x118) = uVar14;
  *(undefined8 *)(puVar5 + -0x120) = uVar12;
  uVar21 = puVar17[2];
  *(undefined8 *)(puVar5 + -0x110) = uVar21;
  *(int *)(lVar9 + 0x78) = iVar7 + auVar36._8_4_;
  *(undefined8 *)(lVar9 + 0x88) = uVar14;
  *(undefined8 *)(lVar9 + 0x80) = uVar12;
  *(undefined8 *)(lVar9 + 0x90) = uVar21;
  return;
LAB_01478328:
  do {
    uVar8 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(puVar2 + -0x210,uRam0000000003d33320);
    if ((uVar8 & 1) == 0) {
LAB_01478494:
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0x210,uRam0000000003d33318);
      return;
    }
    lVar9 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___ctor(lVar9,0);
    if (lVar9 == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(long *)(lVar9 + 0x50) = lVar23;
    uVar27 = *(undefined8 *)(puVar2 + -0x1e8);
    uVar14 = *(undefined8 *)(puVar2 + -0x1f0);
    uVar12 = *(undefined8 *)(puVar2 + -0x1d8);
    uVar21 = *(undefined8 *)(puVar2 + -0x1e0);
    uVar29 = *(undefined8 *)(puVar2 + -0x1f8);
    uVar28 = *(undefined8 *)(puVar2 + -0x200);
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)(puVar2 + -0x1d0);
    *(undefined8 *)(lVar9 + 0x28) = uVar27;
    *(undefined8 *)(lVar9 + 0x20) = uVar14;
    *(undefined8 *)(lVar9 + 0x38) = uVar12;
    *(undefined8 *)(lVar9 + 0x30) = uVar21;
    *(undefined8 *)(lVar9 + 0x18) = uVar29;
    *(undefined8 *)(lVar9 + 0x10) = uVar28;
    *(undefined8 *)(puVar2 + -0x260) = *(undefined8 *)(lVar9 + 0x18);
    uVar21 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,puVar2 + -0x260);
    uVar8 = /*Atlas.StringID$$Equals*/ func_0x015057f8(puVar2 + -0x1c0,uVar21,0);
  } while ((uVar8 & 1) == 0);
  if (*(long *)(lVar23 + 0x60) == 0) {
    func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x14784e0);
    (*pcVar1)();
  }
  puVar16 = (undefined8 *)(lVar9 + 0x10);
  puVar17 = (undefined8 *)(lVar9 + 0x48);
  uVar8 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar23 + 0x60),*puVar16,puVar17,0);
  if ((uVar8 & 1) == 0) goto LAB_01478494;
  uVar21 = *(undefined8 *)(lVar23 + 0xa0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar21,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(lVar23 + 0xa0) == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(undefined8 *)(puVar2 + -0x218) = *(undefined8 *)(*(long *)(lVar23 + 0xa0) + 0x18);
    *(undefined8 *)(puVar2 + -0x260) = *puVar16;
    uVar21 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,puVar2 + -0x260);
    uVar8 = /*Atlas.StringID$$Equals*/ func_0x015057f8(puVar2 + -0x218,uVar21,0);
    if ((uVar8 & 1) != 0) {
      uVar21 = *(undefined8 *)(lVar23 + 0x38);
      uVar12 = *puVar16;
      uVar27 = *(undefined8 *)(lVar9 + 0x28);
      uVar14 = *(undefined8 *)(lVar9 + 0x20);
      *(undefined8 *)(puVar2 + -0x298) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined8 *)(puVar2 + -0x2a0) = uVar12;
      *(undefined8 *)(puVar2 + -0x288) = uVar27;
      *(undefined8 *)(puVar2 + -0x290) = uVar14;
      uVar12 = *(undefined8 *)(lVar9 + 0x30);
      *(undefined8 *)(puVar2 + -0x278) = *(undefined8 *)(lVar9 + 0x38);
      *(undefined8 *)(puVar2 + -0x280) = uVar12;
      *(undefined8 *)(puVar2 + -0x270) = *(undefined8 *)(lVar9 + 0x40);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar23,uVar21,puVar2 + -0x2a0);
      goto LAB_01478328;
    }
  }
  uVar12 = *puVar17;
  uVar21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar21,lVar9,uRam0000000003d62270,0);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AddBaseListener(lVar23,uVar12,uVar21,*puVar17);
  goto LAB_01478328;
LAB_01478624:
  do {
    uVar8 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(puVar2 + -0x330,uRam0000000003d33320);
    if ((uVar8 & 1) == 0) {
      uVar18 = 0x7b;
code_r0x0147869c:
      *(undefined4 *)(puVar2 + -0x348) = uVar18;
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0x330,uRam0000000003d33318);
      if (*(int *)(puVar2 + -0x348) != 0x86) {
code_r0x014786b8:
        lVar11 = *plVar22;
        if (((*(ushort *)(lVar11 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar11 = *plVar22;
        }
        *(undefined8 *)(lVar9 + 0xa8) = **(undefined8 **)(lVar11 + 0xb8);
      }
      return;
    }
    uVar21 = *(undefined8 *)(puVar2 + -800);
    *(undefined8 *)(puVar2 + -0x390) = *(undefined8 *)(puVar2 + -0x318);
    uVar12 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,puVar2 + -0x390);
    uVar8 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar9 + 0xa8,uVar12,0);
  } while ((uVar8 & 1) == 0);
  if (*(long *)(lVar9 + 0x60) == 0) {
    func_0x00f78af4();
  }
  else {
    uVar8 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar9 + 0x60),uVar21,puVar2 + -0x338,0);
    if ((uVar8 & 1) == 0) {
      uVar18 = 0x86;
      goto code_r0x0147869c;
    }
    if (*(long *)(puVar2 + -0x338) != 0) {
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                (lVar9,*(undefined8 *)(*(long *)(puVar2 + -0x338) + 0x18));
      goto LAB_01478624;
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1478708);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1535eec | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables.OnHit
// ============================================================

/* WARNING: Possible PIC construction at 0x01535c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0159d594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01535aa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0159d598) */
/* WARNING: Removing unreachable block (ram,0x0159d5a0) */
/* WARNING: Removing unreachable block (ram,0x0159d568) */
/* WARNING: Removing unreachable block (ram,0x0159d58c) */
/* WARNING: Removing unreachable block (ram,0x0159d528) */
/* WARNING: Removing unreachable block (ram,0x0159d54c) */
/* WARNING: Removing unreachable block (ram,0x0159d4e8) */
/* WARNING: Removing unreachable block (ram,0x0159d50c) */
/* WARNING: Removing unreachable block (ram,0x0159d4b0) */
/* WARNING: Removing unreachable block (ram,0x0159d4d4) */
/* WARNING: Removing unreachable block (ram,0x0159d470) */
/* WARNING: Removing unreachable block (ram,0x0159d494) */
/* WARNING: Removing unreachable block (ram,0x01535c74) */
/* WARNING: Removing unreachable block (ram,0x01535aa8) */

void Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnHit(long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 uVar14;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined8 *extraout_x8;
  long lVar21;
  long unaff_x19;
  long lVar22;
  long *plVar23;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  uint uVar24;
  undefined8 *unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar25;
  undefined *puVar26;
  code *unaff_x30;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  
code_r0x01535eec:
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  if (param_3 == 0) {
    func_0x00f78af4();
    return;
  }
  if (*(long *)(param_3 + 0x10) != *(long *)(param_1 + 0x38)) {
    return;
  }
  puVar25 = *(undefined1 **)((long)register0x00000008 + -0x10);
  pcVar1 = *(code **)((long)register0x00000008 + -8);
  puVar2 = (undefined1 *)register0x00000008;
  while( true ) {
    puVar5 = puVar2 + -0x60;
    *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
    *(long *)(puVar2 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
    *(long *)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = puVar25;
    *(code **)(puVar2 + -8) = pcVar1;
    puVar25 = puVar2 + -0x10;
    lVar22 = 0x3eb4000;
    if ((bRam0000000003eb4ec4 & 1) == 0) {
      func_0x00f78a20(0x3d527d0);
      func_0x00f78a20(0x3d527f0);
      func_0x00f78a20(0x3d278d8);
      func_0x00f78a20(0x3d27728);
      bRam0000000003eb4ec4 = 1;
    }
    lVar9 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(param_1);
    if (lVar9 != 0) {
      unaff_x22 = 0x3d52000;
      uVar18 = *(undefined8 *)(lVar9 + 0xa0);
      uVar14 = *(undefined8 *)(lVar9 + 0xb8);
      uVar12 = *(undefined8 *)(lVar9 + 0xb0);
      *(undefined8 *)(puVar2 + -0x58) = *(undefined8 *)(lVar9 + 0xa8);
      *(undefined8 *)(puVar2 + -0x60) = uVar18;
      *(undefined8 *)(puVar2 + -0x48) = uVar14;
      *(undefined8 *)(puVar2 + -0x50) = uVar12;
      uVar18 = *(undefined8 *)(lVar9 + 0xc0);
      *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(lVar9 + 200);
      *(undefined8 *)(puVar2 + -0x40) = uVar18;
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(param_1,puVar2 + -0x60,0);
      *(undefined4 *)(param_1 + 0xe8) = 0;
      lVar22 = *(long *)(param_1 + 0xd8);
      unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
      param_3 = uRam0000000003d527d0;
      /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,param_1,uRam0000000003d527d0,0);
      if (lVar22 != 0) {
        param_3 = 0;
        /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar22,unaff_x21);
        if (*(long *)(param_1 + 0x10) != 0) {
          unaff_x22 = 0x3d52000;
          plVar23 = *(long **)(*(long *)(param_1 + 0x10) + 0x40);
          unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
          auVar32._8_8_ = unaff_x21;
          auVar32._0_8_ = plVar23;
          uVar18 = 0;
          param_3 = uRam0000000003d527f0;
          /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,param_1,uRam0000000003d527f0,0);
          lVar22 = 0;
          if (plVar23 != (long *)0x0) {
            puVar26 = (undefined *)0x1535c74;
            goto code_r0x0159d844;
          }
        }
      }
    }
    auVar32 = func_0x00f78af4();
    lVar9 = auVar32._0_8_;
    puVar3 = puVar2 + -0xb0;
    *(long *)(puVar2 + -0x80) = lVar22;
    *(long *)(puVar2 + -0x78) = param_1;
    *(undefined1 **)(puVar2 + -0x70) = puVar25;
    *(code **)(puVar2 + -0x68) = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnPickup;
    if (auVar32._8_8_ != 0) {
      if (*(long *)(auVar32._8_8_ + 0x10) != *(long *)(lVar9 + 0x38)) {
        return;
      }
      lVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar9);
      param_1 = lVar9;
      if (lVar10 != 0) {
        uVar18 = *(undefined8 *)(lVar10 + 0x40);
        uVar14 = *(undefined8 *)(lVar10 + 0x58);
        uVar12 = *(undefined8 *)(lVar10 + 0x50);
        *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(lVar10 + 0x48);
        *(undefined8 *)(puVar2 + -0xb0) = uVar18;
        *(undefined8 *)(puVar2 + -0x98) = uVar14;
        *(undefined8 *)(puVar2 + -0xa0) = uVar12;
        uVar18 = *(undefined8 *)(lVar10 + 0x60);
        *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(lVar10 + 0x68);
        *(undefined8 *)(puVar2 + -0x90) = uVar18;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar9,puVar2 + -0xb0,0);
        if (*(int *)(lVar9 + 0xe8) != 1) {
          return;
        }
        Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompletePickupCondition(lVar9);
        return;
      }
    }
    lVar9 = func_0x00f78af4();
    *(undefined8 *)(puVar2 + -0xe0) = unaff_x22;
    *(long *)(puVar2 + -0xd8) = unaff_x21;
    *(long *)(puVar2 + -0xd0) = lVar22;
    *(long *)(puVar2 + -200) = param_1;
    *(undefined1 **)(puVar2 + -0xc0) = puVar2 + -0x70;
    *(code **)(puVar2 + -0xb8) = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartUseUsableSection;
    uVar18 = 0x3eb4000;
    if ((bRam0000000003eb4ec1 & 1) == 0) {
      func_0x00f78a20(0x3d52800);
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb4ec1 = 1;
    }
    *(undefined4 *)(lVar9 + 0xe8) = 2;
    lVar22 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar9);
    if (lVar22 != 0) {
      param_3 = (ulong)*(uint *)(lVar22 + 0x14c);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
                (lVar9,*(undefined8 *)(lVar22 + 0x130),param_3,*(char *)(lVar22 + 0x148) != '\0',0);
      if (*(long *)(lVar9 + 0x10) != 0) {
        unaff_x22 = 0x3d52000;
        lVar22 = *(long *)(*(long *)(lVar9 + 0x10) + 0x40);
        unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
        auVar33._8_8_ = unaff_x21;
        auVar33._0_8_ = lVar22;
        param_3 = uRam0000000003d52800;
        /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar9,uRam0000000003d52800,0);
        uVar18 = 0;
        if (lVar22 != 0) {
          puVar25 = *(undefined1 **)(puVar2 + -0xc0);
          puVar26 = *(undefined **)(puVar2 + -0xb8);
          plVar23 = *(long **)(puVar2 + -0xd0);
          uVar12 = *(undefined8 *)(puVar2 + -200);
          uVar18 = *(undefined8 *)(puVar2 + -0xe0);
          lVar22 = *(long *)(puVar2 + -0xd8);
          goto code_r0x0159d188;
        }
      }
    }
    auVar32 = func_0x00f78af4();
    lVar22 = auVar32._0_8_;
    *(undefined1 **)(puVar2 + -0xf0) = puVar2 + -0xc0;
    *(code **)(puVar2 + -0xe8) = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnUse;
    if (auVar32._8_8_ == 0) break;
    if (*(long *)(auVar32._8_8_ + 0x10) != *(long *)(lVar22 + 0x38)) {
      return;
    }
    puVar4 = puVar2 + -0x150;
    *(undefined8 *)(puVar2 + -0x120) = unaff_x24;
    *(undefined8 **)(puVar2 + -0x118) = unaff_x23;
    *(undefined8 *)(puVar2 + -0x110) = unaff_x22;
    *(long *)(puVar2 + -0x108) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x100) = uVar18;
    *(long *)(puVar2 + -0xf8) = lVar9;
    *(undefined8 *)(puVar2 + -0xf0) = *(undefined8 *)(puVar2 + -0xf0);
    *(undefined8 *)(puVar2 + -0xe8) = *(undefined8 *)(puVar2 + -0xe8);
    puVar25 = puVar2 + -0xf0;
    lVar9 = 0x3eb4000;
    if ((bRam0000000003eb4ec2 & 1) == 0) {
      func_0x00f78a20(0x3d527e8);
      func_0x00f78a20(0x3d527f8);
      func_0x00f78a20(0x3d52800);
      func_0x00f78a20(0x3d278d8);
      func_0x00f78a20(0x3d27718);
      bRam0000000003eb4ec2 = 1;
    }
    if (*(long *)(lVar22 + 0x58) != 0) {
      *(undefined1 *)(*(long *)(lVar22 + 0x58) + 0x100) = 1;
      lVar10 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(lVar22);
      if (lVar10 != 0) {
        uVar18 = *(undefined8 *)(lVar10 + 0x70);
        uVar14 = *(undefined8 *)(lVar10 + 0x88);
        uVar12 = *(undefined8 *)(lVar10 + 0x80);
        *(undefined8 *)(puVar2 + -0x148) = *(undefined8 *)(lVar10 + 0x78);
        *(undefined8 *)(puVar2 + -0x150) = uVar18;
        *(undefined8 *)(puVar2 + -0x138) = uVar14;
        *(undefined8 *)(puVar2 + -0x140) = uVar12;
        uVar18 = *(undefined8 *)(lVar10 + 0x90);
        *(undefined8 *)(puVar2 + -0x128) = *(undefined8 *)(lVar10 + 0x98);
        *(undefined8 *)(puVar2 + -0x130) = uVar18;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar22,puVar2 + -0x150,0);
        lVar9 = *(long *)(lVar22 + 0xd0);
        unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
        /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(unaff_x21,lVar22,uRam0000000003d527e8,0);
        unaff_x22 = 0x3d52000;
        if (lVar9 != 0) {
          /*Atlas.Gameplay.HitVolumeBehaviour$$remove_OnEnter*/ func_0x015b4a80(lVar9,unaff_x21,0);
          if (*(long *)(lVar22 + 0x10) != 0) {
            uVar12 = 0x3d27718;
            unaff_x23 = (undefined8 *)0x3d52000;
            lVar9 = *(long *)(*(long *)(lVar22 + 0x10) + 0x40);
            unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
            /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar22,uRam0000000003d527f8,0);
            unaff_x22 = 0x3d27718;
            if (lVar9 != 0) {
              /*Atlas.Gameplay.Player.GameContextPlayerManager$$remove_OnUsableAttached*/ func_0x015a5cc8(lVar9,unaff_x21,0);
              if (*(long *)(lVar22 + 0x10) != 0) {
                unaff_x23 = (undefined8 *)0x3d52000;
                lVar10 = *(long *)(*(long *)(lVar22 + 0x10) + 0x40);
                auVar34._8_8_ = lVar10;
                auVar34._0_8_ = lVar22;
                unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
                auVar35._8_8_ = unaff_x21;
                auVar35._0_8_ = lVar10;
                uVar18 = 0;
                /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(unaff_x21,lVar22,uRam0000000003d52800,0);
                lVar9 = 0;
                unaff_x22 = uVar12;
                if (lVar10 != 0) {
                  puVar26 = (undefined *)0x1535aa8;
                  goto code_r0x0159d5c4;
                }
              }
            }
          }
        }
      }
    }
    lVar10 = func_0x00f78af4();
    *(long *)(puVar2 + -0x170) = lVar9;
    *(long *)(puVar2 + -0x168) = lVar22;
    *(undefined1 **)(puVar2 + -0x160) = puVar25;
    *(code **)(puVar2 + -0x158) =
         Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnEnterHitPlayerEndTrigger;
    param_3 = 0;
    iVar7 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsValidHumanCollision();
    if (iVar7 == 0) {
      return;
    }
    unaff_x20 = *(undefined8 *)(puVar2 + -0x170);
    *(undefined8 *)(puVar2 + -0x170) = unaff_x20;
    *(undefined8 *)(puVar2 + -0x168) = *(undefined8 *)(puVar2 + -0x168);
    *(undefined8 *)(puVar2 + -0x160) = *(undefined8 *)(puVar2 + -0x160);
    *(undefined8 *)(puVar2 + -0x158) = *(undefined8 *)(puVar2 + -0x158);
    puVar25 = puVar2 + -0x160;
    uVar8 = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__IsWithinMaxRetryLimit(lVar10,0);
    if ((uVar8 & 1) == 0) {
      puVar25 = *(undefined1 **)(puVar2 + -0x160);
      pcVar1 = *(code **)(puVar2 + -0x158);
      unaff_x20 = *(undefined8 *)(puVar2 + -0x170);
      unaff_x19 = *(long *)(puVar2 + -0x168);
      puVar2 = puVar2 + -0x150;
      param_1 = lVar10;
    }
    else {
      if (*(long *)(lVar10 + 0xb8) != 0) {
        Atlas_Gameplay_Usables_UsableManager__DeSpawnAllUsedUsables(*(long *)(lVar10 + 0xb8),0);
        *(undefined8 *)(puVar2 + -0x180) = unaff_x22;
        *(long *)(puVar2 + -0x178) = unaff_x21;
        *(undefined8 *)(puVar2 + -0x170) = *(undefined8 *)(puVar2 + -0x170);
        *(undefined8 *)(puVar2 + -0x168) = *(undefined8 *)(puVar2 + -0x168);
        *(undefined8 *)(puVar2 + -0x160) = *(undefined8 *)(puVar2 + -0x160);
        *(undefined8 *)(puVar2 + -0x158) = *(undefined8 *)(puVar2 + -0x158);
        *(int *)(lVar10 + 0x8c) = *(int *)(lVar10 + 0x8c) + 1;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                  (puVar2 + -0x1e0,lVar10,*(undefined8 *)(lVar10 + 0xa8));
        *(undefined8 *)(puVar2 + -0x228) = *(undefined8 *)(puVar2 + -0x1d8);
        *(undefined8 *)(puVar2 + -0x230) = *(undefined8 *)(puVar2 + -0x1e0);
        *(undefined8 *)(puVar2 + -0x218) = *(undefined8 *)(puVar2 + -0x1c8);
        *(undefined8 *)(puVar2 + -0x220) = *(undefined8 *)(puVar2 + -0x1d0);
        uVar29 = *(undefined8 *)(puVar2 + -0x1a8);
        uVar28 = *(undefined8 *)(puVar2 + -0x1b0);
        uVar27 = *(undefined8 *)(puVar2 + -0x198);
        uVar14 = *(undefined8 *)(puVar2 + -0x1a0);
        *(undefined8 *)(puVar2 + -0x1f8) = uVar29;
        *(undefined8 *)(puVar2 + -0x200) = uVar28;
        *(undefined8 *)(puVar2 + -0x1e8) = uVar27;
        *(undefined8 *)(puVar2 + -0x1f0) = uVar14;
        uVar31 = *(undefined8 *)(puVar2 + -0x1b8);
        uVar30 = *(undefined8 *)(puVar2 + -0x1c0);
        *(undefined8 *)(puVar2 + -0x208) = uVar31;
        *(undefined8 *)(puVar2 + -0x210) = uVar30;
        uVar18 = *(undefined8 *)(puVar2 + -400);
        uVar12 = *(undefined8 *)(puVar2 + -0x188);
        *(undefined8 *)(puVar2 + -0x1b8) = uVar31;
        *(undefined8 *)(puVar2 + -0x1c0) = uVar30;
        *(undefined8 *)(puVar2 + -0x1a8) = uVar29;
        *(undefined8 *)(puVar2 + -0x1b0) = uVar28;
        *(undefined8 *)(puVar2 + -0x198) = uVar27;
        *(undefined8 *)(puVar2 + -0x1a0) = uVar14;
        *(undefined8 *)(puVar2 + -0x1d8) = *(undefined8 *)(puVar2 + -0x1d8);
        *(undefined8 *)(puVar2 + -0x1e0) = *(undefined8 *)(puVar2 + -0x1e0);
        *(undefined8 *)(puVar2 + -0x1c8) = *(undefined8 *)(puVar2 + -0x1c8);
        *(undefined8 *)(puVar2 + -0x1d0) = *(undefined8 *)(puVar2 + -0x1d0);
        *(undefined8 *)(puVar2 + -0x248) = uVar29;
        *(undefined8 *)(puVar2 + -0x250) = uVar28;
        *(undefined8 *)(puVar2 + -0x238) = uVar27;
        *(undefined8 *)(puVar2 + -0x240) = uVar14;
        *(undefined8 *)(puVar2 + -600) = uVar31;
        *(undefined8 *)(puVar2 + -0x260) = uVar30;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar10,puVar2 + -0x260);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnHumanPlayerAtLocator(lVar10,uVar18);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RespawnAIsAtLocators(lVar10,uVar12);
        uVar18 = *(undefined8 *)(lVar10 + 0xa8);
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection(lVar10);
        plVar23 = *(long **)(puVar2 + -0x180);
        *(undefined8 *)(puVar2 + -0x1b0) = unaff_x28;
        *(undefined8 *)(puVar2 + -0x1a8) = unaff_x27;
        *(undefined8 *)(puVar2 + -0x1a0) = unaff_x26;
        *(undefined8 *)(puVar2 + -0x198) = unaff_x25;
        *(undefined8 *)(puVar2 + -400) = unaff_x24;
        *(undefined8 **)(puVar2 + -0x188) = unaff_x23;
        *(long **)(puVar2 + -0x180) = plVar23;
        *(undefined8 *)(puVar2 + -0x178) = *(undefined8 *)(puVar2 + -0x178);
        *(undefined8 *)(puVar2 + -0x170) = *(undefined8 *)(puVar2 + -0x170);
        *(undefined8 *)(puVar2 + -0x168) = *(undefined8 *)(puVar2 + -0x168);
        *(undefined8 *)(puVar2 + -0x160) = *(undefined8 *)(puVar2 + -0x160);
        *(undefined8 *)(puVar2 + -0x158) = *(undefined8 *)(puVar2 + -0x158);
        *(undefined8 *)(puVar2 + -0x1c0) = uVar18;
        if ((bRam0000000003eb48a2 & 1) == 0) {
          func_0x00f78a20(0x3d33318);
          func_0x00f78a20(0x3d33320);
          func_0x00f78a20(0x3d33328);
          func_0x00f78a20(0x3d278d8);
          func_0x00f78a20(0x3d3cd70);
          func_0x00f78a20(0x3d23990);
          func_0x00f78a20(0x3d24e08);
          func_0x00f78a20(0x3d62270);
          func_0x00f78a20(0x3d26ac8);
          bRam0000000003eb48a2 = 1;
        }
        *(undefined8 *)(puVar2 + -0x1d0) = 0;
        *(undefined8 *)(puVar2 + -0x1e8) = 0;
        *(undefined8 *)(puVar2 + -0x1f0) = 0;
        *(undefined8 *)(puVar2 + -0x1d8) = 0;
        *(undefined8 *)(puVar2 + -0x1e0) = 0;
        *(undefined8 *)(puVar2 + -0x208) = 0;
        *(undefined8 *)(puVar2 + -0x210) = 0;
        *(undefined8 *)(puVar2 + -0x1f8) = 0;
        *(undefined8 *)(puVar2 + -0x200) = 0;
        *(undefined8 *)(puVar2 + -0x218) = 0;
        *(undefined8 *)(lVar10 + 0xa8) = uVar18;
        if ((*(long *)(lVar10 + 0x40) != 0) &&
           (lVar22 = *(long *)(*(long *)(lVar10 + 0x40) + 0x30), lVar22 != 0)) {
          /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(puVar2 + -0x260,lVar22,uRam0000000003d3cd70);
          *(undefined8 *)(puVar2 + -0x1e8) = *(undefined8 *)(puVar2 + -0x238);
          *(undefined8 *)(puVar2 + -0x1f0) = *(undefined8 *)(puVar2 + -0x240);
          *(undefined8 *)(puVar2 + -0x1d8) = *(undefined8 *)(puVar2 + -0x228);
          *(undefined8 *)(puVar2 + -0x1e0) = *(undefined8 *)(puVar2 + -0x230);
          *(undefined8 *)(puVar2 + -0x1d0) = *(undefined8 *)(puVar2 + -0x220);
          *(undefined8 *)(puVar2 + -0x208) = *(undefined8 *)(puVar2 + -600);
          *(undefined8 *)(puVar2 + -0x210) = *(undefined8 *)(puVar2 + -0x260);
          *(undefined8 *)(puVar2 + -0x1f8) = *(undefined8 *)(puVar2 + -0x248);
          *(undefined8 *)(puVar2 + -0x200) = *(undefined8 *)(puVar2 + -0x250);
          goto LAB_01478328;
        }
        func_0x00f78af4();
        if (extraout_w1 == 1) {
          plVar11 = (long *)___cxa_begin_catch();
          lVar10 = *plVar11;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0x210,uRam0000000003d33318);
          if (lVar10 == 0) {
            return;
          }
          func_0x00f78ac0(lVar10,0);
        }
        lVar22 = __Unwind_Resume();
        *(undefined8 *)(puVar2 + -0x2e0) = unaff_x24;
        *(undefined8 **)(puVar2 + -0x2d8) = unaff_x23;
        *(long **)(puVar2 + -0x2d0) = plVar23;
        *(undefined8 *)(puVar2 + -0x2c8) = 0x3eb4000;
        *(undefined8 *)(puVar2 + -0x2c0) = uVar18;
        *(long *)(puVar2 + -0x2b8) = lVar10;
        *(undefined1 **)(puVar2 + -0x2b0) = puVar2 + -0x160;
        *(code **)(puVar2 + -0x2a8) = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__EndSection;
        lVar9 = 0x3eb4000;
        if ((bRam0000000003eb48a3 & 1) == 0) {
          func_0x00f78a20(0x3d33318);
          func_0x00f78a20(0x3d33320);
          func_0x00f78a20(0x3d33328);
          func_0x00f78a20(0x3d3cd70);
          func_0x00f78a20(0x3d24e08);
          bRam0000000003eb48a3 = 1;
        }
        *(undefined8 *)(puVar2 + -0x338) = 0;
        *(undefined4 *)(puVar2 + -0x340) = 0;
        if ((*(long *)(lVar22 + 0x40) != 0) &&
           (lVar10 = *(long *)(*(long *)(lVar22 + 0x40) + 0x30), lVar10 != 0)) {
          plVar23 = (long *)0x3d24e08;
          /*System.Collections.Generic.List<BaseLayerFTUEDefinition.TriggerPointReaction>$$GetEnumerator*/ func_0x024c4090(puVar2 + -0x390,lVar10,uRam0000000003d3cd70);
          *(undefined8 *)(puVar2 + -0x308) = *(undefined8 *)(puVar2 + -0x368);
          *(undefined8 *)(puVar2 + -0x310) = *(undefined8 *)(puVar2 + -0x370);
          *(undefined8 *)(puVar2 + -0x2f8) = *(undefined8 *)(puVar2 + -0x358);
          *(undefined8 *)(puVar2 + -0x300) = *(undefined8 *)(puVar2 + -0x360);
          *(undefined8 *)(puVar2 + -0x2f0) = *(undefined8 *)(puVar2 + -0x350);
          *(undefined8 *)(puVar2 + -0x328) = *(undefined8 *)(puVar2 + -0x388);
          *(undefined8 *)(puVar2 + -0x330) = *(undefined8 *)(puVar2 + -0x390);
          *(undefined8 *)(puVar2 + -0x318) = *(undefined8 *)(puVar2 + -0x378);
          *(undefined8 *)(puVar2 + -800) = *(undefined8 *)(puVar2 + -0x380);
          goto LAB_01478624;
        }
        func_0x00f78af4();
        if (extraout_w1_00 == 1) {
          plVar11 = (long *)___cxa_begin_catch();
          lVar9 = *plVar11;
          ___cxa_end_catch();
          /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0x330,*unaff_x23);
          if (lVar9 == 0) goto code_r0x014786b8;
          func_0x00f78ac0(lVar9,0);
        }
        lVar10 = __Unwind_Resume();
        *(long *)(puVar2 + -0x3b0) = lVar9;
        *(long *)(puVar2 + -0x3a8) = lVar22;
        *(undefined1 **)(puVar2 + -0x3a0) = puVar2 + -0x2b0;
        *(code **)(puVar2 + -0x398) = Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetActiveSection;
        Atlas_Gameplay_FTUE_BaseLayerFTUEManager__GetSection
                  (puVar2 + -0x410,lVar10,*(undefined8 *)(lVar10 + 0xa8));
        uVar18 = *(undefined8 *)(puVar2 + -0x3f0);
        uVar14 = *(undefined8 *)(puVar2 + -0x3d8);
        uVar12 = *(undefined8 *)(puVar2 + -0x3e0);
        extraout_x8[5] = *(undefined8 *)(puVar2 + -1000);
        extraout_x8[4] = uVar18;
        extraout_x8[7] = uVar14;
        extraout_x8[6] = uVar12;
        uVar18 = *(undefined8 *)(puVar2 + -0x3d0);
        uVar14 = *(undefined8 *)(puVar2 + -0x3b8);
        uVar12 = *(undefined8 *)(puVar2 + -0x3c0);
        extraout_x8[9] = *(undefined8 *)(puVar2 + -0x3c8);
        extraout_x8[8] = uVar18;
        extraout_x8[0xb] = uVar14;
        extraout_x8[10] = uVar12;
        uVar18 = *(undefined8 *)(puVar2 + -0x410);
        uVar14 = *(undefined8 *)(puVar2 + -0x3f8);
        uVar12 = *(undefined8 *)(puVar2 + -0x400);
        extraout_x8[1] = *(undefined8 *)(puVar2 + -0x408);
        *extraout_x8 = uVar18;
        extraout_x8[3] = uVar14;
        extraout_x8[2] = uVar12;
        return;
      }
      pcVar1 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__CompleteHitPlayerCondition;
      param_1 = func_0x00f78af4();
      puVar2 = puVar2 + -0x170;
      unaff_x19 = lVar10;
    }
  }
  unaff_x19 = func_0x00f78af4();
  register0x00000008 = (BADSPACEBASE *)(puVar2 + -0x120);
  *(undefined8 *)(puVar2 + -0x120) = unaff_x22;
  *(long *)(puVar2 + -0x118) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x110) = uVar18;
  *(long *)(puVar2 + -0x108) = lVar9;
  *(undefined1 **)(puVar2 + -0x100) = puVar2 + -0xf0;
  *(code **)(puVar2 + -0xf8) = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__StartHitPlayerSection;
  unaff_x29 = puVar2 + -0x100;
  unaff_x20 = 0x3eb4000;
  if ((bRam0000000003eb4ec3 & 1) == 0) {
    func_0x00f78a20(0x3d527f0);
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb4ec3 = 1;
  }
  lVar22 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__get_FtueUsablesDefinition(unaff_x19);
  if (lVar22 == 0) {
LAB_01535ee8:
    unaff_x30 = Atlas_Gameplay_FTUE_BaseLayerFTUEUsables__OnHit;
    param_1 = func_0x00f78af4();
    goto code_r0x01535eec;
  }
  param_3 = (ulong)*(uint *)(lVar22 + 0x1ac);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__SwitchToSection
            (unaff_x19,*(undefined8 *)(lVar22 + 400),param_3,*(char *)(lVar22 + 0x1a8) != '\0',0);
  *(undefined4 *)(unaff_x19 + 0xe8) = 3;
  if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_01535ee8;
  unaff_x22 = 0x3d52000;
  lVar22 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0x40);
  unaff_x21 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728);
  param_3 = uRam0000000003d527f0;
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate$$.ctor*/ func_0x0155389c(unaff_x21,unaff_x19,uRam0000000003d527f0,0);
  unaff_x20 = 0;
  if (lVar22 == 0) goto LAB_01535ee8;
  *(undefined8 *)(puVar2 + -0x120) = *(undefined8 *)(puVar2 + -0x120);
  *(undefined8 *)(puVar2 + -0x118) = *(undefined8 *)(puVar2 + -0x118);
  *(undefined8 *)(puVar2 + -0x110) = *(undefined8 *)(puVar2 + -0x110);
  *(undefined8 *)(puVar2 + -0x108) = *(undefined8 *)(puVar2 + -0x108);
  *(undefined8 *)(puVar2 + -0x100) = *(undefined8 *)(puVar2 + -0x100);
  *(undefined8 *)(puVar2 + -0xf8) = *(undefined8 *)(puVar2 + -0xf8);
  if ((bRam0000000003eb51f9 & 1) == 0) {
    func_0x00f78a20(0x3d27728,unaff_x21,0);
    bRam0000000003eb51f9 = 1;
  }
  plVar23 = (long *)(lVar22 + 0x98);
  lVar22 = *plVar23;
  while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar22,unaff_x21,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728))) {
    lVar9 = func_0x00ff0f44(plVar23,plVar11,lVar22);
    bVar6 = lVar22 == lVar9;
    lVar22 = lVar9;
    if (bVar6) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar11);
  uVar12 = auVar32._8_8_;
  puVar3 = puVar2 + -0x150;
  *(undefined8 *)(puVar2 + -0x150) = 0x3d27728;
  *(long *)(puVar2 + -0x148) = lVar22;
  *(long **)(puVar2 + -0x140) = plVar23;
  *(long *)(puVar2 + -0x138) = unaff_x21;
  *(undefined1 **)(puVar2 + -0x130) = puVar2 + -0x100;
  *(undefined **)(puVar2 + -0x128) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHitShield;
  puVar25 = puVar2 + -0x130;
  if ((bRam0000000003eb51fb & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fb = 1;
  }
  uVar18 = 0x3d27730;
  plVar23 = (long *)(auVar32._0_8_ + 0xa0);
  lVar22 = *plVar23;
  while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar22,uVar12,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar9 = func_0x00ff0f44(plVar23,plVar11,lVar22);
    bVar6 = lVar22 == lVar9;
    lVar22 = lVar9;
    if (bVar6) {
      return;
    }
  }
  puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableUsed;
  auVar33 = func_0x00f78e5c(plVar11);
code_r0x0159d188:
  *(undefined8 *)(puVar3 + -0x30) = uVar18;
  *(long *)(puVar3 + -0x28) = lVar22;
  *(long **)(puVar3 + -0x20) = plVar23;
  *(undefined8 *)(puVar3 + -0x18) = uVar12;
  *(undefined1 **)(puVar3 + -0x10) = puVar25;
  *(undefined **)(puVar3 + -8) = puVar26;
  if ((bRam0000000003eb51f3 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f3 = 1;
  }
  plVar23 = (long *)(auVar33._0_8_ + 0x80);
  lVar22 = *plVar23;
  while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar22,auVar33._8_8_,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar9 = func_0x00ff0f44(plVar23,plVar11,lVar22);
    bVar6 = lVar22 == lVar9;
    lVar22 = lVar9;
    if (bVar6) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar11);
  *(undefined8 *)(puVar3 + -0x60) = 0x3d27718;
  *(long *)(puVar3 + -0x58) = lVar22;
  *(long **)(puVar3 + -0x50) = plVar23;
  *(long *)(puVar3 + -0x48) = auVar33._8_8_;
  *(undefined1 **)(puVar3 + -0x40) = puVar3 + -0x10;
  *(undefined **)(puVar3 + -0x38) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnUsableHoppedOver;
  if ((bRam0000000003eb51fd & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fd = 1;
  }
  plVar23 = (long *)(auVar32._0_8_ + 0xa8);
  lVar22 = *plVar23;
  while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar22,auVar32._8_8_,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar9 = func_0x00ff0f44(plVar23,plVar11,lVar22);
    bVar6 = lVar22 == lVar9;
    lVar22 = lVar9;
    if (bVar6) {
      return;
    }
  }
  auVar33 = func_0x00f78e5c(plVar11);
  *(undefined8 *)(puVar3 + -0x90) = 0x3d27738;
  *(long *)(puVar3 + -0x88) = lVar22;
  *(long **)(puVar3 + -0x80) = plVar23;
  *(long *)(puVar3 + -0x78) = auVar32._8_8_;
  *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x40;
  *(undefined **)(puVar3 + -0x68) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__add_OnBeforeRespawn;
  if ((bRam0000000003eb51f5 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f5 = 1;
  }
  plVar23 = (long *)(auVar33._0_8_ + 0x88);
  lVar22 = *plVar23;
  while ((plVar11 = (long *)/*System.Delegate$$Combine*/ func_0x02ab18f0(lVar22,auVar33._8_8_,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar9 = func_0x00ff0f44(plVar23,plVar11,lVar22);
    bVar6 = lVar22 == lVar9;
    lVar22 = lVar9;
    if (bVar6) {
      return;
    }
  }
  auVar34 = func_0x00f78e5c(plVar11);
  puVar4 = puVar3 + -0xe0;
  *(undefined8 *)(puVar3 + -0xe0) = unaff_x26;
  *(undefined8 *)(puVar3 + -0xd8) = unaff_x25;
  *(undefined8 *)(puVar3 + -0xd0) = unaff_x24;
  *(undefined8 **)(puVar3 + -200) = unaff_x23;
  *(undefined8 *)(puVar3 + -0xc0) = 0x3d27700;
  *(long *)(puVar3 + -0xb8) = lVar22;
  *(long **)(puVar3 + -0xb0) = plVar23;
  *(long *)(puVar3 + -0xa8) = auVar33._8_8_;
  *(undefined1 **)(puVar3 + -0xa0) = puVar3 + -0x70;
  *(code **)(puVar3 + -0x98) = Atlas_Contexts_GameContextBase__DeInitAtlasPlayers;
  puVar25 = puVar3 + -0xa0;
  unaff_x23 = (undefined8 *)0x3d27718;
  unaff_x24 = 0x3d570f0;
  if ((bRam0000000003eb51b7 & 1) == 0) {
    func_0x00f78a20(0x3d524e0);
    func_0x00f78a20(0x3d524e8);
    func_0x00f78a20(0x3d524f0);
    func_0x00f78a20(0x3d524f8);
    func_0x00f78a20(0x3d570d0);
    func_0x00f78a20(0x3d570f0);
    func_0x00f78a20(0x3d27700);
    func_0x00f78a20(0x3d27718);
    func_0x00f78a20(0x3d27728);
    func_0x00f78a20(0x3d27730);
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51b7 = 1;
  }
  unaff_x21 = *(long *)(auVar34._0_8_ + 0x40);
  uVar12 = func_0x00f78aec(/*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718);
  auVar35._8_8_ = uVar12;
  auVar35._0_8_ = unaff_x21;
  uVar18 = 0;
  /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate$$.ctor*/ func_0x01552f54(uVar12,auVar34._0_8_,uRam0000000003d570f0,0);
  if (unaff_x21 == 0) {
    puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableUsed;
    auVar35 = func_0x00f78af4();
  }
  else {
    unaff_x24 = 0x3d27000;
    unaff_x25 = 0x3d52000;
    puVar26 = (undefined *)0x159d470;
    puVar4 = puVar3 + -0xe0;
  }
code_r0x0159d5c4:
  *(undefined8 *)(puVar4 + -0x30) = uVar12;
  *(long *)(puVar4 + -0x28) = unaff_x21;
  *(long *)(puVar4 + -0x20) = auVar34._8_8_;
  *(long *)(puVar4 + -0x18) = auVar34._0_8_;
  *(undefined1 **)(puVar4 + -0x10) = puVar25;
  *(undefined **)(puVar4 + -8) = puVar26;
  if ((bRam0000000003eb51f4 & 1) == 0) {
    func_0x00f78a20(0x3d27718);
    bRam0000000003eb51f4 = 1;
  }
  plVar23 = (long *)(auVar35._0_8_ + 0x80);
  lVar22 = *plVar23;
  while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar22,auVar35._8_8_,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableActionDelegate_TypeInfo*/ lRam0000000003d27718))) {
    lVar9 = func_0x00ff0f44(plVar23,plVar11,lVar22);
    bVar6 = lVar22 == lVar9;
    lVar22 = lVar9;
    if (bVar6) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar11);
  *(undefined8 *)(puVar4 + -0x60) = 0x3d27718;
  *(long *)(puVar4 + -0x58) = lVar22;
  *(long **)(puVar4 + -0x50) = plVar23;
  *(long *)(puVar4 + -0x48) = auVar35._8_8_;
  *(undefined1 **)(puVar4 + -0x40) = puVar4 + -0x10;
  *(undefined **)(puVar4 + -0x38) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnBeforeRespawn;
  if ((bRam0000000003eb51f6 & 1) == 0) {
    func_0x00f78a20(0x3d27700);
    bRam0000000003eb51f6 = 1;
  }
  plVar23 = (long *)(auVar32._0_8_ + 0x88);
  lVar22 = *plVar23;
  while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar22,auVar32._8_8_,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.PlayerDelegate_TypeInfo*/ lRam0000000003d27700))) {
    lVar9 = func_0x00ff0f44(plVar23,plVar11,lVar22);
    bVar6 = lVar22 == lVar9;
    lVar22 = lVar9;
    if (bVar6) {
      return;
    }
  }
  auVar33 = func_0x00f78e5c(plVar11);
  *(undefined8 *)(puVar4 + -0x90) = 0x3d27700;
  *(long *)(puVar4 + -0x88) = lVar22;
  *(long **)(puVar4 + -0x80) = plVar23;
  *(long *)(puVar4 + -0x78) = auVar32._8_8_;
  *(undefined1 **)(puVar4 + -0x70) = puVar4 + -0x40;
  *(undefined **)(puVar4 + -0x68) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHoppedOver;
  if ((bRam0000000003eb51fe & 1) == 0) {
    func_0x00f78a20(0x3d27738);
    bRam0000000003eb51fe = 1;
  }
  plVar23 = (long *)(auVar33._0_8_ + 0xa8);
  lVar22 = *plVar23;
  while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar22,auVar33._8_8_,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHoppedOverDelegate_TypeInfo*/ lRam0000000003d27738))) {
    lVar9 = func_0x00ff0f44(plVar23,plVar11,lVar22);
    bVar6 = lVar22 == lVar9;
    lVar22 = lVar9;
    if (bVar6) {
      return;
    }
  }
  auVar32 = func_0x00f78e5c(plVar11);
  param_1 = auVar32._8_8_;
  puVar5 = puVar4 + -0xc0;
  *(undefined8 *)(puVar4 + -0xc0) = 0x3d27738;
  *(long *)(puVar4 + -0xb8) = lVar22;
  *(long **)(puVar4 + -0xb0) = plVar23;
  *(long *)(puVar4 + -0xa8) = auVar33._8_8_;
  *(undefined1 **)(puVar4 + -0xa0) = puVar4 + -0x70;
  *(undefined **)(puVar4 + -0x98) =
       &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitShield;
  puVar25 = puVar4 + -0xa0;
  if ((bRam0000000003eb51fc & 1) == 0) {
    func_0x00f78a20(0x3d27730);
    bRam0000000003eb51fc = 1;
  }
  unaff_x22 = 0x3d27730;
  plVar23 = (long *)(auVar32._0_8_ + 0xa0);
  unaff_x21 = *plVar23;
  while ((plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(unaff_x21,param_1,0), plVar11 == (long *)0x0 ||
         (*plVar11 == /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitShieldDelegate_TypeInfo*/ lRam0000000003d27730))) {
    lVar22 = func_0x00ff0f44(plVar23,plVar11,unaff_x21);
    bVar6 = unaff_x21 == lVar22;
    unaff_x21 = lVar22;
    if (bVar6) {
      return;
    }
  }
  puVar26 = &Atlas_Gameplay_Player_GameContextPlayerManager__remove_OnUsableHitPlayer;
  auVar32 = func_0x00f78e5c(plVar11);
code_r0x0159d844:
  *(undefined8 *)(puVar5 + -0x30) = unaff_x22;
  *(long *)(puVar5 + -0x28) = unaff_x21;
  *(long **)(puVar5 + -0x20) = plVar23;
  *(long *)(puVar5 + -0x18) = param_1;
  *(undefined1 **)(puVar5 + -0x10) = puVar25;
  *(undefined **)(puVar5 + -8) = puVar26;
  if ((bRam0000000003eb51fa & 1) == 0) {
    func_0x00f78a20(0x3d27728);
    bRam0000000003eb51fa = 1;
  }
  plVar23 = (long *)0x3d27728;
  plVar11 = (long *)(auVar32._0_8_ + 0x98);
  lVar22 = *plVar11;
  while( true ) {
    puVar16 = (undefined8 *)0x0;
    plVar13 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar22,auVar32._8_8_);
    if ((plVar13 != (long *)0x0) && (*plVar13 != /*Atlas.Gameplay.Player.GameContextPlayerEvents.UsableHitPlayerDelegate_TypeInfo*/ lRam0000000003d27728)) break;
    lVar9 = func_0x00ff0f44(plVar11,plVar13,lVar22);
    bVar6 = lVar22 == lVar9;
    lVar22 = lVar9;
    if (bVar6) {
      return;
    }
  }
  lVar9 = func_0x00f78e5c(plVar13);
  *(undefined8 *)(puVar5 + -0x80) = unaff_x26;
  *(undefined8 *)(puVar5 + -0x78) = unaff_x25;
  *(undefined8 *)(puVar5 + -0x70) = unaff_x24;
  *(undefined8 **)(puVar5 + -0x68) = unaff_x23;
  *(undefined8 *)(puVar5 + -0x60) = 0x3d27728;
  *(long *)(puVar5 + -0x58) = lVar22;
  *(long **)(puVar5 + -0x50) = plVar11;
  *(long *)(puVar5 + -0x48) = auVar32._8_8_;
  *(undefined1 **)(puVar5 + -0x40) = puVar5 + -0x10;
  *(undefined **)(puVar5 + -0x38) = &Atlas_Gameplay_Player_GameContextPlayerManager__DeInit;
  lVar22 = 0x3eb5000;
  if ((bRam0000000003eb5204 & 1) == 0) {
    func_0x00f78a20(0x3d29f28);
    func_0x00f78a20(0x3d2a1d8);
    func_0x00f78a20(0x3d2a1c8);
    func_0x00f78a20(0x3d1b4e0);
    func_0x00f78a20(0x3d1b4e8);
    func_0x00f78a20(0x3d1b3b0);
    func_0x00f78a20(0x3d43378);
    func_0x00f78a20(0x3d57230);
    func_0x00f78a20(0x3d57238);
    func_0x00f78a20(0x3d57240);
    bRam0000000003eb5204 = 1;
  }
  lVar10 = *(long *)(lVar9 + 0x28);
  if (lVar10 != 0) {
    plVar23 = (long *)(lVar9 + 0x10);
    uVar20 = *(uint *)(lVar10 + 0x18);
    if ((int)uVar20 < 1) {
code_r0x0159d9f0:
      if (((*(long *)(lVar9 + 0x20) == 0) ||
          (lVar21 = *(long *)(*(long *)(lVar9 + 0x20) + 0x20), lVar21 == 0)) ||
         (unaff_x23 = *(undefined8 **)(lVar21 + 0x10), unaff_x23 == (undefined8 *)0x0))
      goto code_r0x0159db7c;
      uVar12 = 0x3d1b4e8;
      unaff_x24 = 0x3d1b4e8;
      lVar22 = unaff_x23[3];
      lVar10 = func_0x00f78aec(/*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8);
      uVar18 = uRam0000000003d2a1d8;
      /*System.Action<NetworkGameMode>$$.ctor*/ func_0x01e44b28(lVar10,lVar9,uRam0000000003d57238,uRam0000000003d2a1d8);
      puVar16 = (undefined8 *)0x0;
      plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar22,lVar10);
      if ((plVar11 == (long *)0x0) || (*plVar11 == /*System.Action<NetworkGameMode>_TypeInfo*/ lRam0000000003d1b4e8)) {
        unaff_x23[3] = plVar11;
        if ((*(long *)(lVar9 + 0x20) == 0) ||
           ((lVar21 = *(long *)(*(long *)(lVar9 + 0x20) + 0x20), lVar21 == 0 ||
            (unaff_x23 = *(undefined8 **)(lVar21 + 0x10), unaff_x23 == (undefined8 *)0x0))))
        goto code_r0x0159db7c;
        uVar12 = 0x3d1b3b0;
        unaff_x24 = 0x3d1b3b0;
        lVar22 = unaff_x23[0xe];
        lVar10 = func_0x00f78aec(/*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0);
        uVar18 = uRam0000000003d29f28;
        /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar10,lVar9,uRam0000000003d57240,uRam0000000003d29f28);
        puVar16 = (undefined8 *)0x0;
        plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar22,lVar10);
        if ((plVar11 == (long *)0x0) || (*plVar11 == /*System.Action<List<NetworkEventStanding>>_TypeInfo*/ lRam0000000003d1b3b0)) {
          unaff_x23[0xe] = plVar11;
          if (((*(long *)(lVar9 + 0x20) == 0) ||
              (lVar21 = *(long *)(*(long *)(lVar9 + 0x20) + 0x20), lVar21 == 0)) ||
             (unaff_x23 = *(undefined8 **)(lVar21 + 0x10), unaff_x23 == (undefined8 *)0x0))
          goto code_r0x0159db7c;
          uVar12 = 0x3d1b4e0;
          lVar22 = unaff_x23[5];
          lVar10 = func_0x00f78aec(/*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0);
          uVar18 = uRam0000000003d2a1c8;
          /*System.Action<PropertyContainer.ValueAtPathVisitor>$$.ctor*/ func_0x01e47f2c(lVar10,lVar9,uRam0000000003d57230,uRam0000000003d2a1c8);
          puVar16 = (undefined8 *)0x0;
          plVar11 = (long *)/*System.Delegate$$Remove*/ func_0x02ab1bac(lVar22,lVar10);
          if ((plVar11 == (long *)0x0) || (*plVar11 == /*System.Action<NetworkEventResult>_TypeInfo*/ lRam0000000003d1b4e0)) {
            unaff_x23[5] = plVar11;
            *(undefined1 *)(lVar9 + 0x50) = 0;
            *(undefined8 *)(lVar9 + 0x18) = 0;
            *plVar23 = 0;
            *(undefined8 *)(lVar9 + 0x28) = 0;
            *(undefined8 *)(lVar9 + 0x20) = 0;
            return;
          }
        }
      }
      goto code_r0x0159db8c;
    }
    unaff_x23 = (undefined8 *)0x0;
    unaff_x24 = 0x3d43378;
    while( true ) {
      uVar24 = (uint)unaff_x23;
      uVar12 = unaff_x24;
      if (uVar20 <= uVar24) goto code_r0x0159db80;
      if (*plVar23 == 0) break;
      lVar22 = *(long *)(lVar10 + (long)(int)uVar24 * 8 + 0x20);
      puVar16 = puRam0000000003d43378;
      /*Core.Actors.ActorManager$$TryRemoveFromGroup<object>*/ func_0x0171ee50(*plVar23,lVar22);
      if (lVar22 == 0) break;
      /*Atlas.Gameplay.Player.GameContextPlayer$$DeInit*/ func_0x015a5404(lVar22);
      unaff_x23 = (undefined8 *)(ulong)(uVar24 + 1);
      uVar20 = *(uint *)(lVar10 + 0x18);
      if ((int)uVar20 <= (int)(uVar24 + 1)) goto code_r0x0159d9f0;
    }
  }
code_r0x0159db7c:
  func_0x00f78af4();
  uVar12 = unaff_x24;
code_r0x0159db80:
  uVar14 = func_0x00f78b24();
  func_0x00f78ac0(uVar14,0);
code_r0x0159db8c:
  auVar32 = func_0x00f78e5c();
  puVar15 = auVar32._8_8_;
  plVar11 = auVar32._0_8_;
  *(undefined8 *)(puVar5 + -0xc0) = uVar12;
  *(undefined8 **)(puVar5 + -0xb8) = unaff_x23;
  *(long **)(puVar5 + -0xb0) = plVar23;
  *(long *)(puVar5 + -0xa8) = lVar10;
  *(long *)(puVar5 + -0xa0) = lVar22;
  *(long *)(puVar5 + -0x98) = lVar9;
  *(undefined1 **)(puVar5 + -0x90) = puVar5 + -0x40;
  *(code **)(puVar5 + -0x88) = Atlas_Contexts_GameContextBase__HandleUsableHitPlayer;
  puVar17 = puVar16;
  if ((bRam0000000003eb51b8 & 1) == 0) {
    func_0x00f78a20(0x3d69658);
    bRam0000000003eb51b8 = 1;
  }
  if (((plVar11[3] != 0) &&
      (puVar17 = puVar16, /*Atlas.Stats.AtlasStats$$OnUsableHitPlayer*/ func_0x0146ecbc(plVar11[3],puVar15,puVar16,uVar18,0),
      puVar16 != (undefined8 *)0x0)) && (lVar22 = puVar16[2], lVar22 != 0)) {
    uVar12 = *(undefined8 *)(lVar22 + 0x48);
    uVar27 = *(undefined8 *)(lVar22 + 0x60);
    uVar14 = *(undefined8 *)(lVar22 + 0x58);
    *(undefined8 *)(puVar5 + -0xd8) = *(undefined8 *)(lVar22 + 0x50);
    *(undefined8 *)(puVar5 + -0xe0) = uVar12;
    *(undefined8 *)(puVar5 + -200) = uVar27;
    *(undefined8 *)(puVar5 + -0xd0) = uVar14;
    iVar7 = /*Core.Networking.NetworkPlayer$$IsLocal*/ func_0x0165ab90(puVar5 + -0xe0,0);
    if ((iVar7 == 0) || (puVar16 == puVar15)) {
      return;
    }
    iVar7 = (**(code **)(*plVar11 + 0x2a8))(plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
    if ((plVar11[0x18] != 0) && (lVar22 = *(long *)(plVar11[0x18] + 0x20), lVar22 != 0)) {
      /*Core.Networking.NetworkSession$$Now*/ func_0x0165e25c(puVar5 + -0xf8,lVar22,0);
      *(int *)(puVar16 + 0xf) = *(int *)(puVar16 + 0xf) + iVar7;
      uVar12 = *(undefined8 *)(puVar5 + -0xf8);
      puVar16[0x11] = *(undefined8 *)(puVar5 + -0xf0);
      puVar16[0x10] = uVar12;
      puVar16[0x12] = *(undefined8 *)(puVar5 + -0xe8);
      if (puVar16[2] != 0) {
        if (*(int *)(puVar16[2] + 0x50) == 0) {
          uVar12 = (**(code **)(*plVar11 + 0x208))(plVar11,*(undefined8 *)(*plVar11 + 0x210));
          puVar17 = (undefined8 *)0x0;
          iVar7 = /*System.String$$op_Equality*/ func_0x029bdf2c(uVar12,/*STR('BattleGameContext')*/ uRam0000000003d69658);
          if (iVar7 != 0) {
            if (plVar11[3] == 0) goto LAB_0159dcf8;
            /*Atlas.Stats.AtlasStats$$RecordBattlePoints*/ func_0x0146e660(plVar11[3],*(undefined4 *)(puVar16 + 0xf),0);
          }
        }
        if (plVar11[0x46] == 0) {
          return;
        }
        /*Atlas.Arcade.ArcadeEvent$$UsableHitPlayer*/ func_0x0144def8(plVar11[0x46],puVar15,puVar16,uVar18,0);
        return;
      }
    }
  }
LAB_0159dcf8:
  auVar36 = func_0x00f78af4();
  lVar22 = auVar36._0_8_;
  iVar7 = *(int *)(lVar22 + 0x78);
  uVar14 = puVar17[1];
  uVar12 = *puVar17;
  *(undefined8 *)(puVar5 + -0x118) = uVar14;
  *(undefined8 *)(puVar5 + -0x120) = uVar12;
  uVar18 = puVar17[2];
  *(undefined8 *)(puVar5 + -0x110) = uVar18;
  *(int *)(lVar22 + 0x78) = iVar7 + auVar36._8_4_;
  *(undefined8 *)(lVar22 + 0x88) = uVar14;
  *(undefined8 *)(lVar22 + 0x80) = uVar12;
  *(undefined8 *)(lVar22 + 0x90) = uVar18;
  return;
LAB_01478328:
  do {
    uVar8 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(puVar2 + -0x210,uRam0000000003d33320);
    if ((uVar8 & 1) == 0) {
LAB_01478494:
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0x210,uRam0000000003d33318);
      return;
    }
    lVar22 = func_0x00f78aec(/*Atlas.Gameplay.FTUE.BaseLayerFTUEManager.<>c__DisplayClass50_0_TypeInfo*/ uRam0000000003d26ac8);
    Atlas_Gameplay_FTUE_BaseLayerFTUEManager___c__DisplayClass50_0___ctor(lVar22,0);
    if (lVar22 == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(long *)(lVar22 + 0x50) = lVar10;
    uVar27 = *(undefined8 *)(puVar2 + -0x1e8);
    uVar14 = *(undefined8 *)(puVar2 + -0x1f0);
    uVar12 = *(undefined8 *)(puVar2 + -0x1d8);
    uVar18 = *(undefined8 *)(puVar2 + -0x1e0);
    uVar29 = *(undefined8 *)(puVar2 + -0x1f8);
    uVar28 = *(undefined8 *)(puVar2 + -0x200);
    *(undefined8 *)(lVar22 + 0x40) = *(undefined8 *)(puVar2 + -0x1d0);
    *(undefined8 *)(lVar22 + 0x28) = uVar27;
    *(undefined8 *)(lVar22 + 0x20) = uVar14;
    *(undefined8 *)(lVar22 + 0x38) = uVar12;
    *(undefined8 *)(lVar22 + 0x30) = uVar18;
    *(undefined8 *)(lVar22 + 0x18) = uVar29;
    *(undefined8 *)(lVar22 + 0x10) = uVar28;
    *(undefined8 *)(puVar2 + -0x260) = *(undefined8 *)(lVar22 + 0x18);
    uVar18 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,puVar2 + -0x260);
    uVar8 = /*Atlas.StringID$$Equals*/ func_0x015057f8(puVar2 + -0x1c0,uVar18,0);
  } while ((uVar8 & 1) == 0);
  if (*(long *)(lVar10 + 0x60) == 0) {
    func_0x00f78af4();
code_r0x014784dc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x14784e0);
    (*pcVar1)();
  }
  puVar16 = (undefined8 *)(lVar22 + 0x10);
  puVar17 = (undefined8 *)(lVar22 + 0x48);
  uVar8 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar10 + 0x60),*puVar16,puVar17,0);
  if ((uVar8 & 1) == 0) goto LAB_01478494;
  uVar18 = *(undefined8 *)(lVar10 + 0xa0);
  if (((*(ushort *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(/*UnityEngine.Object_TypeInfo*/ lRam0000000003d23990 + 0xe0) == 0)) {
    func_0x00f78ad0();
  }
  uVar8 = /*UnityEngine.Object$$op_Inequality*/ func_0x03249a9c(uVar18,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(long *)(lVar10 + 0xa0) == 0) {
      func_0x00f78af4();
      goto code_r0x014784dc;
    }
    *(undefined8 *)(puVar2 + -0x218) = *(undefined8 *)(*(long *)(lVar10 + 0xa0) + 0x18);
    *(undefined8 *)(puVar2 + -0x260) = *puVar16;
    uVar18 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,puVar2 + -0x260);
    uVar8 = /*Atlas.StringID$$Equals*/ func_0x015057f8(puVar2 + -0x218,uVar18,0);
    if ((uVar8 & 1) != 0) {
      uVar18 = *(undefined8 *)(lVar10 + 0x38);
      uVar12 = *puVar16;
      uVar27 = *(undefined8 *)(lVar22 + 0x28);
      uVar14 = *(undefined8 *)(lVar22 + 0x20);
      *(undefined8 *)(puVar2 + -0x298) = *(undefined8 *)(lVar22 + 0x18);
      *(undefined8 *)(puVar2 + -0x2a0) = uVar12;
      *(undefined8 *)(puVar2 + -0x288) = uVar27;
      *(undefined8 *)(puVar2 + -0x290) = uVar14;
      uVar12 = *(undefined8 *)(lVar22 + 0x30);
      *(undefined8 *)(puVar2 + -0x278) = *(undefined8 *)(lVar22 + 0x38);
      *(undefined8 *)(puVar2 + -0x280) = uVar12;
      *(undefined8 *)(puVar2 + -0x270) = *(undefined8 *)(lVar22 + 0x40);
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__CallReactions(lVar10,uVar18,puVar2 + -0x2a0);
      goto LAB_01478328;
    }
  }
  uVar12 = *puVar17;
  uVar18 = func_0x00f78aec(/*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate_TypeInfo*/ uRam0000000003d278d8);
  /*Atlas.Gameplay.HitVolumeBehaviour.HitVolumeDelegate$$.ctor*/ func_0x01554b60(uVar18,lVar22,uRam0000000003d62270,0);
  Atlas_Gameplay_FTUE_BaseLayerFTUEManager__AddBaseListener(lVar10,uVar12,uVar18,*puVar17);
  goto LAB_01478328;
LAB_01478624:
  do {
    uVar8 = /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$MoveNext*/ func_0x01f79ed8(puVar2 + -0x330,uRam0000000003d33320);
    if ((uVar8 & 1) == 0) {
      uVar19 = 0x7b;
code_r0x0147869c:
      *(undefined4 *)(puVar2 + -0x348) = uVar19;
      /*System.Collections.Generic.List.Enumerator<BaseLayerFTUEDefinition.TriggerPointReaction>$$Dispose*/ func_0x01f79ed4(puVar2 + -0x330,uRam0000000003d33318);
      if (*(int *)(puVar2 + -0x348) != 0x86) {
code_r0x014786b8:
        lVar9 = *plVar23;
        if (((*(ushort *)(lVar9 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar9 + 0xe0) == 0)) {
          func_0x00f78ad0();
          lVar9 = *plVar23;
        }
        *(undefined8 *)(lVar22 + 0xa8) = **(undefined8 **)(lVar9 + 0xb8);
      }
      return;
    }
    uVar18 = *(undefined8 *)(puVar2 + -800);
    *(undefined8 *)(puVar2 + -0x390) = *(undefined8 *)(puVar2 + -0x318);
    uVar12 = func_0x00f78ae0(/*Atlas.StringID_TypeInfo*/ uRam0000000003d24e08,puVar2 + -0x390);
    uVar8 = /*Atlas.StringID$$Equals*/ func_0x015057f8(lVar22 + 0xa8,uVar12,0);
  } while ((uVar8 & 1) == 0);
  if (*(long *)(lVar22 + 0x60) == 0) {
    func_0x00f78af4();
  }
  else {
    uVar8 = /*Atlas.Gameplay.HitVolumeRootBehaviour$$TryGetHitVolume*/ func_0x015b4e1c(*(long *)(lVar22 + 0x60),uVar18,puVar2 + -0x338,0);
    if ((uVar8 & 1) == 0) {
      uVar19 = 0x86;
      goto code_r0x0147869c;
    }
    if (*(long *)(puVar2 + -0x338) != 0) {
      Atlas_Gameplay_FTUE_BaseLayerFTUEManager__RemoveBaseListener
                (lVar22,*(undefined8 *)(*(long *)(puVar2 + -0x338) + 0x18));
      goto LAB_01478624;
    }
    func_0x00f78af4();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1478708);
  (*pcVar1)();
}



// ============================================================
// RVA: 0x1535f1c | Atlas.Gameplay.FTUE.BaseLayerFTUEUsables..ctor
// ============================================================

void Atlas_Gameplay_FTUE_BaseLayerFTUEUsables___ctor(void)

{
  return;
}



