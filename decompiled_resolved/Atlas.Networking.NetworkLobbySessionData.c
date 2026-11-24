// Decompiled from UnityFramework (ARM64 IL2CPP) via Ghidra 12.1.4
// Class: Atlas.Networking.NetworkLobbySessionData

// ============================================================
// RVA: 0x14a8138 | Atlas.Networking.NetworkLobbySessionData..ctor
// ============================================================

void Atlas_Networking_NetworkLobbySessionData___ctor(void)

{
  return;
}



// ============================================================
// RVA: 0x14a8140 | Atlas.Networking.NetworkLobbySessionData.Init
// ============================================================

void Atlas_Networking_NetworkLobbySessionData__Init
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000003eb4a74 & 1) == 0) {
    func_0x00f78a20(0x3d203b0);
    func_0x00f78a20(0x3d1eda0);
    func_0x00f78a20(0x3d21960);
    bRam0000000003eb4a74 = 1;
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  uVar1 = func_0x00f78aec(/*FlatBuffers.ByteBuffer_TypeInfo*/ uRam0000000003d203b0);
  /*FlatBuffers.ByteBuffer$$.ctor*/ func_0x016cbfd8(uVar1,0x400,0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = func_0x00f78a34(/*byte[]_TypeInfo*/ uRam0000000003d1eda0,0x400);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = func_0x00f78aec(/*FlatBuffers.FlatBufferBuilder_TypeInfo*/ uRam0000000003d21960);
  /*FlatBuffers.FlatBufferBuilder$$.ctor*/ func_0x016cd874(uVar1,uVar2,0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



// ============================================================
// RVA: 0x14a8e14 | Atlas.Networking.NetworkLobbySessionData.SetHostSessionData
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14a9684 | Atlas.Networking.NetworkLobbySessionData.SetLocalPlayerSessionData
// ============================================================

ulong Atlas_Networking_NetworkLobbySessionData__SetLocalPlayerSessionData
                (long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int extraout_w1;
  int extraout_w1_00;
  long lVar8;
  undefined8 *extraout_x8;
  ulong unaff_x19;
  long *plVar9;
  long lVar10;
  int iVar11;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_620;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  int iStack_604;
  undefined8 uStack_600;
  int iStack_5f8;
  undefined4 uStack_5f4;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  int iStack_590;
  undefined4 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 auStack_530 [4];
  undefined8 uStack_510;
  undefined4 uStack_504;
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
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long lStack_478;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 *puStack_430;
  undefined8 uStack_428;
  long lStack_420;
  ulong uStack_418;
  undefined1 ***pppuStack_410;
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined4 uStack_380;
  int iStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  undefined1 **ppuStack_230;
  code *pcStack_228;
  int iStack_1a0;
  undefined4 uStack_198;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uStack_68 = param_4;
    uStack_64 = param_3;
    /*FlatBuffers.ByteBuffer$$Reset*/ func_0x016cc1bc(*(long *)(param_1 + 0x20),0);
    unaff_x22 = param_2;
    if (*(long *)(param_1 + 0x28) != 0) {
      /*FlatBuffers.FlatBufferBuilder$$Clear*/ func_0x016cd920(*(long *)(param_1 + 0x28),0);
      unaff_x23 = *(undefined8 *)(param_1 + 0x28);
      unaff_x24 = /*Atlas.Networking.NetworkLobbySessionData$$StringToKey*/ func_0x014ac63c(param_1,*(undefined8 *)(param_2 + 0x30));
      unaff_x25 = /*Atlas.Networking.NetworkLobbySessionData$$StringToKey*/ func_0x014ac63c(param_1,*(undefined8 *)(param_2 + 0x38));
      unaff_x26 = /*Atlas.Networking.NetworkLobbySessionData$$StringToKey*/ func_0x014ac63c(param_1,*(undefined8 *)(param_2 + 0x40));
      unaff_x27 = (undefined8 *)/*Atlas.Networking.NetworkLobbySessionData$$StringToKey*/ func_0x014ac63c(param_1,*(undefined8 *)(param_2 + 0x48));
      unaff_x28 = (undefined8 *)/*Atlas.Networking.NetworkLobbySessionData$$StringToKey*/ func_0x014ac63c(param_1,*(undefined8 *)(param_2 + 0x50));
      uVar4 = /*Atlas.Networking.NetworkLobbySessionData$$StringToKey*/ func_0x014ac63c(param_1,*(undefined8 *)(param_2 + 0x58));
      unaff_x21 = /*Atlas.Networking.NetworkLobbySessionData$$StringToKey*/ func_0x014ac63c(param_1,*(undefined8 *)(param_2 + 0x60));
      uStack_80 = /*Atlas.Networking.NetworkLobbySessionData$$StringToKey*/ func_0x014ac63c(param_1,*(undefined8 *)(param_2 + 0x68));
      uStack_78 = 0;
      uVar3 = /*Core.Networking.SessionKartVisuals$$CreateSessionKartVisuals*/ func_0x01662364(unaff_x23,unaff_x24,unaff_x25,unaff_x26,unaff_x27,unaff_x28,uVar4,
                              unaff_x21);
      /*Core.Networking.ClientSessionInfo$$StartClientSessionInfo*/ func_0x01653b8c(*(undefined8 *)(param_1 + 0x28),0);
      /*Core.Networking.ClientSessionInfo$$AddVisuals*/ func_0x01653ad4(*(undefined8 *)(param_1 + 0x28),uVar3,0);
      /*Core.Networking.ClientSessionInfo$$AddIsReady*/ func_0x01653af8(*(undefined8 *)(param_1 + 0x28),*(char *)(param_2 + 0x72) != '\0',0);
      /*Core.Networking.ClientSessionInfo$$AddIsInLobby*/ func_0x01653b1c(*(undefined8 *)(param_1 + 0x28),*(char *)(param_2 + 0x71) != '\0',0);
      unaff_x19 = /*Core.Networking.ClientSessionInfo$$EndClientSessionInfo*/ func_0x01653b40(*(undefined8 *)(param_1 + 0x28),0);
      /*Core.Networking.SessionInfo$$StartSessionInfo*/ func_0x01662044(*(undefined8 *)(param_1 + 0x28),0);
      /*Core.Networking.SessionInfo$$AddGameType*/ func_0x01661fd4(*(undefined8 *)(param_1 + 0x28),uStack_64,0);
      /*Core.Networking.SessionInfo$$AddClientInfo*/ func_0x01661fb0(*(undefined8 *)(param_1 + 0x28),unaff_x19 & 0xffffffff,0);
      uVar4 = /*Core.Networking.SessionInfo$$EndSessionInfo*/ func_0x01661ff8(*(undefined8 *)(param_1 + 0x28),0);
      if (*(long *)(param_1 + 0x28) != 0) {
        /*FlatBuffers.FlatBufferBuilder$$Finish*/ func_0x016cef90(*(long *)(param_1 + 0x28),uVar4,0);
        if (*(long *)(param_1 + 0x28) != 0) {
          unaff_x21 = /*FlatBuffers.FlatBufferBuilder$$CopyByteArray*/ func_0x016cd9b8(*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
          lVar8 = *(long *)(param_1 + 0x30);
          if (lVar8 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
            if (*(int *)(lVar8 + 0x18) != 0) {
              lVar10 = lVar8 + 0x20;
            }
          }
          if (*(long *)(param_1 + 0x10) != 0) {
            plVar9 = *(long **)(*(long *)(param_1 + 0x10) + 0x30);
            uVar4 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar10,0);
            param_1 = 0;
            if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x014a98b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar5 = (**(code **)(*plVar9 + 0x8d8))
                                (plVar9,uVar4,unaff_x21,uStack_68,*(undefined8 *)(*plVar9 + 0x8e0));
              return uVar5;
            }
          }
        }
      }
    }
  }
  auVar20 = func_0x00f78af4();
  uVar5 = auVar20._0_8_;
  pcStack_88 = Atlas_Networking_NetworkLobby__GetLoadoutFromSyncId;
  puVar12 = (undefined8 *)0x3eb4000;
  uVar6 = uVar5;
  uStack_c0 = unaff_x24;
  uStack_b8 = unaff_x23;
  lStack_b0 = unaff_x22;
  uStack_a8 = unaff_x21;
  lStack_a0 = param_1;
  uStack_98 = unaff_x19;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam0000000003eb4a63 & 1) == 0) {
    func_0x00f78a20(0x3d32b48);
    func_0x00f78a20(0x3d32b50);
    func_0x00f78a20(0x3d32b58);
    func_0x00f78a20(0x3d3b4c0);
    func_0x00f78a20(0x3d3b4a0);
    uVar6 = func_0x00f78a20(0x3d3b4a8);
    bRam0000000003eb4a63 = 1;
  }
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  iVar11 = auVar20._8_4_;
  if (*(int *)(uVar5 + 0xf4) != iVar11) {
    if (*(long *)(uVar5 + 0xd0) == 0) goto code_r0x014a9aac;
    /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_150,*(long *)(uVar5 + 0xd0),uRam0000000003d3b4c0);
    puVar12 = &uStack_110;
    unaff_x23 = 0x3d32b50;
    do {
      uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_150,uRam0000000003d32b50);
      if ((uVar6 & 1) == 0) {
        iStack_1a0 = 0x65;
        goto code_r0x014a99f4;
      }
    } while (uStack_128._4_4_ != iVar11);
    uStack_188 = uStack_108;
    uStack_190 = uStack_110;
    uStack_178 = uStack_f8;
    uStack_180 = uStack_100;
    uStack_168 = uStack_e8;
    uStack_170 = uStack_f0;
    uStack_158 = uStack_d8;
    uStack_160 = uStack_e0;
    iStack_1a0 = 0xa3;
code_r0x014a99f4:
    uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_150,uRam0000000003d32b48);
    if (iStack_1a0 == 0x65) {
      uStack_198 = 0;
    }
    else if (iStack_1a0 == 0xa3) {
      extraout_x8[1] = uStack_188;
      *extraout_x8 = uStack_190;
      extraout_x8[3] = uStack_178;
      extraout_x8[2] = uStack_180;
code_r0x014a9a7c:
      extraout_x8[5] = uStack_168;
      extraout_x8[4] = uStack_170;
      extraout_x8[7] = uStack_158;
      extraout_x8[6] = uStack_160;
      return uVar6;
    }
    while( true ) {
      if (*(char *)(uVar5 + 0xa9) == '\0') goto code_r0x014a9a84;
      lVar8 = *(long *)(uVar5 + 0x88);
      uVar5 = 0;
      if (lVar8 != 0) {
        uVar2 = iVar11 - 1;
        if ((long)(ulong)uVar2 < (long)(int)*(uint *)(lVar8 + 0x18)) {
          if (*(uint *)(lVar8 + 0x18) <= uVar2) {
            uVar6 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
          }
          lVar8 = *(long *)(lVar8 + 0x10) + (long)(int)uVar2 * 0x40;
          uVar4 = *(undefined8 *)(lVar8 + 0x20);
          uVar15 = *(undefined8 *)(lVar8 + 0x38);
          uVar14 = *(undefined8 *)(lVar8 + 0x30);
          extraout_x8[1] = *(undefined8 *)(lVar8 + 0x28);
          *extraout_x8 = uVar4;
          extraout_x8[3] = uVar15;
          extraout_x8[2] = uVar14;
          uStack_168 = *(undefined8 *)(lVar8 + 0x48);
          uStack_170 = *(undefined8 *)(lVar8 + 0x40);
          uStack_158 = *(undefined8 *)(lVar8 + 0x58);
          uStack_160 = *(undefined8 *)(lVar8 + 0x50);
          goto code_r0x014a9a7c;
        }
        goto code_r0x014a9a84;
      }
code_r0x014a9aac:
      auVar21 = func_0x00f78af4();
      if (auVar21._8_4_ != 1) break;
      uVar6 = func_0x032ff0c0(auVar21._0_8_,auVar21._8_8_,&uStack_150);
    }
    lVar8 = __Unwind_Resume();
    pcStack_228 = Atlas_Networking_NetworkLobby__GetNetworkPlayerList;
    puVar13 = (undefined8 *)0x3eb4000;
    uVar4 = 0x3d3b4f0;
    puStack_280 = unaff_x28;
    puStack_278 = unaff_x27;
    uStack_270 = unaff_x26;
    uStack_268 = unaff_x25;
    uStack_260 = unaff_x24;
    uStack_258 = unaff_x23;
    puStack_250 = puVar12;
    uStack_248 = auVar20._8_8_;
    uStack_240 = uVar5;
    ppuStack_230 = &puStack_90;
    if ((bRam0000000003eb4a64 & 1) == 0) {
      func_0x00f78a20(0x3d32b60);
      func_0x00f78a20(0x3d32b48);
      func_0x00f78a20(0x3d32b68);
      func_0x00f78a20(0x3d32b50);
      func_0x00f78a20(0x3d32b58);
      func_0x00f78a20(0x3d32b70);
      func_0x00f78a20(0x3d3b508);
      func_0x00f78a20(0x3d3b4c0);
      func_0x00f78a20(0x3d3b530);
      func_0x00f78a20(0x3d3b4f0);
      func_0x00f78a20(0x3d1dc38);
      bRam0000000003eb4a64 = 1;
    }
    uStack_2c0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_368 = 0;
    uStack_370 = 0;
    iStack_378 = 0;
    Atlas_Networking_NetworkLobby__GenerateFallbackSyncIds(lVar8);
    uVar5 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkPlayer>_TypeInfo*/ uRam0000000003d1dc38);
    /*System.Collections.Generic.List<NetworkPlayer>$$.ctor*/ func_0x02412db4(uVar5,uRam0000000003d3b4f0);
    uStack_3a8 = *(undefined8 *)(lVar8 + 0x130);
    uStack_3b0 = *(undefined8 *)(lVar8 + 0x128);
    uStack_398 = *(undefined8 *)(lVar8 + 0x140);
    uStack_3a0 = *(undefined8 *)(lVar8 + 0x138);
    uStack_3c8 = *(undefined8 *)(lVar8 + 0x110);
    uStack_3d0 = *(undefined8 *)(lVar8 + 0x108);
    uStack_3b8 = *(undefined8 *)(lVar8 + 0x120);
    uStack_3c0 = *(undefined8 *)(lVar8 + 0x118);
    uStack_390 = *(undefined8 *)(lVar8 + 0x148);
    uStack_3f8 = *(undefined8 *)(lVar8 + 0xe0);
    uStack_400 = *(undefined8 *)(lVar8 + 0xd8);
    uStack_3e8 = *(undefined8 *)(lVar8 + 0xf0);
    uStack_3f0 = *(undefined8 *)(lVar8 + 0xe8);
    uStack_3d8 = *(undefined8 *)(lVar8 + 0x100);
    uStack_3e0 = *(undefined8 *)(lVar8 + 0xf8);
    if (uVar5 != 0) {
      unaff_x23 = 0x3d3b508;
      uStack_2b0 = uStack_3f0;
      uStack_2a8 = uStack_3e8;
      uStack_2a0 = uStack_3e0;
      uStack_298 = uStack_3d8;
      /*System.Collections.Generic.List<NetworkPlayer>$$Add*/ func_0x02413ab4(uVar5,&uStack_2b0,uRam0000000003d3b508);
      if (*(long *)(lVar8 + 0xd0) != 0) {
        unaff_x26 = 0x3d32b50;
        unaff_x25 = 0x3d3b530;
        unaff_x24 = 0x3d32b68;
        puVar13 = (undefined8 *)0x3d32b60;
        uVar4 = 0x3d32b48;
        /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_340,*(long *)(lVar8 + 0xd0),uRam0000000003d3b4c0);
        unaff_x27 = &uStack_330;
        unaff_x28 = &uStack_3f0;
        while (uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(&uStack_340,uRam0000000003d32b50), (uVar6 & 1) != 0) {
          uStack_3b8 = uStack_2e8;
          uStack_3c0 = uStack_2f0;
          uStack_3a8 = uStack_2d8;
          uStack_3b0 = uStack_2e0;
          uStack_398 = uStack_2c8;
          uStack_3a0 = uStack_2d0;
          uStack_390 = uStack_2c0;
          uStack_3f8 = uStack_328;
          uStack_400 = uStack_330;
          uStack_3e8 = uStack_318;
          uStack_3f0 = uStack_320;
          uStack_3d8 = uStack_308;
          uStack_3e0 = uStack_310;
          uStack_3c8 = uStack_2f8;
          uStack_3d0 = uStack_300;
          uStack_2a8 = uStack_318;
          uStack_2b0 = uStack_320;
          uStack_298 = uStack_308;
          uStack_2a0 = uStack_310;
          /*System.Collections.Generic.List<NetworkPlayer>$$Add*/ func_0x02413ab4(uVar5,&uStack_2b0,uRam0000000003d3b508);
        }
        /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(&uStack_340,uRam0000000003d32b48);
        iStack_378 = 0;
        if (*(long *)(lVar8 + 0x150) != 0) {
          /*System.Collections.Generic.List<NetworkPlayer>$$GetEnumerator*/ func_0x02414620(&uStack_370,*(long *)(lVar8 + 0x150),uRam0000000003d3b530);
          while (uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$MoveNext*/ func_0x01f6d9a8(&uStack_370,uRam0000000003d32b68), (uVar6 & 1) != 0) {
            uStack_3f8 = uStack_358;
            uStack_400 = uStack_360;
            uStack_3e8 = uStack_348;
            uStack_3f0 = uStack_350;
            /*System.Collections.Generic.List<NetworkPlayer>$$Add*/ func_0x02413ab4(uVar5,&uStack_400,uRam0000000003d3b508);
          }
          iStack_378 = iStack_378 + 1;
          uStack_380 = 0x90;
          /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_370,uRam0000000003d32b60);
          return uVar5;
        }
      }
    }
    func_0x00f78af4();
    if (extraout_w1 == 1) {
      plVar9 = (long *)___cxa_begin_catch();
      lVar8 = *plVar9;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkPlayer>$$Dispose*/ func_0x01f6d9a4(&uStack_370,*puVar13);
      if (lVar8 == 0) {
        return uVar5;
      }
      func_0x00f78ac0(lVar8,0);
    }
    uVar7 = __Unwind_Resume();
    pcStack_408 = Atlas_Networking_NetworkLobby__GenerateFallbackSyncIds;
    lStack_478 = *(long *)PTR_03a5d648;
    lVar10 = 0x3eb4000;
    uVar6 = uVar7;
    puStack_460 = unaff_x28;
    puStack_458 = unaff_x27;
    uStack_450 = unaff_x26;
    uStack_448 = unaff_x25;
    uStack_440 = unaff_x24;
    uStack_438 = unaff_x23;
    puStack_430 = puVar13;
    uStack_428 = uVar4;
    lStack_420 = lVar8;
    uStack_418 = uVar5;
    pppuStack_410 = &ppuStack_230;
    if ((bRam0000000003eb4a65 & 1) == 0) {
      func_0x00f78a20(0x3d32b48);
      func_0x00f78a20(0x3d32b50);
      func_0x00f78a20(0x3d32b58);
      func_0x00f78a20(0x3d3c6c0);
      func_0x00f78a20(0x3d3b4c0);
      func_0x00f78a20(0x3d3c6e0);
      func_0x00f78a20(0x3d3c6b8);
      func_0x00f78a20(0x3d3b540);
      func_0x00f78a20(0x3d3c6f0);
      func_0x00f78a20(0x3d3b4d8);
      func_0x00f78a20(0x3d3c6f8);
      func_0x00f78a20(0x3d3b4e0);
      func_0x00f78a20(0x3d3b4e8);
      uVar6 = func_0x00f78a20(0x3d1df80);
      bRam0000000003eb4a65 = 1;
    }
    if (*(int *)(uVar7 + 0x100) == 0) {
      lVar10 = func_0x00f78aec(/*System.Collections.Generic.List<uint>_TypeInfo*/ uRam0000000003d1df80);
      /*System.Collections.Generic.List<uint>$$.ctor*/ func_0x0247dc38(lVar10,8,uRam0000000003d3c6b8);
      if (lVar10 == 0) goto code_r0x014aa1ac;
      /*System.Collections.Generic.List<uint>$$Add*/ func_0x0247e820(lVar10,*(undefined4 *)(uVar7 + 0xf4),uRam0000000003d3c6c0);
      if (*(long *)(uVar7 + 0xd0) == 0) goto code_r0x014aa1ac;
      puVar13 = &uStack_4a0;
      /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$GetEnumerator*/ func_0x0241187c(&uStack_620,*(long *)(uVar7 + 0xd0),uRam0000000003d3b4c0);
      uStack_4c8 = uStack_5b8;
      uStack_4d0 = uStack_5c0;
      uStack_4b8 = uStack_5a8;
      uStack_4c0 = uStack_5b0;
      uStack_4b0 = uStack_5a0;
      uStack_504 = uStack_5f4;
      uStack_510 = uStack_600;
      uStack_4f8 = uStack_5e8;
      uStack_500 = uStack_5f0;
      uStack_4e8 = uStack_5d8;
      uStack_4f0 = uStack_5e0;
      uStack_4d8 = uStack_5c8;
      uStack_4e0 = uStack_5d0;
      auStack_530[0] = uStack_620;
      while (uVar5 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$MoveNext*/ func_0x01f6d6f4(auStack_530,uRam0000000003d32b50), (uVar5 & 1) != 0) {
        if ((int)uStack_4f8 != 0) {
          iStack_590 = 0x15e;
          goto code_r0x014a9fd8;
        }
        /*System.Collections.Generic.List<uint>$$Add*/ func_0x0247e820(lVar10,uStack_504,uRam0000000003d3c6c0);
      }
      iStack_590 = 0x84;
code_r0x014a9fd8:
      uVar6 = /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(auStack_530,uRam0000000003d32b48);
      if (iStack_590 != 0x15e) {
        if (iStack_590 != 0x84) goto code_r0x014aa008;
        uStack_588 = 0;
        goto code_r0x014aa008;
      }
    }
code_r0x014a9ed4:
    if (*(long *)PTR_03a5d648 == lStack_478) {
      return uVar6;
    }
    do {
      ___stack_chk_fail();
      if (extraout_w1_00 != 1) {
code_r0x014aa1f0:
        lVar8 = __Unwind_Resume();
        return (ulong)*(uint *)(lVar8 + 0x9c);
      }
      plVar9 = (long *)___cxa_begin_catch();
      lVar8 = *plVar9;
      ___cxa_end_catch();
      /*System.Collections.Generic.List.Enumerator<NetworkLobbyPlayerData>$$Dispose*/ func_0x01f6d6f0(auStack_530,uRam0000000003d32b48);
      if (lVar8 != 0) {
        func_0x00f78ac0(lVar8,0);
        goto code_r0x014aa1f0;
      }
code_r0x014aa008:
      uVar6 = /*System.Collections.Generic.List<uint>$$Sort*/ func_0x02480280(lVar10,uRam0000000003d3c6e0);
      if (*(long *)(uVar7 + 0x150) != 0) {
        iVar11 = *(int *)(*(long *)(uVar7 + 0x150) + 0x18) + 1;
        uVar2 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar2) {
          lVar8 = 0;
          do {
            if (uVar2 <= (uint)lVar8) {
              uVar6 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            if (*(int *)(*(long *)(lVar10 + 0x10) + lVar8 * 4 + 0x20) == *(int *)(uVar7 + 0xf4)) {
              *(uint *)(uVar7 + 0x100) = iVar11 + (uint)lVar8;
              break;
            }
            uVar2 = *(uint *)(lVar10 + 0x18);
            lVar8 = lVar8 + 1;
          } while ((int)lVar8 < (int)uVar2);
        }
        lVar8 = *(long *)(uVar7 + 0xd0);
        if (lVar8 != 0) {
          uVar5 = 0;
          do {
            if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar5) goto code_r0x014a9ed4;
            if (*(uint *)(lVar8 + 0x18) <= uVar5) {
              uVar6 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
            }
            lVar8 = *(long *)(lVar8 + 0x10) + uVar5 * 0x78;
            uStack_498 = *(undefined8 *)(lVar8 + 0x28);
            uStack_4a0 = *(undefined8 *)(lVar8 + 0x20);
            uVar4 = *(undefined8 *)(lVar8 + 0x2c);
            *(undefined8 *)((long)puVar13 + 0x14) = *(undefined8 *)(lVar8 + 0x34);
            *(undefined8 *)((long)puVar13 + 0xc) = uVar4;
            iVar1 = *(int *)(lVar8 + 0x3c);
            uVar4 = *(undefined8 *)(lVar8 + 0x40);
            uVar3 = *(undefined4 *)(lVar8 + 0x4c);
            uStack_558 = *(undefined8 *)(lVar8 + 0x78);
            uStack_560 = *(undefined8 *)(lVar8 + 0x70);
            uStack_548 = *(undefined8 *)(lVar8 + 0x88);
            uStack_550 = *(undefined8 *)(lVar8 + 0x80);
            uStack_540 = *(undefined8 *)(lVar8 + 0x90);
            uStack_578 = *(undefined8 *)(lVar8 + 0x58);
            uStack_580 = *(undefined8 *)(lVar8 + 0x50);
            uStack_568 = *(undefined8 *)(lVar8 + 0x68);
            uStack_570 = *(undefined8 *)(lVar8 + 0x60);
            uVar2 = *(uint *)(lVar10 + 0x18);
            if (0 < (int)uVar2) {
              lVar8 = 0;
              do {
                if (uVar2 <= (uint)lVar8) {
                  uVar6 = /*System.ThrowHelper$$ThrowArgumentOutOfRangeException*/ func_0x029efa64(0);
                }
                if (*(int *)(*(long *)(lVar10 + 0x10) + lVar8 * 4 + 0x20) == iVar1) {
                  if (*(long *)(uVar7 + 0xd0) == 0) goto code_r0x014aa1ac;
                  iStack_5f8 = iVar11 + (uint)lVar8;
                  uStack_618 = (undefined4)uStack_498;
                  uStack_620 = uStack_4a0;
                  uStack_60c = (undefined4)*(undefined8 *)((long)puVar13 + 0x14);
                  uStack_608 = (undefined4)((ulong)*(undefined8 *)((long)puVar13 + 0x14) >> 0x20);
                  uStack_614 = (undefined4)*(undefined8 *)((long)puVar13 + 0xc);
                  uStack_610 = (undefined4)((ulong)*(undefined8 *)((long)puVar13 + 0xc) >> 0x20);
                  uStack_5c8 = uStack_558;
                  uStack_5d0 = uStack_560;
                  uStack_5b8 = uStack_548;
                  uStack_5c0 = uStack_550;
                  uStack_5b0 = uStack_540;
                  uStack_5e8 = uStack_578;
                  uStack_5f0 = uStack_580;
                  uStack_5d8 = uStack_568;
                  uStack_5e0 = uStack_570;
                  iStack_604 = iVar1;
                  uStack_600 = uVar4;
                  uStack_5f4 = uVar3;
                  uVar6 = /*System.Collections.Generic.List<NetworkLobbyPlayerData>$$set_Item*/ func_0x024107e0(*(long *)(uVar7 + 0xd0),uVar5,&uStack_620,
                                          uRam0000000003d3b4e8);
                  break;
                }
                uVar2 = *(uint *)(lVar10 + 0x18);
                lVar8 = lVar8 + 1;
              } while ((int)lVar8 < (int)uVar2);
            }
            uVar5 = uVar5 + 1;
            lVar8 = *(long *)(uVar7 + 0xd0);
          } while (lVar8 != 0);
        }
      }
code_r0x014aa1ac:
      func_0x00f78af4();
    } while( true );
  }
  uVar14 = *(undefined8 *)(uVar5 + 0x110);
  uVar4 = *(undefined8 *)(uVar5 + 0x108);
  uVar16 = *(undefined8 *)(uVar5 + 0x120);
  uVar15 = *(undefined8 *)(uVar5 + 0x118);
  uVar17 = *(undefined8 *)(uVar5 + 0x128);
  uVar19 = *(undefined8 *)(uVar5 + 0x140);
  uVar18 = *(undefined8 *)(uVar5 + 0x138);
  extraout_x8[5] = *(undefined8 *)(uVar5 + 0x130);
  extraout_x8[4] = uVar17;
  extraout_x8[7] = uVar19;
  extraout_x8[6] = uVar18;
  extraout_x8[3] = uVar16;
  extraout_x8[2] = uVar15;
LAB_014a9a90:
  extraout_x8[1] = uVar14;
  *extraout_x8 = uVar4;
  return uVar6;
code_r0x014a9a84:
  uVar4 = 0;
  uVar14 = 0;
  extraout_x8[5] = 0;
  extraout_x8[4] = 0;
  extraout_x8[7] = 0;
  extraout_x8[6] = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  goto LAB_014a9a90;
}



// ============================================================
// RVA: 0x14ab57c | Atlas.Networking.NetworkLobbySessionData.ReadPlayerSessionData
// ============================================================

void Atlas_Networking_NetworkLobbySessionData__ReadPlayerSessionData
               (long param_1,long param_2,undefined1 *param_3,undefined8 *param_4,
               undefined1 *param_5,undefined8 *param_6,undefined1 *param_7,undefined1 *param_8,
               undefined4 *param_9)

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
  code *pcVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar15;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  long *plVar30;
  long lVar31;
  undefined1 auVar32 [16];
  undefined1 auStack_210 [16];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_1f0;
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [16];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined1 auStack_148 [16];
  uint uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR_03a5d648;
  if ((bRam0000000003eb4a75 & 1) == 0) {
    func_0x00f78a20(0x3d3b490);
    func_0x00f78a20(0x3d3b480);
    func_0x00f78a20(0x3d1dc28);
    func_0x00f78a20(0x3d3e658);
    func_0x00f78a20(0x3d3e8e0);
    func_0x00f78a20(0x3d3ed08);
    func_0x00f78a20(0x3d3e8b0);
    func_0x00f78a20(0x3d3e660);
    func_0x00f78a20(0x3d3e8e8);
    bRam0000000003eb4a75 = 1;
  }
  auStack_148._0_8_ = 0;
  auStack_148._8_8_ = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  auStack_170._0_8_ = 0;
  auStack_170._8_8_ = 0;
  auStack_180._0_8_ = 0;
  auStack_180._8_8_ = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  auStack_1d0._0_8_ = 0;
  auStack_1d0._8_8_ = 0;
  auStack_1e0._0_8_ = 0;
  auStack_1e0._8_8_ = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  auStack_210._0_8_ = 0;
  auStack_210._8_8_ = 0;
  *param_3 = 0;
  *param_5 = 0;
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  param_4[5] = 0;
  param_4[4] = 0;
  param_4[7] = 0;
  param_4[6] = 0;
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  lVar29 = *(long *)(param_1 + 0x30);
  if (lVar29 == 0) {
    lVar31 = 0;
  }
  else {
    lVar31 = 0;
    if (*(int *)(lVar29 + 0x18) != 0) {
      lVar31 = lVar29 + 0x20;
    }
  }
  uStack_134 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
code_r0x014abd50:
    func_0x00f78af4();
  }
  else {
    plVar30 = *(long **)(*(long *)(param_1 + 0x10) + 0x30);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    /*Unity.Collections.FixedString64Bytes$$.ctor*/ func_0x02fd8608(&uStack_130,*(undefined8 *)(param_2 + 0x10),0);
    uVar20 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar31,0);
    if (plVar30 == (long *)0x0) goto code_r0x014abd50;
    uStack_a8 = uStack_128;
    uStack_b0 = uStack_130;
    uStack_98 = uStack_118;
    uStack_a0 = uStack_120;
    uStack_88 = uStack_108;
    uStack_90 = uStack_110;
    uStack_78 = uStack_f8;
    uStack_80 = uStack_100;
    iVar14 = (**(code **)(*plVar30 + 0x918))
                       (plVar30,&uStack_b0,uVar20,&uStack_134,*(undefined8 *)(*plVar30 + 0x920));
    auVar11._8_8_ = auStack_210._8_8_;
    auVar11._0_8_ = auStack_210._0_8_;
    auVar10._8_8_ = auStack_210._8_8_;
    auVar10._0_8_ = auStack_210._0_8_;
    auVar9._8_8_ = auStack_1e0._8_8_;
    auVar9._0_8_ = auStack_1e0._0_8_;
    auVar8._8_8_ = auStack_1e0._8_8_;
    auVar8._0_8_ = auStack_1e0._0_8_;
    auVar7._8_8_ = auStack_1d0._8_8_;
    auVar7._0_8_ = auStack_1d0._0_8_;
    auVar6._8_8_ = auStack_1d0._8_8_;
    auVar6._0_8_ = auStack_1d0._0_8_;
    auVar5._8_8_ = auStack_148._8_8_;
    auVar5._0_8_ = auStack_148._0_8_;
    auVar4._8_8_ = auStack_148._8_8_;
    auVar4._0_8_ = auStack_148._0_8_;
    auVar3._8_8_ = auStack_170._8_8_;
    auVar3._0_8_ = auStack_170._0_8_;
    auVar2._8_8_ = auStack_170._8_8_;
    auVar2._0_8_ = auStack_170._0_8_;
    auVar1._8_8_ = auStack_180._8_8_;
    auVar1._0_8_ = auStack_180._0_8_;
    auVar32._8_8_ = auStack_180._8_8_;
    auVar32._0_8_ = auStack_180._0_8_;
    if (iVar14 == 0) {
      if (*(long *)(param_1 + 0x30) != 0) {
        auStack_180 = auVar32;
        auStack_170 = auVar2;
        auStack_148 = auVar4;
        auStack_1d0 = auVar6;
        auStack_1e0 = auVar8;
        auStack_210 = auVar10;
        if ((uStack_134 == 0) ||
           (auStack_180 = auVar1, auStack_170 = auVar3, auStack_148 = auVar5, auStack_1d0 = auVar7,
           auStack_1e0 = auVar9, auStack_210 = auVar11,
           (long)*(int *)(*(long *)(param_1 + 0x30) + 0x18) <= (long)(ulong)uStack_134))
        goto code_r0x014ab750;
        if (*(long *)(param_1 + 0x20) != 0) {
          /*FlatBuffers.ByteBuffer$$Reset*/ func_0x016cc1bc(*(long *)(param_1 + 0x20),0);
          if (*(long *)(param_1 + 0x20) != 0) {
            /*FlatBuffers.ByteBuffer$$PutByteArray*/ func_0x016ccf1c(*(long *)(param_1 + 0x20),uStack_134,*(undefined8 *)(param_1 + 0x30),0);
            auStack_148 = /*Core.Networking.SessionInfo$$GetRootAsSessionInfo*/ func_0x01661d0c(*(undefined8 *)(param_1 + 0x20),0);
            uVar15 = /*Core.Networking.SessionInfo$$get_GameType*/ func_0x01661d7c(auStack_148,0);
            *param_9 = uVar15;
            /*Core.Networking.SessionInfo$$get_ClientInfo*/ func_0x01661dd0(&uStack_b0,auStack_148,0);
            uStack_158 = uStack_a8;
            uStack_160 = uStack_b0;
            uStack_150 = uStack_a0;
            if ((uStack_a0 & 0xff) != 0) {
              /*Core.Networking.SessionInfo$$get_ClientInfo*/ func_0x01661dd0(&uStack_b0,auStack_148,0);
              uStack_158 = uStack_a8;
              uStack_160 = uStack_b0;
              uStack_150 = uStack_a0;
              auStack_180 = /*System.Nullable<ClientSessionInfo>$$get_Value*/ func_0x0261ccb0(&uStack_160,uRam0000000003d3e660);
              /*Core.Networking.ClientSessionInfo$$get_Visuals*/ func_0x016539ac(&uStack_b0,auStack_180,0);
              uStack_198 = uStack_a8;
              uStack_1a0 = uStack_b0;
              uStack_190 = uStack_a0;
              auStack_170 = /*System.Nullable<SessionKartVisuals>$$get_Value*/ func_0x02660df4(&uStack_1a0,uRam0000000003d3ed08);
              /*Core.Networking.SessionInfo$$get_ClientInfo*/ func_0x01661dd0(&uStack_b0,auStack_148,0);
              uStack_158 = uStack_a8;
              uStack_160 = uStack_b0;
              uStack_150 = uStack_a0;
              auVar32 = /*System.Nullable<ClientSessionInfo>$$get_Value*/ func_0x0261ccb0(&uStack_160,uRam0000000003d3e660);
              auStack_180 = auVar32;
              uVar13 = /*Core.Networking.ClientSessionInfo$$get_IsReady*/ func_0x01653958(auStack_180,0);
              *param_7 = uVar13;
              /*Core.Networking.SessionInfo$$get_ClientInfo*/ func_0x01661dd0(&uStack_b0,auStack_148,0);
              uStack_158 = uStack_a8;
              uStack_160 = uStack_b0;
              uStack_150 = uStack_a0;
              auVar32 = /*System.Nullable<ClientSessionInfo>$$get_Value*/ func_0x0261ccb0(&uStack_160,uRam0000000003d3e660);
              auStack_180 = auVar32;
              uVar13 = /*Core.Networking.ClientSessionInfo$$get_IsInLobby*/ func_0x01653904(auStack_180,0);
              *param_8 = uVar13;
              uVar20 = /*Core.Networking.SessionKartVisuals$$get_Kart*/ func_0x01662118(auStack_170,0);
              uVar20 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(param_1,uVar20);
              uVar21 = /*Core.Networking.SessionKartVisuals$$get_Character*/ func_0x016620c4(auStack_170,0);
              uVar21 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(param_1,uVar21);
              uVar22 = /*Core.Networking.SessionKartVisuals$$get_Antenna*/ func_0x016621c0(auStack_170,0);
              uVar22 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(param_1,uVar22);
              uVar23 = /*Core.Networking.SessionKartVisuals$$get_Glider*/ func_0x0166216c(auStack_170,0);
              uVar23 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(param_1,uVar23);
              uVar24 = /*Core.Networking.SessionKartVisuals$$get_Wheels*/ func_0x01662214(auStack_170,0);
              uVar24 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(param_1,uVar24);
              uVar25 = /*Core.Networking.SessionKartVisuals$$get_Extra1*/ func_0x01662268(auStack_170,0);
              uVar25 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(param_1,uVar25);
              uVar26 = /*Core.Networking.SessionKartVisuals$$get_Extra2*/ func_0x016622bc(auStack_170,0);
              uVar26 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(param_1,uVar26);
              uVar27 = /*Core.Networking.SessionKartVisuals$$get_Extra3*/ func_0x01662310(auStack_170,0);
              uVar27 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(param_1,uVar27);
              *param_4 = uVar21;
              param_4[1] = uVar20;
              param_4[2] = uVar23;
              param_4[3] = uVar22;
              param_4[4] = uVar24;
              param_4[5] = uVar25;
              param_4[6] = uVar26;
              param_4[7] = uVar27;
              *param_3 = 1;
            }
            /*Core.Networking.SessionInfo$$get_HostInfo*/ func_0x01661e78(&uStack_b0,auStack_148,0);
            if ((char)uStack_a0 != '\0') {
              if (*(long *)(param_1 + 0x10) == 0) {
                func_0x00f78af4();
                goto code_r0x014abef4;
              }
              plVar30 = *(long **)(*(long *)(param_1 + 0x10) + 0x30);
              /*Unity.Collections.FixedString64Bytes$$op_Implicit*/ func_0x02fd8c8c(&uStack_b0,*(undefined8 *)(param_2 + 0x10),0);
              uStack_128 = uStack_a8;
              uStack_130 = uStack_b0;
              uStack_118 = uStack_98;
              uStack_120 = uStack_a0;
              uStack_108 = uStack_88;
              uStack_110 = uStack_90;
              uStack_f8 = uStack_78;
              uStack_100 = uStack_80;
              if (plVar30 == (long *)0x0) {
                func_0x00f78af4();
                goto code_r0x014abef4;
              }
              uVar28 = (**(code **)(*plVar30 + 0x948))
                                 (plVar30,&uStack_b0,*(undefined8 *)(*plVar30 + 0x950));
              if ((uVar28 & 1) != 0) {
                /*Core.Networking.SessionInfo$$get_HostInfo*/ func_0x01661e78(&uStack_b0,auStack_148,0);
                uStack_1b8 = uStack_a8;
                uStack_1c0 = uStack_b0;
                uStack_1b0 = uStack_a0;
                auStack_1e0 = /*System.Nullable<HostSessionInfo>$$get_Value*/ func_0x02654584(&uStack_1c0,uRam0000000003d3e8e8);
                /*Core.Networking.HostSessionInfo$$get_HostConfig*/ func_0x01656404(&uStack_b0,auStack_1e0,0);
                uStack_1f8 = uStack_a8;
                uStack_200 = uStack_b0;
                uStack_1f0 = uStack_a0;
                auStack_1d0 = /*System.Nullable<HostConfig>$$get_Value*/ func_0x026528d8(&uStack_200,uRam0000000003d3e8b0);
                if (*(long *)(param_1 + 0x10) == 0) {
                  func_0x00f78af4();
                  goto code_r0x014abef4;
                }
                plVar30 = *(long **)(*(long *)(param_1 + 0x10) + 0x30);
                if (plVar30 == (long *)0x0) {
                  func_0x00f78af4();
                  goto code_r0x014abef4;
                }
                (**(code **)(*plVar30 + 0x888))
                          (&uStack_b0,plVar30,*(undefined8 *)(*plVar30 + 0x890));
                uStack_e8 = uStack_a8;
                uStack_f0 = uStack_b0;
                uStack_d8 = uStack_98;
                uStack_e0 = uStack_a0;
                uStack_c8 = uStack_88;
                uStack_d0 = uStack_90;
                uStack_b8 = uStack_78;
                uStack_c0 = uStack_80;
                uVar20 = /*Unity.Collections.FixedString64Bytes$$ToString*/ func_0x02fd8584(&uStack_f0,0);
                uVar21 = /*Core.Networking.HostConfig$$get_SessionId*/ func_0x0165510c(auStack_1d0,0);
                uVar28 = /*System.String$$op_Inequality*/ func_0x029bd9d4(uVar21,uVar20,0);
                if ((uVar28 & 1) == 0) {
                  lVar29 = func_0x00f78aec(/*System.Collections.Generic.List<NetworkLoadout>_TypeInfo*/ uRam0000000003d1dc28);
                  /*System.Collections.Generic.List<NetworkLoadout>$$.ctor*/ func_0x0240d09c(lVar29,uRam0000000003d3b480);
                  iVar14 = 0;
                  while( true ) {
                    auVar32 = /*System.Nullable<HostSessionInfo>$$get_Value*/ func_0x02654584(&uStack_1c0,uRam0000000003d3e8e8);
                    auStack_1e0 = auVar32;
                    iVar16 = /*Core.Networking.HostSessionInfo$$get_AiVisualsLength*/ func_0x01656564(auStack_1e0,0);
                    if (iVar16 <= iVar14) break;
                    auVar32 = /*System.Nullable<HostSessionInfo>$$get_Value*/ func_0x02654584(&uStack_1c0,uRam0000000003d3e8e8);
                    auStack_1e0 = auVar32;
                    /*Core.Networking.HostSessionInfo$$AiVisuals*/ func_0x016564ac(&uStack_b0,auStack_1e0,iVar14,0);
                    uStack_198 = uStack_a8;
                    uStack_1a0 = uStack_b0;
                    uStack_190 = uStack_a0;
                    auVar32 = /*System.Nullable<SessionKartVisuals>$$get_Value*/ func_0x02660df4(&uStack_1a0,uRam0000000003d3ed08);
                    auStack_210 = auVar32;
                    uVar20 = /*Core.Networking.SessionKartVisuals$$get_Kart*/ func_0x01662118(auStack_210,0);
                    uVar20 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(param_1,uVar20);
                    uVar21 = /*Core.Networking.SessionKartVisuals$$get_Character*/ func_0x016620c4(auStack_210,0);
                    uVar21 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(param_1,uVar21);
                    uVar22 = /*Core.Networking.SessionKartVisuals$$get_Antenna*/ func_0x016621c0(auStack_210,0);
                    uVar22 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(param_1,uVar22);
                    uVar23 = /*Core.Networking.SessionKartVisuals$$get_Glider*/ func_0x0166216c(auStack_210,0);
                    uVar28 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(param_1,uVar23);
                    uVar23 = /*Core.Networking.SessionKartVisuals$$get_Wheels*/ func_0x01662214(auStack_210,0);
                    uVar23 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(param_1,uVar23);
                    uVar24 = /*Core.Networking.SessionKartVisuals$$get_Extra1*/ func_0x01662268(auStack_210,0);
                    uVar24 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(param_1,uVar24);
                    uVar25 = /*Core.Networking.SessionKartVisuals$$get_Extra2*/ func_0x016622bc(auStack_210,0);
                    uVar25 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(param_1,uVar25);
                    uVar26 = /*Core.Networking.SessionKartVisuals$$get_Extra3*/ func_0x01662310(auStack_210,0);
                    uVar26 = /*Atlas.Networking.NetworkLobbySessionData$$KeyToString*/ func_0x014ac5b0(param_1,uVar26);
                    if (lVar29 == 0) goto code_r0x014abd58;
                    uStack_b0 = uVar21;
                    uStack_a8 = uVar20;
                    uStack_a0 = uVar28;
                    uStack_98 = uVar22;
                    uStack_90 = uVar23;
                    uStack_88 = uVar24;
                    uStack_80 = uVar25;
                    uStack_78 = uVar26;
                    /*System.Collections.Generic.List<NetworkLoadout>$$Add*/ func_0x0240ddcc(lVar29,&uStack_b0,uRam0000000003d3b490);
                    iVar14 = iVar14 + 1;
                  }
                  uVar15 = /*Core.Networking.HostConfig$$get_NumberOfAi*/ func_0x016552f0(auStack_1d0,0);
                  uVar17 = /*Core.Networking.HostConfig$$get_TimeLimit*/ func_0x01655248(auStack_1d0,0);
                  uVar18 = /*Core.Networking.HostConfig$$get_NumberOfLaps*/ func_0x0165529c(auStack_1d0,0);
                  uVar19 = /*Core.Networking.HostConfig$$get_MapKey*/ func_0x016551f4(auStack_1d0,0);
                  *(undefined4 *)param_6 = uVar19;
                  *(undefined4 *)((long)param_6 + 4) = uVar17;
                  *(undefined4 *)(param_6 + 1) = uVar18;
                  *(undefined4 *)((long)param_6 + 0xc) = uVar15;
                  param_6[2] = lVar29;
                  *param_5 = 1;
                }
              }
            }
            goto code_r0x014ab750;
          }
        }
      }
      goto code_r0x014abd50;
    }
code_r0x014ab750:
    if (*(long *)PTR_03a5d648 == lStack_70) {
      return;
    }
  }
  ___stack_chk_fail();
code_r0x014abd58:
  func_0x00f78af4();
code_r0x014abef4:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x14abef8);
  (*pcVar12)();
}



// ============================================================
// RVA: 0x14abf0c | Atlas.Networking.NetworkLobbySessionData.VerifyOwnSessionData
// ============================================================

ulong Atlas_Networking_NetworkLobbySessionData__VerifyOwnSessionData
                (long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int iStack_34;
  
  lVar6 = *(long *)(param_1 + 0x30);
  if (lVar6 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(int *)(lVar6 + 0x18) != 0) {
      lVar2 = lVar6 + 0x20;
    }
  }
  iStack_34 = 0;
  uVar5 = param_3;
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x30);
    uVar3 = /*System.IntPtr$$op_Explicit*/ func_0x02aeb1f8(lVar2,0);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x8e8))(plVar7,uVar3,&iStack_34,*(undefined8 *)(*plVar7 + 0x8f0));
      iVar1 = iStack_34;
      if (iStack_34 == 0) {
        uStack_68 = param_2[9];
        uStack_70 = param_2[8];
        uStack_58 = param_2[0xb];
        uStack_60 = param_2[10];
        uStack_48 = param_2[0xd];
        uStack_50 = param_2[0xc];
        uStack_40 = param_2[0xe];
        uStack_a8 = param_2[1];
        uStack_b0 = *param_2;
        uStack_98 = param_2[3];
        uStack_a0 = param_2[2];
        uStack_88 = param_2[5];
        uStack_90 = param_2[4];
        uStack_78 = param_2[7];
        uStack_80 = param_2[6];
        Atlas_Networking_NetworkLobbySessionData__SetLocalPlayerSessionData
                  (param_1,&uStack_b0,param_3,0);
      }
      return (ulong)(iVar1 != 0);
    }
  }
  auVar8 = func_0x00f78af4();
  lVar6 = auVar8._0_8_;
  if ((bRam0000000003eb4a71 & 1) == 0) {
    func_0x00f78a20(0x3d3ebe0);
    bRam0000000003eb4a71 = 1;
  }
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  /*System.Nullable<Player>$$.ctor*/ func_0x0265d8a4(&uStack_108,auVar8._8_8_,uVar5,uRam0000000003d3ebe0);
  *(undefined8 *)(lVar6 + 0xb8) = uStack_100;
  *(undefined8 *)(lVar6 + 0xb0) = uStack_108;
  *(undefined8 *)(lVar6 + 0xc0) = uStack_f8;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  /*System.Nullable<Player>$$.ctor*/ func_0x0265d8a4(&uStack_120,auVar8._8_8_,uVar5,uRam0000000003d3ebe0);
  uStack_138 = uStack_118;
  uStack_140 = uStack_120;
  uStack_130 = uStack_110;
  uVar4 = Atlas_Networking_NetworkLobby__SetLocalPlayer(lVar6,&uStack_140);
  return uVar4;
}



// ============================================================
// RVA: 0x14ac5b0 | Atlas.Networking.NetworkLobbySessionData.KeyToString
// ============================================================
// [DECOMPILE_FAILED]

// ============================================================
// RVA: 0x14ac63c | Atlas.Networking.NetworkLobbySessionData.StringToKey
// ============================================================
// [DECOMPILE_FAILED]

