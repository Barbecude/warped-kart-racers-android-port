// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.UI.Screens.LeaguePodiumScreen.LeagueResult

// ============================================================
// RVA: 0x155c24c | Atlas.UI.Screens.LeaguePodiumScreen.LeagueResult.FromLeague
// ============================================================

undefined8 *
Atlas_UI_Screens_LeaguePodiumScreen_LeagueResult__FromLeague
          (long param_1,long param_2,long param_3,undefined8 *******param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int extraout_w1;
  long lVar9;
  long lVar10;
  undefined4 *extraout_x8;
  undefined8 *******pppppppuVar11;
  undefined8 *unaff_x22;
  undefined8 *******unaff_x24;
  uint uVar12;
  ulong unaff_x25;
  undefined8 *******unaff_x26;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  long lStack_298;
  undefined8 ******ppppppuStack_290;
  undefined8 ******ppppppuStack_288;
  undefined8 *puStack_280;
  undefined8 ******ppppppuStack_278;
  long lStack_270;
  undefined8 *puStack_268;
  undefined1 **ppuStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 ******ppppppuStack_220;
  ulong uStack_218;
  undefined8 ******ppppppuStack_210;
  undefined8 ******ppppppuStack_208;
  undefined8 *puStack_200;
  undefined8 ******ppppppuStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  long lStack_1c8;
  undefined8 ******ppppppuStack_1c0;
  undefined8 ******ppppppuStack_1b8;
  undefined8 ******ppppppuStack_1b0;
  undefined8 ******ppppppuStack_1a8;
  undefined8 ******ppppppuStack_1a0;
  undefined8 ******ppppppuStack_198;
  undefined8 ******ppppppuStack_190;
  undefined8 ******ppppppuStack_188;
  undefined8 ******ppppppuStack_180;
  undefined8 ******ppppppuStack_178;
  undefined8 ******ppppppuStack_170;
  undefined8 ******ppppppuStack_168;
  undefined8 ******ppppppuStack_160;
  undefined8 ******ppppppuStack_158;
  undefined8 ******ppppppuStack_150;
  undefined8 ******ppppppuStack_140;
  undefined8 ******ppppppuStack_138;
  undefined8 ******ppppppuStack_130;
  undefined8 ******ppppppuStack_128;
  undefined8 ******ppppppuStack_120;
  undefined8 ******ppppppuStack_118;
  undefined8 ******ppppppuStack_110;
  undefined8 ******ppppppuStack_100;
  undefined8 ******ppppppuStack_f8;
  undefined8 ******ppppppuStack_f0;
  undefined8 ******ppppppuStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined8 ******ppppppuStack_c0;
  undefined8 ******ppppppuStack_b8;
  undefined8 ******ppppppuStack_b0;
  undefined8 ******ppppppuStack_a8;
  undefined8 ******ppppppuStack_a0;
  undefined8 ******ppppppuStack_98;
  undefined8 ******ppppppuStack_90;
  undefined8 ******ppppppuStack_88;
  undefined8 ******ppppppuStack_80;
  undefined8 uStack_78;
  
  pppppppuVar11 = (undefined8 *******)0x3eb4000;
  lVar9 = param_3;
  lStack_1c8 = param_1;
  if ((bRam0000000003eb4fb0 & 1) == 0) {
    func_0x00f78a20(0x3d57270);
    func_0x00f78a20(0x3d3d430);
    func_0x00f78a20(0x3d3d428);
    func_0x00f78a20(0x3d3afb0);
    func_0x00f78a20(0x3d3afb8);
    func_0x00f78a20(0x3d1e1e0);
    bRam0000000003eb4fb0 = 1;
  }
  uVar4 = uStack_78;
  if (param_2 != 0) {
    pppppppuVar11 = (undefined8 *******)0x3d3d000;
    unaff_x24 = (undefined8 *******)(ulong)*(uint *)(param_2 + 0x18);
    unaff_x22 = (undefined8 *)func_0x00f78aec(/*System.Collections.Generic.List<LeaguePodiumScreen.LeagueResult>_TypeInfo*/ uRam0000000003d1e1e0);
    lVar9 = lRam0000000003d3d428;
    /*System.Collections.Generic.List<LeaguePodiumScreen.LeagueResult>$$.ctor*/ func_0x02548f44(unaff_x22,unaff_x24);
    uVar4 = uStack_78;
    if (param_4 != (undefined8 *******)0x0) {
      unaff_x24 = &ppppppuStack_c0;
      uVar4 = /*Atlas.Save.SaveManager$$get_SaveData*/ func_0x014ea82c(param_4,0);
      Atlas_Gameplay_KartLoadout__FromSaveGame(&ppppppuStack_c0,uVar4,0);
      param_4 = (undefined8 *******)ppppppuStack_c0;
      ppppppuStack_f8 = ppppppuStack_b0;
      ppppppuStack_100 = ppppppuStack_b8;
      ppppppuStack_e8 = ppppppuStack_a0;
      ppppppuStack_f0 = ppppppuStack_a8;
      ppppppuStack_d8 = ppppppuStack_90;
      ppppppuStack_e0 = ppppppuStack_98;
      ppppppuStack_d0 = ppppppuStack_88;
      if (0 < *(int *)(param_2 + 0x18)) {
        unaff_x25 = 0;
        unaff_x26 = &ppppppuStack_1b8;
        pppppppuVar11 = &ppppppuStack_b0;
        lVar10 = lVar9;
        do {
          Atlas_Contexts_ContextManagerExtensions__GetRandomNetworkLoadout
                    (&ppppppuStack_c0,param_3,0);
          ppppppuStack_138 = ppppppuStack_b0;
          ppppppuStack_140 = ppppppuStack_b8;
          ppppppuStack_128 = ppppppuStack_a0;
          ppppppuStack_130 = ppppppuStack_a8;
          ppppppuStack_118 = ppppppuStack_90;
          ppppppuStack_120 = ppppppuStack_98;
          ppppppuStack_110 = ppppppuStack_88;
          uVar12 = (uint)unaff_x25;
          lVar9 = lVar10;
          if (*(uint *)(param_2 + 0x18) <= uVar12) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            lVar9 = lVar10;
          }
          lVar10 = *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar12 * 8 + 0x20);
          uVar4 = uStack_78;
          if (lVar10 == 0) goto LAB_0155c548;
          unaff_x24 = *(undefined8 ********)(lVar10 + 0x10);
          lVar9 = 0;
          iVar3 = /*System.String$$op_Equality*/ func_0x029bdf2c(param_4,unaff_x24);
          if (iVar3 != 0) {
            uVar4 = uStack_78;
            if (param_3 == 0) goto LAB_0155c548;
            unaff_x24 = *(undefined8 ********)(param_3 + 0x10);
            if (*(uint *)(param_2 + 0x18) <= uVar12) {
              /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar10 = *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar12 * 8 + 0x20);
            uVar4 = uStack_78;
            if (((lVar10 == 0) || (unaff_x24 == (undefined8 *******)0x0)) ||
               (lVar9 = lRam0000000003d57270,
               lVar10 = /*Core.Definitions.GameDefinitions$$GetDefinition<WheelsDefinition>*/ func_0x0185c46c(unaff_x24,*(undefined8 *)(lVar10 + 0x10)), uVar4 = uStack_78
               , lVar10 == 0)) goto LAB_0155c548;
            unaff_x24 = (undefined8 *******)/*Atlas.Definitions.CharacterDefinition$$get_AlternateID*/ func_0x01541064(lVar10,0);
          }
          ppppppuStack_178 = ppppppuStack_138;
          ppppppuStack_180 = ppppppuStack_140;
          ppppppuStack_168 = ppppppuStack_128;
          ppppppuStack_170 = ppppppuStack_130;
          ppppppuStack_158 = ppppppuStack_118;
          ppppppuStack_160 = ppppppuStack_120;
          ppppppuStack_150 = ppppppuStack_110;
          if (*(uint *)(param_2 + 0x18) <= uVar12) {
            /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar10 = *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar12 * 8 + 0x20);
          uVar4 = uStack_78;
          if (lVar10 == 0) goto LAB_0155c548;
          if (*(char *)(lVar10 + 0x18) == '\0') {
            uVar13 = 0;
            lVar10 = lRam0000000003d3d430;
          }
          else {
            uVar13 = *(undefined8 *)(lStack_1c8 + 0x10);
            ppppppuStack_1b0 = ppppppuStack_f8;
            ppppppuStack_1b8 = ppppppuStack_100;
            ppppppuStack_1a0 = ppppppuStack_e8;
            ppppppuStack_1a8 = ppppppuStack_f0;
            ppppppuStack_190 = ppppppuStack_d8;
            ppppppuStack_198 = ppppppuStack_e0;
            ppppppuStack_188 = ppppppuStack_d0;
            ppppppuStack_98 = (undefined8 *******)0x0;
            ppppppuStack_a0 = (undefined8 *******)0x0;
            ppppppuStack_88 = (undefined8 *******)0x0;
            ppppppuStack_90 = (undefined8 *******)0x0;
            ppppppuStack_b8 = (undefined8 *******)0x0;
            ppppppuStack_c0 = (undefined8 *******)0x0;
            ppppppuStack_a8 = (undefined8 *******)0x0;
            ppppppuStack_b0 = (undefined8 *******)0x0;
            ppppppuStack_1c0 = param_4;
            lVar9 = 0;
            /*Atlas.Networking.NetworkLoadout$$.ctor*/ func_0x014a7944(&ppppppuStack_c0,&ppppppuStack_1c0);
            unaff_x24 = (undefined8 *******)ppppppuStack_c0;
            lVar10 = lRam0000000003d3d430;
            ppppppuStack_180 = ppppppuStack_b8;
            ppppppuStack_178 = ppppppuStack_b0;
            ppppppuStack_170 = ppppppuStack_a8;
            ppppppuStack_168 = ppppppuStack_a0;
            ppppppuStack_160 = ppppppuStack_98;
            ppppppuStack_158 = ppppppuStack_90;
            ppppppuStack_150 = ppppppuStack_88;
            uVar4 = uStack_78;
          }
          uStack_78 = uVar13;
          lRam0000000003d3d430 = lVar10;
          if (unaff_x22 == (undefined8 *)0x0) goto LAB_0155c548;
          ppppppuStack_c0 = (undefined8 *******)0x0;
          ppppppuStack_b8 = unaff_x24;
          ppppppuStack_b0 = ppppppuStack_180;
          ppppppuStack_a8 = ppppppuStack_178;
          ppppppuStack_a0 = ppppppuStack_170;
          ppppppuStack_98 = ppppppuStack_168;
          ppppppuStack_90 = ppppppuStack_160;
          ppppppuStack_88 = ppppppuStack_158;
          ppppppuStack_80 = ppppppuStack_150;
          /*System.Collections.Generic.List<LeaguePodiumScreen.LeagueResult>$$Add*/ func_0x02549bd0(unaff_x22,&ppppppuStack_c0);
          unaff_x25 = (ulong)(uVar12 + 1);
        } while ((int)(uVar12 + 1) < *(int *)(param_2 + 0x18));
      }
      return unaff_x22;
    }
  }
LAB_0155c548:
  uStack_78 = uVar4;
  puVar5 = (undefined8 *)func_0x00f78af4();
  puStack_1d8 = &Atlas_UI_Screens_LeaguePodiumScreen_LeagueResult__GenerateNameLookup;
  lVar10 = 0x3eb4000;
  ppppppuStack_220 = unaff_x26;
  uStack_218 = unaff_x25;
  ppppppuStack_210 = unaff_x24;
  ppppppuStack_208 = param_4;
  puStack_200 = unaff_x22;
  ppppppuStack_1f8 = pppppppuVar11;
  lStack_1f0 = param_2;
  lStack_1e8 = param_3;
  puStack_1e0 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4fb1 & 1) == 0) {
    func_0x00f78a20(0x3d303b0);
    func_0x00f78a20(0x3d303a8);
    func_0x00f78a20(0x3d1c608);
    func_0x00f78a20(0x3d32b60);
    func_0x00f78a20(0x3d32b68);
    func_0x00f78a20(0x3d32b70);
    func_0x00f78a20(0x3d3b530);
    func_0x00f78a20(0x3d3b540);
    bRam0000000003eb4fb1 = 1;
  }
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  if ((puVar5 != (undefined8 *)0x0) && (lVar6 = /*Atlas.Networking.NetworkLobby$$GetNetworkPlayerList*/ func_0x014a9ac8(puVar5,0), lVar6 != 0)) {
    uVar1 = *(undefined4 *)(lVar6 + 0x18);
    puVar5 = (undefined8 *)func_0x00f78aec(/*System.Collections.Generic.Dictionary<uint, string>_TypeInfo*/ uRam0000000003d1c608);
    /*System.Collections.Generic.Dictionary<uint, string>$$.ctor*/ func_0x01ef90e4(puVar5,uVar1,uRam0000000003d303a8);
    /*System.Collections.Generic.List<NetworkPlayer>$$GetEnumerator*/ func_0x02414620(&uStack_250,lVar6,uRam0000000003d3b530);
    while( true ) {
      uVar7 = /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$MoveNext*/ func_0x01f6d9a8(&uStack_250,uRam0000000003d32b68);
      if ((uVar7 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_250,uRam0000000003d32b60);
        return puVar5;
      }
      if (puVar5 == (undefined8 *)0x0) break;
      /*System.Collections.Generic.Dictionary<uint, TMP_SpriteGlyph>$$Add*/ func_0x01ef95e8(puVar5,uStack_238._4_4_,uStack_230,uRam0000000003d303b0);
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x155c6c0);
    (*pcVar2)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar8 = (long *)___cxa_begin_catch();
    lVar10 = *plVar8;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_250,*unaff_x22);
    if (lVar10 == 0) {
      return puVar5;
    }
    func_0x00f78ac0(lVar10,0);
  }
  auVar14 = __Unwind_Resume();
  puStack_258 = &Atlas_UI_Screens_LeaguePodiumScreen_LeagueResult__FromSyncId;
  lStack_298 = *(long *)PTR_03a5d648;
  ppppppuStack_290 = unaff_x24;
  ppppppuStack_288 = param_4;
  puStack_280 = unaff_x22;
  ppppppuStack_278 = pppppppuVar11;
  lStack_270 = lVar10;
  puStack_268 = puVar5;
  ppuStack_260 = &puStack_1e0;
  if ((bRam0000000003eb4fb2 & 1) == 0) {
    func_0x00f78a20(0x3d303c0);
    bRam0000000003eb4fb2 = 1;
  }
  uStack_2dc = 0;
  if (auVar14._8_8_ != 0) {
    /*Atlas.Networking.NetworkLobby$$GetLoadoutFromSyncId*/ func_0x014a98b8(&uStack_320,auVar14._8_8_,auVar14._0_8_,0);
    uStack_2d0 = (undefined4)uStack_318;
    uStack_2cc = (undefined4)((ulong)uStack_318 >> 0x20);
    uStack_2d8 = (undefined4)uStack_320;
    uStack_2d4 = (undefined4)((ulong)uStack_320 >> 0x20);
    uStack_2c0 = (undefined4)uStack_308;
    uStack_2bc = (undefined4)((ulong)uStack_308 >> 0x20);
    uStack_2c8 = (undefined4)uStack_310;
    uStack_2c4 = (undefined4)((ulong)uStack_310 >> 0x20);
    uStack_2b0 = (undefined4)uStack_2f8;
    uStack_2ac = (undefined4)((ulong)uStack_2f8 >> 0x20);
    uStack_2b8 = (undefined4)uStack_300;
    uStack_2b4 = (undefined4)((ulong)uStack_300 >> 0x20);
    uStack_2a0 = (undefined4)uStack_2e8;
    uStack_29c = (undefined4)((ulong)uStack_2e8 >> 0x20);
    uStack_2a8 = (undefined4)uStack_2f0;
    uStack_2a4 = (undefined4)((ulong)uStack_2f0 >> 0x20);
    if (lVar9 != 0) {
      puVar5 = (undefined8 *)/*System.Collections.Generic.Dictionary<uint, TMP_SpriteGlyph>$$get_Item*/ func_0x01ef9520(lVar9,auVar14._0_8_,uRam0000000003d303c0);
      *(ulong *)(extraout_x8 + 7) = CONCAT44(uStack_2c0,uStack_2c4);
      *(ulong *)(extraout_x8 + 5) = CONCAT44(uStack_2c8,uStack_2cc);
      *(ulong *)(extraout_x8 + 0xb) = CONCAT44(uStack_2b0,uStack_2b4);
      *(ulong *)(extraout_x8 + 9) = CONCAT44(uStack_2b8,uStack_2bc);
      *(ulong *)(extraout_x8 + 0xf) = CONCAT44(uStack_2a0,uStack_2a4);
      *(ulong *)(extraout_x8 + 0xd) = CONCAT44(uStack_2a8,uStack_2ac);
      *extraout_x8 = auVar14._0_4_;
      extraout_x8[0x11] = uStack_29c;
      *(ulong *)(extraout_x8 + 3) = CONCAT44(uStack_2d0,uStack_2d4);
      *(ulong *)(extraout_x8 + 1) = CONCAT44(uStack_2d8,uStack_2dc);
      *(undefined8 **)(extraout_x8 + 0x12) = puVar5;
      if (*(long *)PTR_03a5d648 == lStack_298) {
        return puVar5;
      }
      goto code_r0x0155c80c;
    }
  }
  func_0x00f78af4();
code_r0x0155c80c:
  puVar5 = (undefined8 *)___stack_chk_fail();
  return puVar5;
}



// ============================================================
// RVA: 0x155c54c | Atlas.UI.Screens.LeaguePodiumScreen.LeagueResult.GenerateNameLookup
// ============================================================

long Atlas_UI_Screens_LeaguePodiumScreen_LeagueResult__GenerateNameLookup
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  int extraout_w1;
  undefined4 *extraout_x8;
  undefined8 *unaff_x22;
  undefined1 auVar7 [16];
  undefined1 auStack_150 [68];
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000003eb4fb1 & 1) == 0) {
    func_0x00f78a20(0x3d303b0);
    func_0x00f78a20(0x3d303a8);
    func_0x00f78a20(0x3d1c608);
    func_0x00f78a20(0x3d32b60);
    func_0x00f78a20(0x3d32b68);
    func_0x00f78a20(0x3d32b70);
    func_0x00f78a20(0x3d3b530);
    func_0x00f78a20(0x3d3b540);
    bRam0000000003eb4fb1 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if ((param_1 != 0) && (lVar3 = /*Atlas.Networking.NetworkLobby$$GetNetworkPlayerList*/ func_0x014a9ac8(param_1,0), lVar3 != 0)) {
    uVar1 = *(undefined4 *)(lVar3 + 0x18);
    lVar4 = func_0x00f78aec(/*System.Collections.Generic.Dictionary<uint, string>_TypeInfo*/ uRam0000000003d1c608);
    /*System.Collections.Generic.Dictionary<uint, string>$$.ctor*/ func_0x01ef90e4(lVar4,uVar1,uRam0000000003d303a8);
    /*System.Collections.Generic.List<NetworkPlayer>$$GetEnumerator*/ func_0x02414620(&uStack_80,lVar3,uRam0000000003d3b530);
    while( true ) {
      uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$MoveNext*/ func_0x01f6d9a8(&uStack_80,uRam0000000003d32b68);
      if ((uVar5 & 1) == 0) {
        /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_80,uRam0000000003d32b60);
        return lVar4;
      }
      if (lVar4 == 0) break;
      /*System.Collections.Generic.Dictionary<uint, TMP_SpriteGlyph>$$Add*/ func_0x01ef95e8(lVar4,uStack_68._4_4_,uStack_60,uRam0000000003d303b0);
    }
    func_0x00f78af4();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x155c6c0);
    (*pcVar2)();
  }
  func_0x00f78af4();
  if (extraout_w1 == 1) {
    plVar6 = (long *)___cxa_begin_catch();
    lVar3 = *plVar6;
    ___cxa_end_catch();
    /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_80,*unaff_x22);
    if (lVar3 == 0) {
      return param_1;
    }
    func_0x00f78ac0(lVar3,0);
  }
  auVar7 = __Unwind_Resume();
  lStack_c8 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb4fb2 & 1) == 0) {
    func_0x00f78a20(0x3d303c0);
    bRam0000000003eb4fb2 = 1;
  }
  uStack_10c = 0;
  if (auVar7._8_8_ != 0) {
    /*Atlas.Networking.NetworkLobby$$GetLoadoutFromSyncId*/ func_0x014a98b8(auStack_150,auVar7._8_8_,auVar7._0_8_,0);
    uStack_100 = (undefined4)auStack_150._8_8_;
    uStack_fc = SUB84(auStack_150._8_8_,4);
    uStack_108 = (undefined4)auStack_150._0_8_;
    uStack_104 = SUB84(auStack_150._0_8_,4);
    uStack_f0 = (undefined4)auStack_150._24_8_;
    uStack_ec = SUB84(auStack_150._24_8_,4);
    uStack_f8 = (undefined4)auStack_150._16_8_;
    uStack_f4 = SUB84(auStack_150._16_8_,4);
    uStack_e0 = (undefined4)auStack_150._40_8_;
    uStack_dc = SUB84(auStack_150._40_8_,4);
    uStack_e8 = (undefined4)auStack_150._32_8_;
    uStack_e4 = SUB84(auStack_150._32_8_,4);
    uStack_d0 = (undefined4)auStack_150._56_8_;
    uStack_cc = SUB84(auStack_150._56_8_,4);
    uStack_d8 = (undefined4)auStack_150._48_8_;
    uStack_d4 = SUB84(auStack_150._48_8_,4);
    if (param_3 != 0) {
      lVar3 = /*System.Collections.Generic.Dictionary<uint, TMP_SpriteGlyph>$$get_Item*/ func_0x01ef9520(param_3,auVar7._0_8_,uRam0000000003d303c0);
      *(ulong *)(extraout_x8 + 7) = CONCAT44(uStack_f0,uStack_f4);
      *(ulong *)(extraout_x8 + 5) = CONCAT44(uStack_f8,uStack_fc);
      *(ulong *)(extraout_x8 + 0xb) = CONCAT44(uStack_e0,uStack_e4);
      *(ulong *)(extraout_x8 + 9) = CONCAT44(uStack_e8,uStack_ec);
      *(ulong *)(extraout_x8 + 0xf) = CONCAT44(uStack_d0,uStack_d4);
      *(ulong *)(extraout_x8 + 0xd) = CONCAT44(uStack_d8,uStack_dc);
      *extraout_x8 = auVar7._0_4_;
      extraout_x8[0x11] = uStack_cc;
      *(ulong *)(extraout_x8 + 3) = CONCAT44(uStack_100,uStack_104);
      *(ulong *)(extraout_x8 + 1) = CONCAT44(uStack_108,uStack_10c);
      *(long *)(extraout_x8 + 0x12) = lVar3;
      if (*(long *)PTR_03a5d648 == lStack_c8) {
        return lVar3;
      }
      goto code_r0x0155c80c;
    }
  }
  func_0x00f78af4();
code_r0x0155c80c:
  lVar3 = ___stack_chk_fail();
  return lVar3;
}



// ============================================================
// RVA: 0x155c700 | Atlas.UI.Screens.LeaguePodiumScreen.LeagueResult.FromSyncId
// ============================================================

void Atlas_UI_Screens_LeaguePodiumScreen_LeagueResult__FromSyncId
               (undefined4 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_d0 [68];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  
  lStack_48 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb4fb2 & 1) == 0) {
    func_0x00f78a20(0x3d303c0);
    bRam0000000003eb4fb2 = 1;
  }
  uStack_8c = 0;
  if (param_3 != 0) {
    /*Atlas.Networking.NetworkLobby$$GetLoadoutFromSyncId*/ func_0x014a98b8(auStack_d0,param_3,param_2,0);
    uStack_80 = (undefined4)auStack_d0._8_8_;
    uStack_7c = SUB84(auStack_d0._8_8_,4);
    uStack_88 = (undefined4)auStack_d0._0_8_;
    uStack_84 = SUB84(auStack_d0._0_8_,4);
    uStack_70 = (undefined4)auStack_d0._24_8_;
    uStack_6c = SUB84(auStack_d0._24_8_,4);
    uStack_78 = (undefined4)auStack_d0._16_8_;
    uStack_74 = SUB84(auStack_d0._16_8_,4);
    uStack_60 = (undefined4)auStack_d0._40_8_;
    uStack_5c = SUB84(auStack_d0._40_8_,4);
    uStack_68 = (undefined4)auStack_d0._32_8_;
    uStack_64 = SUB84(auStack_d0._32_8_,4);
    uStack_50 = (undefined4)auStack_d0._56_8_;
    uStack_4c = SUB84(auStack_d0._56_8_,4);
    uStack_58 = (undefined4)auStack_d0._48_8_;
    uStack_54 = SUB84(auStack_d0._48_8_,4);
    if (param_4 != 0) {
      uVar1 = /*System.Collections.Generic.Dictionary<uint, TMP_SpriteGlyph>$$get_Item*/ func_0x01ef9520(param_4,param_2,uRam0000000003d303c0);
      *(ulong *)(param_1 + 7) = CONCAT44(uStack_70,uStack_74);
      *(ulong *)(param_1 + 5) = CONCAT44(uStack_78,uStack_7c);
      *(ulong *)(param_1 + 0xb) = CONCAT44(uStack_60,uStack_64);
      *(ulong *)(param_1 + 9) = CONCAT44(uStack_68,uStack_6c);
      *(ulong *)(param_1 + 0xf) = CONCAT44(uStack_50,uStack_54);
      *(ulong *)(param_1 + 0xd) = CONCAT44(uStack_58,uStack_5c);
      *param_1 = (int)param_2;
      param_1[0x11] = uStack_4c;
      *(ulong *)(param_1 + 3) = CONCAT44(uStack_80,uStack_84);
      *(ulong *)(param_1 + 1) = CONCAT44(uStack_88,uStack_8c);
      *(undefined8 *)(param_1 + 0x12) = uVar1;
      if (*(long *)PTR_03a5d648 == lStack_48) {
        return;
      }
      goto LAB_0155c80c;
    }
  }
  func_0x00f78af4();
LAB_0155c80c:
  ___stack_chk_fail();
  return;
}



