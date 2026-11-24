// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.MultiplayerLobbyScreenBehaviour

// ============================================================
// RVA: 0x1498d34 | Atlas.UI.Screens.MultiplayerLobbyScreenBehaviour.SetAndActivateTournamentIcon
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x1498e00 | Atlas.UI.Screens.MultiplayerLobbyScreenBehaviour.SetAndActivateQuickPlayIcon
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x149aa8c | Atlas.UI.Screens.MultiplayerLobbyScreenBehaviour.SetStatusText
// ============================================================

/* WARNING: Possible PIC construction at 0x0167e558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0167e570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0167e55c) */
/* WARNING: Removing unreachable block (ram,0x0167e574) */
/* WARNING: Removing unreachable block (ram,0x016ce334) */

ulong Atlas_UI_Screens_MultiplayerLobbyScreenBehaviour__SetStatusText
                (long param_1,undefined8 param_2,undefined8 param_3,undefined1 **param_4)

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
  long *plVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  int *piVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint uVar23;
  undefined *puVar24;
  long lVar25;
  int iVar26;
  undefined1 *puVar27;
  undefined *unaff_x21;
  undefined1 **unaff_x22;
  undefined1 **ppuVar28;
  ulong uVar29;
  undefined1 ****ppppuVar30;
  undefined *puVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [12];
  ulong auStack_190 [4];
  undefined1 auStack_170 [12];
  int iStack_164;
  undefined1 **ppuStack_160;
  undefined *puStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined1 ****ppppuStack_140;
  undefined *puStack_138;
  undefined1 *puStack_100;
  int *piStack_f8;
  undefined1 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  undefined1 *puStack_d0;
  int *piStack_c8;
  undefined1 ****ppppuStack_c0;
  undefined *puStack_b8;
  undefined1 **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  int *piStack_98;
  undefined1 ***pppuStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  long lStack_78;
  undefined1 **ppuStack_70;
  undefined *puStack_68;
  undefined4 uStack_5c;
  undefined *puStack_58;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  plVar15 = *(long **)(param_1 + 0x70);
  if (plVar15 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0149aaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar16 = (**(code **)(*plVar15 + 0x558))(plVar15,param_2,*(undefined8 *)(*plVar15 + 0x560));
    return uVar16;
  }
  lVar17 = func_0x00f78af4();
  pcStack_18 = Atlas_UI_Screens_MultiplayerLobbyScreen__SetPlayerCountText;
  puVar27 = (undefined1 *)0x3eb4000;
  puStack_20 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb49f9 & 1) == 0) {
    puStack_20 = &stack0xfffffffffffffff0;
    func_0x00f78a20(0x3d2c818);
    func_0x00f78a20(0x3d22910);
    func_0x00f78a20(0x3d3b090);
    func_0x00f78a20(0x3d411c0);
    func_0x00f78a20(0x3d70ed0);
    bRam0000000003eb49f9 = 1;
  }
  puStack_58 = (undefined *)0x0;
  if ((*(long *)(lVar17 + 0xa0) != 0) && (*(long *)(lVar17 + 0x80) != 0)) {
    uVar12 = *(undefined4 *)(*(long *)(lVar17 + 0xa0) + 0x18);
    param_4 = (undefined1 **)0x0;
    /*Core.Localisation.LocalisationManager$$TryGetLocalisedString*/ func_0x0164fe1c(*(long *)(lVar17 + 0x80),/*STR('PLAY_FRIENDS_ROOM_PLAYERCOUNT')*/ uRam0000000003d70ed0,&puStack_58);
    puVar27 = (undefined1 *)/*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d411c0);
    unaff_x21 = puStack_58;
    uStack_5c = uVar12;
    uVar18 = func_0x00f78ae0(/*int_TypeInfo*/ uRam0000000003d22910,&uStack_5c);
    uVar18 = /*System.String$$Format*/ func_0x029bc688(unaff_x21,uVar18,0);
    unaff_x22 = (undefined1 **)0x3d411c0;
    if ((puVar27 != (undefined1 *)0x0) &&
       (plVar15 = *(long **)(puVar27 + 0x70), plVar15 != (long *)0x0)) {
      (**(code **)(*plVar15 + 0x558))(plVar15,uVar18,*(undefined8 *)(*plVar15 + 0x560));
      lVar19 = /*Core.UI2.UIScreen<VotingScreenBehaviour, VotingScreen.TransitionData, AtlasSharedScreenParams>$$get_Behaviour*/ func_0x028a6368(lVar17,uRam0000000003d411c0);
      unaff_x22 = (undefined1 **)0x3d411c0;
      if (lVar19 != 0) {
        uVar16 = Atlas_UI_Screens_AtlasScreen_ArcadeModeSelectScreenBehaviour__ArcadeModeSelectScreen_TransitionData___ReLayoutLayoutAndContentSizeFitters
                           (lVar17,*(undefined8 *)(lVar19 + 0x68),uRam0000000003d2c818);
        return uVar16;
      }
    }
  }
  lVar19 = func_0x00f78af4();
  piVar20 = (int *)(lVar19 + 0x40);
  puStack_68 = &Atlas_Networking_Network__get_LocalPlayerSyncId;
  puVar24 = (undefined *)0x0;
  puStack_80 = puVar27;
  lStack_78 = lVar17;
  ppuStack_70 = &puStack_20;
  uVar16 = /*FlatBuffers.Table$$__offset*/ func_0x016cf120(piVar20,8);
  if ((int)uVar16 == 0) {
    return uVar16;
  }
  if (*(long *)(lVar19 + 0x48) != 0) {
    uVar16 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar19 + 0x48),*piVar20 + (int)uVar16,4);
    return uVar16;
  }
  auVar32 = func_0x00f78af4();
  lVar17 = auVar32._0_8_;
  pppuVar6 = &ppuStack_b0;
  puStack_88 = &Core_Services_Player__CreatePlayer;
  ppppuVar30 = &pppuStack_90;
  ppuStack_b0 = unaff_x22;
  puStack_a8 = unaff_x21;
  puStack_a0 = puVar27;
  piStack_98 = piVar20;
  pppuStack_90 = &ppuStack_70;
  if (lVar17 != 0) {
    puVar31 = &UNK_0167e55c;
    ppuVar28 = param_4;
code_r0x016ce2a4:
    piVar20 = auVar32._0_8_;
    uVar18 = 0;
    *(undefined1 ***)((long)pppuVar6 + -0x30) = ppuVar28;
    *(undefined **)((long)pppuVar6 + -0x28) = puVar24;
    *(long *)((long)pppuVar6 + -0x20) = auVar32._8_8_;
    *(long *)((long)pppuVar6 + -0x18) = lVar17;
    *(undefined1 *****)((long)pppuVar6 + -0x10) = ppppuVar30;
    *(undefined **)((long)pppuVar6 + -8) = puVar31;
    if ((bRam0000000003eb5cd7 & 1) == 0) {
      func_0x00f78a20(0x3d1f100);
      bRam0000000003eb5cd7 = 1;
    }
    /*FlatBuffers.FlatBufferBuilder$$NotNested*/ func_0x016ce1a4(piVar20);
    if (*(long *)(piVar20 + 10) != 0) {
      if (*(int *)(*(long *)(piVar20 + 10) + 0x18) < 3) {
        uVar18 = func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,3);
        *(undefined8 *)(piVar20 + 10) = uVar18;
      }
      piVar20[0xc] = 3;
      uVar16 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(piVar20);
      piVar20[0xd] = (int)uVar16;
      return uVar16;
    }
    auVar33 = func_0x00f78af4();
    pppppuVar7 = (undefined1 *****)((long)pppuVar6 + -0x30);
    puVar27 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
    unaff_x21 = (undefined *)0x3eb5000;
    unaff_x22 = ppuVar28;
    ppppuVar30 = (undefined1 ****)((long)pppuVar6 + -0x10);
    puVar24 = &FlatBuffers_FlatBufferBuilder__Slot;
    goto code_r0x016ce380;
  }
  auVar32 = func_0x00f78af4();
  uVar16 = auVar32._0_8_;
  ppppuStack_c0 = ppppuVar30;
  if (uVar16 != 0) {
    param_4 = (undefined1 **)0x0;
    puStack_b8 = &Core_Services_Player__AddSyncId;
    if ((auVar32._8_4_ == 0) && (*(char *)(uVar16 + 0x48) == '\0')) {
      return uVar16;
    }
    uVar18 = 0;
    ppuStack_e0 = unaff_x22;
    puStack_d8 = unaff_x21;
    puStack_d0 = puVar27;
    piStack_c8 = piVar20;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar16,4,0,0,0);
    /*FlatBuffers.FlatBufferBuilder$$PutUint*/ func_0x016cdd10(uVar16,auVar32._8_8_);
    auVar33._8_8_ = 2;
    auVar33._0_8_ = uVar16;
    pppppuVar7 = (undefined1 *****)&ppuStack_b0;
    piVar20 = piStack_c8;
    puVar27 = puStack_d0;
    unaff_x21 = puStack_d8;
    unaff_x22 = ppuStack_e0;
    ppppuVar30 = ppppuStack_c0;
    puVar24 = puStack_b8;
    goto code_r0x016ce380;
  }
  pppppuVar7 = &ppppuStack_c0;
  puStack_b8 = &Core_Services_Player__AddSyncId;
  puVar24 = &Core_Services_Player__AddId;
  auVar32 = func_0x00f78af4();
  if (auVar32._0_8_ == 0) {
    pppppuVar7 = (undefined1 *****)&puStack_d0;
    piStack_c8 = (int *)&Core_Services_Player__AddId;
    puVar24 = &Core_Services_Player__AddDisplayName;
    puStack_d0 = (undefined1 *)&ppppuStack_c0;
    auVar32 = func_0x00f78af4();
    if (auVar32._0_8_ == 0) {
      puStack_d8 = &Core_Services_Player__AddDisplayName;
      ppuStack_e0 = &puStack_d0;
      lVar17 = func_0x00f78af4();
      pppuVar6 = (undefined1 ***)&puStack_100;
      puStack_e8 = &Core_Services_Player__EndPlayer;
      ppppuVar30 = &pppuStack_f0;
      puStack_100 = puVar27;
      piStack_f8 = piVar20;
      pppuStack_f0 = &ppuStack_e0;
      if ((bRam0000000003eb59e8 & 1) == 0) {
        pppuStack_f0 = &ppuStack_e0;
        func_0x00f78a20(0x3d3f1c0);
        bRam0000000003eb59e8 = 1;
      }
      if (lVar17 == 0) {
        puVar31 = &Core_Services_Player__StartPlayer;
        lVar17 = func_0x00f78af4();
        auVar32._8_8_ = 0x3eb5000;
        auVar32._0_8_ = lVar17;
        if (lVar17 == 0) {
          lVar17 = func_0x00f78af4();
          return *(ulong *)(lVar17 + 8);
        }
        lVar17 = 0;
        puVar24 = unaff_x21;
        ppuVar28 = unaff_x22;
        goto code_r0x016ce2a4;
      }
      uVar16 = 0x3eb5000;
      if ((bRam0000000003eb5cd8 & 1) == 0) {
        func_0x00f78a20(0x3d1f100,0);
        bRam0000000003eb5cd8 = 1;
      }
      if (-1 < *(int *)(lVar17 + 0x30)) {
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,4,0);
        /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar17,0);
        uVar16 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar17);
        unaff_x21 = (undefined *)(ulong)*(uint *)(lVar17 + 0x30);
        uVar23 = *(uint *)(lVar17 + 0x30) - 1;
        if (-2 < (int)uVar23) {
          uVar23 = 0xffffffff;
        }
        unaff_x22 = (undefined1 **)(ulong)uVar23;
        do {
          uVar5 = (int)unaff_x21 - 1;
          unaff_x21 = (undefined *)(ulong)uVar5;
          iVar26 = (int)uVar16;
          if ((int)uVar5 < 0) goto code_r0x016ceb30;
          lVar19 = *(long *)(lVar17 + 0x28);
          if (lVar19 == 0) goto code_r0x016ced84;
          if (*(uint *)(lVar19 + 0x18) <= uVar5) goto code_r0x016ced88;
        } while (*(int *)(lVar19 + (ulong)uVar5 * 4 + 0x20) == 0);
        unaff_x22 = (undefined1 **)(unaff_x21 + 8);
        do {
          ppuVar28 = unaff_x22 + -1;
          if ((undefined1 **)(ulong)*(uint *)(lVar19 + 0x18) <= ppuVar28) goto code_r0x016ced88;
          iVar13 = *(int *)(lVar19 + (long)unaff_x22 * 4);
          sVar9 = 0;
          if (iVar13 != 0) {
            sVar9 = (short)uVar16 - (short)iVar13;
          }
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,2,0);
          /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar17,(int)sVar9);
          lVar19 = *(long *)(lVar17 + 0x28);
          if (lVar19 == 0) goto code_r0x016ced84;
          if ((undefined1 **)(ulong)*(uint *)(lVar19 + 0x18) <= ppuVar28) goto code_r0x016ced88;
          *(undefined4 *)(lVar19 + (long)unaff_x22 * 4) = 0;
          unaff_x22 = (undefined1 **)((long)unaff_x22 + -1);
          uVar23 = uVar5;
        } while (0 < (long)ppuVar28);
code_r0x016ceb30:
        uVar12 = *(undefined4 *)(lVar17 + 0x34);
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar17,(int)(short)((short)uVar16 - (short)uVar12));
        uVar23 = uVar23 * 2 + 6;
        unaff_x21 = (undefined *)(ulong)uVar23;
        /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar17,2,0);
        /*FlatBuffers.FlatBufferBuilder$$PutShort*/ func_0x016cdbfc(lVar17,(int)(short)uVar23);
        unaff_x22 = (undefined1 **)(ulong)*(uint *)(lVar17 + 0x40);
        if (0 < (int)*(uint *)(lVar17 + 0x40)) {
          uVar29 = 0;
          do {
            lVar19 = *(long *)(lVar17 + 0x18);
            if (((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) ||
               (lVar25 = *(long *)(lVar17 + 0x38), lVar25 == 0)) goto code_r0x016ced84;
            if (*(uint *)(lVar25 + 0x18) <= uVar29) goto code_r0x016ced88;
            uVar5 = *(int *)(*(long *)(lVar19 + 0x10) + 0x18) - *(int *)(lVar25 + uVar29 * 4 + 0x20)
            ;
            unaff_x21 = (undefined *)(ulong)uVar5;
            uVar23 = *(uint *)(lVar17 + 0x10);
            unaff_x22 = (undefined1 **)(ulong)uVar23;
            sVar9 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar19,unaff_x21,2);
            if (*(long *)(lVar17 + 0x18) == 0) goto code_r0x016ced84;
            sVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar17 + 0x18),unaff_x22,2);
            if (sVar9 == sVar10) {
              if (sVar9 < 3) {
code_r0x016cec64:
                unaff_x21 = *(undefined **)(lVar17 + 0x38);
                if (unaff_x21 == (undefined *)0x0) goto code_r0x016ced84;
                if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar29) goto code_r0x016ced88;
                iVar13 = *(int *)(unaff_x21 + uVar29 * 4 + 0x20);
                if (iVar13 == 0) {
                  unaff_x22 = (undefined1 **)(ulong)*(uint *)(lVar17 + 0x40);
                  goto code_r0x016cecac;
                }
                unaff_x21 = *(undefined **)(lVar17 + 0x18);
                if ((unaff_x21 == (undefined *)0x0) || (*(long *)(unaff_x21 + 0x10) == 0))
                goto code_r0x016ced84;
                iVar14 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18) - iVar26;
                *(int *)(lVar17 + 0x10) = iVar14;
                iVar13 = iVar13 - iVar26;
                goto code_r0x016ced3c;
              }
              iVar13 = 2;
              while( true ) {
                if (*(long *)(lVar17 + 0x18) == 0) goto code_r0x016ced84;
                sVar10 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar17 + 0x18),uVar5 + iVar13,2);
                if (*(long *)(lVar17 + 0x18) == 0) goto code_r0x016ced84;
                sVar11 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(*(long *)(lVar17 + 0x18),uVar23 + iVar13,2);
                if (sVar10 != sVar11) break;
                iVar13 = iVar13 + 2;
                if (sVar9 <= iVar13) goto code_r0x016cec64;
              }
            }
            uVar29 = uVar29 + 1;
            unaff_x22 = (undefined1 **)(long)*(int *)(lVar17 + 0x40);
          } while ((long)uVar29 < (long)unaff_x22);
        }
        unaff_x21 = *(undefined **)(lVar17 + 0x38);
        if (unaff_x21 == (undefined *)0x0) {
code_r0x016ced84:
          func_0x00f78af4();
        }
        else {
code_r0x016cecac:
          if ((int)unaff_x22 == *(int *)(unaff_x21 + 0x18)) {
            unaff_x21 = (undefined *)func_0x00f78a34(/*int[]_TypeInfo*/ uRam0000000003d1f100,(int)unaff_x22 << 1);
            lVar19 = *(long *)(lVar17 + 0x38);
            if (lVar19 == 0) goto code_r0x016ced84;
            /*System.Array$$Copy*/ func_0x0292c49c(lVar19,unaff_x21,*(undefined4 *)(lVar19 + 0x18),0);
            *(undefined **)(lVar17 + 0x38) = unaff_x21;
            unaff_x22 = (undefined1 **)(ulong)*(uint *)(lVar17 + 0x40);
          }
          uVar23 = (uint)unaff_x22;
          *(uint *)(lVar17 + 0x40) = uVar23 + 1;
          uVar12 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar17);
          if (unaff_x21 == (undefined *)0x0) goto code_r0x016ced84;
          if (uVar23 < *(uint *)(unaff_x21 + 0x18)) {
            *(undefined4 *)(unaff_x21 + (long)(int)uVar23 * 4 + 0x20) = uVar12;
            unaff_x21 = *(undefined **)(lVar17 + 0x18);
            if ((unaff_x21 != (undefined *)0x0) && (*(long *)(unaff_x21 + 0x10) != 0)) {
              iVar14 = *(int *)(*(long *)(unaff_x21 + 0x10) + 0x18);
              iVar13 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04(lVar17);
              iVar14 = iVar14 - iVar26;
              iVar13 = iVar13 - iVar26;
code_r0x016ced3c:
              /*FlatBuffers.ByteBuffer$$AssertOffsetAndLength*/ func_0x016cc7a4(unaff_x21,iVar14,4);
              /*FlatBuffers.ByteBuffer$$WriteLittleEndian*/ func_0x016cc4e0(unaff_x21,iVar14,4,(long)iVar13);
              *(undefined4 *)(lVar17 + 0x30) = 0xffffffff;
              return uVar16;
            }
            goto code_r0x016ced84;
          }
        }
code_r0x016ced88:
        uVar18 = func_0x00f78b24();
        func_0x00f78ac0(uVar18,0);
      }
      func_0x00f78a24(0x3d22a38);
      uVar18 = func_0x00f78aec();
      uVar21 = func_0x00f78a24(0x3d6cea8);
      iVar26 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar18,uVar21);
      uVar21 = func_0x00f78a24(0x3d56a30);
      auVar34 = func_0x00f78ac0(uVar18,uVar21);
      puStack_138 = &FlatBuffers_FlatBufferBuilder__Required;
      pppppuVar7 = &ppppuStack_140;
      lVar17 = *(long *)(auVar34._0_8_ + 0x18);
      iStack_164 = iVar26;
      ppuStack_160 = unaff_x22;
      puStack_158 = unaff_x21;
      uStack_150 = uVar16;
      uStack_148 = uVar18;
      ppppuStack_140 = &pppuStack_f0;
      if ((lVar17 != 0) && (*(long *)(lVar17 + 0x10) != 0)) {
        iVar13 = *(int *)(*(long *)(lVar17 + 0x10) + 0x18) - auVar34._8_4_;
        iVar14 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar17,iVar13,4);
        lVar17 = *(long *)(auVar34._0_8_ + 0x18);
        if (lVar17 != 0) {
          uVar16 = /*FlatBuffers.ByteBuffer$$ReadLittleEndian*/ func_0x016cc634(lVar17,(iVar13 - iVar14) + iVar26,2);
          if ((uVar16 & 0xffff) != 0) {
            return uVar16;
          }
          goto code_r0x016cee5c;
        }
      }
      func_0x00f78af4();
code_r0x016cee5c:
      uVar18 = /*System.Int32$$ToString*/ func_0x02ae9b8c(&iStack_164,0);
      uVar21 = func_0x00f78a24(0x3d6ce88);
      uVar22 = func_0x00f78a24(0x3d66338);
      lVar17 = /*System.String$$Concat*/ func_0x029be39c(uVar21,uVar18,uVar22,0);
      func_0x00f78a24(0x3d22a38);
      uVar16 = func_0x00f78aec();
      uVar21 = 0;
      /*System.InvalidOperationException$$.ctor*/ func_0x02ae6938(uVar16,lVar17);
      uVar18 = func_0x00f78a24(0x3d56a50);
      puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
      auVar32 = func_0x00f78ac0(uVar16,uVar18);
      puVar27 = auStack_170;
      do {
        uVar29 = auVar32._8_8_;
        lVar19 = auVar32._0_8_;
        *(ulong *)(puVar27 + -0x20) = uVar16;
        *(long *)(puVar27 + -0x18) = lVar17;
        *(undefined1 ******)(puVar27 + -0x10) = pppppuVar7;
        *(undefined **)(puVar27 + -8) = puVar24;
        pppppuVar7 = (undefined1 *****)(puVar27 + -0x10);
        if ((int)uVar21 == 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),4);
          uVar16 = /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar29);
code_r0x016cef70:
          if (*(long *)(lVar19 + 0x18) != 0) {
            *(undefined4 *)(*(long *)(lVar19 + 0x18) + 0x18) = *(undefined4 *)(lVar19 + 0x10);
            return uVar16;
          }
        }
        else if (lVar19 != 0) {
          /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,*(undefined4 *)(lVar19 + 0x20),8);
          /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(lVar19,uVar29);
          if ((*(long *)(lVar19 + 0x18) != 0) &&
             (lVar17 = *(long *)(*(long *)(lVar19 + 0x18) + 0x10), lVar17 != 0)) {
            uVar29 = (ulong)(uint)(*(int *)(lVar17 + 0x18) - *(int *)(lVar19 + 0x10));
            /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(lVar19,4,0);
            uVar16 = /*FlatBuffers.FlatBufferBuilder$$PutInt*/ func_0x016cdcb4(lVar19,uVar29);
            goto code_r0x016cef70;
          }
        }
        puVar24 = &FlatBuffers_FlatBufferBuilder__Finish;
        auVar32 = func_0x00f78af4();
        uVar21 = 0;
        puVar27 = puVar27 + -0x20;
        lVar17 = lVar19;
        uVar16 = uVar29;
      } while( true );
    }
    uVar21 = 0;
  }
  else {
    uVar21 = 1;
  }
  uVar18 = auVar32._8_8_;
  uVar16 = auVar32._0_8_;
  auVar33._8_8_ = uVar21;
  auVar33._0_8_ = uVar16;
  param_4 = (undefined1 **)0x0;
  *(undefined1 **)((long)pppppuVar7 + -0x20) = puVar27;
  *(int **)((long)pppppuVar7 + -0x18) = piVar20;
  *(undefined1 ******)((long)pppppuVar7 + -0x10) = pppppuVar7;
  *(undefined **)((long)pppppuVar7 + -8) = puVar24;
  if ((auVar32._8_4_ == 0) && (*(char *)(uVar16 + 0x48) == '\0')) {
    return uVar16;
  }
  /*FlatBuffers.FlatBufferBuilder$$AddOffset*/ func_0x016ce0c8(uVar16,uVar18,uVar18,0,0);
  ppppuVar30 = *(undefined1 *****)((long)pppppuVar7 + -0x10);
  puVar24 = *(undefined **)((long)pppppuVar7 + -8);
  puVar27 = *(undefined1 **)((long)pppppuVar7 + -0x20);
  piVar20 = *(int **)((long)pppppuVar7 + -0x18);
code_r0x016ce380:
  do {
    uVar21 = auVar33._8_8_;
    *(undefined1 **)((long)pppppuVar7 + -0x20) = puVar27;
    *(int **)((long)pppppuVar7 + -0x18) = piVar20;
    *(undefined1 *****)((long)pppppuVar7 + -0x10) = ppppuVar30;
    *(undefined **)((long)pppppuVar7 + -8) = puVar24;
    uVar23 = auVar33._8_4_;
    if ((int)uVar23 < *(int *)(auVar33._0_8_ + 0x30)) {
      puVar27 = *(undefined1 **)(auVar33._0_8_ + 0x28);
      uVar16 = /*FlatBuffers.FlatBufferBuilder$$get_Offset*/ func_0x016cda04();
      uVar22 = uVar18;
      if (puVar27 == (undefined1 *)0x0) goto code_r0x016ce410;
      if (uVar23 < *(uint *)(puVar27 + 0x18)) {
        *(int *)(puVar27 + (long)(int)uVar23 * 4 + 0x20) = (int)uVar16;
        return uVar16;
      }
    }
    else {
      func_0x00f78a24(0x3d22738);
      uVar21 = func_0x00f78aec();
      uVar18 = func_0x00f78a24(0x3d6ceb8);
      uVar22 = 0;
      /*System.IndexOutOfRangeException$$.ctor*/ func_0x02ae8c34(uVar21,uVar18);
      uVar18 = func_0x00f78a24(0x3d56a58);
      func_0x00f78ac0(uVar21,uVar18);
code_r0x016ce410:
      func_0x00f78af4();
    }
    uVar18 = func_0x00f78b24();
    auVar33 = func_0x00f78ac0(uVar18,0);
    uVar16 = auVar33._0_8_;
    puVar8 = (undefined8 *)((long)pppppuVar7 + -0x50);
    *(undefined1 ***)((long)pppppuVar7 + -0x50) = unaff_x22;
    *(undefined **)((long)pppppuVar7 + -0x48) = unaff_x21;
    *(undefined1 **)((long)pppppuVar7 + -0x40) = puVar27;
    *(undefined8 *)((long)pppppuVar7 + -0x38) = uVar21;
    *(undefined1 **)((long)pppppuVar7 + -0x30) = (undefined1 *)((long)pppppuVar7 + -0x10);
    *(undefined **)((long)pppppuVar7 + -0x28) = &FlatBuffers_FlatBufferBuilder__AddBool;
    if (((int)uVar22 == (int)param_4) && (*(char *)(uVar16 + 0x48) == '\0')) {
      return uVar16;
    }
    uVar18 = 0;
    /*FlatBuffers.FlatBufferBuilder$$Prep*/ func_0x016cdaac(uVar16,1);
    /*FlatBuffers.FlatBufferBuilder$$PutBool*/ func_0x016cdb6c(uVar16,uVar22);
    plVar15 = (long *)((long)pppppuVar7 + -0x30);
    puVar2 = (undefined8 *)((long)pppppuVar7 + -0x28);
    puVar1 = (undefined8 *)((long)pppppuVar7 + -0x40);
    puVar3 = (undefined8 *)((long)pppppuVar7 + -0x38);
    puVar4 = (undefined8 *)((long)pppppuVar7 + -0x48);
    pppppuVar7 = (undefined1 *****)((long)pppppuVar7 + -0x20);
    piVar20 = (int *)*puVar3;
    puVar27 = (undefined1 *)*puVar1;
    unaff_x21 = (undefined *)*puVar4;
    unaff_x22 = (undefined1 **)*puVar8;
    ppppuVar30 = (undefined1 ****)*plVar15;
    puVar24 = (undefined *)*puVar2;
  } while( true );
}



// ============================================================
// RVA: 0x149b368 | Atlas.UI.Screens.MultiplayerLobbyScreenBehaviour.get_StatusRoot
// ============================================================

undefined8 Atlas_UI_Screens_MultiplayerLobbyScreenBehaviour__get_StatusRoot(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



// ============================================================
// RVA: 0x149b370 | Atlas.UI.Screens.MultiplayerLobbyScreenBehaviour.get_Timer
// ============================================================

undefined8 Atlas_UI_Screens_MultiplayerLobbyScreenBehaviour__get_Timer(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



// ============================================================
// RVA: 0x149b378 | Atlas.UI.Screens.MultiplayerLobbyScreenBehaviour.get_GameContextRep
// ============================================================

undefined8 Atlas_UI_Screens_MultiplayerLobbyScreenBehaviour__get_GameContextRep(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



// ============================================================
// RVA: 0x149b380 | Atlas.UI.Screens.MultiplayerLobbyScreenBehaviour.get_ModeIcon
// ============================================================

undefined8 Atlas_UI_Screens_MultiplayerLobbyScreenBehaviour__get_ModeIcon(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



// ============================================================
// RVA: 0x149b388 | Atlas.UI.Screens.MultiplayerLobbyScreenBehaviour.get_LoadingDotsBehaviour
// ============================================================

undefined8 Atlas_UI_Screens_MultiplayerLobbyScreenBehaviour__get_LoadingDotsBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



// ============================================================
// RVA: 0x149b390 | Atlas.UI.Screens.MultiplayerLobbyScreenBehaviour.get_NamePlateBehaviours
// ============================================================

undefined8 Atlas_UI_Screens_MultiplayerLobbyScreenBehaviour__get_NamePlateBehaviours(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



// ============================================================
// RVA: 0x149b398 | Atlas.UI.Screens.MultiplayerLobbyScreenBehaviour.get_LobbySettingsButton
// ============================================================

undefined8 Atlas_UI_Screens_MultiplayerLobbyScreenBehaviour__get_LobbySettingsButton(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



// ============================================================
// RVA: 0x149b3a0 | Atlas.UI.Screens.MultiplayerLobbyScreenBehaviour.get_TotalPortalSpawnDuration
// ============================================================

undefined4
Atlas_UI_Screens_MultiplayerLobbyScreenBehaviour__get_TotalPortalSpawnDuration(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc4);
}



// ============================================================
// RVA: 0x149b3a8 | Atlas.UI.Screens.MultiplayerLobbyScreenBehaviour.get_PortalSpawnStartDelay
// ============================================================

undefined4 Atlas_UI_Screens_MultiplayerLobbyScreenBehaviour__get_PortalSpawnStartDelay(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc0);
}



// ============================================================
// RVA: 0x149b3b0 | Atlas.UI.Screens.MultiplayerLobbyScreenBehaviour.get_GroupCodeBehaviour
// ============================================================

undefined8 Atlas_UI_Screens_MultiplayerLobbyScreenBehaviour__get_GroupCodeBehaviour(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



// ============================================================
// RVA: 0x149b3b8 | Atlas.UI.Screens.MultiplayerLobbyScreenBehaviour.get_GroupHostAudioEvent
// ============================================================

undefined8 Atlas_UI_Screens_MultiplayerLobbyScreenBehaviour__get_GroupHostAudioEvent(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



// ============================================================
// RVA: 0x149b3c0 | Atlas.UI.Screens.MultiplayerLobbyScreenBehaviour.get_LockHostOptionsIcon
// ============================================================

undefined8 Atlas_UI_Screens_MultiplayerLobbyScreenBehaviour__get_LockHostOptionsIcon(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



// ============================================================
// RVA: 0x149b3c8 | Atlas.UI.Screens.MultiplayerLobbyScreenBehaviour..ctor
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] Atlas_UI_Screens_MultiplayerLobbyScreenBehaviour___ctor(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000003eb4a00 & 1) == 0) {
    func_0x00f78a20(0x3d79000);
    bRam0000000003eb4a00 = 1;
  }
  *(undefined8 *)(param_1 + 0xc0) = _UNK_033f8430;
  *(undefined8 *)(param_1 + 0xd0) = /*STR('event:/UI/Front_End/GameCentre')*/ uRam0000000003d79000;
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



